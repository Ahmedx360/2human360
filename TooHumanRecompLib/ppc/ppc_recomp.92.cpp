#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82678F28"))) PPC_WEAK_FUNC(sub_82678F28);
PPC_FUNC_IMPL(__imp__sub_82678F28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,13464
	ctx.r31.s64 = ctx.r11.s64 + 13464;
	// lwz r11,13460(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13460);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82678f70
	if (!ctx.cr0.eq) goto loc_82678F70;
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-20336
	ctx.r9.s64 = ctx.r9.s64 + -20336;
	// stw r11,13460(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13460, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,27160
	ctx.r3.s64 = ctx.r11.s64 + 27160;
	// bl 0x82a4c758
	ctx.lr = 0x82678F70;
	sub_82A4C758(ctx, base);
loc_82678F70:
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

__attribute__((alias("__imp__sub_82678F88"))) PPC_WEAK_FUNC(sub_82678F88);
PPC_FUNC_IMPL(__imp__sub_82678F88) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8266f948
	sub_8266F948(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82678F90"))) PPC_WEAK_FUNC(sub_82678F90);
PPC_FUNC_IMPL(__imp__sub_82678F90) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82678b78
	sub_82678B78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82678F98"))) PPC_WEAK_FUNC(sub_82678F98);
PPC_FUNC_IMPL(__imp__sub_82678F98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-6240
	ctx.r3.s64 = ctx.r11.s64 + -6240;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82678FA8"))) PPC_WEAK_FUNC(sub_82678FA8);
PPC_FUNC_IMPL(__imp__sub_82678FA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82678fe0
	if (ctx.cr6.eq) goto loc_82678FE0;
	// bl 0x823c3eb8
	ctx.lr = 0x82678FD0;
	sub_823C3EB8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82678fe0
	if (!ctx.cr6.eq) goto loc_82678FE0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82678fec
	goto loc_82678FEC;
loc_82678FE0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82678a98
	ctx.lr = 0x82678FEC;
	sub_82678A98(ctx, base);
loc_82678FEC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82679008"))) PPC_WEAK_FUNC(sub_82679008);
PPC_FUNC_IMPL(__imp__sub_82679008) {
	PPC_FUNC_PROLOGUE();
	// b 0x823c3eb8
	sub_823C3EB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82679010"))) PPC_WEAK_FUNC(sub_82679010);
PPC_FUNC_IMPL(__imp__sub_82679010) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x82679030;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82679078
	if (ctx.cr0.eq) goto loc_82679078;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234e3e0
	ctx.lr = 0x82679044;
	sub_8234E3E0(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// addi r11,r11,-20256
	ctx.r11.s64 = ctx.r11.s64 + -20256;
	// addi r10,r10,-18588
	ctx.r10.s64 = ctx.r10.s64 + -18588;
	// addi r9,r9,-18536
	ctx.r9.s64 = ctx.r9.s64 + -18536;
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
	// b 0x8267907c
	goto loc_8267907C;
loc_82679078:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8267907C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82679098"))) PPC_WEAK_FUNC(sub_82679098);
PPC_FUNC_IMPL(__imp__sub_82679098) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823c3eb8
	ctx.lr = 0x826790B8;
	sub_823C3EB8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x826790cc
	if (ctx.cr6.eq) goto loc_826790CC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82678b78
	ctx.lr = 0x826790CC;
	sub_82678B78(ctx, base);
loc_826790CC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826790E8"))) PPC_WEAK_FUNC(sub_826790E8);
PPC_FUNC_IMPL(__imp__sub_826790E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// addi r11,r11,-20256
	ctx.r11.s64 = ctx.r11.s64 + -20256;
	// addi r10,r10,-18588
	ctx.r10.s64 = ctx.r10.s64 + -18588;
	// addi r9,r9,-18536
	ctx.r9.s64 = ctx.r9.s64 + -18536;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// bl 0x8265cc00
	ctx.lr = 0x8267912C;
	sub_8265CC00(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8267913c
	if (ctx.cr0.eq) goto loc_8267913C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x8267913C;
	sub_82332DB8(ctx, base);
loc_8267913C:
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

__attribute__((alias("__imp__sub_82679158"))) PPC_WEAK_FUNC(sub_82679158);
PPC_FUNC_IMPL(__imp__sub_82679158) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82679160;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82678bd8
	ctx.lr = 0x8267916C;
	sub_82678BD8(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// addi r11,r11,-20256
	ctx.r11.s64 = ctx.r11.s64 + -20256;
	// addi r10,r10,-18588
	ctx.r10.s64 = ctx.r10.s64 + -18588;
	// addi r9,r9,-18536
	ctx.r9.s64 = ctx.r9.s64 + -18536;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// stw r30,1932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1932, ctx.r30.u32);
	// addi r3,r11,32296
	ctx.r3.s64 = ctx.r11.s64 + 32296;
	// bl 0x828165a8
	ctx.lr = 0x826791A4;
	sub_828165A8(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r31,1684
	ctx.r3.s64 = ctx.r31.s64 + 1684;
	// bl 0x82410060
	ctx.lr = 0x826791B4;
	sub_82410060(ctx, base);
	// li r29,2
	ctx.r29.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// addi r3,r31,1660
	ctx.r3.s64 = ctx.r31.s64 + 1660;
	// bl 0x82643410
	ctx.lr = 0x826791C8;
	sub_82643410(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r31,1756
	ctx.r3.s64 = ctx.r31.s64 + 1756;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x824fc978
	ctx.lr = 0x826791E0;
	sub_824FC978(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r31,1732
	ctx.r3.s64 = ctx.r31.s64 + 1732;
	// lfs f0,20416(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20416);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x824fc978
	ctx.lr = 0x826791F8;
	sub_824FC978(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r31,2144
	ctx.r3.s64 = ctx.r31.s64 + 2144;
	// lfs f0,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x824fc978
	ctx.lr = 0x82679210;
	sub_824FC978(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82679248
	if (ctx.cr6.eq) goto loc_82679248;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// addi r5,r11,-30912
	ctx.r5.s64 = ctx.r11.s64 + -30912;
	// addi r4,r10,-17176
	ctx.r4.s64 = ctx.r10.s64 + -17176;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// addi r6,r31,3216
	ctx.r6.s64 = ctx.r31.s64 + 3216;
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x828c58b0
	ctx.lr = 0x82679248;
	sub_828C58B0(ctx, base);
loc_82679248:
	// li r11,100
	ctx.r11.s64 = 100;
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r11,2004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2004, ctx.r11.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r11,2012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2012, ctx.r11.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,2020
	ctx.r3.s64 = ctx.r31.s64 + 2020;
	// bl 0x823327e0
	ctx.lr = 0x8267926C;
	sub_823327E0(ctx, base);
	// lis r7,-32223
	ctx.r7.s64 = -2111766528;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r7,-20316
	ctx.r4.s64 = ctx.r7.s64 + -20316;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// li r8,4112
	ctx.r8.s64 = 4112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r7,2032(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2032);
	// stw r30,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r30.u32);
	// lwz r7,2032(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2032);
	// stw r10,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
	// stw r8,2100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2100, ctx.r8.u32);
	// stw r11,1940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1940, ctx.r11.u32);
	// stw r10,1944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1944, ctx.r10.u32);
	// stw r9,1948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1948, ctx.r9.u32);
	// stw r30,2052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2052, ctx.r30.u32);
	// stw r29,1956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1956, ctx.r29.u32);
	// bl 0x8233a258
	ctx.lr = 0x826792B4;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,2320
	ctx.r3.s64 = ctx.r31.s64 + 2320;
	// bl 0x82400b48
	ctx.lr = 0x826792C0;
	sub_82400B48(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x826792C8;
	sub_82333960(ctx, base);
	// li r11,35
	ctx.r11.s64 = 35;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,2168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2168, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826792E0"))) PPC_WEAK_FUNC(sub_826792E0);
PPC_FUNC_IMPL(__imp__sub_826792E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82678c38
	ctx.lr = 0x826792FC;
	sub_82678C38(ctx, base);
	// addic. r11,r31,300
	ctx.xer.ca = ctx.r31.u32 > 4294966995;
	ctx.r11.s64 = ctx.r31.s64 + 300;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8267931c
	if (ctx.cr0.eq) goto loc_8267931C;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8267931c
	if (ctx.cr6.eq) goto loc_8267931C;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82679320
	goto loc_82679320;
loc_8267931C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82679320:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-6216
	ctx.r3.s64 = ctx.r11.s64 + -6216;
	// bl 0x82816528
	ctx.lr = 0x8267932C;
	sub_82816528(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,30360
	ctx.r3.s64 = ctx.r11.s64 + 30360;
	// bl 0x82816528
	ctx.lr = 0x8267933C;
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
	ctx.lr = 0x82679350;
	sub_828D0CB0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-6176
	ctx.r3.s64 = ctx.r11.s64 + -6176;
	// bl 0x82816528
	ctx.lr = 0x8267935C;
	sub_82816528(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,28548
	ctx.r3.s64 = ctx.r11.s64 + 28548;
	// bl 0x82816528
	ctx.lr = 0x8267936C;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x8267937C;
	sub_828D0CB0(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r3,r11,-20300
	ctx.r3.s64 = ctx.r11.s64 + -20300;
	// bl 0x82816528
	ctx.lr = 0x82679388;
	sub_82816528(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,-23268
	ctx.r3.s64 = ctx.r11.s64 + -23268;
	// bl 0x82816528
	ctx.lr = 0x82679398;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x826793A8;
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

__attribute__((alias("__imp__sub_826793C0"))) PPC_WEAK_FUNC(sub_826793C0);
PPC_FUNC_IMPL(__imp__sub_826793C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x826793C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8265e4f0
	ctx.lr = 0x826793D4;
	sub_8265E4F0(ctx, base);
	// li r3,1680
	ctx.r3.s64 = 1680;
	// bl 0x82833108
	ctx.lr = 0x826793DC;
	sub_82833108(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82679444
	if (ctx.cr0.eq) goto loc_82679444;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82713ce0
	ctx.lr = 0x826793EC;
	sub_82713CE0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r7,-32221
	ctx.r7.s64 = -2111635456;
	// addi r9,r11,-32676
	ctx.r9.s64 = ctx.r11.s64 + -32676;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r8,-32221
	ctx.r8.s64 = -2111635456;
	// lfs f0,-32676(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32676);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f0,1408(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1408, temp.u32);
	// addi r10,r10,-14088
	ctx.r10.s64 = ctx.r10.s64 + -14088;
	// lfs f0,-144(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -144);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r7,-15204
	ctx.r9.s64 = ctx.r7.s64 + -15204;
	// addi r8,r8,-13072
	ctx.r8.s64 = ctx.r8.s64 + -13072;
	// stfs f0,1416(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1416, temp.u32);
	// li r7,20
	ctx.r7.s64 = 20;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r8,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r8.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r9,396(r30)
	PPC_STORE_U32(ctx.r30.u32 + 396, ctx.r9.u32);
	// stw r7,1424(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1424, ctx.r7.u32);
	// stw r11,1520(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1520, ctx.r11.u32);
	// stw r11,1600(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1600, ctx.r11.u32);
	// b 0x8267944c
	goto loc_8267944C;
loc_82679444:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_8267944C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,3280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3280, ctx.r3.u32);
	// beq cr6,0x826795d0
	if (ctx.cr6.eq) goto loc_826795D0;
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r5,800(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f0,904(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
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
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r11,448(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 448);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826794B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r3,r11,-5704
	ctx.r3.s64 = ctx.r11.s64 + -5704;
	// bl 0x82816528
	ctx.lr = 0x826794C4;
	sub_82816528(ctx, base);
	// lwz r11,3280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3280);
	// lwz r10,960(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 960);
	// stw r31,1432(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1432, ctx.r31.u32);
	// stw r3,1436(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1436, ctx.r3.u32);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x826794f0
	if (!ctx.cr6.eq) goto loc_826794F0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,1008(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1008);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826794F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826794F0:
	// lwz r5,3148(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3148);
	// lwz r30,3280(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3280);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r5,1468(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1468, ctx.r5.u32);
	// beq cr6,0x82679524
	if (ctx.cr6.eq) goto loc_82679524;
	// lwz r3,1500(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1500);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82679524
	if (ctx.cr6.eq) goto loc_82679524;
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// bl 0x82978bc0
	ctx.lr = 0x8267951C;
	sub_82978BC0(ctx, base);
	// lwz r3,1500(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1500);
	// bl 0x82978ed0
	ctx.lr = 0x82679524;
	sub_82978ED0(ctx, base);
loc_82679524:
	// lwz r5,3152(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3152);
	// lwz r30,3280(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3280);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r5,1472(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1472, ctx.r5.u32);
	// beq cr6,0x82679558
	if (ctx.cr6.eq) goto loc_82679558;
	// lwz r3,1504(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1504);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82679558
	if (ctx.cr6.eq) goto loc_82679558;
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// bl 0x82978bc0
	ctx.lr = 0x82679550;
	sub_82978BC0(ctx, base);
	// lwz r3,1504(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1504);
	// bl 0x82978ed0
	ctx.lr = 0x82679558;
	sub_82978ED0(ctx, base);
loc_82679558:
	// lwz r10,3280(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3280);
	// lis r11,2626
	ctx.r11.s64 = 172097536;
	// lis r9,4324
	ctx.r9.s64 = 283377664;
	// ori r11,r11,19277
	ctx.r11.u64 = ctx.r11.u64 | 19277;
	// ori r9,r9,43545
	ctx.r9.u64 = ctx.r9.u64 | 43545;
	// lis r8,12610
	ctx.r8.s64 = 826408960;
	// stw r11,1560(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1560, ctx.r11.u32);
	// lis r7,7465
	ctx.r7.s64 = 489226240;
	// stw r11,1552(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1552, ctx.r11.u32);
	// ori r11,r8,32277
	ctx.r11.u64 = ctx.r8.u64 | 32277;
	// stw r9,1556(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1556, ctx.r9.u32);
	// ori r10,r7,39909
	ctx.r10.u64 = ctx.r7.u64 | 39909;
	// lwz r9,3280(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3280);
	// stw r11,1564(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1564, ctx.r11.u32);
	// stw r10,1568(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1568, ctx.r10.u32);
	// lwz r30,3280(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3280);
	// lwz r5,3148(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3148);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r5,1468(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1468, ctx.r5.u32);
	// beq cr6,0x826795c8
	if (ctx.cr6.eq) goto loc_826795C8;
	// lwz r3,1500(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1500);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826795c8
	if (ctx.cr6.eq) goto loc_826795C8;
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// bl 0x82978bc0
	ctx.lr = 0x826795C0;
	sub_82978BC0(ctx, base);
	// lwz r3,1500(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1500);
	// bl 0x82978ed0
	ctx.lr = 0x826795C8;
	sub_82978ED0(ctx, base);
loc_826795C8:
	// lwz r11,3280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3280);
	// stw r29,1512(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1512, ctx.r29.u32);
loc_826795D0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826795D8"))) PPC_WEAK_FUNC(sub_826795D8);
PPC_FUNC_IMPL(__imp__sub_826795D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8265dc48
	ctx.lr = 0x826795F4;
	sub_8265DC48(ctx, base);
	// lwz r30,3280(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3280);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x826796c4
	if (ctx.cr6.eq) goto loc_826796C4;
	// lwz r5,3148(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3148);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r5,1468(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1468, ctx.r5.u32);
	// beq cr6,0x82679630
	if (ctx.cr6.eq) goto loc_82679630;
	// lwz r3,1500(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1500);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82679630
	if (ctx.cr6.eq) goto loc_82679630;
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// bl 0x82978bc0
	ctx.lr = 0x82679628;
	sub_82978BC0(ctx, base);
	// lwz r3,1500(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1500);
	// bl 0x82978ed0
	ctx.lr = 0x82679630;
	sub_82978ED0(ctx, base);
loc_82679630:
	// lwz r5,3152(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3152);
	// lwz r30,3280(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3280);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r5,1472(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1472, ctx.r5.u32);
	// beq cr6,0x82679664
	if (ctx.cr6.eq) goto loc_82679664;
	// lwz r3,1504(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1504);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82679664
	if (ctx.cr6.eq) goto loc_82679664;
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// bl 0x82978bc0
	ctx.lr = 0x8267965C;
	sub_82978BC0(ctx, base);
	// lwz r3,1504(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1504);
	// bl 0x82978ed0
	ctx.lr = 0x82679664;
	sub_82978ED0(ctx, base);
loc_82679664:
	// lwz r10,3280(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3280);
	// lis r11,2626
	ctx.r11.s64 = 172097536;
	// lis r9,4324
	ctx.r9.s64 = 283377664;
	// ori r11,r11,19277
	ctx.r11.u64 = ctx.r11.u64 | 19277;
	// lis r8,12610
	ctx.r8.s64 = 826408960;
	// lis r7,7465
	ctx.r7.s64 = 489226240;
	// ori r9,r9,43545
	ctx.r9.u64 = ctx.r9.u64 | 43545;
	// stw r11,1560(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1560, ctx.r11.u32);
	// stw r11,1552(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1552, ctx.r11.u32);
	// lis r6,15396
	ctx.r6.s64 = 1008992256;
	// ori r11,r7,39909
	ctx.r11.u64 = ctx.r7.u64 | 39909;
	// stw r9,1556(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1556, ctx.r9.u32);
	// ori r8,r8,32277
	ctx.r8.u64 = ctx.r8.u64 | 32277;
	// lwz r10,3280(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3280);
	// ori r9,r6,14623
	ctx.r9.u64 = ctx.r6.u64 | 14623;
	// stw r11,1568(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1568, ctx.r11.u32);
	// stw r8,1564(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1564, ctx.r8.u32);
	// lwz r11,3280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3280);
	// stw r9,1584(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1584, ctx.r9.u32);
	// lwz r3,3280(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3280);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1012(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1012);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826796C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826796C4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826796E0"))) PPC_WEAK_FUNC(sub_826796E0);
PPC_FUNC_IMPL(__imp__sub_826796E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x826796E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8265d250
	ctx.lr = 0x826796F8;
	sub_8265D250(ctx, base);
	// lwz r3,800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8267971c
	if (ctx.cr6.eq) goto loc_8267971C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82679714;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x82679720
	goto loc_82679720;
loc_8267971C:
	// li r29,0
	ctx.r29.s64 = 0;
loc_82679720:
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r3,r11,-30780
	ctx.r3.s64 = ctx.r11.s64 + -30780;
	// bl 0x82816528
	ctx.lr = 0x8267972C;
	sub_82816528(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8267977c
	if (!ctx.cr6.eq) goto loc_8267977C;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x826797a4
	if (ctx.cr6.eq) goto loc_826797A4;
	// lwz r11,960(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 960);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x826797a4
	if (!ctx.cr6.eq) goto loc_826797A4;
	// lwz r3,3280(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3280);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x826797a4
	if (ctx.cr6.eq) goto loc_826797A4;
	// lwz r11,2452(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2452);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82679774
	if (ctx.cr6.eq) goto loc_82679774;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,356(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 356);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82679770;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x826797a4
	goto loc_826797A4;
loc_82679774:
	// bl 0x82715610
	ctx.lr = 0x82679778;
	sub_82715610(ctx, base);
	// b 0x826797a4
	goto loc_826797A4;
loc_8267977C:
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r3,r11,-30764
	ctx.r3.s64 = ctx.r11.s64 + -30764;
	// bl 0x82816528
	ctx.lr = 0x82679788;
	sub_82816528(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x826797a4
	if (!ctx.cr6.eq) goto loc_826797A4;
	// lwz r3,3280(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3280);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826797a4
	if (ctx.cr6.eq) goto loc_826797A4;
	// lwz r4,800(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// bl 0x829c24c0
	ctx.lr = 0x826797A4;
	sub_829C24C0(ctx, base);
loc_826797A4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826797B0"))) PPC_WEAK_FUNC(sub_826797B0);
PPC_FUNC_IMPL(__imp__sub_826797B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r4,3280(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3280);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x826797f4
	if (ctx.cr6.eq) goto loc_826797F4;
	// bl 0x82679860
	ctx.lr = 0x826797E0;
	sub_82679860(ctx, base);
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,3280(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3280);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82715f60
	ctx.lr = 0x826797F4;
	sub_82715F60(ctx, base);
loc_826797F4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82679810"))) PPC_WEAK_FUNC(sub_82679810);
PPC_FUNC_IMPL(__imp__sub_82679810) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,3280(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3280);
	// std r4,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r4.u64);
	// std r5,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r5.u64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
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

__attribute__((alias("__imp__sub_82679840"))) PPC_WEAK_FUNC(sub_82679840);
PPC_FUNC_IMPL(__imp__sub_82679840) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,3280(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3280);
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

__attribute__((alias("__imp__sub_82679860"))) PPC_WEAK_FUNC(sub_82679860);
PPC_FUNC_IMPL(__imp__sub_82679860) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82679910
	if (ctx.cr6.eq) goto loc_82679910;
	// lwz r3,800(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 800);
	// bl 0x824090e0
	ctx.lr = 0x8267988C;
	sub_824090E0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82679910
	if (ctx.cr0.eq) goto loc_82679910;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825f4bc8
	ctx.lr = 0x8267989C;
	sub_825F4BC8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
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
	ctx.lr = 0x826798BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mulli r11,r3,10
	ctx.r11.s64 = ctx.r3.s64 * 10;
	// fmuls f0,f31,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f31.f64));
	// stfs f31,1616(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1616, temp.u32);
	// stw r11,1424(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1424, ctx.r11.u32);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// li r10,0
	ctx.r10.s64 = 0;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// stw r10,1640(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1640, ctx.r10.u32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// stfs f0,1620(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1620, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1576(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1576);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82679904;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f1,1412(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1412, temp.u32);
	// lfs f0,11260(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 11260);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1644(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1644, temp.u32);
loc_82679910:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_82679930"))) PPC_WEAK_FUNC(sub_82679930);
PPC_FUNC_IMPL(__imp__sub_82679930) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x82679954;
	sub_828A3F38(ctx, base);
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,2044(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2044);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826799d0
	if (ctx.cr6.eq) goto loc_826799D0;
	// bl 0x823c3eb8
	ctx.lr = 0x82679974;
	sub_823C3EB8(ctx, base);
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
	ctx.lr = 0x8267998C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82679998
	if (!ctx.cr0.eq) goto loc_82679998;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82679998:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826799d0
	if (ctx.cr6.eq) goto loc_826799D0;
	// lwz r4,3280(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3280);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x826799d0
	if (ctx.cr6.eq) goto loc_826799D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82679860
	ctx.lr = 0x826799B4;
	sub_82679860(ctx, base);
	// lwz r3,3280(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3280);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,356(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 356);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826799C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,2452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2452, ctx.r11.u32);
loc_826799D0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826799E8"))) PPC_WEAK_FUNC(sub_826799E8);
PPC_FUNC_IMPL(__imp__sub_826799E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x828a3f90
	ctx.lr = 0x82679A14;
	sub_828A3F90(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-6216
	ctx.r3.s64 = ctx.r11.s64 + -6216;
	// bl 0x82816528
	ctx.lr = 0x82679A20;
	sub_82816528(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82679a80
	if (ctx.cr6.eq) goto loc_82679A80;
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x823c3eb8
	ctx.lr = 0x82679A3C;
	sub_823C3EB8(ctx, base);
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
	ctx.lr = 0x82679A54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82679a60
	if (!ctx.cr0.eq) goto loc_82679A60;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82679A60:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82679a80
	if (ctx.cr6.eq) goto loc_82679A80;
	// lwz r3,3280(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3280);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82679a80
	if (ctx.cr6.eq) goto loc_82679A80;
	// bl 0x82715610
	ctx.lr = 0x82679A78;
	sub_82715610(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,2452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2452, ctx.r11.u32);
loc_82679A80:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82679A98"))) PPC_WEAK_FUNC(sub_82679A98);
PPC_FUNC_IMPL(__imp__sub_82679A98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82679AA0;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r11,-88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -88);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r31,-80(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -80);
	// bl 0x823c3eb8
	ctx.lr = 0x82679AC8;
	sub_823C3EB8(ctx, base);
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
	ctx.lr = 0x82679AE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// bne 0x82679af0
	if (!ctx.cr0.eq) goto loc_82679AF0;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82679AF0:
	// lwz r11,-88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -88);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,-80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -80);
	// lwz r10,2044(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2044);
	// cmpw cr6,r27,r10
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82679bac
	if (ctx.cr6.eq) goto loc_82679BAC;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82679ba4
	if (ctx.cr6.eq) goto loc_82679BA4;
	// lwz r3,800(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 800);
	// bl 0x824090e0
	ctx.lr = 0x82679B1C;
	sub_824090E0(ctx, base);
	// lwz r31,3280(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3280);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82679bac
	if (ctx.cr6.eq) goto loc_82679BAC;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82679bac
	if (ctx.cr6.eq) goto loc_82679BAC;
	// bl 0x825f4bc8
	ctx.lr = 0x82679B38;
	sub_825F4BC8(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r10,10564
	ctx.r4.s64 = ctx.r10.s64 + 10564;
	// lwz r11,1572(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1572);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82679B58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mulli r11,r3,10
	ctx.r11.s64 = ctx.r3.s64 * 10;
	// fmuls f0,f31,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f31.f64));
	// stfs f31,1616(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1616, temp.u32);
	// stw r11,1424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1424, ctx.r11.u32);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// li r10,0
	ctx.r10.s64 = 0;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// stw r10,1640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1640, ctx.r10.u32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// stfs f0,1620(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1620, temp.u32);
	// lwz r3,3280(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3280);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,356(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 356);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82679BA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82679bac
	goto loc_82679BAC;
loc_82679BA4:
	// lwz r3,3280(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3280);
	// bl 0x82715610
	ctx.lr = 0x82679BAC;
	sub_82715610(ctx, base);
loc_82679BAC:
	// lwz r11,-88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -88);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r3,-80(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1428(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1428);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82679BD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82679BE0"))) PPC_WEAK_FUNC(sub_82679BE0);
PPC_FUNC_IMPL(__imp__sub_82679BE0) {
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
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r11,1632(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1632);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82679c40
	if (!ctx.cr0.eq) goto loc_82679C40;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,15834
	ctx.r4.s64 = ctx.r11.s64 + 15834;
	// bl 0x8233a258
	ctx.lr = 0x82679C20;
	sub_8233A258(ctx, base);
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lis r4,13188
	ctx.r4.s64 = 864288768;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r4,r4,25176
	ctx.r4.u64 = ctx.r4.u64 | 25176;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x829c3740
	ctx.lr = 0x82679C40;
	sub_829C3740(ctx, base);
loc_82679C40:
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

__attribute__((alias("__imp__sub_82679C58"))) PPC_WEAK_FUNC(sub_82679C58);
PPC_FUNC_IMPL(__imp__sub_82679C58) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x826790e8
	sub_826790E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82679C60"))) PPC_WEAK_FUNC(sub_82679C60);
PPC_FUNC_IMPL(__imp__sub_82679C60) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x826790e8
	sub_826790E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82679C68"))) PPC_WEAK_FUNC(sub_82679C68);
PPC_FUNC_IMPL(__imp__sub_82679C68) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82679098
	sub_82679098(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82679C70"))) PPC_WEAK_FUNC(sub_82679C70);
PPC_FUNC_IMPL(__imp__sub_82679C70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-6132
	ctx.r3.s64 = ctx.r11.s64 + -6132;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82679C80"))) PPC_WEAK_FUNC(sub_82679C80);
PPC_FUNC_IMPL(__imp__sub_82679C80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82679cb8
	if (ctx.cr6.eq) goto loc_82679CB8;
	// bl 0x823c42a8
	ctx.lr = 0x82679CA8;
	sub_823C42A8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82679cb8
	if (!ctx.cr6.eq) goto loc_82679CB8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82679cc4
	goto loc_82679CC4;
loc_82679CB8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82678a98
	ctx.lr = 0x82679CC4;
	sub_82678A98(ctx, base);
loc_82679CC4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82679CE0"))) PPC_WEAK_FUNC(sub_82679CE0);
PPC_FUNC_IMPL(__imp__sub_82679CE0) {
	PPC_FUNC_PROLOGUE();
	// b 0x823c42a8
	sub_823C42A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82679CE8"))) PPC_WEAK_FUNC(sub_82679CE8);
PPC_FUNC_IMPL(__imp__sub_82679CE8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82678f28
	sub_82678F28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82679CF0"))) PPC_WEAK_FUNC(sub_82679CF0);
PPC_FUNC_IMPL(__imp__sub_82679CF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x82679D10;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82679d58
	if (ctx.cr0.eq) goto loc_82679D58;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234e3e0
	ctx.lr = 0x82679D24;
	sub_8234E3E0(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// addi r11,r11,-18512
	ctx.r11.s64 = ctx.r11.s64 + -18512;
	// addi r10,r10,-16844
	ctx.r10.s64 = ctx.r10.s64 + -16844;
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
	// b 0x82679d5c
	goto loc_82679D5C;
loc_82679D58:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82679D5C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82679D78"))) PPC_WEAK_FUNC(sub_82679D78);
PPC_FUNC_IMPL(__imp__sub_82679D78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823c42a8
	ctx.lr = 0x82679D98;
	sub_823C42A8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82679dac
	if (ctx.cr6.eq) goto loc_82679DAC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82678b78
	ctx.lr = 0x82679DAC;
	sub_82678B78(ctx, base);
loc_82679DAC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82679DC8"))) PPC_WEAK_FUNC(sub_82679DC8);
PPC_FUNC_IMPL(__imp__sub_82679DC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82679DD0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82678bd8
	ctx.lr = 0x82679DDC;
	sub_82678BD8(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// addi r11,r11,-18512
	ctx.r11.s64 = ctx.r11.s64 + -18512;
	// addi r10,r10,-16844
	ctx.r10.s64 = ctx.r10.s64 + -16844;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// li r11,38
	ctx.r11.s64 = 38;
	// addi r9,r9,-30936
	ctx.r9.s64 = ctx.r9.s64 + -30936;
	// li r10,4352
	ctx.r10.s64 = 4352;
	// stw r11,2168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2168, ctx.r11.u32);
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r10,2100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2100, ctx.r10.u32);
	// stw r28,1932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1932, ctx.r28.u32);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// stw r29,1884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1884, ctx.r29.u32);
	// addi r3,r11,32296
	ctx.r3.s64 = ctx.r11.s64 + 32296;
	// bl 0x828165a8
	ctx.lr = 0x82679E2C;
	sub_828165A8(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r31,1684
	ctx.r3.s64 = ctx.r31.s64 + 1684;
	// bl 0x82410060
	ctx.lr = 0x82679E3C;
	sub_82410060(ctx, base);
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,1660
	ctx.r3.s64 = ctx.r31.s64 + 1660;
	// bl 0x82643410
	ctx.lr = 0x82679E4C;
	sub_82643410(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r31,1756
	ctx.r3.s64 = ctx.r31.s64 + 1756;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x824fc978
	ctx.lr = 0x82679E64;
	sub_824FC978(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r31,1732
	ctx.r3.s64 = ctx.r31.s64 + 1732;
	// lfs f0,30996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x824fc978
	ctx.lr = 0x82679E7C;
	sub_824FC978(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r31,2144
	ctx.r3.s64 = ctx.r31.s64 + 2144;
	// lfs f0,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x824fc978
	ctx.lr = 0x82679E94;
	sub_824FC978(ctx, base);
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// addi r30,r11,24560
	ctx.r30.s64 = ctx.r11.s64 + 24560;
	// lwz r11,24564(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24564);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82679ecc
	if (!ctx.cr0.eq) goto loc_82679ECC;
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-16792
	ctx.r9.s64 = ctx.r9.s64 + -16792;
	// stw r11,24564(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24564, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// addi r3,r11,27184
	ctx.r3.s64 = ctx.r11.s64 + 27184;
	// bl 0x82a4c758
	ctx.lr = 0x82679ECC;
	sub_82A4C758(ctx, base);
loc_82679ECC:
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r31,1708
	ctx.r3.s64 = ctx.r31.s64 + 1708;
	// bl 0x82410060
	ctx.lr = 0x82679EDC;
	sub_82410060(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82679f14
	if (ctx.cr6.eq) goto loc_82679F14;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// addi r5,r11,-30912
	ctx.r5.s64 = ctx.r11.s64 + -30912;
	// addi r4,r10,-15324
	ctx.r4.s64 = ctx.r10.s64 + -15324;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// addi r6,r31,3216
	ctx.r6.s64 = ctx.r31.s64 + 3216;
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x828c58b0
	ctx.lr = 0x82679F14;
	sub_828C58B0(ctx, base);
loc_82679F14:
	// li r11,100
	ctx.r11.s64 = 100;
	// stw r28,1940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1940, ctx.r28.u32);
	// stw r29,1944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1944, ctx.r29.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r29,1948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1948, ctx.r29.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r11,2012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2012, ctx.r11.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r11,2004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2004, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,2020
	ctx.r3.s64 = ctx.r31.s64 + 2020;
	// bl 0x823327e0
	ctx.lr = 0x82679F44;
	sub_823327E0(ctx, base);
	// lwz r9,2032(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2032);
	// lis r11,5669
	ctx.r11.s64 = 371523584;
	// li r10,2
	ctx.r10.s64 = 2;
	// ori r11,r11,1716
	ctx.r11.u64 = ctx.r11.u64 | 1716;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r29.u32);
	// lwz r9,2032(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2032);
	// stw r29,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r29.u32);
	// stw r10,1956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1956, ctx.r10.u32);
	// stw r11,3092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3092, ctx.r11.u32);
	// stw r11,3096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3096, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82679F78"))) PPC_WEAK_FUNC(sub_82679F78);
PPC_FUNC_IMPL(__imp__sub_82679F78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82678c38
	ctx.lr = 0x82679F94;
	sub_82678C38(ctx, base);
	// addic. r11,r31,300
	ctx.xer.ca = ctx.r31.u32 > 4294966995;
	ctx.r11.s64 = ctx.r31.s64 + 300;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82679fb4
	if (ctx.cr0.eq) goto loc_82679FB4;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82679fb4
	if (ctx.cr6.eq) goto loc_82679FB4;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82679fb8
	goto loc_82679FB8;
loc_82679FB4:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82679FB8:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-6108
	ctx.r3.s64 = ctx.r11.s64 + -6108;
	// bl 0x82816528
	ctx.lr = 0x82679FC4;
	sub_82816528(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,30360
	ctx.r3.s64 = ctx.r11.s64 + 30360;
	// bl 0x82816528
	ctx.lr = 0x82679FD4;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x828d0cb0
	ctx.lr = 0x82679FE4;
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

__attribute__((alias("__imp__sub_8267A000"))) PPC_WEAK_FUNC(sub_8267A000);
PPC_FUNC_IMPL(__imp__sub_8267A000) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8267A008;
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
	// bl 0x8265dc48
	ctx.lr = 0x8267A01C;
	sub_8265DC48(ctx, base);
	// mulli r11,r29,24
	ctx.r11.s64 = ctx.r29.s64 * 24;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,560
	ctx.r4.s64 = ctx.r11.s64 + 560;
	// bl 0x823339b8
	ctx.lr = 0x8267A030;
	sub_823339B8(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// addi r28,r11,7896
	ctx.r28.s64 = ctx.r11.s64 + 7896;
	// addi r5,r10,28564
	ctx.r5.s64 = ctx.r10.s64 + 28564;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82816cf8
	ctx.lr = 0x8267A050;
	sub_82816CF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82400b48
	ctx.lr = 0x8267A05C;
	sub_82400B48(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82333960
	ctx.lr = 0x8267A064;
	sub_82333960(ctx, base);
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r5,172(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// bne cr6,0x8267a080
	if (!ctx.cr6.eq) goto loc_8267A080;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_8267A080:
	// addi r11,r29,21
	ctx.r11.s64 = ctx.r29.s64 + 21;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r10,-28912
	ctx.r4.s64 = ctx.r10.s64 + -28912;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lwzx r6,r11,r30
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// bl 0x82816c30
	ctx.lr = 0x8267A0A0;
	sub_82816C30(ctx, base);
	// lwz r11,208(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r3,204(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8267a0b4
	if (!ctx.cr6.eq) goto loc_8267A0B4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_8267A0B4:
	// bl 0x828165a8
	ctx.lr = 0x8267A0B8;
	sub_828165A8(ctx, base);
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// li r7,-1
	ctx.r7.s64 = -1;
	// addi r28,r31,3156
	ctx.r28.s64 = ctx.r31.s64 + 3156;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x8267A0DC;
	sub_823CF190(ctx, base);
	// li r3,1424
	ctx.r3.s64 = 1424;
	// bl 0x82833108
	ctx.lr = 0x8267A0E4;
	sub_82833108(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8267a0fc
	if (ctx.cr0.eq) goto loc_8267A0FC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x828adc70
	ctx.lr = 0x8267A0F8;
	sub_828ADC70(ctx, base);
	// b 0x8267a100
	goto loc_8267A100;
loc_8267A0FC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8267A100:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,3280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3280, ctx.r3.u32);
	// beq cr6,0x8267a1bc
	if (ctx.cr6.eq) goto loc_8267A1BC;
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8267a1bc
	if (ctx.cr6.eq) goto loc_8267A1BC;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// bl 0x828ae6e8
	ctx.lr = 0x8267A128;
	sub_828AE6E8(ctx, base);
	// lwz r11,3280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3280);
	// lwz r3,1408(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1408);
	// bl 0x82978ed0
	ctx.lr = 0x8267A134;
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
	ctx.lr = 0x8267A14C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// addi r3,r10,-5704
	ctx.r3.s64 = ctx.r10.s64 + -5704;
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
	// lwz r11,3280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3280);
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82816528
	ctx.lr = 0x8267A17C;
	sub_82816528(ctx, base);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,3280(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3280);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r10,280(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 280);
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
	ctx.lr = 0x8267A1A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// li r5,5
	ctx.r5.s64 = 5;
	// lwz r4,3280(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3280);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b8ee8
	ctx.lr = 0x8267A1BC;
	sub_829B8EE8(ctx, base);
loc_8267A1BC:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82333960
	ctx.lr = 0x8267A1C4;
	sub_82333960(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82333960
	ctx.lr = 0x8267A1CC;
	sub_82333960(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267A1D8"))) PPC_WEAK_FUNC(sub_8267A1D8);
PPC_FUNC_IMPL(__imp__sub_8267A1D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x8267A1FC;
	sub_828A3F38(ctx, base);
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8267a23c
	if (ctx.cr6.eq) goto loc_8267A23C;
	// bl 0x823c42a8
	ctx.lr = 0x8267A218;
	sub_823C42A8(ctx, base);
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
	ctx.lr = 0x8267A230;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// bne 0x8267a240
	if (!ctx.cr0.eq) goto loc_8267A240;
loc_8267A23C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8267A240:
	// lwz r11,3280(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3280);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267a258
	if (ctx.cr6.eq) goto loc_8267A258;
	// li r4,48
	ctx.r4.s64 = 48;
	// lwz r3,1408(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1408);
	// bl 0x82978d98
	ctx.lr = 0x8267A258;
	sub_82978D98(ctx, base);
loc_8267A258:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267A270"))) PPC_WEAK_FUNC(sub_8267A270);
PPC_FUNC_IMPL(__imp__sub_8267A270) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
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
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8267a2c0
	if (ctx.cr6.eq) goto loc_8267A2C0;
	// bl 0x823c42a8
	ctx.lr = 0x8267A29C;
	sub_823C42A8(ctx, base);
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
	ctx.lr = 0x8267A2B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// bne 0x8267a2c4
	if (!ctx.cr0.eq) goto loc_8267A2C4;
loc_8267A2C0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8267A2C4:
	// lwz r11,3280(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3280);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267a2d8
	if (ctx.cr6.eq) goto loc_8267A2D8;
	// lwz r3,1408(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1408);
	// bl 0x82978ed0
	ctx.lr = 0x8267A2D8;
	sub_82978ED0(ctx, base);
loc_8267A2D8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267A2F0"))) PPC_WEAK_FUNC(sub_8267A2F0);
PPC_FUNC_IMPL(__imp__sub_8267A2F0) {
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
	ctx.lr = 0x8267A304;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8267a314
	if (ctx.cr0.eq) goto loc_8267A314;
	// bl 0x826be530
	ctx.lr = 0x8267A310;
	sub_826BE530(ctx, base);
	// b 0x8267a318
	goto loc_8267A318;
loc_8267A314:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8267A318:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267A328"))) PPC_WEAK_FUNC(sub_8267A328);
PPC_FUNC_IMPL(__imp__sub_8267A328) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823954d0
	ctx.lr = 0x8267A348;
	sub_823954D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267A35C;
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

__attribute__((alias("__imp__sub_8267A378"))) PPC_WEAK_FUNC(sub_8267A378);
PPC_FUNC_IMPL(__imp__sub_8267A378) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82679d78
	sub_82679D78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267A380"))) PPC_WEAK_FUNC(sub_8267A380);
PPC_FUNC_IMPL(__imp__sub_8267A380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-6264
	ctx.r3.s64 = ctx.r11.s64 + -6264;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267A390"))) PPC_WEAK_FUNC(sub_8267A390);
PPC_FUNC_IMPL(__imp__sub_8267A390) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8267a3c8
	if (ctx.cr6.eq) goto loc_8267A3C8;
	// bl 0x823c3d78
	ctx.lr = 0x8267A3B8;
	sub_823C3D78(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8267a3c8
	if (!ctx.cr6.eq) goto loc_8267A3C8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8267a3d4
	goto loc_8267A3D4;
loc_8267A3C8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82678a98
	ctx.lr = 0x8267A3D4;
	sub_82678A98(ctx, base);
loc_8267A3D4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267A3F0"))) PPC_WEAK_FUNC(sub_8267A3F0);
PPC_FUNC_IMPL(__imp__sub_8267A3F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x823c3d78
	sub_823C3D78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267A3F8"))) PPC_WEAK_FUNC(sub_8267A3F8);
PPC_FUNC_IMPL(__imp__sub_8267A3F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x8267A418;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8267a458
	if (ctx.cr0.eq) goto loc_8267A458;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234e3e0
	ctx.lr = 0x8267A42C;
	sub_8234E3E0(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// addi r11,r11,-16768
	ctx.r11.s64 = ctx.r11.s64 + -16768;
	// addi r10,r10,-15100
	ctx.r10.s64 = ctx.r10.s64 + -15100;
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
	// b 0x8267a45c
	goto loc_8267A45C;
loc_8267A458:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8267A45C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267A478"))) PPC_WEAK_FUNC(sub_8267A478);
PPC_FUNC_IMPL(__imp__sub_8267A478) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823c3d78
	ctx.lr = 0x8267A498;
	sub_823C3D78(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8267a4ac
	if (ctx.cr6.eq) goto loc_8267A4AC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82678b78
	ctx.lr = 0x8267A4AC;
	sub_82678B78(ctx, base);
loc_8267A4AC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267A4C8"))) PPC_WEAK_FUNC(sub_8267A4C8);
PPC_FUNC_IMPL(__imp__sub_8267A4C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8267A4D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82678bd8
	ctx.lr = 0x8267A4DC;
	sub_82678BD8(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// addi r11,r11,-16768
	ctx.r11.s64 = ctx.r11.s64 + -16768;
	// addi r10,r10,-15100
	ctx.r10.s64 = ctx.r10.s64 + -15100;
	// addi r9,r9,-30936
	ctx.r9.s64 = ctx.r9.s64 + -30936;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// stw r28,1932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1932, ctx.r28.u32);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// stw r29,1884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1884, ctx.r29.u32);
	// addi r3,r11,32296
	ctx.r3.s64 = ctx.r11.s64 + 32296;
	// bl 0x828165a8
	ctx.lr = 0x8267A51C;
	sub_828165A8(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r31,1684
	ctx.r3.s64 = ctx.r31.s64 + 1684;
	// bl 0x82410060
	ctx.lr = 0x8267A52C;
	sub_82410060(ctx, base);
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,1660
	ctx.r3.s64 = ctx.r31.s64 + 1660;
	// bl 0x82643410
	ctx.lr = 0x8267A53C;
	sub_82643410(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r31,1756
	ctx.r3.s64 = ctx.r31.s64 + 1756;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x824fc978
	ctx.lr = 0x8267A554;
	sub_824FC978(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r31,1732
	ctx.r3.s64 = ctx.r31.s64 + 1732;
	// lfs f0,20416(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20416);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x824fc978
	ctx.lr = 0x8267A56C;
	sub_824FC978(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r31,2144
	ctx.r3.s64 = ctx.r31.s64 + 2144;
	// lfs f0,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x824fc978
	ctx.lr = 0x8267A584;
	sub_824FC978(ctx, base);
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// addi r30,r11,24552
	ctx.r30.s64 = ctx.r11.s64 + 24552;
	// lwz r11,24556(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24556);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8267a5bc
	if (!ctx.cr0.eq) goto loc_8267A5BC;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-23140
	ctx.r9.s64 = ctx.r9.s64 + -23140;
	// stw r11,24556(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24556, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// addi r3,r11,27208
	ctx.r3.s64 = ctx.r11.s64 + 27208;
	// bl 0x82a4c758
	ctx.lr = 0x8267A5BC;
	sub_82A4C758(ctx, base);
loc_8267A5BC:
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r31,1708
	ctx.r3.s64 = ctx.r31.s64 + 1708;
	// bl 0x82410060
	ctx.lr = 0x8267A5CC;
	sub_82410060(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8267a604
	if (ctx.cr6.eq) goto loc_8267A604;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// addi r5,r11,-30912
	ctx.r5.s64 = ctx.r11.s64 + -30912;
	// addi r4,r10,-13480
	ctx.r4.s64 = ctx.r10.s64 + -13480;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// addi r6,r31,3216
	ctx.r6.s64 = ctx.r31.s64 + 3216;
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x828c58b0
	ctx.lr = 0x8267A604;
	sub_828C58B0(ctx, base);
loc_8267A604:
	// li r11,100
	ctx.r11.s64 = 100;
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r11,2012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2012, ctx.r11.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r11,2004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2004, ctx.r11.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,2020
	ctx.r3.s64 = ctx.r31.s64 + 2020;
	// bl 0x823327e0
	ctx.lr = 0x8267A628;
	sub_823327E0(ctx, base);
	// lwz r6,2032(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2032);
	// lis r11,12802
	ctx.r11.s64 = 838991872;
	// lis r10,5669
	ctx.r10.s64 = 371523584;
	// li r9,4224
	ctx.r9.s64 = 4224;
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r29,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r29.u32);
	// ori r11,r11,32198
	ctx.r11.u64 = ctx.r11.u64 | 32198;
	// ori r10,r10,1716
	ctx.r10.u64 = ctx.r10.u64 | 1716;
	// li r7,41
	ctx.r7.s64 = 41;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,2032(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2032);
	// stw r29,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r29.u32);
	// lwz r6,2032(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2032);
	// stw r29,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r29.u32);
	// stw r9,2100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2100, ctx.r9.u32);
	// stw r28,1940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1940, ctx.r28.u32);
	// stw r29,1944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1944, ctx.r29.u32);
	// stw r28,1948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1948, ctx.r28.u32);
	// stw r8,1956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1956, ctx.r8.u32);
	// stw r11,3092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3092, ctx.r11.u32);
	// stw r10,3096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3096, ctx.r10.u32);
	// stw r7,2168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2168, ctx.r7.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267A688"))) PPC_WEAK_FUNC(sub_8267A688);
PPC_FUNC_IMPL(__imp__sub_8267A688) {
	PPC_FUNC_PROLOGUE();
	// b 0x823cf248
	sub_823CF248(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267A690"))) PPC_WEAK_FUNC(sub_8267A690);
PPC_FUNC_IMPL(__imp__sub_8267A690) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82395588
	ctx.lr = 0x8267A6B0;
	sub_82395588(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267A6C4;
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

__attribute__((alias("__imp__sub_8267A6E0"))) PPC_WEAK_FUNC(sub_8267A6E0);
PPC_FUNC_IMPL(__imp__sub_8267A6E0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8267a478
	sub_8267A478(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267A6E8"))) PPC_WEAK_FUNC(sub_8267A6E8);
PPC_FUNC_IMPL(__imp__sub_8267A6E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-5820
	ctx.r3.s64 = ctx.r11.s64 + -5820;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267A6F8"))) PPC_WEAK_FUNC(sub_8267A6F8);
PPC_FUNC_IMPL(__imp__sub_8267A6F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8267a730
	if (ctx.cr6.eq) goto loc_8267A730;
	// bl 0x823c4fa0
	ctx.lr = 0x8267A720;
	sub_823C4FA0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8267a730
	if (!ctx.cr6.eq) goto loc_8267A730;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8267a73c
	goto loc_8267A73C;
loc_8267A730:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8234e2d8
	ctx.lr = 0x8267A73C;
	sub_8234E2D8(ctx, base);
loc_8267A73C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267A758"))) PPC_WEAK_FUNC(sub_8267A758);
PPC_FUNC_IMPL(__imp__sub_8267A758) {
	PPC_FUNC_PROLOGUE();
	// b 0x823c4fa0
	sub_823C4FA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267A760"))) PPC_WEAK_FUNC(sub_8267A760);
PPC_FUNC_IMPL(__imp__sub_8267A760) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x8267A780;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8267a7c0
	if (ctx.cr0.eq) goto loc_8267A7C0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234e3e0
	ctx.lr = 0x8267A794;
	sub_8234E3E0(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// addi r11,r11,-14984
	ctx.r11.s64 = ctx.r11.s64 + -14984;
	// addi r10,r10,-13316
	ctx.r10.s64 = ctx.r10.s64 + -13316;
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
	// b 0x8267a7c4
	goto loc_8267A7C4;
loc_8267A7C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8267A7C4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267A7E0"))) PPC_WEAK_FUNC(sub_8267A7E0);
PPC_FUNC_IMPL(__imp__sub_8267A7E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823c4fa0
	ctx.lr = 0x8267A800;
	sub_823C4FA0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8267a810
	if (!ctx.cr6.eq) goto loc_8267A810;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8267a828
	goto loc_8267A828;
loc_8267A810:
	// bl 0x823323b8
	ctx.lr = 0x8267A814;
	sub_823323B8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8267a828
	if (ctx.cr6.eq) goto loc_8267A828;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8234d0a0
	ctx.lr = 0x8267A828;
	sub_8234D0A0(ctx, base);
loc_8267A828:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267A840"))) PPC_WEAK_FUNC(sub_8267A840);
PPC_FUNC_IMPL(__imp__sub_8267A840) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8267A848;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8265c840
	ctx.lr = 0x8267A854;
	sub_8265C840(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r30,1932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1932, ctx.r30.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,1940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1940, ctx.r11.u32);
	// lis r8,-32223
	ctx.r8.s64 = -2111766528;
	// stw r10,1944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1944, ctx.r10.u32);
	// lis r7,-32223
	ctx.r7.s64 = -2111766528;
	// stw r9,1948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1948, ctx.r9.u32);
	// lis r6,-32224
	ctx.r6.s64 = -2111832064;
	// stw r30,1884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1884, ctx.r30.u32);
	// addi r11,r8,-14984
	ctx.r11.s64 = ctx.r8.s64 + -14984;
	// stw r30,2068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2068, ctx.r30.u32);
	// addi r10,r7,-13316
	ctx.r10.s64 = ctx.r7.s64 + -13316;
	// addi r9,r6,-30936
	ctx.r9.s64 = ctx.r6.s64 + -30936;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r3,r11,-15048
	ctx.r3.s64 = ctx.r11.s64 + -15048;
	// bl 0x82816528
	ctx.lr = 0x8267A8AC;
	sub_82816528(ctx, base);
	// stw r3,2076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2076, ctx.r3.u32);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r3,r11,-15024
	ctx.r3.s64 = ctx.r11.s64 + -15024;
	// bl 0x82816528
	ctx.lr = 0x8267A8BC;
	sub_82816528(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stw r3,2080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2080, ctx.r3.u32);
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// stw r30,2100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2100, ctx.r30.u32);
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// li r6,20
	ctx.r6.s64 = 20;
	// lfs f0,17668(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17668);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stw r6,2084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2084, ctx.r6.u32);
	// lfs f11,20424(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20424);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// lfs f10,20420(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 20420);
	ctx.f10.f64 = double(temp.f32);
	// lis r5,13338
	ctx.r5.s64 = 874119168;
	// lfs f0,19784(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 19784);
	ctx.f0.f64 = double(temp.f32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// lfs f13,-28784(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28784);
	ctx.f13.f64 = double(temp.f32);
	// ori r5,r5,28071
	ctx.r5.u64 = ctx.r5.u64 | 28071;
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lfs f12,23596(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 23596);
	ctx.f12.f64 = double(temp.f32);
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r10,2108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2108, ctx.r10.u32);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r11,2112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2112, ctx.r11.u32);
	// stw r6,2104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2104, ctx.r6.u32);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// stw r9,2116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2116, ctx.r9.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r4,2124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2124, ctx.r4.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r8,2120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2120, ctx.r8.u32);
	// lwz r11,13024(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13024);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x8267A970;
	sub_823CF190(ctx, base);
	// addi r30,r31,2276
	ctx.r30.s64 = ctx.r31.s64 + 2276;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823327e0
	ctx.lr = 0x8267A98C;
	sub_823327E0(ctx, base);
	// lwz r11,2288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2288);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267a9a0
	if (ctx.cr6.eq) goto loc_8267A9A0;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
loc_8267A9A0:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823327e0
	ctx.lr = 0x8267A9B8;
	sub_823327E0(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addic. r11,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r11.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8267a9c8
	if (ctx.cr0.eq) goto loc_8267A9C8;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
loc_8267A9C8:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823327e0
	ctx.lr = 0x8267A9E0;
	sub_823327E0(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addic. r11,r11,8
	ctx.xer.ca = ctx.r11.u32 > 4294967287;
	ctx.r11.s64 = ctx.r11.s64 + 8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8267a9f0
	if (ctx.cr0.eq) goto loc_8267A9F0;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
loc_8267A9F0:
	// lis r11,5903
	ctx.r11.s64 = 386859008;
	// lis r10,7147
	ctx.r10.s64 = 468385792;
	// lis r9,6424
	ctx.r9.s64 = 421003264;
	// ori r11,r11,36082
	ctx.r11.u64 = ctx.r11.u64 | 36082;
	// ori r10,r10,12662
	ctx.r10.u64 = ctx.r10.u64 | 12662;
	// ori r9,r9,239
	ctx.r9.u64 = ctx.r9.u64 | 239;
	// stw r11,3088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3088, ctx.r11.u32);
	// stw r10,3104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3104, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,1928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1928, ctx.r9.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267AA20"))) PPC_WEAK_FUNC(sub_8267AA20);
PPC_FUNC_IMPL(__imp__sub_8267AA20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x8267AA3C;
	sub_8265CDA8(ctx, base);
	// addic. r11,r31,300
	ctx.xer.ca = ctx.r31.u32 > 4294966995;
	ctx.r11.s64 = ctx.r31.s64 + 300;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8267aa5c
	if (ctx.cr0.eq) goto loc_8267AA5C;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8267aa5c
	if (ctx.cr6.eq) goto loc_8267AA5C;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8267aa60
	goto loc_8267AA60;
loc_8267AA5C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8267AA60:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-5796
	ctx.r3.s64 = ctx.r11.s64 + -5796;
	// bl 0x82816528
	ctx.lr = 0x8267AA6C;
	sub_82816528(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,29568
	ctx.r3.s64 = ctx.r11.s64 + 29568;
	// bl 0x82816528
	ctx.lr = 0x8267AA7C;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x828d0cb0
	ctx.lr = 0x8267AA8C;
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

__attribute__((alias("__imp__sub_8267AAA8"))) PPC_WEAK_FUNC(sub_8267AAA8);
PPC_FUNC_IMPL(__imp__sub_8267AAA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x8267AAB0;
	__savegprlr_26(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8265f1d0
	ctx.lr = 0x8267AABC;
	sub_8265F1D0(ctx, base);
	// lwz r11,2060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2060);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267aad8
	if (ctx.cr6.eq) goto loc_8267AAD8;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// rlwinm r10,r10,0,24,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// rlwinm r10,r10,0,16,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFEFFFF;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
loc_8267AAD8:
	// lwz r11,2068(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2068);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8267ab7c
	if (ctx.cr6.eq) goto loc_8267AB7C;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r10,-15024
	ctx.r3.s64 = ctx.r10.s64 + -15024;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
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
	// bl 0x82816528
	ctx.lr = 0x8267AB08;
	sub_82816528(ctx, base);
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lwz r11,2116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2116);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r9,2120(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2120);
	// addi r3,r10,-15012
	ctx.r3.s64 = ctx.r10.s64 + -15012;
	// lwz r8,2104(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2104);
	// lwz r10,2108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2108);
	// lwz r28,2124(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2124);
	// lwz r27,2112(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2112);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// stw r9,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r9.u32);
	// stw r8,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// bl 0x82816528
	ctx.lr = 0x8267AB40;
	sub_82816528(ctx, base);
	// ld r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r26,120(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// ld r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r8,144(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// rldicr r7,r27,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r27.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// rldicr r9,r28,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// bl 0x8265f4d8
	ctx.lr = 0x8267AB78;
	sub_8265F4D8(ctx, base);
	// stw r3,2140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2140, ctx.r3.u32);
loc_8267AB7C:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267AB88"))) PPC_WEAK_FUNC(sub_8267AB88);
PPC_FUNC_IMPL(__imp__sub_8267AB88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8267AB90;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r7,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r7.u64);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// std r9,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r9.u64);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// lwz r3,800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8267abd0
	if (ctx.cr6.eq) goto loc_8267ABD0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,560(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 560);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267ABCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8267abd4
	goto loc_8267ABD4;
loc_8267ABD0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8267ABD4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8267abe8
	if (ctx.cr6.eq) goto loc_8267ABE8;
	// lwz r11,9776(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 9776);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8267ac10
	if (!ctx.cr6.eq) goto loc_8267AC10;
loc_8267ABE8:
	// lwz r11,200(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// lwz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// rldicr r9,r11,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8265efe0
	ctx.lr = 0x8267AC10;
	sub_8265EFE0(ctx, base);
loc_8267AC10:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267AC18"))) PPC_WEAK_FUNC(sub_8267AC18);
PPC_FUNC_IMPL(__imp__sub_8267AC18) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8267a7e0
	sub_8267A7E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267AC20"))) PPC_WEAK_FUNC(sub_8267AC20);
PPC_FUNC_IMPL(__imp__sub_8267AC20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-8888
	ctx.r3.s64 = ctx.r11.s64 + -8888;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267AC30"))) PPC_WEAK_FUNC(sub_8267AC30);
PPC_FUNC_IMPL(__imp__sub_8267AC30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8267ac68
	if (ctx.cr6.eq) goto loc_8267AC68;
	// bl 0x823bd380
	ctx.lr = 0x8267AC58;
	sub_823BD380(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8267ac68
	if (!ctx.cr6.eq) goto loc_8267AC68;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8267ac74
	goto loc_8267AC74;
loc_8267AC68:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8234e2d8
	ctx.lr = 0x8267AC74;
	sub_8234E2D8(ctx, base);
loc_8267AC74:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267AC90"))) PPC_WEAK_FUNC(sub_8267AC90);
PPC_FUNC_IMPL(__imp__sub_8267AC90) {
	PPC_FUNC_PROLOGUE();
	// b 0x823bd380
	sub_823BD380(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267AC98"))) PPC_WEAK_FUNC(sub_8267AC98);
PPC_FUNC_IMPL(__imp__sub_8267AC98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x8267ACB8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8267acf8
	if (ctx.cr0.eq) goto loc_8267ACF8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234e3e0
	ctx.lr = 0x8267ACCC;
	sub_8234E3E0(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// addi r11,r11,-13168
	ctx.r11.s64 = ctx.r11.s64 + -13168;
	// addi r10,r10,-11500
	ctx.r10.s64 = ctx.r10.s64 + -11500;
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
	// b 0x8267acfc
	goto loc_8267ACFC;
loc_8267ACF8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8267ACFC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267AD18"))) PPC_WEAK_FUNC(sub_8267AD18);
PPC_FUNC_IMPL(__imp__sub_8267AD18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823bd380
	ctx.lr = 0x8267AD38;
	sub_823BD380(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8267ad48
	if (!ctx.cr6.eq) goto loc_8267AD48;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8267ad60
	goto loc_8267AD60;
loc_8267AD48:
	// bl 0x823323b8
	ctx.lr = 0x8267AD4C;
	sub_823323B8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8267ad60
	if (ctx.cr6.eq) goto loc_8267AD60;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8234d0a0
	ctx.lr = 0x8267AD60;
	sub_8234D0A0(ctx, base);
loc_8267AD60:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267AD78"))) PPC_WEAK_FUNC(sub_8267AD78);
PPC_FUNC_IMPL(__imp__sub_8267AD78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8267AD80;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8265c840
	ctx.lr = 0x8267AD8C;
	sub_8265C840(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// addi r11,r11,-13168
	ctx.r11.s64 = ctx.r11.s64 + -13168;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r10,r10,-11500
	ctx.r10.s64 = ctx.r10.s64 + -11500;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r9,r9,-30936
	ctx.r9.s64 = ctx.r9.s64 + -30936;
	// stw r30,1884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1884, ctx.r30.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// stw r30,1932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1932, ctx.r30.u32);
	// addi r3,r11,-13264
	ctx.r3.s64 = ctx.r11.s64 + -13264;
	// bl 0x828165a8
	ctx.lr = 0x8267ADC8;
	sub_828165A8(ctx, base);
	// stw r3,1936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1936, ctx.r3.u32);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-23888
	ctx.r4.s64 = ctx.r11.s64 + -23888;
	// bl 0x8233a258
	ctx.lr = 0x8267ADDC;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,2320
	ctx.r3.s64 = ctx.r31.s64 + 2320;
	// bl 0x82400b48
	ctx.lr = 0x8267ADE8;
	sub_82400B48(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82333960
	ctx.lr = 0x8267ADF0;
	sub_82333960(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r3,r11,-92
	ctx.r3.s64 = ctx.r11.s64 + -92;
	// bl 0x828165a8
	ctx.lr = 0x8267ADFC;
	sub_828165A8(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r31,1684
	ctx.r3.s64 = ctx.r31.s64 + 1684;
	// bl 0x82410060
	ctx.lr = 0x8267AE0C;
	sub_82410060(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r3,r31,1660
	ctx.r3.s64 = ctx.r31.s64 + 1660;
	// bl 0x82643410
	ctx.lr = 0x8267AE20;
	sub_82643410(ctx, base);
	// lis r29,-32243
	ctx.r29.s64 = -2113077248;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r11,r29,-27300
	ctx.r11.s64 = ctx.r29.s64 + -27300;
	// addi r3,r31,1780
	ctx.r3.s64 = ctx.r31.s64 + 1780;
	// lfs f0,2660(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2660);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x824fc978
	ctx.lr = 0x8267AE3C;
	sub_824FC978(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r7,-12658
	ctx.r7.s64 = -829554688;
	// stw r30,2068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2068, ctx.r30.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stw r10,2172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2172, ctx.r10.u32);
	// lis r8,-904
	ctx.r8.s64 = -59244544;
	// stw r10,1944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1944, ctx.r10.u32);
	// stw r11,1940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1940, ctx.r11.u32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// li r11,24
	ctx.r11.s64 = 24;
	// ori r8,r8,8216
	ctx.r8.u64 = ctx.r8.u64 | 8216;
	// stw r9,1948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1948, ctx.r9.u32);
	// ori r10,r7,7483
	ctx.r10.u64 = ctx.r7.u64 | 7483;
	// stw r11,2168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2168, ctx.r11.u32);
	// stw r8,2248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2248, ctx.r8.u32);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// stw r10,2252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2252, ctx.r10.u32);
	// addi r3,r11,-13248
	ctx.r3.s64 = ctx.r11.s64 + -13248;
	// bl 0x82816528
	ctx.lr = 0x8267AE88;
	sub_82816528(ctx, base);
	// stw r3,2076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2076, ctx.r3.u32);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r3,r11,-1864
	ctx.r3.s64 = ctx.r11.s64 + -1864;
	// bl 0x82816528
	ctx.lr = 0x8267AE98;
	sub_82816528(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lfs f0,19848(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19848);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f13,-28784(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -28784);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,17116(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 17116);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,-27300(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -27300);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,16612(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 16612);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r7,92(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lis r8,-31949
	ctx.r8.s64 = -2093809664;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r6,1
	ctx.r6.s64 = 65536;
	// stw r9,2104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2104, ctx.r9.u32);
	// lis r4,3220
	ctx.r4.s64 = 211025920;
	// lfs f0,17688(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17688);
	ctx.f0.f64 = double(temp.f32);
	// stw r7,2108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2108, ctx.r7.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r5,2112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2112, ctx.r5.u32);
	// lis r9,5186
	ctx.r9.s64 = 339869696;
	// stw r11,2116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2116, ctx.r11.u32);
	// lis r7,358
	ctx.r7.s64 = 23461888;
	// lwz r5,116(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// ori r6,r6,2
	ctx.r6.u64 = ctx.r6.u64 | 2;
	// lwz r11,13024(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 13024);
	// li r30,100
	ctx.r30.s64 = 100;
	// ori r8,r4,49414
	ctx.r8.u64 = ctx.r4.u64 | 49414;
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// ori r9,r9,19702
	ctx.r9.u64 = ctx.r9.u64 | 19702;
	// stw r3,2080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2080, ctx.r3.u32);
	// ori r7,r7,44344
	ctx.r7.u64 = ctx.r7.u64 | 44344;
	// stw r10,2124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2124, ctx.r10.u32);
	// stw r6,2100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2100, ctx.r6.u32);
	// stw r5,2120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2120, ctx.r5.u32);
	// stw r30,2084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2084, ctx.r30.u32);
	// stw r8,3088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3088, ctx.r8.u32);
	// stw r9,3104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3104, ctx.r9.u32);
	// stw r7,1928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1928, ctx.r7.u32);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8267af80
	if (ctx.cr6.eq) goto loc_8267AF80;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// addi r5,r11,-30912
	ctx.r5.s64 = ctx.r11.s64 + -30912;
	// addi r4,r10,-13220
	ctx.r4.s64 = ctx.r10.s64 + -13220;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// addi r6,r31,3216
	ctx.r6.s64 = ctx.r31.s64 + 3216;
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x828c58b0
	ctx.lr = 0x8267AF80;
	sub_828C58B0(ctx, base);
loc_8267AF80:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267AF90"))) PPC_WEAK_FUNC(sub_8267AF90);
PPC_FUNC_IMPL(__imp__sub_8267AF90) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8267ad18
	sub_8267AD18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267AF98"))) PPC_WEAK_FUNC(sub_8267AF98);
PPC_FUNC_IMPL(__imp__sub_8267AF98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-5736
	ctx.r3.s64 = ctx.r11.s64 + -5736;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267AFA8"))) PPC_WEAK_FUNC(sub_8267AFA8);
PPC_FUNC_IMPL(__imp__sub_8267AFA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8267afe0
	if (ctx.cr6.eq) goto loc_8267AFE0;
	// bl 0x823c5380
	ctx.lr = 0x8267AFD0;
	sub_823C5380(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8267afe0
	if (!ctx.cr6.eq) goto loc_8267AFE0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8267afec
	goto loc_8267AFEC;
loc_8267AFE0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8234e2d8
	ctx.lr = 0x8267AFEC;
	sub_8234E2D8(ctx, base);
loc_8267AFEC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267B008"))) PPC_WEAK_FUNC(sub_8267B008);
PPC_FUNC_IMPL(__imp__sub_8267B008) {
	PPC_FUNC_PROLOGUE();
	// b 0x823c5380
	sub_823C5380(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267B010"))) PPC_WEAK_FUNC(sub_8267B010);
PPC_FUNC_IMPL(__imp__sub_8267B010) {
	PPC_FUNC_PROLOGUE();
	// b 0x823323b8
	sub_823323B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267B018"))) PPC_WEAK_FUNC(sub_8267B018);
PPC_FUNC_IMPL(__imp__sub_8267B018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x8267B038;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8267b078
	if (ctx.cr0.eq) goto loc_8267B078;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234e3e0
	ctx.lr = 0x8267B04C;
	sub_8234E3E0(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// addi r11,r11,-11424
	ctx.r11.s64 = ctx.r11.s64 + -11424;
	// addi r10,r10,-9756
	ctx.r10.s64 = ctx.r10.s64 + -9756;
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
	// b 0x8267b07c
	goto loc_8267B07C;
loc_8267B078:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8267B07C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267B098"))) PPC_WEAK_FUNC(sub_8267B098);
PPC_FUNC_IMPL(__imp__sub_8267B098) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823c5380
	ctx.lr = 0x8267B0B8;
	sub_823C5380(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8267b0c8
	if (!ctx.cr6.eq) goto loc_8267B0C8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8267b0e0
	goto loc_8267B0E0;
loc_8267B0C8:
	// bl 0x823323b8
	ctx.lr = 0x8267B0CC;
	sub_823323B8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8267b0e0
	if (ctx.cr6.eq) goto loc_8267B0E0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8234d0a0
	ctx.lr = 0x8267B0E0;
	sub_8234D0A0(ctx, base);
loc_8267B0E0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267B0F8"))) PPC_WEAK_FUNC(sub_8267B0F8);
PPC_FUNC_IMPL(__imp__sub_8267B0F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8267B100;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8265c840
	ctx.lr = 0x8267B10C;
	sub_8265C840(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r6,-32223
	ctx.r6.s64 = -2111766528;
	// stw r11,1884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1884, ctx.r11.u32);
	// lis r5,-32224
	ctx.r5.s64 = -2111832064;
	// stw r11,1932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1932, ctx.r11.u32);
	// lis r7,-32223
	ctx.r7.s64 = -2111766528;
	// stw r11,2068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2068, ctx.r11.u32);
	// stw r10,1940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1940, ctx.r10.u32);
	// addi r11,r6,-9756
	ctx.r11.s64 = ctx.r6.s64 + -9756;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r7,r7,-11424
	ctx.r7.s64 = ctx.r7.s64 + -11424;
	// stw r9,1944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1944, ctx.r9.u32);
	// addi r10,r5,-30936
	ctx.r10.s64 = ctx.r5.s64 + -30936;
	// stw r8,1948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1948, ctx.r8.u32);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// stw r10,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r10.u32);
	// addi r3,r11,-11448
	ctx.r3.s64 = ctx.r11.s64 + -11448;
	// bl 0x82816528
	ctx.lr = 0x8267B164;
	sub_82816528(ctx, base);
	// stw r3,2076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2076, ctx.r3.u32);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r3,r11,-1864
	ctx.r3.s64 = ctx.r11.s64 + -1864;
	// bl 0x82816528
	ctx.lr = 0x8267B174;
	sub_82816528(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// stw r3,2080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2080, ctx.r3.u32);
	// addi r8,r11,-27300
	ctx.r8.s64 = ctx.r11.s64 + -27300;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// lis r6,-32215
	ctx.r6.s64 = -2111242240;
	// lfs f11,-27300(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27300);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,-28784(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -28784);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,0
	ctx.r11.s64 = 0;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lis r10,4243
	ctx.r10.s64 = 278069248;
	// lfs f13,19884(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 19884);
	ctx.f13.f64 = double(temp.f32);
	// ori r11,r11,32770
	ctx.r11.u64 = ctx.r11.u64 | 32770;
	// lfs f12,15844(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 15844);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,24881
	ctx.r9.s64 = 1630601216;
	// lfs f10,19648(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 19648);
	ctx.f10.f64 = double(temp.f32);
	// stw r11,2100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2100, ctx.r11.u32);
	// lfs f0,18204(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 18204);
	ctx.f0.f64 = double(temp.f32);
	// ori r11,r9,65451
	ctx.r11.u64 = ctx.r9.u64 | 65451;
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f10,88(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r29,88(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r28,96(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// ori r10,r10,62582
	ctx.r10.u64 = ctx.r10.u64 | 62582;
	// stw r11,2252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2252, ctx.r11.u32);
	// lis r8,3220
	ctx.r8.s64 = 211025920;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lis r7,10144
	ctx.r7.s64 = 664797184;
	// stw r10,2248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2248, ctx.r10.u32);
	// lis r6,7509
	ctx.r6.s64 = 492109824;
	// stw r3,2108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2108, ctx.r3.u32);
	// li r27,20
	ctx.r27.s64 = 20;
	// stw r28,2104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2104, ctx.r28.u32);
	// ori r9,r8,49414
	ctx.r9.u64 = ctx.r8.u64 | 49414;
	// stw r5,2112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2112, ctx.r5.u32);
	// ori r10,r7,22616
	ctx.r10.u64 = ctx.r7.u64 | 22616;
	// stw r27,2084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2084, ctx.r27.u32);
	// ori r11,r6,60443
	ctx.r11.u64 = ctx.r6.u64 | 60443;
	// stw r9,3088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3088, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,3104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3104, ctx.r10.u32);
	// stw r11,1928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1928, ctx.r11.u32);
	// stw r4,2116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2116, ctx.r4.u32);
	// stw r30,2120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2120, ctx.r30.u32);
	// stw r29,2124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2124, ctx.r29.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267B250"))) PPC_WEAK_FUNC(sub_8267B250);
PPC_FUNC_IMPL(__imp__sub_8267B250) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8267b098
	sub_8267B098(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267B258"))) PPC_WEAK_FUNC(sub_8267B258);
PPC_FUNC_IMPL(__imp__sub_8267B258) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-7020
	ctx.r3.s64 = ctx.r11.s64 + -7020;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267B268"))) PPC_WEAK_FUNC(sub_8267B268);
PPC_FUNC_IMPL(__imp__sub_8267B268) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8267b2a0
	if (ctx.cr6.eq) goto loc_8267B2A0;
	// bl 0x823c1fa8
	ctx.lr = 0x8267B290;
	sub_823C1FA8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8267b2a0
	if (!ctx.cr6.eq) goto loc_8267B2A0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8267b2ac
	goto loc_8267B2AC;
loc_8267B2A0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8234e2d8
	ctx.lr = 0x8267B2AC;
	sub_8234E2D8(ctx, base);
loc_8267B2AC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267B2C8"))) PPC_WEAK_FUNC(sub_8267B2C8);
PPC_FUNC_IMPL(__imp__sub_8267B2C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x823c1fa8
	sub_823C1FA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267B2D0"))) PPC_WEAK_FUNC(sub_8267B2D0);
PPC_FUNC_IMPL(__imp__sub_8267B2D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x8267B2F0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8267b330
	if (ctx.cr0.eq) goto loc_8267B330;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234e3e0
	ctx.lr = 0x8267B304;
	sub_8234E3E0(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// addi r11,r11,-9608
	ctx.r11.s64 = ctx.r11.s64 + -9608;
	// addi r10,r10,-7940
	ctx.r10.s64 = ctx.r10.s64 + -7940;
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
	// b 0x8267b334
	goto loc_8267B334;
loc_8267B330:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8267B334:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267B350"))) PPC_WEAK_FUNC(sub_8267B350);
PPC_FUNC_IMPL(__imp__sub_8267B350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823c1fa8
	ctx.lr = 0x8267B370;
	sub_823C1FA8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8267b380
	if (!ctx.cr6.eq) goto loc_8267B380;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8267b398
	goto loc_8267B398;
loc_8267B380:
	// bl 0x823323b8
	ctx.lr = 0x8267B384;
	sub_823323B8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8267b398
	if (ctx.cr6.eq) goto loc_8267B398;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8234d0a0
	ctx.lr = 0x8267B398;
	sub_8234D0A0(ctx, base);
loc_8267B398:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267B3B0"))) PPC_WEAK_FUNC(sub_8267B3B0);
PPC_FUNC_IMPL(__imp__sub_8267B3B0) {
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
	// bl 0x8265c840
	ctx.lr = 0x8267B3CC;
	sub_8265C840(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// addi r11,r11,-9608
	ctx.r11.s64 = ctx.r11.s64 + -9608;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r10,r10,-7940
	ctx.r10.s64 = ctx.r10.s64 + -7940;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r9,r9,-30936
	ctx.r9.s64 = ctx.r9.s64 + -30936;
	// stw r30,1884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1884, ctx.r30.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// stw r30,1932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1932, ctx.r30.u32);
	// addi r3,r11,-9704
	ctx.r3.s64 = ctx.r11.s64 + -9704;
	// bl 0x82816528
	ctx.lr = 0x8267B408;
	sub_82816528(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r3,1936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1936, ctx.r3.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r11,1940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1940, ctx.r11.u32);
	// stw r30,2068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2068, ctx.r30.u32);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// stw r10,1944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1944, ctx.r10.u32);
	// stw r9,1948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1948, ctx.r9.u32);
	// addi r3,r11,-9692
	ctx.r3.s64 = ctx.r11.s64 + -9692;
	// bl 0x82816528
	ctx.lr = 0x8267B434;
	sub_82816528(ctx, base);
	// stw r3,2076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2076, ctx.r3.u32);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r3,r11,-1864
	ctx.r3.s64 = ctx.r11.s64 + -1864;
	// bl 0x82816528
	ctx.lr = 0x8267B444;
	sub_82816528(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r3,2080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2080, ctx.r3.u32);
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// lfs f0,17060(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17060);
	ctx.f0.f64 = double(temp.f32);
	// lis r6,-32215
	ctx.r6.s64 = -2111242240;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lfs f13,-24640(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24640);
	ctx.f13.f64 = double(temp.f32);
	// li r10,20
	ctx.r10.s64 = 20;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lfs f12,-12104(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -12104);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,32716(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 32716);
	ctx.f11.f64 = double(temp.f32);
	// stw r10,2084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2084, ctx.r10.u32);
	// lfs f10,16612(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 16612);
	ctx.f10.f64 = double(temp.f32);
	// stw r11,2100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2100, ctx.r11.u32);
	// lfs f0,18368(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 18368);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f10,88(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r9,2108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2108, ctx.r9.u32);
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// stw r11,2112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2112, ctx.r11.u32);
	// addi r4,r9,-23868
	ctx.r4.s64 = ctx.r9.s64 + -23868;
	// stw r10,2116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2116, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r8,2120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2120, ctx.r8.u32);
	// stw r7,2124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2124, ctx.r7.u32);
	// stw r6,2104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2104, ctx.r6.u32);
	// bl 0x8233a258
	ctx.lr = 0x8267B4E4;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,2320
	ctx.r3.s64 = ctx.r31.s64 + 2320;
	// bl 0x82400b48
	ctx.lr = 0x8267B4F0;
	sub_82400B48(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x8267B4F8;
	sub_82333960(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,4243
	ctx.r10.s64 = 278069248;
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// stw r11,2172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2172, ctx.r11.u32);
	// ori r10,r10,62582
	ctx.r10.u64 = ctx.r10.u64 | 62582;
	// lwz r11,13024(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13024);
	// lis r8,24881
	ctx.r8.s64 = 1630601216;
	// stw r10,2248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2248, ctx.r10.u32);
	// lis r9,1077
	ctx.r9.s64 = 70582272;
	// ori r8,r8,65451
	ctx.r8.u64 = ctx.r8.u64 | 65451;
	// lis r10,12284
	ctx.r10.s64 = 805044224;
	// lis r7,8155
	ctx.r7.s64 = 534446080;
	// stw r8,2252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2252, ctx.r8.u32);
	// ori r10,r10,62675
	ctx.r10.u64 = ctx.r10.u64 | 62675;
	// li r6,25
	ctx.r6.s64 = 25;
	// ori r9,r9,48916
	ctx.r9.u64 = ctx.r9.u64 | 48916;
	// stw r10,3104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3104, ctx.r10.u32);
	// ori r8,r7,64869
	ctx.r8.u64 = ctx.r7.u64 | 64869;
	// stw r6,2168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2168, ctx.r6.u32);
	// stw r9,3088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3088, ctx.r9.u32);
	// stw r8,1928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1928, ctx.r8.u32);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8267b57c
	if (ctx.cr6.eq) goto loc_8267B57C;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// addi r5,r11,-30912
	ctx.r5.s64 = ctx.r11.s64 + -30912;
	// addi r4,r10,-9664
	ctx.r4.s64 = ctx.r10.s64 + -9664;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// addi r6,r31,3216
	ctx.r6.s64 = ctx.r31.s64 + 3216;
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x828c58b0
	ctx.lr = 0x8267B57C;
	sub_828C58B0(ctx, base);
loc_8267B57C:
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

__attribute__((alias("__imp__sub_8267B598"))) PPC_WEAK_FUNC(sub_8267B598);
PPC_FUNC_IMPL(__imp__sub_8267B598) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8267b350
	sub_8267B350(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267B5A0"))) PPC_WEAK_FUNC(sub_8267B5A0);
PPC_FUNC_IMPL(__imp__sub_8267B5A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-5552
	ctx.r3.s64 = ctx.r11.s64 + -5552;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267B5B0"))) PPC_WEAK_FUNC(sub_8267B5B0);
PPC_FUNC_IMPL(__imp__sub_8267B5B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8267b5e8
	if (ctx.cr6.eq) goto loc_8267B5E8;
	// bl 0x823c5ac8
	ctx.lr = 0x8267B5D8;
	sub_823C5AC8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8267b5e8
	if (!ctx.cr6.eq) goto loc_8267B5E8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8267b5f4
	goto loc_8267B5F4;
loc_8267B5E8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8234e2d8
	ctx.lr = 0x8267B5F4;
	sub_8234E2D8(ctx, base);
loc_8267B5F4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267B610"))) PPC_WEAK_FUNC(sub_8267B610);
PPC_FUNC_IMPL(__imp__sub_8267B610) {
	PPC_FUNC_PROLOGUE();
	// b 0x823c5ac8
	sub_823C5AC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267B618"))) PPC_WEAK_FUNC(sub_8267B618);
PPC_FUNC_IMPL(__imp__sub_8267B618) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,3344
	ctx.r3.s64 = 3344;
	// bl 0x82833108
	ctx.lr = 0x8267B634;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8267b648
	if (ctx.cr0.eq) goto loc_8267B648;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8267b6c0
	ctx.lr = 0x8267B644;
	sub_8267B6C0(ctx, base);
	// b 0x8267b64c
	goto loc_8267B64C;
loc_8267B648:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8267B64C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267B660"))) PPC_WEAK_FUNC(sub_8267B660);
PPC_FUNC_IMPL(__imp__sub_8267B660) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823c5ac8
	ctx.lr = 0x8267B680;
	sub_823C5AC8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8267b690
	if (!ctx.cr6.eq) goto loc_8267B690;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8267b6a8
	goto loc_8267B6A8;
loc_8267B690:
	// bl 0x823323b8
	ctx.lr = 0x8267B694;
	sub_823323B8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8267b6a8
	if (ctx.cr6.eq) goto loc_8267B6A8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8234d0a0
	ctx.lr = 0x8267B6A8;
	sub_8234D0A0(ctx, base);
loc_8267B6A8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267B6C0"))) PPC_WEAK_FUNC(sub_8267B6C0);
PPC_FUNC_IMPL(__imp__sub_8267B6C0) {
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
	ctx.lr = 0x8267B6E0;
	sub_8234E3E0(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// addi r11,r11,-7888
	ctx.r11.s64 = ctx.r11.s64 + -7888;
	// addi r10,r10,-6220
	ctx.r10.s64 = ctx.r10.s64 + -6220;
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
	// lwz r11,3296(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3296);
	// stw r11,3296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3296, ctx.r11.u32);
	// lwz r11,3300(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3300);
	// stw r11,3300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3300, ctx.r11.u32);
	// lfs f0,3304(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3304);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3304(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3304, temp.u32);
	// lwz r11,3308(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3308);
	// stw r11,3308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3308, ctx.r11.u32);
	// lwz r11,3312(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3312);
	// stw r11,3312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3312, ctx.r11.u32);
	// lwz r11,3316(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3316);
	// stw r11,3316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3316, ctx.r11.u32);
	// lwz r11,3320(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3320);
	// stw r11,3320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3320, ctx.r11.u32);
	// lwz r11,3324(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3324);
	// stw r11,3324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3324, ctx.r11.u32);
	// lwz r11,3328(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3328);
	// stw r11,3328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3328, ctx.r11.u32);
	// lwz r11,3332(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3332);
	// stw r11,3332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3332, ctx.r11.u32);
	// lwz r11,3336(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3336);
	// stw r11,3336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3336, ctx.r11.u32);
	// lwz r11,3340(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3340);
	// stw r11,3340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3340, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267B7A0"))) PPC_WEAK_FUNC(sub_8267B7A0);
PPC_FUNC_IMPL(__imp__sub_8267B7A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x8267B7A8;
	__savegprlr_25(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8265c840
	ctx.lr = 0x8267B7B4;
	sub_8265C840(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// addi r8,r11,-32516
	ctx.r8.s64 = ctx.r11.s64 + -32516;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// lfs f10,-32516(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32516);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,19704(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 19704);
	ctx.f11.f64 = double(temp.f32);
	// lis r5,-32215
	ctx.r5.s64 = -2111242240;
	// lfs f0,-100(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -100);
	ctx.f0.f64 = double(temp.f32);
	// lis r3,31794
	ctx.r3.s64 = 2083651584;
	// lfs f12,17120(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 17120);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// lfs f13,19548(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 19548);
	ctx.f13.f64 = double(temp.f32);
	// lis r8,-32223
	ctx.r8.s64 = -2111766528;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lis r7,-32224
	ctx.r7.s64 = -2111832064;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lis r4,3599
	ctx.r4.s64 = 235864064;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lis r30,14057
	ctx.r30.s64 = 921239552;
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r9,r9,-7888
	ctx.r9.s64 = ctx.r9.s64 + -7888;
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r8,r8,-6220
	ctx.r8.s64 = ctx.r8.s64 + -6220;
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r7,r7,-30936
	ctx.r7.s64 = ctx.r7.s64 + -30936;
	// stfs f11,112(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// ori r4,r4,32223
	ctx.r4.u64 = ctx.r4.u64 | 32223;
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// lfs f0,-24640(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -24640);
	ctx.f0.f64 = double(temp.f32);
	// ori r6,r3,49937
	ctx.r6.u64 = ctx.r3.u64 | 49937;
	// lfs f13,20416(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20416);
	ctx.f13.f64 = double(temp.f32);
	// ori r5,r30,19571
	ctx.r5.u64 = ctx.r30.u64 | 19571;
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stw r7,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r7.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stw r4,2076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2076, ctx.r4.u32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stw r6,2080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2080, ctx.r6.u32);
	// stfs f13,144(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,100
	ctx.r10.s64 = 100;
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stw r11,1884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1884, ctx.r11.u32);
	// stfs f13,152(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stw r11,2068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2068, ctx.r11.u32);
	// stfs f10,3304(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3304, temp.u32);
	// stw r11,2100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2100, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,2084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2084, ctx.r10.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r30,104(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r29,112(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r28,116(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r27,120(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r10,3300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3300, ctx.r10.u32);
	// stw r11,3292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3292, ctx.r11.u32);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r26,136(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r25,144(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stw r5,1928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1928, ctx.r5.u32);
	// stw r29,2104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2104, ctx.r29.u32);
	// stw r28,2108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2108, ctx.r28.u32);
	// stw r27,2112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2112, ctx.r27.u32);
	// stw r9,2116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2116, ctx.r9.u32);
	// stw r8,2120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2120, ctx.r8.u32);
	// stw r7,2124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2124, ctx.r7.u32);
	// stw r6,3320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3320, ctx.r6.u32);
	// stw r4,3324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3324, ctx.r4.u32);
	// stw r30,3328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3328, ctx.r30.u32);
	// lwz r9,148(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r8,152(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stw r11,3332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3332, ctx.r11.u32);
	// stw r10,3336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3336, ctx.r10.u32);
	// stw r26,3340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3340, ctx.r26.u32);
	// stw r25,3308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3308, ctx.r25.u32);
	// stw r9,3312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3312, ctx.r9.u32);
	// stw r8,3316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3316, ctx.r8.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267B918"))) PPC_WEAK_FUNC(sub_8267B918);
PPC_FUNC_IMPL(__imp__sub_8267B918) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8267B920;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8265cda8
	ctx.lr = 0x8267B92C;
	sub_8265CDA8(ctx, base);
	// lis r4,-22785
	ctx.r4.s64 = -1493237760;
	// lis r5,-32768
	ctx.r5.s64 = -2147483648;
	// ori r4,r4,2847
	ctx.r4.u64 = ctx.r4.u64 | 2847;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829bd828
	ctx.lr = 0x8267B940;
	sub_829BD828(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lis r9,-31946
	ctx.r9.s64 = -2093613056;
	// stw r3,3284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3284, ctx.r3.u32);
	// addi r10,r11,13868
	ctx.r10.s64 = ctx.r11.s64 + 13868;
	// lis r4,-8433
	ctx.r4.s64 = -552665088;
	// ld r5,13868(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 13868);
	// addi r11,r9,-2728
	ctx.r11.s64 = ctx.r9.s64 + -2728;
	// ld r7,-2728(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + -2728);
	// ori r4,r4,17088
	ctx.r4.u64 = ctx.r4.u64 | 17088;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rldicr r6,r10,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rldicr r8,r11,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x829c7118
	ctx.lr = 0x8267B978;
	sub_829C7118(ctx, base);
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// li r30,-1
	ctx.r30.s64 = -1;
	// lis r5,24333
	ctx.r5.s64 = 1594687488;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// ori r5,r5,53286
	ctx.r5.u64 = ctx.r5.u64 | 53286;
	// addi r4,r31,3280
	ctx.r4.s64 = ctx.r31.s64 + 3280;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x8267B9A0;
	sub_823CF190(ctx, base);
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lis r6,8937
	ctx.r6.s64 = 585695232;
	// lis r5,8975
	ctx.r5.s64 = 588185600;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// ori r6,r6,45050
	ctx.r6.u64 = ctx.r6.u64 | 45050;
	// ori r5,r5,47800
	ctx.r5.u64 = ctx.r5.u64 | 47800;
	// addi r4,r31,2244
	ctx.r4.s64 = ctx.r31.s64 + 2244;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x824091a0
	ctx.lr = 0x8267B9C4;
	sub_824091A0(ctx, base);
	// lis r10,24881
	ctx.r10.s64 = 1630601216;
	// lis r9,5967
	ctx.r9.s64 = 391053312;
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// ori r10,r10,65451
	ctx.r10.u64 = ctx.r10.u64 | 65451;
	// ori r9,r9,53137
	ctx.r9.u64 = ctx.r9.u64 | 53137;
	// stw r10,2248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2248, ctx.r10.u32);
	// lis r5,21042
	ctx.r5.s64 = 1379008512;
	// stw r9,2252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2252, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// ori r5,r5,12681
	ctx.r5.u64 = ctx.r5.u64 | 12681;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x8267BA04;
	sub_823CF190(ctx, base);
	// addi r3,r31,2276
	ctx.r3.s64 = ctx.r31.s64 + 2276;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823327e0
	ctx.lr = 0x8267BA1C;
	sub_823327E0(ctx, base);
	// lwz r11,2288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2288);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267ba30
	if (ctx.cr6.eq) goto loc_8267BA30;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8267BA30:
	// lis r11,6558
	ctx.r11.s64 = 429785088;
	// ori r11,r11,54296
	ctx.r11.u64 = ctx.r11.u64 | 54296;
	// stw r11,3088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3088, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267BA48"))) PPC_WEAK_FUNC(sub_8267BA48);
PPC_FUNC_IMPL(__imp__sub_8267BA48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8267BA50;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,800(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 800);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8267baf4
	if (ctx.cr6.eq) goto loc_8267BAF4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267BA74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8267baf4
	if (ctx.cr0.eq) goto loc_8267BAF4;
	// lwz r3,800(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 800);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8267baa4
	if (ctx.cr6.eq) goto loc_8267BAA4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267BA9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8267baa8
	goto loc_8267BAA8;
loc_8267BAA4:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_8267BAA8:
	// bl 0x8239db68
	ctx.lr = 0x8267BAAC;
	sub_8239DB68(ctx, base);
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
	ctx.lr = 0x8267BAC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// bne 0x8267bad4
	if (!ctx.cr0.eq) goto loc_8267BAD4;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8267BAD4:
	// lwz r10,3296(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3296);
	// lwz r9,6100(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6100);
	// stw r29,592(r10)
	PPC_STORE_U32(ctx.r10.u32 + 592, ctx.r29.u32);
	// stw r9,452(r10)
	PPC_STORE_U32(ctx.r10.u32 + 452, ctx.r9.u32);
	// lwz r10,3288(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3288);
	// lwz r11,6096(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6096);
	// stw r11,452(r10)
	PPC_STORE_U32(ctx.r10.u32 + 452, ctx.r11.u32);
	// stw r29,592(r10)
	PPC_STORE_U32(ctx.r10.u32 + 592, ctx.r29.u32);
loc_8267BAF4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267BB00"))) PPC_WEAK_FUNC(sub_8267BB00);
PPC_FUNC_IMPL(__imp__sub_8267BB00) {
	PPC_FUNC_PROLOGUE();
	// lis r3,5948
	ctx.r3.s64 = 389808128;
	// ori r3,r3,54190
	ctx.r3.u64 = ctx.r3.u64 | 54190;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267BB10"))) PPC_WEAK_FUNC(sub_8267BB10);
PPC_FUNC_IMPL(__imp__sub_8267BB10) {
	PPC_FUNC_PROLOGUE();
	// lis r3,5027
	ctx.r3.s64 = 329449472;
	// ori r3,r3,29353
	ctx.r3.u64 = ctx.r3.u64 | 29353;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267BB20"))) PPC_WEAK_FUNC(sub_8267BB20);
PPC_FUNC_IMPL(__imp__sub_8267BB20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8267BB28;
	__savegprlr_28(ctx, base);
	// stfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f29.u64);
	// stfd f30,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8265f1d0
	ctx.lr = 0x8267BB40;
	sub_8265F1D0(ctx, base);
	// lwz r3,800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8267bbd0
	if (ctx.cr6.eq) goto loc_8267BBD0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267BB5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8267bbd0
	if (ctx.cr0.eq) goto loc_8267BBD0;
	// lwz r3,800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8267bb88
	if (ctx.cr6.eq) goto loc_8267BB88;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267BB80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8267bb8c
	goto loc_8267BB8C;
loc_8267BB88:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8267BB8C:
	// bl 0x8239db68
	ctx.lr = 0x8267BB90;
	sub_8239DB68(ctx, base);
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
	ctx.lr = 0x8267BBA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bne 0x8267bbb8
	if (!ctx.cr0.eq) goto loc_8267BBB8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8267BBB8:
	// lwz r10,6100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6100);
	// stw r10,3300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3300, ctx.r10.u32);
	// lfs f0,6104(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6104);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3304(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3304, temp.u32);
	// lwz r11,6096(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6096);
	// stw r11,3292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3292, ctx.r11.u32);
loc_8267BBD0:
	// lwz r11,2060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2060);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267bbe8
	if (ctx.cr6.eq) goto loc_8267BBE8;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// rlwinm r10,r10,0,16,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFEFFFF;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
loc_8267BBE8:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r10,3340(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3340);
	// lis r8,7214
	ctx.r8.s64 = 472776704;
	// lwz r29,3328(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3328);
	// lis r5,16
	ctx.r5.s64 = 1048576;
	// ld r9,3332(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 3332);
	// ori r30,r8,17367
	ctx.r30.u64 = ctx.r8.u64 | 17367;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// lis r4,284
	ctx.r4.s64 = 18612224;
	// ld r7,3320(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 3320);
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// ori r5,r5,136
	ctx.r5.u64 = ctx.r5.u64 | 136;
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
	// li r6,1
	ctx.r6.s64 = 1;
	// ori r4,r4,18588
	ctx.r4.u64 = ctx.r4.u64 | 18588;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r8,r29,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x8265f390
	ctx.lr = 0x8267BC4C;
	sub_8265F390(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stw r3,3296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3296, ctx.r3.u32);
	// li r28,40
	ctx.r28.s64 = 40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f30,-32616(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32616);
	ctx.f30.f64 = double(temp.f32);
	// lwz r11,1508(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1508);
	// lfs f29,908(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 908);
	ctx.f29.f64 = double(temp.f32);
	// stfs f30,144(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f30,148(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f30,152(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267BC84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// ld r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// lwz r29,152(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,3300(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3300);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,3296(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3296);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// li r9,0
	ctx.r9.s64 = 0;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// li r10,17
	ctx.r10.s64 = 17;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f4,f29
	ctx.f4.f64 = ctx.f29.f64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// bl 0x82331120
	ctx.lr = 0x8267BCCC;
	sub_82331120(ctx, base);
	// stfs f31,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// li r29,1
	ctx.r29.s64 = 1;
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// ld r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lwz r11,3296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3296);
	// lis r5,16
	ctx.r5.s64 = 1048576;
	// stw r29,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r29.u32);
	// lis r4,3600
	ctx.r4.s64 = 235929600;
	// lwz r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// ori r5,r5,136
	ctx.r5.u64 = ctx.r5.u64 | 136;
	// lwz r10,2112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2112);
	// ori r4,r4,35363
	ctx.r4.u64 = ctx.r4.u64 | 35363;
	// lwz r11,2124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2124);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r9,2116(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 2116);
	// rldicr r10,r11,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r7,2104(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 2104);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x8265f390
	ctx.lr = 0x8267BD2C;
	sub_8265F390(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stfs f30,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stw r3,3288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3288, ctx.r3.u32);
	// stfs f30,148(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f30,152(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1508(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1508);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267BD50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// ld r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// lwz r30,152(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,3292(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3292);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,3288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3288);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// li r9,0
	ctx.r9.s64 = 0;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// li r10,1
	ctx.r10.s64 = 1;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f4,f29
	ctx.f4.f64 = ctx.f29.f64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// bl 0x82331120
	ctx.lr = 0x8267BD98;
	sub_82331120(ctx, base);
	// lwz r11,3288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3288);
	// stw r29,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r29.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
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

__attribute__((alias("__imp__sub_8267BDB8"))) PPC_WEAK_FUNC(sub_8267BDB8);
PPC_FUNC_IMPL(__imp__sub_8267BDB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x8265fbc8
	ctx.lr = 0x8267BDD0;
	sub_8265FBC8(ctx, base);
	// lwz r3,3288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3288);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8267bdf8
	if (ctx.cr6.eq) goto loc_8267BDF8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8281d650
	ctx.lr = 0x8267BDE4;
	sub_8281D650(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1584(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1584);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267BDF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8267BDF8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267BE10"))) PPC_WEAK_FUNC(sub_8267BE10);
PPC_FUNC_IMPL(__imp__sub_8267BE10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x8265ff38
	ctx.lr = 0x8267BE28;
	sub_8265FF38(ctx, base);
	// lwz r11,3288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3288);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267be54
	if (ctx.cr6.eq) goto loc_8267BE54;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1588(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1588);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267BE54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8267BE54:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267BE68"))) PPC_WEAK_FUNC(sub_8267BE68);
PPC_FUNC_IMPL(__imp__sub_8267BE68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8267BE70;
	__savegprlr_28(ctx, base);
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r4,7214
	ctx.r4.s64 = 472776704;
	// ori r4,r4,17367
	ctx.r4.u64 = ctx.r4.u64 | 17367;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 400);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267BE98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// beq 0x8267bef0
	if (ctx.cr0.eq) goto loc_8267BEF0;
	// addi r4,r3,112
	ctx.r4.s64 = ctx.r3.s64 + 112;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x82a4ea80
	ctx.lr = 0x8267BEC4;
	sub_82A4EA80(ctx, base);
	// lfs f0,200(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// b 0x8267befc
	goto loc_8267BEFC;
loc_8267BEF0:
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_8267BEFC:
	// lis r8,-31963
	ctx.r8.s64 = -2094727168;
	// lfs f13,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// lfs f0,23752(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 23752);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r31,0
	ctx.r31.s64 = 0;
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// li r28,-1
	ctx.r28.s64 = -1;
	// lwz r3,13024(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// li r8,24708
	ctx.r8.s64 = 24708;
	// lfs f30,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f30.f64 = double(temp.f32);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// stfs f31,156(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// stfs f31,160(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f31,172(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stw r28,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r28.u32);
	// stfs f31,176(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stw r31,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r31.u32);
	// stfs f30,180(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r31.u32);
	// stw r31,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r31.u32);
	// stw r31,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r31.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stw r31,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r31.u32);
	// bl 0x82825330
	ctx.lr = 0x8267BFB4;
	sub_82825330(ctx, base);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// ld r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// lfs f13,152(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// lwz r3,13024(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,3280(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3280);
	// ori r4,r4,64
	ctx.r4.u64 = ctx.r4.u64 | 64;
	// ld r7,144(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// lfs f0,-12104(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12104);
	ctx.f0.f64 = double(temp.f32);
	// rldicr r10,r31,32,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u64, 32) & 0xFFFFFFFF00000000;
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lwz r29,152(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// rldicr r8,r29,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x8282b1e0
	ctx.lr = 0x8267C000;
	sub_8282B1E0(ctx, base);
	// lwz r11,3296(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3296);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267c058
	if (ctx.cr6.eq) goto loc_8267C058;
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r9,148(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r29,144(r11)
	PPC_STORE_U32(ctx.r11.u32 + 144, ctx.r29.u32);
	// stw r10,136(r11)
	PPC_STORE_U32(ctx.r11.u32 + 136, ctx.r10.u32);
	// stw r9,140(r11)
	PPC_STORE_U32(ctx.r11.u32 + 140, ctx.r9.u32);
	// lwz r3,3296(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3296);
	// bl 0x8281d650
	ctx.lr = 0x8267C02C;
	sub_8281D650(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32152
	ctx.r10.s64 = -2107113472;
	// lfs f1,-32720(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32720);
	ctx.f1.f64 = double(temp.f32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// addi r11,r10,-16256
	ctx.r11.s64 = ctx.r10.s64 + -16256;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// ld r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x8267c2f0
	ctx.lr = 0x8267C058;
	sub_8267C2F0(ctx, base);
loc_8267C058:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,-27300(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27300);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8267c198
	ctx.lr = 0x8267C06C;
	sub_8267C198(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267C080"))) PPC_WEAK_FUNC(sub_8267C080);
PPC_FUNC_IMPL(__imp__sub_8267C080) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x8267C088;
	__savegprlr_24(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,3296(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3296);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8267c190
	if (ctx.cr6.eq) goto loc_8267C190;
	// addi r4,r30,316
	ctx.r4.s64 = ctx.r30.s64 + 316;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// li r5,28
	ctx.r5.s64 = 28;
	// bl 0x82a4ea80
	ctx.lr = 0x8267C0AC;
	sub_82A4EA80(ctx, base);
	// lfs f0,3308(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3308);
	ctx.f0.f64 = double(temp.f32);
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// lfs f13,3312(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3312);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3316(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3316);
	ctx.f12.f64 = double(temp.f32);
	// fmr f10,f13
	ctx.f10.f64 = ctx.f13.f64;
	// lfs f7,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f7.f64 = double(temp.f32);
	// fmr f9,f12
	ctx.f9.f64 = ctx.f12.f64;
	// fadds f0,f0,f7
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f7.f64));
	// lfs f6,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f6.f64 = double(temp.f32);
	// fadds f12,f12,f6
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f6.f64));
	// lfs f8,3304(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3304);
	ctx.f8.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r26,96(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r24,104(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r11,r31,3308
	ctx.r11.s64 = ctx.r31.s64 + 3308;
	// fcmpu cr6,f0,f8
	ctx.cr6.compare(ctx.f0.f64, ctx.f8.f64);
	// lfs f7,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f7.f64 = double(temp.f32);
	// fadds f13,f13,f7
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f7.f64));
	// lfs f7,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f11,f7,f11
	ctx.f11.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// lfs f6,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f6.f64 = double(temp.f32);
	// lfs f7,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f10,f6,f10
	ctx.f10.f64 = double(float(ctx.f6.f64 - ctx.f10.f64));
	// fsubs f9,f7,f9
	ctx.f9.f64 = double(float(ctx.f7.f64 - ctx.f9.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r25,100(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r27,88(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// blt cr6,0x8267c174
	if (ctx.cr6.lt) goto loc_8267C174;
	// lwz r10,52(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// lis r11,-32152
	ctx.r11.s64 = -2107113472;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// addi r4,r11,-16256
	ctx.r4.s64 = ctx.r11.s64 + -16256;
	// stw r10,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r29,3320(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3320);
	// lwz r28,3324(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3324);
	// lwz r27,3328(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3328);
	// lwz r26,3332(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3332);
	// lwz r25,3336(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3336);
	// lwz r24,3340(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3340);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267C174;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8267C174:
	// lwz r11,3296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3296);
	// stw r29,316(r11)
	PPC_STORE_U32(ctx.r11.u32 + 316, ctx.r29.u32);
	// stw r28,320(r11)
	PPC_STORE_U32(ctx.r11.u32 + 320, ctx.r28.u32);
	// stw r27,324(r11)
	PPC_STORE_U32(ctx.r11.u32 + 324, ctx.r27.u32);
	// stw r26,328(r11)
	PPC_STORE_U32(ctx.r11.u32 + 328, ctx.r26.u32);
	// stw r25,332(r11)
	PPC_STORE_U32(ctx.r11.u32 + 332, ctx.r25.u32);
	// stw r24,336(r11)
	PPC_STORE_U32(ctx.r11.u32 + 336, ctx.r24.u32);
loc_8267C190:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267C198"))) PPC_WEAK_FUNC(sub_8267C198);
PPC_FUNC_IMPL(__imp__sub_8267C198) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8267C1A0;
	__savegprlr_28(ctx, base);
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x827dff88
	ctx.lr = 0x8267C1B8;
	sub_827DFF88(ctx, base);
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// lis r29,-32243
	ctx.r29.s64 = -2113077248;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// addi r28,r29,-24640
	ctx.r28.s64 = ctx.r29.s64 + -24640;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lfs f31,908(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,-2660(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -2660);
	ctx.f30.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// lwz r3,96(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1024);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267C1F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f0,13184(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 13184);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lfs f13,-24640(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -24640);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r11.u32);
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// addi r8,r10,32716
	ctx.r8.s64 = ctx.r10.s64 + 32716;
	// stfs f13,180(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// lis r9,-31963
	ctx.r9.s64 = -2094727168;
	// lis r7,-31961
	ctx.r7.s64 = -2094596096;
	// stfs f31,172(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// lfs f12,32716(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32716);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r6,-32215
	ctx.r6.s64 = -2111242240;
	// stfs f30,184(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// lfs f9,304(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 304);
	ctx.f9.f64 = double(temp.f32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lfs f11,16816(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16816);
	ctx.f11.f64 = double(temp.f32);
	// addi r4,r1,184
	ctx.r4.s64 = ctx.r1.s64 + 184;
	// lfs f8,204(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 204);
	ctx.f8.f64 = double(temp.f32);
	// li r5,32
	ctx.r5.s64 = 32;
	// lfs f7,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f7.f64 = double(temp.f32);
	// lfs f13,912(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 912);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,-28780(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -28780);
	ctx.f10.f64 = double(temp.f32);
	// stfs f11,208(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f10,212(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f13,140(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f9,144(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f8,156(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lis r30,-32216
	ctx.r30.s64 = -2111307776;
	// lwz r10,620(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	// stfs f7,160(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lwz r9,624(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	// stfs f12,168(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lwz r8,628(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	// stfs f12,188(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// lfs f0,-12104(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -12104);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stw r10,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r10.u32);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stw r9,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r9.u32);
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stw r8,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r8.u32);
	// lwz r31,96(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82a4ea80
	ctx.lr = 0x8267C2B4;
	sub_82A4EA80(ctx, base);
	// lwz r11,1028(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1028);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// ld r5,136(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// ld r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// ld r7,152(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// ld r8,160(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// ld r9,168(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// ld r10,176(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267C2E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267C2F0"))) PPC_WEAK_FUNC(sub_8267C2F0);
PPC_FUNC_IMPL(__imp__sub_8267C2F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8267C2F8;
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
	ctx.lr = 0x8267C310;
	sub_829C80B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8267c398
	if (!ctx.cr0.eq) goto loc_8267C398;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823c5ac8
	ctx.lr = 0x8267C320;
	sub_823C5AC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267C334;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82333900
	ctx.lr = 0x8267C340;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x8267c384
	if (ctx.cr0.eq) goto loc_8267C384;
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
	// b 0x8267c388
	goto loc_8267C388;
loc_8267C384:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_8267C388:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82410060
	ctx.lr = 0x8267C394;
	sub_82410060(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8267C398:
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
	ctx.lr = 0x8267C3B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267C3C0"))) PPC_WEAK_FUNC(sub_8267C3C0);
PPC_FUNC_IMPL(__imp__sub_8267C3C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,-12708
	ctx.r11.s64 = ctx.r11.s64 + -12708;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x8267c3ec
	if (ctx.cr0.eq) goto loc_8267C3EC;
	// bl 0x82332db8
	ctx.lr = 0x8267C3EC;
	sub_82332DB8(ctx, base);
loc_8267C3EC:
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

__attribute__((alias("__imp__sub_8267C408"))) PPC_WEAK_FUNC(sub_8267C408);
PPC_FUNC_IMPL(__imp__sub_8267C408) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8267b660
	sub_8267B660(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267C410"))) PPC_WEAK_FUNC(sub_8267C410);
PPC_FUNC_IMPL(__imp__sub_8267C410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-5528
	ctx.r3.s64 = ctx.r11.s64 + -5528;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267C420"))) PPC_WEAK_FUNC(sub_8267C420);
PPC_FUNC_IMPL(__imp__sub_8267C420) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8267c458
	if (ctx.cr6.eq) goto loc_8267C458;
	// bl 0x823c5bd0
	ctx.lr = 0x8267C448;
	sub_823C5BD0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8267c458
	if (!ctx.cr6.eq) goto loc_8267C458;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8267c464
	goto loc_8267C464;
loc_8267C458:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8250f390
	ctx.lr = 0x8267C464;
	sub_8250F390(ctx, base);
loc_8267C464:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267C480"))) PPC_WEAK_FUNC(sub_8267C480);
PPC_FUNC_IMPL(__imp__sub_8267C480) {
	PPC_FUNC_PROLOGUE();
	// b 0x823c5bd0
	sub_823C5BD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267C488"))) PPC_WEAK_FUNC(sub_8267C488);
PPC_FUNC_IMPL(__imp__sub_8267C488) {
	PPC_FUNC_PROLOGUE();
	// b 0x823ba418
	sub_823BA418(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267C490"))) PPC_WEAK_FUNC(sub_8267C490);
PPC_FUNC_IMPL(__imp__sub_8267C490) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x8267C4B0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8267c524
	if (ctx.cr0.eq) goto loc_8267C524;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234e3e0
	ctx.lr = 0x8267C4C4;
	sub_8234E3E0(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// addi r11,r11,-30752
	ctx.r11.s64 = ctx.r11.s64 + -30752;
	// addi r10,r10,-29084
	ctx.r10.s64 = ctx.r10.s64 + -29084;
	// addi r9,r9,-4088
	ctx.r9.s64 = ctx.r9.s64 + -4088;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// lbz r8,3280(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3280);
	// addi r11,r11,-5808
	ctx.r11.s64 = ctx.r11.s64 + -5808;
	// stb r8,3280(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3280, ctx.r8.u8);
	// addi r10,r10,-4140
	ctx.r10.s64 = ctx.r10.s64 + -4140;
	// lbz r8,3281(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3281);
	// addi r9,r9,-4088
	ctx.r9.s64 = ctx.r9.s64 + -4088;
	// stb r8,3281(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3281, ctx.r8.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x8267c528
	goto loc_8267C528;
loc_8267C524:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8267C528:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267C540"))) PPC_WEAK_FUNC(sub_8267C540);
PPC_FUNC_IMPL(__imp__sub_8267C540) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823c5bd0
	ctx.lr = 0x8267C560;
	sub_823C5BD0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8267c574
	if (ctx.cr6.eq) goto loc_8267C574;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8250f480
	ctx.lr = 0x8267C574;
	sub_8250F480(ctx, base);
loc_8267C574:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267C590"))) PPC_WEAK_FUNC(sub_8267C590);
PPC_FUNC_IMPL(__imp__sub_8267C590) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r3,r11,-6168
	ctx.r3.s64 = ctx.r11.s64 + -6168;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267C5A0"))) PPC_WEAK_FUNC(sub_8267C5A0);
PPC_FUNC_IMPL(__imp__sub_8267C5A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8267c5d8
	if (ctx.cr6.eq) goto loc_8267C5D8;
	// bl 0x8267d6a8
	ctx.lr = 0x8267C5C8;
	sub_8267D6A8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8267c5d8
	if (!ctx.cr6.eq) goto loc_8267C5D8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8267c5e4
	goto loc_8267C5E4;
loc_8267C5D8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233e5b8
	ctx.lr = 0x8267C5E4;
	sub_8233E5B8(ctx, base);
loc_8267C5E4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267C600"))) PPC_WEAK_FUNC(sub_8267C600);
PPC_FUNC_IMPL(__imp__sub_8267C600) {
	PPC_FUNC_PROLOGUE();
	// b 0x8267d6a8
	sub_8267D6A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267C608"))) PPC_WEAK_FUNC(sub_8267C608);
PPC_FUNC_IMPL(__imp__sub_8267C608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,1888
	ctx.r3.s64 = 1888;
	// bl 0x82833108
	ctx.lr = 0x8267C628;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8267c668
	if (ctx.cr0.eq) goto loc_8267C668;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233e6c8
	ctx.lr = 0x8267C63C;
	sub_8233E6C8(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// addi r11,r11,-4064
	ctx.r11.s64 = ctx.r11.s64 + -4064;
	// addi r10,r10,-2888
	ctx.r10.s64 = ctx.r10.s64 + -2888;
	// addi r9,r9,-2836
	ctx.r9.s64 = ctx.r9.s64 + -2836;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x8267c66c
	goto loc_8267C66C;
loc_8267C668:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8267C66C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267C688"))) PPC_WEAK_FUNC(sub_8267C688);
PPC_FUNC_IMPL(__imp__sub_8267C688) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8267d6a8
	ctx.lr = 0x8267C6A8;
	sub_8267D6A8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8267c6bc
	if (ctx.cr6.eq) goto loc_8267C6BC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8233e668
	ctx.lr = 0x8267C6BC;
	sub_8233E668(ctx, base);
loc_8267C6BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267C6D8"))) PPC_WEAK_FUNC(sub_8267C6D8);
PPC_FUNC_IMPL(__imp__sub_8267C6D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// addi r11,r11,-4064
	ctx.r11.s64 = ctx.r11.s64 + -4064;
	// addi r10,r10,-2888
	ctx.r10.s64 = ctx.r10.s64 + -2888;
	// addi r9,r9,-2836
	ctx.r9.s64 = ctx.r9.s64 + -2836;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// bl 0x829c36c0
	ctx.lr = 0x8267C71C;
	sub_829C36C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826b90c8
	ctx.lr = 0x8267C724;
	sub_826B90C8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8267c734
	if (ctx.cr0.eq) goto loc_8267C734;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x8267C734;
	sub_82332DB8(ctx, base);
loc_8267C734:
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

__attribute__((alias("__imp__sub_8267C750"))) PPC_WEAK_FUNC(sub_8267C750);
PPC_FUNC_IMPL(__imp__sub_8267C750) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-5508
	ctx.r3.s64 = ctx.r11.s64 + -5508;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267C760"))) PPC_WEAK_FUNC(sub_8267C760);
PPC_FUNC_IMPL(__imp__sub_8267C760) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8267c798
	if (ctx.cr6.eq) goto loc_8267C798;
	// bl 0x823c5d18
	ctx.lr = 0x8267C788;
	sub_823C5D18(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8267c798
	if (!ctx.cr6.eq) goto loc_8267C798;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8267c7a4
	goto loc_8267C7A4;
loc_8267C798:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233ecc8
	ctx.lr = 0x8267C7A4;
	sub_8233ECC8(ctx, base);
loc_8267C7A4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267C7C0"))) PPC_WEAK_FUNC(sub_8267C7C0);
PPC_FUNC_IMPL(__imp__sub_8267C7C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x823c5d18
	sub_823C5D18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267C7C8"))) PPC_WEAK_FUNC(sub_8267C7C8);
PPC_FUNC_IMPL(__imp__sub_8267C7C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82394fc8
	sub_82394FC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267C7D0"))) PPC_WEAK_FUNC(sub_8267C7D0);
PPC_FUNC_IMPL(__imp__sub_8267C7D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,3216
	ctx.r3.s64 = 3216;
	// bl 0x82833108
	ctx.lr = 0x8267C7F0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8267c830
	if (ctx.cr0.eq) goto loc_8267C830;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233edc0
	ctx.lr = 0x8267C804;
	sub_8233EDC0(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// addi r11,r11,-2792
	ctx.r11.s64 = ctx.r11.s64 + -2792;
	// addi r10,r10,-1604
	ctx.r10.s64 = ctx.r10.s64 + -1604;
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
	// b 0x8267c834
	goto loc_8267C834;
loc_8267C830:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8267C834:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267C850"))) PPC_WEAK_FUNC(sub_8267C850);
PPC_FUNC_IMPL(__imp__sub_8267C850) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823c5d18
	ctx.lr = 0x8267C870;
	sub_823C5D18(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8267c880
	if (!ctx.cr6.eq) goto loc_8267C880;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8267c898
	goto loc_8267C898;
loc_8267C880:
	// bl 0x82394fc8
	ctx.lr = 0x8267C884;
	sub_82394FC8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8267c898
	if (ctx.cr6.eq) goto loc_8267C898;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8233eba0
	ctx.lr = 0x8267C898;
	sub_8233EBA0(ctx, base);
loc_8267C898:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267C8B0"))) PPC_WEAK_FUNC(sub_8267C8B0);
PPC_FUNC_IMPL(__imp__sub_8267C8B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r3,r11,-6144
	ctx.r3.s64 = ctx.r11.s64 + -6144;
	// b 0x82816528
	sub_82816528(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267C8C0"))) PPC_WEAK_FUNC(sub_8267C8C0);
PPC_FUNC_IMPL(__imp__sub_8267C8C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// addi r11,r11,-26968
	ctx.r11.s64 = ctx.r11.s64 + -26968;
	// addi r10,r10,-25792
	ctx.r10.s64 = ctx.r10.s64 + -25792;
	// addi r9,r9,-25740
	ctx.r9.s64 = ctx.r9.s64 + -25740;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// bl 0x826b90c8
	ctx.lr = 0x8267C904;
	sub_826B90C8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8267c914
	if (ctx.cr0.eq) goto loc_8267C914;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x8267C914;
	sub_82332DB8(ctx, base);
loc_8267C914:
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

__attribute__((alias("__imp__sub_8267C930"))) PPC_WEAK_FUNC(sub_8267C930);
PPC_FUNC_IMPL(__imp__sub_8267C930) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r3,r11,-6124
	ctx.r3.s64 = ctx.r11.s64 + -6124;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267C940"))) PPC_WEAK_FUNC(sub_8267C940);
PPC_FUNC_IMPL(__imp__sub_8267C940) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8267c978
	if (ctx.cr6.eq) goto loc_8267C978;
	// bl 0x8267d7b0
	ctx.lr = 0x8267C968;
	sub_8267D7B0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8267c978
	if (!ctx.cr6.eq) goto loc_8267C978;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8267c984
	goto loc_8267C984;
loc_8267C978:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333c70
	ctx.lr = 0x8267C984;
	sub_82333C70(ctx, base);
loc_8267C984:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267C9A0"))) PPC_WEAK_FUNC(sub_8267C9A0);
PPC_FUNC_IMPL(__imp__sub_8267C9A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8267d7b0
	sub_8267D7B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267C9A8"))) PPC_WEAK_FUNC(sub_8267C9A8);
PPC_FUNC_IMPL(__imp__sub_8267C9A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x8267C9C4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8267ca1c
	if (ctx.cr0.eq) goto loc_8267CA1C;
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
	// addi r9,r9,-1552
	ctx.r9.s64 = ctx.r9.s64 + -1552;
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
	// b 0x8267ca20
	goto loc_8267CA20;
loc_8267CA1C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8267CA20:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267CA38"))) PPC_WEAK_FUNC(sub_8267CA38);
PPC_FUNC_IMPL(__imp__sub_8267CA38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8267d7b0
	ctx.lr = 0x8267CA58;
	sub_8267D7B0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8267ca6c
	if (ctx.cr6.eq) goto loc_8267CA6C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333b08
	ctx.lr = 0x8267CA6C;
	sub_82333B08(ctx, base);
loc_8267CA6C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267CA88"))) PPC_WEAK_FUNC(sub_8267CA88);
PPC_FUNC_IMPL(__imp__sub_8267CA88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8267CA90;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82667bf8
	ctx.lr = 0x8267CA9C;
	sub_82667BF8(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// addi r11,r11,-5808
	ctx.r11.s64 = ctx.r11.s64 + -5808;
	// addi r10,r10,-4140
	ctx.r10.s64 = ctx.r10.s64 + -4140;
	// addi r9,r9,-4088
	ctx.r9.s64 = ctx.r9.s64 + -4088;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r27,1
	ctx.r27.s64 = 1;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// stw r27,2068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2068, ctx.r27.u32);
	// addi r3,r11,-6088
	ctx.r3.s64 = ctx.r11.s64 + -6088;
	// bl 0x828165a8
	ctx.lr = 0x8267CAD4;
	sub_828165A8(ctx, base);
	// stw r3,2076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2076, ctx.r3.u32);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r3,r11,-6064
	ctx.r3.s64 = ctx.r11.s64 + -6064;
	// bl 0x828165a8
	ctx.lr = 0x8267CAE4;
	sub_828165A8(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stw r3,2080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2080, ctx.r3.u32);
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// li r7,2
	ctx.r7.s64 = 2;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lfs f0,18368(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18368);
	ctx.f0.f64 = double(temp.f32);
	// li r11,100
	ctx.r11.s64 = 100;
	// lfs f12,16540(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16540);
	ctx.f12.f64 = double(temp.f32);
	// stw r7,2100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2100, ctx.r7.u32);
	// lfs f13,-12104(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -12104);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,2084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2084, ctx.r11.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lwz r6,108(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lfs f0,18284(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 18284);
	ctx.f0.f64 = double(temp.f32);
	// stw r6,2108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2108, ctx.r6.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r8,2104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2104, ctx.r8.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,2112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2112, ctx.r11.u32);
	// addi r29,r31,2020
	ctx.r29.s64 = ctx.r31.s64 + 2020;
	// stw r10,2116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2116, ctx.r10.u32);
	// stw r9,2120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2120, ctx.r9.u32);
	// stw r7,2124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2124, ctx.r7.u32);
	// lwz r11,2040(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2040);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r30,2036(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2036, ctx.r30.u32);
	// beq cr6,0x8267cb8c
	if (ctx.cr6.eq) goto loc_8267CB8C;
	// stw r30,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332c38
	ctx.lr = 0x8267CB8C;
	sub_82332C38(ctx, base);
loc_8267CB8C:
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
	// bl 0x823327e0
	ctx.lr = 0x8267CBA4;
	sub_823327E0(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x82a455d0
	ctx.lr = 0x8267CBB4;
	sub_82A455D0(ctx, base);
	// lwz r11,2032(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2032);
	// addi r29,r31,1684
	ctx.r29.s64 = ctx.r31.s64 + 1684;
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// stw r30,1700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1700, ctx.r30.u32);
	// lwz r11,1704(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1704);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8267cbe4
	if (ctx.cr6.eq) goto loc_8267CBE4;
	// stw r30,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332c38
	ctx.lr = 0x8267CBE4;
	sub_82332C38(ctx, base);
loc_8267CBE4:
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
	// bl 0x823327e0
	ctx.lr = 0x8267CBFC;
	sub_823327E0(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x82a455d0
	ctx.lr = 0x8267CC0C;
	sub_82A455D0(ctx, base);
	// lwz r11,1728(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1728);
	// addi r29,r31,1708
	ctx.r29.s64 = ctx.r31.s64 + 1708;
	// stw r30,1724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1724, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8267cc34
	if (ctx.cr6.eq) goto loc_8267CC34;
	// stw r30,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332c38
	ctx.lr = 0x8267CC34;
	sub_82332C38(ctx, base);
loc_8267CC34:
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
	// bl 0x823327e0
	ctx.lr = 0x8267CC4C;
	sub_823327E0(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x82a455d0
	ctx.lr = 0x8267CC5C;
	sub_82A455D0(ctx, base);
	// lwz r11,1752(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1752);
	// addi r29,r31,1732
	ctx.r29.s64 = ctx.r31.s64 + 1732;
	// stw r30,1748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1748, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8267cc84
	if (ctx.cr6.eq) goto loc_8267CC84;
	// stw r30,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332c38
	ctx.lr = 0x8267CC84;
	sub_82332C38(ctx, base);
loc_8267CC84:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82510b28
	ctx.lr = 0x8267CC94;
	sub_82510B28(ctx, base);
	// lwz r11,1776(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1776);
	// addi r29,r31,1756
	ctx.r29.s64 = ctx.r31.s64 + 1756;
	// stw r30,1772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1772, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8267ccbc
	if (ctx.cr6.eq) goto loc_8267CCBC;
	// stw r30,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332c38
	ctx.lr = 0x8267CCBC;
	sub_82332C38(ctx, base);
loc_8267CCBC:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82510b28
	ctx.lr = 0x8267CCCC;
	sub_82510B28(ctx, base);
	// lwz r11,1680(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1680);
	// addi r29,r31,1660
	ctx.r29.s64 = ctx.r31.s64 + 1660;
	// stw r30,1676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1676, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8267ccf4
	if (ctx.cr6.eq) goto loc_8267CCF4;
	// stw r30,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332c38
	ctx.lr = 0x8267CCF4;
	sub_82332C38(ctx, base);
loc_8267CCF4:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823327e0
	ctx.lr = 0x8267CD0C;
	sub_823327E0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x82a455d0
	ctx.lr = 0x8267CD1C;
	sub_82A455D0(ctx, base);
	// lwz r11,2164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2164);
	// addi r29,r31,2144
	ctx.r29.s64 = ctx.r31.s64 + 2144;
	// stw r30,2160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2160, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8267cd44
	if (ctx.cr6.eq) goto loc_8267CD44;
	// stw r30,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332c38
	ctx.lr = 0x8267CD44;
	sub_82332C38(ctx, base);
loc_8267CD44:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82510b28
	ctx.lr = 0x8267CD54;
	sub_82510B28(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r3,r11,-32512
	ctx.r3.s64 = ctx.r11.s64 + -32512;
	// lwz r29,1696(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1696);
	// bl 0x82816528
	ctx.lr = 0x8267CD64;
	sub_82816528(ctx, base);
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// addi r29,r11,24536
	ctx.r29.s64 = ctx.r11.s64 + 24536;
	// lwz r11,24544(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24544);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8267cda0
	if (!ctx.cr0.eq) goto loc_8267CDA0;
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-2812
	ctx.r9.s64 = ctx.r9.s64 + -2812;
	// stw r11,24544(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24544, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// addi r3,r11,27232
	ctx.r3.s64 = ctx.r11.s64 + 27232;
	// bl 0x82a4c758
	ctx.lr = 0x8267CDA0;
	sub_82A4C758(ctx, base);
loc_8267CDA0:
	// lwz r11,1720(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1720);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r8,-32223
	ctx.r8.s64 = -2111766528;
	// addi r3,r8,-6040
	ctx.r3.s64 = ctx.r8.s64 + -6040;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// lfs f0,908(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,1744(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1744);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r11,1768(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1768);
	// lfs f13,904(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r11,1672(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1672);
	// stb r27,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r27.u8);
	// lwz r11,2156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2156);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x8267CDE8;
	sub_82816528(ctx, base);
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
	// li r29,-1
	ctx.r29.s64 = -1;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x8267CE0C;
	sub_823CF190(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r31,2188
	ctx.r3.s64 = ctx.r31.s64 + 2188;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82510b80
	ctx.lr = 0x8267CE28;
	sub_82510B80(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r11,-5972
	ctx.r3.s64 = ctx.r11.s64 + -5972;
	// bl 0x82816528
	ctx.lr = 0x8267CE38;
	sub_82816528(ctx, base);
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x8267CE54;
	sub_823CF190(ctx, base);
	// addi r3,r31,2276
	ctx.r3.s64 = ctx.r31.s64 + 2276;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823327e0
	ctx.lr = 0x8267CE6C;
	sub_823327E0(ctx, base);
	// lwz r11,2288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2288);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267ce80
	if (ctx.cr6.eq) goto loc_8267CE80;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8267CE80:
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lis r6,-17627
	ctx.r6.s64 = -1155203072;
	// lis r5,-30450
	ctx.r5.s64 = -1995571200;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// ori r6,r6,18314
	ctx.r6.u64 = ctx.r6.u64 | 18314;
	// ori r5,r5,33694
	ctx.r5.u64 = ctx.r5.u64 | 33694;
	// addi r4,r31,2244
	ctx.r4.s64 = ctx.r31.s64 + 2244;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x824091a0
	ctx.lr = 0x8267CEA4;
	sub_824091A0(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r3,r11,-5912
	ctx.r3.s64 = ctx.r11.s64 + -5912;
	// bl 0x82816528
	ctx.lr = 0x8267CEB0;
	sub_82816528(ctx, base);
	// stw r3,2248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2248, ctx.r3.u32);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r3,r11,-5888
	ctx.r3.s64 = ctx.r11.s64 + -5888;
	// bl 0x82816528
	ctx.lr = 0x8267CEC0;
	sub_82816528(ctx, base);
	// lis r11,4465
	ctx.r11.s64 = 292618240;
	// lis r10,358
	ctx.r10.s64 = 23461888;
	// stw r3,2252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2252, ctx.r3.u32);
	// ori r11,r11,44086
	ctx.r11.u64 = ctx.r11.u64 | 44086;
	// ori r10,r10,44344
	ctx.r10.u64 = ctx.r10.u64 | 44344;
	// stw r11,3088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3088, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,1928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1928, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267CEE8"))) PPC_WEAK_FUNC(sub_8267CEE8);
PPC_FUNC_IMPL(__imp__sub_8267CEE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x8267CF00;
	sub_8265E4F0(ctx, base);
	// lwz r11,2060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2060);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267cf18
	if (ctx.cr6.eq) goto loc_8267CF18;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// rlwinm r10,r10,0,16,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFEFFFF;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
loc_8267CF18:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267CF30"))) PPC_WEAK_FUNC(sub_8267CF30);
PPC_FUNC_IMPL(__imp__sub_8267CF30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r3,r11,-5864
	ctx.r3.s64 = ctx.r11.s64 + -5864;
	// b 0x82816528
	sub_82816528(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267CF40"))) PPC_WEAK_FUNC(sub_8267CF40);
PPC_FUNC_IMPL(__imp__sub_8267CF40) {
	PPC_FUNC_PROLOGUE();
	// b 0x826bafd8
	sub_826BAFD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267CF48"))) PPC_WEAK_FUNC(sub_8267CF48);
PPC_FUNC_IMPL(__imp__sub_8267CF48) {
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
	// std r5,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r5.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// std r7,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r7.u64);
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x826609a8
	ctx.lr = 0x8267CF78;
	sub_826609A8(ctx, base);
	// lwa r11,2088(r31)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 2088));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// lwz r11,1108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267CFA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r3,r11,-5828
	ctx.r3.s64 = ctx.r11.s64 + -5828;
	// bl 0x82816528
	ctx.lr = 0x8267CFAC;
	sub_82816528(ctx, base);
	// stw r3,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_8267CFC8"))) PPC_WEAK_FUNC(sub_8267CFC8);
PPC_FUNC_IMPL(__imp__sub_8267CFC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8267CFD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x826b8e58
	ctx.lr = 0x8267CFDC;
	sub_826B8E58(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r8,-32223
	ctx.r8.s64 = -2111766528;
	// lis r7,-32223
	ctx.r7.s64 = -2111766528;
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// lfs f0,32716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32716);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r8,-2888
	ctx.r11.s64 = ctx.r8.s64 + -2888;
	// lfs f13,-26844(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26844);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r7,-2836
	ctx.r10.s64 = ctx.r7.s64 + -2836;
	// addi r9,r9,-4064
	ctx.r9.s64 = ctx.r9.s64 + -4064;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stfs f0,696(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 696, temp.u32);
	// stfs f13,1504(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1504, temp.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r10,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r10.u32);
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// stw r8,1848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1848, ctx.r8.u32);
	// li r30,-1
	ctx.r30.s64 = -1;
	// lis r5,-30812
	ctx.r5.s64 = -2019295232;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,26453
	ctx.r5.u64 = ctx.r5.u64 | 26453;
	// addi r4,r31,1580
	ctx.r4.s64 = ctx.r31.s64 + 1580;
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x8267D048;
	sub_823CF190(ctx, base);
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lis r5,-3576
	ctx.r5.s64 = -234356736;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// ori r5,r5,2491
	ctx.r5.u64 = ctx.r5.u64 | 2491;
	// addi r4,r31,1584
	ctx.r4.s64 = ctx.r31.s64 + 1584;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x8267D068;
	sub_823CF190(ctx, base);
	// lwz r11,1204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1204);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8267d07c
	if (!ctx.cr6.eq) goto loc_8267D07C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c3628
	ctx.lr = 0x8267D07C;
	sub_829C3628(ctx, base);
loc_8267D07C:
	// lis r11,15521
	ctx.r11.s64 = 1017184256;
	// lis r10,9863
	ctx.r10.s64 = 646381568;
	// ori r11,r11,33228
	ctx.r11.u64 = ctx.r11.u64 | 33228;
	// ori r10,r10,25040
	ctx.r10.u64 = ctx.r10.u64 | 25040;
	// stw r11,1492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1492, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,1488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1488, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267D0A0"))) PPC_WEAK_FUNC(sub_8267D0A0);
PPC_FUNC_IMPL(__imp__sub_8267D0A0) {
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
	// bl 0x826c40e0
	ctx.lr = 0x8267D0B8;
	sub_826C40E0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// addi r10,r10,-2792
	ctx.r10.s64 = ctx.r10.s64 + -2792;
	// lfs f0,32716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32716);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r8,4480
	ctx.r11.s64 = ctx.r8.s64 + 4480;
	// addi r9,r9,-1604
	ctx.r9.s64 = ctx.r9.s64 + -1604;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r11.u32);
	// stfs f0,696(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 696, temp.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r8,1848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1848, ctx.r8.u32);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// li r7,-1
	ctx.r7.s64 = -1;
	// lis r5,9296
	ctx.r5.s64 = 609222656;
	// addi r4,r31,1584
	ctx.r4.s64 = ctx.r31.s64 + 1584;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// ori r5,r5,15538
	ctx.r5.u64 = ctx.r5.u64 | 15538;
	// lwz r11,13024(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13024);
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x8267D114;
	sub_823CF190(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,12171
	ctx.r10.s64 = 797638656;
	// lis r9,15512
	ctx.r9.s64 = 1016594432;
	// ori r10,r10,14343
	ctx.r10.u64 = ctx.r10.u64 | 14343;
	// ori r9,r9,7832
	ctx.r9.u64 = ctx.r9.u64 | 7832;
	// lfs f0,20568(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20568);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,1492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1492, ctx.r10.u32);
	// stfs f0,1504(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1504, temp.u32);
	// stw r9,1488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1488, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_8267D150"))) PPC_WEAK_FUNC(sub_8267D150);
PPC_FUNC_IMPL(__imp__sub_8267D150) {
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
	// lis r4,24992
	ctx.r4.s64 = 1637875712;
	// ori r4,r4,65202
	ctx.r4.u64 = ctx.r4.u64 | 65202;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 400);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267D17C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8267d1e8
	if (ctx.cr0.eq) goto loc_8267D1E8;
	// lis r4,26615
	ctx.r4.s64 = 1744240640;
	// li r5,56
	ctx.r5.s64 = 56;
	// ori r4,r4,28254
	ctx.r4.u64 = ctx.r4.u64 | 28254;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829bd828
	ctx.lr = 0x8267D198;
	sub_829BD828(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,1888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1888, ctx.r3.u32);
	// lis r4,24992
	ctx.r4.s64 = 1637875712;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// rldicr r8,r11,32,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ori r4,r4,65202
	ctx.r4.u64 = ctx.r4.u64 | 65202;
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// ld r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rldicr r6,r10,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x829c7118
	ctx.lr = 0x8267D1DC;
	sub_829C7118(ctx, base);
	// li r4,56
	ctx.r4.s64 = 56;
	// lwz r3,1888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1888);
	// bl 0x82978d98
	ctx.lr = 0x8267D1E8;
	sub_82978D98(ctx, base);
loc_8267D1E8:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,15834
	ctx.r4.s64 = ctx.r11.s64 + 15834;
	// bl 0x8233a258
	ctx.lr = 0x8267D1F8;
	sub_8233A258(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1488(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1488);
	// bl 0x829c3740
	ctx.lr = 0x8267D208;
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

__attribute__((alias("__imp__sub_8267D220"))) PPC_WEAK_FUNC(sub_8267D220);
PPC_FUNC_IMPL(__imp__sub_8267D220) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x8267D228;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x826bafd8
	ctx.lr = 0x8267D234;
	sub_826BAFD8(ctx, base);
	// lwz r10,1632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1632);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r9,1636(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1636);
	// lfs f13,624(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,620(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f11.f64 = double(temp.f32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lfs f9,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// lfs f8,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f13,f13,f8
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f8.f64));
	// lfs f0,32748(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32748);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,1640(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1640);
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fsubs f11,f11,f9
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f9.f64));
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lfs f10,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// fmadds f13,f12,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f13,f11,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f13.f64));
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x8267d3d0
	if (ctx.cr6.gt) goto loc_8267D3D0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267D2A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
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
	ctx.lr = 0x8267D2CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8267d2e8
	if (!ctx.cr6.gt) goto loc_8267D2E8;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// b 0x8267d3bc
	goto loc_8267D3BC;
loc_8267D2E8:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8267d388
	if (!ctx.cr6.eq) goto loc_8267D388;
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
	ctx.lr = 0x8267D30C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,964(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 964);
	// addi r28,r26,948
	ctx.r28.s64 = ctx.r26.s64 + 948;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8267d368
	if (!ctx.cr6.gt) goto loc_8267D368;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8267D324:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8267d354
	if (!ctx.cr6.eq) goto loc_8267D354;
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
	ctx.lr = 0x8267D34C;
	sub_82332CA8(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
loc_8267D354:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8267d324
	if (ctx.cr6.lt) goto loc_8267D324;
loc_8267D368:
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
	ctx.lr = 0x8267D388;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8267D388:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8267d3bc
	if (!ctx.cr0.eq) goto loc_8267D3BC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267D3A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8267d3bc
	if (ctx.cr0.eq) goto loc_8267D3BC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r26,924
	ctx.r3.s64 = ctx.r26.s64 + 924;
	// bl 0x82410060
	ctx.lr = 0x8267D3BC;
	sub_82410060(ctx, base);
loc_8267D3BC:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267D3D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8267D3D0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267D3D8"))) PPC_WEAK_FUNC(sub_8267D3D8);
PPC_FUNC_IMPL(__imp__sub_8267D3D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x8267D3E0;
	__savegprlr_26(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
	// lwz r11,1584(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1584);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267d46c
	if (ctx.cr6.eq) goto loc_8267D46C;
	// lfs f13,620(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r31,1620
	ctx.r4.s64 = ctx.r31.s64 + 1620;
	// lfs f11,624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f11.f64 = double(temp.f32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lfs f0,1620(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1620);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,1624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1624);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fadds f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// lfs f13,1628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1628);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f11.f64 = double(temp.f32);
	// fadds f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f12,132(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bl 0x82817280
	ctx.lr = 0x8267D438;
	sub_82817280(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,13024(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r5,1584(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1584);
	// li r4,16
	ctx.r4.s64 = 16;
	// ld r7,128(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x8282b1e0
	ctx.lr = 0x8267D46C;
	sub_8282B1E0(ctx, base);
loc_8267D46C:
	// lwz r11,1616(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1616);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267d55c
	if (ctx.cr6.eq) goto loc_8267D55C;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267d55c
	if (ctx.cr6.eq) goto loc_8267D55C;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,15834
	ctx.r4.s64 = ctx.r11.s64 + 15834;
	// bl 0x8233a258
	ctx.lr = 0x8267D498;
	sub_8233A258(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1588(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1588);
	// bl 0x829c3740
	ctx.lr = 0x8267D4A8;
	sub_829C3740(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x827dff88
	ctx.lr = 0x8267D4B0;
	sub_827DFF88(ctx, base);
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lfs f2,908(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,-11456(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -11456);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,96(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1024);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267D4DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// addi r8,r10,-32676
	ctx.r8.s64 = ctx.r10.s64 + -32676;
	// stw r9,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r9.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,232
	ctx.r4.s64 = ctx.r1.s64 + 232;
	// lfs f0,-32676(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32676);
	ctx.f0.f64 = double(temp.f32);
	// li r5,32
	ctx.r5.s64 = 32;
	// stfs f0,260(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// lfs f0,-112(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -112);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,256(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// lwz r10,620(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	// lwz r9,624(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	// lwz r8,628(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	// stw r10,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r10.u32);
	// stw r9,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r9.u32);
	// stw r8,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r8.u32);
	// lwz r30,96(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82a4ea80
	ctx.lr = 0x8267D530;
	sub_82A4EA80(ctx, base);
	// lwz r11,1028(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1028);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// ld r5,184(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// ld r6,192(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// ld r7,200(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// ld r8,208(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 208);
	// ld r9,216(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// ld r10,224(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 224);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267D55C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8267D55C:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lwz r29,64(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r3,r11,-8052
	ctx.r3.s64 = ctx.r11.s64 + -8052;
	// bl 0x82816528
	ctx.lr = 0x8267D56C;
	sub_82816528(ctx, base);
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b98f8
	ctx.lr = 0x8267D57C;
	sub_829B98F8(ctx, base);
	// bl 0x82333a20
	ctx.lr = 0x8267D580;
	sub_82333A20(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8267d5f4
	if (ctx.cr0.eq) goto loc_8267D5F4;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82833108
	ctx.lr = 0x8267D590;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8267d5e4
	if (ctx.cr0.eq) goto loc_8267D5E4;
	// lwz r27,80(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8267d5ac
	if (ctx.cr6.eq) goto loc_8267D5AC;
	// lwz r30,80(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// b 0x8267d5b0
	goto loc_8267D5B0;
loc_8267D5AC:
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_8267D5B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82833180
	ctx.lr = 0x8267D5B8;
	sub_82833180(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-8531
	ctx.r10.s64 = -559087616;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// addi r11,r11,-1552
	ctx.r11.s64 = ctx.r11.s64 + -1552;
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
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
	// b 0x8267d5e8
	goto loc_8267D5E8;
loc_8267D5E4:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_8267D5E8:
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x8267D5F4;
	sub_82833A30(ctx, base);
loc_8267D5F4:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267D600"))) PPC_WEAK_FUNC(sub_8267D600);
PPC_FUNC_IMPL(__imp__sub_8267D600) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,24532(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24532);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8267d640
	if (!ctx.cr0.eq) goto loc_8267D640;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// stw r11,24532(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24532, ctx.r11.u32);
	// addi r3,r9,-6168
	ctx.r3.s64 = ctx.r9.s64 + -6168;
	// bl 0x82816528
	ctx.lr = 0x8267D638;
	sub_82816528(ctx, base);
	// stw r3,24528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24528, ctx.r3.u32);
	// b 0x8267d644
	goto loc_8267D644;
loc_8267D640:
	// lwz r3,24528(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24528);
loc_8267D644:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267D658"))) PPC_WEAK_FUNC(sub_8267D658);
PPC_FUNC_IMPL(__imp__sub_8267D658) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8267d6a8
	ctx.lr = 0x8267D678;
	sub_8267D6A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267D68C;
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

__attribute__((alias("__imp__sub_8267D6A8"))) PPC_WEAK_FUNC(sub_8267D6A8);
PPC_FUNC_IMPL(__imp__sub_8267D6A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,24540
	ctx.r31.s64 = ctx.r11.s64 + 24540;
	// lwz r11,24548(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24548);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8267d6f0
	if (!ctx.cr0.eq) goto loc_8267D6F0;
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-2812
	ctx.r9.s64 = ctx.r9.s64 + -2812;
	// stw r11,24548(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24548, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,27280
	ctx.r3.s64 = ctx.r11.s64 + 27280;
	// bl 0x82a4c758
	ctx.lr = 0x8267D6F0;
	sub_82A4C758(ctx, base);
loc_8267D6F0:
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

__attribute__((alias("__imp__sub_8267D708"))) PPC_WEAK_FUNC(sub_8267D708);
PPC_FUNC_IMPL(__imp__sub_8267D708) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,24524(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24524);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8267d748
	if (!ctx.cr0.eq) goto loc_8267D748;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// stw r11,24524(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24524, ctx.r11.u32);
	// addi r3,r9,-6124
	ctx.r3.s64 = ctx.r9.s64 + -6124;
	// bl 0x82816528
	ctx.lr = 0x8267D740;
	sub_82816528(ctx, base);
	// stw r3,24520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24520, ctx.r3.u32);
	// b 0x8267d74c
	goto loc_8267D74C;
loc_8267D748:
	// lwz r3,24520(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24520);
loc_8267D74C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267D760"))) PPC_WEAK_FUNC(sub_8267D760);
PPC_FUNC_IMPL(__imp__sub_8267D760) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8267d7b0
	ctx.lr = 0x8267D780;
	sub_8267D7B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267D794;
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

__attribute__((alias("__imp__sub_8267D7B0"))) PPC_WEAK_FUNC(sub_8267D7B0);
PPC_FUNC_IMPL(__imp__sub_8267D7B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,13472
	ctx.r31.s64 = ctx.r11.s64 + 13472;
	// lwz r11,13468(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13468);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8267d7f8
	if (!ctx.cr0.eq) goto loc_8267D7F8;
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-1472
	ctx.r9.s64 = ctx.r9.s64 + -1472;
	// stw r11,13468(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13468, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,27256
	ctx.r3.s64 = ctx.r11.s64 + 27256;
	// bl 0x82a4c758
	ctx.lr = 0x8267D7F8;
	sub_82A4C758(ctx, base);
loc_8267D7F8:
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

__attribute__((alias("__imp__sub_8267D810"))) PPC_WEAK_FUNC(sub_8267D810);
PPC_FUNC_IMPL(__imp__sub_8267D810) {
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
	ctx.lr = 0x8267D824;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8267d834
	if (ctx.cr0.eq) goto loc_8267D834;
	// bl 0x8267cfc8
	ctx.lr = 0x8267D830;
	sub_8267CFC8(ctx, base);
	// b 0x8267d838
	goto loc_8267D838;
loc_8267D834:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8267D838:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267D848"))) PPC_WEAK_FUNC(sub_8267D848);
PPC_FUNC_IMPL(__imp__sub_8267D848) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x8267c6d8
	sub_8267C6D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267D850"))) PPC_WEAK_FUNC(sub_8267D850);
PPC_FUNC_IMPL(__imp__sub_8267D850) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x8267c8c0
	sub_8267C8C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267D858"))) PPC_WEAK_FUNC(sub_8267D858);
PPC_FUNC_IMPL(__imp__sub_8267D858) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8267c688
	sub_8267C688(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267D860"))) PPC_WEAK_FUNC(sub_8267D860);
PPC_FUNC_IMPL(__imp__sub_8267D860) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8267c6d8
	sub_8267C6D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267D868"))) PPC_WEAK_FUNC(sub_8267D868);
PPC_FUNC_IMPL(__imp__sub_8267D868) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x8250f4e0
	sub_8250F4E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267D870"))) PPC_WEAK_FUNC(sub_8267D870);
PPC_FUNC_IMPL(__imp__sub_8267D870) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8267c850
	sub_8267C850(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267D878"))) PPC_WEAK_FUNC(sub_8267D878);
PPC_FUNC_IMPL(__imp__sub_8267D878) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8267c540
	sub_8267C540(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267D880"))) PPC_WEAK_FUNC(sub_8267D880);
PPC_FUNC_IMPL(__imp__sub_8267D880) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r11,-19788
	ctx.r3.s64 = ctx.r11.s64 + -19788;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267D890"))) PPC_WEAK_FUNC(sub_8267D890);
PPC_FUNC_IMPL(__imp__sub_8267D890) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8267d8c8
	if (ctx.cr6.eq) goto loc_8267D8C8;
	// bl 0x825ab3a8
	ctx.lr = 0x8267D8B8;
	sub_825AB3A8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8267d8c8
	if (!ctx.cr6.eq) goto loc_8267D8C8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8267d8d4
	goto loc_8267D8D4;
loc_8267D8C8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8234e2d8
	ctx.lr = 0x8267D8D4;
	sub_8234E2D8(ctx, base);
loc_8267D8D4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267D8F0"))) PPC_WEAK_FUNC(sub_8267D8F0);
PPC_FUNC_IMPL(__imp__sub_8267D8F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x825ab3a8
	sub_825AB3A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267D8F8"))) PPC_WEAK_FUNC(sub_8267D8F8);
PPC_FUNC_IMPL(__imp__sub_8267D8F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x8267D918;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8267d958
	if (ctx.cr0.eq) goto loc_8267D958;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234e3e0
	ctx.lr = 0x8267D92C;
	sub_8234E3E0(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// addi r11,r11,-1384
	ctx.r11.s64 = ctx.r11.s64 + -1384;
	// addi r10,r10,284
	ctx.r10.s64 = ctx.r10.s64 + 284;
	// addi r9,r9,336
	ctx.r9.s64 = ctx.r9.s64 + 336;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x8267d95c
	goto loc_8267D95C;
loc_8267D958:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8267D95C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267D978"))) PPC_WEAK_FUNC(sub_8267D978);
PPC_FUNC_IMPL(__imp__sub_8267D978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x825ab3a8
	ctx.lr = 0x8267D998;
	sub_825AB3A8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8267d9a8
	if (!ctx.cr6.eq) goto loc_8267D9A8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8267d9c0
	goto loc_8267D9C0;
loc_8267D9A8:
	// bl 0x823323b8
	ctx.lr = 0x8267D9AC;
	sub_823323B8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8267d9c0
	if (ctx.cr6.eq) goto loc_8267D9C0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8234d0a0
	ctx.lr = 0x8267D9C0;
	sub_8234D0A0(ctx, base);
loc_8267D9C0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267D9D8"))) PPC_WEAK_FUNC(sub_8267D9D8);
PPC_FUNC_IMPL(__imp__sub_8267D9D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// addi r11,r11,-1384
	ctx.r11.s64 = ctx.r11.s64 + -1384;
	// addi r10,r10,284
	ctx.r10.s64 = ctx.r10.s64 + 284;
	// addi r9,r9,336
	ctx.r9.s64 = ctx.r9.s64 + 336;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// bl 0x8265cc00
	ctx.lr = 0x8267DA1C;
	sub_8265CC00(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8267da2c
	if (ctx.cr0.eq) goto loc_8267DA2C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x8267DA2C;
	sub_82332DB8(ctx, base);
loc_8267DA2C:
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

__attribute__((alias("__imp__sub_8267DA48"))) PPC_WEAK_FUNC(sub_8267DA48);
PPC_FUNC_IMPL(__imp__sub_8267DA48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8267DA50;
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
	ctx.lr = 0x8267DA64;
	sub_8265C840(ctx, base);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r8,-32223
	ctx.r8.s64 = -2111766528;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// addi r10,r10,-1384
	ctx.r10.s64 = ctx.r10.s64 + -1384;
	// lfs f0,24088(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24088);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r9,284
	ctx.r9.s64 = ctx.r9.s64 + 284;
	// addi r11,r8,336
	ctx.r11.s64 = ctx.r8.s64 + 336;
	// stfs f0,1892(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1892, temp.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r3,r31,2020
	ctx.r3.s64 = ctx.r31.s64 + 2020;
	// stw r11,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r11.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823327e0
	ctx.lr = 0x8267DAB4;
	sub_823327E0(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,2032(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2032);
	// bl 0x82a455d0
	ctx.lr = 0x8267DAC4;
	sub_82A455D0(ctx, base);
	// lwz r11,2032(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2032);
	// addi r3,r31,1684
	ctx.r3.s64 = ctx.r31.s64 + 1684;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,2032(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2032);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// bl 0x823327e0
	ctx.lr = 0x8267DAEC;
	sub_823327E0(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,1696(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1696);
	// bl 0x82a455d0
	ctx.lr = 0x8267DAFC;
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
	ctx.lr = 0x8267DB14;
	sub_823327E0(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,1720(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1720);
	// bl 0x82a455d0
	ctx.lr = 0x8267DB24;
	sub_82A455D0(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,1732
	ctx.r3.s64 = ctx.r31.s64 + 1732;
	// bl 0x82510b28
	ctx.lr = 0x8267DB34;
	sub_82510B28(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,1756
	ctx.r3.s64 = ctx.r31.s64 + 1756;
	// bl 0x82510b28
	ctx.lr = 0x8267DB44;
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
	ctx.lr = 0x8267DB5C;
	sub_823327E0(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,1672(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1672);
	// bl 0x82a455d0
	ctx.lr = 0x8267DB6C;
	sub_82A455D0(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,2144
	ctx.r3.s64 = ctx.r31.s64 + 2144;
	// bl 0x82510b28
	ctx.lr = 0x8267DB7C;
	sub_82510B28(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r30,r11,30360
	ctx.r30.s64 = ctx.r11.s64 + 30360;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r29,1696(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1696);
	// bl 0x82816528
	ctx.lr = 0x8267DB90;
	sub_82816528(ctx, base);
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r29,r11,24508
	ctx.r29.s64 = ctx.r11.s64 + 24508;
	// lwz r11,24516(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24516);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8267dbcc
	if (!ctx.cr0.eq) goto loc_8267DBCC;
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,360
	ctx.r9.s64 = ctx.r9.s64 + 360;
	// stw r11,24516(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24516, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// addi r3,r11,27328
	ctx.r3.s64 = ctx.r11.s64 + 27328;
	// bl 0x82a4c758
	ctx.lr = 0x8267DBCC;
	sub_82A4C758(ctx, base);
loc_8267DBCC:
	// lwz r11,1720(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1720);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// li r28,1
	ctx.r28.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// lfs f31,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// lwz r11,1744(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1744);
	// stfs f31,0(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r11,1768(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1768);
	// stfs f31,0(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r11,1672(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1672);
	// lfs f30,908(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 908);
	ctx.f30.f64 = double(temp.f32);
	// stb r28,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r28.u8);
	// lwz r11,2156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2156);
	// stfs f30,0(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r30,1696(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1696);
	// bl 0x82816528
	ctx.lr = 0x8267DC14;
	sub_82816528(ctx, base);
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// addi r29,r11,24504
	ctx.r29.s64 = ctx.r11.s64 + 24504;
	// lwz r11,24512(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24512);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8267dc50
	if (!ctx.cr0.eq) goto loc_8267DC50;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,2984
	ctx.r9.s64 = ctx.r9.s64 + 2984;
	// stw r11,24512(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24512, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// addi r3,r11,27304
	ctx.r3.s64 = ctx.r11.s64 + 27304;
	// bl 0x82a4c758
	ctx.lr = 0x8267DC50;
	sub_82A4C758(ctx, base);
loc_8267DC50:
	// lwz r11,1720(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1720);
	// lis r27,-31949
	ctx.r27.s64 = -2093809664;
	// li r30,-1
	ctx.r30.s64 = -1;
	// lis r5,10772
	ctx.r5.s64 = 705953792;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// ori r5,r5,5116
	ctx.r5.u64 = ctx.r5.u64 | 5116;
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// lwz r11,1744(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1744);
	// stfs f31,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lwz r11,1768(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1768);
	// stfs f31,4(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lwz r11,1672(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1672);
	// stb r28,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r28.u8);
	// lwz r11,2156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2156);
	// stfs f30,4(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// bl 0x823cf190
	ctx.lr = 0x8267DCA0;
	sub_823CF190(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r29,r31,2188
	ctx.r29.s64 = ctx.r31.s64 + 2188;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82510b80
	ctx.lr = 0x8267DCC0;
	sub_82510B80(ctx, base);
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lis r5,-19070
	ctx.r5.s64 = -1249771520;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// ori r5,r5,35049
	ctx.r5.u64 = ctx.r5.u64 | 35049;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x8267DCE0;
	sub_823CF190(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82510b80
	ctx.lr = 0x8267DCFC;
	sub_82510B80(ctx, base);
	// lis r11,14698
	ctx.r11.s64 = 963248128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r11,r11,52233
	ctx.r11.u64 = ctx.r11.u64 | 52233;
	// stw r11,3092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3092, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8267DD20"))) PPC_WEAK_FUNC(sub_8267DD20);
PPC_FUNC_IMPL(__imp__sub_8267DD20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r3,r11,-1452
	ctx.r3.s64 = ctx.r11.s64 + -1452;
	// b 0x82816528
	sub_82816528(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267DD30"))) PPC_WEAK_FUNC(sub_8267DD30);
PPC_FUNC_IMPL(__imp__sub_8267DD30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r3,r11,-1420
	ctx.r3.s64 = ctx.r11.s64 + -1420;
	// b 0x82816528
	sub_82816528(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267DD40"))) PPC_WEAK_FUNC(sub_8267DD40);
PPC_FUNC_IMPL(__imp__sub_8267DD40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8267DD48;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r5,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r5.u64);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// std r7,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r7.u64);
	// lwz r11,200(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x826609a8
	ctx.lr = 0x8267DD70;
	sub_826609A8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x8267dee0
	if (ctx.cr0.eq) goto loc_8267DEE0;
	// lwa r11,2088(r30)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r30.u32 + 2088));
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,1108(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1108);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267DDA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8267dee0
	if (!ctx.cr6.eq) goto loc_8267DEE0;
	// bl 0x823c7210
	ctx.lr = 0x8267DDB0;
	sub_823C7210(ctx, base);
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
	ctx.lr = 0x8267DDC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// bne 0x8267ddd8
	if (!ctx.cr0.eq) goto loc_8267DDD8;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8267DDD8:
	// lwz r3,64(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// bl 0x824395b8
	ctx.lr = 0x8267DDE0;
	sub_824395B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8267dee0
	if (ctx.cr0.eq) goto loc_8267DEE0;
	// lwz r3,1608(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1608);
	// bl 0x82414510
	ctx.lr = 0x8267DDF0;
	sub_82414510(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x8267dee0
	if (ctx.cr0.eq) goto loc_8267DEE0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,1928(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1928);
	// bl 0x824d77f8
	ctx.lr = 0x8267DE04;
	sub_824D77F8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8267dee0
	if (ctx.cr0.eq) goto loc_8267DEE0;
	// lwz r11,628(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 628);
	// lfs f11,624(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f11.f64 = double(temp.f32);
	// lwz r10,620(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 620);
	// lfs f10,628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f10.f64 = double(temp.f32);
	// lwz r9,624(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 624);
	// lfs f9,620(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f9.f64 = double(temp.f32);
	// lfs f1,1504(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1504);
	ctx.f1.f64 = double(temp.f32);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lfs f8,580(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 580);
	ctx.f8.f64 = double(temp.f32);
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f7,572(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 572);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f11,f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// lfs f6,576(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 576);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f10,f13,f10
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// addi r5,r31,1632
	ctx.r5.s64 = ctx.r31.s64 + 1632;
	// fsubs f9,f12,f9
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f3,-27808(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -27808);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,904(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 904);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f11,f10,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f11.f64));
	// fmadds f11,f9,f9,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f11.f64));
	// fsqrts f11,f11
	ctx.f11.f64 = double(float(sqrt(ctx.f11.f64)));
	// fdivs f11,f11,f1
	ctx.f11.f64 = double(float(ctx.f11.f64 / ctx.f1.f64));
	// fmuls f10,f8,f11
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// fmuls f9,f7,f11
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// fmuls f11,f6,f11
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f11.f64));
	// fadds f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fadds f13,f9,f12
	ctx.f13.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,1640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1640, ctx.r11.u32);
	// stw r9,1636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1636, ctx.r9.u32);
	// stw r10,1632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1632, ctx.r10.u32);
	// bl 0x826c3f20
	ctx.lr = 0x8267DEC8;
	sub_826C3F20(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r11.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r11.u32);
loc_8267DEE0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267DEF0"))) PPC_WEAK_FUNC(sub_8267DEF0);
PPC_FUNC_IMPL(__imp__sub_8267DEF0) {
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
	ctx.lr = 0x8267DF04;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8267df14
	if (ctx.cr0.eq) goto loc_8267DF14;
	// bl 0x82379b08
	ctx.lr = 0x8267DF10;
	sub_82379B08(ctx, base);
	// b 0x8267df18
	goto loc_8267DF18;
loc_8267DF14:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8267DF18:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267DF28"))) PPC_WEAK_FUNC(sub_8267DF28);
PPC_FUNC_IMPL(__imp__sub_8267DF28) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x8267d9d8
	sub_8267D9D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267DF30"))) PPC_WEAK_FUNC(sub_8267DF30);
PPC_FUNC_IMPL(__imp__sub_8267DF30) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8267d9d8
	sub_8267D9D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267DF38"))) PPC_WEAK_FUNC(sub_8267DF38);
PPC_FUNC_IMPL(__imp__sub_8267DF38) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8267d978
	sub_8267D978(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267DF40"))) PPC_WEAK_FUNC(sub_8267DF40);
PPC_FUNC_IMPL(__imp__sub_8267DF40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-5684
	ctx.r3.s64 = ctx.r11.s64 + -5684;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267DF50"))) PPC_WEAK_FUNC(sub_8267DF50);
PPC_FUNC_IMPL(__imp__sub_8267DF50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8267df88
	if (ctx.cr6.eq) goto loc_8267DF88;
	// bl 0x823c5520
	ctx.lr = 0x8267DF78;
	sub_823C5520(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8267df88
	if (!ctx.cr6.eq) goto loc_8267DF88;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8267df94
	goto loc_8267DF94;
loc_8267DF88:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8234e2d8
	ctx.lr = 0x8267DF94;
	sub_8234E2D8(ctx, base);
loc_8267DF94:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267DFB0"))) PPC_WEAK_FUNC(sub_8267DFB0);
PPC_FUNC_IMPL(__imp__sub_8267DFB0) {
	PPC_FUNC_PROLOGUE();
	// b 0x823c5520
	sub_823C5520(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267DFB8"))) PPC_WEAK_FUNC(sub_8267DFB8);
PPC_FUNC_IMPL(__imp__sub_8267DFB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x8267DFD8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8267e018
	if (ctx.cr0.eq) goto loc_8267E018;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234e3e0
	ctx.lr = 0x8267DFEC;
	sub_8234E3E0(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// addi r11,r11,528
	ctx.r11.s64 = ctx.r11.s64 + 528;
	// addi r10,r10,2196
	ctx.r10.s64 = ctx.r10.s64 + 2196;
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
	// b 0x8267e01c
	goto loc_8267E01C;
loc_8267E018:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8267E01C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267E038"))) PPC_WEAK_FUNC(sub_8267E038);
PPC_FUNC_IMPL(__imp__sub_8267E038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823c5520
	ctx.lr = 0x8267E058;
	sub_823C5520(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8267e068
	if (!ctx.cr6.eq) goto loc_8267E068;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8267e080
	goto loc_8267E080;
loc_8267E068:
	// bl 0x823323b8
	ctx.lr = 0x8267E06C;
	sub_823323B8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8267e080
	if (ctx.cr6.eq) goto loc_8267E080;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8234d0a0
	ctx.lr = 0x8267E080;
	sub_8234D0A0(ctx, base);
loc_8267E080:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267E098"))) PPC_WEAK_FUNC(sub_8267E098);
PPC_FUNC_IMPL(__imp__sub_8267E098) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8265c840
	ctx.lr = 0x8267E0B0;
	sub_8265C840(ctx, base);
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// lis r8,-32224
	ctx.r8.s64 = -2111832064;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,528
	ctx.r10.s64 = ctx.r10.s64 + 528;
	// addi r9,r9,2196
	ctx.r9.s64 = ctx.r9.s64 + 2196;
	// stw r11,1884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1884, ctx.r11.u32);
	// addi r8,r8,-30936
	ctx.r8.s64 = ctx.r8.s64 + -30936;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// stw r8,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r8.u32);
	// stw r11,2068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2068, ctx.r11.u32);
	// addi r3,r10,380
	ctx.r3.s64 = ctx.r10.s64 + 380;
	// bl 0x82816528
	ctx.lr = 0x8267E0EC;
	sub_82816528(ctx, base);
	// stw r3,2076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2076, ctx.r3.u32);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r3,r11,392
	ctx.r3.s64 = ctx.r11.s64 + 392;
	// bl 0x82816528
	ctx.lr = 0x8267E0FC;
	sub_82816528(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// stw r3,2080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2080, ctx.r3.u32);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// li r7,2
	ctx.r7.s64 = 2;
	// lfs f0,18368(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18368);
	ctx.f0.f64 = double(temp.f32);
	// li r11,10
	ctx.r11.s64 = 10;
	// lfs f13,-12104(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12104);
	ctx.f13.f64 = double(temp.f32);
	// stw r7,2100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2100, ctx.r7.u32);
	// lfs f11,-24640(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -24640);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,2084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2084, ctx.r11.u32);
	// lfs f12,19548(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 19548);
	ctx.f12.f64 = double(temp.f32);
	// lis r8,-32223
	ctx.r8.s64 = -2111766528;
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stfs f12,108(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lwz r5,108(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r11,2112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2112, ctx.r11.u32);
	// addi r3,r8,420
	ctx.r3.s64 = ctx.r8.s64 + 420;
	// stw r5,2108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2108, ctx.r5.u32);
	// stw r6,2104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2104, ctx.r6.u32);
	// stw r10,2116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2116, ctx.r10.u32);
	// stw r9,2120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2120, ctx.r9.u32);
	// stw r7,2124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2124, ctx.r7.u32);
	// bl 0x82816528
	ctx.lr = 0x8267E184;
	sub_82816528(ctx, base);
	// lis r11,3220
	ctx.r11.s64 = 211025920;
	// stw r3,1412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1412, ctx.r3.u32);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// ori r11,r11,49414
	ctx.r11.u64 = ctx.r11.u64 | 49414;
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r11,3088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3088, ctx.r11.u32);
	// lis r5,16980
	ctx.r5.s64 = 1112801280;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// lwz r11,13024(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13024);
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r5,r5,3452
	ctx.r5.u64 = ctx.r5.u64 | 3452;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x8267E1C0;
	sub_823CF190(ctx, base);
	// addi r3,r31,2276
	ctx.r3.s64 = ctx.r31.s64 + 2276;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823327e0
	ctx.lr = 0x8267E1D8;
	sub_823327E0(ctx, base);
	// lwz r11,2288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2288);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267e1ec
	if (ctx.cr6.eq) goto loc_8267E1EC;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8267E1EC:
	// lis r11,358
	ctx.r11.s64 = 23461888;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r11,r11,44344
	ctx.r11.u64 = ctx.r11.u64 | 44344;
	// stw r11,1928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1928, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8267E210"))) PPC_WEAK_FUNC(sub_8267E210);
PPC_FUNC_IMPL(__imp__sub_8267E210) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r3,r11,460
	ctx.r3.s64 = ctx.r11.s64 + 460;
	// b 0x82816528
	sub_82816528(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267E220"))) PPC_WEAK_FUNC(sub_8267E220);
PPC_FUNC_IMPL(__imp__sub_8267E220) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r3,r11,492
	ctx.r3.s64 = ctx.r11.s64 + 492;
	// b 0x82816528
	sub_82816528(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267E230"))) PPC_WEAK_FUNC(sub_8267E230);
PPC_FUNC_IMPL(__imp__sub_8267E230) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8267e038
	sub_8267E038(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267E238"))) PPC_WEAK_FUNC(sub_8267E238);
PPC_FUNC_IMPL(__imp__sub_8267E238) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,20632
	ctx.r3.s64 = ctx.r11.s64 + 20632;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267E248"))) PPC_WEAK_FUNC(sub_8267E248);
PPC_FUNC_IMPL(__imp__sub_8267E248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8267e280
	if (ctx.cr6.eq) goto loc_8267E280;
	// bl 0x824379b8
	ctx.lr = 0x8267E270;
	sub_824379B8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8267e280
	if (!ctx.cr6.eq) goto loc_8267E280;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8267e28c
	goto loc_8267E28C;
loc_8267E280:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824003f0
	ctx.lr = 0x8267E28C;
	sub_824003F0(ctx, base);
loc_8267E28C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267E2A8"))) PPC_WEAK_FUNC(sub_8267E2A8);
PPC_FUNC_IMPL(__imp__sub_8267E2A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x824379b8
	sub_824379B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267E2B0"))) PPC_WEAK_FUNC(sub_8267E2B0);
PPC_FUNC_IMPL(__imp__sub_8267E2B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82337028
	sub_82337028(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267E2B8"))) PPC_WEAK_FUNC(sub_8267E2B8);
PPC_FUNC_IMPL(__imp__sub_8267E2B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x8267E2D4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8267e2e8
	if (ctx.cr0.eq) goto loc_8267E2E8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8267e370
	ctx.lr = 0x8267E2E4;
	sub_8267E370(ctx, base);
	// b 0x8267e2ec
	goto loc_8267E2EC;
loc_8267E2E8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8267E2EC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267E300"))) PPC_WEAK_FUNC(sub_8267E300);
PPC_FUNC_IMPL(__imp__sub_8267E300) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x824379b8
	ctx.lr = 0x8267E320;
	sub_824379B8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8267e334
	if (ctx.cr6.eq) goto loc_8267E334;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82400390
	ctx.lr = 0x8267E334;
	sub_82400390(ctx, base);
loc_8267E334:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267E350"))) PPC_WEAK_FUNC(sub_8267E350);
PPC_FUNC_IMPL(__imp__sub_8267E350) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r3,r11,2248
	ctx.r3.s64 = ctx.r11.s64 + 2248;
	// b 0x82816528
	sub_82816528(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267E360"))) PPC_WEAK_FUNC(sub_8267E360);
PPC_FUNC_IMPL(__imp__sub_8267E360) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r3,r11,2284
	ctx.r3.s64 = ctx.r11.s64 + 2284;
	// b 0x82816528
	sub_82816528(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267E370"))) PPC_WEAK_FUNC(sub_8267E370);
PPC_FUNC_IMPL(__imp__sub_8267E370) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8267E378;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82400248
	ctx.lr = 0x8267E388;
	sub_82400248(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// lis r8,-32244
	ctx.r8.s64 = -2113142784;
	// addi r11,r11,2664
	ctx.r11.s64 = ctx.r11.s64 + 2664;
	// addi r10,r10,3752
	ctx.r10.s64 = ctx.r10.s64 + 3752;
	// addi r9,r9,3804
	ctx.r9.s64 = ctx.r9.s64 + 3804;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r8,r8,15852
	ctx.r8.s64 = ctx.r8.s64 + 15852;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r11,r31,1488
	ctx.r11.s64 = ctx.r31.s64 + 1488;
	// stw r8,1488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1488, ctx.r8.u32);
	// addi r4,r30,1492
	ctx.r4.s64 = ctx.r30.s64 + 1492;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// li r5,28
	ctx.r5.s64 = 28;
	// bl 0x82a4ea80
	ctx.lr = 0x8267E3CC;
	sub_82A4EA80(ctx, base);
	// lfs f0,1520(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1520);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1520(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1520, temp.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r29,r31,1580
	ctx.r29.s64 = ctx.r31.s64 + 1580;
	// addi r28,r30,1580
	ctx.r28.s64 = ctx.r30.s64 + 1580;
	// li r10,4
	ctx.r10.s64 = 4;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// lfs f0,1524(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1524);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1524(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1524, temp.u32);
	// lfs f0,1528(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1528);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1528(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1528, temp.u32);
	// lwz r9,1532(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1532);
	// stw r9,1532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1532, ctx.r9.u32);
	// lwz r9,1536(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1536);
	// stw r9,1536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1536, ctx.r9.u32);
	// lwz r9,1540(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1540);
	// stw r9,1540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1540, ctx.r9.u32);
	// lwz r9,1544(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1544);
	// stw r9,1544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1544, ctx.r9.u32);
	// lwz r9,1548(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1548);
	// stw r9,1548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1548, ctx.r9.u32);
	// lfs f0,1552(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1552);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1552(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1552, temp.u32);
	// lwz r9,1556(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1556);
	// stw r9,1556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1556, ctx.r9.u32);
	// lwz r9,1560(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1560);
	// stw r9,1560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1560, ctx.r9.u32);
	// lwz r9,1564(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1564);
	// stw r9,1564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1564, ctx.r9.u32);
	// lwz r9,1568(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1568);
	// stw r9,1568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1568, ctx.r9.u32);
	// lwz r9,1572(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1572);
	// stw r9,1572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1572, ctx.r9.u32);
	// lwz r9,1576(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1576);
	// stw r9,1576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1576, ctx.r9.u32);
	// stw r10,1584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1584, ctx.r10.u32);
	// stw r11,1588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1588, ctx.r11.u32);
	// stw r11,1592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1592, ctx.r11.u32);
	// stw r11,1596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1596, ctx.r11.u32);
	// stw r11,1600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1600, ctx.r11.u32);
	// stw r11,1580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1580, ctx.r11.u32);
	// beq cr6,0x8267e4bc
	if (ctx.cr6.eq) goto loc_8267E4BC;
	// lwz r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// stw r11,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8267e4bc
	if (!ctx.cr6.gt) goto loc_8267E4BC;
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8267e4a0
	if (ctx.cr0.eq) goto loc_8267E4A0;
	// stw r10,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r10.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332c38
	ctx.lr = 0x8267E4A0;
	sub_82332C38(ctx, base);
loc_8267E4A0:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r4,12(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x82a45878
	ctx.lr = 0x8267E4B4;
	sub_82A45878(ctx, base);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// stw r11,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
loc_8267E4BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267E4C8"))) PPC_WEAK_FUNC(sub_8267E4C8);
PPC_FUNC_IMPL(__imp__sub_8267E4C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8267E4D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// addi r11,r11,2664
	ctx.r11.s64 = ctx.r11.s64 + 2664;
	// addi r10,r10,3752
	ctx.r10.s64 = ctx.r10.s64 + 3752;
	// addi r9,r9,3804
	ctx.r9.s64 = ctx.r9.s64 + 3804;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// bl 0x829c36c0
	ctx.lr = 0x8267E504;
	sub_829C36C0(ctx, base);
	// addi r30,r31,1580
	ctx.r30.s64 = ctx.r31.s64 + 1580;
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r5,1596(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1596);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332ca8
	ctx.lr = 0x8267E520;
	sub_82332CA8(ctx, base);
	// lwz r3,1592(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1592);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8267e530
	if (ctx.cr6.eq) goto loc_8267E530;
	// bl 0x82332db8
	ctx.lr = 0x8267E530;
	sub_82332DB8(ctx, base);
loc_8267E530:
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-29556
	ctx.r10.s64 = ctx.r10.s64 + -29556;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// stw r10,1488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1488, ctx.r10.u32);
	// bl 0x8284c6d0
	ctx.lr = 0x8267E554;
	sub_8284C6D0(ctx, base);
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8267e564
	if (ctx.cr0.eq) goto loc_8267E564;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x8267E564;
	sub_82332DB8(ctx, base);
loc_8267E564:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267E570"))) PPC_WEAK_FUNC(sub_8267E570);
PPC_FUNC_IMPL(__imp__sub_8267E570) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,836
	ctx.r3.s64 = ctx.r11.s64 + 836;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267E580"))) PPC_WEAK_FUNC(sub_8267E580);
PPC_FUNC_IMPL(__imp__sub_8267E580) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8267e5b8
	if (ctx.cr6.eq) goto loc_8267E5B8;
	// bl 0x82442fa8
	ctx.lr = 0x8267E5A8;
	sub_82442FA8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8267e5b8
	if (!ctx.cr6.eq) goto loc_8267E5B8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8267e5c4
	goto loc_8267E5C4;
loc_8267E5B8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233ecc8
	ctx.lr = 0x8267E5C4;
	sub_8233ECC8(ctx, base);
loc_8267E5C4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267E5E0"))) PPC_WEAK_FUNC(sub_8267E5E0);
PPC_FUNC_IMPL(__imp__sub_8267E5E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82442fa8
	sub_82442FA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267E5E8"))) PPC_WEAK_FUNC(sub_8267E5E8);
PPC_FUNC_IMPL(__imp__sub_8267E5E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,3248
	ctx.r3.s64 = 3248;
	// bl 0x82833108
	ctx.lr = 0x8267E608;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8267e678
	if (ctx.cr0.eq) goto loc_8267E678;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233edc0
	ctx.lr = 0x8267E61C;
	sub_8233EDC0(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// addi r11,r11,3832
	ctx.r11.s64 = ctx.r11.s64 + 3832;
	// addi r10,r10,5020
	ctx.r10.s64 = ctx.r10.s64 + 5020;
	// addi r9,r9,5072
	ctx.r9.s64 = ctx.r9.s64 + 5072;
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
	// lwz r11,3224(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3224);
	// stw r11,3224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3224, ctx.r11.u32);
	// lwz r11,3228(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3228);
	// stw r11,3228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3228, ctx.r11.u32);
	// lwz r11,3232(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3232);
	// stw r11,3232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3232, ctx.r11.u32);
	// lwz r11,3236(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3236);
	// stw r11,3236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3236, ctx.r11.u32);
	// b 0x8267e67c
	goto loc_8267E67C;
loc_8267E678:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8267E67C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267E698"))) PPC_WEAK_FUNC(sub_8267E698);
PPC_FUNC_IMPL(__imp__sub_8267E698) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82442fa8
	ctx.lr = 0x8267E6B8;
	sub_82442FA8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8267e6c8
	if (!ctx.cr6.eq) goto loc_8267E6C8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8267e6e0
	goto loc_8267E6E0;
loc_8267E6C8:
	// bl 0x82394fc8
	ctx.lr = 0x8267E6CC;
	sub_82394FC8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8267e6e0
	if (ctx.cr6.eq) goto loc_8267E6E0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8233eba0
	ctx.lr = 0x8267E6E0;
	sub_8233EBA0(ctx, base);
loc_8267E6E0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267E6F8"))) PPC_WEAK_FUNC(sub_8267E6F8);
PPC_FUNC_IMPL(__imp__sub_8267E6F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r3,r11,2324
	ctx.r3.s64 = ctx.r11.s64 + 2324;
	// b 0x82816528
	sub_82816528(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267E708"))) PPC_WEAK_FUNC(sub_8267E708);
PPC_FUNC_IMPL(__imp__sub_8267E708) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8267E710;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8284c630
	ctx.lr = 0x8267E71C;
	sub_8284C630(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// lis r8,-32244
	ctx.r8.s64 = -2113142784;
	// addi r11,r11,2664
	ctx.r11.s64 = ctx.r11.s64 + 2664;
	// addi r10,r10,3752
	ctx.r10.s64 = ctx.r10.s64 + 3752;
	// addi r9,r9,3804
	ctx.r9.s64 = ctx.r9.s64 + 3804;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r8,r8,15852
	ctx.r8.s64 = ctx.r8.s64 + 15852;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r11,r31,1488
	ctx.r11.s64 = ctx.r31.s64 + 1488;
	// stw r8,1488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1488, ctx.r8.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x8312e7dc
	ctx.lr = 0x8267E758;
	sub_8312E7DC(ctx, base);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// li r11,4
	ctx.r11.s64 = 4;
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// stw r11,1584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1584, ctx.r11.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r8,-32244
	ctx.r8.s64 = -2113142784;
	// stw r30,1588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1588, ctx.r30.u32);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// stw r30,1592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1592, ctx.r30.u32);
	// lis r6,-32215
	ctx.r6.s64 = -2111242240;
	// stw r30,1596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1596, ctx.r30.u32);
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r30,1600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1600, ctx.r30.u32);
	// stw r30,1580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1580, ctx.r30.u32);
	// lfs f0,20416(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 20416);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,32748(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 32748);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,908(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 908);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,10548(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10548);
	// lwz r10,13024(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13024);
	// lwz r9,704(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 704);
	// lfs f11,3548(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3548);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,1204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1204);
	// stfs f11,1520(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1520, temp.u32);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stfs f0,1524(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1524, temp.u32);
	// stfs f13,1528(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1528, temp.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r9,r9,0,30,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stfs f12,1552(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1552, temp.u32);
	// lwz r11,896(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 896);
	// stw r11,940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 940, ctx.r11.u32);
	// stw r29,844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 844, ctx.r29.u32);
	// stw r9,704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 704, ctx.r9.u32);
	// stw r30,808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 808, ctx.r30.u32);
	// bne cr6,0x8267e7ec
	if (!ctx.cr6.eq) goto loc_8267E7EC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c3628
	ctx.lr = 0x8267E7EC;
	sub_829C3628(ctx, base);
loc_8267E7EC:
	// stw r30,1576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1576, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 956, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267E800"))) PPC_WEAK_FUNC(sub_8267E800);
PPC_FUNC_IMPL(__imp__sub_8267E800) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x8267E818;
	sub_829BC7B8(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r4,r31,1160
	ctx.r4.s64 = ctx.r31.s64 + 1160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,2368
	ctx.r5.s64 = ctx.r11.s64 + 2368;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x8267ff38
	ctx.lr = 0x8267E834;
	sub_8267FF38(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r4,r31,1176
	ctx.r4.s64 = ctx.r31.s64 + 1176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,2384
	ctx.r5.s64 = ctx.r11.s64 + 2384;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x824115b8
	ctx.lr = 0x8267E850;
	sub_824115B8(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r4,r31,176
	ctx.r4.s64 = ctx.r31.s64 + 176;
	// addi r5,r11,11976
	ctx.r5.s64 = ctx.r11.s64 + 11976;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824f5de8
	ctx.lr = 0x8267E86C;
	sub_824F5DE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267E880"))) PPC_WEAK_FUNC(sub_8267E880);
PPC_FUNC_IMPL(__imp__sub_8267E880) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8267E888;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x829c4e48
	ctx.lr = 0x8267E894;
	sub_829C4E48(ctx, base);
	// addi r11,r31,1556
	ctx.r11.s64 = ctx.r31.s64 + 1556;
	// addi r30,r31,424
	ctx.r30.s64 = ctx.r31.s64 + 424;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82838fd0
	ctx.lr = 0x8267E8B0;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r31,1572
	ctx.r10.s64 = ctx.r31.s64 + 1572;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r28,r29,4
	ctx.r28.s64 = ctx.r29.s64 + 4;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bl 0x82838fd0
	ctx.lr = 0x8267E8D0;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r31,572
	ctx.r10.s64 = ctx.r31.s64 + 572;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r28,4
	ctx.r31.s64 = ctx.r28.s64 + 4;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// bl 0x82838fd0
	ctx.lr = 0x8267E8F0;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267E908"))) PPC_WEAK_FUNC(sub_8267E908);
PPC_FUNC_IMPL(__imp__sub_8267E908) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8267E910;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r11,2412
	ctx.r3.s64 = ctx.r11.s64 + 2412;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82816528
	ctx.lr = 0x8267E928;
	sub_82816528(ctx, base);
	// cmplw cr6,r28,r3
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8267e990
	if (!ctx.cr6.eq) goto loc_8267E990;
	// lwz r31,1428(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1428);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8267e9ac
	if (ctx.cr6.eq) goto loc_8267E9AC;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r30,r29,1556
	ctx.r30.s64 = ctx.r29.s64 + 1556;
	// addi r3,r11,2568
	ctx.r3.s64 = ctx.r11.s64 + 2568;
	// bl 0x82816528
	ctx.lr = 0x8267E94C;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x829653c8
	ctx.lr = 0x8267E960;
	sub_829653C8(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r11,5980
	ctx.r3.s64 = ctx.r11.s64 + 5980;
	// bl 0x82816528
	ctx.lr = 0x8267E96C;
	sub_82816528(ctx, base);
	// lwz r11,524(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// ble cr6,0x8267e9ac
	if (!ctx.cr6.gt) goto loc_8267E9AC;
	// lwz r11,544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 544);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r11,396
	ctx.r3.s64 = ctx.r11.s64 + 396;
	// bl 0x829803a0
	ctx.lr = 0x8267E98C;
	sub_829803A0(ctx, base);
	// b 0x8267e9ac
	goto loc_8267E9AC;
loc_8267E990:
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r3,r11,2420
	ctx.r3.s64 = ctx.r11.s64 + 2420;
	// bl 0x82816528
	ctx.lr = 0x8267E99C;
	sub_82816528(ctx, base);
	// cmplw cr6,r28,r3
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8267e9ac
	if (!ctx.cr6.eq) goto loc_8267E9AC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8267e9c0
	ctx.lr = 0x8267E9AC;
	sub_8267E9C0(ctx, base);
loc_8267E9AC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829c63e8
	ctx.lr = 0x8267E9B8;
	sub_829C63E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267E9C0"))) PPC_WEAK_FUNC(sub_8267E9C0);
PPC_FUNC_IMPL(__imp__sub_8267E9C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8267E9C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r29,1428(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1428);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8267ea90
	if (ctx.cr6.eq) goto loc_8267EA90;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lwz r30,1572(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1572);
	// addi r3,r11,2436
	ctx.r3.s64 = ctx.r11.s64 + 2436;
	// bl 0x82816528
	ctx.lr = 0x8267E9EC;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r6,3
	ctx.r6.s64 = 3;
	// bl 0x82965800
	ctx.lr = 0x8267EA00;
	sub_82965800(ctx, base);
	// lwz r11,1544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1544);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267ea90
	if (ctx.cr6.eq) goto loc_8267EA90;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,-25544
	ctx.r3.s64 = ctx.r11.s64 + -25544;
	// bl 0x82816528
	ctx.lr = 0x8267EA18;
	sub_82816528(ctx, base);
	// lwz r11,1544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1544);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8267ea38
	if (!ctx.cr0.eq) goto loc_8267EA38;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r3,r11,2456
	ctx.r3.s64 = ctx.r11.s64 + 2456;
	// b 0x8267ea68
	goto loc_8267EA68;
loc_8267EA38:
	// bl 0x82439178
	ctx.lr = 0x8267EA3C;
	sub_82439178(ctx, base);
	// lwz r11,1544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1544);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,40(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267EA58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8267ea70
	if (ctx.cr0.eq) goto loc_8267EA70;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r3,r11,2504
	ctx.r3.s64 = ctx.r11.s64 + 2504;
loc_8267EA68:
	// bl 0x82816528
	ctx.lr = 0x8267EA6C;
	sub_82816528(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8267EA70:
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r3,r11,2548
	ctx.r3.s64 = ctx.r11.s64 + 2548;
	// bl 0x82816528
	ctx.lr = 0x8267EA7C;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r6,3
	ctx.r6.s64 = 3;
	// bl 0x82965800
	ctx.lr = 0x8267EA90;
	sub_82965800(ctx, base);
loc_8267EA90:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267EA98"))) PPC_WEAK_FUNC(sub_8267EA98);
PPC_FUNC_IMPL(__imp__sub_8267EA98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8267EAA0;
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
	// bl 0x829c2520
	ctx.lr = 0x8267EAB0;
	sub_829C2520(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// beq 0x8267eb30
	if (ctx.cr0.eq) goto loc_8267EB30;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// addi r29,r31,1548
	ctx.r29.s64 = ctx.r31.s64 + 1548;
	// addi r3,r10,2592
	ctx.r3.s64 = ctx.r10.s64 + 2592;
	// lfs f0,-11456(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11456);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,248(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 248, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x8267EADC;
	sub_82816528(ctx, base);
	// lwz r11,328(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 328);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267eb04
	if (ctx.cr6.eq) goto loc_8267EB04;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,220(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 220);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267EB00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8267eb08
	goto loc_8267EB08;
loc_8267EB04:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8267EB08:
	// bl 0x824f6380
	ctx.lr = 0x8267EB0C;
	sub_824F6380(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8267eb30
	if (ctx.cr0.eq) goto loc_8267EB30;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// stw r29,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r29.u32);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,308(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 308);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267EB30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8267EB30:
	// lwz r11,1544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1544);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267eb6c
	if (ctx.cr6.eq) goto loc_8267EB6C;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// addi r9,r31,1556
	ctx.r9.s64 = ctx.r31.s64 + 1556;
	// stw r10,1556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1556, ctx.r10.u32);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r10,1560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1560, ctx.r10.u32);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r10,1564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1564, ctx.r10.u32);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r10,1568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1568, ctx.r10.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,1572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1572, ctx.r11.u32);
loc_8267EB6C:
	// lwz r30,1428(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1428);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8267ebc8
	if (ctx.cr6.eq) goto loc_8267EBC8;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r29,r31,1556
	ctx.r29.s64 = ctx.r31.s64 + 1556;
	// addi r3,r11,2568
	ctx.r3.s64 = ctx.r11.s64 + 2568;
	// bl 0x82816528
	ctx.lr = 0x8267EB88;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x829653c8
	ctx.lr = 0x8267EB9C;
	sub_829653C8(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r11,5980
	ctx.r3.s64 = ctx.r11.s64 + 5980;
	// bl 0x82816528
	ctx.lr = 0x8267EBA8;
	sub_82816528(ctx, base);
	// lwz r11,524(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 524);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// ble cr6,0x8267ebc8
	if (!ctx.cr6.gt) goto loc_8267EBC8;
	// lwz r11,544(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 544);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r11,396
	ctx.r3.s64 = ctx.r11.s64 + 396;
	// bl 0x829803a0
	ctx.lr = 0x8267EBC8;
	sub_829803A0(ctx, base);
loc_8267EBC8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8267e9c0
	ctx.lr = 0x8267EBD0;
	sub_8267E9C0(ctx, base);
	// lis r11,-32152
	ctx.r11.s64 = -2107113472;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f1,1520(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1520);
	ctx.f1.f64 = double(temp.f32);
	// addi r11,r11,-4048
	ctx.r11.s64 = ctx.r11.s64 + -4048;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8267fe40
	ctx.lr = 0x8267EBFC;
	sub_8267FE40(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,472(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 472);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8267EC38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c1470
	ctx.lr = 0x8267EC40;
	sub_829C1470(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267EC50"))) PPC_WEAK_FUNC(sub_8267EC50);
PPC_FUNC_IMPL(__imp__sub_8267EC50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,1536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1536);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8267ec98
	if (!ctx.cr6.eq) goto loc_8267EC98;
	// lwz r3,1544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1544);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8267ec98
	if (ctx.cr6.eq) goto loc_8267EC98;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267EC90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1544, ctx.r11.u32);
loc_8267EC98:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1016(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1016);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267ECAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829bd978
	ctx.lr = 0x8267ECB4;
	sub_829BD978(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267ECC8"))) PPC_WEAK_FUNC(sub_8267ECC8);
PPC_FUNC_IMPL(__imp__sub_8267ECC8) {
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
	// lwz r11,960(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 960);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8267ed0c
	if (!ctx.cr6.eq) goto loc_8267ED0C;
	// lis r11,-32152
	ctx.r11.s64 = -2107113472;
	// lfs f1,1524(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1524);
	ctx.f1.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-4160
	ctx.r11.s64 = ctx.r11.s64 + -4160;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8267fe40
	ctx.lr = 0x8267ED0C;
	sub_8267FE40(ctx, base);
loc_8267ED0C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267ED20"))) PPC_WEAK_FUNC(sub_8267ED20);
PPC_FUNC_IMPL(__imp__sub_8267ED20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f4
	ctx.lr = 0x8267ED28;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r23,r30,1488
	ctx.r23.s64 = ctx.r30.s64 + 1488;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r11,1488(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1488);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267ED50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1532(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1532);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8267ef6c
	if (!ctx.cr6.eq) goto loc_8267EF6C;
	// lwz r11,1540(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1540);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8267ef6c
	if (!ctx.cr6.eq) goto loc_8267EF6C;
	// lfs f31,1528(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1528);
	ctx.f31.f64 = double(temp.f32);
	// lis r26,-31949
	ctx.r26.s64 = -2093809664;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x8267ed88
	if (!ctx.cr6.eq) goto loc_8267ED88;
	// lwz r11,10548(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 10548);
	// lwz r11,3580(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3580);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8267ed90
	if (ctx.cr6.eq) goto loc_8267ED90;
loc_8267ED88:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f31,18528(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18528);
	ctx.f31.f64 = double(temp.f32);
loc_8267ED90:
	// lis r24,-31949
	ctx.r24.s64 = -2093809664;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// lwz r11,13024(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13024);
	// addi r29,r11,808
	ctx.r29.s64 = ctx.r11.s64 + 808;
	// lwz r10,824(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 824);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8267ee80
	if (!ctx.cr6.gt) goto loc_8267EE80;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
loc_8267EDB4:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwzx r11,r28,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// lwz r31,1412(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1412);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8267ee68
	if (ctx.cr6.eq) goto loc_8267EE68;
	// lwz r11,2112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8267ee68
	if (!ctx.cr6.gt) goto loc_8267EE68;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8267ee68
	if (!ctx.cr0.eq) goto loc_8267EE68;
	// lwz r11,2100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8267ee68
	if (ctx.cr6.eq) goto loc_8267EE68;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1092(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1092);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267EE00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8267ee68
	if (ctx.cr0.eq) goto loc_8267EE68;
	// lfs f13,624(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,624(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 624);
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
	// lfs f12,620(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 620);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,620(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
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
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x8267ee68
	if (ctx.cr6.gt) goto loc_8267EE68;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
	// lwzx r11,r28,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267ee60
	if (ctx.cr6.eq) goto loc_8267EE60;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x8267ee64
	goto loc_8267EE64;
loc_8267EE60:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_8267EE64:
	// stw r11,1576(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1576, ctx.r11.u32);
loc_8267EE68:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8267edb4
	if (ctx.cr6.lt) goto loc_8267EDB4;
	// lwz r11,13024(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13024);
loc_8267EE80:
	// lwz r4,1576(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1576);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8267efa0
	if (ctx.cr6.eq) goto loc_8267EFA0;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8267EE94;
	sub_829B9720(ctx, base);
	// bl 0x82411b98
	ctx.lr = 0x8267EE98;
	sub_82411B98(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x8267efa0
	if (ctx.cr0.eq) goto loc_8267EFA0;
	// lwz r3,10548(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 10548);
	// lwz r5,1544(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1544);
	// bl 0x82425138
	ctx.lr = 0x8267EEAC;
	sub_82425138(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8267efa0
	if (ctx.cr0.eq) goto loc_8267EFA0;
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// stw r11,1576(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1576, ctx.r11.u32);
	// lwz r29,1412(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1412);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8267efa0
	if (ctx.cr6.eq) goto loc_8267EFA0;
	// lwz r11,2112(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8267efa0
	if (!ctx.cr6.gt) goto loc_8267EFA0;
	// lwz r11,84(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8267efa0
	if (!ctx.cr0.eq) goto loc_8267EFA0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,1092(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1092);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267EEF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8267efa0
	if (ctx.cr0.eq) goto loc_8267EFA0;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82833108
	ctx.lr = 0x8267EF04;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8267ef50
	if (ctx.cr0.eq) goto loc_8267EF50;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,80(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// lwz r28,80(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// lwz r27,1544(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1544);
	// bl 0x82833180
	ctx.lr = 0x8267EF20;
	sub_82833180(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// lis r10,-8531
	ctx.r10.s64 = -559087616;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// addi r11,r11,5168
	ctx.r11.s64 = ctx.r11.s64 + 5168;
	// stw r27,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r27.u32);
	// ori r10,r10,47806
	ctx.r10.u64 = ctx.r10.u64 | 47806;
	// stw r25,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r25.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// b 0x8267ef54
	goto loc_8267EF54;
loc_8267EF50:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_8267EF54:
	// lwz r11,13024(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x8267EF60;
	sub_82833A30(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1540(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1540, ctx.r11.u32);
	// b 0x8267efa0
	goto loc_8267EFA0;
loc_8267EF6C:
	// lwz r11,1540(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1540);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8267efa0
	if (ctx.cr6.eq) goto loc_8267EFA0;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r4,1576(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1576);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8267EF8C;
	sub_829B9720(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8267efa0
	if (!ctx.cr0.eq) goto loc_8267EFA0;
	// li r25,0
	ctx.r25.s64 = 0;
	// stw r25,1540(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1540, ctx.r25.u32);
	// stw r25,1576(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1576, ctx.r25.u32);
loc_8267EFA0:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267EFB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x82a4ea44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267EFC0"))) PPC_WEAK_FUNC(sub_8267EFC0);
PPC_FUNC_IMPL(__imp__sub_8267EFC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1536(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1536);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8267ed20
	sub_8267ED20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267EFD4"))) PPC_WEAK_FUNC(sub_8267EFD4);
PPC_FUNC_IMPL(__imp__sub_8267EFD4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267EFD8"))) PPC_WEAK_FUNC(sub_8267EFD8);
PPC_FUNC_IMPL(__imp__sub_8267EFD8) {
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
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stw r11,1548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1548, ctx.r11.u32);
	// lis r11,-32152
	ctx.r11.s64 = -2107113472;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-4040
	ctx.r11.s64 = ctx.r11.s64 + -4040;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// lfs f1,20416(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20416);
	ctx.f1.f64 = double(temp.f32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8267fe40
	ctx.lr = 0x8267F01C;
	sub_8267FE40(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267F030"))) PPC_WEAK_FUNC(sub_8267F030);
PPC_FUNC_IMPL(__imp__sub_8267F030) {
	PPC_FUNC_PROLOGUE();
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x8267ed20
	sub_8267ED20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267F038"))) PPC_WEAK_FUNC(sub_8267F038);
PPC_FUNC_IMPL(__imp__sub_8267F038) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// addi r3,r9,2600
	ctx.r3.s64 = ctx.r9.s64 + 2600;
	// lfs f13,1552(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1552);
	ctx.f13.f64 = double(temp.f32);
	// lwz r31,1428(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1428);
	// lfd f0,17880(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 17880);
	// fsub f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 - ctx.f0.f64;
	// frsp f31,f0
	ctx.f31.f64 = double(float(ctx.f0.f64));
	// stfs f31,1552(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1552, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x8267F078;
	sub_82816528(ctx, base);
	// lwz r11,524(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8267f094
	if (!ctx.cr6.gt) goto loc_8267F094;
	// lwz r3,544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 544);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82980518
	ctx.lr = 0x8267F094;
	sub_82980518(ctx, base);
loc_8267F094:
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

__attribute__((alias("__imp__sub_8267F0B0"))) PPC_WEAK_FUNC(sub_8267F0B0);
PPC_FUNC_IMPL(__imp__sub_8267F0B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x8267F0B8;
	__savegprlr_25(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r11,1596(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1596);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8267f1e0
	if (!ctx.cr6.gt) goto loc_8267F1E0;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// addi r27,r11,7896
	ctx.r27.s64 = ctx.r11.s64 + 7896;
loc_8267F0E0:
	// lwz r11,1592(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1592);
	// lwzx r11,r28,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8267f0fc
	if (ctx.cr6.eq) goto loc_8267F0FC;
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x8267f100
	goto loc_8267F100;
loc_8267F0FC:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_8267F100:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82409058
	ctx.lr = 0x8267F108;
	sub_82409058(ctx, base);
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// addi r10,r1,148
	ctx.r10.s64 = ctx.r1.s64 + 148;
	// lwz r31,132(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8267f12c
	if (ctx.cr6.eq) goto loc_8267F12C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267f12c
	if (ctx.cr6.eq) goto loc_8267F12C;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82332db8
	ctx.lr = 0x8267F12C;
	sub_82332DB8(ctx, base);
loc_8267F12C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,10548(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 10548);
	// bl 0x8241e690
	ctx.lr = 0x8267F138;
	sub_8241E690(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8267f1cc
	if (ctx.cr0.eq) goto loc_8267F1CC;
	// lwz r11,1592(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1592);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// lwz r25,24(r10)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// bl 0x823339b8
	ctx.lr = 0x8267F15C;
	sub_823339B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,10548(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 10548);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// bl 0x82424fe0
	ctx.lr = 0x8267F174;
	sub_82424FE0(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8267f188
	if (!ctx.cr6.eq) goto loc_8267F188;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_8267F188:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82a4cc80
	ctx.lr = 0x8267F190;
	sub_82A4CC80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8267f1c4
	if (ctx.cr0.eq) goto loc_8267F1C4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823339b8
	ctx.lr = 0x8267F1A4;
	sub_823339B8(ctx, base);
	// lwz r11,10548(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 10548);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,-1
	ctx.r7.s64 = -1;
	// bl 0x8241ed88
	ctx.lr = 0x8267F1C0;
	sub_8241ED88(ctx, base);
	// stw r3,1544(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1544, ctx.r3.u32);
loc_8267F1C4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x8267F1CC;
	sub_82333960(ctx, base);
loc_8267F1CC:
	// lwz r11,1596(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1596);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8267f0e0
	if (ctx.cr6.lt) goto loc_8267F0E0;
loc_8267F1E0:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267F1E8"))) PPC_WEAK_FUNC(sub_8267F1E8);
PPC_FUNC_IMPL(__imp__sub_8267F1E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x8267F1F0;
	__savegprlr_25(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x829bcd88
	ctx.lr = 0x8267F200;
	sub_829BCD88(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,1472(r25)
	PPC_STORE_U32(ctx.r25.u32 + 1472, ctx.r11.u32);
	// lwz r6,152(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// beq cr6,0x8267f21c
	if (ctx.cr6.eq) goto loc_8267F21C;
	// bl 0x824230d8
	ctx.lr = 0x8267F21C;
	sub_824230D8(ctx, base);
loc_8267F21C:
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// lwz r7,144(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r5,148(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,10548(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10548);
	// bl 0x8241e198
	ctx.lr = 0x8267F238;
	sub_8241E198(ctx, base);
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x8267f264
	if (!ctx.cr6.eq) goto loc_8267F264;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,10548(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10548);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,136(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// bl 0x82424530
	ctx.lr = 0x8267F25C;
	sub_82424530(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x8267f3cc
	goto loc_8267F3CC;
loc_8267F264:
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r26,r11,7896
	ctx.r26.s64 = ctx.r11.s64 + 7896;
	// bne cr6,0x8267f280
	if (!ctx.cr6.eq) goto loc_8267F280;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_8267F280:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82409058
	ctx.lr = 0x8267F288;
	sub_82409058(ctx, base);
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// addi r10,r1,180
	ctx.r10.s64 = ctx.r1.s64 + 180;
	// lwz r28,132(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8267f2ac
	if (ctx.cr6.eq) goto loc_8267F2AC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267f2ac
	if (ctx.cr6.eq) goto loc_8267F2AC;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82332db8
	ctx.lr = 0x8267F2AC;
	sub_82332DB8(ctx, base);
loc_8267F2AC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,10548(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10548);
	// bl 0x8241e690
	ctx.lr = 0x8267F2B8;
	sub_8241E690(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x8267f344
	if (ctx.cr0.eq) goto loc_8267F344;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r31,140(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x823339b8
	ctx.lr = 0x8267F2D0;
	sub_823339B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,10548(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10548);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// bl 0x82424fe0
	ctx.lr = 0x8267F2E8;
	sub_82424FE0(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8267f2fc
	if (!ctx.cr6.eq) goto loc_8267F2FC;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_8267F2FC:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82a4cc80
	ctx.lr = 0x8267F304;
	sub_82A4CC80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8267f338
	if (ctx.cr0.eq) goto loc_8267F338;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x823339b8
	ctx.lr = 0x8267F318;
	sub_823339B8(ctx, base);
	// lwz r11,10548(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10548);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,-1
	ctx.r7.s64 = -1;
	// bl 0x8241eb30
	ctx.lr = 0x8267F334;
	sub_8241EB30(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_8267F338:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x8267F340;
	sub_82333960(ctx, base);
	// b 0x8267f3cc
	goto loc_8267F3CC;
loc_8267F344:
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82333900
	ctx.lr = 0x8267F34C;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8267f378
	if (ctx.cr0.eq) goto loc_8267F378;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r27,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r27.u32);
	// stw r27,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r27.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r27,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r27.u32);
	// stw r27,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r27.u32);
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r27.u32);
	// b 0x8267f37c
	goto loc_8267F37C;
loc_8267F378:
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_8267F37C:
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// bl 0x8233a258
	ctx.lr = 0x8267F390;
	sub_8233A258(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82400b48
	ctx.lr = 0x8267F39C;
	sub_82400B48(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x8267F3A4;
	sub_82333960(ctx, base);
	// addi r3,r25,1580
	ctx.r3.s64 = ctx.r25.s64 + 1580;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82332d50
	ctx.lr = 0x8267F3B8;
	sub_82332D50(ctx, base);
	// lwz r10,1592(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1592);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8267f3cc
	if (ctx.cr0.eq) goto loc_8267F3CC;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
loc_8267F3CC:
	// stw r27,1544(r25)
	PPC_STORE_U32(ctx.r25.u32 + 1544, ctx.r27.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82333960
	ctx.lr = 0x8267F3D8;
	sub_82333960(ctx, base);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267F3E0"))) PPC_WEAK_FUNC(sub_8267F3E0);
PPC_FUNC_IMPL(__imp__sub_8267F3E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f4
	ctx.lr = 0x8267F3E8;
	__savegprlr_23(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,1532(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1532);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8267f688
	if (!ctx.cr6.eq) goto loc_8267F688;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8267f67c
	if (ctx.cr6.eq) goto loc_8267F67C;
	// lis r24,-31949
	ctx.r24.s64 = -2093809664;
	// lwz r4,1576(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1576);
	// lwz r11,13024(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8267F418;
	sub_829B9720(ctx, base);
	// bl 0x82411b98
	ctx.lr = 0x8267F41C;
	sub_82411B98(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x8267f67c
	if (ctx.cr0.eq) goto loc_8267F67C;
	// li r28,1
	ctx.r28.s64 = 1;
	// lis r11,-32152
	ctx.r11.s64 = -2107113472;
	// stw r28,1532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1532, ctx.r28.u32);
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// addi r4,r11,-4160
	ctx.r4.s64 = ctx.r11.s64 + -4160;
	// stw r28,1536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1536, ctx.r28.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267F450;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32152
	ctx.r11.s64 = -2107113472;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-4048
	ctx.r4.s64 = ctx.r11.s64 + -4048;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267F46C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32152
	ctx.r10.s64 = -2107113472;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r10,r10,-4136
	ctx.r10.s64 = ctx.r10.s64 + -4136;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f1.f64 = double(temp.f32);
	// ld r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// bl 0x8267fe40
	ctx.lr = 0x8267F49C;
	sub_8267FE40(ctx, base);
	// lwz r11,1532(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1532);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8267f688
	if (ctx.cr6.eq) goto loc_8267F688;
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8267f688
	if (!ctx.cr6.eq) goto loc_8267F688;
	// lwz r11,1544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1544);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r25,12(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm. r10,r10,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8267f4f8
	if (!ctx.cr0.eq) goto loc_8267F4F8;
	// lbz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 36);
	// lis r26,14061
	ctx.r26.s64 = 921501696;
	// ori r26,r26,55236
	ctx.r26.u64 = ctx.r26.u64 | 55236;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x8267f4e4
	if (!ctx.cr6.eq) goto loc_8267F4E4;
	// lis r26,11567
	ctx.r26.s64 = 758054912;
	// ori r26,r26,22202
	ctx.r26.u64 = ctx.r26.u64 | 22202;
loc_8267F4E4:
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x8267f500
	if (!ctx.cr6.eq) goto loc_8267F500;
	// lis r26,198
	ctx.r26.s64 = 12976128;
	// ori r26,r26,36728
	ctx.r26.u64 = ctx.r26.u64 | 36728;
	// b 0x8267f500
	goto loc_8267F500;
loc_8267F4F8:
	// lis r26,10704
	ctx.r26.s64 = 701497344;
	// ori r26,r26,28079
	ctx.r26.u64 = ctx.r26.u64 | 28079;
loc_8267F500:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 548);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267F514;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1444(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1444);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267F524;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,1544(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1544);
	// bl 0x824ae898
	ctx.lr = 0x8267F52C;
	sub_824AE898(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lwz r10,660(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 660);
	// addi r30,r1,128
	ctx.r30.s64 = ctx.r1.s64 + 128;
	// addi r3,r11,836
	ctx.r3.s64 = ctx.r11.s64 + 836;
	// lwz r9,664(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 664);
	// addi r23,r31,620
	ctx.r23.s64 = ctx.r31.s64 + 620;
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// lwz r11,656(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// bl 0x82816528
	ctx.lr = 0x8267F558;
	sub_82816528(ctx, base);
	// lwz r11,13024(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13024);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x828250b0
	ctx.lr = 0x8267F590;
	sub_828250B0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8267f5bc
	if (ctx.cr0.eq) goto loc_8267F5BC;
	// bl 0x82442fa8
	ctx.lr = 0x8267F59C;
	sub_82442FA8(ctx, base);
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
	ctx.lr = 0x8267F5B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8267f5c0
	if (!ctx.cr0.eq) goto loc_8267F5C0;
loc_8267F5BC:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_8267F5C0:
	// lwz r11,1412(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1412);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r9,628(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 628);
	// lwz r10,1132(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1132);
	// ld r5,620(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 620);
	// rldicr r6,r9,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8267F5EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r9,r31,1556
	ctx.r9.s64 = ctx.r31.s64 + 1556;
	// lwz r8,1560(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1560);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lwz r7,1564(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1564);
	// lwz r6,1568(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1568);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// li r3,28
	ctx.r3.s64 = 28;
	// lwz r9,1556(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1556);
	// stw r25,3232(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3232, ctx.r25.u32);
	// stw r26,3236(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3236, ctx.r26.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// stw r6,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r6.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,3216(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3216, ctx.r9.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r9,3224(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3224, ctx.r9.u32);
	// stw r11,3220(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3220, ctx.r11.u32);
	// stw r10,3228(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3228, ctx.r10.u32);
	// bl 0x82833108
	ctx.lr = 0x8267F648;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8267f668
	if (ctx.cr0.eq) goto loc_8267F668;
	// lwz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// bl 0x824f7c50
	ctx.lr = 0x8267F660;
	sub_824F7C50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8267f66c
	goto loc_8267F66C;
loc_8267F668:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_8267F66C:
	// lwz r11,13024(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x8267F678;
	sub_82833A30(ctx, base);
	// b 0x8267f688
	goto loc_8267F688;
loc_8267F67C:
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r29,1576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1576, ctx.r29.u32);
	// stw r29,1540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1540, ctx.r29.u32);
loc_8267F688:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82a4ea44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267F690"))) PPC_WEAK_FUNC(sub_8267F690);
PPC_FUNC_IMPL(__imp__sub_8267F690) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x826c41c0
	ctx.lr = 0x8267F6A8;
	sub_826C41C0(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r4,r31,2820
	ctx.r4.s64 = ctx.r31.s64 + 2820;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,2368
	ctx.r5.s64 = ctx.r11.s64 + 2368;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x8267ff38
	ctx.lr = 0x8267F6C4;
	sub_8267FF38(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r4,r31,2836
	ctx.r4.s64 = ctx.r31.s64 + 2836;
	// addi r5,r11,2624
	ctx.r5.s64 = ctx.r11.s64 + 2624;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824115b8
	ctx.lr = 0x8267F6E0;
	sub_824115B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267F6F8"))) PPC_WEAK_FUNC(sub_8267F6F8);
PPC_FUNC_IMPL(__imp__sub_8267F6F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8267F700;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x826c4438
	ctx.lr = 0x8267F70C;
	sub_826C4438(ctx, base);
	// addi r11,r31,3216
	ctx.r11.s64 = ctx.r31.s64 + 3216;
	// addi r29,r31,424
	ctx.r29.s64 = ctx.r31.s64 + 424;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82838fd0
	ctx.lr = 0x8267F728;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r31,3232
	ctx.r10.s64 = ctx.r31.s64 + 3232;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r31,r30,4
	ctx.r31.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82838fd0
	ctx.lr = 0x8267F748;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267F760"))) PPC_WEAK_FUNC(sub_8267F760);
PPC_FUNC_IMPL(__imp__sub_8267F760) {
	PPC_FUNC_PROLOGUE();
	// b 0x826c46b0
	sub_826C46B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267F768"))) PPC_WEAK_FUNC(sub_8267F768);
PPC_FUNC_IMPL(__imp__sub_8267F768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8267F770;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,2412
	ctx.r3.s64 = ctx.r11.s64 + 2412;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82816528
	ctx.lr = 0x8267F788;
	sub_82816528(ctx, base);
	// cmplw cr6,r28,r3
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8267f7e4
	if (!ctx.cr6.eq) goto loc_8267F7E4;
	// lwz r30,1428(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1428);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8267f828
	if (ctx.cr6.eq) goto loc_8267F828;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r29,r31,3216
	ctx.r29.s64 = ctx.r31.s64 + 3216;
	// addi r3,r11,2568
	ctx.r3.s64 = ctx.r11.s64 + 2568;
	// bl 0x82816528
	ctx.lr = 0x8267F7AC;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x829653c8
	ctx.lr = 0x8267F7C0;
	sub_829653C8(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r11,5980
	ctx.r3.s64 = ctx.r11.s64 + 5980;
	// bl 0x82816528
	ctx.lr = 0x8267F7CC;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x829653c8
	ctx.lr = 0x8267F7E0;
	sub_829653C8(ctx, base);
	// b 0x8267f828
	goto loc_8267F828;
loc_8267F7E4:
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r3,r11,2648
	ctx.r3.s64 = ctx.r11.s64 + 2648;
	// bl 0x82816528
	ctx.lr = 0x8267F7F0;
	sub_82816528(ctx, base);
	// cmplw cr6,r28,r3
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8267f828
	if (!ctx.cr6.eq) goto loc_8267F828;
	// lwz r30,1428(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1428);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8267f828
	if (ctx.cr6.eq) goto loc_8267F828;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lwz r29,3232(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3232);
	// addi r3,r11,2436
	ctx.r3.s64 = ctx.r11.s64 + 2436;
	// bl 0x82816528
	ctx.lr = 0x8267F814;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82965800
	ctx.lr = 0x8267F828;
	sub_82965800(ctx, base);
loc_8267F828:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c63e8
	ctx.lr = 0x8267F834;
	sub_829C63E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267F840"))) PPC_WEAK_FUNC(sub_8267F840);
PPC_FUNC_IMPL(__imp__sub_8267F840) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,-12104(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12104);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16360(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16360);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stfs f13,0(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267F860"))) PPC_WEAK_FUNC(sub_8267F860);
PPC_FUNC_IMPL(__imp__sub_8267F860) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8267F868;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,1428(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1428);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8267f8c0
	if (ctx.cr6.eq) goto loc_8267F8C0;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r29,r31,3216
	ctx.r29.s64 = ctx.r31.s64 + 3216;
	// addi r3,r11,2568
	ctx.r3.s64 = ctx.r11.s64 + 2568;
	// bl 0x82816528
	ctx.lr = 0x8267F88C;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x829653c8
	ctx.lr = 0x8267F8A0;
	sub_829653C8(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r11,5980
	ctx.r3.s64 = ctx.r11.s64 + 5980;
	// bl 0x82816528
	ctx.lr = 0x8267F8AC;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x829653c8
	ctx.lr = 0x8267F8C0;
	sub_829653C8(ctx, base);
loc_8267F8C0:
	// lwz r30,1428(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1428);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8267f8f0
	if (ctx.cr6.eq) goto loc_8267F8F0;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lwz r29,3232(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3232);
	// addi r3,r11,2436
	ctx.r3.s64 = ctx.r11.s64 + 2436;
	// bl 0x82816528
	ctx.lr = 0x8267F8DC;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82965800
	ctx.lr = 0x8267F8F0;
	sub_82965800(ctx, base);
loc_8267F8F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c2520
	ctx.lr = 0x8267F8F8;
	sub_829C2520(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8267f90c
	if (ctx.cr0.eq) goto loc_8267F90C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f0,-11456(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11456);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,248(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 248, temp.u32);
loc_8267F90C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267F918"))) PPC_WEAK_FUNC(sub_8267F918);
PPC_FUNC_IMPL(__imp__sub_8267F918) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f0
	ctx.lr = 0x8267F920;
	__savegprlr_22(ctx, base);
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x82a61744
	ctx.lr = 0x8267F928;
	__savefpr_27(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f1.f64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// lwz r3,1644(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1644);
	// bl 0x829c35d8
	ctx.lr = 0x8267F948;
	sub_829C35D8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r3,620
	ctx.r11.s64 = ctx.r3.s64 + 620;
	// bne 0x8267f958
	if (!ctx.cr0.eq) goto loc_8267F958;
	// addi r11,r31,1632
	ctx.r11.s64 = ctx.r31.s64 + 1632;
loc_8267F958:
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
	// bge cr6,0x8267fb58
	if (!ctx.cr6.lt) goto loc_8267FB58;
	// lis r26,-31949
	ctx.r26.s64 = -2093809664;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8267fb00
	if (ctx.cr6.eq) goto loc_8267FB00;
	// bl 0x82333a20
	ctx.lr = 0x8267FA24;
	sub_82333A20(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x8267fb00
	if (ctx.cr0.eq) goto loc_8267FB00;
	// lwz r3,1608(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1608);
	// bl 0x82411b98
	ctx.lr = 0x8267FA34;
	sub_82411B98(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,1144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1144);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267FA4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8267fa78
	if (ctx.cr0.eq) goto loc_8267FA78;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,15834
	ctx.r4.s64 = ctx.r11.s64 + 15834;
	// bl 0x8233a258
	ctx.lr = 0x8267FA64;
	sub_8233A258(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,3236(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3236);
	// bl 0x829c3740
	ctx.lr = 0x8267FA74;
	sub_829C3740(ctx, base);
	// b 0x8267fb00
	goto loc_8267FB00;
loc_8267FA78:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lwz r11,788(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8267fa94
	if (ctx.cr6.eq) goto loc_8267FA94;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8267fb00
	if (!ctx.cr6.eq) goto loc_8267FB00;
loc_8267FA94:
	// lwz r11,956(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 956);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8267fb00
	if (!ctx.cr6.eq) goto loc_8267FB00;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8267fb00
	if (ctx.cr6.eq) goto loc_8267FB00;
	// lwz r11,3236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3236);
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-9324
	ctx.r10.s64 = ctx.r10.s64 + -9324;
	// stw r9,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// lis r9,-32232
	ctx.r9.s64 = -2112356352;
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// addi r22,r1,136
	ctx.r22.s64 = ctx.r1.s64 + 136;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// addi r3,r9,-11992
	ctx.r3.s64 = ctx.r9.s64 + -11992;
	// bl 0x82816528
	ctx.lr = 0x8267FAD4;
	sub_82816528(ctx, base);
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// bl 0x8282c710
	ctx.lr = 0x8267FAF4;
	sub_8282C710(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r11,r11,16980
	ctx.r11.s64 = ctx.r11.s64 + 16980;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
loc_8267FB00:
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// lwz r11,788(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8267fb20
	if (ctx.cr6.eq) goto loc_8267FB20;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8267fb20
	if (ctx.cr6.eq) goto loc_8267FB20;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8267fb58
	if (!ctx.cr6.eq) goto loc_8267FB58;
loc_8267FB20:
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82833108
	ctx.lr = 0x8267FB28;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8267fb48
	if (ctx.cr0.eq) goto loc_8267FB48;
	// lwz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// bl 0x824f7c50
	ctx.lr = 0x8267FB40;
	sub_824F7C50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8267fb4c
	goto loc_8267FB4C;
loc_8267FB48:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8267FB4C:
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x8267FB58;
	sub_82833A30(ctx, base);
loc_8267FB58:
	// lwz r11,1956(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1956);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8267fb90
	if (!ctx.cr6.eq) goto loc_8267FB90;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lfs f0,-12104(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12104);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// blt cr6,0x8267fb90
	if (ctx.cr6.lt) goto loc_8267FB90;
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
	// b 0x8267fc08
	goto loc_8267FC08;
loc_8267FB90:
	// lwz r9,1944(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1944);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r8,1948(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1948);
	// lwz r11,1952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1952);
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// stw r8,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r8.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lfs f9,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fsubs f12,f10,f11
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stw r10,1956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1956, ctx.r10.u32);
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// fsqrts f28,f0
	ctx.f28.f64 = double(float(sqrt(ctx.f0.f64)));
loc_8267FC08:
	// lfs f0,1504(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1504);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f13,0(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// fmadds f13,f0,f27,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f27.f64 + ctx.f13.f64));
	// stfs f13,0(r23)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r23.u32 + 0, temp.u32);
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
	// lfs f12,3192(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3192);
	ctx.f12.f64 = double(temp.f32);
	// fabs f30,f0
	ctx.f30.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fmadds f0,f13,f30,f12
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f30.f64 + ctx.f12.f64));
	// fmuls f1,f0,f29
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// bl 0x82a4e038
	ctx.lr = 0x8267FC48;
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
	ctx.lr = 0x8267FC60;
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
	ctx.lr = 0x8267FC8C;
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
	ctx.lr = 0x8267FCA4;
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
	// lfs f0,0(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 0);
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
	// bge cr6,0x8267fcf8
	if (!ctx.cr6.lt) goto loc_8267FCF8;
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// beq cr6,0x8267fcf8
	if (ctx.cr6.eq) goto loc_8267FCF8;
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
loc_8267FCF8:
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
	// ble cr6,0x8267fd5c
	if (!ctx.cr6.gt) goto loc_8267FD5C;
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// beq cr6,0x8267fd5c
	if (ctx.cr6.eq) goto loc_8267FD5C;
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
loc_8267FD5C:
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// lwz r11,13476(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13476);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8267fd80
	if (ctx.cr6.eq) goto loc_8267FD80;
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
	ctx.lr = 0x8267FD80;
	sub_82A4E038(ctx, base);
loc_8267FD80:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r6,r1,152
	ctx.r6.s64 = ctx.r1.s64 + 152;
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
	// stw r10,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r10.u32);
	// stw r9,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r9.u32);
	// stw r8,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r8.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267FDBC;
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
	// fadds f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
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
	// lfs f8,8(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f10,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// fadds f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// lfs f10,0(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 4);
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
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// stw r10,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r10.u32);
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r9,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r9.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x82a61790
	ctx.lr = 0x8267FE3C;
	__restfpr_27(ctx, base);
	// b 0x82a4ea40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267FE40"))) PPC_WEAK_FUNC(sub_8267FE40);
PPC_FUNC_IMPL(__imp__sub_8267FE40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8267FE48;
	__savegprlr_28(ctx, base);
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
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
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r4,184(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// bl 0x829c80b8
	ctx.lr = 0x8267FE70;
	sub_829C80B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8267ff08
	if (!ctx.cr0.eq) goto loc_8267FF08;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f30,f31
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// bne cr6,0x8267fe90
	if (!ctx.cr6.eq) goto loc_8267FE90;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f30,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f30.f64 = double(temp.f32);
loc_8267FE90:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x824379b8
	ctx.lr = 0x8267FE98;
	sub_824379B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267FEAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82333900
	ctx.lr = 0x8267FEB8;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x8267fef4
	if (ctx.cr0.eq) goto loc_8267FEF4;
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
	// b 0x8267fef8
	goto loc_8267FEF8;
loc_8267FEF4:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_8267FEF8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82410060
	ctx.lr = 0x8267FF04;
	sub_82410060(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8267FF08:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267FF24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267FF38"))) PPC_WEAK_FUNC(sub_8267FF38);
PPC_FUNC_IMPL(__imp__sub_8267FF38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8267FF40;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r28,84(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// bl 0x82333900
	ctx.lr = 0x8267FF58;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8267ffc8
	if (ctx.cr0.eq) goto loc_8267FFC8;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r3,r11,2368
	ctx.r3.s64 = ctx.r11.s64 + 2368;
	// bl 0x828165a8
	ctx.lr = 0x8267FF6C;
	sub_828165A8(ctx, base);
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r11,5096
	ctx.r8.s64 = ctx.r11.s64 + 5096;
	// lwz r11,24500(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24500);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// clrlwi. r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8267ff9c
	if (!ctx.cr0.eq) goto loc_8267FF9C;
	// lis r8,-31944
	ctx.r8.s64 = -2093481984;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,24500(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24500, ctx.r11.u32);
	// stb r9,24496(r8)
	PPC_STORE_U8(ctx.r8.u32 + 24496, ctx.r9.u8);
loc_8267FF9C:
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// addi r10,r10,5096
	ctx.r10.s64 = ctx.r10.s64 + 5096;
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// b 0x8267ffcc
	goto loc_8267FFCC;
loc_8267FFC8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8267FFCC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x82410060
	ctx.lr = 0x8267FFE4;
	sub_82410060(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r30,28
	ctx.r3.s64 = ctx.r30.s64 + 28;
	// bl 0x828d0cb0
	ctx.lr = 0x8267FFF4;
	sub_828D0CB0(ctx, base);
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// srawi r10,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// stw r11,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r11.u32);
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf. r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82680020
	if (ctx.cr0.eq) goto loc_82680020;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r11.u32);
loc_82680020:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82680028"))) PPC_WEAK_FUNC(sub_82680028);
PPC_FUNC_IMPL(__imp__sub_82680028) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// b 0x82651a20
	sub_82651A20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82680038"))) PPC_WEAK_FUNC(sub_82680038);
PPC_FUNC_IMPL(__imp__sub_82680038) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8268009c
	if (ctx.cr6.eq) goto loc_8268009C;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8268009c
	if (ctx.cr6.eq) goto loc_8268009C;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82680094
	if (!ctx.cr6.eq) goto loc_82680094;
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82680094
	if (!ctx.cr6.eq) goto loc_82680094;
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82680094
	if (!ctx.cr6.eq) goto loc_82680094;
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82680094
	if (!ctx.cr6.eq) goto loc_82680094;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82680094:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8268009C:
	// subf r11,r11,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826800B0"))) PPC_WEAK_FUNC(sub_826800B0);
PPC_FUNC_IMPL(__imp__sub_826800B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826800D8"))) PPC_WEAK_FUNC(sub_826800D8);
PPC_FUNC_IMPL(__imp__sub_826800D8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8267e4c8
	sub_8267E4C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826800E0"))) PPC_WEAK_FUNC(sub_826800E0);
PPC_FUNC_IMPL(__imp__sub_826800E0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x8267e4c8
	sub_8267E4C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826800E8"))) PPC_WEAK_FUNC(sub_826800E8);
PPC_FUNC_IMPL(__imp__sub_826800E8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8267e698
	sub_8267E698(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826800F0"))) PPC_WEAK_FUNC(sub_826800F0);
PPC_FUNC_IMPL(__imp__sub_826800F0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8267e300
	sub_8267E300(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826800F8"))) PPC_WEAK_FUNC(sub_826800F8);
PPC_FUNC_IMPL(__imp__sub_826800F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82680148
	ctx.lr = 0x82680118;
	sub_82680148(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8268012c
	if (ctx.cr6.eq) goto loc_8268012C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333b08
	ctx.lr = 0x8268012C;
	sub_82333B08(ctx, base);
loc_8268012C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82680148"))) PPC_WEAK_FUNC(sub_82680148);
PPC_FUNC_IMPL(__imp__sub_82680148) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,24492
	ctx.r31.s64 = ctx.r11.s64 + 24492;
	// lwz r11,-19412(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19412);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82680190
	if (!ctx.cr0.eq) goto loc_82680190;
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,5248
	ctx.r9.s64 = ctx.r9.s64 + 5248;
	// stw r11,-19412(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19412, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,27352
	ctx.r3.s64 = ctx.r11.s64 + 27352;
	// bl 0x82a4c758
	ctx.lr = 0x82680190;
	sub_82A4C758(ctx, base);
loc_82680190:
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

__attribute__((alias("__imp__sub_826801A8"))) PPC_WEAK_FUNC(sub_826801A8);
PPC_FUNC_IMPL(__imp__sub_826801A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,24488(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24488);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826801e8
	if (!ctx.cr0.eq) goto loc_826801E8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// stw r11,24488(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24488, ctx.r11.u32);
	// addi r3,r9,5120
	ctx.r3.s64 = ctx.r9.s64 + 5120;
	// bl 0x82816528
	ctx.lr = 0x826801E0;
	sub_82816528(ctx, base);
	// stw r3,24484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24484, ctx.r3.u32);
	// b 0x826801ec
	goto loc_826801EC;
loc_826801E8:
	// lwz r3,24484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24484);
loc_826801EC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82680200"))) PPC_WEAK_FUNC(sub_82680200);
PPC_FUNC_IMPL(__imp__sub_82680200) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82680148
	ctx.lr = 0x82680220;
	sub_82680148(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82680234;
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

__attribute__((alias("__imp__sub_82680250"))) PPC_WEAK_FUNC(sub_82680250);
PPC_FUNC_IMPL(__imp__sub_82680250) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82680288
	if (ctx.cr6.eq) goto loc_82680288;
	// bl 0x82680148
	ctx.lr = 0x82680278;
	sub_82680148(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82680288
	if (!ctx.cr6.eq) goto loc_82680288;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82680294
	goto loc_82680294;
loc_82680288:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333c70
	ctx.lr = 0x82680294;
	sub_82333C70(ctx, base);
loc_82680294:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826802B0"))) PPC_WEAK_FUNC(sub_826802B0);
PPC_FUNC_IMPL(__imp__sub_826802B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82680148
	sub_82680148(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826802B8"))) PPC_WEAK_FUNC(sub_826802B8);
PPC_FUNC_IMPL(__imp__sub_826802B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x826802D4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82680334
	if (ctx.cr0.eq) goto loc_82680334;
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
	// addi r9,r9,5168
	ctx.r9.s64 = ctx.r9.s64 + 5168;
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
	// b 0x82680338
	goto loc_82680338;
loc_82680334:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82680338:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82680350"))) PPC_WEAK_FUNC(sub_82680350);
PPC_FUNC_IMPL(__imp__sub_82680350) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r3,r11,5120
	ctx.r3.s64 = ctx.r11.s64 + 5120;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82680360"))) PPC_WEAK_FUNC(sub_82680360);
PPC_FUNC_IMPL(__imp__sub_82680360) {
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
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lbz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 36);
	// lfs f13,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,908(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// blt cr6,0x8268044c
	if (ctx.cr6.lt) goto loc_8268044C;
	// beq cr6,0x82680434
	if (ctx.cr6.eq) goto loc_82680434;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x8268040c
	if (ctx.cr6.lt) goto loc_8268040C;
	// beq cr6,0x826803ec
	if (ctx.cr6.eq) goto loc_826803EC;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// blt cr6,0x826803d8
	if (ctx.cr6.lt) goto loc_826803D8;
	// bne cr6,0x82680460
	if (!ctx.cr6.eq) goto loc_82680460;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f13,20072(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20072);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,20068(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20068);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// b 0x8268045c
	goto loc_8268045C;
loc_826803D8:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f0,17140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17140);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8268045c
	goto loc_8268045C;
loc_826803EC:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f0,19220(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19220);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20064(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20064);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// b 0x82680460
	goto loc_82680460;
loc_8268040C:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lfs f0,20060(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20060);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20056(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20056);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20052(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20052);
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
	// b 0x82680460
	goto loc_82680460;
loc_82680434:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f0,-27820(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27820);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// b 0x82680460
	goto loc_82680460;
loc_8268044C:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,20048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_8268045C:
	// stfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_82680460:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r31,16
	ctx.r10.s64 = ctx.r31.s64 + 16;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// stw r8,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lwz r11,384(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8268049c
	if (ctx.cr6.eq) goto loc_8268049C;
	// lwz r5,380(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// b 0x826804a4
	goto loc_826804A4;
loc_8268049C:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r5,r11,7896
	ctx.r5.s64 = ctx.r11.s64 + 7896;
loc_826804A4:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// addi r6,r11,-29712
	ctx.r6.s64 = ctx.r11.s64 + -29712;
	// addi r4,r10,5268
	ctx.r4.s64 = ctx.r10.s64 + 5268;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x828db5e0
	ctx.lr = 0x826804C4;
	sub_828DB5E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,392
	ctx.r3.s64 = ctx.r31.s64 + 392;
	// bl 0x82400b48
	ctx.lr = 0x826804D0;
	sub_82400B48(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x826804D8;
	sub_82333960(ctx, base);
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

__attribute__((alias("__imp__sub_826804F0"))) PPC_WEAK_FUNC(sub_826804F0);
PPC_FUNC_IMPL(__imp__sub_826804F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x826804F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r10,r10,2,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268052C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82680548
	if (ctx.cr6.eq) goto loc_82680548;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwimi r11,r10,30,1,1
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 30) & 0x40000000) | (ctx.r11.u64 & 0xFFFFFFFFBFFFFFFF);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_82680548:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r10,r10,3,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82680570;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8268058c
	if (ctx.cr6.eq) goto loc_8268058C;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwimi r11,r10,29,2,2
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 29) & 0x20000000) | (ctx.r11.u64 & 0xFFFFFFFFDFFFFFFF);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_8268058C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r29,r31,52
	ctx.r29.s64 = ctx.r31.s64 + 52;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826805AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x826805c0
	if (!ctx.cr6.gt) goto loc_826805C0;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_826805C0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r10,r10,4,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0x1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826805E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwimi r11,r10,28,3,3
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 28) & 0x10000000) | (ctx.r11.u64 & 0xFFFFFFFFEFFFFFFF);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82680600"))) PPC_WEAK_FUNC(sub_82680600);
PPC_FUNC_IMPL(__imp__sub_82680600) {
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
	// addi r4,r4,168
	ctx.r4.s64 = ctx.r4.s64 + 168;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// bne cr6,0x8268062c
	if (!ctx.cr6.eq) goto loc_8268062C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8268062C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82680648
	if (!ctx.cr6.eq) goto loc_82680648;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r4,r11,5292
	ctx.r4.s64 = ctx.r11.s64 + 5292;
	// bl 0x82816c30
	ctx.lr = 0x82680644;
	sub_82816C30(ctx, base);
	// b 0x8268064c
	goto loc_8268064C;
loc_82680648:
	// bl 0x823339b8
	ctx.lr = 0x8268064C;
	sub_823339B8(ctx, base);
loc_8268064C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82680668"))) PPC_WEAK_FUNC(sub_82680668);
PPC_FUNC_IMPL(__imp__sub_82680668) {
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
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r5,44(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// beq cr6,0x82680694
	if (ctx.cr6.eq) goto loc_82680694;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r4,r11,5308
	ctx.r4.s64 = ctx.r11.s64 + 5308;
	// b 0x8268069c
	goto loc_8268069C;
loc_82680694:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r4,r11,20576
	ctx.r4.s64 = ctx.r11.s64 + 20576;
loc_8268069C:
	// bl 0x82816c30
	ctx.lr = 0x826806A0;
	sub_82816C30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_826806B8"))) PPC_WEAK_FUNC(sub_826806B8);
PPC_FUNC_IMPL(__imp__sub_826806B8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r11,21904
	ctx.r4.s64 = ctx.r11.s64 + 21904;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8233a258
	ctx.lr = 0x826806E0;
	sub_8233A258(ctx, base);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82680710
	if (ctx.cr0.eq) goto loc_82680710;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,5332
	ctx.r4.s64 = ctx.r11.s64 + 5332;
	// bl 0x82816c30
	ctx.lr = 0x826806FC;
	sub_82816C30(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82400b48
	ctx.lr = 0x82680708;
	sub_82400B48(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82333960
	ctx.lr = 0x82680710;
	sub_82333960(ctx, base);
loc_82680710:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82680730"))) PPC_WEAK_FUNC(sub_82680730);
PPC_FUNC_IMPL(__imp__sub_82680730) {
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
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82680758
	if (ctx.cr6.eq) goto loc_82680758;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r4,r11,5344
	ctx.r4.s64 = ctx.r11.s64 + 5344;
	// b 0x82680760
	goto loc_82680760;
loc_82680758:
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r4,r11,5372
	ctx.r4.s64 = ctx.r11.s64 + 5372;
loc_82680760:
	// bl 0x82816c30
	ctx.lr = 0x82680764;
	sub_82816C30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82680780"))) PPC_WEAK_FUNC(sub_82680780);
PPC_FUNC_IMPL(__imp__sub_82680780) {
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
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x826807a8
	if (ctx.cr6.eq) goto loc_826807A8;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r4,r11,5388
	ctx.r4.s64 = ctx.r11.s64 + 5388;
	// b 0x826807b0
	goto loc_826807B0;
loc_826807A8:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r4,r11,-21936
	ctx.r4.s64 = ctx.r11.s64 + -21936;
loc_826807B0:
	// bl 0x82816c30
	ctx.lr = 0x826807B4;
	sub_82816C30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_826807D0"))) PPC_WEAK_FUNC(sub_826807D0);
PPC_FUNC_IMPL(__imp__sub_826807D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwa r11,64(r3)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r3.u32 + 64));
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfs f0,908(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// lwa r9,68(r3)
	ctx.r9.s64 = int32_t(PPC_LOAD_U32(ctx.r3.u32 + 68));
	// lwa r8,60(r3)
	ctx.r8.s64 = int32_t(PPC_LOAD_U32(ctx.r3.u32 + 60));
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f11,-16(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fdivs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 / ctx.f13.f64));
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r3,-12(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82680838"))) PPC_WEAK_FUNC(sub_82680838);
PPC_FUNC_IMPL(__imp__sub_82680838) {
	PPC_FUNC_PROLOGUE();
	// lwa r11,64(r3)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r3.u32 + 64));
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lwa r10,72(r3)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r3.u32 + 72));
	// lwa r9,60(r3)
	ctx.r9.s64 = int32_t(PPC_LOAD_U32(ctx.r3.u32 + 60));
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fdivs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r3,-12(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82680890"))) PPC_WEAK_FUNC(sub_82680890);
PPC_FUNC_IMPL(__imp__sub_82680890) {
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
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r5,60(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// beq cr6,0x826808bc
	if (ctx.cr6.eq) goto loc_826808BC;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r4,r11,5416
	ctx.r4.s64 = ctx.r11.s64 + 5416;
	// b 0x826808c4
	goto loc_826808C4;
loc_826808BC:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r4,r11,20576
	ctx.r4.s64 = ctx.r11.s64 + 20576;
loc_826808C4:
	// bl 0x82816c30
	ctx.lr = 0x826808C8;
	sub_82816C30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_826808E0"))) PPC_WEAK_FUNC(sub_826808E0);
PPC_FUNC_IMPL(__imp__sub_826808E0) {
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
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r5,64(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// beq cr6,0x8268090c
	if (ctx.cr6.eq) goto loc_8268090C;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r4,r11,5416
	ctx.r4.s64 = ctx.r11.s64 + 5416;
	// b 0x82680914
	goto loc_82680914;
loc_8268090C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r4,r11,20576
	ctx.r4.s64 = ctx.r11.s64 + 20576;
loc_82680914:
	// bl 0x82816c30
	ctx.lr = 0x82680918;
	sub_82816C30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82680930"))) PPC_WEAK_FUNC(sub_82680930);
PPC_FUNC_IMPL(__imp__sub_82680930) {
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
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// lwz r5,76(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,20576
	ctx.r4.s64 = ctx.r11.s64 + 20576;
	// bl 0x82816c30
	ctx.lr = 0x82680954;
	sub_82816C30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82680970"))) PPC_WEAK_FUNC(sub_82680970);
PPC_FUNC_IMPL(__imp__sub_82680970) {
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
	// lwz r6,52(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x826809c0
	if (!ctx.cr6.gt) goto loc_826809C0;
	// lwz r11,408(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 408);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826809a4
	if (ctx.cr6.eq) goto loc_826809A4;
	// lwz r5,404(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 404);
	// b 0x826809ac
	goto loc_826809AC;
loc_826809A4:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r5,r11,7896
	ctx.r5.s64 = ctx.r11.s64 + 7896;
loc_826809AC:
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,5448
	ctx.r4.s64 = ctx.r11.s64 + 5448;
	// bl 0x82816c30
	ctx.lr = 0x826809BC;
	sub_82816C30(ctx, base);
	// b 0x826809d0
	goto loc_826809D0;
loc_826809C0:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-25088
	ctx.r4.s64 = ctx.r11.s64 + -25088;
	// bl 0x8233a258
	ctx.lr = 0x826809D0;
	sub_8233A258(ctx, base);
loc_826809D0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_826809E8"))) PPC_WEAK_FUNC(sub_826809E8);
PPC_FUNC_IMPL(__imp__sub_826809E8) {
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
	// lwz r5,52(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x82680a18
	if (!ctx.cr6.gt) goto loc_82680A18;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r4,r11,20576
	ctx.r4.s64 = ctx.r11.s64 + 20576;
	// bl 0x82816c30
	ctx.lr = 0x82680A14;
	sub_82816C30(ctx, base);
	// b 0x82680a24
	goto loc_82680A24;
loc_82680A18:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r4,r11,-25088
	ctx.r4.s64 = ctx.r11.s64 + -25088;
	// bl 0x8233a258
	ctx.lr = 0x82680A24;
	sub_8233A258(ctx, base);
loc_82680A24:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82680A40"))) PPC_WEAK_FUNC(sub_82680A40);
PPC_FUNC_IMPL(__imp__sub_82680A40) {
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
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,10548(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// bl 0x8242e448
	ctx.lr = 0x82680A60;
	sub_8242E448(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,5460
	ctx.r4.s64 = ctx.r11.s64 + 5460;
	// bl 0x82816c30
	ctx.lr = 0x82680A74;
	sub_82816C30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82680A90"))) PPC_WEAK_FUNC(sub_82680A90);
PPC_FUNC_IMPL(__imp__sub_82680A90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x823fd638
	ctx.lr = 0x82680AA8;
	sub_823FD638(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// addi r9,r11,25712
	ctx.r9.s64 = ctx.r11.s64 + 25712;
	// addi r8,r10,13216
	ctx.r8.s64 = ctx.r10.s64 + 13216;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// stw r11,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r11.u32);
	// stw r11,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r11.u32);
	// stw r11,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r11.u32);
	// stw r11,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r11.u32);
	// stw r10,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r10.u32);
	// stw r11,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r11.u32);
	// stw r11,456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 456, ctx.r11.u32);
	// stw r11,460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 460, ctx.r11.u32);
	// stw r11,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r11.u32);
	// stw r11,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r11.u32);
	// stw r10,472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 472, ctx.r10.u32);
	// stw r11,476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 476, ctx.r11.u32);
	// stw r11,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r11.u32);
	// stw r11,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r11.u32);
	// stw r11,488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 488, ctx.r11.u32);
	// stw r11,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r11.u32);
	// stw r10,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r10.u32);
	// stw r11,500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 500, ctx.r11.u32);
	// stw r11,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r11.u32);
	// stw r11,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r11.u32);
	// stw r11,512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 512, ctx.r11.u32);
	// stw r11,492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 492, ctx.r11.u32);
	// stw r9,516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 516, ctx.r9.u32);
	// stw r11,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82680B50"))) PPC_WEAK_FUNC(sub_82680B50);
PPC_FUNC_IMPL(__imp__sub_82680B50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x82680a40
	ctx.lr = 0x82680B68;
	sub_82680A40(ctx, base);
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

__attribute__((alias("__imp__sub_82680B80"))) PPC_WEAK_FUNC(sub_82680B80);
PPC_FUNC_IMPL(__imp__sub_82680B80) {
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
	// bl 0x82680a90
	ctx.lr = 0x82680B98;
	sub_82680A90(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// addi r11,r11,12896
	ctx.r11.s64 = ctx.r11.s64 + 12896;
	// addi r10,r10,13216
	ctx.r10.s64 = ctx.r10.s64 + 13216;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5472
	ctx.r4.s64 = ctx.r11.s64 + 5472;
	// bl 0x8233a258
	ctx.lr = 0x82680BC0;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,368
	ctx.r3.s64 = ctx.r31.s64 + 368;
	// bl 0x82400b48
	ctx.lr = 0x82680BCC;
	sub_82400B48(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x82680BD4;
	sub_82333960(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r3,r11,5488
	ctx.r3.s64 = ctx.r11.s64 + 5488;
	// bl 0x82816528
	ctx.lr = 0x82680BE0;
	sub_82816528(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5524
	ctx.r4.s64 = ctx.r11.s64 + 5524;
	// bl 0x8233a258
	ctx.lr = 0x82680BF4;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,168
	ctx.r3.s64 = ctx.r31.s64 + 168;
	// bl 0x82400b48
	ctx.lr = 0x82680C00;
	sub_82400B48(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x82680C08;
	sub_82333960(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82680C28"))) PPC_WEAK_FUNC(sub_82680C28);
PPC_FUNC_IMPL(__imp__sub_82680C28) {
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
	// bl 0x82680360
	ctx.lr = 0x82680C40;
	sub_82680360(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-31963
	ctx.r9.s64 = -2094727168;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lfs f0,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,24000(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24000);
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
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r10,12(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_82680CA0"))) PPC_WEAK_FUNC(sub_82680CA0);
PPC_FUNC_IMPL(__imp__sub_82680CA0) {
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
	// bl 0x82680360
	ctx.lr = 0x82680CB8;
	sub_82680360(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lfs f0,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20188(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20188);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,19288(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 19288);
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
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r10,12(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_82680D18"))) PPC_WEAK_FUNC(sub_82680D18);
PPC_FUNC_IMPL(__imp__sub_82680D18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// stw r11,36(r4)
	PPC_STORE_U32(ctx.r4.u32 + 36, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82680D30"))) PPC_WEAK_FUNC(sub_82680D30);
PPC_FUNC_IMPL(__imp__sub_82680D30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82680D38;
	__savegprlr_29(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82680df0
	ctx.lr = 0x82680D4C;
	sub_82680DF0(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lwz r5,124(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// addi r31,r11,7896
	ctx.r31.s64 = ctx.r11.s64 + 7896;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82680d68
	if (!ctx.cr6.eq) goto loc_82680D68;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
loc_82680D68:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// addi r6,r11,-29712
	ctx.r6.s64 = ctx.r11.s64 + -29712;
	// addi r4,r10,5268
	ctx.r4.s64 = ctx.r10.s64 + 5268;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x828db5e0
	ctx.lr = 0x82680D88;
	sub_828DB5E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82400b48
	ctx.lr = 0x82680D94;
	sub_82400B48(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82333960
	ctx.lr = 0x82680D9C;
	sub_82333960(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82680dcc
	if (ctx.cr6.eq) goto loc_82680DCC;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r5,124(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82680db8
	if (!ctx.cr6.eq) goto loc_82680DB8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
loc_82680DB8:
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,5580
	ctx.r4.s64 = ctx.r11.s64 + 5580;
	// bl 0x82816c30
	ctx.lr = 0x82680DC8;
	sub_82816C30(ctx, base);
	// b 0x82680dd8
	goto loc_82680DD8;
loc_82680DCC:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823339b8
	ctx.lr = 0x82680DD8;
	sub_823339B8(ctx, base);
loc_82680DD8:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82333960
	ctx.lr = 0x82680DE0;
	sub_82333960(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82680DF0"))) PPC_WEAK_FUNC(sub_82680DF0);
PPC_FUNC_IMPL(__imp__sub_82680DF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r11,26940
	ctx.r4.s64 = ctx.r11.s64 + 26940;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8233a258
	ctx.lr = 0x82680E18;
	sub_8233A258(ctx, base);
	// lis r10,-15907
	ctx.r10.s64 = -1042481152;
	// lwz r11,524(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 524);
	// ori r10,r10,20748
	ctx.r10.u64 = ctx.r10.u64 | 20748;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82680f4c
	if (ctx.cr6.gt) goto loc_82680F4C;
	// beq cr6,0x82680f28
	if (ctx.cr6.eq) goto loc_82680F28;
	// lis r10,30869
	ctx.r10.s64 = 2023030784;
	// ori r10,r10,22201
	ctx.r10.u64 = ctx.r10.u64 | 22201;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82680ec4
	if (ctx.cr6.gt) goto loc_82680EC4;
	// beq cr6,0x82680f04
	if (ctx.cr6.eq) goto loc_82680F04;
	// lis r10,6888
	ctx.r10.s64 = 451411968;
	// ori r10,r10,42758
	ctx.r10.u64 = ctx.r10.u64 | 42758;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82680ff4
	if (ctx.cr6.eq) goto loc_82680FF4;
	// lis r10,7861
	ctx.r10.s64 = 515178496;
	// ori r10,r10,20314
	ctx.r10.u64 = ctx.r10.u64 | 20314;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82680f28
	if (ctx.cr6.eq) goto loc_82680F28;
	// lis r10,10264
	ctx.r10.s64 = 672661504;
	// ori r10,r10,58711
	ctx.r10.u64 = ctx.r10.u64 | 58711;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82680fa0
	if (ctx.cr6.eq) goto loc_82680FA0;
	// lis r10,13574
	ctx.r10.s64 = 889585664;
	// ori r10,r10,56103
	ctx.r10.u64 = ctx.r10.u64 | 56103;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82680ea8
	if (!ctx.cr6.eq) goto loc_82680EA8;
loc_82680E84:
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r4,r11,5624
	ctx.r4.s64 = ctx.r11.s64 + 5624;
	// bl 0x8233a258
	ctx.lr = 0x82680E94;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82400b48
	ctx.lr = 0x82680EA0;
	sub_82400B48(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
loc_82680EA4:
	// bl 0x82333960
	ctx.lr = 0x82680EA8;
	sub_82333960(ctx, base);
loc_82680EA8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82680EC4:
	// lis r10,-32192
	ctx.r10.s64 = -2109734912;
	// ori r10,r10,48948
	ctx.r10.u64 = ctx.r10.u64 | 48948;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82680f28
	if (ctx.cr6.eq) goto loc_82680F28;
	// lis r10,-30770
	ctx.r10.s64 = -2016542720;
	// ori r10,r10,19939
	ctx.r10.u64 = ctx.r10.u64 | 19939;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82680ff4
	if (ctx.cr6.eq) goto loc_82680FF4;
	// lis r10,-21927
	ctx.r10.s64 = -1437007872;
	// ori r10,r10,51721
	ctx.r10.u64 = ctx.r10.u64 | 51721;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82680e84
	if (ctx.cr6.eq) goto loc_82680E84;
	// lis r10,-20312
	ctx.r10.s64 = -1331167232;
	// ori r10,r10,12433
	ctx.r10.u64 = ctx.r10.u64 | 12433;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82680ea8
	if (!ctx.cr6.eq) goto loc_82680EA8;
loc_82680F04:
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,5612
	ctx.r4.s64 = ctx.r11.s64 + 5612;
	// bl 0x8233a258
	ctx.lr = 0x82680F14;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82400b48
	ctx.lr = 0x82680F20;
	sub_82400B48(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// b 0x82680ea4
	goto loc_82680EA4;
loc_82680F28:
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r4,r11,5644
	ctx.r4.s64 = ctx.r11.s64 + 5644;
	// bl 0x8233a258
	ctx.lr = 0x82680F38;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82400b48
	ctx.lr = 0x82680F44;
	sub_82400B48(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// b 0x82680ea4
	goto loc_82680EA4;
loc_82680F4C:
	// lis r10,-2529
	ctx.r10.s64 = -165740544;
	// ori r10,r10,23970
	ctx.r10.u64 = ctx.r10.u64 | 23970;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82680fc4
	if (ctx.cr6.gt) goto loc_82680FC4;
	// beq cr6,0x82681018
	if (ctx.cr6.eq) goto loc_82681018;
	// lis r10,-15069
	ctx.r10.s64 = -987561984;
	// ori r10,r10,10327
	ctx.r10.u64 = ctx.r10.u64 | 10327;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82680fa0
	if (ctx.cr6.eq) goto loc_82680FA0;
	// lis r10,-9000
	ctx.r10.s64 = -589824000;
	// ori r10,r10,41966
	ctx.r10.u64 = ctx.r10.u64 | 41966;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82681018
	if (ctx.cr6.eq) goto loc_82681018;
	// lis r10,-8461
	ctx.r10.s64 = -554500096;
	// ori r10,r10,4130
	ctx.r10.u64 = ctx.r10.u64 | 4130;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82680f04
	if (ctx.cr6.eq) goto loc_82680F04;
	// lis r10,-7801
	ctx.r10.s64 = -511246336;
	// ori r10,r10,39498
	ctx.r10.u64 = ctx.r10.u64 | 39498;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82680ea8
	if (!ctx.cr6.eq) goto loc_82680EA8;
loc_82680FA0:
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5600
	ctx.r4.s64 = ctx.r11.s64 + 5600;
	// bl 0x8233a258
	ctx.lr = 0x82680FB0;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82400b48
	ctx.lr = 0x82680FBC;
	sub_82400B48(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// b 0x82680ea4
	goto loc_82680EA4;
loc_82680FC4:
	// lis r10,-1250
	ctx.r10.s64 = -81920000;
	// ori r10,r10,47279
	ctx.r10.u64 = ctx.r10.u64 | 47279;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82680e84
	if (ctx.cr6.eq) goto loc_82680E84;
	// lis r10,-764
	ctx.r10.s64 = -50069504;
	// ori r10,r10,46735
	ctx.r10.u64 = ctx.r10.u64 | 46735;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82681018
	if (ctx.cr6.eq) goto loc_82681018;
	// lis r10,-271
	ctx.r10.s64 = -17760256;
	// ori r10,r10,43299
	ctx.r10.u64 = ctx.r10.u64 | 43299;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82680ea8
	if (!ctx.cr6.eq) goto loc_82680EA8;
loc_82680FF4:
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,5652
	ctx.r4.s64 = ctx.r11.s64 + 5652;
	// bl 0x8233a258
	ctx.lr = 0x82681004;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82400b48
	ctx.lr = 0x82681010;
	sub_82400B48(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// b 0x82680ea4
	goto loc_82680EA4;
loc_82681018:
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,5636
	ctx.r4.s64 = ctx.r11.s64 + 5636;
	// bl 0x8233a258
	ctx.lr = 0x82681028;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82400b48
	ctx.lr = 0x82681034;
	sub_82400B48(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// b 0x82680ea4
	goto loc_82680EA4;
}

__attribute__((alias("__imp__sub_82681040"))) PPC_WEAK_FUNC(sub_82681040);
PPC_FUNC_IMPL(__imp__sub_82681040) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x82680a90
	ctx.lr = 0x82681058;
	sub_82680A90(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// addi r9,r11,26072
	ctx.r9.s64 = ctx.r11.s64 + 26072;
	// addi r10,r10,26232
	ctx.r10.s64 = ctx.r10.s64 + 26232;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// li r7,392
	ctx.r7.s64 = 392;
	// stw r11,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r11.u32);
	// stw r8,532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 532, ctx.r8.u32);
	// addi r10,r31,560
	ctx.r10.s64 = ctx.r31.s64 + 560;
	// stw r11,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r11.u32);
	// stw r11,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r11.u32);
	// stw r11,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r11.u32);
	// stw r7,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r7.u32);
loc_826810A0:
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// stw r11,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// bge 0x826810a0
	if (!ctx.cr0.lt) goto loc_826810A0;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 516, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826810E8"))) PPC_WEAK_FUNC(sub_826810E8);
PPC_FUNC_IMPL(__imp__sub_826810E8) {
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
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82681114
	if (ctx.cr6.eq) goto loc_82681114;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r4,r11,5388
	ctx.r4.s64 = ctx.r11.s64 + 5388;
	// bl 0x82816c30
	ctx.lr = 0x82681110;
	sub_82816C30(ctx, base);
	// b 0x8268117c
	goto loc_8268117C;
loc_82681114:
	// lwz r11,32(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82681154
	if (ctx.cr0.eq) goto loc_82681154;
	// lwz r11,552(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 552);
	// cmpwi cr6,r11,392
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 392, ctx.xer);
	// beq cr6,0x82681154
	if (ctx.cr6.eq) goto loc_82681154;
	// lwz r11,544(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 544);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82681140
	if (ctx.cr6.eq) goto loc_82681140;
	// lwz r5,540(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 540);
	// b 0x82681148
	goto loc_82681148;
loc_82681140:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r5,r11,7896
	ctx.r5.s64 = ctx.r11.s64 + 7896;
loc_82681148:
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r4,r10,-21568
	ctx.r4.s64 = ctx.r10.s64 + -21568;
	// b 0x82681164
	goto loc_82681164;
loc_82681154:
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// addi r5,r10,5660
	ctx.r5.s64 = ctx.r10.s64 + 5660;
	// addi r4,r9,-21568
	ctx.r4.s64 = ctx.r9.s64 + -21568;
loc_82681164:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,-21636
	ctx.r6.s64 = ctx.r11.s64 + -21636;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828db5e0
	ctx.lr = 0x8268117C;
	sub_828DB5E0(ctx, base);
loc_8268117C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82681198"))) PPC_WEAK_FUNC(sub_82681198);
PPC_FUNC_IMPL(__imp__sub_82681198) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-704(r1)
	ea = -704 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-15907
	ctx.r11.s64 = -1042481152;
	// ori r11,r11,20748
	ctx.r11.u64 = ctx.r11.u64 | 20748;
	// stw r4,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r4.u32);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x826816c4
	if (ctx.cr6.gt) goto loc_826816C4;
	// beq cr6,0x82681658
	if (ctx.cr6.eq) goto loc_82681658;
	// lis r11,30869
	ctx.r11.s64 = 2023030784;
	// ori r11,r11,22201
	ctx.r11.u64 = ctx.r11.u64 | 22201;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82681458
	if (ctx.cr6.gt) goto loc_82681458;
	// beq cr6,0x826813ec
	if (ctx.cr6.eq) goto loc_826813EC;
	// lis r11,6888
	ctx.r11.s64 = 451411968;
	// ori r11,r11,42758
	ctx.r11.u64 = ctx.r11.u64 | 42758;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82681380
	if (ctx.cr6.eq) goto loc_82681380;
	// lis r11,7861
	ctx.r11.s64 = 515178496;
	// ori r11,r11,20314
	ctx.r11.u64 = ctx.r11.u64 | 20314;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82681304
	if (ctx.cr6.eq) goto loc_82681304;
	// lis r11,10264
	ctx.r11.s64 = 672661504;
	// ori r11,r11,58711
	ctx.r11.u64 = ctx.r11.u64 | 58711;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82681298
	if (ctx.cr6.eq) goto loc_82681298;
	// lis r11,13574
	ctx.r11.s64 = 889585664;
	// ori r11,r11,56103
	ctx.r11.u64 = ctx.r11.u64 | 56103;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82681afc
	if (!ctx.cr6.eq) goto loc_82681AFC;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// stw r11,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r11.u32);
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// addi r4,r10,5780
	ctx.r4.s64 = ctx.r10.s64 + 5780;
	// bl 0x8233a258
	ctx.lr = 0x82681234;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,296
	ctx.r3.s64 = ctx.r31.s64 + 296;
	// bl 0x82400b48
	ctx.lr = 0x82681240;
	sub_82400B48(ctx, base);
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// bl 0x82333960
	ctx.lr = 0x82681248;
	sub_82333960(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mulli r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 * 24;
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lwz r11,2464(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2464);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x823339b8
	ctx.lr = 0x82681268;
	sub_823339B8(ctx, base);
	// addi r30,r31,560
	ctx.r30.s64 = ctx.r31.s64 + 560;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82400b48
	ctx.lr = 0x82681278;
	sub_82400B48(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x82681280;
	sub_82333960(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,584
	ctx.r3.s64 = ctx.r31.s64 + 584;
	// bl 0x82400b48
	ctx.lr = 0x8268128C;
	sub_82400B48(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r3,r11,5800
	ctx.r3.s64 = ctx.r11.s64 + 5800;
	// b 0x82681af4
	goto loc_82681AF4;
loc_82681298:
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// stw r11,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r11.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r10,5704
	ctx.r4.s64 = ctx.r10.s64 + 5704;
	// bl 0x8233a258
	ctx.lr = 0x826812B0;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,296
	ctx.r3.s64 = ctx.r31.s64 + 296;
	// bl 0x82400b48
	ctx.lr = 0x826812BC;
	sub_82400B48(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82333960
	ctx.lr = 0x826812C4;
	sub_82333960(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mulli r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 * 24;
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lwz r11,2416(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x823339b8
	ctx.lr = 0x826812E4;
	sub_823339B8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,560
	ctx.r3.s64 = ctx.r31.s64 + 560;
	// bl 0x82400b48
	ctx.lr = 0x826812F0;
	sub_82400B48(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x826812F8;
	sub_82333960(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r3,r11,-28624
	ctx.r3.s64 = ctx.r11.s64 + -28624;
	// b 0x82681af4
	goto loc_82681AF4;
loc_82681304:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// stw r11,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r11.u32);
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// addi r4,r10,6100
	ctx.r4.s64 = ctx.r10.s64 + 6100;
	// bl 0x8233a258
	ctx.lr = 0x8268131C;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,296
	ctx.r3.s64 = ctx.r31.s64 + 296;
	// bl 0x82400b48
	ctx.lr = 0x82681328;
	sub_82400B48(ctx, base);
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x82333960
	ctx.lr = 0x82681330;
	sub_82333960(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mulli r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 * 24;
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lwz r11,2656(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2656);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x823339b8
	ctx.lr = 0x82681350;
	sub_823339B8(ctx, base);
	// addi r30,r31,560
	ctx.r30.s64 = ctx.r31.s64 + 560;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82400b48
	ctx.lr = 0x82681360;
	sub_82400B48(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x82681368;
	sub_82333960(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,584
	ctx.r3.s64 = ctx.r31.s64 + 584;
	// bl 0x82400b48
	ctx.lr = 0x82681374;
	sub_82400B48(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r3,r11,6156
	ctx.r3.s64 = ctx.r11.s64 + 6156;
	// b 0x82681af4
	goto loc_82681AF4;
loc_82681380:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// stw r11,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r11.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r4,r10,6228
	ctx.r4.s64 = ctx.r10.s64 + 6228;
	// bl 0x8233a258
	ctx.lr = 0x82681398;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,296
	ctx.r3.s64 = ctx.r31.s64 + 296;
	// bl 0x82400b48
	ctx.lr = 0x826813A4;
	sub_82400B48(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82333960
	ctx.lr = 0x826813AC;
	sub_82333960(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mulli r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 * 24;
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lwz r11,2824(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2824);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x823339b8
	ctx.lr = 0x826813CC;
	sub_823339B8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,560
	ctx.r3.s64 = ctx.r31.s64 + 560;
	// bl 0x82400b48
	ctx.lr = 0x826813D8;
	sub_82400B48(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x826813E0;
	sub_82333960(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r3,r11,6320
	ctx.r3.s64 = ctx.r11.s64 + 6320;
	// b 0x82681af4
	goto loc_82681AF4;
loc_826813EC:
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// stw r11,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r11.u32);
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// addi r4,r10,6024
	ctx.r4.s64 = ctx.r10.s64 + 6024;
	// bl 0x8233a258
	ctx.lr = 0x82681404;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,296
	ctx.r3.s64 = ctx.r31.s64 + 296;
	// bl 0x82400b48
	ctx.lr = 0x82681410;
	sub_82400B48(ctx, base);
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// bl 0x82333960
	ctx.lr = 0x82681418;
	sub_82333960(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mulli r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 * 24;
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lwz r11,2584(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2584);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x823339b8
	ctx.lr = 0x82681438;
	sub_823339B8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,560
	ctx.r3.s64 = ctx.r31.s64 + 560;
	// bl 0x82400b48
	ctx.lr = 0x82681444;
	sub_82400B48(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x8268144C;
	sub_82333960(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r3,r11,6044
	ctx.r3.s64 = ctx.r11.s64 + 6044;
	// b 0x82681af4
	goto loc_82681AF4;
loc_82681458:
	// lis r11,-32192
	ctx.r11.s64 = -2109734912;
	// ori r11,r11,48948
	ctx.r11.u64 = ctx.r11.u64 | 48948;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x826815ec
	if (ctx.cr6.eq) goto loc_826815EC;
	// lis r11,-30770
	ctx.r11.s64 = -2016542720;
	// ori r11,r11,19939
	ctx.r11.u64 = ctx.r11.u64 | 19939;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82681580
	if (ctx.cr6.eq) goto loc_82681580;
	// lis r11,-21927
	ctx.r11.s64 = -1437007872;
	// ori r11,r11,51721
	ctx.r11.u64 = ctx.r11.u64 | 51721;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82681504
	if (ctx.cr6.eq) goto loc_82681504;
	// lis r11,-20312
	ctx.r11.s64 = -1331167232;
	// ori r11,r11,12433
	ctx.r11.u64 = ctx.r11.u64 | 12433;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82681afc
	if (!ctx.cr6.eq) goto loc_82681AFC;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// stw r11,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r11.u32);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// addi r4,r10,5724
	ctx.r4.s64 = ctx.r10.s64 + 5724;
	// bl 0x8233a258
	ctx.lr = 0x826814B0;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,296
	ctx.r3.s64 = ctx.r31.s64 + 296;
	// bl 0x82400b48
	ctx.lr = 0x826814BC;
	sub_82400B48(ctx, base);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82333960
	ctx.lr = 0x826814C4;
	sub_82333960(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mulli r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 * 24;
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lwz r11,2440(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2440);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x823339b8
	ctx.lr = 0x826814E4;
	sub_823339B8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,560
	ctx.r3.s64 = ctx.r31.s64 + 560;
	// bl 0x82400b48
	ctx.lr = 0x826814F0;
	sub_82400B48(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x826814F8;
	sub_82333960(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r3,r11,5744
	ctx.r3.s64 = ctx.r11.s64 + 5744;
	// b 0x82681af4
	goto loc_82681AF4;
loc_82681504:
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// stw r11,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r11.u32);
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// addi r4,r10,5912
	ctx.r4.s64 = ctx.r10.s64 + 5912;
	// bl 0x8233a258
	ctx.lr = 0x8268151C;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,296
	ctx.r3.s64 = ctx.r31.s64 + 296;
	// bl 0x82400b48
	ctx.lr = 0x82681528;
	sub_82400B48(ctx, base);
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x82333960
	ctx.lr = 0x82681530;
	sub_82333960(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mulli r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 * 24;
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lwz r11,2536(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2536);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x823339b8
	ctx.lr = 0x82681550;
	sub_823339B8(ctx, base);
	// addi r30,r31,560
	ctx.r30.s64 = ctx.r31.s64 + 560;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82400b48
	ctx.lr = 0x82681560;
	sub_82400B48(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x82681568;
	sub_82333960(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,584
	ctx.r3.s64 = ctx.r31.s64 + 584;
	// bl 0x82400b48
	ctx.lr = 0x82681574;
	sub_82400B48(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r3,r11,5932
	ctx.r3.s64 = ctx.r11.s64 + 5932;
	// b 0x82681af4
	goto loc_82681AF4;
loc_82681580:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// stw r11,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r11.u32);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// addi r4,r10,6356
	ctx.r4.s64 = ctx.r10.s64 + 6356;
	// bl 0x8233a258
	ctx.lr = 0x82681598;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,296
	ctx.r3.s64 = ctx.r31.s64 + 296;
	// bl 0x82400b48
	ctx.lr = 0x826815A4;
	sub_82400B48(ctx, base);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82333960
	ctx.lr = 0x826815AC;
	sub_82333960(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mulli r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 * 24;
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lwz r11,2752(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2752);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x823339b8
	ctx.lr = 0x826815CC;
	sub_823339B8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,560
	ctx.r3.s64 = ctx.r31.s64 + 560;
	// bl 0x82400b48
	ctx.lr = 0x826815D8;
	sub_82400B48(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x826815E0;
	sub_82333960(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r3,r11,6448
	ctx.r3.s64 = ctx.r11.s64 + 6448;
	// b 0x82681af4
	goto loc_82681AF4;
loc_826815EC:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// stw r11,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r11.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r10,6356
	ctx.r4.s64 = ctx.r10.s64 + 6356;
	// bl 0x8233a258
	ctx.lr = 0x82681604;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,296
	ctx.r3.s64 = ctx.r31.s64 + 296;
	// bl 0x82400b48
	ctx.lr = 0x82681610;
	sub_82400B48(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82333960
	ctx.lr = 0x82681618;
	sub_82333960(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mulli r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 * 24;
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lwz r11,2728(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2728);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x823339b8
	ctx.lr = 0x82681638;
	sub_823339B8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,560
	ctx.r3.s64 = ctx.r31.s64 + 560;
	// bl 0x82400b48
	ctx.lr = 0x82681644;
	sub_82400B48(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x8268164C;
	sub_82333960(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r3,r11,6412
	ctx.r3.s64 = ctx.r11.s64 + 6412;
	// b 0x82681af4
	goto loc_82681AF4;
loc_82681658:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// stw r11,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r11.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r10,6228
	ctx.r4.s64 = ctx.r10.s64 + 6228;
	// bl 0x8233a258
	ctx.lr = 0x82681670;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,296
	ctx.r3.s64 = ctx.r31.s64 + 296;
	// bl 0x82400b48
	ctx.lr = 0x8268167C;
	sub_82400B48(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82333960
	ctx.lr = 0x82681684;
	sub_82333960(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mulli r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 * 24;
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lwz r11,2800(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2800);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x823339b8
	ctx.lr = 0x826816A4;
	sub_823339B8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,560
	ctx.r3.s64 = ctx.r31.s64 + 560;
	// bl 0x82400b48
	ctx.lr = 0x826816B0;
	sub_82400B48(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x826816B8;
	sub_82333960(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r3,r11,6248
	ctx.r3.s64 = ctx.r11.s64 + 6248;
	// b 0x82681af4
	goto loc_82681AF4;
loc_826816C4:
	// lis r11,-2529
	ctx.r11.s64 = -165740544;
	// ori r11,r11,23970
	ctx.r11.u64 = ctx.r11.u64 | 23970;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82681934
	if (ctx.cr6.gt) goto loc_82681934;
	// beq cr6,0x826818c8
	if (ctx.cr6.eq) goto loc_826818C8;
	// lis r11,-15069
	ctx.r11.s64 = -987561984;
	// ori r11,r11,10327
	ctx.r11.u64 = ctx.r11.u64 | 10327;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8268185c
	if (ctx.cr6.eq) goto loc_8268185C;
	// lis r11,-9000
	ctx.r11.s64 = -589824000;
	// ori r11,r11,41966
	ctx.r11.u64 = ctx.r11.u64 | 41966;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x826817f0
	if (ctx.cr6.eq) goto loc_826817F0;
	// lis r11,-8461
	ctx.r11.s64 = -554500096;
	// ori r11,r11,4130
	ctx.r11.u64 = ctx.r11.u64 | 4130;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82681784
	if (ctx.cr6.eq) goto loc_82681784;
	// lis r11,-7801
	ctx.r11.s64 = -511246336;
	// ori r11,r11,39498
	ctx.r11.u64 = ctx.r11.u64 | 39498;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82681afc
	if (!ctx.cr6.eq) goto loc_82681AFC;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// stw r11,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r11.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r4,r10,5968
	ctx.r4.s64 = ctx.r10.s64 + 5968;
	// bl 0x8233a258
	ctx.lr = 0x82681730;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,296
	ctx.r3.s64 = ctx.r31.s64 + 296;
	// bl 0x82400b48
	ctx.lr = 0x8268173C;
	sub_82400B48(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82333960
	ctx.lr = 0x82681744;
	sub_82333960(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mulli r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 * 24;
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lwz r11,2560(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2560);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x823339b8
	ctx.lr = 0x82681764;
	sub_823339B8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,560
	ctx.r3.s64 = ctx.r31.s64 + 560;
	// bl 0x82400b48
	ctx.lr = 0x82681770;
	sub_82400B48(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x82681778;
	sub_82333960(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r3,r11,5988
	ctx.r3.s64 = ctx.r11.s64 + 5988;
	// b 0x82681af4
	goto loc_82681AF4;
loc_82681784:
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// stw r11,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r11.u32);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// addi r4,r10,5892
	ctx.r4.s64 = ctx.r10.s64 + 5892;
	// bl 0x8233a258
	ctx.lr = 0x8268179C;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,296
	ctx.r3.s64 = ctx.r31.s64 + 296;
	// bl 0x82400b48
	ctx.lr = 0x826817A8;
	sub_82400B48(ctx, base);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82333960
	ctx.lr = 0x826817B0;
	sub_82333960(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mulli r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 * 24;
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lwz r11,2512(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2512);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x823339b8
	ctx.lr = 0x826817D0;
	sub_823339B8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,560
	ctx.r3.s64 = ctx.r31.s64 + 560;
	// bl 0x82400b48
	ctx.lr = 0x826817DC;
	sub_82400B48(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x826817E4;
	sub_82333960(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r3,r11,-28512
	ctx.r3.s64 = ctx.r11.s64 + -28512;
	// b 0x82681af4
	goto loc_82681AF4;
loc_826817F0:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// stw r11,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r11.u32);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// addi r4,r10,6356
	ctx.r4.s64 = ctx.r10.s64 + 6356;
	// bl 0x8233a258
	ctx.lr = 0x82681808;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,296
	ctx.r3.s64 = ctx.r31.s64 + 296;
	// bl 0x82400b48
	ctx.lr = 0x82681814;
	sub_82400B48(ctx, base);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82333960
	ctx.lr = 0x8268181C;
	sub_82333960(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mulli r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 * 24;
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lwz r11,2704(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2704);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x823339b8
	ctx.lr = 0x8268183C;
	sub_823339B8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,560
	ctx.r3.s64 = ctx.r31.s64 + 560;
	// bl 0x82400b48
	ctx.lr = 0x82681848;
	sub_82400B48(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x82681850;
	sub_82333960(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r3,r11,6376
	ctx.r3.s64 = ctx.r11.s64 + 6376;
	// b 0x82681af4
	goto loc_82681AF4;
loc_8268185C:
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// stw r11,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r11.u32);
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// addi r4,r10,5836
	ctx.r4.s64 = ctx.r10.s64 + 5836;
	// bl 0x8233a258
	ctx.lr = 0x82681874;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,296
	ctx.r3.s64 = ctx.r31.s64 + 296;
	// bl 0x82400b48
	ctx.lr = 0x82681880;
	sub_82400B48(ctx, base);
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82333960
	ctx.lr = 0x82681888;
	sub_82333960(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mulli r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 * 24;
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lwz r11,2488(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2488);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x823339b8
	ctx.lr = 0x826818A8;
	sub_823339B8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,560
	ctx.r3.s64 = ctx.r31.s64 + 560;
	// bl 0x82400b48
	ctx.lr = 0x826818B4;
	sub_82400B48(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x826818BC;
	sub_82333960(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r3,r11,5856
	ctx.r3.s64 = ctx.r11.s64 + 5856;
	// b 0x82681af4
	goto loc_82681AF4;
loc_826818C8:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// stw r11,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r11.u32);
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// addi r4,r10,6228
	ctx.r4.s64 = ctx.r10.s64 + 6228;
	// bl 0x8233a258
	ctx.lr = 0x826818E0;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,296
	ctx.r3.s64 = ctx.r31.s64 + 296;
	// bl 0x82400b48
	ctx.lr = 0x826818EC;
	sub_82400B48(ctx, base);
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x82333960
	ctx.lr = 0x826818F4;
	sub_82333960(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mulli r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 * 24;
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lwz r11,2776(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2776);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x823339b8
	ctx.lr = 0x82681914;
	sub_823339B8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,560
	ctx.r3.s64 = ctx.r31.s64 + 560;
	// bl 0x82400b48
	ctx.lr = 0x82681920;
	sub_82400B48(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x82681928;
	sub_82333960(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r3,r11,6284
	ctx.r3.s64 = ctx.r11.s64 + 6284;
	// b 0x82681af4
	goto loc_82681AF4;
loc_82681934:
	// lis r11,-1250
	ctx.r11.s64 = -81920000;
	// ori r11,r11,47279
	ctx.r11.u64 = ctx.r11.u64 | 47279;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82681a5c
	if (ctx.cr6.eq) goto loc_82681A5C;
	// lis r11,-764
	ctx.r11.s64 = -50069504;
	// ori r11,r11,46735
	ctx.r11.u64 = ctx.r11.u64 | 46735;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x826819e0
	if (ctx.cr6.eq) goto loc_826819E0;
	// lis r11,-271
	ctx.r11.s64 = -17760256;
	// ori r11,r11,43299
	ctx.r11.u64 = ctx.r11.u64 | 43299;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82681afc
	if (!ctx.cr6.eq) goto loc_82681AFC;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// stw r11,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r11.u32);
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// addi r4,r10,6100
	ctx.r4.s64 = ctx.r10.s64 + 6100;
	// bl 0x8233a258
	ctx.lr = 0x8268197C;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,296
	ctx.r3.s64 = ctx.r31.s64 + 296;
	// bl 0x82400b48
	ctx.lr = 0x82681988;
	sub_82400B48(ctx, base);
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// bl 0x82333960
	ctx.lr = 0x82681990;
	sub_82333960(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mulli r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 * 24;
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lwz r11,2680(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2680);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x823339b8
	ctx.lr = 0x826819B0;
	sub_823339B8(ctx, base);
	// addi r30,r31,560
	ctx.r30.s64 = ctx.r31.s64 + 560;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82400b48
	ctx.lr = 0x826819C0;
	sub_82400B48(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x826819C8;
	sub_82333960(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,584
	ctx.r3.s64 = ctx.r31.s64 + 584;
	// bl 0x82400b48
	ctx.lr = 0x826819D4;
	sub_82400B48(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r3,r11,6192
	ctx.r3.s64 = ctx.r11.s64 + 6192;
	// b 0x82681af4
	goto loc_82681AF4;
loc_826819E0:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// stw r11,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r11.u32);
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// addi r4,r10,6100
	ctx.r4.s64 = ctx.r10.s64 + 6100;
	// bl 0x8233a258
	ctx.lr = 0x826819F8;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,296
	ctx.r3.s64 = ctx.r31.s64 + 296;
	// bl 0x82400b48
	ctx.lr = 0x82681A04;
	sub_82400B48(ctx, base);
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x82333960
	ctx.lr = 0x82681A0C;
	sub_82333960(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mulli r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 * 24;
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lwz r11,2632(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2632);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x823339b8
	ctx.lr = 0x82681A2C;
	sub_823339B8(ctx, base);
	// addi r30,r31,560
	ctx.r30.s64 = ctx.r31.s64 + 560;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82400b48
	ctx.lr = 0x82681A3C;
	sub_82400B48(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x82681A44;
	sub_82333960(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,584
	ctx.r3.s64 = ctx.r31.s64 + 584;
	// bl 0x82400b48
	ctx.lr = 0x82681A50;
	sub_82400B48(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r3,r11,6120
	ctx.r3.s64 = ctx.r11.s64 + 6120;
	// b 0x82681af4
	goto loc_82681AF4;
loc_82681A5C:
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// stw r11,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r11.u32);
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// addi r4,r10,6080
	ctx.r4.s64 = ctx.r10.s64 + 6080;
	// bl 0x8233a258
	ctx.lr = 0x82681A74;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,296
	ctx.r3.s64 = ctx.r31.s64 + 296;
	// bl 0x82400b48
	ctx.lr = 0x82681A80;
	sub_82400B48(ctx, base);
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// bl 0x82333960
	ctx.lr = 0x82681A88;
	sub_82333960(ctx, base);
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mulli r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 * 24;
	// lwz r11,10548(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10548);
	// lwz r11,2608(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2608);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x823339b8
	ctx.lr = 0x82681AA8;
	sub_823339B8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,560
	ctx.r3.s64 = ctx.r31.s64 + 560;
	// bl 0x82400b48
	ctx.lr = 0x82681AB4;
	sub_82400B48(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x82681ABC;
	sub_82333960(ctx, base);
	// lwz r11,10548(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10548);
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mulli r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 * 24;
	// lwz r11,2848(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2848);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x823339b8
	ctx.lr = 0x82681AD8;
	sub_823339B8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,584
	ctx.r3.s64 = ctx.r31.s64 + 584;
	// bl 0x82400b48
	ctx.lr = 0x82681AE4;
	sub_82400B48(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x82681AEC;
	sub_82333960(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r3,r11,-28400
	ctx.r3.s64 = ctx.r11.s64 + -28400;
loc_82681AF4:
	// bl 0x82816528
	ctx.lr = 0x82681AF8;
	sub_82816528(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
loc_82681AFC:
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82681B18"))) PPC_WEAK_FUNC(sub_82681B18);
PPC_FUNC_IMPL(__imp__sub_82681B18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82681B20;
	__savegprlr_28(ctx, base);
	// stwu r1,-720(r1)
	ea = -720 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r30,r31,560
	ctx.r30.s64 = ctx.r31.s64 + 560;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r4,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r4.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82400b48
	ctx.lr = 0x82681B44;
	sub_82400B48(ctx, base);
	// lis r10,-15907
	ctx.r10.s64 = -1042481152;
	// lwz r11,524(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// ori r10,r10,20748
	ctx.r10.u64 = ctx.r10.u64 | 20748;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82681e44
	if (ctx.cr6.gt) goto loc_82681E44;
	// beq cr6,0x82681e0c
	if (ctx.cr6.eq) goto loc_82681E0C;
	// lis r10,30869
	ctx.r10.s64 = 2023030784;
	// ori r10,r10,22201
	ctx.r10.u64 = ctx.r10.u64 | 22201;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82681ce0
	if (ctx.cr6.gt) goto loc_82681CE0;
	// beq cr6,0x82681ca8
	if (ctx.cr6.eq) goto loc_82681CA8;
	// lis r10,6888
	ctx.r10.s64 = 451411968;
	// ori r10,r10,42758
	ctx.r10.u64 = ctx.r10.u64 | 42758;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82681c70
	if (ctx.cr6.eq) goto loc_82681C70;
	// lis r10,7861
	ctx.r10.s64 = 515178496;
	// ori r10,r10,20314
	ctx.r10.u64 = ctx.r10.u64 | 20314;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82681c2c
	if (ctx.cr6.eq) goto loc_82681C2C;
	// lis r10,10264
	ctx.r10.s64 = 672661504;
	// ori r10,r10,58711
	ctx.r10.u64 = ctx.r10.u64 | 58711;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82681bf4
	if (ctx.cr6.eq) goto loc_82681BF4;
	// lis r10,13574
	ctx.r10.s64 = 889585664;
	// ori r10,r10,56103
	ctx.r10.u64 = ctx.r10.u64 | 56103;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x826820e4
	if (!ctx.cr6.eq) goto loc_826820E4;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// stw r11,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r11.u32);
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// addi r4,r10,5780
	ctx.r4.s64 = ctx.r10.s64 + 5780;
	// bl 0x8233a258
	ctx.lr = 0x82681BC8;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,296
	ctx.r3.s64 = ctx.r31.s64 + 296;
	// bl 0x82400b48
	ctx.lr = 0x82681BD4;
	sub_82400B48(ctx, base);
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// bl 0x82333960
	ctx.lr = 0x82681BDC;
	sub_82333960(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,584
	ctx.r3.s64 = ctx.r31.s64 + 584;
	// bl 0x82400b48
	ctx.lr = 0x82681BE8;
	sub_82400B48(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r3,r11,5800
	ctx.r3.s64 = ctx.r11.s64 + 5800;
	// b 0x826820dc
	goto loc_826820DC;
loc_82681BF4:
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// stw r11,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r11.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r10,5704
	ctx.r4.s64 = ctx.r10.s64 + 5704;
	// bl 0x8233a258
	ctx.lr = 0x82681C0C;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,296
	ctx.r3.s64 = ctx.r31.s64 + 296;
	// bl 0x82400b48
	ctx.lr = 0x82681C18;
	sub_82400B48(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82333960
	ctx.lr = 0x82681C20;
	sub_82333960(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r3,r11,-28624
	ctx.r3.s64 = ctx.r11.s64 + -28624;
	// b 0x826820dc
	goto loc_826820DC;
loc_82681C2C:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// stw r11,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r11.u32);
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// addi r4,r10,6100
	ctx.r4.s64 = ctx.r10.s64 + 6100;
	// bl 0x8233a258
	ctx.lr = 0x82681C44;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,296
	ctx.r3.s64 = ctx.r31.s64 + 296;
	// bl 0x82400b48
	ctx.lr = 0x82681C50;
	sub_82400B48(ctx, base);
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x82333960
	ctx.lr = 0x82681C58;
	sub_82333960(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,584
	ctx.r3.s64 = ctx.r31.s64 + 584;
	// bl 0x82400b48
	ctx.lr = 0x82681C64;
	sub_82400B48(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r3,r11,6156
	ctx.r3.s64 = ctx.r11.s64 + 6156;
	// b 0x826820dc
	goto loc_826820DC;
loc_82681C70:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// stw r11,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r11.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r4,r10,6228
	ctx.r4.s64 = ctx.r10.s64 + 6228;
	// bl 0x8233a258
	ctx.lr = 0x82681C88;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,296
	ctx.r3.s64 = ctx.r31.s64 + 296;
	// bl 0x82400b48
	ctx.lr = 0x82681C94;
	sub_82400B48(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82333960
	ctx.lr = 0x82681C9C;
	sub_82333960(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r3,r11,6320
	ctx.r3.s64 = ctx.r11.s64 + 6320;
	// b 0x826820dc
	goto loc_826820DC;
loc_82681CA8:
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// stw r11,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r11.u32);
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// addi r4,r10,6024
	ctx.r4.s64 = ctx.r10.s64 + 6024;
	// bl 0x8233a258
	ctx.lr = 0x82681CC0;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,296
	ctx.r3.s64 = ctx.r31.s64 + 296;
	// bl 0x82400b48
	ctx.lr = 0x82681CCC;
	sub_82400B48(ctx, base);
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// bl 0x82333960
	ctx.lr = 0x82681CD4;
	sub_82333960(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r3,r11,6044
	ctx.r3.s64 = ctx.r11.s64 + 6044;
	// b 0x826820dc
	goto loc_826820DC;
loc_82681CE0:
	// lis r10,-32192
	ctx.r10.s64 = -2109734912;
	// ori r10,r10,48948
	ctx.r10.u64 = ctx.r10.u64 | 48948;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82681dd4
	if (ctx.cr6.eq) goto loc_82681DD4;
	// lis r10,-30770
	ctx.r10.s64 = -2016542720;
	// ori r10,r10,19939
	ctx.r10.u64 = ctx.r10.u64 | 19939;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82681d9c
	if (ctx.cr6.eq) goto loc_82681D9C;
	// lis r10,-21927
	ctx.r10.s64 = -1437007872;
	// ori r10,r10,51721
	ctx.r10.u64 = ctx.r10.u64 | 51721;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82681d58
	if (ctx.cr6.eq) goto loc_82681D58;
	// lis r10,-20312
	ctx.r10.s64 = -1331167232;
	// ori r10,r10,12433
	ctx.r10.u64 = ctx.r10.u64 | 12433;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x826820e4
	if (!ctx.cr6.eq) goto loc_826820E4;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// stw r11,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r11.u32);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// addi r4,r10,5724
	ctx.r4.s64 = ctx.r10.s64 + 5724;
	// bl 0x8233a258
	ctx.lr = 0x82681D38;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,296
	ctx.r3.s64 = ctx.r31.s64 + 296;
	// bl 0x82400b48
	ctx.lr = 0x82681D44;
	sub_82400B48(ctx, base);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82333960
	ctx.lr = 0x82681D4C;
	sub_82333960(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r3,r11,5744
	ctx.r3.s64 = ctx.r11.s64 + 5744;
	// b 0x826820dc
	goto loc_826820DC;
loc_82681D58:
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// stw r11,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r11.u32);
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// addi r4,r10,5912
	ctx.r4.s64 = ctx.r10.s64 + 5912;
	// bl 0x8233a258
	ctx.lr = 0x82681D70;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,296
	ctx.r3.s64 = ctx.r31.s64 + 296;
	// bl 0x82400b48
	ctx.lr = 0x82681D7C;
	sub_82400B48(ctx, base);
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x82333960
	ctx.lr = 0x82681D84;
	sub_82333960(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,584
	ctx.r3.s64 = ctx.r31.s64 + 584;
	// bl 0x82400b48
	ctx.lr = 0x82681D90;
	sub_82400B48(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r3,r11,5932
	ctx.r3.s64 = ctx.r11.s64 + 5932;
	// b 0x826820dc
	goto loc_826820DC;
loc_82681D9C:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// stw r11,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r11.u32);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// addi r4,r10,6356
	ctx.r4.s64 = ctx.r10.s64 + 6356;
	// bl 0x8233a258
	ctx.lr = 0x82681DB4;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,296
	ctx.r3.s64 = ctx.r31.s64 + 296;
	// bl 0x82400b48
	ctx.lr = 0x82681DC0;
	sub_82400B48(ctx, base);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82333960
	ctx.lr = 0x82681DC8;
	sub_82333960(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r3,r11,6448
	ctx.r3.s64 = ctx.r11.s64 + 6448;
	// b 0x826820dc
	goto loc_826820DC;
loc_82681DD4:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// stw r11,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r11.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r10,6356
	ctx.r4.s64 = ctx.r10.s64 + 6356;
	// bl 0x8233a258
	ctx.lr = 0x82681DEC;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,296
	ctx.r3.s64 = ctx.r31.s64 + 296;
	// bl 0x82400b48
	ctx.lr = 0x82681DF8;
	sub_82400B48(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82333960
	ctx.lr = 0x82681E00;
	sub_82333960(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r3,r11,6412
	ctx.r3.s64 = ctx.r11.s64 + 6412;
	// b 0x826820dc
	goto loc_826820DC;
loc_82681E0C:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// stw r11,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r11.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r10,6228
	ctx.r4.s64 = ctx.r10.s64 + 6228;
	// bl 0x8233a258
	ctx.lr = 0x82681E24;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,296
	ctx.r3.s64 = ctx.r31.s64 + 296;
	// bl 0x82400b48
	ctx.lr = 0x82681E30;
	sub_82400B48(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82333960
	ctx.lr = 0x82681E38;
	sub_82333960(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r3,r11,6248
	ctx.r3.s64 = ctx.r11.s64 + 6248;
	// b 0x826820dc
	goto loc_826820DC;
loc_82681E44:
	// lis r10,-2529
	ctx.r10.s64 = -165740544;
	// ori r10,r10,23970
	ctx.r10.u64 = ctx.r10.u64 | 23970;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82681fe4
	if (ctx.cr6.gt) goto loc_82681FE4;
	// beq cr6,0x82681fac
	if (ctx.cr6.eq) goto loc_82681FAC;
	// lis r10,-15069
	ctx.r10.s64 = -987561984;
	// ori r10,r10,10327
	ctx.r10.u64 = ctx.r10.u64 | 10327;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82681f40
	if (ctx.cr6.eq) goto loc_82681F40;
	// lis r10,-9000
	ctx.r10.s64 = -589824000;
	// ori r10,r10,41966
	ctx.r10.u64 = ctx.r10.u64 | 41966;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82681f08
	if (ctx.cr6.eq) goto loc_82681F08;
	// lis r10,-8461
	ctx.r10.s64 = -554500096;
	// ori r10,r10,4130
	ctx.r10.u64 = ctx.r10.u64 | 4130;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82681ed0
	if (ctx.cr6.eq) goto loc_82681ED0;
	// lis r10,-7801
	ctx.r10.s64 = -511246336;
	// ori r10,r10,39498
	ctx.r10.u64 = ctx.r10.u64 | 39498;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x826820e4
	if (!ctx.cr6.eq) goto loc_826820E4;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// stw r11,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r11.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r4,r10,5968
	ctx.r4.s64 = ctx.r10.s64 + 5968;
	// bl 0x8233a258
	ctx.lr = 0x82681EB0;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,296
	ctx.r3.s64 = ctx.r31.s64 + 296;
	// bl 0x82400b48
	ctx.lr = 0x82681EBC;
	sub_82400B48(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82333960
	ctx.lr = 0x82681EC4;
	sub_82333960(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r3,r11,5988
	ctx.r3.s64 = ctx.r11.s64 + 5988;
	// b 0x826820dc
	goto loc_826820DC;
loc_82681ED0:
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// stw r11,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r11.u32);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// addi r4,r10,5892
	ctx.r4.s64 = ctx.r10.s64 + 5892;
	// bl 0x8233a258
	ctx.lr = 0x82681EE8;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,296
	ctx.r3.s64 = ctx.r31.s64 + 296;
	// bl 0x82400b48
	ctx.lr = 0x82681EF4;
	sub_82400B48(ctx, base);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82333960
	ctx.lr = 0x82681EFC;
	sub_82333960(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r3,r11,-28512
	ctx.r3.s64 = ctx.r11.s64 + -28512;
	// b 0x826820dc
	goto loc_826820DC;
loc_82681F08:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// stw r11,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r11.u32);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// addi r4,r10,6356
	ctx.r4.s64 = ctx.r10.s64 + 6356;
	// bl 0x8233a258
	ctx.lr = 0x82681F20;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,296
	ctx.r3.s64 = ctx.r31.s64 + 296;
	// bl 0x82400b48
	ctx.lr = 0x82681F2C;
	sub_82400B48(ctx, base);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82333960
	ctx.lr = 0x82681F34;
	sub_82333960(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r3,r11,6376
	ctx.r3.s64 = ctx.r11.s64 + 6376;
	// b 0x826820dc
	goto loc_826820DC;
loc_82681F40:
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// stw r11,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r11.u32);
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// addi r4,r10,5836
	ctx.r4.s64 = ctx.r10.s64 + 5836;
	// bl 0x8233a258
	ctx.lr = 0x82681F58;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,296
	ctx.r3.s64 = ctx.r31.s64 + 296;
	// bl 0x82400b48
	ctx.lr = 0x82681F64;
	sub_82400B48(ctx, base);
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82333960
	ctx.lr = 0x82681F6C;
	sub_82333960(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mulli r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 * 24;
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lwz r11,2488(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2488);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x823339b8
	ctx.lr = 0x82681F8C;
	sub_823339B8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82400b48
	ctx.lr = 0x82681F98;
	sub_82400B48(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x82681FA0;
	sub_82333960(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r3,r11,5856
	ctx.r3.s64 = ctx.r11.s64 + 5856;
	// b 0x826820dc
	goto loc_826820DC;
loc_82681FAC:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// stw r11,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r11.u32);
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// addi r4,r10,6228
	ctx.r4.s64 = ctx.r10.s64 + 6228;
	// bl 0x8233a258
	ctx.lr = 0x82681FC4;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,296
	ctx.r3.s64 = ctx.r31.s64 + 296;
	// bl 0x82400b48
	ctx.lr = 0x82681FD0;
	sub_82400B48(ctx, base);
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x82333960
	ctx.lr = 0x82681FD8;
	sub_82333960(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r3,r11,6284
	ctx.r3.s64 = ctx.r11.s64 + 6284;
	// b 0x826820dc
	goto loc_826820DC;
loc_82681FE4:
	// lis r10,-1250
	ctx.r10.s64 = -81920000;
	// ori r10,r10,47279
	ctx.r10.u64 = ctx.r10.u64 | 47279;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8268209c
	if (ctx.cr6.eq) goto loc_8268209C;
	// lis r10,-764
	ctx.r10.s64 = -50069504;
	// ori r10,r10,46735
	ctx.r10.u64 = ctx.r10.u64 | 46735;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82682058
	if (ctx.cr6.eq) goto loc_82682058;
	// lis r10,-271
	ctx.r10.s64 = -17760256;
	// ori r10,r10,43299
	ctx.r10.u64 = ctx.r10.u64 | 43299;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x826820e4
	if (!ctx.cr6.eq) goto loc_826820E4;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// stw r11,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r11.u32);
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// addi r4,r10,6100
	ctx.r4.s64 = ctx.r10.s64 + 6100;
	// bl 0x8233a258
	ctx.lr = 0x8268202C;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,296
	ctx.r3.s64 = ctx.r31.s64 + 296;
	// bl 0x82400b48
	ctx.lr = 0x82682038;
	sub_82400B48(ctx, base);
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// bl 0x82333960
	ctx.lr = 0x82682040;
	sub_82333960(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,584
	ctx.r3.s64 = ctx.r31.s64 + 584;
	// bl 0x82400b48
	ctx.lr = 0x8268204C;
	sub_82400B48(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r3,r11,6192
	ctx.r3.s64 = ctx.r11.s64 + 6192;
	// b 0x826820dc
	goto loc_826820DC;
loc_82682058:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// stw r11,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r11.u32);
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// addi r4,r10,6100
	ctx.r4.s64 = ctx.r10.s64 + 6100;
	// bl 0x8233a258
	ctx.lr = 0x82682070;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,296
	ctx.r3.s64 = ctx.r31.s64 + 296;
	// bl 0x82400b48
	ctx.lr = 0x8268207C;
	sub_82400B48(ctx, base);
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x82333960
	ctx.lr = 0x82682084;
	sub_82333960(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,584
	ctx.r3.s64 = ctx.r31.s64 + 584;
	// bl 0x82400b48
	ctx.lr = 0x82682090;
	sub_82400B48(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r3,r11,6120
	ctx.r3.s64 = ctx.r11.s64 + 6120;
	// b 0x826820dc
	goto loc_826820DC;
loc_8268209C:
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// stw r11,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r11.u32);
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// addi r4,r10,6080
	ctx.r4.s64 = ctx.r10.s64 + 6080;
	// bl 0x8233a258
	ctx.lr = 0x826820B4;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,296
	ctx.r3.s64 = ctx.r31.s64 + 296;
	// bl 0x82400b48
	ctx.lr = 0x826820C0;
	sub_82400B48(ctx, base);
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// bl 0x82333960
	ctx.lr = 0x826820C8;
	sub_82333960(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,584
	ctx.r3.s64 = ctx.r31.s64 + 584;
	// bl 0x82400b48
	ctx.lr = 0x826820D4;
	sub_82400B48(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r3,r11,-28400
	ctx.r3.s64 = ctx.r11.s64 + -28400;
loc_826820DC:
	// bl 0x82816528
	ctx.lr = 0x826820E0;
	sub_82816528(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
loc_826820E4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82333960
	ctx.lr = 0x826820EC;
	sub_82333960(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82333960
	ctx.lr = 0x826820F4;
	sub_82333960(ctx, base);
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

