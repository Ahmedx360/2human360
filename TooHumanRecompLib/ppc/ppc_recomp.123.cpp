#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_827F63F0"))) PPC_WEAK_FUNC(sub_827F63F0);
PPC_FUNC_IMPL(__imp__sub_827F63F0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x827f5f20
	sub_827F5F20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F63F8"))) PPC_WEAK_FUNC(sub_827F63F8);
PPC_FUNC_IMPL(__imp__sub_827F63F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,80(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// lwz r11,1452(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1452);
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm. r9,r10,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x827f6444
	if (ctx.cr0.eq) goto loc_827F6444;
	// lwz r9,620(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 620);
	// clrlwi r10,r10,1
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lwz r9,624(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// lwz r11,628(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 628);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_827F6444:
	// addi r11,r11,620
	ctx.r11.s64 = ctx.r11.s64 + 620;
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// lfs f10,908(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 908);
	ctx.f10.f64 = double(temp.f32);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f13,-8(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// stfs f12,-16(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f11,f13,f13,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmadds f11,f12,f12,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f11.f64));
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// bne cr6,0x827f64c0
	if (!ctx.cr6.eq) goto loc_827F64C0;
	// lwz r9,-16(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// lwz r8,-12(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// lwz r7,-8(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// stw r9,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r9.u32);
	// lfs f12,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f12.f64 = double(temp.f32);
	// stw r8,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r8.u32);
	// lfs f0,-12(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	ctx.f0.f64 = double(temp.f32);
	// stw r7,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r7.u32);
	// lfs f13,-8(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// b 0x827f64f8
	goto loc_827F64F8;
loc_827F64C0:
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lfs f9,16668(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16668);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f11,f9
	ctx.cr6.compare(ctx.f11.f64, ctx.f9.f64);
	// bge cr6,0x827f64e4
	if (!ctx.cr6.lt) goto loc_827F64E4;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lfs f12,904(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f12.f64 = double(temp.f32);
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
	// b 0x827f64f8
	goto loc_827F64F8;
loc_827F64E4:
	// fsqrts f11,f11
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(sqrt(ctx.f11.f64)));
	// fdivs f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 / ctx.f11.f64));
	// fmuls f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmuls f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
loc_827F64F8:
	// lfs f11,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// lfs f9,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// stfs f13,-8(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// fsubs f13,f9,f12
	ctx.f13.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// stfs f13,-16(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// fsubs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lwz r9,-16(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// lwz r8,-12(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// lwz r11,-8(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F6548"))) PPC_WEAK_FUNC(sub_827F6548);
PPC_FUNC_IMPL(__imp__sub_827F6548) {
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
	// bl 0x82833180
	ctx.lr = 0x827F6560;
	sub_82833180(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// addi r7,r11,9992
	ctx.r7.s64 = ctx.r11.s64 + 9992;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,-27328(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27328);
	ctx.f0.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f13,16540(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16540);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stfs f13,40(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f0,76(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// stfs f13,72(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// lfs f0,904(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// stfs f0,88(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// stfs f0,104(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// stfs f0,108(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// stfs f0,124(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
	// stfs f0,128(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// stfs f0,132(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// lwz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// rlwimi r9,r10,30,0,1
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 30) & 0xC0000000) | (ctx.r9.u64 & 0xFFFFFFFF3FFFFFFF);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F6600"))) PPC_WEAK_FUNC(sub_827F6600);
PPC_FUNC_IMPL(__imp__sub_827F6600) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x827F6608;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x827f6684
	if (ctx.cr6.eq) goto loc_827F6684;
	// lwz r30,80(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x829bd3a8
	ctx.lr = 0x827F6628;
	sub_829BD3A8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827f663c
	if (ctx.cr6.eq) goto loc_827F663C;
	// lwz r4,80(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x827f6640
	goto loc_827F6640;
loc_827F663C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_827F6640:
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x827F6650;
	sub_829B9720(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x829bd3a8
	ctx.lr = 0x827F6658;
	sub_829BD3A8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827f666c
	if (ctx.cr6.eq) goto loc_827F666C;
	// lwz r4,80(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x827f6670
	goto loc_827F6670;
loc_827F666C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_827F6670:
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x827F667C;
	sub_829B9720(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x829bd3a8
	ctx.lr = 0x827F6684;
	sub_829BD3A8(ctx, base);
loc_827F6684:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F6690"))) PPC_WEAK_FUNC(sub_827F6690);
PPC_FUNC_IMPL(__imp__sub_827F6690) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x827F6698;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r31,r29,40
	ctx.r31.s64 = ctx.r29.s64 + 40;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,56(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x827f66d8
	if (!ctx.cr6.gt) goto loc_827F66D8;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_827F66BC:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r30
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x827f6700
	if (ctx.cr6.eq) goto loc_827F6700;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x827f66bc
	if (ctx.cr6.lt) goto loc_827F66BC;
loc_827F66D8:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332d50
	ctx.lr = 0x827F66EC;
	sub_82332D50(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827f6700
	if (ctx.cr0.eq) goto loc_827F6700;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
loc_827F6700:
	// lwz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827f671c
	if (ctx.cr6.eq) goto loc_827F671C;
	// lwz r10,1412(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1412);
	// lwz r11,1412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1412);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x827f6720
	if (ctx.cr6.gt) goto loc_827F6720;
loc_827F671C:
	// stw r30,36(r29)
	PPC_STORE_U32(ctx.r29.u32 + 36, ctx.r30.u32);
loc_827F6720:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F6728"))) PPC_WEAK_FUNC(sub_827F6728);
PPC_FUNC_IMPL(__imp__sub_827F6728) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x827F6730;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r29,r28,40
	ctx.r29.s64 = ctx.r28.s64 + 40;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,56(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827f6798
	if (!ctx.cr6.gt) goto loc_827F6798;
	// li r30,0
	ctx.r30.s64 = 0;
loc_827F6754:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x827f6784
	if (!ctx.cr6.eq) goto loc_827F6784;
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
	ctx.lr = 0x827F677C;
	sub_82332CA8(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
loc_827F6784:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x827f6754
	if (ctx.cr6.lt) goto loc_827F6754;
loc_827F6798:
	// lwz r11,36(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x827f67ec
	if (!ctx.cr6.eq) goto loc_827F67EC;
	// lwz r11,56(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,36(r28)
	PPC_STORE_U32(ctx.r28.u32 + 36, ctx.r10.u32);
	// blt 0x827f67ec
	if (ctx.cr0.lt) goto loc_827F67EC;
	// lwz r9,52(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_827F67C8:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,1412(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1412);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x827f67e0
	if (!ctx.cr6.lt) goto loc_827F67E0;
	// stw r10,36(r28)
	PPC_STORE_U32(ctx.r28.u32 + 36, ctx.r10.u32);
	// lwz r8,1412(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1412);
loc_827F67E0:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// bge 0x827f67c8
	if (!ctx.cr0.lt) goto loc_827F67C8;
loc_827F67EC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F67F8"))) PPC_WEAK_FUNC(sub_827F67F8);
PPC_FUNC_IMPL(__imp__sub_827F67F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x827F6800;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82a6173c
	ctx.lr = 0x827F6808;
	__savefpr_25(ctx, base);
	// stwu r1,-592(r1)
	ea = -592 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// fmr f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f1.f64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x827ee828
	ctx.lr = 0x827F6820;
	sub_827EE828(ctx, base);
	// bl 0x827ee8a8
	ctx.lr = 0x827F6824;
	sub_827EE8A8(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,28(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f29,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f29.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x827f6d88
	if (!ctx.cr6.gt) goto loc_827F6D88;
	// lwz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827f6d88
	if (ctx.cr6.eq) goto loc_827F6D88;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x827f6d88
	if (ctx.cr6.eq) goto loc_827F6D88;
	// lwz r11,1420(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1420);
	// addi r30,r31,12
	ctx.r30.s64 = ctx.r31.s64 + 12;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r7,80(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stw r9,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r9.u32);
	// stw r8,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r8.u32);
	// beq cr6,0x827f6d88
	if (ctx.cr6.eq) goto loc_827F6D88;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x827f6d88
	if (ctx.cr6.eq) goto loc_827F6D88;
	// lwz r10,620(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 620);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r9,624(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 624);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r10,628(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 628);
	// lwz r11,392(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 392);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827F68B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f28,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f27.f64 = double(temp.f32);
	// lfs f30,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f30.f64 = double(temp.f32);
	// lfs f26,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f26.f64 = double(temp.f32);
	// fmr f31,f26
	ctx.f31.f64 = ctx.f26.f64;
	// lwz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// lwz r3,1408(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1408);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827f69a4
	if (ctx.cr6.eq) goto loc_827F69A4;
	// fmr f0,f27
	ctx.f0.f64 = ctx.f27.f64;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmr f13,f28
	ctx.f13.f64 = ctx.f28.f64;
	// stfs f29,80(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmr f12,f30
	ctx.f12.f64 = ctx.f30.f64;
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f29,84(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fcmpu cr6,f30,f29
	ctx.cr6.compare(ctx.f30.f64, ctx.f29.f64);
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f29,88(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fsqrts f25,f0
	ctx.f25.f64 = double(float(sqrt(ctx.f0.f64)));
	// bne cr6,0x827f6928
	if (!ctx.cr6.eq) goto loc_827F6928;
	// fcmpu cr6,f27,f29
	ctx.cr6.compare(ctx.f27.f64, ctx.f29.f64);
	// bne cr6,0x827f6928
	if (!ctx.cr6.eq) goto loc_827F6928;
	// fcmpu cr6,f28,f29
	ctx.cr6.compare(ctx.f28.f64, ctx.f29.f64);
	// beq cr6,0x827f69a0
	if (ctx.cr6.eq) goto loc_827F69A0;
loc_827F6928:
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// ld r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r27,88(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// ld r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// rldicr r5,r27,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r27.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x827efd00
	ctx.lr = 0x827F694C;
	sub_827EFD00(ctx, base);
	// lwz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// rldicr r7,r27,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r27.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r3,1408(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1408);
	// bl 0x827efbf8
	ctx.lr = 0x827F6974;
	sub_827EFBF8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827f69a4
	if (ctx.cr0.eq) goto loc_827F69A4;
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fdivs f31,f25,f0
	ctx.f31.f64 = double(float(ctx.f25.f64 / ctx.f0.f64));
	// b 0x827f69a4
	goto loc_827F69A4;
loc_827F69A0:
	// fmr f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f29.f64;
loc_827F69A4:
	// lwz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// lfs f13,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f6,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f9,f27,f13
	ctx.f9.f64 = double(float(ctx.f27.f64 - ctx.f13.f64));
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f4,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f4.f64 = double(temp.f32);
	// lfs f5,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f5.f64 = double(temp.f32);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lfs f11,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,624(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f7,f28,f11
	ctx.f7.f64 = double(float(ctx.f28.f64 - ctx.f11.f64));
	// fsubs f12,f6,f0
	ctx.f12.f64 = double(float(ctx.f6.f64 - ctx.f0.f64));
	// lfs f3,620(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 620);
	ctx.f3.f64 = double(temp.f32);
	// lfd f8,16376(r10)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16376);
	// fsel f1,f31,f31,f8
	ctx.f1.f64 = ctx.f31.f64 >= 0.0 ? ctx.f31.f64 : ctx.f8.f64;
	// lfs f0,628(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 628);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f10,f5,f0
	ctx.f10.f64 = double(float(ctx.f5.f64 - ctx.f0.f64));
	// lfd f8,16368(r9)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 16368);
	// lfs f0,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f9,f9
	ctx.f31.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fsubs f9,f4,f3
	ctx.f9.f64 = double(float(ctx.f4.f64 - ctx.f3.f64));
	// stfs f10,88(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fsubs f2,f30,f0
	ctx.f2.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f3,f12,f12
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fsub f25,f1,f8
	ctx.f25.f64 = ctx.f1.f64 - ctx.f8.f64;
	// fmadds f7,f7,f7,f31
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f31.f64));
	// fmadds f3,f10,f10,f3
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f3.f64));
	// fsel f1,f25,f8,f1
	ctx.f1.f64 = ctx.f25.f64 >= 0.0 ? ctx.f8.f64 : ctx.f1.f64;
	// fmadds f7,f2,f2,f7
	ctx.f7.f64 = double(float(ctx.f2.f64 * ctx.f2.f64 + ctx.f7.f64));
	// fmadds f8,f9,f9,f3
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f3.f64));
	// frsp f31,f1
	ctx.f31.f64 = double(float(ctx.f1.f64));
	// fsqrts f7,f7
	ctx.f7.f64 = double(float(sqrt(ctx.f7.f64)));
	// fcmpu cr6,f8,f26
	ctx.cr6.compare(ctx.f8.f64, ctx.f26.f64);
	// bne cr6,0x827f6a5c
	if (!ctx.cr6.eq) goto loc_827F6A5C;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f9,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f9.f64 = double(temp.f32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// lfs f10,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// b 0x827f6a90
	goto loc_827F6A90;
loc_827F6A5C:
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f3,16668(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16668);
	ctx.f3.f64 = double(temp.f32);
	// fcmpu cr6,f8,f3
	ctx.cr6.compare(ctx.f8.f64, ctx.f3.f64);
	// bge cr6,0x827f6a7c
	if (!ctx.cr6.lt) goto loc_827F6A7C;
	// fmr f9,f29
	ctx.f9.f64 = ctx.f29.f64;
	// fmr f12,f29
	ctx.f12.f64 = ctx.f29.f64;
	// fmr f10,f29
	ctx.f10.f64 = ctx.f29.f64;
	// b 0x827f6a90
	goto loc_827F6A90;
loc_827F6A7C:
	// fsqrts f8,f8
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(sqrt(ctx.f8.f64)));
	// fdivs f8,f26,f8
	ctx.f8.f64 = double(float(ctx.f26.f64 / ctx.f8.f64));
	// fmuls f9,f8,f9
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// fmuls f12,f12,f8
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// fmuls f10,f10,f8
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
loc_827F6A90:
	// fmuls f12,f12,f7
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// lfs f8,1420(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1420);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f10,f10,f7
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f7.f64));
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// fmuls f9,f9,f7
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f7.f64));
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// fadds f12,f12,f6
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f6.f64));
	// fadds f10,f10,f5
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f5.f64));
	// fadds f9,f9,f4
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f4.f64));
	// fsubs f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fsubs f10,f10,f11
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// fsubs f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// fmuls f12,f12,f8
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// fmuls f10,f10,f8
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// fmuls f9,f9,f8
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// fadds f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// fadds f10,f11,f10
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// fadds f9,f0,f9
	ctx.f9.f64 = double(float(ctx.f0.f64 + ctx.f9.f64));
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fsubs f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fsubs f0,f0,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fmuls f11,f11,f31
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f13,f11,f10
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fadds f0,f0,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f9.f64));
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,620(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 620);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,628(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 628);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,624(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fsubs f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// fsubs f0,f11,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x82817280
	ctx.lr = 0x827F6B58;
	sub_82817280(ctx, base);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f27,f13
	ctx.f13.f64 = double(float(ctx.f27.f64 - ctx.f13.f64));
	// fsubs f12,f28,f12
	ctx.f12.f64 = double(float(ctx.f28.f64 - ctx.f12.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82817280
	ctx.lr = 0x827F6BA4;
	sub_82817280(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// bl 0x824f97d8
	ctx.lr = 0x827F6BCC;
	sub_824F97D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82817f30
	ctx.lr = 0x827F6BD8;
	sub_82817F30(ctx, base);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
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
	ctx.lr = 0x827F6C0C;
	sub_824F97D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82817f30
	ctx.lr = 0x827F6C18;
	sub_82817F30(ctx, base);
	// lwz r9,36(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f1,1420(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 1420);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// bl 0x8269cbe0
	ctx.lr = 0x827F6C58;
	sub_8269CBE0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// bl 0x82817b48
	ctx.lr = 0x827F6C8C;
	sub_82817B48(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x824f97d8
	ctx.lr = 0x827F6CB4;
	sub_824F97D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82817f30
	ctx.lr = 0x827F6CC0;
	sub_82817F30(ctx, base);
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
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
	ctx.lr = 0x827F6CF4;
	sub_824F97D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82817f30
	ctx.lr = 0x827F6D00;
	sub_82817F30(ctx, base);
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// bl 0x8269cbe0
	ctx.lr = 0x827F6D3C;
	sub_8269CBE0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// bl 0x82817b48
	ctx.lr = 0x827F6D70;
	sub_82817B48(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
loc_827F6D88:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82a61788
	ctx.lr = 0x827F6D98;
	__restfpr_25(ctx, base);
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F6DA0"))) PPC_WEAK_FUNC(sub_827F6DA0);
PPC_FUNC_IMPL(__imp__sub_827F6DA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x827F6DA8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r31,r30,40
	ctx.r31.s64 = ctx.r30.s64 + 40;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,56(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332ca8
	ctx.lr = 0x827F6DD0;
	sub_82332CA8(ctx, base);
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827f6de0
	if (ctx.cr6.eq) goto loc_827F6DE0;
	// bl 0x82332db8
	ctx.lr = 0x827F6DE0;
	sub_82332DB8(ctx, base);
loc_827F6DE0:
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
	ctx.lr = 0x827F6DF8;
	sub_82833238(ctx, base);
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827f6e08
	if (ctx.cr0.eq) goto loc_827F6E08;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332db8
	ctx.lr = 0x827F6E08;
	sub_82332DB8(ctx, base);
loc_827F6E08:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F6E18"))) PPC_WEAK_FUNC(sub_827F6E18);
PPC_FUNC_IMPL(__imp__sub_827F6E18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r11,13524
	ctx.r3.s64 = ctx.r11.s64 + 13524;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F6E28"))) PPC_WEAK_FUNC(sub_827F6E28);
PPC_FUNC_IMPL(__imp__sub_827F6E28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827f6e78
	ctx.lr = 0x827F6E48;
	sub_827F6E78(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x827f6e5c
	if (ctx.cr6.eq) goto loc_827F6E5C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8269cdd8
	ctx.lr = 0x827F6E5C;
	sub_8269CDD8(ctx, base);
loc_827F6E5C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F6E78"))) PPC_WEAK_FUNC(sub_827F6E78);
PPC_FUNC_IMPL(__imp__sub_827F6E78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,20628
	ctx.r31.s64 = ctx.r11.s64 + 20628;
	// lwz r11,-23548(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23548);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x827f6ec0
	if (!ctx.cr0.eq) goto loc_827F6EC0;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,13664
	ctx.r9.s64 = ctx.r9.s64 + 13664;
	// stw r11,-23548(r10)
	PPC_STORE_U32(ctx.r10.u32 + -23548, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-26120
	ctx.r3.s64 = ctx.r11.s64 + -26120;
	// bl 0x82a4c758
	ctx.lr = 0x827F6EC0;
	sub_82A4C758(ctx, base);
loc_827F6EC0:
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

__attribute__((alias("__imp__sub_827F6ED8"))) PPC_WEAK_FUNC(sub_827F6ED8);
PPC_FUNC_IMPL(__imp__sub_827F6ED8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x82833108
	ctx.lr = 0x827F6EF0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x827f6f40
	if (ctx.cr0.eq) goto loc_827F6F40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827ee580
	ctx.lr = 0x827F6F00;
	sub_827EE580(ctx, base);
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,13552
	ctx.r10.s64 = ctx.r10.s64 + 13552;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,90
	ctx.r8.s64 = 90;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stb r8,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r8.u8);
	// b 0x827f6f44
	goto loc_827F6F44;
loc_827F6F40:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827F6F44:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F6F58"))) PPC_WEAK_FUNC(sub_827F6F58);
PPC_FUNC_IMPL(__imp__sub_827F6F58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,20624(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20624);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x827f6f98
	if (!ctx.cr0.eq) goto loc_827F6F98;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// stw r11,20624(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20624, ctx.r11.u32);
	// addi r3,r9,13524
	ctx.r3.s64 = ctx.r9.s64 + 13524;
	// bl 0x82816528
	ctx.lr = 0x827F6F90;
	sub_82816528(ctx, base);
	// stw r3,20620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20620, ctx.r3.u32);
	// b 0x827f6f9c
	goto loc_827F6F9C;
loc_827F6F98:
	// lwz r3,20620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20620);
loc_827F6F9C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F6FB0"))) PPC_WEAK_FUNC(sub_827F6FB0);
PPC_FUNC_IMPL(__imp__sub_827F6FB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827f6e78
	ctx.lr = 0x827F6FD0;
	sub_827F6E78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827F6FE4;
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

__attribute__((alias("__imp__sub_827F7000"))) PPC_WEAK_FUNC(sub_827F7000);
PPC_FUNC_IMPL(__imp__sub_827F7000) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x827f7038
	if (ctx.cr6.eq) goto loc_827F7038;
	// bl 0x827f6e78
	ctx.lr = 0x827F7028;
	sub_827F6E78(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x827f7038
	if (!ctx.cr6.eq) goto loc_827F7038;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827f7044
	goto loc_827F7044;
loc_827F7038:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8269cd38
	ctx.lr = 0x827F7044;
	sub_8269CD38(ctx, base);
loc_827F7044:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F7060"))) PPC_WEAK_FUNC(sub_827F7060);
PPC_FUNC_IMPL(__imp__sub_827F7060) {
	PPC_FUNC_PROLOGUE();
	// b 0x827f6e78
	sub_827F6E78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F7068"))) PPC_WEAK_FUNC(sub_827F7068);
PPC_FUNC_IMPL(__imp__sub_827F7068) {
	PPC_FUNC_PROLOGUE();
	// b 0x8269cfb0
	sub_8269CFB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F7070"))) PPC_WEAK_FUNC(sub_827F7070);
PPC_FUNC_IMPL(__imp__sub_827F7070) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x82833108
	ctx.lr = 0x827F708C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827f70a0
	if (ctx.cr0.eq) goto loc_827F70A0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x827f70b8
	ctx.lr = 0x827F709C;
	sub_827F70B8(ctx, base);
	// b 0x827f70a4
	goto loc_827F70A4;
loc_827F70A0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827F70A4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F70B8"))) PPC_WEAK_FUNC(sub_827F70B8);
PPC_FUNC_IMPL(__imp__sub_827F70B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x827F70C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8269ce38
	ctx.lr = 0x827F70D0;
	sub_8269CE38(ctx, base);
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,13552
	ctx.r10.s64 = ctx.r10.s64 + 13552;
	// addi r31,r29,40
	ctx.r31.s64 = ctx.r29.s64 + 40;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// addi r28,r30,40
	ctx.r28.s64 = ctx.r30.s64 + 40;
	// li r10,4
	ctx.r10.s64 = 4;
	// lwz r9,36(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// stw r9,36(r29)
	PPC_STORE_U32(ctx.r29.u32 + 36, ctx.r9.u32);
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// stw r10,44(r29)
	PPC_STORE_U32(ctx.r29.u32 + 44, ctx.r10.u32);
	// stw r11,48(r29)
	PPC_STORE_U32(ctx.r29.u32 + 48, ctx.r11.u32);
	// stw r11,52(r29)
	PPC_STORE_U32(ctx.r29.u32 + 52, ctx.r11.u32);
	// stw r11,56(r29)
	PPC_STORE_U32(ctx.r29.u32 + 56, ctx.r11.u32);
	// stw r11,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r11.u32);
	// stw r11,40(r29)
	PPC_STORE_U32(ctx.r29.u32 + 40, ctx.r11.u32);
	// beq cr6,0x827f715c
	if (ctx.cr6.eq) goto loc_827F715C;
	// lwz r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x827f715c
	if (!ctx.cr6.gt) goto loc_827F715C;
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x827f7140
	if (ctx.cr0.eq) goto loc_827F7140;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c38
	ctx.lr = 0x827F7140;
	sub_82332C38(ctx, base);
loc_827F7140:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r4,12(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82a45878
	ctx.lr = 0x827F7154;
	sub_82A45878(ctx, base);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_827F715C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F7168"))) PPC_WEAK_FUNC(sub_827F7168);
PPC_FUNC_IMPL(__imp__sub_827F7168) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r11,13684
	ctx.r3.s64 = ctx.r11.s64 + 13684;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F7178"))) PPC_WEAK_FUNC(sub_827F7178);
PPC_FUNC_IMPL(__imp__sub_827F7178) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x827f71b0
	if (ctx.cr6.eq) goto loc_827F71B0;
	// bl 0x827f7c98
	ctx.lr = 0x827F71A0;
	sub_827F7C98(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x827f71b0
	if (!ctx.cr6.eq) goto loc_827F71B0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827f71bc
	goto loc_827F71BC;
loc_827F71B0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8240ada0
	ctx.lr = 0x827F71BC;
	sub_8240ADA0(ctx, base);
loc_827F71BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F71D8"))) PPC_WEAK_FUNC(sub_827F71D8);
PPC_FUNC_IMPL(__imp__sub_827F71D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x827f7c98
	sub_827F7C98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F71E0"))) PPC_WEAK_FUNC(sub_827F71E0);
PPC_FUNC_IMPL(__imp__sub_827F71E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,1160
	ctx.r3.s64 = 1160;
	// bl 0x82833108
	ctx.lr = 0x827F7200;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x827f7228
	if (ctx.cr0.eq) goto loc_827F7228;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82409ff0
	ctx.lr = 0x827F7214;
	sub_82409FF0(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,14936
	ctx.r11.s64 = ctx.r11.s64 + 14936;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x827f722c
	goto loc_827F722C;
loc_827F7228:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827F722C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F7248"))) PPC_WEAK_FUNC(sub_827F7248);
PPC_FUNC_IMPL(__imp__sub_827F7248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827f7c98
	ctx.lr = 0x827F7268;
	sub_827F7C98(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x827f727c
	if (ctx.cr6.eq) goto loc_827F727C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8240ac00
	ctx.lr = 0x827F727C;
	sub_8240AC00(ctx, base);
loc_827F727C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F7298"))) PPC_WEAK_FUNC(sub_827F7298);
PPC_FUNC_IMPL(__imp__sub_827F7298) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r11,13704
	ctx.r3.s64 = ctx.r11.s64 + 13704;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F72A8"))) PPC_WEAK_FUNC(sub_827F72A8);
PPC_FUNC_IMPL(__imp__sub_827F72A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x827f72e0
	if (ctx.cr6.eq) goto loc_827F72E0;
	// bl 0x827f7de0
	ctx.lr = 0x827F72D0;
	sub_827F7DE0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x827f72e0
	if (!ctx.cr6.eq) goto loc_827F72E0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827f72ec
	goto loc_827F72EC;
loc_827F72E0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82699840
	ctx.lr = 0x827F72EC;
	sub_82699840(ctx, base);
loc_827F72EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F7308"))) PPC_WEAK_FUNC(sub_827F7308);
PPC_FUNC_IMPL(__imp__sub_827F7308) {
	PPC_FUNC_PROLOGUE();
	// b 0x827f7de0
	sub_827F7DE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F7310"))) PPC_WEAK_FUNC(sub_827F7310);
PPC_FUNC_IMPL(__imp__sub_827F7310) {
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
	// li r3,1648
	ctx.r3.s64 = 1648;
	// bl 0x82833108
	ctx.lr = 0x827F7330;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x827f7398
	if (ctx.cr0.eq) goto loc_827F7398;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82699938
	ctx.lr = 0x827F7344;
	sub_82699938(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// addi r11,r11,13728
	ctx.r11.s64 = ctx.r11.s64 + 13728;
	// addi r10,r10,14860
	ctx.r10.s64 = ctx.r10.s64 + 14860;
	// addi r9,r9,14912
	ctx.r9.s64 = ctx.r9.s64 + 14912;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lwz r11,1616(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1616);
	// stw r11,1616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1616, ctx.r11.u32);
	// lfs f0,1620(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1620);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1620(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1620, temp.u32);
	// lfs f0,1624(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1624);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1624(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1624, temp.u32);
	// lfs f0,1628(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1628);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1628(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1628, temp.u32);
	// lwz r11,1632(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1632);
	// stw r11,1632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1632, ctx.r11.u32);
	// b 0x827f739c
	goto loc_827F739C;
loc_827F7398:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827F739C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F73B8"))) PPC_WEAK_FUNC(sub_827F73B8);
PPC_FUNC_IMPL(__imp__sub_827F73B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827f7de0
	ctx.lr = 0x827F73D8;
	sub_827F7DE0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x827f73e8
	if (!ctx.cr6.eq) goto loc_827F73E8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x827f7400
	goto loc_827F7400;
loc_827F73E8:
	// bl 0x825873f8
	ctx.lr = 0x827F73EC;
	sub_825873F8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x827f7400
	if (ctx.cr6.eq) goto loc_827F7400;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826997d0
	ctx.lr = 0x827F7400;
	sub_826997D0(ctx, base);
loc_827F7400:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F7418"))) PPC_WEAK_FUNC(sub_827F7418);
PPC_FUNC_IMPL(__imp__sub_827F7418) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827f7520
	ctx.lr = 0x827F7438;
	sub_827F7520(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827f7448
	if (ctx.cr0.eq) goto loc_827F7448;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x827F7448;
	sub_82332DB8(ctx, base);
loc_827F7448:
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

__attribute__((alias("__imp__sub_827F7468"))) PPC_WEAK_FUNC(sub_827F7468);
PPC_FUNC_IMPL(__imp__sub_827F7468) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x827F7470;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x827d73c0
	ctx.lr = 0x827F7480;
	sub_827D73C0(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// lis r8,-32218
	ctx.r8.s64 = -2111438848;
	// li r29,0
	ctx.r29.s64 = 0;
	// lfs f31,912(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	ctx.f31.f64 = double(temp.f32);
	// addi r11,r10,13728
	ctx.r11.s64 = ctx.r10.s64 + 13728;
	// addi r10,r9,14860
	ctx.r10.s64 = ctx.r9.s64 + 14860;
	// stfs f31,1628(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1628, temp.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r9,r8,14912
	ctx.r9.s64 = ctx.r8.s64 + 14912;
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// li r3,1160
	ctx.r3.s64 = 1160;
	// stw r28,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r28.u32);
	// stw r29,1616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1616, ctx.r29.u32);
	// stw r29,1448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1448, ctx.r29.u32);
	// lwz r11,1452(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	// rlwinm r11,r11,0,5,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFF7FFFFFF;
	// stw r11,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r11.u32);
	// bl 0x82833108
	ctx.lr = 0x827F74D8;
	sub_82833108(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x827f750c
	if (ctx.cr0.eq) goto loc_827F750C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828c8a78
	ctx.lr = 0x827F74E8;
	sub_828C8A78(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// stfs f31,1124(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1124, temp.u32);
	// stw r28,1128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1128, ctx.r28.u32);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// addi r10,r10,14936
	ctx.r10.s64 = ctx.r10.s64 + 14936;
	// lfs f0,30356(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30356);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stfs f0,1120(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1120, temp.u32);
loc_827F750C:
	// stw r29,1632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1632, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F7520"))) PPC_WEAK_FUNC(sub_827F7520);
PPC_FUNC_IMPL(__imp__sub_827F7520) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// addi r11,r11,13728
	ctx.r11.s64 = ctx.r11.s64 + 13728;
	// lwz r3,1632(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1632);
	// addi r10,r10,14860
	ctx.r10.s64 = ctx.r10.s64 + 14860;
	// addi r9,r9,14912
	ctx.r9.s64 = ctx.r9.s64 + 14912;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// beq cr6,0x827f7580
	if (ctx.cr6.eq) goto loc_827F7580;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827F7578;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1632, ctx.r11.u32);
loc_827F7580:
	// addi r3,r31,1552
	ctx.r3.s64 = ctx.r31.s64 + 1552;
	// bl 0x8269b2f8
	ctx.lr = 0x827F7588;
	sub_8269B2F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829bc9e8
	ctx.lr = 0x827F7590;
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

__attribute__((alias("__imp__sub_827F75A8"))) PPC_WEAK_FUNC(sub_827F75A8);
PPC_FUNC_IMPL(__imp__sub_827F75A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x827F75B0;
	__savegprlr_28(ctx, base);
	// stfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f29.u64);
	// stfd f30,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// lfs f11,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f1,f11
	ctx.cr6.compare(ctx.f1.f64, ctx.f11.f64);
	// ble cr6,0x827f7840
	if (!ctx.cr6.gt) goto loc_827F7840;
	// lwz r11,1616(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1616);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827f7840
	if (!ctx.cr6.gt) goto loc_827F7840;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x827f7840
	if (ctx.cr6.gt) goto loc_827F7840;
	// lwz r11,1632(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1632);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r10,r10,-29284
	ctx.r10.s64 = ctx.r10.s64 + -29284;
	// lwz r7,932(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 932);
	// lfs f12,17620(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 17620);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 912);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm. r9,r7,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x827f7630
	if (ctx.cr0.eq) goto loc_827F7630;
	// lfs f10,1628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1628);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,1984(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 1984);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f0,1628(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1628, temp.u32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x827f7630
	if (!ctx.cr6.gt) goto loc_827F7630;
	// stfs f13,1628(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1628, temp.u32);
loc_827F7630:
	// lwz r9,932(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 932);
	// rlwinm. r9,r9,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x827f765c
	if (ctx.cr0.eq) goto loc_827F765C;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// lfs f10,1628(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1628);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,30996(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 30996);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f0,1628(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1628, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x827f765c
	if (!ctx.cr6.lt) goto loc_827F765C;
	// stfs f12,1628(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1628, temp.u32);
loc_827F765C:
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// lwz r9,928(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 928);
	// rlwinm. r9,r9,0,21,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lfs f13,-12104(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -12104);
	ctx.f13.f64 = double(temp.f32);
	// beq 0x827f7690
	if (ctx.cr0.eq) goto loc_827F7690;
	// lfs f0,1440(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1440);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// fnmsubs f12,f1,f13,f0
	ctx.f12.f64 = double(float(-(ctx.f1.f64 * ctx.f13.f64 - ctx.f0.f64)));
	// stfs f12,1440(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1440, temp.u32);
	// lfs f0,32716(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32716);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x827f7690
	if (!ctx.cr6.lt) goto loc_827F7690;
	// stfs f0,1440(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1440, temp.u32);
loc_827F7690:
	// lwz r9,928(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 928);
	// rlwinm. r9,r9,0,20,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x827f76bc
	if (ctx.cr0.eq) goto loc_827F76BC;
	// lfs f0,1440(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1440);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// fmadds f13,f1,f13,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f13.f64 + ctx.f0.f64));
	// stfs f13,1440(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1440, temp.u32);
	// lfs f0,17616(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 17616);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x827f76bc
	if (!ctx.cr6.gt) goto loc_827F76BC;
	// stfs f0,1440(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1440, temp.u32);
loc_827F76BC:
	// lis r9,-31963
	ctx.r9.s64 = -2094727168;
	// lfs f13,1628(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1628);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,1624(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1624, temp.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lfs f0,16816(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16816);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1620(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1620, temp.u32);
	// lfs f13,644(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 644);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f12,648(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 648);
	ctx.f12.f64 = double(temp.f32);
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfs f11,644(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 644, temp.u32);
	// lwz r11,1632(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1632);
	// stfs f11,648(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 648, temp.u32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lwz r11,1632(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1632);
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lfs f0,-28788(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -28788);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,656(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// lwz r8,660(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 660);
	// lfs f11,1624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1624);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lwz r9,664(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 664);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// fctiwz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// lfs f13,1044(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1044);
	ctx.f13.f64 = double(temp.f32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// lfs f10,1040(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1040);
	ctx.f10.f64 = double(temp.f32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lfs f9,548(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 548);
	ctx.f9.f64 = double(temp.f32);
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lfs f8,544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 544);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f31,f8,f11
	ctx.f31.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fmuls f30,f9,f11
	ctx.f30.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// fmuls f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// fmsubs f29,f0,f11,f13
	ctx.f29.f64 = double(float(ctx.f0.f64 * ctx.f11.f64 - ctx.f13.f64));
	// bl 0x824f97d8
	ctx.lr = 0x827F776C;
	sub_824F97D8(ctx, base);
	// lfs f11,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f10,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f11,f11,f31
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// lfs f9,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f31
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// fmuls f9,f9,f31
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// lfs f8,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f7.f64 = double(temp.f32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// lfs f6,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f6.f64 = double(temp.f32);
	// lwz r11,460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 460);
	// lfs f5,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f5.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f4,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f11,f8,f29,f11
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f29.f64 + ctx.f11.f64));
	// lfs f0,620(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f10,f7,f29,f10
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f29.f64 + ctx.f10.f64));
	// lfs f13,624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f9,f6,f29,f9
	ctx.f9.f64 = double(float(ctx.f6.f64 * ctx.f29.f64 + ctx.f9.f64));
	// lfs f12,628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f12.f64 = double(temp.f32);
	// lfs f8,200(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f11,f5,f30,f11
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f30.f64 + ctx.f11.f64));
	// fmadds f10,f4,f30,f10
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f30.f64 + ctx.f10.f64));
	// fmadds f9,f3,f30,f9
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f30.f64 + ctx.f9.f64));
	// fadds f11,f11,f2
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f2.f64));
	// fadds f10,f10,f1
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f1.f64));
	// fadds f9,f9,f8
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f8.f64));
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fadds f0,f13,f10
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fadds f0,f12,f9
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827F7808;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,656(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// lwz r10,660(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 660);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// lwz r11,664(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 664);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// lwz r11,316(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 316);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827F7840;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827F7840:
	// lwz r11,620(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// lwz r11,624(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// lwz r11,628(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// lwz r11,656(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// stw r11,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r11.u32);
	// lwz r11,660(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 660);
	// stw r11,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r11.u32);
	// lwz r11,664(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 664);
	// stw r11,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r11.u32);
	// lfs f0,1440(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1440);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 24, temp.u32);
	// lfs f0,1444(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1444);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 28, temp.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f29,-64(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f30,-56(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F7898"))) PPC_WEAK_FUNC(sub_827F7898);
PPC_FUNC_IMPL(__imp__sub_827F7898) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x827F78A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,64(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x827f78e4
	if (ctx.cr6.eq) goto loc_827F78E4;
	// bl 0x826a8068
	ctx.lr = 0x827F78B8;
	sub_826A8068(ctx, base);
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
	ctx.lr = 0x827F78D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x827f78dc
	if (!ctx.cr0.eq) goto loc_827F78DC;
	// li r30,0
	ctx.r30.s64 = 0;
loc_827F78DC:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// b 0x827f78e8
	goto loc_827F78E8;
loc_827F78E4:
	// li r29,0
	ctx.r29.s64 = 0;
loc_827F78E8:
	// lwz r11,1616(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1616);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827f7998
	if (!ctx.cr6.eq) goto loc_827F7998;
	// lis r27,-31949
	ctx.r27.s64 = -2093809664;
	// li r28,1
	ctx.r28.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r28,1616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1616, ctx.r28.u32);
	// lwz r3,13024(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// stw r11,516(r3)
	PPC_STORE_U32(ctx.r3.u32 + 516, ctx.r11.u32);
	// bl 0x8282a2b0
	ctx.lr = 0x827F7910;
	sub_8282A2B0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r29,1492
	ctx.r30.s64 = ctx.r29.s64 + 1492;
	// lfs f0,1516(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1516);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1440(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1440, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 460);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827F7934;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r30,12
	ctx.r4.s64 = ctx.r30.s64 + 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,316(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 316);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827F794C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82833108
	ctx.lr = 0x827F7954;
	sub_82833108(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x827f7984
	if (ctx.cr0.eq) goto loc_827F7984;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333a80
	ctx.lr = 0x827F796C;
	sub_82333A80(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// stw r28,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r28.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,1384
	ctx.r11.s64 = ctx.r11.s64 + 1384;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x827f7988
	goto loc_827F7988;
loc_827F7984:
	// li r4,0
	ctx.r4.s64 = 0;
loc_827F7988:
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x827F7994;
	sub_82833A30(ctx, base);
	// b 0x827f79f0
	goto loc_827F79F0;
loc_827F7998:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x827f79c8
	if (!ctx.cr6.eq) goto loc_827F79C8;
	// li r11,2
	ctx.r11.s64 = 2;
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// stw r11,1616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1616, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,13024(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// bl 0x8282a2b0
	ctx.lr = 0x827F79B8;
	sub_8282A2B0(ctx, base);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,516(r11)
	PPC_STORE_U32(ctx.r11.u32 + 516, ctx.r10.u32);
	// b 0x827f79f0
	goto loc_827F79F0;
loc_827F79C8:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x827f79f0
	if (!ctx.cr6.eq) goto loc_827F79F0;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,1616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1616, ctx.r10.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,13024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// stw r9,516(r3)
	PPC_STORE_U32(ctx.r3.u32 + 516, ctx.r9.u32);
	// bl 0x8282a2b0
	ctx.lr = 0x827F79F0;
	sub_8282A2B0(ctx, base);
loc_827F79F0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F79F8"))) PPC_WEAK_FUNC(sub_827F79F8);
PPC_FUNC_IMPL(__imp__sub_827F79F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1616(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1616);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827f7a10
	if (!ctx.cr6.gt) goto loc_827F7A10;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// blelr cr6
	if (!ctx.cr6.gt) return;
loc_827F7A10:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F7A18"))) PPC_WEAK_FUNC(sub_827F7A18);
PPC_FUNC_IMPL(__imp__sub_827F7A18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1616(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1616);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F7A30"))) PPC_WEAK_FUNC(sub_827F7A30);
PPC_FUNC_IMPL(__imp__sub_827F7A30) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1616(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1616);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F7A48"))) PPC_WEAK_FUNC(sub_827F7A48);
PPC_FUNC_IMPL(__imp__sub_827F7A48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x827F7A50;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,1116(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827F7A68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827f7b28
	if (ctx.cr0.eq) goto loc_827F7B28;
	// lwz r31,64(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827f7aac
	if (ctx.cr6.eq) goto loc_827F7AAC;
	// bl 0x826a8068
	ctx.lr = 0x827F7A80;
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
	ctx.lr = 0x827F7A98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x827f7aa4
	if (!ctx.cr0.eq) goto loc_827F7AA4;
	// li r31,0
	ctx.r31.s64 = 0;
loc_827F7AA4:
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// b 0x827f7ab0
	goto loc_827F7AB0;
loc_827F7AAC:
	// li r28,0
	ctx.r28.s64 = 0;
loc_827F7AB0:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// stw r11,1616(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1616, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,13024(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// bl 0x8282a2b0
	ctx.lr = 0x827F7AC8;
	sub_8282A2B0(ctx, base);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,28
	ctx.r3.s64 = 28;
	// stw r10,516(r11)
	PPC_STORE_U32(ctx.r11.u32 + 516, ctx.r10.u32);
	// bl 0x82833108
	ctx.lr = 0x827F7ADC;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x827f7b10
	if (ctx.cr0.eq) goto loc_827F7B10;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82333a80
	ctx.lr = 0x827F7AF4;
	sub_82333A80(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,1384
	ctx.r11.s64 = ctx.r11.s64 + 1384;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x827f7b14
	goto loc_827F7B14;
loc_827F7B10:
	// li r4,0
	ctx.r4.s64 = 0;
loc_827F7B14:
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x827F7B20;
	sub_82833A30(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827f7b2c
	goto loc_827F7B2C;
loc_827F7B28:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827F7B2C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F7B38"))) PPC_WEAK_FUNC(sub_827F7B38);
PPC_FUNC_IMPL(__imp__sub_827F7B38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r11,552(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 552);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x827f7b50
	if (!ctx.cr6.eq) goto loc_827F7B50;
	// b 0x828c9580
	sub_828C9580(ctx, base);
	return;
loc_827F7B50:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F7B58"))) PPC_WEAK_FUNC(sub_827F7B58);
PPC_FUNC_IMPL(__imp__sub_827F7B58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r11,552(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 552);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x827f7b70
	if (!ctx.cr6.eq) goto loc_827F7B70;
	// b 0x828c9248
	sub_828C9248(ctx, base);
	return;
loc_827F7B70:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F7B78"))) PPC_WEAK_FUNC(sub_827F7B78);
PPC_FUNC_IMPL(__imp__sub_827F7B78) {
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
	// li r3,1160
	ctx.r3.s64 = 1160;
	// bl 0x82833108
	ctx.lr = 0x827F7B90;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x827f7bd4
	if (ctx.cr0.eq) goto loc_827F7BD4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828c8a78
	ctx.lr = 0x827F7BA0;
	sub_828C8A78(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r9,r9,14936
	ctx.r9.s64 = ctx.r9.s64 + 14936;
	// lfs f0,30356(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30356);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,1128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1128, ctx.r8.u32);
	// lfs f13,912(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 912);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,1120(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1120, temp.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stfs f13,1124(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1124, temp.u32);
	// b 0x827f7bd8
	goto loc_827F7BD8;
loc_827F7BD4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827F7BD8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F7BF0"))) PPC_WEAK_FUNC(sub_827F7BF0);
PPC_FUNC_IMPL(__imp__sub_827F7BF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,20600(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20600);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x827f7c30
	if (!ctx.cr0.eq) goto loc_827F7C30;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// stw r11,20600(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20600, ctx.r11.u32);
	// addi r3,r9,13684
	ctx.r3.s64 = ctx.r9.s64 + 13684;
	// bl 0x82816528
	ctx.lr = 0x827F7C28;
	sub_82816528(ctx, base);
	// stw r3,20596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20596, ctx.r3.u32);
	// b 0x827f7c34
	goto loc_827F7C34;
loc_827F7C30:
	// lwz r3,20596(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20596);
loc_827F7C34:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F7C48"))) PPC_WEAK_FUNC(sub_827F7C48);
PPC_FUNC_IMPL(__imp__sub_827F7C48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827f7c98
	ctx.lr = 0x827F7C68;
	sub_827F7C98(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827F7C7C;
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

__attribute__((alias("__imp__sub_827F7C98"))) PPC_WEAK_FUNC(sub_827F7C98);
PPC_FUNC_IMPL(__imp__sub_827F7C98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,20608
	ctx.r31.s64 = ctx.r11.s64 + 20608;
	// lwz r11,20616(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20616);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x827f7ce0
	if (!ctx.cr0.eq) goto loc_827F7CE0;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,15100
	ctx.r9.s64 = ctx.r9.s64 + 15100;
	// stw r11,20616(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20616, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-26072
	ctx.r3.s64 = ctx.r11.s64 + -26072;
	// bl 0x82a4c758
	ctx.lr = 0x827F7CE0;
	sub_82A4C758(ctx, base);
loc_827F7CE0:
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

__attribute__((alias("__imp__sub_827F7CF8"))) PPC_WEAK_FUNC(sub_827F7CF8);
PPC_FUNC_IMPL(__imp__sub_827F7CF8) {
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
	// li r3,1648
	ctx.r3.s64 = 1648;
	// bl 0x82833108
	ctx.lr = 0x827F7D0C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827f7d1c
	if (ctx.cr0.eq) goto loc_827F7D1C;
	// bl 0x827f7468
	ctx.lr = 0x827F7D18;
	sub_827F7468(ctx, base);
	// b 0x827f7d20
	goto loc_827F7D20;
loc_827F7D1C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827F7D20:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F7D30"))) PPC_WEAK_FUNC(sub_827F7D30);
PPC_FUNC_IMPL(__imp__sub_827F7D30) {
	PPC_FUNC_PROLOGUE();
	// li r3,1648
	ctx.r3.s64 = 1648;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F7D38"))) PPC_WEAK_FUNC(sub_827F7D38);
PPC_FUNC_IMPL(__imp__sub_827F7D38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,20592(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20592);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x827f7d78
	if (!ctx.cr0.eq) goto loc_827F7D78;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// stw r11,20592(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20592, ctx.r11.u32);
	// addi r3,r9,13704
	ctx.r3.s64 = ctx.r9.s64 + 13704;
	// bl 0x82816528
	ctx.lr = 0x827F7D70;
	sub_82816528(ctx, base);
	// stw r3,20588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20588, ctx.r3.u32);
	// b 0x827f7d7c
	goto loc_827F7D7C;
loc_827F7D78:
	// lwz r3,20588(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20588);
loc_827F7D7C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F7D90"))) PPC_WEAK_FUNC(sub_827F7D90);
PPC_FUNC_IMPL(__imp__sub_827F7D90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827f7de0
	ctx.lr = 0x827F7DB0;
	sub_827F7DE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827F7DC4;
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

__attribute__((alias("__imp__sub_827F7DE0"))) PPC_WEAK_FUNC(sub_827F7DE0);
PPC_FUNC_IMPL(__imp__sub_827F7DE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,20604
	ctx.r31.s64 = ctx.r11.s64 + 20604;
	// lwz r11,20612(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20612);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x827f7e28
	if (!ctx.cr0.eq) goto loc_827F7E28;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,15120
	ctx.r9.s64 = ctx.r9.s64 + 15120;
	// stw r11,20612(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20612, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-26096
	ctx.r3.s64 = ctx.r11.s64 + -26096;
	// bl 0x82a4c758
	ctx.lr = 0x827F7E28;
	sub_82A4C758(ctx, base);
loc_827F7E28:
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

__attribute__((alias("__imp__sub_827F7E40"))) PPC_WEAK_FUNC(sub_827F7E40);
PPC_FUNC_IMPL(__imp__sub_827F7E40) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x827f7418
	sub_827F7418(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F7E48"))) PPC_WEAK_FUNC(sub_827F7E48);
PPC_FUNC_IMPL(__imp__sub_827F7E48) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x827f7418
	sub_827F7418(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F7E50"))) PPC_WEAK_FUNC(sub_827F7E50);
PPC_FUNC_IMPL(__imp__sub_827F7E50) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x827f73b8
	sub_827F73B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F7E58"))) PPC_WEAK_FUNC(sub_827F7E58);
PPC_FUNC_IMPL(__imp__sub_827F7E58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x827F7E70;
	sub_82833180(ctx, base);
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,15144
	ctx.r9.s64 = ctx.r10.s64 + 15144;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827F7F00"))) PPC_WEAK_FUNC(sub_827F7F00);
PPC_FUNC_IMPL(__imp__sub_827F7F00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x827F7F08;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x827dfe30
	ctx.lr = 0x827F7F24;
	sub_827DFE30(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r30,12
	ctx.r5.s64 = ctx.r30.s64 + 12;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x827f80b0
	ctx.lr = 0x827F7F34;
	sub_827F80B0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r30,20
	ctx.r5.s64 = ctx.r30.s64 + 20;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x827f82d0
	ctx.lr = 0x827F7F44;
	sub_827F82D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r30,28
	ctx.r5.s64 = ctx.r30.s64 + 28;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x827f80b0
	ctx.lr = 0x827F7F54;
	sub_827F80B0(ctx, base);
	// addi r5,r30,36
	ctx.r5.s64 = ctx.r30.s64 + 36;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x827f82d0
	ctx.lr = 0x827F7F64;
	sub_827F82D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F7F70"))) PPC_WEAK_FUNC(sub_827F7F70);
PPC_FUNC_IMPL(__imp__sub_827F7F70) {
	PPC_FUNC_PROLOGUE();
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,28(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827f7f90
	if (!ctx.cr6.eq) goto loc_827F7F90;
	// lwz r10,52(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_827F7F90:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x827f801c
	if (ctx.cr6.eq) goto loc_827F801C;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827f7fd4
	if (!ctx.cr6.gt) goto loc_827F7FD4;
	// lwz r10,24(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
loc_827F7FAC:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x827f7fbc
	if (ctx.cr6.eq) goto loc_827F7FBC;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
loc_827F7FBC:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x827f7fc8
	if (ctx.cr6.eq) goto loc_827F7FC8;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
loc_827F7FC8:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x827f7fac
	if (!ctx.cr0.eq) goto loc_827F7FAC;
loc_827F7FD4:
	// lwz r11,52(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827f8014
	if (!ctx.cr6.gt) goto loc_827F8014;
	// lwz r10,48(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
loc_827F7FE8:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x827f7ffc
	if (!ctx.cr6.eq) goto loc_827F7FFC;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// b 0x827f8008
	goto loc_827F8008;
loc_827F7FFC:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x827f8008
	if (ctx.cr6.eq) goto loc_827F8008;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
loc_827F8008:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x827f7fe8
	if (!ctx.cr0.eq) goto loc_827F7FE8;
loc_827F8014:
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_827F801C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F8028"))) PPC_WEAK_FUNC(sub_827F8028);
PPC_FUNC_IMPL(__imp__sub_827F8028) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x827f8070
	if (!ctx.cr6.gt) goto loc_827F8070;
	// li r8,0
	ctx.r8.s64 = 0;
loc_827F8044:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x827f8070
	if (!ctx.cr6.eq) goto loc_827F8070;
	// lwz r7,72(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwzx r7,r7,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x827f8060
	if (!ctx.cr6.eq) goto loc_827F8060;
	// li r3,1
	ctx.r3.s64 = 1;
loc_827F8060:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x827f8044
	if (ctx.cr6.lt) goto loc_827F8044;
loc_827F8070:
	// lwz r9,100(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
loc_827F8088:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x827f80a8
	if (ctx.cr6.eq) goto loc_827F80A8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x827f8088
	if (ctx.cr6.lt) goto loc_827F8088;
	// blr 
	return;
loc_827F80A8:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F80B0"))) PPC_WEAK_FUNC(sub_827F80B0);
PPC_FUNC_IMPL(__imp__sub_827F80B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x827F80B8;
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
	ctx.lr = 0x827F80D4;
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
	ctx.lr = 0x827F80E8;
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
	// beq cr6,0x827f811c
	if (ctx.cr6.eq) goto loc_827F811C;
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332c38
	ctx.lr = 0x827F811C;
	sub_82332C38(ctx, base);
loc_827F811C:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x827f8210
	if (!ctx.cr6.eq) goto loc_827F8210;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827f82c4
	if (!ctx.cr6.gt) goto loc_827F82C4;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// lis r27,-31949
	ctx.r27.s64 = -2093809664;
loc_827F813C:
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
	ctx.lr = 0x827F8158;
	sub_82411DC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827f81d0
	if (ctx.cr0.eq) goto loc_827F81D0;
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827f81a0
	if (ctx.cr6.eq) goto loc_827F81A0;
	// bl 0x8269b4d8
	ctx.lr = 0x827F8170;
	sub_8269B4D8(ctx, base);
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
	ctx.lr = 0x827F8188;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// bne 0x827f8198
	if (!ctx.cr0.eq) goto loc_827F8198;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_827F8198:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x827f81a4
	goto loc_827F81A4;
loc_827F81A0:
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
loc_827F81A4:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332d50
	ctx.lr = 0x827F81B8;
	sub_82332D50(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827f81f8
	if (ctx.cr0.eq) goto loc_827F81F8;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// b 0x827f81f8
	goto loc_827F81F8;
loc_827F81D0:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332d50
	ctx.lr = 0x827F81E4;
	sub_82332D50(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827f81f8
	if (ctx.cr0.eq) goto loc_827F81F8;
	// stw r24,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r24.u32);
loc_827F81F8:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x827f813c
	if (ctx.cr6.lt) goto loc_827F813C;
	// b 0x827f82c4
	goto loc_827F82C4;
loc_827F8210:
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827f82c4
	if (!ctx.cr6.gt) goto loc_827F82C4;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_827F8220:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// bl 0x82846fb0
	ctx.lr = 0x827F8230;
	sub_82846FB0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827f8250
	if (ctx.cr6.eq) goto loc_827F8250;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827F8248;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x827f8254
	goto loc_827F8254;
loc_827F8250:
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
loc_827F8254:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827f8288
	if (ctx.cr6.eq) goto loc_827F8288;
	// bl 0x8269b4d8
	ctx.lr = 0x827F8260;
	sub_8269B4D8(ctx, base);
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
	ctx.lr = 0x827F8278;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x827f8284
	if (!ctx.cr0.eq) goto loc_827F8284;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
loc_827F8284:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_827F8288:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332d50
	ctx.lr = 0x827F829C;
	sub_82332D50(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827f82b0
	if (ctx.cr0.eq) goto loc_827F82B0;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
loc_827F82B0:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x827f8220
	if (ctx.cr6.lt) goto loc_827F8220;
loc_827F82C4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F82D0"))) PPC_WEAK_FUNC(sub_827F82D0);
PPC_FUNC_IMPL(__imp__sub_827F82D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x827F82D8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,14544
	ctx.r3.s64 = ctx.r11.s64 + 14544;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x828165a8
	ctx.lr = 0x827F82F4;
	sub_828165A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82846e98
	ctx.lr = 0x827F8308;
	sub_82846E98(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// add r29,r10,r3
	ctx.r29.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r27,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r27.u32);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x827f833c
	if (ctx.cr6.eq) goto loc_827F833C;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c38
	ctx.lr = 0x827F833C;
	sub_82332C38(ctx, base);
loc_827F833C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827f8388
	if (!ctx.cr6.gt) goto loc_827F8388;
loc_827F8348:
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r28,0(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332d50
	ctx.lr = 0x827F8360;
	sub_82332D50(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827f8374
	if (ctx.cr0.eq) goto loc_827F8374;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
loc_827F8374:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x827f8348
	if (ctx.cr6.lt) goto loc_827F8348;
loc_827F8388:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F8390"))) PPC_WEAK_FUNC(sub_827F8390);
PPC_FUNC_IMPL(__imp__sub_827F8390) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x8239d768
	ctx.lr = 0x827F83B4;
	sub_8239D768(ctx, base);
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x8239d768
	ctx.lr = 0x827F83BC;
	sub_8239D768(ctx, base);
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x8239d768
	ctx.lr = 0x827F83C4;
	sub_8239D768(ctx, base);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x8239d768
	ctx.lr = 0x827F83CC;
	sub_8239D768(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82833238
	ctx.lr = 0x827F83D4;
	sub_82833238(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827f83e4
	if (ctx.cr0.eq) goto loc_827F83E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x827F83E4;
	sub_82332DB8(ctx, base);
loc_827F83E4:
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

__attribute__((alias("__imp__sub_827F8400"))) PPC_WEAK_FUNC(sub_827F8400);
PPC_FUNC_IMPL(__imp__sub_827F8400) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r11,2332
	ctx.r3.s64 = ctx.r11.s64 + 2332;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F8410"))) PPC_WEAK_FUNC(sub_827F8410);
PPC_FUNC_IMPL(__imp__sub_827F8410) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827df6e8
	ctx.lr = 0x827F8430;
	sub_827DF6E8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x827f8440
	if (!ctx.cr6.eq) goto loc_827F8440;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x827f8454
	goto loc_827F8454;
loc_827F8440:
	// bl 0x82333d20
	ctx.lr = 0x827F8444;
	sub_82333D20(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x827f8454
	if (ctx.cr6.eq) goto loc_827F8454;
	// li r3,0
	ctx.r3.s64 = 0;
loc_827F8454:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F8470"))) PPC_WEAK_FUNC(sub_827F8470);
PPC_FUNC_IMPL(__imp__sub_827F8470) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// beq cr6,0x827f84b0
	if (ctx.cr6.eq) goto loc_827F84B0;
	// bl 0x827df6e8
	ctx.lr = 0x827F8490;
	sub_827DF6E8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x827f84a0
	if (!ctx.cr6.eq) goto loc_827F84A0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827f84b4
	goto loc_827F84B4;
loc_827F84A0:
	// bl 0x82333d20
	ctx.lr = 0x827F84A4;
	sub_82333D20(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x827f84b4
	if (ctx.cr6.eq) goto loc_827F84B4;
loc_827F84B0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827F84B4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F84C8"))) PPC_WEAK_FUNC(sub_827F84C8);
PPC_FUNC_IMPL(__imp__sub_827F84C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x827df6e8
	sub_827DF6E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F84D0"))) PPC_WEAK_FUNC(sub_827F84D0);
PPC_FUNC_IMPL(__imp__sub_827F84D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x82833108
	ctx.lr = 0x827F84F0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x827f8558
	if (ctx.cr0.eq) goto loc_827F8558;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// addi r11,r11,14104
	ctx.r11.s64 = ctx.r11.s64 + 14104;
	// addi r10,r10,15144
	ctx.r10.s64 = ctx.r10.s64 + 15144;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r4,r30,12
	ctx.r4.s64 = ctx.r30.s64 + 12;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82873b58
	ctx.lr = 0x827F852C;
	sub_82873B58(ctx, base);
	// addi r4,r30,36
	ctx.r4.s64 = ctx.r30.s64 + 36;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x827f8578
	ctx.lr = 0x827F8538;
	sub_827F8578(ctx, base);
	// addi r4,r30,60
	ctx.r4.s64 = ctx.r30.s64 + 60;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x82873b58
	ctx.lr = 0x827F8544;
	sub_82873B58(ctx, base);
	// addi r4,r30,84
	ctx.r4.s64 = ctx.r30.s64 + 84;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x827f8578
	ctx.lr = 0x827F8550;
	sub_827F8578(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x827f855c
	goto loc_827F855C;
loc_827F8558:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827F855C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F8578"))) PPC_WEAK_FUNC(sub_827F8578);
PPC_FUNC_IMPL(__imp__sub_827F8578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x827F8580;
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
	// li r11,4
	ctx.r11.s64 = 4;
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
	// beq cr6,0x827f8630
	if (ctx.cr6.eq) goto loc_827F8630;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827f8630
	if (!ctx.cr6.gt) goto loc_827F8630;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827f85dc
	if (ctx.cr0.eq) goto loc_827F85DC;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82332c38
	ctx.lr = 0x827F85DC;
	sub_82332C38(ctx, base);
loc_827F85DC:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827f8630
	if (!ctx.cr6.gt) goto loc_827F8630;
loc_827F85EC:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332d50
	ctx.lr = 0x827F8600;
	sub_82332D50(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827f861c
	if (ctx.cr0.eq) goto loc_827F861C;
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwzx r10,r10,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_827F861C:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x827f85ec
	if (ctx.cr6.lt) goto loc_827F85EC;
loc_827F8630:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F8640"))) PPC_WEAK_FUNC(sub_827F8640);
PPC_FUNC_IMPL(__imp__sub_827F8640) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r11,15216
	ctx.r3.s64 = ctx.r11.s64 + 15216;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F8650"))) PPC_WEAK_FUNC(sub_827F8650);
PPC_FUNC_IMPL(__imp__sub_827F8650) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x827f8688
	if (ctx.cr6.eq) goto loc_827F8688;
	// bl 0x827f97e8
	ctx.lr = 0x827F8678;
	sub_827F97E8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x827f8688
	if (!ctx.cr6.eq) goto loc_827F8688;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827f8694
	goto loc_827F8694;
loc_827F8688:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8269fa70
	ctx.lr = 0x827F8694;
	sub_8269FA70(ctx, base);
loc_827F8694:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F86B0"))) PPC_WEAK_FUNC(sub_827F86B0);
PPC_FUNC_IMPL(__imp__sub_827F86B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x827f97e8
	sub_827F97E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F86B8"))) PPC_WEAK_FUNC(sub_827F86B8);
PPC_FUNC_IMPL(__imp__sub_827F86B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,992
	ctx.r3.s64 = 992;
	// bl 0x82833108
	ctx.lr = 0x827F86D4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827f86e8
	if (ctx.cr0.eq) goto loc_827F86E8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x827f8750
	ctx.lr = 0x827F86E4;
	sub_827F8750(ctx, base);
	// b 0x827f86ec
	goto loc_827F86EC;
loc_827F86E8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827F86EC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F8700"))) PPC_WEAK_FUNC(sub_827F8700);
PPC_FUNC_IMPL(__imp__sub_827F8700) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827f97e8
	ctx.lr = 0x827F8720;
	sub_827F97E8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x827f8734
	if (ctx.cr6.eq) goto loc_827F8734;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8269fac8
	ctx.lr = 0x827F8734;
	sub_8269FAC8(ctx, base);
loc_827F8734:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F8750"))) PPC_WEAK_FUNC(sub_827F8750);
PPC_FUNC_IMPL(__imp__sub_827F8750) {
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
	// bl 0x8269fcb8
	ctx.lr = 0x827F8770;
	sub_8269FCB8(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r31,904
	ctx.r3.s64 = ctx.r31.s64 + 904;
	// addi r11,r11,15240
	ctx.r11.s64 = ctx.r11.s64 + 15240;
	// addi r4,r30,904
	ctx.r4.s64 = ctx.r30.s64 + 904;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lfs f0,824(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 824);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,824(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 824, temp.u32);
	// li r5,32
	ctx.r5.s64 = 32;
	// lfs f0,828(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 828);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,828(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 828, temp.u32);
	// lfs f0,832(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 832);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,832(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 832, temp.u32);
	// lfs f0,836(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 836);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,836(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 836, temp.u32);
	// lfs f0,840(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 840);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,840(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 840, temp.u32);
	// lfs f0,844(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 844);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,844(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 844, temp.u32);
	// lwz r11,848(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// stw r11,848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 848, ctx.r11.u32);
	// lwz r11,852(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 852);
	// stw r11,852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 852, ctx.r11.u32);
	// lwz r11,856(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 856);
	// stw r11,856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 856, ctx.r11.u32);
	// lwz r11,860(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 860);
	// stw r11,860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 860, ctx.r11.u32);
	// lwz r11,864(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 864);
	// stw r11,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r11.u32);
	// lwz r11,868(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 868);
	// stw r11,868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 868, ctx.r11.u32);
	// lwz r11,872(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 872);
	// stw r11,872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 872, ctx.r11.u32);
	// lwz r11,876(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 876);
	// stw r11,876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 876, ctx.r11.u32);
	// lwz r11,880(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 880);
	// stw r11,880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 880, ctx.r11.u32);
	// lwz r11,884(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 884);
	// stw r11,884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 884, ctx.r11.u32);
	// lwz r11,888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 888);
	// stw r11,888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 888, ctx.r11.u32);
	// lwz r11,892(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 892);
	// stw r11,892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 892, ctx.r11.u32);
	// lwz r11,896(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 896);
	// stw r11,896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 896, ctx.r11.u32);
	// lwz r11,900(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 900);
	// stw r11,900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 900, ctx.r11.u32);
	// bl 0x82a4ea80
	ctx.lr = 0x827F882C;
	sub_82A4EA80(ctx, base);
	// addi r3,r31,936
	ctx.r3.s64 = ctx.r31.s64 + 936;
	// addi r4,r30,936
	ctx.r4.s64 = ctx.r30.s64 + 936;
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x82a4ea80
	ctx.lr = 0x827F883C;
	sub_82A4EA80(ctx, base);
	// lwz r11,968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 968);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 968, ctx.r11.u32);
	// lfs f0,972(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 972);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,972(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 972, temp.u32);
	// lfs f0,976(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 976);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,976(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 976, temp.u32);
	// lwz r11,980(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 980);
	// stw r11,980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 980, ctx.r11.u32);
	// lwz r11,984(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 984);
	// stw r11,984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 984, ctx.r11.u32);
	// lwz r11,988(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 988);
	// stw r11,988(r31)
	PPC_STORE_U32(ctx.r31.u32 + 988, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F8888"))) PPC_WEAK_FUNC(sub_827F8888);
PPC_FUNC_IMPL(__imp__sub_827F8888) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827f89d0
	ctx.lr = 0x827F88A8;
	sub_827F89D0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827f88b8
	if (ctx.cr0.eq) goto loc_827F88B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x827F88B8;
	sub_82332DB8(ctx, base);
loc_827F88B8:
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

__attribute__((alias("__imp__sub_827F88D8"))) PPC_WEAK_FUNC(sub_827F88D8);
PPC_FUNC_IMPL(__imp__sub_827F88D8) {
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
	// bl 0x827ee8f8
	ctx.lr = 0x827F88F0;
	sub_827EE8F8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lfs f13,-32760(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32760);
	ctx.f13.f64 = double(temp.f32);
	// lis r6,-32218
	ctx.r6.s64 = -2111438848;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,16620(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16620);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,-12104(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -12104);
	ctx.f12.f64 = double(temp.f32);
	// lis r5,-32215
	ctx.r5.s64 = -2111242240;
	// addi r8,r6,15240
	ctx.r8.s64 = ctx.r6.s64 + 15240;
	// lfs f11,18320(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 18320);
	ctx.f11.f64 = double(temp.f32);
	// addi r9,r10,30356
	ctx.r9.s64 = ctx.r10.s64 + 30356;
	// stfs f13,836(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 836, temp.u32);
	// lis r6,32767
	ctx.r6.s64 = 2147418112;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// stfs f0,824(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 824, temp.u32);
	// stfs f0,828(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 828, temp.u32);
	// ori r8,r6,65535
	ctx.r8.u64 = ctx.r6.u64 | 65535;
	// stfs f0,832(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 832, temp.u32);
	// li r6,12
	ctx.r6.s64 = 12;
	// stfs f12,840(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 840, temp.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stfs f11,844(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 844, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f13,912(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	ctx.f13.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f13,856(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 856, temp.u32);
	// lfs f0,904(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,848(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 848, temp.u32);
	// stfs f0,852(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 852, temp.u32);
	// lfs f13,10536(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 10536);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,860(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 860, temp.u32);
	// stfs f0,864(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 864, temp.u32);
	// stfs f13,868(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 868, temp.u32);
	// stw r8,896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 896, ctx.r8.u32);
	// lfs f0,7852(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 7852);
	ctx.f0.f64 = double(temp.f32);
	// stw r6,900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 900, ctx.r6.u32);
	// lfs f13,16540(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 16540);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,932(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 932, temp.u32);
	// stfs f13,928(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 928, temp.u32);
	// lfs f10,30356(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 30356);
	ctx.f10.f64 = double(temp.f32);
	// stfs f0,964(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 964, temp.u32);
	// stfs f13,960(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 960, temp.u32);
	// stw r4,968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 968, ctx.r4.u32);
	// stfs f10,976(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 976, temp.u32);
	// stw r11,980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 980, ctx.r11.u32);
	// stb r11,820(r31)
	PPC_STORE_U8(ctx.r31.u32 + 820, ctx.r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F89D0"))) PPC_WEAK_FUNC(sub_827F89D0);
PPC_FUNC_IMPL(__imp__sub_827F89D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x827F89D8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r11,r11,15240
	ctx.r11.s64 = ctx.r11.s64 + 15240;
	// lwz r31,984(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + 984);
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827f8b28
	if (ctx.cr6.eq) goto loc_827F8B28;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
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
	ctx.lr = 0x827F8A24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827f8a40
	if (!ctx.cr6.gt) goto loc_827F8A40;
	// lwz r11,84(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 84);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,84(r27)
	PPC_STORE_U32(ctx.r27.u32 + 84, ctx.r11.u32);
	// b 0x827f8b14
	goto loc_827F8B14;
loc_827F8A40:
	// lwz r11,68(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827f8ae0
	if (!ctx.cr6.eq) goto loc_827F8AE0;
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
	ctx.lr = 0x827F8A64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,964(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 964);
	// addi r29,r26,948
	ctx.r29.s64 = ctx.r26.s64 + 948;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827f8ac0
	if (!ctx.cr6.gt) goto loc_827F8AC0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_827F8A7C:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x827f8aac
	if (!ctx.cr6.eq) goto loc_827F8AAC;
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
	ctx.lr = 0x827F8AA4;
	sub_82332CA8(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
loc_827F8AAC:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x827f8a7c
	if (ctx.cr6.lt) goto loc_827F8A7C;
loc_827F8AC0:
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
	ctx.lr = 0x827F8AE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827F8AE0:
	// lwz r11,84(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x827f8b14
	if (!ctx.cr0.eq) goto loc_827F8B14;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827F8B00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827f8b14
	if (ctx.cr0.eq) goto loc_827F8B14;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r26,924
	ctx.r3.s64 = ctx.r26.s64 + 924;
	// bl 0x82410060
	ctx.lr = 0x827F8B14;
	sub_82410060(ctx, base);
loc_827F8B14:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827F8B28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827F8B28:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r11,r11,22304
	ctx.r11.s64 = ctx.r11.s64 + 22304;
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// bl 0x82833238
	ctx.lr = 0x827F8B3C;
	sub_82833238(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F8B48"))) PPC_WEAK_FUNC(sub_827F8B48);
PPC_FUNC_IMPL(__imp__sub_827F8B48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x827F8B50;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1424
	ctx.r3.s64 = 1424;
	// lwz r11,896(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 896);
	// stw r4,816(r30)
	PPC_STORE_U32(ctx.r30.u32 + 816, ctx.r4.u32);
	// stw r11,1448(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1448, ctx.r11.u32);
	// bl 0x82833108
	ctx.lr = 0x827F8B6C;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// li r29,0
	ctx.r29.s64 = 0;
	// beq 0x827f8bac
	if (ctx.cr0.eq) goto loc_827F8BAC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829bc540
	ctx.lr = 0x827F8B80;
	sub_829BC540(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// addi r11,r11,12968
	ctx.r11.s64 = ctx.r11.s64 + 12968;
	// addi r10,r10,13976
	ctx.r10.s64 = ctx.r10.s64 + 13976;
	// addi r9,r9,14028
	ctx.r9.s64 = ctx.r9.s64 + 14028;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x827f8bb0
	goto loc_827F8BB0;
loc_827F8BAC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_827F8BB0:
	// stw r3,984(r30)
	PPC_STORE_U32(ctx.r30.u32 + 984, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827f8c18
	if (ctx.cr6.eq) goto loc_827F8C18;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r11,448(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 448);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827F8C18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827F8C18:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F8C20"))) PPC_WEAK_FUNC(sub_827F8C20);
PPC_FUNC_IMPL(__imp__sub_827F8C20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x827F8C28;
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
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r29,r11,-32760
	ctx.r29.s64 = ctx.r11.s64 + -32760;
	// lwz r30,816(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// lwz r11,1648(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1648);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827f8d04
	if (ctx.cr6.eq) goto loc_827F8D04;
	// lfs f13,896(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 896);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,40(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x827f8d04
	if (ctx.cr6.lt) goto loc_827F8D04;
	// lfs f0,2832(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2832);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r31,884
	ctx.r4.s64 = ctx.r31.s64 + 884;
	// stfs f0,828(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 828, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f0,1432(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1432);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,836(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 836, temp.u32);
	// lwz r11,1420(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1420);
	// lfs f31,828(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 828);
	ctx.f31.f64 = double(temp.f32);
	// stw r11,884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 884, ctx.r11.u32);
	// lwz r11,1424(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1424);
	// stw r11,888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 888, ctx.r11.u32);
	// lwz r11,1428(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1428);
	// stw r11,892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 892, ctx.r11.u32);
	// bl 0x82817bb8
	ctx.lr = 0x827F8C94;
	sub_82817BB8(ctx, base);
	// lfs f0,1416(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1416);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,856(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 856);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,1408(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1408);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,848(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f12,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f11,f31
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// lfs f10,1412(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1412);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// lfs f9,852(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 852);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f10,f10,f9
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// fmuls f9,f8,f31
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fadds f0,f13,f12
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// fadds f0,f10,f9
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 880, ctx.r11.u32);
	// stw r10,872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 872, ctx.r10.u32);
	// stw r9,876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 876, ctx.r9.u32);
	// b 0x827f8d68
	goto loc_827F8D68;
loc_827F8D04:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827ebf48
	ctx.lr = 0x827F8D0C;
	sub_827EBF48(ctx, base);
	// lwz r11,816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// lwz r30,1412(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1412);
	// lfs f13,824(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 824);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stfs f0,836(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 836, temp.u32);
	// stfs f13,828(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 828, temp.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,1008(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1008);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827F8D38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,620(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 620);
	// stw r11,872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 872, ctx.r11.u32);
	// lwz r11,624(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 624);
	// stw r11,876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 876, ctx.r11.u32);
	// lwz r11,628(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 628);
	// stw r11,880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 880, ctx.r11.u32);
	// lwz r11,656(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 656);
	// stw r11,884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 884, ctx.r11.u32);
	// lwz r11,660(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 660);
	// stw r11,888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 888, ctx.r11.u32);
	// lwz r11,664(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 664);
	// stw r11,892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 892, ctx.r11.u32);
loc_827F8D68:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F8D78"))) PPC_WEAK_FUNC(sub_827F8D78);
PPC_FUNC_IMPL(__imp__sub_827F8D78) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,820(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 820);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_827F8D94"))) PPC_WEAK_FUNC(sub_827F8D94);
PPC_FUNC_IMPL(__imp__sub_827F8D94) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F8D98"))) PPC_WEAK_FUNC(sub_827F8D98);
PPC_FUNC_IMPL(__imp__sub_827F8D98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x827F8DA0;
	__savegprlr_27(ctx, base);
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// lbz r10,820(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 820);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x827f9264
	if (ctx.cr6.eq) goto loc_827F9264;
	// stb r4,820(r31)
	PPC_STORE_U8(ctx.r31.u32 + 820, ctx.r4.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827f91b0
	if (ctx.cr6.eq) goto loc_827F91B0;
	// lwz r3,816(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827f91b0
	if (ctx.cr6.eq) goto loc_827F91B0;
	// bl 0x827ebf48
	ctx.lr = 0x827F8DDC;
	sub_827EBF48(ctx, base);
	// lwz r29,1412(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1412);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
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
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,908(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f30.f64 = double(temp.f32);
	// stw r9,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r9.u32);
	// stfs f31,192(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stw r30,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r30.u32);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// stfs f31,196(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// stfs f31,200(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// stfs f31,204(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stfs f31,208(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stw r30,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r30.u32);
	// stfs f31,212(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stfs f31,216(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stw r30,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r30.u32);
	// stfs f31,220(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// stw r30,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r30.u32);
	// stfs f31,224(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stw r30,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r30.u32);
	// stfs f30,228(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// stw r30,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r30.u32);
	// bl 0x82817bb8
	ctx.lr = 0x827F8E64;
	sub_82817BB8(ctx, base);
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f0,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f11,16668(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16668);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f13,f0,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmadds f13,f12,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fcmpu cr6,f13,f30
	ctx.cr6.compare(ctx.f13.f64, ctx.f30.f64);
	// bne cr6,0x827f8eb0
	if (!ctx.cr6.eq) goto loc_827F8EB0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// b 0x827f8ed8
	goto loc_827F8ED8;
loc_827F8EB0:
	// fcmpu cr6,f13,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// bge cr6,0x827f8ec4
	if (!ctx.cr6.lt) goto loc_827F8EC4;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// fmr f13,f31
	ctx.f13.f64 = ctx.f31.f64;
	// b 0x827f8ed8
	goto loc_827F8ED8;
loc_827F8EC4:
	// fsqrts f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f13,f30,f13
	ctx.f13.f64 = double(float(ctx.f30.f64 / ctx.f13.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
loc_827F8ED8:
	// lfs f12,620(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 620);
	ctx.f12.f64 = double(temp.f32);
	// addi r7,r29,620
	ctx.r7.s64 = ctx.r29.s64 + 620;
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f12,624(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 624);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,620(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 620);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fsubs f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f12,f13,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fcmpu cr6,f12,f30
	ctx.cr6.compare(ctx.f12.f64, ctx.f30.f64);
	// bne cr6,0x827f8f38
	if (!ctx.cr6.eq) goto loc_827F8F38;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// b 0x827f8f5c
	goto loc_827F8F5C;
loc_827F8F38:
	// fcmpu cr6,f12,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bge cr6,0x827f8f4c
	if (!ctx.cr6.lt) goto loc_827F8F4C;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// fmr f13,f31
	ctx.f13.f64 = ctx.f31.f64;
	// b 0x827f8f5c
	goto loc_827F8F5C;
loc_827F8F4C:
	// fsqrts f12,f12
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(sqrt(ctx.f12.f64)));
	// fdivs f12,f30,f12
	ctx.f12.f64 = double(float(ctx.f30.f64 / ctx.f12.f64));
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
loc_827F8F5C:
	// lfs f12,832(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// fmuls f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfs f10,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lfs f9,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// lfs f8,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
	// lwz r5,816(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// lfs f0,16540(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16540);
	ctx.f0.f64 = double(temp.f32);
	// lis r8,4
	ctx.r8.s64 = 262144;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ori r8,r8,8326
	ctx.r8.u64 = ctx.r8.u64 | 8326;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r3,13024(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// fadds f0,f10,f11
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f0,f9,f13
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f0,f8,f12
	ctx.f0.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x82825330
	ctx.lr = 0x827F8FCC;
	sub_82825330(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827f9194
	if (ctx.cr0.eq) goto loc_827F9194;
	// lwz r11,816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// stw r30,980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 980, ctx.r30.u32);
	// lwz r3,1640(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1640);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x827f9010
	if (ctx.cr6.eq) goto loc_827F9010;
	// lbz r11,820(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 820);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x827f9010
	if (ctx.cr0.eq) goto loc_827F9010;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827F9008;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 980, ctx.r11.u32);
loc_827F9010:
	// lwz r11,816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// stw r30,1700(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1700, ctx.r30.u32);
	// lwz r4,900(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 900);
	// lwz r3,816(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// bl 0x827d78f0
	ctx.lr = 0x827F9024;
	sub_827D78F0(ctx, base);
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82833108
	ctx.lr = 0x827F902C;
	sub_82833108(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x827f9058
	if (ctx.cr0.eq) goto loc_827F9058;
	// lwz r4,816(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,4556(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4556);
	// bl 0x82333a80
	ctx.lr = 0x827F9044;
	sub_82333A80(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r11,r11,-488
	ctx.r11.s64 = ctx.r11.s64 + -488;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x827f905c
	goto loc_827F905C;
loc_827F9058:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_827F905C:
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x827F9068;
	sub_82833A30(ctx, base);
	// lwz r11,988(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 988);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827f9078
	if (ctx.cr6.eq) goto loc_827F9078;
	// stw r30,968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 968, ctx.r30.u32);
loc_827F9078:
	// stfs f31,972(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 972, temp.u32);
	// lwz r11,816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// addi r4,r31,904
	ctx.r4.s64 = ctx.r31.s64 + 904;
	// lwz r3,4556(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4556);
	// bl 0x827dbeb0
	ctx.lr = 0x827F908C;
	sub_827DBEB0(ctx, base);
	// lwz r3,816(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// bl 0x827e4c58
	ctx.lr = 0x827F9094;
	sub_827E4C58(ctx, base);
	// lwz r4,816(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r5,r4,2836
	ctx.r5.s64 = ctx.r4.s64 + 2836;
	// bl 0x827e4cb8
	ctx.lr = 0x827F90A4;
	sub_827E4CB8(ctx, base);
	// addi r11,r31,936
	ctx.r11.s64 = ctx.r31.s64 + 936;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82a4ea80
	ctx.lr = 0x827F90B8;
	sub_82A4EA80(ctx, base);
	// lwz r11,816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,4464(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4464, ctx.r30.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827F90D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r30,984(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 984);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x827f9264
	if (ctx.cr6.eq) goto loc_827F9264;
	// addi r5,r31,872
	ctx.r5.s64 = ctx.r31.s64 + 872;
	// addi r4,r31,884
	ctx.r4.s64 = ctx.r31.s64 + 884;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8258d438
	ctx.lr = 0x827F90F0;
	sub_8258D438(ctx, base);
	// lfs f12,148(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lfs f0,832(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// lfs f11,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f11.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmuls f12,f11,f0
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f10,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f8,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f0,f7,f0
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lfs f6,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f13,f13,f31,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f31.f64 + ctx.f12.f64));
	// lfs f11,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f11.f64 = double(temp.f32);
	// fadds f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// lfs f10,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f10.f64 = double(temp.f32);
	// fadds f10,f10,f8
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f8.f64));
	// lfs f8,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f7.f64 = double(temp.f32);
	// fadds f13,f13,f8
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f8.f64));
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// fmadds f12,f11,f31,f9
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f31.f64 + ctx.f9.f64));
	// fmadds f0,f10,f31,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f31.f64 + ctx.f0.f64));
	// fadds f13,f12,f7
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f7.f64));
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// fadds f0,f0,f6
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f6.f64));
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 460);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827F9190;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x827f9264
	goto loc_827F9264;
loc_827F9194:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827F91AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x827f9264
	goto loc_827F9264;
loc_827F91B0:
	// lwz r3,816(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// bl 0x827ebf48
	ctx.lr = 0x827F91B8;
	sub_827EBF48(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r4,896(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 896);
	// lwz r3,816(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// lwz r29,1412(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1412);
	// bl 0x827d78f0
	ctx.lr = 0x827F91CC;
	sub_827D78F0(ctx, base);
	// lwz r11,816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// li r27,1
	ctx.r27.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r27,4464(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4464, ctx.r27.u32);
	// lwz r11,980(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 980);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827f9208
	if (ctx.cr6.eq) goto loc_827F9208;
	// lwz r11,816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,1640(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1640);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827F9204;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 980, ctx.r30.u32);
loc_827F9208:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82833108
	ctx.lr = 0x827F9210;
	sub_82833108(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x827f923c
	if (ctx.cr0.eq) goto loc_827F923C;
	// lwz r4,816(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,4556(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4556);
	// bl 0x82333a80
	ctx.lr = 0x827F9228;
	sub_82333A80(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r11,r11,-488
	ctx.r11.s64 = ctx.r11.s64 + -488;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// b 0x827f9240
	goto loc_827F9240;
loc_827F923C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_827F9240:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x827F9250;
	sub_82833A30(ctx, base);
	// stw r30,2088(r29)
	PPC_STORE_U32(ctx.r29.u32 + 2088, ctx.r30.u32);
	// stw r30,2092(r29)
	PPC_STORE_U32(ctx.r29.u32 + 2092, ctx.r30.u32);
	// stw r30,2096(r29)
	PPC_STORE_U32(ctx.r29.u32 + 2096, ctx.r30.u32);
	// lwz r11,816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// stw r27,1700(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1700, ctx.r27.u32);
loc_827F9264:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F9278"))) PPC_WEAK_FUNC(sub_827F9278);
PPC_FUNC_IMPL(__imp__sub_827F9278) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x827F9280;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82a61738
	ctx.lr = 0x827F9288;
	__savefpr_24(ctx, base);
	// stwu r1,-1104(r1)
	ea = -1104 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// lwz r3,816(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// bl 0x827ebf48
	ctx.lr = 0x827F929C;
	sub_827EBF48(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,816(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r26,1412(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1412);
	// bl 0x827e6900
	ctx.lr = 0x827F92B0;
	sub_827E6900(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r11,184(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827f92e8
	if (ctx.cr6.eq) goto loc_827F92E8;
	// lwz r11,396(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 396);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827f92e8
	if (ctx.cr6.eq) goto loc_827F92E8;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827f92e8
	if (ctx.cr6.eq) goto loc_827F92E8;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lfs f13,24000(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24000);
	ctx.f13.f64 = double(temp.f32);
	// b 0x827f92f0
	goto loc_827F92F0;
loc_827F92E8:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f13,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f13.f64 = double(temp.f32);
loc_827F92F0:
	// lwz r10,1900(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1900);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lwz r8,620(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 620);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r11,816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// addi r30,r26,620
	ctx.r30.s64 = ctx.r26.s64 + 620;
	// addi r29,r31,872
	ctx.r29.s64 = ctx.r31.s64 + 872;
	// addi r4,r11,2836
	ctx.r4.s64 = ctx.r11.s64 + 2836;
	// lfs f12,644(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 644);
	ctx.f12.f64 = double(temp.f32);
	// addi r28,r31,884
	ctx.r28.s64 = ctx.r31.s64 + 884;
	// lfs f11,648(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 648);
	ctx.f11.f64 = double(temp.f32);
	// stw r8,872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 872, ctx.r8.u32);
	// lwz r11,624(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 624);
	// lfs f0,17956(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 17956);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 876, ctx.r11.u32);
	// fmuls f31,f11,f13
	ctx.f31.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lwz r11,628(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 628);
	// fmuls f30,f12,f0
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stw r11,880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 880, ctx.r11.u32);
	// lwz r11,656(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 656);
	// stw r11,884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 884, ctx.r11.u32);
	// lwz r11,660(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 660);
	// stw r11,888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 888, ctx.r11.u32);
	// lwz r11,664(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 664);
	// stw r11,892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 892, ctx.r11.u32);
	// bl 0x8269f950
	ctx.lr = 0x827F9358;
	sub_8269F950(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8258d438
	ctx.lr = 0x827F9368;
	sub_8258D438(ctx, base);
	// lfs f0,832(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f30,f0
	ctx.f11.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// lfs f12,828(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 828);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f2,f31,f0
	ctx.f2.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// lfs f13,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// fneg f31,f12
	ctx.f31.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// lfs f6,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f6.f64 = double(temp.f32);
	// lfs f9,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f9.f64 = double(temp.f32);
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// lfs f4,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f4.f64 = double(temp.f32);
	// fadds f29,f6,f9
	ctx.f29.f64 = double(float(ctx.f6.f64 + ctx.f9.f64));
	// lfs f8,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f8.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// fadds f27,f4,f8
	ctx.f27.f64 = double(float(ctx.f4.f64 + ctx.f8.f64));
	// lfs f7,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f7.f64 = double(temp.f32);
	// lfs f5,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f5.f64 = double(temp.f32);
	// lfs f10,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f10.f64 = double(temp.f32);
	// lfs f3,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f3.f64 = double(temp.f32);
	// fadds f30,f10,f13
	ctx.f30.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// fmuls f26,f13,f11
	ctx.f26.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// lfs f0,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f9,f11
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// fmuls f8,f8,f11
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// fmuls f25,f7,f31
	ctx.f25.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// fmuls f24,f5,f31
	ctx.f24.f64 = double(float(ctx.f5.f64 * ctx.f31.f64));
	// fmuls f31,f3,f31
	ctx.f31.f64 = double(float(ctx.f3.f64 * ctx.f31.f64));
	// lfs f11,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f10,f2,f26
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f2.f64 + ctx.f26.f64));
	// lfs f13,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f9,f6,f2,f9
	ctx.f9.f64 = double(float(ctx.f6.f64 * ctx.f2.f64 + ctx.f9.f64));
	// lfs f12,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f8,f4,f2,f8
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f2.f64 + ctx.f8.f64));
	// fmadds f6,f30,f0,f25
	ctx.f6.f64 = double(float(ctx.f30.f64 * ctx.f0.f64 + ctx.f25.f64));
	// fmadds f4,f29,f0,f24
	ctx.f4.f64 = double(float(ctx.f29.f64 * ctx.f0.f64 + ctx.f24.f64));
	// fmadds f0,f27,f0,f31
	ctx.f0.f64 = double(float(ctx.f27.f64 * ctx.f0.f64 + ctx.f31.f64));
	// fmadds f10,f7,f1,f10
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f1.f64 + ctx.f10.f64));
	// fmadds f9,f5,f1,f9
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f1.f64 + ctx.f9.f64));
	// fmadds f8,f3,f1,f8
	ctx.f8.f64 = double(float(ctx.f3.f64 * ctx.f1.f64 + ctx.f8.f64));
	// fadds f31,f6,f13
	ctx.f31.f64 = double(float(ctx.f6.f64 + ctx.f13.f64));
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fadds f30,f4,f12
	ctx.f30.f64 = double(float(ctx.f4.f64 + ctx.f12.f64));
	// stfs f30,116(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fadds f29,f0,f11
	ctx.f29.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// stfs f29,120(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fadds f0,f10,f13
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f0,f9,f12
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f0,f8,f11
	ctx.f0.f64 = double(float(ctx.f8.f64 + ctx.f11.f64));
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r11,408(r1)
	PPC_STORE_U32(ctx.r1.u32 + 408, ctx.r11.u32);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// stw r11,444(r1)
	PPC_STORE_U32(ctx.r1.u32 + 444, ctx.r11.u32);
	// li r5,808
	ctx.r5.s64 = 808;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lwz r29,112(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r28,116(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r27,120(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r29,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r29.u32);
	// stw r29,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r29.u32);
	// stw r28,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r28.u32);
	// stw r28,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r28.u32);
	// stw r27,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r27.u32);
	// stw r27,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r27.u32);
	// stw r29,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r29.u32);
	// stw r28,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r28.u32);
	// stw r27,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r27.u32);
	// stw r29,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r29.u32);
	// stw r28,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r28.u32);
	// stw r27,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r27.u32);
	// stw r10,412(r1)
	PPC_STORE_U32(ctx.r1.u32 + 412, ctx.r10.u32);
	// stw r10,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r10.u32);
	// stw r11,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r11.u32);
	// stw r11,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r11.u32);
	// lwz r9,816(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// addi r3,r9,2836
	ctx.r3.s64 = ctx.r9.s64 + 2836;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bl 0x82a4ea80
	ctx.lr = 0x827F94B0;
	sub_82A4EA80(ctx, base);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// fsubs f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f30,f13
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f13.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fsubs f0,f29,f12
	ctx.f0.f64 = double(float(ctx.f29.f64 - ctx.f12.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r29,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r29.u32);
	// stw r28,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r27,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r27.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r11,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r11.u32);
	// stw r10,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r10.u32);
	// stw r9,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r9.u32);
	// bl 0x82817280
	ctx.lr = 0x827F9504;
	sub_82817280(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// lwz r11,988(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 988);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827f9538
	if (!ctx.cr6.eq) goto loc_827F9538;
	// lfs f0,840(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 840);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,844(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 844);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,688(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 688, temp.u32);
	// stfs f13,744(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 744, temp.u32);
	// stfs f0,200(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 200, temp.u32);
	// stfs f13,204(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 204, temp.u32);
loc_827F9538:
	// lwz r11,860(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 860);
	// lfs f0,836(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 836);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,864(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 864);
	// stfs f0,548(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 548, temp.u32);
	// lwz r9,868(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 868);
	// lwz r8,848(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r7,852(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 852);
	// lwz r6,856(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 856);
	// lwz r3,984(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 984);
	// stw r11,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r11.u32);
	// stw r10,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r9,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r9.u32);
	// stw r8,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r8.u32);
	// stw r7,472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 472, ctx.r7.u32);
	// stw r6,476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 476, ctx.r6.u32);
	// beq cr6,0x827f95b8
	if (ctx.cr6.eq) goto loc_827F95B8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 460);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827F9590;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,984(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 984);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827f95ac
	if (ctx.cr6.eq) goto loc_827F95AC;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// stw r11,2088(r26)
	PPC_STORE_U32(ctx.r26.u32 + 2088, ctx.r11.u32);
	// b 0x827f95b0
	goto loc_827F95B0;
loc_827F95AC:
	// stw r10,2088(r26)
	PPC_STORE_U32(ctx.r26.u32 + 2088, ctx.r10.u32);
loc_827F95B0:
	// stw r10,2092(r26)
	PPC_STORE_U32(ctx.r26.u32 + 2092, ctx.r10.u32);
	// stw r10,2096(r26)
	PPC_STORE_U32(ctx.r26.u32 + 2096, ctx.r10.u32);
loc_827F95B8:
	// lwz r11,968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 968);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827f9730
	if (!ctx.cr6.eq) goto loc_827F9730;
	// lfs f0,972(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 972);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f28,f0
	ctx.f13.f64 = double(float(ctx.f28.f64 + ctx.f0.f64));
	// lfs f0,976(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 976);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,972(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 972, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x827f95e8
	if (ctx.cr6.lt) goto loc_827F95E8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f0,972(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 972, temp.u32);
	// stw r11,968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 968, ctx.r11.u32);
loc_827F95E8:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f13,972(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 972);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// fdivs f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r31,936
	ctx.r5.s64 = ctx.r31.s64 + 936;
	// lfs f0,-27328(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27328);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r31,904
	ctx.r4.s64 = ctx.r31.s64 + 904;
	// lfs f13,16540(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16540);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bl 0x82819320
	ctx.lr = 0x827F9620;
	sub_82819320(ctx, base);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lwz r3,816(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// lfs f31,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f30.f64 = double(temp.f32);
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// lfs f29,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f29.f64 = double(temp.f32);
	// fsubs f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f30.f64));
	// fsubs f12,f12,f29
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f29.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x827e4198
	ctx.lr = 0x827F965C;
	sub_827E4198(ctx, base);
	// lwz r11,816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,2836
	ctx.r4.s64 = ctx.r11.s64 + 2836;
	// bl 0x8269f950
	ctx.lr = 0x827F966C;
	sub_8269F950(ctx, base);
	// addi r5,r1,612
	ctx.r5.s64 = ctx.r1.s64 + 612;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,816(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// bl 0x827e4018
	ctx.lr = 0x827F967C;
	sub_827E4018(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f30,f13
	ctx.f13.f64 = double(float(ctx.f30.f64 - ctx.f13.f64));
	// fsubs f12,f29,f12
	ctx.f12.f64 = double(float(ctx.f29.f64 - ctx.f12.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x827e0da0
	ctx.lr = 0x827F96B0;
	sub_827E0DA0(ctx, base);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f30,f13
	ctx.f13.f64 = double(float(ctx.f30.f64 - ctx.f13.f64));
	// fsubs f12,f29,f12
	ctx.f12.f64 = double(float(ctx.f29.f64 - ctx.f12.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82817280
	ctx.lr = 0x827F96E0;
	sub_82817280(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r11,816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// li r5,808
	ctx.r5.s64 = 808;
	// addi r3,r11,2836
	ctx.r3.s64 = ctx.r11.s64 + 2836;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// stw r9,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r9.u32);
	// stw r11,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r11.u32);
	// stw r10,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r10.u32);
	// stw r8,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r8.u32);
	// stw r11,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r11.u32);
	// stw r10,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r10.u32);
	// stw r11,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r11.u32);
	// stw r10,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r10.u32);
	// stw r9,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r9.u32);
	// stw r8,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r8.u32);
	// bl 0x82a4ea80
	ctx.lr = 0x827F9730;
	sub_82A4EA80(ctx, base);
loc_827F9730:
	// addi r1,r1,1104
	ctx.r1.s64 = ctx.r1.s64 + 1104;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82a61784
	ctx.lr = 0x827F973C;
	__restfpr_24(ctx, base);
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F9740"))) PPC_WEAK_FUNC(sub_827F9740);
PPC_FUNC_IMPL(__imp__sub_827F9740) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,20576(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20576);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x827f9780
	if (!ctx.cr0.eq) goto loc_827F9780;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// stw r11,20576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20576, ctx.r11.u32);
	// addi r3,r9,15216
	ctx.r3.s64 = ctx.r9.s64 + 15216;
	// bl 0x82816528
	ctx.lr = 0x827F9778;
	sub_82816528(ctx, base);
	// stw r3,20572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20572, ctx.r3.u32);
	// b 0x827f9784
	goto loc_827F9784;
loc_827F9780:
	// lwz r3,20572(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20572);
loc_827F9784:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F9798"))) PPC_WEAK_FUNC(sub_827F9798);
PPC_FUNC_IMPL(__imp__sub_827F9798) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827f97e8
	ctx.lr = 0x827F97B8;
	sub_827F97E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827F97CC;
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

__attribute__((alias("__imp__sub_827F97E8"))) PPC_WEAK_FUNC(sub_827F97E8);
PPC_FUNC_IMPL(__imp__sub_827F97E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,20580
	ctx.r31.s64 = ctx.r11.s64 + 20580;
	// lwz r11,20584(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20584);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x827f9830
	if (!ctx.cr0.eq) goto loc_827F9830;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,15340
	ctx.r9.s64 = ctx.r9.s64 + 15340;
	// stw r11,20584(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20584, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-26048
	ctx.r3.s64 = ctx.r11.s64 + -26048;
	// bl 0x82a4c758
	ctx.lr = 0x827F9830;
	sub_82A4C758(ctx, base);
loc_827F9830:
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

__attribute__((alias("__imp__sub_827F9848"))) PPC_WEAK_FUNC(sub_827F9848);
PPC_FUNC_IMPL(__imp__sub_827F9848) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1648(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1648);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827f98bc
	if (ctx.cr6.eq) goto loc_827F98BC;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x827f98bc
	if (ctx.cr6.eq) goto loc_827F98BC;
	// lwz r11,1188(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1188);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x827f988c
	if (ctx.cr0.lt) goto loc_827F988C;
	// lwz r10,1184(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1184);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_827F9874:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x827f98ac
	if (ctx.cr6.eq) goto loc_827F98AC;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// bge 0x827f9874
	if (!ctx.cr0.lt) goto loc_827F9874;
loc_827F988C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_827F9890:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x827f98bc
	if (!ctx.cr0.eq) goto loc_827F98BC;
	// lwz r11,1712(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1712);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827f98b4
	if (ctx.cr6.eq) goto loc_827F98B4;
	// rlwinm r3,r6,0,13,13
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x40000;
	// blr 
	return;
loc_827F98AC:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827f9890
	goto loc_827F9890;
loc_827F98B4:
	// rlwinm r3,r6,0,15,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x10000;
	// blr 
	return;
loc_827F98BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F98C8"))) PPC_WEAK_FUNC(sub_827F98C8);
PPC_FUNC_IMPL(__imp__sub_827F98C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x827F98E8;
	sub_828A6D60(ctx, base);
	// lwz r11,200(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 200);
	// stw r11,1712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1712, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F9908"))) PPC_WEAK_FUNC(sub_827F9908);
PPC_FUNC_IMPL(__imp__sub_827F9908) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r11,15360
	ctx.r3.s64 = ctx.r11.s64 + 15360;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F9918"))) PPC_WEAK_FUNC(sub_827F9918);
PPC_FUNC_IMPL(__imp__sub_827F9918) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x827f9950
	if (ctx.cr6.eq) goto loc_827F9950;
	// bl 0x827f9ec0
	ctx.lr = 0x827F9940;
	sub_827F9EC0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x827f9950
	if (!ctx.cr6.eq) goto loc_827F9950;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827f995c
	goto loc_827F995C;
loc_827F9950:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8269fa70
	ctx.lr = 0x827F995C;
	sub_8269FA70(ctx, base);
loc_827F995C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F9978"))) PPC_WEAK_FUNC(sub_827F9978);
PPC_FUNC_IMPL(__imp__sub_827F9978) {
	PPC_FUNC_PROLOGUE();
	// b 0x827f9ec0
	sub_827F9EC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F9980"))) PPC_WEAK_FUNC(sub_827F9980);
PPC_FUNC_IMPL(__imp__sub_827F9980) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,864
	ctx.r3.s64 = 864;
	// bl 0x82833108
	ctx.lr = 0x827F99A0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x827f99d8
	if (ctx.cr0.eq) goto loc_827F99D8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8269fcb8
	ctx.lr = 0x827F99B4;
	sub_8269FCB8(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r4,r30,824
	ctx.r4.s64 = ctx.r30.s64 + 824;
	// addi r11,r11,15664
	ctx.r11.s64 = ctx.r11.s64 + 15664;
	// addi r3,r31,824
	ctx.r3.s64 = ctx.r31.s64 + 824;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r5,40
	ctx.r5.s64 = 40;
	// bl 0x82a4ea80
	ctx.lr = 0x827F99D0;
	sub_82A4EA80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x827f99dc
	goto loc_827F99DC;
loc_827F99D8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827F99DC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F99F8"))) PPC_WEAK_FUNC(sub_827F99F8);
PPC_FUNC_IMPL(__imp__sub_827F99F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827f9ec0
	ctx.lr = 0x827F9A18;
	sub_827F9EC0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x827f9a2c
	if (ctx.cr6.eq) goto loc_827F9A2C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8269fac8
	ctx.lr = 0x827F9A2C;
	sub_8269FAC8(ctx, base);
loc_827F9A2C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F9A48"))) PPC_WEAK_FUNC(sub_827F9A48);
PPC_FUNC_IMPL(__imp__sub_827F9A48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f0
	ctx.lr = 0x827F9A50;
	__savegprlr_22(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x827ee8f8
	ctx.lr = 0x827F9A5C;
	sub_827EE8F8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// lfs f0,-32456(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32456);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f13,17660(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17660);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r25,r11,30924
	ctx.r25.s64 = ctx.r11.s64 + 30924;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r11,r10,15664
	ctx.r11.s64 = ctx.r10.s64 + 15664;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lis r24,-31949
	ctx.r24.s64 = -2093809664;
	// lfs f0,904(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 912);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-29292(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -29292);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lwz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r6,120(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r11,13024(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13024);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// lwz r5,108(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// stw r6,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r6.u32);
	// beq cr6,0x827f9b24
	if (ctx.cr6.eq) goto loc_827F9B24;
	// rotlwi r3,r5,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r5,r11,15396
	ctx.r5.s64 = ctx.r11.s64 + 15396;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x828c5740
	ctx.lr = 0x827F9B24;
	sub_828C5740(ctx, base);
loc_827F9B24:
	// lwz r11,13024(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13024);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827f9b54
	if (ctx.cr6.eq) goto loc_827F9B54;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r5,r11,15448
	ctx.r5.s64 = ctx.r11.s64 + 15448;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x828c5740
	ctx.lr = 0x827F9B54;
	sub_828C5740(ctx, base);
loc_827F9B54:
	// lwz r11,13024(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13024);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827f9b84
	if (ctx.cr6.eq) goto loc_827F9B84;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r5,r11,15500
	ctx.r5.s64 = ctx.r11.s64 + 15500;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x828c5740
	ctx.lr = 0x827F9B84;
	sub_828C5740(ctx, base);
loc_827F9B84:
	// lwz r11,13024(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13024);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827f9bb4
	if (ctx.cr6.eq) goto loc_827F9BB4;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r5,r11,15552
	ctx.r5.s64 = ctx.r11.s64 + 15552;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x828c5740
	ctx.lr = 0x827F9BB4;
	sub_828C5740(ctx, base);
loc_827F9BB4:
	// lwz r11,13024(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13024);
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r22,r10,7896
	ctx.r22.s64 = ctx.r10.s64 + 7896;
	// li r23,2
	ctx.r23.s64 = 2;
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827f9c74
	if (ctx.cr6.eq) goto loc_827F9C74;
	// rotlwi r29,r10,0
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r27,r11,15604
	ctx.r27.s64 = ctx.r11.s64 + 15604;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// lwz r11,88(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r26,0(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stw r23,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r23.u32);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827F9C28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827f9c54
	if (ctx.cr0.eq) goto loc_827F9C54;
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r4,140(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827f9c44
	if (!ctx.cr6.eq) goto loc_827F9C44;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
loc_827F9C44:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x828c5d40
	ctx.lr = 0x827F9C50;
	sub_828C5D40(ctx, base);
	// li r28,1
	ctx.r28.s64 = 1;
loc_827F9C54:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82333960
	ctx.lr = 0x827F9C5C;
	sub_82333960(ctx, base);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x827f9c74
	if (!ctx.cr6.eq) goto loc_827F9C74;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x828c5800
	ctx.lr = 0x827F9C74;
	sub_828C5800(ctx, base);
loc_827F9C74:
	// lwz r11,13024(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13024);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827f9d20
	if (ctx.cr6.eq) goto loc_827F9D20;
	// rotlwi r29,r10,0
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r28,r11,15632
	ctx.r28.s64 = ctx.r11.s64 + 15632;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// lwz r11,88(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stw r31,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r31.u32);
	// stw r23,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r23.u32);
	// stw r31,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r31.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827F9CD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827f9d00
	if (ctx.cr0.eq) goto loc_827F9D00;
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r4,172(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827f9cf0
	if (!ctx.cr6.eq) goto loc_827F9CF0;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
loc_827F9CF0:
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x828c5d40
	ctx.lr = 0x827F9CFC;
	sub_828C5D40(ctx, base);
	// li r31,1
	ctx.r31.s64 = 1;
loc_827F9D00:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82333960
	ctx.lr = 0x827F9D08;
	sub_82333960(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x827f9d20
	if (!ctx.cr6.eq) goto loc_827F9D20;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x828c5800
	ctx.lr = 0x827F9D20;
	sub_828C5800(ctx, base);
loc_827F9D20:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lwz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lfs f11,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// lwz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stfs f0,856(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 856, temp.u32);
	// lwz r6,120(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stfs f13,860(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 860, temp.u32);
	// stfs f12,836(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 836, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfs f11,840(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 840, temp.u32);
	// stw r11,844(r30)
	PPC_STORE_U32(ctx.r30.u32 + 844, ctx.r11.u32);
	// stw r10,848(r30)
	PPC_STORE_U32(ctx.r30.u32 + 848, ctx.r10.u32);
	// stw r9,852(r30)
	PPC_STORE_U32(ctx.r30.u32 + 852, ctx.r9.u32);
	// stw r8,824(r30)
	PPC_STORE_U32(ctx.r30.u32 + 824, ctx.r8.u32);
	// stw r7,828(r30)
	PPC_STORE_U32(ctx.r30.u32 + 828, ctx.r7.u32);
	// stw r6,832(r30)
	PPC_STORE_U32(ctx.r30.u32 + 832, ctx.r6.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82a4ea40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F9D80"))) PPC_WEAK_FUNC(sub_827F9D80);
PPC_FUNC_IMPL(__imp__sub_827F9D80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,844(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 844);
	// lfs f0,856(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 856);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,848(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 848);
	// lfs f13,860(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 860);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,852(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 852);
	// lfs f12,836(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 836);
	ctx.f12.f64 = double(temp.f32);
	// lwz r8,824(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 824);
	// lfs f11,840(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 840);
	ctx.f11.f64 = double(temp.f32);
	// lwz r7,828(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 828);
	// stfs f0,416(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 416, temp.u32);
	// lwz r6,832(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 832);
	// stfs f13,420(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 420, temp.u32);
	// stfs f12,308(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 308, temp.u32);
	// stw r11,468(r3)
	PPC_STORE_U32(ctx.r3.u32 + 468, ctx.r11.u32);
	// stfs f11,312(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 312, temp.u32);
	// stw r10,472(r3)
	PPC_STORE_U32(ctx.r3.u32 + 472, ctx.r10.u32);
	// stw r9,476(r3)
	PPC_STORE_U32(ctx.r3.u32 + 476, ctx.r9.u32);
	// stw r8,360(r3)
	PPC_STORE_U32(ctx.r3.u32 + 360, ctx.r8.u32);
	// stw r7,364(r3)
	PPC_STORE_U32(ctx.r3.u32 + 364, ctx.r7.u32);
	// stw r6,368(r3)
	PPC_STORE_U32(ctx.r3.u32 + 368, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F9DD8"))) PPC_WEAK_FUNC(sub_827F9DD8);
PPC_FUNC_IMPL(__imp__sub_827F9DD8) {
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
	// li r3,864
	ctx.r3.s64 = 864;
	// bl 0x82833108
	ctx.lr = 0x827F9DEC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827f9dfc
	if (ctx.cr0.eq) goto loc_827F9DFC;
	// bl 0x827f9a48
	ctx.lr = 0x827F9DF8;
	sub_827F9A48(ctx, base);
	// b 0x827f9e00
	goto loc_827F9E00;
loc_827F9DFC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827F9E00:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F9E10"))) PPC_WEAK_FUNC(sub_827F9E10);
PPC_FUNC_IMPL(__imp__sub_827F9E10) {
	PPC_FUNC_PROLOGUE();
	// li r3,864
	ctx.r3.s64 = 864;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F9E18"))) PPC_WEAK_FUNC(sub_827F9E18);
PPC_FUNC_IMPL(__imp__sub_827F9E18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,20560(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20560);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x827f9e58
	if (!ctx.cr0.eq) goto loc_827F9E58;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// stw r11,20560(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20560, ctx.r11.u32);
	// addi r3,r9,15360
	ctx.r3.s64 = ctx.r9.s64 + 15360;
	// bl 0x82816528
	ctx.lr = 0x827F9E50;
	sub_82816528(ctx, base);
	// stw r3,20556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20556, ctx.r3.u32);
	// b 0x827f9e5c
	goto loc_827F9E5C;
loc_827F9E58:
	// lwz r3,20556(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20556);
loc_827F9E5C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F9E70"))) PPC_WEAK_FUNC(sub_827F9E70);
PPC_FUNC_IMPL(__imp__sub_827F9E70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827f9ec0
	ctx.lr = 0x827F9E90;
	sub_827F9EC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827F9EA4;
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

__attribute__((alias("__imp__sub_827F9EC0"))) PPC_WEAK_FUNC(sub_827F9EC0);
PPC_FUNC_IMPL(__imp__sub_827F9EC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,20564
	ctx.r31.s64 = ctx.r11.s64 + 20564;
	// lwz r11,20568(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20568);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x827f9f08
	if (!ctx.cr0.eq) goto loc_827F9F08;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,15760
	ctx.r9.s64 = ctx.r9.s64 + 15760;
	// stw r11,20568(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20568, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-26024
	ctx.r3.s64 = ctx.r11.s64 + -26024;
	// bl 0x82a4c758
	ctx.lr = 0x827F9F08;
	sub_82A4C758(ctx, base);
loc_827F9F08:
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

__attribute__((alias("__imp__sub_827F9F20"))) PPC_WEAK_FUNC(sub_827F9F20);
PPC_FUNC_IMPL(__imp__sub_827F9F20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r11,15780
	ctx.r3.s64 = ctx.r11.s64 + 15780;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F9F30"))) PPC_WEAK_FUNC(sub_827F9F30);
PPC_FUNC_IMPL(__imp__sub_827F9F30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x827f9f68
	if (ctx.cr6.eq) goto loc_827F9F68;
	// bl 0x827fbeb0
	ctx.lr = 0x827F9F58;
	sub_827FBEB0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x827f9f68
	if (!ctx.cr6.eq) goto loc_827F9F68;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827f9f74
	goto loc_827F9F74;
loc_827F9F68:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8269fa70
	ctx.lr = 0x827F9F74;
	sub_8269FA70(ctx, base);
loc_827F9F74:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F9F90"))) PPC_WEAK_FUNC(sub_827F9F90);
PPC_FUNC_IMPL(__imp__sub_827F9F90) {
	PPC_FUNC_PROLOGUE();
	// b 0x827fbeb0
	sub_827FBEB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F9F98"))) PPC_WEAK_FUNC(sub_827F9F98);
PPC_FUNC_IMPL(__imp__sub_827F9F98) {
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
	// li r3,892
	ctx.r3.s64 = 892;
	// bl 0x82833108
	ctx.lr = 0x827F9FB8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x827fa028
	if (ctx.cr0.eq) goto loc_827FA028;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8269fcb8
	ctx.lr = 0x827F9FCC;
	sub_8269FCB8(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r4,r30,852
	ctx.r4.s64 = ctx.r30.s64 + 852;
	// addi r11,r11,15816
	ctx.r11.s64 = ctx.r11.s64 + 15816;
	// addi r3,r31,852
	ctx.r3.s64 = ctx.r31.s64 + 852;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r5,40
	ctx.r5.s64 = 40;
	// lwz r11,824(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 824);
	// stw r11,824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 824, ctx.r11.u32);
	// lwz r11,828(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 828);
	// stw r11,828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 828, ctx.r11.u32);
	// lwz r11,832(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 832);
	// stw r11,832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 832, ctx.r11.u32);
	// lwz r11,836(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 836);
	// stw r11,836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 836, ctx.r11.u32);
	// lwz r11,840(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 840);
	// stw r11,840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 840, ctx.r11.u32);
	// lfs f0,844(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 844);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,844(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 844, temp.u32);
	// lfs f0,848(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,848(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 848, temp.u32);
	// bl 0x82a4ea80
	ctx.lr = 0x827FA020;
	sub_82A4EA80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x827fa02c
	goto loc_827FA02C;
loc_827FA028:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827FA02C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FA048"))) PPC_WEAK_FUNC(sub_827FA048);
PPC_FUNC_IMPL(__imp__sub_827FA048) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827fbeb0
	ctx.lr = 0x827FA068;
	sub_827FBEB0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x827fa07c
	if (ctx.cr6.eq) goto loc_827FA07C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8269fac8
	ctx.lr = 0x827FA07C;
	sub_8269FAC8(ctx, base);
loc_827FA07C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FA098"))) PPC_WEAK_FUNC(sub_827FA098);
PPC_FUNC_IMPL(__imp__sub_827FA098) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x827FA0A0;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82a61734
	ctx.lr = 0x827FA0A8;
	__savefpr_23(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lfs f13,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f11,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f30,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f11,f13,f13
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f11,f0,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fmadds f11,f12,f12,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f11.f64));
	// fcmpu cr6,f11,f30
	ctx.cr6.compare(ctx.f11.f64, ctx.f30.f64);
	// bne cr6,0x827fa13c
	if (!ctx.cr6.eq) goto loc_827FA13C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f25,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f25.f64 = double(temp.f32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lfs f24,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f24.f64 = double(temp.f32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lfs f23,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f23.f64 = double(temp.f32);
	// b 0x827fa170
	goto loc_827FA170;
loc_827FA13C:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f10,16668(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16668);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// bge cr6,0x827fa15c
	if (!ctx.cr6.lt) goto loc_827FA15C;
	// fmr f25,f31
	ctx.f25.f64 = ctx.f31.f64;
	// fmr f24,f31
	ctx.f24.f64 = ctx.f31.f64;
	// fmr f23,f31
	ctx.f23.f64 = ctx.f31.f64;
	// b 0x827fa170
	goto loc_827FA170;
loc_827FA15C:
	// fsqrts f11,f11
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(sqrt(ctx.f11.f64)));
	// fdivs f11,f30,f11
	ctx.f11.f64 = double(float(ctx.f30.f64 / ctx.f11.f64));
	// fmuls f25,f11,f0
	ctx.f25.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f24,f11,f12
	ctx.f24.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f23,f11,f13
	ctx.f23.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
loc_827FA170:
	// fmr f28,f30
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f30.f64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// fmr f29,f30
	ctx.f29.f64 = ctx.f30.f64;
	// fmr f26,f30
	ctx.f26.f64 = ctx.f30.f64;
	// fmr f27,f30
	ctx.f27.f64 = ctx.f30.f64;
	// beq cr6,0x827fa1cc
	if (ctx.cr6.eq) goto loc_827FA1CC;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x829bed50
	ctx.lr = 0x827FA190;
	sub_829BED50(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x827fa1cc
	if (ctx.cr0.eq) goto loc_827FA1CC;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r11,136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827FA1AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f28,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f28.f64 = double(temp.f32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lfs f29,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f29.f64 = double(temp.f32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
loc_827FA1CC:
	// lwz r3,816(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 816);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827fa218
	if (ctx.cr6.eq) goto loc_827FA218;
	// bl 0x829bed50
	ctx.lr = 0x827FA1DC;
	sub_829BED50(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x827fa218
	if (ctx.cr0.eq) goto loc_827FA218;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r11,136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827FA1F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lfs f27,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f27.f64 = double(temp.f32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lfs f26,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f26.f64 = double(temp.f32);
loc_827FA218:
	// fcmpu cr6,f28,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f28.f64, ctx.f29.f64);
	// ble cr6,0x827fa228
	if (!ctx.cr6.gt) goto loc_827FA228;
	// fmr f0,f28
	ctx.f0.f64 = ctx.f28.f64;
	// b 0x827fa22c
	goto loc_827FA22C;
loc_827FA228:
	// fmr f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f29.f64;
loc_827FA22C:
	// fmuls f13,f25,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f25.f64 * ctx.f0.f64));
	// lfs f12,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f0,f24
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f24.f64));
	// lfs f10,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f0,f23,f0
	ctx.f0.f64 = double(float(ctx.f23.f64 * ctx.f0.f64));
	// lfs f9,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f26,f27
	ctx.cr6.compare(ctx.f26.f64, ctx.f27.f64);
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f13,f11,f10
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ble cr6,0x827fa26c
	if (!ctx.cr6.gt) goto loc_827FA26C;
	// fmr f0,f26
	ctx.f0.f64 = ctx.f26.f64;
	// b 0x827fa270
	goto loc_827FA270;
loc_827FA26C:
	// fmr f0,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f27.f64;
loc_827FA270:
	// fmuls f13,f25,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f25.f64 * ctx.f0.f64));
	// li r11,0
	ctx.r11.s64 = 0;
	// fmuls f12,f0,f24
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f24.f64));
	// lfs f11,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f23,f0
	ctx.f0.f64 = double(float(ctx.f23.f64 * ctx.f0.f64));
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stw r11,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r11.u32);
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stw r10,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r10.u32);
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// stfs f31,156(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stw r11,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r11.u32);
	// stfs f31,160(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// fsubs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// fsubs f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// stfs f31,172(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// fsubs f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// stfs f31,176(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f30,180(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stw r11,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r11.u32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stw r11,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stw r11,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r11.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bne cr6,0x827fa2fc
	if (!ctx.cr6.eq) goto loc_827FA2FC;
	// addi r29,r1,144
	ctx.r29.s64 = ctx.r1.s64 + 144;
loc_827FA2FC:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r8,824(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 824);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r5,816(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 816);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,13024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// bl 0x82825330
	ctx.lr = 0x827FA324;
	sub_82825330(ctx, base);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82a61780
	ctx.lr = 0x827FA330;
	__restfpr_23(ctx, base);
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827FA338"))) PPC_WEAK_FUNC(sub_827FA338);
PPC_FUNC_IMPL(__imp__sub_827FA338) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x827FA340;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82a6173c
	ctx.lr = 0x827FA348;
	__savefpr_25(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// lfs f13,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f0,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f10,f12,f12
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f10,f13,f13,f10
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fmadds f10,f11,f11,f10
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// bne cr6,0x827fa3d4
	if (!ctx.cr6.eq) goto loc_827FA3D4;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f31,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f31.f64 = double(temp.f32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lfs f26,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f26.f64 = double(temp.f32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lfs f25,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f25.f64 = double(temp.f32);
	// b 0x827fa40c
	goto loc_827FA40C;
loc_827FA3D4:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f9,16668(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16668);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f10,f9
	ctx.cr6.compare(ctx.f10.f64, ctx.f9.f64);
	// bge cr6,0x827fa3f8
	if (!ctx.cr6.lt) goto loc_827FA3F8;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f31,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fmr f26,f31
	ctx.f26.f64 = ctx.f31.f64;
	// fmr f25,f31
	ctx.f25.f64 = ctx.f31.f64;
	// b 0x827fa40c
	goto loc_827FA40C;
loc_827FA3F8:
	// fsqrts f10,f10
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(sqrt(ctx.f10.f64)));
	// fdivs f10,f0,f10
	ctx.f10.f64 = double(float(ctx.f0.f64 / ctx.f10.f64));
	// fmuls f31,f10,f13
	ctx.f31.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f26,f10,f11
	ctx.f26.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// fmuls f25,f10,f12
	ctx.f25.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
loc_827FA40C:
	// fmr f29,f0
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f0.f64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// fmr f30,f0
	ctx.f30.f64 = ctx.f0.f64;
	// fmr f27,f0
	ctx.f27.f64 = ctx.f0.f64;
	// fmr f28,f0
	ctx.f28.f64 = ctx.f0.f64;
	// beq cr6,0x827fa468
	if (ctx.cr6.eq) goto loc_827FA468;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x829bed50
	ctx.lr = 0x827FA42C;
	sub_829BED50(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x827fa468
	if (ctx.cr0.eq) goto loc_827FA468;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r11,136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827FA448;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f29,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f29.f64 = double(temp.f32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lfs f30,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f30.f64 = double(temp.f32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
loc_827FA468:
	// lwz r3,816(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 816);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827fa4b4
	if (ctx.cr6.eq) goto loc_827FA4B4;
	// bl 0x829bed50
	ctx.lr = 0x827FA478;
	sub_829BED50(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x827fa4b4
	if (ctx.cr0.eq) goto loc_827FA4B4;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r11,136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827FA494;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lfs f28,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f28.f64 = double(temp.f32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lfs f27,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f27.f64 = double(temp.f32);
loc_827FA4B4:
	// fcmpu cr6,f29,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f29.f64, ctx.f30.f64);
	// ble cr6,0x827fa4c4
	if (!ctx.cr6.gt) goto loc_827FA4C4;
	// fmr f0,f29
	ctx.f0.f64 = ctx.f29.f64;
	// b 0x827fa4c8
	goto loc_827FA4C8;
loc_827FA4C4:
	// fmr f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f30.f64;
loc_827FA4C8:
	// fmuls f13,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// lfs f12,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f0,f26
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f26.f64));
	// lfs f10,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f0,f25,f0
	ctx.f0.f64 = double(float(ctx.f25.f64 * ctx.f0.f64));
	// lfs f9,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f27,f28
	ctx.cr6.compare(ctx.f27.f64, ctx.f28.f64);
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f13,f11,f10
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ble cr6,0x827fa508
	if (!ctx.cr6.gt) goto loc_827FA508;
	// fmr f0,f27
	ctx.f0.f64 = ctx.f27.f64;
	// b 0x827fa50c
	goto loc_827FA50C;
loc_827FA508:
	// fmr f0,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f28.f64;
loc_827FA50C:
	// fmuls f13,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f0,f26
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f26.f64));
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f0,f25,f0
	ctx.f0.f64 = double(float(ctx.f25.f64 * ctx.f0.f64));
	// lfs f9,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r8,816(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 816);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,13024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fsubs f13,f10,f11
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fsubs f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x828253c8
	ctx.lr = 0x827FA560;
	sub_828253C8(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82a61788
	ctx.lr = 0x827FA578;
	__restfpr_25(ctx, base);
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827FA580"))) PPC_WEAK_FUNC(sub_827FA580);
PPC_FUNC_IMPL(__imp__sub_827FA580) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x827FA588;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// lwz r3,816(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 816);
	// bl 0x827ebf48
	ctx.lr = 0x827FA5A0;
	sub_827EBF48(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827fa5b0
	if (ctx.cr0.eq) goto loc_827FA5B0;
	// lwz r25,1412(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1412);
	// b 0x827fa5b4
	goto loc_827FA5B4;
loc_827FA5B0:
	// li r25,0
	ctx.r25.s64 = 0;
loc_827FA5B4:
	// cmplwi r25,0
	ctx.cr0.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq 0x827fa760
	if (ctx.cr0.eq) goto loc_827FA760;
	// lwz r11,824(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 824);
	// addi r29,r25,1172
	ctx.r29.s64 = ctx.r25.s64 + 1172;
	// li r27,0
	ctx.r27.s64 = 0;
	// oris r11,r11,5
	ctx.r11.u64 = ctx.r11.u64 | 327680;
	// stw r11,824(r30)
	PPC_STORE_U32(ctx.r30.u32 + 824, ctx.r11.u32);
	// lwz r11,1188(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1188);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827fa640
	if (!ctx.cr6.gt) goto loc_827FA640;
	// li r28,0
	ctx.r28.s64 = 0;
loc_827FA5E0:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwzx r31,r28,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827fa614
	if (ctx.cr6.eq) goto loc_827FA614;
	// bl 0x827e7480
	ctx.lr = 0x827FA5F4;
	sub_827E7480(ctx, base);
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
	ctx.lr = 0x827FA60C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x827fa618
	if (!ctx.cr0.eq) goto loc_827FA618;
loc_827FA614:
	// li r31,0
	ctx.r31.s64 = 0;
loc_827FA618:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827fa62c
	if (ctx.cr6.eq) goto loc_827FA62C;
	// lwz r11,824(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 824);
	// rlwinm r11,r11,0,16,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFEFFFF;
	// stw r11,824(r30)
	PPC_STORE_U32(ctx.r30.u32 + 824, ctx.r11.u32);
loc_827FA62C:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x827fa5e0
	if (ctx.cr6.lt) goto loc_827FA5E0;
loc_827FA640:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f0,36(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// addi r31,r24,12
	ctx.r31.s64 = ctx.r24.s64 + 12;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lfs f31,-11444(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11444);
	ctx.f31.f64 = double(temp.f32);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827fa098
	ctx.lr = 0x827FA67C;
	sub_827FA098(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x827fa68c
	if (!ctx.cr0.eq) goto loc_827FA68C;
loc_827FA684:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827fa764
	goto loc_827FA764;
loc_827FA68C:
	// lwz r11,816(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 816);
	// addi r26,r11,1996
	ctx.r26.s64 = ctx.r11.s64 + 1996;
	// lwz r11,2012(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2012);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827fa760
	if (!ctx.cr6.gt) goto loc_827FA760;
	// lfs f0,36(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827fa338
	ctx.lr = 0x827FA6D8;
	sub_827FA338(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827fa6f0
	if (ctx.cr0.eq) goto loc_827FA6F0;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827fa760
	if (ctx.cr6.eq) goto loc_827FA760;
	// b 0x827fa75c
	goto loc_827FA75C;
loc_827FA6F0:
	// lwz r25,80(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r28,16(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x827fa760
	if (ctx.cr6.eq) goto loc_827FA760;
loc_827FA704:
	// lwz r29,64(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 64);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x827fa74c
	if (!ctx.cr6.gt) goto loc_827FA74C;
	// li r31,0
	ctx.r31.s64 = 0;
loc_827FA718:
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwzx r4,r11,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r11,40(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827FA734;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x827fa770
	if (!ctx.cr0.eq) goto loc_827FA770;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x827fa718
	if (ctx.cr6.lt) goto loc_827FA718;
loc_827FA74C:
	// lwz r27,68(r27)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r27.u32 + 68);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x827fa704
	if (!ctx.cr6.eq) goto loc_827FA704;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_827FA75C:
	// bl 0x82332db8
	ctx.lr = 0x827FA760;
	sub_82332DB8(ctx, base);
loc_827FA760:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827FA764:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
loc_827FA770:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82332db8
	ctx.lr = 0x827FA778;
	sub_82332DB8(ctx, base);
	// b 0x827fa684
	goto loc_827FA684;
}

__attribute__((alias("__imp__sub_827FA780"))) PPC_WEAK_FUNC(sub_827FA780);
PPC_FUNC_IMPL(__imp__sub_827FA780) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x827FA788;
	__savegprlr_25(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// lwz r3,816(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 816);
	// bl 0x827ebf48
	ctx.lr = 0x827FA79C;
	sub_827EBF48(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827fa7b0
	if (ctx.cr0.eq) goto loc_827FA7B0;
	// lwz r11,1412(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1412);
	// b 0x827fa7b4
	goto loc_827FA7B4;
loc_827FA7B0:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_827FA7B4:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x827fa7c4
	if (!ctx.cr0.eq) goto loc_827FA7C4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x827fa9c4
	goto loc_827FA9C4;
loc_827FA7C4:
	// lwz r10,824(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 824);
	// addi r29,r11,1172
	ctx.r29.s64 = ctx.r11.s64 + 1172;
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// oris r10,r10,5
	ctx.r10.u64 = ctx.r10.u64 | 327680;
	// stw r10,824(r27)
	PPC_STORE_U32(ctx.r27.u32 + 824, ctx.r10.u32);
	// lwz r11,1188(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1188);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827fa848
	if (!ctx.cr6.gt) goto loc_827FA848;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_827FA7E8:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwzx r31,r28,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827fa81c
	if (ctx.cr6.eq) goto loc_827FA81C;
	// bl 0x827e7480
	ctx.lr = 0x827FA7FC;
	sub_827E7480(ctx, base);
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
	ctx.lr = 0x827FA814;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x827fa820
	if (!ctx.cr0.eq) goto loc_827FA820;
loc_827FA81C:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_827FA820:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827fa834
	if (ctx.cr6.eq) goto loc_827FA834;
	// lwz r11,824(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 824);
	// rlwinm r11,r11,0,16,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFEFFFF;
	// stw r11,824(r27)
	PPC_STORE_U32(ctx.r27.u32 + 824, ctx.r11.u32);
loc_827FA834:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x827fa7e8
	if (ctx.cr6.lt) goto loc_827FA7E8;
loc_827FA848:
	// lfs f0,28(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,24(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r25,24
	ctx.r10.s64 = ctx.r25.s64 + 24;
	// lfs f10,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bne cr6,0x827fa8b4
	if (!ctx.cr6.eq) goto loc_827FA8B4;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f13,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,904
	ctx.r11.s64 = ctx.r11.s64 + 904;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x827fa8ac
	if (!ctx.cr6.eq) goto loc_827FA8AC;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// b 0x827fa8f8
	goto loc_827FA8F8;
loc_827FA8AC:
	// lfs f11,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// b 0x827fa8f4
	goto loc_827FA8F4;
loc_827FA8B4:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f13,16668(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16668);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// addi r11,r11,904
	ctx.r11.s64 = ctx.r11.s64 + 904;
	// bge cr6,0x827fa8dc
	if (!ctx.cr6.lt) goto loc_827FA8DC;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// b 0x827fa8f4
	goto loc_827FA8F4;
loc_827FA8DC:
	// fsqrts f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(sqrt(ctx.f0.f64)));
	// lfs f11,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 / ctx.f13.f64));
	// fmuls f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// fmuls f11,f9,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
loc_827FA8F4:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
loc_827FA8F8:
	// lfs f9,848(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 848);
	ctx.f9.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// fmuls f8,f13,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// lfs f7,36(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 36);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// lfs f5,20(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f11,f11,f9
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// lfs f6,12(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// lfs f9,16(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// lfs f13,-11444(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11444);
	ctx.f13.f64 = double(temp.f32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// fmuls f13,f7,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r7,r25,12
	ctx.r7.s64 = ctx.r25.s64 + 12;
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r3,13024(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13024);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r8,824(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 824);
	// fadds f13,f5,f8
	ctx.f13.f64 = double(float(ctx.f5.f64 + ctx.f8.f64));
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fadds f13,f6,f12
	ctx.f13.f64 = double(float(ctx.f6.f64 + ctx.f12.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f13,f9,f11
	ctx.f13.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r5,816(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 816);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stw r30,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r30.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stw r30,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r30.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stw r30,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r30.u32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stw r30,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r30.u32);
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f10,148(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// bl 0x82825330
	ctx.lr = 0x827FA9BC;
	sub_82825330(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_827FA9C4:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827FA9D0"))) PPC_WEAK_FUNC(sub_827FA9D0);
PPC_FUNC_IMPL(__imp__sub_827FA9D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9dc
	ctx.lr = 0x827FA9D8;
	__savegprlr_17(ctx, base);
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x82a61730
	ctx.lr = 0x827FA9E0;
	__savefpr_22(ctx, base);
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r18,r5
	ctx.r18.u64 = ctx.r5.u64;
	// lwz r3,816(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 816);
	// bl 0x827ebf48
	ctx.lr = 0x827FA9F8;
	sub_827EBF48(ctx, base);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827faa0c
	if (ctx.cr0.eq) goto loc_827FAA0C;
	// lwz r21,1412(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1412);
	// b 0x827faa10
	goto loc_827FAA10;
loc_827FAA0C:
	// mr r21,r25
	ctx.r21.u64 = ctx.r25.u64;
loc_827FAA10:
	// cmplwi r21,0
	ctx.cr0.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// bne 0x827faa2c
	if (!ctx.cr0.eq) goto loc_827FAA2C;
loc_827FAA18:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827FAA1C:
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x82a6177c
	ctx.lr = 0x827FAA28;
	__restfpr_22(ctx, base);
	// b 0x82a4ea2c
	__restgprlr_17(ctx, base);
	return;
loc_827FAA2C:
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r11,816(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 816);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// addi r4,r11,1996
	ctx.r4.s64 = ctx.r11.s64 + 1996;
	// mr r20,r25
	ctx.r20.u64 = ctx.r25.u64;
	// lfs f31,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// lfs f24,908(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 908);
	ctx.f24.f64 = double(temp.f32);
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f24,152(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// bl 0x82873b58
	ctx.lr = 0x827FAA5C;
	sub_82873B58(ctx, base);
	// li r19,2
	ctx.r19.s64 = 2;
	// li r17,1
	ctx.r17.s64 = 1;
	// lwz r28,320(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x827fab18
	if (!ctx.cr6.gt) goto loc_827FAB18;
	// lfs f0,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r8,r1,92
	ctx.r8.s64 = ctx.r1.s64 + 92;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r6,r31,12
	ctx.r6.s64 = ctx.r31.s64 + 12;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x827fa338
	ctx.lr = 0x827FAAA0;
	sub_827FA338(ctx, base);
	// lwz r26,92(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x827fab08
	if (!ctx.cr0.eq) goto loc_827FAB08;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x827fab18
	if (ctx.cr6.eq) goto loc_827FAB18;
loc_827FAAB4:
	// lwz r27,64(r26)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + 64);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x827faafc
	if (!ctx.cr6.gt) goto loc_827FAAFC;
	// lwz r30,316(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_827FAAC8:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827FAAE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827faaf0
	if (ctx.cr0.eq) goto loc_827FAAF0;
	// mr r20,r17
	ctx.r20.u64 = ctx.r17.u64;
	// stw r19,20(r18)
	PPC_STORE_U32(ctx.r18.u32 + 20, ctx.r19.u32);
loc_827FAAF0:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x827faac8
	if (!ctx.cr0.eq) goto loc_827FAAC8;
loc_827FAAFC:
	// lwz r26,68(r26)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r26.u32 + 68);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x827faab4
	if (!ctx.cr6.eq) goto loc_827FAAB4;
loc_827FAB08:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x827fab18
	if (ctx.cr6.eq) goto loc_827FAB18;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82332db8
	ctx.lr = 0x827FAB18;
	sub_82332DB8(ctx, base);
loc_827FAB18:
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// fmr f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f31.f64;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// fmr f29,f31
	ctx.f29.f64 = ctx.f31.f64;
	// fmr f25,f31
	ctx.f25.f64 = ctx.f31.f64;
	// stfs f30,96(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f29,100(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r29,r31,12
	ctx.r29.s64 = ctx.r31.s64 + 12;
	// stfs f25,104(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// mr r24,r25
	ctx.r24.u64 = ctx.r25.u64;
	// lfs f22,24000(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24000);
	ctx.f22.f64 = double(temp.f32);
	// mr r23,r25
	ctx.r23.u64 = ctx.r25.u64;
	// lfs f23,17904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17904);
	ctx.f23.f64 = double(temp.f32);
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
loc_827FAB54:
	// srawi r11,r27,1
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r27.s32 >> 1;
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2, ctx.xer);
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// mr r28,r17
	ctx.r28.u64 = ctx.r17.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r11,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r11.s64;
	// bge cr6,0x827fab74
	if (!ctx.cr6.lt) goto loc_827FAB74;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
loc_827FAB74:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827faba8
	if (ctx.cr6.eq) goto loc_827FABA8;
	// lfs f0,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// lfs f13,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f12,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f13,180(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f12,184(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// b 0x827fabac
	goto loc_827FABAC;
loc_827FABA8:
	// addi r11,r31,44
	ctx.r11.s64 = ctx.r31.s64 + 44;
loc_827FABAC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// beq cr6,0x827fabd4
	if (ctx.cr6.eq) goto loc_827FABD4;
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// b 0x827fabe4
	goto loc_827FABE4;
loc_827FABD4:
	// stfs f23,208(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// stfs f23,212(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stfs f22,216(r1)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
loc_827FABE4:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f0,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f13,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f12,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lfs f11,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lfs f10,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lfs f9,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// lfs f7,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// addi r8,r1,224
	ctx.r8.s64 = ctx.r1.s64 + 224;
	// lfs f6,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// lfs f5,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// stfs f11,192(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stfs f11,196(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// stfs f11,200(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// stfs f31,224(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stw r11,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r11.u32);
	// stfs f31,228(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// stw r25,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r25.u32);
	// stfs f31,232(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// stw r25,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r25.u32);
	// stfs f31,236(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// stw r25,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r25.u32);
	// stfs f31,240(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// stw r25,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r25.u32);
	// stfs f31,244(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// stw r25,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r25.u32);
	// stfs f31,248(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// stw r25,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r25.u32);
	// stfs f31,252(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// stw r25,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r25.u32);
	// lfs f4,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f4.f64 = double(temp.f32);
	// fadds f0,f4,f0
	ctx.f0.f64 = double(float(ctx.f4.f64 + ctx.f0.f64));
	// stfs f31,256(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// lfs f3,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f3.f64 = double(temp.f32);
	// fadds f13,f13,f3
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f3.f64));
	// stfs f24,260(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// lfs f4,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f4.f64 = double(temp.f32);
	// fadds f12,f12,f4
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f4.f64));
	// fmuls f28,f0,f11
	ctx.f28.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmuls f27,f13,f11
	ctx.f27.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// fmuls f26,f12,f11
	ctx.f26.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fadds f0,f10,f28
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f28.f64));
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fadds f0,f9,f27
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f27.f64));
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fadds f0,f8,f26
	ctx.f0.f64 = double(float(ctx.f8.f64 + ctx.f26.f64));
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// fadds f0,f7,f28
	ctx.f0.f64 = double(float(ctx.f7.f64 + ctx.f28.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fadds f0,f6,f27
	ctx.f0.f64 = double(float(ctx.f6.f64 + ctx.f27.f64));
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fadds f0,f5,f26
	ctx.f0.f64 = double(float(ctx.f5.f64 + ctx.f26.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x827fa098
	ctx.lr = 0x827FACEC;
	sub_827FA098(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x827fad60
	if (!ctx.cr0.eq) goto loc_827FAD60;
	// lwz r30,288(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x827fad38
	if (ctx.cr6.eq) goto loc_827FAD38;
	// bl 0x827e7480
	ctx.lr = 0x827FAD04;
	sub_827E7480(ctx, base);
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
	ctx.lr = 0x827FAD1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bne 0x827fad2c
	if (!ctx.cr0.eq) goto loc_827FAD2C;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_827FAD2C:
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827fad70
	if (!ctx.cr6.eq) goto loc_827FAD70;
loc_827FAD38:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x827fad44
	if (ctx.cr6.eq) goto loc_827FAD44;
	// mr r23,r17
	ctx.r23.u64 = ctx.r17.u64;
loc_827FAD44:
	// fsubs f30,f30,f28
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f30.f64 - ctx.f28.f64));
	// stfs f30,96(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fsubs f29,f29,f27
	ctx.f29.f64 = double(float(ctx.f29.f64 - ctx.f27.f64));
	// stfs f29,100(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fsubs f25,f25,f26
	ctx.f25.f64 = double(float(ctx.f25.f64 - ctx.f26.f64));
	// stfs f25,104(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
loc_827FAD60:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpwi cr6,r27,4
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 4, ctx.xer);
	// blt cr6,0x827fab54
	if (ctx.cr6.lt) goto loc_827FAB54;
	// b 0x827fad74
	goto loc_827FAD74;
loc_827FAD70:
	// mr r24,r17
	ctx.r24.u64 = ctx.r17.u64;
loc_827FAD74:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// bne cr6,0x827fadb4
	if (!ctx.cr6.eq) goto loc_827FADB4;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x827fad90
	if (!ctx.cr6.eq) goto loc_827FAD90;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x8239d768
	ctx.lr = 0x827FAD8C;
	sub_8239D768(ctx, base);
	// b 0x827faa18
	goto loc_827FAA18;
loc_827FAD90:
	// cmpwi cr6,r24,2
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 2, ctx.xer);
	// bne cr6,0x827fadb4
	if (!ctx.cr6.eq) goto loc_827FADB4;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne cr6,0x827fadb4
	if (!ctx.cr6.eq) goto loc_827FADB4;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_827FADA4:
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x8239d768
	ctx.lr = 0x827FADAC;
	sub_8239D768(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x827faa1c
	goto loc_827FAA1C;
loc_827FADB4:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x827fae4c
	if (ctx.cr6.eq) goto loc_827FAE4C;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lfs f0,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lfs f13,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lfs f12,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// lwz r7,44(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// lfs f9,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f9.f64 = double(temp.f32);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lfs f8,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f8.f64 = double(temp.f32);
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// lfs f7,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f7.f64 = double(temp.f32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// lfs f5,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f5.f64 = double(temp.f32);
	// lwz r11,1456(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1456);
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfs f6,432(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f0,f13,f10,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f10.f64 + ctx.f0.f64));
	// fmuls f6,f6,f5
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f5.f64));
	// lfs f5,428(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 428);
	ctx.f5.f64 = double(temp.f32);
	// lfs f11,424(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 424);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f0,f8,f12,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fmadds f9,f5,f9,f6
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f9.f64 + ctx.f6.f64));
	// fmadds f13,f11,f7,f9
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f7.f64 + ctx.f9.f64));
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x827faeec
	if (!ctx.cr6.lt) goto loc_827FAEEC;
loc_827FAE44:
	// stw r17,20(r18)
	PPC_STORE_U32(ctx.r18.u32 + 20, ctx.r17.u32);
	// b 0x827faef8
	goto loc_827FAEF8;
loc_827FAE4C:
	// cmpwi cr6,r24,4
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 4, ctx.xer);
	// beq cr6,0x827faef4
	if (ctx.cr6.eq) goto loc_827FAEF4;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// ble cr6,0x827faef4
	if (!ctx.cr6.gt) goto loc_827FAEF4;
	// fmuls f0,f30,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f30.f64));
	// fmadds f0,f29,f29,f0
	ctx.f0.f64 = double(float(ctx.f29.f64 * ctx.f29.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f24
	ctx.cr6.compare(ctx.f0.f64, ctx.f24.f64);
	// bne cr6,0x827fae9c
	if (!ctx.cr6.eq) goto loc_827FAE9C;
	// fcmpu cr6,f25,f31
	ctx.cr6.compare(ctx.f25.f64, ctx.f31.f64);
	// bne cr6,0x827faec8
	if (!ctx.cr6.eq) goto loc_827FAEC8;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f30,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f30.f64 = double(temp.f32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lfs f29,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f29.f64 = double(temp.f32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// b 0x827faecc
	goto loc_827FAECC;
loc_827FAE9C:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f13,16668(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16668);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x827faeb8
	if (!ctx.cr6.lt) goto loc_827FAEB8;
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
	// fmr f29,f31
	ctx.f29.f64 = ctx.f31.f64;
	// b 0x827faec8
	goto loc_827FAEC8;
loc_827FAEB8:
	// fsqrts f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fdivs f13,f24,f0
	ctx.f13.f64 = double(float(ctx.f24.f64 / ctx.f0.f64));
	// fmuls f30,f13,f30
	ctx.f30.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// fmuls f29,f29,f13
	ctx.f29.f64 = double(float(ctx.f29.f64 * ctx.f13.f64));
loc_827FAEC8:
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
loc_827FAECC:
	// lfs f13,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f29
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f29.f64));
	// lfs f12,64(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f0,f12,f0,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmadds f0,f11,f30,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f30.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x827fae44
	if (ctx.cr6.gt) goto loc_827FAE44;
loc_827FAEEC:
	// stw r25,20(r18)
	PPC_STORE_U32(ctx.r18.u32 + 20, ctx.r25.u32);
	// b 0x827faef8
	goto loc_827FAEF8;
loc_827FAEF4:
	// stw r19,20(r18)
	PPC_STORE_U32(ctx.r18.u32 + 20, ctx.r19.u32);
loc_827FAEF8:
	// mr r31,r17
	ctx.r31.u64 = ctx.r17.u64;
	// b 0x827fada4
	goto loc_827FADA4;
}

__attribute__((alias("__imp__sub_827FAF00"))) PPC_WEAK_FUNC(sub_827FAF00);
PPC_FUNC_IMPL(__imp__sub_827FAF00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9ec
	ctx.lr = 0x827FAF08;
	__savegprlr_21(ctx, base);
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x82a61740
	ctx.lr = 0x827FAF10;
	__savefpr_26(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// lwz r3,816(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 816);
	// bl 0x827ebf48
	ctx.lr = 0x827FAF30;
	sub_827EBF48(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827faf40
	if (ctx.cr0.eq) goto loc_827FAF40;
	// lwz r11,1412(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1412);
	// b 0x827faf44
	goto loc_827FAF44;
loc_827FAF40:
	// li r11,0
	ctx.r11.s64 = 0;
loc_827FAF44:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827faf54
	if (!ctx.cr6.eq) goto loc_827FAF54;
loc_827FAF4C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x827fb134
	goto loc_827FB134;
loc_827FAF54:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r22,864(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 864);
	// add r21,r10,r11
	ctx.r21.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x827faf74
	if (!ctx.cr6.eq) goto loc_827FAF74;
	// neg r22,r22
	ctx.r22.s64 = -ctx.r22.s64;
loc_827FAF74:
	// cmpw cr6,r11,r21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r21.s32, ctx.xer);
	// bge cr6,0x827fb118
	if (!ctx.cr6.lt) goto loc_827FB118;
	// lis r23,-32243
	ctx.r23.s64 = -2113077248;
loc_827FAF80:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x827fb118
	if (!ctx.cr6.lt) goto loc_827FB118;
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bne cr6,0x827fafd0
	if (!ctx.cr6.eq) goto loc_827FAFD0;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// mullw r29,r10,r22
	ctx.r29.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r22.s32);
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// subf. r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x827fafd4
	if (!ctx.cr0.eq) goto loc_827FAFD4;
	// neg r29,r29
	ctx.r29.s64 = -ctx.r29.s64;
	// b 0x827fafd4
	goto loc_827FAFD4;
loc_827FAFD0:
	// mullw r29,r11,r22
	ctx.r29.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r22.s32);
loc_827FAFD4:
	// addi r4,r31,24
	ctx.r4.s64 = ctx.r31.s64 + 24;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82817280
	ctx.lr = 0x827FAFE0;
	sub_82817280(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// add r24,r11,r29
	ctx.r24.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// stw r24,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lfs f28,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f28.f64 = double(temp.f32);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// bl 0x82817bb8
	ctx.lr = 0x827FB014;
	sub_82817BB8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f31,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f30.f64 = double(temp.f32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lfs f29,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f29.f64 = double(temp.f32);
	// li r5,72
	ctx.r5.s64 = 72;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f28
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f28.f64));
	// fmuls f12,f12,f28
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f28.f64));
	// fadds f28,f31,f0
	ctx.f28.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
	// stfs f28,112(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fadds f27,f30,f13
	ctx.f27.f64 = double(float(ctx.f30.f64 + ctx.f13.f64));
	// stfs f27,116(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fadds f26,f29,f12
	ctx.f26.f64 = double(float(ctx.f29.f64 + ctx.f12.f64));
	// stfs f26,120(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x82a4ea80
	ctx.lr = 0x827FB064;
	sub_82A4EA80(ctx, base);
	// fsubs f0,f27,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f27.f64 - ctx.f30.f64));
	// fsubs f12,f28,f31
	ctx.f12.f64 = double(float(ctx.f28.f64 - ctx.f31.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fsubs f13,f26,f29
	ctx.f13.f64 = double(float(ctx.f26.f64 - ctx.f29.f64));
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r27,116(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lfs f1,-11444(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + -11444);
	ctx.f1.f64 = double(temp.f32);
	// lwz r26,120(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r28,112(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r9,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// stw r27,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r27.u32);
	// stw r8,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r8.u32);
	// stw r28,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r28.u32);
	// stw r7,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r7.u32);
	// stw r26,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r26.u32);
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// stw r6,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r6.u32);
	// stw r10,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r10.u32);
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// stfs f0,212(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// bl 0x827fa580
	ctx.lr = 0x827FB0E8;
	sub_827FA580(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827fb10c
	if (ctx.cr0.eq) goto loc_827FB10C;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lfs f1,-11444(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + -11444);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x827fa780
	ctx.lr = 0x827FB104;
	sub_827FA780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827fb144
	if (ctx.cr0.eq) goto loc_827FB144;
loc_827FB10C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpw cr6,r11,r21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r21.s32, ctx.xer);
	// blt cr6,0x827faf80
	if (ctx.cr6.lt) goto loc_827FAF80;
loc_827FB118:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x827faf4c
	if (ctx.cr6.lt) goto loc_827FAF4C;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
loc_827FB130:
	// li r3,1
	ctx.r3.s64 = 1;
loc_827FB134:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x82a6178c
	ctx.lr = 0x827FB140;
	__restfpr_26(ctx, base);
	// b 0x82a4ea3c
	__restgprlr_21(ctx, base);
	return;
loc_827FB144:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x827fb160
	if (!ctx.cr6.eq) goto loc_827FB160;
	// cntlzw r11,r29
	ctx.r11.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
loc_827FB160:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x827fb174
	if (ctx.cr6.eq) goto loc_827FB174;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827fb1d4
	if (!ctx.cr6.eq) goto loc_827FB1D4;
loc_827FB174:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// addi r11,r24,-1820
	ctx.r11.s64 = ctx.r24.s64 + -1820;
	// blt cr6,0x827fb184
	if (ctx.cr6.lt) goto loc_827FB184;
	// addi r11,r24,1820
	ctx.r11.s64 = ctx.r24.s64 + 1820;
loc_827FB184:
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// lfs f28,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f28.f64 = double(temp.f32);
	// bl 0x82817bb8
	ctx.lr = 0x827FB198;
	sub_82817BB8(ctx, base);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f28
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f28.f64));
	// fmuls f12,f12,f28
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f28.f64));
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f0,f13,f30
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f30.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f0,f12,f29
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f29.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r27,84(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r26,88(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_827FB1D4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r28,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r28.u32);
	// stw r27,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r27.u32);
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// stw r26,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r26.u32);
	// b 0x827fb130
	goto loc_827FB130;
}

__attribute__((alias("__imp__sub_827FB1F0"))) PPC_WEAK_FUNC(sub_827FB1F0);
PPC_FUNC_IMPL(__imp__sub_827FB1F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f4
	ctx.lr = 0x827FB1F8;
	__savegprlr_23(ctx, base);
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82a61724
	ctx.lr = 0x827FB200;
	__savefpr_19(ctx, base);
	// stwu r1,-1152(r1)
	ea = -1152 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// lwz r3,816(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 816);
	// bl 0x827e25c8
	ctx.lr = 0x827FB214;
	sub_827E25C8(ctx, base);
	// lwz r3,816(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 816);
	// bl 0x827e25c8
	ctx.lr = 0x827FB21C;
	sub_827E25C8(ctx, base);
	// lfs f11,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,32(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f11,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,28(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// addi r24,r23,28
	ctx.r24.s64 = ctx.r23.s64 + 28;
	// fsubs f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// lfs f12,36(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f11,f12,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f30,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f30.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f28,16668(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16668);
	ctx.f28.f64 = double(temp.f32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r11,r11,904
	ctx.r11.s64 = ctx.r11.s64 + 904;
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f31,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// fmadds f12,f13,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fcmpu cr6,f12,f30
	ctx.cr6.compare(ctx.f12.f64, ctx.f30.f64);
	// bne cr6,0x827fb2a0
	if (!ctx.cr6.eq) goto loc_827FB2A0;
	// fcmpu cr6,f11,f31
	ctx.cr6.compare(ctx.f11.f64, ctx.f31.f64);
	// bne cr6,0x827fb2c4
	if (!ctx.cr6.eq) goto loc_827FB2C4;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// b 0x827fb2d0
	goto loc_827FB2D0;
loc_827FB2A0:
	// fcmpu cr6,f12,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f28.f64);
	// bge cr6,0x827fb2b4
	if (!ctx.cr6.lt) goto loc_827FB2B4;
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// b 0x827fb2cc
	goto loc_827FB2CC;
loc_827FB2B4:
	// fsqrts f12,f12
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(sqrt(ctx.f12.f64)));
	// fdivs f12,f30,f12
	ctx.f12.f64 = double(float(ctx.f30.f64 / ctx.f12.f64));
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
loc_827FB2C4:
	// stfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_827FB2CC:
	// stfs f31,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_827FB2D0:
	// lwz r3,816(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 816);
	// bl 0x827e25c8
	ctx.lr = 0x827FB2D8;
	sub_827E25C8(ctx, base);
	// lwz r3,816(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 816);
	// bl 0x827e25c8
	ctx.lr = 0x827FB2E0;
	sub_827E25C8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,816(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 816);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x827e3e28
	ctx.lr = 0x827FB2F0;
	sub_827E3E28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f26,f11,f0
	ctx.f26.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f25,f10,f13
	ctx.f25.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fsubs f24,f0,f12
	ctx.f24.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// stfs f26,112(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f25,116(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f24,120(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x82817280
	ctx.lr = 0x827FB330;
	sub_82817280(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f29,18448(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18448);
	ctx.f29.f64 = double(temp.f32);
	// lwz r11,20(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 20);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x827fb34c
	if (!ctx.cr6.eq) goto loc_827FB34C;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f29,18444(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18444);
	ctx.f29.f64 = double(temp.f32);
loc_827FB34C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82817280
	ctx.lr = 0x827FB358;
	sub_82817280(ctx, base);
	// lwz r30,96(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r31,100(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r29,104(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r28,112(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r26,116(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r27,120(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// subf r11,r30,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r30.s64;
	// subf r10,r31,r26
	ctx.r10.s64 = ctx.r26.s64 - ctx.r31.s64;
	// subf r9,r29,r27
	ctx.r9.s64 = ctx.r27.s64 - ctx.r29.s64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x82648440
	ctx.lr = 0x827FB394;
	sub_82648440(ctx, base);
	// fctiwz f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f29.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f29.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// clrlwi r10,r29,16
	ctx.r10.u64 = ctx.r29.u32 & 0xFFFF;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82648440
	ctx.lr = 0x827FB3C8;
	sub_82648440(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r11,r26,-16383
	ctx.r11.s64 = ctx.r26.s64 + -16383;
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r27.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r28,4(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x82817bb8
	ctx.lr = 0x827FB400;
	sub_82817BB8(ctx, base);
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f29,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f29.f64 = double(temp.f32);
	// fmadds f0,f29,f29,f0
	ctx.f0.f64 = double(float(ctx.f29.f64 * ctx.f29.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bne cr6,0x827fb454
	if (!ctx.cr6.eq) goto loc_827FB454;
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x827fb44c
	if (!ctx.cr6.eq) goto loc_827FB44C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f29,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f29.f64 = double(temp.f32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lfs f28,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f28.f64 = double(temp.f32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lfs f30,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f30.f64 = double(temp.f32);
	// b 0x827fb480
	goto loc_827FB480;
loc_827FB44C:
	// lfs f28,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f28.f64 = double(temp.f32);
	// b 0x827fb47c
	goto loc_827FB47C;
loc_827FB454:
	// fcmpu cr6,f0,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// bge cr6,0x827fb468
	if (!ctx.cr6.lt) goto loc_827FB468;
	// fmr f29,f31
	ctx.f29.f64 = ctx.f31.f64;
	// fmr f28,f31
	ctx.f28.f64 = ctx.f31.f64;
	// b 0x827fb47c
	goto loc_827FB47C;
loc_827FB468:
	// fsqrts f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 / ctx.f0.f64));
	// fmuls f29,f29,f0
	ctx.f29.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
	// fmuls f28,f13,f0
	ctx.f28.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_827FB47C:
	// fmr f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f31.f64;
loc_827FB480:
	// lwz r9,0(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// clrlwi r10,r30,16
	ctx.r10.u64 = ctx.r30.u32 & 0xFFFF;
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// clrlwi r8,r29,16
	ctx.r8.u64 = ctx.r29.u32 & 0xFFFF;
	// lwz r7,8(r24)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// lwz r6,20(r23)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r23.u32 + 20);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lfs f12,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// lwz r31,816(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 816);
	// fmadds f13,f12,f29,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f29.f64 + ctx.f13.f64));
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// fmadds f27,f0,f28,f13
	ctx.f27.f64 = double(float(ctx.f0.f64 * ctx.f28.f64 + ctx.f13.f64));
	// bne cr6,0x827fb514
	if (!ctx.cr6.eq) goto loc_827FB514;
	// bl 0x827e3e28
	ctx.lr = 0x827FB4E0;
	sub_827E3E28(ctx, base);
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f13,f30,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f30.f64 + ctx.f0.f64));
	// fmadds f0,f12,f29,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f29.f64 + ctx.f0.f64));
	// fsubs f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f27.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x827fb5c0
	if (ctx.cr6.gt) goto loc_827FB5C0;
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x827fb54c
	if (!ctx.cr6.gt) goto loc_827FB54C;
	// b 0x827fb548
	goto loc_827FB548;
loc_827FB514:
	// bl 0x827e3e28
	ctx.lr = 0x827FB518;
	sub_827E3E28(ctx, base);
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f13,f30,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f30.f64 + ctx.f0.f64));
	// fmadds f0,f12,f29,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f29.f64 + ctx.f0.f64));
	// fsubs f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f27.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x827fb5c0
	if (ctx.cr6.lt) goto loc_827FB5C0;
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x827fb54c
	if (!ctx.cr6.lt) goto loc_827FB54C;
loc_827FB548:
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
loc_827FB54C:
	// fmuls f0,f24,f24
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f24.f64 * ctx.f24.f64));
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// fmadds f0,f26,f26,f0
	ctx.f0.f64 = double(float(ctx.f26.f64 * ctx.f26.f64 + ctx.f0.f64));
	// fmadds f0,f25,f25,f0
	ctx.f0.f64 = double(float(ctx.f25.f64 * ctx.f25.f64 + ctx.f0.f64));
	// fsqrts f31,f0
	ctx.f31.f64 = double(float(sqrt(ctx.f0.f64)));
	// bl 0x82817bb8
	ctx.lr = 0x827FB568;
	sub_82817BB8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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
	// fmuls f30,f0,f31
	ctx.f30.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fmuls f29,f13,f31
	ctx.f29.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fmuls f31,f12,f31
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// bl 0x827e25c8
	ctx.lr = 0x827FB58C;
	sub_827E25C8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,816(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 816);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f13,f29
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f29.f64));
	// fadds f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f31.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x827e3f10
	ctx.lr = 0x827FB5C0;
	sub_827E3F10(ctx, base);
loc_827FB5C0:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r10,20(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 20);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// lfs f19,17624(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17624);
	ctx.f19.f64 = double(temp.f32);
	// bne cr6,0x827fb5dc
	if (!ctx.cr6.eq) goto loc_827FB5DC;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f19,18440(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18440);
	ctx.f19.f64 = double(temp.f32);
loc_827FB5DC:
	// lwz r11,816(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 816);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,2836
	ctx.r4.s64 = ctx.r11.s64 + 2836;
	// bl 0x8269f950
	ctx.lr = 0x827FB5EC;
	sub_8269F950(ctx, base);
	// lfs f0,188(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f25,380(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	ctx.f25.f64 = double(temp.f32);
	// fsubs f31,f0,f25
	ctx.f31.f64 = double(float(ctx.f0.f64 - ctx.f25.f64));
	// lfs f0,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// lfs f24,384(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	ctx.f24.f64 = double(temp.f32);
	// lfs f23,388(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	ctx.f23.f64 = double(temp.f32);
	// fsubs f30,f0,f24
	ctx.f30.f64 = double(float(ctx.f0.f64 - ctx.f24.f64));
	// fsubs f29,f13,f23
	ctx.f29.f64 = double(float(ctx.f13.f64 - ctx.f23.f64));
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f30,116(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f29,120(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x82817280
	ctx.lr = 0x827FB628;
	sub_82817280(ctx, base);
	// lfs f0,200(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f0.f64 = double(temp.f32);
	// lfs f22,392(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 392);
	ctx.f22.f64 = double(temp.f32);
	// fctiwz f13,f19
	ctx.f13.s64 = (ctx.f19.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f19.f64));
	// fsubs f28,f0,f22
	ctx.f28.f64 = double(float(ctx.f0.f64 - ctx.f22.f64));
	// lfs f0,204(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	ctx.f0.f64 = double(temp.f32);
	// lfs f21,396(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	ctx.f21.f64 = double(temp.f32);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// fsubs f27,f0,f21
	ctx.f27.f64 = double(float(ctx.f0.f64 - ctx.f21.f64));
	// lfs f0,208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// lfs f20,400(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	ctx.f20.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// fsubs f26,f0,f20
	ctx.f26.f64 = double(float(ctx.f0.f64 - ctx.f20.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// stfs f28,112(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f27,116(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stfs f26,120(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82817280
	ctx.lr = 0x827FB67C;
	sub_82817280(ctx, base);
	// fmuls f0,f29,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f29.f64 * ctx.f29.f64));
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// fmadds f0,f31,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f31.f64 + ctx.f0.f64));
	// fmadds f0,f30,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f30.f64 + ctx.f0.f64));
	// fsqrts f31,f0
	ctx.f31.f64 = double(float(sqrt(ctx.f0.f64)));
	// bl 0x82817bb8
	ctx.lr = 0x827FB6A4;
	sub_82817BB8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fmuls f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fmuls f11,f27,f27
	ctx.f11.f64 = double(float(ctx.f27.f64 * ctx.f27.f64));
	// fadds f0,f24,f0
	ctx.f0.f64 = double(float(ctx.f24.f64 + ctx.f0.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f0,f23,f13
	ctx.f0.f64 = double(float(ctx.f23.f64 + ctx.f13.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fadds f13,f25,f12
	ctx.f13.f64 = double(float(ctx.f25.f64 + ctx.f12.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// fmadds f0,f26,f26,f11
	ctx.f0.f64 = double(float(ctx.f26.f64 * ctx.f26.f64 + ctx.f11.f64));
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r10,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r10.u32);
	// fmadds f0,f28,f28,f0
	ctx.f0.f64 = double(float(ctx.f28.f64 * ctx.f28.f64 + ctx.f0.f64));
	// stw r11,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r11.u32);
	// stw r9,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r9.u32);
	// stw r11,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// stw r10,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r10.u32);
	// stw r9,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r9.u32);
	// fsqrts f31,f0
	ctx.f31.f64 = double(float(sqrt(ctx.f0.f64)));
	// bl 0x82817bb8
	ctx.lr = 0x827FB718;
	sub_82817BB8(ctx, base);
	// lwz r11,816(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 816);
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfs f12,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fmuls f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// addi r11,r11,2836
	ctx.r11.s64 = ctx.r11.s64 + 2836;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r5,808
	ctx.r5.s64 = 808;
	// fadds f0,f21,f0
	ctx.f0.f64 = double(float(ctx.f21.f64 + ctx.f0.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f0,f20,f13
	ctx.f0.f64 = double(float(ctx.f20.f64 + ctx.f13.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fadds f0,f22,f12
	ctx.f0.f64 = double(float(ctx.f22.f64 + ctx.f12.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r10,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r10.u32);
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
	// stw r9,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r9.u32);
	// stw r11,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r11.u32);
	// stw r10,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r10.u32);
	// stw r9,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r9.u32);
	// bl 0x82a4ea80
	ctx.lr = 0x827FB784;
	sub_82A4EA80(ctx, base);
	// addi r1,r1,1152
	ctx.r1.s64 = ctx.r1.s64 + 1152;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82a61770
	ctx.lr = 0x827FB790;
	__restfpr_19(ctx, base);
	// b 0x82a4ea44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827FB798"))) PPC_WEAK_FUNC(sub_827FB798);
PPC_FUNC_IMPL(__imp__sub_827FB798) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x827FB7A0;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r3,816(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 816);
	// bl 0x827ebf48
	ctx.lr = 0x827FB7B8;
	sub_827EBF48(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827fb7c8
	if (ctx.cr0.eq) goto loc_827FB7C8;
	// lwz r29,1412(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1412);
	// b 0x827fb7cc
	goto loc_827FB7CC;
loc_827FB7C8:
	// li r29,0
	ctx.r29.s64 = 0;
loc_827FB7CC:
	// cmplwi r29,0
	ctx.cr0.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq 0x827fbae0
	if (ctx.cr0.eq) goto loc_827FBAE0;
	// lwz r28,816(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 816);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,3272(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3272);
	// lwz r10,3276(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3276);
	// lwz r9,3280(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3280);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x827e4018
	ctx.lr = 0x827FB800;
	sub_827E4018(ctx, base);
	// lwz r11,816(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 816);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r9,3164(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3164);
	// lwz r8,3168(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3168);
	// lwz r11,3172(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3172);
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x827e4018
	ctx.lr = 0x827FB848;
	sub_827E4018(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f10,2872(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 2872);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// fadds f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f11,2868(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 2868);
	ctx.f11.f64 = double(temp.f32);
	// lfs f31,16668(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16668);
	ctx.f31.f64 = double(temp.f32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lfs f0,2864(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// lwz r11,620(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 620);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lfs f0,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,624(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 624);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,628(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 628);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lfs f12,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f10,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f10,f10,f9
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// fmuls f12,f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fsubs f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fmadds f12,f10,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fmadds f12,f11,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f12.f64));
	// fsqrts f12,f12
	ctx.f12.f64 = double(float(sqrt(ctx.f12.f64)));
	// stfs f12,68(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// lfs f12,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsubs f0,f11,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fsubs f0,f10,f9
	ctx.f0.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r9,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x82332e18
	ctx.lr = 0x827FB934;
	sub_82332E18(ctx, base);
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f12,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82817280
	ctx.lr = 0x827FB964;
	sub_82817280(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x824f97d8
	ctx.lr = 0x827FB970;
	sub_824F97D8(ctx, base);
	// lfs f12,152(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// lfs f9,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f10.f64 = double(temp.f32);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// fadds f10,f10,f9
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// lfs f6,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f6.f64 = double(temp.f32);
	// lfs f8,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f8.f64 = double(temp.f32);
	// addi r11,r31,44
	ctx.r11.s64 = ctx.r31.s64 + 44;
	// lfs f0,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// lfs f7,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f7.f64 = double(temp.f32);
	// lfs f5,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f5.f64 = double(temp.f32);
	// fadds f7,f7,f6
	ctx.f7.f64 = double(float(ctx.f7.f64 + ctx.f6.f64));
	// lfs f11,908(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 908);
	ctx.f11.f64 = double(temp.f32);
	// lfs f4,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f4.f64 = double(temp.f32);
	// lfs f12,200(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f13,f13,f0,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f12.f64));
	// lfs f9,196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f12,f10,f0,f9
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f9.f64));
	// lfs f6,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f10,f7,f0,f6
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f6.f64));
	// fadds f13,f13,f8
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f8.f64));
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fadds f13,f12,f5
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f5.f64));
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// fadds f13,f10,f4
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f4.f64));
	// lwz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lwz r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r8,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r8.u32);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// stw r9,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r9.u32);
	// lfs f13,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f12,f13,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bne cr6,0x827fba4c
	if (!ctx.cr6.eq) goto loc_827FBA4C;
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bne cr6,0x827fba3c
	if (!ctx.cr6.eq) goto loc_827FBA3C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// b 0x827fba80
	goto loc_827FBA80;
loc_827FBA3C:
	// lfs f12,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// b 0x827fba7c
	goto loc_827FBA7C;
loc_827FBA4C:
	// stfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, ctx.f31.f64);
	// bge cr6,0x827fba64
	if (!ctx.cr6.lt) goto loc_827FBA64;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// b 0x827fba80
	goto loc_827FBA80;
loc_827FBA64:
	// fsqrts f12,f12
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(sqrt(ctx.f12.f64)));
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fdivs f0,f11,f12
	ctx.f0.f64 = double(float(ctx.f11.f64 / ctx.f12.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_827FBA7C:
	// stfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_827FBA80:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// stw r9,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r9.u32);
	// bl 0x829bed50
	ctx.lr = 0x827FBAA0;
	sub_829BED50(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,136(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 136);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827FBABC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f13,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lfs f0,18436(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18436);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f0,30996(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 30996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,36(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
loc_827FBAE0:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827FBAF0"))) PPC_WEAK_FUNC(sub_827FBAF0);
PPC_FUNC_IMPL(__imp__sub_827FBAF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f4
	ctx.lr = 0x827FBAF8;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r24,r11,13848
	ctx.r24.s64 = ctx.r11.s64 + 13848;
	// addi r23,r10,13840
	ctx.r23.s64 = ctx.r10.s64 + 13840;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f0,4(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// fadds f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f1.f64));
	// stfs f0,4(r24)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r24.u32 + 4, temp.u32);
	// stfs f13,4(r23)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r23.u32 + 4, temp.u32);
	// lwz r3,816(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// bl 0x827ebf48
	ctx.lr = 0x827FBB34;
	sub_827EBF48(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827fbb48
	if (ctx.cr0.eq) goto loc_827FBB48;
	// lwz r3,1412(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1412);
	// b 0x827fbb4c
	goto loc_827FBB4C;
loc_827FBB48:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_827FBB4C:
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827fbdd0
	if (ctx.cr0.eq) goto loc_827FBDD0;
	// bl 0x829bed50
	ctx.lr = 0x827FBB58;
	sub_829BED50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827fbdd0
	if (ctx.cr0.eq) goto loc_827FBDD0;
	// lwz r3,816(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// bl 0x829bed50
	ctx.lr = 0x827FBB68;
	sub_829BED50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827fbdd0
	if (ctx.cr0.eq) goto loc_827FBDD0;
	// lwz r3,816(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// bl 0x827e5ee0
	ctx.lr = 0x827FBB78;
	sub_827E5EE0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827fbb8c
	if (ctx.cr0.eq) goto loc_827FBB8C;
	// lwz r11,1740(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1740);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x827fbdd0
	if (!ctx.cr6.eq) goto loc_827FBDD0;
loc_827FBB8C:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827fb798
	ctx.lr = 0x827FBB98;
	sub_827FB798(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r27,2
	ctx.r27.s64 = 2;
	// li r25,1
	ctx.r25.s64 = 1;
	// lis r26,-32243
	ctx.r26.s64 = -2113077248;
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// lwz r11,868(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 868);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827fbc24
	if (!ctx.cr6.eq) goto loc_827FBC24;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lfs f1,-11444(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + -11444);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827fa780
	ctx.lr = 0x827FBBC8;
	sub_827FA780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827fbbe0
	if (ctx.cr0.eq) goto loc_827FBBE0;
	// stfs f31,4(r24)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r24.u32 + 4, temp.u32);
	// stw r27,872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 872, ctx.r27.u32);
	// stw r28,852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 852, ctx.r28.u32);
	// b 0x827fbc1c
	goto loc_827FBC1C;
loc_827FBBE0:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lfs f1,-11444(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + -11444);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827fa580
	ctx.lr = 0x827FBBF0;
	sub_827FA580(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827fbc24
	if (ctx.cr0.eq) goto loc_827FBC24;
	// addi r30,r31,852
	ctx.r30.s64 = ctx.r31.s64 + 852;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827fa9d0
	ctx.lr = 0x827FBC0C;
	sub_827FA9D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827fbc24
	if (ctx.cr0.eq) goto loc_827FBC24;
	// stfs f31,4(r24)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r24.u32 + 4, temp.u32);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
loc_827FBC1C:
	// stw r28,876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 876, ctx.r28.u32);
	// stw r25,868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 868, ctx.r25.u32);
loc_827FBC24:
	// lwz r11,868(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 868);
	// li r29,3
	ctx.r29.s64 = 3;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x827fbc70
	if (!ctx.cr6.eq) goto loc_827FBC70;
	// addi r30,r31,852
	ctx.r30.s64 = ctx.r31.s64 + 852;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827faf00
	ctx.lr = 0x827FBC48;
	sub_827FAF00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827fbc70
	if (ctx.cr0.eq) goto loc_827FBC70;
	// lwz r11,872(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 872);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x827fbc64
	if (!ctx.cr6.eq) goto loc_827FBC64;
	// stw r29,868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 868, ctx.r29.u32);
	// b 0x827fbc70
	goto loc_827FBC70;
loc_827FBC64:
	// stw r27,868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 868, ctx.r27.u32);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// stw r28,828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 828, ctx.r28.u32);
loc_827FBC70:
	// lwz r11,868(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 868);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x827fbdac
	if (!ctx.cr6.eq) goto loc_827FBDAC;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lfs f1,-11444(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + -11444);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827fa580
	ctx.lr = 0x827FBC8C;
	sub_827FA580(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x827fbcc0
	if (!ctx.cr0.eq) goto loc_827FBCC0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lfs f1,-11444(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + -11444);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827fa780
	ctx.lr = 0x827FBCA4;
	sub_827FA780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x827fbcc0
	if (!ctx.cr0.eq) goto loc_827FBCC0;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// stw r29,868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 868, ctx.r29.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r11,14496(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14496, ctx.r11.u32);
	// b 0x827fbdac
	goto loc_827FBDAC;
loc_827FBCC0:
	// addi r29,r31,852
	ctx.r29.s64 = ctx.r31.s64 + 852;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,40
	ctx.r5.s64 = 40;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82a4ea80
	ctx.lr = 0x827FBCD4;
	sub_82A4EA80(ctx, base);
	// lis r30,-31944
	ctx.r30.s64 = -2093481984;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,14496(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 14496);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x827faf00
	ctx.lr = 0x827FBCF0;
	sub_827FAF00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827fbd2c
	if (ctx.cr0.eq) goto loc_827FBD2C;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827fbd0c
	if (ctx.cr6.eq) goto loc_827FBD0C;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x827fbd24
	if (!ctx.cr6.eq) goto loc_827FBD24;
loc_827FBD0C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,40
	ctx.r5.s64 = 40;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a4ea80
	ctx.lr = 0x827FBD1C;
	sub_82A4EA80(ctx, base);
	// stfs f31,4(r23)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r23.u32 + 4, temp.u32);
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
loc_827FBD24:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x827fbd38
	goto loc_827FBD38;
loc_827FBD2C:
	// lwz r11,14496(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 14496);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_827FBD38:
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r9,876(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 876);
	// divwu r8,r11,r10
	ctx.r8.u32 = ctx.r11.u32 / ctx.r10.u32;
	// twllei r10,0
	// mullw r10,r8,r10
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r11,14496(r30)
	PPC_STORE_U32(ctx.r30.u32 + 14496, ctx.r11.u32);
	// beq cr6,0x827fbdac
	if (ctx.cr6.eq) goto loc_827FBDAC;
	// lwz r11,828(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 828);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827fbd9c
	if (ctx.cr6.eq) goto loc_827FBD9C;
	// lwz r11,872(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 872);
	// stw r28,828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 828, ctx.r28.u32);
	// stw r28,876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 876, ctx.r28.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// stw r25,868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 868, ctx.r25.u32);
	// bne cr6,0x827fbd8c
	if (!ctx.cr6.eq) goto loc_827FBD8C;
	// stw r28,872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 872, ctx.r28.u32);
	// b 0x827fbdd0
	goto loc_827FBDD0;
loc_827FBD8C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827fbdd0
	if (!ctx.cr6.eq) goto loc_827FBDD0;
	// stw r25,872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 872, ctx.r25.u32);
	// b 0x827fbdd0
	goto loc_827FBDD0;
loc_827FBD9C:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827fb1f0
	ctx.lr = 0x827FBDAC;
	sub_827FB1F0(ctx, base);
loc_827FBDAC:
	// lwz r11,868(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 868);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x827fbdd0
	if (!ctx.cr6.eq) goto loc_827FBDD0;
	// lfs f0,4(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x827fbdd0
	if (ctx.cr6.lt) goto loc_827FBDD0;
	// stfs f31,4(r24)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r24.u32 + 4, temp.u32);
	// stw r28,868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 868, ctx.r28.u32);
loc_827FBDD0:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x82a4ea44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827FBDE0"))) PPC_WEAK_FUNC(sub_827FBDE0);
PPC_FUNC_IMPL(__imp__sub_827FBDE0) {
	PPC_FUNC_PROLOGUE();
	// clrlwi. r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r4,820(r3)
	PPC_STORE_U8(ctx.r3.u32 + 820, ctx.r4.u8);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lwz r11,816(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 816);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,1700(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1700, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FBE00"))) PPC_WEAK_FUNC(sub_827FBE00);
PPC_FUNC_IMPL(__imp__sub_827FBE00) {
	PPC_FUNC_PROLOGUE();
	// li r3,892
	ctx.r3.s64 = 892;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FBE08"))) PPC_WEAK_FUNC(sub_827FBE08);
PPC_FUNC_IMPL(__imp__sub_827FBE08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,20544(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20544);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x827fbe48
	if (!ctx.cr0.eq) goto loc_827FBE48;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// stw r11,20544(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20544, ctx.r11.u32);
	// addi r3,r9,15780
	ctx.r3.s64 = ctx.r9.s64 + 15780;
	// bl 0x82816528
	ctx.lr = 0x827FBE40;
	sub_82816528(ctx, base);
	// stw r3,20540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20540, ctx.r3.u32);
	// b 0x827fbe4c
	goto loc_827FBE4C;
loc_827FBE48:
	// lwz r3,20540(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20540);
loc_827FBE4C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FBE60"))) PPC_WEAK_FUNC(sub_827FBE60);
PPC_FUNC_IMPL(__imp__sub_827FBE60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827fbeb0
	ctx.lr = 0x827FBE80;
	sub_827FBEB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827FBE94;
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

__attribute__((alias("__imp__sub_827FBEB0"))) PPC_WEAK_FUNC(sub_827FBEB0);
PPC_FUNC_IMPL(__imp__sub_827FBEB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,20548
	ctx.r31.s64 = ctx.r11.s64 + 20548;
	// lwz r11,20552(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20552);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x827fbef8
	if (!ctx.cr0.eq) goto loc_827FBEF8;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,15912
	ctx.r9.s64 = ctx.r9.s64 + 15912;
	// stw r11,20552(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20552, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-26000
	ctx.r3.s64 = ctx.r11.s64 + -26000;
	// bl 0x82a4c758
	ctx.lr = 0x827FBEF8;
	sub_82A4C758(ctx, base);
loc_827FBEF8:
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

__attribute__((alias("__imp__sub_827FBF10"))) PPC_WEAK_FUNC(sub_827FBF10);
PPC_FUNC_IMPL(__imp__sub_827FBF10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r11,15932
	ctx.r3.s64 = ctx.r11.s64 + 15932;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FBF20"))) PPC_WEAK_FUNC(sub_827FBF20);
PPC_FUNC_IMPL(__imp__sub_827FBF20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x827fbf58
	if (ctx.cr6.eq) goto loc_827FBF58;
	// bl 0x827fd3e0
	ctx.lr = 0x827FBF48;
	sub_827FD3E0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x827fbf58
	if (!ctx.cr6.eq) goto loc_827FBF58;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827fbf64
	goto loc_827FBF64;
loc_827FBF58:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8269fa70
	ctx.lr = 0x827FBF64;
	sub_8269FA70(ctx, base);
loc_827FBF64:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FBF80"))) PPC_WEAK_FUNC(sub_827FBF80);
PPC_FUNC_IMPL(__imp__sub_827FBF80) {
	PPC_FUNC_PROLOGUE();
	// b 0x827fd3e0
	sub_827FD3E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827FBF88"))) PPC_WEAK_FUNC(sub_827FBF88);
PPC_FUNC_IMPL(__imp__sub_827FBF88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,936
	ctx.r3.s64 = 936;
	// bl 0x82833108
	ctx.lr = 0x827FBFA4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827fbfb8
	if (ctx.cr0.eq) goto loc_827FBFB8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x827fc020
	ctx.lr = 0x827FBFB4;
	sub_827FC020(ctx, base);
	// b 0x827fbfbc
	goto loc_827FBFBC;
loc_827FBFB8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827FBFBC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FBFD0"))) PPC_WEAK_FUNC(sub_827FBFD0);
PPC_FUNC_IMPL(__imp__sub_827FBFD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827fd3e0
	ctx.lr = 0x827FBFF0;
	sub_827FD3E0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x827fc004
	if (ctx.cr6.eq) goto loc_827FC004;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8269fac8
	ctx.lr = 0x827FC004;
	sub_8269FAC8(ctx, base);
loc_827FC004:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FC020"))) PPC_WEAK_FUNC(sub_827FC020);
PPC_FUNC_IMPL(__imp__sub_827FC020) {
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
	// bl 0x8269fcb8
	ctx.lr = 0x827FC040;
	sub_8269FCB8(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,15968
	ctx.r11.s64 = ctx.r11.s64 + 15968;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,824(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 824);
	// stw r11,824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 824, ctx.r11.u32);
	// lwz r11,828(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 828);
	// stw r11,828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 828, ctx.r11.u32);
	// lwz r11,832(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 832);
	// stw r11,832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 832, ctx.r11.u32);
	// lwz r11,836(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 836);
	// stw r11,836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 836, ctx.r11.u32);
	// lwz r11,840(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 840);
	// stw r11,840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 840, ctx.r11.u32);
	// lfs f0,844(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 844);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,844(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 844, temp.u32);
	// lfs f0,848(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,848(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 848, temp.u32);
	// lfs f0,852(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 852);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,852(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 852, temp.u32);
	// lwz r11,856(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 856);
	// stw r11,856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 856, ctx.r11.u32);
	// lwz r11,860(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 860);
	// stw r11,860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 860, ctx.r11.u32);
	// lwz r11,864(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 864);
	// stw r11,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r11.u32);
	// lwz r11,868(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 868);
	// stw r11,868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 868, ctx.r11.u32);
	// lwz r11,872(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 872);
	// stw r11,872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 872, ctx.r11.u32);
	// lwz r11,876(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 876);
	// stw r11,876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 876, ctx.r11.u32);
	// lwz r11,880(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 880);
	// stw r11,880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 880, ctx.r11.u32);
	// lwz r11,884(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 884);
	// stw r11,884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 884, ctx.r11.u32);
	// lwz r11,888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 888);
	// stw r11,888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 888, ctx.r11.u32);
	// lfs f0,892(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 892);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,892(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 892, temp.u32);
	// lfs f0,896(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 896);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,896(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 896, temp.u32);
	// lfs f0,900(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 900);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,900(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 900, temp.u32);
	// lfs f0,904(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,904(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 904, temp.u32);
	// lfs f0,908(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,908(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 908, temp.u32);
	// lfs f0,912(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 912);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,912(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 912, temp.u32);
	// lfs f0,916(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 916);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,916(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 916, temp.u32);
	// lfs f0,920(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 920);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,920(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 920, temp.u32);
	// lfs f0,924(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 924);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,924(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 924, temp.u32);
	// lfs f0,928(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 928);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,928(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 928, temp.u32);
	// lfs f0,932(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 932);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,932(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 932, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FC148"))) PPC_WEAK_FUNC(sub_827FC148);
PPC_FUNC_IMPL(__imp__sub_827FC148) {
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
	// bl 0x827ee8f8
	ctx.lr = 0x827FC160;
	sub_827EE8F8(ctx, base);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// lis r8,-31963
	ctx.r8.s64 = -2094727168;
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// lis r6,-32215
	ctx.r6.s64 = -2111242240;
	// lfs f12,23968(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23968);
	ctx.f12.f64 = double(temp.f32);
	// lis r5,-32215
	ctx.r5.s64 = -2111242240;
	// lis r4,-32242
	ctx.r4.s64 = -2113011712;
	// lfs f0,30996(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 30996);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f11,16800(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 16800);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r10,15968
	ctx.r10.s64 = ctx.r10.s64 + 15968;
	// lfs f10,-27804(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -27804);
	ctx.f10.f64 = double(temp.f32);
	// stw r11,824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 824, ctx.r11.u32);
	// lfs f13,904(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 904);
	ctx.f13.f64 = double(temp.f32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lfs f9,912(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 912);
	ctx.f9.f64 = double(temp.f32);
	// stw r11,828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 828, ctx.r11.u32);
	// lfs f8,-32516(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -32516);
	ctx.f8.f64 = double(temp.f32);
	// stfs f12,900(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 900, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,904(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 904, temp.u32);
	// stfs f11,908(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 908, temp.u32);
	// stfs f10,912(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 912, temp.u32);
	// stfs f13,916(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 916, temp.u32);
	// stfs f0,920(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 920, temp.u32);
	// stfs f9,924(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 924, temp.u32);
	// stfs f8,928(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 928, temp.u32);
	// stfs f13,932(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 932, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FC1F0"))) PPC_WEAK_FUNC(sub_827FC1F0);
PPC_FUNC_IMPL(__imp__sub_827FC1F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stb r4,820(r3)
	PPC_STORE_U8(ctx.r3.u32 + 820, ctx.r4.u8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,824(r3)
	PPC_STORE_U32(ctx.r3.u32 + 824, ctx.r10.u32);
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,896(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 896, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FC210"))) PPC_WEAK_FUNC(sub_827FC210);
PPC_FUNC_IMPL(__imp__sub_827FC210) {
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
	// bl 0x82a61748
	ctx.lr = 0x827FC224;
	__savefpr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f31,848(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	ctx.f31.f64 = double(temp.f32);
	// lfs f0,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bgt cr6,0x827fc250
	if (ctx.cr6.gt) goto loc_827FC250;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 824, ctx.r11.u32);
	// b 0x827fc440
	goto loc_827FC440;
loc_827FC250:
	// lfs f0,852(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 852);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r31,252
	ctx.r11.s64 = ctx.r31.s64 + 252;
	// fdivs f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
	// lfs f13,872(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 872);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,876(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 876);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r31,60
	ctx.r11.s64 = ctx.r31.s64 + 60;
	// lfs f11,256(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r31,468
	ctx.r11.s64 = ctx.r31.s64 + 468;
	// lfs f10,260(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,868(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 868);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,252(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,548(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 548);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,892(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 892);
	ctx.f6.f64 = double(temp.f32);
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fnmsubs f7,f6,f0,f7
	ctx.f7.f64 = double(float(-(ctx.f6.f64 * ctx.f0.f64 - ctx.f7.f64)));
	// fsubs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fsubs f13,f10,f12
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fsubs f13,f8,f9
	ctx.f13.f64 = double(float(ctx.f8.f64 - ctx.f9.f64));
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r9,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r9.u32);
	// stw r11,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r11.u32);
	// stw r10,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r10.u32);
	// lfs f11,68(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,860(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 860);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,856(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 856);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,64(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,60(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,864(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 864);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fsubs f11,f11,f8
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f8.f64));
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f11,f10,f0
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fsubs f13,f9,f11
	ctx.f13.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r9,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r9.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// lfs f11,476(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 476);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,884(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 884);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,880(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 880);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,472(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 472);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,468(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,888(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 888);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fsubs f11,f11,f8
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f8.f64));
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f11,f10,f0
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f7,548(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 548, temp.u32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fsubs f13,f9,f11
	ctx.f13.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r9,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r9.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 472, ctx.r10.u32);
	// stw r11,476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 476, ctx.r11.u32);
	// lfs f13,900(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 900);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,904(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 904);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,908(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 908);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,912(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 912);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,916(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 916);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,920(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 920);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,924(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 924);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,928(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 928);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f5,932(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 932);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f4,776(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 776);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f3,780(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 780);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f2,784(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 784);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f7,f7,f0
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lfs f1,788(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 788);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f29,796(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 796);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f0,f5,f0
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f5,792(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 792);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f13,f4,f13
	ctx.f13.f64 = double(float(ctx.f4.f64 - ctx.f13.f64));
	// lfs f28,800(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	ctx.f28.f64 = double(temp.f32);
	// lfs f4,804(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 804);
	ctx.f4.f64 = double(temp.f32);
	// addi r3,r31,776
	ctx.r3.s64 = ctx.r31.s64 + 776;
	// fsubs f12,f3,f12
	ctx.f12.f64 = double(float(ctx.f3.f64 - ctx.f12.f64));
	// lfs f3,808(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 808);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f11,f2,f11
	ctx.f11.f64 = double(float(ctx.f2.f64 - ctx.f11.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fsubs f10,f1,f10
	ctx.f10.f64 = double(float(ctx.f1.f64 - ctx.f10.f64));
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fsubs f13,f5,f9
	ctx.f13.f64 = double(float(ctx.f5.f64 - ctx.f9.f64));
	// stfs f10,108(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fsubs f12,f29,f8
	ctx.f12.f64 = double(float(ctx.f29.f64 - ctx.f8.f64));
	// fsubs f11,f28,f7
	ctx.f11.f64 = double(float(ctx.f28.f64 - ctx.f7.f64));
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fsubs f10,f4,f6
	ctx.f10.f64 = double(float(ctx.f4.f64 - ctx.f6.f64));
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fsubs f0,f3,f0
	ctx.f0.f64 = double(float(ctx.f3.f64 - ctx.f0.f64));
	// stfs f11,120(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f10,124(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// li r5,36
	ctx.r5.s64 = 36;
	// bl 0x82a4ea80
	ctx.lr = 0x827FC438;
	sub_82A4EA80(ctx, base);
	// fsubs f0,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f30.f64));
	// stfs f0,848(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 848, temp.u32);
loc_827FC440:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x82a61794
	ctx.lr = 0x827FC44C;
	__restfpr_28(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FC460"))) PPC_WEAK_FUNC(sub_827FC460);
PPC_FUNC_IMPL(__imp__sub_827FC460) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x827FC468;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82a61734
	ctx.lr = 0x827FC470;
	__savefpr_23(ctx, base);
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r10,824(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 824);
	// lfs f26,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f26.f64 = double(temp.f32);
	// stfs f26,896(r31)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r31.u32 + 896, temp.u32);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x827fc494
	if (!ctx.cr6.eq) goto loc_827FC494;
	// bl 0x827fc210
	ctx.lr = 0x827FC494;
	sub_827FC210(ctx, base);
loc_827FC494:
	// lwz r3,816(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// bl 0x827e28d8
	ctx.lr = 0x827FC49C;
	sub_827E28D8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,816(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// bl 0x827ebf48
	ctx.lr = 0x827FC4A8;
	sub_827EBF48(ctx, base);
	// lwz r29,1412(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1412);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// li r27,0
	ctx.r27.s64 = 0;
	// bne cr6,0x827fc4ec
	if (!ctx.cr6.eq) goto loc_827FC4EC;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x827fc4cc
	if (ctx.cr6.eq) goto loc_827FC4CC;
	// stw r27,2088(r29)
	PPC_STORE_U32(ctx.r29.u32 + 2088, ctx.r27.u32);
	// stw r27,2092(r29)
	PPC_STORE_U32(ctx.r29.u32 + 2092, ctx.r27.u32);
	// stw r27,2096(r29)
	PPC_STORE_U32(ctx.r29.u32 + 2096, ctx.r27.u32);
loc_827FC4CC:
	// lwz r11,824(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 824);
	// stw r27,828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 828, ctx.r27.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x827fd05c
	if (!ctx.cr6.eq) goto loc_827FD05C;
loc_827FC4DC:
	// lfs f0,852(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 852);
	ctx.f0.f64 = double(temp.f32);
	// li r11,2
	ctx.r11.s64 = 2;
	// stfs f0,848(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 848, temp.u32);
	// b 0x827fd018
	goto loc_827FD018;
loc_827FC4EC:
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// lwz r10,828(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 828);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x827fc520
	if (ctx.cr6.eq) goto loc_827FC520;
	// stw r27,824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 824, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// stw r11,828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 828, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,1072(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1072);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827FC51C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f1,852(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 852, temp.u32);
loc_827FC520:
	// lwz r11,824(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 824);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x827fd05c
	if (ctx.cr6.eq) goto loc_827FD05C;
	// lwz r3,816(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// bl 0x827e25c8
	ctx.lr = 0x827FC534;
	sub_827E25C8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1060(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1060);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827FC54C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,824(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 824);
	// fsubs f31,f11,f0
	ctx.f31.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f13,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// lfs f10,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f30,f10,f13
	ctx.f30.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fsubs f29,f0,f12
	ctx.f29.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// beq cr6,0x827fd020
	if (ctx.cr6.eq) goto loc_827FD020;
	// fmuls f0,f31,f31
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f31.f64));
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1064(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1064);
	// fmadds f0,f29,f29,f0
	ctx.f0.f64 = double(float(ctx.f29.f64 * ctx.f29.f64 + ctx.f0.f64));
	// fmadds f0,f30,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f30.f64 + ctx.f0.f64));
	// fsqrts f27,f0
	ctx.f27.f64 = double(float(sqrt(ctx.f0.f64)));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827FC5A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fcmpu cr6,f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f27.f64, ctx.f1.f64);
	// bgt cr6,0x827fd020
	if (ctx.cr6.gt) goto loc_827FD020;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1056(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1056);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827FC5BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b98f8
	ctx.lr = 0x827FC5D0;
	sub_829B98F8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x827fc5ec
	if (!ctx.cr0.eq) goto loc_827FC5EC;
loc_827FC5D8:
	// lwz r11,824(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 824);
loc_827FC5DC:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x827fd05c
	if (!ctx.cr6.eq) goto loc_827FD05C;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x827fd018
	goto loc_827FD018;
loc_827FC5EC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827FC5FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x827fc5d8
	if (ctx.cr0.eq) goto loc_827FC5D8;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x827fc6a8
	if (ctx.cr6.eq) goto loc_827FC6A8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1076(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1076);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827FC620;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827fc6a8
	if (ctx.cr0.eq) goto loc_827FC6A8;
	// lwz r11,656(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 656);
	// lfs f0,620(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 620);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,660(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 660);
	// lfs f13,620(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 620);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,664(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 664);
	// lfs f12,624(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 624);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,624(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 624);
	ctx.f11.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lfs f10,628(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 628);
	ctx.f10.f64 = double(temp.f32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lfs f9,628(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 628);
	ctx.f9.f64 = double(temp.f32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// fsubs f31,f0,f13
	ctx.f31.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// fsubs f30,f12,f11
	ctx.f30.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fsubs f29,f10,f9
	ctx.f29.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// bl 0x82817bb8
	ctx.lr = 0x827FC670;
	sub_82817BB8(ctx, base);
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f13,f29,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f29.f64 + ctx.f0.f64));
	// fmadds f0,f31,f12,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f26
	ctx.cr6.compare(ctx.f0.f64, ctx.f26.f64);
	// blt cr6,0x827fc69c
	if (ctx.cr6.lt) goto loc_827FC69C;
	// lwz r11,80(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 80);
	// stw r11,2088(r29)
	PPC_STORE_U32(ctx.r29.u32 + 2088, ctx.r11.u32);
	// b 0x827fc6a0
	goto loc_827FC6A0;
loc_827FC69C:
	// stw r27,2088(r29)
	PPC_STORE_U32(ctx.r29.u32 + 2088, ctx.r27.u32);
loc_827FC6A0:
	// stw r27,2096(r29)
	PPC_STORE_U32(ctx.r29.u32 + 2096, ctx.r27.u32);
	// stw r27,2092(r29)
	PPC_STORE_U32(ctx.r29.u32 + 2092, ctx.r27.u32);
loc_827FC6A8:
	// lwz r3,816(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// bl 0x827e25c8
	ctx.lr = 0x827FC6B0;
	sub_827E25C8(ctx, base);
	// addi r28,r28,620
	ctx.r28.s64 = ctx.r28.s64 + 620;
	// lfs f13,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f11,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f0,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f13,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f12,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f31,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f31.f64 = double(temp.f32);
	// lfs f25,16668(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16668);
	ctx.f25.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f11,f13,f13,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmadds f11,f12,f12,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f11.f64));
	// fcmpu cr6,f11,f31
	ctx.cr6.compare(ctx.f11.f64, ctx.f31.f64);
	// bne cr6,0x827fc730
	if (!ctx.cr6.eq) goto loc_827FC730;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lfs f29,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f29.f64 = double(temp.f32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f30,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f30.f64 = double(temp.f32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lfs f28,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f28.f64 = double(temp.f32);
	// b 0x827fc768
	goto loc_827FC768;
loc_827FC730:
	// fcmpu cr6,f11,f25
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, ctx.f25.f64);
	// bge cr6,0x827fc748
	if (!ctx.cr6.lt) goto loc_827FC748;
	// fmr f30,f26
	ctx.f30.f64 = ctx.f26.f64;
	// fmr f29,f26
	ctx.f29.f64 = ctx.f26.f64;
	// fmr f28,f26
	ctx.f28.f64 = ctx.f26.f64;
	// b 0x827fc75c
	goto loc_827FC75C;
loc_827FC748:
	// fsqrts f11,f11
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(sqrt(ctx.f11.f64)));
	// fdivs f11,f31,f11
	ctx.f11.f64 = double(float(ctx.f31.f64 / ctx.f11.f64));
	// fmuls f30,f11,f12
	ctx.f30.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f29,f0,f11
	ctx.f29.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmuls f28,f13,f11
	ctx.f28.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
loc_827FC75C:
	// stfs f28,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f29,84(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f30,80(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_827FC768:
	// lwz r11,816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r10,656(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 656);
	// lwz r9,660(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 660);
	// lwz r11,664(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 664);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// bl 0x82817bb8
	ctx.lr = 0x827FC790;
	sub_82817BB8(ctx, base);
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1068(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1068);
	// fmadds f0,f13,f30,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f30.f64 + ctx.f0.f64));
	// fmadds f24,f12,f29,f0
	ctx.f24.f64 = double(float(ctx.f12.f64 * ctx.f29.f64 + ctx.f0.f64));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827FC7BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,824(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 824);
	// fcmpu cr6,f24,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f24.f64, ctx.f1.f64);
	// ble cr6,0x827fc5dc
	if (!ctx.cr6.gt) goto loc_827FC5DC;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x827fc828
	if (!ctx.cr6.eq) goto loc_827FC828;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1080(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1080);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827FC7E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827fc828
	if (ctx.cr0.eq) goto loc_827FC828;
	// lwz r3,816(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// bl 0x827e25c8
	ctx.lr = 0x827FC7F4;
	sub_827E25C8(ctx, base);
	// lfs f10,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,836(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 836);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// lfs f13,840(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 840);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,832(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,844(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 844);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f0,f13,f10,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f10.f64 + ctx.f0.f64));
	// fmadds f0,f12,f9,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f9.f64 + ctx.f0.f64));
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fcmpu cr6,f0,f26
	ctx.cr6.compare(ctx.f0.f64, ctx.f26.f64);
	// ble cr6,0x827fc4dc
	if (!ctx.cr6.gt) goto loc_827FC4DC;
loc_827FC828:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfd f0,16456(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16456);
	// fcmpu cr6,f27,f0
	ctx.cr6.compare(ctx.f27.f64, ctx.f0.f64);
	// bge cr6,0x827fc840
	if (!ctx.cr6.lt) goto loc_827FC840;
	// stfs f26,896(r31)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r31.u32 + 896, temp.u32);
	// b 0x827fc880
	goto loc_827FC880;
loc_827FC840:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1064(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1064);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827FC854;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fdivs f13,f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f27.f64 / ctx.f1.f64));
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfd f12,16376(r11)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16376);
	// lfd f0,16368(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16368);
	// fsel f13,f13,f13,f12
	ctx.f13.f64 = ctx.f13.f64 >= 0.0 ? ctx.f13.f64 : ctx.f12.f64;
	// fsub f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 - ctx.f0.f64;
	// fsel f0,f12,f0,f13
	ctx.f0.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fsubs f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// stfs f0,896(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 896, temp.u32);
loc_827FC880:
	// fmuls f0,f28,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f28.f64 * ctx.f28.f64));
	// fmadds f0,f30,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f30.f64 + ctx.f0.f64));
	// fmadds f0,f29,f29,f0
	ctx.f0.f64 = double(float(ctx.f29.f64 * ctx.f29.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x827fc8bc
	if (!ctx.cr6.eq) goto loc_827FC8BC;
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
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// b 0x827fc8e8
	goto loc_827FC8E8;
loc_827FC8BC:
	// fcmpu cr6,f0,f25
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f25.f64);
	// bge cr6,0x827fc8d4
	if (!ctx.cr6.lt) goto loc_827FC8D4;
	// fmr f0,f26
	ctx.f0.f64 = ctx.f26.f64;
	// fmr f13,f26
	ctx.f13.f64 = ctx.f26.f64;
	// fmr f12,f26
	ctx.f12.f64 = ctx.f26.f64;
	// b 0x827fc8e8
	goto loc_827FC8E8;
loc_827FC8D4:
	// fsqrts f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fdivs f12,f31,f0
	ctx.f12.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
	// fmuls f0,f12,f30
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// fmuls f13,f29,f12
	ctx.f13.f64 = double(float(ctx.f29.f64 * ctx.f12.f64));
	// fmuls f12,f28,f12
	ctx.f12.f64 = double(float(ctx.f28.f64 * ctx.f12.f64));
loc_827FC8E8:
	// fneg f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lwz r3,816(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// lfs f11,3640(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 3640);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f30,f0,f11
	ctx.f30.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmuls f29,f13,f11
	ctx.f29.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// fmuls f28,f12,f11
	ctx.f28.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// bl 0x827e25c8
	ctx.lr = 0x827FC90C;
	sub_827E25C8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f0,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// lwz r3,816(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// lfs f12,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,896(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 896);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fadds f10,f10,f30
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f30.f64));
	// lfs f8,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fadds f9,f9,f29
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f29.f64));
	// fadds f8,f8,f28
	ctx.f8.f64 = double(float(ctx.f8.f64 + ctx.f28.f64));
	// fsubs f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// fsubs f9,f9,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// fsubs f8,f8,f12
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f12.f64));
	// fmuls f10,f10,f11
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// fmuls f9,f9,f11
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// fmuls f11,f8,f11
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// fadds f30,f0,f10
	ctx.f30.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// fadds f29,f13,f9
	ctx.f29.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// fadds f28,f12,f11
	ctx.f28.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// bl 0x827e25c8
	ctx.lr = 0x827FC964;
	sub_827E25C8(ctx, base);
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f29,f0
	ctx.f0.f64 = double(float(ctx.f29.f64 - ctx.f0.f64));
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f28,f13
	ctx.f13.f64 = double(float(ctx.f28.f64 - ctx.f13.f64));
	// lfs f12,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f30,f12
	ctx.f12.f64 = double(float(ctx.f30.f64 - ctx.f12.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f11,f13,f13,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmadds f11,f12,f12,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f11.f64));
	// fcmpu cr6,f11,f31
	ctx.cr6.compare(ctx.f11.f64, ctx.f31.f64);
	// bne cr6,0x827fc9c4
	if (!ctx.cr6.eq) goto loc_827FC9C4;
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
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// b 0x827fc9f0
	goto loc_827FC9F0;
loc_827FC9C4:
	// fcmpu cr6,f11,f25
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, ctx.f25.f64);
	// bge cr6,0x827fc9dc
	if (!ctx.cr6.lt) goto loc_827FC9DC;
	// fmr f12,f26
	ctx.f12.f64 = ctx.f26.f64;
	// fmr f0,f26
	ctx.f0.f64 = ctx.f26.f64;
	// fmr f13,f26
	ctx.f13.f64 = ctx.f26.f64;
	// b 0x827fc9f0
	goto loc_827FC9F0;
loc_827FC9DC:
	// fsqrts f11,f11
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(sqrt(ctx.f11.f64)));
	// fdivs f11,f31,f11
	ctx.f11.f64 = double(float(ctx.f31.f64 / ctx.f11.f64));
	// fmuls f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmuls f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
loc_827FC9F0:
	// lwz r3,816(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// lfs f11,3640(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 3640);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f31,f12,f11
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fmuls f30,f0,f11
	ctx.f30.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmuls f29,f13,f11
	ctx.f29.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// bl 0x827e25c8
	ctx.lr = 0x827FCA08;
	sub_827E25C8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,1088(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1088);
	// fadds f31,f0,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fadds f30,f13,f30
	ctx.f30.f64 = double(float(ctx.f13.f64 + ctx.f30.f64));
	// fadds f29,f0,f29
	ctx.f29.f64 = double(float(ctx.f0.f64 + ctx.f29.f64));
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f30,116(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f29,120(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827FCA44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827fca64
	if (ctx.cr0.eq) goto loc_827FCA64;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r11,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r11.u32);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r11,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r11.u32);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// b 0x827fccbc
	goto loc_827FCCBC;
loc_827FCA64:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1092(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1092);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827FCA78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x827fccc0
	if (!ctx.cr0.eq) goto loc_827FCCC0;
	// lwz r11,816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r29,r31,228
	ctx.r29.s64 = ctx.r31.s64 + 228;
	// lwz r8,8(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r7,228(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// lwz r6,656(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 656);
	// lwz r5,660(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 660);
	// lwz r11,664(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 664);
	// lwz r27,232(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// lwz r26,236(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// stw r6,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r6.u32);
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// bl 0x824f97d8
	ctx.lr = 0x827FCADC;
	sub_824F97D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82817f30
	ctx.lr = 0x827FCAE8;
	sub_82817F30(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f28,896(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 896);
	ctx.f28.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1084(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1084);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827FCB00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r6,r10,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82617440
	ctx.lr = 0x827FCB1C;
	sub_82617440(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f11,f28,f11
	ctx.f11.f64 = double(float(ctx.f28.f64 * ctx.f11.f64));
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f28
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f28.f64));
	// fmuls f9,f9,f28
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f28.f64));
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// fadds f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// fadds f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fsubs f0,f13,f30
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f30.f64));
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fsubs f0,f12,f29
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f29.f64));
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bl 0x82817280
	ctx.lr = 0x827FCB74;
	sub_82817280(ctx, base);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f30.f64));
	// fsubs f12,f12,f29
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f29.f64));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82817280
	ctx.lr = 0x827FCBA4;
	sub_82817280(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x824f97d8
	ctx.lr = 0x827FCBB0;
	sub_824F97D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82817f30
	ctx.lr = 0x827FCBBC;
	sub_82817F30(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x824f97d8
	ctx.lr = 0x827FCBC8;
	sub_824F97D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82817f30
	ctx.lr = 0x827FCBD4;
	sub_82817F30(ctx, base);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lfs f1,896(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 896);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8269cbe0
	ctx.lr = 0x827FCBE8;
	sub_8269CBE0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82817b48
	ctx.lr = 0x827FCBF4;
	sub_82817B48(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82817bb8
	ctx.lr = 0x827FCC00;
	sub_82817BB8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fmr f1,f25
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f25.f64;
	// bl 0x82332e18
	ctx.lr = 0x827FCC0C;
	sub_82332E18(ctx, base);
	// lwz r3,816(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// bl 0x827e25c8
	ctx.lr = 0x827FCC14;
	sub_827E25C8(ctx, base);
	// lfs f10,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f10,f10,f30
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f30.f64));
	// lfs f9,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f9,f9,f29
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f29.f64));
	// lfs f8,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f8,f8,f31
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f31.f64));
	// lfs f0,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f7,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f7.f64 = double(temp.f32);
	// lfs f12,236(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,228(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	ctx.f11.f64 = double(temp.f32);
	// lfs f6,232(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f10,f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmadds f10,f9,f9,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f10.f64));
	// fmadds f10,f8,f8,f10
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f10.f64));
	// fsqrts f10,f10
	ctx.f10.f64 = double(float(sqrt(ctx.f10.f64)));
	// fmuls f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fmuls f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fmuls f10,f7,f10
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// fadds f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f29.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fadds f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f31.f64));
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// fadds f10,f10,f30
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f30.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r9,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r9.u32);
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fsubs f0,f11,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fsubs f0,f6,f10
	ctx.f0.f64 = double(float(ctx.f6.f64 - ctx.f10.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r10,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r10.u32);
	// stw r9,876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 876, ctx.r9.u32);
	// stw r7,872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 872, ctx.r7.u32);
	// stw r8,868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 868, ctx.r8.u32);
loc_827FCCBC:
	// stw r11,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
loc_827FCCC0:
	// lfs f0,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// fsubs f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f29.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lfs f13,60(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r31,60
	ctx.r11.s64 = ctx.r31.s64 + 60;
	// lfs f0,64(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f31.f64));
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lfs f31,896(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 896);
	ctx.f31.f64 = double(temp.f32);
	// stw r11,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r7,860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 860, ctx.r7.u32);
	// stw r10,856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 856, ctx.r10.u32);
	// stw r9,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r9.u32);
	// stw r8,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r8.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,1084(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1084);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827FCD30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lfs f0,472(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 472);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r31,468
	ctx.r11.s64 = ctx.r31.s64 + 468;
	// lfs f13,476(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 476);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f12,468(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	ctx.f12.f64 = double(temp.f32);
	// lfs f30,896(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 896);
	ctx.f30.f64 = double(temp.f32);
	// lfs f11,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f11,f11,f31
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// lfs f9,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f31
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// fmuls f9,f9,f31
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fsubs f0,f13,f10
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fsubs f0,f12,f9
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r11,884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 884, ctx.r11.u32);
	// stw r9,880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 880, ctx.r9.u32);
	// stw r10,888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 888, ctx.r10.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,1084(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1084);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827FCDA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fmuls f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r11,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r11.u32);
	// stw r10,472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 472, ctx.r10.u32);
	// stw r9,476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 476, ctx.r9.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,1096(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1096);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827FCDF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827fce2c
	if (ctx.cr0.eq) goto loc_827FCE2C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f31,548(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 548);
	ctx.f31.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827FCE18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fsubs f0,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f1.f64));
	// lfs f13,896(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 896);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,892(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 892, temp.u32);
	// fnmsubs f0,f0,f13,f31
	ctx.f0.f64 = double(float(-(ctx.f0.f64 * ctx.f13.f64 - ctx.f31.f64)));
	// stfs f0,548(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 548, temp.u32);
loc_827FCE2C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827FCE40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827fcfbc
	if (ctx.cr0.eq) goto loc_827FCFBC;
	// lwz r11,816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,1452(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1452);
	// oris r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 4194304;
	// stw r10,1452(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1452, ctx.r10.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r29,816(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// lwz r11,1108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827FCE70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f0,1960(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1960);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r31,900
	ctx.r3.s64 = ctx.r31.s64 + 900;
	// lfs f13,1964(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1964);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lfs f12,1968(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1968);
	ctx.f12.f64 = double(temp.f32);
	// li r5,36
	ctx.r5.s64 = 36;
	// lfs f5,1976(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1976);
	ctx.f5.f64 = double(temp.f32);
	// lfs f10,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// lfs f9,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// fsubs f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// lfs f9,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,1972(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1972);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f11,f9,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// fsubs f10,f10,f5
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f5.f64));
	// lfs f4,1980(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1980);
	ctx.f4.f64 = double(temp.f32);
	// lfs f5,1984(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1984);
	ctx.f5.f64 = double(temp.f32);
	// lfs f9,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f9,f9,f4
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f4.f64));
	// fsubs f8,f8,f5
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f5.f64));
	// lfs f5,1992(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1992);
	ctx.f5.f64 = double(temp.f32);
	// lfs f7,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// lfs f4,1988(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1988);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f6,f6,f5
	ctx.f6.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// fsubs f7,f7,f4
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f4.f64));
	// lfs f5,896(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 896);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f31,f0,f5
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// stfs f31,160(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fmuls f30,f13,f5
	ctx.f30.f64 = double(float(ctx.f13.f64 * ctx.f5.f64));
	// stfs f30,164(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fmuls f29,f12,f5
	ctx.f29.f64 = double(float(ctx.f12.f64 * ctx.f5.f64));
	// stfs f29,168(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// fmuls f28,f11,f5
	ctx.f28.f64 = double(float(ctx.f11.f64 * ctx.f5.f64));
	// stfs f28,172(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// fmuls f27,f10,f5
	ctx.f27.f64 = double(float(ctx.f10.f64 * ctx.f5.f64));
	// stfs f27,176(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// fmuls f26,f9,f5
	ctx.f26.f64 = double(float(ctx.f9.f64 * ctx.f5.f64));
	// stfs f26,180(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// fmuls f25,f8,f5
	ctx.f25.f64 = double(float(ctx.f8.f64 * ctx.f5.f64));
	// stfs f25,184(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// fmuls f23,f6,f5
	ctx.f23.f64 = double(float(ctx.f6.f64 * ctx.f5.f64));
	// stfs f23,192(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// fmuls f24,f7,f5
	ctx.f24.f64 = double(float(ctx.f7.f64 * ctx.f5.f64));
	// stfs f24,188(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// bl 0x82a4ea80
	ctx.lr = 0x827FCF3C;
	sub_82A4EA80(ctx, base);
	// lwz r11,816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// addi r3,r31,776
	ctx.r3.s64 = ctx.r31.s64 + 776;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// li r5,36
	ctx.r5.s64 = 36;
	// lfs f0,1960(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1960);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1964(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1964);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
	// lfs f12,1968(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1968);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f30.f64));
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fadds f12,f12,f29
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f29.f64));
	// lfs f11,1972(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1972);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,1976(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1976);
	ctx.f10.f64 = double(temp.f32);
	// fadds f11,f11,f28
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f28.f64));
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fadds f13,f10,f27
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f27.f64));
	// stfs f12,168(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lfs f0,1980(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1980);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,1984(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1984);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f0,f26
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f26.f64));
	// lfs f10,1988(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1988);
	ctx.f10.f64 = double(temp.f32);
	// fadds f12,f12,f25
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f25.f64));
	// lfs f9,1992(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f9.f64 = double(temp.f32);
	// fadds f10,f10,f24
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f24.f64));
	// fadds f9,f9,f23
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f23.f64));
	// stfs f11,172(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f13,176(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f12,184(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f10,188(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f9,192(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// bl 0x82a4ea80
	ctx.lr = 0x827FCFBC;
	sub_82A4EA80(ctx, base);
loc_827FCFBC:
	// lwz r11,824(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 824);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827fd008
	if (!ctx.cr6.eq) goto loc_827FD008;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1080(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1080);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827FCFDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827fd008
	if (ctx.cr0.eq) goto loc_827FD008;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1060(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1060);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827FCFF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x827fd070
	ctx.lr = 0x827FD008;
	sub_827FD070(ctx, base);
loc_827FD008:
	// lwz r11,824(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 824);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827fd05c
	if (!ctx.cr6.eq) goto loc_827FD05C;
	// li r11,1
	ctx.r11.s64 = 1;
loc_827FD018:
	// stw r11,824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 824, ctx.r11.u32);
	// b 0x827fd05c
	goto loc_827FD05C;
loc_827FD020:
	// lwz r11,824(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 824);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x827fd05c
	if (!ctx.cr6.eq) goto loc_827FD05C;
	// fmuls f0,f31,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f31.f64));
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1064(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1064);
	// fmadds f0,f29,f29,f0
	ctx.f0.f64 = double(float(ctx.f29.f64 * ctx.f29.f64 + ctx.f0.f64));
	// fmadds f0,f30,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f30.f64 + ctx.f0.f64));
	// fsqrts f31,f0
	ctx.f31.f64 = double(float(sqrt(ctx.f0.f64)));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827FD050;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f1.f64);
	// ble cr6,0x827fd05c
	if (!ctx.cr6.gt) goto loc_827FD05C;
	// stw r27,824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 824, ctx.r27.u32);
loc_827FD05C:
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82a61780
	ctx.lr = 0x827FD068;
	__restfpr_23(ctx, base);
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827FD070"))) PPC_WEAK_FUNC(sub_827FD070);
PPC_FUNC_IMPL(__imp__sub_827FD070) {
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
	ctx.lr = 0x827FD088;
	__savefpr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f12,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f11,f12,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f10,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f10.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f9,16668(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16668);
	ctx.f9.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r11,r11,904
	ctx.r11.s64 = ctx.r11.s64 + 904;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f31,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// fmadds f12,f13,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fcmpu cr6,f12,f10
	ctx.cr6.compare(ctx.f12.f64, ctx.f10.f64);
	// bne cr6,0x827fd11c
	if (!ctx.cr6.eq) goto loc_827FD11C;
	// fcmpu cr6,f11,f31
	ctx.cr6.compare(ctx.f11.f64, ctx.f31.f64);
	// bne cr6,0x827fd140
	if (!ctx.cr6.eq) goto loc_827FD140;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// b 0x827fd144
	goto loc_827FD144;
loc_827FD11C:
	// fcmpu cr6,f12,f9
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f9.f64);
	// bge cr6,0x827fd130
	if (!ctx.cr6.lt) goto loc_827FD130;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// fmr f13,f31
	ctx.f13.f64 = ctx.f31.f64;
	// b 0x827fd140
	goto loc_827FD140;
loc_827FD130:
	// fsqrts f12,f12
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(sqrt(ctx.f12.f64)));
	// fdivs f11,f10,f12
	ctx.f11.f64 = double(float(ctx.f10.f64 / ctx.f12.f64));
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
loc_827FD140:
	// fmr f12,f31
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f31.f64;
loc_827FD144:
	// fmuls f11,f12,f31
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fmuls f8,f13,f31
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fsubs f12,f11,f0
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fsubs f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmsubs f0,f0,f31,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64 - ctx.f8.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f11,f12,f12
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f11,f0,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fmadds f11,f13,f13,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// bne cr6,0x827fd1a0
	if (!ctx.cr6.eq) goto loc_827FD1A0;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lfs f28,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f28.f64 = double(temp.f32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f30,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f29.f64 = double(temp.f32);
	// b 0x827fd1d8
	goto loc_827FD1D8;
loc_827FD1A0:
	// fcmpu cr6,f11,f9
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, ctx.f9.f64);
	// bge cr6,0x827fd1b8
	if (!ctx.cr6.lt) goto loc_827FD1B8;
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
	// fmr f29,f31
	ctx.f29.f64 = ctx.f31.f64;
	// fmr f28,f31
	ctx.f28.f64 = ctx.f31.f64;
	// b 0x827fd1cc
	goto loc_827FD1CC;
loc_827FD1B8:
	// fsqrts f11,f11
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(sqrt(ctx.f11.f64)));
	// fdivs f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 / ctx.f11.f64));
	// fmuls f30,f11,f13
	ctx.f30.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f29,f12,f11
	ctx.f29.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fmuls f28,f0,f11
	ctx.f28.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
loc_827FD1CC:
	// stfs f28,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f29,84(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f30,80(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_827FD1D8:
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r31,r3,832
	ctx.r31.s64 = ctx.r3.s64 + 832;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// lfs f12,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// fmuls f12,f12,f29
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// lfs f0,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lwz r3,816(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 816);
	// fmadds f0,f0,f28,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f28.f64 + ctx.f12.f64));
	// fmadds f0,f13,f30,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f30.f64 + ctx.f0.f64));
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// bl 0x827e25c8
	ctx.lr = 0x827FD254;
	sub_827E25C8(ctx, base);
	// lfs f10,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f0,f13,f10,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f10.f64 + ctx.f0.f64));
	// fmadds f0,f12,f9,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f9.f64 + ctx.f0.f64));
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x827fd310
	if (!ctx.cr6.lt) goto loc_827FD310;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// fneg f0,f29
	ctx.f0.u64 = ctx.f29.u64 ^ 0x8000000000000000;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// fneg f13,f28
	ctx.f13.u64 = ctx.f28.u64 ^ 0x8000000000000000;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// fneg f12,f30
	ctx.f12.u64 = ctx.f30.u64 ^ 0x8000000000000000;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// fmadds f0,f11,f13,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f0.f64));
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// fmadds f0,f13,f12,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f0.f64));
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_827FD310:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x82a61794
	ctx.lr = 0x827FD31C;
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

__attribute__((alias("__imp__sub_827FD330"))) PPC_WEAK_FUNC(sub_827FD330);
PPC_FUNC_IMPL(__imp__sub_827FD330) {
	PPC_FUNC_PROLOGUE();
	// li r3,936
	ctx.r3.s64 = 936;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FD338"))) PPC_WEAK_FUNC(sub_827FD338);
PPC_FUNC_IMPL(__imp__sub_827FD338) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,20528(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20528);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x827fd378
	if (!ctx.cr0.eq) goto loc_827FD378;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// stw r11,20528(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20528, ctx.r11.u32);
	// addi r3,r9,15932
	ctx.r3.s64 = ctx.r9.s64 + 15932;
	// bl 0x82816528
	ctx.lr = 0x827FD370;
	sub_82816528(ctx, base);
	// stw r3,20524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20524, ctx.r3.u32);
	// b 0x827fd37c
	goto loc_827FD37C;
loc_827FD378:
	// lwz r3,20524(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20524);
loc_827FD37C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FD390"))) PPC_WEAK_FUNC(sub_827FD390);
PPC_FUNC_IMPL(__imp__sub_827FD390) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827fd3e0
	ctx.lr = 0x827FD3B0;
	sub_827FD3E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827FD3C4;
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

__attribute__((alias("__imp__sub_827FD3E0"))) PPC_WEAK_FUNC(sub_827FD3E0);
PPC_FUNC_IMPL(__imp__sub_827FD3E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,20532
	ctx.r31.s64 = ctx.r11.s64 + 20532;
	// lwz r11,20536(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20536);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x827fd428
	if (!ctx.cr0.eq) goto loc_827FD428;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,16064
	ctx.r9.s64 = ctx.r9.s64 + 16064;
	// stw r11,20536(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20536, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-25976
	ctx.r3.s64 = ctx.r11.s64 + -25976;
	// bl 0x82a4c758
	ctx.lr = 0x827FD428;
	sub_82A4C758(ctx, base);
loc_827FD428:
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

__attribute__((alias("__imp__sub_827FD440"))) PPC_WEAK_FUNC(sub_827FD440);
PPC_FUNC_IMPL(__imp__sub_827FD440) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r11,16084
	ctx.r3.s64 = ctx.r11.s64 + 16084;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FD450"))) PPC_WEAK_FUNC(sub_827FD450);
PPC_FUNC_IMPL(__imp__sub_827FD450) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x827fd488
	if (ctx.cr6.eq) goto loc_827FD488;
	// bl 0x827fd870
	ctx.lr = 0x827FD478;
	sub_827FD870(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x827fd488
	if (!ctx.cr6.eq) goto loc_827FD488;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827fd494
	goto loc_827FD494;
loc_827FD488:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8269fa70
	ctx.lr = 0x827FD494;
	sub_8269FA70(ctx, base);
loc_827FD494:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FD4B0"))) PPC_WEAK_FUNC(sub_827FD4B0);
PPC_FUNC_IMPL(__imp__sub_827FD4B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x827fd870
	sub_827FD870(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827FD4B8"))) PPC_WEAK_FUNC(sub_827FD4B8);
PPC_FUNC_IMPL(__imp__sub_827FD4B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,828
	ctx.r3.s64 = 828;
	// bl 0x82833108
	ctx.lr = 0x827FD4D8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x827fd508
	if (ctx.cr0.eq) goto loc_827FD508;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8269fcb8
	ctx.lr = 0x827FD4EC;
	sub_8269FCB8(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,16128
	ctx.r11.s64 = ctx.r11.s64 + 16128;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,824(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 824);
	// stw r11,824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 824, ctx.r11.u32);
	// b 0x827fd50c
	goto loc_827FD50C;
loc_827FD508:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827FD50C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FD528"))) PPC_WEAK_FUNC(sub_827FD528);
PPC_FUNC_IMPL(__imp__sub_827FD528) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827fd870
	ctx.lr = 0x827FD548;
	sub_827FD870(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x827fd55c
	if (ctx.cr6.eq) goto loc_827FD55C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8269fac8
	ctx.lr = 0x827FD55C;
	sub_8269FAC8(ctx, base);
loc_827FD55C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FD578"))) PPC_WEAK_FUNC(sub_827FD578);
PPC_FUNC_IMPL(__imp__sub_827FD578) {
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
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,816(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r4,4524(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4524);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x827FD5AC;
	sub_829B9720(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827fd5f0
	if (ctx.cr0.eq) goto loc_827FD5F0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827FD5C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x827d4020
	ctx.lr = 0x827FD5CC;
	sub_827D4020(ctx, base);
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
	ctx.lr = 0x827FD5E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x827fd5f0
	if (!ctx.cr0.eq) goto loc_827FD5F0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_827FD5F0:
	// stw r30,824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 824, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x827fd744
	if (ctx.cr6.eq) goto loc_827FD744;
	// lwz r11,1716(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1716);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827fd66c
	if (ctx.cr6.eq) goto loc_827FD66C;
	// lwz r10,1752(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1752);
	// lfs f0,476(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 476);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,1756(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1756);
	// lfs f13,468(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,1760(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1760);
	// lfs f12,472(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 472);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r31,468
	ctx.r11.s64 = ctx.r31.s64 + 468;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lfs f9,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lfs f10,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// fadds f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fadds f0,f13,f11
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f0,f12,f9
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 476, ctx.r11.u32);
	// stw r9,472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 472, ctx.r9.u32);
	// stw r10,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r10.u32);
loc_827FD66C:
	// lwz r11,1724(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1724);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827fd680
	if (ctx.cr6.eq) goto loc_827FD680;
	// lfs f0,1768(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1768);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,548(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 548, temp.u32);
loc_827FD680:
	// lwz r11,1712(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1712);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827fd6f0
	if (ctx.cr6.eq) goto loc_827FD6F0;
	// lwz r8,1748(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1748);
	// lfs f13,368(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,1740(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1740);
	// lfs f0,360(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,1744(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1744);
	// lfs f12,364(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r31,360
	ctx.r11.s64 = ctx.r31.s64 + 360;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// lfs f10,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// fadds f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r11.u32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f0,f12,f11
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r10,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r10.u32);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r10,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r10.u32);
loc_827FD6F0:
	// lwz r11,1728(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1728);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827fd704
	if (ctx.cr6.eq) goto loc_827FD704;
	// lfs f0,1776(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1776);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,688(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 688, temp.u32);
loc_827FD704:
	// lwz r11,1732(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1732);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827fd718
	if (ctx.cr6.eq) goto loc_827FD718;
	// lfs f0,1780(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1780);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,744(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 744, temp.u32);
loc_827FD718:
	// lwz r11,1720(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1720);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827fd72c
	if (ctx.cr6.eq) goto loc_827FD72C;
	// lfs f0,1764(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1764);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,812(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 812, temp.u32);
loc_827FD72C:
	// lwz r11,1736(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1736);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827fd744
	if (ctx.cr6.eq) goto loc_827FD744;
	// lwz r11,1772(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1772);
	// stw r11,624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 624, ctx.r11.u32);
	// stw r11,620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 620, ctx.r11.u32);
loc_827FD744:
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

__attribute__((alias("__imp__sub_827FD760"))) PPC_WEAK_FUNC(sub_827FD760);
PPC_FUNC_IMPL(__imp__sub_827FD760) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,828
	ctx.r3.s64 = 828;
	// bl 0x82833108
	ctx.lr = 0x827FD778;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x827fd7a4
	if (ctx.cr0.eq) goto loc_827FD7A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827ee8f8
	ctx.lr = 0x827FD788;
	sub_827EE8F8(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,16128
	ctx.r11.s64 = ctx.r11.s64 + 16128;
	// stw r10,824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 824, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x827fd7a8
	goto loc_827FD7A8;
loc_827FD7A4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827FD7A8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FD7C0"))) PPC_WEAK_FUNC(sub_827FD7C0);
PPC_FUNC_IMPL(__imp__sub_827FD7C0) {
	PPC_FUNC_PROLOGUE();
	// li r3,828
	ctx.r3.s64 = 828;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FD7C8"))) PPC_WEAK_FUNC(sub_827FD7C8);
PPC_FUNC_IMPL(__imp__sub_827FD7C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,20512(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20512);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x827fd808
	if (!ctx.cr0.eq) goto loc_827FD808;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// stw r11,20512(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20512, ctx.r11.u32);
	// addi r3,r9,16084
	ctx.r3.s64 = ctx.r9.s64 + 16084;
	// bl 0x82816528
	ctx.lr = 0x827FD800;
	sub_82816528(ctx, base);
	// stw r3,20508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20508, ctx.r3.u32);
	// b 0x827fd80c
	goto loc_827FD80C;
loc_827FD808:
	// lwz r3,20508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20508);
loc_827FD80C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FD820"))) PPC_WEAK_FUNC(sub_827FD820);
PPC_FUNC_IMPL(__imp__sub_827FD820) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827fd870
	ctx.lr = 0x827FD840;
	sub_827FD870(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827FD854;
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

__attribute__((alias("__imp__sub_827FD870"))) PPC_WEAK_FUNC(sub_827FD870);
PPC_FUNC_IMPL(__imp__sub_827FD870) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,20516
	ctx.r31.s64 = ctx.r11.s64 + 20516;
	// lwz r11,20520(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20520);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x827fd8b8
	if (!ctx.cr0.eq) goto loc_827FD8B8;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,16224
	ctx.r9.s64 = ctx.r9.s64 + 16224;
	// stw r11,20520(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20520, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-25952
	ctx.r3.s64 = ctx.r11.s64 + -25952;
	// bl 0x82a4c758
	ctx.lr = 0x827FD8B8;
	sub_82A4C758(ctx, base);
loc_827FD8B8:
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

__attribute__((alias("__imp__sub_827FD8D0"))) PPC_WEAK_FUNC(sub_827FD8D0);
PPC_FUNC_IMPL(__imp__sub_827FD8D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r11,16244
	ctx.r3.s64 = ctx.r11.s64 + 16244;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FD8E0"))) PPC_WEAK_FUNC(sub_827FD8E0);
PPC_FUNC_IMPL(__imp__sub_827FD8E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x827fd918
	if (ctx.cr6.eq) goto loc_827FD918;
	// bl 0x827fe308
	ctx.lr = 0x827FD908;
	sub_827FE308(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x827fd918
	if (!ctx.cr6.eq) goto loc_827FD918;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827fd924
	goto loc_827FD924;
loc_827FD918:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8269fa70
	ctx.lr = 0x827FD924;
	sub_8269FA70(ctx, base);
loc_827FD924:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FD940"))) PPC_WEAK_FUNC(sub_827FD940);
PPC_FUNC_IMPL(__imp__sub_827FD940) {
	PPC_FUNC_PROLOGUE();
	// b 0x827fe308
	sub_827FE308(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827FD948"))) PPC_WEAK_FUNC(sub_827FD948);
PPC_FUNC_IMPL(__imp__sub_827FD948) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,876
	ctx.r3.s64 = 876;
	// bl 0x82833108
	ctx.lr = 0x827FD964;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827fd978
	if (ctx.cr0.eq) goto loc_827FD978;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x827fd9e0
	ctx.lr = 0x827FD974;
	sub_827FD9E0(ctx, base);
	// b 0x827fd97c
	goto loc_827FD97C;
loc_827FD978:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827FD97C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FD990"))) PPC_WEAK_FUNC(sub_827FD990);
PPC_FUNC_IMPL(__imp__sub_827FD990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827fe308
	ctx.lr = 0x827FD9B0;
	sub_827FE308(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x827fd9c4
	if (ctx.cr6.eq) goto loc_827FD9C4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8269fac8
	ctx.lr = 0x827FD9C4;
	sub_8269FAC8(ctx, base);
loc_827FD9C4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FD9E0"))) PPC_WEAK_FUNC(sub_827FD9E0);
PPC_FUNC_IMPL(__imp__sub_827FD9E0) {
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
	// bl 0x8269fcb8
	ctx.lr = 0x827FDA00;
	sub_8269FCB8(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,16288
	ctx.r11.s64 = ctx.r11.s64 + 16288;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,824(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 824);
	// stw r11,824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 824, ctx.r11.u32);
	// lwz r11,828(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 828);
	// stw r11,828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 828, ctx.r11.u32);
	// lwz r11,832(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 832);
	// stw r11,832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 832, ctx.r11.u32);
	// lfs f0,836(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 836);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,836(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 836, temp.u32);
	// lfs f0,840(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 840);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,840(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 840, temp.u32);
	// lfs f0,844(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 844);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,844(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 844, temp.u32);
	// lwz r11,848(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// stw r11,848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 848, ctx.r11.u32);
	// lwz r11,852(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 852);
	// stw r11,852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 852, ctx.r11.u32);
	// lwz r11,856(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 856);
	// stw r11,856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 856, ctx.r11.u32);
	// lwz r11,860(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 860);
	// stw r11,860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 860, ctx.r11.u32);
	// lwz r11,864(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 864);
	// stw r11,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r11.u32);
	// lwz r11,868(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 868);
	// stw r11,868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 868, ctx.r11.u32);
	// lwz r11,872(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 872);
	// stw r11,872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 872, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FDA90"))) PPC_WEAK_FUNC(sub_827FDA90);
PPC_FUNC_IMPL(__imp__sub_827FDA90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x827FDA98;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,848(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// lwz r10,852(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 852);
	// lwz r9,856(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 856);
	// lwz r3,816(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 816);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// bl 0x827e25c8
	ctx.lr = 0x827FDAD0;
	sub_827E25C8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r4,816(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 816);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827e3e28
	ctx.lr = 0x827FDAE0;
	sub_827E3E28(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// fsubs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f12,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f8,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f9,f0,f12
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f7,f0,f13
	ctx.f7.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f0,f10,f10
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// stfs f7,88(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmadds f0,f9,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f8
	ctx.cr6.compare(ctx.f0.f64, ctx.f8.f64);
	// bne cr6,0x827fdb64
	if (!ctx.cr6.eq) goto loc_827FDB64;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r11,r11,904
	ctx.r11.s64 = ctx.r11.s64 + 904;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f7,f0
	ctx.cr6.compare(ctx.f7.f64, ctx.f0.f64);
	// bne cr6,0x827fdb58
	if (!ctx.cr6.eq) goto loc_827FDB58;
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
	// b 0x827fdbac
	goto loc_827FDBAC;
loc_827FDB58:
	// stfs f10,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// b 0x827fdba8
	goto loc_827FDBA8;
loc_827FDB64:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f7,16668(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16668);
	ctx.f7.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// fcmpu cr6,f0,f7
	ctx.cr6.compare(ctx.f0.f64, ctx.f7.f64);
	// addi r11,r11,904
	ctx.r11.s64 = ctx.r11.s64 + 904;
	// bge cr6,0x827fdb8c
	if (!ctx.cr6.lt) goto loc_827FDB8C;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// b 0x827fdba8
	goto loc_827FDBA8;
loc_827FDB8C:
	// fsqrts f7,f0
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(sqrt(ctx.f0.f64)));
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f8,f8,f7
	ctx.f8.f64 = double(float(ctx.f8.f64 / ctx.f7.f64));
	// fmuls f10,f8,f10
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f10,f9,f8
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_827FDBA8:
	// stfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_827FDBAC:
	// lwz r10,60(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// lwz r9,64(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// lwz r8,68(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// lwz r11,832(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 832);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// blt cr6,0x827fdc70
	if (ctx.cr6.lt) goto loc_827FDC70;
	// beq cr6,0x827fdc58
	if (ctx.cr6.eq) goto loc_827FDC58;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x827fdc40
	if (ctx.cr6.lt) goto loc_827FDC40;
	// beq cr6,0x827fdc20
	if (ctx.cr6.eq) goto loc_827FDC20;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// blt cr6,0x827fdc00
	if (ctx.cr6.lt) goto loc_827FDC00;
	// bne cr6,0x827fdc88
	if (!ctx.cr6.eq) goto loc_827FDC88;
	// lfs f10,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f10.f64 = double(temp.f32);
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// b 0x827fdc10
	goto loc_827FDC10;
loc_827FDC00:
	// lfs f10,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f10.f64 = double(temp.f32);
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
loc_827FDC10:
	// lfs f9,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f9.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fadds f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// b 0x827fdc94
	goto loc_827FDC94;
loc_827FDC20:
	// lfs f10,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f10.f64 = double(temp.f32);
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// lfs f9,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f9.f64 = double(temp.f32);
	// fadds f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// b 0x827fdc94
	goto loc_827FDC94;
loc_827FDC40:
	// lfs f10,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f10.f64 = double(temp.f32);
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// fadds f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// b 0x827fdc94
	goto loc_827FDC94;
loc_827FDC58:
	// lfs f10,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f10.f64 = double(temp.f32);
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// fadds f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// b 0x827fdc94
	goto loc_827FDC94;
loc_827FDC70:
	// lfs f10,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f10.f64 = double(temp.f32);
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// fadds f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// b 0x827fdc94
	goto loc_827FDC94;
loc_827FDC88:
	// lfs f13,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f11.f64 = double(temp.f32);
loc_827FDC94:
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// fadds f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// fadds f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f12,4(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// beq cr6,0x827fdcd8
	if (ctx.cr6.eq) goto loc_827FDCD8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
	// stw r9,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r9.u32);
loc_827FDCD8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82817280
	ctx.lr = 0x827FDCE4;
	sub_82817280(ctx, base);
	// lfs f13,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f13,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f12,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82817280
	ctx.lr = 0x827FDD20;
	sub_82817280(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x824f97d8
	ctx.lr = 0x827FDD2C;
	sub_824F97D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82817f30
	ctx.lr = 0x827FDD38;
	sub_82817F30(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x824f97d8
	ctx.lr = 0x827FDD44;
	sub_824F97D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82817f30
	ctx.lr = 0x827FDD50;
	sub_82817F30(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8269cbe0
	ctx.lr = 0x827FDD64;
	sub_8269CBE0(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82817b48
	ctx.lr = 0x827FDD70;
	sub_82817B48(ctx, base);
	// lwz r11,816(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 816);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f31,3640(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3640);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x82817bb8
	ctx.lr = 0x827FDD84;
	sub_82817BB8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f0,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f12,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f11,f11,f31
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// lfs f9,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f31
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// fmuls f9,f9,f31
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
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
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827FDDF0"))) PPC_WEAK_FUNC(sub_827FDDF0);
PPC_FUNC_IMPL(__imp__sub_827FDDF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x827FDDF8;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82a61740
	ctx.lr = 0x827FDE00;
	__savefpr_26(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// lwz r3,816(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// bl 0x827e5ee0
	ctx.lr = 0x827FDE14;
	sub_827E5EE0(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r28,3
	ctx.r28.s64 = 3;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// beq 0x827fdfc4
	if (ctx.cr0.eq) goto loc_827FDFC4;
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// lwz r10,828(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 828);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x827fded4
	if (ctx.cr6.eq) goto loc_827FDED4;
	// lwz r11,824(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 824);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827fdea8
	if (!ctx.cr6.eq) goto loc_827FDEA8;
	// stfs f31,836(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 836, temp.u32);
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// stw r11,828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 828, ctx.r11.u32);
	// lfs f0,1744(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1744);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,840(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 840, temp.u32);
	// lwz r11,1712(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1712);
	// stw r11,848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 848, ctx.r11.u32);
	// lwz r11,1716(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1716);
	// stw r11,852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 852, ctx.r11.u32);
	// lwz r11,1720(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1720);
	// stw r11,856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 856, ctx.r11.u32);
	// lwz r11,1728(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1728);
	// stw r11,860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 860, ctx.r11.u32);
	// lwz r11,1732(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1732);
	// stw r11,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r11.u32);
	// lwz r11,1736(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1736);
	// stw r11,868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 868, ctx.r11.u32);
	// lwz r11,1740(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1740);
	// stw r11,832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 832, ctx.r11.u32);
	// lfs f0,1724(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1724);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,844(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 844, temp.u32);
	// lwz r11,1748(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1748);
	// stw r11,872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 872, ctx.r11.u32);
	// b 0x827fded4
	goto loc_827FDED4;
loc_827FDEA8:
	// lwz r10,872(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 872);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x827fdec8
	if (ctx.cr6.eq) goto loc_827FDEC8;
	// stw r29,824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 824, ctx.r29.u32);
	// lwz r3,816(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// addi r4,r3,1408
	ctx.r4.s64 = ctx.r3.s64 + 1408;
	// bl 0x827e4eb0
	ctx.lr = 0x827FDEC4;
	sub_827E4EB0(ctx, base);
	// b 0x827fded4
	goto loc_827FDED4;
loc_827FDEC8:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x827fded4
	if (ctx.cr6.eq) goto loc_827FDED4;
loc_827FDED0:
	// stw r28,824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 824, ctx.r28.u32);
loc_827FDED4:
	// lfs f0,836(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 836);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lfs f13,840(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 840);
	ctx.f13.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fdivs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// bl 0x827fda90
	ctx.lr = 0x827FDEF0;
	sub_827FDA90(ctx, base);
	// lwz r3,816(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// bl 0x827e25c8
	ctx.lr = 0x827FDEF8;
	sub_827E25C8(ctx, base);
	// addi r5,r31,468
	ctx.r5.s64 = ctx.r31.s64 + 468;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,816(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// addi r30,r31,60
	ctx.r30.s64 = ctx.r31.s64 + 60;
	// bl 0x827e4018
	ctx.lr = 0x827FDF0C;
	sub_827E4018(ctx, base);
	// lfs f0,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// addi r5,r31,360
	ctx.r5.s64 = ctx.r31.s64 + 360;
	// fadds f28,f0,f11
	ctx.f28.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// lfs f13,64(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,68(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// lwz r4,816(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// fadds f27,f13,f10
	ctx.f27.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// lfs f0,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// fadds f26,f12,f0
	ctx.f26.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// bl 0x827e4018
	ctx.lr = 0x827FDF40;
	sub_827E4018(ctx, base);
	// lfs f13,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,252(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f12,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// lfs f30,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f30.f64 = double(temp.f32);
	// lfs f13,256(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// lfs f13,260(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	ctx.f13.f64 = double(temp.f32);
	// fadds f11,f13,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// fsubs f13,f28,f0
	ctx.f13.f64 = double(float(ctx.f28.f64 - ctx.f0.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fsubs f12,f27,f12
	ctx.f12.f64 = double(float(ctx.f27.f64 - ctx.f12.f64));
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fsubs f11,f26,f11
	ctx.f11.f64 = double(float(ctx.f26.f64 - ctx.f11.f64));
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmuls f0,f13,f13
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bne cr6,0x827fdff4
	if (!ctx.cr6.eq) goto loc_827FDFF4;
	// fcmpu cr6,f11,f31
	ctx.cr6.compare(ctx.f11.f64, ctx.f31.f64);
	// bne cr6,0x827fe020
	if (!ctx.cr6.eq) goto loc_827FE020;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// lfs f0,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// b 0x827fe024
	goto loc_827FE024;
loc_827FDFC4:
	// lwz r11,828(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 828);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827fded4
	if (ctx.cr6.eq) goto loc_827FDED4;
	// lwz r11,872(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 872);
	// stw r29,828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 828, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827fded0
	if (ctx.cr6.eq) goto loc_827FDED0;
	// lwz r3,816(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// addi r4,r3,1408
	ctx.r4.s64 = ctx.r3.s64 + 1408;
	// bl 0x827e4eb0
	ctx.lr = 0x827FDFEC;
	sub_827E4EB0(ctx, base);
	// stw r29,824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 824, ctx.r29.u32);
	// b 0x827fded4
	goto loc_827FDED4;
loc_827FDFF4:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f11,16668(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16668);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x827fe010
	if (!ctx.cr6.lt) goto loc_827FE010;
	// fmr f13,f31
	ctx.f13.f64 = ctx.f31.f64;
	// fmr f12,f31
	ctx.f12.f64 = ctx.f31.f64;
	// b 0x827fe020
	goto loc_827FE020;
loc_827FE010:
	// fsqrts f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fdivs f11,f30,f0
	ctx.f11.f64 = double(float(ctx.f30.f64 / ctx.f0.f64));
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
loc_827FE020:
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
loc_827FE024:
	// lwz r11,824(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 824);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827fe080
	if (!ctx.cr6.eq) goto loc_827FE080;
	// lwz r10,828(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 828);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x827fe080
	if (ctx.cr6.eq) goto loc_827FE080;
	// lfs f11,864(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 864);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f11,868(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 868);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,860(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 860);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,844(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 844);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f0,f11,f0,f12
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fmadds f0,f10,f13,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// blt cr6,0x827fe144
	if (ctx.cr6.lt) goto loc_827FE144;
	// lfs f0,840(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 840);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x827fe078
	if (!ctx.cr6.eq) goto loc_827FE078;
	// stfs f30,840(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 840, temp.u32);
	// stfs f30,836(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 836, temp.u32);
	// b 0x827fe0cc
	goto loc_827FE0CC;
loc_827FE078:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827fe0d0
	goto loc_827FE0D0;
loc_827FE080:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x827fe0d8
	if (!ctx.cr6.eq) goto loc_827FE0D8;
	// lfs f11,864(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 864);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f11,868(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 868);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,860(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 860);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,844(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 844);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f0,f11,f0,f12
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fmadds f0,f10,f13,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// bge cr6,0x827fe0b0
	if (!ctx.cr6.lt) goto loc_827FE0B0;
	// stw r28,824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 824, ctx.r28.u32);
loc_827FE0B0:
	// lfs f0,836(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 836);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f29
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f29.f64));
	// lfs f0,840(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 840);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,836(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 836, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x827fe144
	if (ctx.cr6.lt) goto loc_827FE144;
	// stfs f0,836(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 836, temp.u32);
loc_827FE0CC:
	// li r11,2
	ctx.r11.s64 = 2;
loc_827FE0D0:
	// stw r11,824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 824, ctx.r11.u32);
	// b 0x827fe144
	goto loc_827FE144;
loc_827FE0D8:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x827fe10c
	if (!ctx.cr6.eq) goto loc_827FE10C;
	// lfs f11,864(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 864);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f11,868(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 868);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,860(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 860);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,844(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 844);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f0,f11,f0,f12
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fmadds f0,f10,f13,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// bge cr6,0x827fe144
	if (!ctx.cr6.lt) goto loc_827FE144;
	// stw r28,824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 824, ctx.r28.u32);
	// b 0x827fe144
	goto loc_827FE144;
loc_827FE10C:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x827fe144
	if (!ctx.cr6.eq) goto loc_827FE144;
	// lwz r11,872(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 872);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827fe128
	if (ctx.cr6.eq) goto loc_827FE128;
	// stfs f31,836(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 836, temp.u32);
	// stw r29,824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 824, ctx.r29.u32);
loc_827FE128:
	// lfs f0,836(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 836);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f29.f64));
	// stfs f0,836(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 836, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x827fe144
	if (ctx.cr6.gt) goto loc_827FE144;
	// stfs f31,836(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 836, temp.u32);
	// stw r29,824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 824, ctx.r29.u32);
loc_827FE144:
	// lwz r11,824(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 824);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827fe1e4
	if (ctx.cr6.eq) goto loc_827FE1E4;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,816(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// lfs f31,1728(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1728);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x827e25c8
	ctx.lr = 0x827FE174;
	sub_827E25C8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f10,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fdivs f13,f30,f31
	ctx.f13.f64 = double(float(ctx.f30.f64 / ctx.f31.f64));
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,156(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// lfs f9,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lwz r9,164(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// fsubs f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r30,160(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f0,f12,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f0,f11,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x82817280
	ctx.lr = 0x827FE1D8;
	sub_82817280(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r30,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r30.u32);
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
loc_827FE1E4:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82a6178c
	ctx.lr = 0x827FE1F0;
	__restfpr_26(ctx, base);
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827FE1F8"))) PPC_WEAK_FUNC(sub_827FE1F8);
PPC_FUNC_IMPL(__imp__sub_827FE1F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,876
	ctx.r3.s64 = 876;
	// bl 0x82833108
	ctx.lr = 0x827FE210;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x827fe240
	if (ctx.cr0.eq) goto loc_827FE240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827ee8f8
	ctx.lr = 0x827FE220;
	sub_827EE8F8(ctx, base);
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,16288
	ctx.r10.s64 = ctx.r10.s64 + 16288;
	// stw r11,824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 824, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 828, ctx.r11.u32);
	// b 0x827fe244
	goto loc_827FE244;
loc_827FE240:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827FE244:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FE258"))) PPC_WEAK_FUNC(sub_827FE258);
PPC_FUNC_IMPL(__imp__sub_827FE258) {
	PPC_FUNC_PROLOGUE();
	// li r3,876
	ctx.r3.s64 = 876;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FE260"))) PPC_WEAK_FUNC(sub_827FE260);
PPC_FUNC_IMPL(__imp__sub_827FE260) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,20496(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20496);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x827fe2a0
	if (!ctx.cr0.eq) goto loc_827FE2A0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// stw r11,20496(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20496, ctx.r11.u32);
	// addi r3,r9,16244
	ctx.r3.s64 = ctx.r9.s64 + 16244;
	// bl 0x82816528
	ctx.lr = 0x827FE298;
	sub_82816528(ctx, base);
	// stw r3,20492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20492, ctx.r3.u32);
	// b 0x827fe2a4
	goto loc_827FE2A4;
loc_827FE2A0:
	// lwz r3,20492(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20492);
loc_827FE2A4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FE2B8"))) PPC_WEAK_FUNC(sub_827FE2B8);
PPC_FUNC_IMPL(__imp__sub_827FE2B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827fe308
	ctx.lr = 0x827FE2D8;
	sub_827FE308(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827FE2EC;
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

__attribute__((alias("__imp__sub_827FE308"))) PPC_WEAK_FUNC(sub_827FE308);
PPC_FUNC_IMPL(__imp__sub_827FE308) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,20500
	ctx.r31.s64 = ctx.r11.s64 + 20500;
	// lwz r11,20504(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20504);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x827fe350
	if (!ctx.cr0.eq) goto loc_827FE350;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,16384
	ctx.r9.s64 = ctx.r9.s64 + 16384;
	// stw r11,20504(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20504, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-25928
	ctx.r3.s64 = ctx.r11.s64 + -25928;
	// bl 0x82a4c758
	ctx.lr = 0x827FE350;
	sub_82A4C758(ctx, base);
loc_827FE350:
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

__attribute__((alias("__imp__sub_827FE368"))) PPC_WEAK_FUNC(sub_827FE368);
PPC_FUNC_IMPL(__imp__sub_827FE368) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r11,3988
	ctx.r3.s64 = ctx.r11.s64 + 3988;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FE378"))) PPC_WEAK_FUNC(sub_827FE378);
PPC_FUNC_IMPL(__imp__sub_827FE378) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x827fe3b0
	if (ctx.cr6.eq) goto loc_827FE3B0;
	// bl 0x827e8d20
	ctx.lr = 0x827FE3A0;
	sub_827E8D20(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x827fe3b0
	if (!ctx.cr6.eq) goto loc_827FE3B0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827fe3bc
	goto loc_827FE3BC;
loc_827FE3B0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827f5278
	ctx.lr = 0x827FE3BC;
	sub_827F5278(ctx, base);
loc_827FE3BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FE3D8"))) PPC_WEAK_FUNC(sub_827FE3D8);
PPC_FUNC_IMPL(__imp__sub_827FE3D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x827e8d20
	sub_827E8D20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827FE3E0"))) PPC_WEAK_FUNC(sub_827FE3E0);
PPC_FUNC_IMPL(__imp__sub_827FE3E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,140
	ctx.r3.s64 = 140;
	// bl 0x82833108
	ctx.lr = 0x827FE400;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x827fe438
	if (ctx.cr0.eq) goto loc_827FE438;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827f4f70
	ctx.lr = 0x827FE414;
	sub_827F4F70(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,16408
	ctx.r11.s64 = ctx.r11.s64 + 16408;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r10,136(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// rlwimi r10,r11,0,1,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x7FFFFFFF) | (ctx.r10.u64 & 0xFFFFFFFF80000000);
	// stw r10,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r10.u32);
	// b 0x827fe43c
	goto loc_827FE43C;
loc_827FE438:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827FE43C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FE458"))) PPC_WEAK_FUNC(sub_827FE458);
PPC_FUNC_IMPL(__imp__sub_827FE458) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827e8d20
	ctx.lr = 0x827FE478;
	sub_827E8D20(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x827fe48c
	if (ctx.cr6.eq) goto loc_827FE48C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x827f50d8
	ctx.lr = 0x827FE48C;
	sub_827F50D8(ctx, base);
loc_827FE48C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FE4A8"))) PPC_WEAK_FUNC(sub_827FE4A8);
PPC_FUNC_IMPL(__imp__sub_827FE4A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r11,16484
	ctx.r3.s64 = ctx.r11.s64 + 16484;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FE4B8"))) PPC_WEAK_FUNC(sub_827FE4B8);
PPC_FUNC_IMPL(__imp__sub_827FE4B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x827fe4f0
	if (ctx.cr6.eq) goto loc_827FE4F0;
	// bl 0x827fe6e0
	ctx.lr = 0x827FE4E0;
	sub_827FE6E0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x827fe4f0
	if (!ctx.cr6.eq) goto loc_827FE4F0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827fe4fc
	goto loc_827FE4FC;
loc_827FE4F0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827f5278
	ctx.lr = 0x827FE4FC;
	sub_827F5278(ctx, base);
loc_827FE4FC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FE518"))) PPC_WEAK_FUNC(sub_827FE518);
PPC_FUNC_IMPL(__imp__sub_827FE518) {
	PPC_FUNC_PROLOGUE();
	// b 0x827fe6e0
	sub_827FE6E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827FE520"))) PPC_WEAK_FUNC(sub_827FE520);
PPC_FUNC_IMPL(__imp__sub_827FE520) {
	PPC_FUNC_PROLOGUE();
	// b 0x827f5138
	sub_827F5138(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827FE528"))) PPC_WEAK_FUNC(sub_827FE528);
PPC_FUNC_IMPL(__imp__sub_827FE528) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,136
	ctx.r3.s64 = 136;
	// bl 0x82833108
	ctx.lr = 0x827FE548;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x827fe570
	if (ctx.cr0.eq) goto loc_827FE570;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827f4f70
	ctx.lr = 0x827FE55C;
	sub_827F4F70(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,16512
	ctx.r11.s64 = ctx.r11.s64 + 16512;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x827fe574
	goto loc_827FE574;
loc_827FE570:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827FE574:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FE590"))) PPC_WEAK_FUNC(sub_827FE590);
PPC_FUNC_IMPL(__imp__sub_827FE590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827fe6e0
	ctx.lr = 0x827FE5B0;
	sub_827FE6E0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x827fe5c4
	if (ctx.cr6.eq) goto loc_827FE5C4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x827f50d8
	ctx.lr = 0x827FE5C4;
	sub_827F50D8(ctx, base);
loc_827FE5C4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FE5E0"))) PPC_WEAK_FUNC(sub_827FE5E0);
PPC_FUNC_IMPL(__imp__sub_827FE5E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x827FE5F8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x827fe61c
	if (ctx.cr0.eq) goto loc_827FE61C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827f6548
	ctx.lr = 0x827FE608;
	sub_827F6548(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,16512
	ctx.r11.s64 = ctx.r11.s64 + 16512;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x827fe620
	goto loc_827FE620;
loc_827FE61C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827FE620:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FE638"))) PPC_WEAK_FUNC(sub_827FE638);
PPC_FUNC_IMPL(__imp__sub_827FE638) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,20480(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20480);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x827fe678
	if (!ctx.cr0.eq) goto loc_827FE678;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// stw r11,20480(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20480, ctx.r11.u32);
	// addi r3,r9,16484
	ctx.r3.s64 = ctx.r9.s64 + 16484;
	// bl 0x82816528
	ctx.lr = 0x827FE670;
	sub_82816528(ctx, base);
	// stw r3,20476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20476, ctx.r3.u32);
	// b 0x827fe67c
	goto loc_827FE67C;
loc_827FE678:
	// lwz r3,20476(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20476);
loc_827FE67C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FE690"))) PPC_WEAK_FUNC(sub_827FE690);
PPC_FUNC_IMPL(__imp__sub_827FE690) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827fe6e0
	ctx.lr = 0x827FE6B0;
	sub_827FE6E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827FE6C4;
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

__attribute__((alias("__imp__sub_827FE6E0"))) PPC_WEAK_FUNC(sub_827FE6E0);
PPC_FUNC_IMPL(__imp__sub_827FE6E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,20484
	ctx.r31.s64 = ctx.r11.s64 + 20484;
	// lwz r11,20488(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20488);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x827fe728
	if (!ctx.cr0.eq) goto loc_827FE728;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,16588
	ctx.r9.s64 = ctx.r9.s64 + 16588;
	// stw r11,20488(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20488, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-25904
	ctx.r3.s64 = ctx.r11.s64 + -25904;
	// bl 0x82a4c758
	ctx.lr = 0x827FE728;
	sub_82A4C758(ctx, base);
loc_827FE728:
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

__attribute__((alias("__imp__sub_827FE740"))) PPC_WEAK_FUNC(sub_827FE740);
PPC_FUNC_IMPL(__imp__sub_827FE740) {
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
	// bl 0x82833180
	ctx.lr = 0x827FE758;
	sub_82833180(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// addi r8,r11,16688
	ctx.r8.s64 = ctx.r11.s64 + 16688;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// li r7,40
	ctx.r7.s64 = 40;
	// li r8,16
	ctx.r8.s64 = 16;
	// lfs f13,16444(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16444);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r10,r10,1
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r8,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r8.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stfs f13,76(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FE7F0"))) PPC_WEAK_FUNC(sub_827FE7F0);
PPC_FUNC_IMPL(__imp__sub_827FE7F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x827FE7F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r5,r31,24
	ctx.r5.s64 = ctx.r31.s64 + 24;
	// addi r3,r29,12
	ctx.r3.s64 = ctx.r29.s64 + 12;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// clrlwi r10,r10,1
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// rlwinm r11,r11,26,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x80000000;
	// xoris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 ^ 2147483648;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// bl 0x827ff160
	ctx.lr = 0x827FE834;
	sub_827FF160(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r30,r29,36
	ctx.r30.s64 = ctx.r29.s64 + 36;
	// addi r3,r11,14544
	ctx.r3.s64 = ctx.r11.s64 + 14544;
	// bl 0x828165a8
	ctx.lr = 0x827FE844;
	sub_828165A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82846e98
	ctx.lr = 0x827FE858;
	sub_82846E98(ctx, base);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r9,56(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// add r28,r10,r3
	ctx.r28.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r27,52(r29)
	PPC_STORE_U32(ctx.r29.u32 + 52, ctx.r27.u32);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x827fe88c
	if (ctx.cr6.eq) goto loc_827FE88C;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332c38
	ctx.lr = 0x827FE88C;
	sub_82332C38(ctx, base);
loc_827FE88C:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827fe914
	if (!ctx.cr6.gt) goto loc_827FE914;
loc_827FE898:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r9,8(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f0,12(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x82332d50
	ctx.lr = 0x827FE8CC;
	sub_82332D50(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827fe900
	if (ctx.cr0.eq) goto loc_827FE900;
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
loc_827FE900:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x827fe898
	if (ctx.cr6.lt) goto loc_827FE898;
loc_827FE914:
	// lfs f0,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 60, temp.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stw r11,84(r29)
	PPC_STORE_U32(ctx.r29.u32 + 84, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827FE930"))) PPC_WEAK_FUNC(sub_827FE930);
PPC_FUNC_IMPL(__imp__sub_827FE930) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f13,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// lfs f11,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f9,f9,f11
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// lfs f1,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f8,f0,f0
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f8,f10,f10,f8
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f8.f64));
	// fmadds f8,f9,f9,f8
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f8.f64));
	// fsqrts f8,f8
	ctx.f8.f64 = double(float(sqrt(ctx.f8.f64)));
	// fcmpu cr6,f8,f1
	ctx.cr6.compare(ctx.f8.f64, ctx.f1.f64);
	// beq cr6,0x827fea20
	if (ctx.cr6.eq) goto loc_827FEA20;
	// lfs f7,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// fsubs f6,f7,f12
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f12.f64));
	// lfs f7,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f5,f7,f11
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// lfs f7,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f4,f7,f13
	ctx.f4.f64 = double(float(ctx.f7.f64 - ctx.f13.f64));
	// lfs f7,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f7.f64 = double(temp.f32);
	// fdivs f7,f7,f8
	ctx.f7.f64 = double(float(ctx.f7.f64 / ctx.f8.f64));
	// fmuls f10,f10,f7
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f7.f64));
	// fmuls f9,f7,f9
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f9.f64));
	// fmuls f7,f0,f7
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// fmuls f0,f6,f10
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f10.f64));
	// fmadds f0,f5,f9,f0
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f9.f64 + ctx.f0.f64));
	// fmadds f0,f4,f7,f0
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f7.f64 + ctx.f0.f64));
	// fmuls f7,f0,f7
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// fadds f13,f13,f7
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f7.f64));
	// stfs f13,-16(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// fadds f13,f11,f9
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f9.f64));
	// stfs f13,-12(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// fadds f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// lwz r9,-12(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// stfs f12,-8(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lwz r11,-8(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r11.u32);
	// stw r9,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r9.u32);
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// blt cr6,0x827fea20
	if (ctx.cr6.lt) goto loc_827FEA20;
	// fcmpu cr6,f0,f8
	ctx.cr6.compare(ctx.f0.f64, ctx.f8.f64);
	// ble cr6,0x827fea18
	if (!ctx.cr6.gt) goto loc_827FEA18;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// fmr f1,f8
	ctx.f1.f64 = ctx.f8.f64;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// b 0x827fea34
	goto loc_827FEA34;
loc_827FEA18:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// blr 
	return;
loc_827FEA20:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
loc_827FEA34:
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FEA40"))) PPC_WEAK_FUNC(sub_827FEA40);
PPC_FUNC_IMPL(__imp__sub_827FEA40) {
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
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827FEA60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FEA70"))) PPC_WEAK_FUNC(sub_827FEA70);
PPC_FUNC_IMPL(__imp__sub_827FEA70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x827FEA78;
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
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwa r11,52(r31)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 52));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfs f31,16680(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16680);
	ctx.f31.f64 = double(temp.f32);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,16444(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16444);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x82a4cba0
	ctx.lr = 0x827FEAB8;
	sub_82A4CBA0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// ble cr6,0x827feb80
	if (!ctx.cr6.gt) goto loc_827FEB80;
loc_827FEAD8:
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x827feb44
	if (!ctx.cr6.lt) goto loc_827FEB44;
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm r8,r10,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f13,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r6,r5,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f12,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lfs f11,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
loc_827FEB00:
	// lfs f0,4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f10,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f10,f10,f11
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// lfs f9,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f9,f9,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f10,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f0.f64));
	// fmadds f0,f9,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x827feb34
	if (!ctx.cr6.lt) goto loc_827FEB34;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
loc_827FEB34:
	// add r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 + ctx.r7.u64;
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x827feb00
	if (ctx.cr6.lt) goto loc_827FEB00;
loc_827FEB44:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// subf. r10,r11,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt 0x827feb68
	if (ctx.cr0.gt) goto loc_827FEB68;
	// li r10,0
	ctx.r10.s64 = 0;
loc_827FEB68:
	// add. r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x827feb74
	if (ctx.cr0.lt) goto loc_827FEB74;
	// li r11,0
	ctx.r11.s64 = 0;
loc_827FEB74:
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bgt cr6,0x827fead8
	if (ctx.cr6.gt) goto loc_827FEAD8;
loc_827FEB80:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827febb8
	if (!ctx.cr6.gt) goto loc_827FEBB8;
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x827febac
	if (!ctx.cr6.lt) goto loc_827FEBAC;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// b 0x827febb8
	goto loc_827FEBB8;
loc_827FEBAC:
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x827febb8
	if (ctx.cr6.lt) goto loc_827FEBB8;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_827FEBB8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827FEBC8"))) PPC_WEAK_FUNC(sub_827FEBC8);
PPC_FUNC_IMPL(__imp__sub_827FEBC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f4
	ctx.lr = 0x827FEBD0;
	__savegprlr_23(ctx, base);
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82a6173c
	ctx.lr = 0x827FEBD8;
	__savefpr_25(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827feeb4
	if (!ctx.cr6.gt) goto loc_827FEEB4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827FEC0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm r8,r3,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// addic. r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwzx r10,r8,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lfs f0,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// ble 0x827fec54
	if (!ctx.cr0.gt) goto loc_827FEC54;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_827FEC54:
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x827fec6c
	if (!ctx.cr6.gt) goto loc_827FEC6C;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_827FEC6C:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm r7,r9,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r29,r10,4,0,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r7,r11
	ctx.r10.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lis r4,-32215
	ctx.r4.s64 = -2111242240;
	// add r6,r29,r11
	ctx.r6.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwzx r5,r11,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwzx r3,r7,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// lwz r26,4(r10)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r25,4(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lfs f3,904(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 904);
	ctx.f3.f64 = double(temp.f32);
	// lwz r24,8(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r4,4(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r6,8(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// stw r26,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r26.u32);
	// lfs f26,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f26.f64 = double(temp.f32);
	// stw r25,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r25.u32);
	// lfs f30,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f30.f64 = double(temp.f32);
	// stw r5,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r5.u32);
	// lfs f31,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f31.f64 = double(temp.f32);
	// stw r4,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r4.u32);
	// lfs f13,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// stw r6,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r6.u32);
	// lfs f11,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f11.f64 = double(temp.f32);
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// lfs f27,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f27.f64 = double(temp.f32);
	// lwzx r6,r29,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r23,8(r10)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stw r24,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r24.u32);
	// lfs f29,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f29.f64 = double(temp.f32);
	// lwzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// stw r6,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r6.u32);
	// lfs f9,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f9.f64 = double(temp.f32);
	// stw r23,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r23.u32);
	// lfs f25,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f25.f64 = double(temp.f32);
	// fsubs f12,f29,f25
	ctx.f12.f64 = double(float(ctx.f29.f64 - ctx.f25.f64));
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// fsubs f0,f30,f26
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f26.f64));
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// fsubs f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f30.f64));
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// fsubs f11,f11,f29
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f29.f64));
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// fsubs f10,f31,f27
	ctx.f10.f64 = double(float(ctx.f31.f64 - ctx.f27.f64));
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// fsubs f9,f9,f31
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f31.f64));
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fmadds f13,f11,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f13.f64));
	// fmadds f0,f10,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f0.f64));
	// fmadds f13,f9,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f13.f64));
	// fsqrts f2,f0
	ctx.f2.f64 = double(float(sqrt(ctx.f0.f64)));
	// fsqrts f28,f13
	ctx.f28.f64 = double(float(sqrt(ctx.f13.f64)));
	// fcmpu cr6,f2,f3
	ctx.cr6.compare(ctx.f2.f64, ctx.f3.f64);
	// beq cr6,0x827fed7c
	if (ctx.cr6.eq) goto loc_827FED7C;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x827fe930
	ctx.lr = 0x827FED7C;
	sub_827FE930(ctx, base);
loc_827FED7C:
	// fcmpu cr6,f28,f3
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f28.f64, ctx.f3.f64);
	// beq cr6,0x827fed98
	if (ctx.cr6.eq) goto loc_827FED98;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827fe930
	ctx.lr = 0x827FED98;
	sub_827FE930(ctx, base);
loc_827FED98:
	// lfs f0,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f8,f13,f0
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fsubs f7,f12,f0
	ctx.f7.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f0,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f6,f11,f0
	ctx.f6.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fsubs f5,f10,f0
	ctx.f5.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// lfs f4,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f9,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f1,f0,f4
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f4.f64));
	// fsubs f4,f9,f4
	ctx.f4.f64 = double(float(ctx.f9.f64 - ctx.f4.f64));
	// fmuls f8,f8,f8
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// fmuls f7,f7,f7
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f7.f64));
	// fmadds f8,f6,f6,f8
	ctx.f8.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f8.f64));
	// fmadds f7,f5,f5,f7
	ctx.f7.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f7.f64));
	// fmadds f8,f1,f1,f8
	ctx.f8.f64 = double(float(ctx.f1.f64 * ctx.f1.f64 + ctx.f8.f64));
	// fmadds f1,f4,f4,f7
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f4.f64 + ctx.f7.f64));
	// fcmpu cr6,f8,f1
	ctx.cr6.compare(ctx.f8.f64, ctx.f1.f64);
	// bge cr6,0x827fee4c
	if (!ctx.cr6.lt) goto loc_827FEE4C;
	// fsubs f12,f11,f25
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f25.f64));
	// fsubs f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f27.f64));
	// fsubs f13,f13,f26
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f26.f64));
	// fmr f11,f3
	ctx.f11.f64 = ctx.f3.f64;
	// fcmpu cr6,f2,f3
	ctx.cr6.compare(ctx.f2.f64, ctx.f3.f64);
	// beq cr6,0x827fee20
	if (ctx.cr6.eq) goto loc_827FEE20;
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f13,f12,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f0,f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fdivs f11,f0,f2
	ctx.f11.f64 = double(float(ctx.f0.f64 / ctx.f2.f64));
loc_827FEE20:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// fmr f1,f8
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f8.f64;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// add r10,r7,r11
	ctx.r10.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// b 0x827fee9c
	goto loc_827FEE9C;
loc_827FEE4C:
	// fsubs f13,f12,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f30.f64));
	// fsubs f0,f9,f31
	ctx.f0.f64 = double(float(ctx.f9.f64 - ctx.f31.f64));
	// fsubs f12,f10,f29
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f29.f64));
	// fmr f11,f3
	ctx.f11.f64 = ctx.f3.f64;
	// fcmpu cr6,f28,f3
	ctx.cr6.compare(ctx.f28.f64, ctx.f3.f64);
	// beq cr6,0x827fee78
	if (ctx.cr6.eq) goto loc_827FEE78;
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f13,f12,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f0,f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fdivs f11,f0,f28
	ctx.f11.f64 = double(float(ctx.f0.f64 / ctx.f28.f64));
loc_827FEE78:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
loc_827FEE9C:
	// lfs f0,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fmadds f0,f13,f11,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f0.f64));
	// stfs f0,0(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// b 0x827feed8
	goto loc_827FEED8;
loc_827FEEB4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lfs f1,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stfs f1,0(r27)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
loc_827FEED8:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82a61788
	ctx.lr = 0x827FEEE4;
	__restfpr_25(ctx, base);
	// b 0x82a4ea44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827FEEE8"))) PPC_WEAK_FUNC(sub_827FEEE8);
PPC_FUNC_IMPL(__imp__sub_827FEEE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,52(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 52);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x827ff150
	if (!ctx.cr6.gt) goto loc_827FF150;
	// li r11,0
	ctx.r11.s64 = 0;
loc_827FEF08:
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// ble cr6,0x827fef5c
	if (!ctx.cr6.gt) goto loc_827FEF5C;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// srawi r9,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r6,r9,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lfs f0,12(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// ble cr6,0x827fef40
	if (!ctx.cr6.gt) goto loc_827FEF40;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// b 0x827fef54
	goto loc_827FEF54;
loc_827FEF40:
	// fcmpu cr6,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bge cr6,0x827fef50
	if (!ctx.cr6.lt) goto loc_827FEF50;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x827fef54
	goto loc_827FEF54;
loc_827FEF50:
	// li r3,1
	ctx.r3.s64 = 1;
loc_827FEF54:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x827fef08
	if (ctx.cr6.eq) goto loc_827FEF08;
loc_827FEF5C:
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,48(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// li r3,1
	ctx.r3.s64 = 1;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwzx r9,r9,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r9,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r9.u32);
	// lwz r9,8(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r9,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r9.u32);
	// lwz r9,48(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lfs f0,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// ble cr6,0x827fefb4
	if (!ctx.cr6.gt) goto loc_827FEFB4;
	// addic. r6,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r6.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bgt 0x827fefd0
	if (ctx.cr0.gt) goto loc_827FEFD0;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x827fefd0
	goto loc_827FEFD0;
loc_827FEFB4:
	// lwz r7,52(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 52);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// addi r11,r7,-1
	ctx.r11.s64 = ctx.r7.s64 + -1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x827fefd0
	if (!ctx.cr6.gt) goto loc_827FEFD0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_827FEFD0:
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// rlwinm r8,r6,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r4,r7,r8
	ctx.r4.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lwzx r31,r10,r9
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// lwz r30,8(r6)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// lwz r6,4(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lfs f0,12(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lfs f13,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// fsubs f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r30.u32);
	// lfs f0,904(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stw r6,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r6.u32);
	// lfs f13,-44(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -44);
	ctx.f13.f64 = double(temp.f32);
	// stw r9,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r9.u32);
	// fmr f8,f0
	ctx.f8.f64 = ctx.f0.f64;
	// stw r10,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r10.u32);
	// lfs f5,-28(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -28);
	ctx.f5.f64 = double(temp.f32);
	// stw r8,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r8.u32);
	// lfs f3,-32(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	ctx.f3.f64 = double(temp.f32);
	// stw r31,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r31.u32);
	// lfs f11,-48(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -48);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f11,f11,f3
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f3.f64));
	// stfs f11,-32(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// fsubs f13,f13,f5
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f5.f64));
	// lfs f4,-24(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	ctx.f4.f64 = double(temp.f32);
	// lfs f12,-40(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -40);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f9,f0
	ctx.cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// fsubs f12,f12,f4
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f4.f64));
	// stfs f13,-28(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// stfs f12,-24(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// fmuls f10,f13,f13
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f10,f12,f12,f10
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fmadds f10,f11,f11,f10
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fsqrts f7,f10
	ctx.f7.f64 = double(float(sqrt(ctx.f10.f64)));
	// beq cr6,0x827ff088
	if (ctx.cr6.eq) goto loc_827FF088;
	// lfs f8,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f8,f1,f8
	ctx.f8.f64 = double(float(ctx.f1.f64 - ctx.f8.f64));
	// fdivs f8,f8,f9
	ctx.f8.f64 = double(float(ctx.f8.f64 / ctx.f9.f64));
loc_827FF088:
	// fcmpu cr6,f7,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f7.f64, ctx.f0.f64);
	// beq cr6,0x827ff144
	if (ctx.cr6.eq) goto loc_827FF144;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f9,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f10,f9
	ctx.cr6.compare(ctx.f10.f64, ctx.f9.f64);
	// bne cr6,0x827ff0c8
	if (!ctx.cr6.eq) goto loc_827FF0C8;
	// lwz r11,-32(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	// lwz r10,-28(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -28);
	// lwz r9,-24(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// stw r11,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r11.u32);
	// lfs f11,-32(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	ctx.f11.f64 = double(temp.f32);
	// stw r10,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r10.u32);
	// lfs f13,-28(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -28);
	ctx.f13.f64 = double(temp.f32);
	// stw r9,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r9.u32);
	// lfs f0,-24(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	ctx.f0.f64 = double(temp.f32);
	// b 0x827ff0f8
	goto loc_827FF0F8;
loc_827FF0C8:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f6,16668(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16668);
	ctx.f6.f64 = double(temp.f32);
	// fcmpu cr6,f10,f6
	ctx.cr6.compare(ctx.f10.f64, ctx.f6.f64);
	// bge cr6,0x827ff0e4
	if (!ctx.cr6.lt) goto loc_827FF0E4;
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// b 0x827ff0f8
	goto loc_827FF0F8;
loc_827FF0E4:
	// fsqrts f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(sqrt(ctx.f10.f64)));
	// fdivs f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 / ctx.f0.f64));
	// fmuls f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
loc_827FF0F8:
	// fmuls f0,f0,f8
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// fmuls f12,f11,f8
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// fmuls f13,f13,f8
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// fmuls f0,f0,f7
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// fmuls f12,f12,f7
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// fmuls f13,f13,f7
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f7.f64));
	// fadds f0,f0,f4
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f4.f64));
	// stfs f0,-24(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// fadds f0,f12,f3
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f3.f64));
	// stfs f0,-32(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// lwz r10,-32(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	// fadds f0,f13,f5
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f5.f64));
	// stfs f0,-28(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// lwz r11,-24(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// stw r11,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r11.u32);
	// lwz r9,-28(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -28);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// stw r9,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r9.u32);
	// b 0x827ff150
	goto loc_827FF150;
loc_827FF144:
	// stw r8,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// stw r10,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// stw r9,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r9.u32);
loc_827FF150:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FF160"))) PPC_WEAK_FUNC(sub_827FF160);
PPC_FUNC_IMPL(__imp__sub_827FF160) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x827FF168;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,14544
	ctx.r3.s64 = ctx.r11.s64 + 14544;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x828165a8
	ctx.lr = 0x827FF184;
	sub_828165A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82846e98
	ctx.lr = 0x827FF198;
	sub_82846E98(ctx, base);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// add r31,r10,r3
	ctx.r31.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r28,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r28.u32);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x827ff1cc
	if (ctx.cr6.eq) goto loc_827FF1CC;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332c38
	ctx.lr = 0x827FF1CC;
	sub_82332C38(ctx, base);
loc_827FF1CC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827ff270
	if (!ctx.cr6.gt) goto loc_827FF270;
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
loc_827FF1DC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,40
	ctx.r5.s64 = 40;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r8,-24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,-20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lwz r27,-16(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lwz r26,-12(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// lwz r25,-8(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r24,-4(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// stw r24,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// bl 0x82332d50
	ctx.lr = 0x827FF240;
	sub_82332D50(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mulli r10,r3,40
	ctx.r10.s64 = ctx.r3.s64 * 40;
	// add. r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827ff25c
	if (ctx.cr0.eq) goto loc_827FF25C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,40
	ctx.r5.s64 = 40;
	// bl 0x82a4ea80
	ctx.lr = 0x827FF25C;
	sub_82A4EA80(ctx, base);
loc_827FF25C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,40
	ctx.r31.s64 = ctx.r31.s64 + 40;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x827ff1dc
	if (ctx.cr6.lt) goto loc_827FF1DC;
loc_827FF270:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827FF278"))) PPC_WEAK_FUNC(sub_827FF278);
PPC_FUNC_IMPL(__imp__sub_827FF278) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x827FF280;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r30,r28,36
	ctx.r30.s64 = ctx.r28.s64 + 36;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,52(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332ca8
	ctx.lr = 0x827FF2A8;
	sub_82332CA8(ctx, base);
	// lwz r3,48(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827ff2b8
	if (ctx.cr6.eq) goto loc_827FF2B8;
	// bl 0x82332db8
	ctx.lr = 0x827FF2B8;
	sub_82332DB8(ctx, base);
loc_827FF2B8:
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r28,12
	ctx.r31.s64 = ctx.r28.s64 + 12;
	// stw r29,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r29.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
	// li r6,40
	ctx.r6.s64 = 40;
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,28(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// bl 0x82332ca8
	ctx.lr = 0x827FF2E4;
	sub_82332CA8(ctx, base);
	// lwz r3,24(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827ff2f4
	if (ctx.cr6.eq) goto loc_827FF2F4;
	// bl 0x82332db8
	ctx.lr = 0x827FF2F4;
	sub_82332DB8(ctx, base);
loc_827FF2F4:
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// bl 0x82833238
	ctx.lr = 0x827FF308;
	sub_82833238(ctx, base);
	// clrlwi. r11,r27,31
	ctx.r11.u64 = ctx.r27.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827ff318
	if (ctx.cr0.eq) goto loc_827FF318;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332db8
	ctx.lr = 0x827FF318;
	sub_82332DB8(ctx, base);
loc_827FF318:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827FF328"))) PPC_WEAK_FUNC(sub_827FF328);
PPC_FUNC_IMPL(__imp__sub_827FF328) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r11,4232
	ctx.r3.s64 = ctx.r11.s64 + 4232;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FF338"))) PPC_WEAK_FUNC(sub_827FF338);
PPC_FUNC_IMPL(__imp__sub_827FF338) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827e9c00
	ctx.lr = 0x827FF358;
	sub_827E9C00(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x827ff36c
	if (ctx.cr6.eq) goto loc_827FF36C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x827ff388
	ctx.lr = 0x827FF36C;
	sub_827FF388(ctx, base);
loc_827FF36C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FF388"))) PPC_WEAK_FUNC(sub_827FF388);
PPC_FUNC_IMPL(__imp__sub_827FF388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827ed730
	ctx.lr = 0x827FF3A8;
	sub_827ED730(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x827ff3b8
	if (!ctx.cr6.eq) goto loc_827FF3B8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x827ff3cc
	goto loc_827FF3CC;
loc_827FF3B8:
	// bl 0x82333d20
	ctx.lr = 0x827FF3BC;
	sub_82333D20(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x827ff3cc
	if (ctx.cr6.eq) goto loc_827FF3CC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_827FF3CC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FF3E8"))) PPC_WEAK_FUNC(sub_827FF3E8);
PPC_FUNC_IMPL(__imp__sub_827FF3E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x827ff420
	if (ctx.cr6.eq) goto loc_827FF420;
	// bl 0x827e9c00
	ctx.lr = 0x827FF410;
	sub_827E9C00(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x827ff420
	if (!ctx.cr6.eq) goto loc_827FF420;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827ff42c
	goto loc_827FF42C;
loc_827FF420:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827ff448
	ctx.lr = 0x827FF42C;
	sub_827FF448(ctx, base);
loc_827FF42C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FF448"))) PPC_WEAK_FUNC(sub_827FF448);
PPC_FUNC_IMPL(__imp__sub_827FF448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// beq cr6,0x827ff488
	if (ctx.cr6.eq) goto loc_827FF488;
	// bl 0x827ed730
	ctx.lr = 0x827FF468;
	sub_827ED730(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x827ff478
	if (!ctx.cr6.eq) goto loc_827FF478;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827ff48c
	goto loc_827FF48C;
loc_827FF478:
	// bl 0x82333d20
	ctx.lr = 0x827FF47C;
	sub_82333D20(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x827ff48c
	if (ctx.cr6.eq) goto loc_827FF48C;
loc_827FF488:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827FF48C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FF4A0"))) PPC_WEAK_FUNC(sub_827FF4A0);
PPC_FUNC_IMPL(__imp__sub_827FF4A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x827e9c00
	sub_827E9C00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827FF4A8"))) PPC_WEAK_FUNC(sub_827FF4A8);
PPC_FUNC_IMPL(__imp__sub_827FF4A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x827FF4C4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827ff4d8
	if (ctx.cr0.eq) goto loc_827FF4D8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x827ff4f0
	ctx.lr = 0x827FF4D4;
	sub_827FF4F0(ctx, base);
	// b 0x827ff4dc
	goto loc_827FF4DC;
loc_827FF4D8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827FF4DC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FF4F0"))) PPC_WEAK_FUNC(sub_827FF4F0);
PPC_FUNC_IMPL(__imp__sub_827FF4F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x827FF4F8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// addi r11,r11,14104
	ctx.r11.s64 = ctx.r11.s64 + 14104;
	// addi r9,r9,16608
	ctx.r9.s64 = ctx.r9.s64 + 16608;
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lwz r8,4(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
	// addi r11,r11,16688
	ctx.r11.s64 = ctx.r11.s64 + 16688;
	// stw r8,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r8.u32);
	// addi r31,r28,12
	ctx.r31.s64 = ctx.r28.s64 + 12;
	// lwz r9,8(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// rlwimi r9,r10,0,1,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x7FFFFFFF) | (ctx.r9.u64 & 0xFFFFFFFF80000000);
	// addi r29,r25,12
	ctx.r29.s64 = ctx.r25.s64 + 12;
	// stw r9,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r9.u32);
	// li r10,40
	ctx.r10.s64 = 40;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// stw r30,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r30.u32);
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// stw r10,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r10.u32);
	// stw r30,24(r28)
	PPC_STORE_U32(ctx.r28.u32 + 24, ctx.r30.u32);
	// stw r30,28(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28, ctx.r30.u32);
	// stw r30,32(r28)
	PPC_STORE_U32(ctx.r28.u32 + 32, ctx.r30.u32);
	// stw r30,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r30.u32);
	// beq cr6,0x827ff5f8
	if (ctx.cr6.eq) goto loc_827FF5F8;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827ff5f8
	if (!ctx.cr6.gt) goto loc_827FF5F8;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827ff59c
	if (ctx.cr0.eq) goto loc_827FF59C;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c38
	ctx.lr = 0x827FF59C;
	sub_82332C38(ctx, base);
loc_827FF59C:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827ff5f8
	if (!ctx.cr6.gt) goto loc_827FF5F8;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
loc_827FF5B0:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332d50
	ctx.lr = 0x827FF5C4;
	sub_82332D50(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r10,r3,40
	ctx.r10.s64 = ctx.r3.s64 * 40;
	// add. r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827ff5e4
	if (ctx.cr0.eq) goto loc_827FF5E4;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// li r5,40
	ctx.r5.s64 = 40;
	// add r4,r11,r27
	ctx.r4.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x82a4ea80
	ctx.lr = 0x827FF5E4;
	sub_82A4EA80(ctx, base);
loc_827FF5E4:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,40
	ctx.r27.s64 = ctx.r27.s64 + 40;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x827ff5b0
	if (ctx.cr6.lt) goto loc_827FF5B0;
loc_827FF5F8:
	// addi r31,r28,36
	ctx.r31.s64 = ctx.r28.s64 + 36;
	// stw r30,44(r28)
	PPC_STORE_U32(ctx.r28.u32 + 44, ctx.r30.u32);
	// addi r29,r25,36
	ctx.r29.s64 = ctx.r25.s64 + 36;
	// stw r30,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r30.u32);
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r30,52(r28)
	PPC_STORE_U32(ctx.r28.u32 + 52, ctx.r30.u32);
	// stw r30,56(r28)
	PPC_STORE_U32(ctx.r28.u32 + 56, ctx.r30.u32);
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// stw r11,40(r28)
	PPC_STORE_U32(ctx.r28.u32 + 40, ctx.r11.u32);
	// stw r30,36(r28)
	PPC_STORE_U32(ctx.r28.u32 + 36, ctx.r30.u32);
	// beq cr6,0x827ff6c0
	if (ctx.cr6.eq) goto loc_827FF6C0;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827ff6c0
	if (!ctx.cr6.gt) goto loc_827FF6C0;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827ff650
	if (ctx.cr0.eq) goto loc_827FF650;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c38
	ctx.lr = 0x827FF650;
	sub_82332C38(ctx, base);
loc_827FF650:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827ff6c0
	if (!ctx.cr6.gt) goto loc_827FF6C0;
loc_827FF660:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332d50
	ctx.lr = 0x827FF674;
	sub_82332D50(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827ff6ac
	if (ctx.cr0.eq) goto loc_827FF6AC;
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// add r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lwzx r10,r10,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_827FF6AC:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x827ff660
	if (ctx.cr6.lt) goto loc_827FF660;
loc_827FF6C0:
	// lfs f0,60(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stfs f0,60(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 60, temp.u32);
	// lwz r11,64(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 64);
	// stw r11,64(r28)
	PPC_STORE_U32(ctx.r28.u32 + 64, ctx.r11.u32);
	// lfs f0,68(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 68, temp.u32);
	// lwz r11,72(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 72);
	// stw r11,72(r28)
	PPC_STORE_U32(ctx.r28.u32 + 72, ctx.r11.u32);
	// lfs f0,76(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,76(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 76, temp.u32);
	// lwz r11,80(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 80);
	// stw r11,80(r28)
	PPC_STORE_U32(ctx.r28.u32 + 80, ctx.r11.u32);
	// lwz r11,84(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 84);
	// stw r11,84(r28)
	PPC_STORE_U32(ctx.r28.u32 + 84, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827FF708"))) PPC_WEAK_FUNC(sub_827FF708);
PPC_FUNC_IMPL(__imp__sub_827FF708) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r11,4824
	ctx.r3.s64 = ctx.r11.s64 + 4824;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FF718"))) PPC_WEAK_FUNC(sub_827FF718);
PPC_FUNC_IMPL(__imp__sub_827FF718) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x827FF734;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827ff770
	if (ctx.cr0.eq) goto loc_827FF770;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// addi r11,r11,14104
	ctx.r11.s64 = ctx.r11.s64 + 14104;
	// addi r9,r9,16608
	ctx.r9.s64 = ctx.r9.s64 + 16608;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwimi r11,r10,0,1,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x7FFFFFFF) | (ctx.r11.u64 & 0xFFFFFFFF80000000);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x827ff774
	goto loc_827FF774;
loc_827FF770:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827FF774:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FF788"))) PPC_WEAK_FUNC(sub_827FF788);
PPC_FUNC_IMPL(__imp__sub_827FF788) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x827FF790;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x827ff874
	if (ctx.cr6.lt) goto loc_827FF874;
	// beq cr6,0x827ff860
	if (ctx.cr6.eq) goto loc_827FF860;
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// blt cr6,0x827ff84c
	if (ctx.cr6.lt) goto loc_827FF84C;
	// beq cr6,0x827ff7d4
	if (ctx.cr6.eq) goto loc_827FF7D4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
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
	// b 0x827ff8bc
	goto loc_827FF8BC;
loc_827FF7D4:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lfs f0,20252(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20252);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// bl 0x82a4e118
	ctx.lr = 0x827FF7E4;
	sub_82A4E118(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lfs f11,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f9,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,30996(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 30996);
	ctx.f13.f64 = double(temp.f32);
	// lfs f7,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fmuls f12,f11,f13
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f11,f10,f13
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f10,f8,f0
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f9,f7,f0
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f0,f6,f0
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fadds f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fadds f12,f9,f11
	ctx.f12.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// stfs f12,4(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// b 0x827ff8b8
	goto loc_827FF8B8;
loc_827FF84C:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827ff9c8
	ctx.lr = 0x827FF85C;
	sub_827FF9C8(ctx, base);
	// b 0x827ff8bc
	goto loc_827FF8BC;
loc_827FF860:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827ff8c8
	ctx.lr = 0x827FF870;
	sub_827FF8C8(ctx, base);
	// b 0x827ff8bc
	goto loc_827FF8BC;
loc_827FF874:
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f10,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f9,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f9,f9,f12
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// fmuls f11,f11,f1
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// fmuls f10,f10,f1
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// fmuls f9,f9,f1
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f1.f64));
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fadds f0,f13,f10
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fadds f0,f12,f9
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
loc_827FF8B8:
	// stfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
loc_827FF8BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827FF8C8"))) PPC_WEAK_FUNC(sub_827FF8C8);
PPC_FUNC_IMPL(__imp__sub_827FF8C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// addi r11,r11,-11456
	ctx.r11.s64 = ctx.r11.s64 + -11456;
	// lfs f13,908(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-15844(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15844);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x827ff94c
	if (!ctx.cr6.lt) goto loc_827FF94C;
	// lfs f12,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f8,f13,f12
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f11,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f9,f11
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// lfs f13,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f7,f13,f10
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// lfs f13,30996(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30996);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f8,f8,f13
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fmuls f9,f9,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f13,f7,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fadds f13,f12,f8
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// stfs f13,0(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fadds f13,f11,f9
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f9.f64));
	// fadds f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// b 0x827ff9bc
	goto loc_827FF9BC;
loc_827FF94C:
	// lfs f11,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lfs f9,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f6,f12,f11
	ctx.f6.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f7,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f8,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f7,f9
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f9.f64));
	// lfs f12,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f5,f12,f8
	ctx.f5.f64 = double(float(ctx.f12.f64 - ctx.f8.f64));
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f0,30996(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 30996);
	ctx.f0.f64 = double(temp.f32);
	// fneg f6,f6
	ctx.f6.u64 = ctx.f6.u64 ^ 0x8000000000000000;
	// fneg f7,f7
	ctx.f7.u64 = ctx.f7.u64 ^ 0x8000000000000000;
	// fneg f5,f5
	ctx.f5.u64 = ctx.f5.u64 ^ 0x8000000000000000;
	// fmsubs f13,f10,f12,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 - ctx.f13.f64));
	// fmuls f12,f6,f0
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f10,f7,f0
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f0,f5,f0
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fadds f13,f11,f12
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// stfs f13,0(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fadds f13,f9,f10
	ctx.f13.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// fadds f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 + ctx.f0.f64));
loc_827FF9BC:
	// stfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FF9C8"))) PPC_WEAK_FUNC(sub_827FF9C8);
PPC_FUNC_IMPL(__imp__sub_827FF9C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f13,-27300(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27300);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// fmuls f0,f1,f13
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// lfs f12,908(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x827ffa54
	if (!ctx.cr6.lt) goto loc_827FFA54;
	// lfs f12,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f8,f13,f12
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f11,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f9,f11
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// lfs f13,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f7,f13,f10
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// lfs f13,30996(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30996);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f8,f8,f13
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fmuls f9,f9,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f13,f7,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fadds f13,f12,f8
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// stfs f13,0(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fadds f13,f11,f9
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f9.f64));
	// fadds f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// b 0x827ffab0
	goto loc_827FFAB0;
loc_827FFA54:
	// fsubs f12,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f7,f0,f11
	ctx.f7.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f8,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f9,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f8,f10
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f10.f64));
	// lfs f0,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f6,f0,f9
	ctx.f6.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// lfs f0,30996(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30996);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f5,f12,f12
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmuls f7,f7,f0
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f0,f6,f0
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmadds f13,f5,f12,f13
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmuls f12,f7,f13
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f8,f8,f13
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fadds f13,f11,f12
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// stfs f13,0(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fadds f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// fadds f13,f10,f8
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f8.f64));
loc_827FFAB0:
	// stfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FFAC0"))) PPC_WEAK_FUNC(sub_827FFAC0);
PPC_FUNC_IMPL(__imp__sub_827FFAC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r11,4324
	ctx.r3.s64 = ctx.r11.s64 + 4324;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FFAD0"))) PPC_WEAK_FUNC(sub_827FFAD0);
PPC_FUNC_IMPL(__imp__sub_827FFAD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827eb8c8
	ctx.lr = 0x827FFAF0;
	sub_827EB8C8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x827ffb04
	if (ctx.cr6.eq) goto loc_827FFB04;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x827ffb20
	ctx.lr = 0x827FFB04;
	sub_827FFB20(ctx, base);
loc_827FFB04:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FFB20"))) PPC_WEAK_FUNC(sub_827FFB20);
PPC_FUNC_IMPL(__imp__sub_827FFB20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827eb2f8
	ctx.lr = 0x827FFB40;
	sub_827EB2F8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x827ffb50
	if (!ctx.cr6.eq) goto loc_827FFB50;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x827ffb64
	goto loc_827FFB64;
loc_827FFB50:
	// bl 0x82333d20
	ctx.lr = 0x827FFB54;
	sub_82333D20(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x827ffb64
	if (ctx.cr6.eq) goto loc_827FFB64;
	// li r3,0
	ctx.r3.s64 = 0;
loc_827FFB64:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FFB80"))) PPC_WEAK_FUNC(sub_827FFB80);
PPC_FUNC_IMPL(__imp__sub_827FFB80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x827ffbb8
	if (ctx.cr6.eq) goto loc_827FFBB8;
	// bl 0x827eb8c8
	ctx.lr = 0x827FFBA8;
	sub_827EB8C8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x827ffbb8
	if (!ctx.cr6.eq) goto loc_827FFBB8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827ffbc4
	goto loc_827FFBC4;
loc_827FFBB8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827ffbe0
	ctx.lr = 0x827FFBC4;
	sub_827FFBE0(ctx, base);
loc_827FFBC4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FFBE0"))) PPC_WEAK_FUNC(sub_827FFBE0);
PPC_FUNC_IMPL(__imp__sub_827FFBE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// beq cr6,0x827ffc20
	if (ctx.cr6.eq) goto loc_827FFC20;
	// bl 0x827eb2f8
	ctx.lr = 0x827FFC00;
	sub_827EB2F8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x827ffc10
	if (!ctx.cr6.eq) goto loc_827FFC10;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827ffc24
	goto loc_827FFC24;
loc_827FFC10:
	// bl 0x82333d20
	ctx.lr = 0x827FFC14;
	sub_82333D20(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x827ffc24
	if (ctx.cr6.eq) goto loc_827FFC24;
loc_827FFC20:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827FFC24:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FFC38"))) PPC_WEAK_FUNC(sub_827FFC38);
PPC_FUNC_IMPL(__imp__sub_827FFC38) {
	PPC_FUNC_PROLOGUE();
	// b 0x827eb8c8
	sub_827EB8C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827FFC40"))) PPC_WEAK_FUNC(sub_827FFC40);
PPC_FUNC_IMPL(__imp__sub_827FFC40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x82833108
	ctx.lr = 0x827FFC5C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827ffcdc
	if (ctx.cr0.eq) goto loc_827FFCDC;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// addi r11,r11,14104
	ctx.r11.s64 = ctx.r11.s64 + 14104;
	// addi r10,r10,16776
	ctx.r10.s64 = ctx.r10.s64 + 16776;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r9,r9,16848
	ctx.r9.s64 = ctx.r9.s64 + 16848;
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
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
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
	// b 0x827ffce0
	goto loc_827FFCE0;
loc_827FFCDC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827FFCE0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FFCF8"))) PPC_WEAK_FUNC(sub_827FFCF8);
PPC_FUNC_IMPL(__imp__sub_827FFCF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r11,4272
	ctx.r3.s64 = ctx.r11.s64 + 4272;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FFD08"))) PPC_WEAK_FUNC(sub_827FFD08);
PPC_FUNC_IMPL(__imp__sub_827FFD08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x827FFD24;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827ffd68
	if (ctx.cr0.eq) goto loc_827FFD68;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// addi r11,r11,14104
	ctx.r11.s64 = ctx.r11.s64 + 14104;
	// addi r10,r10,16776
	ctx.r10.s64 = ctx.r10.s64 + 16776;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
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
	// b 0x827ffd6c
	goto loc_827FFD6C;
loc_827FFD68:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827FFD6C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FFD80"))) PPC_WEAK_FUNC(sub_827FFD80);
PPC_FUNC_IMPL(__imp__sub_827FFD80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x827FFD88;
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
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r5,20(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// bl 0x827dfe30
	ctx.lr = 0x827FFDBC;
	sub_827DFE30(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,24(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x827dfe30
	ctx.lr = 0x827FFDCC;
	sub_827DFE30(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827FFDD8"))) PPC_WEAK_FUNC(sub_827FFDD8);
PPC_FUNC_IMPL(__imp__sub_827FFDD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x827FFDE0;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lwz r10,656(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 656);
	// lwz r8,660(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 660);
	// lfs f0,-27328(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27328);
	ctx.f0.f64 = double(temp.f32);
	// lwz r7,664(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 664);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// stfs f0,172(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// lfs f13,16540(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16540);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,168(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stw r10,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r10.u32);
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stw r8,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r8.u32);
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stw r7,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r7.u32);
	// stw r6,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r6.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r5,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r5.u32);
	// stw r4,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r4.u32);
	// beq cr6,0x827ffe84
	if (ctx.cr6.eq) goto loc_827FFE84;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x827ffe84
	if (ctx.cr6.eq) goto loc_827FFE84;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1068(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1068);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827FFE84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827FFE84:
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827ffeb8
	if (ctx.cr6.eq) goto loc_827FFEB8;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x827ffeb8
	if (ctx.cr6.eq) goto loc_827FFEB8;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1068(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1068);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827FFEB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827FFEB8:
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x824f97d8
	ctx.lr = 0x827FFEC4;
	sub_824F97D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82817f30
	ctx.lr = 0x827FFED0;
	sub_82817F30(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
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
	ctx.lr = 0x827FFF04;
	sub_824F97D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82817f30
	ctx.lr = 0x827FFF10;
	sub_82817F30(ctx, base);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lis r8,-31961
	ctx.r8.s64 = -2094596096;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r8,-26196
	ctx.r8.s64 = ctx.r8.s64 + -26196;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// lis r6,-32215
	ctx.r6.s64 = -2111242240;
	// addi r9,r1,192
	ctx.r9.s64 = ctx.r1.s64 + 192;
	// lwzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lfs f0,908(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,904(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 904);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r7,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r7.u32);
	// stw r6,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r6.u32);
	// stw r11,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827FFF78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8269cbe0
	ctx.lr = 0x827FFF88;
	sub_8269CBE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82817b48
	ctx.lr = 0x827FFF94;
	sub_82817B48(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bne cr6,0x827fffc4
	if (!ctx.cr6.eq) goto loc_827FFFC4;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
loc_827FFFC4:
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827FFFE0"))) PPC_WEAK_FUNC(sub_827FFFE0);
PPC_FUNC_IMPL(__imp__sub_827FFFE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r11,4396
	ctx.r3.s64 = ctx.r11.s64 + 4396;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FFFF0"))) PPC_WEAK_FUNC(sub_827FFFF0);
PPC_FUNC_IMPL(__imp__sub_827FFFF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827eb750
	ctx.lr = 0x82800010;
	sub_827EB750(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82800024
	if (ctx.cr6.eq) goto loc_82800024;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x827ffb20
	ctx.lr = 0x82800024;
	sub_827FFB20(ctx, base);
loc_82800024:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82800040"))) PPC_WEAK_FUNC(sub_82800040);
PPC_FUNC_IMPL(__imp__sub_82800040) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82800078
	if (ctx.cr6.eq) goto loc_82800078;
	// bl 0x827eb750
	ctx.lr = 0x82800068;
	sub_827EB750(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82800078
	if (!ctx.cr6.eq) goto loc_82800078;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82800084
	goto loc_82800084;
loc_82800078:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827ffbe0
	ctx.lr = 0x82800084;
	sub_827FFBE0(ctx, base);
loc_82800084:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828000A0"))) PPC_WEAK_FUNC(sub_828000A0);
PPC_FUNC_IMPL(__imp__sub_828000A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x827eb750
	sub_827EB750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828000A8"))) PPC_WEAK_FUNC(sub_828000A8);
PPC_FUNC_IMPL(__imp__sub_828000A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x828000C4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82800124
	if (ctx.cr0.eq) goto loc_82800124;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// addi r11,r11,14104
	ctx.r11.s64 = ctx.r11.s64 + 14104;
	// addi r10,r10,16776
	ctx.r10.s64 = ctx.r10.s64 + 16776;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r9,r9,16928
	ctx.r9.s64 = ctx.r9.s64 + 16928;
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
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// b 0x82800128
	goto loc_82800128;
loc_82800124:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82800128:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82800140"))) PPC_WEAK_FUNC(sub_82800140);
PPC_FUNC_IMPL(__imp__sub_82800140) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82800148;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lwz r10,620(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	// lwz r8,624(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	// lfs f0,-27328(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27328);
	ctx.f0.f64 = double(temp.f32);
	// lwz r7,628(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// lfs f13,16540(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16540);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,152(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stw r8,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r8.u32);
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stw r7,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r7.u32);
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// stw r4,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r4.u32);
	// beq cr6,0x828001ec
	if (ctx.cr6.eq) goto loc_828001EC;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x828001ec
	if (ctx.cr6.eq) goto loc_828001EC;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1068(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1068);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828001EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828001EC:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82800220
	if (ctx.cr6.eq) goto loc_82800220;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82800220
	if (ctx.cr6.eq) goto loc_82800220;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1068(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1068);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82800220;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82800220:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827ff788
	ctx.lr = 0x82800238;
	sub_827FF788(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// beq cr6,0x8280026c
	if (ctx.cr6.eq) goto loc_8280026C;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
	// stw r9,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r9.u32);
	// b 0x8280029c
	goto loc_8280029C;
loc_8280026C:
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// lfs f13,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// fadds f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// fadds f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// stfs f13,4(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// stfs f12,8(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
loc_8280029C:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828002A8"))) PPC_WEAK_FUNC(sub_828002A8);
PPC_FUNC_IMPL(__imp__sub_828002A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r11,4344
	ctx.r3.s64 = ctx.r11.s64 + 4344;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828002B8"))) PPC_WEAK_FUNC(sub_828002B8);
PPC_FUNC_IMPL(__imp__sub_828002B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827eb5d8
	ctx.lr = 0x828002D8;
	sub_827EB5D8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x828002ec
	if (ctx.cr6.eq) goto loc_828002EC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x827ffb20
	ctx.lr = 0x828002EC;
	sub_827FFB20(ctx, base);
loc_828002EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82800308"))) PPC_WEAK_FUNC(sub_82800308);
PPC_FUNC_IMPL(__imp__sub_82800308) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82800340
	if (ctx.cr6.eq) goto loc_82800340;
	// bl 0x827eb5d8
	ctx.lr = 0x82800330;
	sub_827EB5D8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82800340
	if (!ctx.cr6.eq) goto loc_82800340;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8280034c
	goto loc_8280034C;
loc_82800340:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827ffbe0
	ctx.lr = 0x8280034C;
	sub_827FFBE0(ctx, base);
loc_8280034C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82800368"))) PPC_WEAK_FUNC(sub_82800368);
PPC_FUNC_IMPL(__imp__sub_82800368) {
	PPC_FUNC_PROLOGUE();
	// b 0x827eb5d8
	sub_827EB5D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82800370"))) PPC_WEAK_FUNC(sub_82800370);
PPC_FUNC_IMPL(__imp__sub_82800370) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x8280038C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828003ec
	if (ctx.cr0.eq) goto loc_828003EC;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// addi r11,r11,14104
	ctx.r11.s64 = ctx.r11.s64 + 14104;
	// addi r10,r10,16776
	ctx.r10.s64 = ctx.r10.s64 + 16776;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r9,r9,17008
	ctx.r9.s64 = ctx.r9.s64 + 17008;
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
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// b 0x828003f0
	goto loc_828003F0;
loc_828003EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828003F0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82800408"))) PPC_WEAK_FUNC(sub_82800408);
PPC_FUNC_IMPL(__imp__sub_82800408) {
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
	// addi r6,r31,32
	ctx.r6.s64 = ctx.r31.s64 + 32;
	// addi r5,r31,20
	ctx.r5.s64 = ctx.r31.s64 + 20;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x827ff788
	ctx.lr = 0x82800438;
	sub_827FF788(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// beq cr6,0x8280046c
	if (ctx.cr6.eq) goto loc_8280046C;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// b 0x8280049c
	goto loc_8280049C;
loc_8280046C:
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// fadds f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// fadds f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stfs f12,8(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
loc_8280049C:
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

__attribute__((alias("__imp__sub_828004B8"))) PPC_WEAK_FUNC(sub_828004B8);
PPC_FUNC_IMPL(__imp__sub_828004B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r11,4428
	ctx.r3.s64 = ctx.r11.s64 + 4428;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828004C8"))) PPC_WEAK_FUNC(sub_828004C8);
PPC_FUNC_IMPL(__imp__sub_828004C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827eb438
	ctx.lr = 0x828004E8;
	sub_827EB438(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x828004fc
	if (ctx.cr6.eq) goto loc_828004FC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x827ffb20
	ctx.lr = 0x828004FC;
	sub_827FFB20(ctx, base);
loc_828004FC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82800518"))) PPC_WEAK_FUNC(sub_82800518);
PPC_FUNC_IMPL(__imp__sub_82800518) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82800550
	if (ctx.cr6.eq) goto loc_82800550;
	// bl 0x827eb438
	ctx.lr = 0x82800540;
	sub_827EB438(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82800550
	if (!ctx.cr6.eq) goto loc_82800550;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8280055c
	goto loc_8280055C;
loc_82800550:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827ffbe0
	ctx.lr = 0x8280055C;
	sub_827FFBE0(ctx, base);
loc_8280055C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82800578"))) PPC_WEAK_FUNC(sub_82800578);
PPC_FUNC_IMPL(__imp__sub_82800578) {
	PPC_FUNC_PROLOGUE();
	// b 0x827eb438
	sub_827EB438(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82800580"))) PPC_WEAK_FUNC(sub_82800580);
PPC_FUNC_IMPL(__imp__sub_82800580) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x82833108
	ctx.lr = 0x8280059C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8280061c
	if (ctx.cr0.eq) goto loc_8280061C;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// addi r11,r11,14104
	ctx.r11.s64 = ctx.r11.s64 + 14104;
	// addi r10,r10,16776
	ctx.r10.s64 = ctx.r10.s64 + 16776;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r9,r9,17088
	ctx.r9.s64 = ctx.r9.s64 + 17088;
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
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
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
	// b 0x82800620
	goto loc_82800620;
loc_8280061C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82800620:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82800638"))) PPC_WEAK_FUNC(sub_82800638);
PPC_FUNC_IMPL(__imp__sub_82800638) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x82800650;
	sub_82833180(ctx, base);
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,16776
	ctx.r10.s64 = ctx.r10.s64 + 16776;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82800688"))) PPC_WEAK_FUNC(sub_82800688);
PPC_FUNC_IMPL(__imp__sub_82800688) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lwz r11,16(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828006A8"))) PPC_WEAK_FUNC(sub_828006A8);
PPC_FUNC_IMPL(__imp__sub_828006A8) {
	PPC_FUNC_PROLOGUE();
	// addi r5,r5,8
	ctx.r5.s64 = ctx.r5.s64 + 8;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// b 0x827eaa08
	sub_827EAA08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828006B8"))) PPC_WEAK_FUNC(sub_828006B8);
PPC_FUNC_IMPL(__imp__sub_828006B8) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// addi r5,r31,8
	ctx.r5.s64 = ctx.r31.s64 + 8;
	// bl 0x827eaa08
	ctx.lr = 0x828006E0;
	sub_827EAA08(ctx, base);
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 32, temp.u32);
	// lfs f0,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 36, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82800708"))) PPC_WEAK_FUNC(sub_82800708);
PPC_FUNC_IMPL(__imp__sub_82800708) {
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
	// lfs f0,36(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// fsubs f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// lfs f12,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,17168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17168);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x82a4e038
	ctx.lr = 0x82800734;
	sub_82A4E038(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lfs f0,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,30996(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 30996);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82800760"))) PPC_WEAK_FUNC(sub_82800760);
PPC_FUNC_IMPL(__imp__sub_82800760) {
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
	// lfs f0,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lfs f31,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f31.f64 = double(temp.f32);
	// addi r31,r3,40
	ctx.r31.s64 = ctx.r3.s64 + 40;
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fsubs f30,f0,f13
	ctx.f30.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// beq cr6,0x82800804
	if (ctx.cr6.eq) goto loc_82800804;
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// bl 0x82a4cd78
	ctx.lr = 0x828007C8;
	sub_82A4CD78(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f12,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// frsp f11,f0
	ctx.f11.f64 = double(float(ctx.f0.f64));
	// lfs f0,908(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16388(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16388);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// fmuls f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmadds f0,f0,f13,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f12.f64));
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
loc_82800804:
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82800868
	ctx.lr = 0x82800814;
	sub_82800868(ctx, base);
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

__attribute__((alias("__imp__sub_82800830"))) PPC_WEAK_FUNC(sub_82800830);
PPC_FUNC_IMPL(__imp__sub_82800830) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,32(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// fsubs f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// lfs f11,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfd f12,16376(r11)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16376);
	// lfd f0,16368(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16368);
	// fdivs f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f11.f64));
	// fsel f13,f13,f13,f12
	ctx.f13.f64 = ctx.f13.f64 >= 0.0 ? ctx.f13.f64 : ctx.f12.f64;
	// fsub f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 - ctx.f0.f64;
	// fsel f0,f12,f0,f13
	ctx.f0.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82800868"))) PPC_WEAK_FUNC(sub_82800868);
PPC_FUNC_IMPL(__imp__sub_82800868) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lfs f0,20252(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20252);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// bl 0x82a4e118
	ctx.lr = 0x82800894;
	sub_82A4E118(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lfs f11,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,30996(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 30996);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmadds f1,f0,f10,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f10.f64 + ctx.f13.f64));
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828008E0"))) PPC_WEAK_FUNC(sub_828008E0);
PPC_FUNC_IMPL(__imp__sub_828008E0) {
	PPC_FUNC_PROLOGUE();
	// addi r5,r5,8
	ctx.r5.s64 = ctx.r5.s64 + 8;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// b 0x827eaa08
	sub_827EAA08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828008F0"))) PPC_WEAK_FUNC(sub_828008F0);
PPC_FUNC_IMPL(__imp__sub_828008F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x8239d768
	ctx.lr = 0x82800914;
	sub_8239D768(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82833238
	ctx.lr = 0x8280091C;
	sub_82833238(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8280092c
	if (ctx.cr0.eq) goto loc_8280092C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x8280092C;
	sub_82332DB8(ctx, base);
loc_8280092C:
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

__attribute__((alias("__imp__sub_82800948"))) PPC_WEAK_FUNC(sub_82800948);
PPC_FUNC_IMPL(__imp__sub_82800948) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r11,4452
	ctx.r3.s64 = ctx.r11.s64 + 4452;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82800958"))) PPC_WEAK_FUNC(sub_82800958);
PPC_FUNC_IMPL(__imp__sub_82800958) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827eb170
	ctx.lr = 0x82800978;
	sub_827EB170(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82800988
	if (!ctx.cr6.eq) goto loc_82800988;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8280099c
	goto loc_8280099C;
loc_82800988:
	// bl 0x82333d20
	ctx.lr = 0x8280098C;
	sub_82333D20(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8280099c
	if (ctx.cr6.eq) goto loc_8280099C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8280099C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828009B8"))) PPC_WEAK_FUNC(sub_828009B8);
PPC_FUNC_IMPL(__imp__sub_828009B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// beq cr6,0x828009f8
	if (ctx.cr6.eq) goto loc_828009F8;
	// bl 0x827eb170
	ctx.lr = 0x828009D8;
	sub_827EB170(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828009e8
	if (!ctx.cr6.eq) goto loc_828009E8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828009fc
	goto loc_828009FC;
loc_828009E8:
	// bl 0x82333d20
	ctx.lr = 0x828009EC;
	sub_82333D20(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x828009fc
	if (ctx.cr6.eq) goto loc_828009FC;
loc_828009F8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828009FC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82800A10"))) PPC_WEAK_FUNC(sub_82800A10);
PPC_FUNC_IMPL(__imp__sub_82800A10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82833108
	ctx.lr = 0x82800A30;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82800a7c
	if (ctx.cr0.eq) goto loc_82800A7C;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// addi r11,r11,14104
	ctx.r11.s64 = ctx.r11.s64 + 14104;
	// addi r9,r9,17168
	ctx.r9.s64 = ctx.r9.s64 + 17168;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r4,r30,12
	ctx.r4.s64 = ctx.r30.s64 + 12;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwimi r11,r10,0,1,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x7FFFFFFF) | (ctx.r11.u64 & 0xFFFFFFFF80000000);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82873b58
	ctx.lr = 0x82800A74;
	sub_82873B58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82800a80
	goto loc_82800A80;
loc_82800A7C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82800A80:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82800A98"))) PPC_WEAK_FUNC(sub_82800A98);
PPC_FUNC_IMPL(__imp__sub_82800A98) {
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
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// addi r10,r10,-26196
	ctx.r10.s64 = ctx.r10.s64 + -26196;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lfs f0,24(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82800AE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82800afc
	if (ctx.cr6.eq) goto loc_82800AFC;
	// stfs f1,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// b 0x82800b08
	goto loc_82800B08;
loc_82800AFC:
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
loc_82800B08:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82800B20"))) PPC_WEAK_FUNC(sub_82800B20);
PPC_FUNC_IMPL(__imp__sub_82800B20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r11,4284
	ctx.r3.s64 = ctx.r11.s64 + 4284;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82800B30"))) PPC_WEAK_FUNC(sub_82800B30);
PPC_FUNC_IMPL(__imp__sub_82800B30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827ebd68
	ctx.lr = 0x82800B50;
	sub_827EBD68(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82800b64
	if (ctx.cr6.eq) goto loc_82800B64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x827ffb20
	ctx.lr = 0x82800B64;
	sub_827FFB20(ctx, base);
loc_82800B64:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82800B80"))) PPC_WEAK_FUNC(sub_82800B80);
PPC_FUNC_IMPL(__imp__sub_82800B80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82800bb8
	if (ctx.cr6.eq) goto loc_82800BB8;
	// bl 0x827ebd68
	ctx.lr = 0x82800BA8;
	sub_827EBD68(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82800bb8
	if (!ctx.cr6.eq) goto loc_82800BB8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82800bc4
	goto loc_82800BC4;
loc_82800BB8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827ffbe0
	ctx.lr = 0x82800BC4;
	sub_827FFBE0(ctx, base);
loc_82800BC4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82800BE0"))) PPC_WEAK_FUNC(sub_82800BE0);
PPC_FUNC_IMPL(__imp__sub_82800BE0) {
	PPC_FUNC_PROLOGUE();
	// b 0x827ebd68
	sub_827EBD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82800BE8"))) PPC_WEAK_FUNC(sub_82800BE8);
PPC_FUNC_IMPL(__imp__sub_82800BE8) {
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
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82833108
	ctx.lr = 0x82800C04;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82800c64
	if (ctx.cr0.eq) goto loc_82800C64;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// addi r11,r11,14104
	ctx.r11.s64 = ctx.r11.s64 + 14104;
	// addi r10,r10,16776
	ctx.r10.s64 = ctx.r10.s64 + 16776;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r9,r9,17248
	ctx.r9.s64 = ctx.r9.s64 + 17248;
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
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f0,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// b 0x82800c68
	goto loc_82800C68;
loc_82800C64:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82800C68:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82800C80"))) PPC_WEAK_FUNC(sub_82800C80);
PPC_FUNC_IMPL(__imp__sub_82800C80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lwz r11,16(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lfs f0,20(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f0,24(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82800CB0"))) PPC_WEAK_FUNC(sub_82800CB0);
PPC_FUNC_IMPL(__imp__sub_82800CB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r11,4300
	ctx.r3.s64 = ctx.r11.s64 + 4300;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82800CC0"))) PPC_WEAK_FUNC(sub_82800CC0);
PPC_FUNC_IMPL(__imp__sub_82800CC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827ebbf0
	ctx.lr = 0x82800CE0;
	sub_827EBBF0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82800cf4
	if (ctx.cr6.eq) goto loc_82800CF4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x827ffb20
	ctx.lr = 0x82800CF4;
	sub_827FFB20(ctx, base);
loc_82800CF4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82800D10"))) PPC_WEAK_FUNC(sub_82800D10);
PPC_FUNC_IMPL(__imp__sub_82800D10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82800d48
	if (ctx.cr6.eq) goto loc_82800D48;
	// bl 0x827ebbf0
	ctx.lr = 0x82800D38;
	sub_827EBBF0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82800d48
	if (!ctx.cr6.eq) goto loc_82800D48;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82800d54
	goto loc_82800D54;
loc_82800D48:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827ffbe0
	ctx.lr = 0x82800D54;
	sub_827FFBE0(ctx, base);
loc_82800D54:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82800D70"))) PPC_WEAK_FUNC(sub_82800D70);
PPC_FUNC_IMPL(__imp__sub_82800D70) {
	PPC_FUNC_PROLOGUE();
	// b 0x827ebbf0
	sub_827EBBF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82800D78"))) PPC_WEAK_FUNC(sub_82800D78);
PPC_FUNC_IMPL(__imp__sub_82800D78) {
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
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82833108
	ctx.lr = 0x82800D94;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82800df4
	if (ctx.cr0.eq) goto loc_82800DF4;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// addi r11,r11,14104
	ctx.r11.s64 = ctx.r11.s64 + 14104;
	// addi r10,r10,16776
	ctx.r10.s64 = ctx.r10.s64 + 16776;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r9,r9,17328
	ctx.r9.s64 = ctx.r9.s64 + 17328;
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
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f0,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// b 0x82800df8
	goto loc_82800DF8;
loc_82800DF4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82800DF8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82800E10"))) PPC_WEAK_FUNC(sub_82800E10);
PPC_FUNC_IMPL(__imp__sub_82800E10) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lwz r11,16(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lwz r11,20(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// lwz r10,24(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// lwz r9,28(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// stw r9,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r9.u32);
	// lwz r11,32(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// lwz r10,36(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	// lwz r9,40(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 40);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r10,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
	// stw r9,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82800E60"))) PPC_WEAK_FUNC(sub_82800E60);
PPC_FUNC_IMPL(__imp__sub_82800E60) {
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
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 + 20;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x824f97d8
	ctx.lr = 0x82800E90;
	sub_824F97D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82817f30
	ctx.lr = 0x82800E9C;
	sub_82817F30(ctx, base);
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x824f97d8
	ctx.lr = 0x82800EA8;
	sub_824F97D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82817f30
	ctx.lr = 0x82800EB4;
	sub_82817F30(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// addi r10,r10,-26196
	ctx.r10.s64 = ctx.r10.s64 + -26196;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,908(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lfs f13,904(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 904);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82800EF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8269cbe0
	ctx.lr = 0x82800F04;
	sub_8269CBE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82817b48
	ctx.lr = 0x82800F10;
	sub_82817B48(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bne cr6,0x82800f40
	if (!ctx.cr6.eq) goto loc_82800F40;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
loc_82800F40:
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
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

__attribute__((alias("__imp__sub_82800F68"))) PPC_WEAK_FUNC(sub_82800F68);
PPC_FUNC_IMPL(__imp__sub_82800F68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r11,4376
	ctx.r3.s64 = ctx.r11.s64 + 4376;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82800F78"))) PPC_WEAK_FUNC(sub_82800F78);
PPC_FUNC_IMPL(__imp__sub_82800F78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827eba68
	ctx.lr = 0x82800F98;
	sub_827EBA68(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82800fac
	if (ctx.cr6.eq) goto loc_82800FAC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x827ffb20
	ctx.lr = 0x82800FAC;
	sub_827FFB20(ctx, base);
loc_82800FAC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82800FC8"))) PPC_WEAK_FUNC(sub_82800FC8);
PPC_FUNC_IMPL(__imp__sub_82800FC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82801000
	if (ctx.cr6.eq) goto loc_82801000;
	// bl 0x827eba68
	ctx.lr = 0x82800FF0;
	sub_827EBA68(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82801000
	if (!ctx.cr6.eq) goto loc_82801000;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8280100c
	goto loc_8280100C;
loc_82801000:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827ffbe0
	ctx.lr = 0x8280100C;
	sub_827FFBE0(ctx, base);
loc_8280100C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82801028"))) PPC_WEAK_FUNC(sub_82801028);
PPC_FUNC_IMPL(__imp__sub_82801028) {
	PPC_FUNC_PROLOGUE();
	// b 0x827eba68
	sub_827EBA68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82801030"))) PPC_WEAK_FUNC(sub_82801030);
PPC_FUNC_IMPL(__imp__sub_82801030) {
	PPC_FUNC_PROLOGUE();
	// b 0x827eb2f8
	sub_827EB2F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82801038"))) PPC_WEAK_FUNC(sub_82801038);
PPC_FUNC_IMPL(__imp__sub_82801038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x82833108
	ctx.lr = 0x82801054;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828010d4
	if (ctx.cr0.eq) goto loc_828010D4;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// addi r11,r11,14104
	ctx.r11.s64 = ctx.r11.s64 + 14104;
	// addi r10,r10,16776
	ctx.r10.s64 = ctx.r10.s64 + 16776;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r9,r9,17408
	ctx.r9.s64 = ctx.r9.s64 + 17408;
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
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
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
	// b 0x828010d8
	goto loc_828010D8;
loc_828010D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828010D8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828010F0"))) PPC_WEAK_FUNC(sub_828010F0);
PPC_FUNC_IMPL(__imp__sub_828010F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r11,4688
	ctx.r3.s64 = ctx.r11.s64 + 4688;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82801100"))) PPC_WEAK_FUNC(sub_82801100);
PPC_FUNC_IMPL(__imp__sub_82801100) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82801138
	if (ctx.cr6.eq) goto loc_82801138;
	// bl 0x827ec4a0
	ctx.lr = 0x82801128;
	sub_827EC4A0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82801138
	if (!ctx.cr6.eq) goto loc_82801138;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82801144
	goto loc_82801144;
loc_82801138:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827f5278
	ctx.lr = 0x82801144;
	sub_827F5278(ctx, base);
loc_82801144:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

