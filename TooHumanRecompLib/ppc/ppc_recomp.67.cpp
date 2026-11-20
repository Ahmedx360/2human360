#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8255DCC0"))) PPC_WEAK_FUNC(sub_8255DCC0);
PPC_FUNC_IMPL(__imp__sub_8255DCC0) {
	PPC_FUNC_PROLOGUE();
	// b 0x823b9248
	sub_823B9248(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255DCC8"))) PPC_WEAK_FUNC(sub_8255DCC8);
PPC_FUNC_IMPL(__imp__sub_8255DCC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x8255DCE8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8255dd30
	if (ctx.cr0.eq) goto loc_8255DD30;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233edc0
	ctx.lr = 0x8255DCFC;
	sub_8233EDC0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// addi r11,r11,5768
	ctx.r11.s64 = ctx.r11.s64 + 5768;
	// addi r10,r10,6956
	ctx.r10.s64 = ctx.r10.s64 + 6956;
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
	// b 0x8255dd34
	goto loc_8255DD34;
loc_8255DD30:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8255DD34:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255DD50"))) PPC_WEAK_FUNC(sub_8255DD50);
PPC_FUNC_IMPL(__imp__sub_8255DD50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b9248
	ctx.lr = 0x8255DD70;
	sub_823B9248(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8255dd84
	if (ctx.cr6.eq) goto loc_8255DD84;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8255daa8
	ctx.lr = 0x8255DD84;
	sub_8255DAA8(ctx, base);
loc_8255DD84:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255DDA0"))) PPC_WEAK_FUNC(sub_8255DDA0);
PPC_FUNC_IMPL(__imp__sub_8255DDA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-10204
	ctx.r3.s64 = ctx.r11.s64 + -10204;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255DDB0"))) PPC_WEAK_FUNC(sub_8255DDB0);
PPC_FUNC_IMPL(__imp__sub_8255DDB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8255dde8
	if (ctx.cr6.eq) goto loc_8255DDE8;
	// bl 0x823b93e8
	ctx.lr = 0x8255DDD8;
	sub_823B93E8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8255dde8
	if (!ctx.cr6.eq) goto loc_8255DDE8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8255ddf4
	goto loc_8255DDF4;
loc_8255DDE8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823608e8
	ctx.lr = 0x8255DDF4;
	sub_823608E8(ctx, base);
loc_8255DDF4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255DE10"))) PPC_WEAK_FUNC(sub_8255DE10);
PPC_FUNC_IMPL(__imp__sub_8255DE10) {
	PPC_FUNC_PROLOGUE();
	// b 0x823b93e8
	sub_823B93E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255DE18"))) PPC_WEAK_FUNC(sub_8255DE18);
PPC_FUNC_IMPL(__imp__sub_8255DE18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x8255DE38;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8255de78
	if (ctx.cr0.eq) goto loc_8255DE78;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82360a00
	ctx.lr = 0x8255DE4C;
	sub_82360A00(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// addi r11,r11,7008
	ctx.r11.s64 = ctx.r11.s64 + 7008;
	// addi r10,r10,8060
	ctx.r10.s64 = ctx.r10.s64 + 8060;
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
	// b 0x8255de7c
	goto loc_8255DE7C;
loc_8255DE78:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8255DE7C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255DE98"))) PPC_WEAK_FUNC(sub_8255DE98);
PPC_FUNC_IMPL(__imp__sub_8255DE98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b93e8
	ctx.lr = 0x8255DEB8;
	sub_823B93E8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8255dec8
	if (!ctx.cr6.eq) goto loc_8255DEC8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8255dee0
	goto loc_8255DEE0;
loc_8255DEC8:
	// bl 0x823ab588
	ctx.lr = 0x8255DECC;
	sub_823AB588(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8255dee0
	if (ctx.cr6.eq) goto loc_8255DEE0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82400188
	ctx.lr = 0x8255DEE0;
	sub_82400188(ctx, base);
loc_8255DEE0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255DEF8"))) PPC_WEAK_FUNC(sub_8255DEF8);
PPC_FUNC_IMPL(__imp__sub_8255DEF8) {
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
	// addi r31,r11,-21656
	ctx.r31.s64 = ctx.r11.s64 + -21656;
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82332d50
	ctx.lr = 0x8255DF30;
	sub_82332D50(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r10,r3,24
	ctx.r10.s64 = ctx.r3.s64 * 24;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8255df5c
	if (ctx.cr0.eq) goto loc_8255DF5C;
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
loc_8255DF5C:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8255df80
	if (ctx.cr6.eq) goto loc_8255DF80;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,24
	ctx.r4.s64 = 24;
	// bl 0x82332c38
	ctx.lr = 0x8255DF80;
	sub_82332C38(ctx, base);
loc_8255DF80:
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

__attribute__((alias("__imp__sub_8255DF98"))) PPC_WEAK_FUNC(sub_8255DF98);
PPC_FUNC_IMPL(__imp__sub_8255DF98) {
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
	// addi r11,r11,-21656
	ctx.r11.s64 = ctx.r11.s64 + -21656;
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
	// ble cr6,0x8255e004
	if (!ctx.cr6.gt) goto loc_8255E004;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8255DFD4:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8255dff4
	if (ctx.cr6.eq) goto loc_8255DFF4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8255dfd4
	if (ctx.cr6.lt) goto loc_8255DFD4;
	// b 0x8255e004
	goto loc_8255E004;
loc_8255DFF4:
	// mulli r11,r10,24
	ctx.r11.s64 = ctx.r10.s64 * 24;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
loc_8255E004:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8255e02c
	if (ctx.cr6.eq) goto loc_8255E02C;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8255E024;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8255e030
	goto loc_8255E030;
loc_8255E02C:
	// bl 0x824daf88
	ctx.lr = 0x8255E030;
	sub_824DAF88(ctx, base);
loc_8255E030:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255E040"))) PPC_WEAK_FUNC(sub_8255E040);
PPC_FUNC_IMPL(__imp__sub_8255E040) {
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
	// addi r11,r11,-21656
	ctx.r11.s64 = ctx.r11.s64 + -21656;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8255e0a0
	if (!ctx.cr6.gt) goto loc_8255E0A0;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8255E06C:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8255e08c
	if (ctx.cr6.eq) goto loc_8255E08C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8255e06c
	if (ctx.cr6.lt) goto loc_8255E06C;
	// b 0x8255e0a0
	goto loc_8255E0A0;
loc_8255E08C:
	// mulli r11,r10,24
	ctx.r11.s64 = ctx.r10.s64 * 24;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8255e0a8
	if (!ctx.cr6.eq) goto loc_8255E0A8;
loc_8255E0A0:
	// bl 0x824db030
	ctx.lr = 0x8255E0A4;
	sub_824DB030(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8255E0A8:
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

__attribute__((alias("__imp__sub_8255E0C0"))) PPC_WEAK_FUNC(sub_8255E0C0);
PPC_FUNC_IMPL(__imp__sub_8255E0C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r11,r11,-21656
	ctx.r11.s64 = ctx.r11.s64 + -21656;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8255e140
	if (!ctx.cr6.gt) goto loc_8255E140;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8255E0FC:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r31
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8255e11c
	if (ctx.cr6.eq) goto loc_8255E11C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8255e0fc
	if (ctx.cr6.lt) goto loc_8255E0FC;
	// b 0x8255e140
	goto loc_8255E140;
loc_8255E11C:
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
	ctx.lr = 0x8255E138;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8255e14c
	if (!ctx.cr0.eq) goto loc_8255E14C;
loc_8255E140:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824db0b0
	ctx.lr = 0x8255E14C;
	sub_824DB0B0(ctx, base);
loc_8255E14C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255E168"))) PPC_WEAK_FUNC(sub_8255E168);
PPC_FUNC_IMPL(__imp__sub_8255E168) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8255E170;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x824ff818
	ctx.lr = 0x8255E17C;
	sub_824FF818(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r11,r11,728
	ctx.r11.s64 = ctx.r11.s64 + 728;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// addi r10,r10,3164
	ctx.r10.s64 = ctx.r10.s64 + 3164;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r9,r9,3216
	ctx.r9.s64 = ctx.r9.s64 + 3216;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// li r10,12
	ctx.r10.s64 = 12;
	// stw r30,6984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6984, ctx.r30.u32);
	// stw r11,6980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6980, ctx.r11.u32);
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// stw r30,6988(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6988, ctx.r30.u32);
	// stw r30,6992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6992, ctx.r30.u32);
	// addi r3,r9,-1052
	ctx.r3.s64 = ctx.r9.s64 + -1052;
	// stw r30,6996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6996, ctx.r30.u32);
	// stw r30,6976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6976, ctx.r30.u32);
	// stw r10,7088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7088, ctx.r10.u32);
	// stw r30,7092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7092, ctx.r30.u32);
	// stw r30,7096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7096, ctx.r30.u32);
	// stw r30,7100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7100, ctx.r30.u32);
	// stw r30,7104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7104, ctx.r30.u32);
	// stw r30,7084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7084, ctx.r30.u32);
	// stw r11,7116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7116, ctx.r11.u32);
	// stw r30,7120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7120, ctx.r30.u32);
	// stw r30,7124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7124, ctx.r30.u32);
	// stw r30,7128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7128, ctx.r30.u32);
	// stw r30,7132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7132, ctx.r30.u32);
	// stw r30,7112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7112, ctx.r30.u32);
	// bl 0x82816528
	ctx.lr = 0x8255E200;
	sub_82816528(ctx, base);
	// lwz r11,6756(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6756);
	// stw r3,6704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6704, ctx.r3.u32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// stw r30,6852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6852, ctx.r30.u32);
	// addi r3,r10,-10172
	ctx.r3.s64 = ctx.r10.s64 + -10172;
	// stw r11,6756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6756, ctx.r11.u32);
	// bl 0x82816528
	ctx.lr = 0x8255E224;
	sub_82816528(ctx, base);
	// stw r3,1604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1604, ctx.r3.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,-1048
	ctx.r3.s64 = ctx.r11.s64 + -1048;
	// bl 0x82816528
	ctx.lr = 0x8255E234;
	sub_82816528(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r3,1412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1412, ctx.r3.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r30,6836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6836, ctx.r30.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r29,5336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5336, ctx.r29.u32);
	// li r8,16384
	ctx.r8.s64 = 16384;
	// stw r30,3172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3172, ctx.r30.u32);
	// li r7,7
	ctx.r7.s64 = 7;
	// lfs f0,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,7000(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7000, temp.u32);
	// stw r10,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r10.u32);
	// stw r29,1692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1692, ctx.r29.u32);
	// stw r29,1508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1508, ctx.r29.u32);
	// stw r29,1504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1504, ctx.r29.u32);
	// stw r9,2236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2236, ctx.r9.u32);
	// stw r30,5448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5448, ctx.r30.u32);
	// stw r29,924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 924, ctx.r29.u32);
	// stw r8,932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 932, ctx.r8.u32);
	// stw r30,6796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6796, ctx.r30.u32);
	// stw r30,7152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7152, ctx.r30.u32);
	// stw r29,7232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7232, ctx.r29.u32);
	// stw r30,7264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7264, ctx.r30.u32);
	// stw r30,7276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7276, ctx.r30.u32);
	// stw r30,7240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7240, ctx.r30.u32);
	// stw r30,7376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7376, ctx.r30.u32);
	// stw r30,6800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6800, ctx.r30.u32);
	// stw r30,6804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6804, ctx.r30.u32);
	// stw r7,3612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3612, ctx.r7.u32);
	// stw r29,6816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6816, ctx.r29.u32);
	// stw r29,6888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6888, ctx.r29.u32);
	// stw r29,6896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6896, ctx.r29.u32);
	// stw r29,6904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6904, ctx.r29.u32);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// stw r29,6912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6912, ctx.r29.u32);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// stw r29,6920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6920, ctx.r29.u32);
	// stw r29,7044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7044, ctx.r29.u32);
	// addi r3,r10,-1020
	ctx.r3.s64 = ctx.r10.s64 + -1020;
	// stw r30,7288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7288, ctx.r30.u32);
	// stw r30,6856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6856, ctx.r30.u32);
	// stw r30,7136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7136, ctx.r30.u32);
	// stw r30,6808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6808, ctx.r30.u32);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// addi r28,r11,1268
	ctx.r28.s64 = ctx.r11.s64 + 1268;
	// bl 0x82816528
	ctx.lr = 0x8255E2F0;
	sub_82816528(ctx, base);
	// li r7,-1
	ctx.r7.s64 = -1;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// addi r4,r31,1740
	ctx.r4.s64 = ctx.r31.s64 + 1740;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82509750
	ctx.lr = 0x8255E308;
	sub_82509750(ctx, base);
	// lis r11,9996
	ctx.r11.s64 = 655097856;
	// lis r10,11582
	ctx.r10.s64 = 759037952;
	// stw r30,5480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5480, ctx.r30.u32);
	// lis r9,2293
	ctx.r9.s64 = 150274048;
	// stw r30,6864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6864, ctx.r30.u32);
	// ori r11,r11,57072
	ctx.r11.u64 = ctx.r11.u64 | 57072;
	// stw r29,6868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6868, ctx.r29.u32);
	// ori r10,r10,49179
	ctx.r10.u64 = ctx.r10.u64 | 49179;
	// stw r29,6872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6872, ctx.r29.u32);
	// ori r9,r9,52204
	ctx.r9.u64 = ctx.r9.u64 | 52204;
	// stw r11,2612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2612, ctx.r11.u32);
	// stw r29,3124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3124, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,6876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6876, ctx.r30.u32);
	// stw r10,2608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2608, ctx.r10.u32);
	// stw r9,2604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2604, ctx.r9.u32);
	// stw r30,7220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7220, ctx.r30.u32);
	// stw r30,7216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7216, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255E358"))) PPC_WEAK_FUNC(sub_8255E358);
PPC_FUNC_IMPL(__imp__sub_8255E358) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8255E360;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,7128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8255e3a4
	if (!ctx.cr6.gt) goto loc_8255E3A4;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8255E380:
	// lwz r11,7124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7124);
	// lwz r3,13024(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lwzx r4,r29,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// bl 0x8282b448
	ctx.lr = 0x8255E390;
	sub_8282B448(ctx, base);
	// lwz r11,7128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7128);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8255e380
	if (ctx.cr6.lt) goto loc_8255E380;
loc_8255E3A4:
	// lwz r3,13024(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lwz r4,7280(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7280);
	// bl 0x8282b448
	ctx.lr = 0x8255E3B0;
	sub_8282B448(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824ff908
	ctx.lr = 0x8255E3B8;
	sub_824FF908(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255E3C0"))) PPC_WEAK_FUNC(sub_8255E3C0);
PPC_FUNC_IMPL(__imp__sub_8255E3C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x8255E3C8;
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
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// lwz r11,7128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7128);
	// addic. r31,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r31.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x8255e428
	if (ctx.cr0.lt) goto loc_8255E428;
	// rlwinm r29,r31,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
loc_8255E3EC:
	// lwz r11,7124(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7124);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// lwz r11,112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8255e41c
	if (!ctx.cr6.eq) goto loc_8255E41C;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,7112
	ctx.r3.s64 = ctx.r30.s64 + 7112;
	// bl 0x82332ca8
	ctx.lr = 0x8255E41C;
	sub_82332CA8(ctx, base);
loc_8255E41C:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
	// bge 0x8255e3ec
	if (!ctx.cr0.lt) goto loc_8255E3EC;
loc_8255E428:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824efe20
	ctx.lr = 0x8255E43C;
	sub_824EFE20(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255E448"))) PPC_WEAK_FUNC(sub_8255E448);
PPC_FUNC_IMPL(__imp__sub_8255E448) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8255E450;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x824ffb80
	ctx.lr = 0x8255E464;
	sub_824FFB80(ctx, base);
	// lwz r11,5728(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5728);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8255e478
	if (ctx.cr6.eq) goto loc_8255E478;
	// lwz r4,5724(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5724);
	// b 0x8255e480
	goto loc_8255E480;
loc_8255E478:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r4,r11,7896
	ctx.r4.s64 = ctx.r11.s64 + 7896;
loc_8255E480:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82409058
	ctx.lr = 0x8255E488;
	sub_82409058(ctx, base);
	// lwz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// addi r10,r1,164
	ctx.r10.s64 = ctx.r1.s64 + 164;
	// lwz r30,132(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8255e4ac
	if (ctx.cr6.eq) goto loc_8255E4AC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8255e4ac
	if (ctx.cr6.eq) goto loc_8255E4AC;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82332db8
	ctx.lr = 0x8255E4AC;
	sub_82332DB8(ctx, base);
loc_8255E4AC:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x8255ebf0
	if (ctx.cr6.eq) goto loc_8255EBF0;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8255ebf0
	if (ctx.cr6.eq) goto loc_8255EBF0;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-14096
	ctx.r4.s64 = ctx.r11.s64 + -14096;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829e6978
	ctx.lr = 0x8255E4E4;
	sub_829E6978(ctx, base);
	// stfs f1,3120(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3120, temp.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-984
	ctx.r4.s64 = ctx.r11.s64 + -984;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829e6978
	ctx.lr = 0x8255E500;
	sub_829E6978(ctx, base);
	// li r11,7052
	ctx.r11.s64 = 7052;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r10,-960
	ctx.r4.s64 = ctx.r10.s64 + -960;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfiwx f0,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.f0.u32);
	// bl 0x829e6978
	ctx.lr = 0x8255E524;
	sub_829E6978(ctx, base);
	// li r11,7048
	ctx.r11.s64 = 7048;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r10,-940
	ctx.r4.s64 = ctx.r10.s64 + -940;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfiwx f0,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.f0.u32);
	// bl 0x829e6978
	ctx.lr = 0x8255E548;
	sub_829E6978(ctx, base);
	// stfs f1,7060(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7060, temp.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-916
	ctx.r4.s64 = ctx.r11.s64 + -916;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829e6978
	ctx.lr = 0x8255E564;
	sub_829E6978(ctx, base);
	// stfs f1,7064(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7064, temp.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-892
	ctx.r4.s64 = ctx.r11.s64 + -892;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829e6978
	ctx.lr = 0x8255E580;
	sub_829E6978(ctx, base);
	// li r11,7068
	ctx.r11.s64 = 7068;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r10,-864
	ctx.r4.s64 = ctx.r10.s64 + -864;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfiwx f0,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.f0.u32);
	// bl 0x829e6978
	ctx.lr = 0x8255E5A4;
	sub_829E6978(ctx, base);
	// stfs f1,7080(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7080, temp.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-844
	ctx.r4.s64 = ctx.r11.s64 + -844;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829e6978
	ctx.lr = 0x8255E5C0;
	sub_829E6978(ctx, base);
	// li r11,7076
	ctx.r11.s64 = 7076;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r10,-824
	ctx.r4.s64 = ctx.r10.s64 + -824;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfiwx f0,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.f0.u32);
	// bl 0x829e6978
	ctx.lr = 0x8255E5E4;
	sub_829E6978(ctx, base);
	// li r11,7140
	ctx.r11.s64 = 7140;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r10,-808
	ctx.r4.s64 = ctx.r10.s64 + -808;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfiwx f0,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.f0.u32);
	// bl 0x829e6978
	ctx.lr = 0x8255E608;
	sub_829E6978(ctx, base);
	// stfs f1,7144(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7144, temp.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r11,-792
	ctx.r4.s64 = ctx.r11.s64 + -792;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829e6978
	ctx.lr = 0x8255E624;
	sub_829E6978(ctx, base);
	// stfs f1,7148(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7148, temp.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-776
	ctx.r4.s64 = ctx.r11.s64 + -776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829e6978
	ctx.lr = 0x8255E640;
	sub_829E6978(ctx, base);
	// li r11,7156
	ctx.r11.s64 = 7156;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r10,-760
	ctx.r4.s64 = ctx.r10.s64 + -760;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfiwx f0,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.f0.u32);
	// bl 0x829e6978
	ctx.lr = 0x8255E664;
	sub_829E6978(ctx, base);
	// stfs f1,7160(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7160, temp.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-744
	ctx.r4.s64 = ctx.r11.s64 + -744;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829e6978
	ctx.lr = 0x8255E680;
	sub_829E6978(ctx, base);
	// stfs f1,7164(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7164, temp.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-728
	ctx.r4.s64 = ctx.r11.s64 + -728;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829e6978
	ctx.lr = 0x8255E69C;
	sub_829E6978(ctx, base);
	// stfs f1,7168(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7168, temp.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-708
	ctx.r4.s64 = ctx.r11.s64 + -708;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829e6978
	ctx.lr = 0x8255E6B8;
	sub_829E6978(ctx, base);
	// li r11,7172
	ctx.r11.s64 = 7172;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r10,-692
	ctx.r4.s64 = ctx.r10.s64 + -692;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfiwx f0,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.f0.u32);
	// bl 0x829e6978
	ctx.lr = 0x8255E6DC;
	sub_829E6978(ctx, base);
	// stfs f1,6884(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6884, temp.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-676
	ctx.r4.s64 = ctx.r11.s64 + -676;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829e6978
	ctx.lr = 0x8255E6F8;
	sub_829E6978(ctx, base);
	// stfs f1,6892(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6892, temp.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-664
	ctx.r4.s64 = ctx.r11.s64 + -664;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829e6978
	ctx.lr = 0x8255E714;
	sub_829E6978(ctx, base);
	// stfs f1,6900(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6900, temp.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-648
	ctx.r4.s64 = ctx.r11.s64 + -648;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829e6978
	ctx.lr = 0x8255E730;
	sub_829E6978(ctx, base);
	// stfs f1,6908(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6908, temp.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-636
	ctx.r4.s64 = ctx.r11.s64 + -636;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829e6978
	ctx.lr = 0x8255E74C;
	sub_829E6978(ctx, base);
	// stfs f1,6916(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6916, temp.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r11,-620
	ctx.r4.s64 = ctx.r11.s64 + -620;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829e6978
	ctx.lr = 0x8255E768;
	sub_829E6978(ctx, base);
	// li r11,7176
	ctx.r11.s64 = 7176;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r10,-604
	ctx.r4.s64 = ctx.r10.s64 + -604;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfiwx f0,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.f0.u32);
	// bl 0x829e6978
	ctx.lr = 0x8255E78C;
	sub_829E6978(ctx, base);
	// stfs f1,7180(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7180, temp.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-588
	ctx.r4.s64 = ctx.r11.s64 + -588;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829e6978
	ctx.lr = 0x8255E7A8;
	sub_829E6978(ctx, base);
	// stfs f1,7184(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7184, temp.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-572
	ctx.r4.s64 = ctx.r11.s64 + -572;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829e6978
	ctx.lr = 0x8255E7C4;
	sub_829E6978(ctx, base);
	// li r11,3340
	ctx.r11.s64 = 3340;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r10,-556
	ctx.r4.s64 = ctx.r10.s64 + -556;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfiwx f0,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.f0.u32);
	// bl 0x829e6978
	ctx.lr = 0x8255E7E8;
	sub_829E6978(ctx, base);
	// li r11,7188
	ctx.r11.s64 = 7188;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r10,-536
	ctx.r4.s64 = ctx.r10.s64 + -536;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfiwx f0,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.f0.u32);
	// bl 0x829e6978
	ctx.lr = 0x8255E80C;
	sub_829E6978(ctx, base);
	// stfs f1,7192(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7192, temp.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-512
	ctx.r4.s64 = ctx.r11.s64 + -512;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829e6978
	ctx.lr = 0x8255E828;
	sub_829E6978(ctx, base);
	// li r11,7196
	ctx.r11.s64 = 7196;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r10,-488
	ctx.r4.s64 = ctx.r10.s64 + -488;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfiwx f0,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.f0.u32);
	// bl 0x829e6978
	ctx.lr = 0x8255E84C;
	sub_829E6978(ctx, base);
	// stfs f1,7200(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7200, temp.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-464
	ctx.r4.s64 = ctx.r11.s64 + -464;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829e6978
	ctx.lr = 0x8255E868;
	sub_829E6978(ctx, base);
	// stfs f1,7204(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7204, temp.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-440
	ctx.r4.s64 = ctx.r11.s64 + -440;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829e6978
	ctx.lr = 0x8255E884;
	sub_829E6978(ctx, base);
	// li r11,7208
	ctx.r11.s64 = 7208;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stfiwx f0,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.f0.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-416
	ctx.r4.s64 = ctx.r11.s64 + -416;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829e6978
	ctx.lr = 0x8255E8A8;
	sub_829E6978(ctx, base);
	// li r11,7212
	ctx.r11.s64 = 7212;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r10,-404
	ctx.r4.s64 = ctx.r10.s64 + -404;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfiwx f0,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.f0.u32);
	// bl 0x829e6978
	ctx.lr = 0x8255E8CC;
	sub_829E6978(ctx, base);
	// li r11,7248
	ctx.r11.s64 = 7248;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r10,-392
	ctx.r4.s64 = ctx.r10.s64 + -392;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfiwx f0,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.f0.u32);
	// bl 0x829e6978
	ctx.lr = 0x8255E8F0;
	sub_829E6978(ctx, base);
	// stfs f1,7256(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7256, temp.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-380
	ctx.r4.s64 = ctx.r11.s64 + -380;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829e6978
	ctx.lr = 0x8255E90C;
	sub_829E6978(ctx, base);
	// li r11,7260
	ctx.r11.s64 = 7260;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r10,-360
	ctx.r4.s64 = ctx.r10.s64 + -360;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfiwx f0,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.f0.u32);
	// bl 0x829e6978
	ctx.lr = 0x8255E930;
	sub_829E6978(ctx, base);
	// li r11,7224
	ctx.r11.s64 = 7224;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r10,-344
	ctx.r4.s64 = ctx.r10.s64 + -344;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfiwx f0,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.f0.u32);
	// bl 0x829e6978
	ctx.lr = 0x8255E954;
	sub_829E6978(ctx, base);
	// li r11,7268
	ctx.r11.s64 = 7268;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r10,-316
	ctx.r4.s64 = ctx.r10.s64 + -316;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfiwx f0,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.f0.u32);
	// bl 0x829e6978
	ctx.lr = 0x8255E978;
	sub_829E6978(ctx, base);
	// stfs f1,6948(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6948, temp.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r27,r11,-292
	ctx.r27.s64 = ctx.r11.s64 + -292;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x829e6978
	ctx.lr = 0x8255E998;
	sub_829E6978(ctx, base);
	// li r11,7024
	ctx.r11.s64 = 7024;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfiwx f0,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.f0.u32);
	// bl 0x829e6978
	ctx.lr = 0x8255E9B8;
	sub_829E6978(ctx, base);
	// li r11,7012
	ctx.r11.s64 = 7012;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r10,-268
	ctx.r4.s64 = ctx.r10.s64 + -268;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfiwx f0,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.f0.u32);
	// bl 0x829e6978
	ctx.lr = 0x8255E9DC;
	sub_829E6978(ctx, base);
	// li r11,7020
	ctx.r11.s64 = 7020;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r10,-240
	ctx.r4.s64 = ctx.r10.s64 + -240;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfiwx f0,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.f0.u32);
	// bl 0x829e6978
	ctx.lr = 0x8255EA00;
	sub_829E6978(ctx, base);
	// li r11,7028
	ctx.r11.s64 = 7028;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r10,-216
	ctx.r4.s64 = ctx.r10.s64 + -216;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfiwx f0,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.f0.u32);
	// bl 0x829e6978
	ctx.lr = 0x8255EA24;
	sub_829E6978(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.f0.u64);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r11,7008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7008, ctx.r11.u32);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// stw r11,7004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7004, ctx.r11.u32);
	// addi r4,r10,-204
	ctx.r4.s64 = ctx.r10.s64 + -204;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829e6978
	ctx.lr = 0x8255EA50;
	sub_829E6978(ctx, base);
	// stfs f1,7032(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7032, temp.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-184
	ctx.r4.s64 = ctx.r11.s64 + -184;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829e6978
	ctx.lr = 0x8255EA6C;
	sub_829E6978(ctx, base);
	// li r11,7036
	ctx.r11.s64 = 7036;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r10,-160
	ctx.r4.s64 = ctx.r10.s64 + -160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfiwx f0,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.f0.u32);
	// bl 0x829e6978
	ctx.lr = 0x8255EA90;
	sub_829E6978(ctx, base);
	// stfs f1,7040(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7040, temp.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-132
	ctx.r4.s64 = ctx.r11.s64 + -132;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829e6978
	ctx.lr = 0x8255EAAC;
	sub_829E6978(ctx, base);
	// stfs f1,6932(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6932, temp.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-108
	ctx.r4.s64 = ctx.r11.s64 + -108;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829e6978
	ctx.lr = 0x8255EAC8;
	sub_829E6978(ctx, base);
	// li r11,6936
	ctx.r11.s64 = 6936;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r10,-84
	ctx.r4.s64 = ctx.r10.s64 + -84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfiwx f0,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.f0.u32);
	// bl 0x829e6978
	ctx.lr = 0x8255EAEC;
	sub_829E6978(ctx, base);
	// stfs f1,6940(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6940, temp.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-60
	ctx.r4.s64 = ctx.r11.s64 + -60;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829e6978
	ctx.lr = 0x8255EB08;
	sub_829E6978(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stfs f1,6944(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6944, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r11,-36
	ctx.r4.s64 = ctx.r11.s64 + -36;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829e6978
	ctx.lr = 0x8255EB24;
	sub_829E6978(ctx, base);
	// stfs f1,6824(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6824, temp.u32);
	// stw r28,6844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6844, ctx.r28.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stw r28,6848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6848, ctx.r28.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-20
	ctx.r4.s64 = ctx.r11.s64 + -20;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829e6978
	ctx.lr = 0x8255EB48;
	sub_829E6978(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.f0.u64);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// li r27,1
	ctx.r27.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8255eb64
	if (!ctx.cr6.gt) goto loc_8255EB64;
	// stw r27,6844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6844, ctx.r27.u32);
loc_8255EB64:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,0
	ctx.r4.s64 = ctx.r11.s64 + 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829e6978
	ctx.lr = 0x8255EB7C;
	sub_829E6978(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.f0.u64);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8255eb94
	if (!ctx.cr6.gt) goto loc_8255EB94;
	// stw r27,6848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6848, ctx.r27.u32);
loc_8255EB94:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,20
	ctx.r4.s64 = ctx.r11.s64 + 20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829e6978
	ctx.lr = 0x8255EBAC;
	sub_829E6978(ctx, base);
	// stfs f1,6812(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6812, temp.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,52
	ctx.r4.s64 = ctx.r11.s64 + 52;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829e6978
	ctx.lr = 0x8255EBC8;
	sub_829E6978(ctx, base);
	// stfs f1,6828(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6828, temp.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,72
	ctx.r4.s64 = ctx.r11.s64 + 72;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829e6978
	ctx.lr = 0x8255EBE4;
	sub_829E6978(ctx, base);
	// li r11,6820
	ctx.r11.s64 = 6820;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfiwx f0,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.f0.u32);
loc_8255EBF0:
	// lwz r11,7024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7024);
	// lis r10,-32170
	ctx.r10.s64 = -2108293120;
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r28,1972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1972, ctx.r28.u32);
	// addi r10,r10,-2888
	ctx.r10.s64 = ctx.r10.s64 + -2888;
	// li r5,1
	ctx.r5.s64 = 1;
	// lfs f1,7032(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 7032);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// stw r11,7016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7016, ctx.r11.u32);
	// ld r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// bl 0x8255cf58
	ctx.lr = 0x8255EC24;
	sub_8255CF58(ctx, base);
	// stfs f31,152(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// ld r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f4,908(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f4.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,7248(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7248);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,7252(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7252);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82331120
	ctx.lr = 0x8255EC7C;
	sub_82331120(ctx, base);
	// lwz r11,7252(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7252);
	// lwz r10,460(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 460);
	// oris r10,r10,256
	ctx.r10.u64 = ctx.r10.u64 | 16777216;
	// stw r10,460(r11)
	PPC_STORE_U32(ctx.r11.u32 + 460, ctx.r10.u32);
	// lwz r11,7252(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7252);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255ECA8"))) PPC_WEAK_FUNC(sub_8255ECA8);
PPC_FUNC_IMPL(__imp__sub_8255ECA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,25756(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25756);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8255ece8
	if (!ctx.cr0.eq) goto loc_8255ECE8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// stw r11,25756(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25756, ctx.r11.u32);
	// addi r3,r9,84
	ctx.r3.s64 = ctx.r9.s64 + 84;
	// bl 0x82816528
	ctx.lr = 0x8255ECE0;
	sub_82816528(ctx, base);
	// stw r3,25752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25752, ctx.r3.u32);
	// b 0x8255ecec
	goto loc_8255ECEC;
loc_8255ECE8:
	// lwz r3,25752(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25752);
loc_8255ECEC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255ED00"))) PPC_WEAK_FUNC(sub_8255ED00);
PPC_FUNC_IMPL(__imp__sub_8255ED00) {
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
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r3,r11,116
	ctx.r3.s64 = ctx.r11.s64 + 116;
	// bl 0x82816528
	ctx.lr = 0x8255ED20;
	sub_82816528(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x8255ED30;
	sub_82410060(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,152
	ctx.r3.s64 = ctx.r11.s64 + 152;
	// bl 0x82816528
	ctx.lr = 0x8255ED3C;
	sub_82816528(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82410060
	ctx.lr = 0x8255ED4C;
	sub_82410060(ctx, base);
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

__attribute__((alias("__imp__sub_8255ED60"))) PPC_WEAK_FUNC(sub_8255ED60);
PPC_FUNC_IMPL(__imp__sub_8255ED60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,25748(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25748);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8255eda0
	if (!ctx.cr0.eq) goto loc_8255EDA0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// stw r11,25748(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25748, ctx.r11.u32);
	// addi r3,r9,188
	ctx.r3.s64 = ctx.r9.s64 + 188;
	// bl 0x82816528
	ctx.lr = 0x8255ED98;
	sub_82816528(ctx, base);
	// stw r3,25744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25744, ctx.r3.u32);
	// b 0x8255eda4
	goto loc_8255EDA4;
loc_8255EDA0:
	// lwz r3,25744(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25744);
loc_8255EDA4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255EDB8"))) PPC_WEAK_FUNC(sub_8255EDB8);
PPC_FUNC_IMPL(__imp__sub_8255EDB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r10,r11,-32764
	ctx.r10.s64 = ctx.r11.s64 + -32764;
	// lfs f13,-32764(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32764);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
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

__attribute__((alias("__imp__sub_8255EDD8"))) PPC_WEAK_FUNC(sub_8255EDD8);
PPC_FUNC_IMPL(__imp__sub_8255EDD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8255EDE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// std r6,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r6.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r7,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r7.u64);
	// addi r3,r11,-10204
	ctx.r3.s64 = ctx.r11.s64 + -10204;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82816528
	ctx.lr = 0x8255EE04;
	sub_82816528(ctx, base);
	// cmplw cr6,r29,r3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x8255ee38
	if (!ctx.cr6.eq) goto loc_8255EE38;
	// lfs f0,7164(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 7164);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// stfs f12,4(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// b 0x8255ee48
	goto loc_8255EE48;
loc_8255EE38:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
loc_8255EE48:
	// stfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255EE58"))) PPC_WEAK_FUNC(sub_8255EE58);
PPC_FUNC_IMPL(__imp__sub_8255EE58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x8255EE60;
	__savegprlr_26(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x824ffa88
	ctx.lr = 0x8255EE6C;
	sub_824FFA88(ctx, base);
	// lwz r4,6840(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6840);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8255eea0
	if (ctx.cr6.eq) goto loc_8255EEA0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824f45f0
	ctx.lr = 0x8255EE80;
	sub_824F45F0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1456(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1456);
	// lwz r30,6748(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6748);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8255EE94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// subf r4,r30,r3
	ctx.r4.s64 = ctx.r3.s64 - ctx.r30.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8289f1a8
	ctx.lr = 0x8255EEA0;
	sub_8289F1A8(ctx, base);
loc_8255EEA0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8255EEB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r26,-31949
	ctx.r26.s64 = -2093809664;
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// bgt 0x8255ef0c
	if (ctx.cr0.gt) goto loc_8255EF0C;
	// lwz r10,6836(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6836);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8255ef0c
	if (!ctx.cr6.eq) goto loc_8255EF0C;
	// lwz r10,960(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x8255ef0c
	if (!ctx.cr6.eq) goto loc_8255EF0C;
	// stw r29,2112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2112, ctx.r29.u32);
	// lwz r10,788(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x8255ef0c
	if (!ctx.cr6.eq) goto loc_8255EF0C;
	// lwz r10,1052(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1052);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8255ef0c
	if (!ctx.cr6.eq) goto loc_8255EF0C;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// stw r10,2112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2112, ctx.r10.u32);
loc_8255EF0C:
	// lwz r10,6836(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6836);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8255ef2c
	if (ctx.cr6.eq) goto loc_8255EF2C;
	// lwz r10,960(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x8255ef2c
	if (!ctx.cr6.eq) goto loc_8255EF2C;
	// stw r27,2112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2112, ctx.r27.u32);
loc_8255EF2C:
	// lwz r4,7236(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7236);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8255EF38;
	sub_829B9720(ctx, base);
	// bl 0x82333a20
	ctx.lr = 0x8255EF3C;
	sub_82333A20(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8255ef70
	if (ctx.cr0.eq) goto loc_8255EF70;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8255EF5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,7248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7248);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x8255ef80
	if (ctx.cr6.gt) goto loc_8255EF80;
	// b 0x8255ef7c
	goto loc_8255EF7C;
loc_8255EF70:
	// lwz r11,7244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7244);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8255ef80
	if (ctx.cr6.eq) goto loc_8255EF80;
loc_8255EF7C:
	// stw r27,7244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7244, ctx.r27.u32);
loc_8255EF80:
	// lwz r11,6868(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6868);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8255efd4
	if (!ctx.cr6.eq) goto loc_8255EFD4;
	// lwz r11,6864(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6864);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8255efd4
	if (ctx.cr6.eq) goto loc_8255EFD4;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// addi r4,r11,1256
	ctx.r4.s64 = ctx.r11.s64 + 1256;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8255EFB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f13,1128(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1128);
	ctx.f13.f64 = double(temp.f32);
	// stw r27,6864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6864, ctx.r27.u32);
	// lfs f0,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x8255efd4
	if (!ctx.cr6.eq) goto loc_8255EFD4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824e5420
	ctx.lr = 0x8255EFD4;
	sub_824E5420(ctx, base);
loc_8255EFD4:
	// lwz r11,7244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7244);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8255f0b8
	if (ctx.cr6.eq) goto loc_8255F0B8;
	// lwz r11,7232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7232);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8255f120
	if (!ctx.cr6.eq) goto loc_8255F120;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8255f120
	if (ctx.cr6.eq) goto loc_8255F120;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829c2520
	ctx.lr = 0x8255EFFC;
	sub_829C2520(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8255f120
	if (ctx.cr0.eq) goto loc_8255F120;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r4,-6866
	ctx.r4.s64 = -449970176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,31988
	ctx.r4.u64 = ctx.r4.u64 | 31988;
	// lwz r11,1060(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1060);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8255F020;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x828aee00
	ctx.lr = 0x8255F030;
	sub_828AEE00(ctx, base);
	// lfs f0,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lfs f13,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r3,r11,19164
	ctx.r3.s64 = ctx.r11.s64 + 19164;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r30,104(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f0,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x82816528
	ctx.lr = 0x8255F068;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// rldicr r6,r30,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r3,7228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7228);
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82979140
	ctx.lr = 0x8255F07C;
	sub_82979140(ctx, base);
	// lwz r3,7280(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7280);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 460);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8255F094;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,7280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7280);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8255f120
	if (ctx.cr6.eq) goto loc_8255F120;
	// lwz r3,1408(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1408);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8255f120
	if (ctx.cr6.eq) goto loc_8255F120;
	// li r4,48
	ctx.r4.s64 = 48;
	// bl 0x82978d98
	ctx.lr = 0x8255F0B4;
	sub_82978D98(ctx, base);
	// b 0x8255f120
	goto loc_8255F120;
loc_8255F0B8:
	// lwz r3,7228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7228);
	// stw r27,7264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7264, ctx.r27.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8255f0f4
	if (ctx.cr6.eq) goto loc_8255F0F4;
	// lwz r11,492(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 492);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8255f0f4
	if (ctx.cr6.eq) goto loc_8255F0F4;
	// bl 0x82978ed0
	ctx.lr = 0x8255F0D8;
	sub_82978ED0(ctx, base);
	// lwz r11,7280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7280);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8255f0f4
	if (ctx.cr6.eq) goto loc_8255F0F4;
	// lwz r3,1408(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1408);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8255f0f4
	if (ctx.cr6.eq) goto loc_8255F0F4;
	// bl 0x82978ed0
	ctx.lr = 0x8255F0F4;
	sub_82978ED0(ctx, base);
loc_8255F0F4:
	// lwz r11,7252(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7252);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8255f11c
	if (ctx.cr6.eq) goto loc_8255F11C;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// addi r4,r11,-3208
	ctx.r4.s64 = ctx.r11.s64 + -3208;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8255F11C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8255F11C:
	// stw r29,7232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7232, ctx.r29.u32);
loc_8255F120:
	// lwz r11,7284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7284);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8255f144
	if (ctx.cr6.eq) goto loc_8255F144;
	// lwz r11,7008(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7008);
	// lwz r10,7004(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7004);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// bgt cr6,0x8255f144
	if (ctx.cr6.gt) goto loc_8255F144;
	// stw r27,7284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7284, ctx.r27.u32);
loc_8255F144:
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// lwz r4,1312(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1312);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8255f164
	if (ctx.cr6.eq) goto loc_8255F164;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8255F15C;
	sub_829B9720(ctx, base);
	// bl 0x82409c40
	ctx.lr = 0x8255F160;
	sub_82409C40(ctx, base);
	// b 0x8255f168
	goto loc_8255F168;
loc_8255F164:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_8255F168:
	// bl 0x82411b98
	ctx.lr = 0x8255F16C;
	sub_82411B98(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8255f228
	if (ctx.cr0.eq) goto loc_8255F228;
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// lwz r4,1312(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1312);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8255f198
	if (ctx.cr6.eq) goto loc_8255F198;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8255F190;
	sub_829B9720(ctx, base);
	// bl 0x82409c40
	ctx.lr = 0x8255F194;
	sub_82409C40(ctx, base);
	// b 0x8255f19c
	goto loc_8255F19C;
loc_8255F198:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_8255F19C:
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// bl 0x8251a260
	ctx.lr = 0x8255F1A4;
	sub_8251A260(ctx, base);
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,96(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// bl 0x827da008
	ctx.lr = 0x8255F1B8;
	sub_827DA008(ctx, base);
	// lwz r11,6792(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6792);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8255f228
	if (ctx.cr6.eq) goto loc_8255F228;
	// lwz r11,6788(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6788);
	// lfs f0,624(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f12,620(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,624(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f0,628(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 628);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f0,620(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 620);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f0,20368(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20368);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f13,f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmadds f13,f12,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8255f228
	if (!ctx.cr6.lt) goto loc_8255F228;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,6784(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6784);
	// bl 0x827dccb0
	ctx.lr = 0x8255F21C;
	sub_827DCCB0(ctx, base);
	// stw r27,6792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6792, ctx.r27.u32);
	// stw r27,6784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6784, ctx.r27.u32);
	// stw r27,6788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6788, ctx.r27.u32);
loc_8255F228:
	// lwz r11,6852(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6852);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8255f370
	if (ctx.cr6.eq) goto loc_8255F370;
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8255f370
	if (!ctx.cr6.eq) goto loc_8255F370;
	// lwz r11,1052(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1052);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8255f370
	if (!ctx.cr6.eq) goto loc_8255F370;
	// lwz r3,1608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// bl 0x82414510
	ctx.lr = 0x8255F254;
	sub_82414510(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,1928(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1928);
	// bl 0x824d77f8
	ctx.lr = 0x8255F268;
	sub_824D77F8(ctx, base);
	// bl 0x82333a20
	ctx.lr = 0x8255F26C;
	sub_82333A20(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x8255f370
	if (ctx.cr0.eq) goto loc_8255F370;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828a95f0
	ctx.lr = 0x8255F280;
	sub_828A95F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8255f370
	if (ctx.cr0.eq) goto loc_8255F370;
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// lwz r4,1312(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1312);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8255f2a8
	if (ctx.cr6.eq) goto loc_8255F2A8;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8255F2A0;
	sub_829B9720(ctx, base);
	// bl 0x82409c40
	ctx.lr = 0x8255F2A4;
	sub_82409C40(ctx, base);
	// b 0x8255f2ac
	goto loc_8255F2AC;
loc_8255F2A8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_8255F2AC:
	// bl 0x82411b98
	ctx.lr = 0x8255F2B0;
	sub_82411B98(ctx, base);
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,96(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// bl 0x827da008
	ctx.lr = 0x8255F2C8;
	sub_827DA008(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8255f370
	if (ctx.cr6.eq) goto loc_8255F370;
	// bl 0x8249b9e0
	ctx.lr = 0x8255F2D8;
	sub_8249B9E0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8255f370
	if (ctx.cr0.eq) goto loc_8255F370;
	// lis r10,-32130
	ctx.r10.s64 = -2105671680;
	// lwz r11,1776(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1776);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r10,r10,28272
	ctx.r10.s64 = ctx.r10.s64 + 28272;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x8255f304
	if (ctx.cr6.eq) goto loc_8255F304;
	// lwz r28,80(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x8255f308
	goto loc_8255F308;
loc_8255F304:
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
loc_8255F308:
	// li r3,40
	ctx.r3.s64 = 40;
	// lwz r29,80(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82833108
	ctx.lr = 0x8255F314;
	sub_82833108(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8255f35c
	if (ctx.cr0.eq) goto loc_8255F35C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82833180
	ctx.lr = 0x8255F324;
	sub_82833180(ctx, base);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// stw r29,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r29.u32);
	// lis r9,-8531
	ctx.r9.s64 = -559087616;
	// stw r28,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r28.u32);
	// addi r10,r10,4424
	ctx.r10.s64 = ctx.r10.s64 + 4424;
	// stw r31,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r31.u32);
	// ori r9,r9,47806
	ctx.r9.u64 = ctx.r9.u64 | 47806;
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r9,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r9.u32);
	// std r11,24(r30)
	PPC_STORE_U64(ctx.r30.u32 + 24, ctx.r11.u64);
	// b 0x8255f360
	goto loc_8255F360;
loc_8255F35C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_8255F360:
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x8255F36C;
	sub_82833A30(ctx, base);
	// stw r27,6852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6852, ctx.r27.u32);
loc_8255F370:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255F378"))) PPC_WEAK_FUNC(sub_8255F378);
PPC_FUNC_IMPL(__imp__sub_8255F378) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r4,7236(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7236);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8255F3A4;
	sub_829B9720(ctx, base);
	// bl 0x82333a20
	ctx.lr = 0x8255F3A8;
	sub_82333A20(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// li r30,0
	ctx.r30.s64 = 0;
	// beq 0x8255f434
	if (ctx.cr0.eq) goto loc_8255F434;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// lwz r11,632(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 632);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8255F3D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8281d9b0
	ctx.lr = 0x8255F3D8;
	sub_8281D9B0(ctx, base);
	// rldicr r6,r30,32,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFF00000000;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r3,7252(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7252);
	// bl 0x8281bb18
	ctx.lr = 0x8255F3EC;
	sub_8281BB18(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,7252(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7252);
	// bl 0x8281d650
	ctx.lr = 0x8255F3F8;
	sub_8281D650(ctx, base);
	// lwz r11,7252(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7252);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,6748(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6748);
	// lwz r11,6752(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6752);
	// lwz r10,7248(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7248);
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// stw r9,6748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6748, ctx.r9.u32);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8255f428
	if (!ctx.cr6.lt) goto loc_8255F428;
	// stw r11,6748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6748, ctx.r11.u32);
loc_8255F428:
	// lwz r11,7272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7272);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,7272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7272, ctx.r11.u32);
loc_8255F434:
	// lwz r11,6748(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6748);
	// lwz r10,6752(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6752);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8255f454
	if (!ctx.cr6.gt) goto loc_8255F454;
	// lwz r11,7272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7272);
	// lwz r10,7268(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7268);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8255f45c
	if (ctx.cr6.lt) goto loc_8255F45C;
loc_8255F454:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8255f4e0
	ctx.lr = 0x8255F45C;
	sub_8255F4E0(ctx, base);
loc_8255F45C:
	// lwz r11,7224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7224);
	// lwz r10,7004(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7004);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8255f498
	if (ctx.cr6.lt) goto loc_8255F498;
	// subf. r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x8255f47c
	if (!ctx.cr0.lt) goto loc_8255F47C;
	// stw r30,7004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7004, ctx.r30.u32);
	// b 0x8255f4a0
	goto loc_8255F4A0;
loc_8255F47C:
	// lwz r10,7008(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7008);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8255f490
	if (!ctx.cr6.gt) goto loc_8255F490;
	// stw r10,7004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7004, ctx.r10.u32);
	// b 0x8255f4a0
	goto loc_8255F4A0;
loc_8255F490:
	// stw r11,7004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7004, ctx.r11.u32);
	// b 0x8255f4a0
	goto loc_8255F4A0;
loc_8255F498:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8255f4e0
	ctx.lr = 0x8255F4A0;
	sub_8255F4E0(ctx, base);
loc_8255F4A0:
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

__attribute__((alias("__imp__sub_8255F4B8"))) PPC_WEAK_FUNC(sub_8255F4B8);
PPC_FUNC_IMPL(__imp__sub_8255F4B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,7004(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7004);
	// lwz r11,7012(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7012);
	// lwz r10,7008(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7008);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,7004(r3)
	PPC_STORE_U32(ctx.r3.u32 + 7004, ctx.r11.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// stw r10,7004(r3)
	PPC_STORE_U32(ctx.r3.u32 + 7004, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255F4E0"))) PPC_WEAK_FUNC(sub_8255F4E0);
PPC_FUNC_IMPL(__imp__sub_8255F4E0) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32170
	ctx.r10.s64 = -2108293120;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r10,r10,10840
	ctx.r10.s64 = ctx.r10.s64 + 10840;
	// stw r11,7244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7244, ctx.r11.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r11,6904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6904, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f1,6900(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6900);
	ctx.f1.f64 = double(temp.f32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8255cf58
	ctx.lr = 0x8255F528;
	sub_8255CF58(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r11,15834
	ctx.r4.s64 = ctx.r11.s64 + 15834;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233a258
	ctx.lr = 0x8255F538;
	sub_8233A258(ctx, base);
	// lis r4,1797
	ctx.r4.s64 = 117768192;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r4,r4,2993
	ctx.r4.u64 = ctx.r4.u64 | 2993;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c3740
	ctx.lr = 0x8255F54C;
	sub_829C3740(ctx, base);
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

__attribute__((alias("__imp__sub_8255F560"))) PPC_WEAK_FUNC(sub_8255F560);
PPC_FUNC_IMPL(__imp__sub_8255F560) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,1608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// bl 0x82414510
	ctx.lr = 0x8255F580;
	sub_82414510(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,1928(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1928);
	// bl 0x824d77f8
	ctx.lr = 0x8255F594;
	sub_824D77F8(ctx, base);
	// bl 0x82333a20
	ctx.lr = 0x8255F598;
	sub_82333A20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828a95f0
	ctx.lr = 0x8255F5A8;
	sub_828A95F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8255f5b8
	if (!ctx.cr0.eq) goto loc_8255F5B8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,7244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7244, ctx.r11.u32);
loc_8255F5B8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255F5D0"))) PPC_WEAK_FUNC(sub_8255F5D0);
PPC_FUNC_IMPL(__imp__sub_8255F5D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8255f624
	if (!ctx.cr6.eq) goto loc_8255F624;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r10,1000
	ctx.r10.s64 = 1000;
	// stw r10,2112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2112, ctx.r10.u32);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r11,788(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8255f624
	if (!ctx.cr6.eq) goto loc_8255F624;
	// lwz r11,1052(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1052);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8255f624
	if (!ctx.cr6.eq) goto loc_8255F624;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// stw r11,2112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2112, ctx.r11.u32);
loc_8255F624:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,7108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7108, ctx.r11.u32);
	// bl 0x825615a0
	ctx.lr = 0x8255F634;
	sub_825615A0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,6852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6852, ctx.r11.u32);
	// bl 0x82502d10
	ctx.lr = 0x8255F644;
	sub_82502D10(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255F658"))) PPC_WEAK_FUNC(sub_8255F658);
PPC_FUNC_IMPL(__imp__sub_8255F658) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x8255F660;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lwz r11,7252(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7252);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8255f6ec
	if (ctx.cr6.eq) goto loc_8255F6EC;
	// lis r26,-31949
	ctx.r26.s64 = -2093809664;
	// li r7,-1
	ctx.r7.s64 = -1;
	// lis r5,3775
	ctx.r5.s64 = 247398400;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// ori r5,r5,64211
	ctx.r5.u64 = ctx.r5.u64 | 64211;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x8255F6AC;
	sub_823CF190(ctx, base);
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82817280
	ctx.lr = 0x8255F6B8;
	sub_82817280(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,48
	ctx.r4.s64 = 48;
	// lwz r3,13024(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// ld r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x8282b1e0
	ctx.lr = 0x8255F6EC;
	sub_8282B1E0(ctx, base);
loc_8255F6EC:
	// lwz r11,7368(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7368);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8255f704
	if (ctx.cr6.eq) goto loc_8255F704;
	// lwz r11,7364(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7364);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8255f71c
	if (!ctx.cr6.eq) goto loc_8255F71C;
loc_8255F704:
	// lis r4,7539
	ctx.r4.s64 = 494075904;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,9095
	ctx.r4.u64 = ctx.r4.u64 | 9095;
	// bl 0x82562a88
	ctx.lr = 0x8255F714;
	sub_82562A88(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,7108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 7108, ctx.r11.u32);
loc_8255F71C:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82504e58
	ctx.lr = 0x8255F730;
	sub_82504E58(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255F738"))) PPC_WEAK_FUNC(sub_8255F738);
PPC_FUNC_IMPL(__imp__sub_8255F738) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f4
	ctx.lr = 0x8255F740;
	__savegprlr_23(ctx, base);
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82a6173c
	ctx.lr = 0x8255F748;
	__savefpr_25(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x824df418
	ctx.lr = 0x8255F754;
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
	// stfs f13,160(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lwz r28,160(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lwz r29,176(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
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
	// lfs f30,-24640(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24640);
	ctx.f30.f64 = double(temp.f32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// lfs f25,19548(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 19548);
	ctx.f25.f64 = double(temp.f32);
	// lis r4,-16601
	ctx.r4.s64 = -1087963136;
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// ori r10,r10,31988
	ctx.r10.u64 = ctx.r10.u64 | 31988;
	// stfs f30,172(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// ld r8,168(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// stfs f13,152(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stfs f25,156(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// ld r6,152(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// lfs f31,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// ori r4,r4,62193
	ctx.r4.u64 = ctx.r4.u64 | 62193;
	// stfs f31,176(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stfs f31,172(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// ld r7,168(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// std r7,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,5352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5352);
	// rldicr r9,r29,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r7,r28,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r28.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x824e5590
	ctx.lr = 0x8255F804;
	sub_824E5590(ctx, base);
	// lwz r11,1740(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1740);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r10,5356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5356, ctx.r10.u32);
	// addi r29,r31,6976
	ctx.r29.s64 = ctx.r31.s64 + 6976;
	// stw r11,444(r10)
	PPC_STORE_U32(ctx.r10.u32 + 444, ctx.r11.u32);
	// addi r4,r31,5356
	ctx.r4.s64 = ctx.r31.s64 + 5356;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826426d0
	ctx.lr = 0x8255F824;
	sub_826426D0(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stfs f30,168(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// stfs f31,156(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f31,160(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// addi r3,r8,9748
	ctx.r3.s64 = ctx.r8.s64 + 9748;
	// lfs f30,-12104(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12104);
	ctx.f30.f64 = double(temp.f32);
	// lfs f28,17060(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17060);
	ctx.f28.f64 = double(temp.f32);
	// lfs f29,18368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 18368);
	ctx.f29.f64 = double(temp.f32);
	// stfs f30,172(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f30,176(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f28,184(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f29,188(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f29,192(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// lwz r28,5352(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5352);
	// bl 0x82816528
	ctx.lr = 0x8255F870;
	sub_82816528(ctx, base);
	// ld r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// ld r8,168(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// ld r6,184(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// rldicr r9,r9,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r7,160(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// lis r4,-3736
	ctx.r4.s64 = -244842496;
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// ori r4,r4,3838
	ctx.r4.u64 = ctx.r4.u64 | 3838;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x824e5590
	ctx.lr = 0x8255F8B8;
	sub_824E5590(ctx, base);
	// lwz r11,1740(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1740);
	// stw r3,5360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5360, ctx.r3.u32);
	// addi r4,r31,5360
	ctx.r4.s64 = ctx.r31.s64 + 5360;
	// stw r11,444(r3)
	PPC_STORE_U32(ctx.r3.u32 + 444, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826426d0
	ctx.lr = 0x8255F8D0;
	sub_826426D0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// stfs f31,184(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// addi r27,r11,-32516
	ctx.r27.s64 = ctx.r11.s64 + -32516;
	// stfs f31,188(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// lis r11,22763
	ctx.r11.s64 = 1491795968;
	// stfs f31,192(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// addi r3,r10,-16432
	ctx.r3.s64 = ctx.r10.s64 + -16432;
	// stfs f30,156(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f30,160(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// ori r28,r11,37495
	ctx.r28.u64 = ctx.r11.u64 | 37495;
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lfs f27,-248(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + -248);
	ctx.f27.f64 = double(temp.f32);
	// stfs f27,152(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f29,172(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f29,176(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lwz r26,5352(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5352);
	// bl 0x82816528
	ctx.lr = 0x8255F918;
	sub_82816528(ctx, base);
	// lwz r25,192(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// ld r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r8,160(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,168(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// stw r25,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r25.u32);
	// rldicr r9,r8,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r8,152(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// bl 0x824e5590
	ctx.lr = 0x8255F95C;
	sub_824E5590(ctx, base);
	// lwz r11,1740(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1740);
	// stw r3,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r3.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r11,444(r3)
	PPC_STORE_U32(ctx.r3.u32 + 444, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826426d0
	ctx.lr = 0x8255F974;
	sub_826426D0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-19521
	ctx.r10.s64 = -1279328256;
	// stfs f31,184(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// addi r3,r11,-16424
	ctx.r3.s64 = ctx.r11.s64 + -16424;
	// stfs f31,188(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f31,192(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// ori r26,r10,23324
	ctx.r26.u64 = ctx.r10.u64 | 23324;
	// stfs f27,152(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f30,156(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f30,160(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f29,172(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f29,176(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lwz r25,5352(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5352);
	// bl 0x82816528
	ctx.lr = 0x8255F9B0;
	sub_82816528(ctx, base);
	// ld r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,192(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// lwz r9,160(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// ld r6,168(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// rldicr r9,r9,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r8,152(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// bl 0x824e5590
	ctx.lr = 0x8255F9F4;
	sub_824E5590(ctx, base);
	// lwz r11,1740(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1740);
	// stw r3,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r3.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r11,444(r3)
	PPC_STORE_U32(ctx.r3.u32 + 444, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826426d0
	ctx.lr = 0x8255FA0C;
	sub_826426D0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,16364
	ctx.r10.s64 = 1072431104;
	// stfs f31,184(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// addi r3,r11,-16416
	ctx.r3.s64 = ctx.r11.s64 + -16416;
	// stfs f31,188(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f31,192(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// ori r25,r10,28383
	ctx.r25.u64 = ctx.r10.u64 | 28383;
	// stfs f27,152(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f30,156(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f30,160(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f29,172(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f29,176(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lwz r24,5352(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5352);
	// bl 0x82816528
	ctx.lr = 0x8255FA48;
	sub_82816528(ctx, base);
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// ld r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r24,192(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// lwz r8,160(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,168(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// rldicr r9,r8,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r8,152(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// stw r24,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r24.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// bl 0x824e5590
	ctx.lr = 0x8255FA8C;
	sub_824E5590(ctx, base);
	// lwz r11,1740(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1740);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r3,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r3.u32);
	// stw r11,444(r3)
	PPC_STORE_U32(ctx.r3.u32 + 444, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826426d0
	ctx.lr = 0x8255FAA4;
	sub_826426D0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,599
	ctx.r10.s64 = 39256064;
	// stfs f31,184(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// addi r3,r11,-16408
	ctx.r3.s64 = ctx.r11.s64 + -16408;
	// stfs f31,188(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f31,192(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// ori r25,r10,14532
	ctx.r25.u64 = ctx.r10.u64 | 14532;
	// stfs f27,152(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f30,156(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f30,160(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f29,172(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f29,176(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lwz r24,5352(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5352);
	// bl 0x82816528
	ctx.lr = 0x8255FAE0;
	sub_82816528(ctx, base);
	// ld r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r9,192(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r6,168(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// lwz r9,160(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r9,r9,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r8,152(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// bl 0x824e5590
	ctx.lr = 0x8255FB24;
	sub_824E5590(ctx, base);
	// lwz r10,1740(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1740);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r10,444(r11)
	PPC_STORE_U32(ctx.r11.u32 + 444, ctx.r10.u32);
	// bl 0x826426d0
	ctx.lr = 0x8255FB40;
	sub_826426D0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,30100
	ctx.r10.s64 = 1972633600;
	// lfs f26,-100(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + -100);
	ctx.f26.f64 = double(temp.f32);
	// addi r3,r11,-16400
	ctx.r3.s64 = ctx.r11.s64 + -16400;
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f31,188(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// ori r25,r10,42004
	ctx.r25.u64 = ctx.r10.u64 | 42004;
	// stfs f31,192(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f26,152(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f30,156(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f30,160(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f28,168(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f29,172(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f29,176(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lwz r24,5352(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5352);
	// bl 0x82816528
	ctx.lr = 0x8255FB80;
	sub_82816528(ctx, base);
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// ld r9,184(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r8,176(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// ld r6,168(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// rldicr r7,r8,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// ld r8,152(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// rldicr r9,r11,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// bl 0x824e5590
	ctx.lr = 0x8255FBC4;
	sub_824E5590(ctx, base);
	// lwz r10,1740(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1740);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,444(r11)
	PPC_STORE_U32(ctx.r11.u32 + 444, ctx.r10.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x826426d0
	ctx.lr = 0x8255FBE0;
	sub_826426D0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-13035
	ctx.r10.s64 = -854261760;
	// stfs f31,184(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// addi r3,r11,-16388
	ctx.r3.s64 = ctx.r11.s64 + -16388;
	// stfs f31,188(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f31,192(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// ori r25,r10,53749
	ctx.r25.u64 = ctx.r10.u64 | 53749;
	// stfs f26,152(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f30,156(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f30,160(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f28,168(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f29,172(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f29,176(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lwz r24,5352(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5352);
	// bl 0x82816528
	ctx.lr = 0x8255FC1C;
	sub_82816528(ctx, base);
	// ld r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,192(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r6,168(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r8,152(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// rldicr r9,r11,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// bl 0x824e5590
	ctx.lr = 0x8255FC60;
	sub_824E5590(ctx, base);
	// lwz r10,1740(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1740);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r10,444(r11)
	PPC_STORE_U32(ctx.r11.u32 + 444, ctx.r10.u32);
	// bl 0x826426d0
	ctx.lr = 0x8255FC7C;
	sub_826426D0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-11265
	ctx.r10.s64 = -738263040;
	// lfs f27,-304(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + -304);
	ctx.f27.f64 = double(temp.f32);
	// addi r3,r11,-16376
	ctx.r3.s64 = ctx.r11.s64 + -16376;
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f31,188(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// ori r25,r10,44068
	ctx.r25.u64 = ctx.r10.u64 | 44068;
	// stfs f31,192(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f26,152(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f27,156(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f27,160(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f28,168(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f28,172(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f28,176(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lwz r24,5352(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5352);
	// bl 0x82816528
	ctx.lr = 0x8255FCBC;
	sub_82816528(ctx, base);
	// ld r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r23,192(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// lwz r8,160(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r23,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r23.u32);
	// rldicr r9,r8,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,168(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// ld r8,152(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// bl 0x824e5590
	ctx.lr = 0x8255FD00;
	sub_824E5590(ctx, base);
	// lwz r10,1740(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1740);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,444(r11)
	PPC_STORE_U32(ctx.r11.u32 + 444, ctx.r10.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x826426d0
	ctx.lr = 0x8255FD1C;
	sub_826426D0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,24284
	ctx.r10.s64 = 1591476224;
	// stfs f31,184(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// addi r3,r11,-16364
	ctx.r3.s64 = ctx.r11.s64 + -16364;
	// stfs f31,188(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f31,192(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// ori r25,r10,32798
	ctx.r25.u64 = ctx.r10.u64 | 32798;
	// stfs f26,152(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f27,156(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f27,160(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f28,168(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f28,172(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f28,176(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lwz r24,5352(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5352);
	// bl 0x82816528
	ctx.lr = 0x8255FD58;
	sub_82816528(ctx, base);
	// ld r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r9,192(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,176(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// ld r6,168(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// rldicr r7,r8,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r8,152(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// rldicr r9,r11,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// bl 0x824e5590
	ctx.lr = 0x8255FD9C;
	sub_824E5590(ctx, base);
	// lwz r10,1740(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1740);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,444(r11)
	PPC_STORE_U32(ctx.r11.u32 + 444, ctx.r10.u32);
	// bl 0x826426d0
	ctx.lr = 0x8255FDB8;
	sub_826426D0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,5356(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5356);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2088(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2088);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8255FDD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// stfs f31,184(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// lis r9,9749
	ctx.r9.s64 = 638910464;
	// stfs f31,188(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// addi r3,r10,216
	ctx.r3.s64 = ctx.r10.s64 + 216;
	// stfs f31,192(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f31,172(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// li r29,2
	ctx.r29.s64 = 2;
	// lfs f26,17680(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17680);
	ctx.f26.f64 = double(temp.f32);
	// ori r25,r9,17317
	ctx.r25.u64 = ctx.r9.u64 | 17317;
	// stfs f26,152(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f27,156(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f29,160(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f30,168(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f25,176(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x8255FE14;
	sub_82816528(ctx, base);
	// ld r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,176(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r24,192(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// li r5,136
	ctx.r5.s64 = 136;
	// lwz r9,160(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// li r6,2
	ctx.r6.s64 = 2;
	// ld r7,168(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// rldicr r10,r9,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// stw r24,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r24.u32);
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// bl 0x824e4120
	ctx.lr = 0x8255FE5C;
	sub_824E4120(ctx, base);
	// stfs f31,192(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stw r3,7356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7356, ctx.r3.u32);
	// stfs f31,188(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// ld r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f28,908(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f28.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r4,3332(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3332);
	// li r9,0
	ctx.r9.s64 = 0;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f4,f28
	ctx.f4.f64 = ctx.f28.f64;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82331120
	ctx.lr = 0x8255FEB8;
	sub_82331120(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stfs f31,184(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// lis r10,26669
	ctx.r10.s64 = 1747779584;
	// stfs f31,188(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// addi r3,r11,228
	ctx.r3.s64 = ctx.r11.s64 + 228;
	// stfs f31,192(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f26,152(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// ori r25,r10,58543
	ctx.r25.u64 = ctx.r10.u64 | 58543;
	// stfs f27,156(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f29,160(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lwz r11,7356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7356);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// stfs f30,168(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f31,172(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stfs f25,176(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// bl 0x82816528
	ctx.lr = 0x8255FF00;
	sub_82816528(ctx, base);
	// ld r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// lwz r10,176(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r24,192(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r23,160(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// li r5,136
	ctx.r5.s64 = 136;
	// ld r7,168(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// li r6,2
	ctx.r6.s64 = 2;
	// ld r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// rldicr r10,r23,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r23.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// stw r24,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r24.u32);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// bl 0x824e4120
	ctx.lr = 0x8255FF48;
	sub_824E4120(ctx, base);
	// stfs f31,192(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stw r3,7360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7360, ctx.r3.u32);
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// stfs f31,188(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r4,3332(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3332);
	// li r10,1
	ctx.r10.s64 = 1;
	// fmr f4,f28
	ctx.f4.f64 = ctx.f28.f64;
	// li r9,0
	ctx.r9.s64 = 0;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// ld r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// li r5,0
	ctx.r5.s64 = 0;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82331120
	ctx.lr = 0x8255FF9C;
	sub_82331120(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// stfs f31,184(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f31,188(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// addi r3,r10,240
	ctx.r3.s64 = ctx.r10.s64 + 240;
	// stfs f31,192(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f30,156(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// lfs f27,19580(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19580);
	ctx.f27.f64 = double(temp.f32);
	// stfs f30,160(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f27,152(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f29,172(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f29,176(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lwz r11,7360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7360);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// bl 0x82816528
	ctx.lr = 0x8255FFE4;
	sub_82816528(ctx, base);
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// ld r25,184(r1)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,176(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r24,160(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r5,136
	ctx.r5.s64 = 136;
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r7,168(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// ld r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// rldicr r10,r24,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// std r25,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r25.u64);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// bl 0x824e4120
	ctx.lr = 0x8256002C;
	sub_824E4120(ctx, base);
	// lfs f0,6932(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6932);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,192(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// lwz r10,192(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stfs f0,184(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f0,188(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// ld r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r11,6936(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6936);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r4,3332(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3332);
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f2,6944(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6944);
	ctx.f2.f64 = double(temp.f32);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lfs f1,6940(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6940);
	ctx.f1.f64 = double(temp.f32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r3,7364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7364, ctx.r3.u32);
	// fmr f4,f28
	ctx.f4.f64 = ctx.f28.f64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// bl 0x82331120
	ctx.lr = 0x82560088;
	sub_82331120(ctx, base);
	// lwz r11,7364(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7364);
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r28,560(r11)
	PPC_STORE_U32(ctx.r11.u32 + 560, ctx.r28.u32);
	// lwz r11,6848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6848);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825600a8
	if (!ctx.cr6.eq) goto loc_825600A8;
	// lwz r3,7364(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7364);
	// bl 0x82331e80
	ctx.lr = 0x825600A8;
	sub_82331E80(ctx, base);
loc_825600A8:
	// lwz r11,7364(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7364);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// stfs f31,184(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// addi r3,r10,252
	ctx.r3.s64 = ctx.r10.s64 + 252;
	// stfs f31,188(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f31,192(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f27,152(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// stfs f30,156(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f30,160(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f29,172(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// stfs f29,176(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x825600E8;
	sub_82816528(ctx, base);
	// lwz r10,192(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// ld r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,136
	ctx.r5.s64 = 136;
	// ld r7,168(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// li r6,2
	ctx.r6.s64 = 2;
	// ld r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// rldicr r8,r11,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// bl 0x824e4120
	ctx.lr = 0x82560130;
	sub_824E4120(ctx, base);
	// lfs f0,6932(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6932);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,188(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stw r3,7368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7368, ctx.r3.u32);
	// stfs f0,192(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stfs f0,184(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// ld r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,6936(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6936);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r29,192(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lfs f2,6944(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6944);
	ctx.f2.f64 = double(temp.f32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lfs f1,6940(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6940);
	ctx.f1.f64 = double(temp.f32);
	// lwz r4,3332(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3332);
	// fmr f4,f28
	ctx.f4.f64 = ctx.f28.f64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// bl 0x82331120
	ctx.lr = 0x8256018C;
	sub_82331120(ctx, base);
	// lwz r11,7368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7368);
	// stw r28,560(r11)
	PPC_STORE_U32(ctx.r11.u32 + 560, ctx.r28.u32);
	// lwz r11,6848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6848);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825601a8
	if (!ctx.cr6.eq) goto loc_825601A8;
	// lwz r3,7368(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7368);
	// bl 0x82331e80
	ctx.lr = 0x825601A8;
	sub_82331E80(ctx, base);
loc_825601A8:
	// lwz r11,7368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7368);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stfs f31,184(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// stfs f31,188(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// stfs f31,192(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// lis r6,-32215
	ctx.r6.s64 = -2111242240;
	// stfs f25,156(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// lwz r5,52(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lfs f0,18116(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 18116);
	ctx.f0.f64 = double(temp.f32);
	// lis r4,-32229
	ctx.r4.s64 = -2112159744;
	// lfs f13,17844(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 17844);
	ctx.f13.f64 = double(temp.f32);
	// oris r10,r5,8
	ctx.r10.u64 = ctx.r5.u64 | 524288;
	// lfs f12,19576(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 19576);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r4,264
	ctx.r3.s64 = ctx.r4.s64 + 264;
	// lfs f11,19572(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 19572);
	ctx.f11.f64 = double(temp.f32);
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lfs f10,19568(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 19568);
	ctx.f10.f64 = double(temp.f32);
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f13,172(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f12,176(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f11,152(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f10,160(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x82560210;
	sub_82816528(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x824113a0
	ctx.lr = 0x82560218;
	sub_824113A0(ctx, base);
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,512
	ctx.r7.s64 = 512;
	// ld r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r5,138
	ctx.r5.s64 = 138;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c87d0
	ctx.lr = 0x8256024C;
	sub_829C87D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82560284
	if (ctx.cr0.eq) goto loc_82560284;
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r10,156(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r9,160(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r8,168(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r7,172(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// lwz r6,176(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
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
loc_82560284:
	// lfs f0,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r11,200
	ctx.r11.s64 = 200;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stfs f0,192(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// stfs f0,184(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stfs f0,188(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// ld r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r3,7372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7372, ctx.r3.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f4,f28
	ctx.f4.f64 = ctx.f28.f64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// li r4,0
	ctx.r4.s64 = 0;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82331120
	ctx.lr = 0x825602E0;
	sub_82331120(ctx, base);
	// lwz r11,7372(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7372);
	// stw r28,560(r11)
	PPC_STORE_U32(ctx.r11.u32 + 560, ctx.r28.u32);
	// lwz r3,7372(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7372);
	// bl 0x82331e80
	ctx.lr = 0x825602F0;
	sub_82331E80(ctx, base);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82a61788
	ctx.lr = 0x825602FC;
	__restfpr_25(ctx, base);
	// b 0x82a4ea44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82560300"))) PPC_WEAK_FUNC(sub_82560300);
PPC_FUNC_IMPL(__imp__sub_82560300) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x82560308;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lis r11,4
	ctx.r11.s64 = 262144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// li r28,1
	ctx.r28.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// ori r27,r11,1535
	ctx.r27.u64 = ctx.r11.u64 | 1535;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82560498
	if (ctx.cr6.eq) goto loc_82560498;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82411708
	ctx.lr = 0x8256033C;
	sub_82411708(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82560498
	if (ctx.cr0.eq) goto loc_82560498;
	// lwz r11,460(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 460);
	// rlwinm. r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825603a8
	if (!ctx.cr0.eq) goto loc_825603A8;
	// rlwinm. r11,r11,0,14,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825603a8
	if (!ctx.cr0.eq) goto loc_825603A8;
	// lwz r11,7244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7244);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82560374
	if (ctx.cr6.eq) goto loc_82560374;
	// lwz r3,7228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7228);
	// bl 0x82979298
	ctx.lr = 0x8256036C;
	sub_82979298(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825603a8
	if (!ctx.cr0.eq) goto loc_825603A8;
loc_82560374:
	// lwz r11,6876(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6876);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825603a8
	if (ctx.cr6.eq) goto loc_825603A8;
	// lwz r11,6872(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6872);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825603a8
	if (ctx.cr6.eq) goto loc_825603A8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r28,5332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5332, ctx.r28.u32);
	// lwz r11,2200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2200);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825603A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x825603b8
	goto loc_825603B8;
loc_825603A8:
	// stw r30,3148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3148, ctx.r30.u32);
	// stw r30,5332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5332, ctx.r30.u32);
	// stw r30,3208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3208, ctx.r30.u32);
	// stw r28,3128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3128, ctx.r28.u32);
loc_825603B8:
	// lwz r11,7244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7244);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825603f4
	if (ctx.cr6.eq) goto loc_825603F4;
	// lwz r11,7264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7264);
	// lwz r10,7260(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7260);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x825603e8
	if (!ctx.cr6.lt) goto loc_825603E8;
	// lwz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// rlwinm. r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82560488
	if (ctx.cr0.eq) goto loc_82560488;
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// beq cr6,0x82560488
	if (ctx.cr6.eq) goto loc_82560488;
loc_825603E8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8255f4e0
	ctx.lr = 0x825603F0;
	sub_8255F4E0(ctx, base);
	// b 0x82560488
	goto loc_82560488;
loc_825603F4:
	// lwz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// rlwinm. r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82560488
	if (ctx.cr0.eq) goto loc_82560488;
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// beq cr6,0x82560488
	if (ctx.cr6.eq) goto loc_82560488;
	// lwz r11,6868(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6868);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82560488
	if (ctx.cr6.eq) goto loc_82560488;
	// lwz r11,6864(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6864);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82560488
	if (!ctx.cr6.eq) goto loc_82560488;
	// lwz r11,6876(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6876);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82560488
	if (ctx.cr6.eq) goto loc_82560488;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,1724(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1724);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82560448;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,6864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6864, ctx.r28.u32);
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r11,r11,1256
	ctx.r11.s64 = ctx.r11.s64 + 1256;
	// lfs f1,6764(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6764);
	ctx.f1.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8255cf58
	ctx.lr = 0x82560474;
	sub_8255CF58(ctx, base);
	// stw r30,5332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5332, ctx.r30.u32);
	// stw r30,3148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3148, ctx.r30.u32);
	// stw r30,3208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3208, ctx.r30.u32);
	// stw r28,3128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3128, ctx.r28.u32);
	// stw r28,6880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6880, ctx.r28.u32);
loc_82560488:
	// lwz r11,7284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7284);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82560498
	if (ctx.cr6.eq) goto loc_82560498;
	// stw r30,7284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7284, ctx.r30.u32);
loc_82560498:
	// lwz r11,6864(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6864);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825604b4
	if (ctx.cr6.eq) goto loc_825604B4;
	// stw r30,5332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5332, ctx.r30.u32);
	// stw r30,3148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3148, ctx.r30.u32);
	// stw r30,3208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3208, ctx.r30.u32);
	// stw r28,3128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3128, ctx.r28.u32);
loc_825604B4:
	// lwz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// rlwinm. r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825604c8
	if (ctx.cr0.eq) goto loc_825604C8;
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x825604dc
	if (!ctx.cr6.eq) goto loc_825604DC;
loc_825604C8:
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82504bf8
	ctx.lr = 0x825604DC;
	sub_82504BF8(ctx, base);
loc_825604DC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825604E8"))) PPC_WEAK_FUNC(sub_825604E8);
PPC_FUNC_IMPL(__imp__sub_825604E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f13,1128(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1128);
	ctx.f13.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,6864(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6864, ctx.r10.u32);
	// lfs f0,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// b 0x824e5420
	sub_824E5420(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82560508"))) PPC_WEAK_FUNC(sub_82560508);
PPC_FUNC_IMPL(__imp__sub_82560508) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82560510"))) PPC_WEAK_FUNC(sub_82560510);
PPC_FUNC_IMPL(__imp__sub_82560510) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82560518;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,6992(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6992);
	// lfs f0,6948(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6948);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,5532(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 5532);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,5536(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 5536);
	ctx.f12.f64 = double(temp.f32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f11,5540(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 5540);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,5544(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 5544);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,5548(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 5548);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,5552(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 5552);
	ctx.f8.f64 = double(temp.f32);
	// stfs f13,6952(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6952, temp.u32);
	// stfs f12,6956(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6956, temp.u32);
	// stfs f11,6960(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6960, temp.u32);
	// stfs f10,6964(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6964, temp.u32);
	// stfs f9,6968(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6968, temp.u32);
	// stfs f8,6972(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6972, temp.u32);
	// stfs f0,5532(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5532, temp.u32);
	// stfs f0,5536(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5536, temp.u32);
	// stfs f0,5540(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5540, temp.u32);
	// stfs f0,5544(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5544, temp.u32);
	// stfs f0,5548(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5548, temp.u32);
	// stfs f0,5552(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5552, temp.u32);
	// ble cr6,0x825605b8
	if (!ctx.cr6.gt) goto loc_825605B8;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82560580:
	// lwz r11,6988(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6988);
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x825605a4
	if (ctx.cr6.eq) goto loc_825605A4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825605A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825605A4:
	// lwz r11,6992(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6992);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82560580
	if (ctx.cr6.lt) goto loc_82560580;
loc_825605B8:
	// lwz r11,7028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7028);
	// lwz r10,7012(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7012);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x825605d0
	if (!ctx.cr6.lt) goto loc_825605D0;
	// lwz r11,7020(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7020);
	// stw r11,7012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7012, ctx.r11.u32);
loc_825605D0:
	// lwz r11,7020(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7020);
	// lis r4,-9632
	ctx.r4.s64 = -631242752;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,28039
	ctx.r4.u64 = ctx.r4.u64 | 28039;
	// stw r11,7016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7016, ctx.r11.u32);
	// bl 0x824f2770
	ctx.lr = 0x825605E8;
	sub_824F2770(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824f2928
	ctx.lr = 0x825605F0;
	sub_824F2928(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825605F8"))) PPC_WEAK_FUNC(sub_825605F8);
PPC_FUNC_IMPL(__imp__sub_825605F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82560600;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,6992(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6992);
	// lfs f0,6952(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6952);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,6956(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6956);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,6960(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6960);
	ctx.f12.f64 = double(temp.f32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f11,6964(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6964);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,6968(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6968);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,6972(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6972);
	ctx.f9.f64 = double(temp.f32);
	// stfs f0,5532(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5532, temp.u32);
	// stfs f13,5536(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5536, temp.u32);
	// stfs f12,5540(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5540, temp.u32);
	// stfs f11,5544(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5544, temp.u32);
	// stfs f10,5548(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5548, temp.u32);
	// stfs f9,5552(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5552, temp.u32);
	// ble cr6,0x82560684
	if (!ctx.cr6.gt) goto loc_82560684;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8256064C:
	// lwz r11,6988(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6988);
	// lwzx r4,r11,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82560670
	if (ctx.cr6.eq) goto loc_82560670;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82560670;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82560670:
	// lwz r11,6992(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6992);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8256064c
	if (ctx.cr6.lt) goto loc_8256064C;
loc_82560684:
	// lwz r11,7024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7024);
	// lwz r10,7020(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7020);
	// lwz r9,7012(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7012);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// stw r11,7016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7016, ctx.r11.u32);
	// bgt cr6,0x825606a0
	if (ctx.cr6.gt) goto loc_825606A0;
	// stw r11,7012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7012, ctx.r11.u32);
loc_825606A0:
	// lwz r3,5768(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5768);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825606b0
	if (ctx.cr6.eq) goto loc_825606B0;
	// bl 0x82978ed0
	ctx.lr = 0x825606B0;
	sub_82978ED0(ctx, base);
loc_825606B0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825606B8"))) PPC_WEAK_FUNC(sub_825606B8);
PPC_FUNC_IMPL(__imp__sub_825606B8) {
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
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lwz r10,7028(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7028);
	// lwz r9,7012(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7012);
	// lfs f0,23968(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23968);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,7000(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7000, temp.u32);
	// stfs f0,5412(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5412, temp.u32);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x825606f4
	if (!ctx.cr6.lt) goto loc_825606F4;
	// lwz r11,7020(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7020);
	// stw r11,7012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7012, ctx.r11.u32);
loc_825606F4:
	// lwz r11,7020(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7020);
	// lis r4,-9632
	ctx.r4.s64 = -631242752;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,28039
	ctx.r4.u64 = ctx.r4.u64 | 28039;
	// stw r11,7016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7016, ctx.r11.u32);
	// bl 0x824f2770
	ctx.lr = 0x8256070C;
	sub_824F2770(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824f2828
	ctx.lr = 0x82560714;
	sub_824F2828(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82560728"))) PPC_WEAK_FUNC(sub_82560728);
PPC_FUNC_IMPL(__imp__sub_82560728) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r10,6808(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6808);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f0,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,7000(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 7000, temp.u32);
	// beq cr6,0x8256074c
	if (ctx.cr6.eq) goto loc_8256074C;
	// lfs f13,6812(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 6812);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// b 0x82560758
	goto loc_82560758;
loc_8256074C:
	// lfs f13,5412(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 5412);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8256075c
	if (!ctx.cr6.gt) goto loc_8256075C;
loc_82560758:
	// stfs f0,5412(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 5412, temp.u32);
loc_8256075C:
	// lwz r11,7024(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7024);
	// lwz r10,7020(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7020);
	// lwz r9,7012(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7012);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// stw r11,7016(r3)
	PPC_STORE_U32(ctx.r3.u32 + 7016, ctx.r11.u32);
	// bgt cr6,0x82560778
	if (ctx.cr6.gt) goto loc_82560778;
	// stw r11,7012(r3)
	PPC_STORE_U32(ctx.r3.u32 + 7012, ctx.r11.u32);
loc_82560778:
	// lwz r3,5768(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5768);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82978ed0
	sub_82978ED0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82560788"))) PPC_WEAK_FUNC(sub_82560788);
PPC_FUNC_IMPL(__imp__sub_82560788) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82560790"))) PPC_WEAK_FUNC(sub_82560790);
PPC_FUNC_IMPL(__imp__sub_82560790) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,2372(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2372);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825607B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2380(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2380);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825607C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r4,-27335
	ctx.r4.s64 = -1791426560;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,29187
	ctx.r4.u64 = ctx.r4.u64 | 29187;
	// bl 0x824f2770
	ctx.lr = 0x825607D8;
	sub_824F2770(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825607F0"))) PPC_WEAK_FUNC(sub_825607F0);
PPC_FUNC_IMPL(__imp__sub_825607F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,2376(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2376);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82560814;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2384);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82560828;
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

__attribute__((alias("__imp__sub_82560840"))) PPC_WEAK_FUNC(sub_82560840);
PPC_FUNC_IMPL(__imp__sub_82560840) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,7360(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7360);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x8281d650
	sub_8281D650(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82560854"))) PPC_WEAK_FUNC(sub_82560854);
PPC_FUNC_IMPL(__imp__sub_82560854) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82560858"))) PPC_WEAK_FUNC(sub_82560858);
PPC_FUNC_IMPL(__imp__sub_82560858) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,7360(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7360);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
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

__attribute__((alias("__imp__sub_82560878"))) PPC_WEAK_FUNC(sub_82560878);
PPC_FUNC_IMPL(__imp__sub_82560878) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,7356(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7356);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x8281d650
	sub_8281D650(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8256088C"))) PPC_WEAK_FUNC(sub_8256088C);
PPC_FUNC_IMPL(__imp__sub_8256088C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82560890"))) PPC_WEAK_FUNC(sub_82560890);
PPC_FUNC_IMPL(__imp__sub_82560890) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,7356(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7356);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
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

__attribute__((alias("__imp__sub_825608B0"))) PPC_WEAK_FUNC(sub_825608B0);
PPC_FUNC_IMPL(__imp__sub_825608B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,7368(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7368);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x8281d650
	sub_8281D650(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825608C4"))) PPC_WEAK_FUNC(sub_825608C4);
PPC_FUNC_IMPL(__imp__sub_825608C4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825608C8"))) PPC_WEAK_FUNC(sub_825608C8);
PPC_FUNC_IMPL(__imp__sub_825608C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,7368(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7368);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
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

__attribute__((alias("__imp__sub_825608E8"))) PPC_WEAK_FUNC(sub_825608E8);
PPC_FUNC_IMPL(__imp__sub_825608E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,7364(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7364);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x8281d650
	sub_8281D650(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825608FC"))) PPC_WEAK_FUNC(sub_825608FC);
PPC_FUNC_IMPL(__imp__sub_825608FC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82560900"))) PPC_WEAK_FUNC(sub_82560900);
PPC_FUNC_IMPL(__imp__sub_82560900) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,7364(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7364);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
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

__attribute__((alias("__imp__sub_82560920"))) PPC_WEAK_FUNC(sub_82560920);
PPC_FUNC_IMPL(__imp__sub_82560920) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,7376(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7376);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,6856(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6856);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82562808
	sub_82562808(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8256093C"))) PPC_WEAK_FUNC(sub_8256093C);
PPC_FUNC_IMPL(__imp__sub_8256093C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82560940"))) PPC_WEAK_FUNC(sub_82560940);
PPC_FUNC_IMPL(__imp__sub_82560940) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r11,788(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82560978
	if (ctx.cr6.eq) goto loc_82560978;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82560978
	if (ctx.cr6.eq) goto loc_82560978;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x825609d0
	if (!ctx.cr6.eq) goto loc_825609D0;
loc_82560978:
	// lwz r11,7376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7376);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x825609c0
	if (ctx.cr6.eq) goto loc_825609C0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x825609b4
	if (ctx.cr6.eq) goto loc_825609B4;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x825609a8
	if (ctx.cr6.eq) goto loc_825609A8;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x825609c8
	if (!ctx.cr6.eq) goto loc_825609C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82561e48
	ctx.lr = 0x825609A4;
	sub_82561E48(ctx, base);
	// b 0x825609c8
	goto loc_825609C8;
loc_825609A8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82561cb8
	ctx.lr = 0x825609B0;
	sub_82561CB8(ctx, base);
	// b 0x825609c8
	goto loc_825609C8;
loc_825609B4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82560aa8
	ctx.lr = 0x825609BC;
	sub_82560AA8(ctx, base);
	// b 0x825609c8
	goto loc_825609C8;
loc_825609C0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82561168
	ctx.lr = 0x825609C8;
	sub_82561168(ctx, base);
loc_825609C8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,6880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6880, ctx.r11.u32);
loc_825609D0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825609E8"))) PPC_WEAK_FUNC(sub_825609E8);
PPC_FUNC_IMPL(__imp__sub_825609E8) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,7232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7232);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82560a4c
	if (ctx.cr6.eq) goto loc_82560A4C;
	// stw r30,7232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7232, ctx.r30.u32);
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// stw r30,7264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7264, ctx.r30.u32);
	// lwz r3,7228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7228);
	// bl 0x82978d98
	ctx.lr = 0x82560A24;
	sub_82978D98(ctx, base);
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r11,r11,-3208
	ctx.r11.s64 = ctx.r11.s64 + -3208;
	// lfs f1,7256(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 7256);
	ctx.f1.f64 = double(temp.f32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8255cf58
	ctx.lr = 0x82560A4C;
	sub_8255CF58(ctx, base);
loc_82560A4C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,10
	ctx.r4.s64 = 10;
	// stw r30,7276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7276, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1600(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1600);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82560A68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,7272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7272, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82560A88"))) PPC_WEAK_FUNC(sub_82560A88);
PPC_FUNC_IMPL(__imp__sub_82560A88) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r4,13
	ctx.r4.s64 = 13;
	// stw r10,7288(r3)
	PPC_STORE_U32(ctx.r3.u32 + 7288, ctx.r10.u32);
	// lwz r11,1600(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1600);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82560AA8"))) PPC_WEAK_FUNC(sub_82560AA8);
PPC_FUNC_IMPL(__imp__sub_82560AA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82560AB0;
	__savegprlr_26(ctx, base);
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// addi r4,r11,808
	ctx.r4.s64 = ctx.r11.s64 + 808;
	// bl 0x82873b58
	ctx.lr = 0x82560ADC;
	sub_82873B58(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82560c70
	if (!ctx.cr6.gt) goto loc_82560C70;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// lwz r29,124(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f30,32752(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32752);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,908(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f31.f64 = double(temp.f32);
loc_82560B00:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r3,1412(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1412);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82560c28
	if (ctx.cr6.eq) goto loc_82560C28;
	// lwz r11,2112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82560c28
	if (!ctx.cr6.gt) goto loc_82560C28;
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82560c28
	if (!ctx.cr0.eq) goto loc_82560C28;
	// bl 0x824a0b58
	ctx.lr = 0x82560B2C;
	sub_824A0B58(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82438430
	ctx.lr = 0x82560B38;
	sub_82438430(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82560b4c
	if (ctx.cr0.eq) goto loc_82560B4C;
	// lwz r3,1412(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1412);
	// bl 0x824090e0
	ctx.lr = 0x82560B48;
	sub_824090E0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82560B4C:
	// lwz r3,1608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// bl 0x82414510
	ctx.lr = 0x82560B54;
	sub_82414510(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82560c28
	if (ctx.cr6.eq) goto loc_82560C28;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x828a95f0
	ctx.lr = 0x82560B68;
	sub_828A95F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82560c28
	if (ctx.cr0.eq) goto loc_82560C28;
	// lfs f13,624(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r31,620
	ctx.r11.s64 = ctx.r31.s64 + 620;
	// lfs f0,624(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 624);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,628(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 628);
	ctx.f13.f64 = double(temp.f32);
	// lwz r6,80(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f11,620(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,620(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 620);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f11,624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,620(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f9.f64 = double(temp.f32);
	// fmr f8,f9
	ctx.f8.f64 = ctx.f9.f64;
	// fmuls f7,f0,f0
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f7,f13,f13,f7
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f7.f64));
	// fmadds f7,f12,f12,f7
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f7.f64));
	// fsqrts f7,f7
	ctx.f7.f64 = double(float(sqrt(ctx.f7.f64)));
	// fdivs f6,f31,f7
	ctx.f6.f64 = double(float(ctx.f31.f64 / ctx.f7.f64));
	// fmuls f7,f7,f30
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f30.f64));
	// fmuls f0,f0,f6
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// fmuls f12,f6,f12
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fmuls f13,f13,f6
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f6.f64));
	// fmuls f0,f0,f7
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// fmuls f12,f7,f12
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fmuls f13,f13,f7
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f7.f64));
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f0,f10,f12
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fadds f0,f9,f13
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stfs f8,104(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x82560c88
	ctx.lr = 0x82560C24;
	sub_82560C88(ctx, base);
	// li r27,1
	ctx.r27.s64 = 1;
loc_82560C28:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x82560b00
	if (!ctx.cr0.eq) goto loc_82560B00;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82560c70
	if (ctx.cr6.eq) goto loc_82560C70;
	// lwz r11,7052(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7052);
	// lwz r10,7004(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7004);
	// subf. r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x82560c54
	if (!ctx.cr0.lt) goto loc_82560C54;
	// stw r26,7004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7004, ctx.r26.u32);
	// b 0x82560c6c
	goto loc_82560C6C;
loc_82560C54:
	// lwz r10,7008(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7008);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82560c68
	if (!ctx.cr6.gt) goto loc_82560C68;
	// stw r10,7004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7004, ctx.r10.u32);
	// b 0x82560c6c
	goto loc_82560C6C;
loc_82560C68:
	// stw r11,7004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7004, ctx.r11.u32);
loc_82560C6C:
	// stw r26,7376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7376, ctx.r26.u32);
loc_82560C70:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8239d768
	ctx.lr = 0x82560C78;
	sub_8239D768(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82560C88"))) PPC_WEAK_FUNC(sub_82560C88);
PPC_FUNC_IMPL(__imp__sub_82560C88) {
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
	// bl 0x82a61740
	ctx.lr = 0x82560CA0;
	__savefpr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r4,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r4.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r5,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r5.u64);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r11,216(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82560f28
	ctx.lr = 0x82560CC0;
	sub_82560F28(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f31,208(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f31.f64 = double(temp.f32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lfs f30,212(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f30.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f30,84(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f29,216(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,-32516(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32516);
	ctx.f28.f64 = double(temp.f32);
	// fadds f0,f31,f28
	ctx.f0.f64 = double(float(ctx.f31.f64 + ctx.f28.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stfs f29,88(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82560f28
	ctx.lr = 0x82560CFC;
	sub_82560F28(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lfs f27,912(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	ctx.f27.f64 = double(temp.f32);
	// lfs f26,-11424(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -11424);
	ctx.f26.f64 = double(temp.f32);
	// bne 0x82560d6c
	if (!ctx.cr0.eq) goto loc_82560D6C;
	// fadds f0,f31,f27
	ctx.f0.f64 = double(float(ctx.f31.f64 + ctx.f27.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f29,88(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stfs f30,84(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82560f28
	ctx.lr = 0x82560D3C;
	sub_82560F28(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82560d6c
	if (!ctx.cr0.eq) goto loc_82560D6C;
	// fsubs f0,f30,f26
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f26.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f29,88(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82560f28
	ctx.lr = 0x82560D6C;
	sub_82560F28(ctx, base);
loc_82560D6C:
	// stfs f29,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fsubs f0,f31,f28
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f28.f64));
	// stfs f30,84(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82560f28
	ctx.lr = 0x82560D94;
	sub_82560F28(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82560df4
	if (!ctx.cr0.eq) goto loc_82560DF4;
	// stfs f29,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fsubs f0,f31,f27
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f27.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stfs f30,84(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82560f28
	ctx.lr = 0x82560DC4;
	sub_82560F28(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82560df4
	if (!ctx.cr0.eq) goto loc_82560DF4;
	// stfs f29,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fadds f0,f31,f26
	ctx.f0.f64 = double(float(ctx.f31.f64 + ctx.f26.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stfs f30,84(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82560f28
	ctx.lr = 0x82560DF4;
	sub_82560F28(ctx, base);
loc_82560DF4:
	// stfs f29,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fadds f0,f30,f28
	ctx.f0.f64 = double(float(ctx.f30.f64 + ctx.f28.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82560f28
	ctx.lr = 0x82560E1C;
	sub_82560F28(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82560e7c
	if (!ctx.cr0.eq) goto loc_82560E7C;
	// stfs f29,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fadds f0,f30,f27
	ctx.f0.f64 = double(float(ctx.f30.f64 + ctx.f27.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82560f28
	ctx.lr = 0x82560E4C;
	sub_82560F28(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82560e7c
	if (!ctx.cr0.eq) goto loc_82560E7C;
	// stfs f29,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fsubs f0,f30,f26
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f26.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82560f28
	ctx.lr = 0x82560E7C;
	sub_82560F28(ctx, base);
loc_82560E7C:
	// stfs f29,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fsubs f0,f30,f28
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f28.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82560f28
	ctx.lr = 0x82560EA4;
	sub_82560F28(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82560f04
	if (!ctx.cr0.eq) goto loc_82560F04;
	// stfs f29,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fsubs f0,f30,f27
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f27.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82560f28
	ctx.lr = 0x82560ED4;
	sub_82560F28(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82560f04
	if (!ctx.cr0.eq) goto loc_82560F04;
	// stfs f29,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fadds f0,f30,f26
	ctx.f0.f64 = double(float(ctx.f30.f64 + ctx.f26.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82560f28
	ctx.lr = 0x82560F04;
	sub_82560F28(ctx, base);
loc_82560F04:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x82a6178c
	ctx.lr = 0x82560F10;
	__restfpr_26(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82560F28"))) PPC_WEAK_FUNC(sub_82560F28);
PPC_FUNC_IMPL(__imp__sub_82560F28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82560F30;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r4,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r4.u64);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// std r5,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r5.u64);
	// lwz r10,232(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lfs f2,-24640(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24640);
	ctx.f2.f64 = double(temp.f32);
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// lwz r3,644(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 644);
	// bl 0x828d9878
	ctx.lr = 0x82560F68;
	sub_828D9878(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8256115c
	if (!ctx.cr0.eq) goto loc_8256115C;
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// addi r3,r11,7388
	ctx.r3.s64 = ctx.r11.s64 + 7388;
	// lwz r11,7388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7388);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82560F94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// lwz r3,88(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// bl 0x82919328
	ctx.lr = 0x82560FA0;
	sub_82919328(ctx, base);
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r30,84(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// b 0x82560ffc
	goto loc_82560FFC;
loc_82560FB0:
	// bl 0x82483150
	ctx.lr = 0x82560FB4;
	sub_82483150(ctx, base);
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
	ctx.lr = 0x82560FCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bne 0x82560fdc
	if (!ctx.cr0.eq) goto loc_82560FDC;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82560FDC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82560ff8
	if (ctx.cr6.eq) goto loc_82560FF8;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r11,1728
	ctx.r3.s64 = ctx.r11.s64 + 1728;
	// bl 0x827f0270
	ctx.lr = 0x82560FF0;
	sub_827F0270(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82561008
	if (!ctx.cr0.eq) goto loc_82561008;
loc_82560FF8:
	// lwz r30,1720(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1720);
loc_82560FFC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82560fb0
	if (!ctx.cr6.eq) goto loc_82560FB0;
	// b 0x8256100c
	goto loc_8256100C;
loc_82561008:
	// li r29,1
	ctx.r29.s64 = 1;
loc_8256100C:
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// addi r3,r11,7388
	ctx.r3.s64 = ctx.r11.s64 + 7388;
	// lwz r11,7388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7388);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82561028;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8256115c
	if (ctx.cr6.eq) goto loc_8256115C;
	// lwz r11,656(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 656);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lwz r9,660(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 660);
	// addi r30,r1,112
	ctx.r30.s64 = ctx.r1.s64 + 112;
	// lwz r8,664(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 664);
	// addi r3,r10,-13808
	ctx.r3.s64 = ctx.r10.s64 + -13808;
	// addi r29,r1,224
	ctx.r29.s64 = ctx.r1.s64 + 224;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// bl 0x82816528
	ctx.lr = 0x8256105C;
	sub_82816528(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x828250b0
	ctx.lr = 0x82561098;
	sub_828250B0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x825610c4
	if (ctx.cr0.eq) goto loc_825610C4;
	// bl 0x823b3b50
	ctx.lr = 0x825610A4;
	sub_823B3B50(ctx, base);
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
	ctx.lr = 0x825610BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825610c8
	if (!ctx.cr0.eq) goto loc_825610C8;
loc_825610C4:
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_825610C8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8256115c
	if (ctx.cr6.eq) goto loc_8256115C;
	// lwz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,228(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r9,232(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// stw r11,2468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2468, ctx.r11.u32);
	// stw r10,2472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2472, ctx.r10.u32);
	// stw r9,2476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2476, ctx.r9.u32);
	// bl 0x829c35d8
	ctx.lr = 0x825610F0;
	sub_829C35D8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82561120
	if (ctx.cr0.eq) goto loc_82561120;
	// lwz r11,1492(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// lwz r10,80(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// stw r10,164(r11)
	PPC_STORE_U32(ctx.r11.u32 + 164, ctx.r10.u32);
	// lwz r11,1492(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// lwz r10,620(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 620);
	// lwz r9,624(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 624);
	// lwz r8,628(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 628);
	// stw r10,168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 168, ctx.r10.u32);
	// stw r9,172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 172, ctx.r9.u32);
	// stw r8,176(r11)
	PPC_STORE_U32(ctx.r11.u32 + 176, ctx.r8.u32);
loc_82561120:
	// lwz r11,7056(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 7056);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82561134
	if (ctx.cr6.eq) goto loc_82561134;
	// lwz r4,80(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x82561138
	goto loc_82561138;
loc_82561134:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82561138:
	// cntlzw r11,r4
	ctx.r11.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// stw r4,4264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4264, ctx.r4.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stw r11,4260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4260, ctx.r11.u32);
	// bl 0x829bd3a8
	ctx.lr = 0x82561154;
	sub_829BD3A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82561160
	goto loc_82561160;
loc_8256115C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82561160:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82561168"))) PPC_WEAK_FUNC(sub_82561168);
PPC_FUNC_IMPL(__imp__sub_82561168) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f4
	ctx.lr = 0x82561170;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,6856(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6856);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82561190
	if (ctx.cr6.eq) goto loc_82561190;
	// bl 0x825613d8
	ctx.lr = 0x8256118C;
	sub_825613D8(ctx, base);
	// b 0x825613cc
	goto loc_825613CC;
loc_82561190:
	// lwz r11,6880(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6880);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825611b0
	if (ctx.cr6.eq) goto loc_825611B0;
loc_8256119C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82561be0
	ctx.lr = 0x825611A4;
	sub_82561BE0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,6816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6816, ctx.r11.u32);
	// b 0x825613cc
	goto loc_825613CC;
loc_825611B0:
	// lwz r11,7076(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7076);
	// lwz r10,7004(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7004);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x825611cc
	if (!ctx.cr6.lt) goto loc_825611CC;
	// lwz r11,7108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8256119c
	if (ctx.cr6.eq) goto loc_8256119C;
loc_825611CC:
	// lwz r11,7100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825613cc
	if (!ctx.cr6.gt) goto loc_825613CC;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,10548(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// bl 0x82439c68
	ctx.lr = 0x825611E8;
	sub_82439C68(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lis r24,-31949
	ctx.r24.s64 = -2093809664;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82561284
	if (!ctx.cr6.gt) goto loc_82561284;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// lwz r26,108(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r25,r11,-19280
	ctx.r25.s64 = ctx.r11.s64 + -19280;
loc_8256120C:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,6148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6148);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82561224
	if (ctx.cr6.eq) goto loc_82561224;
	// lwz r29,80(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x82561228
	goto loc_82561228;
loc_82561224:
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_82561228:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82833108
	ctx.lr = 0x82561230;
	sub_82833108(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82561268
	if (ctx.cr0.eq) goto loc_82561268;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r23,80(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82833180
	ctx.lr = 0x82561244;
	sub_82833180(ctx, base);
	// lis r11,-8531
	ctx.r11.s64 = -559087616;
	// stw r23,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r23.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ori r11,r11,47806
	ctx.r11.u64 = ctx.r11.u64 | 47806;
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// stw r28,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r28.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// stw r25,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r25.u32);
	// b 0x8256126c
	goto loc_8256126C;
loc_82561268:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8256126C:
	// lwz r11,13024(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x82561278;
	sub_82833A30(ctx, base);
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// bne 0x8256120c
	if (!ctx.cr0.eq) goto loc_8256120C;
loc_82561284:
	// lwz r11,7096(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7096);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,13024(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13024);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
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
	// bl 0x82825ff8
	ctx.lr = 0x825612BC;
	sub_82825FF8(ctx, base);
	// stw r28,7072(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7072, ctx.r28.u32);
	// lwz r11,7104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7104);
	// addi r3,r31,7084
	ctx.r3.s64 = ctx.r31.s64 + 7084;
	// stw r28,7100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7100, ctx.r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825612e4
	if (ctx.cr6.eq) goto loc_825612E4;
	// stw r28,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r28.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x82332c38
	ctx.lr = 0x825612E4;
	sub_82332C38(ctx, base);
loc_825612E4:
	// lwz r11,7004(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7004);
	// lwz r10,7076(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7076);
	// stw r28,7376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7376, ctx.r28.u32);
	// subf. r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x82561300
	if (!ctx.cr0.lt) goto loc_82561300;
	// stw r28,7004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7004, ctx.r28.u32);
	// b 0x82561318
	goto loc_82561318;
loc_82561300:
	// lwz r10,7008(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7008);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82561314
	if (!ctx.cr6.gt) goto loc_82561314;
	// stw r10,7004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7004, ctx.r10.u32);
	// b 0x82561318
	goto loc_82561318;
loc_82561314:
	// stw r11,7004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7004, ctx.r11.u32);
loc_82561318:
	// lwz r11,7052(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7052);
	// lwz r10,7004(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7004);
	// stw r28,7108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7108, ctx.r28.u32);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82561354
	if (!ctx.cr6.lt) goto loc_82561354;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x8256133c
	if (!ctx.cr0.lt) goto loc_8256133C;
	// stw r28,7004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7004, ctx.r28.u32);
	// b 0x82561354
	goto loc_82561354;
loc_8256133C:
	// lwz r10,7008(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7008);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82561350
	if (!ctx.cr6.gt) goto loc_82561350;
	// stw r10,7004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7004, ctx.r10.u32);
	// b 0x82561354
	goto loc_82561354;
loc_82561350:
	// stw r11,7004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7004, ctx.r11.u32);
loc_82561354:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// lis r10,-32170
	ctx.r10.s64 = -2108293120;
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// addi r10,r10,7136
	ctx.r10.s64 = ctx.r10.s64 + 7136;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f31,30248(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30248);
	ctx.f31.f64 = double(temp.f32);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8255cf58
	ctx.lr = 0x82561388;
	sub_8255CF58(ctx, base);
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// addi r11,r11,9336
	ctx.r11.s64 = ctx.r11.s64 + 9336;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8255cf58
	ctx.lr = 0x825613B0;
	sub_8255CF58(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,7220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7220, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,5828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5828, ctx.r11.u32);
	// stw r11,5832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5832, ctx.r11.u32);
	// stw r11,7216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7216, ctx.r11.u32);
	// bl 0x8239d768
	ctx.lr = 0x825613CC;
	sub_8239D768(ctx, base);
loc_825613CC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x82a4ea44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825613D8"))) PPC_WEAK_FUNC(sub_825613D8);
PPC_FUNC_IMPL(__imp__sub_825613D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f0
	ctx.lr = 0x825613E0;
	__savegprlr_22(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r25,-31949
	ctx.r25.s64 = -2093809664;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,13024(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13024);
	// lwz r4,6860(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6860);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b98f8
	ctx.lr = 0x825613FC;
	sub_829B98F8(ctx, base);
	// mr. r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne 0x82561418
	if (!ctx.cr0.eq) goto loc_82561418;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82562808
	ctx.lr = 0x8256140C;
	sub_82562808(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,6816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6816, ctx.r11.u32);
	// b 0x82561594
	goto loc_82561594;
loc_82561418:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,10548(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// bl 0x82439c68
	ctx.lr = 0x82561428;
	sub_82439C68(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825614c0
	if (!ctx.cr6.gt) goto loc_825614C0;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// lwz r26,108(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r24,r11,-19280
	ctx.r24.s64 = ctx.r11.s64 + -19280;
loc_82561448:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,6148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6148);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82561460
	if (ctx.cr6.eq) goto loc_82561460;
	// lwz r28,80(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x82561464
	goto loc_82561464;
loc_82561460:
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_82561464:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82833108
	ctx.lr = 0x8256146C;
	sub_82833108(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x825614a4
	if (ctx.cr0.eq) goto loc_825614A4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r22,80(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82833180
	ctx.lr = 0x82561480;
	sub_82833180(ctx, base);
	// lis r11,-8531
	ctx.r11.s64 = -559087616;
	// stw r22,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r22.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ori r11,r11,47806
	ctx.r11.u64 = ctx.r11.u64 | 47806;
	// stw r28,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r28.u32);
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// stw r24,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r24.u32);
	// b 0x825614a8
	goto loc_825614A8;
loc_825614A4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_825614A8:
	// lwz r11,13024(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x825614B4;
	sub_82833A30(ctx, base);
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// bne 0x82561448
	if (!ctx.cr0.eq) goto loc_82561448;
loc_825614C0:
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,13024(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13024);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r23,620
	ctx.r5.s64 = ctx.r23.s64 + 620;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82825ff8
	ctx.lr = 0x825614DC;
	sub_82825FF8(ctx, base);
	// stw r29,7376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7376, ctx.r29.u32);
	// stw r29,6856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6856, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82562808
	ctx.lr = 0x825614EC;
	sub_82562808(ctx, base);
	// stw r29,7108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7108, ctx.r29.u32);
	// lis r10,-32170
	ctx.r10.s64 = -2108293120;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r10,r10,9336
	ctx.r10.s64 = ctx.r10.s64 + 9336;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lfs f1,30248(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30248);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8255cf58
	ctx.lr = 0x8256151C;
	sub_8255CF58(ctx, base);
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8256152c
	if (!ctx.cr6.eq) goto loc_8256152C;
	// stw r29,6876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6876, ctx.r29.u32);
loc_8256152C:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,24
	ctx.r3.s64 = 24;
	// stw r11,7220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7220, ctx.r11.u32);
	// stw r11,5828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5828, ctx.r11.u32);
	// stw r11,5832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5832, ctx.r11.u32);
	// stw r11,7216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7216, ctx.r11.u32);
	// stw r11,6852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6852, ctx.r11.u32);
	// bl 0x82833108
	ctx.lr = 0x8256154C;
	sub_82833108(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8256157c
	if (ctx.cr0.eq) goto loc_8256157C;
	// lwz r11,13024(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13024);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,96(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// bl 0x82333a80
	ctx.lr = 0x82561568;
	sub_82333A80(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,3944
	ctx.r11.s64 = ctx.r11.s64 + 3944;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x82561580
	goto loc_82561580;
loc_8256157C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82561580:
	// lwz r11,13024(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x8256158C;
	sub_82833A30(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8239d768
	ctx.lr = 0x82561594;
	sub_8239D768(ctx, base);
loc_82561594:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82a4ea40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825615A0"))) PPC_WEAK_FUNC(sub_825615A0);
PPC_FUNC_IMPL(__imp__sub_825615A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x825615A8;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r11,268
	ctx.r3.s64 = ctx.r11.s64 + 268;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// bl 0x82816528
	ctx.lr = 0x825615C8;
	sub_82816528(ctx, base);
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
	// li r26,-1
	ctx.r26.s64 = -1;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x825615EC;
	sub_823CF190(ctx, base);
	// addi r29,r31,620
	ctx.r29.s64 = ctx.r31.s64 + 620;
	// li r25,5
	ctx.r25.s64 = 5;
loc_825615F4:
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,664(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 664);
	// li r4,48
	ctx.r4.s64 = 48;
	// rldicr r8,r9,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r3,13024(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// rldicr r10,r11,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r9,656(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 656);
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// ld r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x8282b1e0
	ctx.lr = 0x82561624;
	sub_8282B1E0(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x82561664
	if (ctx.cr0.eq) goto loc_82561664;
	// lwz r3,1408(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1408);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8256163c
	if (ctx.cr6.eq) goto loc_8256163C;
	// bl 0x82978ed0
	ctx.lr = 0x8256163C;
	sub_82978ED0(ctx, base);
loc_8256163C:
	// addi r3,r31,7112
	ctx.r3.s64 = ctx.r31.s64 + 7112;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82332d50
	ctx.lr = 0x82561650;
	sub_82332D50(ctx, base);
	// lwz r11,7124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7124);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82561664
	if (ctx.cr0.eq) goto loc_82561664;
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
loc_82561664:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne 0x825615f4
	if (!ctx.cr0.eq) goto loc_825615F4;
	// lis r4,31986
	ctx.r4.s64 = 2096234496;
	// li r5,48
	ctx.r5.s64 = 48;
	// ori r4,r4,9848
	ctx.r4.u64 = ctx.r4.u64 | 9848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829bd828
	ctx.lr = 0x82561680;
	sub_829BD828(ctx, base);
	// stw r3,7348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7348, ctx.r3.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// addi r3,r10,328
	ctx.r3.s64 = ctx.r10.s64 + 328;
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,136(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f31,140(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x825616AC;
	sub_82816528(ctx, base);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// ld r5,136(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// rldicr r6,r11,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r3,7348(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7348);
	// rldicr r8,r30,32,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFF00000000;
	// ld r7,120(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// bl 0x829c7118
	ctx.lr = 0x825616CC;
	sub_829C7118(ctx, base);
	// lwz r3,7348(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7348);
	// bl 0x82978ed0
	ctx.lr = 0x825616D4;
	sub_82978ED0(ctx, base);
	// lis r4,31986
	ctx.r4.s64 = 2096234496;
	// li r5,48
	ctx.r5.s64 = 48;
	// ori r4,r4,9848
	ctx.r4.u64 = ctx.r4.u64 | 9848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829bd828
	ctx.lr = 0x825616E8;
	sub_829BD828(ctx, base);
	// stw r3,7352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7352, ctx.r3.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stfs f31,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f31,140(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// addi r3,r11,340
	ctx.r3.s64 = ctx.r11.s64 + 340;
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// bl 0x82816528
	ctx.lr = 0x8256170C;
	sub_82816528(ctx, base);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// ld r5,136(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// rldicr r6,r11,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r3,7352(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7352);
	// rldicr r8,r30,32,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFF00000000;
	// ld r7,120(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// bl 0x829c7118
	ctx.lr = 0x8256172C;
	sub_829C7118(ctx, base);
	// lwz r3,7352(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7352);
	// bl 0x82978ed0
	ctx.lr = 0x82561734;
	sub_82978ED0(ctx, base);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// addi r3,r10,360
	ctx.r3.s64 = ctx.r10.s64 + 360;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// addi r27,r11,1268
	ctx.r27.s64 = ctx.r11.s64 + 1268;
	// bl 0x82816528
	ctx.lr = 0x8256174C;
	sub_82816528(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// bl 0x823cf190
	ctx.lr = 0x82561764;
	sub_823CF190(ctx, base);
	// lwz r11,664(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 664);
	// lwz r8,8(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,48
	ctx.r4.s64 = 48;
	// lwz r3,13024(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// rldicr r10,r11,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r9,656(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 656);
	// rldicr r8,r8,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// ld r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x8282b1e0
	ctx.lr = 0x82561794;
	sub_8282B1E0(ctx, base);
	// stw r3,7280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7280, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825617b0
	if (ctx.cr0.eq) goto loc_825617B0;
	// lwz r3,1408(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1408);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825617b0
	if (ctx.cr6.eq) goto loc_825617B0;
	// bl 0x82978ed0
	ctx.lr = 0x825617B0;
	sub_82978ED0(ctx, base);
loc_825617B0:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r27,-32768
	ctx.r27.s64 = -2147483648;
	// addi r3,r11,408
	ctx.r3.s64 = ctx.r11.s64 + 408;
	// bl 0x82816528
	ctx.lr = 0x825617C0;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x829bd828
	ctx.lr = 0x825617D0;
	sub_829BD828(ctx, base);
	// stw r3,7228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7228, ctx.r3.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stfs f31,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f31,140(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// addi r3,r11,460
	ctx.r3.s64 = ctx.r11.s64 + 460;
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// bl 0x82816528
	ctx.lr = 0x825617F4;
	sub_82816528(ctx, base);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// ld r5,136(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// rldicr r6,r11,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r3,7228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7228);
	// rldicr r8,r30,32,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFF00000000;
	// ld r7,120(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// bl 0x829c7118
	ctx.lr = 0x82561814;
	sub_829C7118(ctx, base);
	// stfs f31,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f31,140(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// bl 0x824113a0
	ctx.lr = 0x82561824;
	sub_824113A0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r3,r11,472
	ctx.r3.s64 = ctx.r11.s64 + 472;
	// lis r11,7385
	ctx.r11.s64 = 483983360;
	// ori r25,r11,30940
	ctx.r25.u64 = ctx.r11.u64 | 30940;
	// bl 0x82816528
	ctx.lr = 0x8256183C;
	sub_82816528(ctx, base);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// li r5,2050
	ctx.r5.s64 = 2050;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r27,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// li r7,16
	ctx.r7.s64 = 16;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// bl 0x829c87d0
	ctx.lr = 0x82561870;
	sub_829C87D0(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stw r30,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r30.u32);
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r30.u32);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// ld r5,136(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// rldicr r6,r30,32,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFF00000000;
	// lfs f0,-12104(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12104);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,18368(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 18368);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stfs f13,140(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lwz r9,140(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lwz r7,124(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stfs f13,144(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lwz r27,144(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r8,328(r3)
	PPC_STORE_U32(ctx.r3.u32 + 328, ctx.r8.u32);
	// lis r8,-31963
	ctx.r8.s64 = -2094727168;
	// stw r7,332(r3)
	PPC_STORE_U32(ctx.r3.u32 + 332, ctx.r7.u32);
	// lfs f0,16816(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 16816);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,336(r3)
	PPC_STORE_U32(ctx.r3.u32 + 336, ctx.r11.u32);
	// stw r10,316(r3)
	PPC_STORE_U32(ctx.r3.u32 + 316, ctx.r10.u32);
	// stw r9,320(r3)
	PPC_STORE_U32(ctx.r3.u32 + 320, ctx.r9.u32);
	// stw r27,324(r3)
	PPC_STORE_U32(ctx.r3.u32 + 324, ctx.r27.u32);
	// stw r3,7252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7252, ctx.r3.u32);
	// lfs f13,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f12,140(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// bl 0x8281bb18
	ctx.lr = 0x82561908;
	sub_8281BB18(ctx, base);
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lis r6,17010
	ctx.r6.s64 = 1114767360;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// lis r5,-13760
	ctx.r5.s64 = -901775360;
	// ori r6,r6,7120
	ctx.r6.u64 = ctx.r6.u64 | 7120;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// ori r5,r5,22290
	ctx.r5.u64 = ctx.r5.u64 | 22290;
	// addi r4,r31,7296
	ctx.r4.s64 = ctx.r31.s64 + 7296;
	// lwz r11,7252(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7252);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// ori r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 8;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// bl 0x824091a0
	ctx.lr = 0x8256193C;
	sub_824091A0(ctx, base);
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lis r6,17010
	ctx.r6.s64 = 1114767360;
	// lis r5,-6191
	ctx.r5.s64 = -405733376;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// ori r6,r6,7120
	ctx.r6.u64 = ctx.r6.u64 | 7120;
	// ori r5,r5,65019
	ctx.r5.u64 = ctx.r5.u64 | 65019;
	// addi r4,r31,7292
	ctx.r4.s64 = ctx.r31.s64 + 7292;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x824091a0
	ctx.lr = 0x82561960;
	sub_824091A0(ctx, base);
	// lis r11,-24618
	ctx.r11.s64 = -1613365248;
	// lis r10,7477
	ctx.r10.s64 = 490012672;
	// ori r11,r11,51213
	ctx.r11.u64 = ctx.r11.u64 | 51213;
	// ori r10,r10,52907
	ctx.r10.u64 = ctx.r10.u64 | 52907;
	// lis r9,22153
	ctx.r9.s64 = 1451819008;
	// stw r11,7328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7328, ctx.r11.u32);
	// lis r8,14607
	ctx.r8.s64 = 957284352;
	// stw r10,7332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7332, ctx.r10.u32);
	// lis r7,14823
	ctx.r7.s64 = 971440128;
	// ori r9,r9,41981
	ctx.r9.u64 = ctx.r9.u64 | 41981;
	// ori r11,r8,58309
	ctx.r11.u64 = ctx.r8.u64 | 58309;
	// ori r10,r7,24017
	ctx.r10.u64 = ctx.r7.u64 | 24017;
	// stw r9,7340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7340, ctx.r9.u32);
	// lis r6,-5986
	ctx.r6.s64 = -392298496;
	// stw r11,7344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7344, ctx.r11.u32);
	// lis r5,25595
	ctx.r5.s64 = 1677393920;
	// stw r10,7316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7316, ctx.r10.u32);
	// lis r4,15670
	ctx.r4.s64 = 1026949120;
	// ori r9,r6,23080
	ctx.r9.u64 = ctx.r6.u64 | 23080;
	// ori r11,r5,10803
	ctx.r11.u64 = ctx.r5.u64 | 10803;
	// ori r10,r4,65353
	ctx.r10.u64 = ctx.r4.u64 | 65353;
	// stw r9,7320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7320, ctx.r9.u32);
	// stw r11,7304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7304, ctx.r11.u32);
	// stw r10,7308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7308, ctx.r10.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825619D0"))) PPC_WEAK_FUNC(sub_825619D0);
PPC_FUNC_IMPL(__imp__sub_825619D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x825619D8;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r25,-31949
	ctx.r25.s64 = -2093809664;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r11,13024(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13024);
	// lwz r11,788(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82561a04
	if (ctx.cr6.eq) goto loc_82561A04;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82561ab0
	if (!ctx.cr6.eq) goto loc_82561AB0;
loc_82561A04:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8255d210
	ctx.lr = 0x82561A0C;
	sub_8255D210(ctx, base);
	// lwz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// addi r28,r31,7084
	ctx.r28.s64 = ctx.r31.s64 + 7084;
	// stw r26,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r26.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82561a34
	if (ctx.cr6.eq) goto loc_82561A34;
	// stw r26,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r26.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82332c38
	ctx.lr = 0x82561A34;
	sub_82332C38(ctx, base);
loc_82561A34:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82561a6c
	if (!ctx.cr6.gt) goto loc_82561A6C;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_82561A48:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x824cac78
	ctx.lr = 0x82561A58;
	sub_824CAC78(ctx, base);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82561a48
	if (ctx.cr6.lt) goto loc_82561A48;
loc_82561A6C:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r30,r1,144
	ctx.r30.s64 = ctx.r1.s64 + 144;
	// addi r3,r11,484
	ctx.r3.s64 = ctx.r11.s64 + 484;
	// bl 0x82816528
	ctx.lr = 0x82561A7C;
	sub_82816528(ctx, base);
	// lwz r11,13024(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13024);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x8282c818
	ctx.lr = 0x82561A9C;
	sub_8282C818(ctx, base);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82400f38
	ctx.lr = 0x82561AA4;
	sub_82400F38(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r11,r11,16980
	ctx.r11.s64 = ctx.r11.s64 + 16980;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
loc_82561AB0:
	// lwz r11,6856(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6856);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82561b78
	if (!ctx.cr6.eq) goto loc_82561B78;
	// lwz r11,7100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82561b78
	if (!ctx.cr6.gt) goto loc_82561B78;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// lfs f31,912(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	ctx.f31.f64 = double(temp.f32);
loc_82561ADC:
	// lwz r11,7096(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7096);
	// lwz r10,7128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7128);
	// add r9,r28,r11
	ctx.r9.u64 = ctx.r28.u64 + ctx.r11.u64;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// lwzx r11,r28,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// bge cr6,0x82561b60
	if (!ctx.cr6.lt) goto loc_82561B60;
	// lwz r11,7124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7124);
	// lwzx r30,r11,r27
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82561b60
	if (ctx.cr6.eq) goto loc_82561B60;
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// lfs f12,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f12,124(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 460);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82561B4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,1408(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1408);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82561b60
	if (ctx.cr6.eq) goto loc_82561B60;
	// li r4,48
	ctx.r4.s64 = 48;
	// bl 0x82978d98
	ctx.lr = 0x82561B60;
	sub_82978D98(ctx, base);
loc_82561B60:
	// lwz r11,7100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7100);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,12
	ctx.r28.s64 = ctx.r28.s64 + 12;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82561adc
	if (ctx.cr6.lt) goto loc_82561ADC;
loc_82561B78:
	// lwz r11,13024(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13024);
	// li r7,-1
	ctx.r7.s64 = -1;
	// lis r5,-8068
	ctx.r5.s64 = -528744448;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// ori r5,r5,48790
	ctx.r5.u64 = ctx.r5.u64 | 48790;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x82561B9C;
	sub_823CF190(ctx, base);
	// lwz r11,664(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 664);
	// lwz r8,628(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,48
	ctx.r4.s64 = 48;
	// lwz r3,13024(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13024);
	// rldicr r10,r11,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rldicr r8,r8,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r9,656(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 656);
	// ld r7,620(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 620);
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// bl 0x8282b1e0
	ctx.lr = 0x82561BCC;
	sub_8282B1E0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,7136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7136, ctx.r11.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82561BE0"))) PPC_WEAK_FUNC(sub_82561BE0);
PPC_FUNC_IMPL(__imp__sub_82561BE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82561BE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,7128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82561c38
	if (!ctx.cr6.gt) goto loc_82561C38;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82561C04:
	// lwz r11,7124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7124);
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82561c24
	if (ctx.cr6.eq) goto loc_82561C24;
	// lwz r3,1408(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1408);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82561c24
	if (ctx.cr6.eq) goto loc_82561C24;
	// bl 0x82978ed0
	ctx.lr = 0x82561C24;
	sub_82978ED0(ctx, base);
loc_82561C24:
	// lwz r11,7128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7128);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82561c04
	if (ctx.cr6.lt) goto loc_82561C04;
loc_82561C38:
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r11,788(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82561c54
	if (ctx.cr6.eq) goto loc_82561C54;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82561c94
	if (!ctx.cr6.eq) goto loc_82561C94;
loc_82561C54:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8255d210
	ctx.lr = 0x82561C5C;
	sub_8255D210(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,484
	ctx.r3.s64 = ctx.r11.s64 + 484;
	// bl 0x82816528
	ctx.lr = 0x82561C6C;
	sub_82816528(ctx, base);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x8282c818
	ctx.lr = 0x82561C8C;
	sub_8282C818(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82400f38
	ctx.lr = 0x82561C94;
	sub_82400F38(ctx, base);
loc_82561C94:
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,7136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7136, ctx.r10.u32);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82561cb0
	if (!ctx.cr6.eq) goto loc_82561CB0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,6872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6872, ctx.r11.u32);
loc_82561CB0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82561CB8"))) PPC_WEAK_FUNC(sub_82561CB8);
PPC_FUNC_IMPL(__imp__sub_82561CB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82561CC0;
	__savegprlr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r3,1608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82561cf0
	if (ctx.cr6.eq) goto loc_82561CF0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,552(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 552);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82561CE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82561cf4
	goto loc_82561CF4;
loc_82561CF0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82561CF4:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82561e3c
	if (ctx.cr6.eq) goto loc_82561E3C;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,1928(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1928);
	// bl 0x824d77f8
	ctx.lr = 0x82561D08;
	sub_824D77F8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82561e3c
	if (ctx.cr0.eq) goto loc_82561E3C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,520(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 520);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82561D20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82561e3c
	if (ctx.cr0.eq) goto loc_82561E3C;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r30,r1,120
	ctx.r30.s64 = ctx.r1.s64 + 120;
	// addi r3,r11,328
	ctx.r3.s64 = ctx.r11.s64 + 328;
	// addi r27,r1,136
	ctx.r27.s64 = ctx.r1.s64 + 136;
	// bl 0x82816528
	ctx.lr = 0x82561D3C;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x8284da30
	ctx.lr = 0x82561D50;
	sub_8284DA30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r30,r1,120
	ctx.r30.s64 = ctx.r1.s64 + 120;
	// addi r3,r11,-10288
	ctx.r3.s64 = ctx.r11.s64 + -10288;
	// addi r27,r1,136
	ctx.r27.s64 = ctx.r1.s64 + 136;
	// bl 0x82816528
	ctx.lr = 0x82561D64;
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
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
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
	ctx.lr = 0x82561DA0;
	sub_828250B0(ctx, base);
	// bl 0x824ca610
	ctx.lr = 0x82561DA4;
	sub_824CA610(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82561e08
	if (ctx.cr0.eq) goto loc_82561E08;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,1108(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82561DC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r10,628(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 628);
	// li r4,0
	ctx.r4.s64 = 0;
	// ld r5,620(r29)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r29.u32 + 620);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rldicr r6,r10,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,1132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1132);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82561DF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwa r11,7172(r31)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 7172));
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,1504(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1504, temp.u32);
loc_82561E08:
	// lwz r11,7140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7140);
	// lwz r10,7004(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7004);
	// subf. r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x82561e20
	if (!ctx.cr0.lt) goto loc_82561E20;
	// stw r28,7004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7004, ctx.r28.u32);
	// b 0x82561e38
	goto loc_82561E38;
loc_82561E20:
	// lwz r10,7008(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7008);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82561e34
	if (!ctx.cr6.gt) goto loc_82561E34;
	// stw r10,7004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7004, ctx.r10.u32);
	// b 0x82561e38
	goto loc_82561E38;
loc_82561E34:
	// stw r11,7004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7004, ctx.r11.u32);
loc_82561E38:
	// stw r28,7376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7376, ctx.r28.u32);
loc_82561E3C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82561E48"))) PPC_WEAK_FUNC(sub_82561E48);
PPC_FUNC_IMPL(__imp__sub_82561E48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82561E50;
	__savegprlr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r3,1608(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1608);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82561e80
	if (ctx.cr6.eq) goto loc_82561E80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,552(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 552);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82561E78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82561e84
	goto loc_82561E84;
loc_82561E80:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_82561E84:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82562040
	if (ctx.cr6.eq) goto loc_82562040;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,1928(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1928);
	// bl 0x824d77f8
	ctx.lr = 0x82561E98;
	sub_824D77F8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82562040
	if (ctx.cr0.eq) goto loc_82562040;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,520(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 520);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82561EB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82562040
	if (ctx.cr0.eq) goto loc_82562040;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r31,r1,120
	ctx.r31.s64 = ctx.r1.s64 + 120;
	// addi r3,r11,328
	ctx.r3.s64 = ctx.r11.s64 + 328;
	// addi r28,r1,136
	ctx.r28.s64 = ctx.r1.s64 + 136;
	// bl 0x82816528
	ctx.lr = 0x82561ECC;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x8284da30
	ctx.lr = 0x82561EE0;
	sub_8284DA30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r31,r1,120
	ctx.r31.s64 = ctx.r1.s64 + 120;
	// addi r3,r11,-10244
	ctx.r3.s64 = ctx.r11.s64 + -10244;
	// addi r28,r1,136
	ctx.r28.s64 = ctx.r1.s64 + 136;
	// bl 0x82816528
	ctx.lr = 0x82561EF4;
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
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
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
	ctx.lr = 0x82561F30;
	sub_828250B0(ctx, base);
	// bl 0x824ca610
	ctx.lr = 0x82561F34;
	sub_824CA610(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8256200c
	if (ctx.cr0.eq) goto loc_8256200C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r28,r30,620
	ctx.r28.s64 = ctx.r30.s64 + 620;
	// lwz r10,628(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 628);
	// li r7,1
	ctx.r7.s64 = 1;
	// ld r5,620(r30)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r30.u32 + 620);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rldicr r6,r10,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1132);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82561F68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f12,624(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,624(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 624);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f11,628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,620(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f10.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,24724(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24724);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f12,628(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 628);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f11,620(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 620);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lwz r11,1148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1148);
	// fmadds f13,f12,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f13,f11,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f13.f64));
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82561FBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwa r11,7212(r29)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r29.u32 + 7212));
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,1504(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1504, temp.u32);
	// bl 0x823b9248
	ctx.lr = 0x82561FD8;
	sub_823B9248(ctx, base);
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
	ctx.lr = 0x82561FF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82561ffc
	if (!ctx.cr0.eq) goto loc_82561FFC;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_82561FFC:
	// lwz r11,7188(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 7188);
	// stw r11,3216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3216, ctx.r11.u32);
	// lwz r11,7208(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 7208);
	// stw r11,1960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1960, ctx.r11.u32);
loc_8256200C:
	// lwz r11,7176(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 7176);
	// lwz r10,7004(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 7004);
	// subf. r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x82562024
	if (!ctx.cr0.lt) goto loc_82562024;
	// stw r27,7004(r29)
	PPC_STORE_U32(ctx.r29.u32 + 7004, ctx.r27.u32);
	// b 0x8256203c
	goto loc_8256203C;
loc_82562024:
	// lwz r10,7008(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 7008);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82562038
	if (!ctx.cr6.gt) goto loc_82562038;
	// stw r10,7004(r29)
	PPC_STORE_U32(ctx.r29.u32 + 7004, ctx.r10.u32);
	// b 0x8256203c
	goto loc_8256203C;
loc_82562038:
	// stw r11,7004(r29)
	PPC_STORE_U32(ctx.r29.u32 + 7004, ctx.r11.u32);
loc_8256203C:
	// stw r27,7376(r29)
	PPC_STORE_U32(ctx.r29.u32 + 7376, ctx.r27.u32);
loc_82562040:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82562048"))) PPC_WEAK_FUNC(sub_82562048);
PPC_FUNC_IMPL(__imp__sub_82562048) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82562050;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,5962
	ctx.r11.s64 = 390725632;
	// lwz r29,64(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// lis r10,15692
	ctx.r10.s64 = 1028390912;
	// ori r11,r11,10239
	ctx.r11.u64 = ctx.r11.u64 | 10239;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r28,r10,5658
	ctx.r28.u64 = ctx.r10.u64 | 5658;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825621c0
	if (ctx.cr6.eq) goto loc_825621C0;
	// lis r11,12078
	ctx.r11.s64 = 791543808;
	// ori r11,r11,57456
	ctx.r11.u64 = ctx.r11.u64 | 57456;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825621a4
	if (ctx.cr6.eq) goto loc_825621A4;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x825620c4
	if (ctx.cr6.eq) goto loc_825620C4;
	// lis r11,24772
	ctx.r11.s64 = 1623457792;
	// ori r11,r11,61679
	ctx.r11.u64 = ctx.r11.u64 | 61679;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825620b8
	if (ctx.cr6.eq) goto loc_825620B8;
	// lis r11,-23815
	ctx.r11.s64 = -1560739840;
	// ori r11,r11,30161
	ctx.r11.u64 = ctx.r11.u64 | 30161;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825621d0
	if (!ctx.cr6.eq) goto loc_825621D0;
	// lis r4,9306
	ctx.r4.s64 = 609878016;
	// ori r4,r4,48752
	ctx.r4.u64 = ctx.r4.u64 | 48752;
	// b 0x825621ac
	goto loc_825621AC;
loc_825620B8:
	// lis r4,6404
	ctx.r4.s64 = 419692544;
	// ori r4,r4,20304
	ctx.r4.u64 = ctx.r4.u64 | 20304;
	// b 0x825621ac
	goto loc_825621AC;
loc_825620C4:
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r10,788(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x825620e8
	if (ctx.cr6.eq) goto loc_825620E8;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x825620e8
	if (ctx.cr6.eq) goto loc_825620E8;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x825620f4
	if (!ctx.cr6.eq) goto loc_825620F4;
loc_825620E8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825619d0
	ctx.lr = 0x825620F0;
	sub_825619D0(ctx, base);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
loc_825620F4:
	// lwz r10,6856(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6856);
	// li r30,1
	ctx.r30.s64 = 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82562110
	if (!ctx.cr6.eq) goto loc_82562110;
	// lis r4,14514
	ctx.r4.s64 = 951189504;
	// ori r4,r4,49618
	ctx.r4.u64 = ctx.r4.u64 | 49618;
	// b 0x82562194
	goto loc_82562194;
loc_82562110:
	// lwz r4,1312(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1312);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8256212c
	if (ctx.cr6.eq) goto loc_8256212C;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82562124;
	sub_829B9720(ctx, base);
	// bl 0x82409c40
	ctx.lr = 0x82562128;
	sub_82409C40(ctx, base);
	// b 0x82562130
	goto loc_82562130;
loc_8256212C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82562130:
	// bl 0x82411c50
	ctx.lr = 0x82562134;
	sub_82411C50(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1444(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1444);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82562144;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32170
	ctx.r10.s64 = -2108293120;
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// addi r4,r10,10872
	ctx.r4.s64 = ctx.r10.s64 + 10872;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82562168;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,6920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6920, ctx.r30.u32);
	// li r4,119
	ctx.r4.s64 = 119;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x824b7438
	ctx.lr = 0x82562178;
	sub_824B7438(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8256218c
	if (ctx.cr0.eq) goto loc_8256218C;
	// lis r4,6650
	ctx.r4.s64 = 435814400;
	// ori r4,r4,25176
	ctx.r4.u64 = ctx.r4.u64 | 25176;
	// b 0x82562194
	goto loc_82562194;
loc_8256218C:
	// lis r4,9159
	ctx.r4.s64 = 600244224;
	// ori r4,r4,3572
	ctx.r4.u64 = ctx.r4.u64 | 3572;
loc_82562194:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82562a88
	ctx.lr = 0x8256219C;
	sub_82562A88(ctx, base);
	// stw r30,6800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6800, ctx.r30.u32);
	// b 0x825621d0
	goto loc_825621D0;
loc_825621A4:
	// lis r4,6280
	ctx.r4.s64 = 411566080;
	// ori r4,r4,3706
	ctx.r4.u64 = ctx.r4.u64 | 3706;
loc_825621AC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82562a88
	ctx.lr = 0x825621B4;
	sub_82562A88(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,6800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6800, ctx.r11.u32);
	// b 0x825621d0
	goto loc_825621D0;
loc_825621C0:
	// lis r4,13756
	ctx.r4.s64 = 901513216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,58568
	ctx.r4.u64 = ctx.r4.u64 | 58568;
	// bl 0x82562a88
	ctx.lr = 0x825621D0;
	sub_82562A88(ctx, base);
loc_825621D0:
	// lwz r11,6800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6800);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825621fc
	if (ctx.cr6.eq) goto loc_825621FC;
	// li r4,48
	ctx.r4.s64 = 48;
	// lwz r3,7348(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7348);
	// bl 0x82978d98
	ctx.lr = 0x825621E8;
	sub_82978D98(ctx, base);
	// li r4,48
	ctx.r4.s64 = 48;
	// lwz r3,7352(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7352);
	// bl 0x82978d98
	ctx.lr = 0x825621F4;
	sub_82978D98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825626a0
	ctx.lr = 0x825621FC;
	sub_825626A0(ctx, base);
loc_825621FC:
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82562218
	if (ctx.cr6.eq) goto loc_82562218;
	// lwz r11,7136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7136);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82562218
	if (ctx.cr6.eq) goto loc_82562218;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82561be0
	ctx.lr = 0x82562218;
	sub_82561BE0(ctx, base);
loc_82562218:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,5416(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5416, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82562230"))) PPC_WEAK_FUNC(sub_82562230);
PPC_FUNC_IMPL(__imp__sub_82562230) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82562238;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lis r11,12078
	ctx.r11.s64 = 791543808;
	// lis r10,-23815
	ctx.r10.s64 = -1560739840;
	// ori r29,r11,57456
	ctx.r29.u64 = ctx.r11.u64 | 57456;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,64(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 64);
	// li r28,0
	ctx.r28.s64 = 0;
	// ori r27,r10,30161
	ctx.r27.u64 = ctx.r10.u64 | 30161;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x825622fc
	if (ctx.cr6.eq) goto loc_825622FC;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x825622c8
	if (ctx.cr6.eq) goto loc_825622C8;
	// lis r11,-1246
	ctx.r11.s64 = -81657856;
	// ori r11,r11,46581
	ctx.r11.u64 = ctx.r11.u64 | 46581;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82562328
	if (!ctx.cr6.eq) goto loc_82562328;
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f0,7000(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 7000);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,5412(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5412, temp.u32);
	// stw r28,6912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6912, ctx.r28.u32);
	// stw r11,6816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6816, ctx.r11.u32);
	// lis r10,-32170
	ctx.r10.s64 = -2108293120;
	// stw r28,5676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5676, ctx.r28.u32);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r10,r10,10856
	ctx.r10.s64 = ctx.r10.s64 + 10856;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// lfs f1,6908(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6908);
	ctx.f1.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// bl 0x8255cf58
	ctx.lr = 0x825622C4;
	sub_8255CF58(ctx, base);
	// b 0x82562384
	goto loc_82562384;
loc_825622C8:
	// li r28,0
	ctx.r28.s64 = 0;
	// lfs f1,6892(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6892);
	ctx.f1.f64 = double(temp.f32);
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// stw r28,6896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6896, ctx.r28.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r11,r11,10808
	ctx.r11.s64 = ctx.r11.s64 + 10808;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8255cf58
	ctx.lr = 0x825622F8;
	sub_8255CF58(ctx, base);
	// b 0x82562368
	goto loc_82562368;
loc_825622FC:
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// stw r28,6888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6888, ctx.r28.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r11,r11,10824
	ctx.r11.s64 = ctx.r11.s64 + 10824;
	// lfs f1,6884(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6884);
	ctx.f1.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8255cf58
	ctx.lr = 0x82562328;
	sub_8255CF58(ctx, base);
loc_82562328:
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82562368
	if (ctx.cr6.eq) goto loc_82562368;
	// lis r11,15692
	ctx.r11.s64 = 1028390912;
	// ori r11,r11,5658
	ctx.r11.u64 = ctx.r11.u64 | 5658;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82562368
	if (ctx.cr6.eq) goto loc_82562368;
	// lis r11,18098
	ctx.r11.s64 = 1186070528;
	// ori r11,r11,56504
	ctx.r11.u64 = ctx.r11.u64 | 56504;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82562368
	if (ctx.cr6.eq) goto loc_82562368;
	// lis r11,24772
	ctx.r11.s64 = 1623457792;
	// ori r11,r11,61679
	ctx.r11.u64 = ctx.r11.u64 | 61679;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82562368
	if (ctx.cr6.eq) goto loc_82562368;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x82562384
	if (!ctx.cr6.eq) goto loc_82562384;
loc_82562368:
	// stw r28,6800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6800, ctx.r28.u32);
	// lwz r3,7348(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7348);
	// bl 0x82978ed0
	ctx.lr = 0x82562374;
	sub_82978ED0(ctx, base);
	// lwz r3,7352(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7352);
	// bl 0x82978ed0
	ctx.lr = 0x8256237C;
	sub_82978ED0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82562808
	ctx.lr = 0x82562384;
	sub_82562808(ctx, base);
loc_82562384:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824e8298
	ctx.lr = 0x82562390;
	sub_824E8298(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82562398"))) PPC_WEAK_FUNC(sub_82562398);
PPC_FUNC_IMPL(__imp__sub_82562398) {
	PPC_FUNC_PROLOGUE();
	// b 0x824dd3f8
	sub_824DD3F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825623A0"))) PPC_WEAK_FUNC(sub_825623A0);
PPC_FUNC_IMPL(__imp__sub_825623A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,6816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6816);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82562460
	if (ctx.cr6.eq) goto loc_82562460;
	// bl 0x825043d0
	ctx.lr = 0x825623CC;
	sub_825043D0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82562460
	if (ctx.cr6.eq) goto loc_82562460;
	// lwz r11,6800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6800);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82562448
	if (!ctx.cr6.eq) goto loc_82562448;
	// lwz r11,460(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 460);
	// rlwinm. r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82562448
	if (!ctx.cr0.eq) goto loc_82562448;
	// rlwinm. r11,r11,0,14,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82562448
	if (!ctx.cr0.eq) goto loc_82562448;
	// lwz r11,7244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7244);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82562410
	if (ctx.cr6.eq) goto loc_82562410;
	// lwz r3,7228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7228);
	// bl 0x82979298
	ctx.lr = 0x82562408;
	sub_82979298(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82562448
	if (!ctx.cr0.eq) goto loc_82562448;
loc_82562410:
	// lwz r11,6876(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6876);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82562448
	if (ctx.cr6.eq) goto loc_82562448;
	// lwz r11,6872(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6872);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82562448
	if (ctx.cr6.eq) goto loc_82562448;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,5332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5332, ctx.r10.u32);
	// lwz r11,2200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2200);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82562444;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82562460
	goto loc_82562460;
loc_82562448:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,5332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5332, ctx.r11.u32);
	// stw r11,3148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3148, ctx.r11.u32);
	// stw r11,3208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3208, ctx.r11.u32);
	// stw r10,3128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3128, ctx.r10.u32);
loc_82562460:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82562478"))) PPC_WEAK_FUNC(sub_82562478);
PPC_FUNC_IMPL(__imp__sub_82562478) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,6816(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6816, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82562488"))) PPC_WEAK_FUNC(sub_82562488);
PPC_FUNC_IMPL(__imp__sub_82562488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x82562490;
	__savegprlr_24(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r7,264(r1)
	PPC_STORE_U64(ctx.r1.u32 + 264, ctx.r7.u64);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// std r9,280(r1)
	PPC_STORE_U64(ctx.r1.u32 + 280, ctx.r9.u64);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// lwz r11,6864(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6864);
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r24,1
	ctx.r24.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825624d8
	if (ctx.cr6.eq) goto loc_825624D8;
	// stw r25,5332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5332, ctx.r25.u32);
	// stw r25,3148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3148, ctx.r25.u32);
	// stw r25,3208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3208, ctx.r25.u32);
	// stw r24,3128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3128, ctx.r24.u32);
loc_825624D8:
	// lwz r11,6836(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6836);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82562524
	if (ctx.cr6.eq) goto loc_82562524;
	// lwz r3,300(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// lwz r9,280(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r7,264(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// rldicr r9,r9,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// rldicr r7,r7,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82500498
	ctx.lr = 0x82562520;
	sub_82500498(ctx, base);
	// b 0x825625f4
	goto loc_825625F4;
loc_82562524:
	// lwz r11,6816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6816);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825625f4
	if (ctx.cr6.eq) goto loc_825625F4;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,15834
	ctx.r4.s64 = ctx.r11.s64 + 15834;
	// bl 0x8233a258
	ctx.lr = 0x82562540;
	sub_8233A258(ctx, base);
	// lis r4,15041
	ctx.r4.s64 = 985726976;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r4,r4,2104
	ctx.r4.u64 = ctx.r4.u64 | 2104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c3740
	ctx.lr = 0x82562554;
	sub_829C3740(ctx, base);
	// lwz r11,6748(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6748);
	// lwz r10,6760(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6760);
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8256256c
	if (!ctx.cr6.gt) goto loc_8256256C;
	// subf r30,r11,r10
	ctx.r30.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_8256256C:
	// lwz r3,300(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// lwz r9,280(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r7,264(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// rldicr r9,r9,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// rldicr r7,r7,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82500498
	ctx.lr = 0x825625A8;
	sub_82500498(ctx, base);
	// lwz r11,7244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7244);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825625c0
	if (ctx.cr6.eq) goto loc_825625C0;
	// lwz r11,7264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7264);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,7264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7264, ctx.r11.u32);
loc_825625C0:
	// lwz r11,7072(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7072);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,7072(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7072, ctx.r11.u32);
	// lwz r11,1112(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825625E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt 0x825625f4
	if (ctx.cr0.gt) goto loc_825625F4;
	// stw r25,7244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7244, ctx.r25.u32);
	// stw r24,6836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6836, ctx.r24.u32);
loc_825625F4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82562600"))) PPC_WEAK_FUNC(sub_82562600);
PPC_FUNC_IMPL(__imp__sub_82562600) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82562608;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r7,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r7.u64);
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r11,-2888
	ctx.r4.s64 = ctx.r11.s64 + -2888;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8256263C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r11,6836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6836, ctx.r11.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82500838
	ctx.lr = 0x82562660;
	sub_82500838(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82562668"))) PPC_WEAK_FUNC(sub_82562668);
PPC_FUNC_IMPL(__imp__sub_82562668) {
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
	// std r6,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r6.u64);
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// rldicr r6,r10,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,6836(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6836, ctx.r11.u32);
	// bl 0x82500890
	ctx.lr = 0x8256268C;
	sub_82500890(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825626A0"))) PPC_WEAK_FUNC(sub_825626A0);
PPC_FUNC_IMPL(__imp__sub_825626A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x825626A8;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,10
	ctx.r28.s64 = 10;
	// li r29,128
	ctx.r29.s64 = 128;
	// lwz r10,7324(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7324);
	// lfs f31,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f31.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8256274c
	if (!ctx.cr6.eq) goto loc_8256274C;
	// li r3,1664
	ctx.r3.s64 = 1664;
	// bl 0x82833108
	ctx.lr = 0x825626DC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825626f0
	if (ctx.cr0.eq) goto loc_825626F0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82712ba0
	ctx.lr = 0x825626EC;
	sub_82712BA0(ctx, base);
	// b 0x825626f4
	goto loc_825626F4;
loc_825626F0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_825626F4:
	// stw r3,7324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7324, ctx.r3.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r4,1656(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1656);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r7,7328(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7328);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r10,7332(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7332);
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// lwz r6,7296(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7296);
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// stb r29,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r29.u8);
	// stb r29,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r29.u8);
	// bl 0x82914788
	ctx.lr = 0x82562734;
	sub_82914788(ctx, base);
	// lwz r3,7324(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7324);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8256274C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8256274C:
	// lwz r11,7336(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7336);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825627d0
	if (!ctx.cr6.eq) goto loc_825627D0;
	// li r3,1664
	ctx.r3.s64 = 1664;
	// bl 0x82833108
	ctx.lr = 0x82562760;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82562774
	if (ctx.cr0.eq) goto loc_82562774;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82712ba0
	ctx.lr = 0x82562770;
	sub_82712BA0(ctx, base);
	// b 0x82562778
	goto loc_82562778;
loc_82562774:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82562778:
	// stw r3,7336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7336, ctx.r3.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r4,1656(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1656);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stb r29,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r29.u8);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r7,7340(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7340);
	// lwz r10,7344(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7344);
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// lwz r6,7296(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7296);
	// stb r29,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r29.u8);
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// bl 0x82914788
	ctx.lr = 0x825627B8;
	sub_82914788(ctx, base);
	// lwz r3,7336(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7336);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825627D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825627D0:
	// lwz r3,7324(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7324);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,296(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825627E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,7336(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7336);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,296(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825627F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82562808"))) PPC_WEAK_FUNC(sub_82562808);
PPC_FUNC_IMPL(__imp__sub_82562808) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,7324(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7324);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8256283c
	if (ctx.cr6.eq) goto loc_8256283C;
	// bl 0x82979298
	ctx.lr = 0x8256282C;
	sub_82979298(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8256283c
	if (ctx.cr0.eq) goto loc_8256283C;
	// lwz r3,7324(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7324);
	// bl 0x82978ed0
	ctx.lr = 0x8256283C;
	sub_82978ED0(ctx, base);
loc_8256283C:
	// lwz r11,7324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7324);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82562860
	if (ctx.cr6.eq) goto loc_82562860;
	// lwz r3,7336(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7336);
	// bl 0x82979298
	ctx.lr = 0x82562850;
	sub_82979298(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82562860
	if (ctx.cr0.eq) goto loc_82562860;
	// lwz r3,7336(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7336);
	// bl 0x82978ed0
	ctx.lr = 0x82562860;
	sub_82978ED0(ctx, base);
loc_82562860:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82562878"))) PPC_WEAK_FUNC(sub_82562878);
PPC_FUNC_IMPL(__imp__sub_82562878) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82562880;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,7300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7300);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82562920
	if (!ctx.cr6.eq) goto loc_82562920;
	// li r3,1664
	ctx.r3.s64 = 1664;
	// bl 0x82833108
	ctx.lr = 0x8256289C;
	sub_82833108(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825628b4
	if (ctx.cr0.eq) goto loc_825628B4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82712ba0
	ctx.lr = 0x825628B0;
	sub_82712BA0(ctx, base);
	// b 0x825628b8
	goto loc_825628B8;
loc_825628B4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_825628B8:
	// stw r3,7300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7300, ctx.r3.u32);
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// lwz r4,1656(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1656);
	// li r11,128
	ctx.r11.s64 = 128;
	// lwz r5,7304(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7304);
	// li r29,10
	ctx.r29.s64 = 10;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r10,7308(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7308);
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// lwz r6,7292(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7292);
	// lfs f1,908(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 908);
	ctx.f1.f64 = double(temp.f32);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stb r11,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r11.u8);
	// stb r11,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r11.u8);
	// bl 0x82914788
	ctx.lr = 0x82562908;
	sub_82914788(ctx, base);
	// lwz r3,7300(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7300);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82562920;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82562920:
	// lwz r3,7300(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7300);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,296(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82562934;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82562940"))) PPC_WEAK_FUNC(sub_82562940);
PPC_FUNC_IMPL(__imp__sub_82562940) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,7300(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7300);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82978ed0
	sub_82978ED0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82562950"))) PPC_WEAK_FUNC(sub_82562950);
PPC_FUNC_IMPL(__imp__sub_82562950) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82562958"))) PPC_WEAK_FUNC(sub_82562958);
PPC_FUNC_IMPL(__imp__sub_82562958) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82562960;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,7312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7312);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82562a00
	if (!ctx.cr6.eq) goto loc_82562A00;
	// li r3,1664
	ctx.r3.s64 = 1664;
	// bl 0x82833108
	ctx.lr = 0x8256297C;
	sub_82833108(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82562994
	if (ctx.cr0.eq) goto loc_82562994;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82712ba0
	ctx.lr = 0x82562990;
	sub_82712BA0(ctx, base);
	// b 0x82562998
	goto loc_82562998;
loc_82562994:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82562998:
	// stw r3,7312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7312, ctx.r3.u32);
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// lwz r4,1656(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1656);
	// li r11,128
	ctx.r11.s64 = 128;
	// lwz r5,7316(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7316);
	// li r29,10
	ctx.r29.s64 = 10;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r10,7320(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7320);
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// lwz r6,7292(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7292);
	// lfs f1,908(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 908);
	ctx.f1.f64 = double(temp.f32);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stb r11,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r11.u8);
	// stb r11,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r11.u8);
	// bl 0x82914788
	ctx.lr = 0x825629E8;
	sub_82914788(ctx, base);
	// lwz r3,7312(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7312);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82562A00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82562A00:
	// lwz r3,7312(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7312);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,296(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82562A14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82562A20"))) PPC_WEAK_FUNC(sub_82562A20);
PPC_FUNC_IMPL(__imp__sub_82562A20) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,7312(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7312);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82978ed0
	sub_82978ED0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82562A30"))) PPC_WEAK_FUNC(sub_82562A30);
PPC_FUNC_IMPL(__imp__sub_82562A30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82562A38"))) PPC_WEAK_FUNC(sub_82562A38);
PPC_FUNC_IMPL(__imp__sub_82562A38) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,6896(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6896, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82562A48"))) PPC_WEAK_FUNC(sub_82562A48);
PPC_FUNC_IMPL(__imp__sub_82562A48) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,6888(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6888, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82562A58"))) PPC_WEAK_FUNC(sub_82562A58);
PPC_FUNC_IMPL(__imp__sub_82562A58) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,6904(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6904, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82562A68"))) PPC_WEAK_FUNC(sub_82562A68);
PPC_FUNC_IMPL(__imp__sub_82562A68) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,6912(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6912, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82562A78"))) PPC_WEAK_FUNC(sub_82562A78);
PPC_FUNC_IMPL(__imp__sub_82562A78) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,6920(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6920, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82562A88"))) PPC_WEAK_FUNC(sub_82562A88);
PPC_FUNC_IMPL(__imp__sub_82562A88) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r11,6920(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6920);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82562adc
	if (ctx.cr6.eq) goto loc_82562ADC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,6928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6928, ctx.r30.u32);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stw r11,6920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6920, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,15834
	ctx.r4.s64 = ctx.r10.s64 + 15834;
	// bl 0x8233a258
	ctx.lr = 0x82562ACC;
	sub_8233A258(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c3a20
	ctx.lr = 0x82562ADC;
	sub_829C3A20(ctx, base);
loc_82562ADC:
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

__attribute__((alias("__imp__sub_82562AF8"))) PPC_WEAK_FUNC(sub_82562AF8);
PPC_FUNC_IMPL(__imp__sub_82562AF8) {
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
	// lwz r11,6928(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6928);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82562b3c
	if (!ctx.cr6.eq) goto loc_82562B3C;
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// lfs f1,6916(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 6916);
	ctx.f1.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,10872
	ctx.r11.s64 = ctx.r11.s64 + 10872;
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
	// bl 0x8255cf58
	ctx.lr = 0x82562B3C;
	sub_8255CF58(ctx, base);
loc_82562B3C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82562B50"))) PPC_WEAK_FUNC(sub_82562B50);
PPC_FUNC_IMPL(__imp__sub_82562B50) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,7044(r3)
	PPC_STORE_U32(ctx.r3.u32 + 7044, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82562B60"))) PPC_WEAK_FUNC(sub_82562B60);
PPC_FUNC_IMPL(__imp__sub_82562B60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x825008f0
	ctx.lr = 0x82562B78;
	sub_825008F0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r31,6848
	ctx.r4.s64 = ctx.r31.s64 + 6848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,516
	ctx.r5.s64 = ctx.r11.s64 + 516;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82416240
	ctx.lr = 0x82562B94;
	sub_82416240(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r31,6844
	ctx.r4.s64 = ctx.r31.s64 + 6844;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,532
	ctx.r5.s64 = ctx.r11.s64 + 532;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x824f9968
	ctx.lr = 0x82562BB0;
	sub_824F9968(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r31,6476
	ctx.r4.s64 = ctx.r31.s64 + 6476;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,564
	ctx.r5.s64 = ctx.r11.s64 + 564;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82416240
	ctx.lr = 0x82562BCC;
	sub_82416240(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r31,6480
	ctx.r4.s64 = ctx.r31.s64 + 6480;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,596
	ctx.r5.s64 = ctx.r11.s64 + 596;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82416240
	ctx.lr = 0x82562BE8;
	sub_82416240(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r31,6824
	ctx.r4.s64 = ctx.r31.s64 + 6824;
	// addi r5,r11,628
	ctx.r5.s64 = ctx.r11.s64 + 628;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416240
	ctx.lr = 0x82562C04;
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

__attribute__((alias("__imp__sub_82562C18"))) PPC_WEAK_FUNC(sub_82562C18);
PPC_FUNC_IMPL(__imp__sub_82562C18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82562C20;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x825009c8
	ctx.lr = 0x82562C30;
	sub_825009C8(ctx, base);
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82562d34
	if (!ctx.cr6.eq) goto loc_82562D34;
	// addi r11,r31,7244
	ctx.r11.s64 = ctx.r31.s64 + 7244;
	// addi r30,r31,424
	ctx.r30.s64 = ctx.r31.s64 + 424;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x82562C58;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r31,6872
	ctx.r10.s64 = ctx.r31.s64 + 6872;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bl 0x82838fd0
	ctx.lr = 0x82562C78;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r31,6876
	ctx.r10.s64 = ctx.r31.s64 + 6876;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bl 0x82838fd0
	ctx.lr = 0x82562C98;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r27,r31,7240
	ctx.r27.s64 = ctx.r31.s64 + 7240;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// lwz r11,13024(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13024);
	// lwz r4,7236(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7236);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82562CBC;
	sub_829B9720(ctx, base);
	// bl 0x82333a20
	ctx.lr = 0x82562CC0;
	sub_82333A20(ctx, base);
	// stw r3,7240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7240, ctx.r3.u32);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x82562CD4;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// addi r11,r11,1804
	ctx.r11.s64 = ctx.r11.s64 + 1804;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82562d34
	if (ctx.cr6.eq) goto loc_82562D34;
	// addi r11,r31,7220
	ctx.r11.s64 = ctx.r31.s64 + 7220;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x82562D10;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// addi r11,r11,1804
	ctx.r11.s64 = ctx.r11.s64 + 1804;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
loc_82562D34:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82562D40"))) PPC_WEAK_FUNC(sub_82562D40);
PPC_FUNC_IMPL(__imp__sub_82562D40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x82562D48;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// bl 0x82500ac0
	ctx.lr = 0x82562D5C;
	sub_82500AC0(ctx, base);
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82562fa0
	if (!ctx.cr6.eq) goto loc_82562FA0;
	// addi r28,r31,7244
	ctx.r28.s64 = ctx.r31.s64 + 7244;
	// addi r29,r31,424
	ctx.r29.s64 = ctx.r31.s64 + 424;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82838fd0
	ctx.lr = 0x82562D84;
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
	// lwz r25,0(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82562DA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r4,r3,r27
	ctx.r4.u64 = ctx.r3.u64 + ctx.r27.u64;
	// lwz r3,484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82562DBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82562de0
	if (!ctx.cr0.eq) goto loc_82562DE0;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82838fd0
	ctx.lr = 0x82562DD4;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
loc_82562DE0:
	// addi r28,r31,6872
	ctx.r28.s64 = ctx.r31.s64 + 6872;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82838fd0
	ctx.lr = 0x82562DF4;
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
	// lwz r25,0(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82562E18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r4,r3,r27
	ctx.r4.u64 = ctx.r3.u64 + ctx.r27.u64;
	// lwz r3,484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82562E2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82562e50
	if (!ctx.cr0.eq) goto loc_82562E50;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82838fd0
	ctx.lr = 0x82562E44;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
loc_82562E50:
	// addi r28,r31,6876
	ctx.r28.s64 = ctx.r31.s64 + 6876;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82838fd0
	ctx.lr = 0x82562E64;
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
	// lwz r25,0(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82562E88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r4,r3,r27
	ctx.r4.u64 = ctx.r3.u64 + ctx.r27.u64;
	// lwz r3,484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82562E9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82562ec0
	if (!ctx.cr0.eq) goto loc_82562EC0;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82838fd0
	ctx.lr = 0x82562EB4;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
loc_82562EC0:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r4,7236(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7236);
	// addi r28,r31,7240
	ctx.r28.s64 = ctx.r31.s64 + 7240;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82562ED8;
	sub_829B9720(ctx, base);
	// bl 0x82333a20
	ctx.lr = 0x82562EDC;
	sub_82333A20(ctx, base);
	// stw r3,7240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7240, ctx.r3.u32);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82838fd0
	ctx.lr = 0x82562EF0;
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
	// lwz r25,0(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82562F14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r4,r3,r27
	ctx.r4.u64 = ctx.r3.u64 + ctx.r27.u64;
	// lwz r3,484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82562F28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82562f4c
	if (!ctx.cr0.eq) goto loc_82562F4C;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82838fd0
	ctx.lr = 0x82562F40;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
loc_82562F4C:
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// addi r11,r11,1804
	ctx.r11.s64 = ctx.r11.s64 + 1804;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82562fa0
	if (ctx.cr6.eq) goto loc_82562FA0;
	// addi r11,r31,7220
	ctx.r11.s64 = ctx.r31.s64 + 7220;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82838fd0
	ctx.lr = 0x82562F7C;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// addi r11,r11,1804
	ctx.r11.s64 = ctx.r11.s64 + 1804;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
loc_82562FA0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82562FB0"))) PPC_WEAK_FUNC(sub_82562FB0);
PPC_FUNC_IMPL(__imp__sub_82562FB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82562FB8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82505418
	ctx.lr = 0x82562FC8;
	sub_82505418(ctx, base);
	// lis r11,29793
	ctx.r11.s64 = 1952514048;
	// ori r11,r11,17305
	ctx.r11.u64 = ctx.r11.u64 | 17305;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82562ff8
	if (!ctx.cr6.eq) goto loc_82562FF8;
	// lwz r11,7240(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 7240);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,7236(r28)
	PPC_STORE_U32(ctx.r28.u32 + 7236, ctx.r10.u32);
	// beq cr6,0x825630d8
	if (ctx.cr6.eq) goto loc_825630D8;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// stw r11,7236(r28)
	PPC_STORE_U32(ctx.r28.u32 + 7236, ctx.r11.u32);
	// b 0x825630d8
	goto loc_825630D8;
loc_82562FF8:
	// lis r11,20007
	ctx.r11.s64 = 1311178752;
	// ori r11,r11,38384
	ctx.r11.u64 = ctx.r11.u64 | 38384;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825630d8
	if (!ctx.cr6.eq) goto loc_825630D8;
	// lwz r11,7220(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 7220);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825630d8
	if (ctx.cr6.eq) goto loc_825630D8;
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lwz r4,1312(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1312);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8256303c
	if (ctx.cr6.eq) goto loc_8256303C;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82563030;
	sub_829B9720(ctx, base);
	// bl 0x82409c40
	ctx.lr = 0x82563034;
	sub_82409C40(ctx, base);
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// b 0x82563040
	goto loc_82563040;
loc_8256303C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82563040:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825630d8
	if (ctx.cr6.eq) goto loc_825630D8;
	// lwz r4,1312(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1312);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82563064
	if (ctx.cr6.eq) goto loc_82563064;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8256305C;
	sub_829B9720(ctx, base);
	// bl 0x82409c40
	ctx.lr = 0x82563060;
	sub_82409C40(ctx, base);
	// b 0x82563068
	goto loc_82563068;
loc_82563064:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82563068:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82563078
	if (ctx.cr6.eq) goto loc_82563078;
	// lwz r30,80(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// b 0x8256307c
	goto loc_8256307C;
loc_82563078:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8256307C:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82833108
	ctx.lr = 0x82563084;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x825630c8
	if (ctx.cr0.eq) goto loc_825630C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r28,80(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 80);
	// bl 0x82833180
	ctx.lr = 0x82563098;
	sub_82833180(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-8531
	ctx.r10.s64 = -559087616;
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// addi r11,r11,-19280
	ctx.r11.s64 = ctx.r11.s64 + -19280;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// ori r10,r10,47806
	ctx.r10.u64 = ctx.r10.u64 | 47806;
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
	// b 0x825630cc
	goto loc_825630CC;
loc_825630C8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_825630CC:
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x825630D8;
	sub_82833A30(ctx, base);
loc_825630D8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825630E0"))) PPC_WEAK_FUNC(sub_825630E0);
PPC_FUNC_IMPL(__imp__sub_825630E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,6796(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6796);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,6796(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6796, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825630F0"))) PPC_WEAK_FUNC(sub_825630F0);
PPC_FUNC_IMPL(__imp__sub_825630F0) {
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
	// bl 0x824ea480
	ctx.lr = 0x82563100;
	sub_824EA480(ctx, base);
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// addi r11,r11,-23832
	ctx.r11.s64 = ctx.r11.s64 + -23832;
	// lfs f0,104(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82563120"))) PPC_WEAK_FUNC(sub_82563120);
PPC_FUNC_IMPL(__imp__sub_82563120) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// addi r11,r11,-23720
	ctx.r11.s64 = ctx.r11.s64 + -23720;
	// lfs f1,76(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82563130"))) PPC_WEAK_FUNC(sub_82563130);
PPC_FUNC_IMPL(__imp__sub_82563130) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82563138;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825631bc
	if (!ctx.cr6.gt) goto loc_825631BC;
	// lwz r11,7104(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 7104);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r27,7084
	ctx.r29.s64 = ctx.r27.s64 + 7084;
	// stw r31,7100(r27)
	PPC_STORE_U32(ctx.r27.u32 + 7100, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8256317c
	if (ctx.cr6.eq) goto loc_8256317C;
	// stw r31,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332c38
	ctx.lr = 0x8256317C;
	sub_82332C38(ctx, base);
loc_8256317C:
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825631b0
	if (!ctx.cr6.gt) goto loc_825631B0;
loc_8256318C:
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r4,r31,r11
	ctx.r4.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x824cac78
	ctx.lr = 0x8256319C;
	sub_824CAC78(ctx, base);
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8256318c
	if (ctx.cr6.lt) goto loc_8256318C;
loc_825631B0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x825619d0
	ctx.lr = 0x825631B8;
	sub_825619D0(ctx, base);
	// b 0x825631c4
	goto loc_825631C4;
loc_825631BC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82561be0
	ctx.lr = 0x825631C4;
	sub_82561BE0(ctx, base);
loc_825631C4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825631D0"))) PPC_WEAK_FUNC(sub_825631D0);
PPC_FUNC_IMPL(__imp__sub_825631D0) {
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
	// bl 0x826c40e0
	ctx.lr = 0x825631EC;
	sub_826C40E0(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lis r7,-32229
	ctx.r7.s64 = -2112159744;
	// lfs f0,19552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19552);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f12,20528(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20528);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lfs f13,19556(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 19556);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r7,4528
	ctx.r9.s64 = ctx.r7.s64 + 4528;
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r11,r11,5716
	ctx.r11.s64 = ctx.r11.s64 + 5716;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r10,r10,4480
	ctx.r10.s64 = ctx.r10.s64 + 4480;
	// lfs f0,-32456(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -32456);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r30,88(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stfs f0,696(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 696, temp.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r10.u32);
	// addi r3,r9,-10204
	ctx.r3.s64 = ctx.r9.s64 + -10204;
	// stw r7,1656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1656, ctx.r7.u32);
	// stw r8,1652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1652, ctx.r8.u32);
	// stw r6,1648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1648, ctx.r6.u32);
	// stw r5,1660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1660, ctx.r5.u32);
	// stw r4,1664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1664, ctx.r4.u32);
	// stw r30,1668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1668, ctx.r30.u32);
	// bl 0x82816528
	ctx.lr = 0x82563288;
	sub_82816528(ctx, base);
	// stw r3,1616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1616, ctx.r3.u32);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lis r5,12192
	ctx.r5.s64 = 799014912;
	// addi r4,r31,1580
	ctx.r4.s64 = ctx.r31.s64 + 1580;
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// ori r5,r5,21550
	ctx.r5.u64 = ctx.r5.u64 | 21550;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x825632B0;
	sub_823CF190(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stw r11,1848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1848, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,1028(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1028, ctx.r11.u32);
	// addi r30,r10,15834
	ctx.r30.s64 = ctx.r10.s64 + 15834;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8233a258
	ctx.lr = 0x825632D0;
	sub_8233A258(ctx, base);
	// lis r4,12731
	ctx.r4.s64 = 834338816;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,10267
	ctx.r4.u64 = ctx.r4.u64 | 10267;
	// bl 0x829c3740
	ctx.lr = 0x825632E4;
	sub_829C3740(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233a258
	ctx.lr = 0x825632F0;
	sub_8233A258(ctx, base);
	// lis r4,3454
	ctx.r4.s64 = 226361344;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,6126
	ctx.r4.u64 = ctx.r4.u64 | 6126;
	// bl 0x829c3740
	ctx.lr = 0x82563304;
	sub_829C3740(ctx, base);
	// lis r11,3532
	ctx.r11.s64 = 231473152;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r11,r11,56964
	ctx.r11.u64 = ctx.r11.u64 | 56964;
	// stw r11,1588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1588, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82563330"))) PPC_WEAK_FUNC(sub_82563330);
PPC_FUNC_IMPL(__imp__sub_82563330) {
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
	// bl 0x826bafd8
	ctx.lr = 0x82563348;
	sub_826BAFD8(ctx, base);
	// lwz r9,1632(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1632);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lwz r8,1636(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1636);
	// lfs f13,624(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r31,620
	ctx.r11.s64 = ctx.r31.s64 + 620;
	// lfs f11,620(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f11.f64 = double(temp.f32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lfs f9,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f9.f64 = double(temp.f32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lfs f8,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f13,f13,f8
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f8.f64));
	// lfs f0,-32516(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32516);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,1640(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1640);
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fsubs f11,f11,f9
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f9.f64));
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lfs f10,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
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
	// bgt cr6,0x825633bc
	if (ctx.cr6.gt) goto loc_825633BC;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x825633d0
	ctx.lr = 0x825633BC;
	sub_825633D0(ctx, base);
loc_825633BC:
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

__attribute__((alias("__imp__sub_825633D0"))) PPC_WEAK_FUNC(sub_825633D0);
PPC_FUNC_IMPL(__imp__sub_825633D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x825633D8;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825633F0;
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
	ctx.lr = 0x82563418;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82563434
	if (!ctx.cr6.gt) goto loc_82563434;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// b 0x82563508
	goto loc_82563508;
loc_82563434:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825634d4
	if (!ctx.cr6.eq) goto loc_825634D4;
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
	ctx.lr = 0x82563458;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,964(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 964);
	// addi r28,r26,948
	ctx.r28.s64 = ctx.r26.s64 + 948;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825634b4
	if (!ctx.cr6.gt) goto loc_825634B4;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82563470:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825634a0
	if (!ctx.cr6.eq) goto loc_825634A0;
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
	ctx.lr = 0x82563498;
	sub_82332CA8(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
loc_825634A0:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82563470
	if (ctx.cr6.lt) goto loc_82563470;
loc_825634B4:
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
	ctx.lr = 0x825634D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825634D4:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82563508
	if (!ctx.cr0.eq) goto loc_82563508;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825634F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82563508
	if (ctx.cr0.eq) goto loc_82563508;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r26,924
	ctx.r3.s64 = ctx.r26.s64 + 924;
	// bl 0x82410060
	ctx.lr = 0x82563508;
	sub_82410060(ctx, base);
loc_82563508:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8256351C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82563528"))) PPC_WEAK_FUNC(sub_82563528);
PPC_FUNC_IMPL(__imp__sub_82563528) {
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
	// lwz r11,1616(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1616);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825635f8
	if (ctx.cr6.eq) goto loc_825635F8;
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// lwz r11,10548(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10548);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825635f8
	if (ctx.cr6.eq) goto loc_825635F8;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,13024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// bl 0x82825748
	ctx.lr = 0x82563574;
	sub_82825748(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f13,620(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f12.f64 = double(temp.f32);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lfs f11,1620(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1620);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lfs f10,1624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1624);
	ctx.f10.f64 = double(temp.f32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// ld r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fsubs f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// fsubs f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// ld r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lfs f0,-24640(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24640);
	ctx.f0.f64 = double(temp.f32);
	// rldicr r10,r11,32,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000;
	// lwz r3,10548(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10548);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,1616(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1616);
	// lwz r6,800(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// lfs f13,628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f13,1628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1628);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rldicr r8,r11,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x8242f058
	ctx.lr = 0x825635E8;
	sub_8242F058(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825635f8
	if (ctx.cr0.eq) goto loc_825635F8;
	// lwz r11,1756(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1756);
	// stw r11,1424(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1424, ctx.r11.u32);
loc_825635F8:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,15834
	ctx.r4.s64 = ctx.r11.s64 + 15834;
	// bl 0x8233a258
	ctx.lr = 0x82563608;
	sub_8233A258(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1588(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1588);
	// bl 0x829c3740
	ctx.lr = 0x82563618;
	sub_829C3740(ctx, base);
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

__attribute__((alias("__imp__sub_82563630"))) PPC_WEAK_FUNC(sub_82563630);
PPC_FUNC_IMPL(__imp__sub_82563630) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82563638;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x826c40e0
	ctx.lr = 0x82563644;
	sub_826C40E0(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r7,-32229
	ctx.r7.s64 = -2112159744;
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// lfs f0,19552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19552);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f12,20528(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20528);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r8,5768
	ctx.r10.s64 = ctx.r8.s64 + 5768;
	// lfs f13,19556(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 19556);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r7,6956
	ctx.r9.s64 = ctx.r7.s64 + 6956;
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
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
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r27,100(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r11,r11,4480
	ctx.r11.s64 = ctx.r11.s64 + 4480;
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r11,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r11.u32);
	// lis r26,-31949
	ctx.r26.s64 = -2093809664;
	// stw r7,1616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1616, ctx.r7.u32);
	// li r30,-1
	ctx.r30.s64 = -1;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lis r5,20132
	ctx.r5.s64 = 1319370752;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r4,r31,1580
	ctx.r4.s64 = ctx.r31.s64 + 1580;
	// stw r8,1656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1656, ctx.r8.u32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// stw r6,1648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1648, ctx.r6.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r3,1660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1660, ctx.r3.u32);
	// ori r5,r5,17072
	ctx.r5.u64 = ctx.r5.u64 | 17072;
	// stw r27,1652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1652, ctx.r27.u32);
	// stw r29,1664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1664, ctx.r29.u32);
	// stw r28,1668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1668, ctx.r28.u32);
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x825636F8;
	sub_823CF190(ctx, base);
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// lis r5,6132
	ctx.r5.s64 = 401866752;
	// addi r4,r31,1584
	ctx.r4.s64 = ctx.r31.s64 + 1584;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,16137
	ctx.r5.u64 = ctx.r5.u64 | 16137;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x82563718;
	sub_823CF190(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stw r11,1028(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1028, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r30,r10,15834
	ctx.r30.s64 = ctx.r10.s64 + 15834;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8233a258
	ctx.lr = 0x82563734;
	sub_8233A258(ctx, base);
	// lis r4,12731
	ctx.r4.s64 = 834338816;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,10267
	ctx.r4.u64 = ctx.r4.u64 | 10267;
	// bl 0x829c3740
	ctx.lr = 0x82563748;
	sub_829C3740(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233a258
	ctx.lr = 0x82563754;
	sub_8233A258(ctx, base);
	// lis r4,3454
	ctx.r4.s64 = 226361344;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,6126
	ctx.r4.u64 = ctx.r4.u64 | 6126;
	// bl 0x829c3740
	ctx.lr = 0x82563768;
	sub_829C3740(ctx, base);
	// lis r11,3532
	ctx.r11.s64 = 231473152;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r11,r11,56964
	ctx.r11.u64 = ctx.r11.u64 | 56964;
	// stw r11,1588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1588, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82563780"))) PPC_WEAK_FUNC(sub_82563780);
PPC_FUNC_IMPL(__imp__sub_82563780) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826b9508
	ctx.lr = 0x8256379C;
	sub_826B9508(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// li r3,252
	ctx.r3.s64 = 252;
	// stw r30,1848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1848, ctx.r30.u32);
	// bl 0x82833108
	ctx.lr = 0x825637AC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825637bc
	if (ctx.cr0.eq) goto loc_825637BC;
	// bl 0x823f40f0
	ctx.lr = 0x825637B8;
	sub_823F40F0(ctx, base);
	// b 0x825637c0
	goto loc_825637C0;
loc_825637BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825637C0:
	// lwz r8,1568(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1568);
	// addi r9,r31,1552
	ctx.r9.s64 = ctx.r31.s64 + 1552;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x825637f8
	if (!ctx.cr6.gt) goto loc_825637F8;
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
loc_825637DC:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82563808
	if (ctx.cr6.eq) goto loc_82563808;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x825637dc
	if (ctx.cr6.lt) goto loc_825637DC;
loc_825637F8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x82410060
	ctx.lr = 0x82563804;
	sub_82410060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82563808:
	// lwz r10,1564(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1564);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r30,76(r10)
	PPC_STORE_U32(ctx.r10.u32 + 76, ctx.r30.u32);
	// lwz r10,1564(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1564);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r10,3216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3216);
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82563840"))) PPC_WEAK_FUNC(sub_82563840);
PPC_FUNC_IMPL(__imp__sub_82563840) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82563848;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82a61748
	ctx.lr = 0x82563850;
	__savefpr_28(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,800(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82563a88
	if (ctx.cr6.eq) goto loc_82563A88;
	// bl 0x823b8fc0
	ctx.lr = 0x82563868;
	sub_823B8FC0(ctx, base);
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
	ctx.lr = 0x82563880;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8256388c
	if (!ctx.cr0.eq) goto loc_8256388C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8256388C:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r10,1668(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1668);
	// lwz r8,1656(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1656);
	// lis r4,26666
	ctx.r4.s64 = 1747582976;
	// li r6,256
	ctx.r6.s64 = 256;
	// ld r9,1660(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1660);
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r7,1648(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1648);
	// ori r4,r4,18444
	ctx.r4.u64 = ctx.r4.u64 | 18444;
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// ld r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r8,r8,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x826b9f28
	ctx.lr = 0x825638E0;
	sub_826B9F28(ctx, base);
	// lwz r11,800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// lfs f0,7192(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 7192);
	ctx.f0.f64 = double(temp.f32);
	// lwz r28,7196(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7196);
	// lfs f29,7204(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 7204);
	ctx.f29.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f28,7200(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 7200);
	ctx.f28.f64 = double(temp.f32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// beq cr6,0x82563928
	if (ctx.cr6.eq) goto loc_82563928;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,556(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82563920;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// b 0x8256392c
	goto loc_8256392C;
loc_82563928:
	// li r6,0
	ctx.r6.s64 = 0;
loc_8256392C:
	// lfs f0,1512(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1512);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.f0.u64);
	// lwz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// li r10,3
	ctx.r10.s64 = 3;
	// ld r27,160(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r26,168(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f30,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f30.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// std r27,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r27.u64);
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// bl 0x82331120
	ctx.lr = 0x82563984;
	sub_82331120(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r28,2
	ctx.r28.s64 = 2;
	// stw r11,560(r29)
	PPC_STORE_U32(ctx.r29.u32 + 560, ctx.r11.u32);
	// stw r28,56(r29)
	PPC_STORE_U32(ctx.r29.u32 + 56, ctx.r28.u32);
	// lwz r11,6844(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6844);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825639a4
	if (!ctx.cr6.eq) goto loc_825639A4;
	// bl 0x82331e80
	ctx.lr = 0x825639A4;
	sub_82331E80(ctx, base);
loc_825639A4:
	// stfs f31,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lwz r8,168(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// lis r4,26666
	ctx.r4.s64 = 1747582976;
	// lfs f13,19204(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19204);
	ctx.f13.f64 = double(temp.f32);
	// ld r9,160(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// stfs f13,160(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// li r6,256
	ctx.r6.s64 = 256;
	// lfs f0,-27328(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27328);
	ctx.f0.f64 = double(temp.f32);
	// lis r5,2
	ctx.r5.s64 = 131072;
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// ori r4,r4,18444
	ctx.r4.u64 = ctx.r4.u64 | 18444;
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// ld r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// stfs f13,168(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lwz r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r7,160(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// rldicr r8,r11,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x826b9f28
	ctx.lr = 0x82563A18;
	sub_826B9F28(ctx, base);
	// stfs f31,168(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// stfs f31,160(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// ld r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82331120
	ctx.lr = 0x82563A68;
	sub_82331120(ctx, base);
	// stw r28,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r28.u32);
	// lwz r11,800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82563a80
	if (ctx.cr6.eq) goto loc_82563A80;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x82563a84
	goto loc_82563A84;
loc_82563A80:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82563A84:
	// stw r11,448(r3)
	PPC_STORE_U32(ctx.r3.u32 + 448, ctx.r11.u32);
loc_82563A88:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82a61794
	ctx.lr = 0x82563A94;
	__restfpr_28(ctx, base);
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82563A98"))) PPC_WEAK_FUNC(sub_82563A98);
PPC_FUNC_IMPL(__imp__sub_82563A98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x82563AB8;
	sub_829C63E8(ctx, base);
	// lis r11,11857
	ctx.r11.s64 = 777060352;
	// ori r11,r11,20963
	ctx.r11.u64 = ctx.r11.u64 | 20963;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82563adc
	if (!ctx.cr6.eq) goto loc_82563ADC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1164(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1164);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82563ADC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82563ADC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82563AF8"))) PPC_WEAK_FUNC(sub_82563AF8);
PPC_FUNC_IMPL(__imp__sub_82563AF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82563B00;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82563bdc
	if (ctx.cr6.eq) goto loc_82563BDC;
	// lwz r5,1584(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1584);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82563b54
	if (ctx.cr6.eq) goto loc_82563B54;
	// lis r8,-31949
	ctx.r8.s64 = -2093809664;
	// lwz r10,664(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 664);
	// lwz r29,628(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,16
	ctx.r4.s64 = 16;
	// ld r9,656(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 656);
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r7,620(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 620);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// lwz r3,13024(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 13024);
	// rldicr r8,r29,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x8282b1e0
	ctx.lr = 0x82563B54;
	sub_8282B1E0(ctx, base);
loc_82563B54:
	// lwz r4,1616(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1616);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82563bdc
	if (ctx.cr6.eq) goto loc_82563BDC;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r3,10548(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82563bdc
	if (ctx.cr6.eq) goto loc_82563BDC;
	// lfs f13,1620(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1620);
	ctx.f13.f64 = double(temp.f32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// lfs f0,620(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f13,1624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1624);
	ctx.f13.f64 = double(temp.f32);
	// ld r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// lfs f0,624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f0.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// ld r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lfs f0,628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1628);
	ctx.f13.f64 = double(temp.f32);
	// lwz r6,800(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r10,r30,32,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFF00000000;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x8242f058
	ctx.lr = 0x82563BCC;
	sub_8242F058(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82563bdc
	if (ctx.cr0.eq) goto loc_82563BDC;
	// lwz r11,1756(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1756);
	// stw r11,1424(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1424, ctx.r11.u32);
loc_82563BDC:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,15834
	ctx.r4.s64 = ctx.r11.s64 + 15834;
	// bl 0x8233a258
	ctx.lr = 0x82563BEC;
	sub_8233A258(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1588(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1588);
	// bl 0x829c3740
	ctx.lr = 0x82563BFC;
	sub_829C3740(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82563C08"))) PPC_WEAK_FUNC(sub_82563C08);
PPC_FUNC_IMPL(__imp__sub_82563C08) {
	PPC_FUNC_PROLOGUE();
	// b 0x8270f5b0
	sub_8270F5B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82563C10"))) PPC_WEAK_FUNC(sub_82563C10);
PPC_FUNC_IMPL(__imp__sub_82563C10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82563C18;
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
	// lwz r11,800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82563e3c
	if (ctx.cr6.eq) goto loc_82563E3C;
	// li r28,1
	ctx.r28.s64 = 1;
	// lwz r10,1452(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r9,1456(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	// stw r28,1428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1428, ctx.r28.u32);
	// lfs f13,1456(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,1460(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1460);
	ctx.f12.f64 = double(temp.f32);
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// lis r7,16
	ctx.r7.s64 = 1048576;
	// lfs f0,1452(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r8,668
	ctx.r3.s64 = ctx.r8.s64 + 668;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f31,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
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
	// stw r10,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stw r9,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r9.u32);
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
	ctx.lr = 0x82563C9C;
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
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// bl 0x82708268
	ctx.lr = 0x82563CD4;
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
	// beq cr6,0x82563d0c
	if (ctx.cr6.eq) goto loc_82563D0C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,556(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82563D04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// b 0x82563d10
	goto loc_82563D10;
loc_82563D0C:
	// li r6,0
	ctx.r6.s64 = 0;
loc_82563D10:
	// ld r30,160(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r29,168(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// li r27,0
	ctx.r27.s64 = 0;
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
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r30.u64);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// bl 0x82331120
	ctx.lr = 0x82563D5C;
	sub_82331120(ctx, base);
	// lwz r3,800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// bl 0x8255cef8
	ctx.lr = 0x82563D64;
	sub_8255CEF8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,256
	ctx.r3.s64 = 256;
	// bl 0x82833108
	ctx.lr = 0x82563D70;
	sub_82833108(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82563d98
	if (ctx.cr0.eq) goto loc_82563D98;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f1190
	ctx.lr = 0x82563D80;
	sub_823F1190(ctx, base);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// stw r28,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r28.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r10,r10,-24448
	ctx.r10.s64 = ctx.r10.s64 + -24448;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// b 0x82563d9c
	goto loc_82563D9C;
loc_82563D98:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82563D9C:
	// stw r11,1556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1556, ctx.r11.u32);
	// stw r28,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r28.u32);
	// lfs f0,7160(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 7160);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,1556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1556);
	// stfs f0,60(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// lwz r11,1556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1556);
	// lwz r10,7156(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 7156);
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r30,1556(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1556);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82563df0
	if (ctx.cr6.eq) goto loc_82563DF0;
	// bl 0x823f3818
	ctx.lr = 0x82563DCC;
	sub_823F3818(ctx, base);
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
	ctx.lr = 0x82563DE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bne 0x82563df4
	if (!ctx.cr0.eq) goto loc_82563DF4;
loc_82563DF0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82563DF4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82563e04
	if (ctx.cr6.eq) goto loc_82563E04;
	// lfs f0,7168(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 7168);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,252(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 252, temp.u32);
loc_82563E04:
	// lwz r11,1552(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1552);
	// addi r11,r11,52
	ctx.r11.s64 = ctx.r11.s64 + 52;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r10,1552(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1552);
	// beq cr6,0x82563e34
	if (ctx.cr6.eq) goto loc_82563E34;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x82563e38
	goto loc_82563E38;
loc_82563E34:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82563E38:
	// stw r11,448(r10)
	PPC_STORE_U32(ctx.r10.u32 + 448, ctx.r11.u32);
loc_82563E3C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82563E48"))) PPC_WEAK_FUNC(sub_82563E48);
PPC_FUNC_IMPL(__imp__sub_82563E48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x82563E68;
	sub_829C63E8(ctx, base);
	// lis r11,11857
	ctx.r11.s64 = 777060352;
	// ori r11,r11,20963
	ctx.r11.u64 = ctx.r11.u64 | 20963;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82563e8c
	if (!ctx.cr6.eq) goto loc_82563E8C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1012(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1012);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82563E8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82563E8C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82563EA8"))) PPC_WEAK_FUNC(sub_82563EA8);
PPC_FUNC_IMPL(__imp__sub_82563EA8) {
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
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82333900
	ctx.lr = 0x82563EBC;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82563ecc
	if (ctx.cr0.eq) goto loc_82563ECC;
	// bl 0x8255d210
	ctx.lr = 0x82563EC8;
	sub_8255D210(ctx, base);
	// b 0x82563ed0
	goto loc_82563ED0;
loc_82563ECC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82563ED0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82563EE0"))) PPC_WEAK_FUNC(sub_82563EE0);
PPC_FUNC_IMPL(__imp__sub_82563EE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,12208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12208);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82563f28
	if (!ctx.cr6.eq) goto loc_82563F28;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// addi r4,r11,-24392
	ctx.r4.s64 = ctx.r11.s64 + -24392;
	// addi r3,r10,-28728
	ctx.r3.s64 = ctx.r10.s64 + -28728;
	// bl 0x82a4c7d8
	ctx.lr = 0x82563F14;
	sub_82A4C7D8(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82a4ca90
	ctx.lr = 0x82563F1C;
	sub_82A4CA90(ctx, base);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bl 0x82816528
	ctx.lr = 0x82563F24;
	sub_82816528(ctx, base);
	// stw r3,12208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12208, ctx.r3.u32);
loc_82563F28:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82563F40"))) PPC_WEAK_FUNC(sub_82563F40);
PPC_FUNC_IMPL(__imp__sub_82563F40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,3216
	ctx.r3.s64 = 3216;
	// bl 0x82833108
	ctx.lr = 0x82563F58;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82563f94
	if (ctx.cr0.eq) goto loc_82563F94;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826c40e0
	ctx.lr = 0x82563F68;
	sub_826C40E0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// addi r11,r11,3240
	ctx.r11.s64 = ctx.r11.s64 + 3240;
	// addi r10,r10,4428
	ctx.r10.s64 = ctx.r10.s64 + 4428;
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
	// b 0x82563f98
	goto loc_82563F98;
loc_82563F94:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82563F98:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82563FB0"))) PPC_WEAK_FUNC(sub_82563FB0);
PPC_FUNC_IMPL(__imp__sub_82563FB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,25740(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25740);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82563ff0
	if (!ctx.cr0.eq) goto loc_82563FF0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// stw r11,25740(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25740, ctx.r11.u32);
	// addi r3,r9,-1336
	ctx.r3.s64 = ctx.r9.s64 + -1336;
	// bl 0x82816528
	ctx.lr = 0x82563FE8;
	sub_82816528(ctx, base);
	// stw r3,25736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25736, ctx.r3.u32);
	// b 0x82563ff4
	goto loc_82563FF4;
loc_82563FF0:
	// lwz r3,25736(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25736);
loc_82563FF4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82564008"))) PPC_WEAK_FUNC(sub_82564008);
PPC_FUNC_IMPL(__imp__sub_82564008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82564058
	ctx.lr = 0x82564028;
	sub_82564058(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8256403C;
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

__attribute__((alias("__imp__sub_82564058"))) PPC_WEAK_FUNC(sub_82564058);
PPC_FUNC_IMPL(__imp__sub_82564058) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,12204
	ctx.r31.s64 = ctx.r11.s64 + 12204;
	// lwz r11,12200(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12200);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x825640a0
	if (!ctx.cr0.eq) goto loc_825640A0;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,4504
	ctx.r9.s64 = ctx.r9.s64 + 4504;
	// stw r11,12200(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12200, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,21264
	ctx.r3.s64 = ctx.r11.s64 + 21264;
	// bl 0x82a4c758
	ctx.lr = 0x825640A0;
	sub_82A4C758(ctx, base);
loc_825640A0:
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

__attribute__((alias("__imp__sub_825640B8"))) PPC_WEAK_FUNC(sub_825640B8);
PPC_FUNC_IMPL(__imp__sub_825640B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x825640C0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r27,1
	ctx.r27.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// beq cr6,0x8256413c
	if (ctx.cr6.eq) goto loc_8256413C;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825640FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825641e4
	if (!ctx.cr6.gt) goto loc_825641E4;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_82564110:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x8243c740
	ctx.lr = 0x82564120;
	sub_8243C740(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82564110
	if (ctx.cr6.lt) goto loc_82564110;
	// b 0x825641e4
	goto loc_825641E4;
loc_8256413C:
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82564150;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82564174
	if (ctx.cr6.eq) goto loc_82564174;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c38
	ctx.lr = 0x82564174;
	sub_82332C38(ctx, base);
loc_82564174:
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x825641e4
	if (!ctx.cr6.gt) goto loc_825641E4;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82332d50
	ctx.lr = 0x82564194;
	sub_82332D50(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 * 12;
	// mulli r5,r29,12
	ctx.r5.s64 = ctx.r29.s64 * 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82a455d0
	ctx.lr = 0x825641AC;
	sub_82A455D0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825641e4
	if (!ctx.cr6.gt) goto loc_825641E4;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_825641BC:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x8243c740
	ctx.lr = 0x825641CC;
	sub_8243C740(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x825641bc
	if (ctx.cr6.lt) goto loc_825641BC;
loc_825641E4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825641F0"))) PPC_WEAK_FUNC(sub_825641F0);
PPC_FUNC_IMPL(__imp__sub_825641F0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8255d920
	sub_8255D920(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825641F8"))) PPC_WEAK_FUNC(sub_825641F8);
PPC_FUNC_IMPL(__imp__sub_825641F8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8255dc00
	sub_8255DC00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82564200"))) PPC_WEAK_FUNC(sub_82564200);
PPC_FUNC_IMPL(__imp__sub_82564200) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8255d3e0
	sub_8255D3E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82564208"))) PPC_WEAK_FUNC(sub_82564208);
PPC_FUNC_IMPL(__imp__sub_82564208) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8255dd50
	sub_8255DD50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82564210"))) PPC_WEAK_FUNC(sub_82564210);
PPC_FUNC_IMPL(__imp__sub_82564210) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x8255d920
	sub_8255D920(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82564218"))) PPC_WEAK_FUNC(sub_82564218);
PPC_FUNC_IMPL(__imp__sub_82564218) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8255de98
	sub_8255DE98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82564220"))) PPC_WEAK_FUNC(sub_82564220);
PPC_FUNC_IMPL(__imp__sub_82564220) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8255daa8
	sub_8255DAA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82564228"))) PPC_WEAK_FUNC(sub_82564228);
PPC_FUNC_IMPL(__imp__sub_82564228) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f0
	ctx.lr = 0x82564230;
	__savegprlr_22(ctx, base);
	// stfd f29,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f29.u64);
	// stfd f30,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f30.u64);
	// stfd f31,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-3152(r1)
	ea = -3152 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,9510
	ctx.r10.s64 = 623247360;
	// lis r9,5654
	ctx.r9.s64 = 370540544;
	// ori r10,r10,30158
	ctx.r10.u64 = ctx.r10.u64 | 30158;
	// ori r9,r9,53286
	ctx.r9.u64 = ctx.r9.u64 | 53286;
	// lfs f31,16540(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16540);
	ctx.f31.f64 = double(temp.f32);
	// lis r7,11755
	ctx.r7.s64 = 770375680;
	// lis r6,11491
	ctx.r6.s64 = 753074176;
	// stw r10,928(r1)
	PPC_STORE_U32(ctx.r1.u32 + 928, ctx.r10.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r9,932(r1)
	PPC_STORE_U32(ctx.r1.u32 + 932, ctx.r9.u32);
	// lis r8,15981
	ctx.r8.s64 = 1047330816;
	// stfs f31,948(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 948, temp.u32);
	// addi r11,r1,952
	ctx.r11.s64 = ctx.r1.s64 + 952;
	// ori r10,r7,21451
	ctx.r10.u64 = ctx.r7.u64 | 21451;
	// ori r9,r6,32775
	ctx.r9.u64 = ctx.r6.u64 | 32775;
	// ori r8,r8,43590
	ctx.r8.u64 = ctx.r8.u64 | 43590;
	// stw r10,940(r1)
	PPC_STORE_U32(ctx.r1.u32 + 940, ctx.r10.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r9,944(r1)
	PPC_STORE_U32(ctx.r1.u32 + 944, ctx.r9.u32);
	// stw r8,936(r1)
	PPC_STORE_U32(ctx.r1.u32 + 936, ctx.r8.u32);
	// lis r5,-32215
	ctx.r5.s64 = -2111242240;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// addi r10,r1,980
	ctx.r10.s64 = ctx.r1.s64 + 980;
	// stw r4,4360(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4360, ctx.r4.u32);
	// lis r4,13121
	ctx.r4.s64 = 859897856;
	// lis r11,4444
	ctx.r11.s64 = 291241984;
	// ori r30,r4,14787
	ctx.r30.u64 = ctx.r4.u64 | 14787;
	// ori r28,r11,3445
	ctx.r28.u64 = ctx.r11.u64 | 3445;
	// lfs f29,16852(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16852);
	ctx.f29.f64 = double(temp.f32);
	// addi r9,r1,1008
	ctx.r9.s64 = ctx.r1.s64 + 1008;
	// stfs f29,976(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 976, temp.u32);
	// lis r11,5421
	ctx.r11.s64 = 355270656;
	// stw r30,956(r1)
	PPC_STORE_U32(ctx.r1.u32 + 956, ctx.r30.u32);
	// stw r30,960(r1)
	PPC_STORE_U32(ctx.r1.u32 + 960, ctx.r30.u32);
	// addi r8,r1,1036
	ctx.r8.s64 = ctx.r1.s64 + 1036;
	// stw r30,964(r1)
	PPC_STORE_U32(ctx.r1.u32 + 964, ctx.r30.u32);
	// ori r29,r11,60085
	ctx.r29.u64 = ctx.r11.u64 | 60085;
	// stw r30,968(r1)
	PPC_STORE_U32(ctx.r1.u32 + 968, ctx.r30.u32);
	// addi r11,r1,1040
	ctx.r11.s64 = ctx.r1.s64 + 1040;
	// stw r30,972(r1)
	PPC_STORE_U32(ctx.r1.u32 + 972, ctx.r30.u32);
	// lis r7,865
	ctx.r7.s64 = 56688640;
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
	// stfs f31,1004(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1004, temp.u32);
	// stw r28,984(r1)
	PPC_STORE_U32(ctx.r1.u32 + 984, ctx.r28.u32);
	// stw r28,988(r1)
	PPC_STORE_U32(ctx.r1.u32 + 988, ctx.r28.u32);
	// lis r6,11662
	ctx.r6.s64 = 764280832;
	// stw r28,992(r1)
	PPC_STORE_U32(ctx.r1.u32 + 992, ctx.r28.u32);
	// lis r5,1021
	ctx.r5.s64 = 66912256;
	// stw r28,996(r1)
	PPC_STORE_U32(ctx.r1.u32 + 996, ctx.r28.u32);
	// lis r10,10777
	ctx.r10.s64 = 706281472;
	// stw r28,1000(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1000, ctx.r28.u32);
	// addi r4,r1,1092
	ctx.r4.s64 = ctx.r1.s64 + 1092;
	// stw r31,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r31.u32);
	// stfs f31,1032(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1032, temp.u32);
	// stw r29,1012(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1012, ctx.r29.u32);
	// stw r29,1016(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1016, ctx.r29.u32);
	// ori r9,r7,17467
	ctx.r9.u64 = ctx.r7.u64 | 17467;
	// stw r29,1020(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1020, ctx.r29.u32);
	// ori r7,r6,31970
	ctx.r7.u64 = ctx.r6.u64 | 31970;
	// stw r29,1024(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1024, ctx.r29.u32);
	// ori r6,r5,48212
	ctx.r6.u64 = ctx.r5.u64 | 48212;
	// stw r29,1028(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1028, ctx.r29.u32);
	// ori r10,r10,42459
	ctx.r10.u64 = ctx.r10.u64 | 42459;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// std r31,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r31.u64);
	// lis r5,6922
	ctx.r5.s64 = 453640192;
	// std r31,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r31.u64);
	// addi r8,r1,1120
	ctx.r8.s64 = ctx.r1.s64 + 1120;
	// std r31,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r31.u64);
	// stw r31,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r31.u32);
	// stfs f31,1088(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1088, temp.u32);
	// ori r5,r5,56825
	ctx.r5.u64 = ctx.r5.u64 | 56825;
	// stw r10,1068(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1068, ctx.r10.u32);
	// stw r9,1072(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1072, ctx.r9.u32);
	// stw r7,1076(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1076, ctx.r7.u32);
	// stw r5,1084(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1084, ctx.r5.u32);
	// addi r11,r1,1148
	ctx.r11.s64 = ctx.r1.s64 + 1148;
	// stw r6,1080(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1080, ctx.r6.u32);
	// addi r10,r1,1176
	ctx.r10.s64 = ctx.r1.s64 + 1176;
	// stw r31,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r31.u32);
	// stfs f29,1116(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1116, temp.u32);
	// stw r30,1096(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1096, ctx.r30.u32);
	// stw r30,1100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1100, ctx.r30.u32);
	// li r5,28
	ctx.r5.s64 = 28;
	// stw r30,1104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1104, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,1108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1108, ctx.r30.u32);
	// addi r3,r1,1180
	ctx.r3.s64 = ctx.r1.s64 + 1180;
	// stw r30,1112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1112, ctx.r30.u32);
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// stfs f31,1144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1144, temp.u32);
	// stw r28,1124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1124, ctx.r28.u32);
	// stw r28,1128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1128, ctx.r28.u32);
	// stw r28,1132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1132, ctx.r28.u32);
	// stw r28,1136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1136, ctx.r28.u32);
	// stw r28,1140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1140, ctx.r28.u32);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stfs f31,1172(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1172, temp.u32);
	// stw r29,1152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1152, ctx.r29.u32);
	// stw r29,1156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1156, ctx.r29.u32);
	// stw r29,1160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1160, ctx.r29.u32);
	// stw r29,1164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1164, ctx.r29.u32);
	// stw r29,1168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1168, ctx.r29.u32);
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
	// stw r31,4408(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4408, ctx.r31.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x825643EC;
	sub_82A4EFB0(ctx, base);
	// lis r11,3811
	ctx.r11.s64 = 249757696;
	// stfs f31,1228(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1228, temp.u32);
	// lis r10,10421
	ctx.r10.s64 = 682950656;
	// lis r9,8000
	ctx.r9.s64 = 524288000;
	// ori r11,r11,61301
	ctx.r11.u64 = ctx.r11.u64 | 61301;
	// ori r10,r10,47267
	ctx.r10.u64 = ctx.r10.u64 | 47267;
	// lis r8,4300
	ctx.r8.s64 = 281804800;
	// stw r11,1208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1208, ctx.r11.u32);
	// ori r9,r9,60366
	ctx.r9.u64 = ctx.r9.u64 | 60366;
	// stw r10,1212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1212, ctx.r10.u32);
	// lis r7,4589
	ctx.r7.s64 = 300744704;
	// addi r6,r1,1232
	ctx.r6.s64 = ctx.r1.s64 + 1232;
	// stw r9,1216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1216, ctx.r9.u32);
	// ori r11,r8,45332
	ctx.r11.u64 = ctx.r8.u64 | 45332;
	// ori r10,r7,41187
	ctx.r10.u64 = ctx.r7.u64 | 41187;
	// addi r9,r1,1260
	ctx.r9.s64 = ctx.r1.s64 + 1260;
	// stw r11,1220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1220, ctx.r11.u32);
	// stw r10,1224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1224, ctx.r10.u32);
	// addi r11,r1,1288
	ctx.r11.s64 = ctx.r1.s64 + 1288;
	// stw r31,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r31.u32);
	// stfs f29,1256(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1256, temp.u32);
	// stw r30,1236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1236, ctx.r30.u32);
	// stw r30,1240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1240, ctx.r30.u32);
	// addi r10,r1,1316
	ctx.r10.s64 = ctx.r1.s64 + 1316;
	// stw r30,1244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1244, ctx.r30.u32);
	// addi r8,r1,1320
	ctx.r8.s64 = ctx.r1.s64 + 1320;
	// stw r30,1248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1248, ctx.r30.u32);
	// stw r30,1252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1252, ctx.r30.u32);
	// stw r31,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r31.u32);
	// stfs f31,1284(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1284, temp.u32);
	// stw r28,1264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1264, ctx.r28.u32);
	// stw r28,1268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1268, ctx.r28.u32);
	// stw r28,1272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1272, ctx.r28.u32);
	// stw r28,1276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1276, ctx.r28.u32);
	// stw r28,1280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1280, ctx.r28.u32);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stfs f31,1312(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1312, temp.u32);
	// stw r29,1292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1292, ctx.r29.u32);
	// stw r29,1296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1296, ctx.r29.u32);
	// stw r29,1300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1300, ctx.r29.u32);
	// stw r29,1304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1304, ctx.r29.u32);
	// stw r29,1308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1308, ctx.r29.u32);
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
	// std r31,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r31.u64);
	// std r31,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r31.u64);
	// lis r11,1766
	ctx.r11.s64 = 115736576;
	// std r31,16(r8)
	PPC_STORE_U64(ctx.r8.u32 + 16, ctx.r31.u64);
	// lis r10,9041
	ctx.r10.s64 = 592510976;
	// lis r9,9404
	ctx.r9.s64 = 616300544;
	// stw r31,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r31.u32);
	// ori r11,r11,11111
	ctx.r11.u64 = ctx.r11.u64 | 11111;
	// ori r10,r10,57697
	ctx.r10.u64 = ctx.r10.u64 | 57697;
	// stfs f31,1368(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1368, temp.u32);
	// ori r9,r9,37282
	ctx.r9.u64 = ctx.r9.u64 | 37282;
	// stw r11,1348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1348, ctx.r11.u32);
	// lis r7,61
	ctx.r7.s64 = 3997696;
	// stw r10,1352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1352, ctx.r10.u32);
	// lis r8,6534
	ctx.r8.s64 = 428212224;
	// stw r9,1356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1356, ctx.r9.u32);
	// addi r6,r1,1372
	ctx.r6.s64 = ctx.r1.s64 + 1372;
	// ori r11,r7,7926
	ctx.r11.u64 = ctx.r7.u64 | 7926;
	// ori r10,r8,41969
	ctx.r10.u64 = ctx.r8.u64 | 41969;
	// addi r9,r1,1400
	ctx.r9.s64 = ctx.r1.s64 + 1400;
	// stw r11,1360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1360, ctx.r11.u32);
	// stw r10,1364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1364, ctx.r10.u32);
	// addi r11,r1,1428
	ctx.r11.s64 = ctx.r1.s64 + 1428;
	// stw r31,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r31.u32);
	// stfs f29,1396(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1396, temp.u32);
	// stw r30,1376(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1376, ctx.r30.u32);
	// stw r30,1380(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1380, ctx.r30.u32);
	// addi r10,r1,1456
	ctx.r10.s64 = ctx.r1.s64 + 1456;
	// stw r30,1384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1384, ctx.r30.u32);
	// li r5,28
	ctx.r5.s64 = 28;
	// stw r30,1388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1388, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,1392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1392, ctx.r30.u32);
	// addi r3,r1,1460
	ctx.r3.s64 = ctx.r1.s64 + 1460;
	// stw r31,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r31.u32);
	// stfs f31,1424(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1424, temp.u32);
	// stw r28,1404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1404, ctx.r28.u32);
	// stw r28,1408(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1408, ctx.r28.u32);
	// stw r28,1412(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1412, ctx.r28.u32);
	// stw r28,1416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1416, ctx.r28.u32);
	// stw r28,1420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1420, ctx.r28.u32);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stfs f31,1452(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1452, temp.u32);
	// stw r29,1432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1432, ctx.r29.u32);
	// stw r29,1436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1436, ctx.r29.u32);
	// stw r29,1440(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1440, ctx.r29.u32);
	// stw r29,1444(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1444, ctx.r29.u32);
	// stw r29,1448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1448, ctx.r29.u32);
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82564560;
	sub_82A4EFB0(ctx, base);
	// li r5,560
	ctx.r5.s64 = 560;
	// addi r4,r1,928
	ctx.r4.s64 = ctx.r1.s64 + 928;
	// addi r3,r27,1408
	ctx.r3.s64 = ctx.r27.s64 + 1408;
	// bl 0x82a45878
	ctx.lr = 0x82564570;
	sub_82A45878(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,8562
	ctx.r10.s64 = 561119232;
	// lis r8,2681
	ctx.r8.s64 = 175702016;
	// lis r7,606
	ctx.r7.s64 = 39714816;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// lfs f0,912(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	ctx.f0.f64 = double(temp.f32);
	// ori r9,r10,18016
	ctx.r9.u64 = ctx.r10.u64 | 18016;
	// ori r11,r8,10892
	ctx.r11.u64 = ctx.r8.u64 | 10892;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// ori r10,r7,58825
	ctx.r10.u64 = ctx.r7.u64 | 58825;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lis r9,12726
	ctx.r9.s64 = 834011136;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r8,r1,132
	ctx.r8.s64 = ctx.r1.s64 + 132;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// ori r10,r9,62046
	ctx.r10.u64 = ctx.r9.u64 | 62046;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r31,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r31.u32);
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// addi r7,r1,184
	ctx.r7.s64 = ctx.r1.s64 + 184;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// lis r9,6146
	ctx.r9.s64 = 402784256;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// stfs f31,156(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stw r10,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// addi r4,r5,-29292
	ctx.r4.s64 = ctx.r5.s64 + -29292;
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// lis r3,16015
	ctx.r3.s64 = 1049559040;
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// lis r30,2597
	ctx.r30.s64 = 170196992;
	// stw r10,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r10.u32);
	// ori r8,r9,3512
	ctx.r8.u64 = ctx.r9.u64 | 3512;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// addi r10,r1,244
	ctx.r10.s64 = ctx.r1.s64 + 244;
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// ori r9,r3,13446
	ctx.r9.u64 = ctx.r3.u64 | 13446;
	// stw r31,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r31.u32);
	// lis r11,10712
	ctx.r11.s64 = 702021632;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// ori r3,r30,50145
	ctx.r3.u64 = ctx.r30.u64 | 50145;
	// stw r31,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r31.u32);
	// addi r29,r1,272
	ctx.r29.s64 = ctx.r1.s64 + 272;
	// std r31,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r31.u64);
	// std r31,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r31.u64);
	// ori r30,r11,46080
	ctx.r30.u64 = ctx.r11.u64 | 46080;
	// std r31,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r31.u64);
	// lfs f0,4648(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4648);
	ctx.f0.f64 = double(temp.f32);
	// std r31,16(r6)
	PPC_STORE_U64(ctx.r6.u32 + 16, ctx.r31.u64);
	// stw r31,24(r6)
	PPC_STORE_U32(ctx.r6.u32 + 24, ctx.r31.u32);
	// stfs f0,240(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// stw r8,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r8.u32);
	// lis r11,4602
	ctx.r11.s64 = 301596672;
	// stw r8,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r8.u32);
	// addi r4,r1,300
	ctx.r4.s64 = ctx.r1.s64 + 300;
	// stw r9,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r9.u32);
	// lis r7,4803
	ctx.r7.s64 = 314769408;
	// stw r9,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r9.u32);
	// ori r11,r11,37153
	ctx.r11.u64 = ctx.r11.u64 | 37153;
	// stw r3,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r3.u32);
	// lis r8,7910
	ctx.r8.s64 = 518389760;
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
	// stfs f31,268(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 268, temp.u32);
	// stw r30,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r30.u32);
	// stw r30,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r30.u32);
	// lis r6,3515
	ctx.r6.s64 = 230359040;
	// stw r30,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r30.u32);
	// lis r28,7693
	ctx.r28.s64 = 504168448;
	// stw r30,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r30.u32);
	// lis r3,4085
	ctx.r3.s64 = 267714560;
	// stw r30,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r30.u32);
	// ori r9,r7,54577
	ctx.r9.u64 = ctx.r7.u64 | 54577;
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// lfs f0,-29292(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -29292);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r11.u32);
	// stw r11,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r11.u32);
	// stfs f31,296(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 296, temp.u32);
	// stw r11,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r11.u32);
	// ori r7,r8,23027
	ctx.r7.u64 = ctx.r8.u64 | 23027;
	// stw r11,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r11.u32);
	// addi r5,r1,324
	ctx.r5.s64 = ctx.r1.s64 + 324;
	// stw r11,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r11.u32);
	// ori r8,r6,8017
	ctx.r8.u64 = ctx.r6.u64 | 8017;
	// ori r10,r28,51382
	ctx.r10.u64 = ctx.r28.u64 | 51382;
	// stw r31,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r31.u32);
	// ori r11,r3,32619
	ctx.r11.u64 = ctx.r3.u64 | 32619;
	// addi r6,r1,356
	ctx.r6.s64 = ctx.r1.s64 + 356;
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// lis r4,13956
	ctx.r4.s64 = 914620416;
	// stw r31,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r31.u32);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// stw r31,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r31.u32);
	// ori r4,r4,51423
	ctx.r4.u64 = ctx.r4.u64 | 51423;
	// stw r31,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r31.u32);
	// addi r28,r1,412
	ctx.r28.s64 = ctx.r1.s64 + 412;
	// stw r31,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r31.u32);
	// addi r26,r1,440
	ctx.r26.s64 = ctx.r1.s64 + 440;
	// stw r31,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r31.u32);
	// lis r25,1719
	ctx.r25.s64 = 112656384;
	// stw r31,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r31.u32);
	// stw r9,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r9.u32);
	// stfs f31,352(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 352, temp.u32);
	// stw r9,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r9.u32);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// stw r9,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r9.u32);
	// addi r24,r1,468
	ctx.r24.s64 = ctx.r1.s64 + 468;
	// stw r9,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r9.u32);
	// lis r23,12926
	ctx.r23.s64 = 847118336;
	// stw r9,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r9.u32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r31,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r31.u32);
	// stw r8,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r8.u32);
	// stfs f0,380(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 380, temp.u32);
	// stw r8,376(r1)
	PPC_STORE_U32(ctx.r1.u32 + 376, ctx.r8.u32);
	// addi r22,r1,496
	ctx.r22.s64 = ctx.r1.s64 + 496;
	// stw r7,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r7.u32);
	// lis r6,3305
	ctx.r6.s64 = 216596480;
	// stw r7,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r7.u32);
	// lis r8,434
	ctx.r8.s64 = 28442624;
	// stw r4,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r4.u32);
	// lis r4,4643
	ctx.r4.s64 = 304283648;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// stw r10,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r10.u32);
	// stfs f31,408(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 408, temp.u32);
	// stw r10,392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 392, ctx.r10.u32);
	// lis r7,12761
	ctx.r7.s64 = 836304896;
	// stw r10,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, ctx.r10.u32);
	// lfs f0,-32764(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -32764);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r10.u32);
	// ori r9,r6,58337
	ctx.r9.u64 = ctx.r6.u64 | 58337;
	// stw r10,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r10.u32);
	// ori r10,r25,2429
	ctx.r10.u64 = ctx.r25.u64 | 2429;
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
	// stw r11,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r11.u32);
	// stfs f31,436(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 436, temp.u32);
	// stw r11,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r11.u32);
	// ori r8,r8,49182
	ctx.r8.u64 = ctx.r8.u64 | 49182;
	// stw r11,424(r1)
	PPC_STORE_U32(ctx.r1.u32 + 424, ctx.r11.u32);
	// ori r29,r4,58490
	ctx.r29.u64 = ctx.r4.u64 | 58490;
	// stw r11,428(r1)
	PPC_STORE_U32(ctx.r1.u32 + 428, ctx.r11.u32);
	// ori r11,r23,2633
	ctx.r11.u64 = ctx.r23.u64 | 2633;
	// stw r5,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r5.u32);
	// addi r6,r1,524
	ctx.r6.s64 = ctx.r1.s64 + 524;
	// stw r31,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r31.u32);
	// stfs f31,464(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 464, temp.u32);
	// stw r10,444(r1)
	PPC_STORE_U32(ctx.r1.u32 + 444, ctx.r10.u32);
	// stw r10,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r10.u32);
	// ori r7,r7,59875
	ctx.r7.u64 = ctx.r7.u64 | 59875;
	// stw r10,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r10.u32);
	// stw r10,456(r1)
	PPC_STORE_U32(ctx.r1.u32 + 456, ctx.r10.u32);
	// stw r10,460(r1)
	PPC_STORE_U32(ctx.r1.u32 + 460, ctx.r10.u32);
	// stw r31,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r31.u32);
	// stfs f31,492(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 492, temp.u32);
	// stw r11,472(r1)
	PPC_STORE_U32(ctx.r1.u32 + 472, ctx.r11.u32);
	// stw r11,476(r1)
	PPC_STORE_U32(ctx.r1.u32 + 476, ctx.r11.u32);
	// stw r11,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, ctx.r11.u32);
	// stw r11,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, ctx.r11.u32);
	// stw r11,488(r1)
	PPC_STORE_U32(ctx.r1.u32 + 488, ctx.r11.u32);
	// stw r31,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r31.u32);
	// addi r10,r1,552
	ctx.r10.s64 = ctx.r1.s64 + 552;
	// stw r7,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r7.u32);
	// stw r8,504(r1)
	PPC_STORE_U32(ctx.r1.u32 + 504, ctx.r8.u32);
	// stfs f0,520(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 520, temp.u32);
	// stw r8,508(r1)
	PPC_STORE_U32(ctx.r1.u32 + 508, ctx.r8.u32);
	// addi r7,r1,580
	ctx.r7.s64 = ctx.r1.s64 + 580;
	// stw r9,512(r1)
	PPC_STORE_U32(ctx.r1.u32 + 512, ctx.r9.u32);
	// lis r11,2880
	ctx.r11.s64 = 188743680;
	// stw r9,516(r1)
	PPC_STORE_U32(ctx.r1.u32 + 516, ctx.r9.u32);
	// addi r8,r1,608
	ctx.r8.s64 = ctx.r1.s64 + 608;
	// stw r31,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r31.u32);
	// stfs f31,548(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 548, temp.u32);
	// stw r30,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, ctx.r30.u32);
	// stw r30,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r30.u32);
	// ori r11,r11,58054
	ctx.r11.u64 = ctx.r11.u64 | 58054;
	// stw r30,536(r1)
	PPC_STORE_U32(ctx.r1.u32 + 536, ctx.r30.u32);
	// li r5,28
	ctx.r5.s64 = 28;
	// stw r30,540(r1)
	PPC_STORE_U32(ctx.r1.u32 + 540, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,544(r1)
	PPC_STORE_U32(ctx.r1.u32 + 544, ctx.r30.u32);
	// addi r3,r1,612
	ctx.r3.s64 = ctx.r1.s64 + 612;
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
	// stfs f31,576(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 576, temp.u32);
	// stw r29,556(r1)
	PPC_STORE_U32(ctx.r1.u32 + 556, ctx.r29.u32);
	// stw r29,560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 560, ctx.r29.u32);
	// stw r29,564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 564, ctx.r29.u32);
	// stw r29,568(r1)
	PPC_STORE_U32(ctx.r1.u32 + 568, ctx.r29.u32);
	// stw r29,572(r1)
	PPC_STORE_U32(ctx.r1.u32 + 572, ctx.r29.u32);
	// stw r31,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r31.u32);
	// stfs f31,604(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 604, temp.u32);
	// stw r11,584(r1)
	PPC_STORE_U32(ctx.r1.u32 + 584, ctx.r11.u32);
	// stw r11,588(r1)
	PPC_STORE_U32(ctx.r1.u32 + 588, ctx.r11.u32);
	// stw r11,592(r1)
	PPC_STORE_U32(ctx.r1.u32 + 592, ctx.r11.u32);
	// stw r11,596(r1)
	PPC_STORE_U32(ctx.r1.u32 + 596, ctx.r11.u32);
	// stw r11,600(r1)
	PPC_STORE_U32(ctx.r1.u32 + 600, ctx.r11.u32);
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x825648A4;
	sub_82A4EFB0(ctx, base);
	// lis r11,7578
	ctx.r11.s64 = 496631808;
	// lis r9,13641
	ctx.r9.s64 = 893976576;
	// stfs f31,660(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 660, temp.u32);
	// lis r8,10201
	ctx.r8.s64 = 668532736;
	// ori r10,r11,14736
	ctx.r10.u64 = ctx.r11.u64 | 14736;
	// addi r7,r1,664
	ctx.r7.s64 = ctx.r1.s64 + 664;
	// ori r11,r9,13484
	ctx.r11.u64 = ctx.r9.u64 | 13484;
	// stw r10,644(r1)
	PPC_STORE_U32(ctx.r1.u32 + 644, ctx.r10.u32);
	// ori r9,r8,50258
	ctx.r9.u64 = ctx.r8.u64 | 50258;
	// stw r10,648(r1)
	PPC_STORE_U32(ctx.r1.u32 + 648, ctx.r10.u32);
	// addi r6,r1,692
	ctx.r6.s64 = ctx.r1.s64 + 692;
	// stw r11,652(r1)
	PPC_STORE_U32(ctx.r1.u32 + 652, ctx.r11.u32);
	// stw r9,640(r1)
	PPC_STORE_U32(ctx.r1.u32 + 640, ctx.r9.u32);
	// addi r10,r1,720
	ctx.r10.s64 = ctx.r1.s64 + 720;
	// stw r11,656(r1)
	PPC_STORE_U32(ctx.r1.u32 + 656, ctx.r11.u32);
	// lis r9,13257
	ctx.r9.s64 = 868810752;
	// stw r31,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r31.u32);
	// stfs f31,688(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 688, temp.u32);
	// stw r30,668(r1)
	PPC_STORE_U32(ctx.r1.u32 + 668, ctx.r30.u32);
	// stw r30,672(r1)
	PPC_STORE_U32(ctx.r1.u32 + 672, ctx.r30.u32);
	// ori r8,r9,31444
	ctx.r8.u64 = ctx.r9.u64 | 31444;
	// stw r30,676(r1)
	PPC_STORE_U32(ctx.r1.u32 + 676, ctx.r30.u32);
	// addi r11,r1,744
	ctx.r11.s64 = ctx.r1.s64 + 744;
	// stw r30,680(r1)
	PPC_STORE_U32(ctx.r1.u32 + 680, ctx.r30.u32);
	// addi r7,r1,752
	ctx.r7.s64 = ctx.r1.s64 + 752;
	// stw r30,684(r1)
	PPC_STORE_U32(ctx.r1.u32 + 684, ctx.r30.u32);
	// lis r9,3809
	ctx.r9.s64 = 249626624;
	// stw r31,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r31.u32);
	// stfs f31,716(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 716, temp.u32);
	// stw r29,696(r1)
	PPC_STORE_U32(ctx.r1.u32 + 696, ctx.r29.u32);
	// stw r29,700(r1)
	PPC_STORE_U32(ctx.r1.u32 + 700, ctx.r29.u32);
	// stw r29,704(r1)
	PPC_STORE_U32(ctx.r1.u32 + 704, ctx.r29.u32);
	// stw r29,708(r1)
	PPC_STORE_U32(ctx.r1.u32 + 708, ctx.r29.u32);
	// stw r29,712(r1)
	PPC_STORE_U32(ctx.r1.u32 + 712, ctx.r29.u32);
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
	// stw r31,724(r1)
	PPC_STORE_U32(ctx.r1.u32 + 724, ctx.r31.u32);
	// stw r31,728(r1)
	PPC_STORE_U32(ctx.r1.u32 + 728, ctx.r31.u32);
	// stw r31,732(r1)
	PPC_STORE_U32(ctx.r1.u32 + 732, ctx.r31.u32);
	// lis r10,1719
	ctx.r10.s64 = 112656384;
	// stw r31,736(r1)
	PPC_STORE_U32(ctx.r1.u32 + 736, ctx.r31.u32);
	// addi r6,r1,804
	ctx.r6.s64 = ctx.r1.s64 + 804;
	// stw r31,740(r1)
	PPC_STORE_U32(ctx.r1.u32 + 740, ctx.r31.u32);
	// ori r10,r10,31884
	ctx.r10.u64 = ctx.r10.u64 | 31884;
	// std r31,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r31.u64);
	// std r31,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r31.u64);
	// ori r9,r9,26860
	ctx.r9.u64 = ctx.r9.u64 | 26860;
	// std r31,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r31.u64);
	// lis r11,6865
	ctx.r11.s64 = 449904640;
	// std r31,16(r7)
	PPC_STORE_U64(ctx.r7.u32 + 16, ctx.r31.u64);
	// stw r31,24(r7)
	PPC_STORE_U32(ctx.r7.u32 + 24, ctx.r31.u32);
	// addi r30,r1,832
	ctx.r30.s64 = ctx.r1.s64 + 832;
	// stw r10,780(r1)
	PPC_STORE_U32(ctx.r1.u32 + 780, ctx.r10.u32);
	// ori r11,r11,15009
	ctx.r11.u64 = ctx.r11.u64 | 15009;
	// stw r8,784(r1)
	PPC_STORE_U32(ctx.r1.u32 + 784, ctx.r8.u32);
	// stfs f31,800(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 800, temp.u32);
	// stw r8,788(r1)
	PPC_STORE_U32(ctx.r1.u32 + 788, ctx.r8.u32);
	// lis r10,6342
	ctx.r10.s64 = 415629312;
	// stw r9,792(r1)
	PPC_STORE_U32(ctx.r1.u32 + 792, ctx.r9.u32);
	// addi r8,r1,860
	ctx.r8.s64 = ctx.r1.s64 + 860;
	// stw r9,796(r1)
	PPC_STORE_U32(ctx.r1.u32 + 796, ctx.r9.u32);
	// ori r10,r10,58633
	ctx.r10.u64 = ctx.r10.u64 | 58633;
	// stw r31,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r31.u32);
	// stfs f31,828(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 828, temp.u32);
	// stw r11,808(r1)
	PPC_STORE_U32(ctx.r1.u32 + 808, ctx.r11.u32);
	// stw r11,812(r1)
	PPC_STORE_U32(ctx.r1.u32 + 812, ctx.r11.u32);
	// addi r9,r1,888
	ctx.r9.s64 = ctx.r1.s64 + 888;
	// stw r11,816(r1)
	PPC_STORE_U32(ctx.r1.u32 + 816, ctx.r11.u32);
	// li r5,28
	ctx.r5.s64 = 28;
	// stw r11,820(r1)
	PPC_STORE_U32(ctx.r1.u32 + 820, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,824(r1)
	PPC_STORE_U32(ctx.r1.u32 + 824, ctx.r11.u32);
	// addi r3,r1,892
	ctx.r3.s64 = ctx.r1.s64 + 892;
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// stfs f31,856(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 856, temp.u32);
	// stw r10,836(r1)
	PPC_STORE_U32(ctx.r1.u32 + 836, ctx.r10.u32);
	// stw r10,840(r1)
	PPC_STORE_U32(ctx.r1.u32 + 840, ctx.r10.u32);
	// stw r10,844(r1)
	PPC_STORE_U32(ctx.r1.u32 + 844, ctx.r10.u32);
	// stw r10,848(r1)
	PPC_STORE_U32(ctx.r1.u32 + 848, ctx.r10.u32);
	// stw r10,852(r1)
	PPC_STORE_U32(ctx.r1.u32 + 852, ctx.r10.u32);
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// stfs f31,884(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 884, temp.u32);
	// stw r11,864(r1)
	PPC_STORE_U32(ctx.r1.u32 + 864, ctx.r11.u32);
	// stw r11,868(r1)
	PPC_STORE_U32(ctx.r1.u32 + 868, ctx.r11.u32);
	// stw r11,872(r1)
	PPC_STORE_U32(ctx.r1.u32 + 872, ctx.r11.u32);
	// stw r11,876(r1)
	PPC_STORE_U32(ctx.r1.u32 + 876, ctx.r11.u32);
	// stw r11,880(r1)
	PPC_STORE_U32(ctx.r1.u32 + 880, ctx.r11.u32);
	// stw r31,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r31.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82564A04;
	sub_82A4EFB0(ctx, base);
	// li r5,840
	ctx.r5.s64 = 840;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r27,1968
	ctx.r3.s64 = ctx.r27.s64 + 1968;
	// bl 0x82a45878
	ctx.lr = 0x82564A14;
	sub_82A45878(ctx, base);
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// lis r11,12332
	ctx.r11.s64 = 808189952;
	// addi r9,r1,2072
	ctx.r9.s64 = ctx.r1.s64 + 2072;
	// ori r11,r11,28659
	ctx.r11.u64 = ctx.r11.u64 | 28659;
	// addi r8,r1,2096
	ctx.r8.s64 = ctx.r1.s64 + 2096;
	// lfs f30,-28788(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -28788);
	ctx.f30.f64 = double(temp.f32);
	// stw r11,2048(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2048, ctx.r11.u32);
	// stfs f30,2068(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2068, temp.u32);
	// stw r11,2052(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2052, ctx.r11.u32);
	// stw r11,2056(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2056, ctx.r11.u32);
	// addi r10,r1,2124
	ctx.r10.s64 = ctx.r1.s64 + 2124;
	// stw r11,2060(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2060, ctx.r11.u32);
	// stw r11,2064(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2064, ctx.r11.u32);
	// stw r31,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r31.u32);
	// stw r31,2076(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2076, ctx.r31.u32);
	// stw r31,2080(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2080, ctx.r31.u32);
	// stw r31,2084(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2084, ctx.r31.u32);
	// stw r31,2088(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2088, ctx.r31.u32);
	// stw r31,2092(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2092, ctx.r31.u32);
	// std r31,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r31.u64);
	// addi r9,r1,2152
	ctx.r9.s64 = ctx.r1.s64 + 2152;
	// stw r31,2104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2104, ctx.r31.u32);
	// stw r31,2108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2108, ctx.r31.u32);
	// addi r8,r1,2160
	ctx.r8.s64 = ctx.r1.s64 + 2160;
	// stw r31,2112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2112, ctx.r31.u32);
	// lis r11,1088
	ctx.r11.s64 = 71303168;
	// stw r31,2116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2116, ctx.r31.u32);
	// addi r7,r1,2212
	ctx.r7.s64 = ctx.r1.s64 + 2212;
	// stw r31,2120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2120, ctx.r31.u32);
	// ori r11,r11,9384
	ctx.r11.u64 = ctx.r11.u64 | 9384;
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
	// addi r6,r1,2236
	ctx.r6.s64 = ctx.r1.s64 + 2236;
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
	// stw r31,2132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2132, ctx.r31.u32);
	// addi r10,r1,2264
	ctx.r10.s64 = ctx.r1.s64 + 2264;
	// stw r31,2136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2136, ctx.r31.u32);
	// addi r30,r1,2292
	ctx.r30.s64 = ctx.r1.s64 + 2292;
	// stw r31,2140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2140, ctx.r31.u32);
	// li r5,28
	ctx.r5.s64 = 28;
	// stw r31,2144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2144, ctx.r31.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,2148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2148, ctx.r31.u32);
	// addi r3,r1,2300
	ctx.r3.s64 = ctx.r1.s64 + 2300;
	// std r31,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r31.u64);
	// std r31,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r31.u64);
	// std r31,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r31.u64);
	// std r31,16(r8)
	PPC_STORE_U64(ctx.r8.u32 + 16, ctx.r31.u64);
	// stw r31,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r31.u32);
	// stfs f30,2208(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2208, temp.u32);
	// stw r11,2188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2188, ctx.r11.u32);
	// stw r11,2192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2192, ctx.r11.u32);
	// stw r11,2196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2196, ctx.r11.u32);
	// stw r11,2200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2200, ctx.r11.u32);
	// stw r11,2204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2204, ctx.r11.u32);
	// stw r31,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r31.u32);
	// stw r31,2216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2216, ctx.r31.u32);
	// stw r31,2220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2220, ctx.r31.u32);
	// stw r31,2224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2224, ctx.r31.u32);
	// stw r31,2228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2228, ctx.r31.u32);
	// stw r31,2232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2232, ctx.r31.u32);
	// stw r31,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r31.u32);
	// stw r31,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r31.u32);
	// stw r31,2244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2244, ctx.r31.u32);
	// stw r31,2248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2248, ctx.r31.u32);
	// stw r31,2252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2252, ctx.r31.u32);
	// stw r31,2256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2256, ctx.r31.u32);
	// stw r31,2260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2260, ctx.r31.u32);
	// std r31,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r31.u64);
	// stw r31,2272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2272, ctx.r31.u32);
	// stw r31,2276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2276, ctx.r31.u32);
	// stw r31,2280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2280, ctx.r31.u32);
	// stw r31,2284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2284, ctx.r31.u32);
	// stw r31,2288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2288, ctx.r31.u32);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82564B44;
	sub_82A4EFB0(ctx, base);
	// lis r11,9712
	ctx.r11.s64 = 636485632;
	// addi r9,r1,2352
	ctx.r9.s64 = ctx.r1.s64 + 2352;
	// stfs f30,2348(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2348, temp.u32);
	// ori r11,r11,64979
	ctx.r11.u64 = ctx.r11.u64 | 64979;
	// lis r10,1788
	ctx.r10.s64 = 117178368;
	// lis r8,13336
	ctx.r8.s64 = 873988096;
	// stw r11,2328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2328, ctx.r11.u32);
	// stw r11,2332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2332, ctx.r11.u32);
	// addi r7,r1,2376
	ctx.r7.s64 = ctx.r1.s64 + 2376;
	// stw r11,2336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2336, ctx.r11.u32);
	// ori r10,r10,35502
	ctx.r10.u64 = ctx.r10.u64 | 35502;
	// stw r11,2340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2340, ctx.r11.u32);
	// stw r11,2344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2344, ctx.r11.u32);
	// ori r11,r8,60785
	ctx.r11.u64 = ctx.r8.u64 | 60785;
	// stw r31,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r31.u32);
	// addi r9,r1,2404
	ctx.r9.s64 = ctx.r1.s64 + 2404;
	// stw r31,2356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2356, ctx.r31.u32);
	// stw r31,2360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2360, ctx.r31.u32);
	// addi r8,r1,2436
	ctx.r8.s64 = ctx.r1.s64 + 2436;
	// stw r31,2364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2364, ctx.r31.u32);
	// addi r6,r1,2440
	ctx.r6.s64 = ctx.r1.s64 + 2440;
	// stw r31,2368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2368, ctx.r31.u32);
	// addi r30,r1,2492
	ctx.r30.s64 = ctx.r1.s64 + 2492;
	// stw r31,2372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2372, ctx.r31.u32);
	// addi r29,r1,2544
	ctx.r29.s64 = ctx.r1.s64 + 2544;
	// std r31,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r31.u64);
	// stw r31,2384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2384, ctx.r31.u32);
	// addi r7,r1,2516
	ctx.r7.s64 = ctx.r1.s64 + 2516;
	// stw r31,2388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2388, ctx.r31.u32);
	// addi r28,r1,2572
	ctx.r28.s64 = ctx.r1.s64 + 2572;
	// stw r31,2392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2392, ctx.r31.u32);
	// li r5,28
	ctx.r5.s64 = 28;
	// stw r31,2396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2396, ctx.r31.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,2400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2400, ctx.r31.u32);
	// addi r3,r1,2580
	ctx.r3.s64 = ctx.r1.s64 + 2580;
	// stw r31,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r31.u32);
	// stw r31,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r31.u32);
	// stfs f29,2432(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2432, temp.u32);
	// stw r10,2412(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2412, ctx.r10.u32);
	// stw r10,2416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2416, ctx.r10.u32);
	// stw r10,2420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2420, ctx.r10.u32);
	// stw r10,2424(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2424, ctx.r10.u32);
	// stw r10,2428(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2428, ctx.r10.u32);
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// std r31,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r31.u64);
	// std r31,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r31.u64);
	// std r31,16(r6)
	PPC_STORE_U64(ctx.r6.u32 + 16, ctx.r31.u64);
	// stw r31,24(r6)
	PPC_STORE_U32(ctx.r6.u32 + 24, ctx.r31.u32);
	// stfs f30,2488(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2488, temp.u32);
	// stw r11,2468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2468, ctx.r11.u32);
	// stw r11,2472(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2472, ctx.r11.u32);
	// stw r11,2476(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2476, ctx.r11.u32);
	// stw r11,2480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2480, ctx.r11.u32);
	// stw r11,2484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2484, ctx.r11.u32);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// stw r31,2496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2496, ctx.r31.u32);
	// stw r31,2500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2500, ctx.r31.u32);
	// stw r31,2504(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2504, ctx.r31.u32);
	// stw r31,2508(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2508, ctx.r31.u32);
	// stw r31,2512(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2512, ctx.r31.u32);
	// stw r31,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r31.u32);
	// stw r31,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r31.u32);
	// stw r31,2524(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2524, ctx.r31.u32);
	// stw r31,2528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2528, ctx.r31.u32);
	// stw r31,2532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2532, ctx.r31.u32);
	// stw r31,2536(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2536, ctx.r31.u32);
	// stw r31,2540(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2540, ctx.r31.u32);
	// std r31,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r31.u64);
	// stw r31,2552(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2552, ctx.r31.u32);
	// stw r31,2556(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2556, ctx.r31.u32);
	// stw r31,2560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2560, ctx.r31.u32);
	// stw r31,2564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2564, ctx.r31.u32);
	// stw r31,2568(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2568, ctx.r31.u32);
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82564C78;
	sub_82A4EFB0(ctx, base);
	// lis r11,13289
	ctx.r11.s64 = 870907904;
	// addi r10,r1,2632
	ctx.r10.s64 = ctx.r1.s64 + 2632;
	// stfs f30,2628(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2628, temp.u32);
	// ori r11,r11,41447
	ctx.r11.u64 = ctx.r11.u64 | 41447;
	// addi r9,r1,2656
	ctx.r9.s64 = ctx.r1.s64 + 2656;
	// stw r11,2608(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2608, ctx.r11.u32);
	// stw r11,2612(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2612, ctx.r11.u32);
	// stw r11,2616(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2616, ctx.r11.u32);
	// stw r11,2620(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2620, ctx.r11.u32);
	// stw r11,2624(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2624, ctx.r11.u32);
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
	// addi r10,r1,2684
	ctx.r10.s64 = ctx.r1.s64 + 2684;
	// stw r31,2636(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2636, ctx.r31.u32);
	// addi r8,r1,2712
	ctx.r8.s64 = ctx.r1.s64 + 2712;
	// stw r31,2640(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2640, ctx.r31.u32);
	// addi r7,r1,2720
	ctx.r7.s64 = ctx.r1.s64 + 2720;
	// stw r31,2644(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2644, ctx.r31.u32);
	// lis r11,15899
	ctx.r11.s64 = 1041956864;
	// stw r31,2648(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2648, ctx.r31.u32);
	// addi r6,r1,2772
	ctx.r6.s64 = ctx.r1.s64 + 2772;
	// stw r31,2652(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2652, ctx.r31.u32);
	// ori r11,r11,34944
	ctx.r11.u64 = ctx.r11.u64 | 34944;
	// std r31,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r31.u64);
	// stw r31,2664(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2664, ctx.r31.u32);
	// addi r9,r1,2796
	ctx.r9.s64 = ctx.r1.s64 + 2796;
	// stw r31,2668(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2668, ctx.r31.u32);
	// addi r30,r1,2824
	ctx.r30.s64 = ctx.r1.s64 + 2824;
	// stw r31,2672(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2672, ctx.r31.u32);
	// addi r29,r1,2852
	ctx.r29.s64 = ctx.r1.s64 + 2852;
	// stw r31,2676(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2676, ctx.r31.u32);
	// li r5,28
	ctx.r5.s64 = 28;
	// stw r31,2680(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2680, ctx.r31.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
	// addi r3,r1,2860
	ctx.r3.s64 = ctx.r1.s64 + 2860;
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
	// stw r31,2692(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2692, ctx.r31.u32);
	// stw r31,2696(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2696, ctx.r31.u32);
	// stw r31,2700(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2700, ctx.r31.u32);
	// stw r31,2704(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2704, ctx.r31.u32);
	// stw r31,2708(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2708, ctx.r31.u32);
	// std r31,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r31.u64);
	// std r31,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r31.u64);
	// std r31,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r31.u64);
	// std r31,16(r7)
	PPC_STORE_U64(ctx.r7.u32 + 16, ctx.r31.u64);
	// stw r31,24(r7)
	PPC_STORE_U32(ctx.r7.u32 + 24, ctx.r31.u32);
	// stfs f30,2768(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2768, temp.u32);
	// stw r11,2748(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2748, ctx.r11.u32);
	// stw r11,2752(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2752, ctx.r11.u32);
	// stw r11,2756(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2756, ctx.r11.u32);
	// stw r11,2760(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2760, ctx.r11.u32);
	// stw r11,2764(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2764, ctx.r11.u32);
	// stw r31,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r31.u32);
	// stw r31,2776(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2776, ctx.r31.u32);
	// stw r31,2780(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2780, ctx.r31.u32);
	// stw r31,2784(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2784, ctx.r31.u32);
	// stw r31,2788(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2788, ctx.r31.u32);
	// stw r31,2792(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2792, ctx.r31.u32);
	// stw r31,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r31.u32);
	// stw r31,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r31.u32);
	// stw r31,2804(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2804, ctx.r31.u32);
	// stw r31,2808(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2808, ctx.r31.u32);
	// stw r31,2812(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2812, ctx.r31.u32);
	// stw r31,2816(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2816, ctx.r31.u32);
	// stw r31,2820(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2820, ctx.r31.u32);
	// std r31,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r31.u64);
	// stw r31,2832(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2832, ctx.r31.u32);
	// stw r31,2836(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2836, ctx.r31.u32);
	// stw r31,2840(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2840, ctx.r31.u32);
	// stw r31,2844(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2844, ctx.r31.u32);
	// stw r31,2848(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2848, ctx.r31.u32);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82564DA0;
	sub_82A4EFB0(ctx, base);
	// lis r11,7729
	ctx.r11.s64 = 506527744;
	// stfs f30,2908(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 2908, temp.u32);
	// addi r10,r1,2912
	ctx.r10.s64 = ctx.r1.s64 + 2912;
	// ori r11,r11,36483
	ctx.r11.u64 = ctx.r11.u64 | 36483;
	// addi r9,r1,2936
	ctx.r9.s64 = ctx.r1.s64 + 2936;
	// stw r11,2888(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2888, ctx.r11.u32);
	// stw r11,2892(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2892, ctx.r11.u32);
	// stw r11,2896(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2896, ctx.r11.u32);
	// stw r11,2900(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2900, ctx.r11.u32);
	// stw r11,2904(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2904, ctx.r11.u32);
	// addi r11,r1,2964
	ctx.r11.s64 = ctx.r1.s64 + 2964;
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
	// stw r31,2916(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2916, ctx.r31.u32);
	// addi r10,r1,2992
	ctx.r10.s64 = ctx.r1.s64 + 2992;
	// stw r31,2920(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2920, ctx.r31.u32);
	// addi r8,r1,3000
	ctx.r8.s64 = ctx.r1.s64 + 3000;
	// stw r31,2924(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2924, ctx.r31.u32);
	// li r5,980
	ctx.r5.s64 = 980;
	// stw r31,2928(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2928, ctx.r31.u32);
	// addi r4,r1,2048
	ctx.r4.s64 = ctx.r1.s64 + 2048;
	// stw r31,2932(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2932, ctx.r31.u32);
	// addi r3,r27,2808
	ctx.r3.s64 = ctx.r27.s64 + 2808;
	// std r31,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r31.u64);
	// stw r31,2944(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2944, ctx.r31.u32);
	// stw r31,2948(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2948, ctx.r31.u32);
	// stw r31,2952(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2952, ctx.r31.u32);
	// stw r31,2956(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2956, ctx.r31.u32);
	// stw r31,2960(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2960, ctx.r31.u32);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// stw r31,2972(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2972, ctx.r31.u32);
	// stw r31,2976(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2976, ctx.r31.u32);
	// stw r31,2980(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2980, ctx.r31.u32);
	// stw r31,2984(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2984, ctx.r31.u32);
	// stw r31,2988(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2988, ctx.r31.u32);
	// std r31,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r31.u64);
	// std r31,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r31.u64);
	// std r31,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r31.u64);
	// std r31,16(r8)
	PPC_STORE_U64(ctx.r8.u32 + 16, ctx.r31.u64);
	// stw r31,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r31.u32);
	// bl 0x82a45878
	ctx.lr = 0x82564E44;
	sub_82A45878(ctx, base);
	// lis r11,9794
	ctx.r11.s64 = 641859584;
	// addi r10,r1,1512
	ctx.r10.s64 = ctx.r1.s64 + 1512;
	// stfs f30,1508(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1508, temp.u32);
	// ori r11,r11,39518
	ctx.r11.u64 = ctx.r11.u64 | 39518;
	// lis r9,11627
	ctx.r9.s64 = 761987072;
	// addi r8,r1,1540
	ctx.r8.s64 = ctx.r1.s64 + 1540;
	// stw r11,1488(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1488, ctx.r11.u32);
	// stw r11,1492(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1492, ctx.r11.u32);
	// ori r30,r9,46423
	ctx.r30.u64 = ctx.r9.u64 | 46423;
	// stw r11,1496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1496, ctx.r11.u32);
	// addi r9,r1,1564
	ctx.r9.s64 = ctx.r1.s64 + 1564;
	// stw r11,1500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1500, ctx.r11.u32);
	// addi r7,r1,1592
	ctx.r7.s64 = ctx.r1.s64 + 1592;
	// stw r11,1504(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1504, ctx.r11.u32);
	// addi r11,r1,1600
	ctx.r11.s64 = ctx.r1.s64 + 1600;
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
	// stfs f31,1536(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1536, temp.u32);
	// stw r30,1516(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1516, ctx.r30.u32);
	// stw r30,1520(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1520, ctx.r30.u32);
	// addi r10,r1,1652
	ctx.r10.s64 = ctx.r1.s64 + 1652;
	// stw r30,1524(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1524, ctx.r30.u32);
	// stw r30,1528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1528, ctx.r30.u32);
	// stw r30,1532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1532, ctx.r30.u32);
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// stw r31,1544(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1544, ctx.r31.u32);
	// stw r31,1548(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1548, ctx.r31.u32);
	// stw r31,1552(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1552, ctx.r31.u32);
	// stw r31,1556(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1556, ctx.r31.u32);
	// stw r31,1560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1560, ctx.r31.u32);
	// stw r31,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r31.u32);
	// stw r31,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r31.u32);
	// stw r31,1572(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1572, ctx.r31.u32);
	// stw r31,1576(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1576, ctx.r31.u32);
	// stw r31,1580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1580, ctx.r31.u32);
	// stw r31,1584(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1584, ctx.r31.u32);
	// stw r31,1588(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1588, ctx.r31.u32);
	// std r31,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r31.u64);
	// std r31,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r31.u64);
	// std r31,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r31.u64);
	// std r31,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r31.u64);
	// lis r9,8508
	ctx.r9.s64 = 557580288;
	// stw r31,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r31.u32);
	// addi r8,r1,1680
	ctx.r8.s64 = ctx.r1.s64 + 1680;
	// ori r11,r9,40720
	ctx.r11.u64 = ctx.r9.u64 | 40720;
	// stfs f30,1648(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1648, temp.u32);
	// addi r9,r1,1704
	ctx.r9.s64 = ctx.r1.s64 + 1704;
	// stw r11,1628(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1628, ctx.r11.u32);
	// addi r7,r1,1732
	ctx.r7.s64 = ctx.r1.s64 + 1732;
	// stw r11,1632(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1632, ctx.r11.u32);
	// li r5,28
	ctx.r5.s64 = 28;
	// stw r11,1636(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1636, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,1640(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1640, ctx.r11.u32);
	// addi r3,r1,1740
	ctx.r3.s64 = ctx.r1.s64 + 1740;
	// stw r11,1644(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1644, ctx.r11.u32);
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
	// stfs f31,1676(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1676, temp.u32);
	// stw r30,1656(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1656, ctx.r30.u32);
	// stw r30,1660(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1660, ctx.r30.u32);
	// stw r30,1664(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1664, ctx.r30.u32);
	// stw r30,1668(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1668, ctx.r30.u32);
	// stw r30,1672(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1672, ctx.r30.u32);
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// stw r31,1684(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1684, ctx.r31.u32);
	// stw r31,1688(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1688, ctx.r31.u32);
	// stw r31,1692(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1692, ctx.r31.u32);
	// stw r31,1696(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1696, ctx.r31.u32);
	// stw r31,1700(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1700, ctx.r31.u32);
	// std r31,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r31.u64);
	// stw r31,1712(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1712, ctx.r31.u32);
	// stw r31,1716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1716, ctx.r31.u32);
	// stw r31,1720(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1720, ctx.r31.u32);
	// stw r31,1724(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1724, ctx.r31.u32);
	// stw r31,1728(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1728, ctx.r31.u32);
	// stw r31,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r31.u32);
	// stw r31,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r31.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82564F78;
	sub_82A4EFB0(ctx, base);
	// lis r11,1780
	ctx.r11.s64 = 116654080;
	// addi r10,r1,1792
	ctx.r10.s64 = ctx.r1.s64 + 1792;
	// stfs f30,1788(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1788, temp.u32);
	// ori r11,r11,28102
	ctx.r11.u64 = ctx.r11.u64 | 28102;
	// addi r9,r1,1820
	ctx.r9.s64 = ctx.r1.s64 + 1820;
	// stw r11,1768(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1768, ctx.r11.u32);
	// addi r8,r1,1844
	ctx.r8.s64 = ctx.r1.s64 + 1844;
	// stw r11,1772(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1772, ctx.r11.u32);
	// addi r7,r1,1872
	ctx.r7.s64 = ctx.r1.s64 + 1872;
	// stw r11,1776(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1776, ctx.r11.u32);
	// lis r6,7023
	ctx.r6.s64 = 460259328;
	// stw r11,1780(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1780, ctx.r11.u32);
	// addi r5,r1,1880
	ctx.r5.s64 = ctx.r1.s64 + 1880;
	// stw r11,1784(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1784, ctx.r11.u32);
	// ori r11,r6,30545
	ctx.r11.u64 = ctx.r6.u64 | 30545;
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
	// stfs f31,1816(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1816, temp.u32);
	// stw r30,1796(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1796, ctx.r30.u32);
	// stw r30,1800(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1800, ctx.r30.u32);
	// stw r30,1804(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1804, ctx.r30.u32);
	// stw r30,1808(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1808, ctx.r30.u32);
	// stw r30,1812(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1812, ctx.r30.u32);
	// stw r31,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r31.u32);
	// stw r31,1824(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1824, ctx.r31.u32);
	// stw r31,1828(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1828, ctx.r31.u32);
	// stw r31,1832(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1832, ctx.r31.u32);
	// stw r31,1836(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1836, ctx.r31.u32);
	// stw r31,1840(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1840, ctx.r31.u32);
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// stw r31,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r31.u32);
	// stw r31,1852(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1852, ctx.r31.u32);
	// stw r31,1856(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1856, ctx.r31.u32);
	// stw r31,1860(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1860, ctx.r31.u32);
	// stw r31,1864(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1864, ctx.r31.u32);
	// stw r31,1868(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1868, ctx.r31.u32);
	// std r31,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r31.u64);
	// std r31,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r31.u64);
	// std r31,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, ctx.r31.u64);
	// addi r10,r1,1932
	ctx.r10.s64 = ctx.r1.s64 + 1932;
	// std r31,16(r5)
	PPC_STORE_U64(ctx.r5.u32 + 16, ctx.r31.u64);
	// addi r9,r1,1960
	ctx.r9.s64 = ctx.r1.s64 + 1960;
	// stw r31,24(r5)
	PPC_STORE_U32(ctx.r5.u32 + 24, ctx.r31.u32);
	// stfs f30,1928(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1928, temp.u32);
	// stw r11,1908(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1908, ctx.r11.u32);
	// stw r11,1912(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1912, ctx.r11.u32);
	// addi r8,r1,1984
	ctx.r8.s64 = ctx.r1.s64 + 1984;
	// stw r11,1916(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1916, ctx.r11.u32);
	// addi r7,r1,2012
	ctx.r7.s64 = ctx.r1.s64 + 2012;
	// stw r11,1920(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1920, ctx.r11.u32);
	// li r5,28
	ctx.r5.s64 = 28;
	// stw r11,1924(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1924, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
	// stfs f31,1956(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1956, temp.u32);
	// stw r30,1936(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1936, ctx.r30.u32);
	// stw r30,1940(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1940, ctx.r30.u32);
	// addi r3,r1,2020
	ctx.r3.s64 = ctx.r1.s64 + 2020;
	// stw r30,1944(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1944, ctx.r30.u32);
	// stw r30,1948(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1948, ctx.r30.u32);
	// stw r30,1952(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1952, ctx.r30.u32);
	// stw r31,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r31.u32);
	// stw r31,1964(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1964, ctx.r31.u32);
	// stw r31,1968(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1968, ctx.r31.u32);
	// stw r31,1972(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1972, ctx.r31.u32);
	// stw r31,1976(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1976, ctx.r31.u32);
	// stw r31,1980(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1980, ctx.r31.u32);
	// std r31,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r31.u64);
	// stw r31,1992(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1992, ctx.r31.u32);
	// stw r31,1996(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1996, ctx.r31.u32);
	// stw r31,2000(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2000, ctx.r31.u32);
	// stw r31,2004(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2004, ctx.r31.u32);
	// stw r31,2008(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2008, ctx.r31.u32);
	// stw r31,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r31.u32);
	// stw r31,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r31.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x825650A4;
	sub_82A4EFB0(ctx, base);
	// li r5,560
	ctx.r5.s64 = 560;
	// addi r4,r1,1488
	ctx.r4.s64 = ctx.r1.s64 + 1488;
	// addi r3,r27,3788
	ctx.r3.s64 = ctx.r27.s64 + 3788;
	// bl 0x82a45878
	ctx.lr = 0x825650B4;
	sub_82A45878(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r31,4372(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4372, ctx.r31.u32);
	// stw r11,4416(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4416, ctx.r11.u32);
	// stw r10,4376(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4376, ctx.r10.u32);
	// stw r11,4412(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4412, ctx.r11.u32);
	// addi r1,r1,3152
	ctx.r1.s64 = ctx.r1.s64 + 3152;
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

__attribute__((alias("__imp__sub_825650E0"))) PPC_WEAK_FUNC(sub_825650E0);
PPC_FUNC_IMPL(__imp__sub_825650E0) {
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
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x82565218
	if (ctx.cr6.lt) goto loc_82565218;
	// beq cr6,0x825651c0
	if (ctx.cr6.eq) goto loc_825651C0;
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// blt cr6,0x82565168
	if (ctx.cr6.lt) goto loc_82565168;
	// bne cr6,0x82565290
	if (!ctx.cr6.eq) goto loc_82565290;
	// mulli r11,r5,5
	ctx.r11.s64 = ctx.r5.s64 * 5;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r5,28
	ctx.r5.s64 = 28;
	// addi r4,r30,3788
	ctx.r4.s64 = ctx.r30.s64 + 3788;
	// bl 0x82a4ea80
	ctx.lr = 0x82565130;
	sub_82A4EA80(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lfs f13,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lfs f12,984(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 984);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f12,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x82565160
	if (!ctx.cr6.lt) goto loc_82565160;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82565290
	if (!ctx.cr6.eq) goto loc_82565290;
loc_82565160:
	// stfs f12,3812(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 3812, temp.u32);
	// b 0x8256526c
	goto loc_8256526C;
loc_82565168:
	// mulli r11,r5,5
	ctx.r11.s64 = ctx.r5.s64 * 5;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r5,28
	ctx.r5.s64 = 28;
	// addi r4,r30,2808
	ctx.r4.s64 = ctx.r30.s64 + 2808;
	// bl 0x82a4ea80
	ctx.lr = 0x82565188;
	sub_82A4EA80(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lfs f13,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lfs f12,984(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 984);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f12,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x825651b8
	if (!ctx.cr6.lt) goto loc_825651B8;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82565290
	if (!ctx.cr6.eq) goto loc_82565290;
loc_825651B8:
	// stfs f12,2832(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 2832, temp.u32);
	// b 0x8256526c
	goto loc_8256526C;
loc_825651C0:
	// mulli r11,r5,5
	ctx.r11.s64 = ctx.r5.s64 * 5;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r5,28
	ctx.r5.s64 = 28;
	// addi r4,r30,1968
	ctx.r4.s64 = ctx.r30.s64 + 1968;
	// bl 0x82a4ea80
	ctx.lr = 0x825651E0;
	sub_82A4EA80(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lfs f13,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lfs f12,984(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 984);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f12,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x82565210
	if (!ctx.cr6.lt) goto loc_82565210;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82565290
	if (!ctx.cr6.eq) goto loc_82565290;
loc_82565210:
	// stfs f12,1992(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1992, temp.u32);
	// b 0x8256526c
	goto loc_8256526C;
loc_82565218:
	// mulli r11,r5,5
	ctx.r11.s64 = ctx.r5.s64 * 5;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r5,28
	ctx.r5.s64 = 28;
	// addi r4,r30,1408
	ctx.r4.s64 = ctx.r30.s64 + 1408;
	// bl 0x82a4ea80
	ctx.lr = 0x82565238;
	sub_82A4EA80(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lfs f13,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lfs f12,984(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 984);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f12,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x82565268
	if (!ctx.cr6.lt) goto loc_82565268;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82565290
	if (!ctx.cr6.eq) goto loc_82565290;
loc_82565268:
	// stfs f12,1432(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1432, temp.u32);
loc_8256526C:
	// lwz r11,4372(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4372);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x825652b8
	if (ctx.cr6.lt) goto loc_825652B8;
	// beq cr6,0x825652b0
	if (ctx.cr6.eq) goto loc_825652B0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x825652a8
	if (ctx.cr6.lt) goto loc_825652A8;
	// beq cr6,0x825652a0
	if (ctx.cr6.eq) goto loc_825652A0;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// blt cr6,0x82565298
	if (ctx.cr6.lt) goto loc_82565298;
loc_82565290:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825652bc
	goto loc_825652BC;
loc_82565298:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// b 0x825652bc
	goto loc_825652BC;
loc_825652A0:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// b 0x825652bc
	goto loc_825652BC;
loc_825652A8:
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// b 0x825652bc
	goto loc_825652BC;
loc_825652B0:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x825652bc
	goto loc_825652BC;
loc_825652B8:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_825652BC:
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

__attribute__((alias("__imp__sub_825652D8"))) PPC_WEAK_FUNC(sub_825652D8);
PPC_FUNC_IMPL(__imp__sub_825652D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x825652E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// ld r10,4380(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 4380);
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lwz r28,4368(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4368);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lwz r10,1356(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1356);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x825654bc
	if (!ctx.cr6.eq) goto loc_825654BC;
	// lwz r10,788(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x825654bc
	if (!ctx.cr6.eq) goto loc_825654BC;
	// lwz r11,432(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bge cr6,0x825654bc
	if (!ctx.cr6.lt) goto loc_825654BC;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// bne cr6,0x82565334
	if (!ctx.cr6.eq) goto loc_82565334;
	// lwz r11,4416(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4416);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825654bc
	if (ctx.cr6.eq) goto loc_825654BC;
loc_82565334:
	// cmpwi cr6,r28,3
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 3, ctx.xer);
	// bne cr6,0x82565348
	if (!ctx.cr6.eq) goto loc_82565348;
	// lwz r11,4412(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4412);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825654bc
	if (ctx.cr6.eq) goto loc_825654BC;
loc_82565348:
	// lwz r11,4360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4360);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825654bc
	if (ctx.cr6.eq) goto loc_825654BC;
	// lwz r11,1436(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1436);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825654bc
	if (!ctx.cr6.gt) goto loc_825654BC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825654bc
	if (ctx.cr6.eq) goto loc_825654BC;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825654bc
	if (!ctx.cr6.eq) goto loc_825654BC;
	// ld r10,4380(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 4380);
	// addi r11,r31,4348
	ctx.r11.s64 = ctx.r31.s64 + 4348;
	// lwz r9,4348(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4348);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// bne cr6,0x825653f0
	if (!ctx.cr6.eq) goto loc_825653F0;
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x825653f0
	if (ctx.cr6.eq) goto loc_825653F0;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x825653f0
	if (!ctx.cr6.eq) goto loc_825653F0;
loc_825653A8:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x825653a8
	if (!ctx.cr0.eq) goto loc_825653A8;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,15834
	ctx.r4.s64 = ctx.r11.s64 + 15834;
	// bl 0x8233a258
	ctx.lr = 0x825653D4;
	sub_8233A258(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c3a20
	ctx.lr = 0x825653E4;
	sub_829C3A20(ctx, base);
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lfs f0,984(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 984);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4352(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4352, temp.u32);
loc_825653F0:
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// beq cr6,0x82565460
	if (ctx.cr6.eq) goto loc_82565460;
	// cmpwi cr6,r28,3
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 3, ctx.xer);
	// bne cr6,0x825654bc
	if (!ctx.cr6.eq) goto loc_825654BC;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// addi r4,r11,22816
	ctx.r4.s64 = ctx.r11.s64 + 22816;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82565420;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825654bc
	if (!ctx.cr0.eq) goto loc_825654BC;
	// lis r10,-32170
	ctx.r10.s64 = -2108293120;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r10,r10,22816
	ctx.r10.s64 = ctx.r10.s64 + 22816;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,16540(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16540);
	ctx.f1.f64 = double(temp.f32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x825659c0
	ctx.lr = 0x82565458;
	sub_825659C0(ctx, base);
	// stw r29,4412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4412, ctx.r29.u32);
	// b 0x825654bc
	goto loc_825654BC;
loc_82565460:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// addi r4,r11,22832
	ctx.r4.s64 = ctx.r11.s64 + 22832;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82565480;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825654bc
	if (!ctx.cr0.eq) goto loc_825654BC;
	// lis r10,-32170
	ctx.r10.s64 = -2108293120;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r10,r10,22832
	ctx.r10.s64 = ctx.r10.s64 + 22832;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,16360(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16360);
	ctx.f1.f64 = double(temp.f32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x825659c0
	ctx.lr = 0x825654B8;
	sub_825659C0(ctx, base);
	// stw r29,4416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4416, ctx.r29.u32);
loc_825654BC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825654C8"))) PPC_WEAK_FUNC(sub_825654C8);
PPC_FUNC_IMPL(__imp__sub_825654C8) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,4376(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4376, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825654D8"))) PPC_WEAK_FUNC(sub_825654D8);
PPC_FUNC_IMPL(__imp__sub_825654D8) {
	PPC_FUNC_PROLOGUE();
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,4376(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4376, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825654E8"))) PPC_WEAK_FUNC(sub_825654E8);
PPC_FUNC_IMPL(__imp__sub_825654E8) {
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
	// lwz r11,4400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4400);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// lwz r11,4404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4404);
	// ble cr6,0x82565518
	if (!ctx.cr6.gt) goto loc_82565518;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x82565524
	goto loc_82565524;
loc_82565518:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82565528
	if (!ctx.cr6.gt) goto loc_82565528;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82565524:
	// stw r11,4404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4404, ctx.r11.u32);
loc_82565528:
	// stw r4,4408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4408, ctx.r4.u32);
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// addi r4,r11,21704
	ctx.r4.s64 = ctx.r11.s64 + 21704;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8256554C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,3
	ctx.r11.s64 = 3;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stw r11,4376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4376, ctx.r11.u32);
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,21720
	ctx.r11.s64 = ctx.r11.s64 + 21720;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,17688(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17688);
	ctx.f1.f64 = double(temp.f32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x825659c0
	ctx.lr = 0x82565584;
	sub_825659C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825655a8
	ctx.lr = 0x8256558C;
	sub_825655A8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825655A8"))) PPC_WEAK_FUNC(sub_825655A8);
PPC_FUNC_IMPL(__imp__sub_825655A8) {
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
	// lwz r11,4376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4376);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82565684
	if (!ctx.cr6.eq) goto loc_82565684;
	// lwa r11,4404(r31)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 4404));
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfd f12,17160(r10)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r10.u32 + 17160);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x825655f0
	if (!ctx.cr6.gt) goto loc_825655F0;
	// li r5,3
	ctx.r5.s64 = 3;
	// b 0x82565630
	goto loc_82565630;
loc_825655F0:
	// lwa r11,4400(r31)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 4400));
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,16368(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16368);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82565618
	if (ctx.cr6.gt) goto loc_82565618;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82565630
	goto loc_82565630;
loc_82565618:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8256562c
	if (!ctx.cr6.gt) goto loc_8256562C;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// li r5,1
	ctx.r5.s64 = 1;
	// ble cr6,0x82565630
	if (!ctx.cr6.gt) goto loc_82565630;
loc_8256562C:
	// li r5,2
	ctx.r5.s64 = 2;
loc_82565630:
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r6,4408(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4408);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82565940
	ctx.lr = 0x82565640;
	sub_82565940(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1016(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1016);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82565654;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32170
	ctx.r10.s64 = -2108293120;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,21928
	ctx.r10.s64 = ctx.r10.s64 + 21928;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// lfs f1,30996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30996);
	ctx.f1.f64 = double(temp.f32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x825659c0
	ctx.lr = 0x82565684;
	sub_825659C0(ctx, base);
loc_82565684:
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

__attribute__((alias("__imp__sub_82565698"))) PPC_WEAK_FUNC(sub_82565698);
PPC_FUNC_IMPL(__imp__sub_82565698) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x825656cc
	if (ctx.cr6.eq) goto loc_825656CC;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82565780
	ctx.lr = 0x825656C4;
	sub_82565780(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// b 0x825656d0
	goto loc_825656D0;
loc_825656CC:
	// li r6,0
	ctx.r6.s64 = 0;
loc_825656D0:
	// lwz r11,4376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4376);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82565728
	if (!ctx.cr6.eq) goto loc_82565728;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// beq cr6,0x825656ec
	if (ctx.cr6.eq) goto loc_825656EC;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// bne cr6,0x825656f4
	if (!ctx.cr6.eq) goto loc_825656F4;
loc_825656EC:
	// li r5,4
	ctx.r5.s64 = 4;
	// b 0x82565708
	goto loc_82565708;
loc_825656F4:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82565728
	if (!ctx.cr6.eq) goto loc_82565728;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82565728
	if (!ctx.cr6.eq) goto loc_82565728;
	// li r5,3
	ctx.r5.s64 = 3;
loc_82565708:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82565940
	ctx.lr = 0x82565714;
	sub_82565940(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1016(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1016);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82565728;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82565728:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82565740"))) PPC_WEAK_FUNC(sub_82565740);
PPC_FUNC_IMPL(__imp__sub_82565740) {
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
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r4,1312(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1312);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8256576c
	if (ctx.cr6.eq) goto loc_8256576C;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82565768;
	sub_829B9720(ctx, base);
	// bl 0x82409c40
	ctx.lr = 0x8256576C;
	sub_82409C40(ctx, base);
loc_8256576C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82565780"))) PPC_WEAK_FUNC(sub_82565780);
PPC_FUNC_IMPL(__imp__sub_82565780) {
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
	// bl 0x8239db68
	ctx.lr = 0x82565798;
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
	ctx.lr = 0x825657B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825657c0
	if (ctx.cr0.eq) goto loc_825657C0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82565814
	goto loc_82565814;
loc_825657C0:
	// bl 0x82392e08
	ctx.lr = 0x825657C4;
	sub_82392E08(ctx, base);
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
	ctx.lr = 0x825657DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825657ec
	if (ctx.cr0.eq) goto loc_825657EC;
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82565814
	goto loc_82565814;
loc_825657EC:
	// bl 0x8239c4e8
	ctx.lr = 0x825657F0;
	sub_8239C4E8(ctx, base);
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
	ctx.lr = 0x82565808;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r3,r11,0,30,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
loc_82565814:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82565828"))) PPC_WEAK_FUNC(sub_82565828);
PPC_FUNC_IMPL(__imp__sub_82565828) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82565830;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,4376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4376);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x825658b8
	if (ctx.cr6.lt) goto loc_825658B8;
	// beq cr6,0x825658ac
	if (ctx.cr6.eq) goto loc_825658AC;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82565904
	if (!ctx.cr6.lt) goto loc_82565904;
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// stw r29,4400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4400, ctx.r29.u32);
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,21720
	ctx.r4.s64 = ctx.r11.s64 + 21720;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82565878;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,4376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4376, ctx.r29.u32);
	// lis r10,-32170
	ctx.r10.s64 = -2108293120;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r10,r10,21704
	ctx.r10.s64 = ctx.r10.s64 + 21704;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lfs f1,-32532(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32532);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825659c0
	ctx.lr = 0x825658A8;
	sub_825659C0(ctx, base);
	// b 0x82565904
	goto loc_82565904;
loc_825658AC:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x825658fc
	goto loc_825658FC;
loc_825658B8:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bne cr6,0x825658c8
	if (!ctx.cr6.eq) goto loc_825658C8;
	// li r5,3
	ctx.r5.s64 = 3;
	// b 0x825658f8
	goto loc_825658F8;
loc_825658C8:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x825658d8
	if (!ctx.cr6.eq) goto loc_825658D8;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x825658f8
	goto loc_825658F8;
loc_825658D8:
	// ble cr6,0x825658ec
	if (!ctx.cr6.gt) goto loc_825658EC;
	// cmpwi cr6,r4,10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 10, ctx.xer);
	// bge cr6,0x825658f4
	if (!ctx.cr6.lt) goto loc_825658F4;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x825658f8
	goto loc_825658F8;
loc_825658EC:
	// cmpwi cr6,r4,10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 10, ctx.xer);
	// blt cr6,0x82565904
	if (ctx.cr6.lt) goto loc_82565904;
loc_825658F4:
	// li r5,2
	ctx.r5.s64 = 2;
loc_825658F8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_825658FC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82565940
	ctx.lr = 0x82565904;
	sub_82565940(ctx, base);
loc_82565904:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1016(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1016);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82565918;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82565920"))) PPC_WEAK_FUNC(sub_82565920);
PPC_FUNC_IMPL(__imp__sub_82565920) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,4412(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4412, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82565930"))) PPC_WEAK_FUNC(sub_82565930);
PPC_FUNC_IMPL(__imp__sub_82565930) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,4416(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4416, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82565940"))) PPC_WEAK_FUNC(sub_82565940);
PPC_FUNC_IMPL(__imp__sub_82565940) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,4348(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4348);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8256596c
	if (!ctx.cr6.eq) goto loc_8256596C;
	// lwz r11,4380(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4380);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82565984
	if (ctx.cr6.eq) goto loc_82565984;
loc_8256596C:
	// lwz r11,4348(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4348);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825659a8
	if (!ctx.cr6.eq) goto loc_825659A8;
	// lwz r11,4384(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4384);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x825659a8
	if (!ctx.cr6.eq) goto loc_825659A8;
loc_82565984:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r6,4368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4368, ctx.r6.u32);
	// lwz r11,1012(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1012);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8256599C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,4380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4380, ctx.r3.u32);
	// stw r11,4384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4384, ctx.r11.u32);
loc_825659A8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825659C0"))) PPC_WEAK_FUNC(sub_825659C0);
PPC_FUNC_IMPL(__imp__sub_825659C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x825659C8;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r29,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r29.u64);
	// lwz r4,168(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x829c80b8
	ctx.lr = 0x825659E8;
	sub_829C80B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82565a70
	if (!ctx.cr0.eq) goto loc_82565A70;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823ea650
	ctx.lr = 0x825659F8;
	sub_823EA650(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82565A0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82333900
	ctx.lr = 0x82565A18;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x82565a5c
	if (ctx.cr0.eq) goto loc_82565A5C;
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
	// b 0x82565a60
	goto loc_82565A60;
loc_82565A5C:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82565A60:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82410060
	ctx.lr = 0x82565A6C;
	sub_82410060(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82565A70:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82565A8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82565A98"))) PPC_WEAK_FUNC(sub_82565A98);
PPC_FUNC_IMPL(__imp__sub_82565A98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,8132
	ctx.r3.s64 = ctx.r11.s64 + 8132;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82565AA8"))) PPC_WEAK_FUNC(sub_82565AA8);
PPC_FUNC_IMPL(__imp__sub_82565AA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82565ae0
	if (ctx.cr6.eq) goto loc_82565AE0;
	// bl 0x82569060
	ctx.lr = 0x82565AD0;
	sub_82569060(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82565ae0
	if (!ctx.cr6.eq) goto loc_82565AE0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82565aec
	goto loc_82565AEC;
loc_82565AE0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82338a28
	ctx.lr = 0x82565AEC;
	sub_82338A28(ctx, base);
loc_82565AEC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82565B08"))) PPC_WEAK_FUNC(sub_82565B08);
PPC_FUNC_IMPL(__imp__sub_82565B08) {
	PPC_FUNC_PROLOGUE();
	// b 0x82569060
	sub_82569060(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82565B10"))) PPC_WEAK_FUNC(sub_82565B10);
PPC_FUNC_IMPL(__imp__sub_82565B10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,1440
	ctx.r3.s64 = 1440;
	// bl 0x82833108
	ctx.lr = 0x82565B30;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82565b84
	if (ctx.cr0.eq) goto loc_82565B84;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82338b88
	ctx.lr = 0x82565B44;
	sub_82338B88(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// addi r11,r11,8160
	ctx.r11.s64 = ctx.r11.s64 + 8160;
	// addi r10,r10,9168
	ctx.r10.s64 = ctx.r10.s64 + 9168;
	// addi r9,r9,9220
	ctx.r9.s64 = ctx.r9.s64 + 9220;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r4,r30,1412
	ctx.r4.s64 = ctx.r30.s64 + 1412;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r3,r31,1412
	ctx.r3.s64 = ctx.r31.s64 + 1412;
	// lwz r11,1408(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1408);
	// stw r11,1408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1408, ctx.r11.u32);
	// bl 0x82873b58
	ctx.lr = 0x82565B7C;
	sub_82873B58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82565b88
	goto loc_82565B88;
loc_82565B84:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82565B88:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82565BA0"))) PPC_WEAK_FUNC(sub_82565BA0);
PPC_FUNC_IMPL(__imp__sub_82565BA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82569060
	ctx.lr = 0x82565BC0;
	sub_82569060(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82565bd0
	if (!ctx.cr6.eq) goto loc_82565BD0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82565be8
	goto loc_82565BE8;
loc_82565BD0:
	// bl 0x82338750
	ctx.lr = 0x82565BD4;
	sub_82338750(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82565be8
	if (ctx.cr6.eq) goto loc_82565BE8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82338858
	ctx.lr = 0x82565BE8;
	sub_82338858(ctx, base);
loc_82565BE8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82565C00"))) PPC_WEAK_FUNC(sub_82565C00);
PPC_FUNC_IMPL(__imp__sub_82565C00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,1412
	ctx.r3.s64 = ctx.r31.s64 + 1412;
	// bl 0x8239d768
	ctx.lr = 0x82565C24;
	sub_8239D768(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829bc9e8
	ctx.lr = 0x82565C2C;
	sub_829BC9E8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82565c3c
	if (ctx.cr0.eq) goto loc_82565C3C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x82565C3C;
	sub_82332DB8(ctx, base);
loc_82565C3C:
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

__attribute__((alias("__imp__sub_82565C58"))) PPC_WEAK_FUNC(sub_82565C58);
PPC_FUNC_IMPL(__imp__sub_82565C58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82565C60;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x829bc540
	ctx.lr = 0x82565C6C;
	sub_829BC540(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r11,r11,9264
	ctx.r11.s64 = ctx.r11.s64 + 9264;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r10,10308
	ctx.r10.s64 = ctx.r10.s64 + 10308;
	// addi r9,r9,11456
	ctx.r9.s64 = ctx.r9.s64 + 11456;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// li r10,12
	ctx.r10.s64 = 12;
	// stw r11,1424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1424, ctx.r11.u32);
	// li r8,28
	ctx.r8.s64 = 28;
	// stw r30,1428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1428, ctx.r30.u32);
	// li r7,16
	ctx.r7.s64 = 16;
	// stw r30,1432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1432, ctx.r30.u32);
	// addi r29,r31,1420
	ctx.r29.s64 = ctx.r31.s64 + 1420;
	// stw r30,1436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1436, ctx.r30.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r30,1440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1440, ctx.r30.u32);
	// stw r30,1420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1420, ctx.r30.u32);
	// stw r11,1556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1556, ctx.r11.u32);
	// stw r30,1560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1560, ctx.r30.u32);
	// stw r30,1564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1564, ctx.r30.u32);
	// stw r30,1568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1568, ctx.r30.u32);
	// stw r30,1572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1572, ctx.r30.u32);
	// stw r30,1552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1552, ctx.r30.u32);
	// stw r11,1580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1580, ctx.r11.u32);
	// stw r30,1584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1584, ctx.r30.u32);
	// stw r30,1588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1588, ctx.r30.u32);
	// stw r30,1592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1592, ctx.r30.u32);
	// stw r30,1596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1596, ctx.r30.u32);
	// stw r30,1576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1576, ctx.r30.u32);
	// stw r11,1604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1604, ctx.r11.u32);
	// stw r30,1608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1608, ctx.r30.u32);
	// stw r30,1612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1612, ctx.r30.u32);
	// stw r30,1616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1616, ctx.r30.u32);
	// stw r30,1620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1620, ctx.r30.u32);
	// stw r30,1600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1600, ctx.r30.u32);
	// stw r10,1628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1628, ctx.r10.u32);
	// stw r30,1632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1632, ctx.r30.u32);
	// stw r30,1636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1636, ctx.r30.u32);
	// stw r30,1640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1640, ctx.r30.u32);
	// stw r30,1644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1644, ctx.r30.u32);
	// stw r30,1624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1624, ctx.r30.u32);
	// stw r10,1652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1652, ctx.r10.u32);
	// stw r30,1656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1656, ctx.r30.u32);
	// stw r30,1660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1660, ctx.r30.u32);
	// stw r30,1664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1664, ctx.r30.u32);
	// stw r30,1668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1668, ctx.r30.u32);
	// stw r30,1648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1648, ctx.r30.u32);
	// stw r10,1676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1676, ctx.r10.u32);
	// stw r30,1680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1680, ctx.r30.u32);
	// stw r30,1684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1684, ctx.r30.u32);
	// stw r30,1688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1688, ctx.r30.u32);
	// stw r30,1692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1692, ctx.r30.u32);
	// stw r30,1672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1672, ctx.r30.u32);
	// stw r11,1700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1700, ctx.r11.u32);
	// stw r30,1704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1704, ctx.r30.u32);
	// stw r30,1708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1708, ctx.r30.u32);
	// stw r30,1712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1712, ctx.r30.u32);
	// stw r30,1716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1716, ctx.r30.u32);
	// stw r30,1696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1696, ctx.r30.u32);
	// stw r10,1736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1736, ctx.r10.u32);
	// stw r30,1740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1740, ctx.r30.u32);
	// stw r30,1744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1744, ctx.r30.u32);
	// stw r30,1748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1748, ctx.r30.u32);
	// stw r30,1752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1752, ctx.r30.u32);
	// stw r30,1732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1732, ctx.r30.u32);
	// stw r8,1780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1780, ctx.r8.u32);
	// stw r30,1784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1784, ctx.r30.u32);
	// stw r30,1788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1788, ctx.r30.u32);
	// stw r30,1792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1792, ctx.r30.u32);
	// stw r30,1796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1796, ctx.r30.u32);
	// stw r30,1776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1776, ctx.r30.u32);
	// stw r7,1804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1804, ctx.r7.u32);
	// stw r30,1808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1808, ctx.r30.u32);
	// stw r30,1812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1812, ctx.r30.u32);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// stw r30,1816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1816, ctx.r30.u32);
	// stw r30,1820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1820, ctx.r30.u32);
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// stw r30,1800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1800, ctx.r30.u32);
	// addi r6,r8,-32488
	ctx.r6.s64 = ctx.r8.s64 + -32488;
	// stw r9,1828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1828, ctx.r9.u32);
	// lis r5,-31961
	ctx.r5.s64 = -2094596096;
	// stw r30,1832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1832, ctx.r30.u32);
	// lis r4,-32244
	ctx.r4.s64 = -2113142784;
	// stw r30,1836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1836, ctx.r30.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,1840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1840, ctx.r30.u32);
	// lfs f0,904(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,1844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1844, ctx.r30.u32);
	// lfs f13,-332(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -332);
	ctx.f13.f64 = double(temp.f32);
	// stw r30,1824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1824, ctx.r30.u32);
	// lfs f12,-32488(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -32488);
	ctx.f12.f64 = double(temp.f32);
	// stw r9,1868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1868, ctx.r9.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r30,1872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1872, ctx.r30.u32);
	// li r8,150
	ctx.r8.s64 = 150;
	// stw r30,1876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1876, ctx.r30.u32);
	// li r7,200
	ctx.r7.s64 = 200;
	// stw r30,1880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1880, ctx.r30.u32);
	// stw r30,1884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1884, ctx.r30.u32);
	// stw r30,1864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1864, ctx.r30.u32);
	// stw r11,1892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1892, ctx.r11.u32);
	// stw r30,1896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1896, ctx.r30.u32);
	// stw r30,1900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1900, ctx.r30.u32);
	// stw r30,1904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1904, ctx.r30.u32);
	// stw r30,1908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1908, ctx.r30.u32);
	// stw r30,1888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1888, ctx.r30.u32);
	// stw r11,1952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1952, ctx.r11.u32);
	// stw r30,1956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1956, ctx.r30.u32);
	// stw r30,1960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1960, ctx.r30.u32);
	// stw r30,1964(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1964, ctx.r30.u32);
	// stw r30,1968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1968, ctx.r30.u32);
	// stw r30,1948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1948, ctx.r30.u32);
	// stw r11,1976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1976, ctx.r11.u32);
	// stw r30,1980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1980, ctx.r30.u32);
	// stw r30,1984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1984, ctx.r30.u32);
	// stw r30,1988(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1988, ctx.r30.u32);
	// stw r30,1992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1992, ctx.r30.u32);
	// stw r30,1972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1972, ctx.r30.u32);
	// stw r11,2000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2000, ctx.r11.u32);
	// stw r30,2004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2004, ctx.r30.u32);
	// stw r30,2008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2008, ctx.r30.u32);
	// stw r30,2012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2012, ctx.r30.u32);
	// stw r30,2016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2016, ctx.r30.u32);
	// stw r30,1996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1996, ctx.r30.u32);
	// stw r11,2024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2024, ctx.r11.u32);
	// stw r30,2028(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2028, ctx.r30.u32);
	// stw r30,2032(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2032, ctx.r30.u32);
	// stw r30,2036(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2036, ctx.r30.u32);
	// stw r30,2040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2040, ctx.r30.u32);
	// stw r30,2020(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2020, ctx.r30.u32);
	// stfs f0,1936(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1936, temp.u32);
	// stfs f13,1464(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1464, temp.u32);
	// stw r10,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r10.u32);
	// stfs f0,1852(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1852, temp.u32);
	// stw r30,1488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1488, ctx.r30.u32);
	// lfs f0,-28788(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -28788);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 808, ctx.r30.u32);
	// lfs f13,20416(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20416);
	ctx.f13.f64 = double(temp.f32);
	// stw r30,840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 840, ctx.r30.u32);
	// stfs f12,1476(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1476, temp.u32);
	// stw r30,844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 844, ctx.r30.u32);
	// stfs f0,1468(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1468, temp.u32);
	// stw r30,1944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1944, ctx.r30.u32);
	// stfs f0,1472(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1472, temp.u32);
	// stw r30,1444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1444, ctx.r30.u32);
	// stfs f13,1860(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1860, temp.u32);
	// stw r30,1448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1448, ctx.r30.u32);
	// stw r30,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r30.u32);
	// stw r30,1940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1940, ctx.r30.u32);
	// stw r9,1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1456, ctx.r9.u32);
	// stw r30,1460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1460, ctx.r30.u32);
	// stw r30,1480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1480, ctx.r30.u32);
	// stw r30,1484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1484, ctx.r30.u32);
	// stw r30,1500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1500, ctx.r30.u32);
	// li r11,50
	ctx.r11.s64 = 50;
	// stw r30,1504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1504, ctx.r30.u32);
	// li r9,100
	ctx.r9.s64 = 100;
	// stw r30,1516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1516, ctx.r30.u32);
	// stw r30,1520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1520, ctx.r30.u32);
	// li r3,32
	ctx.r3.s64 = 32;
	// stw r30,1508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1508, ctx.r30.u32);
	// stw r30,1512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1512, ctx.r30.u32);
	// stw r30,1524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1524, ctx.r30.u32);
	// stw r10,1528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1528, ctx.r10.u32);
	// stw r30,1536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1536, ctx.r30.u32);
	// stw r30,1540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1540, ctx.r30.u32);
	// stw r8,1544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1544, ctx.r8.u32);
	// stw r7,1548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1548, ctx.r7.u32);
	// stw r30,1720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1720, ctx.r30.u32);
	// stw r30,1724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1724, ctx.r30.u32);
	// stw r11,1728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1728, ctx.r11.u32);
	// stw r30,1848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1848, ctx.r30.u32);
	// stw r9,1856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1856, ctx.r9.u32);
	// bl 0x82333900
	ctx.lr = 0x82565F3C;
	sub_82333900(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x82565f5c
	if (ctx.cr0.eq) goto loc_82565F5C;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r28,4
	ctx.r3.s64 = ctx.r28.s64 + 4;
	// addi r11,r11,15852
	ctx.r11.s64 = ctx.r11.s64 + 15852;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// bl 0x8312e7dc
	ctx.lr = 0x82565F58;
	sub_8312E7DC(ctx, base);
	// b 0x82565f60
	goto loc_82565F60;
loc_82565F5C:
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_82565F60:
	// stw r28,1412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1412, ctx.r28.u32);
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
	// beq cr6,0x82565f88
	if (ctx.cr6.eq) goto loc_82565F88;
	// stw r30,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332c38
	ctx.lr = 0x82565F88;
	sub_82332C38(ctx, base);
loc_82565F88:
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82833108
	ctx.lr = 0x82565F90;
	sub_82833108(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82565fb4
	if (ctx.cr0.eq) goto loc_82565FB4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82833180
	ctx.lr = 0x82565FA0;
	sub_82833180(ctx, base);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addi r10,r10,15480
	ctx.r10.s64 = ctx.r10.s64 + 15480;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// b 0x82565fb8
	goto loc_82565FB8;
loc_82565FB4:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82565FB8:
	// stw r11,1416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1416, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,1408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1408, ctx.r30.u32);
	// stw r30,1492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1492, ctx.r30.u32);
	// stw r30,1496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1496, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82565FD8"))) PPC_WEAK_FUNC(sub_82565FD8);
PPC_FUNC_IMPL(__imp__sub_82565FD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82565FE0;
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
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// addi r11,r11,9264
	ctx.r11.s64 = ctx.r11.s64 + 9264;
	// lwz r3,1412(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1412);
	// addi r10,r10,10308
	ctx.r10.s64 = ctx.r10.s64 + 10308;
	// addi r9,r9,11456
	ctx.r9.s64 = ctx.r9.s64 + 11456;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// beq cr6,0x8256602c
	if (ctx.cr6.eq) goto loc_8256602C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8256602C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8256602C:
	// lwz r3,1416(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1416);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8256604c
	if (ctx.cr6.eq) goto loc_8256604C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8256604C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8256604C:
	// addi r3,r31,2020
	ctx.r3.s64 = ctx.r31.s64 + 2020;
	// bl 0x8239d768
	ctx.lr = 0x82566054;
	sub_8239D768(ctx, base);
	// addi r3,r31,1996
	ctx.r3.s64 = ctx.r31.s64 + 1996;
	// bl 0x8239d768
	ctx.lr = 0x8256605C;
	sub_8239D768(ctx, base);
	// addi r3,r31,1972
	ctx.r3.s64 = ctx.r31.s64 + 1972;
	// bl 0x8239d768
	ctx.lr = 0x82566064;
	sub_8239D768(ctx, base);
	// addi r3,r31,1948
	ctx.r3.s64 = ctx.r31.s64 + 1948;
	// bl 0x8239d768
	ctx.lr = 0x8256606C;
	sub_8239D768(ctx, base);
	// addi r28,r31,1888
	ctx.r28.s64 = ctx.r31.s64 + 1888;
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r5,1904(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1904);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332ca8
	ctx.lr = 0x82566088;
	sub_82332CA8(ctx, base);
	// lwz r3,1900(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1900);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82566098
	if (ctx.cr6.eq) goto loc_82566098;
	// bl 0x82332db8
	ctx.lr = 0x82566098;
	sub_82332DB8(ctx, base);
loc_82566098:
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r31,1864
	ctx.r29.s64 = ctx.r31.s64 + 1864;
	// stw r30,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r30.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r30,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r30.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r30,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,1880(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1880);
	// bl 0x82332ca8
	ctx.lr = 0x825660C4;
	sub_82332CA8(ctx, base);
	// lwz r3,1876(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1876);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825660d4
	if (ctx.cr6.eq) goto loc_825660D4;
	// bl 0x82332db8
	ctx.lr = 0x825660D4;
	sub_82332DB8(ctx, base);
loc_825660D4:
	// stw r30,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r30.u32);
	// addi r3,r31,1824
	ctx.r3.s64 = ctx.r31.s64 + 1824;
	// stw r30,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r30.u32);
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
	// bl 0x8284aff8
	ctx.lr = 0x825660E8;
	sub_8284AFF8(ctx, base);
	// addi r29,r31,1800
	ctx.r29.s64 = ctx.r31.s64 + 1800;
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r5,1816(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// li r6,16
	ctx.r6.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332ca8
	ctx.lr = 0x82566104;
	sub_82332CA8(ctx, base);
	// lwz r3,1812(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82566114
	if (ctx.cr6.eq) goto loc_82566114;
	// bl 0x82332db8
	ctx.lr = 0x82566114;
	sub_82332DB8(ctx, base);
loc_82566114:
	// stw r30,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r30.u32);
	// addi r3,r31,1776
	ctx.r3.s64 = ctx.r31.s64 + 1776;
	// stw r30,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r30.u32);
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
	// bl 0x82886580
	ctx.lr = 0x82566128;
	sub_82886580(ctx, base);
	// addi r29,r31,1732
	ctx.r29.s64 = ctx.r31.s64 + 1732;
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r5,1748(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1748);
	// li r6,12
	ctx.r6.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332ca8
	ctx.lr = 0x82566144;
	sub_82332CA8(ctx, base);
	// lwz r3,1744(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1744);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82566154
	if (ctx.cr6.eq) goto loc_82566154;
	// bl 0x82332db8
	ctx.lr = 0x82566154;
	sub_82332DB8(ctx, base);
loc_82566154:
	// stw r30,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r30.u32);
	// addi r3,r31,1696
	ctx.r3.s64 = ctx.r31.s64 + 1696;
	// stw r30,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r30.u32);
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
	// bl 0x8239d768
	ctx.lr = 0x82566168;
	sub_8239D768(ctx, base);
	// addi r3,r31,1672
	ctx.r3.s64 = ctx.r31.s64 + 1672;
	// bl 0x82400f38
	ctx.lr = 0x82566170;
	sub_82400F38(ctx, base);
	// addi r3,r31,1648
	ctx.r3.s64 = ctx.r31.s64 + 1648;
	// bl 0x82400f38
	ctx.lr = 0x82566178;
	sub_82400F38(ctx, base);
	// addi r3,r31,1624
	ctx.r3.s64 = ctx.r31.s64 + 1624;
	// bl 0x82400f38
	ctx.lr = 0x82566180;
	sub_82400F38(ctx, base);
	// addi r3,r31,1600
	ctx.r3.s64 = ctx.r31.s64 + 1600;
	// bl 0x8239d768
	ctx.lr = 0x82566188;
	sub_8239D768(ctx, base);
	// addi r3,r31,1576
	ctx.r3.s64 = ctx.r31.s64 + 1576;
	// bl 0x8239d768
	ctx.lr = 0x82566190;
	sub_8239D768(ctx, base);
	// addi r3,r31,1552
	ctx.r3.s64 = ctx.r31.s64 + 1552;
	// bl 0x8239d768
	ctx.lr = 0x82566198;
	sub_8239D768(ctx, base);
	// addi r3,r31,1420
	ctx.r3.s64 = ctx.r31.s64 + 1420;
	// bl 0x8239d768
	ctx.lr = 0x825661A0;
	sub_8239D768(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829bc9e8
	ctx.lr = 0x825661A8;
	sub_829BC9E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825661B0"))) PPC_WEAK_FUNC(sub_825661B0);
PPC_FUNC_IMPL(__imp__sub_825661B0) {
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
	// bl 0x829bdc10
	ctx.lr = 0x825661C8;
	sub_829BDC10(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// addi r3,r11,336
	ctx.r3.s64 = ctx.r11.s64 + 336;
	// bl 0x82410060
	ctx.lr = 0x825661E0;
	sub_82410060(ctx, base);
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

__attribute__((alias("__imp__sub_825661F8"))) PPC_WEAK_FUNC(sub_825661F8);
PPC_FUNC_IMPL(__imp__sub_825661F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// addi r3,r11,336
	ctx.r3.s64 = ctx.r11.s64 + 336;
	// bl 0x824b99b0
	ctx.lr = 0x82566228;
	sub_824B99B0(ctx, base);
	// lwz r11,1572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1572);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r31,1552
	ctx.r3.s64 = ctx.r31.s64 + 1552;
	// stw r30,1568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1568, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82566250
	if (ctx.cr6.eq) goto loc_82566250;
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82332c38
	ctx.lr = 0x82566250;
	sub_82332C38(ctx, base);
loc_82566250:
	// lwz r11,1596(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1596);
	// addi r3,r31,1576
	ctx.r3.s64 = ctx.r31.s64 + 1576;
	// stw r30,1592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1592, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82566274
	if (ctx.cr6.eq) goto loc_82566274;
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82332c38
	ctx.lr = 0x82566274;
	sub_82332C38(ctx, base);
loc_82566274:
	// lwz r11,1620(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1620);
	// addi r3,r31,1600
	ctx.r3.s64 = ctx.r31.s64 + 1600;
	// stw r30,1616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1616, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82566298
	if (ctx.cr6.eq) goto loc_82566298;
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82332c38
	ctx.lr = 0x82566298;
	sub_82332C38(ctx, base);
loc_82566298:
	// lwz r11,1436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1436);
	// addic. r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x825662d4
	if (ctx.cr0.lt) goto loc_825662D4;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
loc_825662A8:
	// lwz r11,1432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1432);
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825662c8
	if (ctx.cr6.eq) goto loc_825662C8;
	// lwz r11,1608(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1608);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825662c8
	if (ctx.cr6.eq) goto loc_825662C8;
	// stw r30,1488(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1488, ctx.r30.u32);
loc_825662C8:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// bge 0x825662a8
	if (!ctx.cr0.lt) goto loc_825662A8;
loc_825662D4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829bd978
	ctx.lr = 0x825662DC;
	sub_829BD978(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825662F8"))) PPC_WEAK_FUNC(sub_825662F8);
PPC_FUNC_IMPL(__imp__sub_825662F8) {
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
	// bl 0x829bcbf0
	ctx.lr = 0x82566318;
	sub_829BCBF0(ctx, base);
	// lbz r11,140(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 140);
	// stw r11,1940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1940, ctx.r11.u32);
	// lbz r11,141(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 141);
	// stw r11,1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1456, ctx.r11.u32);
	// lfs f0,152(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1464(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1464, temp.u32);
	// lfs f0,156(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1468(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1468, temp.u32);
	// lfs f0,144(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1472(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1472, temp.u32);
	// lfs f0,148(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1476(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1476, temp.u32);
	// lwz r11,136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// stw r11,1480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1480, ctx.r11.u32);
	// lwz r11,136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// rlwinm r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// stw r11,1500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1500, ctx.r11.u32);
	// lwz r11,136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// rlwinm r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// stw r11,1504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1504, ctx.r11.u32);
	// lwz r11,136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// rlwinm r11,r11,24,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1;
	// stw r11,1516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1516, ctx.r11.u32);
	// lwz r11,136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// rlwinm r11,r11,23,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	// stw r11,1520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1520, ctx.r11.u32);
	// lwz r11,136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// rlwinm r11,r11,29,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// stw r11,1524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1524, ctx.r11.u32);
	// lwz r11,136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// rlwinm r11,r11,28,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1;
	// stw r11,1528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1528, ctx.r11.u32);
	// lwz r11,136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// rlwinm r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	// stw r11,1488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1488, ctx.r11.u32);
	// lwz r11,136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// rlwinm r11,r11,25,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1;
	// stw r11,1532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1532, ctx.r11.u32);
	// lwz r11,136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// rlwinm r11,r11,22,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x1;
	// stw r11,1932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1932, ctx.r11.u32);
	// lwz r11,136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// rlwinm r11,r11,21,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1;
	// stw r11,1508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1508, ctx.r11.u32);
	// lwz r11,136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// rlwinm r11,r11,20,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x1;
	// stw r11,1512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1512, ctx.r11.u32);
	// lwz r11,164(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// stw r11,1544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1544, ctx.r11.u32);
	// lwz r11,160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// stw r11,1548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1548, ctx.r11.u32);
	// lwz r11,184(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// stw r11,1728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1728, ctx.r11.u32);
	// lwz r11,192(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 192);
	// stw r11,1760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1760, ctx.r11.u32);
	// lwz r11,136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// rlwinm r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// stw r11,1768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1768, ctx.r11.u32);
	// lfs f0,200(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 200);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1772(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1772, temp.u32);
	// lwz r11,208(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// stw r11,1848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1848, ctx.r11.u32);
	// lwz r11,212(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	// stw r11,1856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1856, ctx.r11.u32);
	// lfs f0,204(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 204);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1860(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1860, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82566440"))) PPC_WEAK_FUNC(sub_82566440);
PPC_FUNC_IMPL(__imp__sub_82566440) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9ec
	ctx.lr = 0x82566448;
	__savegprlr_21(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x829bcd88
	ctx.lr = 0x8256645C;
	sub_829BCD88(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,7312
	ctx.r3.s64 = ctx.r11.s64 + 7312;
	// bl 0x82816528
	ctx.lr = 0x82566468;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82846e98
	ctx.lr = 0x8256647C;
	sub_82846E98(ctx, base);
	// lwz r11,220(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 220);
	// lwz r10,216(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 216);
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// add r29,r11,r24
	ctx.r29.u64 = ctx.r11.u64 + ctx.r24.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82566620
	if (!ctx.cr6.gt) goto loc_82566620;
	// addi r28,r22,1800
	ctx.r28.s64 = ctx.r22.s64 + 1800;
	// lis r25,-31949
	ctx.r25.s64 = -2093809664;
loc_825664A4:
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// bne cr6,0x8256650c
	if (!ctx.cr6.eq) goto loc_8256650C;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// lwz r11,13024(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13024);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x82411dc0
	ctx.lr = 0x825664CC;
	sub_82411DC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82566504
	if (ctx.cr0.eq) goto loc_82566504;
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82566504
	if (ctx.cr6.eq) goto loc_82566504;
	// bl 0x82333d20
	ctx.lr = 0x825664E4;
	sub_82333D20(ctx, base);
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
	ctx.lr = 0x825664FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82566574
	if (!ctx.cr0.eq) goto loc_82566574;
loc_82566504:
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// b 0x82566574
	goto loc_82566574;
loc_8256650C:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// bl 0x82846fb0
	ctx.lr = 0x8256651C;
	sub_82846FB0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8256653c
	if (ctx.cr6.eq) goto loc_8256653C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82566534;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82566540
	goto loc_82566540;
loc_8256653C:
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_82566540:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82566574
	if (ctx.cr6.eq) goto loc_82566574;
	// bl 0x82333d20
	ctx.lr = 0x8256654C;
	sub_82333D20(ctx, base);
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
	ctx.lr = 0x82566564;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82566570
	if (!ctx.cr0.eq) goto loc_82566570;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_82566570:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_82566574:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825665a4
	if (ctx.cr6.eq) goto loc_825665A4;
	// bl 0x823aeb88
	ctx.lr = 0x82566580;
	sub_823AEB88(ctx, base);
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
	ctx.lr = 0x82566598;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// bne 0x825665a8
	if (!ctx.cr0.eq) goto loc_825665A8;
loc_825665A4:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_825665A8:
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r8,12(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// bl 0x82332d50
	ctx.lr = 0x825665D8;
	sub_82332D50(ctx, base);
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8256660c
	if (ctx.cr0.eq) goto loc_8256660C;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
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
loc_8256660C:
	// lwz r11,216(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 216);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x825664a4
	if (ctx.cr6.lt) goto loc_825664A4;
loc_82566620:
	// lwz r11,1844(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 1844);
	// addi r30,r22,1824
	ctx.r30.s64 = ctx.r22.s64 + 1824;
	// stw r23,1840(r22)
	PPC_STORE_U32(ctx.r22.u32 + 1840, ctx.r23.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82566648
	if (ctx.cr6.eq) goto loc_82566648;
	// stw r23,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r23.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332c38
	ctx.lr = 0x82566648;
	sub_82332C38(ctx, base);
loc_82566648:
	// lwz r11,252(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 252);
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// lwz r10,248(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 248);
	// add r31,r11,r24
	ctx.r31.u64 = ctx.r11.u64 + ctx.r24.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x825666b0
	if (!ctx.cr6.gt) goto loc_825666B0;
loc_82566660:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x82332d50
	ctx.lr = 0x82566684;
	sub_82332D50(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8256669c
	if (ctx.cr0.eq) goto loc_8256669C;
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
loc_8256669C:
	// lwz r11,248(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 248);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82566660
	if (ctx.cr6.lt) goto loc_82566660;
loc_825666B0:
	// lwz r11,1692(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 1692);
	// addi r29,r22,1672
	ctx.r29.s64 = ctx.r22.s64 + 1672;
	// stw r23,1688(r22)
	PPC_STORE_U32(ctx.r22.u32 + 1688, ctx.r23.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825666d8
	if (ctx.cr6.eq) goto loc_825666D8;
	// stw r23,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r23.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332c38
	ctx.lr = 0x825666D8;
	sub_82332C38(ctx, base);
loc_825666D8:
	// lwz r11,228(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 228);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// lwz r10,224(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 224);
	// add r31,r11,r24
	ctx.r31.u64 = ctx.r11.u64 + ctx.r24.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82566728
	if (!ctx.cr6.gt) goto loc_82566728;
loc_825666F0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x82568d50
	ctx.lr = 0x82566714;
	sub_82568D50(ctx, base);
	// lwz r11,224(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 224);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x825666f0
	if (ctx.cr6.lt) goto loc_825666F0;
loc_82566728:
	// lwz r11,1940(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 1940);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82566764
	if (!ctx.cr6.eq) goto loc_82566764;
	// lwz r11,1932(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 1932);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82566764
	if (!ctx.cr6.eq) goto loc_82566764;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,8400
	ctx.r3.s64 = ctx.r11.s64 + 8400;
	// bl 0x82816528
	ctx.lr = 0x8256674C;
	sub_82816528(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r23,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r23.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82568d50
	ctx.lr = 0x82566764;
	sub_82568D50(ctx, base);
loc_82566764:
	// lwz r11,1668(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 1668);
	// addi r29,r22,1648
	ctx.r29.s64 = ctx.r22.s64 + 1648;
	// stw r23,1664(r22)
	PPC_STORE_U32(ctx.r22.u32 + 1664, ctx.r23.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8256678c
	if (ctx.cr6.eq) goto loc_8256678C;
	// stw r23,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r23.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332c38
	ctx.lr = 0x8256678C;
	sub_82332C38(ctx, base);
loc_8256678C:
	// lwz r11,236(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 236);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// lwz r10,232(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 232);
	// add r31,r11,r24
	ctx.r31.u64 = ctx.r11.u64 + ctx.r24.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x825667dc
	if (!ctx.cr6.gt) goto loc_825667DC;
loc_825667A4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x82568d50
	ctx.lr = 0x825667C8;
	sub_82568D50(ctx, base);
	// lwz r11,232(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 232);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x825667a4
	if (ctx.cr6.lt) goto loc_825667A4;
loc_825667DC:
	// lwz r11,1644(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 1644);
	// addi r29,r22,1624
	ctx.r29.s64 = ctx.r22.s64 + 1624;
	// stw r23,1640(r22)
	PPC_STORE_U32(ctx.r22.u32 + 1640, ctx.r23.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82566804
	if (ctx.cr6.eq) goto loc_82566804;
	// stw r23,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r23.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332c38
	ctx.lr = 0x82566804;
	sub_82332C38(ctx, base);
loc_82566804:
	// lwz r11,244(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 244);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// lwz r10,240(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 240);
	// add r31,r11,r24
	ctx.r31.u64 = ctx.r11.u64 + ctx.r24.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82566854
	if (!ctx.cr6.gt) goto loc_82566854;
loc_8256681C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x82568d50
	ctx.lr = 0x82566840;
	sub_82568D50(ctx, base);
	// lwz r11,240(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 240);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8256681c
	if (ctx.cr6.lt) goto loc_8256681C;
loc_82566854:
	// lwz r11,1908(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 1908);
	// addi r28,r22,1888
	ctx.r28.s64 = ctx.r22.s64 + 1888;
	// stw r23,1904(r22)
	PPC_STORE_U32(ctx.r22.u32 + 1904, ctx.r23.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8256687c
	if (ctx.cr6.eq) goto loc_8256687C;
	// stw r23,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r23.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332c38
	ctx.lr = 0x8256687C;
	sub_82332C38(ctx, base);
loc_8256687C:
	// lwz r11,172(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 172);
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// lwz r10,168(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 168);
	// add r29,r11,r24
	ctx.r29.u64 = ctx.r11.u64 + ctx.r24.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82566978
	if (!ctx.cr6.gt) goto loc_82566978;
	// addi r30,r22,1972
	ctx.r30.s64 = ctx.r22.s64 + 1972;
loc_82566898:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82846fb0
	ctx.lr = 0x825668A4;
	sub_82846FB0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825668B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823bc990
	ctx.lr = 0x825668BC;
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
	ctx.lr = 0x825668D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825668e0
	if (!ctx.cr0.eq) goto loc_825668E0;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_825668E0:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332d50
	ctx.lr = 0x825668F4;
	sub_82332D50(ctx, base);
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82566908
	if (ctx.cr0.eq) goto loc_82566908;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
loc_82566908:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82566920;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// ble cr6,0x82566958
	if (!ctx.cr6.gt) goto loc_82566958;
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
loc_8256693C:
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x82566964
	if (ctx.cr6.eq) goto loc_82566964;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8256693c
	if (ctx.cr6.lt) goto loc_8256693C;
loc_82566958:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82410060
	ctx.lr = 0x82566964;
	sub_82410060(ctx, base);
loc_82566964:
	// lwz r11,168(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 168);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82566898
	if (ctx.cr6.lt) goto loc_82566898;
loc_82566978:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r4,188(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 188);
	// bl 0x82846fb0
	ctx.lr = 0x82566984;
	sub_82846FB0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825669e0
	if (ctx.cr0.eq) goto loc_825669E0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8256699C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x825669cc
	if (ctx.cr0.eq) goto loc_825669CC;
	// bl 0x82569060
	ctx.lr = 0x825669A8;
	sub_82569060(ctx, base);
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
	ctx.lr = 0x825669C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// bne 0x825669d0
	if (!ctx.cr0.eq) goto loc_825669D0;
loc_825669CC:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_825669D0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825669e0
	if (ctx.cr6.eq) goto loc_825669E0;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// stw r11,1756(r22)
	PPC_STORE_U32(ctx.r22.u32 + 1756, ctx.r11.u32);
loc_825669E0:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r4,196(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 196);
	// bl 0x82846fb0
	ctx.lr = 0x825669EC;
	sub_82846FB0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82566a18
	if (ctx.cr0.eq) goto loc_82566A18;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82566A04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x824d4028
	ctx.lr = 0x82566A08;
	sub_824D4028(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82566a18
	if (ctx.cr0.eq) goto loc_82566A18;
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// stw r11,1764(r22)
	PPC_STORE_U32(ctx.r22.u32 + 1764, ctx.r11.u32);
loc_82566A18:
	// lwz r11,1904(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 1904);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82566a74
	if (!ctx.cr6.gt) goto loc_82566A74;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_82566A2C:
	// lwz r11,1900(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 1900);
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82566a60
	if (ctx.cr6.eq) goto loc_82566A60;
	// lwz r10,1940(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 1940);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r10,1456(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1456, ctx.r10.u32);
	// lwz r10,80(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 80);
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// stw r10,1664(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1664, ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82566A60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82566A60:
	// lwz r11,1904(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 1904);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82566a2c
	if (ctx.cr6.lt) goto loc_82566A2C;
loc_82566A74:
	// lwz r11,1816(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 1816);
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82566b20
	if (!ctx.cr6.gt) goto loc_82566B20;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
loc_82566A88:
	// lwz r11,1812(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 1812);
	// lwzx r6,r3,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82566b0c
	if (ctx.cr6.eq) goto loc_82566B0C;
	// lwz r11,1448(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1448);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82566b0c
	if (!ctx.cr6.gt) goto loc_82566B0C;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
loc_82566AAC:
	// lwz r11,1444(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1444);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// add r10,r5,r11
	ctx.r10.u64 = ctx.r5.u64 + ctx.r11.u64;
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82566af8
	if (!ctx.cr6.gt) goto loc_82566AF8;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
loc_82566AC8:
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r11,80(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 80);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r30,12(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82566ae4
	if (ctx.cr6.eq) goto loc_82566AE4;
	// stw r11,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r11.u32);
loc_82566AE4:
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,20
	ctx.r8.s64 = ctx.r8.s64 + 20;
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82566ac8
	if (ctx.cr6.lt) goto loc_82566AC8;
loc_82566AF8:
	// lwz r11,1448(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1448);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r5,r5,56
	ctx.r5.s64 = ctx.r5.s64 + 56;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82566aac
	if (ctx.cr6.lt) goto loc_82566AAC;
loc_82566B0C:
	// lwz r11,1816(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 1816);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82566a88
	if (ctx.cr6.lt) goto loc_82566A88;
loc_82566B20:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82567170
	ctx.lr = 0x82566B28;
	sub_82567170(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82a4ea3c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82566B30"))) PPC_WEAK_FUNC(sub_82566B30);
PPC_FUNC_IMPL(__imp__sub_82566B30) {
	PPC_FUNC_PROLOGUE();
	// b 0x825662f8
	sub_825662F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82566B38"))) PPC_WEAK_FUNC(sub_82566B38);
PPC_FUNC_IMPL(__imp__sub_82566B38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82566B40;
	__savegprlr_27(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82565c58
	ctx.lr = 0x82566B4C;
	sub_82565C58(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r11,r11,11480
	ctx.r11.s64 = ctx.r11.s64 + 11480;
	// addi r10,r10,12524
	ctx.r10.s64 = ctx.r10.s64 + 12524;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r9,r9,11456
	ctx.r9.s64 = ctx.r9.s64 + 11456;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,1484(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1484, ctx.r11.u32);
	// stw r9,396(r30)
	PPC_STORE_U32(ctx.r30.u32 + 396, ctx.r9.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r10,1456(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1456, ctx.r10.u32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r3,r10,-7052
	ctx.r3.s64 = ctx.r10.s64 + -7052;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// stw r31,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r31.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stw r31,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r31.u32);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// bl 0x82816528
	ctx.lr = 0x82566BDC;
	sub_82816528(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82410060
	ctx.lr = 0x82566BEC;
	sub_82410060(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-7232
	ctx.r3.s64 = ctx.r11.s64 + -7232;
	// bl 0x82816528
	ctx.lr = 0x82566BF8;
	sub_82816528(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82410060
	ctx.lr = 0x82566C08;
	sub_82410060(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-7208
	ctx.r3.s64 = ctx.r11.s64 + -7208;
	// bl 0x82816528
	ctx.lr = 0x82566C14;
	sub_82816528(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82410060
	ctx.lr = 0x82566C24;
	sub_82410060(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-7184
	ctx.r3.s64 = ctx.r11.s64 + -7184;
	// bl 0x82816528
	ctx.lr = 0x82566C30;
	sub_82816528(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82410060
	ctx.lr = 0x82566C40;
	sub_82410060(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-7156
	ctx.r3.s64 = ctx.r11.s64 + -7156;
	// bl 0x82816528
	ctx.lr = 0x82566C4C;
	sub_82816528(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82410060
	ctx.lr = 0x82566C5C;
	sub_82410060(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-7128
	ctx.r3.s64 = ctx.r11.s64 + -7128;
	// bl 0x82816528
	ctx.lr = 0x82566C68;
	sub_82816528(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82410060
	ctx.lr = 0x82566C78;
	sub_82410060(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-7104
	ctx.r3.s64 = ctx.r11.s64 + -7104;
	// bl 0x82816528
	ctx.lr = 0x82566C84;
	sub_82816528(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82410060
	ctx.lr = 0x82566C94;
	sub_82410060(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-7076
	ctx.r3.s64 = ctx.r11.s64 + -7076;
	// bl 0x82816528
	ctx.lr = 0x82566CA0;
	sub_82816528(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82410060
	ctx.lr = 0x82566CB0;
	sub_82410060(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,8192
	ctx.r3.s64 = ctx.r11.s64 + 8192;
	// bl 0x82816528
	ctx.lr = 0x82566CBC;
	sub_82816528(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82410060
	ctx.lr = 0x82566CCC;
	sub_82410060(ctx, base);
	// lwz r29,112(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x82566d20
	if (!ctx.cr6.gt) goto loc_82566D20;
	// lwz r28,108(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r27,r30,1672
	ctx.r27.s64 = ctx.r30.s64 + 1672;
loc_82566CE0:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82332d50
	ctx.lr = 0x82566CF4;
	sub_82332D50(ctx, base);
	// lwz r11,1684(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1684);
	// mulli r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 * 12;
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r10,2
	ctx.r10.s64 = 2;
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// bne 0x82566ce0
	if (!ctx.cr0.eq) goto loc_82566CE0;
loc_82566D20:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8239d768
	ctx.lr = 0x82566D28;
	sub_8239D768(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8239d768
	ctx.lr = 0x82566D30;
	sub_8239D768(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8239d768
	ctx.lr = 0x82566D38;
	sub_8239D768(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82566D48"))) PPC_WEAK_FUNC(sub_82566D48);
PPC_FUNC_IMPL(__imp__sub_82566D48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x82566D50;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x825676a0
	ctx.lr = 0x82566D5C;
	sub_825676A0(ctx, base);
	// lwz r11,1436(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1436);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82566e98
	if (!ctx.cr6.eq) goto loc_82566E98;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
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
	ctx.lr = 0x82566D94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,76(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82566db0
	if (!ctx.cr6.gt) goto loc_82566DB0;
	// lwz r11,84(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 84);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,84(r28)
	PPC_STORE_U32(ctx.r28.u32 + 84, ctx.r11.u32);
	// b 0x82566e84
	goto loc_82566E84;
loc_82566DB0:
	// lwz r11,68(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82566e50
	if (!ctx.cr6.eq) goto loc_82566E50;
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
	ctx.lr = 0x82566DD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,964(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 964);
	// addi r29,r26,948
	ctx.r29.s64 = ctx.r26.s64 + 948;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82566e30
	if (!ctx.cr6.gt) goto loc_82566E30;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82566DEC:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82566e1c
	if (!ctx.cr6.eq) goto loc_82566E1C;
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
	ctx.lr = 0x82566E14;
	sub_82332CA8(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
loc_82566E1C:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82566dec
	if (ctx.cr6.lt) goto loc_82566DEC;
loc_82566E30:
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
	ctx.lr = 0x82566E50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82566E50:
	// lwz r11,84(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82566e84
	if (!ctx.cr0.eq) goto loc_82566E84;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82566E70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82566e84
	if (ctx.cr0.eq) goto loc_82566E84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r26,924
	ctx.r3.s64 = ctx.r26.s64 + 924;
	// bl 0x82410060
	ctx.lr = 0x82566E84;
	sub_82410060(ctx, base);
loc_82566E84:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82566E98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82566E98:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82566EA8"))) PPC_WEAK_FUNC(sub_82566EA8);
PPC_FUNC_IMPL(__imp__sub_82566EA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r31,1624
	ctx.r5.s64 = ctx.r31.s64 + 1624;
	// addi r4,r31,1552
	ctx.r4.s64 = ctx.r31.s64 + 1552;
	// bl 0x8256fb30
	ctx.lr = 0x82566EC8;
	sub_8256FB30(ctx, base);
	// addi r5,r31,1648
	ctx.r5.s64 = ctx.r31.s64 + 1648;
	// addi r4,r31,1576
	ctx.r4.s64 = ctx.r31.s64 + 1576;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256fb30
	ctx.lr = 0x82566ED8;
	sub_8256FB30(ctx, base);
	// addi r5,r31,1672
	ctx.r5.s64 = ctx.r31.s64 + 1672;
	// addi r4,r31,1600
	ctx.r4.s64 = ctx.r31.s64 + 1600;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256fb30
	ctx.lr = 0x82566EE8;
	sub_8256FB30(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82566F00"))) PPC_WEAK_FUNC(sub_82566F00);
PPC_FUNC_IMPL(__imp__sub_82566F00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82566F08;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f12,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f31,f12
	ctx.cr6.compare(ctx.f31.f64, ctx.f12.f64);
	// ble cr6,0x82566fdc
	if (!ctx.cr6.gt) goto loc_82566FDC;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f0,1936(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1936);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-27300(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27300);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82566f48
	if (!ctx.cr6.lt) goto loc_82566F48;
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f0,1936(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1936, temp.u32);
	// b 0x82566f74
	goto loc_82566F74;
loc_82566F48:
	// stfs f12,1936(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1936, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82567888
	ctx.lr = 0x82566F54;
	sub_82567888(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82566f74
	if (!ctx.cr0.eq) goto loc_82566F74;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82567170
	ctx.lr = 0x82566F64;
	sub_82567170(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x82566f74
	if (!ctx.cr0.gt) goto loc_82566F74;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82569ed8
	ctx.lr = 0x82566F74;
	sub_82569ED8(ctx, base);
loc_82566F74:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82567920
	ctx.lr = 0x82566F80;
	sub_82567920(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82569c78
	ctx.lr = 0x82566F8C;
	sub_82569C78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8256fcc0
	ctx.lr = 0x82566F98;
	sub_8256FCC0(ctx, base);
	// lwz r11,1712(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1712);
	// addic. r30,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r30.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82566fd0
	if (ctx.cr0.lt) goto loc_82566FD0;
	// rlwinm r29,r30,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
loc_82566FA8:
	// lwz r11,1708(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1708);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1020(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1020);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82566FC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
	// bge 0x82566fa8
	if (!ctx.cr0.lt) goto loc_82566FA8;
loc_82566FD0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8256f830
	ctx.lr = 0x82566FDC;
	sub_8256F830(ctx, base);
loc_82566FDC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82566FE8"))) PPC_WEAK_FUNC(sub_82566FE8);
PPC_FUNC_IMPL(__imp__sub_82566FE8) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82567014
	if (ctx.cr6.eq) goto loc_82567014;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,520(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 520);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82567010;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82567018
	goto loc_82567018;
loc_82567014:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82567018:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8256703c
	if (ctx.cr6.eq) goto loc_8256703C;
	// lwz r11,2112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8256703c
	if (!ctx.cr6.gt) goto loc_8256703C;
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82567040
	if (ctx.cr0.eq) goto loc_82567040;
loc_8256703C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82567040:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82567050"))) PPC_WEAK_FUNC(sub_82567050);
PPC_FUNC_IMPL(__imp__sub_82567050) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82567058;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x825670e4
	if (ctx.cr6.eq) goto loc_825670E4;
	// lwz r29,1412(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1412);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8256708C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,1436(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1436);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x825670d0
	if (!ctx.cr6.gt) goto loc_825670D0;
	// lwz r9,1432(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1432);
loc_825670A0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// cmplw cr6,r8,r28
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x825670cc
	if (ctx.cr6.eq) goto loc_825670CC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x825670a0
	if (ctx.cr6.lt) goto loc_825670A0;
	// b 0x825670d0
	goto loc_825670D0;
loc_825670CC:
	// li r27,1
	ctx.r27.s64 = 1;
loc_825670D0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825670E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825670E4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825670F0"))) PPC_WEAK_FUNC(sub_825670F0);
PPC_FUNC_IMPL(__imp__sub_825670F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x825670F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r30,1412(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1412);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8256711C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1432);
	// rlwinm r29,r29,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r4,r29,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// bl 0x82566fe8
	ctx.lr = 0x82567134;
	sub_82566FE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82567164
	if (ctx.cr0.eq) goto loc_82567164;
	// lwz r11,1432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1432);
	// lwzx r31,r29,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
loc_82567144:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82567158;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
loc_82567164:
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x82567144
	goto loc_82567144;
}

__attribute__((alias("__imp__sub_82567170"))) PPC_WEAK_FUNC(sub_82567170);
PPC_FUNC_IMPL(__imp__sub_82567170) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82567178;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lwz r10,304(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82567224
	if (!ctx.cr6.gt) goto loc_82567224;
	// li r28,0
	ctx.r28.s64 = 0;
loc_8256719C:
	// lwz r10,300(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// lwzx r31,r10,r28
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82567210
	if (ctx.cr6.eq) goto loc_82567210;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825671C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8256720c
	if (ctx.cr0.eq) goto loc_8256720C;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82566fe8
	ctx.lr = 0x825671D8;
	sub_82566FE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8256720c
	if (ctx.cr0.eq) goto loc_8256720C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824defd8
	ctx.lr = 0x825671E8;
	sub_824DEFD8(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8256720c
	if (!ctx.cr6.eq) goto loc_8256720C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1008(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1008);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8256720C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8256720C:
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
loc_82567210:
	// lwz r10,304(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r27,r10
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8256719c
	if (ctx.cr6.lt) goto loc_8256719C;
loc_82567224:
	// lwz r10,1848(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1848);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x825672b0
	if (!ctx.cr6.eq) goto loc_825672B0;
	// lwz r11,1904(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1904);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825672a0
	if (ctx.cr6.eq) goto loc_825672A0;
	// li r7,0
	ctx.r7.s64 = 0;
	// ble cr6,0x825672b0
	if (!ctx.cr6.gt) goto loc_825672B0;
	// lwz r9,1900(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1900);
loc_82567248:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,1616(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1616);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8256727c
	if (!ctx.cr6.gt) goto loc_8256727C;
	// lwz r11,1612(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1612);
loc_82567260:
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82567270
	if (ctx.cr6.eq) goto loc_82567270;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_82567270:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 + 44;
	// bne 0x82567260
	if (!ctx.cr0.eq) goto loc_82567260;
loc_8256727C:
	// lwz r11,1848(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1848);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r11,1848(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1848, ctx.r11.u32);
	// lwz r11,1904(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1904);
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82567248
	if (ctx.cr6.lt) goto loc_82567248;
	// b 0x825672b0
	goto loc_825672B0;
loc_825672A0:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x825672b0
	if (!ctx.cr6.eq) goto loc_825672B0;
	// lwz r11,1436(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1436);
	// stw r11,1848(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1848, ctx.r11.u32);
loc_825672B0:
	// lwz r3,1848(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1848);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825672C0"))) PPC_WEAK_FUNC(sub_825672C0);
PPC_FUNC_IMPL(__imp__sub_825672C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x825672C8;
	__savegprlr_25(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// lwz r30,1412(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1412);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825672F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1436);
	// addi r26,r31,1420
	ctx.r26.s64 = ctx.r31.s64 + 1420;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82567324
	if (!ctx.cr6.gt) goto loc_82567324;
	// lwz r9,12(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
loc_82567308:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r8,r28
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82567374
	if (ctx.cr6.eq) goto loc_82567374;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82567308
	if (ctx.cr6.lt) goto loc_82567308;
loc_82567324:
	// li r29,-1
	ctx.r29.s64 = -1;
loc_82567328:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8256733C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// beq cr6,0x8256737c
	if (ctx.cr6.eq) goto loc_8256737C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x829c62f0
	ctx.lr = 0x82567350;
	sub_829C62F0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829c62f0
	ctx.lr = 0x8256735C;
	sub_829C62F0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x82567364;
	sub_82333960(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82333960
	ctx.lr = 0x8256736C;
	sub_82333960(ctx, base);
	// li r25,-1
	ctx.r25.s64 = -1;
	// b 0x82567694
	goto loc_82567694;
loc_82567374:
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// b 0x82567328
	goto loc_82567328;
loc_8256737C:
	// lwz r30,1608(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1608);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8256740c
	if (ctx.cr6.eq) goto loc_8256740C;
	// lwz r11,1416(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1416);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,1488(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1488, ctx.r11.u32);
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x829bd3a8
	ctx.lr = 0x8256739C;
	sub_829BD3A8(ctx, base);
	// lwz r29,1412(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1412);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825673B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,80(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// lwz r11,1964(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1964);
	// addi r3,r31,1948
	ctx.r3.s64 = ctx.r31.s64 + 1948;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// ble cr6,0x825673f0
	if (!ctx.cr6.gt) goto loc_825673F0;
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
loc_825673D4:
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x825673f8
	if (ctx.cr6.eq) goto loc_825673F8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x825673d4
	if (ctx.cr6.lt) goto loc_825673D4;
loc_825673F0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x825673F8;
	sub_82410060(ctx, base);
loc_825673F8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8256740C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8256740C:
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// cntlzw r11,r4
	ctx.r11.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r4,4264(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4264, ctx.r4.u32);
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stw r11,4260(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4260, ctx.r11.u32);
	// bl 0x829bd3a8
	ctx.lr = 0x8256742C;
	sub_829BD3A8(ctx, base);
	// lwz r11,4268(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4268);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82567440
	if (!ctx.cr6.eq) goto loc_82567440;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,4268(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4268, ctx.r11.u32);
loc_82567440:
	// lwz r11,1524(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1524);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825674d0
	if (ctx.cr6.eq) goto loc_825674D0;
	// lwz r3,1608(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1608);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82567470
	if (ctx.cr6.eq) goto loc_82567470;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,552(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 552);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82567468;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x82567474
	goto loc_82567474;
loc_82567470:
	// li r27,0
	ctx.r27.s64 = 0;
loc_82567474:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x825674d0
	if (ctx.cr6.eq) goto loc_825674D0;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// addi r4,r11,808
	ctx.r4.s64 = ctx.r11.s64 + 808;
	// bl 0x82873b58
	ctx.lr = 0x82567490;
	sub_82873B58(ctx, base);
	// lwz r29,112(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x825674c8
	if (!ctx.cr6.gt) goto loc_825674C8;
	// lwz r30,108(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
loc_825674A0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,1412(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1412);
	// bl 0x82333a20
	ctx.lr = 0x825674AC;
	sub_82333A20(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x825674bc
	if (ctx.cr0.eq) goto loc_825674BC;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x824ccf20
	ctx.lr = 0x825674BC;
	sub_824CCF20(ctx, base);
loc_825674BC:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x825674a0
	if (!ctx.cr0.eq) goto loc_825674A0;
loc_825674C8:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8239d768
	ctx.lr = 0x825674D0;
	sub_8239D768(ctx, base);
loc_825674D0:
	// lwz r11,1528(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1528);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825674e8
	if (!ctx.cr6.eq) goto loc_825674E8;
	// lwz r11,1456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x825674f4
	if (!ctx.cr6.eq) goto loc_825674F4;
loc_825674E8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82568230
	ctx.lr = 0x825674F4;
	sub_82568230(ctx, base);
loc_825674F4:
	// lwz r11,1488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1488);
	// lwz r3,1608(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1608);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,1808(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1808, ctx.r11.u32);
	// beq cr6,0x82567518
	if (ctx.cr6.eq) goto loc_82567518;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1184(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1184);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82567518;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82567518:
	// lwz r11,1940(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1940);
	// lfs f0,1820(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 1820);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1824(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 1824);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,1692(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1692, ctx.r11.u32);
	// lwz r11,1456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8256754c
	if (!ctx.cr6.eq) goto loc_8256754C;
	// lfs f12,1476(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1476);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f13,24000(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24000);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// b 0x82567584
	goto loc_82567584;
loc_8256754C:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82567574
	if (!ctx.cr6.eq) goto loc_82567574;
	// lwz r11,1460(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1460);
	// lfs f13,1476(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1476);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8256756c
	if (!ctx.cr6.eq) goto loc_8256756C;
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// b 0x82567580
	goto loc_82567580;
loc_8256756C:
	// fmuls f0,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// b 0x82567580
	goto loc_82567580;
loc_82567574:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82567584
	if (!ctx.cr6.eq) goto loc_82567584;
	// lfs f0,2480(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 2480);
	ctx.f0.f64 = double(temp.f32);
loc_82567580:
	// lfs f13,2484(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 2484);
	ctx.f13.f64 = double(temp.f32);
loc_82567584:
	// stfs f0,1820(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 1820, temp.u32);
	// stfs f13,1824(r28)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r28.u32 + 1824, temp.u32);
	// lwz r3,1412(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1412);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825675A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823327e0
	ctx.lr = 0x825675B8;
	sub_823327E0(ctx, base);
	// lwz r10,12(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// rlwinm r11,r25,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825675cc
	if (ctx.cr0.eq) goto loc_825675CC;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
loc_825675CC:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,4256(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4256);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256f430
	ctx.lr = 0x825675DC;
	sub_8256F430(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,2304(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2304);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825675F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,2112(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82567668
	if (!ctx.cr6.gt) goto loc_82567668;
	// lwz r11,84(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82567668
	if (!ctx.cr0.eq) goto loc_82567668;
	// lwz r11,1904(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1904);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82567668
	if (!ctx.cr6.gt) goto loc_82567668;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82567620:
	// lwz r11,1900(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1900);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwzx r29,r30,r11
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8258c350
	ctx.lr = 0x82567634;
	sub_8258C350(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82567654
	if (!ctx.cr0.eq) goto loc_82567654;
	// lwz r11,1904(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1904);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82567620
	if (ctx.cr6.lt) goto loc_82567620;
	// b 0x82567668
	goto loc_82567668;
loc_82567654:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82567668
	if (ctx.cr6.eq) goto loc_82567668;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8258c4b8
	ctx.lr = 0x82567668;
	sub_8258C4B8(ctx, base);
loc_82567668:
	// lwz r10,1436(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1436);
	// lwz r11,1848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1848);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82567680
	if (!ctx.cr6.lt) goto loc_82567680;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1848, ctx.r11.u32);
loc_82567680:
	// lwz r3,1412(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1412);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82567694;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82567694:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825676A0"))) PPC_WEAK_FUNC(sub_825676A0);
PPC_FUNC_IMPL(__imp__sub_825676A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x825676A8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// lwz r24,1412(r28)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1412);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825676D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r30,-1
	ctx.r30.s64 = -1;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82567868
	if (ctx.cr6.eq) goto loc_82567868;
	// lwz r9,1436(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1436);
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r27,r28,1420
	ctx.r27.s64 = ctx.r28.s64 + 1420;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82567714
	if (!ctx.cr6.gt) goto loc_82567714;
	// lwz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
loc_825676F8:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r29
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82567718
	if (ctx.cr6.eq) goto loc_82567718;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x825676f8
	if (ctx.cr6.lt) goto loc_825676F8;
loc_82567714:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_82567718:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82567868
	if (ctx.cr6.eq) goto loc_82567868;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r4,1536(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1536);
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82567734;
	sub_829B9720(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82567744
	if (ctx.cr0.eq) goto loc_82567744;
	// bl 0x824395b8
	ctx.lr = 0x82567740;
	sub_824395B8(ctx, base);
	// b 0x82567748
	goto loc_82567748;
loc_82567744:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_82567748:
	// cmplw cr6,r29,r3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82567768
	if (!ctx.cr6.eq) goto loc_82567768;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// stw r26,1536(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1536, ctx.r26.u32);
	// beq cr6,0x82567768
	if (ctx.cr6.eq) goto loc_82567768;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82567ad0
	ctx.lr = 0x82567768;
	sub_82567AD0(ctx, base);
loc_82567768:
	// lwz r3,4276(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4276);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825677b8
	if (ctx.cr6.eq) goto loc_825677B8;
	// lwz r9,1904(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1904);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x825677a4
	if (!ctx.cr6.gt) goto loc_825677A4;
	// lwz r10,1900(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1900);
loc_82567788:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x825677a8
	if (ctx.cr6.eq) goto loc_825677A8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82567788
	if (ctx.cr6.lt) goto loc_82567788;
loc_825677A4:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_825677A8:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x825677b8
	if (ctx.cr6.eq) goto loc_825677B8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8258c6e0
	ctx.lr = 0x825677B8;
	sub_8258C6E0(ctx, base);
loc_825677B8:
	// lwz r3,4280(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4280);
	// stw r26,4276(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4276, ctx.r26.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825677d0
	if (ctx.cr6.eq) goto loc_825677D0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82570c28
	ctx.lr = 0x825677D0;
	sub_82570C28(ctx, base);
loc_825677D0:
	// lwz r31,1608(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1608);
	// stw r26,4264(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4264, ctx.r26.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r26,4260(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4260, ctx.r26.u32);
	// beq cr6,0x825677e8
	if (ctx.cr6.eq) goto loc_825677E8;
	// stw r26,1488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1488, ctx.r26.u32);
loc_825677E8:
	// lwz r10,16(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82567818
	if (!ctx.cr6.gt) goto loc_82567818;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
loc_825677FC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r29
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82567818
	if (ctx.cr6.eq) goto loc_82567818;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x825677fc
	if (ctx.cr6.lt) goto loc_825677FC;
loc_82567818:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82332ca8
	ctx.lr = 0x82567830;
	sub_82332CA8(ctx, base);
	// lwz r11,4256(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4256);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// neg r4,r11
	ctx.r4.s64 = -ctx.r11.s64;
	// bl 0x8256f430
	ctx.lr = 0x82567844;
	sub_8256F430(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82567854
	if (ctx.cr6.eq) goto loc_82567854;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// b 0x82567858
	goto loc_82567858;
loc_82567854:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82567858:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r28,1948
	ctx.r3.s64 = ctx.r28.s64 + 1948;
	// bl 0x8254f1a8
	ctx.lr = 0x82567868;
	sub_8254F1A8(ctx, base);
loc_82567868:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8256787C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82567888"))) PPC_WEAK_FUNC(sub_82567888);
PPC_FUNC_IMPL(__imp__sub_82567888) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82567890;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r29,1412(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1412);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825678B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1436);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825678fc
	if (!ctx.cr6.gt) goto loc_825678FC;
	// li r30,0
	ctx.r30.s64 = 0;
loc_825678C8:
	// lwz r11,1432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1432);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x82566fe8
	ctx.lr = 0x825678DC;
	sub_82566FE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825678e8
	if (ctx.cr0.eq) goto loc_825678E8;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
loc_825678E8:
	// lwz r11,1436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1436);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x825678c8
	if (ctx.cr6.lt) goto loc_825678C8;
loc_825678FC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82567910;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82567920"))) PPC_WEAK_FUNC(sub_82567920);
PPC_FUNC_IMPL(__imp__sub_82567920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82567928;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r27,1412(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1412);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82567948;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1436);
	// addic. r29,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r29.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82567a0c
	if (ctx.cr0.lt) goto loc_82567A0C;
	// rlwinm r28,r29,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
loc_82567958:
	// lwz r11,1432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1432);
	// lwzx r30,r28,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82567984
	if (!ctx.cr6.eq) goto loc_82567984;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,1420
	ctx.r3.s64 = ctx.r31.s64 + 1420;
	// bl 0x82332ca8
	ctx.lr = 0x82567980;
	sub_82332CA8(ctx, base);
	// b 0x82567a00
	goto loc_82567A00;
loc_82567984:
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825679b0
	if (ctx.cr0.eq) goto loc_825679B0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1036);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825679AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82567a00
	goto loc_82567A00;
loc_825679B0:
	// lwz r11,2112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82567a00
	if (!ctx.cr6.gt) goto loc_82567A00;
	// lwz r3,1608(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1608);
	// bl 0x82414510
	ctx.lr = 0x825679C4;
	sub_82414510(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825679e0
	if (ctx.cr0.eq) goto loc_825679E0;
	// lwz r11,1544(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1544);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825679e0
	if (ctx.cr6.eq) goto loc_825679E0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82569bd0
	ctx.lr = 0x825679E0;
	sub_82569BD0(ctx, base);
loc_825679E0:
	// lwz r11,1456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,4272(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4272, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1040(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1040);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82567A00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82567A00:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r28,r28,-4
	ctx.r28.s64 = ctx.r28.s64 + -4;
	// bge 0x82567958
	if (!ctx.cr0.lt) goto loc_82567958;
loc_82567A0C:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82567A20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82567A28"))) PPC_WEAK_FUNC(sub_82567A28);
PPC_FUNC_IMPL(__imp__sub_82567A28) {
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
	// beq cr6,0x82567abc
	if (ctx.cr6.eq) goto loc_82567ABC;
	// lwz r11,5316(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 5316);
	// addi r3,r31,2020
	ctx.r3.s64 = ctx.r31.s64 + 2020;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82567a9c
	if (ctx.cr6.eq) goto loc_82567A9C;
	// lwz r8,80(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,2036(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2036);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// ble cr6,0x82567a8c
	if (!ctx.cr6.gt) goto loc_82567A8C;
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
loc_82567A70:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x82567a94
	if (ctx.cr6.eq) goto loc_82567A94;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82567a70
	if (ctx.cr6.lt) goto loc_82567A70;
loc_82567A8C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x82567A94;
	sub_82410060(ctx, base);
loc_82567A94:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82567ab8
	goto loc_82567AB8;
loc_82567A9C:
	// lwz r11,80(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8254f1a8
	ctx.lr = 0x82567AAC;
	sub_8254F1A8(ctx, base);
	// lwz r11,2036(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2036);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82567abc
	if (!ctx.cr6.eq) goto loc_82567ABC;
loc_82567AB8:
	// stw r11,1944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1944, ctx.r11.u32);
loc_82567ABC:
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

__attribute__((alias("__imp__sub_82567AD0"))) PPC_WEAK_FUNC(sub_82567AD0);
PPC_FUNC_IMPL(__imp__sub_82567AD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82567AD8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lwz r27,1412(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1412);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82567AFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1436(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1436);
	// addic. r29,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r29.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82567b5c
	if (ctx.cr0.lt) goto loc_82567B5C;
	// rlwinm r28,r29,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
loc_82567B0C:
	// lwz r11,1432(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1432);
	// lwzx r31,r11,r28
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x82567b50
	if (ctx.cr6.eq) goto loc_82567B50;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82566fe8
	ctx.lr = 0x82567B2C;
	sub_82566FE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82567b50
	if (ctx.cr0.eq) goto loc_82567B50;
	// lwz r3,1608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82567b50
	if (ctx.cr6.eq) goto loc_82567B50;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,552(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 552);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82567B50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82567B50:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r28,r28,-4
	ctx.r28.s64 = ctx.r28.s64 + -4;
	// bge 0x82567b0c
	if (!ctx.cr0.lt) goto loc_82567B0C;
loc_82567B5C:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82567B70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82567B78"))) PPC_WEAK_FUNC(sub_82567B78);
PPC_FUNC_IMPL(__imp__sub_82567B78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82567B80;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82567cb4
	if (ctx.cr6.eq) goto loc_82567CB4;
	// lwz r3,1412(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1412);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82567BA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1880(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1880);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82567bf4
	if (!ctx.cr6.gt) goto loc_82567BF4;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82567BBC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r27,1876(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1876);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82567BD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwzx r11,r28,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r27.u32);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82567c70
	if (ctx.cr6.eq) goto loc_82567C70;
	// lwz r11,1880(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1880);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82567bbc
	if (ctx.cr6.lt) goto loc_82567BBC;
loc_82567BF4:
	// addi r3,r31,1864
	ctx.r3.s64 = ctx.r31.s64 + 1864;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82332d50
	ctx.lr = 0x82567C08;
	sub_82332D50(ctx, base);
	// lwz r11,1876(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1876);
	// rlwinm r30,r3,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82a455d0
	ctx.lr = 0x82567C20;
	sub_82A455D0(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r29,1876(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1876);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82567C38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stwx r3,r29,r30
	PPC_STORE_U32(ctx.r29.u32 + ctx.r30.u32, ctx.r3.u32);
	// lwz r11,1876(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1876);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r3,1412(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1412);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82567C68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82567cb8
	goto loc_82567CB8;
loc_82567C70:
	// lwz r11,1876(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1876);
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r3,1412(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1412);
	// lwz r11,1876(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1876);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82567CAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82567cb8
	goto loc_82567CB8;
loc_82567CB4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82567CB8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82567CC0"))) PPC_WEAK_FUNC(sub_82567CC0);
PPC_FUNC_IMPL(__imp__sub_82567CC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x82567CC8;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82567cfc
	if (ctx.cr6.eq) goto loc_82567CFC;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82567CF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x82567d00
	goto loc_82567D00;
loc_82567CFC:
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
loc_82567D00:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82567de8
	if (ctx.cr6.eq) goto loc_82567DE8;
	// lwz r11,1436(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1436);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82567de8
	if (!ctx.cr6.gt) goto loc_82567DE8;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_82567D1C:
	// lwz r11,1432(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1432);
	// lwzx r31,r11,r30
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplw cr6,r31,r25
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x82567dd4
	if (ctx.cr6.eq) goto loc_82567DD4;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82566fe8
	ctx.lr = 0x82567D3C;
	sub_82566FE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82567dd4
	if (ctx.cr0.eq) goto loc_82567DD4;
	// lwz r3,1608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82567d68
	if (ctx.cr6.eq) goto loc_82567D68;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,552(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 552);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82567D60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82567d6c
	goto loc_82567D6C;
loc_82567D68:
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_82567D6C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82567dd4
	if (ctx.cr6.eq) goto loc_82567DD4;
	// lwz r11,2112(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82567dd4
	if (!ctx.cr6.gt) goto loc_82567DD4;
	// lwz r11,84(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82567dd4
	if (!ctx.cr0.eq) goto loc_82567DD4;
	// lwz r3,1484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1484);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82567DB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,1788
	ctx.r3.s64 = ctx.r31.s64 + 1788;
	// bl 0x82516c70
	ctx.lr = 0x82567DC0;
	sub_82516C70(ctx, base);
	// lwz r3,1484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1484);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82567DD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82567DD4:
	// lwz r11,1436(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1436);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82567d1c
	if (ctx.cr6.lt) goto loc_82567D1C;
loc_82567DE8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82567DF0"))) PPC_WEAK_FUNC(sub_82567DF0);
PPC_FUNC_IMPL(__imp__sub_82567DF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x82567DF8;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82567e30
	if (ctx.cr6.eq) goto loc_82567E30;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82567E28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// b 0x82567e34
	goto loc_82567E34;
loc_82567E30:
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
loc_82567E34:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82567f7c
	if (ctx.cr6.eq) goto loc_82567F7C;
	// lwz r11,1436(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1436);
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82567f7c
	if (!ctx.cr6.gt) goto loc_82567F7C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// lfs f31,-32516(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32516);
	ctx.f31.f64 = double(temp.f32);
loc_82567E58:
	// lwz r11,1432(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1432);
	// lwzx r31,r11,r29
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82567f68
	if (ctx.cr6.eq) goto loc_82567F68;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82566fe8
	ctx.lr = 0x82567E78;
	sub_82566FE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82567f68
	if (ctx.cr0.eq) goto loc_82567F68;
	// lwz r3,1608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82567f68
	if (ctx.cr6.eq) goto loc_82567F68;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,552(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 552);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82567E9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82567f68
	if (ctx.cr0.eq) goto loc_82567F68;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2076(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2076);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82567EB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82567f08
	if (ctx.cr0.eq) goto loc_82567F08;
	// lfs f13,624(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,624(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 624);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,628(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 628);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f11,620(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,620(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 620);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f11,1820(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1820);
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
	// ble cr6,0x82567f08
	if (!ctx.cr6.gt) goto loc_82567F08;
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f0,1820(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1820, temp.u32);
loc_82567F08:
	// lwz r11,2112(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 2112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82567f68
	if (!ctx.cr6.gt) goto loc_82567F68;
	// lwz r11,84(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82567f68
	if (!ctx.cr0.eq) goto loc_82567F68;
	// lwz r3,1484(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1484);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r24.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82567F48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,1788
	ctx.r3.s64 = ctx.r30.s64 + 1788;
	// bl 0x82516c70
	ctx.lr = 0x82567F54;
	sub_82516C70(ctx, base);
	// lwz r3,1484(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1484);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82567F68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82567F68:
	// lwz r11,1436(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1436);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82567e58
	if (ctx.cr6.lt) goto loc_82567E58;
loc_82567F7C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82567F88"))) PPC_WEAK_FUNC(sub_82567F88);
PPC_FUNC_IMPL(__imp__sub_82567F88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82567F90;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r3,1412(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1412);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82567FB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1436);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82568028
	if (!ctx.cr6.gt) goto loc_82568028;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82567FC4:
	// lwz r11,1432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1432);
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82568014
	if (ctx.cr6.eq) goto loc_82568014;
	// lwz r10,1808(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1808);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82568014
	if (!ctx.cr6.eq) goto loc_82568014;
	// lwz r3,1608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1608);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82568000
	if (ctx.cr6.eq) goto loc_82568000;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,552(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 552);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82567FFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82568004
	goto loc_82568004;
loc_82568000:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82568004:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82568014
	if (ctx.cr6.eq) goto loc_82568014;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x824ccf20
	ctx.lr = 0x82568014;
	sub_824CCF20(ctx, base);
loc_82568014:
	// lwz r11,1436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1436);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82567fc4
	if (ctx.cr6.lt) goto loc_82567FC4;
loc_82568028:
	// lwz r3,1412(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1412);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8256803C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82568048"))) PPC_WEAK_FUNC(sub_82568048);
PPC_FUNC_IMPL(__imp__sub_82568048) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x82568050;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82568084
	if (ctx.cr6.eq) goto loc_82568084;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8256807C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// b 0x82568088
	goto loc_82568088;
loc_82568084:
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
loc_82568088:
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82568224
	if (ctx.cr6.eq) goto loc_82568224;
	// lwz r3,1412(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1412);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825680A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,2012(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2012);
	// lwz r8,80(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 80);
	// addi r3,r28,1996
	ctx.r3.s64 = ctx.r28.s64 + 1996;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x825680e0
	if (!ctx.cr6.gt) goto loc_825680E0;
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
loc_825680C4:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x825680e4
	if (ctx.cr6.eq) goto loc_825680E4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x825680c4
	if (ctx.cr6.lt) goto loc_825680C4;
loc_825680E0:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_825680E4:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82568210
	if (!ctx.cr6.eq) goto loc_82568210;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x825680F8;
	sub_82410060(ctx, base);
	// li r25,1
	ctx.r25.s64 = 1;
	// lwz r31,1408(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1408);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82568204
	if (ctx.cr6.eq) goto loc_82568204;
	// lwz r11,5784(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 5784);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x825681d4
	if (!ctx.cr6.eq) goto loc_825681D4;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8256812c
	if (ctx.cr6.eq) goto loc_8256812C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82565780
	ctx.lr = 0x82568124;
	sub_82565780(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// b 0x82568130
	goto loc_82568130;
loc_8256812C:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
loc_82568130:
	// lwz r11,4376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4376);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x825681ac
	if (ctx.cr6.lt) goto loc_825681AC;
	// beq cr6,0x825681a0
	if (ctx.cr6.eq) goto loc_825681A0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x825681bc
	if (!ctx.cr6.lt) goto loc_825681BC;
	// stw r29,4400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4400, ctx.r29.u32);
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// addi r4,r11,21720
	ctx.r4.s64 = ctx.r11.s64 + 21720;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8256816C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,4376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4376, ctx.r29.u32);
	// lis r10,-32170
	ctx.r10.s64 = -2108293120;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r10,r10,21704
	ctx.r10.s64 = ctx.r10.s64 + 21704;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lfs f1,-32532(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32532);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825659c0
	ctx.lr = 0x8256819C;
	sub_825659C0(ctx, base);
	// b 0x825681bc
	goto loc_825681BC;
loc_825681A0:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x825681b4
	goto loc_825681B4;
loc_825681AC:
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
loc_825681B4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82565940
	ctx.lr = 0x825681BC;
	sub_82565940(ctx, base);
loc_825681BC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1016(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1016);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825681D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82568204
	goto loc_82568204;
loc_825681D4:
	// lwz r30,2012(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2012);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x825681f0
	if (ctx.cr6.eq) goto loc_825681F0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82565780
	ctx.lr = 0x825681E8;
	sub_82565780(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// b 0x825681f4
	goto loc_825681F4;
loc_825681F0:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
loc_825681F4:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82565828
	ctx.lr = 0x82568204;
	sub_82565828(ctx, base);
loc_82568204:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82567f88
	ctx.lr = 0x82568210;
	sub_82567F88(ctx, base);
loc_82568210:
	// lwz r3,1412(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1412);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82568224;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82568224:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82568230"))) PPC_WEAK_FUNC(sub_82568230);
PPC_FUNC_IMPL(__imp__sub_82568230) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x82568238;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82568384
	if (ctx.cr6.eq) goto loc_82568384;
	// lwz r3,1608(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1608);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82568270
	if (ctx.cr6.eq) goto loc_82568270;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,552(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 552);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82568268;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// b 0x82568274
	goto loc_82568274;
loc_82568270:
	// mr r24,r28
	ctx.r24.u64 = ctx.r28.u64;
loc_82568274:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82568384
	if (ctx.cr6.eq) goto loc_82568384;
	// lwz r26,1412(r25)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1412);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82568294;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1436(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1436);
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82568370
	if (!ctx.cr6.gt) goto loc_82568370;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_825682A8:
	// lwz r11,1432(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1432);
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8256835c
	if (ctx.cr6.eq) goto loc_8256835C;
	// lwz r3,1608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1608);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825682d8
	if (ctx.cr6.eq) goto loc_825682D8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,552(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 552);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825682D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x825682dc
	goto loc_825682DC;
loc_825682D8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_825682DC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8256835c
	if (ctx.cr6.eq) goto loc_8256835C;
	// li r11,84
	ctx.r11.s64 = 84;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// bl 0x824cf958
	ctx.lr = 0x82568308;
	sub_824CF958(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82568354
	if (!ctx.cr6.gt) goto loc_82568354;
	// lwz r31,92(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_8256831C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82568348
	if (ctx.cr6.eq) goto loc_82568348;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82568338;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x82568348
	if (ctx.cr0.eq) goto loc_82568348;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x824ccf20
	ctx.lr = 0x82568348;
	sub_824CCF20(ctx, base);
loc_82568348:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,84
	ctx.r31.s64 = ctx.r31.s64 + 84;
	// bne 0x8256831c
	if (!ctx.cr0.eq) goto loc_8256831C;
loc_82568354:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823ff140
	ctx.lr = 0x8256835C;
	sub_823FF140(ctx, base);
loc_8256835C:
	// lwz r11,1436(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1436);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x825682a8
	if (ctx.cr6.lt) goto loc_825682A8;
loc_82568370:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82568384;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82568384:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82568390"))) PPC_WEAK_FUNC(sub_82568390);
PPC_FUNC_IMPL(__imp__sub_82568390) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f0
	ctx.lr = 0x82568398;
	__savegprlr_22(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x829bd588
	ctx.lr = 0x825683A8;
	sub_829BD588(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82568764
	if (ctx.cr6.eq) goto loc_82568764;
	// lwz r8,80(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 80);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r10,1964(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 1964);
	// addi r25,r23,1948
	ctx.r25.s64 = ctx.r23.s64 + 1948;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// ble cr6,0x825683f0
	if (!ctx.cr6.gt) goto loc_825683F0;
	// lwz r9,12(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
loc_825683D4:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x825683f4
	if (ctx.cr6.eq) goto loc_825683F4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x825683d4
	if (ctx.cr6.lt) goto loc_825683D4;
loc_825683F0:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_825683F4:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8256849c
	if (ctx.cr6.eq) goto loc_8256849C;
	// bl 0x823ea258
	ctx.lr = 0x82568400;
	sub_823EA258(ctx, base);
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
	ctx.lr = 0x82568418;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82568424
	if (!ctx.cr0.eq) goto loc_82568424;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_82568424:
	// lwz r29,1416(r23)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r23.u32 + 1416);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82568454
	if (ctx.cr6.eq) goto loc_82568454;
	// bl 0x82568ec8
	ctx.lr = 0x82568434;
	sub_82568EC8(ctx, base);
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
	ctx.lr = 0x8256844C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82568458
	if (!ctx.cr0.eq) goto loc_82568458;
loc_82568454:
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
loc_82568458:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82568494
	if (ctx.cr6.eq) goto loc_82568494;
	// lwz r3,1412(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1412);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82568494
	if (ctx.cr6.eq) goto loc_82568494;
	// bl 0x824395b8
	ctx.lr = 0x82568470;
	sub_824395B8(ctx, base);
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8256eda8
	ctx.lr = 0x82568494;
	sub_8256EDA8(ctx, base);
loc_82568494:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// b 0x82568654
	goto loc_82568654;
loc_8256849C:
	// lwz r9,1988(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 1988);
	// addi r22,r23,1972
	ctx.r22.s64 = ctx.r23.s64 + 1972;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x825684d0
	if (!ctx.cr6.gt) goto loc_825684D0;
	// lwz r10,12(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 12);
loc_825684B4:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x825684d4
	if (ctx.cr6.eq) goto loc_825684D4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x825684b4
	if (ctx.cr6.lt) goto loc_825684B4;
loc_825684D0:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_825684D4:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82568660
	if (ctx.cr6.eq) goto loc_82568660;
	// bl 0x823bc990
	ctx.lr = 0x825684E0;
	sub_823BC990(ctx, base);
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
	ctx.lr = 0x825684F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82568504
	if (!ctx.cr0.eq) goto loc_82568504;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_82568504:
	// lwz r9,1904(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 1904);
	// addi r27,r23,1888
	ctx.r27.s64 = ctx.r23.s64 + 1888;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82568538
	if (!ctx.cr6.gt) goto loc_82568538;
	// lwz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
loc_8256851C:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r28
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8256853c
	if (ctx.cr6.eq) goto loc_8256853C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8256851c
	if (ctx.cr6.lt) goto loc_8256851C;
loc_82568538:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_8256853C:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82568650
	if (ctx.cr6.eq) goto loc_82568650;
	// lwz r24,1412(r23)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r23.u32 + 1412);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8256855C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1436(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 1436);
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825685e8
	if (!ctx.cr6.gt) goto loc_825685E8;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
loc_82568570:
	// lwz r11,1432(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 1432);
	// lwzx r29,r26,r11
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x825685d4
	if (ctx.cr6.eq) goto loc_825685D4;
	// lwz r3,4276(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4276);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825685d0
	if (ctx.cr6.eq) goto loc_825685D0;
	// lwz r9,16(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x825685bc
	if (!ctx.cr6.gt) goto loc_825685BC;
	// lwz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
loc_825685A0:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x825685c0
	if (ctx.cr6.eq) goto loc_825685C0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x825685a0
	if (ctx.cr6.lt) goto loc_825685A0;
loc_825685BC:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_825685C0:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x825685d0
	if (ctx.cr6.eq) goto loc_825685D0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8258c6e0
	ctx.lr = 0x825685D0;
	sub_8258C6E0(ctx, base);
loc_825685D0:
	// stw r31,4276(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4276, ctx.r31.u32);
loc_825685D4:
	// lwz r11,1436(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 1436);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82568570
	if (ctx.cr6.lt) goto loc_82568570;
loc_825685E8:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8256863c
	if (!ctx.cr6.gt) goto loc_8256863C;
loc_825685F8:
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82568628
	if (!ctx.cr6.eq) goto loc_82568628;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82332ca8
	ctx.lr = 0x82568620;
	sub_82332CA8(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
loc_82568628:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x825685f8
	if (ctx.cr6.lt) goto loc_825685F8;
loc_8256863C:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82568650;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82568650:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
loc_82568654:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8254f1a8
	ctx.lr = 0x8256865C;
	sub_8254F1A8(ctx, base);
	// b 0x82568764
	goto loc_82568764;
loc_82568660:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82333a20
	ctx.lr = 0x82568668;
	sub_82333A20(ctx, base);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq 0x82568764
	if (ctx.cr0.eq) goto loc_82568764;
	// lwz r9,1436(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 1436);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x825686a0
	if (!ctx.cr6.gt) goto loc_825686A0;
	// lwz r10,1432(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 1432);
loc_82568684:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r26
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x825686a4
	if (ctx.cr6.eq) goto loc_825686A4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82568684
	if (ctx.cr6.lt) goto loc_82568684;
loc_825686A0:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_825686A4:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82568764
	if (ctx.cr6.eq) goto loc_82568764;
	// lwz r27,1412(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + 1412);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825686C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,1608(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1608);
	// bl 0x82409c40
	ctx.lr = 0x825686CC;
	sub_82409C40(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x8256873c
	if (ctx.cr0.eq) goto loc_8256873C;
	// lwz r29,1416(r23)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r23.u32 + 1416);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82568708
	if (ctx.cr6.eq) goto loc_82568708;
	// bl 0x82568ec8
	ctx.lr = 0x825686E4;
	sub_82568EC8(ctx, base);
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
	ctx.lr = 0x825686FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bne 0x8256870c
	if (!ctx.cr0.eq) goto loc_8256870C;
loc_82568708:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8256870C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82568734
	if (ctx.cr6.eq) goto loc_82568734;
	// stw r26,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r26.u32);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8256eda8
	ctx.lr = 0x82568734;
	sub_8256EDA8(ctx, base);
loc_82568734:
	// lwz r11,80(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 80);
	// b 0x82568740
	goto loc_82568740;
loc_8256873C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82568740:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8254f1a8
	ctx.lr = 0x82568750;
	sub_8254F1A8(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82568764;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82568764:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82a4ea40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82568770"))) PPC_WEAK_FUNC(sub_82568770);
PPC_FUNC_IMPL(__imp__sub_82568770) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x82568778;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r6,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r6.u64);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// std r7,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r7.u64);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// std r8,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r8.u64);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// std r9,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r9.u64);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// std r10,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r10.u64);
	// li r27,1
	ctx.r27.s64 = 1;
	// bl 0x82333a20
	ctx.lr = 0x825687A8;
	sub_82333A20(ctx, base);
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,220(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x825687C0;
	sub_829B9720(ctx, base);
	// bl 0x82333a20
	ctx.lr = 0x825687C4;
	sub_82333A20(ctx, base);
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,1316(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1316);
	// bl 0x82409be0
	ctx.lr = 0x825687D4;
	sub_82409BE0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r25,9
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 9, ctx.xer);
	// bgt cr6,0x825689e0
	if (ctx.cr6.gt) goto loc_825689E0;
	// beq cr6,0x825689b4
	if (ctx.cr6.eq) goto loc_825689B4;
	// cmpwi cr6,r25,3
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 3, ctx.xer);
	// beq cr6,0x825688fc
	if (ctx.cr6.eq) goto loc_825688FC;
	// cmpwi cr6,r25,4
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 4, ctx.xer);
	// beq cr6,0x825688dc
	if (ctx.cr6.eq) goto loc_825688DC;
	// cmpwi cr6,r25,5
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 5, ctx.xer);
	// beq cr6,0x82568860
	if (ctx.cr6.eq) goto loc_82568860;
	// cmpwi cr6,r25,6
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 6, ctx.xer);
	// bne cr6,0x82568ac8
	if (!ctx.cr6.eq) goto loc_82568AC8;
	// lwz r31,1408(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1408);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82568ac8
	if (ctx.cr6.eq) goto loc_82568AC8;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82568828
	if (ctx.cr6.eq) goto loc_82568828;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82565780
	ctx.lr = 0x82568820;
	sub_82565780(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// b 0x8256882c
	goto loc_8256882C;
loc_82568828:
	// li r6,0
	ctx.r6.s64 = 0;
loc_8256882C:
	// lwz r11,4376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4376);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82568ac8
	if (!ctx.cr6.eq) goto loc_82568AC8;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82565940
	ctx.lr = 0x82568848;
	sub_82565940(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1016(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1016);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8256885C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82568ac8
	goto loc_82568AC8;
loc_82568860:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82567df0
	ctx.lr = 0x8256886C;
	sub_82567DF0(ctx, base);
	// lwz r31,1408(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1408);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825688c4
	if (ctx.cr6.eq) goto loc_825688C4;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82568890
	if (ctx.cr6.eq) goto loc_82568890;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82565780
	ctx.lr = 0x82568888;
	sub_82565780(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// b 0x82568894
	goto loc_82568894;
loc_82568890:
	// li r6,0
	ctx.r6.s64 = 0;
loc_82568894:
	// lwz r11,4376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4376);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x825688c4
	if (!ctx.cr6.eq) goto loc_825688C4;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82565940
	ctx.lr = 0x825688B0;
	sub_82565940(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1016(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1016);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825688C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825688C4:
	// lwz r11,1456(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1456);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x82568ac8
	if (ctx.cr6.gt) goto loc_82568AC8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82569b60
	ctx.lr = 0x825688D8;
	sub_82569B60(ctx, base);
	// b 0x82568ac8
	goto loc_82568AC8;
loc_825688DC:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82568048
	ctx.lr = 0x825688EC;
	sub_82568048(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82569bd0
	ctx.lr = 0x825688F8;
	sub_82569BD0(ctx, base);
	// b 0x82568ac0
	goto loc_82568AC0;
loc_825688FC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82567b78
	ctx.lr = 0x82568908;
	sub_82567B78(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1036);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82568924;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r31,1408(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1408);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82568988
	if (ctx.cr6.eq) goto loc_82568988;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82568948
	if (ctx.cr6.eq) goto loc_82568948;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82565780
	ctx.lr = 0x82568940;
	sub_82565780(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// b 0x8256894c
	goto loc_8256894C;
loc_82568948:
	// li r6,0
	ctx.r6.s64 = 0;
loc_8256894C:
	// lwz r11,4376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4376);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82568988
	if (!ctx.cr6.eq) goto loc_82568988;
	// lwz r11,4400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4400);
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,4400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4400, ctx.r11.u32);
	// bl 0x82565940
	ctx.lr = 0x82568974;
	sub_82565940(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1016(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1016);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82568988;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82568988:
	// lwz r11,1940(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1940);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82568ac8
	if (!ctx.cr6.eq) goto loc_82568AC8;
	// li r4,119
	ctx.r4.s64 = 119;
loc_82568998:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825689B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82568ac8
	goto loc_82568AC8;
loc_825689B4:
	// lwz r3,1408(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1408);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825689cc
	if (ctx.cr6.eq) goto loc_825689CC;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r4,236(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// bl 0x82565698
	ctx.lr = 0x825689CC;
	sub_82565698(ctx, base);
loc_825689CC:
	// lwz r11,1940(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1940);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82568ac8
	if (!ctx.cr6.eq) goto loc_82568AC8;
	// li r4,117
	ctx.r4.s64 = 117;
	// b 0x82568998
	goto loc_82568998;
loc_825689E0:
	// cmpwi cr6,r25,10
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 10, ctx.xer);
	// beq cr6,0x82568a30
	if (ctx.cr6.eq) goto loc_82568A30;
	// cmpwi cr6,r25,11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 11, ctx.xer);
	// beq cr6,0x82568a1c
	if (ctx.cr6.eq) goto loc_82568A1C;
	// cmpwi cr6,r25,16
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 16, ctx.xer);
	// bne cr6,0x82568ac8
	if (!ctx.cr6.eq) goto loc_82568AC8;
	// lwz r3,1408(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1408);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82568ac8
	if (ctx.cr6.eq) goto loc_82568AC8;
	// lwz r4,236(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82568ac8
	if (!ctx.cr6.gt) goto loc_82568AC8;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x82565698
	ctx.lr = 0x82568A18;
	sub_82565698(ctx, base);
	// b 0x82568ac8
	goto loc_82568AC8;
loc_82568A1C:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82567cc0
	ctx.lr = 0x82568A2C;
	sub_82567CC0(ctx, base);
	// b 0x825688c4
	goto loc_825688C4;
loc_82568A30:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82568aa8
	if (!ctx.cr6.eq) goto loc_82568AA8;
	// lwz r11,216(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82568a50
	if (ctx.cr6.eq) goto loc_82568A50;
	// lwz r6,80(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x82568a54
	goto loc_82568A54;
loc_82568A50:
	// li r6,0
	ctx.r6.s64 = 0;
loc_82568A54:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82568aa8
	if (ctx.cr6.eq) goto loc_82568AA8;
	// lwz r7,1436(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1436);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82568aa8
	if (!ctx.cr6.gt) goto loc_82568AA8;
	// lwz r10,1432(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1432);
loc_82568A70:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82568a84
	if (ctx.cr6.eq) goto loc_82568A84;
	// lwz r11,80(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 80);
	// b 0x82568a88
	goto loc_82568A88;
loc_82568A84:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82568A88:
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x82568aa4
	if (ctx.cr6.eq) goto loc_82568AA4;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82568a70
	if (ctx.cr6.lt) goto loc_82568A70;
	// b 0x82568aa8
	goto loc_82568AA8;
loc_82568AA4:
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
loc_82568AA8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1036);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82568AC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82568AC0:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82568ae8
	if (ctx.cr6.eq) goto loc_82568AE8;
loc_82568AC8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1016(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1016);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82568AE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82568AE8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1020(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1020);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82568B08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82568B10"))) PPC_WEAK_FUNC(sub_82568B10);
PPC_FUNC_IMPL(__imp__sub_82568B10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r11,504(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 504);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82568b58
	if (ctx.cr6.eq) goto loc_82568B58;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r3,10548(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82568B50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82568b80
	if (ctx.cr0.eq) goto loc_82568B80;
loc_82568B58:
	// lwz r10,2016(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2016);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,1996
	ctx.r3.s64 = ctx.r31.s64 + 1996;
	// stw r11,2012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2012, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82568b80
	if (ctx.cr6.eq) goto loc_82568B80;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82332c38
	ctx.lr = 0x82568B80;
	sub_82332C38(ctx, base);
loc_82568B80:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82568B98"))) PPC_WEAK_FUNC(sub_82568B98);
PPC_FUNC_IMPL(__imp__sub_82568B98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82568BA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,1408(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1408);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82568d44
	if (ctx.cr6.eq) goto loc_82568D44;
	// cmplwi cr6,r5,7
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 7, ctx.xer);
	// bgt cr6,0x82568d44
	if (ctx.cr6.gt) goto loc_82568D44;
	// lis r12,-32242
	ctx.r12.s64 = -2113011712;
	// addi r12,r12,-30752
	ctx.r12.s64 = ctx.r12.s64 + -30752;
	// lbzx r0,r12,r5
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r5.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32169
	ctx.r12.s64 = -2108227584;
	// addi r12,r12,-29728
	ctx.r12.s64 = ctx.r12.s64 + -29728;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r5.u64) {
	case 0:
		goto loc_82568BE0;
	case 1:
		goto loc_82568BFC;
	case 2:
		goto loc_82568C10;
	case 3:
		goto loc_82568C24;
	case 4:
		goto loc_82568D04;
	case 5:
		goto loc_82568C38;
	case 6:
		goto loc_82568CC8;
	case 7:
		goto loc_82568D04;
	default:
		__builtin_unreachable();
	}
loc_82568BE0:
	// lwz r11,4376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4376);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82568d44
	if (!ctx.cr6.eq) goto loc_82568D44;
	// li r5,2
	ctx.r5.s64 = 2;
loc_82568BF0:
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x82568d28
	goto loc_82568D28;
loc_82568BFC:
	// lwz r11,4376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4376);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82568d44
	if (!ctx.cr6.eq) goto loc_82568D44;
	// li r5,3
	ctx.r5.s64 = 3;
	// b 0x82568bf0
	goto loc_82568BF0;
loc_82568C10:
	// lwz r11,4376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4376);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82568d44
	if (!ctx.cr6.eq) goto loc_82568D44;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x82568d20
	goto loc_82568D20;
loc_82568C24:
	// lwz r11,4376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4376);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82568d44
	if (!ctx.cr6.eq) goto loc_82568D44;
	// li r5,2
	ctx.r5.s64 = 2;
	// b 0x82568d20
	goto loc_82568D20;
loc_82568C38:
	// lwz r11,4376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4376);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82568cb8
	if (ctx.cr6.lt) goto loc_82568CB8;
	// beq cr6,0x82568cac
	if (ctx.cr6.eq) goto loc_82568CAC;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82568d30
	if (!ctx.cr6.lt) goto loc_82568D30;
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// stw r29,4400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4400, ctx.r29.u32);
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,21720
	ctx.r4.s64 = ctx.r11.s64 + 21720;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82568C78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,4376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4376, ctx.r29.u32);
	// lis r10,-32170
	ctx.r10.s64 = -2108293120;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r10,r10,21704
	ctx.r10.s64 = ctx.r10.s64 + 21704;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lfs f1,-32532(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32532);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825659c0
	ctx.lr = 0x82568CA8;
	sub_825659C0(ctx, base);
	// b 0x82568d30
	goto loc_82568D30;
loc_82568CAC:
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82568cc0
	goto loc_82568CC0;
loc_82568CB8:
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82568CC0:
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82568d28
	goto loc_82568D28;
loc_82568CC8:
	// lwz r11,4376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4376);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82568d44
	if (!ctx.cr6.eq) goto loc_82568D44;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// beq cr6,0x82568ce4
	if (ctx.cr6.eq) goto loc_82568CE4;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// bne cr6,0x82568cec
	if (!ctx.cr6.eq) goto loc_82568CEC;
loc_82568CE4:
	// li r5,4
	ctx.r5.s64 = 4;
	// b 0x82568d20
	goto loc_82568D20;
loc_82568CEC:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82568d44
	if (!ctx.cr6.eq) goto loc_82568D44;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x82568d44
	if (!ctx.cr6.eq) goto loc_82568D44;
	// li r5,3
	ctx.r5.s64 = 3;
	// b 0x82568d20
	goto loc_82568D20;
loc_82568D04:
	// lwz r11,4376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4376);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82568d44
	if (!ctx.cr6.eq) goto loc_82568D44;
	// lwz r11,4400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4400);
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4400, ctx.r11.u32);
loc_82568D20:
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
loc_82568D28:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82565940
	ctx.lr = 0x82568D30;
	sub_82565940(ctx, base);
loc_82568D30:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1016(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1016);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82568D44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82568D44:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82568D50"))) PPC_WEAK_FUNC(sub_82568D50);
PPC_FUNC_IMPL(__imp__sub_82568D50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82332d50
	ctx.lr = 0x82568D7C;
	sub_82332D50(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 * 12;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82568da4
	if (ctx.cr0.eq) goto loc_82568DA4;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
loc_82568DA4:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82568DC8"))) PPC_WEAK_FUNC(sub_82568DC8);
PPC_FUNC_IMPL(__imp__sub_82568DC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82833108
	ctx.lr = 0x82568DE0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82568e04
	if (ctx.cr0.eq) goto loc_82568E04;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82833180
	ctx.lr = 0x82568DF0;
	sub_82833180(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,15480
	ctx.r11.s64 = ctx.r11.s64 + 15480;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82568e08
	goto loc_82568E08;
loc_82568E04:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82568E08:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82568E20"))) PPC_WEAK_FUNC(sub_82568E20);
PPC_FUNC_IMPL(__imp__sub_82568E20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,25732(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25732);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82568e60
	if (!ctx.cr0.eq) goto loc_82568E60;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// stw r11,25732(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25732, ctx.r11.u32);
	// addi r3,r9,8112
	ctx.r3.s64 = ctx.r9.s64 + 8112;
	// bl 0x82816528
	ctx.lr = 0x82568E58;
	sub_82816528(ctx, base);
	// stw r3,25728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25728, ctx.r3.u32);
	// b 0x82568e64
	goto loc_82568E64;
loc_82568E60:
	// lwz r3,25728(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25728);
loc_82568E64:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82568E78"))) PPC_WEAK_FUNC(sub_82568E78);
PPC_FUNC_IMPL(__imp__sub_82568E78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82568ec8
	ctx.lr = 0x82568E98;
	sub_82568EC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82568EAC;
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

__attribute__((alias("__imp__sub_82568EC8"))) PPC_WEAK_FUNC(sub_82568EC8);
PPC_FUNC_IMPL(__imp__sub_82568EC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,12224
	ctx.r31.s64 = ctx.r11.s64 + 12224;
	// lwz r11,12220(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12220);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82568f10
	if (!ctx.cr0.eq) goto loc_82568F10;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,8140
	ctx.r9.s64 = ctx.r9.s64 + 8140;
	// stw r11,12220(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12220, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,21336
	ctx.r3.s64 = ctx.r11.s64 + 21336;
	// bl 0x82a4c758
	ctx.lr = 0x82568F10;
	sub_82A4C758(ctx, base);
loc_82568F10:
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

__attribute__((alias("__imp__sub_82568F28"))) PPC_WEAK_FUNC(sub_82568F28);
PPC_FUNC_IMPL(__imp__sub_82568F28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,1440
	ctx.r3.s64 = 1440;
	// bl 0x82833108
	ctx.lr = 0x82568F40;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82568f9c
	if (ctx.cr0.eq) goto loc_82568F9C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829bc540
	ctx.lr = 0x82568F50;
	sub_829BC540(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r11,r11,8160
	ctx.r11.s64 = ctx.r11.s64 + 8160;
	// addi r10,r10,9168
	ctx.r10.s64 = ctx.r10.s64 + 9168;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r9,9220
	ctx.r9.s64 = ctx.r9.s64 + 9220;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1420, ctx.r11.u32);
	// stw r10,1416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1416, ctx.r10.u32);
	// stw r11,1424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1424, ctx.r11.u32);
	// stw r11,1428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1428, ctx.r11.u32);
	// stw r11,1432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1432, ctx.r11.u32);
	// stw r11,1412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1412, ctx.r11.u32);
	// b 0x82568fa0
	goto loc_82568FA0;
loc_82568F9C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82568FA0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82568FB8"))) PPC_WEAK_FUNC(sub_82568FB8);
PPC_FUNC_IMPL(__imp__sub_82568FB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,25724(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25724);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82568ff8
	if (!ctx.cr0.eq) goto loc_82568FF8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// stw r11,25724(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25724, ctx.r11.u32);
	// addi r3,r9,8132
	ctx.r3.s64 = ctx.r9.s64 + 8132;
	// bl 0x82816528
	ctx.lr = 0x82568FF0;
	sub_82816528(ctx, base);
	// stw r3,25720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25720, ctx.r3.u32);
	// b 0x82568ffc
	goto loc_82568FFC;
loc_82568FF8:
	// lwz r3,25720(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25720);
loc_82568FFC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82569010"))) PPC_WEAK_FUNC(sub_82569010);
PPC_FUNC_IMPL(__imp__sub_82569010) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82569060
	ctx.lr = 0x82569030;
	sub_82569060(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82569044;
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

__attribute__((alias("__imp__sub_82569060"))) PPC_WEAK_FUNC(sub_82569060);
PPC_FUNC_IMPL(__imp__sub_82569060) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,12216
	ctx.r31.s64 = ctx.r11.s64 + 12216;
	// lwz r11,12212(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12212);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x825690a8
	if (!ctx.cr0.eq) goto loc_825690A8;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,9244
	ctx.r9.s64 = ctx.r9.s64 + 9244;
	// stw r11,12212(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12212, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,21312
	ctx.r3.s64 = ctx.r11.s64 + 21312;
	// bl 0x82a4c758
	ctx.lr = 0x825690A8;
	sub_82A4C758(ctx, base);
loc_825690A8:
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

__attribute__((alias("__imp__sub_825690C0"))) PPC_WEAK_FUNC(sub_825690C0);
PPC_FUNC_IMPL(__imp__sub_825690C0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x82565c00
	sub_82565C00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825690C8"))) PPC_WEAK_FUNC(sub_825690C8);
PPC_FUNC_IMPL(__imp__sub_825690C8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82565c00
	sub_82565C00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825690D0"))) PPC_WEAK_FUNC(sub_825690D0);
PPC_FUNC_IMPL(__imp__sub_825690D0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82565ba0
	sub_82565BA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825690D8"))) PPC_WEAK_FUNC(sub_825690D8);
PPC_FUNC_IMPL(__imp__sub_825690D8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x825690e0
	sub_825690E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825690E0"))) PPC_WEAK_FUNC(sub_825690E0);
PPC_FUNC_IMPL(__imp__sub_825690E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82565fd8
	ctx.lr = 0x82569100;
	sub_82565FD8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82569110
	if (ctx.cr0.eq) goto loc_82569110;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x82569110;
	sub_82332DB8(ctx, base);
loc_82569110:
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

__attribute__((alias("__imp__sub_82569130"))) PPC_WEAK_FUNC(sub_82569130);
PPC_FUNC_IMPL(__imp__sub_82569130) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82569138
	sub_82569138(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82569138"))) PPC_WEAK_FUNC(sub_82569138);
PPC_FUNC_IMPL(__imp__sub_82569138) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823fb9b8
	ctx.lr = 0x82569158;
	sub_823FB9B8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8256916c
	if (ctx.cr6.eq) goto loc_8256916C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82569188
	ctx.lr = 0x8256916C;
	sub_82569188(ctx, base);
loc_8256916C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82569188"))) PPC_WEAK_FUNC(sub_82569188);
PPC_FUNC_IMPL(__imp__sub_82569188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x824a0bb0
	ctx.lr = 0x825691A8;
	sub_824A0BB0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825691b8
	if (!ctx.cr6.eq) goto loc_825691B8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x825691d0
	goto loc_825691D0;
loc_825691B8:
	// bl 0x82338750
	ctx.lr = 0x825691BC;
	sub_82338750(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x825691d0
	if (ctx.cr6.eq) goto loc_825691D0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82338858
	ctx.lr = 0x825691D0;
	sub_82338858(ctx, base);
loc_825691D0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825691E8"))) PPC_WEAK_FUNC(sub_825691E8);
PPC_FUNC_IMPL(__imp__sub_825691E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,10064
	ctx.r3.s64 = ctx.r11.s64 + 10064;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825691F8"))) PPC_WEAK_FUNC(sub_825691F8);
PPC_FUNC_IMPL(__imp__sub_825691F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82569230
	if (ctx.cr6.eq) goto loc_82569230;
	// bl 0x823fb9b8
	ctx.lr = 0x82569220;
	sub_823FB9B8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82569230
	if (!ctx.cr6.eq) goto loc_82569230;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8256923c
	goto loc_8256923C;
loc_82569230:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82569258
	ctx.lr = 0x8256923C;
	sub_82569258(ctx, base);
loc_8256923C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82569258"))) PPC_WEAK_FUNC(sub_82569258);
PPC_FUNC_IMPL(__imp__sub_82569258) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82569290
	if (ctx.cr6.eq) goto loc_82569290;
	// bl 0x824a0bb0
	ctx.lr = 0x82569280;
	sub_824A0BB0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82569290
	if (!ctx.cr6.eq) goto loc_82569290;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8256929c
	goto loc_8256929C;
loc_82569290:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82338a28
	ctx.lr = 0x8256929C;
	sub_82338A28(ctx, base);
loc_8256929C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825692B8"))) PPC_WEAK_FUNC(sub_825692B8);
PPC_FUNC_IMPL(__imp__sub_825692B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x823fb9b8
	sub_823FB9B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825692C0"))) PPC_WEAK_FUNC(sub_825692C0);
PPC_FUNC_IMPL(__imp__sub_825692C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x824a0bb0
	sub_824A0BB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825692C8"))) PPC_WEAK_FUNC(sub_825692C8);
PPC_FUNC_IMPL(__imp__sub_825692C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,2048
	ctx.r3.s64 = 2048;
	// bl 0x82833108
	ctx.lr = 0x825692E8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82569328
	if (ctx.cr0.eq) goto loc_82569328;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82569348
	ctx.lr = 0x825692FC;
	sub_82569348(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// addi r11,r11,11480
	ctx.r11.s64 = ctx.r11.s64 + 11480;
	// addi r10,r10,12524
	ctx.r10.s64 = ctx.r10.s64 + 12524;
	// addi r9,r9,11456
	ctx.r9.s64 = ctx.r9.s64 + 11456;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x8256932c
	goto loc_8256932C;
loc_82569328:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8256932C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82569348"))) PPC_WEAK_FUNC(sub_82569348);
PPC_FUNC_IMPL(__imp__sub_82569348) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x82569350;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82338b88
	ctx.lr = 0x82569360;
	sub_82338B88(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// addi r11,r11,9264
	ctx.r11.s64 = ctx.r11.s64 + 9264;
	// addi r10,r10,10308
	ctx.r10.s64 = ctx.r10.s64 + 10308;
	// addi r9,r9,11456
	ctx.r9.s64 = ctx.r9.s64 + 11456;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r4,r30,1420
	ctx.r4.s64 = ctx.r30.s64 + 1420;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r3,r31,1420
	ctx.r3.s64 = ctx.r31.s64 + 1420;
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
	ctx.lr = 0x825693A8;
	sub_82873B58(ctx, base);
	// lwz r11,1444(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1444);
	// addi r4,r30,1552
	ctx.r4.s64 = ctx.r30.s64 + 1552;
	// addi r3,r31,1552
	ctx.r3.s64 = ctx.r31.s64 + 1552;
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
	// lwz r11,1456(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1456);
	// stw r11,1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1456, ctx.r11.u32);
	// lwz r11,1460(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1460);
	// stw r11,1460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1460, ctx.r11.u32);
	// lfs f0,1464(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1464);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1464(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1464, temp.u32);
	// lfs f0,1468(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1468);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1468(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1468, temp.u32);
	// lfs f0,1472(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1472);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1472(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1472, temp.u32);
	// lfs f0,1476(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1476);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1476(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1476, temp.u32);
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
	// lwz r11,1548(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1548);
	// stw r11,1548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1548, ctx.r11.u32);
	// bl 0x82873b58
	ctx.lr = 0x8256948C;
	sub_82873B58(ctx, base);
	// addi r4,r30,1576
	ctx.r4.s64 = ctx.r30.s64 + 1576;
	// addi r3,r31,1576
	ctx.r3.s64 = ctx.r31.s64 + 1576;
	// bl 0x82873b58
	ctx.lr = 0x82569498;
	sub_82873B58(ctx, base);
	// addi r4,r30,1600
	ctx.r4.s64 = ctx.r30.s64 + 1600;
	// addi r3,r31,1600
	ctx.r3.s64 = ctx.r31.s64 + 1600;
	// bl 0x82873b58
	ctx.lr = 0x825694A4;
	sub_82873B58(ctx, base);
	// addi r4,r30,1624
	ctx.r4.s64 = ctx.r30.s64 + 1624;
	// addi r3,r31,1624
	ctx.r3.s64 = ctx.r31.s64 + 1624;
	// bl 0x8282f630
	ctx.lr = 0x825694B0;
	sub_8282F630(ctx, base);
	// addi r4,r30,1648
	ctx.r4.s64 = ctx.r30.s64 + 1648;
	// addi r3,r31,1648
	ctx.r3.s64 = ctx.r31.s64 + 1648;
	// bl 0x8282f630
	ctx.lr = 0x825694BC;
	sub_8282F630(ctx, base);
	// addi r4,r30,1672
	ctx.r4.s64 = ctx.r30.s64 + 1672;
	// addi r3,r31,1672
	ctx.r3.s64 = ctx.r31.s64 + 1672;
	// bl 0x8282f630
	ctx.lr = 0x825694C8;
	sub_8282F630(ctx, base);
	// addi r4,r30,1696
	ctx.r4.s64 = ctx.r30.s64 + 1696;
	// addi r3,r31,1696
	ctx.r3.s64 = ctx.r31.s64 + 1696;
	// bl 0x82873b58
	ctx.lr = 0x825694D4;
	sub_82873B58(ctx, base);
	// lwz r10,1720(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1720);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r31,1732
	ctx.r28.s64 = ctx.r31.s64 + 1732;
	// addi r27,r30,1732
	ctx.r27.s64 = ctx.r30.s64 + 1732;
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r10,1720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1720, ctx.r10.u32);
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, ctx.xer);
	// lwz r10,1724(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1724);
	// stw r10,1724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1724, ctx.r10.u32);
	// lwz r10,1728(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1728);
	// stw r10,1728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1728, ctx.r10.u32);
	// stw r11,1736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1736, ctx.r11.u32);
	// stw r29,1740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1740, ctx.r29.u32);
	// stw r29,1744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1744, ctx.r29.u32);
	// stw r29,1748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1748, ctx.r29.u32);
	// stw r29,1752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1752, ctx.r29.u32);
	// stw r29,1732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1732, ctx.r29.u32);
	// beq cr6,0x825695b4
	if (ctx.cr6.eq) goto loc_825695B4;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r29,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825695b4
	if (!ctx.cr6.gt) goto loc_825695B4;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82569548
	if (ctx.cr0.eq) goto loc_82569548;
	// stw r11,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332c38
	ctx.lr = 0x82569548;
	sub_82332C38(ctx, base);
loc_82569548:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825695b4
	if (!ctx.cr6.gt) goto loc_825695B4;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
loc_8256955C:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332d50
	ctx.lr = 0x82569570;
	sub_82332D50(ctx, base);
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// mulli r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 * 12;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825695a0
	if (ctx.cr0.eq) goto loc_825695A0;
	// lwz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// add r9,r10,r26
	ctx.r9.u64 = ctx.r10.u64 + ctx.r26.u64;
	// lwzx r10,r10,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
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
loc_825695A0:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r26,r26,12
	ctx.r26.s64 = ctx.r26.s64 + 12;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8256955c
	if (ctx.cr6.lt) goto loc_8256955C;
loc_825695B4:
	// addi r11,r30,1756
	ctx.r11.s64 = ctx.r30.s64 + 1756;
	// addi r10,r31,1756
	ctx.r10.s64 = ctx.r31.s64 + 1756;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_825695C4:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x825695c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825695C4;
	// addi r28,r31,1776
	ctx.r28.s64 = ctx.r31.s64 + 1776;
	// stw r29,1784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1784, ctx.r29.u32);
	// addi r27,r30,1776
	ctx.r27.s64 = ctx.r30.s64 + 1776;
	// stw r29,1788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1788, ctx.r29.u32);
	// li r11,28
	ctx.r11.s64 = 28;
	// stw r29,1792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1792, ctx.r29.u32);
	// stw r29,1796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1796, ctx.r29.u32);
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, ctx.xer);
	// stw r11,1780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1780, ctx.r11.u32);
	// stw r29,1776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1776, ctx.r29.u32);
	// beq cr6,0x82569698
	if (ctx.cr6.eq) goto loc_82569698;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r29,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82569698
	if (!ctx.cr6.gt) goto loc_82569698;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82569630
	if (ctx.cr0.eq) goto loc_82569630;
	// stw r11,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332c38
	ctx.lr = 0x82569630;
	sub_82332C38(ctx, base);
loc_82569630:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82569698
	if (!ctx.cr6.gt) goto loc_82569698;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
loc_82569644:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332d50
	ctx.lr = 0x82569658;
	sub_82332D50(ctx, base);
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// mulli r10,r3,28
	ctx.r10.s64 = ctx.r3.s64 * 28;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82569684
	if (ctx.cr0.eq) goto loc_82569684;
	// lwz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + ctx.r26.u64;
	// addi r4,r10,4
	ctx.r4.s64 = ctx.r10.s64 + 4;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x82873b58
	ctx.lr = 0x82569684;
	sub_82873B58(ctx, base);
loc_82569684:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r26,r26,28
	ctx.r26.s64 = ctx.r26.s64 + 28;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82569644
	if (ctx.cr6.lt) goto loc_82569644;
loc_82569698:
	// addi r28,r31,1800
	ctx.r28.s64 = ctx.r31.s64 + 1800;
	// stw r29,1808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1808, ctx.r29.u32);
	// addi r27,r30,1800
	ctx.r27.s64 = ctx.r30.s64 + 1800;
	// stw r29,1812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1812, ctx.r29.u32);
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r29,1816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1816, ctx.r29.u32);
	// stw r29,1820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1820, ctx.r29.u32);
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, ctx.xer);
	// stw r11,1804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1804, ctx.r11.u32);
	// stw r29,1800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1800, ctx.r29.u32);
	// beq cr6,0x82569764
	if (ctx.cr6.eq) goto loc_82569764;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r29,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82569764
	if (!ctx.cr6.gt) goto loc_82569764;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825696f0
	if (ctx.cr0.eq) goto loc_825696F0;
	// stw r11,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332c38
	ctx.lr = 0x825696F0;
	sub_82332C38(ctx, base);
loc_825696F0:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82569764
	if (!ctx.cr6.gt) goto loc_82569764;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
loc_82569704:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332d50
	ctx.lr = 0x82569718;
	sub_82332D50(ctx, base);
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82569750
	if (ctx.cr0.eq) goto loc_82569750;
	// lwz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// add r9,r10,r26
	ctx.r9.u64 = ctx.r10.u64 + ctx.r26.u64;
	// lwzx r10,r10,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
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
loc_82569750:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r26,r26,16
	ctx.r26.s64 = ctx.r26.s64 + 16;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82569704
	if (ctx.cr6.lt) goto loc_82569704;
loc_82569764:
	// addi r28,r31,1824
	ctx.r28.s64 = ctx.r31.s64 + 1824;
	// stw r29,1832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1832, ctx.r29.u32);
	// li r24,8
	ctx.r24.s64 = 8;
	// stw r29,1836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1836, ctx.r29.u32);
	// addi r27,r30,1824
	ctx.r27.s64 = ctx.r30.s64 + 1824;
	// stw r29,1840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1840, ctx.r29.u32);
	// stw r24,1828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1828, ctx.r24.u32);
	// stw r29,1844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1844, ctx.r29.u32);
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, ctx.xer);
	// stw r29,1824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1824, ctx.r29.u32);
	// beq cr6,0x82569820
	if (ctx.cr6.eq) goto loc_82569820;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r29,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82569820
	if (!ctx.cr6.gt) goto loc_82569820;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825697bc
	if (ctx.cr0.eq) goto loc_825697BC;
	// stw r11,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332c38
	ctx.lr = 0x825697BC;
	sub_82332C38(ctx, base);
loc_825697BC:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82569820
	if (!ctx.cr6.gt) goto loc_82569820;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
loc_825697D0:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332d50
	ctx.lr = 0x825697E4;
	sub_82332D50(ctx, base);
	// lwz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8256980c
	if (ctx.cr0.eq) goto loc_8256980C;
	// lwz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// add r9,r10,r26
	ctx.r9.u64 = ctx.r10.u64 + ctx.r26.u64;
	// lwzx r10,r10,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_8256980C:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r26,r26,8
	ctx.r26.s64 = ctx.r26.s64 + 8;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x825697d0
	if (ctx.cr6.lt) goto loc_825697D0;
loc_82569820:
	// lwz r11,1848(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1848);
	// addi r28,r31,1864
	ctx.r28.s64 = ctx.r31.s64 + 1864;
	// addi r27,r30,1864
	ctx.r27.s64 = ctx.r30.s64 + 1864;
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, ctx.xer);
	// stw r11,1848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1848, ctx.r11.u32);
	// lfs f0,1852(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1852);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1852(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1852, temp.u32);
	// lwz r11,1856(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1856);
	// stw r11,1856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1856, ctx.r11.u32);
	// lfs f0,1860(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1860);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1860(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1860, temp.u32);
	// stw r24,1868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1868, ctx.r24.u32);
	// stw r29,1872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1872, ctx.r29.u32);
	// stw r29,1876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1876, ctx.r29.u32);
	// stw r29,1880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1880, ctx.r29.u32);
	// stw r29,1884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1884, ctx.r29.u32);
	// stw r29,1864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1864, ctx.r29.u32);
	// beq cr6,0x825698f8
	if (ctx.cr6.eq) goto loc_825698F8;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r29,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825698f8
	if (!ctx.cr6.gt) goto loc_825698F8;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82569894
	if (ctx.cr0.eq) goto loc_82569894;
	// stw r11,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332c38
	ctx.lr = 0x82569894;
	sub_82332C38(ctx, base);
loc_82569894:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825698f8
	if (!ctx.cr6.gt) goto loc_825698F8;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
loc_825698A8:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332d50
	ctx.lr = 0x825698BC;
	sub_82332D50(ctx, base);
	// lwz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825698e4
	if (ctx.cr0.eq) goto loc_825698E4;
	// lwz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// add r9,r10,r26
	ctx.r9.u64 = ctx.r10.u64 + ctx.r26.u64;
	// lwzx r10,r10,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_825698E4:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r26,r26,8
	ctx.r26.s64 = ctx.r26.s64 + 8;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x825698a8
	if (ctx.cr6.lt) goto loc_825698A8;
loc_825698F8:
	// addi r28,r31,1888
	ctx.r28.s64 = ctx.r31.s64 + 1888;
	// stw r29,1896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1896, ctx.r29.u32);
	// addi r27,r30,1888
	ctx.r27.s64 = ctx.r30.s64 + 1888;
	// stw r29,1900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1900, ctx.r29.u32);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r29,1904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1904, ctx.r29.u32);
	// stw r29,1908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1908, ctx.r29.u32);
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, ctx.xer);
	// stw r11,1892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1892, ctx.r11.u32);
	// stw r29,1888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1888, ctx.r29.u32);
	// beq cr6,0x8256996c
	if (ctx.cr6.eq) goto loc_8256996C;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r29,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8256996c
	if (!ctx.cr6.gt) goto loc_8256996C;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82569950
	if (ctx.cr0.eq) goto loc_82569950;
	// stw r11,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332c38
	ctx.lr = 0x82569950;
	sub_82332C38(ctx, base);
loc_82569950:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// lwz r4,12(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// bl 0x82a45878
	ctx.lr = 0x82569964;
	sub_82A45878(ctx, base);
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r11,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r11.u32);
loc_8256996C:
	// addi r11,r30,1912
	ctx.r11.s64 = ctx.r30.s64 + 1912;
	// addi r10,r31,1912
	ctx.r10.s64 = ctx.r31.s64 + 1912;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8256997C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8256997c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8256997C;
	// lwz r11,1932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1932);
	// addi r4,r30,1948
	ctx.r4.s64 = ctx.r30.s64 + 1948;
	// addi r3,r31,1948
	ctx.r3.s64 = ctx.r31.s64 + 1948;
	// stw r11,1932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1932, ctx.r11.u32);
	// lfs f0,1936(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1936);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1936(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1936, temp.u32);
	// lwz r11,1940(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1940);
	// stw r11,1940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1940, ctx.r11.u32);
	// lwz r11,1944(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1944);
	// stw r11,1944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1944, ctx.r11.u32);
	// bl 0x82873b58
	ctx.lr = 0x825699BC;
	sub_82873B58(ctx, base);
	// addi r4,r30,1972
	ctx.r4.s64 = ctx.r30.s64 + 1972;
	// addi r3,r31,1972
	ctx.r3.s64 = ctx.r31.s64 + 1972;
	// bl 0x82873b58
	ctx.lr = 0x825699C8;
	sub_82873B58(ctx, base);
	// addi r4,r30,1996
	ctx.r4.s64 = ctx.r30.s64 + 1996;
	// addi r3,r31,1996
	ctx.r3.s64 = ctx.r31.s64 + 1996;
	// bl 0x82873b58
	ctx.lr = 0x825699D4;
	sub_82873B58(ctx, base);
	// addi r4,r30,2020
	ctx.r4.s64 = ctx.r30.s64 + 2020;
	// addi r3,r31,2020
	ctx.r3.s64 = ctx.r31.s64 + 2020;
	// bl 0x82873b58
	ctx.lr = 0x825699E0;
	sub_82873B58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825699F0"))) PPC_WEAK_FUNC(sub_825699F0);
PPC_FUNC_IMPL(__imp__sub_825699F0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x825690e0
	sub_825690E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825699F8"))) PPC_WEAK_FUNC(sub_825699F8);
PPC_FUNC_IMPL(__imp__sub_825699F8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82569a00
	sub_82569A00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82569A00"))) PPC_WEAK_FUNC(sub_82569A00);
PPC_FUNC_IMPL(__imp__sub_82569A00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823354d0
	ctx.lr = 0x82569A20;
	sub_823354D0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82569a34
	if (ctx.cr6.eq) goto loc_82569A34;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82569188
	ctx.lr = 0x82569A34;
	sub_82569188(ctx, base);
loc_82569A34:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82569A50"))) PPC_WEAK_FUNC(sub_82569A50);
PPC_FUNC_IMPL(__imp__sub_82569A50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,14936
	ctx.r3.s64 = ctx.r11.s64 + 14936;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82569A60"))) PPC_WEAK_FUNC(sub_82569A60);
PPC_FUNC_IMPL(__imp__sub_82569A60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82569a98
	if (ctx.cr6.eq) goto loc_82569A98;
	// bl 0x823354d0
	ctx.lr = 0x82569A88;
	sub_823354D0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82569a98
	if (!ctx.cr6.eq) goto loc_82569A98;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82569aa4
	goto loc_82569AA4;
loc_82569A98:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82569258
	ctx.lr = 0x82569AA4;
	sub_82569258(ctx, base);
loc_82569AA4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82569AC0"))) PPC_WEAK_FUNC(sub_82569AC0);
PPC_FUNC_IMPL(__imp__sub_82569AC0) {
	PPC_FUNC_PROLOGUE();
	// b 0x823354d0
	sub_823354D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82569AC8"))) PPC_WEAK_FUNC(sub_82569AC8);
PPC_FUNC_IMPL(__imp__sub_82569AC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,2048
	ctx.r3.s64 = 2048;
	// bl 0x82833108
	ctx.lr = 0x82569AE8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82569b28
	if (ctx.cr0.eq) goto loc_82569B28;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82569348
	ctx.lr = 0x82569AFC;
	sub_82569348(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// addi r11,r11,10360
	ctx.r11.s64 = ctx.r11.s64 + 10360;
	// addi r10,r10,11404
	ctx.r10.s64 = ctx.r10.s64 + 11404;
	// addi r9,r9,11456
	ctx.r9.s64 = ctx.r9.s64 + 11456;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x82569b2c
	goto loc_82569B2C;
loc_82569B28:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82569B2C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82569B48"))) PPC_WEAK_FUNC(sub_82569B48);
PPC_FUNC_IMPL(__imp__sub_82569B48) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82569188
	sub_82569188(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82569B50"))) PPC_WEAK_FUNC(sub_82569B50);
PPC_FUNC_IMPL(__imp__sub_82569B50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r3,r11,32576
	ctx.r3.s64 = ctx.r11.s64 + 32576;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82569B60"))) PPC_WEAK_FUNC(sub_82569B60);
PPC_FUNC_IMPL(__imp__sub_82569B60) {
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
	// lwz r11,1484(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1484);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82569bbc
	if (!ctx.cr6.eq) goto loc_82569BBC;
	// lwz r11,1408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// li r10,2
	ctx.r10.s64 = 2;
	// lfs f0,1468(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1468);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1472(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1472, temp.u32);
	// stw r10,1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1456, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82569bbc
	if (ctx.cr6.eq) goto loc_82569BBC;
	// bl 0x8256a0e0
	ctx.lr = 0x82569BA0;
	sub_8256A0E0(ctx, base);
	// lwz r11,1408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,4376(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4376);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82569bbc
	if (!ctx.cr6.eq) goto loc_82569BBC;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x825654e8
	ctx.lr = 0x82569BBC;
	sub_825654E8(ctx, base);
loc_82569BBC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82569BD0"))) PPC_WEAK_FUNC(sub_82569BD0);
PPC_FUNC_IMPL(__imp__sub_82569BD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82569BD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r11,1408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// lfs f0,1464(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1464);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1472(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1472, temp.u32);
	// stw r10,1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1456, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82569c70
	if (ctx.cr6.eq) goto loc_82569C70;
	// bl 0x8256a0e0
	ctx.lr = 0x82569C00;
	sub_8256A0E0(ctx, base);
	// lwz r31,1408(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// lwz r11,4376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4376);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82569c18
	if (ctx.cr6.eq) goto loc_82569C18;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82569c70
	if (!ctx.cr6.eq) goto loc_82569C70;
loc_82569C18:
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// stw r29,4400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4400, ctx.r29.u32);
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,21720
	ctx.r4.s64 = ctx.r11.s64 + 21720;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82569C40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,4376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4376, ctx.r29.u32);
	// lis r10,-32170
	ctx.r10.s64 = -2108293120;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r10,r10,21704
	ctx.r10.s64 = ctx.r10.s64 + 21704;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lfs f1,-32532(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32532);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825659c0
	ctx.lr = 0x82569C70;
	sub_825659C0(ctx, base);
loc_82569C70:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82569C78"))) PPC_WEAK_FUNC(sub_82569C78);
PPC_FUNC_IMPL(__imp__sub_82569C78) {
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
	// lwz r11,1484(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1484);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82569ca0
	if (ctx.cr6.eq) goto loc_82569CA0;
	// bl 0x82569bd0
	ctx.lr = 0x82569C9C;
	sub_82569BD0(ctx, base);
	// b 0x82569d80
	goto loc_82569D80;
loc_82569CA0:
	// lwz r11,1456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82569d6c
	if (ctx.cr6.eq) goto loc_82569D6C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82569d04
	if (ctx.cr6.eq) goto loc_82569D04;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82569ce4
	if (ctx.cr6.eq) goto loc_82569CE4;
	// lwz r11,1480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1480);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82569d80
	if (!ctx.cr6.eq) goto loc_82569D80;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r10,1408(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// li r9,1
	ctx.r9.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1456, ctx.r9.u32);
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82569d3c
	goto loc_82569D3C;
loc_82569CE4:
	// lfs f0,1472(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1472);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// fsubs f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// stfs f13,1472(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1472, temp.u32);
	// lfs f0,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82569d80
	if (ctx.cr6.gt) goto loc_82569D80;
	// b 0x82569d78
	goto loc_82569D78;
loc_82569D04:
	// lfs f0,1472(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1472);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// fsubs f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// stfs f13,1472(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1472, temp.u32);
	// lfs f0,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82569d80
	if (ctx.cr6.gt) goto loc_82569D80;
	// lwz r11,1480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1480);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82569d80
	if (!ctx.cr6.eq) goto loc_82569D80;
	// lwz r11,1408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1456, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
loc_82569D3C:
	// stfs f0,1472(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1472, temp.u32);
	// beq cr6,0x82569d80
	if (ctx.cr6.eq) goto loc_82569D80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256a0e0
	ctx.lr = 0x82569D4C;
	sub_8256A0E0(ctx, base);
	// lwz r11,1408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,4376(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4376);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82569d80
	if (!ctx.cr6.eq) goto loc_82569D80;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x825654e8
	ctx.lr = 0x82569D68;
	sub_825654E8(ctx, base);
	// b 0x82569d80
	goto loc_82569D80;
loc_82569D6C:
	// lwz r11,1480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1480);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82569d80
	if (ctx.cr6.eq) goto loc_82569D80;
loc_82569D78:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82569b60
	ctx.lr = 0x82569D80;
	sub_82569B60(ctx, base);
loc_82569D80:
	// lwz r11,1460(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1460);
	// lwz r10,1456(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82569da8
	if (ctx.cr6.eq) goto loc_82569DA8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82569dc0
	ctx.lr = 0x82569D98;
	sub_82569DC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82569ed8
	ctx.lr = 0x82569DA0;
	sub_82569ED8(ctx, base);
	// lwz r11,1456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	// stw r11,1460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1460, ctx.r11.u32);
loc_82569DA8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82569DC0"))) PPC_WEAK_FUNC(sub_82569DC0);
PPC_FUNC_IMPL(__imp__sub_82569DC0) {
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
	// lwz r30,1412(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1412);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82569DF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1436);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82569ea8
	if (!ctx.cr6.gt) goto loc_82569EA8;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f11,24000(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24000);
	ctx.f11.f64 = double(temp.f32);
loc_82569E0C:
	// lwz r11,1432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1432);
	// lwz r10,1456(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lfs f0,1820(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1820);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,1824(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1824);
	ctx.f12.f64 = double(temp.f32);
	// bne cr6,0x82569e48
	if (!ctx.cr6.eq) goto loc_82569E48;
	// lwz r10,1460(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1460);
	// lfs f13,1476(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1476);
	ctx.f13.f64 = double(temp.f32);
	// fmr f12,f11
	ctx.f12.f64 = ctx.f11.f64;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82569e8c
	if (!ctx.cr6.eq) goto loc_82569E8C;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// b 0x82569e8c
	goto loc_82569E8C;
loc_82569E48:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x82569e7c
	if (!ctx.cr6.eq) goto loc_82569E7C;
	// lwz r10,1460(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1460);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x82569e68
	if (!ctx.cr6.eq) goto loc_82569E68;
	// lfs f13,1476(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1476);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// b 0x82569e88
	goto loc_82569E88;
loc_82569E68:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82569e88
	if (!ctx.cr6.eq) goto loc_82569E88;
	// lfs f13,1476(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1476);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// b 0x82569e88
	goto loc_82569E88;
loc_82569E7C:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82569e8c
	if (!ctx.cr6.eq) goto loc_82569E8C;
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2480);
	ctx.f0.f64 = double(temp.f32);
loc_82569E88:
	// lfs f12,2484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2484);
	ctx.f12.f64 = double(temp.f32);
loc_82569E8C:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stfs f0,1820(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1820, temp.u32);
	// stfs f12,1824(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1824, temp.u32);
	// lwz r11,1436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1436);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82569e0c
	if (ctx.cr6.lt) goto loc_82569E0C;
loc_82569EA8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82569EBC;
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

__attribute__((alias("__imp__sub_82569ED8"))) PPC_WEAK_FUNC(sub_82569ED8);
PPC_FUNC_IMPL(__imp__sub_82569ED8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f0
	ctx.lr = 0x82569EE0;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// lwz r11,1712(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1712);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82569f20
	if (!ctx.cr6.gt) goto loc_82569F20;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82569F00:
	// lwz r9,1708(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1708);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r23,1412(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1412, ctx.r23.u32);
	// lwz r9,1712(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1712);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82569f00
	if (ctx.cr6.lt) goto loc_82569F00;
loc_82569F20:
	// lwz r11,1456(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1456);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x82569fb8
	if (ctx.cr6.lt) goto loc_82569FB8;
	// beq cr6,0x82569f78
	if (ctx.cr6.eq) goto loc_82569F78;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x82569ff4
	if (!ctx.cr6.lt) goto loc_82569FF4;
	// lwz r10,1616(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1616);
	// addi r9,r29,1600
	ctx.r9.s64 = ctx.r29.s64 + 1600;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82569ff4
	if (!ctx.cr6.gt) goto loc_82569FF4;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_82569F50:
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwzx r8,r8,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r7,1412(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1412, ctx.r7.u32);
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82569f50
	if (ctx.cr6.lt) goto loc_82569F50;
	// b 0x82569ff4
	goto loc_82569FF4;
loc_82569F78:
	// lwz r10,1592(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1592);
	// addi r9,r29,1576
	ctx.r9.s64 = ctx.r29.s64 + 1576;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82569ff4
	if (!ctx.cr6.gt) goto loc_82569FF4;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_82569F90:
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwzx r8,r8,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r7,1412(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1412, ctx.r7.u32);
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82569f90
	if (ctx.cr6.lt) goto loc_82569F90;
	// b 0x82569ff4
	goto loc_82569FF4;
loc_82569FB8:
	// lwz r10,1568(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1568);
	// addi r9,r29,1552
	ctx.r9.s64 = ctx.r29.s64 + 1552;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82569ff4
	if (!ctx.cr6.gt) goto loc_82569FF4;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_82569FD0:
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwzx r8,r8,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r7,1412(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1412, ctx.r7.u32);
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82569fd0
	if (ctx.cr6.lt) goto loc_82569FD0;
loc_82569FF4:
	// lwz r11,1436(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1436);
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
	// lwz r26,1456(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1456);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8256a0d4
	if (!ctx.cr6.gt) goto loc_8256A0D4;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// lis r24,-31949
	ctx.r24.s64 = -2093809664;
	// addi r28,r11,12624
	ctx.r28.s64 = ctx.r11.s64 + 12624;
loc_8256A018:
	// lwz r11,1432(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1432);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r31,r11,r27
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82566fe8
	ctx.lr = 0x8256A030;
	sub_82566FE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8256a0c0
	if (ctx.cr0.eq) goto loc_8256A0C0;
	// lwz r3,1608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8256a05c
	if (ctx.cr6.eq) goto loc_8256A05C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,552(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 552);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8256A054;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8256a060
	goto loc_8256A060;
loc_8256A05C:
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_8256A060:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8256a0c0
	if (ctx.cr6.eq) goto loc_8256A0C0;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82833108
	ctx.lr = 0x8256A070;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8256a0b0
	if (ctx.cr0.eq) goto loc_8256A0B0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,80(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// lwz r22,80(r29)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// bl 0x82833180
	ctx.lr = 0x8256A088;
	sub_82833180(ctx, base);
	// lis r11,-8531
	ctx.r11.s64 = -559087616;
	// stw r22,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r22.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// ori r11,r11,47806
	ctx.r11.u64 = ctx.r11.u64 | 47806;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r26,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r26.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r23,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r23.u32);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// b 0x8256a0b4
	goto loc_8256A0B4;
loc_8256A0B0:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
loc_8256A0B4:
	// lwz r11,13024(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x8256A0C0;
	sub_82833A30(ctx, base);
loc_8256A0C0:
	// lwz r11,1436(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1436);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8256a018
	if (ctx.cr6.lt) goto loc_8256A018;
loc_8256A0D4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8256A0E0"))) PPC_WEAK_FUNC(sub_8256A0E0);
PPC_FUNC_IMPL(__imp__sub_8256A0E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8256A0E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,1436(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1436);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8256a194
	if (!ctx.cr6.gt) goto loc_8256A194;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8256A104:
	// lwz r11,1432(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1432);
	// lwzx r31,r30,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8256a13c
	if (ctx.cr6.eq) goto loc_8256A13C;
	// bl 0x8239db68
	ctx.lr = 0x8256A118;
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
	ctx.lr = 0x8256A130;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// bne 0x8256a140
	if (!ctx.cr0.eq) goto loc_8256A140;
loc_8256A13C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8256A140:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8256a1a0
	if (!ctx.cr6.eq) goto loc_8256A1A0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8256a174
	if (ctx.cr6.eq) goto loc_8256A174;
	// bl 0x8239c4e8
	ctx.lr = 0x8256A154;
	sub_8239C4E8(ctx, base);
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
	ctx.lr = 0x8256A16C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8256a178
	if (!ctx.cr0.eq) goto loc_8256A178;
loc_8256A174:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8256A178:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8256a1a8
	if (!ctx.cr6.eq) goto loc_8256A1A8;
	// lwz r11,1436(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1436);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8256a104
	if (ctx.cr6.lt) goto loc_8256A104;
loc_8256A194:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8256A198:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
loc_8256A1A0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8256a198
	goto loc_8256A198;
loc_8256A1A8:
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x8256a198
	goto loc_8256A198;
}

__attribute__((alias("__imp__sub_8256A1B0"))) PPC_WEAK_FUNC(sub_8256A1B0);
PPC_FUNC_IMPL(__imp__sub_8256A1B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,12576
	ctx.r3.s64 = ctx.r11.s64 + 12576;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256A1C0"))) PPC_WEAK_FUNC(sub_8256A1C0);
PPC_FUNC_IMPL(__imp__sub_8256A1C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8256a210
	ctx.lr = 0x8256A1E0;
	sub_8256A210(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8256a1f4
	if (ctx.cr6.eq) goto loc_8256A1F4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333b08
	ctx.lr = 0x8256A1F4;
	sub_82333B08(ctx, base);
loc_8256A1F4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256A210"))) PPC_WEAK_FUNC(sub_8256A210);
PPC_FUNC_IMPL(__imp__sub_8256A210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,25716
	ctx.r31.s64 = ctx.r11.s64 + 25716;
	// lwz r11,-19324(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19324);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8256a258
	if (!ctx.cr0.eq) goto loc_8256A258;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,12704
	ctx.r9.s64 = ctx.r9.s64 + 12704;
	// stw r11,-19324(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19324, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,21360
	ctx.r3.s64 = ctx.r11.s64 + 21360;
	// bl 0x82a4c758
	ctx.lr = 0x8256A258;
	sub_82A4C758(ctx, base);
loc_8256A258:
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

__attribute__((alias("__imp__sub_8256A270"))) PPC_WEAK_FUNC(sub_8256A270);
PPC_FUNC_IMPL(__imp__sub_8256A270) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,25712(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25712);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8256a2b0
	if (!ctx.cr0.eq) goto loc_8256A2B0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// stw r11,25712(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25712, ctx.r11.u32);
	// addi r3,r9,12576
	ctx.r3.s64 = ctx.r9.s64 + 12576;
	// bl 0x82816528
	ctx.lr = 0x8256A2A8;
	sub_82816528(ctx, base);
	// stw r3,25708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25708, ctx.r3.u32);
	// b 0x8256a2b4
	goto loc_8256A2B4;
loc_8256A2B0:
	// lwz r3,25708(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25708);
loc_8256A2B4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256A2C8"))) PPC_WEAK_FUNC(sub_8256A2C8);
PPC_FUNC_IMPL(__imp__sub_8256A2C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8256a210
	ctx.lr = 0x8256A2E8;
	sub_8256A210(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8256A2FC;
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

__attribute__((alias("__imp__sub_8256A318"))) PPC_WEAK_FUNC(sub_8256A318);
PPC_FUNC_IMPL(__imp__sub_8256A318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8256a350
	if (ctx.cr6.eq) goto loc_8256A350;
	// bl 0x8256a210
	ctx.lr = 0x8256A340;
	sub_8256A210(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8256a350
	if (!ctx.cr6.eq) goto loc_8256A350;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8256a35c
	goto loc_8256A35C;
loc_8256A350:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333c70
	ctx.lr = 0x8256A35C;
	sub_82333C70(ctx, base);
loc_8256A35C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256A378"))) PPC_WEAK_FUNC(sub_8256A378);
PPC_FUNC_IMPL(__imp__sub_8256A378) {
	PPC_FUNC_PROLOGUE();
	// b 0x8256a210
	sub_8256A210(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8256A380"))) PPC_WEAK_FUNC(sub_8256A380);
PPC_FUNC_IMPL(__imp__sub_8256A380) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x8256A39C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8256a3fc
	if (ctx.cr0.eq) goto loc_8256A3FC;
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
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r9,r9,12624
	ctx.r9.s64 = ctx.r9.s64 + 12624;
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
	// b 0x8256a400
	goto loc_8256A400;
loc_8256A3FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8256A400:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256A418"))) PPC_WEAK_FUNC(sub_8256A418);
PPC_FUNC_IMPL(__imp__sub_8256A418) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,16084
	ctx.r3.s64 = ctx.r11.s64 + 16084;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256A428"))) PPC_WEAK_FUNC(sub_8256A428);
PPC_FUNC_IMPL(__imp__sub_8256A428) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// beq cr6,0x8256a468
	if (ctx.cr6.eq) goto loc_8256A468;
	// bl 0x824144b0
	ctx.lr = 0x8256A448;
	sub_824144B0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8256a458
	if (!ctx.cr6.eq) goto loc_8256A458;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8256a46c
	goto loc_8256A46C;
loc_8256A458:
	// bl 0x82333d20
	ctx.lr = 0x8256A45C;
	sub_82333D20(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x8256a46c
	if (ctx.cr6.eq) goto loc_8256A46C;
loc_8256A468:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8256A46C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256A480"))) PPC_WEAK_FUNC(sub_8256A480);
PPC_FUNC_IMPL(__imp__sub_8256A480) {
	PPC_FUNC_PROLOGUE();
	// b 0x824144b0
	sub_824144B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8256A488"))) PPC_WEAK_FUNC(sub_8256A488);
PPC_FUNC_IMPL(__imp__sub_8256A488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,160
	ctx.r3.s64 = 160;
	// bl 0x82833108
	ctx.lr = 0x8256A4A4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8256a4b8
	if (ctx.cr0.eq) goto loc_8256A4B8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8256a530
	ctx.lr = 0x8256A4B4;
	sub_8256A530(ctx, base);
	// b 0x8256a4bc
	goto loc_8256A4BC;
loc_8256A4B8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8256A4BC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256A4D0"))) PPC_WEAK_FUNC(sub_8256A4D0);
PPC_FUNC_IMPL(__imp__sub_8256A4D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x824144b0
	ctx.lr = 0x8256A4F0;
	sub_824144B0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8256a500
	if (!ctx.cr6.eq) goto loc_8256A500;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8256a514
	goto loc_8256A514;
loc_8256A500:
	// bl 0x82333d20
	ctx.lr = 0x8256A504;
	sub_82333D20(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8256a514
	if (ctx.cr6.eq) goto loc_8256A514;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8256A514:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256A530"))) PPC_WEAK_FUNC(sub_8256A530);
PPC_FUNC_IMPL(__imp__sub_8256A530) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x8256A538;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r11,r11,14104
	ctx.r11.s64 = ctx.r11.s64 + 14104;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r10,r10,12728
	ctx.r10.s64 = ctx.r10.s64 + 12728;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r30,r28,12
	ctx.r30.s64 = ctx.r28.s64 + 12;
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// addi r27,r29,12
	ctx.r27.s64 = ctx.r29.s64 + 12;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// li r11,4
	ctx.r11.s64 = 4;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// stw r10,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r10.u32);
	// stw r11,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r11.u32);
	// stw r31,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r31.u32);
	// stw r31,24(r28)
	PPC_STORE_U32(ctx.r28.u32 + 24, ctx.r31.u32);
	// stw r31,28(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28, ctx.r31.u32);
	// stw r31,32(r28)
	PPC_STORE_U32(ctx.r28.u32 + 32, ctx.r31.u32);
	// stw r31,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r31.u32);
	// beq cr6,0x8256a620
	if (ctx.cr6.eq) goto loc_8256A620;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8256a620
	if (!ctx.cr6.gt) goto loc_8256A620;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8256a5c8
	if (ctx.cr0.eq) goto loc_8256A5C8;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332c38
	ctx.lr = 0x8256A5C8;
	sub_82332C38(ctx, base);
loc_8256A5C8:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8256a620
	if (!ctx.cr6.gt) goto loc_8256A620;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
loc_8256A5DC:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332d50
	ctx.lr = 0x8256A5F0;
	sub_82332D50(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8256a60c
	if (ctx.cr0.eq) goto loc_8256A60C;
	// lwz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// lwzx r10,r10,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8256A60C:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8256a5dc
	if (ctx.cr6.lt) goto loc_8256A5DC;
loc_8256A620:
	// lwz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// addi r4,r29,64
	ctx.r4.s64 = ctx.r29.s64 + 64;
	// addi r3,r28,64
	ctx.r3.s64 = ctx.r28.s64 + 64;
	// stw r11,36(r28)
	PPC_STORE_U32(ctx.r28.u32 + 36, ctx.r11.u32);
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// stw r11,40(r28)
	PPC_STORE_U32(ctx.r28.u32 + 40, ctx.r11.u32);
	// lwz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// stw r11,44(r28)
	PPC_STORE_U32(ctx.r28.u32 + 44, ctx.r11.u32);
	// lwz r11,48(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// stw r11,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r11.u32);
	// lfs f0,52(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 52, temp.u32);
	// lfs f0,56(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 56, temp.u32);
	// lwz r11,60(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// stw r11,60(r28)
	PPC_STORE_U32(ctx.r28.u32 + 60, ctx.r11.u32);
	// bl 0x82400a48
	ctx.lr = 0x8256A664;
	sub_82400A48(ctx, base);
	// addi r4,r29,88
	ctx.r4.s64 = ctx.r29.s64 + 88;
	// addi r3,r28,88
	ctx.r3.s64 = ctx.r28.s64 + 88;
	// bl 0x82873b58
	ctx.lr = 0x8256A670;
	sub_82873B58(ctx, base);
	// addi r30,r28,112
	ctx.r30.s64 = ctx.r28.s64 + 112;
	// li r24,8
	ctx.r24.s64 = 8;
	// stw r31,120(r28)
	PPC_STORE_U32(ctx.r28.u32 + 120, ctx.r31.u32);
	// addi r27,r29,112
	ctx.r27.s64 = ctx.r29.s64 + 112;
	// stw r31,124(r28)
	PPC_STORE_U32(ctx.r28.u32 + 124, ctx.r31.u32);
	// stw r24,116(r28)
	PPC_STORE_U32(ctx.r28.u32 + 116, ctx.r24.u32);
	// stw r31,128(r28)
	PPC_STORE_U32(ctx.r28.u32 + 128, ctx.r31.u32);
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// stw r31,132(r28)
	PPC_STORE_U32(ctx.r28.u32 + 132, ctx.r31.u32);
	// stw r31,112(r28)
	PPC_STORE_U32(ctx.r28.u32 + 112, ctx.r31.u32);
	// beq cr6,0x8256a72c
	if (ctx.cr6.eq) goto loc_8256A72C;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8256a72c
	if (!ctx.cr6.gt) goto loc_8256A72C;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8256a6c8
	if (ctx.cr0.eq) goto loc_8256A6C8;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332c38
	ctx.lr = 0x8256A6C8;
	sub_82332C38(ctx, base);
loc_8256A6C8:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8256a72c
	if (!ctx.cr6.gt) goto loc_8256A72C;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
loc_8256A6DC:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332d50
	ctx.lr = 0x8256A6F0;
	sub_82332D50(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8256a718
	if (ctx.cr0.eq) goto loc_8256A718;
	// lwz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// add r9,r10,r26
	ctx.r9.u64 = ctx.r10.u64 + ctx.r26.u64;
	// lwzx r10,r10,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_8256A718:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r26,r26,8
	ctx.r26.s64 = ctx.r26.s64 + 8;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8256a6dc
	if (ctx.cr6.lt) goto loc_8256A6DC;
loc_8256A72C:
	// addi r30,r28,136
	ctx.r30.s64 = ctx.r28.s64 + 136;
	// stw r24,140(r28)
	PPC_STORE_U32(ctx.r28.u32 + 140, ctx.r24.u32);
	// addi r29,r29,136
	ctx.r29.s64 = ctx.r29.s64 + 136;
	// stw r31,144(r28)
	PPC_STORE_U32(ctx.r28.u32 + 144, ctx.r31.u32);
	// stw r31,148(r28)
	PPC_STORE_U32(ctx.r28.u32 + 148, ctx.r31.u32);
	// stw r31,152(r28)
	PPC_STORE_U32(ctx.r28.u32 + 152, ctx.r31.u32);
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// stw r31,156(r28)
	PPC_STORE_U32(ctx.r28.u32 + 156, ctx.r31.u32);
	// stw r31,136(r28)
	PPC_STORE_U32(ctx.r28.u32 + 136, ctx.r31.u32);
	// beq cr6,0x8256a7e0
	if (ctx.cr6.eq) goto loc_8256A7E0;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8256a7e0
	if (!ctx.cr6.gt) goto loc_8256A7E0;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8256a780
	if (ctx.cr0.eq) goto loc_8256A780;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332c38
	ctx.lr = 0x8256A780;
	sub_82332C38(ctx, base);
loc_8256A780:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8256a7e0
	if (!ctx.cr6.gt) goto loc_8256A7E0;
loc_8256A790:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332d50
	ctx.lr = 0x8256A7A4;
	sub_82332D50(ctx, base);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8256a7cc
	if (ctx.cr0.eq) goto loc_8256A7CC;
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// add r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_8256A7CC:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8256a790
	if (ctx.cr6.lt) goto loc_8256A790;
loc_8256A7E0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8256A7F0"))) PPC_WEAK_FUNC(sub_8256A7F0);
PPC_FUNC_IMPL(__imp__sub_8256A7F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8256A7F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r28,r29,136
	ctx.r28.s64 = ctx.r29.s64 + 136;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,152(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 152);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332ca8
	ctx.lr = 0x8256A820;
	sub_82332CA8(ctx, base);
	// lwz r3,148(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 148);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8256a830
	if (ctx.cr6.eq) goto loc_8256A830;
	// bl 0x82332db8
	ctx.lr = 0x8256A830;
	sub_82332DB8(ctx, base);
loc_8256A830:
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r29,112
	ctx.r30.s64 = ctx.r29.s64 + 112;
	// stw r31,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r31.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r31,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r31.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,128(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 128);
	// bl 0x82332ca8
	ctx.lr = 0x8256A85C;
	sub_82332CA8(ctx, base);
	// lwz r3,124(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 124);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8256a86c
	if (ctx.cr6.eq) goto loc_8256A86C;
	// bl 0x82332db8
	ctx.lr = 0x8256A86C;
	sub_82332DB8(ctx, base);
loc_8256A86C:
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
	// addi r3,r29,88
	ctx.r3.s64 = ctx.r29.s64 + 88;
	// stw r31,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r31.u32);
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// bl 0x8239d768
	ctx.lr = 0x8256A880;
	sub_8239D768(ctx, base);
	// addi r3,r29,64
	ctx.r3.s64 = ctx.r29.s64 + 64;
	// bl 0x82400988
	ctx.lr = 0x8256A888;
	sub_82400988(ctx, base);
	// addi r30,r29,12
	ctx.r30.s64 = ctx.r29.s64 + 12;
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r5,28(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332ca8
	ctx.lr = 0x8256A8A4;
	sub_82332CA8(ctx, base);
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8256a8b4
	if (ctx.cr6.eq) goto loc_8256A8B4;
	// bl 0x82332db8
	ctx.lr = 0x8256A8B4;
	sub_82332DB8(ctx, base);
loc_8256A8B4:
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r31.u32);
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// bl 0x82833238
	ctx.lr = 0x8256A8C8;
	sub_82833238(ctx, base);
	// clrlwi. r11,r27,31
	ctx.r11.u64 = ctx.r27.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8256a8d8
	if (ctx.cr0.eq) goto loc_8256A8D8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332db8
	ctx.lr = 0x8256A8D8;
	sub_82332DB8(ctx, base);
loc_8256A8D8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8256A8E8"))) PPC_WEAK_FUNC(sub_8256A8E8);
PPC_FUNC_IMPL(__imp__sub_8256A8E8) {
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
	ctx.lr = 0x8256A900;
	sub_82833180(ctx, base);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,12728
	ctx.r10.s64 = ctx.r10.s64 + 12728;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,24
	ctx.r8.s64 = 24;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lis r7,-32216
	ctx.r7.s64 = -2111307776;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lfs f0,-12104(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -12104);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r8.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r9,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r9.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stw r10,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r10.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// stw r10,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r10.u32);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256A9D0"))) PPC_WEAK_FUNC(sub_8256A9D0);
PPC_FUNC_IMPL(__imp__sub_8256A9D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f4
	ctx.lr = 0x8256A9D8;
	__savegprlr_23(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,7312
	ctx.r3.s64 = ctx.r11.s64 + 7312;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82816528
	ctx.lr = 0x8256A9F4;
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
	ctx.lr = 0x8256AA08;
	sub_82846E98(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r11,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// add r28,r11,r26
	ctx.r28.u64 = ctx.r11.u64 + ctx.r26.u64;
	// ble cr6,0x8256aa54
	if (!ctx.cr6.gt) goto loc_8256AA54;
	// addi r27,r30,88
	ctx.r27.s64 = ctx.r30.s64 + 88;
loc_8256AA34:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82410060
	ctx.lr = 0x8256AA40;
	sub_82410060(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8256aa34
	if (ctx.cr6.lt) goto loc_8256AA34;
loc_8256AA54:
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// addi r25,r30,64
	ctx.r25.s64 = ctx.r30.s64 + 64;
	// lwz r27,68(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8256aa90
	if (!ctx.cr6.gt) goto loc_8256AA90;
	// li r28,0
	ctx.r28.s64 = 0;
loc_8256AA70:
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// add r3,r28,r11
	ctx.r3.u64 = ctx.r28.u64 + ctx.r11.u64;
	// bl 0x82333960
	ctx.lr = 0x8256AA7C;
	sub_82333960(ctx, base);
	// lwz r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,24
	ctx.r28.s64 = ctx.r28.s64 + 24;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8256aa70
	if (ctx.cr6.lt) goto loc_8256AA70;
loc_8256AA90:
	// lwz r11,20(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,16(r25)
	PPC_STORE_U32(ctx.r25.u32 + 16, ctx.r10.u32);
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// beq cr6,0x8256aab8
	if (ctx.cr6.eq) goto loc_8256AAB8;
	// stw r27,20(r25)
	PPC_STORE_U32(ctx.r25.u32 + 20, ctx.r27.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82332c38
	ctx.lr = 0x8256AAB8;
	sub_82332C38(ctx, base);
loc_8256AAB8:
	// lwz r9,68(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8256ab40
	if (!ctx.cr6.gt) goto loc_8256AB40;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// add r27,r11,r26
	ctx.r27.u64 = ctx.r11.u64 + ctx.r26.u64;
	// add r29,r10,r26
	ctx.r29.u64 = ctx.r10.u64 + ctx.r26.u64;
	// ble cr6,0x8256ab40
	if (!ctx.cr6.gt) goto loc_8256AB40;
loc_8256AAE0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// add r4,r11,r26
	ctx.r4.u64 = ctx.r11.u64 + ctx.r26.u64;
	// bl 0x82414568
	ctx.lr = 0x8256AAF0;
	sub_82414568(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// bne cr6,0x8256ab04
	if (!ctx.cr6.eq) goto loc_8256AB04;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8256AB04:
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8256ab20
	if (!ctx.cr6.eq) goto loc_8256AB20;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x824152a0
	ctx.lr = 0x8256AB20;
	sub_824152A0(ctx, base);
loc_8256AB20:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x8256AB28;
	sub_82333960(ctx, base);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8256aae0
	if (ctx.cr6.lt) goto loc_8256AAE0;
loc_8256AB40:
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8256abf0
	if (ctx.cr6.eq) goto loc_8256ABF0;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r3,r30,112
	ctx.r3.s64 = ctx.r30.s64 + 112;
	// bl 0x82332d50
	ctx.lr = 0x8256AB5C;
	sub_82332D50(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r27,0
	ctx.r27.s64 = 0;
	// add r28,r11,r26
	ctx.r28.u64 = ctx.r11.u64 + ctx.r26.u64;
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + ctx.r26.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8256abf0
	if (!ctx.cr6.gt) goto loc_8256ABF0;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r29,0
	ctx.r29.s64 = 0;
	// subf r25,r28,r10
	ctx.r25.s64 = ctx.r10.s64 - ctx.r28.s64;
	// addi r24,r11,-15060
	ctx.r24.s64 = ctx.r11.s64 + -15060;
loc_8256AB8C:
	// lwz r11,124(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwzx r10,r25,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stwx r10,r29,r11
	PPC_STORE_U32(ctx.r29.u32 + ctx.r11.u32, ctx.r10.u32);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,124(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,124(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x823928a0
	ctx.lr = 0x8256ABC0;
	sub_823928A0(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// bl 0x82392e08
	ctx.lr = 0x8256ABC8;
	sub_82392E08(ctx, base);
	// cmplw cr6,r23,r3
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8256abd8
	if (!ctx.cr6.eq) goto loc_8256ABD8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r11.u32);
loc_8256ABD8:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8256ab8c
	if (ctx.cr6.lt) goto loc_8256AB8C;
loc_8256ABF0:
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8256ac68
	if (ctx.cr6.eq) goto loc_8256AC68;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r3,r30,136
	ctx.r3.s64 = ctx.r30.s64 + 136;
	// bl 0x82332d50
	ctx.lr = 0x8256AC0C;
	sub_82332D50(ctx, base);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r9,0
	ctx.r9.s64 = 0;
	// add r8,r10,r26
	ctx.r8.u64 = ctx.r10.u64 + ctx.r26.u64;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x8256ac68
	if (!ctx.cr6.gt) goto loc_8256AC68;
	// li r10,0
	ctx.r10.s64 = 0;
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
loc_8256AC34:
	// lwzx r8,r7,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r6,148(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// stwx r8,r10,r6
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r8.u32);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r8,148(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r6,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r6.u32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8256ac34
	if (ctx.cr6.lt) goto loc_8256AC34;
loc_8256AC68:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8256acc8
	if (ctx.cr6.eq) goto loc_8256ACC8;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// bl 0x82332d50
	ctx.lr = 0x8256AC8C;
	sub_82332D50(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r10,0
	ctx.r10.s64 = 0;
	// add r9,r11,r26
	ctx.r9.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8256acc8
	if (!ctx.cr6.gt) goto loc_8256ACC8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8256ACA8:
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r7,24(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stwx r8,r11,r7
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8256aca8
	if (ctx.cr6.lt) goto loc_8256ACA8;
loc_8256ACC8:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stw r11,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r11.u32);
	// lfs f0,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 52, temp.u32);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// stfs f0,56(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 56, temp.u32);
	// stw r11,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82a4ea44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8256ACF0"))) PPC_WEAK_FUNC(sub_8256ACF0);
PPC_FUNC_IMPL(__imp__sub_8256ACF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f0
	ctx.lr = 0x8256ACF8;
	__savegprlr_22(ctx, base);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// stw r30,112(r26)
	PPC_STORE_U32(ctx.r26.u32 + 112, ctx.r30.u32);
	// addi r28,r1,344
	ctx.r28.s64 = ctx.r1.s64 + 344;
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stw r31,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r31.u32);
	// stfs f0,56(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 56, temp.u32);
	// stw r11,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r11.u32);
	// stw r31,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r31.u32);
	// addi r3,r9,10116
	ctx.r3.s64 = ctx.r9.s64 + 10116;
	// stw r31,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r31.u32);
	// addi r27,r26,44
	ctx.r27.s64 = ctx.r26.s64 + 44;
	// bl 0x82816528
	ctx.lr = 0x8256AD44;
	sub_82816528(ctx, base);
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// li r22,1
	ctx.r22.s64 = 1;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r22,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r22.u32);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lwz r3,13024(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x828250b0
	ctx.lr = 0x8256AD80;
	sub_828250B0(ctx, base);
	// bl 0x82415248
	ctx.lr = 0x8256AD84;
	sub_82415248(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r28,116(r26)
	PPC_STORE_U32(ctx.r26.u32 + 116, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8256ADA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,1428(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1428, ctx.r3.u32);
	// lwz r11,116(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8256b11c
	if (ctx.cr6.eq) goto loc_8256B11C;
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lwz r4,1312(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1312);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8256add0
	if (ctx.cr6.eq) goto loc_8256ADD0;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8256ADC8;
	sub_829B9720(ctx, base);
	// bl 0x82409c40
	ctx.lr = 0x8256ADCC;
	sub_82409C40(ctx, base);
	// b 0x8256add4
	goto loc_8256ADD4;
loc_8256ADD0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8256ADD4:
	// bl 0x82411c50
	ctx.lr = 0x8256ADD8;
	sub_82411C50(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r31,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r31.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stw r31,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r31.u32);
	// stw r31,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r31.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// stw r31,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r31.u32);
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// lwz r4,152(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// stw r11,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r11.u32);
	// stw r31,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r31.u32);
	// stw r31,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r31.u32);
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// stw r31,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r31.u32);
	// stw r11,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r11.u32);
	// stw r31,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r31.u32);
	// stw r31,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r31.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stw r31,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r31.u32);
	// stw r11,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r11.u32);
	// stw r31,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r31.u32);
	// stw r31,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r31.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// stw r31,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r31.u32);
	// stw r11,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r11.u32);
	// stw r31,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r31.u32);
	// stw r31,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r31.u32);
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stw r31,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r31.u32);
	// stw r11,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r11.u32);
	// stw r31,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r31.u32);
	// stw r31,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r31.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// stw r31,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r31.u32);
	// bl 0x82332d50
	ctx.lr = 0x8256AE84;
	sub_82332D50(ctx, base);
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r4,152(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82332d50
	ctx.lr = 0x8256AE98;
	sub_82332D50(ctx, base);
	// lwz r11,152(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8256aeec
	if (!ctx.cr6.gt) goto loc_8256AEEC;
	// lwz r10,204(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// lwz r8,172(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
loc_8256AEB8:
	// lwz r8,148(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stwx r8,r7,r10
	PPC_STORE_U32(ctx.r7.u32 + ctx.r10.u32, ctx.r8.u32);
	// lwz r8,148(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// lwzx r8,r11,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r8,152(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8256aeb8
	if (ctx.cr6.lt) goto loc_8256AEB8;
loc_8256AEEC:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r26,124
	ctx.r4.s64 = ctx.r26.s64 + 124;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8256d040
	ctx.lr = 0x8256AF00;
	sub_8256D040(ctx, base);
	// lwz r11,140(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 140);
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8256aff8
	if (!ctx.cr6.gt) goto loc_8256AFF8;
	// mr r24,r31
	ctx.r24.u64 = ctx.r31.u64;
loc_8256AF14:
	// lwz r11,136(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 136);
	// lwzx r29,r24,r11
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r11.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8256afe4
	if (ctx.cr6.eq) goto loc_8256AFE4;
	// bl 0x8247a928
	ctx.lr = 0x8256AF28;
	sub_8247A928(ctx, base);
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
	ctx.lr = 0x8256AF40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8256af4c
	if (!ctx.cr0.eq) goto loc_8256AF4C;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
loc_8256AF4C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8256afe4
	if (ctx.cr6.eq) goto loc_8256AFE4;
	// lwz r11,6144(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6144);
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8256af9c
	if (!ctx.cr6.gt) goto loc_8256AF9C;
	// stw r25,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r25.u32);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_8256AF6C:
	// lwz r11,6140(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6140);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// add r4,r28,r11
	ctx.r4.u64 = ctx.r28.u64 + ctx.r11.u64;
	// bl 0x82410060
	ctx.lr = 0x8256AF7C;
	sub_82410060(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82410060
	ctx.lr = 0x8256AF88;
	sub_82410060(ctx, base);
	// lwz r11,6144(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6144);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8256af6c
	if (ctx.cr6.lt) goto loc_8256AF6C;
loc_8256AF9C:
	// lwz r11,6168(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6168);
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8256afe4
	if (!ctx.cr6.gt) goto loc_8256AFE4;
	// stw r25,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r25.u32);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_8256AFB4:
	// lwz r11,6164(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6164);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// add r4,r28,r11
	ctx.r4.u64 = ctx.r28.u64 + ctx.r11.u64;
	// bl 0x82410060
	ctx.lr = 0x8256AFC4;
	sub_82410060(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82410060
	ctx.lr = 0x8256AFD0;
	sub_82410060(ctx, base);
	// lwz r11,6168(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6168);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8256afb4
	if (ctx.cr6.lt) goto loc_8256AFB4;
loc_8256AFE4:
	// lwz r11,140(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 140);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8256af14
	if (ctx.cr6.lt) goto loc_8256AF14;
loc_8256AFF8:
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// addi r7,r30,88
	ctx.r7.s64 = ctx.r30.s64 + 88;
	// addi r6,r30,64
	ctx.r6.s64 = ctx.r30.s64 + 64;
	// lwz r3,116(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 116);
	// stw r7,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r7.u32);
	// addi r9,r1,224
	ctx.r9.s64 = ctx.r1.s64 + 224;
	// stw r6,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r6.u32);
	// addi r8,r1,288
	ctx.r8.s64 = ctx.r1.s64 + 288;
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// lwz r10,128(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// addi r6,r1,256
	ctx.r6.s64 = ctx.r1.s64 + 256;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// stw r22,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r22.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stw r22,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r22.u32);
	// stw r22,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r22.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x82413278
	ctx.lr = 0x8256B048;
	sub_82413278(ctx, base);
	// lwz r11,116(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8256b05c
	if (ctx.cr6.eq) goto loc_8256B05C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8256d250
	ctx.lr = 0x8256B05C;
	sub_8256D250(ctx, base);
loc_8256B05C:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x8256b088
	if (ctx.cr6.eq) goto loc_8256B088;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r11,1444(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1444);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8256B078;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,36(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8256b088
	if (ctx.cr6.eq) goto loc_8256B088;
	// bl 0x824b7380
	ctx.lr = 0x8256B088;
	sub_824B7380(ctx, base);
loc_8256B088:
	// lwz r11,128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8256b0ec
	if (!ctx.cr6.gt) goto loc_8256B0EC;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_8256B0A0:
	// lwz r8,136(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 136);
	// lwzx r8,r10,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8256b0b8
	if (ctx.cr6.eq) goto loc_8256B0B8;
	// lwz r7,80(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 80);
	// b 0x8256b0bc
	goto loc_8256B0BC;
loc_8256B0B8:
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
loc_8256B0BC:
	// lwz r8,116(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 116);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r6,1480(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1480);
	// stwx r31,r11,r6
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r31.u32);
	// lwz r8,1480(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1480);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r8,128(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8256b0a0
	if (ctx.cr6.lt) goto loc_8256B0A0;
loc_8256B0EC:
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8239d768
	ctx.lr = 0x8256B0F4;
	sub_8239D768(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8239d768
	ctx.lr = 0x8256B0FC;
	sub_8239D768(ctx, base);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x8239d768
	ctx.lr = 0x8256B104;
	sub_8239D768(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8239d768
	ctx.lr = 0x8256B10C;
	sub_8239D768(ctx, base);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x8239d768
	ctx.lr = 0x8256B114;
	sub_8239D768(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8239d768
	ctx.lr = 0x8256B11C;
	sub_8239D768(ctx, base);
loc_8256B11C:
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x82a4ea40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8256B128"))) PPC_WEAK_FUNC(sub_8256B128);
PPC_FUNC_IMPL(__imp__sub_8256B128) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,12800
	ctx.r3.s64 = ctx.r11.s64 + 12800;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256B138"))) PPC_WEAK_FUNC(sub_8256B138);
PPC_FUNC_IMPL(__imp__sub_8256B138) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// beq cr6,0x8256b178
	if (ctx.cr6.eq) goto loc_8256B178;
	// bl 0x8256c4e0
	ctx.lr = 0x8256B158;
	sub_8256C4E0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8256b168
	if (!ctx.cr6.eq) goto loc_8256B168;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8256b17c
	goto loc_8256B17C;
loc_8256B168:
	// bl 0x82333d20
	ctx.lr = 0x8256B16C;
	sub_82333D20(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x8256b17c
	if (ctx.cr6.eq) goto loc_8256B17C;
loc_8256B178:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8256B17C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256B190"))) PPC_WEAK_FUNC(sub_8256B190);
PPC_FUNC_IMPL(__imp__sub_8256B190) {
	PPC_FUNC_PROLOGUE();
	// b 0x8256c4e0
	sub_8256C4E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8256B198"))) PPC_WEAK_FUNC(sub_8256B198);
PPC_FUNC_IMPL(__imp__sub_8256B198) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x82833108
	ctx.lr = 0x8256B1B4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8256b1c8
	if (ctx.cr0.eq) goto loc_8256B1C8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8256b240
	ctx.lr = 0x8256B1C4;
	sub_8256B240(ctx, base);
	// b 0x8256b1cc
	goto loc_8256B1CC;
loc_8256B1C8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8256B1CC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256B1E0"))) PPC_WEAK_FUNC(sub_8256B1E0);
PPC_FUNC_IMPL(__imp__sub_8256B1E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8256c4e0
	ctx.lr = 0x8256B200;
	sub_8256C4E0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8256b210
	if (!ctx.cr6.eq) goto loc_8256B210;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8256b224
	goto loc_8256B224;
loc_8256B210:
	// bl 0x82333d20
	ctx.lr = 0x8256B214;
	sub_82333D20(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8256b224
	if (ctx.cr6.eq) goto loc_8256B224;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8256B224:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256B240"))) PPC_WEAK_FUNC(sub_8256B240);
PPC_FUNC_IMPL(__imp__sub_8256B240) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8256B248;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r11,r11,14104
	ctx.r11.s64 = ctx.r11.s64 + 14104;
	// addi r10,r10,12832
	ctx.r10.s64 = ctx.r10.s64 + 12832;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r31,r30,24
	ctx.r31.s64 = ctx.r30.s64 + 24;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// addi r28,r29,24
	ctx.r28.s64 = ctx.r29.s64 + 24;
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// lfs f0,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// lfs f0,12(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// lfs f0,16(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// lwz r9,20(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// stw r9,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r9.u32);
	// stw r10,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r10.u32);
	// stw r11,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r11.u32);
	// stw r11,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r11.u32);
	// stw r11,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
	// stw r11,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r11.u32);
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// beq cr6,0x8256b30c
	if (ctx.cr6.eq) goto loc_8256B30C;
	// lwz r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8256b30c
	if (!ctx.cr6.gt) goto loc_8256B30C;
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8256b2f0
	if (ctx.cr0.eq) goto loc_8256B2F0;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c38
	ctx.lr = 0x8256B2F0;
	sub_82332C38(ctx, base);
loc_8256B2F0:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r4,12(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82a45878
	ctx.lr = 0x8256B304;
	sub_82A45878(ctx, base);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_8256B30C:
	// lwz r11,48(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8256B320"))) PPC_WEAK_FUNC(sub_8256B320);
PPC_FUNC_IMPL(__imp__sub_8256B320) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8256B328;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r11,r11,12832
	ctx.r11.s64 = ctx.r11.s64 + 12832;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8256b39c
	if (!ctx.cr6.gt) goto loc_8256B39C;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_8256B358:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8256b388
	if (ctx.cr6.eq) goto loc_8256B388;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8256b388
	if (ctx.cr6.eq) goto loc_8256B388;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8256B388;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8256B388:
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8256b358
	if (ctx.cr6.lt) goto loc_8256B358;
loc_8256B39C:
	// addi r31,r30,24
	ctx.r31.s64 = ctx.r30.s64 + 24;
	// lwz r5,40(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332ca8
	ctx.lr = 0x8256B3B8;
	sub_82332CA8(ctx, base);
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8256b3c8
	if (ctx.cr6.eq) goto loc_8256B3C8;
	// bl 0x82332db8
	ctx.lr = 0x8256B3C8;
	sub_82332DB8(ctx, base);
loc_8256B3C8:
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// bl 0x82833238
	ctx.lr = 0x8256B3DC;
	sub_82833238(ctx, base);
	// clrlwi. r11,r27,31
	ctx.r11.u64 = ctx.r27.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8256b3ec
	if (ctx.cr0.eq) goto loc_8256B3EC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332db8
	ctx.lr = 0x8256B3EC;
	sub_82332DB8(ctx, base);
loc_8256B3EC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8256B3F8"))) PPC_WEAK_FUNC(sub_8256B3F8);
PPC_FUNC_IMPL(__imp__sub_8256B3F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x8256B400;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// lwz r30,1436(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1436);
	// stfs f0,16(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 16, temp.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x8256b454
	if (!ctx.cr6.gt) goto loc_8256B454;
loc_8256B430:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,20(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// bl 0x825670f0
	ctx.lr = 0x8256B43C;
	sub_825670F0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8256b448
	if (ctx.cr0.eq) goto loc_8256B448;
	// stw r26,2228(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2228, ctx.r26.u32);
loc_8256B448:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x8256b430
	if (ctx.cr6.lt) goto loc_8256B430;
loc_8256B454:
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8256b490
	if (!ctx.cr6.gt) goto loc_8256B490;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_8256B468:
	// lwz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r5,20(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x8256d4b8
	ctx.lr = 0x8256B47C;
	sub_8256D4B8(ctx, base);
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8256b468
	if (ctx.cr6.lt) goto loc_8256B468;
loc_8256B490:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8256b630
	ctx.lr = 0x8256B498;
	sub_8256B630(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8256bc28
	ctx.lr = 0x8256B4A4;
	sub_8256BC28(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8256be78
	ctx.lr = 0x8256B4B0;
	sub_8256BE78(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8256c110
	ctx.lr = 0x8256B4B8;
	sub_8256C110(ctx, base);
	// lwz r11,48(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8256b614
	if (ctx.cr6.eq) goto loc_8256B614;
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8256b614
	if (!ctx.cr6.gt) goto loc_8256B614;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
loc_8256B4D8:
	// lwz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// lwzx r30,r11,r28
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// lwz r11,116(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8256b600
	if (!ctx.cr6.eq) goto loc_8256B600;
	// lwz r11,148(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8256b600
	if (ctx.cr6.eq) goto loc_8256B600;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8256b600
	if (ctx.cr6.eq) goto loc_8256B600;
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8256b54c
	if (!ctx.cr6.gt) goto loc_8256B54C;
	// lwz r9,76(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
loc_8256B518:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8256b534
	if (ctx.cr6.eq) goto loc_8256B534;
	// lwz r8,128(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 128);
	// lwz r7,128(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8256b538
	if (ctx.cr6.lt) goto loc_8256B538;
loc_8256B534:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_8256B538:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x8256b518
	if (!ctx.cr0.eq) goto loc_8256B518;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8256b590
	if (!ctx.cr6.eq) goto loc_8256B590;
loc_8256B54C:
	// lwz r31,104(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x8256b588
	if (!ctx.cr6.gt) goto loc_8256B588;
	// bl 0x82a4cd78
	ctx.lr = 0x8256B55C;
	sub_82A4CD78(ctx, base);
	// divw r9,r3,r31
	ctx.r9.s32 = ctx.r3.s32 / ctx.r31.s32;
	// rotlwi r11,r3,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// lwz r10,100(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// mullw r9,r9,r31
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r31.s32);
	// subf r9,r9,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r9.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// andc r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 & ~ctx.r11.u64;
	// twllei r31,0
	// twlgei r11,-1
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
loc_8256B588:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8256b600
	if (ctx.cr6.eq) goto loc_8256B600;
loc_8256B590:
	// lfs f0,56(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// lfs f13,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8256b5a8
	if (ctx.cr6.lt) goto loc_8256B5A8;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8256B5A8:
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8256b5c4
	if (ctx.cr6.eq) goto loc_8256B5C4;
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8256b5cc
	if (!ctx.cr6.gt) goto loc_8256B5CC;
	// b 0x8256b600
	goto loc_8256B600;
loc_8256B5C4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8256b600
	if (ctx.cr6.eq) goto loc_8256B600;
loc_8256B5CC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8256acf0
	ctx.lr = 0x8256B5D4;
	sub_8256ACF0(ctx, base);
	// lwz r11,116(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8256b600
	if (ctx.cr6.eq) goto loc_8256B600;
	// lwz r10,1464(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1464);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8256b5f4
	if (ctx.cr6.eq) goto loc_8256B5F4;
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bne cr6,0x8256b600
	if (!ctx.cr6.eq) goto loc_8256B600;
loc_8256B5F4:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r26,1460(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1460, ctx.r26.u32);
	// stw r10,1464(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1464, ctx.r10.u32);
loc_8256B600:
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8256b4d8
	if (ctx.cr6.lt) goto loc_8256B4D8;
loc_8256B614:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8256b810
	ctx.lr = 0x8256B61C;
	sub_8256B810(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8256ba68
	ctx.lr = 0x8256B624;
	sub_8256BA68(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8256B630"))) PPC_WEAK_FUNC(sub_8256B630);
PPC_FUNC_IMPL(__imp__sub_8256B630) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x8256B638;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8256b808
	if (!ctx.cr6.gt) goto loc_8256B808;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// lis r27,-31949
	ctx.r27.s64 = -2093809664;
loc_8256B65C:
	// lwz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// lwzx r9,r30,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r11,116(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8256b7f4
	if (ctx.cr6.eq) goto loc_8256B7F4;
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8256b7f4
	if (!ctx.cr6.eq) goto loc_8256B7F4;
	// lwz r10,1464(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1464);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8256b790
	if (!ctx.cr6.gt) goto loc_8256B790;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// ble cr6,0x8256b6a0
	if (!ctx.cr6.gt) goto loc_8256B6A0;
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// ble cr6,0x8256b790
	if (!ctx.cr6.gt) goto loc_8256B790;
	// cmpwi cr6,r10,11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 11, ctx.xer);
	// bgt cr6,0x8256b790
	if (ctx.cr6.gt) goto loc_8256B790;
loc_8256B6A0:
	// lwz r10,1532(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1532);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8256b6f0
	if (ctx.cr6.eq) goto loc_8256B6F0;
	// lwz r10,1464(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1464);
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// beq cr6,0x8256b6f0
	if (ctx.cr6.eq) goto loc_8256B6F0;
	// lwz r8,1532(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1532);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bgt cr6,0x8256b6d4
	if (ctx.cr6.gt) goto loc_8256B6D4;
	// lwz r8,1448(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1448);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8256b6f0
	if (ctx.cr6.eq) goto loc_8256B6F0;
loc_8256B6D4:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8256b6e4
	if (ctx.cr6.eq) goto loc_8256B6E4;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8256b6f0
	if (!ctx.cr6.eq) goto loc_8256B6F0;
loc_8256B6E4:
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r26,1460(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1460, ctx.r26.u32);
	// stw r10,1464(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1464, ctx.r10.u32);
loc_8256B6F0:
	// lwz r10,116(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 116);
	// lwz r11,1464(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1464);
	// lwz r8,1460(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1460);
	// lwz r10,1508(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1508);
	// addi r7,r11,-12
	ctx.r7.s64 = ctx.r11.s64 + -12;
	// addi r11,r11,-11
	ctx.r11.s64 = ctx.r11.s64 + -11;
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// cntlzw r8,r7
	ctx.r8.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// or. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8256b7f4
	if (!ctx.cr0.eq) goto loc_8256B7F4;
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lwz r31,112(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 112);
	// lwz r4,1312(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1312);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8256b754
	if (ctx.cr6.eq) goto loc_8256B754;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8256B74C;
	sub_829B9720(ctx, base);
	// bl 0x82409c40
	ctx.lr = 0x8256B750;
	sub_82409C40(ctx, base);
	// b 0x8256b758
	goto loc_8256B758;
loc_8256B754:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_8256B758:
	// bl 0x82411c50
	ctx.lr = 0x8256B75C;
	sub_82411C50(ctx, base);
	// lfs f0,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8256b7f4
	if (ctx.cr0.eq) goto loc_8256B7F4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1444(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1444);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8256B77C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8256b7f4
	if (ctx.cr6.eq) goto loc_8256B7F4;
	// bl 0x824b7380
	ctx.lr = 0x8256B78C;
	sub_824B7380(ctx, base);
	// b 0x8256b7f4
	goto loc_8256B7F4;
loc_8256B790:
	// lwz r10,1556(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1556);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8256b7f4
	if (ctx.cr6.eq) goto loc_8256B7F4;
	// lwz r10,1464(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1464);
	// cmpwi cr6,r10,12
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 12, ctx.xer);
	// beq cr6,0x8256b7f4
	if (ctx.cr6.eq) goto loc_8256B7F4;
	// lwz r10,1532(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1532);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8256b7f4
	if (ctx.cr6.eq) goto loc_8256B7F4;
	// lwz r10,1464(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1464);
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// beq cr6,0x8256b7f4
	if (ctx.cr6.eq) goto loc_8256B7F4;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// beq cr6,0x8256b7d4
	if (ctx.cr6.eq) goto loc_8256B7D4;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// bne cr6,0x8256b7f4
	if (!ctx.cr6.eq) goto loc_8256B7F4;
loc_8256B7D4:
	// lwz r10,1556(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1556);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8256b7ec
	if (!ctx.cr6.gt) goto loc_8256B7EC;
	// li r10,10
	ctx.r10.s64 = 10;
	// stw r26,1460(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1460, ctx.r26.u32);
	// b 0x8256b7f0
	goto loc_8256B7F0;
loc_8256B7EC:
	// li r10,12
	ctx.r10.s64 = 12;
loc_8256B7F0:
	// stw r10,1464(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1464, ctx.r10.u32);
loc_8256B7F4:
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8256b65c
	if (ctx.cr6.lt) goto loc_8256B65C;
loc_8256B808:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8256B810"))) PPC_WEAK_FUNC(sub_8256B810);
PPC_FUNC_IMPL(__imp__sub_8256B810) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9e4
	ctx.lr = 0x8256B818;
	__savegprlr_19(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// lwz r11,40(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 40);
	// addic. r22,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r22.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// blt 0x8256ba5c
	if (ctx.cr0.lt) goto loc_8256BA5C;
	// rlwinm r19,r22,2,0,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// li r21,0
	ctx.r21.s64 = 0;
	// lis r23,-31949
	ctx.r23.s64 = -2093809664;
loc_8256B838:
	// lwz r11,36(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 36);
	// lwzx r24,r19,r11
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r19.u32 + ctx.r11.u32);
	// lwz r11,12(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8256b858
	if (ctx.cr6.eq) goto loc_8256B858;
	// lwz r11,36(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 36);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x8256ba50
	if (ctx.cr6.gt) goto loc_8256BA50;
loc_8256B858:
	// lwz r3,116(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8256b9c0
	if (ctx.cr6.eq) goto loc_8256B9C0;
	// lwz r11,1464(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1464);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8256b888
	if (!ctx.cr6.gt) goto loc_8256B888;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// ble cr6,0x8256ba50
	if (!ctx.cr6.gt) goto loc_8256BA50;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// ble cr6,0x8256b888
	if (!ctx.cr6.gt) goto loc_8256B888;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// ble cr6,0x8256ba50
	if (!ctx.cr6.gt) goto loc_8256BA50;
loc_8256B888:
	// bl 0x82413b78
	ctx.lr = 0x8256B88C;
	sub_82413B78(ctx, base);
	// lwz r11,13024(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 13024);
	// lwz r27,84(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// lwz r28,116(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + 116);
	// lwz r25,1164(r27)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1164);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8256B8B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,76(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8256b8d0
	if (!ctx.cr6.gt) goto loc_8256B8D0;
	// lwz r11,84(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 84);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,84(r28)
	PPC_STORE_U32(ctx.r28.u32 + 84, ctx.r11.u32);
	// b 0x8256b9a4
	goto loc_8256B9A4;
loc_8256B8D0:
	// lwz r11,68(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8256b970
	if (!ctx.cr6.eq) goto loc_8256B970;
	// lwz r26,1160(r27)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1160);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8256B8F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,964(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 964);
	// addi r29,r27,948
	ctx.r29.s64 = ctx.r27.s64 + 948;
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8256b950
	if (!ctx.cr6.gt) goto loc_8256B950;
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
loc_8256B90C:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x8256b93c
	if (!ctx.cr6.eq) goto loc_8256B93C;
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
	ctx.lr = 0x8256B934;
	sub_82332CA8(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
loc_8256B93C:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8256b90c
	if (ctx.cr6.lt) goto loc_8256B90C;
loc_8256B950:
	// lwz r11,84(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 84);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,84(r28)
	PPC_STORE_U32(ctx.r28.u32 + 84, ctx.r11.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8256B970;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8256B970:
	// lwz r11,84(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8256b9a4
	if (!ctx.cr0.eq) goto loc_8256B9A4;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8256B990;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8256b9a4
	if (ctx.cr0.eq) goto loc_8256B9A4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r27,924
	ctx.r3.s64 = ctx.r27.s64 + 924;
	// bl 0x82410060
	ctx.lr = 0x8256B9A4;
	sub_82410060(ctx, base);
loc_8256B9A4:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8256B9B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r21,116(r24)
	PPC_STORE_U32(ctx.r24.u32 + 116, ctx.r21.u32);
	// b 0x8256ba50
	goto loc_8256BA50;
loc_8256B9C0:
	// lwz r11,36(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 36);
	// addic. r29,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r29.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x8256ba38
	if (ctx.cr0.lt) goto loc_8256BA38;
	// addi r27,r24,20
	ctx.r27.s64 = ctx.r24.s64 + 20;
	// rlwinm r31,r29,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
loc_8256B9D4:
	// lwz r10,32(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 32);
	// lwz r11,13024(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 13024);
	// lwzx r28,r10,r31
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x829b9720
	ctx.lr = 0x8256B9EC;
	sub_829B9720(ctx, base);
	// bl 0x82333a20
	ctx.lr = 0x8256B9F0;
	sub_82333A20(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8256ba14
	if (ctx.cr0.eq) goto loc_8256BA14;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,20(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 20);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82567050
	ctx.lr = 0x8256BA08;
	sub_82567050(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8256ba14
	if (ctx.cr0.eq) goto loc_8256BA14;
	// stw r21,2228(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2228, ctx.r21.u32);
loc_8256BA14:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8254f1a8
	ctx.lr = 0x8256BA24;
	sub_8254F1A8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r11,148(r24)
	PPC_STORE_U32(ctx.r24.u32 + 148, ctx.r11.u32);
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// bge 0x8256b9d4
	if (!ctx.cr0.lt) goto loc_8256B9D4;
loc_8256BA38:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r20,24
	ctx.r3.s64 = ctx.r20.s64 + 24;
	// bl 0x82332ca8
	ctx.lr = 0x8256BA50;
	sub_82332CA8(ctx, base);
loc_8256BA50:
	// addic. r22,r22,-1
	ctx.xer.ca = ctx.r22.u32 > 0;
	ctx.r22.s64 = ctx.r22.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// addi r19,r19,-4
	ctx.r19.s64 = ctx.r19.s64 + -4;
	// bge 0x8256b838
	if (!ctx.cr0.lt) goto loc_8256B838;
loc_8256BA5C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82a4ea34
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8256BA68"))) PPC_WEAK_FUNC(sub_8256BA68);
PPC_FUNC_IMPL(__imp__sub_8256BA68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9e8
	ctx.lr = 0x8256BA70;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// li r20,0
	ctx.r20.s64 = 0;
	// lwz r11,40(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8256bc1c
	if (!ctx.cr6.gt) goto loc_8256BC1C;
	// li r23,0
	ctx.r23.s64 = 0;
	// lis r21,-31949
	ctx.r21.s64 = -2093809664;
loc_8256BA90:
	// lwz r11,36(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 36);
	// lwzx r24,r23,r11
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r11.u32);
	// lwz r3,116(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8256bc08
	if (ctx.cr6.eq) goto loc_8256BC08;
	// lwz r11,1464(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1464);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8256bac8
	if (!ctx.cr6.gt) goto loc_8256BAC8;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// ble cr6,0x8256bc08
	if (!ctx.cr6.gt) goto loc_8256BC08;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// ble cr6,0x8256bac8
	if (!ctx.cr6.gt) goto loc_8256BAC8;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// ble cr6,0x8256bc08
	if (!ctx.cr6.gt) goto loc_8256BC08;
loc_8256BAC8:
	// bl 0x82413b78
	ctx.lr = 0x8256BACC;
	sub_82413B78(ctx, base);
	// lwz r11,13024(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 13024);
	// lwz r27,84(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// lwz r28,116(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + 116);
	// lwz r25,1164(r27)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1164);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8256BAF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,76(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8256bb10
	if (!ctx.cr6.gt) goto loc_8256BB10;
	// lwz r11,84(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 84);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,84(r28)
	PPC_STORE_U32(ctx.r28.u32 + 84, ctx.r11.u32);
	// b 0x8256bbe4
	goto loc_8256BBE4;
loc_8256BB10:
	// lwz r11,68(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8256bbb0
	if (!ctx.cr6.eq) goto loc_8256BBB0;
	// lwz r26,1160(r27)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1160);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8256BB34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,964(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 964);
	// addi r29,r27,948
	ctx.r29.s64 = ctx.r27.s64 + 948;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8256bb90
	if (!ctx.cr6.gt) goto loc_8256BB90;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8256BB4C:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x8256bb7c
	if (!ctx.cr6.eq) goto loc_8256BB7C;
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
	ctx.lr = 0x8256BB74;
	sub_82332CA8(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
loc_8256BB7C:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8256bb4c
	if (ctx.cr6.lt) goto loc_8256BB4C;
loc_8256BB90:
	// lwz r11,84(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 84);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,84(r28)
	PPC_STORE_U32(ctx.r28.u32 + 84, ctx.r11.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8256BBB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8256BBB0:
	// lwz r11,84(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8256bbe4
	if (!ctx.cr0.eq) goto loc_8256BBE4;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8256BBD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8256bbe4
	if (ctx.cr0.eq) goto loc_8256BBE4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r27,924
	ctx.r3.s64 = ctx.r27.s64 + 924;
	// bl 0x82410060
	ctx.lr = 0x8256BBE4;
	sub_82410060(ctx, base);
loc_8256BBE4:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8256BBF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r11,116(r24)
	PPC_STORE_U32(ctx.r24.u32 + 116, ctx.r11.u32);
	// bl 0x8256d358
	ctx.lr = 0x8256BC08;
	sub_8256D358(ctx, base);
loc_8256BC08:
	// lwz r11,40(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 40);
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// addi r23,r23,4
	ctx.r23.s64 = ctx.r23.s64 + 4;
	// cmpw cr6,r20,r11
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8256ba90
	if (ctx.cr6.lt) goto loc_8256BA90;
loc_8256BC1C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82a4ea38
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8256BC28"))) PPC_WEAK_FUNC(sub_8256BC28);
PPC_FUNC_IMPL(__imp__sub_8256BC28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f4
	ctx.lr = 0x8256BC30;
	__savegprlr_23(ctx, base);
	// stfd f29,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f29.u64);
	// stfd f30,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f30.u64);
	// stfd f31,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r4,1312(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1312);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8256bc6c
	if (ctx.cr6.eq) goto loc_8256BC6C;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8256BC64;
	sub_829B9720(ctx, base);
	// bl 0x82409c40
	ctx.lr = 0x8256BC68;
	sub_82409C40(ctx, base);
	// b 0x8256bc70
	goto loc_8256BC70;
loc_8256BC6C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8256BC70:
	// bl 0x82411c50
	ctx.lr = 0x8256BC74;
	sub_82411C50(ctx, base);
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r23,1436(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1436);
	// beq 0x8256be64
	if (ctx.cr0.eq) goto loc_8256BE64;
	// lwz r3,1412(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1412);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8256be64
	if (ctx.cr6.eq) goto loc_8256BE64;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x824395b8
	ctx.lr = 0x8256BC98;
	sub_824395B8(ctx, base);
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8256bd00
	if (!ctx.cr6.gt) goto loc_8256BD00;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8256BCAC:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8256be64
	if (!ctx.cr6.eq) goto loc_8256BE64;
	// lwz r11,36(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// lwzx r31,r11,r30
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8256bcec
	if (ctx.cr6.eq) goto loc_8256BCEC;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256cb98
	ctx.lr = 0x8256BCD4;
	sub_8256CB98(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8256bcec
	if (ctx.cr0.eq) goto loc_8256BCEC;
	// stw r31,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r31.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256cec0
	ctx.lr = 0x8256BCEC;
	sub_8256CEC0(ctx, base);
loc_8256BCEC:
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8256bcac
	if (ctx.cr6.lt) goto loc_8256BCAC;
loc_8256BD00:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8256be64
	if (!ctx.cr6.eq) goto loc_8256BE64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// ble cr6,0x8256be64
	if (!ctx.cr6.gt) goto loc_8256BE64;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r25,-32242
	ctx.r25.s64 = -2113011712;
	// lfs f29,18184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18184);
	ctx.f29.f64 = double(temp.f32);
loc_8256BD24:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,20(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// bl 0x825670f0
	ctx.lr = 0x8256BD30;
	sub_825670F0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8256be58
	if (ctx.cr0.eq) goto loc_8256BE58;
	// lwz r11,624(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 624);
	// lfs f0,628(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 628);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,620(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 620);
	// lfs f13,624(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 624);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,628(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 628);
	// lfs f12,620(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 620);
	ctx.f12.f64 = double(temp.f32);
	// lfs f31,-32608(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + -32608);
	ctx.f31.f64 = double(temp.f32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f10,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lfs f9,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// fsubs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fsubs f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f30,f12,f12,f0
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// bl 0x823a9930
	ctx.lr = 0x8256BD88;
	sub_823A9930(ctx, base);
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
	ctx.lr = 0x8256BDA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bne 0x8256bdb0
	if (!ctx.cr0.eq) goto loc_8256BDB0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8256BDB0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8256bdbc
	if (ctx.cr6.eq) goto loc_8256BDBC;
	// fmr f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f29.f64;
loc_8256BDBC:
	// fcmpu cr6,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// bge cr6,0x8256be58
	if (!ctx.cr6.lt) goto loc_8256BE58;
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8256be48
	if (!ctx.cr6.eq) goto loc_8256BE48;
	// li r3,152
	ctx.r3.s64 = 152;
	// bl 0x82833108
	ctx.lr = 0x8256BDD8;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8256bdec
	if (ctx.cr0.eq) goto loc_8256BDEC;
	// bl 0x8256c8f0
	ctx.lr = 0x8256BDE4;
	sub_8256C8F0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x8256bdf0
	goto loc_8256BDF0;
loc_8256BDEC:
	// li r29,0
	ctx.r29.s64 = 0;
loc_8256BDF0:
	// addi r31,r28,24
	ctx.r31.s64 = ctx.r28.s64 + 24;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332d50
	ctx.lr = 0x8256BE08;
	sub_82332D50(ctx, base);
	// lwz r11,36(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8256be1c
	if (ctx.cr0.eq) goto loc_8256BE1C;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
loc_8256BE1C:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,36(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,-4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r3,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r3.u32);
	// bl 0x8256cec0
	ctx.lr = 0x8256BE3C;
	sub_8256CEC0(ctx, base);
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8256be58
	if (ctx.cr6.eq) goto loc_8256BE58;
loc_8256BE48:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8256cec0
	ctx.lr = 0x8256BE50;
	sub_8256CEC0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,2228(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2228, ctx.r11.u32);
loc_8256BE58:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpw cr6,r26,r23
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x8256bd24
	if (ctx.cr6.lt) goto loc_8256BD24;
loc_8256BE64:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f29,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f30,-96(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x82a4ea44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8256BE78"))) PPC_WEAK_FUNC(sub_8256BE78);
PPC_FUNC_IMPL(__imp__sub_8256BE78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9d4
	ctx.lr = 0x8256BE80;
	__savegprlr_15(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// li r18,0
	ctx.r18.s64 = 0;
	// lwz r11,20(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 20);
	// lwz r17,1436(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1436);
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// ble cr6,0x8256c104
	if (!ctx.cr6.gt) goto loc_8256C104;
	// lis r15,-32242
	ctx.r15.s64 = -2113011712;
	// li r19,1
	ctx.r19.s64 = 1;
	// lis r16,-31949
	ctx.r16.s64 = -2093809664;
loc_8256BEA8:
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// lwz r3,20(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 20);
	// bl 0x825670f0
	ctx.lr = 0x8256BEB4;
	sub_825670F0(ctx, base);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq 0x8256c0f8
	if (ctx.cr0.eq) goto loc_8256C0F8;
	// lwz r11,2228(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 2228);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8256c0f8
	if (!ctx.cr6.eq) goto loc_8256C0F8;
	// lwz r10,620(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 620);
	// addi r11,r18,1
	ctx.r11.s64 = ctx.r18.s64 + 1;
	// lwz r9,624(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 624);
	// li r23,0
	ctx.r23.s64 = 0;
	// lwz r8,628(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 628);
	// mr r20,r11
	ctx.r20.u64 = ctx.r11.u64;
	// cmpw cr6,r11,r17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r17.s32, ctx.xer);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// bge cr6,0x8256c0f8
	if (!ctx.cr6.lt) goto loc_8256C0F8;
loc_8256BEF4:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// lwz r3,20(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 20);
	// bl 0x825670f0
	ctx.lr = 0x8256BF00;
	sub_825670F0(ctx, base);
	// mr. r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq 0x8256c020
	if (ctx.cr0.eq) goto loc_8256C020;
	// lwz r11,2228(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 2228);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8256c020
	if (!ctx.cr6.eq) goto loc_8256C020;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x8256bf2c
	if (ctx.cr6.eq) goto loc_8256BF2C;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8256cb98
	ctx.lr = 0x8256BF28;
	sub_8256CB98(ctx, base);
	// b 0x8256bf84
	goto loc_8256BF84;
loc_8256BF2C:
	// lwz r11,628(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 628);
	// lfs f13,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,620(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 620);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lwz r9,624(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 624);
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,-32608(r15)
	temp.u32 = PPC_LOAD_U32(ctx.r15.u32 + -32608);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lfs f10,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f10.f64 = double(temp.f32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lfs f9,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f9.f64 = double(temp.f32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// lfs f8,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f13,f13,f8
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f8.f64));
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fsubs f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// fsubs f11,f11,f9
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f9.f64));
	// fmadds f13,f12,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f13,f11,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f13.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8256c0ec
	if (!ctx.cr6.lt) goto loc_8256C0EC;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
loc_8256BF84:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8256c0ec
	if (ctx.cr6.eq) goto loc_8256C0EC;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x8256c00c
	if (!ctx.cr6.eq) goto loc_8256C00C;
	// li r3,152
	ctx.r3.s64 = 152;
	// bl 0x82833108
	ctx.lr = 0x8256BF9C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8256bfb0
	if (ctx.cr0.eq) goto loc_8256BFB0;
	// bl 0x8256c8f0
	ctx.lr = 0x8256BFA8;
	sub_8256C8F0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8256bfb4
	goto loc_8256BFB4;
loc_8256BFB0:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8256BFB4:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8256cec0
	ctx.lr = 0x8256BFC0;
	sub_8256CEC0(ctx, base);
	// addi r31,r21,24
	ctx.r31.s64 = ctx.r21.s64 + 24;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332d50
	ctx.lr = 0x8256BFD8;
	sub_82332D50(ctx, base);
	// lwz r11,36(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 36);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8256bfec
	if (ctx.cr0.eq) goto loc_8256BFEC;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
loc_8256BFEC:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,36(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 36);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r23,-4(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r19,2228(r26)
	PPC_STORE_U32(ctx.r26.u32 + 2228, ctx.r19.u32);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x8256c0ec
	if (ctx.cr6.eq) goto loc_8256C0EC;
loc_8256C00C:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8256cec0
	ctx.lr = 0x8256C018;
	sub_8256CEC0(ctx, base);
	// stw r19,2228(r22)
	PPC_STORE_U32(ctx.r22.u32 + 2228, ctx.r19.u32);
	// b 0x8256c0ec
	goto loc_8256C0EC;
loc_8256C020:
	// lwz r11,40(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 40);
	// li r24,0
	ctx.r24.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8256c0ec
	if (!ctx.cr6.gt) goto loc_8256C0EC;
	// li r27,0
	ctx.r27.s64 = 0;
loc_8256C038:
	// lwz r11,36(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 36);
	// lwzx r31,r27,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8256c0ac
	if (ctx.cr6.eq) goto loc_8256C0AC;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8256c0ac
	if (!ctx.cr6.gt) goto loc_8256C0AC;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8256C060:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x8256c0a8
	if (!ctx.cr6.eq) goto loc_8256C0A8;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r11,13024(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 13024);
	// lwzx r4,r10,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8256C07C;
	sub_829B9720(ctx, base);
	// bl 0x82333a20
	ctx.lr = 0x8256C080;
	sub_82333A20(ctx, base);
	// cmplw cr6,r22,r3
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8256c08c
	if (!ctx.cr6.eq) goto loc_8256C08C;
	// mr r28,r19
	ctx.r28.u64 = ctx.r19.u64;
loc_8256C08C:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8256c060
	if (ctx.cr6.lt) goto loc_8256C060;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8256c0ac
	if (ctx.cr6.eq) goto loc_8256C0AC;
loc_8256C0A8:
	// mr r24,r31
	ctx.r24.u64 = ctx.r31.u64;
loc_8256C0AC:
	// lwz r11,40(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 40);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8256c038
	if (ctx.cr6.lt) goto loc_8256C038;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8256c0ec
	if (ctx.cr6.eq) goto loc_8256C0EC;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8256cb98
	ctx.lr = 0x8256C0D4;
	sub_8256CB98(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8256c0ec
	if (ctx.cr0.eq) goto loc_8256C0EC;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8256cec0
	ctx.lr = 0x8256C0E8;
	sub_8256CEC0(ctx, base);
	// stw r19,2228(r26)
	PPC_STORE_U32(ctx.r26.u32 + 2228, ctx.r19.u32);
loc_8256C0EC:
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// cmpw cr6,r20,r17
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r17.s32, ctx.xer);
	// blt cr6,0x8256bef4
	if (ctx.cr6.lt) goto loc_8256BEF4;
loc_8256C0F8:
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// cmpw cr6,r18,r17
	ctx.cr6.compare<int32_t>(ctx.r18.s32, ctx.r17.s32, ctx.xer);
	// blt cr6,0x8256bea8
	if (ctx.cr6.lt) goto loc_8256BEA8;
loc_8256C104:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82a4ea24
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8256C110"))) PPC_WEAK_FUNC(sub_8256C110);
PPC_FUNC_IMPL(__imp__sub_8256C110) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9e0
	ctx.lr = 0x8256C118;
	__savegprlr_18(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r20,r29
	ctx.r20.u64 = ctx.r29.u64;
	// lwz r11,20(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// lwz r10,40(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 40);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r19,2084(r11)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2084);
	// ble cr6,0x8256c38c
	if (!ctx.cr6.gt) goto loc_8256C38C;
	// mr r21,r29
	ctx.r21.u64 = ctx.r29.u64;
	// lis r18,-31949
	ctx.r18.s64 = -2093809664;
loc_8256C144:
	// lwz r11,36(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 36);
	// lwzx r26,r11,r21
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r21.u32);
	// addi r23,r26,64
	ctx.r23.s64 = ctx.r26.s64 + 64;
	// lwz r11,84(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 84);
	// stw r29,80(r26)
	PPC_STORE_U32(ctx.r26.u32 + 80, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8256c174
	if (ctx.cr6.eq) goto loc_8256C174;
	// stw r29,20(r23)
	PPC_STORE_U32(ctx.r23.u32 + 20, ctx.r29.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82332c38
	ctx.lr = 0x8256C174;
	sub_82332C38(ctx, base);
loc_8256C174:
	// lwz r11,108(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 108);
	// addi r22,r26,88
	ctx.r22.s64 = ctx.r26.s64 + 88;
	// stw r29,104(r26)
	PPC_STORE_U32(ctx.r26.u32 + 104, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8256c19c
	if (ctx.cr6.eq) goto loc_8256C19C;
	// stw r29,20(r22)
	PPC_STORE_U32(ctx.r22.u32 + 20, ctx.r29.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82332c38
	ctx.lr = 0x8256C19C;
	sub_82332C38(ctx, base);
loc_8256C19C:
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// ble cr6,0x8256c354
	if (!ctx.cr6.gt) goto loc_8256C354;
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
loc_8256C1AC:
	// lwz r11,20(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// blt cr6,0x8256c1d0
	if (ctx.cr6.lt) goto loc_8256C1D0;
	// lwz r10,2084(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2084);
	// cmpw cr6,r27,r10
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8256c1d0
	if (!ctx.cr6.lt) goto loc_8256C1D0;
	// lwz r11,2080(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2080);
	// lwzx r30,r11,r25
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
loc_8256C1D0:
	// lwz r11,13024(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 13024);
	// li r28,1
	ctx.r28.s64 = 1;
	// lwz r4,1312(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1312);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8256c1f4
	if (ctx.cr6.eq) goto loc_8256C1F4;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8256C1EC;
	sub_829B9720(ctx, base);
	// bl 0x82409c40
	ctx.lr = 0x8256C1F0;
	sub_82409C40(ctx, base);
	// b 0x8256c1f8
	goto loc_8256C1F8;
loc_8256C1F4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_8256C1F8:
	// bl 0x82411c50
	ctx.lr = 0x8256C1FC;
	sub_82411C50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8256c28c
	if (ctx.cr0.eq) goto loc_8256C28C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1444(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1444);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8256C214;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8256c234
	if (ctx.cr6.eq) goto loc_8256C234;
	// bl 0x824b7438
	ctx.lr = 0x8256C228;
	sub_824B7438(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8256c234
	if (!ctx.cr0.eq) goto loc_8256C234;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_8256C234:
	// lwz r5,28(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x8256c284
	if (!ctx.cr6.gt) goto loc_8256C284;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
loc_8256C248:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8256c344
	if (ctx.cr6.eq) goto loc_8256C344;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwzx r4,r11,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8256c274
	if (ctx.cr6.eq) goto loc_8256C274;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b7438
	ctx.lr = 0x8256C268;
	sub_824B7438(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8256c274
	if (ctx.cr0.eq) goto loc_8256C274;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_8256C274:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x8256c248
	if (ctx.cr6.lt) goto loc_8256C248;
loc_8256C284:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8256c344
	if (ctx.cr6.eq) goto loc_8256C344;
loc_8256C28C:
	// lwz r11,36(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 36);
	// lwz r10,128(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8256c344
	if (!ctx.cr6.eq) goto loc_8256C344;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// bl 0x8256d040
	ctx.lr = 0x8256C2CC;
	sub_8256D040(ctx, base);
	// lwz r11,128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r31,r11,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// beq cr6,0x8256c304
	if (ctx.cr6.eq) goto loc_8256C304;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82332c38
	ctx.lr = 0x8256C304;
	sub_82332C38(ctx, base);
loc_8256C304:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8239d768
	ctx.lr = 0x8256C30C;
	sub_8239D768(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x8256c344
	if (ctx.cr6.eq) goto loc_8256C344;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8256c330
	if (ctx.cr6.gt) goto loc_8256C330;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8256c338
	if (ctx.cr6.eq) goto loc_8256C338;
loc_8256C330:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// b 0x8256c33c
	goto loc_8256C33C;
loc_8256C338:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
loc_8256C33C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x826426d0
	ctx.lr = 0x8256C344;
	sub_826426D0(ctx, base);
loc_8256C344:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// cmpw cr6,r27,r19
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r19.s32, ctx.xer);
	// blt cr6,0x8256c1ac
	if (ctx.cr6.lt) goto loc_8256C1AC;
loc_8256C354:
	// lwz r11,120(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8256c378
	if (ctx.cr6.eq) goto loc_8256C378;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r4,r26,44
	ctx.r4.s64 = ctx.r26.s64 + 44;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 460);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8256C378;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8256C378:
	// lwz r11,40(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 40);
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// addi r21,r21,4
	ctx.r21.s64 = ctx.r21.s64 + 4;
	// cmpw cr6,r20,r11
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8256c144
	if (ctx.cr6.lt) goto loc_8256C144;
loc_8256C38C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82a4ea30
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8256C398"))) PPC_WEAK_FUNC(sub_8256C398);
PPC_FUNC_IMPL(__imp__sub_8256C398) {
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
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x82833108
	ctx.lr = 0x8256C3B0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8256c420
	if (ctx.cr0.eq) goto loc_8256C420;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82833180
	ctx.lr = 0x8256C3C0;
	sub_82833180(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r7,r11,12832
	ctx.r7.s64 = ctx.r11.s64 + 12832;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-31963
	ctx.r8.s64 = -2094727168;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// lfs f0,20416(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20416);
	ctx.f0.f64 = double(temp.f32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lfs f13,904(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f13.f64 = double(temp.f32);
	// stw r6,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r6.u32);
	// lfs f12,16816(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 16816);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f13,16(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stw r7,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r7.u32);
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// b 0x8256c424
	goto loc_8256C424;
loc_8256C420:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8256C424:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256C438"))) PPC_WEAK_FUNC(sub_8256C438);
PPC_FUNC_IMPL(__imp__sub_8256C438) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,25704(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25704);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8256c478
	if (!ctx.cr0.eq) goto loc_8256C478;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// stw r11,25704(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25704, ctx.r11.u32);
	// addi r3,r9,12800
	ctx.r3.s64 = ctx.r9.s64 + 12800;
	// bl 0x82816528
	ctx.lr = 0x8256C470;
	sub_82816528(ctx, base);
	// stw r3,25700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25700, ctx.r3.u32);
	// b 0x8256c47c
	goto loc_8256C47C;
loc_8256C478:
	// lwz r3,25700(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25700);
loc_8256C47C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256C490"))) PPC_WEAK_FUNC(sub_8256C490);
PPC_FUNC_IMPL(__imp__sub_8256C490) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8256c4e0
	ctx.lr = 0x8256C4B0;
	sub_8256C4E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8256C4C4;
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

__attribute__((alias("__imp__sub_8256C4E0"))) PPC_WEAK_FUNC(sub_8256C4E0);
PPC_FUNC_IMPL(__imp__sub_8256C4E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,12232
	ctx.r31.s64 = ctx.r11.s64 + 12232;
	// lwz r11,12228(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12228);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8256c528
	if (!ctx.cr0.eq) goto loc_8256C528;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,12904
	ctx.r9.s64 = ctx.r9.s64 + 12904;
	// stw r11,12228(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12228, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,21384
	ctx.r3.s64 = ctx.r11.s64 + 21384;
	// bl 0x82a4c758
	ctx.lr = 0x8256C528;
	sub_82A4C758(ctx, base);
loc_8256C528:
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

__attribute__((alias("__imp__sub_8256C540"))) PPC_WEAK_FUNC(sub_8256C540);
PPC_FUNC_IMPL(__imp__sub_8256C540) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,12924
	ctx.r3.s64 = ctx.r11.s64 + 12924;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256C550"))) PPC_WEAK_FUNC(sub_8256C550);
PPC_FUNC_IMPL(__imp__sub_8256C550) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8256c588
	if (ctx.cr6.eq) goto loc_8256C588;
	// bl 0x8256d710
	ctx.lr = 0x8256C578;
	sub_8256D710(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8256c588
	if (!ctx.cr6.eq) goto loc_8256C588;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8256c594
	goto loc_8256C594;
loc_8256C588:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82338a28
	ctx.lr = 0x8256C594;
	sub_82338A28(ctx, base);
loc_8256C594:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256C5B0"))) PPC_WEAK_FUNC(sub_8256C5B0);
PPC_FUNC_IMPL(__imp__sub_8256C5B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8256d710
	sub_8256D710(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8256C5B8"))) PPC_WEAK_FUNC(sub_8256C5B8);
PPC_FUNC_IMPL(__imp__sub_8256C5B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,1424
	ctx.r3.s64 = 1424;
	// bl 0x82833108
	ctx.lr = 0x8256C5D8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8256c620
	if (ctx.cr0.eq) goto loc_8256C620;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82338b88
	ctx.lr = 0x8256C5EC;
	sub_82338B88(ctx, base);
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
	// lwz r11,1408(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1408);
	// stw r11,1408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1408, ctx.r11.u32);
	// b 0x8256c624
	goto loc_8256C624;
loc_8256C620:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8256C624:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256C640"))) PPC_WEAK_FUNC(sub_8256C640);
PPC_FUNC_IMPL(__imp__sub_8256C640) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8256d710
	ctx.lr = 0x8256C660;
	sub_8256D710(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8256c670
	if (!ctx.cr6.eq) goto loc_8256C670;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8256c688
	goto loc_8256C688;
loc_8256C670:
	// bl 0x82338750
	ctx.lr = 0x8256C674;
	sub_82338750(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8256c688
	if (ctx.cr6.eq) goto loc_8256C688;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82338858
	ctx.lr = 0x8256C688;
	sub_82338858(ctx, base);
loc_8256C688:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

