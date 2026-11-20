#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82999588"))) PPC_WEAK_FUNC(sub_82999588);
PPC_FUNC_IMPL(__imp__sub_82999588) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r9,2
	ctx.r9.s64 = 131072;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r9,r9,36008
	ctx.r9.u64 = ctx.r9.u64 | 36008;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,144
	ctx.r3.s64 = ctx.r11.s64 + 144;
	// bl 0x826c8d38
	ctx.lr = 0x829995C8;
	sub_826C8D38(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfd f0,16784(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16784);
	// li r11,6
	ctx.r11.s64 = 6;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x829995e0
	if (ctx.cr6.lt) goto loc_829995E0;
	// li r11,2
	ctx.r11.s64 = 2;
loc_829995E0:
	// stb r11,252(r31)
	PPC_STORE_U8(ctx.r31.u32 + 252, ctx.r11.u8);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82999610
	if (ctx.cr6.eq) goto loc_82999610;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm. r10,r10,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82999610
	if (ctx.cr0.eq) goto loc_82999610;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82999610
	if (ctx.cr6.eq) goto loc_82999610;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,252(r31)
	PPC_STORE_U8(ctx.r31.u32 + 252, ctx.r11.u8);
loc_82999610:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82999628"))) PPC_WEAK_FUNC(sub_82999628);
PPC_FUNC_IMPL(__imp__sub_82999628) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f0,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f0,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f0,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f0,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f0,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f0,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f0,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f0,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f0,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f0,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f0,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f0,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f0,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f0,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f0,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f0,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f0,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f0,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f0,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f0,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f0,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f0,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f0,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f0,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f0,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f0,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f0,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f0,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f0,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f0,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f0,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f0,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f0,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f0,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f0,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f0,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82999980"))) PPC_WEAK_FUNC(sub_82999980);
PPC_FUNC_IMPL(__imp__sub_82999980) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f4
	ctx.lr = 0x82999988;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r11,24(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// lwz r23,44(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82999c8c
	if (ctx.cr6.eq) goto loc_82999C8C;
	// lis r31,-31943
	ctx.r31.s64 = -2093416448;
	// lis r30,-31943
	ctx.r30.s64 = -2093416448;
	// lwz r11,-16860(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16860);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x829999dc
	if (!ctx.cr0.eq) goto loc_829999DC;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stw r11,-16860(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16860, ctx.r11.u32);
	// addi r3,r10,-21692
	ctx.r3.s64 = ctx.r10.s64 + -21692;
	// bl 0x82816528
	ctx.lr = 0x829999CC;
	sub_82816528(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,-16860(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16860);
	// stw r5,-16864(r30)
	PPC_STORE_U32(ctx.r30.u32 + -16864, ctx.r5.u32);
	// b 0x829999e0
	goto loc_829999E0;
loc_829999DC:
	// lwz r5,-16864(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16864);
loc_829999E0:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r29,-31943
	ctx.r29.s64 = -2093416448;
	// bne 0x82999a0c
	if (!ctx.cr0.eq) goto loc_82999A0C;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stw r11,-16860(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16860, ctx.r11.u32);
	// addi r3,r10,-21712
	ctx.r3.s64 = ctx.r10.s64 + -21712;
	// bl 0x82816528
	ctx.lr = 0x82999A00;
	sub_82816528(ctx, base);
	// lwz r5,-16864(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16864);
	// stw r3,-16868(r29)
	PPC_STORE_U32(ctx.r29.u32 + -16868, ctx.r3.u32);
	// b 0x82999a10
	goto loc_82999A10;
loc_82999A0C:
	// lwz r3,-16868(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -16868);
loc_82999A10:
	// lwz r11,28(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28);
	// li r29,-1
	ctx.r29.s64 = -1;
	// li r25,-1
	ctx.r25.s64 = -1;
	// li r26,-1
	ctx.r26.s64 = -1;
	// li r27,-1
	ctx.r27.s64 = -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82999a78
	if (ctx.cr6.eq) goto loc_82999A78;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
loc_82999A3C:
	// lwz r8,-4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmplw cr6,r8,r5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82999a54
	if (!ctx.cr6.eq) goto loc_82999A54;
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bge cr6,0x82999a78
	if (!ctx.cr6.lt) goto loc_82999A78;
loc_82999A54:
	// cmplw cr6,r8,r3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82999a68
	if (!ctx.cr6.eq) goto loc_82999A68;
	// lwz r25,0(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x82999a78
	if (!ctx.cr6.lt) goto loc_82999A78;
loc_82999A68:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,140
	ctx.r11.s64 = ctx.r11.s64 + 140;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82999a3c
	if (ctx.cr6.lt) goto loc_82999A3C;
loc_82999A78:
	// lwz r9,36(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 36);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82999ad8
	if (ctx.cr6.eq) goto loc_82999AD8;
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// li r8,0
	ctx.r8.s64 = 0;
loc_82999A90:
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x82999ad8
	if (!ctx.cr6.lt) goto loc_82999AD8;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82999ab8
	if (!ctx.cr6.eq) goto loc_82999AB8;
	// lwz r26,128(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bge cr6,0x82999ad8
	if (!ctx.cr6.lt) goto loc_82999AD8;
loc_82999AB8:
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82999acc
	if (!ctx.cr6.eq) goto loc_82999ACC;
	// lwz r27,128(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bge cr6,0x82999ad8
	if (!ctx.cr6.lt) goto loc_82999AD8;
loc_82999ACC:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,140
	ctx.r8.s64 = ctx.r8.s64 + 140;
	// b 0x82999a90
	goto loc_82999A90;
loc_82999AD8:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x82999b08
	if (!ctx.cr6.lt) goto loc_82999B08;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bge cr6,0x82999b08
	if (!ctx.cr6.lt) goto loc_82999B08;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bge cr6,0x82999b08
	if (!ctx.cr6.lt) goto loc_82999B08;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bge cr6,0x82999b08
	if (!ctx.cr6.lt) goto loc_82999B08;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82999c98
	ctx.lr = 0x82999B04;
	sub_82999C98(ctx, base);
	// b 0x82999c8c
	goto loc_82999C8C;
loc_82999B08:
	// lwz r11,28(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28);
	// addic. r30,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r30.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82999c8c
	if (ctx.cr0.lt) goto loc_82999C8C;
	// li r11,1
	ctx.r11.s64 = 1;
	// rldicr r31,r11,63,63
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u64, 63) & 0xFFFFFFFFFFFFFFFF;
loc_82999B1C:
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// lwz r10,28(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28);
	// lfs f0,32(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fdivs f0,f13,f12
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// fdivs f13,f11,f12
	ctx.f13.f64 = double(float(ctx.f11.f64 / ctx.f12.f64));
	// blt cr6,0x82999ba0
	if (ctx.cr6.lt) goto loc_82999BA0;
	// addi r10,r29,120
	ctx.r10.s64 = ctx.r29.s64 + 120;
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// rlwinm r9,r29,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r8,r9,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r9.s64;
	// stfsx f0,r10,r28
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r28.u32, temp.u32);
	// stfs f0,1924(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1924, temp.u32);
	// clrldi r10,r8,32
	ctx.r10.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// stfs f0,1928(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1928, temp.u32);
	// stfs f0,1932(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1932, temp.u32);
	// srad r11,r31,r10
	temp.u64 = ctx.r10.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	ctx.xer.ca = (ctx.r31.s64 < 0) & (((ctx.r31.s64 >> temp.u64) << temp.u64) != ctx.r31.s64);
	ctx.r11.s64 = ctx.r31.s64 >> temp.u64;
	// srd r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// ld r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// std r11,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.r11.u64);
loc_82999BA0:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// blt cr6,0x82999be8
	if (ctx.cr6.lt) goto loc_82999BE8;
	// addi r10,r25,120
	ctx.r10.s64 = ctx.r25.s64 + 120;
	// rlwinm r11,r25,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// rlwinm r9,r25,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r8,r9,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r9.s64;
	// stfsx f13,r10,r28
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r28.u32, temp.u32);
	// stfs f13,1924(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1924, temp.u32);
	// clrldi r10,r8,32
	ctx.r10.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// stfs f13,1928(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1928, temp.u32);
	// stfs f13,1932(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1932, temp.u32);
	// srad r11,r31,r10
	temp.u64 = ctx.r10.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	ctx.xer.ca = (ctx.r31.s64 < 0) & (((ctx.r31.s64 >> temp.u64) << temp.u64) != ctx.r31.s64);
	ctx.r11.s64 = ctx.r31.s64 >> temp.u64;
	// srd r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// ld r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// std r11,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.r11.u64);
loc_82999BE8:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// blt cr6,0x82999c30
	if (ctx.cr6.lt) goto loc_82999C30;
	// addi r10,r26,376
	ctx.r10.s64 = ctx.r26.s64 + 376;
	// rlwinm r11,r26,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// rlwinm r9,r26,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r8,r9,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r9.s64;
	// stfsx f0,r10,r28
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r28.u32, temp.u32);
	// stfs f0,6020(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 6020, temp.u32);
	// clrldi r10,r8,32
	ctx.r10.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// stfs f0,6024(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 6024, temp.u32);
	// stfs f0,6028(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 6028, temp.u32);
	// srad r11,r31,r10
	temp.u64 = ctx.r10.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	ctx.xer.ca = (ctx.r31.s64 < 0) & (((ctx.r31.s64 >> temp.u64) << temp.u64) != ctx.r31.s64);
	ctx.r11.s64 = ctx.r31.s64 >> temp.u64;
	// srd r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// ld r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r28.u32 + 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// std r11,8(r28)
	PPC_STORE_U64(ctx.r28.u32 + 8, ctx.r11.u64);
loc_82999C30:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// blt cr6,0x82999c78
	if (ctx.cr6.lt) goto loc_82999C78;
	// addi r10,r27,376
	ctx.r10.s64 = ctx.r27.s64 + 376;
	// rlwinm r11,r27,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// rlwinm r9,r27,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r8,r9,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r9.s64;
	// stfsx f13,r10,r28
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r28.u32, temp.u32);
	// stfs f13,6020(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 6020, temp.u32);
	// clrldi r10,r8,32
	ctx.r10.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// stfs f13,6024(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 6024, temp.u32);
	// stfs f13,6028(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 6028, temp.u32);
	// srad r11,r31,r10
	temp.u64 = ctx.r10.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	ctx.xer.ca = (ctx.r31.s64 < 0) & (((ctx.r31.s64 >> temp.u64) << temp.u64) != ctx.r31.s64);
	ctx.r11.s64 = ctx.r31.s64 >> temp.u64;
	// srd r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// ld r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r28.u32 + 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// std r11,8(r28)
	PPC_STORE_U64(ctx.r28.u32 + 8, ctx.r11.u64);
loc_82999C78:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82999c98
	ctx.lr = 0x82999C84;
	sub_82999C98(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x82999b1c
	if (!ctx.cr0.lt) goto loc_82999B1C;
loc_82999C8C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82999C98"))) PPC_WEAK_FUNC(sub_82999C98);
PPC_FUNC_IMPL(__imp__sub_82999C98) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r4,240(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// rlwinm r8,r4,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r10,-2784
	ctx.r11.s64 = ctx.r10.s64 + -2784;
	// lwz r7,12(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// beq cr6,0x82999ce4
	if (ctx.cr6.eq) goto loc_82999CE4;
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwzx r9,r8,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwzx r11,r8,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// mullw r10,r9,r7
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x829fcfc0
	sub_829FCFC0(ctx, base);
	return;
loc_82999CE4:
	// lwz r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwzx r9,r8,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwzx r11,r8,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// mullw r10,r9,r7
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x829fcbd0
	sub_829FCBD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82999D00"))) PPC_WEAK_FUNC(sub_82999D00);
PPC_FUNC_IMPL(__imp__sub_82999D00) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm. r11,r4,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82999da0
	if (ctx.cr0.eq) goto loc_82999DA0;
	// rlwinm. r11,r4,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82999d30
	if (ctx.cr0.eq) goto loc_82999D30;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x8274c358
	ctx.lr = 0x82999D28;
	sub_8274C358(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82999d9c
	goto loc_82999D9C;
loc_82999D30:
	// rlwinm. r11,r4,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82999d48
	if (ctx.cr0.eq) goto loc_82999D48;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82999D3C:
	// bl 0x8274c358
	ctx.lr = 0x82999D40;
	sub_8274C358(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x82999d9c
	goto loc_82999D9C;
loc_82999D48:
	// rlwinm. r11,r4,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82999d60
	if (ctx.cr0.eq) goto loc_82999D60;
	// li r4,8
	ctx.r4.s64 = 8;
loc_82999D54:
	// bl 0x8274c358
	ctx.lr = 0x82999D58;
	sub_8274C358(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// b 0x82999d9c
	goto loc_82999D9C;
loc_82999D60:
	// rlwinm. r11,r4,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82999d70
	if (ctx.cr0.eq) goto loc_82999D70;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82999d54
	goto loc_82999D54;
loc_82999D70:
	// rlwinm. r11,r4,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82999d80
	if (ctx.cr0.eq) goto loc_82999D80;
	// li r4,9
	ctx.r4.s64 = 9;
	// b 0x82999d54
	goto loc_82999D54;
loc_82999D80:
	// rlwinm. r11,r4,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82999d90
	if (ctx.cr0.eq) goto loc_82999D90;
	// li r4,8
	ctx.r4.s64 = 8;
	// b 0x82999d3c
	goto loc_82999D3C;
loc_82999D90:
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x8274c358
	ctx.lr = 0x82999D98;
	sub_8274C358(ctx, base);
	// li r4,7
	ctx.r4.s64 = 7;
loc_82999D9C:
	// bl 0x8274c3e8
	ctx.lr = 0x82999DA0;
	sub_8274C3E8(ctx, base);
loc_82999DA0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82999DB0"))) PPC_WEAK_FUNC(sub_82999DB0);
PPC_FUNC_IMPL(__imp__sub_82999DB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82999DB8;
	__savegprlr_28(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8299a5f8
	ctx.lr = 0x82999DCC;
	sub_8299A5F8(ctx, base);
	// bl 0x8299a570
	ctx.lr = 0x82999DD0;
	sub_8299A570(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82999de8
	if (ctx.cr6.eq) goto loc_82999DE8;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r28,16(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x82999df0
	goto loc_82999DF0;
loc_82999DE8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82999DF0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82999fb0
	if (!ctx.cr0.eq) goto loc_82999FB0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,212
	ctx.r5.s64 = 212;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x829a72a8
	ctx.lr = 0x82999E10;
	sub_829A72A8(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x829a72a8
	ctx.lr = 0x82999E24;
	sub_829A72A8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82999e70
	if (!ctx.cr0.eq) goto loc_82999E70;
	// rlwinm. r11,r28,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82999e70
	if (!ctx.cr0.eq) goto loc_82999E70;
	// li r7,3
	ctx.r7.s64 = 3;
	// lwz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82987088
	ctx.lr = 0x82999E50;
	sub_82987088(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829940e8
	ctx.lr = 0x82999E60;
	sub_829940E8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82999c98
	ctx.lr = 0x82999E6C;
	sub_82999C98(ctx, base);
	// b 0x82999f68
	goto loc_82999F68;
loc_82999E70:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r6,14
	ctx.r6.s64 = 14;
	// li r5,72
	ctx.r5.s64 = 72;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// bl 0x829a72a8
	ctx.lr = 0x82999E98;
	sub_829A72A8(ctx, base);
	// li r6,15
	ctx.r6.s64 = 15;
	// li r5,76
	ctx.r5.s64 = 76;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829a72a8
	ctx.lr = 0x82999EAC;
	sub_829A72A8(ctx, base);
	// li r5,68
	ctx.r5.s64 = 68;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829a72a8
	ctx.lr = 0x82999EC0;
	sub_829A72A8(ctx, base);
	// li r7,3
	ctx.r7.s64 = 3;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82987088
	ctx.lr = 0x82999ED8;
	sub_82987088(ctx, base);
	// li r7,3
	ctx.r7.s64 = 3;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r5,36(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82987120
	ctx.lr = 0x82999EF0;
	sub_82987120(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82999c98
	ctx.lr = 0x82999EFC;
	sub_82999C98(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82999f20
	if (ctx.cr6.eq) goto loc_82999F20;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82999F20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82999F20:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82999f44
	if (ctx.cr6.eq) goto loc_82999F44;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82999F44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82999F44:
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82999f68
	if (ctx.cr6.eq) goto loc_82999F68;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82999F68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82999F68:
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82999f8c
	if (ctx.cr6.eq) goto loc_82999F8C;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82999F8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82999F8C:
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82999fb0
	if (ctx.cr6.eq) goto loc_82999FB0;
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r4,152(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82999FB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82999FB0:
	// li r7,3
	ctx.r7.s64 = 3;
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82987088
	ctx.lr = 0x82999FC8;
	sub_82987088(ctx, base);
	// li r7,3
	ctx.r7.s64 = 3;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r5,36(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82987120
	ctx.lr = 0x82999FE0;
	sub_82987120(ctx, base);
	// rlwinm. r11,r28,0,24,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xC0;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// beq 0x8299a008
	if (ctx.cr0.eq) goto loc_8299A008;
	// rlwinm. r11,r28,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x8299a000
	if (ctx.cr0.eq) goto loc_8299A000;
	// bl 0x82999980
	ctx.lr = 0x82999FFC;
	sub_82999980(ctx, base);
	// b 0x8299a164
	goto loc_8299A164;
loc_8299A000:
	// bl 0x82999c98
	ctx.lr = 0x8299A004;
	sub_82999C98(ctx, base);
	// b 0x8299a164
	goto loc_8299A164;
loc_8299A008:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f13,248(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f13.f64 = double(temp.f32);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,60
	ctx.r5.s64 = 60;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lfs f0,17048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17048);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lbz r11,87(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// bl 0x829a72a8
	ctx.lr = 0x8299A044;
	sub_829A72A8(ctx, base);
	// li r6,14
	ctx.r6.s64 = 14;
	// li r5,72
	ctx.r5.s64 = 72;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829a72a8
	ctx.lr = 0x8299A058;
	sub_829A72A8(ctx, base);
	// li r6,15
	ctx.r6.s64 = 15;
	// li r5,76
	ctx.r5.s64 = 76;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x829a72a8
	ctx.lr = 0x8299A06C;
	sub_829A72A8(ctx, base);
	// li r5,68
	ctx.r5.s64 = 68;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x829a72a8
	ctx.lr = 0x8299A080;
	sub_829A72A8(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,308
	ctx.r5.s64 = 308;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x829a72a8
	ctx.lr = 0x8299A094;
	sub_829A72A8(ctx, base);
	// rlwinm. r11,r28,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x8299a0ac
	if (ctx.cr0.eq) goto loc_8299A0AC;
	// bl 0x82999980
	ctx.lr = 0x8299A0A8;
	sub_82999980(ctx, base);
	// b 0x8299a0b0
	goto loc_8299A0B0;
loc_8299A0AC:
	// bl 0x82999c98
	ctx.lr = 0x8299A0B0;
	sub_82999C98(ctx, base);
loc_8299A0B0:
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8299a0d4
	if (ctx.cr6.eq) goto loc_8299A0D4;
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r4,152(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8299A0D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8299A0D4:
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8299a0f8
	if (ctx.cr6.eq) goto loc_8299A0F8;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8299A0F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8299A0F8:
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8299a11c
	if (ctx.cr6.eq) goto loc_8299A11C;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8299A11C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8299A11C:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8299a140
	if (ctx.cr6.eq) goto loc_8299A140;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8299A140;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8299A140:
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8299a164
	if (ctx.cr6.eq) goto loc_8299A164;
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,168(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8299A164;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8299A164:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8299A170"))) PPC_WEAK_FUNC(sub_8299A170);
PPC_FUNC_IMPL(__imp__sub_8299A170) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f4
	ctx.lr = 0x8299A178;
	__savegprlr_23(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8299a5f8
	ctx.lr = 0x8299A18C;
	sub_8299A5F8(ctx, base);
	// bl 0x8299a570
	ctx.lr = 0x8299A190;
	sub_8299A570(ctx, base);
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r27,r11,8
	ctx.r27.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r26,956(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 956);
	// beq cr6,0x8299a1b4
	if (ctx.cr6.eq) goto loc_8299A1B4;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r28,16(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x8299a1bc
	goto loc_8299A1BC;
loc_8299A1B4:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8299A1BC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lbz r10,253(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 253);
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r25,r10,14,16,17
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0xC000;
	// beq 0x8299a44c
	if (ctx.cr0.eq) goto loc_8299A44C;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x829a72a8
	ctx.lr = 0x8299A1E4;
	sub_829A72A8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,308
	ctx.r5.s64 = 308;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x829a72a8
	ctx.lr = 0x8299A1F8;
	sub_829A72A8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,60
	ctx.r5.s64 = 60;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829a72a8
	ctx.lr = 0x8299A20C;
	sub_829A72A8(ctx, base);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,212
	ctx.r5.s64 = 212;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829a72a8
	ctx.lr = 0x8299A220;
	sub_829A72A8(ctx, base);
	// ori r24,r25,11776
	ctx.r24.u64 = ctx.r25.u64 | 11776;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x828564e8
	ctx.lr = 0x8299A230;
	sub_828564E8(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82856460
	ctx.lr = 0x8299A240;
	sub_82856460(ctx, base);
	// lwz r24,24(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r27,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r27.u32);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r7,3
	ctx.r7.s64 = 3;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82987088
	ctx.lr = 0x8299A264;
	sub_82987088(ctx, base);
	// li r7,3
	ctx.r7.s64 = 3;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82987120
	ctx.lr = 0x8299A27C;
	sub_82987120(ctx, base);
	// stw r24,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r24.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82999c98
	ctx.lr = 0x8299A28C;
	sub_82999C98(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8299a2b0
	if (ctx.cr6.eq) goto loc_8299A2B0;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8299A2B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8299A2B0:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8299a2d4
	if (ctx.cr6.eq) goto loc_8299A2D4;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8299A2D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8299A2D4:
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8299a2f8
	if (ctx.cr6.eq) goto loc_8299A2F8;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8299A2F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8299A2F8:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,308
	ctx.r5.s64 = 308;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x829a72a8
	ctx.lr = 0x8299A30C;
	sub_829A72A8(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,60
	ctx.r5.s64 = 60;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829a72a8
	ctx.lr = 0x8299A320;
	sub_829A72A8(ctx, base);
	// li r6,10
	ctx.r6.s64 = 10;
	// li r5,72
	ctx.r5.s64 = 72;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829a72a8
	ctx.lr = 0x8299A334;
	sub_829A72A8(ctx, base);
	// li r6,11
	ctx.r6.s64 = 11;
	// li r5,76
	ctx.r5.s64 = 76;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x829a72a8
	ctx.lr = 0x8299A348;
	sub_829A72A8(ctx, base);
	// li r7,3
	ctx.r7.s64 = 3;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82987088
	ctx.lr = 0x8299A360;
	sub_82987088(ctx, base);
	// li r7,3
	ctx.r7.s64 = 3;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r5,36(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82987120
	ctx.lr = 0x8299A378;
	sub_82987120(ctx, base);
	// rlwinm. r11,r28,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x8299a390
	if (ctx.cr0.eq) goto loc_8299A390;
	// bl 0x82999980
	ctx.lr = 0x8299A38C;
	sub_82999980(ctx, base);
	// b 0x8299a394
	goto loc_8299A394;
loc_8299A390:
	// bl 0x82999c98
	ctx.lr = 0x8299A394;
	sub_82999C98(ctx, base);
loc_8299A394:
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8299a3b8
	if (ctx.cr6.eq) goto loc_8299A3B8;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8299A3B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8299A3B8:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8299a3dc
	if (ctx.cr6.eq) goto loc_8299A3DC;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8299A3DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8299A3DC:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8299a400
	if (ctx.cr6.eq) goto loc_8299A400;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8299A400;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8299A400:
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8299a424
	if (ctx.cr6.eq) goto loc_8299A424;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8299A424;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8299A424:
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8299a4b0
	if (ctx.cr6.eq) goto loc_8299A4B0;
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r4,152(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8299A448;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8299a4b0
	goto loc_8299A4B0;
loc_8299A44C:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8299a4b0
	if (ctx.cr0.eq) goto loc_8299A4B0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82999d00
	ctx.lr = 0x8299A464;
	sub_82999D00(ctx, base);
	// li r7,3
	ctx.r7.s64 = 3;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82987088
	ctx.lr = 0x8299A47C;
	sub_82987088(ctx, base);
	// li r7,3
	ctx.r7.s64 = 3;
	// lwz r5,36(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82987120
	ctx.lr = 0x8299A494;
	sub_82987120(ctx, base);
	// rlwinm. r11,r28,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x8299a4ac
	if (ctx.cr0.eq) goto loc_8299A4AC;
	// bl 0x82999980
	ctx.lr = 0x8299A4A8;
	sub_82999980(ctx, base);
	// b 0x8299a4b0
	goto loc_8299A4B0;
loc_8299A4AC:
	// bl 0x82999c98
	ctx.lr = 0x8299A4B0;
	sub_82999C98(ctx, base);
loc_8299A4B0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,8,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8299a564
	if (ctx.cr0.eq) goto loc_8299A564;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,11852(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11852);
	// rlwinm r8,r11,29,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// rlwinm r28,r10,1,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// bl 0x8274c238
	ctx.lr = 0x8299A4D8;
	sub_8274C238(ctx, base);
	// bl 0x8274d428
	ctx.lr = 0x8299A4DC;
	sub_8274D428(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,16(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// bl 0x82999d00
	ctx.lr = 0x8299A4E8;
	sub_82999D00(ctx, base);
	// ori r25,r25,12032
	ctx.r25.u64 = ctx.r25.u64 | 12032;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x828564e8
	ctx.lr = 0x8299A4F8;
	sub_828564E8(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82856460
	ctx.lr = 0x8299A508;
	sub_82856460(ctx, base);
	// lwz r26,24(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r27,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r27.u32);
	// li r7,3
	ctx.r7.s64 = 3;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82987088
	ctx.lr = 0x8299A52C;
	sub_82987088(ctx, base);
	// li r7,3
	ctx.r7.s64 = 3;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82987120
	ctx.lr = 0x8299A544;
	sub_82987120(ctx, base);
	// stw r26,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r26.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82999c98
	ctx.lr = 0x8299A554;
	sub_82999C98(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8274c238
	ctx.lr = 0x8299A560;
	sub_8274C238(ctx, base);
	// bl 0x8274d428
	ctx.lr = 0x8299A564;
	sub_8274D428(ctx, base);
loc_8299A564:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82a4ea44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8299A570"))) PPC_WEAK_FUNC(sub_8299A570);
PPC_FUNC_IMPL(__imp__sub_8299A570) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8299A578;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r30,40(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8299a5b8
	if (ctx.cr6.eq) goto loc_8299A5B8;
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8299a5b8
	if (ctx.cr6.eq) goto loc_8299A5B8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8274e800
	ctx.lr = 0x8299A5A8;
	sub_8274E800(ctx, base);
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
loc_8299A5B8:
	// lwz r11,44(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8299a5ec
	if (!ctx.cr6.gt) goto loc_8299A5EC;
	// addi r30,r28,48
	ctx.r30.s64 = ctx.r28.s64 + 48;
loc_8299A5CC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82993f00
	ctx.lr = 0x8299A5D8;
	sub_82993F00(ctx, base);
	// lwz r11,44(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8299a5cc
	if (ctx.cr6.lt) goto loc_8299A5CC;
loc_8299A5EC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8299A5F8"))) PPC_WEAK_FUNC(sub_8299A5F8);
PPC_FUNC_IMPL(__imp__sub_8299A5F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f13,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8299a648
	if (!ctx.cr6.lt) goto loc_8299A648;
	// lbz r11,252(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 252);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8299a628
	if (ctx.cr0.eq) goto loc_8299A628;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// li r11,6
	ctx.r11.s64 = 6;
	// beq cr6,0x8299a628
	if (ctx.cr6.eq) goto loc_8299A628;
	// li r11,2
	ctx.r11.s64 = 2;
loc_8299A628:
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r9,10568(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10568);
	// rlwimi r11,r9,0,0,28
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFFFFF8) | (ctx.r11.u64 & 0xFFFFFFFF00000007);
	// stw r11,10568(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10568, ctx.r11.u32);
	// ld r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// std r11,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r11.u64);
	// blr 
	return;
loc_8299A648:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lbz r10,252(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 252);
	// lwz r9,10568(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// rlwimi r10,r9,0,0,28
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFFFFF8) | (ctx.r10.u64 & 0xFFFFFFFF00000007);
	// stw r10,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r10.u32);
	// ld r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// ori r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 64;
	// std r10,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8299A670"))) PPC_WEAK_FUNC(sub_8299A670);
PPC_FUNC_IMPL(__imp__sub_8299A670) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x8299A678;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,10548(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10548);
	// lwz r29,11876(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11876);
	// lwz r27,11860(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11860);
	// rlwinm r26,r10,30,31,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	// stw r11,11876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11876, ctx.r11.u32);
	// lwz r10,12456(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12456);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8299a6a8
	if (!ctx.cr6.eq) goto loc_8299A6A8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8299A6A8:
	// lwz r10,10548(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10548);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwimi r10,r11,1,30,30
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 1) & 0x2) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFD);
	// ori r30,r9,2048
	ctx.r30.u64 = ctx.r9.u64 | 2048;
	// stw r10,10548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10548, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// ld r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// or r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 | ctx.r30.u64;
	// std r10,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r10.u64);
	// rldicr r28,r11,37,63
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,10548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10548);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,10548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10548, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// stw r8,11860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11860, ctx.r8.u32);
	// lwz r11,10460(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10460);
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r11,10460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10460, ctx.r11.u32);
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// or r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 | ctx.r28.u64;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// bl 0x82999c98
	ctx.lr = 0x8299A710;
	sub_82999C98(ctx, base);
	// stw r29,11876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11876, ctx.r29.u32);
	// lwz r11,12456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12456);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8299a724
	if (!ctx.cr6.eq) goto loc_8299A724;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8299A724:
	// lwz r10,10548(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10548);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// rlwimi r10,r29,1,30,30
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r29.u32, 1) & 0x2) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFD);
	// stw r10,10548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10548, ctx.r10.u32);
	// ld r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// or r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 | ctx.r30.u64;
	// std r10,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r10.u64);
	// lwz r10,10548(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10548);
	// rlwimi r10,r26,2,29,29
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r26.u32, 2) & 0x4) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFB);
	// stw r10,10548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10548, ctx.r10.u32);
	// ld r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ori r10,r10,2048
	ctx.r10.u64 = ctx.r10.u64 | 2048;
	// std r10,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r10.u64);
	// stw r27,11860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11860, ctx.r27.u32);
	// lwz r10,12440(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12440);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8299a76c
	if (!ctx.cr6.eq) goto loc_8299A76C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8299A76C:
	// lwz r10,10460(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10460);
	// rlwimi r11,r10,0,0,27
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFFF0) | (ctx.r11.u64 & 0xFFFFFFFF0000000F);
	// stw r11,10460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10460, ctx.r11.u32);
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// or r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 | ctx.r28.u64;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8299A790"))) PPC_WEAK_FUNC(sub_8299A790);
PPC_FUNC_IMPL(__imp__sub_8299A790) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9e4
	ctx.lr = 0x8299A798;
	__savegprlr_19(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r27,1
	ctx.r27.s64 = 1;
	// lwz r11,12(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 12);
	// lwz r10,244(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	// slw r11,r27,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r11.u8 & 0x3F));
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8299abcc
	if (ctx.cr0.eq) goto loc_8299ABCC;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13148);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8299a818
	if (ctx.cr6.eq) goto loc_8299A818;
	// lwz r31,20(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8299a7fc
	if (ctx.cr6.eq) goto loc_8299A7FC;
	// bl 0x8299b160
	ctx.lr = 0x8299A7DC;
	sub_8299B160(ctx, base);
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
	ctx.lr = 0x8299A7F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8299a800
	if (!ctx.cr0.eq) goto loc_8299A800;
loc_8299A7FC:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8299A800:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8299a818
	if (!ctx.cr6.eq) goto loc_8299A818;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8299b070
	ctx.lr = 0x8299A814;
	sub_8299B070(ctx, base);
	// b 0x8299abcc
	goto loc_8299ABCC;
loc_8299A818:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm. r10,r11,0,10,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x380000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8299a834
	if (ctx.cr0.eq) goto loc_8299A834;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82999db0
	ctx.lr = 0x8299A830;
	sub_82999DB0(ctx, base);
	// b 0x8299abcc
	goto loc_8299ABCC;
loc_8299A834:
	// rlwinm. r10,r11,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8299abc0
	if (!ctx.cr0.eq) goto loc_8299ABC0;
	// rlwinm. r11,r11,0,8,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8299abc0
	if (!ctx.cr0.eq) goto loc_8299ABC0;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r31,0(r22)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8299a5f8
	ctx.lr = 0x8299A854;
	sub_8299A5F8(ctx, base);
	// bl 0x8299a570
	ctx.lr = 0x8299A858;
	sub_8299A570(ctx, base);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8299a870
	if (ctx.cr6.eq) goto loc_8299A870;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r23,16(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x8299a878
	goto loc_8299A878;
loc_8299A870:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r23,0(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8299A878:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lis r10,4
	ctx.r10.s64 = 262144;
	// lwz r9,11852(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11852);
	// li r21,0
	ctx.r21.s64 = 0;
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ori r20,r10,512
	ctx.r20.u64 = ctx.r10.u64 | 512;
	// rlwinm r19,r9,1,31,31
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// bne 0x8299a8e0
	if (!ctx.cr0.eq) goto loc_8299A8E0;
	// rlwinm. r11,r23,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8299a8d4
	if (ctx.cr0.eq) goto loc_8299A8D4;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82999d00
	ctx.lr = 0x8299A8AC;
	sub_82999D00(ctx, base);
	// rlwinm. r11,r23,0,24,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0xC0;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8299a8e0
	if (ctx.cr0.eq) goto loc_8299A8E0;
	// lwz r11,10556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10556);
	// mr r21,r27
	ctx.r21.u64 = ctx.r27.u64;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stw r11,10556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10556, ctx.r11.u32);
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// or r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 | ctx.r20.u64;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// b 0x8299a8e0
	goto loc_8299A8E0;
loc_8299A8D4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8274c238
	ctx.lr = 0x8299A8E0;
	sub_8274C238(ctx, base);
loc_8299A8E0:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// li r26,0
	ctx.r26.s64 = 0;
	// rlwinm. r9,r11,0,22,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ori r24,r10,2048
	ctx.r24.u64 = ctx.r10.u64 | 2048;
	// li r25,0
	ctx.r25.s64 = 0;
	// beq 0x8299a944
	if (ctx.cr0.eq) goto loc_8299A944;
	// lwz r26,11876(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11876);
	// lwz r11,10548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10548);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// rlwinm r25,r11,30,31,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// beq cr6,0x8299a930
	if (ctx.cr6.eq) goto loc_8299A930;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,11876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11876, ctx.r11.u32);
	// lwz r11,10548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10548);
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r11,10548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10548, ctx.r11.u32);
loc_8299A924:
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// or r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 | ctx.r24.u64;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
loc_8299A930:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8299aa14
	if (ctx.cr6.eq) goto loc_8299AA14;
	// lwz r11,10548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10548);
loc_8299A93C:
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// b 0x8299aa04
	goto loc_8299AA04;
loc_8299A944:
	// rlwinm. r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8299a95c
	if (ctx.cr0.eq) goto loc_8299A95C;
	// lwz r11,10548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10548);
	// rlwinm. r25,r11,30,31,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq 0x8299aa14
	if (ctx.cr0.eq) goto loc_8299AA14;
	// b 0x8299a93c
	goto loc_8299A93C;
loc_8299A95C:
	// rlwinm. r10,r11,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8299a9a0
	if (ctx.cr0.eq) goto loc_8299A9A0;
	// lwz r26,11876(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11876);
	// lwz r11,10548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10548);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// rlwinm r25,r11,30,31,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// bne cr6,0x8299a930
	if (!ctx.cr6.eq) goto loc_8299A930;
	// stw r27,11876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11876, ctx.r27.u32);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// lwz r10,12456(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12456);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8299a990
	if (!ctx.cr6.eq) goto loc_8299A990;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8299A990:
	// lwz r10,10548(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10548);
	// rlwimi r10,r11,1,30,30
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 1) & 0x2) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFD);
	// stw r10,10548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10548, ctx.r10.u32);
	// b 0x8299a924
	goto loc_8299A924;
loc_8299A9A0:
	// rlwinm. r10,r23,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8299a9b0
	if (!ctx.cr0.eq) goto loc_8299A9B0;
	// rlwinm. r11,r11,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8299aa14
	if (ctx.cr0.eq) goto loc_8299AA14;
loc_8299A9B0:
	// lwz r26,11876(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11876);
	// lwz r11,10548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10548);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// rlwinm r25,r11,30,31,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// bne cr6,0x8299a9f4
	if (!ctx.cr6.eq) goto loc_8299A9F4;
	// stw r27,11876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11876, ctx.r27.u32);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// lwz r10,12456(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12456);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8299a9dc
	if (!ctx.cr6.eq) goto loc_8299A9DC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8299A9DC:
	// lwz r10,10548(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10548);
	// rlwimi r10,r11,1,30,30
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 1) & 0x2) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFD);
	// stw r10,10548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10548, ctx.r10.u32);
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// or r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 | ctx.r24.u64;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
loc_8299A9F4:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x8299aa14
	if (!ctx.cr6.eq) goto loc_8299AA14;
	// lwz r11,10548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10548);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
loc_8299AA04:
	// stw r11,10548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10548, ctx.r11.u32);
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
loc_8299AA14:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// rlwinm. r11,r11,0,7,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8299aa30
	if (ctx.cr0.eq) goto loc_8299AA30;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8299aa38
	if (!ctx.cr6.eq) goto loc_8299AA38;
loc_8299AA30:
	// li r27,0
	ctx.r27.s64 = 0;
	// b 0x8299aa4c
	goto loc_8299AA4C;
loc_8299AA38:
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,228(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8299AA4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8299AA4C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8299aafc
	if (!ctx.cr6.gt) goto loc_8299AAFC;
	// rlwinm r29,r23,0,18,18
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x2000;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_8299AA5C:
	// li r7,3
	ctx.r7.s64 = 3;
	// lwz r5,28(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x82987088
	ctx.lr = 0x8299AA74;
	sub_82987088(ctx, base);
	// li r7,3
	ctx.r7.s64 = 3;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r5,36(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x82987120
	ctx.lr = 0x8299AA8C;
	sub_82987120(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8299aaa4
	if (ctx.cr6.eq) goto loc_8299AAA4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82999980
	ctx.lr = 0x8299AAA0;
	sub_82999980(ctx, base);
	// b 0x8299aad8
	goto loc_8299AAD8;
loc_8299AAA4:
	// rlwinm. r11,r23,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8299aab8
	if (ctx.cr0.eq) goto loc_8299AAB8;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8299a670
	ctx.lr = 0x8299AAB8;
	sub_8299A670(ctx, base);
loc_8299AAB8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82999c98
	ctx.lr = 0x8299AAC4;
	sub_82999C98(ctx, base);
	// rlwinm. r11,r23,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8299aad8
	if (ctx.cr0.eq) goto loc_8299AAD8;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8299a670
	ctx.lr = 0x8299AAD8;
	sub_8299A670(ctx, base);
loc_8299AAD8:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x8299aaf4
	if (ctx.cr6.eq) goto loc_8299AAF4;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8299AAF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8299AAF4:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x8299aa5c
	if (!ctx.cr0.eq) goto loc_8299AA5C;
loc_8299AAFC:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x8299ab18
	if (ctx.cr6.eq) goto loc_8299AB18;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8299AB18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8299AB18:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm. r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8299ab48
	if (!ctx.cr0.eq) goto loc_8299AB48;
	// rlwinm. r10,r11,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8299ab48
	if (!ctx.cr0.eq) goto loc_8299AB48;
	// rlwinm. r10,r23,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8299ab48
	if (!ctx.cr0.eq) goto loc_8299AB48;
	// rlwinm. r10,r11,0,5,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8299ab48
	if (!ctx.cr0.eq) goto loc_8299AB48;
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8299ab90
	if (ctx.cr0.eq) goto loc_8299AB90;
	// b 0x8299ab78
	goto loc_8299AB78;
loc_8299AB48:
	// stw r26,11876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11876, ctx.r26.u32);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// lwz r10,12456(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12456);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8299ab60
	if (!ctx.cr6.eq) goto loc_8299AB60;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8299AB60:
	// lwz r10,10548(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10548);
	// rlwimi r10,r11,1,30,30
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 1) & 0x2) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFD);
	// stw r10,10548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10548, ctx.r10.u32);
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// or r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 | ctx.r24.u64;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
loc_8299AB78:
	// lwz r11,10548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10548);
	// rlwimi r11,r25,2,29,29
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r25.u32, 2) & 0x4) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFB);
	// stw r11,10548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10548, ctx.r11.u32);
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
loc_8299AB90:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x8299abb0
	if (ctx.cr6.eq) goto loc_8299ABB0;
	// lwz r11,10556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10556);
	// rlwinm r11,r11,0,29,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// stw r11,10556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10556, ctx.r11.u32);
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// or r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 | ctx.r20.u64;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
loc_8299ABB0:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8274c238
	ctx.lr = 0x8299ABBC;
	sub_8274C238(ctx, base);
	// b 0x8299abcc
	goto loc_8299ABCC;
loc_8299ABC0:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8299a170
	ctx.lr = 0x8299ABCC;
	sub_8299A170(ctx, base);
loc_8299ABCC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82a4ea34
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8299ABD8"))) PPC_WEAK_FUNC(sub_8299ABD8);
PPC_FUNC_IMPL(__imp__sub_8299ABD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8299ABE0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r10,10568(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 10568);
	// rlwinm r10,r10,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r28,1720(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1720);
	// stw r10,10568(r29)
	PPC_STORE_U32(ctx.r29.u32 + 10568, ctx.r10.u32);
	// ld r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 16);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// std r11,16(r29)
	PPC_STORE_U64(ctx.r29.u32 + 16, ctx.r11.u64);
	// lwz r11,10548(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 10548);
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r11,10548(r29)
	PPC_STORE_U32(ctx.r29.u32 + 10548, ctx.r11.u32);
	// ld r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r29)
	PPC_STORE_U64(ctx.r29.u32 + 16, ctx.r11.u64);
	// bl 0x82994028
	ctx.lr = 0x8299AC38;
	sub_82994028(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,11820(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11820, ctx.r11.u32);
	// li r7,5
	ctx.r7.s64 = 5;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// ld r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 16);
	// oris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 524288;
	// std r11,16(r29)
	PPC_STORE_U64(ctx.r29.u32 + 16, ctx.r11.u64);
	// lwz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82987088
	ctx.lr = 0x8299AC64;
	sub_82987088(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82993fd0
	ctx.lr = 0x8299AC70;
	sub_82993FD0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x829940e8
	ctx.lr = 0x8299AC80;
	sub_829940E8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,12
	ctx.r7.s64 = 12;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,68(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// bl 0x8274e658
	ctx.lr = 0x8299ACA0;
	sub_8274E658(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82987088
	ctx.lr = 0x8299ACB8;
	sub_82987088(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82754470
	ctx.lr = 0x8299ACC8;
	sub_82754470(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,13
	ctx.r4.s64 = 13;
	// bl 0x829fcfc0
	ctx.lr = 0x8299ACE0;
	sub_829FCFC0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82754530
	ctx.lr = 0x8299ACEC;
	sub_82754530(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8299ACF8"))) PPC_WEAK_FUNC(sub_8299ACF8);
PPC_FUNC_IMPL(__imp__sub_8299ACF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8299AD00;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stb r11,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r11.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stb r9,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r9.u8);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,68(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82993f00
	ctx.lr = 0x8299AD40;
	sub_82993F00(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r5,32(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,20(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// bl 0x82987088
	ctx.lr = 0x8299AD58;
	sub_82987088(ctx, base);
	// lbz r11,12121(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12121);
	// ori r10,r30,64
	ctx.r10.u64 = ctx.r30.u64 | 64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r30,1,25,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0x7E;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r27,r30,26
	ctx.r27.u64 = ctx.r30.u32 & 0x3F;
	// add r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r11,12121(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12121, ctx.r11.u8);
	// ori r29,r9,129
	ctx.r29.u64 = ctx.r9.u64 | 129;
	// stb r10,12056(r8)
	PPC_STORE_U8(ctx.r8.u32 + 12056, ctx.r10.u8);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8299ad98
	if (!ctx.cr6.gt) goto loc_8299AD98;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82746938
	ctx.lr = 0x8299AD98;
	sub_82746938(ctx, base);
loc_8299AD98:
	// stw r29,10672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10672, ctx.r29.u32);
	// li r11,8851
	ctx.r11.s64 = 8851;
	// li r12,-2
	ctx.r12.s64 = -2;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// clrldi r11,r30,32
	ctx.r11.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// rldicr r12,r12,35,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 35) & 0xFFFFFFFFFFFFFFFF;
	// li r28,1
	ctx.r28.s64 = 1;
	// sld r10,r28,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r28.u64 << (ctx.r11.u8 & 0x7F));
	// stwu r29,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r3.u32 = ea;
	// ld r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// and r9,r9,r12
	ctx.r9.u64 = ctx.r9.u64 & ctx.r12.u64;
	// std r9,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r9.u64);
	// ld r9,12048(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 12048);
	// and r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 & ctx.r9.u64;
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// bne cr6,0x8299adf8
	if (!ctx.cr6.eq) goto loc_8299ADF8;
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// ori r9,r9,8960
	ctx.r9.u64 = ctx.r9.u64 | 8960;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// stwu r27,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r27.u32);
	ctx.r11.u32 = ea;
	// ld r9,12048(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 12048);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// std r10,12048(r31)
	PPC_STORE_U64(ctx.r31.u32 + 12048, ctx.r10.u64);
loc_8299ADF8:
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829fcfc0
	ctx.lr = 0x8299AE14;
	sub_829FCFC0(ctx, base);
	// lbz r11,12121(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12121);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// lbz r10,12056(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12056);
	// stb r11,12121(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12121, ctx.r11.u8);
	// clrlwi r30,r10,26
	ctx.r30.u64 = ctx.r10.u32 & 0x3F;
	// ble cr6,0x8299ae44
	if (!ctx.cr6.gt) goto loc_8299AE44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82746938
	ctx.lr = 0x8299AE44;
	sub_82746938(ctx, base);
loc_8299AE44:
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// clrlwi r10,r30,26
	ctx.r10.u64 = ctx.r30.u32 & 0x3F;
	// ori r11,r11,8960
	ctx.r11.u64 = ctx.r11.u64 | 8960;
	// ori r9,r10,256
	ctx.r9.u64 = ctx.r10.u64 | 256;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// clrldi r11,r30,32
	ctx.r11.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// sld r8,r28,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r28.u64 << (ctx.r11.u8 & 0x7F));
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// ld r9,12048(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 12048);
	// lbz r11,12121(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12121);
	// andc r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r8.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// std r9,12048(r31)
	PPC_STORE_U64(ctx.r31.u32 + 12048, ctx.r9.u64);
	// beq 0x8299ae94
	if (ctx.cr0.eq) goto loc_8299AE94;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r11,12056(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12056);
	// rlwimi r28,r11,1,24,30
	ctx.r28.u64 = (__builtin_rotateleft32(ctx.r11.u32, 1) & 0xFE) | (ctx.r28.u64 & 0xFFFFFFFFFFFFFF01);
	// stw r28,10672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10672, ctx.r28.u32);
	// b 0x8299ae9c
	goto loc_8299AE9C;
loc_8299AE94:
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,10672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10672, ctx.r11.u32);
loc_8299AE9C:
	// li r12,1
	ctx.r12.s64 = 1;
	// ld r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// rldicr r12,r12,35,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 35) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8299AEB8"))) PPC_WEAK_FUNC(sub_8299AEB8);
PPC_FUNC_IMPL(__imp__sub_8299AEB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8299AEC0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lwz r9,244(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// and. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8299afc8
	if (ctx.cr0.eq) goto loc_8299AFC8;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8299afc8
	if (ctx.cr6.eq) goto loc_8299AFC8;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f13,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lfs f0,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// lbz r10,252(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 252);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8299af34
	if (!ctx.cr6.lt) goto loc_8299AF34;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8299af24
	if (ctx.cr0.eq) goto loc_8299AF24;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// li r10,6
	ctx.r10.s64 = 6;
	// beq cr6,0x8299af24
	if (ctx.cr6.eq) goto loc_8299AF24;
	// li r10,2
	ctx.r10.s64 = 2;
loc_8299AF24:
	// lwz r9,10568(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// rlwimi r9,r10,0,29,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x7) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFF8);
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// b 0x8299af40
	goto loc_8299AF40;
loc_8299AF34:
	// lwz r9,10568(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// rlwimi r10,r9,0,0,28
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFFFFF8) | (ctx.r10.u64 & 0xFFFFFFFF00000007);
	// stw r10,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r10.u32);
loc_8299AF40:
	// ld r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// ori r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 64;
	// std r10,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8299af60
	if (ctx.cr6.eq) goto loc_8299AF60;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82993fd0
	ctx.lr = 0x8299AF60;
	sub_82993FD0(ctx, base);
loc_8299AF60:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8299af94
	if (!ctx.cr6.gt) goto loc_8299AF94;
	// addi r30,r31,48
	ctx.r30.s64 = ctx.r31.s64 + 48;
loc_8299AF74:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82993f00
	ctx.lr = 0x8299AF80;
	sub_82993F00(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8299af74
	if (ctx.cr6.lt) goto loc_8299AF74;
loc_8299AF94:
	// li r7,3
	ctx.r7.s64 = 3;
	// lwz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82987088
	ctx.lr = 0x8299AFAC;
	sub_82987088(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x829940e8
	ctx.lr = 0x8299AFBC;
	sub_829940E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82999c98
	ctx.lr = 0x8299AFC8;
	sub_82999C98(ctx, base);
loc_8299AFC8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8299AFD0"))) PPC_WEAK_FUNC(sub_8299AFD0);
PPC_FUNC_IMPL(__imp__sub_8299AFD0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8299b068
	if (ctx.cr6.eq) goto loc_8299B068;
	// lwz r11,240(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bgt cr6,0x8299b044
	if (ctx.cr6.gt) goto loc_8299B044;
	// beq cr6,0x8299b038
	if (ctx.cr6.eq) goto loc_8299B038;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8299b030
	if (ctx.cr6.eq) goto loc_8299B030;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8299b024
	if (ctx.cr6.eq) goto loc_8299B024;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8299b018
	if (ctx.cr6.eq) goto loc_8299B018;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8299b068
	if (!ctx.cr6.eq) goto loc_8299B068;
loc_8299B00C:
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mulli r3,r11,3
	ctx.r3.s64 = ctx.r11.s64 * 3;
	// blr 
	return;
loc_8299B018:
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// blr 
	return;
loc_8299B024:
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// blr 
	return;
loc_8299B030:
	// lwz r3,12(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// blr 
	return;
loc_8299B038:
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// addi r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 2;
	// blr 
	return;
loc_8299B044:
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x8299b038
	if (ctx.cr6.eq) goto loc_8299B038;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x8299b00c
	if (ctx.cr6.eq) goto loc_8299B00C;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// bne cr6,0x8299b068
	if (!ctx.cr6.eq) goto loc_8299B068;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// blr 
	return;
loc_8299B068:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8299B070"))) PPC_WEAK_FUNC(sub_8299B070);
PPC_FUNC_IMPL(__imp__sub_8299B070) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8299B078;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8299a5f8
	ctx.lr = 0x8299B08C;
	sub_8299A5F8(ctx, base);
	// bl 0x8299a570
	ctx.lr = 0x8299B090;
	sub_8299A570(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,11820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11820, ctx.r11.u32);
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// oris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 524288;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8299b0b4
	if (!ctx.cr6.eq) goto loc_8299B0B4;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
loc_8299B0B4:
	// li r7,7
	ctx.r7.s64 = 7;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82987088
	ctx.lr = 0x8299B0CC;
	sub_82987088(ctx, base);
	// lwz r11,176(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 176);
	// li r5,0
	ctx.r5.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// beq cr6,0x8299b0ec
	if (ctx.cr6.eq) goto loc_8299B0EC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x829940e8
	ctx.lr = 0x8299B0E8;
	sub_829940E8(ctx, base);
	// b 0x8299b148
	goto loc_8299B148;
loc_8299B0EC:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r10,r10,36400
	ctx.r10.u64 = ctx.r10.u64 | 36400;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x829940e8
	ctx.lr = 0x8299B108;
	sub_829940E8(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r12,1
	ctx.r12.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// rldicr r12,r12,62,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 62) & 0xFFFFFFFFFFFFFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,17660(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17660);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6108(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6108, temp.u32);
	// stfs f0,6096(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6096, temp.u32);
	// stfs f0,6100(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6100, temp.u32);
	// stfs f0,6104(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6104, temp.u32);
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r11.u64);
	// bl 0x8274c238
	ctx.lr = 0x8299B140;
	sub_8274C238(ctx, base);
	// bl 0x8274c358
	ctx.lr = 0x8299B144;
	sub_8274C358(ctx, base);
	// bl 0x8274c3e8
	ctx.lr = 0x8299B148;
	sub_8274C3E8(ctx, base);
loc_8299B148:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82999c98
	ctx.lr = 0x8299B154;
	sub_82999C98(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8299B160"))) PPC_WEAK_FUNC(sub_8299B160);
PPC_FUNC_IMPL(__imp__sub_8299B160) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,19316
	ctx.r31.s64 = ctx.r11.s64 + 19316;
	// lwz r11,19312(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19312);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8299b1a8
	if (!ctx.cr0.eq) goto loc_8299B1A8;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-19904
	ctx.r9.s64 = ctx.r9.s64 + -19904;
	// stw r11,19312(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19312, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-10848
	ctx.r3.s64 = ctx.r11.s64 + -10848;
	// bl 0x82a4c758
	ctx.lr = 0x8299B1A8;
	sub_82A4C758(ctx, base);
loc_8299B1A8:
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

__attribute__((alias("__imp__sub_8299B1C0"))) PPC_WEAK_FUNC(sub_8299B1C0);
PPC_FUNC_IMPL(__imp__sub_8299B1C0) {
	PPC_FUNC_PROLOGUE();
	// li r3,416
	ctx.r3.s64 = 416;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8299B1C8"))) PPC_WEAK_FUNC(sub_8299B1C8);
PPC_FUNC_IMPL(__imp__sub_8299B1C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-27092(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27092);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8299b208
	if (!ctx.cr0.eq) goto loc_8299B208;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stw r11,-27092(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27092, ctx.r11.u32);
	// addi r3,r9,-19924
	ctx.r3.s64 = ctx.r9.s64 + -19924;
	// bl 0x82816528
	ctx.lr = 0x8299B200;
	sub_82816528(ctx, base);
	// stw r3,-27096(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27096, ctx.r3.u32);
	// b 0x8299b20c
	goto loc_8299B20C;
loc_8299B208:
	// lwz r3,-27096(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27096);
loc_8299B20C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8299B220"))) PPC_WEAK_FUNC(sub_8299B220);
PPC_FUNC_IMPL(__imp__sub_8299B220) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8299b160
	ctx.lr = 0x8299B240;
	sub_8299B160(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8299B254;
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

__attribute__((alias("__imp__sub_8299B270"))) PPC_WEAK_FUNC(sub_8299B270);
PPC_FUNC_IMPL(__imp__sub_8299B270) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,16(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lwz r11,12(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8299B2A0"))) PPC_WEAK_FUNC(sub_8299B2A0);
PPC_FUNC_IMPL(__imp__sub_8299B2A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r11,-4064
	ctx.r3.s64 = ctx.r11.s64 + -4064;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8299B2B0"))) PPC_WEAK_FUNC(sub_8299B2B0);
PPC_FUNC_IMPL(__imp__sub_8299B2B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8299b2e8
	if (ctx.cr6.eq) goto loc_8299B2E8;
	// bl 0x8286ee88
	ctx.lr = 0x8299B2D8;
	sub_8286EE88(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8299b2e8
	if (!ctx.cr6.eq) goto loc_8299B2E8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8299b2f4
	goto loc_8299B2F4;
loc_8299B2E8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82338a28
	ctx.lr = 0x8299B2F4;
	sub_82338A28(ctx, base);
loc_8299B2F4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8299B310"))) PPC_WEAK_FUNC(sub_8299B310);
PPC_FUNC_IMPL(__imp__sub_8299B310) {
	PPC_FUNC_PROLOGUE();
	// b 0x8286ee88
	sub_8286EE88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8299B318"))) PPC_WEAK_FUNC(sub_8299B318);
PPC_FUNC_IMPL(__imp__sub_8299B318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,6384
	ctx.r3.s64 = 6384;
	// bl 0x82833108
	ctx.lr = 0x8299B334;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8299b348
	if (ctx.cr0.eq) goto loc_8299B348;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8299b4a8
	ctx.lr = 0x8299B344;
	sub_8299B4A8(ctx, base);
	// b 0x8299b34c
	goto loc_8299B34C;
loc_8299B348:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8299B34C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8299B360"))) PPC_WEAK_FUNC(sub_8299B360);
PPC_FUNC_IMPL(__imp__sub_8299B360) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8286ee88
	ctx.lr = 0x8299B380;
	sub_8286EE88(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8299b390
	if (!ctx.cr6.eq) goto loc_8299B390;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8299b3a8
	goto loc_8299B3A8;
loc_8299B390:
	// bl 0x82338750
	ctx.lr = 0x8299B394;
	sub_82338750(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8299b3a8
	if (ctx.cr6.eq) goto loc_8299B3A8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82338858
	ctx.lr = 0x8299B3A8;
	sub_82338858(ctx, base);
loc_8299B3A8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8299B3C0"))) PPC_WEAK_FUNC(sub_8299B3C0);
PPC_FUNC_IMPL(__imp__sub_8299B3C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8299B3C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// addi r11,r11,-19880
	ctx.r11.s64 = ctx.r11.s64 + -19880;
	// addi r10,r10,-18872
	ctx.r10.s64 = ctx.r10.s64 + -18872;
	// addi r9,r9,-18820
	ctx.r9.s64 = ctx.r9.s64 + -18820;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r3,r31,5496
	ctx.r3.s64 = ctx.r31.s64 + 5496;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// bl 0x8297b500
	ctx.lr = 0x8299B3FC;
	sub_8297B500(ctx, base);
	// addi r3,r31,4688
	ctx.r3.s64 = ctx.r31.s64 + 4688;
	// bl 0x8297b500
	ctx.lr = 0x8299B404;
	sub_8297B500(ctx, base);
	// addi r3,r31,3880
	ctx.r3.s64 = ctx.r31.s64 + 3880;
	// bl 0x8297b500
	ctx.lr = 0x8299B40C;
	sub_8297B500(ctx, base);
	// addi r3,r31,3072
	ctx.r3.s64 = ctx.r31.s64 + 3072;
	// bl 0x8297b500
	ctx.lr = 0x8299B414;
	sub_8297B500(ctx, base);
	// addi r3,r31,2264
	ctx.r3.s64 = ctx.r31.s64 + 2264;
	// bl 0x8297b500
	ctx.lr = 0x8299B41C;
	sub_8297B500(ctx, base);
	// addi r3,r31,1456
	ctx.r3.s64 = ctx.r31.s64 + 1456;
	// bl 0x8297b500
	ctx.lr = 0x8299B424;
	sub_8297B500(ctx, base);
	// addi r29,r31,1432
	ctx.r29.s64 = ctx.r31.s64 + 1432;
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r5,1448(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1448);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332ca8
	ctx.lr = 0x8299B440;
	sub_82332CA8(ctx, base);
	// lwz r3,1444(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1444);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8299b450
	if (ctx.cr6.eq) goto loc_8299B450;
	// bl 0x82332db8
	ctx.lr = 0x8299B450;
	sub_82332DB8(ctx, base);
loc_8299B450:
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r30,r31,1408
	ctx.r30.s64 = ctx.r31.s64 + 1408;
	// stw r28,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r28.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r28,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r28.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r28,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r28.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,1424(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1424);
	// bl 0x82332ca8
	ctx.lr = 0x8299B47C;
	sub_82332CA8(ctx, base);
	// lwz r3,1420(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1420);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8299b48c
	if (ctx.cr6.eq) goto loc_8299B48C;
	// bl 0x82332db8
	ctx.lr = 0x8299B48C;
	sub_82332DB8(ctx, base);
loc_8299B48C:
	// stw r28,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r28,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r28.u32);
	// stw r28,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r28.u32);
	// bl 0x829bc9e8
	ctx.lr = 0x8299B4A0;
	sub_829BC9E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8299B4A8"))) PPC_WEAK_FUNC(sub_8299B4A8);
PPC_FUNC_IMPL(__imp__sub_8299B4A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x8299B4B0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82338b88
	ctx.lr = 0x8299B4C0;
	sub_82338B88(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// addi r11,r11,-19880
	ctx.r11.s64 = ctx.r11.s64 + -19880;
	// addi r10,r10,-18872
	ctx.r10.s64 = ctx.r10.s64 + -18872;
	// addi r9,r9,-18820
	ctx.r9.s64 = ctx.r9.s64 + -18820;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// addi r29,r30,1408
	ctx.r29.s64 = ctx.r30.s64 + 1408;
	// stw r9,396(r30)
	PPC_STORE_U32(ctx.r30.u32 + 396, ctx.r9.u32);
	// li r26,4
	ctx.r26.s64 = 4;
	// stw r31,1416(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1416, ctx.r31.u32);
	// addi r27,r28,1408
	ctx.r27.s64 = ctx.r28.s64 + 1408;
	// stw r31,1420(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1420, ctx.r31.u32);
	// stw r26,1412(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1412, ctx.r26.u32);
	// stw r31,1424(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1424, ctx.r31.u32);
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// stw r31,1428(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1428, ctx.r31.u32);
	// stw r31,1408(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1408, ctx.r31.u32);
	// beq cr6,0x8299b55c
	if (ctx.cr6.eq) goto loc_8299B55C;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8299b55c
	if (!ctx.cr6.gt) goto loc_8299B55C;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8299b540
	if (ctx.cr0.eq) goto loc_8299B540;
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332c38
	ctx.lr = 0x8299B540;
	sub_82332C38(ctx, base);
loc_8299B540:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// lwz r4,12(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x82a45878
	ctx.lr = 0x8299B554;
	sub_82A45878(ctx, base);
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r11,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
loc_8299B55C:
	// addi r29,r30,1432
	ctx.r29.s64 = ctx.r30.s64 + 1432;
	// stw r26,1436(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1436, ctx.r26.u32);
	// addi r27,r28,1432
	ctx.r27.s64 = ctx.r28.s64 + 1432;
	// stw r31,1440(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1440, ctx.r31.u32);
	// stw r31,1444(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1444, ctx.r31.u32);
	// stw r31,1448(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1448, ctx.r31.u32);
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// stw r31,1452(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1452, ctx.r31.u32);
	// stw r31,1432(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1432, ctx.r31.u32);
	// beq cr6,0x8299b5cc
	if (ctx.cr6.eq) goto loc_8299B5CC;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8299b5cc
	if (!ctx.cr6.gt) goto loc_8299B5CC;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8299b5b0
	if (ctx.cr0.eq) goto loc_8299B5B0;
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332c38
	ctx.lr = 0x8299B5B0;
	sub_82332C38(ctx, base);
loc_8299B5B0:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// lwz r4,12(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x82a45878
	ctx.lr = 0x8299B5C4;
	sub_82A45878(ctx, base);
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r11,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
loc_8299B5CC:
	// addic. r4,r28,1456
	ctx.xer.ca = ctx.r28.u32 > 4294965839;
	ctx.r4.s64 = ctx.r28.s64 + 1456;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r31,2256(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2256, ctx.r31.u32);
	// addi r3,r30,1456
	ctx.r3.s64 = ctx.r30.s64 + 1456;
	// stw r31,2260(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2260, ctx.r31.u32);
	// beq 0x8299b5e4
	if (ctx.cr0.eq) goto loc_8299B5E4;
	// bl 0x8297b368
	ctx.lr = 0x8299B5E4;
	sub_8297B368(ctx, base);
loc_8299B5E4:
	// addic. r4,r28,2264
	ctx.xer.ca = ctx.r28.u32 > 4294965031;
	ctx.r4.s64 = ctx.r28.s64 + 2264;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r31,3064(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3064, ctx.r31.u32);
	// addi r3,r30,2264
	ctx.r3.s64 = ctx.r30.s64 + 2264;
	// stw r31,3068(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3068, ctx.r31.u32);
	// beq 0x8299b5fc
	if (ctx.cr0.eq) goto loc_8299B5FC;
	// bl 0x8297b368
	ctx.lr = 0x8299B5FC;
	sub_8297B368(ctx, base);
loc_8299B5FC:
	// addic. r4,r28,3072
	ctx.xer.ca = ctx.r28.u32 > 4294964223;
	ctx.r4.s64 = ctx.r28.s64 + 3072;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r31,3872(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3872, ctx.r31.u32);
	// addi r3,r30,3072
	ctx.r3.s64 = ctx.r30.s64 + 3072;
	// stw r31,3876(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3876, ctx.r31.u32);
	// beq 0x8299b614
	if (ctx.cr0.eq) goto loc_8299B614;
	// bl 0x8297b368
	ctx.lr = 0x8299B614;
	sub_8297B368(ctx, base);
loc_8299B614:
	// addic. r4,r28,3880
	ctx.xer.ca = ctx.r28.u32 > 4294963415;
	ctx.r4.s64 = ctx.r28.s64 + 3880;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r31,4680(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4680, ctx.r31.u32);
	// addi r3,r30,3880
	ctx.r3.s64 = ctx.r30.s64 + 3880;
	// stw r31,4684(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4684, ctx.r31.u32);
	// beq 0x8299b62c
	if (ctx.cr0.eq) goto loc_8299B62C;
	// bl 0x8297b368
	ctx.lr = 0x8299B62C;
	sub_8297B368(ctx, base);
loc_8299B62C:
	// addic. r4,r28,4688
	ctx.xer.ca = ctx.r28.u32 > 4294962607;
	ctx.r4.s64 = ctx.r28.s64 + 4688;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r31,5488(r30)
	PPC_STORE_U32(ctx.r30.u32 + 5488, ctx.r31.u32);
	// addi r3,r30,4688
	ctx.r3.s64 = ctx.r30.s64 + 4688;
	// stw r31,5492(r30)
	PPC_STORE_U32(ctx.r30.u32 + 5492, ctx.r31.u32);
	// beq 0x8299b644
	if (ctx.cr0.eq) goto loc_8299B644;
	// bl 0x8297b368
	ctx.lr = 0x8299B644;
	sub_8297B368(ctx, base);
loc_8299B644:
	// addic. r4,r28,5496
	ctx.xer.ca = ctx.r28.u32 > 4294961799;
	ctx.r4.s64 = ctx.r28.s64 + 5496;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r31,6296(r30)
	PPC_STORE_U32(ctx.r30.u32 + 6296, ctx.r31.u32);
	// addi r3,r30,5496
	ctx.r3.s64 = ctx.r30.s64 + 5496;
	// stw r31,6300(r30)
	PPC_STORE_U32(ctx.r30.u32 + 6300, ctx.r31.u32);
	// beq 0x8299b65c
	if (ctx.cr0.eq) goto loc_8299B65C;
	// bl 0x8297b368
	ctx.lr = 0x8299B65C;
	sub_8297B368(ctx, base);
loc_8299B65C:
	// lwz r11,6304(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 6304);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,6304(r30)
	PPC_STORE_U32(ctx.r30.u32 + 6304, ctx.r11.u32);
	// lwz r11,6308(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 6308);
	// stw r11,6308(r30)
	PPC_STORE_U32(ctx.r30.u32 + 6308, ctx.r11.u32);
	// lwz r11,6312(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 6312);
	// stw r11,6312(r30)
	PPC_STORE_U32(ctx.r30.u32 + 6312, ctx.r11.u32);
	// lwz r11,6316(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 6316);
	// stw r11,6316(r30)
	PPC_STORE_U32(ctx.r30.u32 + 6316, ctx.r11.u32);
	// lwz r11,6320(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 6320);
	// stw r11,6320(r30)
	PPC_STORE_U32(ctx.r30.u32 + 6320, ctx.r11.u32);
	// lwz r11,6324(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 6324);
	// stw r11,6324(r30)
	PPC_STORE_U32(ctx.r30.u32 + 6324, ctx.r11.u32);
	// lfs f0,6328(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 6328);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6328(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 6328, temp.u32);
	// lwz r11,6332(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 6332);
	// stw r11,6332(r30)
	PPC_STORE_U32(ctx.r30.u32 + 6332, ctx.r11.u32);
	// lwz r11,6336(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 6336);
	// stw r11,6336(r30)
	PPC_STORE_U32(ctx.r30.u32 + 6336, ctx.r11.u32);
	// lwz r11,6340(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 6340);
	// stw r11,6340(r30)
	PPC_STORE_U32(ctx.r30.u32 + 6340, ctx.r11.u32);
	// lwz r11,6344(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 6344);
	// stw r11,6344(r30)
	PPC_STORE_U32(ctx.r30.u32 + 6344, ctx.r11.u32);
	// lwz r11,6348(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 6348);
	// stw r11,6348(r30)
	PPC_STORE_U32(ctx.r30.u32 + 6348, ctx.r11.u32);
	// lwz r11,6352(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 6352);
	// stw r11,6352(r30)
	PPC_STORE_U32(ctx.r30.u32 + 6352, ctx.r11.u32);
	// lwz r11,6356(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 6356);
	// stw r11,6356(r30)
	PPC_STORE_U32(ctx.r30.u32 + 6356, ctx.r11.u32);
	// lwz r11,6360(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 6360);
	// stw r11,6360(r30)
	PPC_STORE_U32(ctx.r30.u32 + 6360, ctx.r11.u32);
	// lwz r11,6364(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 6364);
	// stw r11,6364(r30)
	PPC_STORE_U32(ctx.r30.u32 + 6364, ctx.r11.u32);
	// lwz r11,6368(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 6368);
	// stw r11,6368(r30)
	PPC_STORE_U32(ctx.r30.u32 + 6368, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8299B6F0"))) PPC_WEAK_FUNC(sub_8299B6F0);
PPC_FUNC_IMPL(__imp__sub_8299B6F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8299b3c0
	ctx.lr = 0x8299B710;
	sub_8299B3C0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8299b720
	if (ctx.cr0.eq) goto loc_8299B720;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x8299B720;
	sub_82332DB8(ctx, base);
loc_8299B720:
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

__attribute__((alias("__imp__sub_8299B740"))) PPC_WEAK_FUNC(sub_8299B740);
PPC_FUNC_IMPL(__imp__sub_8299B740) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f0
	ctx.lr = 0x8299B748;
	__savegprlr_22(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r29,r30,32
	ctx.r29.s64 = ctx.r30.s64 + 32;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8299B76C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8299b7a4
	if (!ctx.cr6.gt) goto loc_8299B7A4;
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8299B784:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8299b848
	if (ctx.cr6.eq) goto loc_8299B848;
	// lwz r9,80(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 + 72;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8299b784
	if (ctx.cr6.lt) goto loc_8299B784;
loc_8299B7A4:
	// lwz r11,620(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	// addi r9,r31,1456
	ctx.r9.s64 = ctx.r31.s64 + 1456;
	// lwz r10,624(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	// addi r7,r31,2264
	ctx.r7.s64 = ctx.r31.s64 + 2264;
	// lwz r8,628(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// lwz r24,6304(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6304);
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// lwz r23,6308(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6308);
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// ld r22,6332(r31)
	ctx.r22.u64 = PPC_LOAD_U64(ctx.r31.u32 + 6332);
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r3,r30,64
	ctx.r3.s64 = ctx.r30.s64 + 64;
	// lfs f0,6328(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6328);
	ctx.f0.f64 = double(temp.f32);
	// li r6,8
	ctx.r6.s64 = 8;
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// li r5,72
	ctx.r5.s64 = 72;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// stw r25,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r25.u32);
	// stw r24,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r24.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r23,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r23.u32);
	// std r22,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r22.u64);
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// stw r7,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r7.u32);
	// bl 0x82332d50
	ctx.lr = 0x8299B824;
	sub_82332D50(ctx, base);
	// lwz r10,76(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// mulli r11,r3,72
	ctx.r11.s64 = ctx.r3.s64 * 72;
	// add. r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8299b840
	if (ctx.cr0.eq) goto loc_8299B840;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x82a4ea80
	ctx.lr = 0x8299B840;
	sub_82A4EA80(ctx, base);
loc_8299B840:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
loc_8299B848:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8299B85C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82a4ea40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8299B868"))) PPC_WEAK_FUNC(sub_8299B868);
PPC_FUNC_IMPL(__imp__sub_8299B868) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9d0
	ctx.lr = 0x8299B870;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82a61744
	ctx.lr = 0x8299B878;
	__savefpr_27(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// lwz r11,88(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8299b8d8
	if (!ctx.cr6.eq) goto loc_8299B8D8;
	// bl 0x8286e920
	ctx.lr = 0x8299B894;
	sub_8286E920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,24(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// bl 0x8297c490
	ctx.lr = 0x8299B8A0;
	sub_8297C490(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8299b8d0
	if (ctx.cr0.eq) goto loc_8299B8D0;
	// bl 0x8286e920
	ctx.lr = 0x8299B8AC;
	sub_8286E920(ctx, base);
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
	ctx.lr = 0x8299B8C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// bne 0x8299b8d4
	if (!ctx.cr0.eq) goto loc_8299B8D4;
loc_8299B8D0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8299B8D4:
	// stw r11,88(r26)
	PPC_STORE_U32(ctx.r26.u32 + 88, ctx.r11.u32);
loc_8299B8D8:
	// lis r22,-31949
	ctx.r22.s64 = -2093809664;
	// lwz r10,32(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 32);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// addi r18,r26,32
	ctx.r18.s64 = ctx.r26.s64 + 32;
	// ori r20,r11,36416
	ctx.r20.u64 = ctx.r11.u64 | 36416;
	// li r17,0
	ctx.r17.s64 = 0;
	// lwz r11,13024(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 13024);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// addis r14,r11,3
	ctx.r14.s64 = ctx.r11.s64 + 196608;
	// addi r14,r14,-30160
	ctx.r14.s64 = ctx.r14.s64 + -30160;
	// lwzx r11,r11,r20
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r20.u32);
	// lwz r21,600(r11)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r11.u32 + 600);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8299B918;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 80);
	// li r15,0
	ctx.r15.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8299bc5c
	if (!ctx.cr6.gt) goto loc_8299BC5C;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// lis r8,-31963
	ctx.r8.s64 = -2094727168;
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lfs f29,30996(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 30996);
	ctx.f29.f64 = double(temp.f32);
	// li r23,0
	ctx.r23.s64 = 0;
	// lfs f27,24000(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 24000);
	ctx.f27.f64 = double(temp.f32);
	// li r24,1
	ctx.r24.s64 = 1;
	// lfs f28,904(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 904);
	ctx.f28.f64 = double(temp.f32);
	// addi r16,r11,-20484
	ctx.r16.s64 = ctx.r11.s64 + -20484;
	// addi r25,r10,-13880
	ctx.r25.s64 = ctx.r10.s64 + -13880;
loc_8299B958:
	// lwz r11,76(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 76);
	// add r29,r11,r23
	ctx.r29.u64 = ctx.r11.u64 + ctx.r23.u64;
	// lwzx r11,r11,r23
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r23.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8299b9b0
	if (!ctx.cr6.eq) goto loc_8299B9B0;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82333900
	ctx.lr = 0x8299B974;
	sub_82333900(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8299b9a8
	if (ctx.cr0.eq) goto loc_8299B9A8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r16,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r16.u32);
	// addic. r31,r30,4
	ctx.xer.ca = ctx.r30.u32 > 4294967291;
	ctx.r31.s64 = ctx.r30.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r3,0(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// beq 0x8299b9ac
	if (ctx.cr0.eq) goto loc_8299B9AC;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,9
	ctx.r4.s64 = 9;
	// bl 0x82754a68
	ctx.lr = 0x8299B9A0;
	sub_82754A68(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// b 0x8299b9ac
	goto loc_8299B9AC;
loc_8299B9A8:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8299B9AC:
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
loc_8299B9B0:
	// lwz r10,13024(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 13024);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lwz r11,76(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 76);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// ori r8,r9,36008
	ctx.r8.u64 = ctx.r9.u64 | 36008;
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// lwz r10,76(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// addi r5,r11,32
	ctx.r5.s64 = ctx.r11.s64 + 32;
	// lwz r9,92(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 92);
	// lwzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8299B9F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8299bc34
	if (ctx.cr0.eq) goto loc_8299BC34;
	// lfs f13,32(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f28
	ctx.cr6.compare(ctx.f13.f64, ctx.f28.f64);
	// blt cr6,0x8299bc34
	if (ctx.cr6.lt) goto loc_8299BC34;
	// lfs f0,36(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// blt cr6,0x8299bc34
	if (ctx.cr6.lt) goto loc_8299BC34;
	// lwz r11,556(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 556);
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f12,112(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bgt cr6,0x8299bc34
	if (ctx.cr6.gt) goto loc_8299BC34;
	// lwz r11,560(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 560);
	// std r11,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// lfd f13,120(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x8299bc34
	if (ctx.cr6.gt) goto loc_8299BC34;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// bne cr6,0x8299ba68
	if (!ctx.cr6.eq) goto loc_8299BA68;
	// lwz r11,13024(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 13024);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwzx r3,r11,r20
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r20.u32);
	// bl 0x829a5c10
	ctx.lr = 0x8299BA64;
	sub_829A5C10(ctx, base);
	// mr r17,r24
	ctx.r17.u64 = ctx.r24.u64;
loc_8299BA68:
	// lwz r11,88(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 88);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8299bb3c
	if (ctx.cr6.eq) goto loc_8299BB3C;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8299BA90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// beq cr6,0x8299bb3c
	if (ctx.cr6.eq) goto loc_8299BB3C;
	// lfs f13,52(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lwz r31,88(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 88);
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lwz r11,76(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 76);
	// addi r30,r31,32
	ctx.r30.s64 = ctx.r31.s64 + 32;
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r28,4(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// fdivs f31,f0,f13
	ctx.f31.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8299BAE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8299bb28
	if (!ctx.cr6.gt) goto loc_8299BB28;
	// lwz r8,76(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_8299BAFC:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r7,r28
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8299bb1c
	if (ctx.cr6.eq) goto loc_8299BB1C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,112
	ctx.r9.s64 = ctx.r9.s64 + 112;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8299bafc
	if (ctx.cr6.lt) goto loc_8299BAFC;
	// b 0x8299bb28
	goto loc_8299BB28;
loc_8299BB1C:
	// mulli r11,r10,112
	ctx.r11.s64 = ctx.r10.s64 * 112;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stfs f31,40(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
loc_8299BB28:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8299BB3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8299BB3C:
	// lfs f0,52(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// fmuls f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// lfs f13,32(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,36(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fsubs f30,f12,f0
	ctx.f30.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// beq cr6,0x8299bb70
	if (ctx.cr6.eq) goto loc_8299BB70;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8299BB70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8299BB70:
	// lwz r6,44(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8299bbc0
	if (ctx.cr6.eq) goto loc_8299BBC0;
	// lwz r7,48(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8299bbc0
	if (ctx.cr6.eq) goto loc_8299BBC0;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lfs f3,52(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	ctx.f3.f64 = double(temp.f32);
	// lfs f5,40(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	ctx.f5.f64 = double(temp.f32);
	// fmr f4,f3
	ctx.f4.f64 = ctx.f3.f64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r24,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r24.u32);
	// stw r24,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8299BBC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8299BBC0:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x8299bbdc
	if (ctx.cr6.eq) goto loc_8299BBDC;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8299BBDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8299BBDC:
	// lfs f0,32(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lwz r6,56(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// lfs f3,64(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	ctx.f3.f64 = double(temp.f32);
	// fnmsubs f1,f3,f29,f0
	ctx.f1.f64 = double(float(-(ctx.f3.f64 * ctx.f29.f64 - ctx.f0.f64)));
	// lfs f4,68(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	ctx.f4.f64 = double(temp.f32);
	// lfs f0,36(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// fnmsubs f2,f4,f29,f0
	ctx.f2.f64 = double(float(-(ctx.f4.f64 * ctx.f29.f64 - ctx.f0.f64)));
	// beq cr6,0x8299bc34
	if (ctx.cr6.eq) goto loc_8299BC34;
	// lwz r7,60(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8299bc34
	if (ctx.cr6.eq) goto loc_8299BC34;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lfs f5,40(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	ctx.f5.f64 = double(temp.f32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r24,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r24.u32);
	// stw r24,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8299BC34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8299BC34:
	// lwz r11,80(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 80);
	// addi r15,r15,1
	ctx.r15.s64 = ctx.r15.s64 + 1;
	// addi r23,r23,72
	ctx.r23.s64 = ctx.r23.s64 + 72;
	// cmpw cr6,r15,r11
	ctx.cr6.compare<int32_t>(ctx.r15.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8299b958
	if (ctx.cr6.lt) goto loc_8299B958;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// beq cr6,0x8299bc5c
	if (ctx.cr6.eq) goto loc_8299BC5C;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// bl 0x8274ebf0
	ctx.lr = 0x8299BC5C;
	sub_8274EBF0(ctx, base);
loc_8299BC5C:
	// lwz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8299BC70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82a61790
	ctx.lr = 0x8299BC7C;
	__restfpr_27(ctx, base);
	// b 0x82a4ea20
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8299BC80"))) PPC_WEAK_FUNC(sub_8299BC80);
PPC_FUNC_IMPL(__imp__sub_8299BC80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9e4
	ctx.lr = 0x8299BC88;
	__savegprlr_19(ctx, base);
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x82a61738
	ctx.lr = 0x8299BC90;
	__savefpr_24(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r23,-31949
	ctx.r23.s64 = -2093809664;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// ori r8,r11,36416
	ctx.r8.u64 = ctx.r11.u64 | 36416;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lwz r11,13024(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 13024);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r20,r24,32
	ctx.r20.s64 = ctx.r24.s64 + 32;
	// lfs f31,30996(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 30996);
	ctx.f31.f64 = double(temp.f32);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwz r10,32(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 32);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// addis r21,r11,3
	ctx.r21.s64 = ctx.r11.s64 + 196608;
	// addi r21,r21,-30160
	ctx.r21.s64 = ctx.r21.s64 + -30160;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r9,560(r21)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r21.u32 + 560);
	// lwz r8,556(r21)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r21.u32 + 556);
	// lwz r27,600(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 600);
	// std r9,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r9.u64);
	// lfd f0,112(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// std r8,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r8.u64);
	// lfd f13,112(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f27,f13,f31
	ctx.f27.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fmuls f26,f0,f31
	ctx.f26.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8299BD10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 80);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r19,r25
	ctx.r19.u64 = ctx.r25.u64;
	// ble cr6,0x8299bfbc
	if (!ctx.cr6.gt) goto loc_8299BFBC;
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// mr r22,r25
	ctx.r22.u64 = ctx.r25.u64;
	// lfs f25,24000(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24000);
	ctx.f25.f64 = double(temp.f32);
	// li r26,1
	ctx.r26.s64 = 1;
	// lfs f24,908(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 908);
	ctx.f24.f64 = double(temp.f32);
	// addi r30,r11,-13880
	ctx.r30.s64 = ctx.r11.s64 + -13880;
	// lfs f28,904(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 904);
	ctx.f28.f64 = double(temp.f32);
loc_8299BD4C:
	// lwz r11,13024(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 13024);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lwz r9,76(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 76);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r8,r10,36008
	ctx.r8.u64 = ctx.r10.u64 | 36008;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r31,r9,r22
	ctx.r31.u64 = ctx.r9.u64 + ctx.r22.u64;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// addi r29,r31,28
	ctx.r29.s64 = ctx.r31.s64 + 28;
	// lwz r10,92(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8299BD90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8299bfa8
	if (ctx.cr0.eq) goto loc_8299BFA8;
	// lfs f12,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f28
	ctx.cr6.compare(ctx.f12.f64, ctx.f28.f64);
	// blt cr6,0x8299bfa8
	if (ctx.cr6.lt) goto loc_8299BFA8;
	// lwz r11,556(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 556);
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f0,112(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bgt cr6,0x8299bfa8
	if (ctx.cr6.gt) goto loc_8299BFA8;
	// lfs f13,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f28
	ctx.cr6.compare(ctx.f13.f64, ctx.f28.f64);
	// blt cr6,0x8299bfa8
	if (ctx.cr6.lt) goto loc_8299BFA8;
	// lwz r11,560(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 560);
	// std r11,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// lfd f0,120(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x8299bfa8
	if (ctx.cr6.gt) goto loc_8299BFA8;
	// lfs f0,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f24
	ctx.cr6.compare(ctx.f0.f64, ctx.f24.f64);
	// bgt cr6,0x8299be00
	if (ctx.cr6.gt) goto loc_8299BE00;
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// blt cr6,0x8299be00
	if (ctx.cr6.lt) goto loc_8299BE00;
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
loc_8299BE00:
	// lwz r6,48(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lfs f0,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,60(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f10.f64 = double(temp.f32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// fmuls f3,f11,f0
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f4,f10,f0
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// beq cr6,0x8299be5c
	if (ctx.cr6.eq) goto loc_8299BE5C;
	// lwz r7,52(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8299be5c
	if (ctx.cr6.eq) goto loc_8299BE5C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f5,f28
	ctx.f5.f64 = ctx.f28.f64;
	// stw r26,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// fnmsubs f2,f4,f31,f13
	ctx.f2.f64 = double(float(-(ctx.f4.f64 * ctx.f31.f64 - ctx.f13.f64)));
	// fnmsubs f1,f3,f31,f12
	ctx.f1.f64 = double(float(-(ctx.f3.f64 * ctx.f31.f64 - ctx.f12.f64)));
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8299BE5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8299BE5C:
	// lwz r6,64(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lfs f0,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,72(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,76(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f3,f13,f0
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f4,f12,f0
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8299bec0
	if (ctx.cr6.eq) goto loc_8299BEC0;
	// lwz r7,68(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8299bec0
	if (ctx.cr6.eq) goto loc_8299BEC0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f0,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f5,f28
	ctx.f5.f64 = ctx.f28.f64;
	// stw r26,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// fnmsubs f2,f4,f31,f0
	ctx.f2.f64 = double(float(-(ctx.f4.f64 * ctx.f31.f64 - ctx.f0.f64)));
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// fnmsubs f1,f3,f31,f13
	ctx.f1.f64 = double(float(-(ctx.f3.f64 * ctx.f31.f64 - ctx.f13.f64)));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8299BEC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8299BEC0:
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r6,80(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lfs f13,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f30,f0,f27
	ctx.f30.f64 = double(float(ctx.f0.f64 - ctx.f27.f64));
	// fsubs f29,f13,f26
	ctx.f29.f64 = double(float(ctx.f13.f64 - ctx.f26.f64));
	// lfs f0,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,88(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lfs f12,92(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f3,f13,f0
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f4,f12,f0
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f0,f30,f31
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f31.f64));
	// fmuls f13,f29,f31
	ctx.f13.f64 = double(float(ctx.f29.f64 * ctx.f31.f64));
	// fadds f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f27.f64));
	// fadds f13,f13,f26
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f26.f64));
	// beq cr6,0x8299bf3c
	if (ctx.cr6.eq) goto loc_8299BF3C;
	// lwz r7,84(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8299bf3c
	if (ctx.cr6.eq) goto loc_8299BF3C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f5,f28
	ctx.f5.f64 = ctx.f28.f64;
	// stw r26,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// fnmsubs f2,f4,f31,f13
	ctx.f2.f64 = double(float(-(ctx.f4.f64 * ctx.f31.f64 - ctx.f13.f64)));
	// fnmsubs f1,f3,f31,f0
	ctx.f1.f64 = double(float(-(ctx.f3.f64 * ctx.f31.f64 - ctx.f0.f64)));
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8299BF3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8299BF3C:
	// fmuls f0,f30,f25
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f25.f64));
	// lwz r6,96(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// fmuls f13,f29,f25
	ctx.f13.f64 = double(float(ctx.f29.f64 * ctx.f25.f64));
	// lfs f12,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,104(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lfs f10,108(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f3,f11,f12
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f4,f10,f12
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fadds f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f27.f64));
	// fadds f13,f13,f26
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f26.f64));
	// beq cr6,0x8299bfa8
	if (ctx.cr6.eq) goto loc_8299BFA8;
	// lwz r7,100(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8299bfa8
	if (ctx.cr6.eq) goto loc_8299BFA8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f5,f28
	ctx.f5.f64 = ctx.f28.f64;
	// stw r26,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// fnmsubs f2,f4,f31,f13
	ctx.f2.f64 = double(float(-(ctx.f4.f64 * ctx.f31.f64 - ctx.f13.f64)));
	// fnmsubs f1,f3,f31,f0
	ctx.f1.f64 = double(float(-(ctx.f3.f64 * ctx.f31.f64 - ctx.f0.f64)));
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8299BFA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8299BFA8:
	// lwz r11,80(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 80);
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// addi r22,r22,112
	ctx.r22.s64 = ctx.r22.s64 + 112;
	// cmpw cr6,r19,r11
	ctx.cr6.compare<int32_t>(ctx.r19.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8299bd4c
	if (ctx.cr6.lt) goto loc_8299BD4C;
loc_8299BFBC:
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8299BFD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x82a61784
	ctx.lr = 0x8299BFDC;
	__restfpr_24(ctx, base);
	// b 0x82a4ea34
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8299BFE0"))) PPC_WEAK_FUNC(sub_8299BFE0);
PPC_FUNC_IMPL(__imp__sub_8299BFE0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,112
	ctx.r4.s64 = 112;
	// b 0x82332c38
	sub_82332C38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8299C008"))) PPC_WEAK_FUNC(sub_8299C008);
PPC_FUNC_IMPL(__imp__sub_8299C008) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8299C010"))) PPC_WEAK_FUNC(sub_8299C010);
PPC_FUNC_IMPL(__imp__sub_8299C010) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9d8
	ctx.lr = 0x8299C018;
	__savegprlr_16(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r29,r30,32
	ctx.r29.s64 = ctx.r30.s64 + 32;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8299C03C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8299c070
	if (!ctx.cr6.gt) goto loc_8299C070;
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
loc_8299C050:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8299c14c
	if (ctx.cr6.eq) goto loc_8299C14C;
	// lwz r9,80(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 + 112;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8299c050
	if (ctx.cr6.lt) goto loc_8299C050;
loc_8299C070:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// ld r21,6340(r31)
	ctx.r21.u64 = PPC_LOAD_U64(ctx.r31.u32 + 6340);
	// ld r19,6348(r31)
	ctx.r19.u64 = PPC_LOAD_U64(ctx.r31.u32 + 6348);
	// addi r7,r31,3072
	ctx.r7.s64 = ctx.r31.s64 + 3072;
	// lwz r10,620(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	// addi r27,r31,3880
	ctx.r27.s64 = ctx.r31.s64 + 3880;
	// lwz r9,624(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	// addi r25,r31,4688
	ctx.r25.s64 = ctx.r31.s64 + 4688;
	// lwz r8,628(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// ld r11,6356(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 6356);
	// lwz r22,6312(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6312);
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// lwz r20,6316(r31)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6316);
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// lwz r18,6320(r31)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6320);
	// addi r23,r31,5496
	ctx.r23.s64 = ctx.r31.s64 + 5496;
	// lwz r17,6324(r31)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6324);
	// addi r3,r30,64
	ctx.r3.s64 = ctx.r30.s64 + 64;
	// ld r16,6364(r31)
	ctx.r16.u64 = PPC_LOAD_U64(ctx.r31.u32 + 6364);
	// li r6,8
	ctx.r6.s64 = 8;
	// std r21,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r21.u64);
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,1
	ctx.r4.s64 = 1;
	// std r19,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r19.u64);
	// std r11,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r11.u64);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// stw r24,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r24.u32);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r22,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r22.u32);
	// stw r20,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r20.u32);
	// stw r7,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r7.u32);
	// stw r18,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r18.u32);
	// stw r27,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r27.u32);
	// stw r25,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r25.u32);
	// stw r17,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r17.u32);
	// stw r23,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r23.u32);
	// std r16,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r16.u64);
	// bl 0x82332d50
	ctx.lr = 0x8299C128;
	sub_82332D50(ctx, base);
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// mulli r10,r3,112
	ctx.r10.s64 = ctx.r3.s64 * 112;
	// add. r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8299c144
	if (ctx.cr0.eq) goto loc_8299C144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,112
	ctx.r5.s64 = 112;
	// bl 0x82a4ea80
	ctx.lr = 0x8299C144;
	sub_82A4EA80(ctx, base);
loc_8299C144:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
loc_8299C14C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8299C160;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x82a4ea28
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8299C168"))) PPC_WEAK_FUNC(sub_8299C168);
PPC_FUNC_IMPL(__imp__sub_8299C168) {
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
	// bl 0x829bc540
	ctx.lr = 0x8299C184;
	sub_829BC540(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// addi r11,r11,-19880
	ctx.r11.s64 = ctx.r11.s64 + -19880;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r10,r10,-18872
	ctx.r10.s64 = ctx.r10.s64 + -18872;
	// addi r9,r9,-18820
	ctx.r9.s64 = ctx.r9.s64 + -18820;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// stw r30,1416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1416, ctx.r30.u32);
	// addi r3,r31,1456
	ctx.r3.s64 = ctx.r31.s64 + 1456;
	// stw r11,1412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1412, ctx.r11.u32);
	// stw r30,1420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1420, ctx.r30.u32);
	// stw r30,1424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1424, ctx.r30.u32);
	// stw r30,1428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1428, ctx.r30.u32);
	// stw r30,1408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1408, ctx.r30.u32);
	// stw r11,1436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1436, ctx.r11.u32);
	// stw r30,1440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1440, ctx.r30.u32);
	// stw r30,1444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1444, ctx.r30.u32);
	// stw r30,1448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1448, ctx.r30.u32);
	// stw r30,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r30.u32);
	// stw r30,1432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1432, ctx.r30.u32);
	// bl 0x8297b320
	ctx.lr = 0x8299C1E8;
	sub_8297B320(ctx, base);
	// addi r3,r31,2264
	ctx.r3.s64 = ctx.r31.s64 + 2264;
	// bl 0x8297b320
	ctx.lr = 0x8299C1F0;
	sub_8297B320(ctx, base);
	// addi r3,r31,3072
	ctx.r3.s64 = ctx.r31.s64 + 3072;
	// bl 0x8297b320
	ctx.lr = 0x8299C1F8;
	sub_8297B320(ctx, base);
	// addi r3,r31,3880
	ctx.r3.s64 = ctx.r31.s64 + 3880;
	// bl 0x8297b320
	ctx.lr = 0x8299C200;
	sub_8297B320(ctx, base);
	// addi r3,r31,4688
	ctx.r3.s64 = ctx.r31.s64 + 4688;
	// bl 0x8297b320
	ctx.lr = 0x8299C208;
	sub_8297B320(ctx, base);
	// addi r3,r31,5496
	ctx.r3.s64 = ctx.r31.s64 + 5496;
	// bl 0x8297b320
	ctx.lr = 0x8299C210;
	sub_8297B320(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stw r30,6304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6304, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,6308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6308, ctx.r30.u32);
	// stw r30,6312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6312, ctx.r30.u32);
	// stw r30,6316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6316, ctx.r30.u32);
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,6320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6320, ctx.r30.u32);
	// stfs f0,6328(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6328, temp.u32);
	// stw r30,6324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6324, ctx.r30.u32);
	// stfs f0,6332(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6332, temp.u32);
	// stfs f0,6336(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6336, temp.u32);
	// stfs f0,6340(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6340, temp.u32);
	// stfs f0,6344(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6344, temp.u32);
	// stfs f0,6348(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6348, temp.u32);
	// stfs f0,6352(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6352, temp.u32);
	// stfs f0,6356(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6356, temp.u32);
	// stfs f0,6360(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6360, temp.u32);
	// stfs f0,6364(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6364, temp.u32);
	// stfs f0,6368(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6368, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8299C278"))) PPC_WEAK_FUNC(sub_8299C278);
PPC_FUNC_IMPL(__imp__sub_8299C278) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8299C280;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x829bcbf0
	ctx.lr = 0x8299C294;
	sub_829BCBF0(ctx, base);
	// lfs f0,144(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// li r3,20
	ctx.r3.s64 = 20;
	// stfs f0,6328(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 6328, temp.u32);
	// lfs f13,156(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,160(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,6332(r30)
	PPC_STORE_U64(ctx.r30.u32 + 6332, ctx.r11.u64);
	// lfs f0,176(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,172(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,6340(r30)
	PPC_STORE_U64(ctx.r30.u32 + 6340, ctx.r11.u64);
	// lfs f0,192(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,188(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,6348(r30)
	PPC_STORE_U64(ctx.r30.u32 + 6348, ctx.r11.u64);
	// lfs f0,208(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,204(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,6356(r30)
	PPC_STORE_U64(ctx.r30.u32 + 6356, ctx.r11.u64);
	// lfs f0,224(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,220(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,6364(r30)
	PPC_STORE_U64(ctx.r30.u32 + 6364, ctx.r11.u64);
	// bl 0x82333900
	ctx.lr = 0x8299C31C;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8299c354
	if (ctx.cr0.eq) goto loc_8299C354;
	// lwz r11,152(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 152);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r10,-18796
	ctx.r10.s64 = ctx.r10.s64 + -18796;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// b 0x8299c358
	goto loc_8299C358;
loc_8299C354:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8299C358:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8248c5f8
	ctx.lr = 0x8299C360;
	sub_8248C5F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8299C368"))) PPC_WEAK_FUNC(sub_8299C368);
PPC_FUNC_IMPL(__imp__sub_8299C368) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f4
	ctx.lr = 0x8299C370;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x829bcd88
	ctx.lr = 0x8299C384;
	sub_829BCD88(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,7312
	ctx.r3.s64 = ctx.r11.s64 + 7312;
	// bl 0x82816528
	ctx.lr = 0x8299C390;
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
	ctx.lr = 0x8299C3A4;
	sub_82846E98(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// addi r5,r31,6304
	ctx.r5.s64 = ctx.r31.s64 + 6304;
	// lwz r8,152(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 152);
	// addi r4,r31,1456
	ctx.r4.s64 = ctx.r31.s64 + 1456;
	// lwz r7,140(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,136(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// bl 0x8299c718
	ctx.lr = 0x8299C3C4;
	sub_8299C718(ctx, base);
	// addi r5,r31,6308
	ctx.r5.s64 = ctx.r31.s64 + 6308;
	// addi r4,r31,2264
	ctx.r4.s64 = ctx.r31.s64 + 2264;
	// lwz r8,152(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 152);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,152(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// lwz r6,148(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// bl 0x8299c718
	ctx.lr = 0x8299C3E0;
	sub_8299C718(ctx, base);
	// addi r5,r31,6312
	ctx.r5.s64 = ctx.r31.s64 + 6312;
	// addi r4,r31,3072
	ctx.r4.s64 = ctx.r31.s64 + 3072;
	// lwz r8,152(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 152);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,168(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// lwz r6,164(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// bl 0x8299c718
	ctx.lr = 0x8299C3FC;
	sub_8299C718(ctx, base);
	// addi r5,r31,6316
	ctx.r5.s64 = ctx.r31.s64 + 6316;
	// addi r4,r31,3880
	ctx.r4.s64 = ctx.r31.s64 + 3880;
	// lwz r8,152(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 152);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,184(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// lwz r6,180(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// bl 0x8299c718
	ctx.lr = 0x8299C418;
	sub_8299C718(ctx, base);
	// addi r5,r31,6320
	ctx.r5.s64 = ctx.r31.s64 + 6320;
	// addi r4,r31,4688
	ctx.r4.s64 = ctx.r31.s64 + 4688;
	// lwz r8,152(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 152);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,200(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 200);
	// lwz r6,196(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 196);
	// bl 0x8299c718
	ctx.lr = 0x8299C434;
	sub_8299C718(ctx, base);
	// addi r5,r31,6324
	ctx.r5.s64 = ctx.r31.s64 + 6324;
	// addi r4,r31,5496
	ctx.r4.s64 = ctx.r31.s64 + 5496;
	// lwz r8,152(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 152);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,216(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 216);
	// lwz r6,212(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	// bl 0x8299c718
	ctx.lr = 0x8299C450;
	sub_8299C718(ctx, base);
	// lwz r11,232(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	// li r25,0
	ctx.r25.s64 = 0;
	// li r24,-1
	ctx.r24.s64 = -1;
	// lis r26,-31949
	ctx.r26.s64 = -2093809664;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8299c524
	if (!ctx.cr6.gt) goto loc_8299C524;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
loc_8299C470:
	// lwz r11,240(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	// add r10,r28,r23
	ctx.r10.u64 = ctx.r28.u64 + ctx.r23.u64;
	// lwzx r5,r10,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8299c510
	if (ctx.cr6.eq) goto loc_8299C510;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x8297cbf0
	ctx.lr = 0x8299C4A0;
	sub_8297CBF0(ctx, base);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8299c4d0
	if (ctx.cr6.eq) goto loc_8299C4D0;
	// bl 0x8286e788
	ctx.lr = 0x8299C4B0;
	sub_8286E788(ctx, base);
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
	ctx.lr = 0x8299C4C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8299c4d4
	if (!ctx.cr0.eq) goto loc_8299C4D4;
loc_8299C4D0:
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_8299C4D4:
	// cmplwi r29,0
	ctx.cr0.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq 0x8299c510
	if (ctx.cr0.eq) goto loc_8299C510;
	// addi r3,r31,1408
	ctx.r3.s64 = ctx.r31.s64 + 1408;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82332d50
	ctx.lr = 0x8299C4F0;
	sub_82332D50(ctx, base);
	// lwz r11,1420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1420);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8299c504
	if (ctx.cr0.eq) goto loc_8299C504;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
loc_8299C504:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8299b740
	ctx.lr = 0x8299C510;
	sub_8299B740(ctx, base);
loc_8299C510:
	// lwz r11,232(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8299c470
	if (ctx.cr6.lt) goto loc_8299C470;
loc_8299C524:
	// lwz r11,1424(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1424);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8299c5b4
	if (!ctx.cr6.eq) goto loc_8299C5B4;
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// lwz r29,1384(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1384);
	// bl 0x8286e788
	ctx.lr = 0x8299C53C;
	sub_8286E788(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829735e8
	ctx.lr = 0x8299C548;
	sub_829735E8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x8299c574
	if (ctx.cr0.eq) goto loc_8299C574;
	// bl 0x8286e788
	ctx.lr = 0x8299C554;
	sub_8286E788(ctx, base);
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
	ctx.lr = 0x8299C56C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8299c578
	if (!ctx.cr0.eq) goto loc_8299C578;
loc_8299C574:
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_8299C578:
	// cmplwi r29,0
	ctx.cr0.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq 0x8299c5b4
	if (ctx.cr0.eq) goto loc_8299C5B4;
	// addi r3,r31,1408
	ctx.r3.s64 = ctx.r31.s64 + 1408;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82332d50
	ctx.lr = 0x8299C594;
	sub_82332D50(ctx, base);
	// lwz r11,1420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1420);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8299c5a8
	if (ctx.cr0.eq) goto loc_8299C5A8;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
loc_8299C5A8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8299b740
	ctx.lr = 0x8299C5B4;
	sub_8299B740(ctx, base);
loc_8299C5B4:
	// lwz r11,236(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8299c67c
	if (!ctx.cr6.gt) goto loc_8299C67C;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
loc_8299C5C8:
	// lwz r11,244(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwzx r5,r11,r23
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r23.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8299c668
	if (ctx.cr6.eq) goto loc_8299C668;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x8297cbf0
	ctx.lr = 0x8299C5F8;
	sub_8297CBF0(ctx, base);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8299c628
	if (ctx.cr6.eq) goto loc_8299C628;
	// bl 0x8286e920
	ctx.lr = 0x8299C608;
	sub_8286E920(ctx, base);
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
	ctx.lr = 0x8299C620;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8299c62c
	if (!ctx.cr0.eq) goto loc_8299C62C;
loc_8299C628:
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_8299C62C:
	// cmplwi r29,0
	ctx.cr0.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq 0x8299c668
	if (ctx.cr0.eq) goto loc_8299C668;
	// addi r3,r31,1432
	ctx.r3.s64 = ctx.r31.s64 + 1432;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82332d50
	ctx.lr = 0x8299C648;
	sub_82332D50(ctx, base);
	// lwz r11,1444(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1444);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8299c65c
	if (ctx.cr0.eq) goto loc_8299C65C;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
loc_8299C65C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8299c010
	ctx.lr = 0x8299C668;
	sub_8299C010(ctx, base);
loc_8299C668:
	// lwz r11,236(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8299c5c8
	if (ctx.cr6.lt) goto loc_8299C5C8;
loc_8299C67C:
	// lwz r11,1448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1448);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8299c70c
	if (!ctx.cr6.eq) goto loc_8299C70C;
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// lwz r30,1384(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1384);
	// bl 0x8286e920
	ctx.lr = 0x8299C694;
	sub_8286E920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829735e8
	ctx.lr = 0x8299C6A0;
	sub_829735E8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8299c6cc
	if (ctx.cr0.eq) goto loc_8299C6CC;
	// bl 0x8286e920
	ctx.lr = 0x8299C6AC;
	sub_8286E920(ctx, base);
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
	ctx.lr = 0x8299C6C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8299c6d0
	if (!ctx.cr0.eq) goto loc_8299C6D0;
loc_8299C6CC:
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_8299C6D0:
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x8299c70c
	if (ctx.cr0.eq) goto loc_8299C70C;
	// addi r3,r31,1432
	ctx.r3.s64 = ctx.r31.s64 + 1432;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82332d50
	ctx.lr = 0x8299C6EC;
	sub_82332D50(ctx, base);
	// lwz r11,1444(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1444);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8299c700
	if (ctx.cr0.eq) goto loc_8299C700;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
loc_8299C700:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8299c010
	ctx.lr = 0x8299C70C;
	sub_8299C010(ctx, base);
loc_8299C70C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8299C718"))) PPC_WEAK_FUNC(sub_8299C718);
PPC_FUNC_IMPL(__imp__sub_8299C718) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x8299C720;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r27,-31949
	ctx.r27.s64 = -2093809664;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x824091a0
	ctx.lr = 0x8299C760;
	sub_824091A0(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8299c794
	if (ctx.cr6.eq) goto loc_8299C794;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8297b368
	ctx.lr = 0x8299C774;
	sub_8297B368(ctx, base);
	// stw r25,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x825b7c80
	ctx.lr = 0x8299C794;
	sub_825B7C80(ctx, base);
loc_8299C794:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8299C7A0"))) PPC_WEAK_FUNC(sub_8299C7A0);
PPC_FUNC_IMPL(__imp__sub_8299C7A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x8299C7A8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r26,-31949
	ctx.r26.s64 = -2093809664;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,1424(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1424);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8299c880
	if (!ctx.cr6.gt) goto loc_8299C880;
	// li r28,0
	ctx.r28.s64 = 0;
loc_8299C7C8:
	// lwz r11,1420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1420);
	// lwzx r29,r28,r11
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// addi r30,r29,32
	ctx.r30.s64 = ctx.r29.s64 + 32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8299C7E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,80(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8299c858
	if (!ctx.cr6.gt) goto loc_8299C858;
	// lwz r8,76(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	// addi r9,r8,4
	ctx.r9.s64 = ctx.r8.s64 + 4;
loc_8299C800:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r7,r31
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8299c820
	if (ctx.cr6.eq) goto loc_8299C820;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,72
	ctx.r9.s64 = ctx.r9.s64 + 72;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8299c800
	if (ctx.cr6.lt) goto loc_8299C800;
	// b 0x8299c858
	goto loc_8299C858;
loc_8299C820:
	// lwz r10,13024(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// mulli r9,r11,6
	ctx.r9.s64 = ctx.r11.s64 * 6;
	// lwz r7,620(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	// lwz r11,76(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// lwz r11,1444(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1444);
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// lwz r10,624(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r10,628(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
loc_8299C858:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8299C86C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1424(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1424);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8299c7c8
	if (ctx.cr6.lt) goto loc_8299C7C8;
loc_8299C880:
	// lwz r11,1448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1448);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8299c94c
	if (!ctx.cr6.gt) goto loc_8299C94C;
	// li r28,0
	ctx.r28.s64 = 0;
loc_8299C894:
	// lwz r11,1444(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1444);
	// lwzx r29,r28,r11
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// addi r30,r29,32
	ctx.r30.s64 = ctx.r29.s64 + 32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8299C8B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,80(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8299c924
	if (!ctx.cr6.gt) goto loc_8299C924;
	// lwz r8,76(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_8299C8CC:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r7,r31
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8299c8ec
	if (ctx.cr6.eq) goto loc_8299C8EC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,112
	ctx.r9.s64 = ctx.r9.s64 + 112;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8299c8cc
	if (ctx.cr6.lt) goto loc_8299C8CC;
	// b 0x8299c924
	goto loc_8299C924;
loc_8299C8EC:
	// lwz r10,13024(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// mulli r9,r11,112
	ctx.r9.s64 = ctx.r11.s64 * 112;
	// lwz r7,620(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	// lwz r11,76(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// lwz r11,1444(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1444);
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// lwz r10,624(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,628(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_8299C924:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8299C938;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1448);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8299c894
	if (ctx.cr6.lt) goto loc_8299C894;
loc_8299C94C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8299C958"))) PPC_WEAK_FUNC(sub_8299C958);
PPC_FUNC_IMPL(__imp__sub_8299C958) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f0
	ctx.lr = 0x8299C960;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x829bd978
	ctx.lr = 0x8299C96C;
	sub_829BD978(ctx, base);
	// lwz r11,1424(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1424);
	// li r22,0
	ctx.r22.s64 = 0;
	// mr r23,r22
	ctx.r23.u64 = ctx.r22.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8299ca58
	if (!ctx.cr6.gt) goto loc_8299CA58;
	// mr r24,r22
	ctx.r24.u64 = ctx.r22.u64;
loc_8299C984:
	// lwz r11,1420(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1420);
	// lwzx r31,r24,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r11.u32);
	// addi r28,r31,32
	ctx.r28.s64 = ctx.r31.s64 + 32;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8299C9A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8299ca30
	if (!ctx.cr6.gt) goto loc_8299CA30;
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_8299C9BC:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r25
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x8299c9dc
	if (ctx.cr6.eq) goto loc_8299C9DC;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r10,r10,72
	ctx.r10.s64 = ctx.r10.s64 + 72;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8299c9bc
	if (ctx.cr6.lt) goto loc_8299C9BC;
	// b 0x8299ca30
	goto loc_8299CA30;
loc_8299C9DC:
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// addi r26,r31,64
	ctx.r26.s64 = ctx.r31.s64 + 64;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8299ca18
	if (!ctx.cr6.lt) goto loc_8299CA18;
	// mulli r31,r30,72
	ctx.r31.s64 = ctx.r30.s64 * 72;
	// subf r27,r30,r11
	ctx.r27.s64 = ctx.r11.s64 - ctx.r30.s64;
loc_8299C9F4:
	// lwz r29,12(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// lwzx r3,r29,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8299ca0c
	if (ctx.cr6.eq) goto loc_8299CA0C;
	// bl 0x82332db8
	ctx.lr = 0x8299CA08;
	sub_82332DB8(ctx, base);
	// stwx r22,r29,r31
	PPC_STORE_U32(ctx.r29.u32 + ctx.r31.u32, ctx.r22.u32);
loc_8299CA0C:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r31,r31,72
	ctx.r31.s64 = ctx.r31.s64 + 72;
	// bne 0x8299c9f4
	if (!ctx.cr0.eq) goto loc_8299C9F4;
loc_8299CA18:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82332ca8
	ctx.lr = 0x8299CA30;
	sub_82332CA8(ctx, base);
loc_8299CA30:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8299CA44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1424(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1424);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8299c984
	if (ctx.cr6.lt) goto loc_8299C984;
loc_8299CA58:
	// lwz r11,1448(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1448);
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8299cafc
	if (!ctx.cr6.gt) goto loc_8299CAFC;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
loc_8299CA6C:
	// lwz r11,1444(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1444);
	// lwzx r30,r29,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// addi r31,r30,32
	ctx.r31.s64 = ctx.r30.s64 + 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8299CA8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8299cad4
	if (!ctx.cr6.gt) goto loc_8299CAD4;
	// lwz r10,76(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
loc_8299CAA0:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r25
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x8299cac0
	if (ctx.cr6.eq) goto loc_8299CAC0;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r10,r10,112
	ctx.r10.s64 = ctx.r10.s64 + 112;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8299caa0
	if (ctx.cr6.lt) goto loc_8299CAA0;
	// b 0x8299cad4
	goto loc_8299CAD4;
loc_8299CAC0:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r30,64
	ctx.r3.s64 = ctx.r30.s64 + 64;
	// bl 0x82332ca8
	ctx.lr = 0x8299CAD4;
	sub_82332CA8(ctx, base);
loc_8299CAD4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8299CAE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1448(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1448);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8299ca6c
	if (ctx.cr6.lt) goto loc_8299CA6C;
loc_8299CAFC:
	// lwz r11,1428(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1428);
	// addi r3,r25,1408
	ctx.r3.s64 = ctx.r25.s64 + 1408;
	// stw r22,1424(r25)
	PPC_STORE_U32(ctx.r25.u32 + 1424, ctx.r22.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8299cb20
	if (ctx.cr6.eq) goto loc_8299CB20;
	// stw r22,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r22.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82332c38
	ctx.lr = 0x8299CB20;
	sub_82332C38(ctx, base);
loc_8299CB20:
	// lwz r11,1452(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1452);
	// addi r3,r25,1432
	ctx.r3.s64 = ctx.r25.s64 + 1432;
	// stw r22,1448(r25)
	PPC_STORE_U32(ctx.r25.u32 + 1448, ctx.r22.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8299cb44
	if (ctx.cr6.eq) goto loc_8299CB44;
	// stw r22,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r22.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82332c38
	ctx.lr = 0x8299CB44;
	sub_82332C38(ctx, base);
loc_8299CB44:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8299CB50"))) PPC_WEAK_FUNC(sub_8299CB50);
PPC_FUNC_IMPL(__imp__sub_8299CB50) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-6760
	ctx.r10.s64 = -443023360;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// ori r10,r10,11236
	ctx.r10.u64 = ctx.r10.u64 | 11236;
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8299cb7c
	if (!ctx.cr6.eq) goto loc_8299CB7C;
	// lis r9,-31944
	ctx.r9.s64 = -2093481984;
	// lwz r10,19320(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19320);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,19320(r9)
	PPC_STORE_U32(ctx.r9.u32 + 19320, ctx.r10.u32);
loc_8299CB7C:
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x8299cb90
	sub_8299CB90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8299CB90"))) PPC_WEAK_FUNC(sub_8299CB90);
PPC_FUNC_IMPL(__imp__sub_8299CB90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x8299CB98;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31943
	ctx.r31.s64 = -2093416448;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,-27100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27100);
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// lis r29,-31943
	ctx.r29.s64 = -2093416448;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8299cc10
	if (!ctx.cr0.eq) goto loc_8299CC10;
	// lis r30,-31944
	ctx.r30.s64 = -2093481984;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,-27100(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27100, ctx.r11.u32);
	// lwz r3,19324(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 19324);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8299cc08
	if (!ctx.cr6.eq) goto loc_8299CC08;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// addi r4,r11,-24392
	ctx.r4.s64 = ctx.r11.s64 + -24392;
	// addi r3,r10,-24812
	ctx.r3.s64 = ctx.r10.s64 + -24812;
	// bl 0x82a4c7d8
	ctx.lr = 0x8299CBF0;
	sub_82A4C7D8(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82a4ca90
	ctx.lr = 0x8299CBF8;
	sub_82A4CA90(ctx, base);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bl 0x82816528
	ctx.lr = 0x8299CC00;
	sub_82816528(ctx, base);
	// lwz r11,-27100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27100);
	// stw r3,19324(r30)
	PPC_STORE_U32(ctx.r30.u32 + 19324, ctx.r3.u32);
loc_8299CC08:
	// stw r3,-27104(r29)
	PPC_STORE_U32(ctx.r29.u32 + -27104, ctx.r3.u32);
	// b 0x8299cc14
	goto loc_8299CC14;
loc_8299CC10:
	// lwz r3,-27104(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27104);
loc_8299CC14:
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r10,20308
	ctx.r10.s64 = ctx.r10.s64 + 20308;
	// bne 0x8299cc38
	if (!ctx.cr0.eq) goto loc_8299CC38;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// addi r9,r9,14428
	ctx.r9.s64 = ctx.r9.s64 + 14428;
	// stw r11,-27100(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27100, ctx.r11.u32);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_8299CC38:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// li r30,4
	ctx.r30.s64 = 4;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x828552a0
	ctx.lr = 0x8299CC68;
	sub_828552A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8299cc80
	if (ctx.cr0.eq) goto loc_8299CC80;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// b 0x8299ccb4
	goto loc_8299CCB4;
loc_8299CC80:
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x828553e8
	ctx.lr = 0x8299CC94;
	sub_828553E8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r28,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r28.u32);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
loc_8299CCB4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8299CCC0"))) PPC_WEAK_FUNC(sub_8299CCC0);
PPC_FUNC_IMPL(__imp__sub_8299CCC0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8299b6f0
	sub_8299B6F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8299CCC8"))) PPC_WEAK_FUNC(sub_8299CCC8);
PPC_FUNC_IMPL(__imp__sub_8299CCC8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8299b360
	sub_8299B360(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8299CCD0"))) PPC_WEAK_FUNC(sub_8299CCD0);
PPC_FUNC_IMPL(__imp__sub_8299CCD0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x8299b6f0
	sub_8299B6F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8299CCD8"))) PPC_WEAK_FUNC(sub_8299CCD8);
PPC_FUNC_IMPL(__imp__sub_8299CCD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,16(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lwz r11,12(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lwz r11,20(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// lwz r11,24(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// lwz r11,28(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// lfs f0,32(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lfs f0,36(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// lfs f0,40(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// lfs f0,44(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r10.u32);
	// lfs f13,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f13,60(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f13,64(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8299CD48"))) PPC_WEAK_FUNC(sub_8299CD48);
PPC_FUNC_IMPL(__imp__sub_8299CD48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8299cd5c
	if (!ctx.cr6.eq) goto loc_8299CD5C;
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
loc_8299CD5C:
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8299cdc0
	if (ctx.cr6.eq) goto loc_8299CDC0;
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8299cdc0
	if (ctx.cr6.eq) goto loc_8299CDC0;
	// lfs f0,56(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// fadds f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// lfs f12,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f11.f64 = double(temp.f32);
	// stfs f13,56(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// lfs f0,908(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// fsubs f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// ble cr6,0x8299cdc0
	if (!ctx.cr6.gt) goto loc_8299CDC0;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// lfs f0,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
loc_8299CDC0:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f12,48(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lfd f13,16376(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16376);
	// fsel f13,f12,f12,f13
	ctx.f13.f64 = ctx.f12.f64 >= 0.0 ? ctx.f12.f64 : ctx.f13.f64;
	// lwz r11,13024(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13024);
	// lfd f0,16368(r9)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + 16368);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// fsub f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 - ctx.f0.f64;
	// lwz r11,1444(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1444);
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 15;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// fsel f0,f12,f0,f13
	ctx.f0.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfsx f0,r11,r3
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8299CE08"))) PPC_WEAK_FUNC(sub_8299CE08);
PPC_FUNC_IMPL(__imp__sub_8299CE08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8299CE10;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r9,-31961
	ctx.r9.s64 = -2094596096;
	// ori r11,r11,36012
	ctx.r11.u64 = ctx.r11.u64 | 36012;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,13024(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13024);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r7,-24776(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + -24776);
	// lwz r8,76(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// lwzx r6,r8,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x8299ce50
	if (!ctx.cr6.eq) goto loc_8299CE50;
	// lwz r7,1996(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1996);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8299cf0c
	if (ctx.cr6.eq) goto loc_8299CF0C;
loc_8299CE50:
	// lis r7,2
	ctx.r7.s64 = 131072;
	// lwz r10,76(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// lwz r6,68(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// ori r7,r7,36416
	ctx.r7.u64 = ctx.r7.u64 | 36416;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r10,r10,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// stw r11,-24776(r9)
	PPC_STORE_U32(ctx.r9.u32 + -24776, ctx.r11.u32);
	// lwz r29,620(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 620);
	// lwz r31,600(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 600);
	// beq cr6,0x8299ceb8
	if (ctx.cr6.eq) goto loc_8299CEB8;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// ori r9,r11,36008
	ctx.r9.u64 = ctx.r11.u64 | 36008;
	// addi r3,r10,-13880
	ctx.r3.s64 = ctx.r10.s64 + -13880;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r11,-13880(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -13880);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwzx r10,r8,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// addi r10,r10,15
	ctx.r10.s64 = ctx.r10.s64 + 15;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// lfsx f1,r10,r30
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8299CEB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8299CEB8:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8299cf0c
	if (ctx.cr6.eq) goto loc_8299CF0C;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r11.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8299CEF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8299CF0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8299CF0C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8299CF18"))) PPC_WEAK_FUNC(sub_8299CF18);
PPC_FUNC_IMPL(__imp__sub_8299CF18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8299CF20;
	__savegprlr_29(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-64(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// lwz r8,-64(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -64);
	// stfs f0,-56(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -56, temp.u32);
	// lwz r5,-56(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -56);
	// stfs f0,-60(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -60, temp.u32);
	// lwz r7,-60(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -60);
	// stfs f0,-44(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -44, temp.u32);
	// lwz r10,-44(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -44);
	// stfs f0,-40(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -40, temp.u32);
	// lwz r9,-40(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -40);
	// stfs f0,-64(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// lwz r4,-64(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + -64);
	// stfs f0,-56(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -56, temp.u32);
	// lwz r30,-56(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + -56);
	// lwz r29,16(r6)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// stfs f0,-60(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -60, temp.u32);
	// stfs f0,-48(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -48, temp.u32);
	// lwz r31,-60(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + -60);
	// stw r29,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r29.u32);
	// lwz r29,12(r6)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// lwz r6,8(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lwz r29,-48(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + -48);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stw r6,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stw r29,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r29.u32);
	// stfs f0,88(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// stw r10,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r10.u32);
	// stfs f0,92(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// stw r9,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r9.u32);
	// stfs f0,108(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// stw r8,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r8.u32);
	// stfs f0,112(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// stw r7,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r7.u32);
	// stw r5,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r5.u32);
	// stw r4,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r4.u32);
	// stw r31,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r31.u32);
	// stw r30,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r30.u32);
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8299CFF0"))) PPC_WEAK_FUNC(sub_8299CFF0);
PPC_FUNC_IMPL(__imp__sub_8299CFF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8299d06c
	if (ctx.cr6.eq) goto loc_8299D06C;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8299d04c
	if (ctx.cr6.eq) goto loc_8299D04C;
	// lfs f0,40(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// lfs f0,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,40(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8299d030
	if (!ctx.cr6.gt) goto loc_8299D030;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
loc_8299D030:
	// lfs f13,48(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fdivs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f11.f64));
	// fmadds f0,f12,f0,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// b 0x8299d050
	goto loc_8299D050;
loc_8299D04C:
	// lfs f0,52(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
loc_8299D050:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// lfs f0,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8299d06c
	if (!ctx.cr6.lt) goto loc_8299D06C;
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
loc_8299D06C:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lfs f0,56(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r11,1444(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1444);
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// mulli r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 * 20;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stfs f0,88(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 88, temp.u32);
	// lfs f0,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 92, temp.u32);
	// lwz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// stw r10,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r10.u32);
	// lwz r10,68(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// stw r10,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r10.u32);
	// lwz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// stw r10,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8299D0B8"))) PPC_WEAK_FUNC(sub_8299D0B8);
PPC_FUNC_IMPL(__imp__sub_8299D0B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// ori r7,r10,36008
	ctx.r7.u64 = ctx.r10.u64 | 36008;
	// ori r8,r8,36416
	ctx.r8.u64 = ctx.r8.u64 | 36416;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r3,r10,-13880
	ctx.r3.s64 = ctx.r10.s64 + -13880;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r10,-13880(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -13880);
	// lwzx r7,r11,r7
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lwzx r8,r11,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// mulli r11,r7,20
	ctx.r11.s64 = ctx.r7.s64 * 20;
	// lwz r10,96(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// lwz r5,600(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 600);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r6,r11,76
	ctx.r6.s64 = ctx.r11.s64 + 76;
	// lfs f2,92(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,88(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8299D110"))) PPC_WEAK_FUNC(sub_8299D110);
PPC_FUNC_IMPL(__imp__sub_8299D110) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8299D118;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// ori r7,r9,36012
	ctx.r7.u64 = ctx.r9.u64 | 36012;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r8,-24772(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -24772);
	// lwz r9,76(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwzx r11,r9,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8299d154
	if (!ctx.cr6.eq) goto loc_8299D154;
	// lwz r9,1996(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1996);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8299d1a0
	if (ctx.cr6.eq) goto loc_8299D1A0;
loc_8299D154:
	// lis r30,-31944
	ctx.r30.s64 = -2093481984;
	// stw r11,-24772(r10)
	PPC_STORE_U32(ctx.r10.u32 + -24772, ctx.r11.u32);
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// addi r29,r30,-13880
	ctx.r29.s64 = ctx.r30.s64 + -13880;
	// addi r5,r11,-13364
	ctx.r5.s64 = ctx.r11.s64 + -13364;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r9,-13880(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + -13880);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,36(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8299D184;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-13880(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -13880);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8299D1A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8299D1A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8299D1A8"))) PPC_WEAK_FUNC(sub_8299D1A8);
PPC_FUNC_IMPL(__imp__sub_8299D1A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8299D1B0;
	__savegprlr_29(ctx, base);
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// addi r8,r11,-15744
	ctx.r8.s64 = ctx.r11.s64 + -15744;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// lwz r5,16(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// lfs f0,904(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stw r5,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r5.u32);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// lwz r5,12(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// lwz r6,8(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stw r6,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// lwz r29,0(r7)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// stw r29,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r29.u32);
	// lwz r29,4(r7)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r29,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r29.u32);
	// lwz r29,8(r7)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r29,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r29.u32);
	// lwz r7,12(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// stw r7,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r7.u32);
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r7,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r7.u32);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r7,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r7.u32);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r7,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r7.u32);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r10,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r10.u32);
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r10,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r10.u32);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r10,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r10.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r10,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r10.u32);
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// stfs f0,104(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// stfs f0,108(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// stw r10,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r10.u32);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r10,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r10.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r10.u32);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r10,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r10.u32);
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r10,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r10.u32);
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r10,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r10.u32);
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r10,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r10.u32);
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r10,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r10.u32);
	// lwz r10,12(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// stw r10,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r10.u32);
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r10,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r10.u32);
	// lwz r10,4(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stw r10,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r10.u32);
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stw r10,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r10.u32);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r10,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, ctx.r10.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r10.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, ctx.r10.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r10,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, ctx.r10.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 176, ctx.r10.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,180(r3)
	PPC_STORE_U32(ctx.r3.u32 + 180, ctx.r10.u32);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r10,184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 184, ctx.r10.u32);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r10,188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 188, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 192, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 196, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r10.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,204(r3)
	PPC_STORE_U32(ctx.r3.u32 + 204, ctx.r11.u32);
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r11,208(r3)
	PPC_STORE_U32(ctx.r3.u32 + 208, ctx.r11.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r11,212(r3)
	PPC_STORE_U32(ctx.r3.u32 + 212, ctx.r11.u32);
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r11,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r11.u32);
	// lwz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// stw r11,220(r3)
	PPC_STORE_U32(ctx.r3.u32 + 220, ctx.r11.u32);
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8299D370"))) PPC_WEAK_FUNC(sub_8299D370);
PPC_FUNC_IMPL(__imp__sub_8299D370) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r8,-31944
	ctx.r8.s64 = -2093481984;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// ori r6,r9,36008
	ctx.r6.u64 = ctx.r9.u64 | 36008;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// addi r3,r8,-13880
	ctx.r3.s64 = ctx.r8.s64 + -13880;
	// lwz r9,-13880(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13880);
	// lis r7,2
	ctx.r7.s64 = 131072;
	// ori r7,r7,36416
	ctx.r7.u64 = ctx.r7.u64 | 36416;
	// lwz r8,76(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r31,108(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 108);
	// lwzx r11,r8,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// lwzx r8,r8,r7
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// rlwinm r9,r11,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r7,r11,5
	ctx.r7.s64 = ctx.r11.s64 + 5;
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r9,r7,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r5,600(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 600);
	// addi r7,r11,176
	ctx.r7.s64 = ctx.r11.s64 + 176;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x8299D3DC;
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

__attribute__((alias("__imp__sub_8299D3F0"))) PPC_WEAK_FUNC(sub_8299D3F0);
PPC_FUNC_IMPL(__imp__sub_8299D3F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8299d4d4
	if (ctx.cr6.eq) goto loc_8299D4D4;
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8299d4b0
	if (ctx.cr6.eq) goto loc_8299D4B0;
	// lfs f0,104(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// lfs f0,108(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,104(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8299d430
	if (!ctx.cr6.gt) goto loc_8299D430;
	// stfs f0,104(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
loc_8299D430:
	// lfs f12,112(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lfs f13,128(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f11,132(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,116(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// lfs f8,104(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// lfs f10,136(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	ctx.f10.f64 = double(temp.f32);
	// fdivs f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 / ctx.f0.f64));
	// lfs f11,120(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// lfs f9,140(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,124(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f10,f9,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,-16(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// fmuls f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f13,-12(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// fmuls f13,f11,f0
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f13,-8(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f0,-4(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r9.u32);
	// stw r8,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, ctx.r8.u32);
	// stw r7,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r7.u32);
	// stw r10,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r10.u32);
	// b 0x8299d4d4
	goto loc_8299D4D4;
loc_8299D4B0:
	// addi r9,r3,128
	ctx.r9.s64 = ctx.r3.s64 + 128;
	// lwz r10,128(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// lwz r9,132(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// lwz r8,136(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// lwz r7,140(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// stw r10,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r10.u32);
	// stw r9,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r9.u32);
	// stw r8,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r8.u32);
	// stw r7,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, ctx.r7.u32);
loc_8299D4D4:
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8299d5b4
	if (ctx.cr6.eq) goto loc_8299D5B4;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8299d590
	if (ctx.cr6.eq) goto loc_8299D590;
	// lfs f0,48(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// lfs f0,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,48(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8299d510
	if (!ctx.cr6.gt) goto loc_8299D510;
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
loc_8299D510:
	// lfs f12,56(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lfs f13,72(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f11,76(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// lfs f10,80(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// fdivs f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 / ctx.f0.f64));
	// lfs f11,64(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// lfs f10,84(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f10,f10,f9
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,-16(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// fmuls f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f13,-12(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// fmuls f13,f11,f0
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f13,-8(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f0,-4(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// stw r8,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r8.u32);
	// stw r10,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r10.u32);
	// stw r9,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r9.u32);
	// b 0x8299d5b4
	goto loc_8299D5B4;
loc_8299D590:
	// addi r10,r3,72
	ctx.r10.s64 = ctx.r3.s64 + 72;
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// lwz r10,76(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// lwz r9,80(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// lwz r8,84(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// stw r10,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r10.u32);
	// stw r9,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r9.u32);
	// stw r8,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r8.u32);
loc_8299D5B4:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r9,144(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// addi r10,r3,144
	ctx.r10.s64 = ctx.r3.s64 + 144;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r11,1444(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1444);
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r10,r11,5
	ctx.r10.s64 = ctx.r11.s64 + 5;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r8,r10,r3
	ctx.r8.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r7,r11,176
	ctx.r7.s64 = ctx.r11.s64 + 176;
	// stwx r9,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r9.u32);
	// lwz r10,148(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// lwz r10,152(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// lwz r10,156(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// stw r10,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r10.u32);
	// lwz r10,88(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// stw r10,176(r11)
	PPC_STORE_U32(ctx.r11.u32 + 176, ctx.r10.u32);
	// lwz r10,92(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// stw r10,180(r11)
	PPC_STORE_U32(ctx.r11.u32 + 180, ctx.r10.u32);
	// lwz r10,96(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// stw r10,184(r11)
	PPC_STORE_U32(ctx.r11.u32 + 184, ctx.r10.u32);
	// lwz r10,100(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// stw r10,188(r11)
	PPC_STORE_U32(ctx.r11.u32 + 188, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8299D628"))) PPC_WEAK_FUNC(sub_8299D628);
PPC_FUNC_IMPL(__imp__sub_8299D628) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// addi r8,r11,-15760
	ctx.r8.s64 = ctx.r11.s64 + -15760;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// lwz r5,16(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// lfs f0,904(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stw r5,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r5.u32);
	// lwz r9,12(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// lwz r9,8(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// lwz r11,12(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// lwz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8299D6E0"))) PPC_WEAK_FUNC(sub_8299D6E0);
PPC_FUNC_IMPL(__imp__sub_8299D6E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8299D6E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8299d734
	if (ctx.cr6.eq) goto loc_8299D734;
	// lfs f0,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// fadds f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// lfs f12,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,44(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lfs f0,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// ble cr6,0x8299d734
	if (!ctx.cr6.gt) goto loc_8299D734;
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
loc_8299D734:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8299d774
	if (ctx.cr6.eq) goto loc_8299D774;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8299d774
	if (ctx.cr6.eq) goto loc_8299D774;
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r28,1384(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1384);
	// bl 0x8286ea80
	ctx.lr = 0x8299D75C;
	sub_8286EA80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x829735e8
	ctx.lr = 0x8299D768;
	sub_829735E8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8299d774
	if (ctx.cr0.eq) goto loc_8299D774;
	// stw r29,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r29.u32);
loc_8299D774:
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// addi r10,r31,48
	ctx.r10.s64 = ctx.r31.s64 + 48;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r11,1444(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1444);
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r11,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8299D7C0"))) PPC_WEAK_FUNC(sub_8299D7C0);
PPC_FUNC_IMPL(__imp__sub_8299D7C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8299D7C8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r27,-31949
	ctx.r27.s64 = -2093809664;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// ori r10,r10,36416
	ctx.r10.u64 = ctx.r10.u64 | 36416;
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lwz r9,76(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r28,620(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 620);
	// lwz r31,600(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 600);
	// beq cr6,0x8299d848
	if (ctx.cr6.eq) goto loc_8299D848;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8299D82C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8299D844;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
loc_8299D848:
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lwz r9,76(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// ori r10,r10,36008
	ctx.r10.u64 = ctx.r10.u64 | 36008;
	// addi r3,r11,-13880
	ctx.r3.s64 = ctx.r11.s64 + -13880;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r11,-13880(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13880);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,116(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// add r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 + ctx.r30.u64;
	// ldx r7,r10,r30
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r30.u32);
	// ld r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8299D890;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8299D898"))) PPC_WEAK_FUNC(sub_8299D898);
PPC_FUNC_IMPL(__imp__sub_8299D898) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,16(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lwz r11,12(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lfs f0,20(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f0,24(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8299D8D0"))) PPC_WEAK_FUNC(sub_8299D8D0);
PPC_FUNC_IMPL(__imp__sub_8299D8D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r11,r3,128
	ctx.r11.s64 = ctx.r3.s64 + 128;
	// addi r11,r3,72
	ctx.r11.s64 = ctx.r3.s64 + 72;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lwz r11,16(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lwz r11,12(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lwz r11,20(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// lfs f0,24(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lfs f0,28(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lfs f0,32(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lfs f0,36(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// lfs f0,40(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// lfs f0,44(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// lfs f0,48(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// lfs f0,52(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// lfs f0,56(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// lwz r10,60(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 60);
	// stw r10,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r10.u32);
	// lwz r10,64(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 64);
	// stw r10,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r10.u32);
	// lwz r10,68(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 68);
	// stw r10,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r10.u32);
	// lwz r10,72(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 72);
	// stw r10,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r10.u32);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// lfs f0,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// lfs f0,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// lfs f0,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// lfs f0,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// lfs f0,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// lfs f0,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// lfs f0,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,116(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// lfs f0,64(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,120(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// lfs f0,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,124(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 124, temp.u32);
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// stw r11,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// stw r11,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r11.u32);
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// stw r11,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r11.u32);
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// stw r11,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r11.u32);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// stw r11,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r11.u32);
	// lfs f0,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,148(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 148, temp.u32);
	// lfs f0,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,152(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 152, temp.u32);
	// lfs f0,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,156(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 156, temp.u32);
	// lfs f0,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,160(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 160, temp.u32);
	// lfs f0,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,164(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 164, temp.u32);
	// lfs f0,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,168(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 168, temp.u32);
	// lfs f0,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,172(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 172, temp.u32);
	// lfs f0,64(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,176(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 176, temp.u32);
	// lfs f0,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,180(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 180, temp.u32);
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// stw r11,184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 184, ctx.r11.u32);
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// stw r11,188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 188, ctx.r11.u32);
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// stw r11,192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 192, ctx.r11.u32);
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// stw r11,196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 196, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8299DA50"))) PPC_WEAK_FUNC(sub_8299DA50);
PPC_FUNC_IMPL(__imp__sub_8299DA50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x8299DA58;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r9,-31961
	ctx.r9.s64 = -2094596096;
	// ori r11,r11,36012
	ctx.r11.u64 = ctx.r11.u64 | 36012;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r10,13024(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13024);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r7,-24768(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + -24768);
	// lwz r8,76(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// lwzx r6,r8,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x8299da98
	if (!ctx.cr6.eq) goto loc_8299DA98;
	// lwz r8,1996(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1996);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8299dc70
	if (ctx.cr6.eq) goto loc_8299DC70;
loc_8299DA98:
	// lis r7,2
	ctx.r7.s64 = 131072;
	// lwz r10,76(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r6,r7,36416
	ctx.r6.u64 = ctx.r7.u64 | 36416;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwzx r10,r10,r6
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// stw r11,-24768(r9)
	PPC_STORE_U32(ctx.r9.u32 + -24768, ctx.r11.u32);
	// lwz r28,604(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 604);
	// lwz r26,600(r10)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + 600);
	// lwz r31,612(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 612);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r29,624(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 624);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8299DAE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8299DAFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,13304(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13304);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8299dc08
	if (!ctx.cr6.eq) goto loc_8299DC08;
	// lis r26,-31944
	ctx.r26.s64 = -2093481984;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r25,r26,-13880
	ctx.r25.s64 = ctx.r26.s64 + -13880;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,-13880(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -13880);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8299DB38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-13880(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -13880);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8299DB5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8299DB84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8299DBAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-13880(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -13880);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8299DBD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8299DBF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-13880(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -13880);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// b 0x8299dc5c
	goto loc_8299DC5C;
loc_8299DC08:
	// lis r29,-31944
	ctx.r29.s64 = -2093481984;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// addi r26,r29,-13880
	ctx.r26.s64 = ctx.r29.s64 + -13880;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,-13880(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -13880);
	// bne cr6,0x8299dc40
	if (!ctx.cr6.eq) goto loc_8299DC40;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8299DC2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-13880(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -13880);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_8299DC40:
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// li r7,0
	ctx.r7.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8299DC50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-13880(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -13880);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_8299DC5C:
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8299DC70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8299DC70:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8299DC78"))) PPC_WEAK_FUNC(sub_8299DC78);
PPC_FUNC_IMPL(__imp__sub_8299DC78) {
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
	// lfs f0,36(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lfs f13,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f12,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// li r5,36
	ctx.r5.s64 = 36;
	// lfs f11,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f9.f64 = double(temp.f32);
	// lwz r31,13024(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lfs f8,64(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f6.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r3,r11,1700
	ctx.r3.s64 = ctx.r11.s64 + 1700;
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f9,104(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f8,108(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f7,112(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f6,100(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x82a4ea80
	ctx.lr = 0x8299DCEC;
	sub_82A4EA80(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,36
	ctx.r5.s64 = 36;
	// lwz r31,100(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r3,r31,1700
	ctx.r3.s64 = ctx.r31.s64 + 1700;
	// bl 0x82a4ea80
	ctx.lr = 0x8299DD00;
	sub_82A4EA80(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,1696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1696, ctx.r10.u32);
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1736(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1736, temp.u32);
	// stfs f0,1740(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1740, temp.u32);
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

__attribute__((alias("__imp__sub_8299DD30"))) PPC_WEAK_FUNC(sub_8299DD30);
PPC_FUNC_IMPL(__imp__sub_8299DD30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r3,72
	ctx.r10.s64 = ctx.r3.s64 + 72;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r11,1444(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1444);
	// xori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 ^ 1;
	// mulli r11,r10,56
	ctx.r11.s64 = ctx.r10.s64 * 56;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addi r8,r11,128
	ctx.r8.s64 = ctx.r11.s64 + 128;
	// mulli r10,r10,56
	ctx.r10.s64 = ctx.r10.s64 * 56;
	// stw r9,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r9.u32);
	// lfs f0,36(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 92, temp.u32);
	// lfs f0,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 96, temp.u32);
	// lfs f0,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 100, temp.u32);
	// lfs f0,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 104, temp.u32);
	// lfs f0,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 108, temp.u32);
	// lfs f0,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r10,r3
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, temp.u32);
	// lfs f0,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,116(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 116, temp.u32);
	// lfs f0,64(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,120(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 120, temp.u32);
	// lfs f0,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,124(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 124, temp.u32);
	// lwz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// stw r10,128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 128, ctx.r10.u32);
	// lwz r10,76(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// stw r10,132(r11)
	PPC_STORE_U32(ctx.r11.u32 + 132, ctx.r10.u32);
	// lwz r10,80(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// stw r10,136(r11)
	PPC_STORE_U32(ctx.r11.u32 + 136, ctx.r10.u32);
	// lwz r10,84(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// stw r10,140(r11)
	PPC_STORE_U32(ctx.r11.u32 + 140, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8299DDD0"))) PPC_WEAK_FUNC(sub_8299DDD0);
PPC_FUNC_IMPL(__imp__sub_8299DDD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r11,60
	ctx.r3.s64 = ctx.r11.s64 + 60;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8299DDE0"))) PPC_WEAK_FUNC(sub_8299DDE0);
PPC_FUNC_IMPL(__imp__sub_8299DDE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8299de18
	if (ctx.cr6.eq) goto loc_8299DE18;
	// bl 0x8287b8b0
	ctx.lr = 0x8299DE08;
	sub_8287B8B0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8299de18
	if (!ctx.cr6.eq) goto loc_8299DE18;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8299de24
	goto loc_8299DE24;
loc_8299DE18:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82338a88
	ctx.lr = 0x8299DE24;
	sub_82338A88(ctx, base);
loc_8299DE24:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8299DE40"))) PPC_WEAK_FUNC(sub_8299DE40);
PPC_FUNC_IMPL(__imp__sub_8299DE40) {
	PPC_FUNC_PROLOGUE();
	// b 0x8287b8b0
	sub_8287B8B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8299DE48"))) PPC_WEAK_FUNC(sub_8299DE48);
PPC_FUNC_IMPL(__imp__sub_8299DE48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,468
	ctx.r3.s64 = 468;
	// bl 0x82833108
	ctx.lr = 0x8299DE64;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8299de78
	if (ctx.cr0.eq) goto loc_8299DE78;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8299df00
	ctx.lr = 0x8299DE74;
	sub_8299DF00(ctx, base);
	// b 0x8299de7c
	goto loc_8299DE7C;
loc_8299DE78:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8299DE7C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8299DE90"))) PPC_WEAK_FUNC(sub_8299DE90);
PPC_FUNC_IMPL(__imp__sub_8299DE90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8287b8b0
	ctx.lr = 0x8299DEB0;
	sub_8287B8B0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8299dec4
	if (ctx.cr6.eq) goto loc_8299DEC4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82338858
	ctx.lr = 0x8299DEC4;
	sub_82338858(ctx, base);
loc_8299DEC4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8299DEE0"))) PPC_WEAK_FUNC(sub_8299DEE0);
PPC_FUNC_IMPL(__imp__sub_8299DEE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,408(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 408);
	// rlwimi r11,r4,29,2,2
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 29) & 0x20000000) | (ctx.r11.u64 & 0xFFFFFFFFDFFFFFFF);
	// stw r11,408(r3)
	PPC_STORE_U32(ctx.r3.u32 + 408, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8299DEF0"))) PPC_WEAK_FUNC(sub_8299DEF0);
PPC_FUNC_IMPL(__imp__sub_8299DEF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,408(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 408);
	// rlwimi r11,r4,27,4,4
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 27) & 0x8000000) | (ctx.r11.u64 & 0xFFFFFFFFF7FFFFFF);
	// stw r11,408(r3)
	PPC_STORE_U32(ctx.r3.u32 + 408, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8299DF00"))) PPC_WEAK_FUNC(sub_8299DF00);
PPC_FUNC_IMPL(__imp__sub_8299DF00) {
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
	// bl 0x823393a0
	ctx.lr = 0x8299DF20;
	sub_823393A0(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// addi r11,r11,-18784
	ctx.r11.s64 = ctx.r11.s64 + -18784;
	// addi r10,r10,-18516
	ctx.r10.s64 = ctx.r10.s64 + -18516;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lwz r11,396(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 396);
	// stw r11,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r11.u32);
	// lwz r11,400(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 400);
	// stw r11,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r11.u32);
	// lfs f0,404(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 404);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 408);
	// stfs f0,404(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 404, temp.u32);
	// lwz r10,408(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 408);
	// rlwimi r10,r11,0,1,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x7FFFFFFF) | (ctx.r10.u64 & 0xFFFFFFFF80000000);
	// stw r10,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r10.u32);
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,408(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 408);
	// rlwimi r11,r10,0,1,1
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x40000000) | (ctx.r11.u64 & 0xFFFFFFFFBFFFFFFF);
	// stw r11,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,408(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 408);
	// rlwimi r11,r10,0,2,2
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x20000000) | (ctx.r11.u64 & 0xFFFFFFFFDFFFFFFF);
	// stw r11,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,408(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 408);
	// rlwimi r11,r10,0,3,3
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x10000000) | (ctx.r11.u64 & 0xFFFFFFFFEFFFFFFF);
	// stw r11,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,408(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 408);
	// rlwimi r11,r10,0,4,4
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x8000000) | (ctx.r11.u64 & 0xFFFFFFFFF7FFFFFF);
	// stw r11,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r11.u32);
	// lwz r11,412(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 412);
	// stw r11,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r11.u32);
	// lwz r11,416(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 416);
	// stw r11,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r11.u32);
	// lwz r11,420(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 420);
	// stw r11,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r11.u32);
	// lfs f0,424(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 424);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,424(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 424, temp.u32);
	// lfs f0,428(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 428);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,428(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 428, temp.u32);
	// lfs f0,432(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 432);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,432(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 432, temp.u32);
	// lfs f0,436(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 436);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,436(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 436, temp.u32);
	// lwz r11,440(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 440);
	// stw r11,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r11.u32);
	// lwz r11,444(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 444);
	// stw r11,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r11.u32);
	// lwz r11,448(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 448);
	// stw r11,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r11.u32);
	// lwz r11,452(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 452);
	// stw r11,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r11.u32);
	// lwz r11,456(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 456);
	// stw r11,456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 456, ctx.r11.u32);
	// lwz r11,460(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 460);
	// stw r11,460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 460, ctx.r11.u32);
	// lwz r11,464(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 464);
	// stw r11,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8299E030"))) PPC_WEAK_FUNC(sub_8299E030);
PPC_FUNC_IMPL(__imp__sub_8299E030) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r11,r11,-18784
	ctx.r11.s64 = ctx.r11.s64 + -18784;
	// addi r10,r10,-18516
	ctx.r10.s64 = ctx.r10.s64 + -18516;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bl 0x829bcf90
	ctx.lr = 0x8299E068;
	sub_829BCF90(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8299e078
	if (ctx.cr0.eq) goto loc_8299E078;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x8299E078;
	sub_82332DB8(ctx, base);
loc_8299E078:
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

__attribute__((alias("__imp__sub_8299E098"))) PPC_WEAK_FUNC(sub_8299E098);
PPC_FUNC_IMPL(__imp__sub_8299E098) {
	PPC_FUNC_PROLOGUE();
	// b 0x829bd700
	sub_829BD700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8299E0A0"))) PPC_WEAK_FUNC(sub_8299E0A0);
PPC_FUNC_IMPL(__imp__sub_8299E0A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x8299E0A8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// li r3,28
	ctx.r3.s64 = 28;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r29,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r29.u32);
	// lwz r10,408(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 408);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r11,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r11.u32);
	// lwz r11,152(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 152);
	// stw r11,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r11.u32);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwimi r10,r11,29,2,2
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 29) & 0x20000000) | (ctx.r10.u64 & 0xFFFFFFFFDFFFFFFF);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stw r10,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r10.u32);
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// rlwimi r11,r10,28,3,3
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 28) & 0x10000000) | (ctx.r11.u64 & 0xFFFFFFFFEFFFFFFF);
	// stw r11,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r11.u32);
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// stw r11,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r11.u32);
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// stw r11,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r11.u32);
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// stw r11,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r11.u32);
	// lfs f0,32(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,424(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 424, temp.u32);
	// bl 0x82833108
	ctx.lr = 0x8299E11C;
	sub_82833108(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lis r27,-31949
	ctx.r27.s64 = -2093809664;
	// beq 0x8299e184
	if (ctx.cr0.eq) goto loc_8299E184;
	// lwz r11,308(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 308);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8299e13c
	if (ctx.cr6.eq) goto loc_8299E13C;
	// lwz r28,80(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x8299e140
	goto loc_8299E140;
loc_8299E13C:
	// li r28,0
	ctx.r28.s64 = 0;
loc_8299E140:
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r25,4(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82833180
	ctx.lr = 0x8299E150;
	sub_82833180(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stw r28,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r28.u32);
	// lis r10,-8531
	ctx.r10.s64 = -559087616;
	// stw r25,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r25.u32);
	// addi r11,r11,-18216
	ctx.r11.s64 = ctx.r11.s64 + -18216;
	// stw r31,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r31.u32);
	// ori r10,r10,47806
	ctx.r10.u64 = ctx.r10.u64 | 47806;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r10,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r9,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r9.u32);
	// b 0x8299e188
	goto loc_8299E188;
loc_8299E184:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8299E188:
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x8299E194;
	sub_82833A30(ctx, base);
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82333900
	ctx.lr = 0x8299E19C;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8299e1d4
	if (ctx.cr0.eq) goto loc_8299E1D4;
	// lwz r11,152(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 152);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r10,-18464
	ctx.r10.s64 = ctx.r10.s64 + -18464;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// b 0x8299e1d8
	goto loc_8299E1D8;
loc_8299E1D4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8299E1D8:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8248c5f8
	ctx.lr = 0x8299E1E0;
	sub_8248C5F8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8299E1E8"))) PPC_WEAK_FUNC(sub_8299E1E8);
PPC_FUNC_IMPL(__imp__sub_8299E1E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8286b328
	sub_8286B328(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8299E1F0"))) PPC_WEAK_FUNC(sub_8299E1F0);
PPC_FUNC_IMPL(__imp__sub_8299E1F0) {
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
	// lwz r11,416(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 416);
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lwz r10,412(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 412);
	// lfs f13,424(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 424);
	ctx.f13.f64 = double(temp.f32);
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// lwz r9,420(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 420);
	// extsw r6,r10
	ctx.r6.s64 = ctx.r10.s32;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// cmplwi cr6,r9,7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 7, ctx.xer);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// lfs f0,908(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f13,428(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 428, temp.u32);
	// frsp f13,f12
	ctx.f13.f64 = double(float(ctx.f12.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fdivs f12,f0,f11
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f11.f64));
	// stfs f12,432(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 432, temp.u32);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,436(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 436, temp.u32);
	// bgt cr6,0x8299e2b4
	if (ctx.cr6.gt) goto loc_8299E2B4;
	// lis r12,-32242
	ctx.r12.s64 = -2113011712;
	// addi r12,r12,-31232
	ctx.r12.s64 = ctx.r12.s64 + -31232;
	// lbzx r0,r12,r9
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r9.u32);
	// lis r12,-32102
	ctx.r12.s64 = -2103836672;
	// addi r12,r12,-7548
	ctx.r12.s64 = ctx.r12.s64 + -7548;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// nop 
	// bctr 
	switch (ctx.r9.u64) {
	case 0:
		goto loc_8299E284;
	case 1:
		goto loc_8299E284;
	case 2:
		goto loc_8299E290;
	case 3:
		goto loc_8299E290;
	case 4:
		goto loc_8299E298;
	case 5:
		goto loc_8299E298;
	case 6:
		goto loc_8299E2A4;
	case 7:
		goto loc_8299E2A4;
	default:
		__builtin_unreachable();
	}
loc_8299E284:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,444(r3)
	PPC_STORE_U32(ctx.r3.u32 + 444, ctx.r11.u32);
	// b 0x8299e2b0
	goto loc_8299E2B0;
loc_8299E290:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8299e2a8
	goto loc_8299E2A8;
loc_8299E298:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x8299e2ac
	goto loc_8299E2AC;
loc_8299E2A4:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_8299E2A8:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_8299E2AC:
	// stw r10,444(r3)
	PPC_STORE_U32(ctx.r3.u32 + 444, ctx.r10.u32);
loc_8299E2B0:
	// stw r11,440(r3)
	PPC_STORE_U32(ctx.r3.u32 + 440, ctx.r11.u32);
loc_8299E2B4:
	// lwz r11,408(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 408);
	// rlwinm. r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8299e2cc
	if (!ctx.cr0.eq) goto loc_8299E2CC;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r11,r10,31,0,1
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 31) & 0xC0000000) | (ctx.r11.u64 & 0xFFFFFFFF3FFFFFFF);
	// stw r11,408(r3)
	PPC_STORE_U32(ctx.r3.u32 + 408, ctx.r11.u32);
loc_8299E2CC:
	// bl 0x829bdba0
	ctx.lr = 0x8299E2D0;
	sub_829BDBA0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8299E2E0"))) PPC_WEAK_FUNC(sub_8299E2E0);
PPC_FUNC_IMPL(__imp__sub_8299E2E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,408(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 408);
	// clrlwi r11,r11,2
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// stw r11,408(r3)
	PPC_STORE_U32(ctx.r3.u32 + 408, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8299E2F0"))) PPC_WEAK_FUNC(sub_8299E2F0);
PPC_FUNC_IMPL(__imp__sub_8299E2F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,408(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 408);
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// stw r11,408(r3)
	PPC_STORE_U32(ctx.r3.u32 + 408, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8299E300"))) PPC_WEAK_FUNC(sub_8299E300);
PPC_FUNC_IMPL(__imp__sub_8299E300) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r9,408(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 408);
	// lwz r11,420(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 420);
	// oris r9,r9,16384
	ctx.r9.u64 = ctx.r9.u64 | 1073741824;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// stw r9,408(r3)
	PPC_STORE_U32(ctx.r3.u32 + 408, ctx.r9.u32);
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,404(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 404, temp.u32);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lis r12,-32242
	ctx.r12.s64 = -2113011712;
	// addi r12,r12,-31696
	ctx.r12.s64 = ctx.r12.s64 + -31696;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// lis r12,-32102
	ctx.r12.s64 = -2103836672;
	// addi r12,r12,-7348
	ctx.r12.s64 = ctx.r12.s64 + -7348;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8299E34C;
	case 1:
		goto loc_8299E34C;
	case 2:
		goto loc_8299E358;
	case 3:
		goto loc_8299E358;
	case 4:
		goto loc_8299E360;
	case 5:
		goto loc_8299E360;
	case 6:
		goto loc_8299E378;
	case 7:
		goto loc_8299E378;
	default:
		__builtin_unreachable();
	}
loc_8299E34C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,440(r3)
	PPC_STORE_U32(ctx.r3.u32 + 440, ctx.r11.u32);
	// b 0x8299e38c
	goto loc_8299E38C;
loc_8299E358:
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x8299e380
	goto loc_8299E380;
loc_8299E360:
	// lwz r11,416(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 416);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r10,444(r3)
	PPC_STORE_U32(ctx.r3.u32 + 444, ctx.r10.u32);
	// stw r11,440(r3)
	PPC_STORE_U32(ctx.r3.u32 + 440, ctx.r11.u32);
	// blr 
	return;
loc_8299E378:
	// lwz r10,416(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 416);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_8299E380:
	// lwz r11,412(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 412);
	// stw r10,440(r3)
	PPC_STORE_U32(ctx.r3.u32 + 440, ctx.r10.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_8299E38C:
	// stw r11,444(r3)
	PPC_STORE_U32(ctx.r3.u32 + 444, ctx.r11.u32);
	// blr 
	return;
	// .long 0x0
}

__attribute__((alias("__imp__sub_8299E398"))) PPC_WEAK_FUNC(sub_8299E398);
PPC_FUNC_IMPL(__imp__sub_8299E398) {
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
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// lwz r10,408(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 408);
	// rlwinm. r11,r10,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8299e67c
	if (!ctx.cr0.eq) goto loc_8299E67C;
	// rlwinm. r11,r10,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8299e67c
	if (!ctx.cr0.eq) goto loc_8299E67C;
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lwz r11,504(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 504);
	// lfs f30,904(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f30.f64 = double(temp.f32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8299e3f4
	if (ctx.cr6.eq) goto loc_8299E3F4;
	// rlwinm. r11,r10,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8299e3f4
	if (!ctx.cr0.eq) goto loc_8299E3F4;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
loc_8299E3F4:
	// lfs f0,404(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// lfs f13,428(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,404(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 404, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8299e67c
	if (ctx.cr6.lt) goto loc_8299E67C;
	// lwz r11,420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x8299e678
	if (ctx.cr6.gt) goto loc_8299E678;
	// lis r12,-32242
	ctx.r12.s64 = -2113011712;
	// addi r12,r12,-31568
	ctx.r12.s64 = ctx.r12.s64 + -31568;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32102
	ctx.r12.s64 = -2103836672;
	// addi r12,r12,-7104
	ctx.r12.s64 = ctx.r12.s64 + -7104;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8299E440;
	case 1:
		goto loc_8299E490;
	case 2:
		goto loc_8299E4C8;
	case 3:
		goto loc_8299E514;
	case 4:
		goto loc_8299E538;
	case 5:
		goto loc_8299E578;
	case 6:
		goto loc_8299E5A8;
	case 7:
		goto loc_8299E5D4;
	case 8:
		goto loc_8299E5F0;
	default:
		__builtin_unreachable();
	}
loc_8299E440:
	// lwz r11,444(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 444);
	// lwz r9,412(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8299e478
	if (ctx.cr6.lt) goto loc_8299E478;
	// lwz r11,440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// lwz r9,416(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8299e480
	if (ctx.cr6.lt) goto loc_8299E480;
loc_8299E468:
	// rlwinm. r11,r10,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8299e678
	if (ctx.cr0.eq) goto loc_8299E678;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r11.u32);
loc_8299E478:
	// stw r11,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r11.u32);
	// b 0x8299e678
	goto loc_8299E678;
loc_8299E480:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r11.u32);
	// stw r10,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r10.u32);
	// b 0x8299e678
	goto loc_8299E678;
loc_8299E490:
	// lwz r11,440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// lwz r9,416(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8299e570
	if (ctx.cr6.lt) goto loc_8299E570;
	// lwz r11,444(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 444);
	// lwz r9,412(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8299e468
	if (!ctx.cr6.lt) goto loc_8299E468;
loc_8299E4B8:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r11.u32);
	// stw r10,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r10.u32);
	// b 0x8299e678
	goto loc_8299E678;
loc_8299E4C8:
	// lwz r11,444(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 444);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x8299e478
	if (!ctx.cr0.lt) goto loc_8299E478;
	// lwz r11,440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// lwz r9,416(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8299e504
	if (ctx.cr6.lt) goto loc_8299E504;
loc_8299E4E8:
	// rlwinm. r11,r10,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8299e678
	if (ctx.cr0.eq) goto loc_8299E678;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8299E4F4:
	// lwz r11,412(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	// stw r10,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r10.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x8299e478
	goto loc_8299E478;
loc_8299E504:
	// lwz r10,412(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	// stw r11,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r11.u32);
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// b 0x8299e478
	goto loc_8299E478;
loc_8299E514:
	// lwz r11,440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// lwz r9,416(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8299e570
	if (ctx.cr6.lt) goto loc_8299E570;
	// lwz r11,444(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 444);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x8299e4b8
	if (!ctx.cr0.lt) goto loc_8299E4B8;
	// b 0x8299e4e8
	goto loc_8299E4E8;
loc_8299E538:
	// lwz r11,444(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 444);
	// lwz r9,412(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8299e478
	if (ctx.cr6.lt) goto loc_8299E478;
	// lwz r11,440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x8299e480
	if (!ctx.cr0.lt) goto loc_8299E480;
loc_8299E558:
	// rlwinm. r11,r10,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8299e678
	if (ctx.cr0.eq) goto loc_8299E678;
	// lwz r11,416(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r10,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r10.u32);
loc_8299E570:
	// stw r11,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r11.u32);
	// b 0x8299e678
	goto loc_8299E678;
loc_8299E578:
	// lwz r11,440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x8299e570
	if (!ctx.cr0.lt) goto loc_8299E570;
	// lwz r11,444(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 444);
	// lwz r9,412(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8299e558
	if (!ctx.cr6.lt) goto loc_8299E558;
loc_8299E598:
	// lwz r10,416(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// stw r11,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r11.u32);
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// b 0x8299e570
	goto loc_8299E570;
loc_8299E5A8:
	// lwz r11,444(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 444);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x8299e478
	if (!ctx.cr0.lt) goto loc_8299E478;
	// lwz r11,440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x8299e504
	if (!ctx.cr0.lt) goto loc_8299E504;
loc_8299E5C0:
	// rlwinm. r11,r10,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8299e678
	if (ctx.cr0.eq) goto loc_8299E678;
	// lwz r10,416(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// b 0x8299e4f4
	goto loc_8299E4F4;
loc_8299E5D4:
	// lwz r11,440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x8299e570
	if (!ctx.cr0.lt) goto loc_8299E570;
	// lwz r11,444(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 444);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x8299e598
	if (!ctx.cr0.lt) goto loc_8299E598;
	// b 0x8299e5c0
	goto loc_8299E5C0;
loc_8299E5F0:
	// bl 0x82a4cd78
	ctx.lr = 0x8299E5F4;
	sub_82A4CD78(ctx, base);
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lwa r11,412(r31)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 412));
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// lfs f31,16388(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16388);
	ctx.f31.f64 = double(temp.f32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// li r11,444
	ctx.r11.s64 = 444;
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.f0.u32);
	// bl 0x82a4cd78
	ctx.lr = 0x8299E63C;
	sub_82A4CD78(ctx, base);
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lwa r11,416(r31)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 416));
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// li r11,440
	ctx.r11.s64 = 440;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.f0.u32);
loc_8299E678:
	// stfs f30,404(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 404, temp.u32);
loc_8299E67C:
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r10,444(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 444);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r11,1444(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1444);
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r9,r11,114
	ctx.r9.s64 = ctx.r11.s64 + 114;
	// addi r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 + 112;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r10,440(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_8299E6D0"))) PPC_WEAK_FUNC(sub_8299E6D0);
PPC_FUNC_IMPL(__imp__sub_8299E6D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lfs f0,432(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 432);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// addis r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 196608;
	// addi r10,r10,-29528
	ctx.r10.s64 = ctx.r10.s64 + -29528;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,114
	ctx.r11.s64 = ctx.r11.s64 + 114;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwax r11,r11,r3
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32));
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
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 + 112;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,436(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 436);
	ctx.f0.f64 = double(temp.f32);
	// lwax r11,r11,r3
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32));
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
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8299E740"))) PPC_WEAK_FUNC(sub_8299E740);
PPC_FUNC_IMPL(__imp__sub_8299E740) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,432(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 432);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f0,436(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 436);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8299E758"))) PPC_WEAK_FUNC(sub_8299E758);
PPC_FUNC_IMPL(__imp__sub_8299E758) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x8299E760;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bge cr6,0x8299e784
	if (!ctx.cr6.lt) goto loc_8299E784;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8299e82c
	goto loc_8299E82C;
loc_8299E784:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82801bb0
	ctx.lr = 0x8299E78C;
	sub_82801BB0(ctx, base);
	// bl 0x82816528
	ctx.lr = 0x8299E790;
	sub_82816528(ctx, base);
	// li r11,12
	ctx.r11.s64 = 12;
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// lwz r28,0(r13)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// addi r29,r11,24
	ctx.r29.s64 = ctx.r11.s64 + 24;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r26,r10,-15412
	ctx.r26.s64 = ctx.r10.s64 + -15412;
	// lwz r11,13024(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13024);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwzx r10,r29,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	// addi r31,r11,1268
	ctx.r31.s64 = ctx.r11.s64 + 1268;
	// rlwinm. r11,r10,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8299e7cc
	if (!ctx.cr0.eq) goto loc_8299E7CC;
	// addi r3,r26,4
	ctx.r3.s64 = ctx.r26.s64 + 4;
	// bl 0x8312e74c
	ctx.lr = 0x8299E7CC;
	sub_8312E74C(ctx, base);
loc_8299E7CC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8299f350
	ctx.lr = 0x8299E7D8;
	sub_8299F350(ctx, base);
	// li r7,-1
	ctx.r7.s64 = -1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828552a0
	ctx.lr = 0x8299E7F0;
	sub_828552A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8299e814
	if (ctx.cr0.eq) goto loc_8299E814;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// ble cr6,0x8299e810
	if (!ctx.cr6.gt) goto loc_8299E810;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8299e814
	goto loc_8299E814;
loc_8299E810:
	// lwz r27,20(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
loc_8299E814:
	// lwzx r11,r29,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8299e828
	if (!ctx.cr0.eq) goto loc_8299E828;
	// addi r3,r26,4
	ctx.r3.s64 = ctx.r26.s64 + 4;
	// bl 0x8312e73c
	ctx.lr = 0x8299E828;
	sub_8312E73C(ctx, base);
loc_8299E828:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_8299E82C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8299E838"))) PPC_WEAK_FUNC(sub_8299E838);
PPC_FUNC_IMPL(__imp__sub_8299E838) {
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
	// bl 0x8299e758
	ctx.lr = 0x8299E848;
	sub_8299E758(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8299e878
	if (ctx.cr0.eq) goto loc_8299E878;
	// lis r11,-32102
	ctx.r11.s64 = -2103836672;
	// lwz r4,80(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-7456
	ctx.r11.s64 = ctx.r11.s64 + -7456;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8299ec00
	ctx.lr = 0x8299E874;
	sub_8299EC00(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_8299E878:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8299E888"))) PPC_WEAK_FUNC(sub_8299E888);
PPC_FUNC_IMPL(__imp__sub_8299E888) {
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
	// bl 0x8299e758
	ctx.lr = 0x8299E898;
	sub_8299E758(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8299e8c8
	if (ctx.cr0.eq) goto loc_8299E8C8;
	// lis r11,-32102
	ctx.r11.s64 = -2103836672;
	// lwz r4,80(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-7424
	ctx.r11.s64 = ctx.r11.s64 + -7424;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8299ec00
	ctx.lr = 0x8299E8C4;
	sub_8299EC00(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_8299E8C8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8299E8D8"))) PPC_WEAK_FUNC(sub_8299E8D8);
PPC_FUNC_IMPL(__imp__sub_8299E8D8) {
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
	// bl 0x8299e758
	ctx.lr = 0x8299E8E8;
	sub_8299E758(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8299e918
	if (ctx.cr0.eq) goto loc_8299E918;
	// lis r11,-32102
	ctx.r11.s64 = -2103836672;
	// lwz r4,80(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-7440
	ctx.r11.s64 = ctx.r11.s64 + -7440;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8299ec00
	ctx.lr = 0x8299E914;
	sub_8299EC00(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_8299E918:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8299E928"))) PPC_WEAK_FUNC(sub_8299E928);
PPC_FUNC_IMPL(__imp__sub_8299E928) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8299E930;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bge cr6,0x8299e958
	if (!ctx.cr6.lt) goto loc_8299E958;
loc_8299E950:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8299ea0c
	goto loc_8299EA0C;
loc_8299E958:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8299e758
	ctx.lr = 0x8299E960;
	sub_8299E758(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8299e950
	if (ctx.cr0.eq) goto loc_8299E950;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801b00
	ctx.lr = 0x8299E974;
	sub_82801B00(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r28,1
	ctx.r28.s64 = 1;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x8299e990
	if (!ctx.cr6.eq) goto loc_8299E990;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_8299E990:
	// lis r11,-32102
	ctx.r11.s64 = -2103836672;
	// lwz r30,80(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// li r3,40
	ctx.r3.s64 = 40;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r11,r11,-8464
	ctx.r11.s64 = ctx.r11.s64 + -8464;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82833108
	ctx.lr = 0x8299E9AC;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8299e9f4
	if (ctx.cr0.eq) goto loc_8299E9F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82833180
	ctx.lr = 0x8299E9BC;
	sub_82833180(ctx, base);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// lis r9,-8531
	ctx.r9.s64 = -559087616;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// addi r10,r10,-18376
	ctx.r10.s64 = ctx.r10.s64 + -18376;
	// stw r28,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
	// ori r9,r9,47806
	ctx.r9.u64 = ctx.r9.u64 | 47806;
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// b 0x8299e9f8
	goto loc_8299E9F8;
loc_8299E9F4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_8299E9F8:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x8299EA08;
	sub_82833A30(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_8299EA0C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8299EA18"))) PPC_WEAK_FUNC(sub_8299EA18);
PPC_FUNC_IMPL(__imp__sub_8299EA18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8299EA20;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bge cr6,0x8299ea48
	if (!ctx.cr6.lt) goto loc_8299EA48;
loc_8299EA40:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8299eafc
	goto loc_8299EAFC;
loc_8299EA48:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8299e758
	ctx.lr = 0x8299EA50;
	sub_8299E758(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8299ea40
	if (ctx.cr0.eq) goto loc_8299EA40;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801b00
	ctx.lr = 0x8299EA64;
	sub_82801B00(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r28,1
	ctx.r28.s64 = 1;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x8299ea80
	if (!ctx.cr6.eq) goto loc_8299EA80;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_8299EA80:
	// lis r11,-32102
	ctx.r11.s64 = -2103836672;
	// lwz r30,80(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// li r3,40
	ctx.r3.s64 = 40;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r11,r11,-8480
	ctx.r11.s64 = ctx.r11.s64 + -8480;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82833108
	ctx.lr = 0x8299EA9C;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8299eae4
	if (ctx.cr0.eq) goto loc_8299EAE4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82833180
	ctx.lr = 0x8299EAAC;
	sub_82833180(ctx, base);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// lis r9,-8531
	ctx.r9.s64 = -559087616;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// addi r10,r10,-18376
	ctx.r10.s64 = ctx.r10.s64 + -18376;
	// stw r28,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
	// ori r9,r9,47806
	ctx.r9.u64 = ctx.r9.u64 | 47806;
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// b 0x8299eae8
	goto loc_8299EAE8;
loc_8299EAE4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_8299EAE8:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x8299EAF8;
	sub_82833A30(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_8299EAFC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8299EB08"))) PPC_WEAK_FUNC(sub_8299EB08);
PPC_FUNC_IMPL(__imp__sub_8299EB08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8299EB10;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lis r11,-6760
	ctx.r11.s64 = -443023360;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// ori r11,r11,11236
	ctx.r11.u64 = ctx.r11.u64 | 11236;
	// lwz r28,8(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8299eb40
	if (!ctx.cr6.eq) goto loc_8299EB40;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lwz r11,19336(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19336);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,19336(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19336, ctx.r11.u32);
loc_8299EB40:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r29,16(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,12(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// bl 0x8299f350
	ctx.lr = 0x8299EB54;
	sub_8299F350(ctx, base);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828552a0
	ctx.lr = 0x8299EB6C;
	sub_828552A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8299eb84
	if (ctx.cr0.eq) goto loc_8299EB84;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// b 0x8299ebf8
	goto loc_8299EBF8;
loc_8299EB84:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828553e8
	ctx.lr = 0x8299EB98;
	sub_828553E8(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r8,1
	ctx.r8.s64 = 1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r8,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// bgt cr6,0x8299ebd0
	if (ctx.cr6.gt) goto loc_8299EBD0;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// b 0x8299ebf4
	goto loc_8299EBF4;
loc_8299EBD0:
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82333900
	ctx.lr = 0x8299EBD8;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8299ebf0
	if (ctx.cr0.eq) goto loc_8299EBF0;
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8299ebf4
	goto loc_8299EBF4;
loc_8299EBF0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8299EBF4:
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_8299EBF8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8299EC00"))) PPC_WEAK_FUNC(sub_8299EC00);
PPC_FUNC_IMPL(__imp__sub_8299EC00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8299EC08;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82833108
	ctx.lr = 0x8299EC20;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8299ec64
	if (ctx.cr0.eq) goto loc_8299EC64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82833180
	ctx.lr = 0x8299EC30;
	sub_82833180(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-8531
	ctx.r10.s64 = -559087616;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// addi r11,r11,-18456
	ctx.r11.s64 = ctx.r11.s64 + -18456;
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// ori r10,r10,47806
	ctx.r10.u64 = ctx.r10.u64 | 47806;
	// std r30,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r30.u64);
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
	// b 0x8299ec68
	goto loc_8299EC68;
loc_8299EC64:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8299EC68:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x8299EC78;
	sub_82833A30(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8299EC80"))) PPC_WEAK_FUNC(sub_8299EC80);
PPC_FUNC_IMPL(__imp__sub_8299EC80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8299ecb8
	if (ctx.cr6.eq) goto loc_8299ECB8;
	// bl 0x8299f160
	ctx.lr = 0x8299ECA8;
	sub_8299F160(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8299ecb8
	if (!ctx.cr6.eq) goto loc_8299ECB8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8299ecc4
	goto loc_8299ECC4;
loc_8299ECB8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333c70
	ctx.lr = 0x8299ECC4;
	sub_82333C70(ctx, base);
loc_8299ECC4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8299ECE0"))) PPC_WEAK_FUNC(sub_8299ECE0);
PPC_FUNC_IMPL(__imp__sub_8299ECE0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8299f160
	sub_8299F160(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8299ECE8"))) PPC_WEAK_FUNC(sub_8299ECE8);
PPC_FUNC_IMPL(__imp__sub_8299ECE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x8299ED04;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8299ed6c
	if (ctx.cr0.eq) goto loc_8299ED6C;
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
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r9,r9,-18456
	ctx.r9.s64 = ctx.r9.s64 + -18456;
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
	// b 0x8299ed70
	goto loc_8299ED70;
loc_8299ED6C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8299ED70:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8299ED88"))) PPC_WEAK_FUNC(sub_8299ED88);
PPC_FUNC_IMPL(__imp__sub_8299ED88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8299f160
	ctx.lr = 0x8299EDA8;
	sub_8299F160(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8299edbc
	if (ctx.cr6.eq) goto loc_8299EDBC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333b08
	ctx.lr = 0x8299EDBC;
	sub_82333B08(ctx, base);
loc_8299EDBC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8299EDD8"))) PPC_WEAK_FUNC(sub_8299EDD8);
PPC_FUNC_IMPL(__imp__sub_8299EDD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8287b8b0
	ctx.lr = 0x8299EDF8;
	sub_8287B8B0(ctx, base);
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
	ctx.lr = 0x8299EE10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8299ee1c
	if (!ctx.cr0.eq) goto loc_8299EE1C;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8299EE1C:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8299EE30;
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

__attribute__((alias("__imp__sub_8299EE48"))) PPC_WEAK_FUNC(sub_8299EE48);
PPC_FUNC_IMPL(__imp__sub_8299EE48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,4840
	ctx.r3.s64 = ctx.r11.s64 + 4840;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8299EE58"))) PPC_WEAK_FUNC(sub_8299EE58);
PPC_FUNC_IMPL(__imp__sub_8299EE58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8299ee90
	if (ctx.cr6.eq) goto loc_8299EE90;
	// bl 0x8299f2f0
	ctx.lr = 0x8299EE80;
	sub_8299F2F0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8299ee90
	if (!ctx.cr6.eq) goto loc_8299EE90;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8299ee9c
	goto loc_8299EE9C;
loc_8299EE90:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333c70
	ctx.lr = 0x8299EE9C;
	sub_82333C70(ctx, base);
loc_8299EE9C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8299EEB8"))) PPC_WEAK_FUNC(sub_8299EEB8);
PPC_FUNC_IMPL(__imp__sub_8299EEB8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8299f2f0
	sub_8299F2F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8299EEC0"))) PPC_WEAK_FUNC(sub_8299EEC0);
PPC_FUNC_IMPL(__imp__sub_8299EEC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82833108
	ctx.lr = 0x8299EEDC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8299ef4c
	if (ctx.cr0.eq) goto loc_8299EF4C;
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
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r9,r9,-18376
	ctx.r9.s64 = ctx.r9.s64 + -18376;
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
	// b 0x8299ef50
	goto loc_8299EF50;
loc_8299EF4C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8299EF50:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8299EF68"))) PPC_WEAK_FUNC(sub_8299EF68);
PPC_FUNC_IMPL(__imp__sub_8299EF68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8299f2f0
	ctx.lr = 0x8299EF88;
	sub_8299F2F0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8299ef9c
	if (ctx.cr6.eq) goto loc_8299EF9C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333b08
	ctx.lr = 0x8299EF9C;
	sub_82333B08(ctx, base);
loc_8299EF9C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8299EFB8"))) PPC_WEAK_FUNC(sub_8299EFB8);
PPC_FUNC_IMPL(__imp__sub_8299EFB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8287b8b0
	ctx.lr = 0x8299EFD8;
	sub_8287B8B0(ctx, base);
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
	ctx.lr = 0x8299EFF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8299effc
	if (!ctx.cr0.eq) goto loc_8299EFFC;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8299EFFC:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8299F014;
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

__attribute__((alias("__imp__sub_8299F030"))) PPC_WEAK_FUNC(sub_8299F030);
PPC_FUNC_IMPL(__imp__sub_8299F030) {
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
	// bl 0x82833108
	ctx.lr = 0x8299F048;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8299f09c
	if (ctx.cr0.eq) goto loc_8299F09C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82833180
	ctx.lr = 0x8299F058;
	sub_82833180(ctx, base);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-8531
	ctx.r8.s64 = -559087616;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r9,r9,-18456
	ctx.r9.s64 = ctx.r9.s64 + -18456;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ori r8,r8,47806
	ctx.r8.u64 = ctx.r8.u64 | 47806;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ld r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// std r7,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r7.u64);
	// b 0x8299f0a0
	goto loc_8299F0A0;
loc_8299F09C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8299F0A0:
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

__attribute__((alias("__imp__sub_8299F0B8"))) PPC_WEAK_FUNC(sub_8299F0B8);
PPC_FUNC_IMPL(__imp__sub_8299F0B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-27116(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27116);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8299f0f8
	if (!ctx.cr0.eq) goto loc_8299F0F8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,-27116(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27116, ctx.r11.u32);
	// addi r3,r9,4840
	ctx.r3.s64 = ctx.r9.s64 + 4840;
	// bl 0x82816528
	ctx.lr = 0x8299F0F0;
	sub_82816528(ctx, base);
	// stw r3,-27120(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27120, ctx.r3.u32);
	// b 0x8299f0fc
	goto loc_8299F0FC;
loc_8299F0F8:
	// lwz r3,-27120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27120);
loc_8299F0FC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8299F110"))) PPC_WEAK_FUNC(sub_8299F110);
PPC_FUNC_IMPL(__imp__sub_8299F110) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8299f160
	ctx.lr = 0x8299F130;
	sub_8299F160(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8299F144;
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

__attribute__((alias("__imp__sub_8299F160"))) PPC_WEAK_FUNC(sub_8299F160);
PPC_FUNC_IMPL(__imp__sub_8299F160) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,20296
	ctx.r31.s64 = ctx.r11.s64 + 20296;
	// lwz r11,20304(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20304);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8299f1a8
	if (!ctx.cr0.eq) goto loc_8299F1A8;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-18296
	ctx.r9.s64 = ctx.r9.s64 + -18296;
	// stw r11,20304(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20304, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-10800
	ctx.r3.s64 = ctx.r11.s64 + -10800;
	// bl 0x82a4c758
	ctx.lr = 0x8299F1A8;
	sub_82A4C758(ctx, base);
loc_8299F1A8:
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

__attribute__((alias("__imp__sub_8299F1C0"))) PPC_WEAK_FUNC(sub_8299F1C0);
PPC_FUNC_IMPL(__imp__sub_8299F1C0) {
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
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82833108
	ctx.lr = 0x8299F1D8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8299f22c
	if (ctx.cr0.eq) goto loc_8299F22C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82833180
	ctx.lr = 0x8299F1E8;
	sub_82833180(ctx, base);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-8531
	ctx.r8.s64 = -559087616;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r9,r9,-18376
	ctx.r9.s64 = ctx.r9.s64 + -18376;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ori r8,r8,47806
	ctx.r8.u64 = ctx.r8.u64 | 47806;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ld r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// std r7,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r7.u64);
	// b 0x8299f230
	goto loc_8299F230;
loc_8299F22C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8299F230:
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

__attribute__((alias("__imp__sub_8299F248"))) PPC_WEAK_FUNC(sub_8299F248);
PPC_FUNC_IMPL(__imp__sub_8299F248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-27124(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27124);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8299f288
	if (!ctx.cr0.eq) goto loc_8299F288;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,-27124(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27124, ctx.r11.u32);
	// addi r3,r9,4840
	ctx.r3.s64 = ctx.r9.s64 + 4840;
	// bl 0x82816528
	ctx.lr = 0x8299F280;
	sub_82816528(ctx, base);
	// stw r3,-27128(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27128, ctx.r3.u32);
	// b 0x8299f28c
	goto loc_8299F28C;
loc_8299F288:
	// lwz r3,-27128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27128);
loc_8299F28C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8299F2A0"))) PPC_WEAK_FUNC(sub_8299F2A0);
PPC_FUNC_IMPL(__imp__sub_8299F2A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8299f2f0
	ctx.lr = 0x8299F2C0;
	sub_8299F2F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8299F2D4;
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

__attribute__((alias("__imp__sub_8299F2F0"))) PPC_WEAK_FUNC(sub_8299F2F0);
PPC_FUNC_IMPL(__imp__sub_8299F2F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,20292
	ctx.r31.s64 = ctx.r11.s64 + 20292;
	// lwz r11,20300(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20300);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8299f338
	if (!ctx.cr0.eq) goto loc_8299F338;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-18276
	ctx.r9.s64 = ctx.r9.s64 + -18276;
	// stw r11,20300(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20300, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-10824
	ctx.r3.s64 = ctx.r11.s64 + -10824;
	// bl 0x82a4c758
	ctx.lr = 0x8299F338;
	sub_82A4C758(ctx, base);
loc_8299F338:
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

__attribute__((alias("__imp__sub_8299F350"))) PPC_WEAK_FUNC(sub_8299F350);
PPC_FUNC_IMPL(__imp__sub_8299F350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8299F358;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31943
	ctx.r31.s64 = -2093416448;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lis r29,-31943
	ctx.r29.s64 = -2093416448;
	// lwz r11,-27108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27108);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8299f3c0
	if (!ctx.cr0.eq) goto loc_8299F3C0;
	// lis r30,-31944
	ctx.r30.s64 = -2093481984;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,-27108(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27108, ctx.r11.u32);
	// lwz r3,19340(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 19340);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8299f3b8
	if (!ctx.cr6.eq) goto loc_8299F3B8;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// addi r4,r11,-24392
	ctx.r4.s64 = ctx.r11.s64 + -24392;
	// addi r3,r10,-24764
	ctx.r3.s64 = ctx.r10.s64 + -24764;
	// bl 0x82a4c7d8
	ctx.lr = 0x8299F3A0;
	sub_82A4C7D8(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82a4ca90
	ctx.lr = 0x8299F3A8;
	sub_82A4CA90(ctx, base);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bl 0x82816528
	ctx.lr = 0x8299F3B0;
	sub_82816528(ctx, base);
	// lwz r11,-27108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27108);
	// stw r3,19340(r30)
	PPC_STORE_U32(ctx.r30.u32 + 19340, ctx.r3.u32);
loc_8299F3B8:
	// stw r3,-27112(r29)
	PPC_STORE_U32(ctx.r29.u32 + -27112, ctx.r3.u32);
	// b 0x8299f3c4
	goto loc_8299F3C4;
loc_8299F3C0:
	// lwz r3,-27112(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27112);
loc_8299F3C4:
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r9,r10,20288
	ctx.r9.s64 = ctx.r10.s64 + 20288;
	// bne 0x8299f3e8
	if (!ctx.cr0.eq) goto loc_8299F3E8;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// addi r10,r10,14428
	ctx.r10.s64 = ctx.r10.s64 + 14428;
	// stw r11,-27108(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27108, ctx.r11.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_8299F3E8:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r9,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r9.u32);
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8299F408"))) PPC_WEAK_FUNC(sub_8299F408);
PPC_FUNC_IMPL(__imp__sub_8299F408) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8299e030
	sub_8299E030(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8299F410"))) PPC_WEAK_FUNC(sub_8299F410);
PPC_FUNC_IMPL(__imp__sub_8299F410) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8299de90
	sub_8299DE90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8299F418"))) PPC_WEAK_FUNC(sub_8299F418);
PPC_FUNC_IMPL(__imp__sub_8299F418) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r11,-18256
	ctx.r3.s64 = ctx.r11.s64 + -18256;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8299F428"))) PPC_WEAK_FUNC(sub_8299F428);
PPC_FUNC_IMPL(__imp__sub_8299F428) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8299f478
	ctx.lr = 0x8299F448;
	sub_8299F478(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8299f45c
	if (ctx.cr6.eq) goto loc_8299F45C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333b08
	ctx.lr = 0x8299F45C;
	sub_82333B08(ctx, base);
loc_8299F45C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8299F478"))) PPC_WEAK_FUNC(sub_8299F478);
PPC_FUNC_IMPL(__imp__sub_8299F478) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,19332
	ctx.r31.s64 = ctx.r11.s64 + 19332;
	// lwz r11,19328(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19328);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8299f4c0
	if (!ctx.cr0.eq) goto loc_8299F4C0;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-18136
	ctx.r9.s64 = ctx.r9.s64 + -18136;
	// stw r11,19328(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19328, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-10776
	ctx.r3.s64 = ctx.r11.s64 + -10776;
	// bl 0x82a4c758
	ctx.lr = 0x8299F4C0;
	sub_82A4C758(ctx, base);
loc_8299F4C0:
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

__attribute__((alias("__imp__sub_8299F4D8"))) PPC_WEAK_FUNC(sub_8299F4D8);
PPC_FUNC_IMPL(__imp__sub_8299F4D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-27132(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27132);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8299f518
	if (!ctx.cr0.eq) goto loc_8299F518;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stw r11,-27132(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27132, ctx.r11.u32);
	// addi r3,r9,-18256
	ctx.r3.s64 = ctx.r9.s64 + -18256;
	// bl 0x82816528
	ctx.lr = 0x8299F510;
	sub_82816528(ctx, base);
	// stw r3,-27136(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27136, ctx.r3.u32);
	// b 0x8299f51c
	goto loc_8299F51C;
loc_8299F518:
	// lwz r3,-27136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27136);
loc_8299F51C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8299F530"))) PPC_WEAK_FUNC(sub_8299F530);
PPC_FUNC_IMPL(__imp__sub_8299F530) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8299f478
	ctx.lr = 0x8299F550;
	sub_8299F478(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8299F564;
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

__attribute__((alias("__imp__sub_8299F580"))) PPC_WEAK_FUNC(sub_8299F580);
PPC_FUNC_IMPL(__imp__sub_8299F580) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8299f5b8
	if (ctx.cr6.eq) goto loc_8299F5B8;
	// bl 0x8299f478
	ctx.lr = 0x8299F5A8;
	sub_8299F478(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8299f5b8
	if (!ctx.cr6.eq) goto loc_8299F5B8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8299f5c4
	goto loc_8299F5C4;
loc_8299F5B8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333c70
	ctx.lr = 0x8299F5C4;
	sub_82333C70(ctx, base);
loc_8299F5C4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8299F5E0"))) PPC_WEAK_FUNC(sub_8299F5E0);
PPC_FUNC_IMPL(__imp__sub_8299F5E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8299f478
	sub_8299F478(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8299F5E8"))) PPC_WEAK_FUNC(sub_8299F5E8);
PPC_FUNC_IMPL(__imp__sub_8299F5E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x8299F604;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8299f664
	if (ctx.cr0.eq) goto loc_8299F664;
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
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r9,r9,-18216
	ctx.r9.s64 = ctx.r9.s64 + -18216;
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
	// b 0x8299f668
	goto loc_8299F668;
loc_8299F664:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8299F668:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8299F680"))) PPC_WEAK_FUNC(sub_8299F680);
PPC_FUNC_IMPL(__imp__sub_8299F680) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x824096c0
	ctx.lr = 0x8299F6A0;
	sub_824096C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,156
	ctx.r3.s64 = 156;
	// lwz r30,24(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x82333900
	ctx.lr = 0x8299F6B0;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8299f6ec
	if (ctx.cr0.eq) goto loc_8299F6EC;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r31,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r31.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,31
	ctx.r9.s64 = 31;
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
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
	// b 0x8299f6f0
	goto loc_8299F6F0;
loc_8299F6EC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8299F6F0:
	// stw r30,36(r4)
	PPC_STORE_U32(ctx.r4.u32 + 36, ctx.r30.u32);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,13156(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13156);
	// bl 0x8281abd8
	ctx.lr = 0x8299F704;
	sub_8281ABD8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8299F720"))) PPC_WEAK_FUNC(sub_8299F720);
PPC_FUNC_IMPL(__imp__sub_8299F720) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,16(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lwz r11,12(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lfs f13,20(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,32(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f12,24(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,36(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lfs f12,28(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,40(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f13,44(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f13,52(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f13,56(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8299F778"))) PPC_WEAK_FUNC(sub_8299F778);
PPC_FUNC_IMPL(__imp__sub_8299F778) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,48(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// lfs f13,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8299f798
	if (!ctx.cr6.gt) goto loc_8299F798;
	// lfs f0,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8299f7ac
	goto loc_8299F7AC;
loc_8299F798:
	// fdivs f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// lfs f12,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fmadds f0,f13,f0,f12
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f12.f64));
loc_8299F7AC:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// stfs f0,44(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r11,1444(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1444);
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r11,r11,13
	ctx.r11.s64 = ctx.r11.s64 + 13;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r11,r3
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8299F7D8"))) PPC_WEAK_FUNC(sub_8299F7D8);
PPC_FUNC_IMPL(__imp__sub_8299F7D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x8299F7E0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r9,-31961
	ctx.r9.s64 = -2094596096;
	// ori r11,r11,36012
	ctx.r11.u64 = ctx.r11.u64 | 36012;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r10,13024(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r7,-24732(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + -24732);
	// lwz r8,76(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// lwzx r6,r8,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x8299f820
	if (!ctx.cr6.eq) goto loc_8299F820;
	// lwz r8,1996(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1996);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8299f8d4
	if (ctx.cr6.eq) goto loc_8299F8D4;
loc_8299F820:
	// lis r8,2
	ctx.r8.s64 = 131072;
	// lwz r10,76(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// ori r8,r8,36416
	ctx.r8.u64 = ctx.r8.u64 | 36416;
	// lis r28,-31944
	ctx.r28.s64 = -2093481984;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r27,r28,-13880
	ctx.r27.s64 = ctx.r28.s64 + -13880;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzx r8,r10,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwzx r10,r10,r6
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// lwz r11,-13880(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -13880);
	// lwz r26,608(r8)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r8.u32 + 608);
	// lwz r25,600(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 600);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stw r10,-24732(r9)
	PPC_STORE_U32(ctx.r9.u32 + -24732, ctx.r10.u32);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8299F870;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-13880(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -13880);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8299F894;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lwz r10,-13880(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + -13880);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ori r9,r9,36008
	ctx.r9.u64 = ctx.r9.u64 | 36008;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r10,104(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// addi r11,r11,13
	ctx.r11.s64 = ctx.r11.s64 + 13;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r11,r29
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8299F8D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8299F8D4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8299F8E0"))) PPC_WEAK_FUNC(sub_8299F8E0);
PPC_FUNC_IMPL(__imp__sub_8299F8E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x8299F8E8;
	__savegprlr_24(ctx, base);
	// stwu r1,-1104(r1)
	ea = -1104 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,4(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// bl 0x829795a8
	ctx.lr = 0x8299F908;
	sub_829795A8(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r10,808
	ctx.r10.s64 = 808;
	// addi r11,r11,-18112
	ctx.r11.s64 = ctx.r11.s64 + -18112;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r11,132
	ctx.r11.s64 = 132;
	// stw r10,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r10.u32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r30,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r30.u32);
	// stw r30,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r30.u32);
	// addi r28,r31,384
	ctx.r28.s64 = ctx.r31.s64 + 384;
	// stw r30,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r30.u32);
	// addi r29,r31,408
	ctx.r29.s64 = ctx.r31.s64 + 408;
	// stw r30,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r30.u32);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// stw r30,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r30.u32);
	// lfs f0,908(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r11.u32);
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
	// stw r9,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r9.u32);
	// stw r30,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r30.u32);
	// stw r30,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r30.u32);
	// stw r30,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r30.u32);
	// stw r30,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r30.u32);
	// stw r30,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r30.u32);
	// stw r25,472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 472, ctx.r25.u32);
	// stw r27,476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 476, ctx.r27.u32);
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// stfs f0,460(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 460, temp.u32);
	// stfs f0,464(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 464, temp.u32);
	// stw r11,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r11.u32);
	// beq cr6,0x8299fad4
	if (ctx.cr6.eq) goto loc_8299FAD4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8248e0c0
	ctx.lr = 0x8299F9A4;
	sub_8248E0C0(ctx, base);
	// lwz r11,472(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 472);
	// lwz r10,20(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lwz r11,116(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8299f9cc
	if (!ctx.cr6.gt) goto loc_8299F9CC;
	// stw r11,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,808
	ctx.r4.s64 = 808;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332c38
	ctx.lr = 0x8299F9CC;
	sub_82332C38(ctx, base);
loc_8299F9CC:
	// lwz r11,472(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 472);
	// lwz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// lwz r11,116(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8299f9f4
	if (!ctx.cr6.gt) goto loc_8299F9F4;
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,132
	ctx.r4.s64 = 132;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332c38
	ctx.lr = 0x8299F9F4;
	sub_82332C38(ctx, base);
loc_8299F9F4:
	// lwz r11,472(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 472);
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// lwz r11,116(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8299fab4
	if (!ctx.cr6.gt) goto loc_8299FAB4;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
loc_8299FA0C:
	// lwz r11,48(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 48);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lwzx r24,r27,r11
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// bl 0x8297b320
	ctx.lr = 0x8299FA1C;
	sub_8297B320(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82967018
	ctx.lr = 0x8299FA28;
	sub_82967018(ctx, base);
	// lwz r11,396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// mulli r10,r3,808
	ctx.r10.s64 = ctx.r3.s64 * 808;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8297b368
	ctx.lr = 0x8299FA3C;
	sub_8297B368(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8297b500
	ctx.lr = 0x8299FA44;
	sub_8297B500(ctx, base);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,132
	ctx.r5.s64 = 132;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332d50
	ctx.lr = 0x8299FA58;
	sub_82332D50(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mulli r10,r3,132
	ctx.r10.s64 = ctx.r3.s64 * 132;
	// add. r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8299fa70
	if (ctx.cr0.eq) goto loc_8299FA70;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8249da38
	ctx.lr = 0x8299FA70;
	sub_8249DA38(ctx, base);
loc_8299FA70:
	// lwz r11,424(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// lwz r7,400(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// mulli r8,r11,132
	ctx.r8.s64 = ctx.r11.s64 * 132;
	// lwz r10,420(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	// lwz r9,396(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// mulli r11,r7,808
	ctx.r11.s64 = ctx.r7.s64 * 808;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r4,r10,-132
	ctx.r4.s64 = ctx.r10.s64 + -132;
	// addi r3,r11,-808
	ctx.r3.s64 = ctx.r11.s64 + -808;
	// bl 0x8297b5e8
	ctx.lr = 0x8299FA9C;
	sub_8297B5E8(ctx, base);
	// lwz r11,472(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 472);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// lwz r11,116(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8299fa0c
	if (ctx.cr6.lt) goto loc_8299FA0C;
loc_8299FAB4:
	// addi r3,r1,180
	ctx.r3.s64 = ctx.r1.s64 + 180;
	// bl 0x8249d938
	ctx.lr = 0x8299FABC;
	sub_8249D938(ctx, base);
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// bl 0x8249d9b8
	ctx.lr = 0x8299FAC4;
	sub_8249D9B8(ctx, base);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x8269b988
	ctx.lr = 0x8299FACC;
	sub_8269B988(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8249d938
	ctx.lr = 0x8299FAD4;
	sub_8249D938(ctx, base);
loc_8299FAD4:
	// addi r4,r25,132
	ctx.r4.s64 = ctx.r25.s64 + 132;
	// addi r3,r31,336
	ctx.r3.s64 = ctx.r31.s64 + 336;
	// li r5,28
	ctx.r5.s64 = 28;
	// bl 0x82a4ea80
	ctx.lr = 0x8299FAE4;
	sub_82A4EA80(ctx, base);
	// lwz r11,128(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8299fafc
	if (ctx.cr6.eq) goto loc_8299FAFC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// b 0x8299fb00
	goto loc_8299FB00;
loc_8299FAFC:
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
loc_8299FB00:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r30.u32);
	// addi r1,r1,1104
	ctx.r1.s64 = ctx.r1.s64 + 1104;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8299FB10"))) PPC_WEAK_FUNC(sub_8299FB10);
PPC_FUNC_IMPL(__imp__sub_8299FB10) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,476(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 476);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8299fb5c
	if (ctx.cr6.eq) goto loc_8299FB5C;
	// lwz r9,400(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 400);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8299fb94
	if (!ctx.cr6.gt) goto loc_8299FB94;
	// lwz r11,396(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 396);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
loc_8299FB34:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r8,r8,0,28,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8299fb54
	if (!ctx.cr0.eq) goto loc_8299FB54;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,808
	ctx.r11.s64 = ctx.r11.s64 + 808;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8299fb34
	if (ctx.cr6.lt) goto loc_8299FB34;
	// b 0x8299fb94
	goto loc_8299FB94;
loc_8299FB54:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8299FB5C:
	// lwz r10,472(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 472);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8299fb94
	if (!ctx.cr6.gt) goto loc_8299FB94;
	// lwz r10,48(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
loc_8299FB74:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,16(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// rlwinm. r8,r8,0,28,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8299fb54
	if (!ctx.cr0.eq) goto loc_8299FB54;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8299fb74
	if (ctx.cr6.lt) goto loc_8299FB74;
loc_8299FB94:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8299FBA0"))) PPC_WEAK_FUNC(sub_8299FBA0);
PPC_FUNC_IMPL(__imp__sub_8299FBA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,456(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 456);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8299fbec
	if (!ctx.cr6.eq) goto loc_8299FBEC;
	// lwz r11,472(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 472);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,116(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8299fbec
	if (!ctx.cr6.gt) goto loc_8299FBEC;
	// lwz r11,112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
loc_8299FBC4:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm. r7,r8,0,9,9
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8299fbdc
	if (ctx.cr0.eq) goto loc_8299FBDC;
	// rlwinm. r8,r8,0,28,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8299fbf4
	if (!ctx.cr0.eq) goto loc_8299FBF4;
loc_8299FBDC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8299fbc4
	if (ctx.cr6.lt) goto loc_8299FBC4;
loc_8299FBEC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8299FBF4:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8299FC00"))) PPC_WEAK_FUNC(sub_8299FC00);
PPC_FUNC_IMPL(__imp__sub_8299FC00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x8299fc0c
	if (ctx.cr6.eq) goto loc_8299FC0C;
	// b 0x829815a8
	sub_829815A8(ctx, base);
	return;
loc_8299FC0C:
	// lwz r11,468(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 468);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8299fc34
	if (ctx.cr6.eq) goto loc_8299FC34;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8299fc2c
	if (!ctx.cr6.gt) goto loc_8299FC2C;
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
loc_8299FC2C:
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
loc_8299FC34:
	// lwz r11,456(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 456);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// andi. r11,r11,19
	ctx.r11.u64 = ctx.r11.u64 & 19;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8299FC50"))) PPC_WEAK_FUNC(sub_8299FC50);
PPC_FUNC_IMPL(__imp__sub_8299FC50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8299FC58;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stb r9,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r9.u8);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,472(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 472);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// lwz r10,116(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// ble cr6,0x8299fcdc
	if (!ctx.cr6.gt) goto loc_8299FCDC;
	// lwz r30,112(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
loc_8299FCC0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,40
	ctx.r4.s64 = ctx.r11.s64 + 40;
	// bl 0x8287f600
	ctx.lr = 0x8299FCD0;
	sub_8287F600(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x8299fcc0
	if (!ctx.cr0.eq) goto loc_8299FCC0;
loc_8299FCDC:
	// lbz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 120);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8299fd74
	if (ctx.cr0.eq) goto loc_8299FD74;
	// li r11,12
	ctx.r11.s64 = 12;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// addi r8,r11,24
	ctx.r8.s64 = ctx.r11.s64 + 24;
	// lwz r11,13024(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13024);
	// lwzx r10,r8,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// beq 0x8299fd30
	if (ctx.cr0.eq) goto loc_8299FD30;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lwz r9,1444(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1444);
	// ori r10,r10,36008
	ctx.r10.u64 = ctx.r10.u64 | 36008;
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// lwzx r31,r11,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8299fd38
	if (!ctx.cr6.eq) goto loc_8299FD38;
	// xori r31,r31,1
	ctx.r31.u64 = ctx.r31.u64 ^ 1;
	// b 0x8299fd38
	goto loc_8299FD38;
loc_8299FD30:
	// lwz r11,1444(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1444);
	// xori r31,r11,1
	ctx.r31.u64 = ctx.r11.u64 ^ 1;
loc_8299FD38:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827f0480
	ctx.lr = 0x8299FD48;
	sub_827F0480(ctx, base);
	// rlwinm r11,r31,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 6) & 0xFFFFFFC0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r31,r11,144
	ctx.r31.s64 = ctx.r11.s64 + 144;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82a786b8
	ctx.lr = 0x8299FD64;
	sub_82A786B8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a78780
	ctx.lr = 0x8299FD74;
	sub_82A78780(ctx, base);
loc_8299FD74:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8299FD80"))) PPC_WEAK_FUNC(sub_8299FD80);
PPC_FUNC_IMPL(__imp__sub_8299FD80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8299FDA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// and r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 & ctx.r31.u64;
	// clrlwi r3,r11,29
	ctx.r3.u64 = ctx.r11.u32 & 0x7;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8299FDC0"))) PPC_WEAK_FUNC(sub_8299FDC0);
PPC_FUNC_IMPL(__imp__sub_8299FDC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,472(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 472);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,116(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lwz r10,112(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
loc_8299FDD8:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// or r3,r9,r3
	ctx.r3.u64 = ctx.r9.u64 | ctx.r3.u64;
	// bne 0x8299fdd8
	if (!ctx.cr0.eq) goto loc_8299FDD8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8299FDF8"))) PPC_WEAK_FUNC(sub_8299FDF8);
PPC_FUNC_IMPL(__imp__sub_8299FDF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,476(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 476);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8299fe0c
	if (ctx.cr6.eq) goto loc_8299FE0C;
	// lwz r3,400(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 400);
	// blr 
	return;
loc_8299FE0C:
	// lwz r11,472(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 472);
	// lwz r3,52(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8299FE18"))) PPC_WEAK_FUNC(sub_8299FE18);
PPC_FUNC_IMPL(__imp__sub_8299FE18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,476(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 476);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8299fe34
	if (ctx.cr6.eq) goto loc_8299FE34;
	// lwz r10,396(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 396);
	// mulli r11,r4,808
	ctx.r11.s64 = ctx.r4.s64 * 808;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
loc_8299FE34:
	// lwz r11,472(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 472);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8299FE48"))) PPC_WEAK_FUNC(sub_8299FE48);
PPC_FUNC_IMPL(__imp__sub_8299FE48) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,476(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 476);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8299fe70
	if (ctx.cr6.eq) goto loc_8299FE70;
	// lwz r11,424(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 424);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8299fe70
	if (!ctx.cr6.lt) goto loc_8299FE70;
	// lwz r11,420(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 420);
	// mulli r10,r4,132
	ctx.r10.s64 = ctx.r4.s64 * 132;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
loc_8299FE70:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8299FE78"))) PPC_WEAK_FUNC(sub_8299FE78);
PPC_FUNC_IMPL(__imp__sub_8299FE78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x8299FE80;
	__savegprlr_26(ctx, base);
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
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r11,400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8299ff40
	if (!ctx.cr6.lt) goto loc_8299FF40;
	// lwz r10,448(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8299ff00
	if (!ctx.cr6.eq) goto loc_8299FF00;
	// lwz r10,452(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 452);
	// addi r29,r31,432
	ctx.r29.s64 = ctx.r31.s64 + 432;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8299fed0
	if (!ctx.cr6.gt) goto loc_8299FED0;
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332c38
	ctx.lr = 0x8299FED0;
	sub_82332C38(ctx, base);
loc_8299FED0:
	// lwz r26,400(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332d50
	ctx.lr = 0x8299FEE8;
	sub_82332D50(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r26,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82a455d0
	ctx.lr = 0x8299FF00;
	sub_82A455D0(ctx, base);
loc_8299FF00:
	// lwz r11,396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// mulli r29,r30,808
	ctx.r29.s64 = ctx.r30.s64 * 808;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r3,r29,r11
	ctx.r3.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x8297b368
	ctx.lr = 0x8299FF14;
	sub_8297B368(ctx, base);
	// lwz r10,420(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	// lwz r11,396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// mulli r9,r30,132
	ctx.r9.s64 = ctx.r30.s64 * 132;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r3,r29,r11
	ctx.r3.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x8297b5e8
	ctx.lr = 0x8299FF2C;
	sub_8297B5E8(ctx, base);
	// lwz r10,444(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 444);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r27,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r27.u32);
	// bl 0x82982178
	ctx.lr = 0x8299FF40;
	sub_82982178(ctx, base);
loc_8299FF40:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8299FF48"))) PPC_WEAK_FUNC(sub_8299FF48);
PPC_FUNC_IMPL(__imp__sub_8299FF48) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8299ff88
	if (ctx.cr6.eq) goto loc_8299FF88;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// li r8,2
	ctx.r8.s64 = 2;
	// ori r9,r9,36008
	ctx.r9.u64 = ctx.r9.u64 | 36008;
	// lwz r10,13024(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13024);
	// lwz r10,76(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stw r8,884(r11)
	PPC_STORE_U32(ctx.r11.u32 + 884, ctx.r8.u32);
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// mulli r10,r10,260
	ctx.r10.s64 = ctx.r10.s64 * 260;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,192
	ctx.r3.s64 = ctx.r11.s64 + 192;
	// blr 
	return;
loc_8299FF88:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8299FF90"))) PPC_WEAK_FUNC(sub_8299FF90);
PPC_FUNC_IMPL(__imp__sub_8299FF90) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8299ffe4
	if (ctx.cr6.eq) goto loc_8299FFE4;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r10,r10,36008
	ctx.r10.u64 = ctx.r10.u64 | 36008;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r11,r11,93
	ctx.r11.s64 = ctx.r11.s64 + 93;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8299ffe4
	if (ctx.cr6.eq) goto loc_8299FFE4;
	// lwz r11,952(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 952);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8299ffdc
	if (ctx.cr6.eq) goto loc_8299FFDC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8299ffe4
	if (!ctx.cr6.eq) goto loc_8299FFE4;
loc_8299FFDC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8299FFE4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8299FFF0"))) PPC_WEAK_FUNC(sub_8299FFF0);
PPC_FUNC_IMPL(__imp__sub_8299FFF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r10,r10,36008
	ctx.r10.u64 = ctx.r10.u64 | 36008;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r11,r11,115
	ctx.r11.s64 = ctx.r11.s64 + 115;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f1,r11,r3
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829A0018"))) PPC_WEAK_FUNC(sub_829A0018);
PPC_FUNC_IMPL(__imp__sub_829A0018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,432
	ctx.r3.s64 = ctx.r31.s64 + 432;
	// bl 0x8239d768
	ctx.lr = 0x829A003C;
	sub_8239D768(ctx, base);
	// addi r3,r31,408
	ctx.r3.s64 = ctx.r31.s64 + 408;
	// bl 0x82851310
	ctx.lr = 0x829A0044;
	sub_82851310(ctx, base);
	// addi r3,r31,384
	ctx.r3.s64 = ctx.r31.s64 + 384;
	// bl 0x828514e0
	ctx.lr = 0x829A004C;
	sub_828514E0(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-5040
	ctx.r11.s64 = ctx.r11.s64 + -5040;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82981190
	ctx.lr = 0x829A0060;
	sub_82981190(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829a0070
	if (ctx.cr0.eq) goto loc_829A0070;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x829A0070;
	sub_82332DB8(ctx, base);
loc_829A0070:
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

__attribute__((alias("__imp__sub_829A0090"))) PPC_WEAK_FUNC(sub_829A0090);
PPC_FUNC_IMPL(__imp__sub_829A0090) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,128
	ctx.r3.s64 = ctx.r11.s64 + 128;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829A00A0"))) PPC_WEAK_FUNC(sub_829A00A0);
PPC_FUNC_IMPL(__imp__sub_829A00A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x828ff2a8
	ctx.lr = 0x829A00C0;
	sub_828FF2A8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x829a00d4
	if (ctx.cr6.eq) goto loc_829A00D4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82851638
	ctx.lr = 0x829A00D4;
	sub_82851638(ctx, base);
loc_829A00D4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829A00F0"))) PPC_WEAK_FUNC(sub_829A00F0);
PPC_FUNC_IMPL(__imp__sub_829A00F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x829a0128
	if (ctx.cr6.eq) goto loc_829A0128;
	// bl 0x828ff2a8
	ctx.lr = 0x829A0118;
	sub_828FF2A8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x829a0128
	if (!ctx.cr6.eq) goto loc_829A0128;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x829a0134
	goto loc_829A0134;
loc_829A0128:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828516a0
	ctx.lr = 0x829A0134;
	sub_828516A0(ctx, base);
loc_829A0134:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829A0150"))) PPC_WEAK_FUNC(sub_829A0150);
PPC_FUNC_IMPL(__imp__sub_829A0150) {
	PPC_FUNC_PROLOGUE();
	// b 0x828ff2a8
	sub_828FF2A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829A0158"))) PPC_WEAK_FUNC(sub_829A0158);
PPC_FUNC_IMPL(__imp__sub_829A0158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,480
	ctx.r3.s64 = 480;
	// bl 0x82833108
	ctx.lr = 0x829A0174;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829a0188
	if (ctx.cr0.eq) goto loc_829A0188;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x829a01a0
	ctx.lr = 0x829A0184;
	sub_829A01A0(ctx, base);
	// b 0x829a018c
	goto loc_829A018C;
loc_829A0188:
	// li r3,0
	ctx.r3.s64 = 0;
loc_829A018C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829A01A0"))) PPC_WEAK_FUNC(sub_829A01A0);
PPC_FUNC_IMPL(__imp__sub_829A01A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82713428
	ctx.lr = 0x829A01C0;
	sub_82713428(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// addi r11,r11,-5040
	ctx.r11.s64 = ctx.r11.s64 + -5040;
	// addi r10,r10,-18112
	ctx.r10.s64 = ctx.r10.s64 + -18112;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,384
	ctx.r3.s64 = ctx.r31.s64 + 384;
	// addi r4,r30,384
	ctx.r4.s64 = ctx.r30.s64 + 384;
	// lwz r11,368(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 368);
	// stw r11,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r11.u32);
	// lwz r11,372(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 372);
	// stw r11,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r11.u32);
	// lwz r11,376(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 376);
	// stw r11,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82851560
	ctx.lr = 0x829A01FC;
	sub_82851560(ctx, base);
	// addi r3,r31,408
	ctx.r3.s64 = ctx.r31.s64 + 408;
	// addi r4,r30,408
	ctx.r4.s64 = ctx.r30.s64 + 408;
	// bl 0x828513a8
	ctx.lr = 0x829A0208;
	sub_828513A8(ctx, base);
	// addi r3,r31,432
	ctx.r3.s64 = ctx.r31.s64 + 432;
	// addi r4,r30,432
	ctx.r4.s64 = ctx.r30.s64 + 432;
	// bl 0x82873b58
	ctx.lr = 0x829A0214;
	sub_82873B58(ctx, base);
	// lwz r11,456(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 456);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 456, ctx.r11.u32);
	// lwz r11,460(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 460);
	// stw r11,460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 460, ctx.r11.u32);
	// lwz r11,464(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 464);
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
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829A0260"))) PPC_WEAK_FUNC(sub_829A0260);
PPC_FUNC_IMPL(__imp__sub_829A0260) {
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
	// lwz r11,456(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 456);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829a0298
	if (!ctx.cr6.eq) goto loc_829A0298;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r11,184(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829A028C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq 0x829a029c
	if (ctx.cr0.eq) goto loc_829A029C;
loc_829A0298:
	// li r3,1
	ctx.r3.s64 = 1;
loc_829A029C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829A02B0"))) PPC_WEAK_FUNC(sub_829A02B0);
PPC_FUNC_IMPL(__imp__sub_829A02B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,456(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 456);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829A02B8"))) PPC_WEAK_FUNC(sub_829A02B8);
PPC_FUNC_IMPL(__imp__sub_829A02B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x829A02C0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r29,r27,16
	ctx.r29.s64 = ctx.r27.s64 + 16;
	// addi r11,r11,-17784
	ctx.r11.s64 = ctx.r11.s64 + -17784;
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// stw r4,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r4.u32);
	// addi r31,r29,64
	ctx.r31.s64 = ctx.r29.s64 + 64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r26,r11,-15728
	ctx.r26.s64 = ctx.r11.s64 + -15728;
loc_829A02F0:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a4ea80
	ctx.lr = 0x829A0300;
	sub_82A4EA80(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a4ea80
	ctx.lr = 0x829A0310;
	sub_82A4EA80(ctx, base);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// addi r29,r29,160
	ctx.r29.s64 = ctx.r29.s64 + 160;
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// addi r31,r31,160
	ctx.r31.s64 = ctx.r31.s64 + 160;
	// bge 0x829a02f0
	if (!ctx.cr0.lt) goto loc_829A02F0;
	// stw r30,344(r27)
	PPC_STORE_U32(ctx.r27.u32 + 344, ctx.r30.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r30,336(r27)
	PPC_STORE_U32(ctx.r27.u32 + 336, ctx.r30.u32);
	// stw r30,340(r27)
	PPC_STORE_U32(ctx.r27.u32 + 340, ctx.r30.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829A0350"))) PPC_WEAK_FUNC(sub_829A0350);
PPC_FUNC_IMPL(__imp__sub_829A0350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r10,-17784
	ctx.r10.s64 = ctx.r10.s64 + -17784;
	// lwz r11,344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829a03b4
	if (ctx.cr6.eq) goto loc_829A03B4;
	// lwz r3,76(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// bl 0x82744750
	ctx.lr = 0x829A038C;
	sub_82744750(ctx, base);
	// lwz r3,344(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829a03ac
	if (ctx.cr6.eq) goto loc_829A03AC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829A03AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_829A03AC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r11.u32);
loc_829A03B4:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// clrlwi. r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x829a03d0
	if (ctx.cr0.eq) goto loc_829A03D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x829A03D0;
	sub_82332DB8(ctx, base);
loc_829A03D0:
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

__attribute__((alias("__imp__sub_829A03F0"))) PPC_WEAK_FUNC(sub_829A03F0);
PPC_FUNC_IMPL(__imp__sub_829A03F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r10,r10,36008
	ctx.r10.u64 = ctx.r10.u64 | 36008;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r11,r11,84
	ctx.r11.s64 = ctx.r11.s64 + 84;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829A0418"))) PPC_WEAK_FUNC(sub_829A0418);
PPC_FUNC_IMPL(__imp__sub_829A0418) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9dc
	ctx.lr = 0x829A0420;
	__savegprlr_17(ctx, base);
	// stfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.f30.u64);
	// stfd f31,-136(r1)
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.f31.u64);
	// li r12,-160
	ctx.r12.s64 = -160;
	// stvx128 v127,r1,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// li r29,16
	ctx.r29.s64 = 16;
	// li r30,32
	ctx.r30.s64 = 32;
	// li r28,48
	ctx.r28.s64 = 48;
	// lfs f30,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f30.f64 = double(temp.f32);
	// addi r10,r31,224
	ctx.r10.s64 = ctx.r31.s64 + 224;
	// stfs f30,544(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 544, temp.u32);
	// addi r11,r26,64
	ctx.r11.s64 = ctx.r26.s64 + 64;
	// lvx128 v0,r0,r26
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r26.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r25,r31,160
	ctx.r25.s64 = ctx.r31.s64 + 160;
	// lvx128 v13,r26,r29
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r26.u32 + ctx.r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r26,r30
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r26.u32 + ctx.r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lvx128 v11,r26,r28
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r26.u32 + ctx.r28.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r10,r29
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r29.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v12,r10,r30
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v11,r10,r28
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r28.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r11,r29
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r11,r30
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r11,r28
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r28.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r25
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r25.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r25,r29
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r25.u32 + ctx.r29.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v12,r25,r30
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r25.u32 + ctx.r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v11,r25,r28
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r25.u32 + ctx.r28.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v8,r11,r28
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r28.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v7,r11,r29
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r0,r26
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r26.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r26,r29
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r26.u32 + ctx.r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v10,r26,r30
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r26.u32 + ctx.r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v9,r26,r28
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r26.u32 + ctx.r28.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r11,r30
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw v5,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v5.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// vmrglw v0,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// vmrghw v6,v7,v8
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), simde_mm_load_si128((simde__m128i*)ctx.v7.u32)));
	// vmrglw v13,v7,v8
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), simde_mm_load_si128((simde__m128i*)ctx.v7.u32)));
	// vmrghw v8,v5,v6
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v6.u32), simde_mm_load_si128((simde__m128i*)ctx.v5.u32)));
	// vmrglw v7,v5,v6
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v6.u32), simde_mm_load_si128((simde__m128i*)ctx.v5.u32)));
	// vmrghw v6,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// vmrglw v0,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// vmsum4fp128 v13,v12,v8
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v8.f32), 0xFF));
	// vmsum4fp128 v5,v12,v7
	simde_mm_store_ps(ctx.v5.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v7.f32), 0xFF));
	// vmsum4fp128 v4,v12,v6
	simde_mm_store_ps(ctx.v4.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v6.f32), 0xFF));
	// vmsum4fp128 v12,v12,v0
	simde_mm_store_ps(ctx.v12.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32), 0xFF));
	// vmsum4fp128 v3,v11,v0
	simde_mm_store_ps(ctx.v3.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v0.f32), 0xFF));
	// vmsum4fp128 v31,v10,v0
	simde_mm_store_ps(ctx.v31.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v0.f32), 0xFF));
	// vmsum4fp128 v2,v11,v7
	simde_mm_store_ps(ctx.v2.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v7.f32), 0xFF));
	// vmsum4fp128 v1,v11,v6
	simde_mm_store_ps(ctx.v1.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v6.f32), 0xFF));
	// vmsum4fp128 v30,v10,v7
	simde_mm_store_ps(ctx.v30.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v7.f32), 0xFF));
	// vmsum4fp128 v29,v10,v6
	simde_mm_store_ps(ctx.v29.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v6.f32), 0xFF));
	// vmsum4fp128 v0,v9,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v0.f32), 0xFF));
	// vmsum4fp128 v7,v9,v7
	simde_mm_store_ps(ctx.v7.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v7.f32), 0xFF));
	// vmsum4fp128 v6,v9,v6
	simde_mm_store_ps(ctx.v6.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v6.f32), 0xFF));
	// vmsum4fp128 v11,v11,v8
	simde_mm_store_ps(ctx.v11.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v8.f32), 0xFF));
	// vmsum4fp128 v10,v10,v8
	simde_mm_store_ps(ctx.v10.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v8.f32), 0xFF));
	// vmsum4fp128 v9,v9,v8
	simde_mm_store_ps(ctx.v9.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v8.f32), 0xFF));
	// vmrghw v13,v13,v4
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v4.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// vmrghw v12,v5,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v5.u32)));
	// vmrghw v8,v2,v3
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v3.u32), simde_mm_load_si128((simde__m128i*)ctx.v2.u32)));
	// vmrghw v13,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// vmrghw v12,v30,v31
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v31.u32), simde_mm_load_si128((simde__m128i*)ctx.v30.u32)));
	// vmrghw v0,v7,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v7.u32)));
	// vmrghw v11,v11,v1
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v1.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// vmrghw v10,v10,v29
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v29.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// stvx128 v13,r0,r31
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw v9,v9,v6
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v6.u32), simde_mm_load_si128((simde__m128i*)ctx.v9.u32)));
	// vmrghw v11,v11,v8
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// vmrghw v13,v10,v12
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// vmrghw v0,v9,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v9.u32)));
	// stvx128 v11,r31,r29
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r29.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r31,r30
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r31,r28
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r28.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x826c8a28
	ctx.lr = 0x829A0568;
	sub_826C8A28(ctx, base);
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// addi r27,r31,288
	ctx.r27.s64 = ctx.r31.s64 + 288;
	// addi r11,r11,-15728
	ctx.r11.s64 = ctx.r11.s64 + -15728;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lvx128 v0,r0,r3
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,240
	ctx.r8.s64 = ctx.r1.s64 + 240;
	// lvx128 v13,r3,r29
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,240
	ctx.r9.s64 = ctx.r1.s64 + 240;
	// lvx128 v12,r3,r30
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,272
	ctx.r7.s64 = ctx.r1.s64 + 272;
	// lvx128 v11,r3,r28
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r28.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,256
	ctx.r6.s64 = ctx.r1.s64 + 256;
	// stvx128 v11,r27,r28
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r27.u32 + ctx.r28.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r24,r1,256
	ctx.r24.s64 = ctx.r1.s64 + 256;
	// stvx128 v13,r27,r29
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r27.u32 + ctx.r29.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r23,r1,272
	ctx.r23.s64 = ctx.r1.s64 + 272;
	// stvx128 v12,r27,r30
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r27.u32 + ctx.r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r20,r1,224
	ctx.r20.s64 = ctx.r1.s64 + 224;
	// stvx128 v0,r0,r27
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r27.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// ld r22,8(r10)
	ctx.r22.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// lvx128 v12,r10,r28
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r28.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// ld r21,0(r10)
	ctx.r21.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// stvx128 v12,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lvx128 v12,r10,r30
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r31,48
	ctx.r4.s64 = ctx.r31.s64 + 48;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r31,96
	ctx.r11.s64 = ctx.r31.s64 + 96;
	// lvx128 v13,r10,r29
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r5,16
	ctx.r5.s64 = 16;
	// stvx128 v13,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// std r21,0(r20)
	PPC_STORE_U64(ctx.r20.u32 + 0, ctx.r21.u64);
	// stvx128 v12,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// std r22,8(r20)
	PPC_STORE_U64(ctx.r20.u32 + 8, ctx.r22.u64);
	// lvx128 v13,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r0,r24
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r24.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r0,r23
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r23.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v12,r11,r30
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r11,r29
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r29.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v11,r11,r28
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r28.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82a4ea80
	ctx.lr = 0x829A0610;
	sub_82A4EA80(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// ld r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// ld r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// ld r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ld r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// ld r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// ld r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// bl 0x827c1d78
	ctx.lr = 0x829A0634;
	sub_827C1D78(ctx, base);
	// addi r11,r31,352
	ctx.r11.s64 = ctx.r31.s64 + 352;
	// lvx128 v13,r0,r3
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// stfs f30,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stfs f30,120(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// stfs f30,144(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f30,152(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stvx128 v13,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,224
	ctx.r8.s64 = ctx.r1.s64 + 224;
	// lvx128 v13,r3,r29
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// stvx128 v13,r11,r29
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r29.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,240
	ctx.r6.s64 = ctx.r1.s64 + 240;
	// lvx128 v13,r3,r30
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltisw v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_set1_epi32(int(0x1)));
	// stvx128 v13,r11,r30
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r24,-31963
	ctx.r24.s64 = -2094727168;
	// lvx128 v13,r3,r28
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r28.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r23,r1,156
	ctx.r23.s64 = ctx.r1.s64 + 156;
	// stvx128 v13,r11,r28
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r28.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r11,r29
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,-27804(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -27804);
	ctx.f0.f64 = double(temp.f32);
	// lvx128 v13,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v11,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// lfs f31,908(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 908);
	ctx.f31.f64 = double(temp.f32);
	// addi r9,r1,256
	ctx.r9.s64 = ctx.r1.s64 + 256;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// vor v9,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// lvx128 v10,r11,r30
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lfs f13,216(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// stw r10,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r10.u32);
	// vor v8,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// stvx128 v10,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// addi r11,r1,256
	ctx.r11.s64 = ctx.r1.s64 + 256;
	// stvx128 v12,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v8,r0,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// stvx128 v13,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// lfs f12,200(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	ctx.f12.f64 = double(temp.f32);
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// stvx128 v9,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v11,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// fsubs f12,f31,f12
	ctx.f12.f64 = double(float(ctx.f31.f64 - ctx.f12.f64));
	// lfs f0,24000(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 24000);
	ctx.f0.f64 = double(temp.f32);
	// addi r17,r1,96
	ctx.r17.s64 = ctx.r1.s64 + 96;
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// addi r24,r1,160
	ctx.r24.s64 = ctx.r1.s64 + 160;
	// fdivs f11,f31,f13
	ctx.f11.f64 = double(float(ctx.f31.f64 / ctx.f13.f64));
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r7,r1,132
	ctx.r7.s64 = ctx.r1.s64 + 132;
	// ld r23,408(r31)
	ctx.r23.u64 = PPC_LOAD_U64(ctx.r31.u32 + 408);
	// addi r21,r1,272
	ctx.r21.s64 = ctx.r1.s64 + 272;
	// ld r20,400(r31)
	ctx.r20.u64 = PPC_LOAD_U64(ctx.r31.u32 + 400);
	// addi r19,r1,208
	ctx.r19.s64 = ctx.r1.s64 + 208;
	// mr r22,r23
	ctx.r22.u64 = ctx.r23.u64;
	// lfs f10,220(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	ctx.f10.f64 = double(temp.f32);
	// mr r18,r20
	ctx.r18.u64 = ctx.r20.u64;
	// vcfsx v0,v0,1
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v0.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3F000000)))));
	// lvx128 v13,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// fdivs f13,f13,f12
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// vspltw v11,v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0x55));
	// li r4,480
	ctx.r4.s64 = 480;
	// lvx128 v12,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v10,v13,1
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0xAA));
	// vspltw v9,v12,2
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0x55));
	// lvx128 v8,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v7,v12,1
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0xAA));
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// vmulfp128 v11,v11,v8
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v11.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v8.f32)));
	// lvx128 v8,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v6,r0,r6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v13,v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v9,v9,v6
	simde_mm_store_ps(ctx.v9.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v6.f32)));
	// vspltw v12,v12,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0xFF));
	// lvx128 v5,r0,r3
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// fmuls f0,f12,f11
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// lvx128 v4,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltisw128 v127,0
	simde_mm_store_si128((simde__m128i*)ctx.v127.u32, simde_mm_set1_epi32(int(0x0)));
	// lvx128 v3,r0,r24
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r24.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// li r11,496
	ctx.r11.s64 = 496;
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// li r8,512
	ctx.r8.s64 = 512;
	// lvlx v6,0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// std r20,0(r21)
	PPC_STORE_U64(ctx.r21.u32 + 0, ctx.r20.u64);
	// vspltw v6,v6,0
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v6.u32), 0xFF));
	// fcmpu cr6,f10,f31
	ctx.cr6.compare(ctx.f10.f64, ctx.f31.f64);
	// std r23,8(r21)
	PPC_STORE_U64(ctx.r21.u32 + 8, ctx.r23.u64);
	// std r18,0(r19)
	PPC_STORE_U64(ctx.r19.u32 + 0, ctx.r18.u64);
	// vmaddfp v11,v10,v8,v11
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// std r22,8(r19)
	PPC_STORE_U64(ctx.r19.u32 + 8, ctx.r22.u64);
	// vmaddfp v10,v7,v4,v9
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v4.f32)), simde_mm_load_ps(ctx.v9.f32)));
	// vmaddfp v11,v13,v5,v11
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v5.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// lvlx v13,0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmaddfp v8,v12,v3,v10
	simde_mm_store_ps(ctx.v8.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v3.f32)), simde_mm_load_ps(ctx.v10.f32)));
	// vspltw v10,v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0xFF));
	// lvx128 v13,r0,r17
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r17.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r31,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v9,v11,v11
	simde_mm_store_ps(ctx.v9.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v11.f32), 0xEF));
	// vmsum3fp128 v7,v8,v8
	simde_mm_store_ps(ctx.v7.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v8.f32), 0xEF));
	// vrsqrtefp v13,v9
	simde_mm_store_ps(ctx.v13.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_sqrt_ps(simde_mm_load_ps(ctx.v9.f32))));
	// vor v5,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vrsqrtefp v12,v7
	simde_mm_store_ps(ctx.v12.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_sqrt_ps(simde_mm_load_ps(ctx.v7.f32))));
	// vor v3,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// vmulfp128 v4,v9,v0
	simde_mm_store_ps(ctx.v4.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v2,v7,v0
	simde_mm_store_ps(ctx.v2.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vcmpeqfp128 v9,v9,v127
	simde_mm_store_ps(ctx.v9.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v127.f32)));
	// vcmpeqfp128 v7,v7,v127
	simde_mm_store_ps(ctx.v7.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v127.f32)));
	// vmulfp128 v1,v13,v13
	simde_mm_store_ps(ctx.v1.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v31,v12,v12
	simde_mm_store_ps(ctx.v31.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v12.f32)));
	// vnmsubfp v4,v4,v1,v0
	simde_mm_store_ps(ctx.v4.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(ctx.v1.f32)), simde_mm_load_ps(ctx.v0.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vnmsubfp v0,v2,v31,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v2.f32), simde_mm_load_ps(ctx.v31.f32)), simde_mm_load_ps(ctx.v0.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v13,v13,v4,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v4.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v0,v12,v0,v12
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v13,v11,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v0,v8,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vsel v13,v13,v5,v9
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8))));
	// vsel v0,v0,v3,v7
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8))));
	// vmulfp128 v13,v13,v6
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v6.f32)));
	// vmulfp128 v0,v0,v10
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v10.f32)));
	// stvx128 v13,r31,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r31,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bge cr6,0x829a089c
	if (!ctx.cr6.lt) goto loc_829A089C;
	// lfs f0,340(r31)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f0,344(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,336(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r8.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r9.u32);
	// stw r11,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r11.u32);
	// b 0x829a09e8
	goto loc_829A09E8;
loc_829A089C:
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// lvx128 v0,r27,r30
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r27.u32 + ctx.r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// lvx128 v13,r27,r29
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r27.u32 + ctx.r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// lvx128 v12,r0,r27
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r27.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// ld r6,48(r27)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r27.u32 + 48);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// ld r4,56(r27)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r27.u32 + 56);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stvx128 v13,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,16752
	ctx.r11.s64 = ctx.r11.s64 + 16752;
	// stvx128 v12,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lvx128 v11,r0,r3
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r24,r1,208
	ctx.r24.s64 = ctx.r1.s64 + 208;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v13,v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x55));
	// stvx128 v0,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xAA));
	// std r6,0(r24)
	PPC_STORE_U64(ctx.r24.u32 + 0, ctx.r6.u64);
	// vspltw v0,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// std r4,8(r24)
	PPC_STORE_U64(ctx.r24.u32 + 8, ctx.r4.u64);
	// vmulfp128 v13,v13,v11
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v11.f32)));
	// lvx128 v11,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v13,v12,v11,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// lvx128 v10,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v0,v0,v10,v13
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// stvx128 v0,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f12,104(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f11,f12,f12,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f11.f64));
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmadds f11,f13,f13,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fcmpu cr6,f11,f31
	ctx.cr6.compare(ctx.f11.f64, ctx.f31.f64);
	// bne cr6,0x829a0968
	if (!ctx.cr6.eq) goto loc_829A0968;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// b 0x829a09a8
	goto loc_829A09A8;
loc_829A0968:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f10,16668(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16668);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// bge cr6,0x829a0988
	if (!ctx.cr6.lt) goto loc_829A0988;
	// stfs f30,112(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f30,116(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f30,120(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// b 0x829a09a8
	goto loc_829A09A8;
loc_829A0988:
	// fsqrts f11,f11
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(sqrt(ctx.f11.f64)));
	// fdivs f11,f31,f11
	ctx.f11.f64 = double(float(ctx.f31.f64 / ctx.f11.f64));
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f0,f11,f12
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
loc_829A09A8:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stfs f30,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwz r7,120(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r6,r31,528
	ctx.r6.s64 = ctx.r31.s64 + 528;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// lwz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r11,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r11.u32);
	// stw r9,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r9.u32);
	// stw r7,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r7.u32);
loc_829A09E8:
	// stw r8,532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 532, ctx.r8.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stw r10,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r10.u32);
	// addi r3,r31,416
	ctx.r3.s64 = ctx.r31.s64 + 416;
	// stw r10,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r10.u32);
	// lwz r11,128(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 128);
	// stw r11,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r11.u32);
	// lwz r11,132(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 132);
	// stw r11,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r11.u32);
	// bl 0x829a6838
	ctx.lr = 0x829A0A10;
	sub_829A6838(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lvx128 v13,r27,r28
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r27.u32 + ctx.r28.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,17456
	ctx.r11.s64 = ctx.r11.s64 + 17456;
	// lvx128 v12,r27,r30
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r27.u32 + ctx.r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lvx128 v9,r27,r29
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r27.u32 + ctx.r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v7,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// lvx128 v8,r0,r27
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r27.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v6,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// vupkd3d128 v10,v127,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v127.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v127.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v10 = vTemp;
	// vor v5,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// li r8,64
	ctx.r8.s64 = 64;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v4,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// stvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v3,v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v3.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x55));
	// stfs f31,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// vspltw v2,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v2.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xAA));
	// vspltw v1,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v1.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// li r7,80
	ctx.r7.s64 = 80;
	// vspltw v11,v10,3
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), 0x0));
	// vmaddfp v0,v12,v3,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v3.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vspltw v10,v10,3
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), 0x0));
	// vmaddfp v13,v2,v9,v0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v2.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// lvx128 v0,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v12,v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x55));
	// vspltw v9,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xAA));
	// vspltw v3,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v3.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// vmaddfp v0,v6,v12,v7
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v7.f32)));
	// vmaddfp v8,v1,v8,v13
	simde_mm_store_ps(ctx.v8.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v1.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v12,v9,v5,v0
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v5.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vspltw v13,v8,3
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), 0x0));
	// vrefp v0,v13
	simde_mm_store_ps(ctx.v0.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v5,v3,v4,v12
	simde_mm_store_ps(ctx.v5.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v3.f32), simde_mm_load_ps(ctx.v4.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vnmsubfp v9,v13,v0,v11
	simde_mm_store_ps(ctx.v9.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v11.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vor v6,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vspltw v7,v5,3
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v5.u32), 0x0));
	// vrefp v12,v7
	simde_mm_store_ps(ctx.v12.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_load_ps(ctx.v7.f32)));
	// vmaddfp v0,v0,v9,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v4,v7,v12,v10
	simde_mm_store_ps(ctx.v4.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v10.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vor v3,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// vnmsubfp v11,v13,v0,v11
	simde_mm_store_ps(ctx.v11.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v11.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vcmpeqfp v9,v0,v0
	simde_mm_store_ps(ctx.v9.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v13,v12,v4,v12
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v4.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmaddfp v12,v0,v11,v0
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v10,v7,v13,v10
	simde_mm_store_ps(ctx.v10.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v10.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vcmpeqfp v0,v13,v13
	simde_mm_store_ps(ctx.v0.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vsel v12,v6,v12,v9
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8))));
	// vmulfp128 v12,v8,v12
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v12.f32)));
	// vmaddfp v13,v13,v10,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// stvx128 v12,r31,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsel v0,v3,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8))));
	// vmulfp128 v0,v5,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vsubfp v0,v0,v12
	simde_mm_store_ps(ctx.v0.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v12.f32)));
	// stvx128 v0,r31,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// li r0,-160
	ctx.r0.s64 = -160;
	// lvx128 v127,r1,r0
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x82a4ea2c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829A0B08"))) PPC_WEAK_FUNC(sub_829A0B08);
PPC_FUNC_IMPL(__imp__sub_829A0B08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9d4
	ctx.lr = 0x829A0B10;
	__savegprlr_15(ctx, base);
	// stwu r1,-1072(r1)
	ea = -1072 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r20,-31949
	ctx.r20.s64 = -2093809664;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r11,16
	ctx.r11.s64 = 16;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// stw r31,872(r1)
	PPC_STORE_U32(ctx.r1.u32 + 872, ctx.r31.u32);
	// stw r11,876(r1)
	PPC_STORE_U32(ctx.r1.u32 + 876, ctx.r11.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r29,13024(r20)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r20.u32 + 13024);
	// ori r10,r10,36008
	ctx.r10.u64 = ctx.r10.u64 | 36008;
	// stw r11,900(r1)
	PPC_STORE_U32(ctx.r1.u32 + 900, ctx.r11.u32);
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// stw r31,896(r1)
	PPC_STORE_U32(ctx.r1.u32 + 896, ctx.r31.u32);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// stw r31,880(r1)
	PPC_STORE_U32(ctx.r1.u32 + 880, ctx.r31.u32);
	// stw r31,884(r1)
	PPC_STORE_U32(ctx.r1.u32 + 884, ctx.r31.u32);
	// lwz r11,76(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	// stw r31,888(r1)
	PPC_STORE_U32(ctx.r1.u32 + 888, ctx.r31.u32);
	// stw r31,892(r1)
	PPC_STORE_U32(ctx.r1.u32 + 892, ctx.r31.u32);
	// stw r31,904(r1)
	PPC_STORE_U32(ctx.r1.u32 + 904, ctx.r31.u32);
	// stw r31,908(r1)
	PPC_STORE_U32(ctx.r1.u32 + 908, ctx.r31.u32);
	// stw r31,912(r1)
	PPC_STORE_U32(ctx.r1.u32 + 912, ctx.r31.u32);
	// stw r31,916(r1)
	PPC_STORE_U32(ctx.r1.u32 + 916, ctx.r31.u32);
	// lwzx r15,r11,r10
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r19,0(r21)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mulli r11,r15,160
	ctx.r11.s64 = ctx.r15.s64 * 160;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// addi r30,r11,16
	ctx.r30.s64 = ctx.r11.s64 + 16;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x829a0418
	ctx.lr = 0x829A0B88;
	sub_829A0418(ctx, base);
	// lwz r11,76(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// addis r3,r11,3
	ctx.r3.s64 = ctx.r11.s64 + 196608;
	// addi r3,r3,-30160
	ctx.r3.s64 = ctx.r3.s64 + -30160;
	// bl 0x82970a18
	ctx.lr = 0x829A0B9C;
	sub_82970A18(ctx, base);
	// addi r11,r1,124
	ctx.r11.s64 = ctx.r1.s64 + 124;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// lis r27,6184
	ctx.r27.s64 = 405274624;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// ori r27,r27,390
	ctx.r27.u64 = ctx.r27.u64 | 390;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829a0bcc
	if (ctx.cr6.eq) goto loc_829A0BCC;
	// lis r27,6690
	ctx.r27.s64 = 438435840;
	// ori r27,r27,447
	ctx.r27.u64 = ctx.r27.u64 | 447;
loc_829A0BCC:
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lwz r4,132(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,128(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x82742ab8
	ctx.lr = 0x829A0BE4;
	sub_82742AB8(ctx, base);
	// lwz r11,128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// lwz r4,132(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// li r26,80
	ctx.r26.s64 = 80;
	// addi r10,r11,79
	ctx.r10.s64 = ctx.r11.s64 + 79;
	// clrlwi r9,r27,26
	ctx.r9.u64 = ctx.r27.u32 & 0x3F;
	// divwu r8,r10,r26
	ctx.r8.u32 = ctx.r10.u32 / ctx.r26.u32;
	// addi r7,r4,15
	ctx.r7.s64 = ctx.r4.s64 + 15;
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// li r10,4
	ctx.r10.s64 = 4;
	// mulli r8,r8,80
	ctx.r8.s64 = ctx.r8.s64 * 80;
	// rlwinm r7,r7,0,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFF0;
	// cmpwi cr6,r9,21
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 21, ctx.xer);
	// beq cr6,0x829a0c28
	if (ctx.cr6.eq) goto loc_829A0C28;
	// cmpwi cr6,r9,32
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32, ctx.xer);
	// beq cr6,0x829a0c28
	if (ctx.cr6.eq) goto loc_829A0C28;
	// cmpwi cr6,r9,37
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 37, ctx.xer);
	// bne cr6,0x829a0c2c
	if (!ctx.cr6.eq) goto loc_829A0C2C;
loc_829A0C28:
	// li r10,8
	ctx.r10.s64 = 8;
loc_829A0C2C:
	// mullw r10,r7,r10
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// li r28,5120
	ctx.r28.s64 = 5120;
	// lis r5,6690
	ctx.r5.s64 = 438435840;
	// divwu r10,r10,r28
	ctx.r10.u32 = ctx.r10.u32 / ctx.r28.u32;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,407
	ctx.r5.u64 = ctx.r5.u64 | 407;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82742ab8
	ctx.lr = 0x829A0C58;
	sub_82742AB8(ctx, base);
	// lwz r10,136(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// lwz r11,13024(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 13024);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// ori r9,r9,36420
	ctx.r9.u64 = ctx.r9.u64 | 36420;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// li r17,1
	ctx.r17.s64 = 1;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// addi r3,r11,144
	ctx.r3.s64 = ctx.r11.s64 + 144;
	// bl 0x829966b0
	ctx.lr = 0x829A0C88;
	sub_829966B0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829a0c98
	if (ctx.cr0.eq) goto loc_829A0C98;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x829a0c9c
	goto loc_829A0C9C;
loc_829A0C98:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_829A0C9C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829a0cd0
	if (ctx.cr6.eq) goto loc_829A0CD0;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r9,128(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x829a0cd0
	if (!ctx.cr6.eq) goto loc_829A0CD0;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r9,132(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x829a0cd0
	if (!ctx.cr6.eq) goto loc_829A0CD0;
	// lwz r23,76(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mr r17,r31
	ctx.r17.u64 = ctx.r31.u64;
	// b 0x829a0cfc
	goto loc_829A0CFC;
loc_829A0CD0:
	// lis r8,6184
	ctx.r8.s64 = 405274624;
	// lwz r4,132(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r3,128(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r8,r8,390
	ctx.r8.u64 = ctx.r8.u64 | 390;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82742998
	ctx.lr = 0x829A0CF8;
	sub_82742998(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
loc_829A0CFC:
	// lis r22,-32215
	ctx.r22.s64 = -2111242240;
	// lwz r11,128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// lis r29,-32215
	ctx.r29.s64 = -2111242240;
	// lwz r10,132(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// lfs f0,908(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// lfs f13,904(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 904);
	ctx.f13.f64 = double(temp.f32);
	// stw r10,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r10.u32);
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// bl 0x8274e890
	ctx.lr = 0x829A0D3C;
	sub_8274E890(ctx, base);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x8274ebf0
	ctx.lr = 0x829A0D48;
	sub_8274EBF0(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x8274e5d8
	ctx.lr = 0x829A0D54;
	sub_8274E5D8(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f1,904(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 904);
	ctx.f1.f64 = double(temp.f32);
	// li r6,49
	ctx.r6.s64 = 49;
	// lwz r7,144(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82765b00
	ctx.lr = 0x829A0D78;
	sub_82765B00(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x829a10c8
	ctx.lr = 0x829A0D84;
	sub_829A10C8(ctx, base);
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829a0fa4
	if (ctx.cr6.eq) goto loc_829A0FA4;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// addi r29,r11,-13880
	ctx.r29.s64 = ctx.r11.s64 + -13880;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,-13880(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13880);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829A0DAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x829a0fa4
	if (ctx.cr0.eq) goto loc_829A0FA4;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// lis r11,-31943
	ctx.r11.s64 = -2093416448;
	// addi r24,r11,-16520
	ctx.r24.s64 = ctx.r11.s64 + -16520;
	// lwz r11,-16504(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -16504);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x829a0de8
	if (!ctx.cr0.eq) goto loc_829A0DE8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lfs f0,908(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r24)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r24.u32 + 0, temp.u32);
	// stfs f0,4(r24)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r24.u32 + 4, temp.u32);
	// stw r11,-16504(r10)
	PPC_STORE_U32(ctx.r10.u32 + -16504, ctx.r11.u32);
	// stfs f0,8(r24)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r24.u32 + 8, temp.u32);
	// stfs f0,12(r24)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r24.u32 + 12, temp.u32);
loc_829A0DE8:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,-17812
	ctx.r6.s64 = ctx.r11.s64 + -17812;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x827793a8
	ctx.lr = 0x829A0E04;
	sub_827793A8(ctx, base);
	// lwz r11,128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// lwz r10,132(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r9,r11,79
	ctx.r9.s64 = ctx.r11.s64 + 79;
	// addi r8,r10,15
	ctx.r8.s64 = ctx.r10.s64 + 15;
	// divwu r9,r9,r26
	ctx.r9.u32 = ctx.r9.u32 / ctx.r26.u32;
	// rlwinm r8,r8,0,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF0;
	// mulli r9,r9,80
	ctx.r9.s64 = ctx.r9.s64 * 80;
	// mullw r7,r8,r9
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// mullw r9,r8,r9
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// divwu r9,r8,r28
	ctx.r9.u32 = ctx.r8.u32 / ctx.r28.u32;
	// divwu r8,r7,r28
	ctx.r8.u32 = ctx.r7.u32 / ctx.r28.u32;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addze r28,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r28.s64 = temp.s64;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// srawi r11,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 2;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addze r27,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r27.s64 = temp.s64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82742ab8
	ctx.lr = 0x829A0E68;
	sub_82742AB8(ctx, base);
	// lwz r11,344(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 344);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x829a0eec
	if (!ctx.cr6.eq) goto loc_829A0EEC;
	// lis r8,6688
	ctx.r8.s64 = 438304768;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r8,r8,438
	ctx.r8.u64 = ctx.r8.u64 | 438;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82742998
	ctx.lr = 0x829A0EA0;
	sub_82742998(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x82833108
	ctx.lr = 0x829A0EAC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829a0ed0
	if (ctx.cr0.eq) goto loc_829A0ED0;
	// lis r5,-17477
	ctx.r5.s64 = -1145372672;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,48059
	ctx.r5.u64 = ctx.r5.u64 | 48059;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8298f940
	ctx.lr = 0x829A0ECC;
	sub_8298F940(ctx, base);
	// b 0x829a0ed4
	goto loc_829A0ED4;
loc_829A0ED0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_829A0ED4:
	// stw r3,344(r25)
	PPC_STORE_U32(ctx.r25.u32 + 344, ctx.r3.u32);
	// li r10,5
	ctx.r10.s64 = 5;
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// rlwimi r9,r10,13,13,18
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 13) & 0x7E000) | (ctx.r9.u64 & 0xFFFFFFFFFFF81FFF);
	// stw r9,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r9.u32);
loc_829A0EEC:
	// lwz r11,344(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 344);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r10,-17796
	ctx.r6.s64 = ctx.r10.s64 + -17796;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lwz r5,76(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// bl 0x827793a8
	ctx.lr = 0x829A0F0C;
	sub_827793A8(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829A0F24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r6,r1,240
	ctx.r6.s64 = ctx.r1.s64 + 240;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829A0F44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829A0F60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,13024(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 13024);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r9,r9,36416
	ctx.r9.u64 = ctx.r9.u64 | 36416;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r4,600(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 600);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x829A0F8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82744750
	ctx.lr = 0x829A0F94;
	sub_82744750(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8298f278
	ctx.lr = 0x829A0F9C;
	sub_8298F278(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8298f278
	ctx.lr = 0x829A0FA4;
	sub_8298F278(ctx, base);
loc_829A0FA4:
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f1,908(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 908);
	ctx.f1.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x8275e9e0
	ctx.lr = 0x829A0FD4;
	sub_8275E9E0(ctx, base);
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// beq cr6,0x829a1018
	if (ctx.cr6.eq) goto loc_829A1018;
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x82833108
	ctx.lr = 0x829A0FE4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829a1008
	if (ctx.cr0.eq) goto loc_829A1008;
	// lwz r5,136(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// bl 0x8298f940
	ctx.lr = 0x829A1000;
	sub_8298F940(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x829a100c
	goto loc_829A100C;
loc_829A1008:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_829A100C:
	// lwz r11,13024(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 13024);
	// lwz r3,76(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// bl 0x829771a8
	ctx.lr = 0x829A1018;
	sub_829771A8(ctx, base);
loc_829A1018:
	// lwz r11,136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// stw r11,13128(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13128, ctx.r11.u32);
	// bl 0x8274e890
	ctx.lr = 0x829A1034;
	sub_8274E890(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x8274ebf0
	ctx.lr = 0x829A1040;
	sub_8274EBF0(ctx, base);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82744750
	ctx.lr = 0x829A1048;
	sub_82744750(ctx, base);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x82744750
	ctx.lr = 0x829A1050;
	sub_82744750(ctx, base);
	// addi r11,r15,84
	ctx.r11.s64 = ctx.r15.s64 + 84;
	// addi r3,r1,896
	ctx.r3.s64 = ctx.r1.s64 + 896;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r11,r25
	PPC_STORE_U32(ctx.r11.u32 + ctx.r25.u32, ctx.r31.u32);
	// bl 0x8243c0d0
	ctx.lr = 0x829A1064;
	sub_8243C0D0(ctx, base);
	// addi r3,r1,872
	ctx.r3.s64 = ctx.r1.s64 + 872;
	// bl 0x8243c0d0
	ctx.lr = 0x829A106C;
	sub_8243C0D0(ctx, base);
	// addi r1,r1,1072
	ctx.r1.s64 = ctx.r1.s64 + 1072;
	// b 0x82a4ea24
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829A1078"))) PPC_WEAK_FUNC(sub_829A1078);
PPC_FUNC_IMPL(__imp__sub_829A1078) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r8,20(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r9,332(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 332);
	// lwz r8,332(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 332);
	// subf. r3,r8,r9
	ctx.r3.s64 = ctx.r9.s64 - ctx.r8.s64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lwz r9,260(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	// lwz r8,260(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 260);
	// subf. r3,r8,r9
	ctx.r3.s64 = ctx.r9.s64 - ctx.r8.s64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// subf. r3,r8,r9
	ctx.r3.s64 = ctx.r9.s64 - ctx.r8.s64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// subf r3,r10,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r10.s64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829A10C8"))) PPC_WEAK_FUNC(sub_829A10C8);
PPC_FUNC_IMPL(__imp__sub_829A10C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x829A10D0;
	__savegprlr_26(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// ori r10,r10,36008
	ctx.r10.u64 = ctx.r10.u64 | 36008;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r9,76(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// addis r11,r9,3
	ctx.r11.s64 = ctx.r9.s64 + 196608;
	// addi r11,r11,-29360
	ctx.r11.s64 = ctx.r11.s64 + -29360;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// mulli r10,r10,160
	ctx.r10.s64 = ctx.r10.s64 * 160;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwz r10,152(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 152);
	// beq cr6,0x829a1148
	if (ctx.cr6.eq) goto loc_829A1148;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// and r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 & ctx.r10.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// b 0x829a1140
	goto loc_829A1140;
loc_829A1130:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x829a146c
	if (ctx.cr6.eq) goto loc_829A146C;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
loc_829A1140:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x829a1130
	if (!ctx.cr6.eq) goto loc_829A1130;
loc_829A1148:
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
loc_829A114C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x829a1464
	if (ctx.cr6.eq) goto loc_829A1464;
	// lwz r31,0(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r9,3
	ctx.r9.s64 = 3;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// li r6,1
	ctx.r6.s64 = 1;
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// lwz r8,10548(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10548);
	// rlwimi r8,r9,5,25,27
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 5) & 0x70) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFF8F);
	// stw r8,10548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10548, ctx.r8.u32);
	// ld r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// or r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 | ctx.r11.u64;
	// std r9,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r9.u64);
	// stw r6,11876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11876, ctx.r6.u32);
	// lwz r9,12456(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12456);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x829a1198
	if (!ctx.cr6.eq) goto loc_829A1198;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
loc_829A1198:
	// lwz r9,10548(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10548);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwimi r9,r10,1,30,30
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 1) & 0x2) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFFD);
	// stw r9,10548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10548, ctx.r9.u32);
	// ld r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// lwz r11,10548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10548);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,10548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10548, ctx.r11.u32);
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// bl 0x8274d428
	ctx.lr = 0x829A11D4;
	sub_8274D428(ctx, base);
	// lwz r11,10568(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10568);
	// rlwinm r11,r11,0,29,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFF807;
	// stw r11,10568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10568, ctx.r11.u32);
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// bl 0x8274c238
	ctx.lr = 0x829A11F0;
	sub_8274C238(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,11860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11860, ctx.r11.u32);
	// lwz r10,12440(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12440);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x829a1208
	if (!ctx.cr6.eq) goto loc_829A1208;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_829A1208:
	// lwz r10,10460(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10460);
	// li r12,1
	ctx.r12.s64 = 1;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// rlwimi r10,r11,0,28,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xF) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFF0);
	// rldicr r12,r12,37,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// stw r10,10460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10460, ctx.r10.u32);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// addi r29,r31,1172
	ctx.r29.s64 = ctx.r31.s64 + 1172;
	// lfs f0,904(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// lwz r11,10556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10556);
	// rlwinm r11,r11,0,29,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// stw r11,10556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10556, ctx.r11.u32);
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// oris r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 262144;
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// lwz r11,10556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10556);
	// rlwimi r11,r6,2,29,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r6.u32, 2) & 0x7) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF8);
	// stw r11,10556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10556, ctx.r11.u32);
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// stfs f0,10500(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 10500, temp.u32);
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// oris r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 134217728;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
loc_829A127C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r10,r30,32
	ctx.r10.s64 = ctx.r30.s64 + 32;
	// li r9,1
	ctx.r9.s64 = 1;
	// ori r11,r11,24
	ctx.r11.u64 = ctx.r11.u64 | 24;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// clrldi r11,r10,32
	ctx.r11.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// srd r6,r9,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r11.u8 & 0x7F));
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// or r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 | ctx.r6.u64;
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// bl 0x82742d00
	ctx.lr = 0x829A12B8;
	sub_82742D00(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,24
	ctx.r29.s64 = ctx.r29.s64 + 24;
	// cmpwi cr6,r30,16
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 16, ctx.xer);
	// blt cr6,0x829a127c
	if (ctx.cr6.lt) goto loc_829A127C;
	// stw r26,176(r27)
	PPC_STORE_U32(ctx.r27.u32 + 176, ctx.r26.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82994028
	ctx.lr = 0x829A12D4;
	sub_82994028(ctx, base);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x829a1340
	if (!ctx.cr6.gt) goto loc_829A1340;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_829A12E8:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829a132c
	if (ctx.cr6.eq) goto loc_829A132C;
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829a132c
	if (!ctx.cr6.eq) goto loc_829A132C;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829a132c
	if (ctx.cr6.eq) goto loc_829A132C;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829a132c
	if (!ctx.cr6.eq) goto loc_829A132C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,244(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 244);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829A132C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_829A132C:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x829a12e8
	if (ctx.cr6.lt) goto loc_829A12E8;
loc_829A1340:
	// bl 0x82999410
	ctx.lr = 0x829A1344;
	sub_82999410(ctx, base);
	// lis r11,-32102
	ctx.r11.s64 = -2103836672;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,4216
	ctx.r5.s64 = ctx.r11.s64 + 4216;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8298ef68
	ctx.lr = 0x829A135C;
	sub_8298EF68(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8298e8b0
	ctx.lr = 0x829A136C;
	sub_8298E8B0(ctx, base);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x829a1414
	if (!ctx.cr6.gt) goto loc_829A1414;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_829A1380:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lwzx r31,r11,r30
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x829a1400
	if (ctx.cr6.eq) goto loc_829A1400;
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829a1400
	if (!ctx.cr6.eq) goto loc_829A1400;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829a1400
	if (ctx.cr6.eq) goto loc_829A1400;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829a1400
	if (!ctx.cr6.eq) goto loc_829A1400;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829A13CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829A13E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x829a1400
	if (ctx.cr0.eq) goto loc_829A1400;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829A1400;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_829A1400:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x829a1380
	if (ctx.cr6.lt) goto loc_829A1380;
loc_829A1414:
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ab198
	ctx.lr = 0x829A1420;
	sub_829AB198(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ab260
	ctx.lr = 0x829A1430;
	sub_829AB260(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x829abb18
	ctx.lr = 0x829A1438;
	sub_829ABB18(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x829ab790
	ctx.lr = 0x829A1448;
	sub_829AB790(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8298e9a0
	ctx.lr = 0x829A1450;
	sub_8298E9A0(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-21184
	ctx.r11.s64 = ctx.r11.s64 + -21184;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x8298e5a8
	ctx.lr = 0x829A1464;
	sub_8298E5A8(ctx, base);
loc_829A1464:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
loc_829A146C:
	// addi r28,r11,4
	ctx.r28.s64 = ctx.r11.s64 + 4;
	// b 0x829a114c
	goto loc_829A114C;
}

__attribute__((alias("__imp__sub_829A1478"))) PPC_WEAK_FUNC(sub_829A1478);
PPC_FUNC_IMPL(__imp__sub_829A1478) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r11,-17764
	ctx.r3.s64 = ctx.r11.s64 + -17764;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829A1488"))) PPC_WEAK_FUNC(sub_829A1488);
PPC_FUNC_IMPL(__imp__sub_829A1488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x829a14c0
	if (ctx.cr6.eq) goto loc_829A14C0;
	// bl 0x829a1a78
	ctx.lr = 0x829A14B0;
	sub_829A1A78(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x829a14c0
	if (!ctx.cr6.eq) goto loc_829A14C0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x829a14cc
	goto loc_829A14CC;
loc_829A14C0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827138c0
	ctx.lr = 0x829A14CC;
	sub_827138C0(ctx, base);
loc_829A14CC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829A14E8"))) PPC_WEAK_FUNC(sub_829A14E8);
PPC_FUNC_IMPL(__imp__sub_829A14E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x829a1a78
	sub_829A1A78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829A14F0"))) PPC_WEAK_FUNC(sub_829A14F0);
PPC_FUNC_IMPL(__imp__sub_829A14F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,464
	ctx.r3.s64 = 464;
	// bl 0x82833108
	ctx.lr = 0x829A1510;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x829a158c
	if (ctx.cr0.eq) goto loc_829A158C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82713428
	ctx.lr = 0x829A1524;
	sub_82713428(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r4,r30,392
	ctx.r4.s64 = ctx.r30.s64 + 392;
	// addi r11,r11,-17744
	ctx.r11.s64 = ctx.r11.s64 + -17744;
	// addi r3,r31,392
	ctx.r3.s64 = ctx.r31.s64 + 392;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,368(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 368);
	// stw r11,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r11.u32);
	// lwz r11,372(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 372);
	// stw r11,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r11.u32);
	// lwz r11,376(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 376);
	// stw r11,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r11.u32);
	// lwz r11,380(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 380);
	// stw r11,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r11.u32);
	// lwz r11,384(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 384);
	// stw r11,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r11.u32);
	// lwz r11,388(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 388);
	// stw r11,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r11.u32);
	// bl 0x82873b58
	ctx.lr = 0x829A156C;
	sub_82873B58(ctx, base);
	// addi r4,r30,416
	ctx.r4.s64 = ctx.r30.s64 + 416;
	// addi r3,r31,416
	ctx.r3.s64 = ctx.r31.s64 + 416;
	// bl 0x82873b58
	ctx.lr = 0x829A1578;
	sub_82873B58(ctx, base);
	// addi r4,r30,440
	ctx.r4.s64 = ctx.r30.s64 + 440;
	// addi r3,r31,440
	ctx.r3.s64 = ctx.r31.s64 + 440;
	// bl 0x82873b58
	ctx.lr = 0x829A1584;
	sub_82873B58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x829a1590
	goto loc_829A1590;
loc_829A158C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_829A1590:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829A15A8"))) PPC_WEAK_FUNC(sub_829A15A8);
PPC_FUNC_IMPL(__imp__sub_829A15A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x829a1a78
	ctx.lr = 0x829A15C8;
	sub_829A1A78(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x829a15d8
	if (!ctx.cr6.eq) goto loc_829A15D8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x829a15f0
	goto loc_829A15F0;
loc_829A15D8:
	// bl 0x824121e8
	ctx.lr = 0x829A15DC;
	sub_824121E8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x829a15f0
	if (ctx.cr6.eq) goto loc_829A15F0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82713600
	ctx.lr = 0x829A15F0;
	sub_82713600(ctx, base);
loc_829A15F0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829A1608"))) PPC_WEAK_FUNC(sub_829A1608);
PPC_FUNC_IMPL(__imp__sub_829A1608) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,452(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 452);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829A1618"))) PPC_WEAK_FUNC(sub_829A1618);
PPC_FUNC_IMPL(__imp__sub_829A1618) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,440
	ctx.r3.s64 = ctx.r31.s64 + 440;
	// bl 0x8239d768
	ctx.lr = 0x829A163C;
	sub_8239D768(ctx, base);
	// addi r3,r31,416
	ctx.r3.s64 = ctx.r31.s64 + 416;
	// bl 0x8239d768
	ctx.lr = 0x829A1644;
	sub_8239D768(ctx, base);
	// addi r3,r31,392
	ctx.r3.s64 = ctx.r31.s64 + 392;
	// bl 0x8239d768
	ctx.lr = 0x829A164C;
	sub_8239D768(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82981190
	ctx.lr = 0x829A1654;
	sub_82981190(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829a1664
	if (ctx.cr0.eq) goto loc_829A1664;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x829A1664;
	sub_82332DB8(ctx, base);
loc_829A1664:
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

__attribute__((alias("__imp__sub_829A1680"))) PPC_WEAK_FUNC(sub_829A1680);
PPC_FUNC_IMPL(__imp__sub_829A1680) {
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
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82981000
	ctx.lr = 0x829A16A0;
	sub_82981000(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// addi r10,r11,-17744
	ctx.r10.s64 = ctx.r11.s64 + -17744;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r11.u32);
	// lfs f13,908(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 908);
	ctx.f13.f64 = double(temp.f32);
	// stw r10,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r11.u32);
	// lfs f0,904(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r11.u32);
	// stw r11,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r11.u32);
	// stw r11,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r11.u32);
	// stw r10,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r10.u32);
	// stw r11,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r11.u32);
	// stw r11,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r11.u32);
	// stw r11,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r11.u32);
	// stw r11,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r11.u32);
	// stw r11,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r11.u32);
	// stw r10,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r10.u32);
	// stw r11,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r11.u32);
	// stw r11,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r11.u32);
	// stw r11,456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 456, ctx.r11.u32);
	// stw r11,460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 460, ctx.r11.u32);
	// stw r11,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r11.u32);
	// stfs f13,144(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
	// stfs f0,148(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// stfs f0,152(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// stfs f0,156(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 156, temp.u32);
	// stfs f0,160(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
	// stfs f13,164(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 164, temp.u32);
	// stfs f0,168(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 168, temp.u32);
	// stfs f0,172(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 172, temp.u32);
	// stfs f0,176(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 176, temp.u32);
	// stfs f0,180(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 180, temp.u32);
	// stfs f13,184(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 184, temp.u32);
	// stfs f0,188(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 188, temp.u32);
	// stfs f0,192(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 192, temp.u32);
	// stfs f0,196(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 196, temp.u32);
	// stfs f0,200(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 200, temp.u32);
	// stfs f13,204(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 204, temp.u32);
	// stfs f13,208(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 208, temp.u32);
	// stfs f0,212(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 212, temp.u32);
	// stfs f0,216(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 216, temp.u32);
	// stfs f0,220(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 220, temp.u32);
	// stfs f0,224(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 224, temp.u32);
	// stfs f13,228(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 228, temp.u32);
	// stfs f0,232(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 232, temp.u32);
	// stfs f0,236(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 236, temp.u32);
	// stfs f0,240(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 240, temp.u32);
	// stfs f0,244(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 244, temp.u32);
	// stfs f13,248(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 248, temp.u32);
	// stfs f0,252(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 252, temp.u32);
	// stfs f0,256(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 256, temp.u32);
	// stfs f0,260(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 260, temp.u32);
	// stfs f0,264(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 264, temp.u32);
	// stfs f13,268(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 268, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829A17A8"))) PPC_WEAK_FUNC(sub_829A17A8);
PPC_FUNC_IMPL(__imp__sub_829A17A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,456(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 456);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x829a17dc
	if (!ctx.cr6.gt) goto loc_829A17DC;
	// lwz r10,452(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 452);
loc_829A17BC:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,16(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// rlwinm. r8,r8,0,28,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x829a17e4
	if (!ctx.cr0.eq) goto loc_829A17E4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x829a17bc
	if (ctx.cr6.lt) goto loc_829A17BC;
loc_829A17DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_829A17E4:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829A17F0"))) PPC_WEAK_FUNC(sub_829A17F0);
PPC_FUNC_IMPL(__imp__sub_829A17F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r8,408(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 408);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x829a182c
	if (!ctx.cr6.gt) goto loc_829A182C;
	// lwz r11,404(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 404);
loc_829A1804:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm. r7,r9,0,9,9
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x829a181c
	if (ctx.cr0.eq) goto loc_829A181C;
	// rlwinm. r9,r9,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x829a1834
	if (!ctx.cr0.eq) goto loc_829A1834;
loc_829A181C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x829a1804
	if (ctx.cr6.lt) goto loc_829A1804;
loc_829A182C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_829A1834:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829A1840"))) PPC_WEAK_FUNC(sub_829A1840);
PPC_FUNC_IMPL(__imp__sub_829A1840) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x829a184c
	if (ctx.cr6.eq) goto loc_829A184C;
	// b 0x829815a8
	sub_829815A8(ctx, base);
	return;
loc_829A184C:
	// lwz r11,388(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 388);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829A1868"))) PPC_WEAK_FUNC(sub_829A1868);
PPC_FUNC_IMPL(__imp__sub_829A1868) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x829A1870;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,12
	ctx.r11.s64 = 12;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// addi r8,r11,24
	ctx.r8.s64 = ctx.r11.s64 + 24;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r11,13024(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13024);
	// lwzx r10,r8,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// beq 0x829a18cc
	if (ctx.cr0.eq) goto loc_829A18CC;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lwz r9,1444(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1444);
	// ori r10,r10,36008
	ctx.r10.u64 = ctx.r10.u64 | 36008;
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x829a18c4
	if (!ctx.cr6.eq) goto loc_829A18C4;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
loc_829A18C4:
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// b 0x829a18d4
	goto loc_829A18D4;
loc_829A18CC:
	// lwz r11,1444(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1444);
	// xori r26,r11,1
	ctx.r26.u64 = ctx.r11.u64 ^ 1;
loc_829A18D4:
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r11,408(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 408);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r9,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r9.u8);
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// ble cr6,0x829a1944
	if (!ctx.cr6.gt) goto loc_829A1944;
	// lwz r30,404(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 404);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_829A1928:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,40
	ctx.r4.s64 = ctx.r11.s64 + 40;
	// bl 0x8287f600
	ctx.lr = 0x829A1938;
	sub_8287F600(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x829a1928
	if (!ctx.cr0.eq) goto loc_829A1928;
loc_829A1944:
	// lbz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 120);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x829a198c
	if (ctx.cr0.eq) goto loc_829A198C;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827f0480
	ctx.lr = 0x829A1960;
	sub_827F0480(ctx, base);
	// rlwinm r11,r26,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 6) & 0xFFFFFFC0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r31,r11,144
	ctx.r31.s64 = ctx.r11.s64 + 144;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82a786b8
	ctx.lr = 0x829A197C;
	sub_82A786B8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a78780
	ctx.lr = 0x829A198C;
	sub_82A78780(ctx, base);
loc_829A198C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829A1998"))) PPC_WEAK_FUNC(sub_829A1998);
PPC_FUNC_IMPL(__imp__sub_829A1998) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,408(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 408);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lwz r10,404(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 404);
loc_829A19B0:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// or r3,r9,r3
	ctx.r3.u64 = ctx.r9.u64 | ctx.r3.u64;
	// bne 0x829a19b0
	if (!ctx.cr0.eq) goto loc_829A19B0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829A19D0"))) PPC_WEAK_FUNC(sub_829A19D0);
PPC_FUNC_IMPL(__imp__sub_829A19D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-27140(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27140);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x829a1a10
	if (!ctx.cr0.eq) goto loc_829A1A10;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stw r11,-27140(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27140, ctx.r11.u32);
	// addi r3,r9,-17764
	ctx.r3.s64 = ctx.r9.s64 + -17764;
	// bl 0x82816528
	ctx.lr = 0x829A1A08;
	sub_82816528(ctx, base);
	// stw r3,-27144(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27144, ctx.r3.u32);
	// b 0x829a1a14
	goto loc_829A1A14;
loc_829A1A10:
	// lwz r3,-27144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27144);
loc_829A1A14:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829A1A28"))) PPC_WEAK_FUNC(sub_829A1A28);
PPC_FUNC_IMPL(__imp__sub_829A1A28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x829a1a78
	ctx.lr = 0x829A1A48;
	sub_829A1A78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829A1A5C;
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

__attribute__((alias("__imp__sub_829A1A78"))) PPC_WEAK_FUNC(sub_829A1A78);
PPC_FUNC_IMPL(__imp__sub_829A1A78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,19348
	ctx.r31.s64 = ctx.r11.s64 + 19348;
	// lwz r11,19344(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19344);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x829a1ac0
	if (!ctx.cr0.eq) goto loc_829A1AC0;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-17448
	ctx.r9.s64 = ctx.r9.s64 + -17448;
	// stw r11,19344(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19344, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-10752
	ctx.r3.s64 = ctx.r11.s64 + -10752;
	// bl 0x82a4c758
	ctx.lr = 0x829A1AC0;
	sub_82A4C758(ctx, base);
loc_829A1AC0:
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

__attribute__((alias("__imp__sub_829A1AD8"))) PPC_WEAK_FUNC(sub_829A1AD8);
PPC_FUNC_IMPL(__imp__sub_829A1AD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,13504
	ctx.r3.s64 = ctx.r11.s64 + 13504;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829A1AE8"))) PPC_WEAK_FUNC(sub_829A1AE8);
PPC_FUNC_IMPL(__imp__sub_829A1AE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x829a1b20
	if (ctx.cr6.eq) goto loc_829A1B20;
	// bl 0x82934868
	ctx.lr = 0x829A1B10;
	sub_82934868(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x829a1b20
	if (!ctx.cr6.eq) goto loc_829A1B20;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x829a1b2c
	goto loc_829A1B2C;
loc_829A1B20:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827138c0
	ctx.lr = 0x829A1B2C;
	sub_827138C0(ctx, base);
loc_829A1B2C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829A1B48"))) PPC_WEAK_FUNC(sub_829A1B48);
PPC_FUNC_IMPL(__imp__sub_829A1B48) {
	PPC_FUNC_PROLOGUE();
	// b 0x82934868
	sub_82934868(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829A1B50"))) PPC_WEAK_FUNC(sub_829A1B50);
PPC_FUNC_IMPL(__imp__sub_829A1B50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,656
	ctx.r3.s64 = 656;
	// bl 0x82833108
	ctx.lr = 0x829A1B6C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829a1b80
	if (ctx.cr0.eq) goto loc_829A1B80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x829a1c18
	ctx.lr = 0x829A1B7C;
	sub_829A1C18(ctx, base);
	// b 0x829a1b84
	goto loc_829A1B84;
loc_829A1B80:
	// li r3,0
	ctx.r3.s64 = 0;
loc_829A1B84:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829A1B98"))) PPC_WEAK_FUNC(sub_829A1B98);
PPC_FUNC_IMPL(__imp__sub_829A1B98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82934868
	ctx.lr = 0x829A1BB8;
	sub_82934868(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x829a1bc8
	if (!ctx.cr6.eq) goto loc_829A1BC8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x829a1be0
	goto loc_829A1BE0;
loc_829A1BC8:
	// bl 0x824121e8
	ctx.lr = 0x829A1BCC;
	sub_824121E8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x829a1be0
	if (ctx.cr6.eq) goto loc_829A1BE0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82713600
	ctx.lr = 0x829A1BE0;
	sub_82713600(ctx, base);
loc_829A1BE0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829A1BF8"))) PPC_WEAK_FUNC(sub_829A1BF8);
PPC_FUNC_IMPL(__imp__sub_829A1BF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,412(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 412);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829A1C00"))) PPC_WEAK_FUNC(sub_829A1C00);
PPC_FUNC_IMPL(__imp__sub_829A1C00) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,408(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 408);
	// mulli r11,r4,36
	ctx.r11.s64 = ctx.r4.s64 * 36;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829A1C18"))) PPC_WEAK_FUNC(sub_829A1C18);
PPC_FUNC_IMPL(__imp__sub_829A1C18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x829A1C20;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82713428
	ctx.lr = 0x829A1C30;
	sub_82713428(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r11,r11,-17392
	ctx.r11.s64 = ctx.r11.s64 + -17392;
	// addi r29,r31,396
	ctx.r29.s64 = ctx.r31.s64 + 396;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r27,r30,396
	ctx.r27.s64 = ctx.r30.s64 + 396;
	// lwz r10,368(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 368);
	// li r11,36
	ctx.r11.s64 = 36;
	// stw r10,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r10.u32);
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// lwz r10,372(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 372);
	// stw r10,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r10.u32);
	// lwz r10,376(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 376);
	// stw r10,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r10.u32);
	// lwz r10,380(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 380);
	// stw r10,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r10.u32);
	// lwz r10,384(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 384);
	// stw r10,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r10.u32);
	// lwz r10,388(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 388);
	// stw r10,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r10.u32);
	// lwz r10,392(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 392);
	// stw r10,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r10.u32);
	// stw r11,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r11.u32);
	// stw r28,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r28.u32);
	// stw r28,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r28.u32);
	// stw r28,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r28.u32);
	// stw r28,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r28.u32);
	// stw r28,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r28.u32);
	// beq cr6,0x829a1d28
	if (ctx.cr6.eq) goto loc_829A1D28;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r28,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x829a1d28
	if (!ctx.cr6.gt) goto loc_829A1D28;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829a1cd0
	if (ctx.cr0.eq) goto loc_829A1CD0;
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332c38
	ctx.lr = 0x829A1CD0;
	sub_82332C38(ctx, base);
loc_829A1CD0:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// mr r25,r28
	ctx.r25.u64 = ctx.r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x829a1d28
	if (!ctx.cr6.gt) goto loc_829A1D28;
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
loc_829A1CE4:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,36
	ctx.r5.s64 = 36;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332d50
	ctx.lr = 0x829A1CF8;
	sub_82332D50(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mulli r10,r3,36
	ctx.r10.s64 = ctx.r3.s64 * 36;
	// add. r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x829a1d14
	if (ctx.cr0.eq) goto loc_829A1D14;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// add r4,r11,r26
	ctx.r4.u64 = ctx.r11.u64 + ctx.r26.u64;
	// bl 0x82935028
	ctx.lr = 0x829A1D14;
	sub_82935028(ctx, base);
loc_829A1D14:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r26,r26,36
	ctx.r26.s64 = ctx.r26.s64 + 36;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x829a1ce4
	if (ctx.cr6.lt) goto loc_829A1CE4;
loc_829A1D28:
	// lwz r11,420(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 420);
	// addi r29,r31,436
	ctx.r29.s64 = ctx.r31.s64 + 436;
	// addi r27,r30,436
	ctx.r27.s64 = ctx.r30.s64 + 436;
	// li r10,4
	ctx.r10.s64 = 4;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// stw r11,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r11.u32);
	// lwz r11,424(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 424);
	// stw r11,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r11.u32);
	// lwz r11,428(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 428);
	// stw r11,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r11.u32);
	// lwz r11,432(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 432);
	// stw r11,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r11.u32);
	// stw r10,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r10.u32);
	// stw r28,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r28.u32);
	// stw r28,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r28.u32);
	// stw r28,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r28.u32);
	// stw r28,456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 456, ctx.r28.u32);
	// stw r28,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r28.u32);
	// beq cr6,0x829a1dbc
	if (ctx.cr6.eq) goto loc_829A1DBC;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r28,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x829a1dbc
	if (!ctx.cr6.gt) goto loc_829A1DBC;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829a1da0
	if (ctx.cr0.eq) goto loc_829A1DA0;
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332c38
	ctx.lr = 0x829A1DA0;
	sub_82332C38(ctx, base);
loc_829A1DA0:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// lwz r4,12(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x82a45878
	ctx.lr = 0x829A1DB4;
	sub_82A45878(ctx, base);
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r11,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
loc_829A1DBC:
	// lwz r11,460(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 460);
	// addi r4,r30,496
	ctx.r4.s64 = ctx.r30.s64 + 496;
	// addi r3,r31,496
	ctx.r3.s64 = ctx.r31.s64 + 496;
	// li r5,28
	ctx.r5.s64 = 28;
	// stw r11,460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 460, ctx.r11.u32);
	// lwz r11,464(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 464);
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
	// lwz r11,488(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 488);
	// stw r11,488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 488, ctx.r11.u32);
	// lwz r11,492(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 492);
	// stw r11,492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 492, ctx.r11.u32);
	// bl 0x82a4ea80
	ctx.lr = 0x829A1E14;
	sub_82A4EA80(ctx, base);
	// lwz r11,524(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 524);
	// addi r4,r30,544
	ctx.r4.s64 = ctx.r30.s64 + 544;
	// addi r3,r31,544
	ctx.r3.s64 = ctx.r31.s64 + 544;
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r11,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r11.u32);
	// lwz r11,528(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 528);
	// stw r11,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r11.u32);
	// bl 0x82a4ea80
	ctx.lr = 0x829A1E34;
	sub_82A4EA80(ctx, base);
	// addi r11,r31,636
	ctx.r11.s64 = ctx.r31.s64 + 636;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r11,608(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 608);
	// std r11,608(r31)
	PPC_STORE_U64(ctx.r31.u32 + 608, ctx.r11.u64);
	// lwz r11,616(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 616);
	// stw r11,616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 616, ctx.r11.u32);
	// lwz r11,620(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 620);
	// stw r11,620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 620, ctx.r11.u32);
	// lfs f0,624(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 624);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,624(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 624, temp.u32);
	// lwz r11,628(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 628);
	// stw r11,628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 628, ctx.r11.u32);
	// lwz r11,632(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 632);
	// stw r11,632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 632, ctx.r11.u32);
	// lwz r11,636(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 636);
	// stw r11,636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 636, ctx.r11.u32);
	// lwz r11,640(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 640);
	// stw r11,640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 640, ctx.r11.u32);
	// lwz r11,644(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 644);
	// stw r11,644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 644, ctx.r11.u32);
	// lwz r11,648(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 648);
	// stw r11,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829A1E98"))) PPC_WEAK_FUNC(sub_829A1E98);
PPC_FUNC_IMPL(__imp__sub_829A1E98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x829A1EA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r11,r11,-17392
	ctx.r11.s64 = ctx.r11.s64 + -17392;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x829a2378
	ctx.lr = 0x829A1EBC;
	sub_829A2378(ctx, base);
	// addi r31,r30,436
	ctx.r31.s64 = ctx.r30.s64 + 436;
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r5,452(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 452);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332ca8
	ctx.lr = 0x829A1ED8;
	sub_82332CA8(ctx, base);
	// lwz r3,448(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 448);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829a1ee8
	if (ctx.cr6.eq) goto loc_829A1EE8;
	// bl 0x82332db8
	ctx.lr = 0x829A1EE8;
	sub_82332DB8(ctx, base);
loc_829A1EE8:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r30,396
	ctx.r3.s64 = ctx.r30.s64 + 396;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x829a27d0
	ctx.lr = 0x829A1F00;
	sub_829A27D0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82981190
	ctx.lr = 0x829A1F08;
	sub_82981190(ctx, base);
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829a1f18
	if (ctx.cr0.eq) goto loc_829A1F18;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332db8
	ctx.lr = 0x829A1F18;
	sub_82332DB8(ctx, base);
loc_829A1F18:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829A1F28"))) PPC_WEAK_FUNC(sub_829A1F28);
PPC_FUNC_IMPL(__imp__sub_829A1F28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r11,-17428
	ctx.r3.s64 = ctx.r11.s64 + -17428;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829A1F38"))) PPC_WEAK_FUNC(sub_829A1F38);
PPC_FUNC_IMPL(__imp__sub_829A1F38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x829a1f70
	if (ctx.cr6.eq) goto loc_829A1F70;
	// bl 0x829a2928
	ctx.lr = 0x829A1F60;
	sub_829A2928(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x829a1f70
	if (!ctx.cr6.eq) goto loc_829A1F70;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x829a1f7c
	goto loc_829A1F7C;
loc_829A1F70:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827138c0
	ctx.lr = 0x829A1F7C;
	sub_827138C0(ctx, base);
loc_829A1F7C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829A1F98"))) PPC_WEAK_FUNC(sub_829A1F98);
PPC_FUNC_IMPL(__imp__sub_829A1F98) {
	PPC_FUNC_PROLOGUE();
	// b 0x829a2928
	sub_829A2928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829A1FA0"))) PPC_WEAK_FUNC(sub_829A1FA0);
PPC_FUNC_IMPL(__imp__sub_829A1FA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,464
	ctx.r3.s64 = 464;
	// bl 0x82833108
	ctx.lr = 0x829A1FBC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829a1fd0
	if (ctx.cr0.eq) goto loc_829A1FD0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x829a2060
	ctx.lr = 0x829A1FCC;
	sub_829A2060(ctx, base);
	// b 0x829a1fd4
	goto loc_829A1FD4;
loc_829A1FD0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_829A1FD4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829A1FE8"))) PPC_WEAK_FUNC(sub_829A1FE8);
PPC_FUNC_IMPL(__imp__sub_829A1FE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x829a2928
	ctx.lr = 0x829A2008;
	sub_829A2928(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x829a2018
	if (!ctx.cr6.eq) goto loc_829A2018;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x829a2030
	goto loc_829A2030;
loc_829A2018:
	// bl 0x824121e8
	ctx.lr = 0x829A201C;
	sub_824121E8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x829a2030
	if (ctx.cr6.eq) goto loc_829A2030;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82713600
	ctx.lr = 0x829A2030;
	sub_82713600(ctx, base);
loc_829A2030:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829A2048"))) PPC_WEAK_FUNC(sub_829A2048);
PPC_FUNC_IMPL(__imp__sub_829A2048) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,380(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 380);
	// mulli r11,r4,36
	ctx.r11.s64 = ctx.r4.s64 * 36;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829A2060"))) PPC_WEAK_FUNC(sub_829A2060);
PPC_FUNC_IMPL(__imp__sub_829A2060) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x829A2068;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// bl 0x82713428
	ctx.lr = 0x829A2078;
	sub_82713428(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,-17096
	ctx.r11.s64 = ctx.r11.s64 + -17096;
	// addi r31,r27,368
	ctx.r31.s64 = ctx.r27.s64 + 368;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r29,r26,368
	ctx.r29.s64 = ctx.r26.s64 + 368;
	// li r11,36
	ctx.r11.s64 = 36;
	// stw r30,376(r27)
	PPC_STORE_U32(ctx.r27.u32 + 376, ctx.r30.u32);
	// stw r30,380(r27)
	PPC_STORE_U32(ctx.r27.u32 + 380, ctx.r30.u32);
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// stw r11,372(r27)
	PPC_STORE_U32(ctx.r27.u32 + 372, ctx.r11.u32);
	// stw r30,384(r27)
	PPC_STORE_U32(ctx.r27.u32 + 384, ctx.r30.u32);
	// stw r30,388(r27)
	PPC_STORE_U32(ctx.r27.u32 + 388, ctx.r30.u32);
	// stw r30,368(r27)
	PPC_STORE_U32(ctx.r27.u32 + 368, ctx.r30.u32);
	// beq cr6,0x829a2138
	if (ctx.cr6.eq) goto loc_829A2138;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x829a2138
	if (!ctx.cr6.gt) goto loc_829A2138;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829a20e0
	if (ctx.cr0.eq) goto loc_829A20E0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c38
	ctx.lr = 0x829A20E0;
	sub_82332C38(ctx, base);
loc_829A20E0:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x829a2138
	if (!ctx.cr6.gt) goto loc_829A2138;
loc_829A20F0:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,36
	ctx.r5.s64 = 36;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332d50
	ctx.lr = 0x829A2104;
	sub_82332D50(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r10,r3,36
	ctx.r10.s64 = ctx.r3.s64 * 36;
	// add. r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x829a2124
	if (ctx.cr0.eq) goto loc_829A2124;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// li r5,36
	ctx.r5.s64 = 36;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82a4ea80
	ctx.lr = 0x829A2124;
	sub_82A4EA80(ctx, base);
loc_829A2124:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,36
	ctx.r30.s64 = ctx.r30.s64 + 36;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x829a20f0
	if (ctx.cr6.lt) goto loc_829A20F0;
loc_829A2138:
	// addi r4,r26,400
	ctx.r4.s64 = ctx.r26.s64 + 400;
	// addi r3,r27,400
	ctx.r3.s64 = ctx.r27.s64 + 400;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x82a4ea80
	ctx.lr = 0x829A2148;
	sub_82A4EA80(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829A2158"))) PPC_WEAK_FUNC(sub_829A2158);
PPC_FUNC_IMPL(__imp__sub_829A2158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x829A2160;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,-17096
	ctx.r11.s64 = ctx.r11.s64 + -17096;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r31,r29,368
	ctx.r31.s64 = ctx.r29.s64 + 368;
	// lwz r11,388(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 388);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r30,384(r29)
	PPC_STORE_U32(ctx.r29.u32 + 384, ctx.r30.u32);
	// beq cr6,0x829a21a4
	if (ctx.cr6.eq) goto loc_829A21A4;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c38
	ctx.lr = 0x829A21A4;
	sub_82332C38(ctx, base);
loc_829A21A4:
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r6,36
	ctx.r6.s64 = 36;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332ca8
	ctx.lr = 0x829A21BC;
	sub_82332CA8(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829a21cc
	if (ctx.cr6.eq) goto loc_829A21CC;
	// bl 0x82332db8
	ctx.lr = 0x829A21CC;
	sub_82332DB8(ctx, base);
loc_829A21CC:
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// bl 0x82981190
	ctx.lr = 0x829A21E0;
	sub_82981190(ctx, base);
	// clrlwi. r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829a21f0
	if (ctx.cr0.eq) goto loc_829A21F0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332db8
	ctx.lr = 0x829A21F0;
	sub_82332DB8(ctx, base);
loc_829A21F0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829A2200"))) PPC_WEAK_FUNC(sub_829A2200);
PPC_FUNC_IMPL(__imp__sub_829A2200) {
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
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82981000
	ctx.lr = 0x829A2220;
	sub_82981000(ctx, base);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r10,r31,336
	ctx.r10.s64 = ctx.r31.s64 + 336;
	// addi r10,r11,-17392
	ctx.r10.s64 = ctx.r11.s64 + -17392;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,904(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// li r9,36
	ctx.r9.s64 = 36;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r8,4
	ctx.r8.s64 = 4;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r9,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r9.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stw r11,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r11.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stw r11,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r11.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stw r11,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r11.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stw r11,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r11.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stw r11,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r11.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stw r8,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r8.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r11.u32);
	// stw r11,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r11.u32);
	// addi r8,r31,496
	ctx.r8.s64 = ctx.r31.s64 + 496;
	// stw r11,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r11.u32);
	// stw r11,456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 456, ctx.r11.u32);
	// stw r11,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r11.u32);
	// stfs f0,608(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 608, temp.u32);
	// stw r10,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r10.u32);
	// stfs f0,612(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 612, temp.u32);
	// stfs f0,624(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 624, temp.u32);
	// stw r11,616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 616, ctx.r11.u32);
	// stfs f0,628(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 628, temp.u32);
	// stw r11,620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 620, ctx.r11.u32);
	// stfs f0,632(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 632, temp.u32);
	// stw r11,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r11.u32);
	// stfs f0,636(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 636, temp.u32);
	// stw r11,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r11.u32);
	// stfs f0,640(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 640, temp.u32);
	// stw r11,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r11.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f0,644(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 644, temp.u32);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f0,648(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 648, temp.u32);
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r8,460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 460, ctx.r8.u32);
	// stw r7,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r7.u32);
	// stw r11,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r11.u32);
	// stw r11,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r11.u32);
	// stw r11,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r11.u32);
	// stw r11,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r11.u32);
	// stw r11,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r11.u32);
	// stw r6,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r6.u32);
	// stw r11,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r11.u32);
	// lwz r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r10,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r10.u32);
	// stw r9,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r9.u32);
	// stw r10,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r10.u32);
	// stw r9,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r9.u32);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r7,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r7.u32);
	// stb r11,360(r31)
	PPC_STORE_U8(ctx.r31.u32 + 360, ctx.r11.u8);
	// stw r7,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r7.u32);
	// lwz r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stb r11,520(r31)
	PPC_STORE_U8(ctx.r31.u32 + 520, ctx.r11.u8);
	// stw r10,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r10.u32);
	// stw r9,500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 500, ctx.r9.u32);
	// stw r10,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r10.u32);
	// stw r9,512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 512, ctx.r9.u32);
	// stw r8,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 516, ctx.r8.u32);
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_829A2378"))) PPC_WEAK_FUNC(sub_829A2378);
PPC_FUNC_IMPL(__imp__sub_829A2378) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x829A2380;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r25,r28
	ctx.r25.u64 = ctx.r28.u64;
	// lwz r11,412(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 412);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x829a2414
	if (!ctx.cr6.gt) goto loc_829A2414;
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
loc_829A23A0:
	// lwz r11,408(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 408);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// add r31,r26,r11
	ctx.r31.u64 = ctx.r26.u64 + ctx.r11.u64;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x829a23dc
	if (!ctx.cr6.gt) goto loc_829A23DC;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_829A23BC:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// bl 0x82332db8
	ctx.lr = 0x829A23C8;
	sub_82332DB8(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x829a23bc
	if (ctx.cr6.lt) goto loc_829A23BC;
loc_829A23DC:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// stw r28,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829a2400
	if (ctx.cr6.eq) goto loc_829A2400;
	// stw r28,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r28.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82332c38
	ctx.lr = 0x829A2400;
	sub_82332C38(ctx, base);
loc_829A2400:
	// lwz r11,412(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 412);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r26,r26,36
	ctx.r26.s64 = ctx.r26.s64 + 36;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x829a23a0
	if (ctx.cr6.lt) goto loc_829A23A0;
loc_829A2414:
	// addi r30,r27,396
	ctx.r30.s64 = ctx.r27.s64 + 396;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x829a2480
	if (!ctx.cr6.gt) goto loc_829A2480;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_829A242C:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r31,r11,12
	ctx.r31.s64 = ctx.r11.s64 + 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,28(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// bl 0x82332ca8
	ctx.lr = 0x829A2450;
	sub_82332CA8(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829a2460
	if (ctx.cr6.eq) goto loc_829A2460;
	// bl 0x82332db8
	ctx.lr = 0x829A2460;
	sub_82332DB8(ctx, base);
loc_829A2460:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// addi r29,r29,36
	ctx.r29.s64 = ctx.r29.s64 + 36;
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x829a242c
	if (ctx.cr6.lt) goto loc_829A242C;
loc_829A2480:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r28,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829a24a4
	if (ctx.cr6.eq) goto loc_829A24A4;
	// stw r28,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r28.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332c38
	ctx.lr = 0x829A24A4;
	sub_82332C38(ctx, base);
loc_829A24A4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829A24B0"))) PPC_WEAK_FUNC(sub_829A24B0);
PPC_FUNC_IMPL(__imp__sub_829A24B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x829A24B8;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stb r9,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r9.u8);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,412(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// ble cr6,0x829a2538
	if (!ctx.cr6.gt) goto loc_829A2538;
	// lwz r27,408(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 408);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_829A251C:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,40
	ctx.r4.s64 = ctx.r11.s64 + 40;
	// bl 0x8287f600
	ctx.lr = 0x829A252C;
	sub_8287F600(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r27,r27,36
	ctx.r27.s64 = ctx.r27.s64 + 36;
	// bne 0x829a251c
	if (!ctx.cr0.eq) goto loc_829A251C;
loc_829A2538:
	// lbz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 120);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x829a2594
	if (ctx.cr0.eq) goto loc_829A2594;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r11,1444(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1444);
	// xori r28,r11,1
	ctx.r28.u64 = ctx.r11.u64 ^ 1;
	// bl 0x827f0480
	ctx.lr = 0x829A2568;
	sub_827F0480(ctx, base);
	// rlwinm r11,r28,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 6) & 0xFFFFFFC0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r11,144
	ctx.r31.s64 = ctx.r11.s64 + 144;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82a786b8
	ctx.lr = 0x829A2584;
	sub_82A786B8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a78780
	ctx.lr = 0x829A2594;
	sub_82A78780(ctx, base);
loc_829A2594:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829A25A0"))) PPC_WEAK_FUNC(sub_829A25A0);
PPC_FUNC_IMPL(__imp__sub_829A25A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x829A25A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829A25C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x829a2618
	if (!ctx.cr0.gt) goto loc_829A2618;
loc_829A25D0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829A25E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829a25f8
	if (ctx.cr0.eq) goto loc_829A25F8;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// or r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 | ctx.r29.u64;
loc_829A25F8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829A2610;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x829a25d0
	if (ctx.cr6.lt) goto loc_829A25D0;
loc_829A2618:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829A2628"))) PPC_WEAK_FUNC(sub_829A2628);
PPC_FUNC_IMPL(__imp__sub_829A2628) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x829a2634
	if (ctx.cr6.eq) goto loc_829A2634;
	// b 0x829815a8
	sub_829815A8(ctx, base);
	return;
loc_829A2634:
	// lwz r11,528(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 528);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829a265c
	if (ctx.cr6.eq) goto loc_829A265C;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x829a2654
	if (!ctx.cr6.gt) goto loc_829A2654;
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
loc_829A2654:
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
loc_829A265C:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829A2668"))) PPC_WEAK_FUNC(sub_829A2668);
PPC_FUNC_IMPL(__imp__sub_829A2668) {
	PPC_FUNC_PROLOGUE();
	// addi r4,r3,544
	ctx.r4.s64 = ctx.r3.s64 + 544;
	// b 0x82981298
	sub_82981298(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829A2670"))) PPC_WEAK_FUNC(sub_829A2670);
PPC_FUNC_IMPL(__imp__sub_829A2670) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,412(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 412);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lwz r10,408(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 408);
loc_829A2688:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// or r3,r9,r3
	ctx.r3.u64 = ctx.r9.u64 | ctx.r3.u64;
	// bne 0x829a2688
	if (!ctx.cr0.eq) goto loc_829A2688;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829A26A8"))) PPC_WEAK_FUNC(sub_829A26A8);
PPC_FUNC_IMPL(__imp__sub_829A26A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x829A26B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r4,r29,336
	ctx.r4.s64 = ctx.r29.s64 + 336;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,28
	ctx.r5.s64 = 28;
	// bl 0x82a4ea80
	ctx.lr = 0x829A26D0;
	sub_82A4EA80(ctx, base);
	// lbz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 104);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x829a272c
	if (ctx.cr0.eq) goto loc_829A272C;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r11,1444(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1444);
	// xori r28,r11,1
	ctx.r28.u64 = ctx.r11.u64 ^ 1;
	// bl 0x827f0480
	ctx.lr = 0x829A2700;
	sub_827F0480(ctx, base);
	// rlwinm r11,r28,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 6) & 0xFFFFFFC0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r31,r11,144
	ctx.r31.s64 = ctx.r11.s64 + 144;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82a786b8
	ctx.lr = 0x829A271C;
	sub_82A786B8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a78780
	ctx.lr = 0x829A272C;
	sub_82A78780(ctx, base);
loc_829A272C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829A2738"))) PPC_WEAK_FUNC(sub_829A2738);
PPC_FUNC_IMPL(__imp__sub_829A2738) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829A275C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// and r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 & ctx.r31.u64;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
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

__attribute__((alias("__imp__sub_829A2788"))) PPC_WEAK_FUNC(sub_829A2788);
PPC_FUNC_IMPL(__imp__sub_829A2788) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,384(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 384);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lwz r11,380(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 380);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
loc_829A27A4:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// ble cr6,0x829a27bc
	if (!ctx.cr6.gt) goto loc_829A27BC;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// or r3,r9,r3
	ctx.r3.u64 = ctx.r9.u64 | ctx.r3.u64;
loc_829A27BC:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// bne 0x829a27a4
	if (!ctx.cr0.eq) goto loc_829A27A4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829A27D0"))) PPC_WEAK_FUNC(sub_829A27D0);
PPC_FUNC_IMPL(__imp__sub_829A27D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x829A27D8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r26,16(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x829a2844
	if (!ctx.cr6.gt) goto loc_829A2844;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
loc_829A27F8:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r31,r11,12
	ctx.r31.s64 = ctx.r11.s64 + 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,28(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// bl 0x82332ca8
	ctx.lr = 0x829A281C;
	sub_82332CA8(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829a282c
	if (ctx.cr6.eq) goto loc_829A282C;
	// bl 0x82332db8
	ctx.lr = 0x829A282C;
	sub_82332DB8(ctx, base);
loc_829A282C:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r27,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r27.u32);
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// addi r30,r30,36
	ctx.r30.s64 = ctx.r30.s64 + 36;
	// stw r27,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r27.u32);
	// bne 0x829a27f8
	if (!ctx.cr0.eq) goto loc_829A27F8;
loc_829A2844:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,36
	ctx.r6.s64 = 36;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332ca8
	ctx.lr = 0x829A285C;
	sub_82332CA8(ctx, base);
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829a286c
	if (ctx.cr6.eq) goto loc_829A286C;
	// bl 0x82332db8
	ctx.lr = 0x829A286C;
	sub_82332DB8(ctx, base);
loc_829A286C:
	// stw r27,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r27.u32);
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// stw r27,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r27.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829A2880"))) PPC_WEAK_FUNC(sub_829A2880);
PPC_FUNC_IMPL(__imp__sub_829A2880) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-27148(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27148);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x829a28c0
	if (!ctx.cr0.eq) goto loc_829A28C0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stw r11,-27148(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27148, ctx.r11.u32);
	// addi r3,r9,-17428
	ctx.r3.s64 = ctx.r9.s64 + -17428;
	// bl 0x82816528
	ctx.lr = 0x829A28B8;
	sub_82816528(ctx, base);
	// stw r3,-27152(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27152, ctx.r3.u32);
	// b 0x829a28c4
	goto loc_829A28C4;
loc_829A28C0:
	// lwz r3,-27152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27152);
loc_829A28C4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829A28D8"))) PPC_WEAK_FUNC(sub_829A28D8);
PPC_FUNC_IMPL(__imp__sub_829A28D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x829a2928
	ctx.lr = 0x829A28F8;
	sub_829A2928(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829A290C;
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

__attribute__((alias("__imp__sub_829A2928"))) PPC_WEAK_FUNC(sub_829A2928);
PPC_FUNC_IMPL(__imp__sub_829A2928) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,19356
	ctx.r31.s64 = ctx.r11.s64 + 19356;
	// lwz r11,19352(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19352);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x829a2970
	if (!ctx.cr0.eq) goto loc_829A2970;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-16800
	ctx.r9.s64 = ctx.r9.s64 + -16800;
	// stw r11,19352(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19352, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-10728
	ctx.r3.s64 = ctx.r11.s64 + -10728;
	// bl 0x82a4c758
	ctx.lr = 0x829A2970;
	sub_82A4C758(ctx, base);
loc_829A2970:
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

__attribute__((alias("__imp__sub_829A2988"))) PPC_WEAK_FUNC(sub_829A2988);
PPC_FUNC_IMPL(__imp__sub_829A2988) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r11,-16780
	ctx.r3.s64 = ctx.r11.s64 + -16780;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829A2998"))) PPC_WEAK_FUNC(sub_829A2998);
PPC_FUNC_IMPL(__imp__sub_829A2998) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x829a29d0
	if (ctx.cr6.eq) goto loc_829A29D0;
	// bl 0x829a32e0
	ctx.lr = 0x829A29C0;
	sub_829A32E0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x829a29d0
	if (!ctx.cr6.eq) goto loc_829A29D0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x829a29dc
	goto loc_829A29DC;
loc_829A29D0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82713768
	ctx.lr = 0x829A29DC;
	sub_82713768(ctx, base);
loc_829A29DC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829A29F8"))) PPC_WEAK_FUNC(sub_829A29F8);
PPC_FUNC_IMPL(__imp__sub_829A29F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x829a32e0
	sub_829A32E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829A2A00"))) PPC_WEAK_FUNC(sub_829A2A00);
PPC_FUNC_IMPL(__imp__sub_829A2A00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,368
	ctx.r3.s64 = 368;
	// bl 0x82833108
	ctx.lr = 0x829A2A20;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x829a2aa8
	if (ctx.cr0.eq) goto loc_829A2AA8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82713558
	ctx.lr = 0x829A2A34;
	sub_82713558(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// addi r11,r11,-16752
	ctx.r11.s64 = ctx.r11.s64 + -16752;
	// addi r4,r30,80
	ctx.r4.s64 = ctx.r30.s64 + 80;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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
	// bl 0x82a4ea80
	ctx.lr = 0x829A2A68;
	sub_82A4EA80(ctx, base);
	// addi r3,r31,208
	ctx.r3.s64 = ctx.r31.s64 + 208;
	// addi r4,r30,208
	ctx.r4.s64 = ctx.r30.s64 + 208;
	// li r5,128
	ctx.r5.s64 = 128;
	// bl 0x82a4ea80
	ctx.lr = 0x829A2A78;
	sub_82A4EA80(ctx, base);
	// ld r11,336(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 336);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r11,336(r31)
	PPC_STORE_U64(ctx.r31.u32 + 336, ctx.r11.u64);
	// lwz r11,344(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 344);
	// stw r11,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r11.u32);
	// lwz r11,348(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 348);
	// stw r11,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r11.u32);
	// lwz r11,352(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 352);
	// stw r11,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r11.u32);
	// lwz r11,356(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 356);
	// stw r11,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r11.u32);
	// b 0x829a2aac
	goto loc_829A2AAC;
loc_829A2AA8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_829A2AAC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829A2AC8"))) PPC_WEAK_FUNC(sub_829A2AC8);
PPC_FUNC_IMPL(__imp__sub_829A2AC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x829a32e0
	ctx.lr = 0x829A2AE8;
	sub_829A32E0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x829a2afc
	if (ctx.cr6.eq) goto loc_829A2AFC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82713600
	ctx.lr = 0x829A2AFC;
	sub_82713600(ctx, base);
loc_829A2AFC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829A2B18"))) PPC_WEAK_FUNC(sub_829A2B18);
PPC_FUNC_IMPL(__imp__sub_829A2B18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x829A2B20;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x829bc1c8
	ctx.lr = 0x829A2B30;
	sub_829BC1C8(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stw r27,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r27.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,-16752
	ctx.r11.s64 = ctx.r11.s64 + -16752;
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// lis r26,-31949
	ctx.r26.s64 = -2093809664;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r28,-1
	ctx.r28.s64 = -1;
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// addi r4,r31,68
	ctx.r4.s64 = ctx.r31.s64 + 68;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r7,248(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 248);
	// lwz r5,252(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 252);
	// addi r29,r31,72
	ctx.r29.s64 = ctx.r31.s64 + 72;
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x824091a0
	ctx.lr = 0x829A2B74;
	sub_824091A0(ctx, base);
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r7,248(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 248);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,256(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 256);
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x825b7c80
	ctx.lr = 0x829A2B90;
	sub_825B7C80(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r30,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r30.u32);
	// lwz r11,252(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 252);
	// stw r11,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r11.u32);
	// lwz r11,256(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 256);
	// stw r11,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r11.u32);
	// lwz r11,248(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 248);
	// stw r11,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r11.u32);
	// lwz r11,272(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 272);
	// stw r11,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829A2BD0"))) PPC_WEAK_FUNC(sub_829A2BD0);
PPC_FUNC_IMPL(__imp__sub_829A2BD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x829A2BD8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,-1
	ctx.r29.s64 = -1;
	// addi r27,r31,68
	ctx.r27.s64 = ctx.r31.s64 + 68;
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x829a2c14
	if (!ctx.cr6.eq) goto loc_829A2C14;
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r7,352(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// lwz r5,344(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// bl 0x824091a0
	ctx.lr = 0x829A2C14;
	sub_824091A0(ctx, base);
loc_829A2C14:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r28,r31,72
	ctx.r28.s64 = ctx.r31.s64 + 72;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x829a2c40
	if (!ctx.cr6.eq) goto loc_829A2C40;
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r7,352(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// lwz r5,348(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// bl 0x825b7c80
	ctx.lr = 0x829A2C40;
	sub_825B7C80(ctx, base);
loc_829A2C40:
	// lwz r29,44(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x82879f68
	ctx.lr = 0x829A2C48;
	sub_82879F68(ctx, base);
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
	ctx.lr = 0x829A2C60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x829a2c6c
	if (!ctx.cr0.eq) goto loc_829A2C6C;
	// li r29,0
	ctx.r29.s64 = 0;
loc_829A2C6C:
	// lwz r11,108(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829a2c94
	if (!ctx.cr6.eq) goto loc_829A2C94;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829a2c94
	if (ctx.cr6.eq) goto loc_829A2C94;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x829a2c98
	if (!ctx.cr6.eq) goto loc_829A2C98;
loc_829A2C94:
	// li r10,0
	ctx.r10.s64 = 0;
loc_829A2C98:
	// lwz r30,13024(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// addi r4,r29,1424
	ctx.r4.s64 = ctx.r29.s64 + 1424;
	// li r5,64
	ctx.r5.s64 = 64;
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// lwz r11,1444(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1444);
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r11,r11,84
	ctx.r11.s64 = ctx.r11.s64 + 84;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// lwz r11,1444(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1444);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// xori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 ^ 64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,80
	ctx.r3.s64 = ctx.r11.s64 + 80;
	// bl 0x82a4ea80
	ctx.lr = 0x829A2CD8;
	sub_82A4EA80(ctx, base);
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// addi r4,r29,1488
	ctx.r4.s64 = ctx.r29.s64 + 1488;
	// li r5,64
	ctx.r5.s64 = 64;
	// lwz r11,1444(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1444);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// xori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 ^ 64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,208
	ctx.r3.s64 = ctx.r11.s64 + 208;
	// bl 0x82a4ea80
	ctx.lr = 0x829A2CFC;
	sub_82A4EA80(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829A2D08"))) PPC_WEAK_FUNC(sub_829A2D08);
PPC_FUNC_IMPL(__imp__sub_829A2D08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x829A2D10;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82a61724
	ctx.lr = 0x829A2D18;
	__savefpr_19(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// lwz r9,244(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 244);
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// beq cr6,0x829a31f4
	if (ctx.cr6.eq) goto loc_829A31F4;
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// beq cr6,0x829a31f4
	if (ctx.cr6.eq) goto loc_829A31F4;
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// lfs f1,212(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 212);
	ctx.f1.f64 = double(temp.f32);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// stfs f1,108(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// ori r8,r10,36008
	ctx.r8.u64 = ctx.r10.u64 | 36008;
	// lwz r5,13024(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13024);
	// lwz r9,76(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 76);
	// addis r10,r9,3
	ctx.r10.s64 = ctx.r9.s64 + 196608;
	// addi r10,r10,-30160
	ctx.r10.s64 = ctx.r10.s64 + -30160;
	// addi r3,r10,568
	ctx.r3.s64 = ctx.r10.s64 + 568;
	// lwzx r10,r9,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,208
	ctx.r10.s64 = ctx.r11.s64 + 208;
	// lfs f0,264(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lfs f0,260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// lfs f13,256(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x8281a488
	ctx.lr = 0x829A2DB0;
	sub_8281A488(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x829a2dc0
	if (!ctx.cr0.eq) goto loc_829A2DC0;
loc_829A2DB8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x829a3228
	goto loc_829A3228;
loc_829A2DC0:
	// lwz r8,76(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 76);
	// li r9,32
	ctx.r9.s64 = 32;
	// li r10,48
	ctx.r10.s64 = 48;
	// lfs f13,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// addis r7,r8,3
	ctx.r7.s64 = ctx.r8.s64 + 196608;
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// lfs f0,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r7,-29936
	ctx.r7.s64 = ctx.r7.s64 + -29936;
	// lfs f11,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// li r11,16
	ctx.r11.s64 = 16;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r29,r1,144
	ctx.r29.s64 = ctx.r1.s64 + 144;
	// lvx128 v0,r7,r9
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r28,-32215
	ctx.r28.s64 = -2111242240;
	// lvx128 v13,r7,r10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// stvx128 v0,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stvx128 v13,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lvx128 v12,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r27,2
	ctx.r27.s64 = 131072;
	// lvx128 v11,r7,r11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32 + ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addis r8,r8,3
	ctx.r8.s64 = ctx.r8.s64 + 196608;
	// stvx128 v12,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// ori r7,r27,35920
	ctx.r7.u64 = ctx.r27.u64 | 35920;
	// stvx128 v11,r0,r29
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r29.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r8,-30000
	ctx.r8.s64 = ctx.r8.s64 + -30000;
	// lfs f5,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f29,f5,f13
	ctx.f29.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// lfs f30,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f27,f30,f13
	ctx.f27.f64 = double(float(ctx.f30.f64 * ctx.f13.f64));
	// lfs f6,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f28,f6,f12,f29
	ctx.f28.f64 = double(float(ctx.f6.f64 * ctx.f12.f64 + ctx.f29.f64));
	// lfs f31,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f13,f31,f13
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f13.f64));
	// lfs f10,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f9,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f9.f64 = double(temp.f32);
	// fadds f25,f10,f9
	ctx.f25.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// lfs f4,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f22,f4,f0
	ctx.f22.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// lfs f1,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f9,f9,f11,f28
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f11.f64 + ctx.f28.f64));
	// lfs f7,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f8,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f13,f4,f12,f13
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f12.f64 + ctx.f13.f64));
	// lfs f2,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f1,f1,f12,f27
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f12.f64 + ctx.f27.f64));
	// lfs f3,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f3.f64 = double(temp.f32);
	// fadds f24,f8,f7
	ctx.f24.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// fadds f23,f3,f2
	ctx.f23.f64 = double(float(ctx.f3.f64 + ctx.f2.f64));
	// lfs f29,904(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 904);
	ctx.f29.f64 = double(temp.f32);
	// fadds f5,f25,f5
	ctx.f5.f64 = double(float(ctx.f25.f64 + ctx.f5.f64));
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// fadds f12,f9,f10
	ctx.f12.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// addi r29,r1,176
	ctx.r29.s64 = ctx.r1.s64 + 176;
	// fmadds f13,f7,f11,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 + ctx.f13.f64));
	// lis r27,-32215
	ctx.r27.s64 = -2111242240;
	// fadds f4,f24,f31
	ctx.f4.f64 = double(float(ctx.f24.f64 + ctx.f31.f64));
	// lvx128 v0,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// fmadds f10,f2,f11,f1
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f11.f64 + ctx.f1.f64));
	// lvx128 v13,r8,r11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32 + ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r8,r9
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r8,r10
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfsx f26,r5,r7
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	ctx.f26.f64 = double(temp.f32);
	// stvx128 v0,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// fadds f31,f23,f30
	ctx.f31.f64 = double(float(ctx.f23.f64 + ctx.f30.f64));
	// lfd f30,16376(r27)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r27.u32 + 16376);
	// fmadds f11,f5,f29,f6
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f29.f64 + ctx.f6.f64));
	// stvx128 v13,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v12,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// fadds f28,f13,f8
	ctx.f28.f64 = double(float(ctx.f13.f64 + ctx.f8.f64));
	// stvx128 v11,r0,r29
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r29.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// fmadds f9,f4,f29,f22
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f29.f64 + ctx.f22.f64));
	// fadds f27,f10,f3
	ctx.f27.f64 = double(float(ctx.f10.f64 + ctx.f3.f64));
	// fmadds f0,f31,f29,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f29.f64 + ctx.f0.f64));
	// fmuls f13,f11,f11
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f13,f9,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f13.f64));
	// fcmpu cr6,f12,f26
	ctx.cr6.compare(ctx.f12.f64, ctx.f26.f64);
	// fmadds f0,f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fsqrts f31,f0
	ctx.f31.f64 = double(float(sqrt(ctx.f0.f64)));
	// bge cr6,0x829a2f48
	if (!ctx.cr6.lt) goto loc_829A2F48;
	// fsubs f0,f26,f12
	ctx.f0.f64 = double(float(ctx.f26.f64 - ctx.f12.f64));
	// fdivs f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f31.f64));
	// bl 0x82a4d550
	ctx.lr = 0x829A2F24;
	sub_82A4D550(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// bl 0x82a4e038
	ctx.lr = 0x829A2F2C;
	sub_82A4E038(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmr f12,f26
	ctx.f12.f64 = ctx.f26.f64;
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fsel f0,f0,f0,f30
	ctx.f0.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f30.f64;
	// fsub f13,f0,f31
	ctx.f13.f64 = ctx.f0.f64 - ctx.f31.f64;
	// fsel f0,f13,f31,f0
	ctx.f0.f64 = ctx.f13.f64 >= 0.0 ? ctx.f31.f64 : ctx.f0.f64;
	// frsp f31,f0
	ctx.f31.f64 = double(float(ctx.f0.f64));
loc_829A2F48:
	// fsubs f0,f27,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f27.f64 - ctx.f31.f64));
	// lfs f4,156(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f4.f64 = double(temp.f32);
	// fadds f13,f27,f31
	ctx.f13.f64 = double(float(ctx.f27.f64 + ctx.f31.f64));
	// lfs f7,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f27,f28,f31
	ctx.f27.f64 = double(float(ctx.f28.f64 - ctx.f31.f64));
	// lfs f6,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f6.f64 = double(temp.f32);
	// fadds f31,f28,f31
	ctx.f31.f64 = double(float(ctx.f28.f64 + ctx.f31.f64));
	// lfs f26,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f26.f64 = double(temp.f32);
	// lfs f11,172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// fmuls f28,f11,f12
	ctx.f28.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f5,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f5.f64 = double(temp.f32);
	// lfs f3,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f3.f64 = double(temp.f32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lfs f2,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f2.f64 = double(temp.f32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lfs f23,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f23.f64 = double(temp.f32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lfs f25,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f25.f64 = double(temp.f32);
	// fmuls f23,f23,f12
	ctx.f23.f64 = double(float(ctx.f23.f64 * ctx.f12.f64));
	// fmuls f24,f4,f0
	ctx.f24.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f22,f6,f0
	ctx.f22.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f19,f7,f27
	ctx.f19.f64 = double(float(ctx.f7.f64 * ctx.f27.f64));
	// lfs f1,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f6,f6,f13
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// lfs f21,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f21.f64 = double(temp.f32);
	// fmuls f7,f7,f31
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// lfs f8,188(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f4,f4,f13
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// lfs f10,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f20,f5,f0
	ctx.f20.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f11,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f5,f5,f13
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// lfs f9,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f25,f25,f12
	ctx.f25.f64 = double(float(ctx.f25.f64 * ctx.f12.f64));
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// fmuls f21,f21,f12
	ctx.f21.f64 = double(float(ctx.f21.f64 * ctx.f12.f64));
	// lfs f12,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f24,f26,f27,f24
	ctx.f24.f64 = double(float(ctx.f26.f64 * ctx.f27.f64 + ctx.f24.f64));
	// fmadds f22,f2,f27,f22
	ctx.f22.f64 = double(float(ctx.f2.f64 * ctx.f27.f64 + ctx.f22.f64));
	// fmadds f0,f3,f0,f19
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f0.f64 + ctx.f19.f64));
	// fmadds f6,f2,f31,f6
	ctx.f6.f64 = double(float(ctx.f2.f64 * ctx.f31.f64 + ctx.f6.f64));
	// fmadds f13,f3,f13,f7
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f13.f64 + ctx.f7.f64));
	// fmadds f7,f26,f31,f4
	ctx.f7.f64 = double(float(ctx.f26.f64 * ctx.f31.f64 + ctx.f4.f64));
	// fmadds f27,f1,f27,f20
	ctx.f27.f64 = double(float(ctx.f1.f64 * ctx.f27.f64 + ctx.f20.f64));
	// fmadds f5,f1,f31,f5
	ctx.f5.f64 = double(float(ctx.f1.f64 * ctx.f31.f64 + ctx.f5.f64));
	// fadds f4,f24,f28
	ctx.f4.f64 = double(float(ctx.f24.f64 + ctx.f28.f64));
	// fadds f3,f22,f23
	ctx.f3.f64 = double(float(ctx.f22.f64 + ctx.f23.f64));
	// fadds f0,f0,f25
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f25.f64));
	// fadds f6,f6,f23
	ctx.f6.f64 = double(float(ctx.f6.f64 + ctx.f23.f64));
	// fadds f1,f13,f25
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f25.f64));
	// fadds f7,f7,f28
	ctx.f7.f64 = double(float(ctx.f7.f64 + ctx.f28.f64));
	// fadds f2,f27,f21
	ctx.f2.f64 = double(float(ctx.f27.f64 + ctx.f21.f64));
	// fadds f5,f5,f21
	ctx.f5.f64 = double(float(ctx.f5.f64 + ctx.f21.f64));
	// fadds f13,f4,f8
	ctx.f13.f64 = double(float(ctx.f4.f64 + ctx.f8.f64));
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fadds f4,f3,f10
	ctx.f4.f64 = double(float(ctx.f3.f64 + ctx.f10.f64));
	// stfs f4,100(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f6,f6,f10
	ctx.f6.f64 = double(float(ctx.f6.f64 + ctx.f10.f64));
	// fadds f11,f1,f11
	ctx.f11.f64 = double(float(ctx.f1.f64 + ctx.f11.f64));
	// fadds f10,f7,f8
	ctx.f10.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// fadds f4,f2,f9
	ctx.f4.f64 = double(float(ctx.f2.f64 + ctx.f9.f64));
	// stfs f4,104(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// fadds f9,f5,f9
	ctx.f9.f64 = double(float(ctx.f5.f64 + ctx.f9.f64));
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// fdivs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stfs f10,108(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f6,100(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f9,104(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r4,12(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// fdivs f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 / ctx.f10.f64));
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// fmuls f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lwz r29,4(r9)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// fmuls f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lis r28,-32244
	ctx.r28.s64 = -2113142784;
	// stw r29,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r29.u32);
	// lis r27,-32215
	ctx.r27.s64 = -2111242240;
	// stw r9,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r9.u32);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r6,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r6.u32);
	// stw r5,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r5.u32);
	// lfs f0,30996(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 30996);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r10.u32);
	// lfs f9,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f9,f13,f9
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// stw r4,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r4.u32);
	// stw r3,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r3.u32);
	// lfs f13,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfd f13,16368(r27)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r27.u32 + 16368);
	// fsubs f8,f10,f11
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// fsubs f7,f9,f12
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// fsel f6,f8,f11,f10
	ctx.f6.f64 = ctx.f8.f64 >= 0.0 ? ctx.f11.f64 : ctx.f10.f64;
	// stfs f6,80(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsel f6,f7,f12,f9
	ctx.f6.f64 = ctx.f7.f64 >= 0.0 ? ctx.f12.f64 : ctx.f9.f64;
	// stfs f6,84(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fsel f12,f7,f9,f12
	ctx.f12.f64 = ctx.f7.f64 >= 0.0 ? ctx.f9.f64 : ctx.f12.f64;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fsel f11,f8,f10,f11
	ctx.f11.f64 = ctx.f8.f64 >= 0.0 ? ctx.f10.f64 : ctx.f11.f64;
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r11.u64);
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,4(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f11,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f12,0(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f11,4(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fadds f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f12,4(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fadds f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f11,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fadds f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f12,4(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsel f0,f0,f0,f30
	ctx.f0.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f30.f64;
	// fsel f12,f12,f12,f30
	ctx.f12.f64 = ctx.f12.f64 >= 0.0 ? ctx.f12.f64 : ctx.f30.f64;
	// fsub f11,f0,f13
	ctx.f11.f64 = ctx.f0.f64 - ctx.f13.f64;
	// fsub f10,f12,f13
	ctx.f10.f64 = ctx.f12.f64 - ctx.f13.f64;
	// fsel f0,f11,f13,f0
	ctx.f0.f64 = ctx.f11.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// fsel f12,f10,f13,f12
	ctx.f12.f64 = ctx.f10.f64 >= 0.0 ? ctx.f13.f64 : ctx.f12.f64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// frsp f0,f12
	ctx.f0.f64 = double(float(ctx.f12.f64));
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f12,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsel f0,f0,f0,f30
	ctx.f0.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f30.f64;
	// fsel f12,f12,f12,f30
	ctx.f12.f64 = ctx.f12.f64 >= 0.0 ? ctx.f12.f64 : ctx.f30.f64;
	// fsub f11,f0,f13
	ctx.f11.f64 = ctx.f0.f64 - ctx.f13.f64;
	// fsub f10,f12,f13
	ctx.f10.f64 = ctx.f12.f64 - ctx.f13.f64;
	// fsel f0,f11,f13,f0
	ctx.f0.f64 = ctx.f11.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// fsel f13,f10,f13,f12
	ctx.f13.f64 = ctx.f10.f64 >= 0.0 ? ctx.f13.f64 : ctx.f12.f64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f11,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bne cr6,0x829a3228
	if (!ctx.cr6.eq) goto loc_829A3228;
	// b 0x829a2db8
	goto loc_829A2DB8;
loc_829A31F4:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lfs f0,908(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r11.u64);
loc_829A3228:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82a61770
	ctx.lr = 0x829A3234;
	__restfpr_19(ctx, base);
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829A3238"))) PPC_WEAK_FUNC(sub_829A3238);
PPC_FUNC_IMPL(__imp__sub_829A3238) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-27156(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27156);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x829a3278
	if (!ctx.cr0.eq) goto loc_829A3278;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stw r11,-27156(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27156, ctx.r11.u32);
	// addi r3,r9,-16780
	ctx.r3.s64 = ctx.r9.s64 + -16780;
	// bl 0x82816528
	ctx.lr = 0x829A3270;
	sub_82816528(ctx, base);
	// stw r3,-27160(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27160, ctx.r3.u32);
	// b 0x829a327c
	goto loc_829A327C;
loc_829A3278:
	// lwz r3,-27160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27160);
loc_829A327C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829A3290"))) PPC_WEAK_FUNC(sub_829A3290);
PPC_FUNC_IMPL(__imp__sub_829A3290) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x829a32e0
	ctx.lr = 0x829A32B0;
	sub_829A32E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829A32C4;
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

__attribute__((alias("__imp__sub_829A32E0"))) PPC_WEAK_FUNC(sub_829A32E0);
PPC_FUNC_IMPL(__imp__sub_829A32E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,19364
	ctx.r31.s64 = ctx.r11.s64 + 19364;
	// lwz r11,19360(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19360);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x829a3328
	if (!ctx.cr0.eq) goto loc_829A3328;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-16616
	ctx.r9.s64 = ctx.r9.s64 + -16616;
	// stw r11,19360(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19360, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-10704
	ctx.r3.s64 = ctx.r11.s64 + -10704;
	// bl 0x82a4c758
	ctx.lr = 0x829A3328;
	sub_82A4C758(ctx, base);
loc_829A3328:
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

__attribute__((alias("__imp__sub_829A3340"))) PPC_WEAK_FUNC(sub_829A3340);
PPC_FUNC_IMPL(__imp__sub_829A3340) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r11,-16596
	ctx.r3.s64 = ctx.r11.s64 + -16596;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829A3350"))) PPC_WEAK_FUNC(sub_829A3350);
PPC_FUNC_IMPL(__imp__sub_829A3350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x829a3388
	if (ctx.cr6.eq) goto loc_829A3388;
	// bl 0x829a3f18
	ctx.lr = 0x829A3378;
	sub_829A3F18(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x829a3388
	if (!ctx.cr6.eq) goto loc_829A3388;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x829a3394
	goto loc_829A3394;
loc_829A3388:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827138c0
	ctx.lr = 0x829A3394;
	sub_827138C0(ctx, base);
loc_829A3394:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829A33B0"))) PPC_WEAK_FUNC(sub_829A33B0);
PPC_FUNC_IMPL(__imp__sub_829A33B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x829a3f18
	sub_829A3F18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829A33B8"))) PPC_WEAK_FUNC(sub_829A33B8);
PPC_FUNC_IMPL(__imp__sub_829A33B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,464
	ctx.r3.s64 = 464;
	// bl 0x82833108
	ctx.lr = 0x829A33D4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829a33e8
	if (ctx.cr0.eq) goto loc_829A33E8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x829a3478
	ctx.lr = 0x829A33E4;
	sub_829A3478(ctx, base);
	// b 0x829a33ec
	goto loc_829A33EC;
loc_829A33E8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_829A33EC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829A3400"))) PPC_WEAK_FUNC(sub_829A3400);
PPC_FUNC_IMPL(__imp__sub_829A3400) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x829a3f18
	ctx.lr = 0x829A3420;
	sub_829A3F18(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x829a3430
	if (!ctx.cr6.eq) goto loc_829A3430;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x829a3448
	goto loc_829A3448;
loc_829A3430:
	// bl 0x824121e8
	ctx.lr = 0x829A3434;
	sub_824121E8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x829a3448
	if (ctx.cr6.eq) goto loc_829A3448;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82713600
	ctx.lr = 0x829A3448;
	sub_82713600(ctx, base);
loc_829A3448:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829A3460"))) PPC_WEAK_FUNC(sub_829A3460);
PPC_FUNC_IMPL(__imp__sub_829A3460) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829A3478"))) PPC_WEAK_FUNC(sub_829A3478);
PPC_FUNC_IMPL(__imp__sub_829A3478) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x829A3480;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x82713428
	ctx.lr = 0x829A3490;
	sub_82713428(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,-16552
	ctx.r11.s64 = ctx.r11.s64 + -16552;
	// addi r31,r28,372
	ctx.r31.s64 = ctx.r28.s64 + 372;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r29,r27,372
	ctx.r29.s64 = ctx.r27.s64 + 372;
	// li r11,96
	ctx.r11.s64 = 96;
	// lwz r10,368(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 368);
	// stw r10,368(r28)
	PPC_STORE_U32(ctx.r28.u32 + 368, ctx.r10.u32);
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// stw r11,376(r28)
	PPC_STORE_U32(ctx.r28.u32 + 376, ctx.r11.u32);
	// stw r30,380(r28)
	PPC_STORE_U32(ctx.r28.u32 + 380, ctx.r30.u32);
	// stw r30,384(r28)
	PPC_STORE_U32(ctx.r28.u32 + 384, ctx.r30.u32);
	// stw r30,388(r28)
	PPC_STORE_U32(ctx.r28.u32 + 388, ctx.r30.u32);
	// stw r30,392(r28)
	PPC_STORE_U32(ctx.r28.u32 + 392, ctx.r30.u32);
	// stw r30,372(r28)
	PPC_STORE_U32(ctx.r28.u32 + 372, ctx.r30.u32);
	// beq cr6,0x829a3558
	if (ctx.cr6.eq) goto loc_829A3558;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x829a3558
	if (!ctx.cr6.gt) goto loc_829A3558;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829a3500
	if (ctx.cr0.eq) goto loc_829A3500;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,96
	ctx.r4.s64 = 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c38
	ctx.lr = 0x829A3500;
	sub_82332C38(ctx, base);
loc_829A3500:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x829a3558
	if (!ctx.cr6.gt) goto loc_829A3558;
loc_829A3510:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332d50
	ctx.lr = 0x829A3524;
	sub_82332D50(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r10,r3,96
	ctx.r10.s64 = ctx.r3.s64 * 96;
	// add. r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x829a3544
	if (ctx.cr0.eq) goto loc_829A3544;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// li r5,96
	ctx.r5.s64 = 96;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82a4ea80
	ctx.lr = 0x829A3544;
	sub_82A4EA80(ctx, base);
loc_829A3544:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r30,r30,96
	ctx.r30.s64 = ctx.r30.s64 + 96;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x829a3510
	if (ctx.cr6.lt) goto loc_829A3510;
loc_829A3558:
	// addi r4,r27,396
	ctx.r4.s64 = ctx.r27.s64 + 396;
	// addi r3,r28,396
	ctx.r3.s64 = ctx.r28.s64 + 396;
	// bl 0x82873b58
	ctx.lr = 0x829A3564;
	sub_82873B58(ctx, base);
	// addi r4,r27,420
	ctx.r4.s64 = ctx.r27.s64 + 420;
	// addi r3,r28,420
	ctx.r3.s64 = ctx.r28.s64 + 420;
	// bl 0x82873b58
	ctx.lr = 0x829A3570;
	sub_82873B58(ctx, base);
	// lwz r11,444(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 444);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,444(r28)
	PPC_STORE_U32(ctx.r28.u32 + 444, ctx.r11.u32);
	// lwz r11,448(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 448);
	// stw r11,448(r28)
	PPC_STORE_U32(ctx.r28.u32 + 448, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829A3590"))) PPC_WEAK_FUNC(sub_829A3590);
PPC_FUNC_IMPL(__imp__sub_829A3590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x829A3598;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r3,r30,420
	ctx.r3.s64 = ctx.r30.s64 + 420;
	// bl 0x8239d768
	ctx.lr = 0x829A35AC;
	sub_8239D768(ctx, base);
	// addi r3,r30,396
	ctx.r3.s64 = ctx.r30.s64 + 396;
	// bl 0x8239d768
	ctx.lr = 0x829A35B4;
	sub_8239D768(ctx, base);
	// addi r31,r30,372
	ctx.r31.s64 = ctx.r30.s64 + 372;
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r5,388(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 388);
	// li r6,96
	ctx.r6.s64 = 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332ca8
	ctx.lr = 0x829A35D0;
	sub_82332CA8(ctx, base);
	// lwz r3,384(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 384);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829a35e0
	if (ctx.cr6.eq) goto loc_829A35E0;
	// bl 0x82332db8
	ctx.lr = 0x829A35E0;
	sub_82332DB8(ctx, base);
loc_829A35E0:
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
	// bl 0x82981190
	ctx.lr = 0x829A35F8;
	sub_82981190(ctx, base);
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829a3608
	if (ctx.cr0.eq) goto loc_829A3608;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332db8
	ctx.lr = 0x829A3608;
	sub_82332DB8(ctx, base);
loc_829A3608:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829A3618"))) PPC_WEAK_FUNC(sub_829A3618);
PPC_FUNC_IMPL(__imp__sub_829A3618) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82981000
	ctx.lr = 0x829A3644;
	sub_82981000(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stw r30,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r30.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-16552
	ctx.r9.s64 = ctx.r10.s64 + -16552;
	// li r8,96
	ctx.r8.s64 = 96;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r11.u32);
	// stw r11,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r11.u32);
	// stw r11,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r11.u32);
	// stw r11,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r11.u32);
	// stw r11,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r11.u32);
	// stw r10,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r10.u32);
	// stw r11,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r11.u32);
	// stw r11,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r11.u32);
	// stw r11,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r11.u32);
	// stw r11,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r11.u32);
	// stw r11,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r11.u32);
	// stw r10,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r10.u32);
	// stw r11,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r11.u32);
	// stw r11,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r11.u32);
	// stw r11,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r11.u32);
	// stw r11,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r11.u32);
	// stw r11,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r11.u32);
	// stw r11,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r11.u32);
	// stw r11,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829A36D0"))) PPC_WEAK_FUNC(sub_829A36D0);
PPC_FUNC_IMPL(__imp__sub_829A36D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f0
	ctx.lr = 0x829A36D8;
	__savegprlr_22(ctx, base);
	// stfd f29,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f29.u64);
	// stfd f30,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f30.u64);
	// stfd f31,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r23,1
	ctx.r23.s64 = 1;
	// mr r22,r30
	ctx.r22.u64 = ctx.r30.u64;
	// lwz r11,368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x829a3738
	if (!ctx.cr6.gt) goto loc_829A3738;
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r11,52(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
loc_829A3718:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,16(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// rlwinm r9,r9,29,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1;
	// and r23,r9,r23
	ctx.r23.u64 = ctx.r9.u64 & ctx.r23.u64;
	// or r22,r9,r22
	ctx.r22.u64 = ctx.r9.u64 | ctx.r22.u64;
	// bne 0x829a3718
	if (!ctx.cr0.eq) goto loc_829A3718;
loc_829A3738:
	// lwz r11,416(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// addi r24,r31,396
	ctx.r24.s64 = ctx.r31.s64 + 396;
	// stw r30,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r30.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x829a3764
	if (ctx.cr6.eq) goto loc_829A3764;
	// stw r11,20(r24)
	PPC_STORE_U32(ctx.r24.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82332c38
	ctx.lr = 0x829A3764;
	sub_82332C38(ctx, base);
loc_829A3764:
	// lwz r11,440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// addi r29,r31,420
	ctx.r29.s64 = ctx.r31.s64 + 420;
	// stw r30,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r30.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x829a3790
	if (ctx.cr6.eq) goto loc_829A3790;
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332c38
	ctx.lr = 0x829A3790;
	sub_82332C38(ctx, base);
loc_829A3790:
	// lwz r11,368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r27,-31949
	ctx.r27.s64 = -2093809664;
	// lwz r9,388(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	// addi r11,r11,132
	ctx.r11.s64 = ctx.r11.s64 + 132;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lfs f0,30996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 30996);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,13024(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lwz r11,76(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// fsubs f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// addis r26,r11,3
	ctx.r26.s64 = ctx.r11.s64 + 196608;
	// addis r25,r11,3
	ctx.r25.s64 = ctx.r11.s64 + 196608;
	// addi r26,r26,-29592
	ctx.r26.s64 = ctx.r26.s64 + -29592;
	// addi r25,r25,-30096
	ctx.r25.s64 = ctx.r25.s64 + -30096;
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f13,f12,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f0,f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fsqrts f29,f0
	ctx.f29.f64 = double(float(sqrt(ctx.f0.f64)));
	// ble cr6,0x829a3934
	if (!ctx.cr6.gt) goto loc_829A3934;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f30,24000(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24000);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
loc_829A381C:
	// lwz r11,384(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// add r5,r30,r11
	ctx.r5.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r11,64(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 64);
	// lfs f0,88(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,68(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 68);
	// fmuls f1,f0,f29
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// lwz r9,72(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 72);
	// stfs f1,108(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// bl 0x8281a488
	ctx.lr = 0x829A3854;
	sub_8281A488(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x829a3918
	if (ctx.cr0.eq) goto loc_829A3918;
	// lfs f0,4(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,8(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f0,0(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f0,80(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f13,f12,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f12,f11,f11,f13
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f13.f64));
	// stfs f12,84(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 84, temp.u32);
	// ble cr6,0x829a38d4
	if (!ctx.cr6.gt) goto loc_829A38D4;
	// lfs f13,76(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 76);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// ble cr6,0x829a38c8
	if (!ctx.cr6.gt) goto loc_829A38C8;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x829a38c8
	if (!ctx.cr6.lt) goto loc_829A38C8;
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// ble cr6,0x829a38c8
	if (!ctx.cr6.gt) goto loc_829A38C8;
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// blt cr6,0x829a38fc
	if (ctx.cr6.lt) goto loc_829A38FC;
loc_829A38C8:
	// fmuls f0,f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x829a391c
	if (!ctx.cr6.lt) goto loc_829A391C;
loc_829A38D4:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne cr6,0x829a38f4
	if (!ctx.cr6.eq) goto loc_829A38F4;
	// lwz r11,384(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x829A38F4;
	sub_82410060(ctx, base);
loc_829A38F4:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x829a391c
	if (ctx.cr6.eq) goto loc_829A391C;
loc_829A38FC:
	// lwz r11,384(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x829A3914;
	sub_82410060(ctx, base);
	// b 0x829a391c
	goto loc_829A391C;
loc_829A3918:
	// stfs f30,84(r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r5.u32 + 84, temp.u32);
loc_829A391C:
	// lwz r11,388(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,96
	ctx.r30.s64 = ctx.r30.s64 + 96;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x829a381c
	if (ctx.cr6.lt) goto loc_829A381C;
	// lwz r10,13024(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
loc_829A3934:
	// lwz r11,412(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829a394c
	if (!ctx.cr6.eq) goto loc_829A394C;
	// lwz r11,436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 436);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829a3960
	if (ctx.cr6.eq) goto loc_829A3960;
loc_829A394C:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lwz r10,76(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// ori r11,r11,36012
	ctx.r11.u64 = ctx.r11.u64 | 36012;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
loc_829A3960:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
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

__attribute__((alias("__imp__sub_829A3978"))) PPC_WEAK_FUNC(sub_829A3978);
PPC_FUNC_IMPL(__imp__sub_829A3978) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x829A3980;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82a61744
	ctx.lr = 0x829A3988;
	__savefpr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// addi r30,r29,372
	ctx.r30.s64 = ctx.r29.s64 + 372;
	// lwz r11,392(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 392);
	// stw r28,388(r29)
	PPC_STORE_U32(ctx.r29.u32 + 388, ctx.r28.u32);
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// beq cr6,0x829a39c4
	if (ctx.cr6.eq) goto loc_829A39C4;
	// stw r31,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,96
	ctx.r4.s64 = 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332c38
	ctx.lr = 0x829A39C4;
	sub_82332C38(ctx, base);
loc_829A39C4:
	// lwz r11,416(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 416);
	// addi r3,r29,396
	ctx.r3.s64 = ctx.r29.s64 + 396;
	// stw r28,412(r29)
	PPC_STORE_U32(ctx.r29.u32 + 412, ctx.r28.u32);
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// beq cr6,0x829a39e8
	if (ctx.cr6.eq) goto loc_829A39E8;
	// stw r31,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82332c38
	ctx.lr = 0x829A39E8;
	sub_82332C38(ctx, base);
loc_829A39E8:
	// lwz r11,440(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 440);
	// addi r3,r29,420
	ctx.r3.s64 = ctx.r29.s64 + 420;
	// stw r28,436(r29)
	PPC_STORE_U32(ctx.r29.u32 + 436, ctx.r28.u32);
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// beq cr6,0x829a3a0c
	if (ctx.cr6.eq) goto loc_829A3A0C;
	// stw r31,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82332c38
	ctx.lr = 0x829A3A0C;
	sub_82332C38(ctx, base);
loc_829A3A0C:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,96
	ctx.r5.s64 = 96;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332d50
	ctx.lr = 0x829A3A20;
	sub_82332D50(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stb r28,360(r29)
	PPC_STORE_U8(ctx.r29.u32 + 360, ctx.r28.u8);
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// addi r30,r29,336
	ctx.r30.s64 = ctx.r29.s64 + 336;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f0,-11456(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -11456);
	ctx.f0.f64 = double(temp.f32);
	// lfs f29,30996(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 30996);
	ctx.f29.f64 = double(temp.f32);
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,348(r29)
	PPC_STORE_U32(ctx.r29.u32 + 348, ctx.r11.u32);
	// stw r10,352(r29)
	PPC_STORE_U32(ctx.r29.u32 + 352, ctx.r10.u32);
	// stw r9,356(r29)
	PPC_STORE_U32(ctx.r29.u32 + 356, ctx.r9.u32);
	// stw r11,336(r29)
	PPC_STORE_U32(ctx.r29.u32 + 336, ctx.r11.u32);
	// stw r10,340(r29)
	PPC_STORE_U32(ctx.r29.u32 + 340, ctx.r10.u32);
	// stw r9,344(r29)
	PPC_STORE_U32(ctx.r29.u32 + 344, ctx.r9.u32);
	// ble cr6,0x829a3ccc
	if (!ctx.cr6.gt) goto loc_829A3CCC;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// addi r28,r26,32
	ctx.r28.s64 = ctx.r26.s64 + 32;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// lfs f13,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// fdivs f30,f13,f0
	ctx.f30.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// lfd f28,16784(r11)
	ctx.f28.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16784);
loc_829A3A9C:
	// lwz r11,384(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 384);
	// lfs f0,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// li r5,64
	ctx.r5.s64 = 64;
	// add r31,r11,r27
	ctx.r31.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r4,r28,8
	ctx.r4.s64 = ctx.r28.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// lfs f0,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,76(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// bl 0x82a45878
	ctx.lr = 0x829A3AC4;
	sub_82A45878(ctx, base);
	// lfs f0,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// fmadds f11,f0,f31,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f31.f64 + ctx.f12.f64));
	// lfs f9,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// stfs f31,84(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f11,f11,f9
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f9.f64));
	// lfs f0,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f10,f0,f31,f10
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f31.f64 + ctx.f10.f64));
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// lfs f0,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fadds f11,f11,f7
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f7.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmadds f9,f0,f31,f8
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f31.f64 + ctx.f8.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f10,f10,f6
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f6.f64));
	// fmuls f11,f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fadds f9,f9,f5
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f5.f64));
	// fadds f10,f10,f4
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f4.f64));
	// fadds f9,f9,f3
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f3.f64));
	// fmadds f11,f10,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f11.f64));
	// fmadds f11,f9,f9,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f11.f64));
	// fsqrts f11,f11
	ctx.f11.f64 = double(float(sqrt(ctx.f11.f64)));
	// fmuls f11,f11,f30
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f30.f64));
	// stfs f11,88(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// lbz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 24);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x829a3bb8
	if (ctx.cr0.eq) goto loc_829A3BB8;
	// lfs f11,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f6,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f10,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f3,f6,f0
	ctx.f3.f64 = double(float(ctx.f6.f64 - ctx.f0.f64));
	// lfs f4,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f7,f10,f13
	ctx.f7.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f8,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f1,f4,f13
	ctx.f1.f64 = double(float(ctx.f4.f64 - ctx.f13.f64));
	// lfs f2,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f5,f8,f12
	ctx.f5.f64 = double(float(ctx.f8.f64 - ctx.f12.f64));
	// fsubs f27,f2,f12
	ctx.f27.f64 = double(float(ctx.f2.f64 - ctx.f12.f64));
	// fsel f11,f9,f0,f11
	ctx.f11.f64 = ctx.f9.f64 >= 0.0 ? ctx.f0.f64 : ctx.f11.f64;
	// stfs f11,0(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// fsel f0,f3,f6,f0
	ctx.f0.f64 = ctx.f3.f64 >= 0.0 ? ctx.f6.f64 : ctx.f0.f64;
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// fsel f11,f7,f13,f10
	ctx.f11.f64 = ctx.f7.f64 >= 0.0 ? ctx.f13.f64 : ctx.f10.f64;
	// stfs f11,4(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// fsel f0,f1,f4,f13
	ctx.f0.f64 = ctx.f1.f64 >= 0.0 ? ctx.f4.f64 : ctx.f13.f64;
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// fsel f11,f5,f12,f8
	ctx.f11.f64 = ctx.f5.f64 >= 0.0 ? ctx.f12.f64 : ctx.f8.f64;
	// stfs f11,8(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// fsel f0,f27,f2,f12
	ctx.f0.f64 = ctx.f27.f64 >= 0.0 ? ctx.f2.f64 : ctx.f12.f64;
	// stfs f0,20(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// b 0x829a3be4
	goto loc_829A3BE4;
loc_829A3BB8:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stb r8,24(r30)
	PPC_STORE_U8(ctx.r30.u32 + 24, ctx.r8.u8);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// stw r10,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r10.u32);
	// stw r9,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r9.u32);
loc_829A3BE4:
	// lwz r11,368(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 368);
	// lfs f13,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,132
	ctx.r11.s64 = ctx.r11.s64 + 132;
	// lfs f3,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// lfs f11,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f2,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f2.f64 = double(temp.f32);
	// lfs f9,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// lfs f6,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// lfs f7,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fadds f7,f7,f6
	ctx.f7.f64 = double(float(ctx.f7.f64 + ctx.f6.f64));
	// lfs f5,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// lfs f6,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fadds f6,f5,f6
	ctx.f6.f64 = double(float(ctx.f5.f64 + ctx.f6.f64));
	// lfs f4,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lfs f5,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// fadds f5,f5,f4
	ctx.f5.f64 = double(float(ctx.f5.f64 + ctx.f4.f64));
	// lfs f10,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// lfs f1,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// lfs f4,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f4.f64 = double(temp.f32);
	// lfs f8,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f8.f64 = double(temp.f32);
	// lfs f27,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f27.f64 = double(temp.f32);
	// fmuls f7,f7,f29
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f29.f64));
	// fmuls f6,f6,f29
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f29.f64));
	// fmuls f5,f5,f29
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f29.f64));
	// fmuls f13,f13,f7
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f7.f64));
	// fmuls f3,f3,f7
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f7.f64));
	// fmuls f0,f6,f0
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmadds f13,f11,f5,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f5.f64 + ctx.f13.f64));
	// fmadds f11,f5,f2,f3
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f2.f64 + ctx.f3.f64));
	// fmadds f0,f12,f7,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f7.f64 + ctx.f0.f64));
	// fmadds f13,f6,f9,f13
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f9.f64 + ctx.f13.f64));
	// fmadds f12,f1,f6,f11
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f6.f64 + ctx.f11.f64));
	// fmadds f0,f5,f10,f0
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f10.f64 + ctx.f0.f64));
	// fadds f13,f13,f4
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f4.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f13,f12,f27
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f27.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f8.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r9,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r9.u32);
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
	// bl 0x826c8d38
	ctx.lr = 0x829A3CA8;
	sub_826C8D38(ctx, base);
	// fcmpu cr6,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f28.f64);
	// li r11,6
	ctx.r11.s64 = 6;
	// blt cr6,0x829a3cb8
	if (ctx.cr6.lt) goto loc_829A3CB8;
	// li r11,2
	ctx.r11.s64 = 2;
loc_829A3CB8:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// stb r11,92(r31)
	PPC_STORE_U8(ctx.r31.u32 + 92, ctx.r11.u8);
	// addi r27,r27,96
	ctx.r27.s64 = ctx.r27.s64 + 96;
	// addi r28,r28,104
	ctx.r28.s64 = ctx.r28.s64 + 104;
	// bne 0x829a3a9c
	if (!ctx.cr0.eq) goto loc_829A3A9C;
loc_829A3CCC:
	// lwz r10,368(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 368);
	// lfs f0,348(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 348);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,352(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 352);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r29,348
	ctx.r11.s64 = ctx.r29.s64 + 348;
	// lfs f12,356(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 356);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,132(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 144);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f9,148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 148);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,136(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 136);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f10,f9,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// lfs f8,140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 140);
	ctx.f8.f64 = double(temp.f32);
	// lfs f9,152(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 152);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f9,f9,f8
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// fmuls f11,f11,f29
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f29.f64));
	// fmuls f10,f10,f29
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f29.f64));
	// fmuls f9,f9,f29
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f29.f64));
	// fsubs f8,f11,f10
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fsel f11,f8,f11,f10
	ctx.f11.f64 = ctx.f8.f64 >= 0.0 ? ctx.f11.f64 : ctx.f10.f64;
	// fsubs f10,f11,f9
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f9.f64));
	// fsel f11,f10,f11,f9
	ctx.f11.f64 = ctx.f10.f64 >= 0.0 ? ctx.f11.f64 : ctx.f9.f64;
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// stfs f0,348(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 348, temp.u32);
	// fadds f0,f13,f11
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// stfs f0,352(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 352, temp.u32);
	// fneg f13,f11
	ctx.f13.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fadds f0,f12,f11
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// stfs f0,356(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 356, temp.u32);
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f12,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// stfs f12,4(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82a61790
	ctx.lr = 0x829A3D6C;
	__restfpr_27(ctx, base);
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829A3D70"))) PPC_WEAK_FUNC(sub_829A3D70);
PPC_FUNC_IMPL(__imp__sub_829A3D70) {
	PPC_FUNC_PROLOGUE();
	// b 0x829815a8
	sub_829815A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829A3D78"))) PPC_WEAK_FUNC(sub_829A3D78);
PPC_FUNC_IMPL(__imp__sub_829A3D78) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,336
	ctx.r3.s64 = ctx.r3.s64 + 336;
	// b 0x827f0480
	sub_827F0480(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829A3D80"))) PPC_WEAK_FUNC(sub_829A3D80);
PPC_FUNC_IMPL(__imp__sub_829A3D80) {
	PPC_FUNC_PROLOGUE();
	// lis r3,11
	ctx.r3.s64 = 720896;
	// ori r3,r3,64512
	ctx.r3.u64 = ctx.r3.u64 | 64512;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829A3D90"))) PPC_WEAK_FUNC(sub_829A3D90);
PPC_FUNC_IMPL(__imp__sub_829A3D90) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,412(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 412);
	// stw r10,444(r11)
	PPC_STORE_U32(ctx.r11.u32 + 444, ctx.r10.u32);
	// stw r9,448(r11)
	PPC_STORE_U32(ctx.r11.u32 + 448, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829A3DB0"))) PPC_WEAK_FUNC(sub_829A3DB0);
PPC_FUNC_IMPL(__imp__sub_829A3DB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,448(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 448);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,448(r3)
	PPC_STORE_U32(ctx.r3.u32 + 448, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829A3DC0"))) PPC_WEAK_FUNC(sub_829A3DC0);
PPC_FUNC_IMPL(__imp__sub_829A3DC0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,444(r3)
	PPC_STORE_U32(ctx.r3.u32 + 444, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829A3DD0"))) PPC_WEAK_FUNC(sub_829A3DD0);
PPC_FUNC_IMPL(__imp__sub_829A3DD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lhz r11,264(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 264);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x829a3de4
	if (!ctx.cr6.eq) goto loc_829A3DE4;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// blr 
	return;
loc_829A3DE4:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lfs f0,-12(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lfs f12,-8(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lfs f11,31308(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 31308);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// addis r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 196608;
	// addi r11,r11,-30160
	ctx.r11.s64 = ctx.r11.s64 + -30160;
	// lfs f10,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,60(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f10,f9,f13,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fmadds f0,f8,f13,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f13,f7,f12,f10
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fmadds f0,f6,f12,f0
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fadds f13,f13,f5
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f5.f64));
	// fadds f0,f0,f4
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f4.f64));
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r3,-12(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829A3E68"))) PPC_WEAK_FUNC(sub_829A3E68);
PPC_FUNC_IMPL(__imp__sub_829A3E68) {
	PPC_FUNC_PROLOGUE();
	// li r3,464
	ctx.r3.s64 = 464;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829A3E70"))) PPC_WEAK_FUNC(sub_829A3E70);
PPC_FUNC_IMPL(__imp__sub_829A3E70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-27164(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27164);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x829a3eb0
	if (!ctx.cr0.eq) goto loc_829A3EB0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stw r11,-27164(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27164, ctx.r11.u32);
	// addi r3,r9,-16596
	ctx.r3.s64 = ctx.r9.s64 + -16596;
	// bl 0x82816528
	ctx.lr = 0x829A3EA8;
	sub_82816528(ctx, base);
	// stw r3,-27168(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27168, ctx.r3.u32);
	// b 0x829a3eb4
	goto loc_829A3EB4;
loc_829A3EB0:
	// lwz r3,-27168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27168);
loc_829A3EB4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829A3EC8"))) PPC_WEAK_FUNC(sub_829A3EC8);
PPC_FUNC_IMPL(__imp__sub_829A3EC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x829a3f18
	ctx.lr = 0x829A3EE8;
	sub_829A3F18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829A3EFC;
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

__attribute__((alias("__imp__sub_829A3F18"))) PPC_WEAK_FUNC(sub_829A3F18);
PPC_FUNC_IMPL(__imp__sub_829A3F18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,19372
	ctx.r31.s64 = ctx.r11.s64 + 19372;
	// lwz r11,19368(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19368);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x829a3f60
	if (!ctx.cr0.eq) goto loc_829A3F60;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-16248
	ctx.r9.s64 = ctx.r9.s64 + -16248;
	// stw r11,19368(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19368, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-10680
	ctx.r3.s64 = ctx.r11.s64 + -10680;
	// bl 0x82a4c758
	ctx.lr = 0x829A3F60;
	sub_82A4C758(ctx, base);
loc_829A3F60:
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

__attribute__((alias("__imp__sub_829A3F78"))) PPC_WEAK_FUNC(sub_829A3F78);
PPC_FUNC_IMPL(__imp__sub_829A3F78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r11,-16228
	ctx.r3.s64 = ctx.r11.s64 + -16228;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829A3F88"))) PPC_WEAK_FUNC(sub_829A3F88);
PPC_FUNC_IMPL(__imp__sub_829A3F88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x829a3fc0
	if (ctx.cr6.eq) goto loc_829A3FC0;
	// bl 0x829a4778
	ctx.lr = 0x829A3FB0;
	sub_829A4778(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x829a3fc0
	if (!ctx.cr6.eq) goto loc_829A3FC0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x829a3fcc
	goto loc_829A3FCC;
loc_829A3FC0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828516a0
	ctx.lr = 0x829A3FCC;
	sub_828516A0(ctx, base);
loc_829A3FCC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829A3FE8"))) PPC_WEAK_FUNC(sub_829A3FE8);
PPC_FUNC_IMPL(__imp__sub_829A3FE8) {
	PPC_FUNC_PROLOGUE();
	// b 0x829a4778
	sub_829A4778(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829A3FF0"))) PPC_WEAK_FUNC(sub_829A3FF0);
PPC_FUNC_IMPL(__imp__sub_829A3FF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,544
	ctx.r3.s64 = 544;
	// bl 0x82833108
	ctx.lr = 0x829A400C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829a4020
	if (ctx.cr0.eq) goto loc_829A4020;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x829a40f0
	ctx.lr = 0x829A401C;
	sub_829A40F0(ctx, base);
	// b 0x829a4024
	goto loc_829A4024;
loc_829A4020:
	// li r3,0
	ctx.r3.s64 = 0;
loc_829A4024:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829A4038"))) PPC_WEAK_FUNC(sub_829A4038);
PPC_FUNC_IMPL(__imp__sub_829A4038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x829a4778
	ctx.lr = 0x829A4058;
	sub_829A4778(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x829a406c
	if (ctx.cr6.eq) goto loc_829A406C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82851638
	ctx.lr = 0x829A406C;
	sub_82851638(ctx, base);
loc_829A406C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829A4088"))) PPC_WEAK_FUNC(sub_829A4088);
PPC_FUNC_IMPL(__imp__sub_829A4088) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,420(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 420);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829A4090"))) PPC_WEAK_FUNC(sub_829A4090);
PPC_FUNC_IMPL(__imp__sub_829A4090) {
	PPC_FUNC_PROLOGUE();
	// stw r4,420(r3)
	PPC_STORE_U32(ctx.r3.u32 + 420, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829A4098"))) PPC_WEAK_FUNC(sub_829A4098);
PPC_FUNC_IMPL(__imp__sub_829A4098) {
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
	// lwz r11,496(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 496);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829a40d0
	if (!ctx.cr6.eq) goto loc_829A40D0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r11,184(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829A40C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq 0x829a40d4
	if (ctx.cr0.eq) goto loc_829A40D4;
loc_829A40D0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_829A40D4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829A40E8"))) PPC_WEAK_FUNC(sub_829A40E8);
PPC_FUNC_IMPL(__imp__sub_829A40E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,496(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 496);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829A40F0"))) PPC_WEAK_FUNC(sub_829A40F0);
PPC_FUNC_IMPL(__imp__sub_829A40F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82713428
	ctx.lr = 0x829A4110;
	sub_82713428(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// addi r11,r11,-5040
	ctx.r11.s64 = ctx.r11.s64 + -5040;
	// addi r10,r10,-16200
	ctx.r10.s64 = ctx.r10.s64 + -16200;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,424
	ctx.r3.s64 = ctx.r31.s64 + 424;
	// addi r4,r30,424
	ctx.r4.s64 = ctx.r30.s64 + 424;
	// lwz r11,368(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 368);
	// stw r11,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r11.u32);
	// lwz r11,372(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 372);
	// stw r11,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r11.u32);
	// lwz r11,376(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 376);
	// stw r11,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r11,384(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 384);
	// stw r11,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r11.u32);
	// lwz r11,388(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 388);
	// stw r11,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r11.u32);
	// lwz r11,392(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 392);
	// stw r11,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r11.u32);
	// lwz r11,396(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 396);
	// stw r11,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r11.u32);
	// lwz r11,400(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 400);
	// stw r11,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r11.u32);
	// lwz r11,404(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 404);
	// stw r11,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r11.u32);
	// lwz r11,408(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 408);
	// stw r11,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r11.u32);
	// lwz r11,412(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 412);
	// stw r11,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r11.u32);
	// lwz r11,416(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 416);
	// stw r11,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r11.u32);
	// lwz r11,420(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 420);
	// stw r11,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r11.u32);
	// bl 0x82851560
	ctx.lr = 0x829A419C;
	sub_82851560(ctx, base);
	// addi r3,r31,448
	ctx.r3.s64 = ctx.r31.s64 + 448;
	// addi r4,r30,448
	ctx.r4.s64 = ctx.r30.s64 + 448;
	// bl 0x828513a8
	ctx.lr = 0x829A41A8;
	sub_828513A8(ctx, base);
	// addi r3,r31,472
	ctx.r3.s64 = ctx.r31.s64 + 472;
	// addi r4,r30,472
	ctx.r4.s64 = ctx.r30.s64 + 472;
	// bl 0x82873b58
	ctx.lr = 0x829A41B4;
	sub_82873B58(ctx, base);
	// lwz r11,496(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 496);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r11.u32);
	// lwz r11,500(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 500);
	// stw r11,500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 500, ctx.r11.u32);
	// lwz r11,504(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 504);
	// stw r11,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r11.u32);
	// lwz r11,508(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 508);
	// stw r11,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r11.u32);
	// lwz r11,512(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 512);
	// stw r11,512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 512, ctx.r11.u32);
	// lwz r11,516(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 516);
	// stw r11,516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 516, ctx.r11.u32);
	// lwz r11,520(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 520);
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
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829A4218"))) PPC_WEAK_FUNC(sub_829A4218);
PPC_FUNC_IMPL(__imp__sub_829A4218) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,472
	ctx.r3.s64 = ctx.r31.s64 + 472;
	// bl 0x8239d768
	ctx.lr = 0x829A423C;
	sub_8239D768(ctx, base);
	// addi r3,r31,448
	ctx.r3.s64 = ctx.r31.s64 + 448;
	// bl 0x82851310
	ctx.lr = 0x829A4244;
	sub_82851310(ctx, base);
	// addi r3,r31,424
	ctx.r3.s64 = ctx.r31.s64 + 424;
	// bl 0x828514e0
	ctx.lr = 0x829A424C;
	sub_828514E0(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-5040
	ctx.r11.s64 = ctx.r11.s64 + -5040;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82981190
	ctx.lr = 0x829A4260;
	sub_82981190(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829a4270
	if (ctx.cr0.eq) goto loc_829A4270;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x829A4270;
	sub_82332DB8(ctx, base);
loc_829A4270:
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

__attribute__((alias("__imp__sub_829A4290"))) PPC_WEAK_FUNC(sub_829A4290);
PPC_FUNC_IMPL(__imp__sub_829A4290) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,496(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 496);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829a42dc
	if (!ctx.cr6.eq) goto loc_829A42DC;
	// lwz r11,388(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 388);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,116(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x829a42dc
	if (!ctx.cr6.gt) goto loc_829A42DC;
	// lwz r11,112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
loc_829A42B4:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm. r7,r8,0,9,9
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x829a42cc
	if (ctx.cr0.eq) goto loc_829A42CC;
	// rlwinm. r8,r8,0,28,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x829a42e4
	if (!ctx.cr0.eq) goto loc_829A42E4;
loc_829A42CC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x829a42b4
	if (ctx.cr6.lt) goto loc_829A42B4;
loc_829A42DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_829A42E4:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829A42F0"))) PPC_WEAK_FUNC(sub_829A42F0);
PPC_FUNC_IMPL(__imp__sub_829A42F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x829a42fc
	if (ctx.cr6.eq) goto loc_829A42FC;
	// b 0x829815a8
	sub_829815A8(ctx, base);
	return;
loc_829A42FC:
	// lwz r11,384(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 384);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829a4324
	if (ctx.cr6.eq) goto loc_829A4324;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x829a431c
	if (!ctx.cr6.gt) goto loc_829A431C;
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
loc_829A431C:
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
loc_829A4324:
	// lwz r11,496(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 496);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// andi. r11,r11,19
	ctx.r11.u64 = ctx.r11.u64 & 19;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829A4340"))) PPC_WEAK_FUNC(sub_829A4340);
PPC_FUNC_IMPL(__imp__sub_829A4340) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x829A4348;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stb r9,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r9.u8);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,388(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 388);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// lwz r10,116(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// ble cr6,0x829a43cc
	if (!ctx.cr6.gt) goto loc_829A43CC;
	// lwz r30,112(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
loc_829A43B0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,40
	ctx.r4.s64 = ctx.r11.s64 + 40;
	// bl 0x8287f600
	ctx.lr = 0x829A43C0;
	sub_8287F600(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x829a43b0
	if (!ctx.cr0.eq) goto loc_829A43B0;
loc_829A43CC:
	// lbz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 120);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x829a4464
	if (ctx.cr0.eq) goto loc_829A4464;
	// li r11,12
	ctx.r11.s64 = 12;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// addi r8,r11,24
	ctx.r8.s64 = ctx.r11.s64 + 24;
	// lwz r11,13024(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13024);
	// lwzx r10,r8,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// beq 0x829a4420
	if (ctx.cr0.eq) goto loc_829A4420;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lwz r9,1444(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1444);
	// ori r10,r10,36008
	ctx.r10.u64 = ctx.r10.u64 | 36008;
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// lwzx r31,r11,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x829a4428
	if (!ctx.cr6.eq) goto loc_829A4428;
	// xori r31,r31,1
	ctx.r31.u64 = ctx.r31.u64 ^ 1;
	// b 0x829a4428
	goto loc_829A4428;
loc_829A4420:
	// lwz r11,1444(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1444);
	// xori r31,r11,1
	ctx.r31.u64 = ctx.r11.u64 ^ 1;
loc_829A4428:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827f0480
	ctx.lr = 0x829A4438;
	sub_827F0480(ctx, base);
	// rlwinm r11,r31,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 6) & 0xFFFFFFC0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r31,r11,144
	ctx.r31.s64 = ctx.r11.s64 + 144;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82a786b8
	ctx.lr = 0x829A4454;
	sub_82A786B8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a78780
	ctx.lr = 0x829A4464;
	sub_82A78780(ctx, base);
loc_829A4464:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829A4470"))) PPC_WEAK_FUNC(sub_829A4470);
PPC_FUNC_IMPL(__imp__sub_829A4470) {
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
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 408);
	// lwz r4,136(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// addi r3,r11,1412
	ctx.r3.s64 = ctx.r11.s64 + 1412;
	// lwz r11,13024(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13024);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r11,1444(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1444);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// xori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 ^ 64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
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
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82948208
	ctx.lr = 0x829A44D0;
	sub_82948208(ctx, base);
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_829A44E8"))) PPC_WEAK_FUNC(sub_829A44E8);
PPC_FUNC_IMPL(__imp__sub_829A44E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// ori r9,r9,36008
	ctx.r9.u64 = ctx.r9.u64 | 36008;
	// lwz r11,408(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 408);
	// addi r3,r11,1412
	ctx.r3.s64 = ctx.r11.s64 + 1412;
	// lwz r11,13024(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13024);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// addis r4,r11,3
	ctx.r4.s64 = ctx.r11.s64 + 196608;
	// addi r4,r4,-30096
	ctx.r4.s64 = ctx.r4.s64 + -30096;
	// lwzx r31,r11,r9
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bl 0x82947fd0
	ctx.lr = 0x829A452C;
	sub_82947FD0(ctx, base);
	// addi r9,r31,127
	ctx.r9.s64 = ctx.r31.s64 + 127;
	// lwz r10,408(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 408);
	// mulli r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 * 24;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r31,131
	ctx.r9.s64 = ctx.r31.s64 + 131;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r31,129
	ctx.r8.s64 = ctx.r31.s64 + 129;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,404(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 404);
	// lwz r10,1528(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1528);
	// mulli r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 * 48;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwx r10,r7,r30
	PPC_STORE_U32(ctx.r7.u32 + ctx.r30.u32, ctx.r10.u32);
	// lwz r9,404(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 404);
	// lwz r10,408(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 408);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mulli r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 * 48;
	// lwz r10,1576(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1576);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwx r10,r8,r30
	PPC_STORE_U32(ctx.r8.u32 + ctx.r30.u32, ctx.r10.u32);
	// lwz r10,404(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 404);
	// lwz r9,408(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 408);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mulli r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 * 48;
	// lwz r11,1576(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1576);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// stwx r11,r6,r30
	PPC_STORE_U32(ctx.r6.u32 + ctx.r30.u32, ctx.r11.u32);
	// bl 0x82949140
	ctx.lr = 0x829A45A4;
	sub_82949140(ctx, base);
	// bl 0x82a3ccc8
	ctx.lr = 0x829A45A8;
	sub_82A3CCC8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829A45C0"))) PPC_WEAK_FUNC(sub_829A45C0);
PPC_FUNC_IMPL(__imp__sub_829A45C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,392(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829a45d4
	if (ctx.cr6.eq) goto loc_829A45D4;
	// lwz r3,440(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 440);
	// blr 
	return;
loc_829A45D4:
	// lwz r11,388(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 388);
	// lwz r3,52(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829A45E0"))) PPC_WEAK_FUNC(sub_829A45E0);
PPC_FUNC_IMPL(__imp__sub_829A45E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,392(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829a45fc
	if (ctx.cr6.eq) goto loc_829A45FC;
	// lwz r10,436(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 436);
	// mulli r11,r4,808
	ctx.r11.s64 = ctx.r4.s64 * 808;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
loc_829A45FC:
	// lwz r11,388(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 388);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829A4610"))) PPC_WEAK_FUNC(sub_829A4610);
PPC_FUNC_IMPL(__imp__sub_829A4610) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,392(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829a4638
	if (ctx.cr6.eq) goto loc_829A4638;
	// lwz r11,464(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 464);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x829a4638
	if (!ctx.cr6.lt) goto loc_829A4638;
	// lwz r11,460(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 460);
	// mulli r10,r4,132
	ctx.r10.s64 = ctx.r4.s64 * 132;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
loc_829A4638:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829A4640"))) PPC_WEAK_FUNC(sub_829A4640);
PPC_FUNC_IMPL(__imp__sub_829A4640) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r10,r10,36008
	ctx.r10.u64 = ctx.r10.u64 | 36008;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r11,r11,99
	ctx.r11.s64 = ctx.r11.s64 + 99;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f1,r11,r3
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829A4668"))) PPC_WEAK_FUNC(sub_829A4668);
PPC_FUNC_IMPL(__imp__sub_829A4668) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// li r9,1
	ctx.r9.s64 = 1;
	// ori r10,r10,36008
	ctx.r10.u64 = ctx.r10.u64 | 36008;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r9,500(r3)
	PPC_STORE_U32(ctx.r3.u32 + 500, ctx.r9.u32);
	// addi r11,r11,127
	ctx.r11.s64 = ctx.r11.s64 + 127;
	// stw r8,504(r3)
	PPC_STORE_U32(ctx.r3.u32 + 504, ctx.r8.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// blr 
	return;
}

