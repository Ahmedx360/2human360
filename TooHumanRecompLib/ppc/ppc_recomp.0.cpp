#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82330000"))) PPC_WEAK_FUNC(sub_82330000);
PPC_FUNC_IMPL(__imp__sub_82330000) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,13508
	ctx.r3.s64 = ctx.r11.s64 + 13508;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82330010"))) PPC_WEAK_FUNC(sub_82330010);
PPC_FUNC_IMPL(__imp__sub_82330010) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82330048
	if (ctx.cr6.eq) goto loc_82330048;
	// bl 0x82332100
	ctx.lr = 0x82330038;
	sub_82332100(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82330048
	if (!ctx.cr6.eq) goto loc_82330048;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82330054
	goto loc_82330054;
loc_82330048:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333c70
	ctx.lr = 0x82330054;
	sub_82333C70(ctx, base);
loc_82330054:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82330070"))) PPC_WEAK_FUNC(sub_82330070);
PPC_FUNC_IMPL(__imp__sub_82330070) {
	PPC_FUNC_PROLOGUE();
	// b 0x82332100
	sub_82332100(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82330078"))) PPC_WEAK_FUNC(sub_82330078);
PPC_FUNC_IMPL(__imp__sub_82330078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x82330094;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823300f4
	if (ctx.cr0.eq) goto loc_823300F4;
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
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r9,r9,13832
	ctx.r9.s64 = ctx.r9.s64 + 13832;
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
	// b 0x823300f8
	goto loc_823300F8;
loc_823300F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823300F8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82330110"))) PPC_WEAK_FUNC(sub_82330110);
PPC_FUNC_IMPL(__imp__sub_82330110) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82332100
	ctx.lr = 0x82330130;
	sub_82332100(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82330144
	if (ctx.cr6.eq) goto loc_82330144;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333b08
	ctx.lr = 0x82330144;
	sub_82333B08(ctx, base);
loc_82330144:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82330160"))) PPC_WEAK_FUNC(sub_82330160);
PPC_FUNC_IMPL(__imp__sub_82330160) {
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
	// bl 0x8281b200
	ctx.lr = 0x82330178;
	sub_8281B200(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// addi r6,r11,14400
	ctx.r6.s64 = ctx.r11.s64 + 14400;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r9,11204
	ctx.r10.s64 = ctx.r9.s64 + 11204;
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r10.u32);
	// addi r7,r7,11204
	ctx.r7.s64 = ctx.r7.s64 + 11204;
	// stfs f0,516(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 516, temp.u32);
	// stfs f0,512(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 512, temp.u32);
	// stw r11,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r11.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// lfs f13,908(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 908);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,524(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 524, temp.u32);
	// stw r7,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r7.u32);
	// stfs f13,528(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 528, temp.u32);
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r10,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r11.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r11,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r11.u32);
	// li r6,100
	ctx.r6.s64 = 100;
	// stw r11,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r11.u32);
	// stw r11,532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 532, ctx.r11.u32);
	// stw r8,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r8.u32);
	// stw r11,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r11.u32);
	// stw r11,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r11.u32);
	// stw r11,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r11.u32);
	// stw r11,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r11.u32);
	// stw r11,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r11.u32);
	// stfs f0,632(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 632, temp.u32);
	// stfs f13,636(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 636, temp.u32);
	// stw r7,628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 628, ctx.r7.u32);
	// stfs f13,456(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 456, temp.u32);
	// stw r6,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r6.u32);
	// stfs f13,588(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 588, temp.u32);
	// stw r11,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r11.u32);
	// stw r11,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r11.u32);
	// stw r9,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r9.u32);
	// stw r11,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r11.u32);
	// stw r11,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r11.u32);
	// stw r10,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r10.u32);
	// stw r9,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r9.u32);
	// stw r11,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r11.u32);
	// stw r11,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r11.u32);
	// stw r11,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r11.u32);
	// stw r11,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r11.u32);
	// stw r11,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r11.u32);
	// stw r10,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r10.u32);
	// stw r11,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r11.u32);
	// stw r11,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r11.u32);
	// stw r10,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r10.u32);
	// stw r11,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82330280"))) PPC_WEAK_FUNC(sub_82330280);
PPC_FUNC_IMPL(__imp__sub_82330280) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r30,r10,11204
	ctx.r30.s64 = ctx.r10.s64 + 11204;
	// addi r11,r11,14400
	ctx.r11.s64 = ctx.r11.s64 + 14400;
	// stw r30,628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 628, ctx.r30.u32);
	// addi r3,r31,564
	ctx.r3.s64 = ctx.r31.s64 + 564;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8239d768
	ctx.lr = 0x823302B8;
	sub_8239D768(ctx, base);
	// addi r3,r31,532
	ctx.r3.s64 = ctx.r31.s64 + 532;
	// bl 0x8284aff8
	ctx.lr = 0x823302C0;
	sub_8284AFF8(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stw r30,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,11204
	ctx.r11.s64 = ctx.r11.s64 + 11204;
	// stw r11,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r11.u32);
	// bl 0x8281b2f0
	ctx.lr = 0x823302D8;
	sub_8281B2F0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823302F0"))) PPC_WEAK_FUNC(sub_823302F0);
PPC_FUNC_IMPL(__imp__sub_823302F0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8233050c
	if (ctx.cr6.eq) goto loc_8233050C;
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x8233050c
	if (!ctx.cr6.gt) goto loc_8233050C;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8233050c
	if (ctx.cr6.eq) goto loc_8233050C;
	// lwz r10,64(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 64);
	// rlwinm. r10,r10,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8233050c
	if (ctx.cr0.eq) goto loc_8233050C;
	// lwz r10,460(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 460);
	// rlwinm. r10,r10,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8233050c
	if (!ctx.cr0.eq) goto loc_8233050C;
	// lfs f13,320(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 320);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lfs f0,332(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,320(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 320);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,332(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 332);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f11,324(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 324);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,336(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 336);
	ctx.f12.f64 = double(temp.f32);
	// addi r8,r5,316
	ctx.r8.s64 = ctx.r5.s64 + 316;
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f31,30996(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 30996);
	ctx.f31.f64 = double(temp.f32);
	// lfs f10,336(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 336);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,324(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 324);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// lfs f9,316(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 316);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,328(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 328);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f10,f10,f9
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// lfs f8,328(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 328);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfs f9,316(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 316);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f9,f8,f9
	ctx.f9.f64 = double(float(ctx.f8.f64 - ctx.f9.f64));
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fmuls f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fmuls f11,f11,f31
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// fmuls f10,f10,f31
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmuls f9,f9,f31
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
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
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// fadds f30,f0,f13
	ctx.f30.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// bl 0x8281b988
	ctx.lr = 0x823303E0;
	sub_8281B988(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8281b988
	ctx.lr = 0x823303F0;
	sub_8281B988(ctx, base);
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// fsubs f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f0,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
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
	// bge cr6,0x82330438
	if (!ctx.cr6.lt) goto loc_82330438;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_82330438:
	// fcmpu cr6,f13,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f30.f64);
	// ble cr6,0x82330444
	if (!ctx.cr6.gt) goto loc_82330444;
	// fmr f13,f30
	ctx.f13.f64 = ctx.f30.f64;
loc_82330444:
	// lfs f12,4(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,332(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 332);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// fsubs f9,f0,f12
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f12,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,336(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 336);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// fsubs f8,f0,f12
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f12,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,328(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 328);
	ctx.f0.f64 = double(temp.f32);
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// fsubs f7,f0,f12
	ctx.f7.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfd f10,16376(r11)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16376);
	// lfd f0,16368(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16368);
	// lfs f12,-32460(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -32460);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,908(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 908);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f9,f9,f31
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// fmuls f8,f8,f31
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// fmuls f7,f7,f31
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// fmuls f9,f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fmadds f9,f8,f8,f9
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f9.f64));
	// fmadds f9,f7,f7,f9
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f9.f64));
	// fsqrts f9,f9
	ctx.f9.f64 = double(float(sqrt(ctx.f9.f64)));
	// fdivs f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f9.f64));
	// fsel f13,f13,f13,f10
	ctx.f13.f64 = ctx.f13.f64 >= 0.0 ? ctx.f13.f64 : ctx.f10.f64;
	// fsub f10,f13,f0
	ctx.f10.f64 = ctx.f13.f64 - ctx.f0.f64;
	// fsel f0,f10,f0,f13
	ctx.f0.f64 = ctx.f10.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x823304d0
	if (!ctx.cr6.gt) goto loc_823304D0;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,-25080
	ctx.r11.s64 = ctx.r11.s64 + -25080;
	// lfs f11,-20060(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -20060);
	ctx.f11.f64 = double(temp.f32);
	// b 0x823304ec
	goto loc_823304EC;
loc_823304D0:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x823304ec
	if (!ctx.cr6.gt) goto loc_823304EC;
	// fsubs f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f0,-25080(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -25080);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fnmsubs f11,f0,f12,f11
	ctx.f11.f64 = double(float(-(ctx.f0.f64 * ctx.f12.f64 - ctx.f11.f64)));
loc_823304EC:
	// extsw r11,r6
	ctx.r11.s64 = ctx.r6.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r7
	PPC_STORE_U32(ctx.r7.u32, ctx.f0.u32);
loc_8233050C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_82330528"))) PPC_WEAK_FUNC(sub_82330528);
PPC_FUNC_IMPL(__imp__sub_82330528) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82330530;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82330564
	if (ctx.cr6.eq) goto loc_82330564;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,560(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 560);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8233055C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82330568
	goto loc_82330568;
loc_82330564:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82330568:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82330588
	if (ctx.cr6.eq) goto loc_82330588;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,560(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 560);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82330584;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8233058c
	goto loc_8233058C;
loc_82330588:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8233058C:
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lwz r6,10548(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10548);
	// beq cr6,0x823305e4
	if (ctx.cr6.eq) goto loc_823305E4;
	// lwz r11,1740(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1740);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r8,2184(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2184);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823305dc
	if (!ctx.cr6.gt) goto loc_823305DC;
	// lwz r10,1736(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1736);
loc_823305BC:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,2184(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2184);
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x823305d0
	if (!ctx.cr6.gt) goto loc_823305D0;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
loc_823305D0:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x823305bc
	if (!ctx.cr0.eq) goto loc_823305BC;
loc_823305DC:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x82330624
	goto loc_82330624;
loc_823305E4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82330624
	if (ctx.cr6.eq) goto loc_82330624;
	// lwz r11,1740(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1740);
	// li r8,1
	ctx.r8.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82330620
	if (!ctx.cr6.gt) goto loc_82330620;
	// lwz r10,1736(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1736);
loc_82330600:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,2184(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2184);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x82330614
	if (!ctx.cr6.gt) goto loc_82330614;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
loc_82330614:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x82330600
	if (!ctx.cr0.eq) goto loc_82330600;
loc_82330620:
	// lwz r11,2184(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2184);
loc_82330624:
	// lwz r10,3576(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 3576);
	// subf r11,r11,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r11.s64;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lfs f13,3564(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 3564);
	ctx.f13.f64 = double(temp.f32);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lfs f0,16356(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16356);
	ctx.f0.f64 = double(temp.f32);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82330660
	if (!ctx.cr6.gt) goto loc_82330660;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82330660:
	// fneg f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82330670
	if (!ctx.cr6.lt) goto loc_82330670;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82330670:
	// extsw r11,r28
	ctx.r11.s64 = ctx.r28.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823306A0"))) PPC_WEAK_FUNC(sub_823306A0);
PPC_FUNC_IMPL(__imp__sub_823306A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f0
	ctx.lr = 0x823306A8;
	__savegprlr_22(ctx, base);
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x82a61744
	ctx.lr = 0x823306B0;
	__savefpr_27(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// lwz r11,460(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 460);
	// rlwinm. r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823306d8
	if (ctx.cr0.eq) goto loc_823306D8;
	// lwz r3,452(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 452);
	// b 0x82330ce0
	goto loc_82330CE0;
loc_823306D8:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r24,24
	ctx.r3.s64 = ctx.r24.s64 + 24;
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// bl 0x8281d960
	ctx.lr = 0x823306E8;
	sub_8281D960(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x823306f8
	if (!ctx.cr0.eq) goto loc_823306F8;
loc_823306F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82330ce0
	goto loc_82330CE0;
loc_823306F8:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r4,448(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 448);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8233070C;
	sub_829B9720(ctx, base);
	// bl 0x82333a20
	ctx.lr = 0x82330710;
	sub_82333A20(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82330728;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82330754
	if (ctx.cr6.eq) goto loc_82330754;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82332868
	ctx.lr = 0x82330744;
	sub_82332868(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823328c8
	ctx.lr = 0x82330750;
	sub_823328C8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82330754:
	// lwa r11,452(r25)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r25.u32 + 452));
	// lfs f0,456(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 456);
	ctx.f0.f64 = double(temp.f32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x823302f0
	ctx.lr = 0x82330790;
	sub_823302F0(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r29,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r29.u32);
	// beq cr6,0x823307bc
	if (ctx.cr6.eq) goto loc_823307BC;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,560(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 560);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823307B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8233081c
	if (!ctx.cr0.eq) goto loc_8233081C;
loc_823307BC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8233081c
	if (!ctx.cr6.eq) goto loc_8233081C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8233081c
	if (ctx.cr6.eq) goto loc_8233081C;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,1424(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1424);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823307E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8233081c
	if (ctx.cr0.eq) goto loc_8233081C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823306f0
	if (ctx.cr6.eq) goto loc_823306F0;
	// extsw r11,r29
	ctx.r11.s64 = ctx.r29.s32;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,24724(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24724);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_8233081C:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// lfs f30,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f30.f64 = double(temp.f32);
	// beq cr6,0x82330928
	if (ctx.cr6.eq) goto loc_82330928;
	// lwz r9,3864(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 3864);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82330860
	if (!ctx.cr6.gt) goto loc_82330860;
	// lwz r8,3860(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 3860);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82330844:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x823309cc
	if (ctx.cr6.eq) goto loc_823309CC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82330844
	if (ctx.cr6.lt) goto loc_82330844;
loc_82330860:
	// fmr f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f30.f64;
loc_82330864:
	// extsw r11,r29
	ctx.r11.s64 = ctx.r29.s32;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,1772(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1772);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82330898;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r31,r3,r29
	ctx.r31.u64 = ctx.r3.u64 + ctx.r29.u64;
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// stw r31,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r31.u32);
	// ble cr6,0x823308bc
	if (!ctx.cr6.gt) goto loc_823308BC;
	// fctiwz f0,f31
	ctx.f0.s64 = (ctx.f31.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f31.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r31,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r31.u32);
loc_823308BC:
	// lwz r11,24(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r10,28(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28);
	// lwz r9,32(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// bl 0x8281d960
	ctx.lr = 0x823308DC;
	sub_8281D960(ctx, base);
	// bl 0x82332928
	ctx.lr = 0x823308E0;
	sub_82332928(ctx, base);
	// mr. r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x8233090c
	if (ctx.cr0.eq) goto loc_8233090C;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,1712(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1712);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82330904;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r31,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r31.u32);
loc_8233090C:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82330528
	ctx.lr = 0x82330920;
	sub_82330528(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r29,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r29.u32);
loc_82330928:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8233094c
	if (ctx.cr6.eq) goto loc_8233094C;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,1996(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1996);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82330948;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// subf r29,r3,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r3.s64;
loc_8233094C:
	// lwz r11,548(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 548);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82330afc
	if (!ctx.cr6.gt) goto loc_82330AFC;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r26,-31949
	ctx.r26.s64 = -2093809664;
	// lfs f28,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f28.f64 = double(temp.f32);
	// lfd f29,16368(r10)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16368);
loc_82330974:
	// lwz r11,544(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 544);
	// lwz r10,64(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 64);
	// add r7,r31,r11
	ctx.r7.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// and. r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82330ae8
	if (ctx.cr0.eq) goto loc_82330AE8;
	// lfs f0,4(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82330aa0
	if (ctx.cr6.eq) goto loc_82330AA0;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bgt cr6,0x823309dc
	if (ctx.cr6.gt) goto loc_823309DC;
	// beq cr6,0x82330a04
	if (ctx.cr6.eq) goto loc_82330A04;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823309f4
	if (!ctx.cr6.gt) goto loc_823309F4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x82330a04
	if (!ctx.cr6.gt) goto loc_82330A04;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x823309fc
	if (ctx.cr6.eq) goto loc_823309FC;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x823309fc
	if (ctx.cr6.eq) goto loc_823309FC;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// b 0x823309f0
	goto loc_823309F0;
loc_823309CC:
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82330864
	goto loc_82330864;
loc_823309DC:
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// beq cr6,0x82330a04
	if (ctx.cr6.eq) goto loc_82330A04;
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// beq cr6,0x823309fc
	if (ctx.cr6.eq) goto loc_823309FC;
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
loc_823309F0:
	// beq cr6,0x823309fc
	if (ctx.cr6.eq) goto loc_823309FC;
loc_823309F4:
	// fmr f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f30.f64;
	// b 0x82330a08
	goto loc_82330A08;
loc_823309FC:
	// lfs f31,2520(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 2520);
	ctx.f31.f64 = double(temp.f32);
	// b 0x82330a08
	goto loc_82330A08;
loc_82330A04:
	// lfs f31,2516(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 2516);
	ctx.f31.f64 = double(temp.f32);
loc_82330A08:
	// lwz r9,3864(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3864);
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82330a40
	if (!ctx.cr6.gt) goto loc_82330A40;
	// lwz r8,3860(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3860);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82330A24:
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82330bf4
	if (ctx.cr6.eq) goto loc_82330BF4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82330a24
	if (ctx.cr6.lt) goto loc_82330A24;
loc_82330A40:
	// fmr f13,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f30.f64;
loc_82330A44:
	// fnmsubs f13,f13,f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(-(ctx.f13.f64 * ctx.f0.f64 - ctx.f0.f64)));
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82330a78
	if (!ctx.cr6.gt) goto loc_82330A78;
	// lwz r8,3860(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3860);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82330A5C:
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// beq cr6,0x82330c04
	if (ctx.cr6.eq) goto loc_82330C04;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82330a5c
	if (ctx.cr6.lt) goto loc_82330A5C;
loc_82330A78:
	// fmr f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f30.f64;
loc_82330A7C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// fnmsubs f27,f0,f1,f13
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = double(float(-(ctx.f0.f64 * ctx.f1.f64 - ctx.f13.f64)));
	// lwz r4,0(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,1560(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1560);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82330A98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fsubs f0,f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f27.f64 - ctx.f1.f64));
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
loc_82330AA0:
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x82330aac
	if (!ctx.cr6.lt) goto loc_82330AAC;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
loc_82330AAC:
	// lwz r11,10548(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 10548);
	// lfs f13,3564(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3564);
	ctx.f13.f64 = double(temp.f32);
	// fsub f12,f29,f13
	ctx.f12.f64 = ctx.f29.f64 - ctx.f13.f64;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x82330ac4
	if (!ctx.cr6.lt) goto loc_82330AC4;
	// fsubs f0,f28,f13
	ctx.f0.f64 = double(float(ctx.f28.f64 - ctx.f13.f64));
loc_82330AC4:
	// extsw r11,r29
	ctx.r11.s64 = ctx.r29.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r29,92(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_82330AE8:
	// lwz r11,548(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 548);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82330974
	if (ctx.cr6.lt) goto loc_82330974;
loc_82330AFC:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x82330b08
	if (!ctx.cr6.lt) goto loc_82330B08;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82330B08:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82330b2c
	if (ctx.cr6.eq) goto loc_82330B2C;
	// lwz r11,2540(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2540);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82330b2c
	if (ctx.cr6.eq) goto loc_82330B2C;
	// rlwinm r29,r29,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r29,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r29.u32);
	// stw r11,592(r25)
	PPC_STORE_U32(ctx.r25.u32 + 592, ctx.r11.u32);
loc_82330B2C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82330b5c
	if (ctx.cr6.eq) goto loc_82330B5C;
	// lwz r11,2552(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2552);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82330b54
	if (!ctx.cr6.eq) goto loc_82330B54;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82330b5c
	if (ctx.cr6.eq) goto loc_82330B5C;
	// lwz r11,2556(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2556);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82330b5c
	if (ctx.cr6.eq) goto loc_82330B5C;
loc_82330B54:
	// srawi r11,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 1;
	// addze r29,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r29.s64 = temp.s64;
loc_82330B5C:
	// lwz r11,460(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 460);
	// rlwinm. r11,r11,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82330ba0
	if (ctx.cr0.eq) goto loc_82330BA0;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,2084(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2084);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82330B7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// extsw r11,r29
	ctx.r11.s64 = ctx.r29.s32;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r29,92(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_82330BA0:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82330cb0
	if (ctx.cr6.eq) goto loc_82330CB0;
	// lwz r11,416(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 416);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82330c14
	if (ctx.cr6.eq) goto loc_82330C14;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,1428(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1428);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82330BCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82330cb0
	if (!ctx.cr0.eq) goto loc_82330CB0;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,1112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82330BEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x82330cb0
	goto loc_82330CB0;
loc_82330BF4:
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82330a44
	goto loc_82330A44;
loc_82330C04:
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82330a7c
	goto loc_82330A7C;
loc_82330C14:
	// lwz r11,2180(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2180);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82330c84
	if (!ctx.cr6.gt) goto loc_82330C84;
	// lwz r11,3160(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3160);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82330c84
	if (!ctx.cr6.eq) goto loc_82330C84;
	// lwz r11,436(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 436);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// ble cr6,0x82330c5c
	if (!ctx.cr6.gt) goto loc_82330C5C;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,1432(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1432);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82330C58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82330C5C:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x82330c84
	if (!ctx.cr6.gt) goto loc_82330C84;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x82330c84
	if (ctx.cr6.eq) goto loc_82330C84;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82330cf0
	ctx.lr = 0x82330C80;
	sub_82330CF0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82330C84:
	// lwz r11,3328(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3328);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82330cb0
	if (ctx.cr6.eq) goto loc_82330CB0;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,1112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82330CA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r29,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r29.u32);
loc_82330CB0:
	// stw r29,556(r24)
	PPC_STORE_U32(ctx.r24.u32 + 556, ctx.r29.u32);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x82330cdc
	if (ctx.cr6.eq) goto loc_82330CDC;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82330cdc
	if (ctx.cr6.eq) goto loc_82330CDC;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,1436(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1436);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82330CDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82330CDC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82330CE0:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x82a61790
	ctx.lr = 0x82330CEC;
	__restfpr_27(ctx, base);
	// b 0x82a4ea40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82330CF0"))) PPC_WEAK_FUNC(sub_82330CF0);
PPC_FUNC_IMPL(__imp__sub_82330CF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x82330CF8;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r25,r28
	ctx.r25.u64 = ctx.r28.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82330efc
	if (ctx.cr6.eq) goto loc_82330EFC;
	// lwz r11,5272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5272);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82330efc
	if (ctx.cr6.eq) goto loc_82330EFC;
	// lis r26,-31949
	ctx.r26.s64 = -2093809664;
	// lwz r4,448(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 448);
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82330D38;
	sub_829B9720(ctx, base);
	// bl 0x82333a20
	ctx.lr = 0x82330D3C;
	sub_82333A20(ctx, base);
	// lwz r11,1692(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1692);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82330d70
	if (!ctx.cr6.eq) goto loc_82330D70;
	// lwz r11,3828(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3828);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82330d70
	if (ctx.cr6.eq) goto loc_82330D70;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82330d70
	if (ctx.cr6.eq) goto loc_82330D70;
	// lwz r11,1692(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1692);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82330d70
	if (!ctx.cr6.eq) goto loc_82330D70;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82330f00
	goto loc_82330F00;
loc_82330D70:
	// lwz r4,468(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 468);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// bne cr6,0x82330d9c
	if (!ctx.cr6.eq) goto loc_82330D9C;
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// lis r10,4352
	ctx.r10.s64 = 285212672;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82330d94
	if (ctx.cr6.eq) goto loc_82330D94;
	// li r25,0
	ctx.r25.s64 = 0;
	// b 0x82330efc
	goto loc_82330EFC;
loc_82330D94:
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x82330efc
	if (ctx.cr6.eq) goto loc_82330EFC;
loc_82330D9C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2064(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2064);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82330DB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82330efc
	if (!ctx.cr0.eq) goto loc_82330EFC;
	// lwz r11,468(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 468);
	// lwz r10,5288(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5288);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r11,r10
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x82330ebc
	if (!ctx.cr6.gt) goto loc_82330EBC;
	// subf. r28,r28,r29
	ctx.r28.s64 = ctx.r29.s64 - ctx.r28.s64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bgt 0x82330e90
	if (ctx.cr0.gt) goto loc_82330E90;
	// lwz r11,640(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 640);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82330e14
	if (ctx.cr6.gt) goto loc_82330E14;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,632(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 632);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82330DFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x8281dc68
	ctx.lr = 0x82330E00;
	sub_8281DC68(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82330e14
	if (ctx.cr6.eq) goto loc_82330E14;
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// oris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 524288;
	// stw r11,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r11.u32);
loc_82330E14:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r11,3148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3148, ctx.r11.u32);
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
	// stw r10,392(r27)
	PPC_STORE_U32(ctx.r27.u32 + 392, ctx.r10.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,4396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4396);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82330e90
	if (ctx.cr6.eq) goto loc_82330E90;
	// addi r4,r31,4344
	ctx.r4.s64 = ctx.r31.s64 + 4344;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82332f10
	ctx.lr = 0x82330E44;
	sub_82332F10(ctx, base);
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// lwz r4,448(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 448);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82330E54;
	sub_829B9720(ctx, base);
	// bl 0x82333a20
	ctx.lr = 0x82330E58;
	sub_82333A20(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// lwz r11,436(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 436);
	// li r6,7
	ctx.r6.s64 = 7;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,2028(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2028);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82330E88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82332e90
	ctx.lr = 0x82330E90;
	sub_82332E90(ctx, base);
loc_82330E90:
	// lwz r10,960(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// lwz r11,468(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 468);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x82330efc
	if (!ctx.cr6.eq) goto loc_82330EFC;
	// addi r10,r11,1300
	ctx.r10.s64 = ctx.r11.s64 + 1300;
	// lwz r9,5288(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5288);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r28,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r28.u32);
	// stwx r28,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r28.u32);
	// b 0x82330efc
	goto loc_82330EFC;
loc_82330EBC:
	// lwz r11,640(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 640);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82330efc
	if (ctx.cr6.gt) goto loc_82330EFC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,632(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 632);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82330EE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x8281dc68
	ctx.lr = 0x82330EE8;
	sub_8281DC68(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82330efc
	if (ctx.cr6.eq) goto loc_82330EFC;
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// oris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 524288;
	// stw r11,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r11.u32);
loc_82330EFC:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_82330F00:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82330F08"))) PPC_WEAK_FUNC(sub_82330F08);
PPC_FUNC_IMPL(__imp__sub_82330F08) {
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
	// lfs f0,456(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 456);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,548(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 548);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mullw r31,r11,r5
	ctx.r31.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82330f70
	if (!ctx.cr6.gt) goto loc_82330F70;
	// lwz r11,544(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 544);
loc_82330F44:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x82330f64
	if (!ctx.cr6.eq) goto loc_82330F64;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mullw r31,r9,r31
	ctx.r31.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r31.s32);
loc_82330F64:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne 0x82330f44
	if (!ctx.cr0.eq) goto loc_82330F44;
loc_82330F70:
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x8281d960
	ctx.lr = 0x82330F78;
	sub_8281D960(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82331060
	if (ctx.cr0.eq) goto loc_82331060;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82330F90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8233105c
	if (ctx.cr0.eq) goto loc_8233105C;
	// lwz r11,436(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 436);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82331038
	if (ctx.cr6.lt) goto loc_82331038;
	// lwz r10,4360(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4360);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82331038
	if (!ctx.cr6.lt) goto loc_82331038;
	// rlwinm r10,r11,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r11,4356(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4356);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82331038
	if (ctx.cr6.eq) goto loc_82331038;
	// lwz r11,436(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 436);
	// lwz r10,4356(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4356);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r10,176(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 176);
	// lwz r11,100(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 100);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// stw r10,176(r9)
	PPC_STORE_U32(ctx.r9.u32 + 176, ctx.r10.u32);
	// lwz r10,4356(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4356);
	// blt cr6,0x8233101c
	if (ctx.cr6.lt) goto loc_8233101C;
	// lwz r11,436(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 436);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// subf r10,r31,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r31.s64;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r10,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r10.u32);
	// b 0x82331038
	goto loc_82331038;
loc_8233101C:
	// lwz r9,436(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 436);
	// subf r31,r11,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r11.s64;
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwinm r11,r9,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r8,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r8.u32);
loc_82331038:
	// lwz r11,3328(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3328);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233105c
	if (ctx.cr6.eq) goto loc_8233105C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,1112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82331058;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8233105C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82331060:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82331078"))) PPC_WEAK_FUNC(sub_82331078);
PPC_FUNC_IMPL(__imp__sub_82331078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823310ec
	if (!ctx.cr6.gt) goto loc_823310EC;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823310B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,580(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823310ec
	if (!ctx.cr6.gt) goto loc_823310EC;
	// lwz r9,576(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 576);
loc_823310C8:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r3,r8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x823310e8
	if (ctx.cr6.eq) goto loc_823310E8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x823310c8
	if (ctx.cr6.lt) goto loc_823310C8;
	// b 0x823310ec
	goto loc_823310EC;
loc_823310E8:
	// li r30,1
	ctx.r30.s64 = 1;
loc_823310EC:
	// lwz r11,560(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82331104
	if (ctx.cr6.eq) goto loc_82331104;
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x82331108
	goto loc_82331108;
loc_82331104:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82331108:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82331120"))) PPC_WEAK_FUNC(sub_82331120);
PPC_FUNC_IMPL(__imp__sub_82331120) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// stw r4,452(r3)
	PPC_STORE_U32(ctx.r3.u32 + 452, ctx.r4.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// stw r5,392(r3)
	PPC_STORE_U32(ctx.r3.u32 + 392, ctx.r5.u32);
	// stw r10,460(r3)
	PPC_STORE_U32(ctx.r3.u32 + 460, ctx.r10.u32);
	// stw r10,596(r3)
	PPC_STORE_U32(ctx.r3.u32 + 596, ctx.r10.u32);
	// beq cr6,0x82331144
	if (ctx.cr6.eq) goto loc_82331144;
	// lwz r5,80(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 80);
	// b 0x82331148
	goto loc_82331148;
loc_82331144:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82331148:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f3,472(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 472, temp.u32);
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stfs f1,492(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 492, temp.u32);
	// stfs f1,616(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 616, temp.u32);
	// stw r5,448(r3)
	PPC_STORE_U32(ctx.r3.u32 + 448, ctx.r5.u32);
	// stfs f2,496(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 496, temp.u32);
	// stw r7,408(r3)
	PPC_STORE_U32(ctx.r3.u32 + 408, ctx.r7.u32);
	// stfs f2,620(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 620, temp.u32);
	// stw r31,412(r3)
	PPC_STORE_U32(ctx.r3.u32 + 412, ctx.r31.u32);
	// stfs f4,500(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 500, temp.u32);
	// stw r9,416(r3)
	PPC_STORE_U32(ctx.r3.u32 + 416, ctx.r9.u32);
	// stfs f4,624(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 624, temp.u32);
	// stw r11,476(r3)
	PPC_STORE_U32(ctx.r3.u32 + 476, ctx.r11.u32);
	// stw r10,480(r3)
	PPC_STORE_U32(ctx.r3.u32 + 480, ctx.r10.u32);
	// stw r8,484(r3)
	PPC_STORE_U32(ctx.r3.u32 + 484, ctx.r8.u32);
	// stw r11,600(r3)
	PPC_STORE_U32(ctx.r3.u32 + 600, ctx.r11.u32);
	// stw r10,604(r3)
	PPC_STORE_U32(ctx.r3.u32 + 604, ctx.r10.u32);
	// stw r8,608(r3)
	PPC_STORE_U32(ctx.r3.u32 + 608, ctx.r8.u32);
	// stw r6,488(r3)
	PPC_STORE_U32(ctx.r3.u32 + 488, ctx.r6.u32);
	// stw r6,612(r3)
	PPC_STORE_U32(ctx.r3.u32 + 612, ctx.r6.u32);
	// stw r4,424(r3)
	PPC_STORE_U32(ctx.r3.u32 + 424, ctx.r4.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823311B8"))) PPC_WEAK_FUNC(sub_823311B8);
PPC_FUNC_IMPL(__imp__sub_823311B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9ec
	ctx.lr = 0x823311C0;
	__savegprlr_21(ctx, base);
	// stfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f30.u64);
	// stfd f31,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// std r24,320(r1)
	PPC_STORE_U64(ctx.r1.u32 + 320, ctx.r24.u64);
	// mr r22,r8
	ctx.r22.u64 = ctx.r8.u64;
	// std r10,352(r1)
	PPC_STORE_U64(ctx.r1.u32 + 352, ctx.r10.u64);
	// mr r21,r9
	ctx.r21.u64 = ctx.r9.u64;
	// lwz r11,460(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 460);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// std r23,328(r1)
	PPC_STORE_U64(ctx.r1.u32 + 328, ctx.r23.u64);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// std r22,336(r1)
	PPC_STORE_U64(ctx.r1.u32 + 336, ctx.r22.u64);
	// rlwinm. r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r21,344(r1)
	PPC_STORE_U64(ctx.r1.u32 + 344, ctx.r21.u64);
	// beq 0x82331218
	if (ctx.cr0.eq) goto loc_82331218;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332988
	ctx.lr = 0x82331210;
	sub_82332988(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8233169c
	if (!ctx.cr0.eq) goto loc_8233169C;
loc_82331218:
	// lwz r11,460(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 460);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82331240
	if (ctx.cr0.eq) goto loc_82331240;
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f2,516(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	ctx.f2.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f1,512(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 512);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,508(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// bl 0x824e4258
	ctx.lr = 0x82331240;
	sub_824E4258(ctx, base);
loc_82331240:
	// lwz r11,460(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 460);
	// rlwinm. r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82331270
	if (ctx.cr0.eq) goto loc_82331270;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f1,528(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1724(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1724);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82331264;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,524(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x824e5358
	ctx.lr = 0x82331270;
	sub_824E5358(ctx, base);
loc_82331270:
	// lwz r11,3172(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3172);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823312d8
	if (ctx.cr6.eq) goto loc_823312D8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82332988
	ctx.lr = 0x82331288;
	sub_82332988(ctx, base);
	// lwz r11,460(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 460);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// rlwinm r11,r11,0,6,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3FFFFFE;
	// rlwinm. r11,r11,0,30,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFE000003;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823312d8
	if (ctx.cr0.eq) goto loc_823312D8;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x823312b8
	if (!ctx.cr6.eq) goto loc_823312B8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82331078
	ctx.lr = 0x823312B0;
	sub_82331078(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x823312d8
	if (ctx.cr0.eq) goto loc_823312D8;
loc_823312B8:
	// lwz r11,3876(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3876);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823312d8
	if (ctx.cr6.eq) goto loc_823312D8;
	// lwz r11,460(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 460);
	// rlwinm. r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823312d8
	if (ctx.cr0.eq) goto loc_823312D8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824e7050
	ctx.lr = 0x823312D8;
	sub_824E7050(ctx, base);
loc_823312D8:
	// lis r25,-31949
	ctx.r25.s64 = -2093809664;
	// lwz r11,13024(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13024);
	// lwz r10,788(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x823312f8
	if (!ctx.cr6.eq) goto loc_823312F8;
	// lwz r11,432(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x82331308
	if (ctx.cr6.lt) goto loc_82331308;
loc_823312F8:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82331308
	if (ctx.cr6.eq) goto loc_82331308;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8233169c
	if (!ctx.cr6.eq) goto loc_8233169C;
loc_82331308:
	// lwz r11,3172(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3172);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233169c
	if (ctx.cr6.eq) goto loc_8233169C;
	// addi r28,r31,24
	ctx.r28.s64 = ctx.r31.s64 + 24;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8281d960
	ctx.lr = 0x82331320;
	sub_8281D960(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lfs f30,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// beq 0x823313ec
	if (ctx.cr0.eq) goto loc_823313EC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8281d960
	ctx.lr = 0x82331340;
	sub_8281D960(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82331360
	if (ctx.cr0.eq) goto loc_82331360;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,572(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 572);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82331358;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x82331364
	goto loc_82331364;
loc_82331360:
	// li r29,0
	ctx.r29.s64 = 0;
loc_82331364:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8281d960
	ctx.lr = 0x8233136C;
	sub_8281D960(ctx, base);
	// bl 0x823329e8
	ctx.lr = 0x82331370;
	sub_823329E8(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82331380
	if (!ctx.cr6.eq) goto loc_82331380;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823313ec
	if (ctx.cr6.eq) goto loc_823313EC;
loc_82331380:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x823313ec
	if (ctx.cr6.eq) goto loc_823313EC;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,1632(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1632);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823313A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x823313ec
	if (ctx.cr0.eq) goto loc_823313EC;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r10,460(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 460);
	// li r9,200
	ctx.r9.s64 = 200;
	// stfs f31,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// lwz r8,144(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stfs f30,492(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 492, temp.u32);
	// stw r9,488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 488, ctx.r9.u32);
	// stw r10,460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 460, ctx.r10.u32);
	// lfs f0,16620(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16620);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r8.u32);
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lwz r10,140(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r11,476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 476, ctx.r11.u32);
	// stw r10,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r10.u32);
loc_823313EC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8281d960
	ctx.lr = 0x823313F4;
	sub_8281D960(ctx, base);
	// bl 0x82332928
	ctx.lr = 0x823313F8;
	sub_82332928(ctx, base);
	// lwz r11,460(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 460);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwinm r11,r11,0,6,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3FFFFFE;
	// rlwinm. r11,r11,0,30,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFE000003;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8233169c
	if (ctx.cr0.eq) goto loc_8233169C;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x82331428
	if (!ctx.cr6.eq) goto loc_82331428;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82331078
	ctx.lr = 0x82331420;
	sub_82331078(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8233169c
	if (ctx.cr0.eq) goto loc_8233169C;
loc_82331428:
	// lwz r11,3876(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3876);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8233169c
	if (!ctx.cr6.eq) goto loc_8233169C;
	// lwz r11,3956(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3956);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823315e0
	if (!ctx.cr6.eq) goto loc_823315E0;
	// lwz r11,460(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 460);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823315e0
	if (ctx.cr0.eq) goto loc_823315E0;
	// lwz r3,1608(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1608);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233146c
	if (ctx.cr6.eq) goto loc_8233146C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,552(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 552);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82331468;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82331470
	goto loc_82331470;
loc_8233146C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82331470:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823314ac
	if (ctx.cr6.eq) goto loc_823314AC;
	// lwz r3,1608(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1608);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82331498
	if (ctx.cr6.eq) goto loc_82331498;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,552(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 552);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82331494;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8233149c
	goto loc_8233149C;
loc_82331498:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8233149C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1360(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1360);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823314AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823314AC:
	// lwz r11,3924(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3924);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,3900(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3900);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// lwz r8,3904(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3904);
	// lwz r7,3908(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3908);
	// stw r10,3928(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3928, ctx.r10.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// stw r8,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// stw r7,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r7.u32);
	// beq cr6,0x82331524
	if (ctx.cr6.eq) goto loc_82331524;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,1508(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1508);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823314FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,1504(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1504);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82331518;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// b 0x82331540
	goto loc_82331540;
loc_82331524:
	// lwz r10,484(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lwz r9,476(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 476);
	// lwz r8,480(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 480);
	// lwz r11,488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 488);
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// stw r8,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
loc_82331540:
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r8,124(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stfs f31,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lfs f13,632(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 632);
	ctx.f13.f64 = double(temp.f32);
	// lwz r7,128(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lfs f12,636(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 636);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stfs f31,496(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 496, temp.u32);
	// stw r11,488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 488, ctx.r11.u32);
	// lfs f0,24000(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24000);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// stfs f30,500(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 500, temp.u32);
	// stw r9,476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 476, ctx.r9.u32);
	// stfs f0,492(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 492, temp.u32);
	// stw r8,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r8.u32);
	// stfs f13,524(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 524, temp.u32);
	// stw r7,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r7.u32);
	// stfs f12,528(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 528, temp.u32);
	// beq cr6,0x823315ec
	if (ctx.cr6.eq) goto loc_823315EC;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82833108
	ctx.lr = 0x82331598;
	sub_82833108(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x823315cc
	if (ctx.cr0.eq) goto loc_823315CC;
	// lwz r11,13024(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13024);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,96(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// bl 0x82333a80
	ctx.lr = 0x823315B4;
	sub_82333A80(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r30,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r30.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r11,r11,13832
	ctx.r11.s64 = ctx.r11.s64 + 13832;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x823315d0
	goto loc_823315D0;
loc_823315CC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_823315D0:
	// lwz r11,13024(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x823315DC;
	sub_82833A30(ctx, base);
	// b 0x823315ec
	goto loc_823315EC;
loc_823315E0:
	// lwz r11,460(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 460);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8233169c
	if (!ctx.cr0.eq) goto loc_8233169C;
loc_823315EC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// li r5,28
	ctx.r5.s64 = 28;
	// bl 0x82a4ea80
	ctx.lr = 0x823315FC;
	sub_82A4EA80(ctx, base);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82331920
	ctx.lr = 0x82331620;
	sub_82331920(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,3136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3136);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r10,876(r30)
	PPC_STORE_U32(ctx.r30.u32 + 876, ctx.r10.u32);
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// stw r8,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r8.u32);
	// bne cr6,0x8233169c
	if (!ctx.cr6.eq) goto loc_8233169C;
	// lfs f0,632(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 632);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,332(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// lfs f13,636(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 636);
	ctx.f13.f64 = double(temp.f32);
	// lwz r8,372(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// stfs f0,524(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 524, temp.u32);
	// ld r6,324(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 324);
	// stfs f13,528(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 528, temp.u32);
	// lwz r10,956(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 956);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f1,492(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	ctx.f1.f64 = double(temp.f32);
	// ld r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// rldicr r5,r11,32,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bne cr6,0x82331690
	if (!ctx.cr6.eq) goto loc_82331690;
	// lwz r11,1660(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1660);
	// b 0x82331694
	goto loc_82331694;
loc_82331690:
	// lwz r11,2184(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2184);
loc_82331694:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8233169C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8233169C:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x82a4ea3c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823316B0"))) PPC_WEAK_FUNC(sub_823316B0);
PPC_FUNC_IMPL(__imp__sub_823316B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x823316B8;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r3,r29,24
	ctx.r3.s64 = ctx.r29.s64 + 24;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x8281d960
	ctx.lr = 0x823316D8;
	sub_8281D960(ctx, base);
	// bl 0x82332928
	ctx.lr = 0x823316DC;
	sub_82332928(ctx, base);
	// lwz r10,3908(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3908);
	// lwz r11,3924(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3924);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,3900(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3900);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r7,3904(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3904);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r9,3928(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3928, ctx.r9.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// beq cr6,0x82331758
	if (ctx.cr6.eq) goto loc_82331758;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1508(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1508);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82331730;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1504(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1504);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8233174C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// b 0x82331780
	goto loc_82331780;
loc_82331758:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lfs f0,432(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 432);
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
loc_82331780:
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,-31963
	ctx.r8.s64 = -2094727168;
	// lwz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lis r6,-32215
	ctx.r6.s64 = -2111242240;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,488(r29)
	PPC_STORE_U32(ctx.r29.u32 + 488, ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lfs f31,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// stw r9,476(r29)
	PPC_STORE_U32(ctx.r29.u32 + 476, ctx.r9.u32);
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lfs f0,24000(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 24000);
	ctx.f0.f64 = double(temp.f32);
	// stw r7,480(r29)
	PPC_STORE_U32(ctx.r29.u32 + 480, ctx.r7.u32);
	// lfs f13,908(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 908);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,484(r29)
	PPC_STORE_U32(ctx.r29.u32 + 484, ctx.r11.u32);
	// stfs f0,492(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 492, temp.u32);
	// stfs f31,496(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 496, temp.u32);
	// stfs f13,500(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 500, temp.u32);
	// beq cr6,0x8233187c
	if (ctx.cr6.eq) goto loc_8233187C;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82833108
	ctx.lr = 0x823317D8;
	sub_82833108(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// lis r27,-31949
	ctx.r27.s64 = -2093809664;
	// beq 0x82331810
	if (ctx.cr0.eq) goto loc_82331810;
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,96(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// bl 0x82333a80
	ctx.lr = 0x823317F8;
	sub_82333A80(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r30,24(r28)
	PPC_STORE_U32(ctx.r28.u32 + 24, ctx.r30.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r11,r11,13832
	ctx.r11.s64 = ctx.r11.s64 + 13832;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// b 0x82331814
	goto loc_82331814;
loc_82331810:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82331814:
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x82331820;
	sub_82833A30(ctx, base);
	// lfs f13,628(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,628(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 628);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,620(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 620);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lfs f1,16668(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16668);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lfs f13,620(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f13,624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lfs f0,624(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 624);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// bl 0x82332e18
	ctx.lr = 0x82331878;
	sub_82332E18(ctx, base);
	// b 0x823318a0
	goto loc_823318A0;
loc_8233187C:
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_823318A0:
	// stfs f31,484(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 484, temp.u32);
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,480(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 480);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lwz r11,3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3564);
	// lfs f10,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,476(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 476);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmuls f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// stfs f13,0(r26)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
	// stfs f12,4(r26)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r26.u32 + 4, temp.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stfs f11,8(r26)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r26.u32 + 8, temp.u32);
	// bne cr6,0x82331910
	if (!ctx.cr6.eq) goto loc_82331910;
	// lwa r11,488(r29)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r29.u32 + 488));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f10,f0,f31
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f0,8(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 8, temp.u32);
	// fadds f0,f13,f10
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// stfs f0,0(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
	// fadds f0,f12,f10
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// stfs f0,4(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 4, temp.u32);
loc_82331910:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82331920"))) PPC_WEAK_FUNC(sub_82331920);
PPC_FUNC_IMPL(__imp__sub_82331920) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82331928;
	__savegprlr_28(ctx, base);
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r7,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r7.u64);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// std r8,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r8.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r9,240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 240, ctx.r9.u64);
	// lfs f13,240(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	ctx.f13.f64 = double(temp.f32);
	// std r10,248(r1)
	PPC_STORE_U64(ctx.r1.u32 + 248, ctx.r10.u64);
	// lfs f0,248(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	ctx.f0.f64 = double(temp.f32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lfs f0,244(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f31,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stfs f31,0(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f31,4(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stfs f31,8(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lfs f30,16668(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16668);
	ctx.f30.f64 = double(temp.f32);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82332e18
	ctx.lr = 0x823319B8;
	sub_82332E18(ctx, base);
	// lwz r11,460(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 460);
	// rlwinm. r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82331a2c
	if (ctx.cr0.eq) goto loc_82331A2C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x823319e4
	if (ctx.cr6.eq) goto loc_823319E4;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,1540(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1540);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823319E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823319ec
	goto loc_823319EC;
loc_823319E4:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f1,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f1.f64 = double(temp.f32);
loc_823319EC:
	// lfs f13,484(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 484);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lfs f0,480(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 480);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f0,476(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 476);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// b 0x82331cf0
	goto loc_82331CF0;
loc_82331A2C:
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82331b04
	if (ctx.cr0.eq) goto loc_82331B04;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82331a94
	if (ctx.cr6.eq) goto loc_82331A94;
	// lfs f13,628(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 628);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f0,628(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 628);
	ctx.f0.f64 = double(temp.f32);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f13,624(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 624);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lfs f0,624(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 624);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f13,620(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 620);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,620(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 620);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// bl 0x82332e18
	ctx.lr = 0x82331A90;
	sub_82332E18(ctx, base);
	// b 0x82331ab8
	goto loc_82331AB8;
loc_82331A94:
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
loc_82331AB8:
	// stfs f31,484(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 484, temp.u32);
	// fmr f11,f31
	ctx.f11.f64 = ctx.f31.f64;
	// lfs f0,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lfs f10,480(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 480);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f0,476(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 476);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// b 0x82331c14
	goto loc_82331C14;
loc_82331B04:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82331ba4
	if (ctx.cr6.eq) goto loc_82331BA4;
	// lwz r11,3564(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3564);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82331ba4
	if (ctx.cr6.eq) goto loc_82331BA4;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,1540(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1540);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82331B2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwa r11,3924(r29)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r29.u32 + 3924));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f0,f13,f1
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f0,f1,f31
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f0,f31
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fadds f0,f12,f10
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fadds f0,f11,f10
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// b 0x82331c18
	goto loc_82331C18;
loc_82331BA4:
	// lfs f0,480(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 480);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,476(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 476);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,484(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 484);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x82331bdc
	if (ctx.cr6.gt) goto loc_82331BDC;
	// lwa r11,488(r30)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r30.u32 + 488));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
loc_82331BDC:
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_82331C14:
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
loc_82331C18:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82331c2c
	if (ctx.cr6.eq) goto loc_82331C2C;
	// lwz r11,3564(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3564);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82331c68
	if (!ctx.cr6.eq) goto loc_82331C68;
loc_82331C2C:
	// lwa r11,488(r30)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r30.u32 + 488));
	// lfs f11,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f10,f0,f31
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fadds f0,f13,f10
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fadds f0,f12,f10
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
loc_82331C68:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82331cb8
	if (ctx.cr6.eq) goto loc_82331CB8;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,460(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 460);
	// lwz r11,1544(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1544);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82331C88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f0,f1
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f13,f1
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// fmuls f9,f12,f1
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
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
	// b 0x82331cec
	goto loc_82331CEC;
loc_82331CB8:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f13,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,32716(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32716);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fadds f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fadds f13,f12,f9
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
loc_82331CEC:
	// stfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
loc_82331CF0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82331D08"))) PPC_WEAK_FUNC(sub_82331D08);
PPC_FUNC_IMPL(__imp__sub_82331D08) {
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
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 548);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82331d7c
	if (!ctx.cr6.gt) goto loc_82331D7C;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82331D44:
	// lwz r11,544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 544);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r7,r30
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x82331d60
	if (!ctx.cr6.eq) goto loc_82331D60;
	// stfs f31,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// li r8,1
	ctx.r8.s64 = 1;
loc_82331D60:
	// lwz r11,548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 548);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82331d44
	if (ctx.cr6.lt) goto loc_82331D44;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82331db4
	if (!ctx.cr6.eq) goto loc_82331DB4;
loc_82331D7C:
	// addi r3,r31,532
	ctx.r3.s64 = ctx.r31.s64 + 532;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823327e0
	ctx.lr = 0x82331D94;
	sub_823327E0(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 544);
	// bl 0x82a455d0
	ctx.lr = 0x82331DA4;
	sub_82A455D0(ctx, base);
	// lwz r11,544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 544);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// lwz r11,544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 544);
	// stfs f31,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
loc_82331DB4:
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

__attribute__((alias("__imp__sub_82331DD0"))) PPC_WEAK_FUNC(sub_82331DD0);
PPC_FUNC_IMPL(__imp__sub_82331DD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82331e10
	if (ctx.cr0.eq) goto loc_82331E10;
	// rlwinm r11,r11,0,11,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1FFFF8;
	// rlwinm. r11,r11,0,28,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFF0000F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82331e10
	if (!ctx.cr0.eq) goto loc_82331E10;
	// lwz r11,400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// li r30,1
	ctx.r30.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82331e14
	if (!ctx.cr6.eq) goto loc_82331E14;
loc_82331E10:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82331E14:
	// lwz r11,468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82331e64
	if (ctx.cr6.eq) goto loc_82331E64;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x8281d960
	ctx.lr = 0x82331E28;
	sub_8281D960(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82331e64
	if (ctx.cr0.eq) goto loc_82331E64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82331E40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82331e64
	if (ctx.cr0.eq) goto loc_82331E64;
	// lwz r11,468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	// lwz r10,5288(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5288);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82331e64
	if (ctx.cr6.gt) goto loc_82331E64;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82331E64:
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

__attribute__((alias("__imp__sub_82331E80"))) PPC_WEAK_FUNC(sub_82331E80);
PPC_FUNC_IMPL(__imp__sub_82331E80) {
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
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,13624
	ctx.r3.s64 = ctx.r11.s64 + 13624;
	// bl 0x82816528
	ctx.lr = 0x82331EA0;
	sub_82816528(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r31,r31,564
	ctx.r31.s64 = ctx.r31.s64 + 564;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82410060
	ctx.lr = 0x82331EB4;
	sub_82410060(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,13648
	ctx.r3.s64 = ctx.r11.s64 + 13648;
	// bl 0x82816528
	ctx.lr = 0x82331EC0;
	sub_82816528(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x82331ED0;
	sub_82410060(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,13672
	ctx.r3.s64 = ctx.r11.s64 + 13672;
	// bl 0x82816528
	ctx.lr = 0x82331EDC;
	sub_82816528(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x82331EEC;
	sub_82410060(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,13696
	ctx.r3.s64 = ctx.r11.s64 + 13696;
	// bl 0x82816528
	ctx.lr = 0x82331EF8;
	sub_82816528(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x82331F08;
	sub_82410060(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,13720
	ctx.r3.s64 = ctx.r11.s64 + 13720;
	// bl 0x82816528
	ctx.lr = 0x82331F14;
	sub_82816528(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x82331F24;
	sub_82410060(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,13748
	ctx.r3.s64 = ctx.r11.s64 + 13748;
	// bl 0x82816528
	ctx.lr = 0x82331F30;
	sub_82816528(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x82331F40;
	sub_82410060(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,13776
	ctx.r3.s64 = ctx.r11.s64 + 13776;
	// bl 0x82816528
	ctx.lr = 0x82331F4C;
	sub_82816528(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x82331F5C;
	sub_82410060(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,13800
	ctx.r3.s64 = ctx.r11.s64 + 13800;
	// bl 0x82816528
	ctx.lr = 0x82331F68;
	sub_82816528(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82410060
	ctx.lr = 0x82331F78;
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

__attribute__((alias("__imp__sub_82331F90"))) PPC_WEAK_FUNC(sub_82331F90);
PPC_FUNC_IMPL(__imp__sub_82331F90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r4,448(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 448);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82331FB4;
	sub_829B9720(ctx, base);
	// bl 0x82333a20
	ctx.lr = 0x82331FB8;
	sub_82333A20(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82331fec
	if (ctx.cr0.eq) goto loc_82331FEC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332928
	ctx.lr = 0x82331FC8;
	sub_82332928(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82331fdc
	if (!ctx.cr0.eq) goto loc_82331FDC;
	// lwz r3,1780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1780);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82331fec
	if (ctx.cr6.eq) goto loc_82331FEC;
loc_82331FDC:
	// lwz r11,1884(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1884);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82331ff0
	if (!ctx.cr6.eq) goto loc_82331FF0;
loc_82331FEC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82331FF0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82332008"))) PPC_WEAK_FUNC(sub_82332008);
PPC_FUNC_IMPL(__imp__sub_82332008) {
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
	// lwz r4,448(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 448);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82332028;
	sub_829B9720(ctx, base);
	// bl 0x82333a20
	ctx.lr = 0x8233202C;
	sub_82333A20(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82332044
	if (ctx.cr0.eq) goto loc_82332044;
	// lwz r11,3828(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3828);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82332048
	if (!ctx.cr6.eq) goto loc_82332048;
loc_82332044:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82332048:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82332058"))) PPC_WEAK_FUNC(sub_82332058);
PPC_FUNC_IMPL(__imp__sub_82332058) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-27804(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27804);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82332098
	if (!ctx.cr0.eq) goto loc_82332098;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// stw r11,-27804(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27804, ctx.r11.u32);
	// addi r3,r9,13508
	ctx.r3.s64 = ctx.r9.s64 + 13508;
	// bl 0x82816528
	ctx.lr = 0x82332090;
	sub_82816528(ctx, base);
	// stw r3,-27808(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27808, ctx.r3.u32);
	// b 0x8233209c
	goto loc_8233209C;
loc_82332098:
	// lwz r3,-27808(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27808);
loc_8233209C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823320B0"))) PPC_WEAK_FUNC(sub_823320B0);
PPC_FUNC_IMPL(__imp__sub_823320B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82332100
	ctx.lr = 0x823320D0;
	sub_82332100(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823320E4;
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

__attribute__((alias("__imp__sub_82332100"))) PPC_WEAK_FUNC(sub_82332100);
PPC_FUNC_IMPL(__imp__sub_82332100) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r31,r11,-32668
	ctx.r31.s64 = ctx.r11.s64 + -32668;
	// lwz r11,-32672(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32672);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82332148
	if (!ctx.cr0.eq) goto loc_82332148;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,13912
	ctx.r9.s64 = ctx.r9.s64 + 13912;
	// stw r11,-32672(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32672, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-30536
	ctx.r3.s64 = ctx.r11.s64 + -30536;
	// bl 0x82a4c758
	ctx.lr = 0x82332148;
	sub_82A4C758(ctx, base);
loc_82332148:
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

__attribute__((alias("__imp__sub_82332160"))) PPC_WEAK_FUNC(sub_82332160);
PPC_FUNC_IMPL(__imp__sub_82332160) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,6112
	ctx.r3.s64 = 6112;
	// bl 0x82833108
	ctx.lr = 0x82332178;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823321b4
	if (ctx.cr0.eq) goto loc_823321B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824db158
	ctx.lr = 0x82332188;
	sub_824DB158(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// addi r11,r11,-30696
	ctx.r11.s64 = ctx.r11.s64 + -30696;
	// addi r10,r10,-28332
	ctx.r10.s64 = ctx.r10.s64 + -28332;
	// addi r9,r9,-28280
	ctx.r9.s64 = ctx.r9.s64 + -28280;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x823321b8
	goto loc_823321B8;
loc_823321B4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823321B8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823321D0"))) PPC_WEAK_FUNC(sub_823321D0);
PPC_FUNC_IMPL(__imp__sub_823321D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-27812(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27812);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82332210
	if (!ctx.cr0.eq) goto loc_82332210;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// stw r11,-27812(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27812, ctx.r11.u32);
	// addi r3,r9,13540
	ctx.r3.s64 = ctx.r9.s64 + 13540;
	// bl 0x82816528
	ctx.lr = 0x82332208;
	sub_82816528(ctx, base);
	// stw r3,-27816(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27816, ctx.r3.u32);
	// b 0x82332214
	goto loc_82332214;
loc_82332210:
	// lwz r3,-27816(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27816);
loc_82332214:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82332228"))) PPC_WEAK_FUNC(sub_82332228);
PPC_FUNC_IMPL(__imp__sub_82332228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82332278
	ctx.lr = 0x82332248;
	sub_82332278(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8233225C;
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

__attribute__((alias("__imp__sub_82332278"))) PPC_WEAK_FUNC(sub_82332278);
PPC_FUNC_IMPL(__imp__sub_82332278) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r31,r11,-32612
	ctx.r31.s64 = ctx.r11.s64 + -32612;
	// lwz r11,-32616(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32616);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823322c0
	if (!ctx.cr0.eq) goto loc_823322C0;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,13932
	ctx.r9.s64 = ctx.r9.s64 + 13932;
	// stw r11,-32616(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32616, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-30560
	ctx.r3.s64 = ctx.r11.s64 + -30560;
	// bl 0x82a4c758
	ctx.lr = 0x823322C0;
	sub_82A4C758(ctx, base);
loc_823322C0:
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

__attribute__((alias("__imp__sub_823322D8"))) PPC_WEAK_FUNC(sub_823322D8);
PPC_FUNC_IMPL(__imp__sub_823322D8) {
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
	ctx.lr = 0x823322EC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823322fc
	if (ctx.cr0.eq) goto loc_823322FC;
	// bl 0x8265c840
	ctx.lr = 0x823322F8;
	sub_8265C840(ctx, base);
	// b 0x82332300
	goto loc_82332300;
loc_823322FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82332300:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82332310"))) PPC_WEAK_FUNC(sub_82332310);
PPC_FUNC_IMPL(__imp__sub_82332310) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-27820(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27820);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82332350
	if (!ctx.cr0.eq) goto loc_82332350;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// stw r11,-27820(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27820, ctx.r11.u32);
	// addi r3,r9,13560
	ctx.r3.s64 = ctx.r9.s64 + 13560;
	// bl 0x82816528
	ctx.lr = 0x82332348;
	sub_82816528(ctx, base);
	// stw r3,-27824(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27824, ctx.r3.u32);
	// b 0x82332354
	goto loc_82332354;
loc_82332350:
	// lwz r3,-27824(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27824);
loc_82332354:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82332368"))) PPC_WEAK_FUNC(sub_82332368);
PPC_FUNC_IMPL(__imp__sub_82332368) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823323b8
	ctx.lr = 0x82332388;
	sub_823323B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8233239C;
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

__attribute__((alias("__imp__sub_823323B8"))) PPC_WEAK_FUNC(sub_823323B8);
PPC_FUNC_IMPL(__imp__sub_823323B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r31,r11,-32636
	ctx.r31.s64 = ctx.r11.s64 + -32636;
	// lwz r11,-32640(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32640);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82332400
	if (!ctx.cr0.eq) goto loc_82332400;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,13952
	ctx.r9.s64 = ctx.r9.s64 + 13952;
	// stw r11,-32640(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32640, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-30584
	ctx.r3.s64 = ctx.r11.s64 + -30584;
	// bl 0x82a4c758
	ctx.lr = 0x82332400;
	sub_82A4C758(ctx, base);
loc_82332400:
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

__attribute__((alias("__imp__sub_82332418"))) PPC_WEAK_FUNC(sub_82332418);
PPC_FUNC_IMPL(__imp__sub_82332418) {
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
	// li r3,1680
	ctx.r3.s64 = 1680;
	// bl 0x82833108
	ctx.lr = 0x8233242C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8233243c
	if (ctx.cr0.eq) goto loc_8233243C;
	// bl 0x82713ce0
	ctx.lr = 0x82332438;
	sub_82713CE0(ctx, base);
	// b 0x82332440
	goto loc_82332440;
loc_8233243C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82332440:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82332450"))) PPC_WEAK_FUNC(sub_82332450);
PPC_FUNC_IMPL(__imp__sub_82332450) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-27828(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27828);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82332490
	if (!ctx.cr0.eq) goto loc_82332490;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// stw r11,-27828(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27828, ctx.r11.u32);
	// addi r3,r9,13572
	ctx.r3.s64 = ctx.r9.s64 + 13572;
	// bl 0x82816528
	ctx.lr = 0x82332488;
	sub_82816528(ctx, base);
	// stw r3,-27832(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27832, ctx.r3.u32);
	// b 0x82332494
	goto loc_82332494;
loc_82332490:
	// lwz r3,-27832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27832);
loc_82332494:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823324A8"))) PPC_WEAK_FUNC(sub_823324A8);
PPC_FUNC_IMPL(__imp__sub_823324A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823324f8
	ctx.lr = 0x823324C8;
	sub_823324F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823324DC;
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

__attribute__((alias("__imp__sub_823324F8"))) PPC_WEAK_FUNC(sub_823324F8);
PPC_FUNC_IMPL(__imp__sub_823324F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r31,r11,-32644
	ctx.r31.s64 = ctx.r11.s64 + -32644;
	// lwz r11,-32648(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32648);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82332540
	if (!ctx.cr0.eq) goto loc_82332540;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,13972
	ctx.r9.s64 = ctx.r9.s64 + 13972;
	// stw r11,-32648(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32648, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-30608
	ctx.r3.s64 = ctx.r11.s64 + -30608;
	// bl 0x82a4c758
	ctx.lr = 0x82332540;
	sub_82A4C758(ctx, base);
loc_82332540:
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

__attribute__((alias("__imp__sub_82332558"))) PPC_WEAK_FUNC(sub_82332558);
PPC_FUNC_IMPL(__imp__sub_82332558) {
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
	// li r3,6512
	ctx.r3.s64 = 6512;
	// bl 0x82833108
	ctx.lr = 0x8233256C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8233257c
	if (ctx.cr0.eq) goto loc_8233257C;
	// bl 0x8259e310
	ctx.lr = 0x82332578;
	sub_8259E310(ctx, base);
	// b 0x82332580
	goto loc_82332580;
loc_8233257C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82332580:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82332590"))) PPC_WEAK_FUNC(sub_82332590);
PPC_FUNC_IMPL(__imp__sub_82332590) {
	PPC_FUNC_PROLOGUE();
	// li r3,6512
	ctx.r3.s64 = 6512;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82332598"))) PPC_WEAK_FUNC(sub_82332598);
PPC_FUNC_IMPL(__imp__sub_82332598) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-27836(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27836);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823325d8
	if (!ctx.cr0.eq) goto loc_823325D8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// stw r11,-27836(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27836, ctx.r11.u32);
	// addi r3,r9,13584
	ctx.r3.s64 = ctx.r9.s64 + 13584;
	// bl 0x82816528
	ctx.lr = 0x823325D0;
	sub_82816528(ctx, base);
	// stw r3,-27840(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27840, ctx.r3.u32);
	// b 0x823325dc
	goto loc_823325DC;
loc_823325D8:
	// lwz r3,-27840(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27840);
loc_823325DC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823325F0"))) PPC_WEAK_FUNC(sub_823325F0);
PPC_FUNC_IMPL(__imp__sub_823325F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82332640
	ctx.lr = 0x82332610;
	sub_82332640(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82332624;
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

__attribute__((alias("__imp__sub_82332640"))) PPC_WEAK_FUNC(sub_82332640);
PPC_FUNC_IMPL(__imp__sub_82332640) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r31,r11,-32628
	ctx.r31.s64 = ctx.r11.s64 + -32628;
	// lwz r11,-32632(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32632);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82332688
	if (!ctx.cr0.eq) goto loc_82332688;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,13992
	ctx.r9.s64 = ctx.r9.s64 + 13992;
	// stw r11,-32632(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32632, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-30632
	ctx.r3.s64 = ctx.r11.s64 + -30632;
	// bl 0x82a4c758
	ctx.lr = 0x82332688;
	sub_82A4C758(ctx, base);
loc_82332688:
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

__attribute__((alias("__imp__sub_823326A0"))) PPC_WEAK_FUNC(sub_823326A0);
PPC_FUNC_IMPL(__imp__sub_823326A0) {
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
	// li r3,6800
	ctx.r3.s64 = 6800;
	// bl 0x82833108
	ctx.lr = 0x823326B4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823326c4
	if (ctx.cr0.eq) goto loc_823326C4;
	// bl 0x82649d70
	ctx.lr = 0x823326C0;
	sub_82649D70(ctx, base);
	// b 0x823326c8
	goto loc_823326C8;
loc_823326C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823326C8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823326D8"))) PPC_WEAK_FUNC(sub_823326D8);
PPC_FUNC_IMPL(__imp__sub_823326D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-27844(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27844);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82332718
	if (!ctx.cr0.eq) goto loc_82332718;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// stw r11,-27844(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27844, ctx.r11.u32);
	// addi r3,r9,13600
	ctx.r3.s64 = ctx.r9.s64 + 13600;
	// bl 0x82816528
	ctx.lr = 0x82332710;
	sub_82816528(ctx, base);
	// stw r3,-27848(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27848, ctx.r3.u32);
	// b 0x8233271c
	goto loc_8233271C;
loc_82332718:
	// lwz r3,-27848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27848);
loc_8233271C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82332730"))) PPC_WEAK_FUNC(sub_82332730);
PPC_FUNC_IMPL(__imp__sub_82332730) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82332780
	ctx.lr = 0x82332750;
	sub_82332780(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82332764;
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

__attribute__((alias("__imp__sub_82332780"))) PPC_WEAK_FUNC(sub_82332780);
PPC_FUNC_IMPL(__imp__sub_82332780) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r31,r11,-32620
	ctx.r31.s64 = ctx.r11.s64 + -32620;
	// lwz r11,-32624(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32624);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823327c8
	if (!ctx.cr0.eq) goto loc_823327C8;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,14012
	ctx.r9.s64 = ctx.r9.s64 + 14012;
	// stw r11,-32624(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32624, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-30656
	ctx.r3.s64 = ctx.r11.s64 + -30656;
	// bl 0x82a4c758
	ctx.lr = 0x823327C8;
	sub_82A4C758(ctx, base);
loc_823327C8:
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

__attribute__((alias("__imp__sub_823327E0"))) PPC_WEAK_FUNC(sub_823327E0);
PPC_FUNC_IMPL(__imp__sub_823327E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x823327E8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r27,16(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// add r11,r27,r28
	ctx.r11.u64 = ctx.r27.u64 + ctx.r28.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82332838
	if (!ctx.cr6.gt) goto loc_82332838;
	// mulli r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 * 3;
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// li r5,8
	ctx.r5.s64 = 8;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bl 0x82332c38
	ctx.lr = 0x82332838;
	sub_82332C38(ctx, base);
loc_82332838:
	// add r10,r29,r28
	ctx.r10.u64 = ctx.r29.u64 + ctx.r28.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mullw r9,r29,r30
	ctx.r9.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r30.s32);
	// mullw r10,r10,r30
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r30.s32);
	// subf r8,r29,r27
	ctx.r8.s64 = ctx.r27.s64 - ctx.r29.s64;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mullw r5,r8,r30
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r30.s32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82a4f820
	ctx.lr = 0x8233285C;
	sub_82A4F820(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82332868"))) PPC_WEAK_FUNC(sub_82332868);
PPC_FUNC_IMPL(__imp__sub_82332868) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// beq cr6,0x823328ac
	if (ctx.cr6.eq) goto loc_823328AC;
	// bl 0x82332640
	ctx.lr = 0x82332888;
	sub_82332640(ctx, base);
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
	ctx.lr = 0x823328A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x823328b0
	if (!ctx.cr0.eq) goto loc_823328B0;
loc_823328AC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823328B0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823328C8"))) PPC_WEAK_FUNC(sub_823328C8);
PPC_FUNC_IMPL(__imp__sub_823328C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// beq cr6,0x8233290c
	if (ctx.cr6.eq) goto loc_8233290C;
	// bl 0x82332780
	ctx.lr = 0x823328E8;
	sub_82332780(ctx, base);
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
	ctx.lr = 0x82332900;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x82332910
	if (!ctx.cr0.eq) goto loc_82332910;
loc_8233290C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82332910:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82332928"))) PPC_WEAK_FUNC(sub_82332928);
PPC_FUNC_IMPL(__imp__sub_82332928) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// beq cr6,0x8233296c
	if (ctx.cr6.eq) goto loc_8233296C;
	// bl 0x823323b8
	ctx.lr = 0x82332948;
	sub_823323B8(ctx, base);
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
	ctx.lr = 0x82332960;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x82332970
	if (!ctx.cr0.eq) goto loc_82332970;
loc_8233296C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82332970:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82332988"))) PPC_WEAK_FUNC(sub_82332988);
PPC_FUNC_IMPL(__imp__sub_82332988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// beq cr6,0x823329cc
	if (ctx.cr6.eq) goto loc_823329CC;
	// bl 0x82332278
	ctx.lr = 0x823329A8;
	sub_82332278(ctx, base);
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
	ctx.lr = 0x823329C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x823329d0
	if (!ctx.cr0.eq) goto loc_823329D0;
loc_823329CC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823329D0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823329E8"))) PPC_WEAK_FUNC(sub_823329E8);
PPC_FUNC_IMPL(__imp__sub_823329E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// beq cr6,0x82332a2c
	if (ctx.cr6.eq) goto loc_82332A2C;
	// bl 0x823324f8
	ctx.lr = 0x82332A08;
	sub_823324F8(ctx, base);
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
	ctx.lr = 0x82332A20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x82332a30
	if (!ctx.cr0.eq) goto loc_82332A30;
loc_82332A2C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82332A30:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82332A48"))) PPC_WEAK_FUNC(sub_82332A48);
PPC_FUNC_IMPL(__imp__sub_82332A48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-8531
	ctx.r11.s64 = -559087616;
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// ori r11,r11,47806
	ctx.r11.u64 = ctx.r11.u64 | 47806;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82332A68"))) PPC_WEAK_FUNC(sub_82332A68);
PPC_FUNC_IMPL(__imp__sub_82332A68) {
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
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82332A84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82332A94;
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

__attribute__((alias("__imp__sub_82332AA8"))) PPC_WEAK_FUNC(sub_82332AA8);
PPC_FUNC_IMPL(__imp__sub_82332AA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82332ACC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// subf r11,r31,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r31.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82332AF0"))) PPC_WEAK_FUNC(sub_82332AF0);
PPC_FUNC_IMPL(__imp__sub_82332AF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r31,r11,-32592
	ctx.r31.s64 = ctx.r11.s64 + -32592;
	// lwz r11,-32588(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32588);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82332b38
	if (!ctx.cr0.eq) goto loc_82332B38;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,14480
	ctx.r9.s64 = ctx.r9.s64 + 14480;
	// stw r11,-32588(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32588, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-30512
	ctx.r3.s64 = ctx.r11.s64 + -30512;
	// bl 0x82a4c758
	ctx.lr = 0x82332B38;
	sub_82A4C758(ctx, base);
loc_82332B38:
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

__attribute__((alias("__imp__sub_82332B50"))) PPC_WEAK_FUNC(sub_82332B50);
PPC_FUNC_IMPL(__imp__sub_82332B50) {
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
	// li r3,6096
	ctx.r3.s64 = 6096;
	// bl 0x82833108
	ctx.lr = 0x82332B64;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82332b74
	if (ctx.cr0.eq) goto loc_82332B74;
	// bl 0x824db158
	ctx.lr = 0x82332B70;
	sub_824DB158(ctx, base);
	// b 0x82332b78
	goto loc_82332B78;
loc_82332B74:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82332B78:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82332B88"))) PPC_WEAK_FUNC(sub_82332B88);
PPC_FUNC_IMPL(__imp__sub_82332B88) {
	PPC_FUNC_PROLOGUE();
	// li r3,6096
	ctx.r3.s64 = 6096;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82332B90"))) PPC_WEAK_FUNC(sub_82332B90);
PPC_FUNC_IMPL(__imp__sub_82332B90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-27852(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27852);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82332bd0
	if (!ctx.cr0.eq) goto loc_82332BD0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// stw r11,-27852(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27852, ctx.r11.u32);
	// addi r3,r9,14092
	ctx.r3.s64 = ctx.r9.s64 + 14092;
	// bl 0x82816528
	ctx.lr = 0x82332BC8;
	sub_82816528(ctx, base);
	// stw r3,-27856(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27856, ctx.r3.u32);
	// b 0x82332bd4
	goto loc_82332BD4;
loc_82332BD0:
	// lwz r3,-27856(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27856);
loc_82332BD4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82332BE8"))) PPC_WEAK_FUNC(sub_82332BE8);
PPC_FUNC_IMPL(__imp__sub_82332BE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82332af0
	ctx.lr = 0x82332C08;
	sub_82332AF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82332C1C;
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

__attribute__((alias("__imp__sub_82332C38"))) PPC_WEAK_FUNC(sub_82332C38);
PPC_FUNC_IMPL(__imp__sub_82332C38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82332C40;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r28,12(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82332c60
	if (!ctx.cr6.eq) goto loc_82332C60;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82332ca0
	if (ctx.cr6.eq) goto loc_82332CA0;
loc_82332C60:
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mullw r29,r11,r4
	ctx.r29.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwz r3,13016(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13016);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82332c80
	if (!ctx.cr6.eq) goto loc_82332C80;
	// bl 0x828223f0
	ctx.lr = 0x82332C7C;
	sub_828223F0(ctx, base);
	// lwz r3,13016(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13016);
loc_82332C80:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82332C9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
loc_82332CA0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82332CA8"))) PPC_WEAK_FUNC(sub_82332CA8);
PPC_FUNC_IMPL(__imp__sub_82332CA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82332CB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// add r8,r4,r29
	ctx.r8.u64 = ctx.r4.u64 + ctx.r29.u64;
	// mullw r10,r4,r30
	ctx.r10.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r30.s32);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r7,r4,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r4.s64;
	// mullw r9,r8,r30
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r30.s32);
	// subf r8,r29,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r29.s64;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mullw r5,r8,r30
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r30.s32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82a4f820
	ctx.lr = 0x82332CEC;
	sub_82A4F820(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// mulli r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 * 3;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82332d1c
	if (ctx.cr6.lt) goto loc_82332D1C;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// mullw r9,r9,r30
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r30.s32);
	// cmpwi cr6,r9,16384
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 16384, ctx.xer);
	// blt cr6,0x82332d44
	if (ctx.cr6.lt) goto loc_82332D44;
loc_82332D1C:
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmpwi cr6,r10,64
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 64, ctx.xer);
	// bgt cr6,0x82332d30
	if (ctx.cr6.gt) goto loc_82332D30;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82332d44
	if (!ctx.cr6.eq) goto loc_82332D44;
loc_82332D30:
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c38
	ctx.lr = 0x82332D44;
	sub_82332C38(ctx, base);
loc_82332D44:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82332D50"))) PPC_WEAK_FUNC(sub_82332D50);
PPC_FUNC_IMPL(__imp__sub_82332D50) {
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
	// lwz r31,16(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// add r11,r31,r4
	ctx.r11.u64 = ctx.r31.u64 + ctx.r4.u64;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x82332da0
	if (!ctx.cr6.gt) goto loc_82332DA0;
	// mulli r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 * 3;
	// srawi r9,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 3;
	// li r5,8
	ctx.r5.s64 = 8;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// bl 0x82332c38
	ctx.lr = 0x82332DA0;
	sub_82332C38(ctx, base);
loc_82332DA0:
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

__attribute__((alias("__imp__sub_82332DB8"))) PPC_WEAK_FUNC(sub_82332DB8);
PPC_FUNC_IMPL(__imp__sub_82332DB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,13016(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13016);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82332de8
	if (!ctx.cr6.eq) goto loc_82332DE8;
	// bl 0x828223f0
	ctx.lr = 0x82332DE4;
	sub_828223F0(ctx, base);
	// lwz r3,13016(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13016);
loc_82332DE8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82332DFC;
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

__attribute__((alias("__imp__sub_82332E18"))) PPC_WEAK_FUNC(sub_82332E18);
PPC_FUNC_IMPL(__imp__sub_82332E18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f13,f13
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,908(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f11,f0,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fmadds f11,f12,f12,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f11.f64));
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// bne cr6,0x82332e4c
	if (!ctx.cr6.eq) goto loc_82332E4C;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82332E4C:
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f9,16668(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16668);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f11,f9
	ctx.cr6.compare(ctx.f11.f64, ctx.f9.f64);
	// blt cr6,0x82332e84
	if (ctx.cr6.lt) goto loc_82332E84;
	// fsqrts f11,f11
	ctx.f11.f64 = double(float(sqrt(ctx.f11.f64)));
	// li r3,1
	ctx.r3.s64 = 1;
	// fdivs f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 / ctx.f11.f64));
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmuls f0,f13,f11
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmuls f0,f12,f11
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// blr 
	return;
loc_82332E84:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82332E90"))) PPC_WEAK_FUNC(sub_82332E90);
PPC_FUNC_IMPL(__imp__sub_82332E90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82332E98;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r28,16(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82332ed4
	if (!ctx.cr6.gt) goto loc_82332ED4;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_82332EB8:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82333960
	ctx.lr = 0x82332EC8;
	sub_82333960(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// bne 0x82332eb8
	if (!ctx.cr0.eq) goto loc_82332EB8;
loc_82332ED4:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,32
	ctx.r6.s64 = 32;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332ca8
	ctx.lr = 0x82332EEC;
	sub_82332CA8(ctx, base);
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82332efc
	if (ctx.cr6.eq) goto loc_82332EFC;
	// bl 0x82332db8
	ctx.lr = 0x82332EFC;
	sub_82332DB8(ctx, base);
loc_82332EFC:
	// stw r27,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r27.u32);
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// stw r27,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r27.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82332F10"))) PPC_WEAK_FUNC(sub_82332F10);
PPC_FUNC_IMPL(__imp__sub_82332F10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82332F18;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r11,32
	ctx.r11.s64 = 32;
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
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
	// beq cr6,0x82332fe4
	if (ctx.cr6.eq) goto loc_82332FE4;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82332fe4
	if (!ctx.cr6.gt) goto loc_82332FE4;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82332f74
	if (ctx.cr0.eq) goto loc_82332F74;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82332c38
	ctx.lr = 0x82332F74;
	sub_82332C38(ctx, base);
loc_82332F74:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82332fe4
	if (!ctx.cr6.gt) goto loc_82332FE4;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_82332F88:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332d50
	ctx.lr = 0x82332F9C;
	sub_82332D50(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r11,r3,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// add. r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82332fd0
	if (ctx.cr0.eq) goto loc_82332FD0;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// add r29,r11,r28
	ctx.r29.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r4,r29,4
	ctx.r4.s64 = ctx.r29.s64 + 4;
	// lwzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x823339b8
	ctx.lr = 0x82332FC8;
	sub_823339B8(ctx, base);
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
loc_82332FD0:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r28,r28,32
	ctx.r28.s64 = ctx.r28.s64 + 32;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82332f88
	if (ctx.cr6.lt) goto loc_82332F88;
loc_82332FE4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82332FF0"))) PPC_WEAK_FUNC(sub_82332FF0);
PPC_FUNC_IMPL(__imp__sub_82332FF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82330280
	ctx.lr = 0x82333010;
	sub_82330280(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82333020
	if (ctx.cr0.eq) goto loc_82333020;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x82333020;
	sub_82332DB8(ctx, base);
loc_82333020:
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

__attribute__((alias("__imp__sub_82333040"))) PPC_WEAK_FUNC(sub_82333040);
PPC_FUNC_IMPL(__imp__sub_82333040) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82333090
	ctx.lr = 0x82333060;
	sub_82333090(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82333074
	if (ctx.cr6.eq) goto loc_82333074;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333180
	ctx.lr = 0x82333074;
	sub_82333180(ctx, base);
loc_82333074:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82333090"))) PPC_WEAK_FUNC(sub_82333090);
PPC_FUNC_IMPL(__imp__sub_82333090) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r31,r11,-32656
	ctx.r31.s64 = ctx.r11.s64 + -32656;
	// lwz r11,-32652(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32652);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823330d8
	if (!ctx.cr0.eq) goto loc_823330D8;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,14404
	ctx.r9.s64 = ctx.r9.s64 + 14404;
	// stw r11,-32652(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32652, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-30488
	ctx.r3.s64 = ctx.r11.s64 + -30488;
	// bl 0x82a4c758
	ctx.lr = 0x823330D8;
	sub_82A4C758(ctx, base);
loc_823330D8:
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

__attribute__((alias("__imp__sub_823330F0"))) PPC_WEAK_FUNC(sub_823330F0);
PPC_FUNC_IMPL(__imp__sub_823330F0) {
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
	// li r3,656
	ctx.r3.s64 = 656;
	// bl 0x82833108
	ctx.lr = 0x82333104;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82333114
	if (ctx.cr0.eq) goto loc_82333114;
	// bl 0x82330160
	ctx.lr = 0x82333110;
	sub_82330160(ctx, base);
	// b 0x82333118
	goto loc_82333118;
loc_82333114:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82333118:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82333128"))) PPC_WEAK_FUNC(sub_82333128);
PPC_FUNC_IMPL(__imp__sub_82333128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-27860(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27860);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82333168
	if (!ctx.cr0.eq) goto loc_82333168;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// stw r11,-27860(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27860, ctx.r11.u32);
	// addi r3,r9,14076
	ctx.r3.s64 = ctx.r9.s64 + 14076;
	// bl 0x82816528
	ctx.lr = 0x82333160;
	sub_82816528(ctx, base);
	// stw r3,-27864(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27864, ctx.r3.u32);
	// b 0x8233316c
	goto loc_8233316C;
loc_82333168:
	// lwz r3,-27864(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27864);
loc_8233316C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82333180"))) PPC_WEAK_FUNC(sub_82333180);
PPC_FUNC_IMPL(__imp__sub_82333180) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823331e0
	ctx.lr = 0x823331A0;
	sub_823331E0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x823331b0
	if (!ctx.cr6.eq) goto loc_823331B0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x823331c4
	goto loc_823331C4;
loc_823331B0:
	// bl 0x82333d20
	ctx.lr = 0x823331B4;
	sub_82333D20(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x823331c4
	if (ctx.cr6.eq) goto loc_823331C4;
	// li r3,0
	ctx.r3.s64 = 0;
loc_823331C4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823331E0"))) PPC_WEAK_FUNC(sub_823331E0);
PPC_FUNC_IMPL(__imp__sub_823331E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r31,r11,-32660
	ctx.r31.s64 = ctx.r11.s64 + -32660;
	// lwz r11,-32664(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32664);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82333228
	if (!ctx.cr0.eq) goto loc_82333228;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,19588
	ctx.r9.s64 = ctx.r9.s64 + 19588;
	// stw r11,-32664(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32664, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-30464
	ctx.r3.s64 = ctx.r11.s64 + -30464;
	// bl 0x82a4c758
	ctx.lr = 0x82333228;
	sub_82A4C758(ctx, base);
loc_82333228:
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

__attribute__((alias("__imp__sub_82333240"))) PPC_WEAK_FUNC(sub_82333240);
PPC_FUNC_IMPL(__imp__sub_82333240) {
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
	// li r3,384
	ctx.r3.s64 = 384;
	// bl 0x82833108
	ctx.lr = 0x82333254;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82333264
	if (ctx.cr0.eq) goto loc_82333264;
	// bl 0x8281b200
	ctx.lr = 0x82333260;
	sub_8281B200(ctx, base);
	// b 0x82333268
	goto loc_82333268;
loc_82333264:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82333268:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82333278"))) PPC_WEAK_FUNC(sub_82333278);
PPC_FUNC_IMPL(__imp__sub_82333278) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-27868(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27868);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823332b8
	if (!ctx.cr0.eq) goto loc_823332B8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// stw r11,-27868(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27868, ctx.r11.u32);
	// addi r3,r9,14064
	ctx.r3.s64 = ctx.r9.s64 + 14064;
	// bl 0x82816528
	ctx.lr = 0x823332B0;
	sub_82816528(ctx, base);
	// stw r3,-27872(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27872, ctx.r3.u32);
	// b 0x823332bc
	goto loc_823332BC;
loc_823332B8:
	// lwz r3,-27872(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27872);
loc_823332BC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823332D0"))) PPC_WEAK_FUNC(sub_823332D0);
PPC_FUNC_IMPL(__imp__sub_823332D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823331e0
	ctx.lr = 0x823332F0;
	sub_823331E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82333304;
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

__attribute__((alias("__imp__sub_82333320"))) PPC_WEAK_FUNC(sub_82333320);
PPC_FUNC_IMPL(__imp__sub_82333320) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82333358
	if (ctx.cr6.eq) goto loc_82333358;
	// bl 0x82333090
	ctx.lr = 0x82333348;
	sub_82333090(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82333358
	if (!ctx.cr6.eq) goto loc_82333358;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82333364
	goto loc_82333364;
loc_82333358:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333380
	ctx.lr = 0x82333364;
	sub_82333380(ctx, base);
loc_82333364:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82333380"))) PPC_WEAK_FUNC(sub_82333380);
PPC_FUNC_IMPL(__imp__sub_82333380) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// beq cr6,0x823333c0
	if (ctx.cr6.eq) goto loc_823333C0;
	// bl 0x823331e0
	ctx.lr = 0x823333A0;
	sub_823331E0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x823333b0
	if (!ctx.cr6.eq) goto loc_823333B0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823333c4
	goto loc_823333C4;
loc_823333B0:
	// bl 0x82333d20
	ctx.lr = 0x823333B4;
	sub_82333D20(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x823333c4
	if (ctx.cr6.eq) goto loc_823333C4;
loc_823333C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823333C4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823333D8"))) PPC_WEAK_FUNC(sub_823333D8);
PPC_FUNC_IMPL(__imp__sub_823333D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82333090
	sub_82333090(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823333E0"))) PPC_WEAK_FUNC(sub_823333E0);
PPC_FUNC_IMPL(__imp__sub_823333E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x823331e0
	sub_823331E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823333E8"))) PPC_WEAK_FUNC(sub_823333E8);
PPC_FUNC_IMPL(__imp__sub_823333E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x82333404;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82333418
	if (ctx.cr0.eq) goto loc_82333418;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333430
	ctx.lr = 0x82333414;
	sub_82333430(ctx, base);
	// b 0x8233341c
	goto loc_8233341C;
loc_82333418:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8233341C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82333430"))) PPC_WEAK_FUNC(sub_82333430);
PPC_FUNC_IMPL(__imp__sub_82333430) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82333438;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823335d8
	ctx.lr = 0x82333448;
	sub_823335D8(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r30,476
	ctx.r4.s64 = ctx.r30.s64 + 476;
	// addi r11,r11,14400
	ctx.r11.s64 = ctx.r11.s64 + 14400;
	// addi r3,r31,476
	ctx.r3.s64 = ctx.r31.s64 + 476;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r5,28
	ctx.r5.s64 = 28;
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
	// lwz r11,424(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 424);
	// stw r11,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r11.u32);
	// lfs f0,428(r30)
	ctx.fpscr.disableFlushMode();
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
	// lwz r11,436(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 436);
	// stw r11,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r11.u32);
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
	// lfs f0,456(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 456);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,456(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 456, temp.u32);
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
	// lfs f0,472(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 472);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,472(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 472, temp.u32);
	// bl 0x82a4ea80
	ctx.lr = 0x8233351C;
	sub_82A4EA80(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// addi r11,r11,11204
	ctx.r11.s64 = ctx.r11.s64 + 11204;
	// addi r29,r10,11204
	ctx.r29.s64 = ctx.r10.s64 + 11204;
	// stw r11,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r11.u32);
	// addi r4,r30,532
	ctx.r4.s64 = ctx.r30.s64 + 532;
	// addi r3,r31,532
	ctx.r3.s64 = ctx.r31.s64 + 532;
	// lwz r11,508(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 508);
	// stw r11,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r11.u32);
	// lfs f0,512(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 512);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,512(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 512, temp.u32);
	// lfs f0,516(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 516);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,516(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 516, temp.u32);
	// stw r29,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r29.u32);
	// lfs f0,524(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 524);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,524(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 524, temp.u32);
	// lfs f0,528(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 528);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,528(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 528, temp.u32);
	// bl 0x8284b058
	ctx.lr = 0x82333568;
	sub_8284B058(ctx, base);
	// lwz r11,556(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 556);
	// addi r3,r31,564
	ctx.r3.s64 = ctx.r31.s64 + 564;
	// addi r4,r30,564
	ctx.r4.s64 = ctx.r30.s64 + 564;
	// stw r11,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r11.u32);
	// lwz r11,560(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 560);
	// stw r11,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r11.u32);
	// bl 0x82873b58
	ctx.lr = 0x82333584;
	sub_82873B58(ctx, base);
	// lfs f0,588(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 588);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,588(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 588, temp.u32);
	// lwz r11,592(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 592);
	// stw r11,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r11.u32);
	// addi r3,r31,600
	ctx.r3.s64 = ctx.r31.s64 + 600;
	// lwz r11,596(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 596);
	// addi r4,r30,600
	ctx.r4.s64 = ctx.r30.s64 + 600;
	// li r5,28
	ctx.r5.s64 = 28;
	// stw r11,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r11.u32);
	// bl 0x82a4ea80
	ctx.lr = 0x823335AC;
	sub_82A4EA80(ctx, base);
	// stw r29,628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 628, ctx.r29.u32);
	// lfs f0,632(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 632);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,632(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 632, temp.u32);
	// lfs f0,636(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 636);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,636(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 636, temp.u32);
	// lwz r11,640(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 640);
	// stw r11,640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 640, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823335D8"))) PPC_WEAK_FUNC(sub_823335D8);
PPC_FUNC_IMPL(__imp__sub_823335D8) {
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
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,14104
	ctx.r11.s64 = ctx.r11.s64 + 14104;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r4,r30,80
	ctx.r4.s64 = ctx.r30.s64 + 80;
	// addi r10,r10,14216
	ctx.r10.s64 = ctx.r10.s64 + 14216;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
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
	// bl 0x82873b58
	ctx.lr = 0x823336B8;
	sub_82873B58(ctx, base);
	// addi r4,r30,104
	ctx.r4.s64 = ctx.r30.s64 + 104;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x8282f630
	ctx.lr = 0x823336C4;
	sub_8282F630(ctx, base);
	// lwz r11,128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// addi r4,r30,176
	ctx.r4.s64 = ctx.r30.s64 + 176;
	// li r5,64
	ctx.r5.s64 = 64;
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
	// lwz r11,144(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// lwz r11,148(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// lwz r11,152(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// lwz r11,156(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// lwz r11,160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// lwz r11,164(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// stw r11,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
	// lwz r11,168(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// bl 0x82a4ea80
	ctx.lr = 0x8233372C;
	sub_82A4EA80(ctx, base);
	// addi r3,r31,240
	ctx.r3.s64 = ctx.r31.s64 + 240;
	// addi r4,r30,240
	ctx.r4.s64 = ctx.r30.s64 + 240;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x82a4ea80
	ctx.lr = 0x8233373C;
	sub_82A4EA80(ctx, base);
	// lwz r11,304(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 304);
	// addi r3,r31,316
	ctx.r3.s64 = ctx.r31.s64 + 316;
	// addi r4,r30,316
	ctx.r4.s64 = ctx.r30.s64 + 316;
	// li r5,28
	ctx.r5.s64 = 28;
	// stw r11,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r11.u32);
	// lwz r11,308(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 308);
	// stw r11,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r11.u32);
	// lwz r11,312(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 312);
	// stw r11,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r11.u32);
	// bl 0x82a4ea80
	ctx.lr = 0x82333764;
	sub_82A4EA80(ctx, base);
	// addi r3,r31,344
	ctx.r3.s64 = ctx.r31.s64 + 344;
	// addi r4,r30,344
	ctx.r4.s64 = ctx.r30.s64 + 344;
	// li r5,28
	ctx.r5.s64 = 28;
	// bl 0x82a4ea80
	ctx.lr = 0x82333774;
	sub_82A4EA80(ctx, base);
	// lfs f0,372(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 372);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,372(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 372, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,376(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 376);
	// stw r11,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823337A0"))) PPC_WEAK_FUNC(sub_823337A0);
PPC_FUNC_IMPL(__imp__sub_823337A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8281b2f0
	ctx.lr = 0x823337C0;
	sub_8281B2F0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823337d0
	if (ctx.cr0.eq) goto loc_823337D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x823337D0;
	sub_82332DB8(ctx, base);
loc_823337D0:
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

__attribute__((alias("__imp__sub_823337F0"))) PPC_WEAK_FUNC(sub_823337F0);
PPC_FUNC_IMPL(__imp__sub_823337F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,384
	ctx.r3.s64 = 384;
	// bl 0x82833108
	ctx.lr = 0x8233380C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82333820
	if (ctx.cr0.eq) goto loc_82333820;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823335d8
	ctx.lr = 0x8233381C;
	sub_823335D8(ctx, base);
	// b 0x82333824
	goto loc_82333824;
loc_82333820:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82333824:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82333838"))) PPC_WEAK_FUNC(sub_82333838);
PPC_FUNC_IMPL(__imp__sub_82333838) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,14064
	ctx.r3.s64 = ctx.r11.s64 + 14064;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82333848"))) PPC_WEAK_FUNC(sub_82333848);
PPC_FUNC_IMPL(__imp__sub_82333848) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,14076
	ctx.r3.s64 = ctx.r11.s64 + 14076;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82333858"))) PPC_WEAK_FUNC(sub_82333858);
PPC_FUNC_IMPL(__imp__sub_82333858) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82332c38
	ctx.lr = 0x8233389C;
	sub_82332C38(ctx, base);
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

__attribute__((alias("__imp__sub_823338B8"))) PPC_WEAK_FUNC(sub_823338B8);
PPC_FUNC_IMPL(__imp__sub_823338B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x823338C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mullw r11,r29,r5
	ctx.r11.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r5.s32);
	// addic. r31,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r31.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r30,r11,r3
	ctx.r30.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blt 0x823338f4
	if (ctx.cr0.lt) goto loc_823338F4;
loc_823338DC:
	// subf r30,r29,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r29.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x823338EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x823338dc
	if (!ctx.cr0.lt) goto loc_823338DC;
loc_823338F4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82333900"))) PPC_WEAK_FUNC(sub_82333900);
PPC_FUNC_IMPL(__imp__sub_82333900) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,13016(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13016);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82333930
	if (!ctx.cr6.eq) goto loc_82333930;
	// bl 0x828223f0
	ctx.lr = 0x8233392C;
	sub_828223F0(ctx, base);
	// lwz r3,13016(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13016);
loc_82333930:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82333948;
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

__attribute__((alias("__imp__sub_82333960"))) PPC_WEAK_FUNC(sub_82333960);
PPC_FUNC_IMPL(__imp__sub_82333960) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82333998
	if (ctx.cr6.eq) goto loc_82333998;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82332c38
	ctx.lr = 0x82333998;
	sub_82332C38(ctx, base);
loc_82333998:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82851078
	ctx.lr = 0x823339A0;
	sub_82851078(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823339B8"))) PPC_WEAK_FUNC(sub_823339B8);
PPC_FUNC_IMPL(__imp__sub_823339B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x82333858
	ctx.lr = 0x823339E4;
	sub_82333858(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82333a00
	if (ctx.cr6.eq) goto loc_82333A00;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82a45878
	ctx.lr = 0x82333A00;
	sub_82A45878(ctx, base);
loc_82333A00:
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

__attribute__((alias("__imp__sub_82333A20"))) PPC_WEAK_FUNC(sub_82333A20);
PPC_FUNC_IMPL(__imp__sub_82333A20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// beq cr6,0x82333a64
	if (ctx.cr6.eq) goto loc_82333A64;
	// bl 0x82332af0
	ctx.lr = 0x82333A40;
	sub_82332AF0(ctx, base);
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
	ctx.lr = 0x82333A58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x82333a68
	if (!ctx.cr0.eq) goto loc_82333A68;
loc_82333A64:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82333A68:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82333A80"))) PPC_WEAK_FUNC(sub_82333A80);
PPC_FUNC_IMPL(__imp__sub_82333A80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82333A88;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82833180
	ctx.lr = 0x82333A9C;
	sub_82833180(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r11,r11,14296
	ctx.r11.s64 = ctx.r11.s64 + 14296;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82333ab8
	if (ctx.cr6.eq) goto loc_82333AB8;
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// b 0x82333abc
	goto loc_82333ABC;
loc_82333AB8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82333ABC:
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82333ad0
	if (ctx.cr6.eq) goto loc_82333AD0;
	// lwz r11,80(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// b 0x82333ad4
	goto loc_82333AD4;
loc_82333AD0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82333AD4:
	// lis r10,-8531
	ctx.r10.s64 = -559087616;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r10,r10,47806
	ctx.r10.u64 = ctx.r10.u64 | 47806;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82333AF8"))) PPC_WEAK_FUNC(sub_82333AF8);
PPC_FUNC_IMPL(__imp__sub_82333AF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,14040
	ctx.r3.s64 = ctx.r11.s64 + 14040;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82333B08"))) PPC_WEAK_FUNC(sub_82333B08);
PPC_FUNC_IMPL(__imp__sub_82333B08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82333b68
	ctx.lr = 0x82333B28;
	sub_82333B68(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82333b38
	if (!ctx.cr6.eq) goto loc_82333B38;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82333b4c
	goto loc_82333B4C;
loc_82333B38:
	// bl 0x82333d20
	ctx.lr = 0x82333B3C;
	sub_82333D20(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82333b4c
	if (ctx.cr6.eq) goto loc_82333B4C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82333B4C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82333B68"))) PPC_WEAK_FUNC(sub_82333B68);
PPC_FUNC_IMPL(__imp__sub_82333B68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r31,r11,-32600
	ctx.r31.s64 = ctx.r11.s64 + -32600;
	// lwz r11,-32596(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32596);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82333bb0
	if (!ctx.cr0.eq) goto loc_82333BB0;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,14376
	ctx.r9.s64 = ctx.r9.s64 + 14376;
	// stw r11,-32596(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32596, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-30440
	ctx.r3.s64 = ctx.r11.s64 + -30440;
	// bl 0x82a4c758
	ctx.lr = 0x82333BB0;
	sub_82A4C758(ctx, base);
loc_82333BB0:
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

__attribute__((alias("__imp__sub_82333BC8"))) PPC_WEAK_FUNC(sub_82333BC8);
PPC_FUNC_IMPL(__imp__sub_82333BC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-27876(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27876);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82333c08
	if (!ctx.cr0.eq) goto loc_82333C08;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// stw r11,-27876(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27876, ctx.r11.u32);
	// addi r3,r9,14040
	ctx.r3.s64 = ctx.r9.s64 + 14040;
	// bl 0x82816528
	ctx.lr = 0x82333C00;
	sub_82816528(ctx, base);
	// stw r3,-27880(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27880, ctx.r3.u32);
	// b 0x82333c0c
	goto loc_82333C0C;
loc_82333C08:
	// lwz r3,-27880(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27880);
loc_82333C0C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82333C20"))) PPC_WEAK_FUNC(sub_82333C20);
PPC_FUNC_IMPL(__imp__sub_82333C20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82333b68
	ctx.lr = 0x82333C40;
	sub_82333B68(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82333C54;
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

__attribute__((alias("__imp__sub_82333C70"))) PPC_WEAK_FUNC(sub_82333C70);
PPC_FUNC_IMPL(__imp__sub_82333C70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// beq cr6,0x82333cb0
	if (ctx.cr6.eq) goto loc_82333CB0;
	// bl 0x82333b68
	ctx.lr = 0x82333C90;
	sub_82333B68(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82333ca0
	if (!ctx.cr6.eq) goto loc_82333CA0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82333cb4
	goto loc_82333CB4;
loc_82333CA0:
	// bl 0x82333d20
	ctx.lr = 0x82333CA4;
	sub_82333D20(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x82333cb4
	if (ctx.cr6.eq) goto loc_82333CB4;
loc_82333CB0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82333CB4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82333CC8"))) PPC_WEAK_FUNC(sub_82333CC8);
PPC_FUNC_IMPL(__imp__sub_82333CC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,14032
	ctx.r3.s64 = ctx.r11.s64 + 14032;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82333CD8"))) PPC_WEAK_FUNC(sub_82333CD8);
PPC_FUNC_IMPL(__imp__sub_82333CD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82333d20
	ctx.lr = 0x82333CF8;
	sub_82333D20(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82333d08
	if (ctx.cr6.eq) goto loc_82333D08;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82333D08:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82333D20"))) PPC_WEAK_FUNC(sub_82333D20);
PPC_FUNC_IMPL(__imp__sub_82333D20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r31,r11,-32608
	ctx.r31.s64 = ctx.r11.s64 + -32608;
	// lwz r11,-32604(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32604);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82333d68
	if (!ctx.cr0.eq) goto loc_82333D68;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,14196
	ctx.r9.s64 = ctx.r9.s64 + 14196;
	// stw r11,-32604(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32604, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-30416
	ctx.r3.s64 = ctx.r11.s64 + -30416;
	// bl 0x82a4c758
	ctx.lr = 0x82333D68;
	sub_82A4C758(ctx, base);
loc_82333D68:
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

__attribute__((alias("__imp__sub_82333D80"))) PPC_WEAK_FUNC(sub_82333D80);
PPC_FUNC_IMPL(__imp__sub_82333D80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-27884(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27884);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82333dc0
	if (!ctx.cr0.eq) goto loc_82333DC0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// stw r11,-27884(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27884, ctx.r11.u32);
	// addi r3,r9,14032
	ctx.r3.s64 = ctx.r9.s64 + 14032;
	// bl 0x82816528
	ctx.lr = 0x82333DB8;
	sub_82816528(ctx, base);
	// stw r3,-27888(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27888, ctx.r3.u32);
	// b 0x82333dc4
	goto loc_82333DC4;
loc_82333DC0:
	// lwz r3,-27888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27888);
loc_82333DC4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82333DD8"))) PPC_WEAK_FUNC(sub_82333DD8);
PPC_FUNC_IMPL(__imp__sub_82333DD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82333d20
	ctx.lr = 0x82333DF8;
	sub_82333D20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82333E0C;
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

__attribute__((alias("__imp__sub_82333E28"))) PPC_WEAK_FUNC(sub_82333E28);
PPC_FUNC_IMPL(__imp__sub_82333E28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// beq cr6,0x82333e54
	if (ctx.cr6.eq) goto loc_82333E54;
	// bl 0x82333d20
	ctx.lr = 0x82333E48;
	sub_82333D20(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x82333e58
	if (ctx.cr6.eq) goto loc_82333E58;
loc_82333E54:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82333E58:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82333E70"))) PPC_WEAK_FUNC(sub_82333E70);
PPC_FUNC_IMPL(__imp__sub_82333E70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82333E78;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// addic. r31,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r31.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82333ea8
	if (ctx.cr0.lt) goto loc_82333EA8;
loc_82333E90:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x82333E9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r30,r30,r29
	ctx.r30.u64 = ctx.r30.u64 + ctx.r29.u64;
	// bge 0x82333e90
	if (!ctx.cr0.lt) goto loc_82333E90;
loc_82333EA8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82333EB0"))) PPC_WEAK_FUNC(sub_82333EB0);
PPC_FUNC_IMPL(__imp__sub_82333EB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,14500
	ctx.r3.s64 = ctx.r11.s64 + 14500;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82333EC0"))) PPC_WEAK_FUNC(sub_82333EC0);
PPC_FUNC_IMPL(__imp__sub_82333EC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// beq cr6,0x82333f00
	if (ctx.cr6.eq) goto loc_82333F00;
	// bl 0x82334e88
	ctx.lr = 0x82333EE0;
	sub_82334E88(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82333ef0
	if (!ctx.cr6.eq) goto loc_82333EF0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82333f04
	goto loc_82333F04;
loc_82333EF0:
	// bl 0x82333d20
	ctx.lr = 0x82333EF4;
	sub_82333D20(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x82333f04
	if (ctx.cr6.eq) goto loc_82333F04;
loc_82333F00:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82333F04:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82333F18"))) PPC_WEAK_FUNC(sub_82333F18);
PPC_FUNC_IMPL(__imp__sub_82333F18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82833108
	ctx.lr = 0x82333F34;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82333f70
	if (ctx.cr0.eq) goto loc_82333F70;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r11,r11,14104
	ctx.r11.s64 = ctx.r11.s64 + 14104;
	// addi r10,r10,14704
	ctx.r10.s64 = ctx.r10.s64 + 14704;
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
	// b 0x82333f74
	goto loc_82333F74;
loc_82333F70:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82333F74:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82333F88"))) PPC_WEAK_FUNC(sub_82333F88);
PPC_FUNC_IMPL(__imp__sub_82333F88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82334e88
	ctx.lr = 0x82333FA8;
	sub_82334E88(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82333fb8
	if (!ctx.cr6.eq) goto loc_82333FB8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82333fcc
	goto loc_82333FCC;
loc_82333FB8:
	// bl 0x82333d20
	ctx.lr = 0x82333FBC;
	sub_82333D20(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82333fcc
	if (ctx.cr6.eq) goto loc_82333FCC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82333FCC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82333FE8"))) PPC_WEAK_FUNC(sub_82333FE8);
PPC_FUNC_IMPL(__imp__sub_82333FE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,14516
	ctx.r3.s64 = ctx.r11.s64 + 14516;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82333FF8"))) PPC_WEAK_FUNC(sub_82333FF8);
PPC_FUNC_IMPL(__imp__sub_82333FF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82334030
	if (ctx.cr6.eq) goto loc_82334030;
	// bl 0x82335178
	ctx.lr = 0x82334020;
	sub_82335178(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82334030
	if (!ctx.cr6.eq) goto loc_82334030;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8233403c
	goto loc_8233403C;
loc_82334030:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333ec0
	ctx.lr = 0x8233403C;
	sub_82333EC0(ctx, base);
loc_8233403C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82334058"))) PPC_WEAK_FUNC(sub_82334058);
PPC_FUNC_IMPL(__imp__sub_82334058) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,120
	ctx.r3.s64 = 120;
	// bl 0x82833108
	ctx.lr = 0x82334074;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82334088
	if (ctx.cr0.eq) goto loc_82334088;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82334248
	ctx.lr = 0x82334084;
	sub_82334248(ctx, base);
	// b 0x8233408c
	goto loc_8233408C;
loc_82334088:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8233408C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823340A0"))) PPC_WEAK_FUNC(sub_823340A0);
PPC_FUNC_IMPL(__imp__sub_823340A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82335178
	ctx.lr = 0x823340C0;
	sub_82335178(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x823340d4
	if (ctx.cr6.eq) goto loc_823340D4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333f88
	ctx.lr = 0x823340D4;
	sub_82333F88(ctx, base);
loc_823340D4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823340F0"))) PPC_WEAK_FUNC(sub_823340F0);
PPC_FUNC_IMPL(__imp__sub_823340F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x82334108;
	sub_82833180(ctx, base);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r9,12
	ctx.r9.s64 = 12;
	// addi r10,r10,14784
	ctx.r10.s64 = ctx.r10.s64 + 14784;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// li r10,36
	ctx.r10.s64 = 36;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// li r9,32
	ctx.r9.s64 = 32;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r8,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r8.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// stw r9,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823341A0"))) PPC_WEAK_FUNC(sub_823341A0);
PPC_FUNC_IMPL(__imp__sub_823341A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// addi r11,r11,14784
	ctx.r11.s64 = ctx.r11.s64 + 14784;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82335018
	ctx.lr = 0x823341CC;
	sub_82335018(ctx, base);
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x82334f98
	ctx.lr = 0x823341D4;
	sub_82334F98(ctx, base);
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// bl 0x82334ee8
	ctx.lr = 0x823341DC;
	sub_82334EE8(ctx, base);
	// addi r30,r31,20
	ctx.r30.s64 = ctx.r31.s64 + 20;
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r5,36(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r6,12
	ctx.r6.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332ca8
	ctx.lr = 0x823341F8;
	sub_82332CA8(ctx, base);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82334208
	if (ctx.cr6.eq) goto loc_82334208;
	// bl 0x82332db8
	ctx.lr = 0x82334208;
	sub_82332DB8(ctx, base);
loc_82334208:
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,14704
	ctx.r10.s64 = ctx.r10.s64 + 14704;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82833238
	ctx.lr = 0x8233422C;
	sub_82833238(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82334248"))) PPC_WEAK_FUNC(sub_82334248);
PPC_FUNC_IMPL(__imp__sub_82334248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x82334250;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// addi r11,r11,14104
	ctx.r11.s64 = ctx.r11.s64 + 14104;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r9,r9,14704
	ctx.r9.s64 = ctx.r9.s64 + 14704;
	// lwz r10,16(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// lwz r8,4(r24)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// addi r11,r11,14784
	ctx.r11.s64 = ctx.r11.s64 + 14784;
	// stw r9,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r9.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r8,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r8.u32);
	// addi r30,r25,20
	ctx.r30.s64 = ctx.r25.s64 + 20;
	// lwz r9,8(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// addi r29,r24,20
	ctx.r29.s64 = ctx.r24.s64 + 20;
	// stw r9,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r9.u32);
	// li r9,12
	ctx.r9.s64 = 12;
	// lwz r8,12(r24)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// stw r8,12(r25)
	PPC_STORE_U32(ctx.r25.u32 + 12, ctx.r8.u32);
	// lwz r11,16(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// rlwimi r11,r10,0,1,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x7FFFFFFF) | (ctx.r11.u64 & 0xFFFFFFFF80000000);
	// stw r11,16(r25)
	PPC_STORE_U32(ctx.r25.u32 + 16, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,16(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// rlwimi r11,r10,0,1,1
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x40000000) | (ctx.r11.u64 & 0xFFFFFFFFBFFFFFFF);
	// stw r11,16(r25)
	PPC_STORE_U32(ctx.r25.u32 + 16, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,16(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// rlwimi r11,r10,0,2,2
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x20000000) | (ctx.r11.u64 & 0xFFFFFFFFDFFFFFFF);
	// stw r11,16(r25)
	PPC_STORE_U32(ctx.r25.u32 + 16, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,16(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// rlwimi r11,r10,0,3,3
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x10000000) | (ctx.r11.u64 & 0xFFFFFFFFEFFFFFFF);
	// stw r11,16(r25)
	PPC_STORE_U32(ctx.r25.u32 + 16, ctx.r11.u32);
	// stw r9,24(r25)
	PPC_STORE_U32(ctx.r25.u32 + 24, ctx.r9.u32);
	// stw r31,28(r25)
	PPC_STORE_U32(ctx.r25.u32 + 28, ctx.r31.u32);
	// stw r31,32(r25)
	PPC_STORE_U32(ctx.r25.u32 + 32, ctx.r31.u32);
	// stw r31,36(r25)
	PPC_STORE_U32(ctx.r25.u32 + 36, ctx.r31.u32);
	// stw r31,40(r25)
	PPC_STORE_U32(ctx.r25.u32 + 40, ctx.r31.u32);
	// stw r31,20(r25)
	PPC_STORE_U32(ctx.r25.u32 + 20, ctx.r31.u32);
	// beq cr6,0x823343a0
	if (ctx.cr6.eq) goto loc_823343A0;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823343a0
	if (!ctx.cr6.gt) goto loc_823343A0;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82334334
	if (ctx.cr0.eq) goto loc_82334334;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332c38
	ctx.lr = 0x82334334;
	sub_82332C38(ctx, base);
loc_82334334:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823343a0
	if (!ctx.cr6.gt) goto loc_823343A0;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_82334348:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332d50
	ctx.lr = 0x8233435C;
	sub_82332D50(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mulli r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 * 12;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8233438c
	if (ctx.cr0.eq) goto loc_8233438C;
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// add r9,r10,r28
	ctx.r9.u64 = ctx.r10.u64 + ctx.r28.u64;
	// lwzx r10,r10,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
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
loc_8233438C:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,12
	ctx.r28.s64 = ctx.r28.s64 + 12;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82334348
	if (ctx.cr6.lt) goto loc_82334348;
loc_823343A0:
	// addi r30,r25,44
	ctx.r30.s64 = ctx.r25.s64 + 44;
	// stw r31,52(r25)
	PPC_STORE_U32(ctx.r25.u32 + 52, ctx.r31.u32);
	// addi r29,r24,44
	ctx.r29.s64 = ctx.r24.s64 + 44;
	// stw r31,56(r25)
	PPC_STORE_U32(ctx.r25.u32 + 56, ctx.r31.u32);
	// li r11,40
	ctx.r11.s64 = 40;
	// stw r31,60(r25)
	PPC_STORE_U32(ctx.r25.u32 + 60, ctx.r31.u32);
	// stw r31,64(r25)
	PPC_STORE_U32(ctx.r25.u32 + 64, ctx.r31.u32);
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// stw r11,48(r25)
	PPC_STORE_U32(ctx.r25.u32 + 48, ctx.r11.u32);
	// stw r31,44(r25)
	PPC_STORE_U32(ctx.r25.u32 + 44, ctx.r31.u32);
	// beq cr6,0x82334450
	if (ctx.cr6.eq) goto loc_82334450;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82334450
	if (!ctx.cr6.gt) goto loc_82334450;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823343f8
	if (ctx.cr0.eq) goto loc_823343F8;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332c38
	ctx.lr = 0x823343F8;
	sub_82332C38(ctx, base);
loc_823343F8:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82334450
	if (!ctx.cr6.gt) goto loc_82334450;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_8233440C:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332d50
	ctx.lr = 0x82334420;
	sub_82332D50(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mulli r10,r3,40
	ctx.r10.s64 = ctx.r3.s64 * 40;
	// add. r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8233443c
	if (ctx.cr0.eq) goto loc_8233443C;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x82335318
	ctx.lr = 0x8233443C;
	sub_82335318(ctx, base);
loc_8233443C:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,40
	ctx.r28.s64 = ctx.r28.s64 + 40;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8233440c
	if (ctx.cr6.lt) goto loc_8233440C;
loc_82334450:
	// addi r30,r25,68
	ctx.r30.s64 = ctx.r25.s64 + 68;
	// stw r31,76(r25)
	PPC_STORE_U32(ctx.r25.u32 + 76, ctx.r31.u32);
	// addi r29,r24,68
	ctx.r29.s64 = ctx.r24.s64 + 68;
	// stw r31,80(r25)
	PPC_STORE_U32(ctx.r25.u32 + 80, ctx.r31.u32);
	// li r11,36
	ctx.r11.s64 = 36;
	// stw r31,84(r25)
	PPC_STORE_U32(ctx.r25.u32 + 84, ctx.r31.u32);
	// stw r31,88(r25)
	PPC_STORE_U32(ctx.r25.u32 + 88, ctx.r31.u32);
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// stw r11,72(r25)
	PPC_STORE_U32(ctx.r25.u32 + 72, ctx.r11.u32);
	// stw r31,68(r25)
	PPC_STORE_U32(ctx.r25.u32 + 68, ctx.r31.u32);
	// beq cr6,0x82334500
	if (ctx.cr6.eq) goto loc_82334500;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82334500
	if (!ctx.cr6.gt) goto loc_82334500;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823344a8
	if (ctx.cr0.eq) goto loc_823344A8;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332c38
	ctx.lr = 0x823344A8;
	sub_82332C38(ctx, base);
loc_823344A8:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82334500
	if (!ctx.cr6.gt) goto loc_82334500;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_823344BC:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,36
	ctx.r5.s64 = 36;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332d50
	ctx.lr = 0x823344D0;
	sub_82332D50(ctx, base);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mulli r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 * 36;
	// add. r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x823344ec
	if (ctx.cr0.eq) goto loc_823344EC;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x82335420
	ctx.lr = 0x823344EC;
	sub_82335420(ctx, base);
loc_823344EC:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,36
	ctx.r28.s64 = ctx.r28.s64 + 36;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823344bc
	if (ctx.cr6.lt) goto loc_823344BC;
loc_82334500:
	// addi r30,r25,92
	ctx.r30.s64 = ctx.r25.s64 + 92;
	// stw r31,100(r25)
	PPC_STORE_U32(ctx.r25.u32 + 100, ctx.r31.u32);
	// addi r27,r24,92
	ctx.r27.s64 = ctx.r24.s64 + 92;
	// stw r31,104(r25)
	PPC_STORE_U32(ctx.r25.u32 + 104, ctx.r31.u32);
	// li r11,32
	ctx.r11.s64 = 32;
	// stw r31,108(r25)
	PPC_STORE_U32(ctx.r25.u32 + 108, ctx.r31.u32);
	// stw r31,112(r25)
	PPC_STORE_U32(ctx.r25.u32 + 112, ctx.r31.u32);
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// stw r11,96(r25)
	PPC_STORE_U32(ctx.r25.u32 + 96, ctx.r11.u32);
	// stw r31,92(r25)
	PPC_STORE_U32(ctx.r25.u32 + 92, ctx.r31.u32);
	// beq cr6,0x823345c4
	if (ctx.cr6.eq) goto loc_823345C4;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823345c4
	if (!ctx.cr6.gt) goto loc_823345C4;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82334558
	if (ctx.cr0.eq) goto loc_82334558;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332c38
	ctx.lr = 0x82334558;
	sub_82332C38(ctx, base);
loc_82334558:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823345c4
	if (!ctx.cr6.gt) goto loc_823345C4;
loc_82334568:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332d50
	ctx.lr = 0x8233457C;
	sub_82332D50(ctx, base);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r11,r3,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// add. r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x823345b0
	if (ctx.cr0.eq) goto loc_823345B0;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// add r28,r11,r31
	ctx.r28.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r4,r28,4
	ctx.r4.s64 = ctx.r28.s64 + 4;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bl 0x82873b58
	ctx.lr = 0x823345A8;
	sub_82873B58(ctx, base);
	// lwz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// stw r11,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r11.u32);
loc_823345B0:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82334568
	if (ctx.cr6.lt) goto loc_82334568;
loc_823345C4:
	// lwz r11,116(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 116);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r11,116(r25)
	PPC_STORE_U32(ctx.r25.u32 + 116, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823345D8"))) PPC_WEAK_FUNC(sub_823345D8);
PPC_FUNC_IMPL(__imp__sub_823345D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,14528
	ctx.r3.s64 = ctx.r11.s64 + 14528;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823345E8"))) PPC_WEAK_FUNC(sub_823345E8);
PPC_FUNC_IMPL(__imp__sub_823345E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82334620
	if (ctx.cr6.eq) goto loc_82334620;
	// bl 0x823352b8
	ctx.lr = 0x82334610;
	sub_823352B8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82334620
	if (!ctx.cr6.eq) goto loc_82334620;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8233462c
	goto loc_8233462C;
loc_82334620:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333ff8
	ctx.lr = 0x8233462C;
	sub_82333FF8(ctx, base);
loc_8233462C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82334648"))) PPC_WEAK_FUNC(sub_82334648);
PPC_FUNC_IMPL(__imp__sub_82334648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x82334664;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82334678
	if (ctx.cr0.eq) goto loc_82334678;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823347c8
	ctx.lr = 0x82334674;
	sub_823347C8(ctx, base);
	// b 0x8233467c
	goto loc_8233467C;
loc_82334678:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8233467C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82334690"))) PPC_WEAK_FUNC(sub_82334690);
PPC_FUNC_IMPL(__imp__sub_82334690) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823352b8
	ctx.lr = 0x823346B0;
	sub_823352B8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x823346c0
	if (!ctx.cr6.eq) goto loc_823346C0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x823346d8
	goto loc_823346D8;
loc_823346C0:
	// bl 0x82335178
	ctx.lr = 0x823346C4;
	sub_82335178(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x823346d8
	if (ctx.cr6.eq) goto loc_823346D8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333f88
	ctx.lr = 0x823346D8;
	sub_82333F88(ctx, base);
loc_823346D8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823346F0"))) PPC_WEAK_FUNC(sub_823346F0);
PPC_FUNC_IMPL(__imp__sub_823346F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823340f0
	ctx.lr = 0x8233470C;
	sub_823340F0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r3,32
	ctx.r3.s64 = 32;
	// addi r11,r11,14600
	ctx.r11.s64 = ctx.r11.s64 + 14600;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82333900
	ctx.lr = 0x82334720;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82334740
	if (ctx.cr0.eq) goto loc_82334740;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// addi r11,r11,15852
	ctx.r11.s64 = ctx.r11.s64 + 15852;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8312e7dc
	ctx.lr = 0x8233473C;
	sub_8312E7DC(ctx, base);
	// b 0x82334744
	goto loc_82334744;
loc_82334740:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82334744:
	// stw r31,120(r30)
	PPC_STORE_U32(ctx.r30.u32 + 120, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_82334768"))) PPC_WEAK_FUNC(sub_82334768);
PPC_FUNC_IMPL(__imp__sub_82334768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r11,r11,14600
	ctx.r11.s64 = ctx.r11.s64 + 14600;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823347a8
	if (ctx.cr6.eq) goto loc_823347A8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823347A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823347A8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823341a0
	ctx.lr = 0x823347B0;
	sub_823341A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823347C8"))) PPC_WEAK_FUNC(sub_823347C8);
PPC_FUNC_IMPL(__imp__sub_823347C8) {
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
	// bl 0x82334248
	ctx.lr = 0x823347E8;
	sub_82334248(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,14600
	ctx.r11.s64 = ctx.r11.s64 + 14600;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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
	// lfs f0,136(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,136(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
	// lwz r11,140(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// lwz r11,144(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// lfs f0,148(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,148(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// lbz r11,152(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 152);
	// stb r11,152(r31)
	PPC_STORE_U8(ctx.r31.u32 + 152, ctx.r11.u8);
	// lbz r11,153(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 153);
	// stb r11,153(r31)
	PPC_STORE_U8(ctx.r31.u32 + 153, ctx.r11.u8);
	// lwz r11,156(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82334868"))) PPC_WEAK_FUNC(sub_82334868);
PPC_FUNC_IMPL(__imp__sub_82334868) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82334870;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x829bcbf0
	ctx.lr = 0x82334884;
	sub_829BCBF0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r5,r30,140
	ctx.r5.s64 = ctx.r30.s64 + 140;
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,1416
	ctx.r3.s64 = ctx.r31.s64 + 1416;
	// lwz r11,136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// stw r11,1412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1412, ctx.r11.u32);
	// bl 0x827f1758
	ctx.lr = 0x823348A4;
	sub_827F1758(ctx, base);
	// lwz r11,148(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// stw r11,1464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1464, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823348B8"))) PPC_WEAK_FUNC(sub_823348B8);
PPC_FUNC_IMPL(__imp__sub_823348B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x829bcd88
	sub_829BCD88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823348C0"))) PPC_WEAK_FUNC(sub_823348C0);
PPC_FUNC_IMPL(__imp__sub_823348C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x823348C8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r11,1432(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1432);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8233496c
	if (!ctx.cr6.gt) goto loc_8233496C;
	// addi r28,r30,1440
	ctx.r28.s64 = ctx.r30.s64 + 1440;
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r27,-31949
	ctx.r27.s64 = -2093809664;
loc_823348EC:
	// lwz r10,1428(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1428);
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lwzx r4,r29,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b98f8
	ctx.lr = 0x82334900;
	sub_829B98F8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8233492c
	if (ctx.cr0.eq) goto loc_8233492C;
	// bl 0x823354d0
	ctx.lr = 0x8233490C;
	sub_823354D0(ctx, base);
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
	ctx.lr = 0x82334924;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82334930
	if (!ctx.cr0.eq) goto loc_82334930;
loc_8233492C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82334930:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332d50
	ctx.lr = 0x82334944;
	sub_82332D50(ctx, base);
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82334958
	if (ctx.cr0.eq) goto loc_82334958;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
loc_82334958:
	// lwz r11,1432(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1432);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823348ec
	if (ctx.cr6.lt) goto loc_823348EC;
loc_8233496C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829bdc10
	ctx.lr = 0x82334974;
	sub_829BDC10(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82334980"))) PPC_WEAK_FUNC(sub_82334980);
PPC_FUNC_IMPL(__imp__sub_82334980) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82334988;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x829c6360
	ctx.lr = 0x82334994;
	sub_829C6360(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82334a70
	if (ctx.cr0.eq) goto loc_82334A70;
	// lwz r11,1432(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1432);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82334a70
	if (!ctx.cr6.gt) goto loc_82334A70;
	// li r28,0
	ctx.r28.s64 = 0;
loc_823349B0:
	// lwz r11,1452(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1452);
	// lwzx r31,r11,r28
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82334a54
	if (ctx.cr6.eq) goto loc_82334A54;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,208(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823349D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82334a70
	if (ctx.cr0.eq) goto loc_82334A70;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82334a4c
	if (!ctx.cr6.gt) goto loc_82334A4C;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82334a04
	if (!ctx.cr6.lt) goto loc_82334A04;
loc_823349F8:
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x82334a08
	goto loc_82334A08;
loc_82334A04:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82334A08:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82334a38
	if (ctx.cr6.eq) goto loc_82334A38;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82334a30
	if (ctx.cr6.eq) goto loc_82334A30;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,208(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 208);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82334A30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82334A30:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82334a70
	if (ctx.cr6.eq) goto loc_82334A70;
loc_82334A38:
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823349f8
	if (ctx.cr6.lt) goto loc_823349F8;
loc_82334A4C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82334a70
	if (ctx.cr6.eq) goto loc_82334A70;
loc_82334A54:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82334a70
	if (ctx.cr6.eq) goto loc_82334A70;
	// lwz r11,1432(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1432);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823349b0
	if (ctx.cr6.lt) goto loc_823349B0;
loc_82334A70:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82334A78"))) PPC_WEAK_FUNC(sub_82334A78);
PPC_FUNC_IMPL(__imp__sub_82334A78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f0
	ctx.lr = 0x82334A80;
	__savegprlr_22(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// lwz r11,1408(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 1408);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82334cc8
	if (!ctx.cr6.eq) goto loc_82334CC8;
	// lwz r11,1432(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 1432);
	// li r27,0
	ctx.r27.s64 = 0;
	// lis r23,-31949
	ctx.r23.s64 = -2093809664;
	// mr r25,r27
	ctx.r25.u64 = ctx.r27.u64;
	// mr r24,r27
	ctx.r24.u64 = ctx.r27.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82334c38
	if (!ctx.cr6.gt) goto loc_82334C38;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
loc_82334AB4:
	// lwz r11,1452(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 1452);
	// lwzx r28,r26,r11
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82334c24
	if (ctx.cr6.eq) goto loc_82334C24;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
loc_82334AE4:
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// beq cr6,0x82334af4
	if (ctx.cr6.eq) goto loc_82334AF4;
	// cmpwi cr6,r29,8
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 8, ctx.xer);
	// bne cr6,0x82334ba8
	if (!ctx.cr6.eq) goto loc_82334BA8;
loc_82334AF4:
	// lwz r11,13024(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 13024);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9a78
	ctx.lr = 0x82334B08;
	sub_829B9A78(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82334ba8
	if (!ctx.cr6.gt) goto loc_82334BA8;
	// lwz r31,92(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_82334B1C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82334b9c
	if (ctx.cr6.eq) goto loc_82334B9C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82334B38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82334b54
	if (ctx.cr0.eq) goto loc_82334B54;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82334B50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82334b58
	goto loc_82334B58;
loc_82334B54:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82334B58:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82334b9c
	if (ctx.cr6.eq) goto loc_82334B9C;
	// lwz r11,2112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82334b9c
	if (!ctx.cr6.gt) goto loc_82334B9C;
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82334b9c
	if (!ctx.cr0.eq) goto loc_82334B9C;
	// lwz r11,4264(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4264);
	// lwz r10,80(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 80);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82334b98
	if (ctx.cr6.eq) goto loc_82334B98;
	// lwz r11,4268(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4268);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82334b9c
	if (!ctx.cr6.eq) goto loc_82334B9C;
loc_82334B98:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
loc_82334B9C:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x82334b1c
	if (!ctx.cr0.eq) goto loc_82334B1C;
loc_82334BA8:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,12
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 12, ctx.xer);
	// blt cr6,0x82334ae4
	if (ctx.cr6.lt) goto loc_82334AE4;
	// lwz r7,1816(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1816);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82334c1c
	if (!ctx.cr6.gt) goto loc_82334C1C;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x82334bdc
	if (!ctx.cr6.lt) goto loc_82334BDC;
loc_82334BD0:
	// lwz r11,1812(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1812);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x82334be0
	goto loc_82334BE0;
loc_82334BDC:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82334BE0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82334c0c
	if (ctx.cr6.eq) goto loc_82334C0C;
	// lwz r10,1464(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1464);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82334c04
	if (!ctx.cr6.eq) goto loc_82334C04;
	// lwz r10,1412(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 1412);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82334c0c
	if (ctx.cr6.eq) goto loc_82334C0C;
loc_82334C04:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r25,r11,r25
	ctx.r25.u64 = ctx.r11.u64 + ctx.r25.u64;
loc_82334C0C:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82334bd0
	if (ctx.cr6.lt) goto loc_82334BD0;
loc_82334C1C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8239d768
	ctx.lr = 0x82334C24;
	sub_8239D768(ctx, base);
loc_82334C24:
	// lwz r11,1432(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 1432);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82334ab4
	if (ctx.cr6.lt) goto loc_82334AB4;
loc_82334C38:
	// lwz r11,1464(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 1464);
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82334cc8
	if (ctx.cr6.gt) goto loc_82334CC8;
	// lwz r11,13024(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 13024);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,808
	ctx.r4.s64 = ctx.r11.s64 + 808;
	// bl 0x82873b58
	ctx.lr = 0x82334C54;
	sub_82873B58(ctx, base);
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82334cc0
	if (!ctx.cr6.gt) goto loc_82334CC0;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_82334C68:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,1412(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1412);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82334c90
	if (ctx.cr6.eq) goto loc_82334C90;
	// lwz r7,2112(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2112);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82334c90
	if (!ctx.cr6.gt) goto loc_82334C90;
	// lwz r9,84(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 84);
	// rlwinm. r9,r9,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82334ca4
	if (ctx.cr0.eq) goto loc_82334CA4;
loc_82334C90:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82334c68
	if (ctx.cr6.lt) goto loc_82334C68;
	// b 0x82334cc0
	goto loc_82334CC0;
loc_82334CA4:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// stw r10,1408(r22)
	PPC_STORE_U32(ctx.r22.u32 + 1408, ctx.r10.u32);
	// lwz r11,1008(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1008);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82334CC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82334CC0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8239d768
	ctx.lr = 0x82334CC8;
	sub_8239D768(ctx, base);
loc_82334CC8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82a4ea40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82334CD0"))) PPC_WEAK_FUNC(sub_82334CD0);
PPC_FUNC_IMPL(__imp__sub_82334CD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82334CD8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,1392(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82334d80
	if (!ctx.cr6.gt) goto loc_82334D80;
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
loc_82334CF8:
	// lwz r10,13024(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lwz r11,1388(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1388);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r5,560(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 560);
	// lwzx r4,r11,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// bl 0x8282b6b8
	ctx.lr = 0x82334D10;
	sub_8282B6B8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82334d40
	if (ctx.cr0.eq) goto loc_82334D40;
	// bl 0x823352b8
	ctx.lr = 0x82334D1C;
	sub_823352B8(ctx, base);
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
	ctx.lr = 0x82334D34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x82334d44
	if (!ctx.cr0.eq) goto loc_82334D44;
loc_82334D40:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82334D44:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82334d6c
	if (ctx.cr6.eq) goto loc_82334D6C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82334D6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82334D6C:
	// lwz r11,1392(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1392);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82334cf8
	if (ctx.cr6.lt) goto loc_82334CF8;
loc_82334D80:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82334D88"))) PPC_WEAK_FUNC(sub_82334D88);
PPC_FUNC_IMPL(__imp__sub_82334D88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82833108
	ctx.lr = 0x82334DA0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82334dc4
	if (ctx.cr0.eq) goto loc_82334DC4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82833180
	ctx.lr = 0x82334DB0;
	sub_82833180(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,14704
	ctx.r11.s64 = ctx.r11.s64 + 14704;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82334dc8
	goto loc_82334DC8;
loc_82334DC4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82334DC8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82334DE0"))) PPC_WEAK_FUNC(sub_82334DE0);
PPC_FUNC_IMPL(__imp__sub_82334DE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-27892(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27892);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82334e20
	if (!ctx.cr0.eq) goto loc_82334E20;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// stw r11,-27892(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27892, ctx.r11.u32);
	// addi r3,r9,14500
	ctx.r3.s64 = ctx.r9.s64 + 14500;
	// bl 0x82816528
	ctx.lr = 0x82334E18;
	sub_82816528(ctx, base);
	// stw r3,-27896(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27896, ctx.r3.u32);
	// b 0x82334e24
	goto loc_82334E24;
loc_82334E20:
	// lwz r3,-27896(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27896);
loc_82334E24:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82334E38"))) PPC_WEAK_FUNC(sub_82334E38);
PPC_FUNC_IMPL(__imp__sub_82334E38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82334e88
	ctx.lr = 0x82334E58;
	sub_82334E88(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82334E6C;
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

__attribute__((alias("__imp__sub_82334E88"))) PPC_WEAK_FUNC(sub_82334E88);
PPC_FUNC_IMPL(__imp__sub_82334E88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r31,r11,-32572
	ctx.r31.s64 = ctx.r11.s64 + -32572;
	// lwz r11,-32576(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32576);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82334ed0
	if (!ctx.cr0.eq) goto loc_82334ED0;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,14876
	ctx.r9.s64 = ctx.r9.s64 + 14876;
	// stw r11,-32576(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32576, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-30344
	ctx.r3.s64 = ctx.r11.s64 + -30344;
	// bl 0x82a4c758
	ctx.lr = 0x82334ED0;
	sub_82A4C758(ctx, base);
loc_82334ED0:
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

__attribute__((alias("__imp__sub_82334EE8"))) PPC_WEAK_FUNC(sub_82334EE8);
PPC_FUNC_IMPL(__imp__sub_82334EE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82334EF0;
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
	// ble cr6,0x82334f58
	if (!ctx.cr6.gt) goto loc_82334F58;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
loc_82334F10:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,8
	ctx.r6.s64 = 8;
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82332ca8
	ctx.lr = 0x82334F30;
	sub_82332CA8(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82334f40
	if (ctx.cr6.eq) goto loc_82334F40;
	// bl 0x82332db8
	ctx.lr = 0x82334F40;
	sub_82332DB8(ctx, base);
loc_82334F40:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r27,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r27.u32);
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
	// stw r27,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r27.u32);
	// bne 0x82334f10
	if (!ctx.cr0.eq) goto loc_82334F10;
loc_82334F58:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,40
	ctx.r6.s64 = 40;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332ca8
	ctx.lr = 0x82334F70;
	sub_82332CA8(ctx, base);
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82334f80
	if (ctx.cr6.eq) goto loc_82334F80;
	// bl 0x82332db8
	ctx.lr = 0x82334F80;
	sub_82332DB8(ctx, base);
loc_82334F80:
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

__attribute__((alias("__imp__sub_82334F98"))) PPC_WEAK_FUNC(sub_82334F98);
PPC_FUNC_IMPL(__imp__sub_82334F98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82334FA0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r28,16(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82334fdc
	if (!ctx.cr6.gt) goto loc_82334FDC;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_82334FC0:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x8239d768
	ctx.lr = 0x82334FD0;
	sub_8239D768(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,36
	ctx.r30.s64 = ctx.r30.s64 + 36;
	// bne 0x82334fc0
	if (!ctx.cr0.eq) goto loc_82334FC0;
loc_82334FDC:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,36
	ctx.r6.s64 = 36;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332ca8
	ctx.lr = 0x82334FF4;
	sub_82332CA8(ctx, base);
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82335004
	if (ctx.cr6.eq) goto loc_82335004;
	// bl 0x82332db8
	ctx.lr = 0x82335004;
	sub_82332DB8(ctx, base);
loc_82335004:
	// stw r27,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r27.u32);
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// stw r27,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r27.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82335018"))) PPC_WEAK_FUNC(sub_82335018);
PPC_FUNC_IMPL(__imp__sub_82335018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82335020;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r28,16(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x8233505c
	if (!ctx.cr6.gt) goto loc_8233505C;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_82335040:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x8239d768
	ctx.lr = 0x82335050;
	sub_8239D768(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// bne 0x82335040
	if (!ctx.cr0.eq) goto loc_82335040;
loc_8233505C:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,32
	ctx.r6.s64 = 32;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332ca8
	ctx.lr = 0x82335074;
	sub_82332CA8(ctx, base);
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82335084
	if (ctx.cr6.eq) goto loc_82335084;
	// bl 0x82332db8
	ctx.lr = 0x82335084;
	sub_82332DB8(ctx, base);
loc_82335084:
	// stw r27,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r27.u32);
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// stw r27,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r27.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82335098"))) PPC_WEAK_FUNC(sub_82335098);
PPC_FUNC_IMPL(__imp__sub_82335098) {
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
	// li r3,120
	ctx.r3.s64 = 120;
	// bl 0x82833108
	ctx.lr = 0x823350AC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823350bc
	if (ctx.cr0.eq) goto loc_823350BC;
	// bl 0x823340f0
	ctx.lr = 0x823350B8;
	sub_823340F0(ctx, base);
	// b 0x823350c0
	goto loc_823350C0;
loc_823350BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823350C0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823350D0"))) PPC_WEAK_FUNC(sub_823350D0);
PPC_FUNC_IMPL(__imp__sub_823350D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-27900(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27900);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82335110
	if (!ctx.cr0.eq) goto loc_82335110;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// stw r11,-27900(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27900, ctx.r11.u32);
	// addi r3,r9,14516
	ctx.r3.s64 = ctx.r9.s64 + 14516;
	// bl 0x82816528
	ctx.lr = 0x82335108;
	sub_82816528(ctx, base);
	// stw r3,-27904(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27904, ctx.r3.u32);
	// b 0x82335114
	goto loc_82335114;
loc_82335110:
	// lwz r3,-27904(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27904);
loc_82335114:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82335128"))) PPC_WEAK_FUNC(sub_82335128);
PPC_FUNC_IMPL(__imp__sub_82335128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82335178
	ctx.lr = 0x82335148;
	sub_82335178(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8233515C;
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

__attribute__((alias("__imp__sub_82335178"))) PPC_WEAK_FUNC(sub_82335178);
PPC_FUNC_IMPL(__imp__sub_82335178) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r31,r11,-32564
	ctx.r31.s64 = ctx.r11.s64 + -32564;
	// lwz r11,-32568(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32568);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823351c0
	if (!ctx.cr0.eq) goto loc_823351C0;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,14896
	ctx.r9.s64 = ctx.r9.s64 + 14896;
	// stw r11,-32568(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32568, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-30368
	ctx.r3.s64 = ctx.r11.s64 + -30368;
	// bl 0x82a4c758
	ctx.lr = 0x823351C0;
	sub_82A4C758(ctx, base);
loc_823351C0:
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

__attribute__((alias("__imp__sub_823351D8"))) PPC_WEAK_FUNC(sub_823351D8);
PPC_FUNC_IMPL(__imp__sub_823351D8) {
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
	// li r3,160
	ctx.r3.s64 = 160;
	// bl 0x82833108
	ctx.lr = 0x823351EC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823351fc
	if (ctx.cr0.eq) goto loc_823351FC;
	// bl 0x823346f0
	ctx.lr = 0x823351F8;
	sub_823346F0(ctx, base);
	// b 0x82335200
	goto loc_82335200;
loc_823351FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82335200:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82335210"))) PPC_WEAK_FUNC(sub_82335210);
PPC_FUNC_IMPL(__imp__sub_82335210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-27908(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27908);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82335250
	if (!ctx.cr0.eq) goto loc_82335250;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// stw r11,-27908(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27908, ctx.r11.u32);
	// addi r3,r9,14528
	ctx.r3.s64 = ctx.r9.s64 + 14528;
	// bl 0x82816528
	ctx.lr = 0x82335248;
	sub_82816528(ctx, base);
	// stw r3,-27912(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27912, ctx.r3.u32);
	// b 0x82335254
	goto loc_82335254;
loc_82335250:
	// lwz r3,-27912(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27912);
loc_82335254:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82335268"))) PPC_WEAK_FUNC(sub_82335268);
PPC_FUNC_IMPL(__imp__sub_82335268) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823352b8
	ctx.lr = 0x82335288;
	sub_823352B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8233529C;
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

__attribute__((alias("__imp__sub_823352B8"))) PPC_WEAK_FUNC(sub_823352B8);
PPC_FUNC_IMPL(__imp__sub_823352B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r31,r11,-32556
	ctx.r31.s64 = ctx.r11.s64 + -32556;
	// lwz r11,-32560(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32560);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82335300
	if (!ctx.cr0.eq) goto loc_82335300;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,14916
	ctx.r9.s64 = ctx.r9.s64 + 14916;
	// stw r11,-32560(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32560, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-30392
	ctx.r3.s64 = ctx.r11.s64 + -30392;
	// bl 0x82a4c758
	ctx.lr = 0x82335300;
	sub_82A4C758(ctx, base);
loc_82335300:
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

__attribute__((alias("__imp__sub_82335318"))) PPC_WEAK_FUNC(sub_82335318);
PPC_FUNC_IMPL(__imp__sub_82335318) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82335320;
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
	// li r11,8
	ctx.r11.s64 = 8;
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
	// beq cr6,0x823353dc
	if (ctx.cr6.eq) goto loc_823353DC;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823353dc
	if (!ctx.cr6.gt) goto loc_823353DC;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8233537c
	if (ctx.cr0.eq) goto loc_8233537C;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x82332c38
	ctx.lr = 0x8233537C;
	sub_82332C38(ctx, base);
loc_8233537C:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823353dc
	if (!ctx.cr6.gt) goto loc_823353DC;
loc_8233538C:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332d50
	ctx.lr = 0x823353A0;
	sub_82332D50(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823353c8
	if (ctx.cr0.eq) goto loc_823353C8;
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
loc_823353C8:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8233538c
	if (ctx.cr6.lt) goto loc_8233538C;
loc_823353DC:
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// rlwimi r11,r10,0,1,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x7FFFFFFF) | (ctx.r11.u64 & 0xFFFFFFFF80000000);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// rlwimi r10,r11,0,1,1
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x40000000) | (ctx.r10.u64 & 0xFFFFFFFFBFFFFFFF);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lfs f0,36(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82335420"))) PPC_WEAK_FUNC(sub_82335420);
PPC_FUNC_IMPL(__imp__sub_82335420) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82335428;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// addi r30,r28,4
	ctx.r30.s64 = ctx.r28.s64 + 4;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// stw r9,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r9.u32);
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
	// stw r11,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
	// stw r11,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r11.u32);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// beq cr6,0x823354b4
	if (ctx.cr6.eq) goto loc_823354B4;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823354b4
	if (!ctx.cr6.gt) goto loc_823354B4;
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82335498
	if (ctx.cr0.eq) goto loc_82335498;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c38
	ctx.lr = 0x82335498;
	sub_82332C38(ctx, base);
loc_82335498:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82a45878
	ctx.lr = 0x823354AC;
	sub_82A45878(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_823354B4:
	// lwz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r11.u32);
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// stw r11,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823354D0"))) PPC_WEAK_FUNC(sub_823354D0);
PPC_FUNC_IMPL(__imp__sub_823354D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r31,r11,-32580
	ctx.r31.s64 = ctx.r11.s64 + -32580;
	// lwz r11,-32584(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32584);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82335518
	if (!ctx.cr0.eq) goto loc_82335518;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,14956
	ctx.r9.s64 = ctx.r9.s64 + 14956;
	// stw r11,-32584(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32584, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-30320
	ctx.r3.s64 = ctx.r11.s64 + -30320;
	// bl 0x82a4c758
	ctx.lr = 0x82335518;
	sub_82A4C758(ctx, base);
loc_82335518:
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

__attribute__((alias("__imp__sub_82335530"))) PPC_WEAK_FUNC(sub_82335530);
PPC_FUNC_IMPL(__imp__sub_82335530) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,2048
	ctx.r3.s64 = 2048;
	// bl 0x82833108
	ctx.lr = 0x82335548;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8233558c
	if (ctx.cr0.eq) goto loc_8233558C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82565c58
	ctx.lr = 0x82335558;
	sub_82565C58(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r11,r11,10360
	ctx.r11.s64 = ctx.r11.s64 + 10360;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r10,r10,11404
	ctx.r10.s64 = ctx.r10.s64 + 11404;
	// addi r9,r9,11456
	ctx.r9.s64 = ctx.r9.s64 + 11456;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1940, ctx.r11.u32);
	// b 0x82335590
	goto loc_82335590;
loc_8233558C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82335590:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823355A8"))) PPC_WEAK_FUNC(sub_823355A8);
PPC_FUNC_IMPL(__imp__sub_823355A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-27916(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27916);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823355e8
	if (!ctx.cr0.eq) goto loc_823355E8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// stw r11,-27916(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27916, ctx.r11.u32);
	// addi r3,r9,14936
	ctx.r3.s64 = ctx.r9.s64 + 14936;
	// bl 0x82816528
	ctx.lr = 0x823355E0;
	sub_82816528(ctx, base);
	// stw r3,-27920(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27920, ctx.r3.u32);
	// b 0x823355ec
	goto loc_823355EC;
loc_823355E8:
	// lwz r3,-27920(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27920);
loc_823355EC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82335600"))) PPC_WEAK_FUNC(sub_82335600);
PPC_FUNC_IMPL(__imp__sub_82335600) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823354d0
	ctx.lr = 0x82335620;
	sub_823354D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82335634;
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

__attribute__((alias("__imp__sub_82335650"))) PPC_WEAK_FUNC(sub_82335650);
PPC_FUNC_IMPL(__imp__sub_82335650) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f0
	ctx.lr = 0x82335658;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r11,236(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82335694
	if (ctx.cr6.eq) goto loc_82335694;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// stw r10,100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 100, ctx.r10.u32);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// stw r10,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r10.u32);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// stw r11,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r11.u32);
	// stw r26,112(r30)
	PPC_STORE_U32(ctx.r30.u32 + 112, ctx.r26.u32);
	// b 0x823356b0
	goto loc_823356B0;
loc_82335694:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// stw r10,100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 100, ctx.r10.u32);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r10,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r10.u32);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// stw r11,112(r30)
	PPC_STORE_U32(ctx.r30.u32 + 112, ctx.r11.u32);
loc_823356B0:
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// addi r3,r30,64
	ctx.r3.s64 = ctx.r30.s64 + 64;
	// stw r26,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r26.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823356d4
	if (ctx.cr6.eq) goto loc_823356D4;
	// stw r26,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r26.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82332c38
	ctx.lr = 0x823356D4;
	sub_82332C38(ctx, base);
loc_823356D4:
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// mr r23,r26
	ctx.r23.u64 = ctx.r26.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82335798
	if (!ctx.cr6.gt) goto loc_82335798;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r24,r26
	ctx.r24.u64 = ctx.r26.u64;
	// lis r22,-31949
	ctx.r22.s64 = -2093809664;
	// addi r25,r11,15608
	ctx.r25.s64 = ctx.r11.s64 + 15608;
loc_823356F4:
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// lwz r10,88(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwzx r27,r24,r11
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r11.u32);
	// beq cr6,0x82335784
	if (ctx.cr6.eq) goto loc_82335784;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82833108
	ctx.lr = 0x82335710;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82335774
	if (ctx.cr0.eq) goto loc_82335774;
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8233572c
	if (ctx.cr0.eq) goto loc_8233572C;
	// lwz r28,80(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x82335730
	goto loc_82335730;
loc_8233572C:
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
loc_82335730:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82335740
	if (ctx.cr0.eq) goto loc_82335740;
	// lwz r29,80(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x82335744
	goto loc_82335744;
loc_82335740:
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_82335744:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82833180
	ctx.lr = 0x8233574C;
	sub_82833180(ctx, base);
	// lis r11,-8531
	ctx.r11.s64 = -559087616;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// ori r11,r11,47806
	ctx.r11.u64 = ctx.r11.u64 | 47806;
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// stw r26,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r26.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r25,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
	// stw r27,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r27.u32);
	// b 0x82335778
	goto loc_82335778;
loc_82335774:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_82335778:
	// lwz r11,13024(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x82335784;
	sub_82833A30(ctx, base);
loc_82335784:
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823356f4
	if (ctx.cr6.lt) goto loc_823356F4;
loc_82335798:
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823357bc
	if (ctx.cr6.eq) goto loc_823357BC;
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823357bc
	if (ctx.cr6.eq) goto loc_823357BC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82335918
	ctx.lr = 0x823357BC;
	sub_82335918(ctx, base);
loc_823357BC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823357D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823357D8"))) PPC_WEAK_FUNC(sub_823357D8);
PPC_FUNC_IMPL(__imp__sub_823357D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f4
	ctx.lr = 0x823357E0;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lis r26,-31949
	ctx.r26.s64 = -2093809664;
	// li r23,0
	ctx.r23.s64 = 0;
	// lwz r11,56(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823358fc
	if (!ctx.cr6.gt) goto loc_823358FC;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r24,0
	ctx.r24.s64 = 0;
	// addi r25,r11,15712
	ctx.r25.s64 = ctx.r11.s64 + 15712;
loc_82335808:
	// lwz r11,52(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 52);
	// lwzx r30,r24,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823358e8
	if (ctx.cr6.eq) goto loc_823358E8;
	// lwz r4,88(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 88);
	// lwz r11,84(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823358ac
	if (!ctx.cr0.eq) goto loc_823358AC;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82833108
	ctx.lr = 0x82335830;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82335898
	if (ctx.cr0.eq) goto loc_82335898;
	// lwz r11,88(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 88);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8233584c
	if (ctx.cr0.eq) goto loc_8233584C;
	// lwz r28,80(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x82335850
	goto loc_82335850;
loc_8233584C:
	// li r28,0
	ctx.r28.s64 = 0;
loc_82335850:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82335860
	if (ctx.cr0.eq) goto loc_82335860;
	// lwz r29,80(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x82335864
	goto loc_82335864;
loc_82335860:
	// li r29,0
	ctx.r29.s64 = 0;
loc_82335864:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82833180
	ctx.lr = 0x8233586C;
	sub_82833180(ctx, base);
	// lis r11,-8531
	ctx.r11.s64 = -559087616;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// ori r11,r11,47806
	ctx.r11.u64 = ctx.r11.u64 | 47806;
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r25,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// b 0x8233589c
	goto loc_8233589C;
loc_82335898:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8233589C:
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x823358A8;
	sub_82833A30(ctx, base);
	// b 0x823358e8
	goto loc_823358E8;
loc_823358AC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823358C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829bb1f8
	ctx.lr = 0x823358D0;
	sub_829BB1F8(ctx, base);
	// lwz r3,88(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 88);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823358E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823358E8:
	// lwz r11,56(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 56);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82335808
	if (ctx.cr6.lt) goto loc_82335808;
loc_823358FC:
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829bb1f8
	ctx.lr = 0x8233590C;
	sub_829BB1F8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82335918"))) PPC_WEAK_FUNC(sub_82335918);
PPC_FUNC_IMPL(__imp__sub_82335918) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9ec
	ctx.lr = 0x82335920;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r21,0
	ctx.r21.s64 = 0;
	// lwz r11,56(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82335c10
	if (!ctx.cr6.gt) goto loc_82335C10;
	// lis r7,-32244
	ctx.r7.s64 = -2113142784;
	// lis r8,-32244
	ctx.r8.s64 = -2113142784;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r22,0
	ctx.r22.s64 = 0;
	// addi r27,r7,15060
	ctx.r27.s64 = ctx.r7.s64 + 15060;
	// addi r26,r8,15044
	ctx.r26.s64 = ctx.r8.s64 + 15044;
	// addi r25,r9,15028
	ctx.r25.s64 = ctx.r9.s64 + 15028;
	// addi r24,r10,15012
	ctx.r24.s64 = ctx.r10.s64 + 15012;
	// addi r23,r11,14996
	ctx.r23.s64 = ctx.r11.s64 + 14996;
loc_82335964:
	// lwz r11,52(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// lwzx r30,r22,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823359a8
	if (ctx.cr6.eq) goto loc_823359A8;
	// bl 0x823368e8
	ctx.lr = 0x82335978;
	sub_823368E8(ctx, base);
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
	ctx.lr = 0x82335990;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bne 0x823359a0
	if (!ctx.cr0.eq) goto loc_823359A0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823359A0:
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// b 0x823359ac
	goto loc_823359AC;
loc_823359A8:
	// li r29,0
	ctx.r29.s64 = 0;
loc_823359AC:
	// lwz r11,36(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82335b18
	if (ctx.cr6.eq) goto loc_82335B18;
	// lwz r10,232(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 232);
	// lwz r9,124(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x823359f8
	if (!ctx.cr6.lt) goto loc_823359F8;
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823359f8
	if (ctx.cr6.eq) goto loc_823359F8;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82816528
	ctx.lr = 0x823359E4;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82965800
	ctx.lr = 0x823359F8;
	sub_82965800(ctx, base);
loc_823359F8:
	// lwz r11,36(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// lwz r10,232(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 232);
	// lwz r9,148(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82335a3c
	if (!ctx.cr6.lt) goto loc_82335A3C;
	// lwz r11,144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82335a3c
	if (ctx.cr6.eq) goto loc_82335A3C;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82816528
	ctx.lr = 0x82335A28;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82965800
	ctx.lr = 0x82335A3C;
	sub_82965800(ctx, base);
loc_82335A3C:
	// lwz r11,36(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// lwz r10,232(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 232);
	// lwz r9,172(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82335a80
	if (!ctx.cr6.lt) goto loc_82335A80;
	// lwz r11,168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82335a80
	if (ctx.cr6.eq) goto loc_82335A80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82816528
	ctx.lr = 0x82335A6C;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82965800
	ctx.lr = 0x82335A80;
	sub_82965800(ctx, base);
loc_82335A80:
	// lwz r11,36(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// lwz r10,232(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 232);
	// lwz r9,196(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82335ac4
	if (!ctx.cr6.lt) goto loc_82335AC4;
	// lwz r11,192(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82335ac4
	if (ctx.cr6.eq) goto loc_82335AC4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82816528
	ctx.lr = 0x82335AB0;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82965800
	ctx.lr = 0x82335AC4;
	sub_82965800(ctx, base);
loc_82335AC4:
	// lwz r11,36(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// lwz r10,232(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 232);
	// lwz r9,220(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82335b08
	if (!ctx.cr6.lt) goto loc_82335B08;
	// lwz r11,216(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 216);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82335b08
	if (ctx.cr6.eq) goto loc_82335B08;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x82335AF4;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82965800
	ctx.lr = 0x82335B08;
	sub_82965800(ctx, base);
loc_82335B08:
	// lwz r11,232(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 232);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,232(r28)
	PPC_STORE_U32(ctx.r28.u32 + 232, ctx.r11.u32);
	// b 0x82335bfc
	goto loc_82335BFC;
loc_82335B18:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82335bfc
	if (ctx.cr6.eq) goto loc_82335BFC;
	// lwz r31,12(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82335b4c
	if (ctx.cr6.eq) goto loc_82335B4C;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82816528
	ctx.lr = 0x82335B38;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82965800
	ctx.lr = 0x82335B4C;
	sub_82965800(ctx, base);
loc_82335B4C:
	// lwz r11,36(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// lwz r31,16(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82335b78
	if (ctx.cr6.eq) goto loc_82335B78;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82816528
	ctx.lr = 0x82335B64;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82965800
	ctx.lr = 0x82335B78;
	sub_82965800(ctx, base);
loc_82335B78:
	// lwz r11,36(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// lwz r31,20(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82335ba4
	if (ctx.cr6.eq) goto loc_82335BA4;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82816528
	ctx.lr = 0x82335B90;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82965800
	ctx.lr = 0x82335BA4;
	sub_82965800(ctx, base);
loc_82335BA4:
	// lwz r11,36(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// lwz r31,24(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82335bd0
	if (ctx.cr6.eq) goto loc_82335BD0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82816528
	ctx.lr = 0x82335BBC;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82965800
	ctx.lr = 0x82335BD0;
	sub_82965800(ctx, base);
loc_82335BD0:
	// lwz r11,36(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// lwz r31,28(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82335bfc
	if (ctx.cr6.eq) goto loc_82335BFC;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x82335BE8;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82965800
	ctx.lr = 0x82335BFC;
	sub_82965800(ctx, base);
loc_82335BFC:
	// lwz r11,56(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// addi r22,r22,4
	ctx.r22.s64 = ctx.r22.s64 + 4;
	// cmpw cr6,r21,r11
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82335964
	if (ctx.cr6.lt) goto loc_82335964;
loc_82335C10:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea3c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82335C18"))) PPC_WEAK_FUNC(sub_82335C18);
PPC_FUNC_IMPL(__imp__sub_82335C18) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82335cbc
	if (ctx.cr6.eq) goto loc_82335CBC;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// addi r3,r10,15076
	ctx.r3.s64 = ctx.r10.s64 + 15076;
	// bl 0x82816528
	ctx.lr = 0x82335C54;
	sub_82816528(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,816
	ctx.r3.s64 = ctx.r11.s64 + 816;
	// lfs f31,908(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,904(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f30.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82980630
	ctx.lr = 0x82335C80;
	sub_82980630(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,15096
	ctx.r3.s64 = ctx.r11.s64 + 15096;
	// bl 0x82816528
	ctx.lr = 0x82335C8C;
	sub_82816528(ctx, base);
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// addi r3,r11,816
	ctx.r3.s64 = ctx.r11.s64 + 816;
	// bl 0x82980518
	ctx.lr = 0x82335CA0;
	sub_82980518(ctx, base);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// li r10,0
	ctx.r10.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r11,r11,28408
	ctx.r11.s64 = ctx.r11.s64 + 28408;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x82335cd8
	goto loc_82335CD8;
loc_82335CBC:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,23576
	ctx.r10.s64 = ctx.r10.s64 + 23576;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lfs f1,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f1.f64 = double(temp.f32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_82335CD8:
	// li r7,1
	ctx.r7.s64 = 1;
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82336948
	ctx.lr = 0x82335CEC;
	sub_82336948(ctx, base);
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

__attribute__((alias("__imp__sub_82335D08"))) PPC_WEAK_FUNC(sub_82335D08);
PPC_FUNC_IMPL(__imp__sub_82335D08) {
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
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82335d7c
	if (!ctx.cr6.eq) goto loc_82335D7C;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,15096
	ctx.r3.s64 = ctx.r11.s64 + 15096;
	// bl 0x82816528
	ctx.lr = 0x82335D38;
	sub_82816528(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,816
	ctx.r3.s64 = ctx.r11.s64 + 816;
	// lfs f31,908(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f31.f64 = double(temp.f32);
	// lfs f3,904(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f3.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82980630
	ctx.lr = 0x82335D60;
	sub_82980630(ctx, base);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,28408
	ctx.r11.s64 = ctx.r11.s64 + 28408;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x82335d98
	goto loc_82335D98;
loc_82335D7C:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,23816
	ctx.r10.s64 = ctx.r10.s64 + 23816;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lfs f1,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f1.f64 = double(temp.f32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_82335D98:
	// li r7,1
	ctx.r7.s64 = 1;
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82336948
	ctx.lr = 0x82335DAC;
	sub_82336948(ctx, base);
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

__attribute__((alias("__imp__sub_82335DC8"))) PPC_WEAK_FUNC(sub_82335DC8);
PPC_FUNC_IMPL(__imp__sub_82335DC8) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,240(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82335ecc
	if (ctx.cr6.eq) goto loc_82335ECC;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,108(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x82335ecc
	if (!ctx.cr6.gt) goto loc_82335ECC;
	// lwz r11,104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82335ecc
	if (!ctx.cr6.gt) goto loc_82335ECC;
	// lwz r11,116(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82335ecc
	if (!ctx.cr6.eq) goto loc_82335ECC;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
	// addi r4,r11,23816
	ctx.r4.s64 = ctx.r11.s64 + 23816;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82335E40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82335ec8
	if (!ctx.cr0.eq) goto loc_82335EC8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,28408
	ctx.r4.s64 = ctx.r11.s64 + 28408;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82335E64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82335ec8
	if (!ctx.cr0.eq) goto loc_82335EC8;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lfs f30,108(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	ctx.f30.f64 = double(temp.f32);
	// addi r3,r11,15096
	ctx.r3.s64 = ctx.r11.s64 + 15096;
	// bl 0x82816528
	ctx.lr = 0x82335E7C;
	sub_82816528(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r11,240(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,816
	ctx.r3.s64 = ctx.r11.s64 + 816;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// lfs f3,908(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f3.f64 = double(temp.f32);
	// bl 0x82980630
	ctx.lr = 0x82335E9C;
	sub_82980630(ctx, base);
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// lfs f1,108(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	ctx.f1.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,23816
	ctx.r11.s64 = ctx.r11.s64 + 23816;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82336948
	ctx.lr = 0x82335EC8;
	sub_82336948(ctx, base);
loc_82335EC8:
	// stfs f31,108(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 108, temp.u32);
loc_82335ECC:
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

__attribute__((alias("__imp__sub_82335EF0"))) PPC_WEAK_FUNC(sub_82335EF0);
PPC_FUNC_IMPL(__imp__sub_82335EF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9ec
	ctx.lr = 0x82335EF8;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r23,88(r29)
	PPC_STORE_U32(ctx.r29.u32 + 88, ctx.r23.u32);
	// stw r4,36(r29)
	PPC_STORE_U32(ctx.r29.u32 + 36, ctx.r4.u32);
	// stw r28,232(r29)
	PPC_STORE_U32(ctx.r29.u32 + 232, ctx.r28.u32);
	// bl 0x82337668
	ctx.lr = 0x82335F18;
	sub_82337668(ctx, base);
	// lwz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82336138
	if (ctx.cr6.eq) goto loc_82336138;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lis r22,-31949
	ctx.r22.s64 = -2093809664;
	// li r21,-1
	ctx.r21.s64 = -1;
	// mr r24,r28
	ctx.r24.u64 = ctx.r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82336080
	if (!ctx.cr6.gt) goto loc_82336080;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// mr r25,r28
	ctx.r25.u64 = ctx.r28.u64;
	// addi r27,r11,-5768
	ctx.r27.s64 = ctx.r11.s64 + -5768;
	// addi r26,r10,-5368
	ctx.r26.s64 = ctx.r10.s64 + -5368;
loc_82335F50:
	// lwz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwzx r5,r11,r25
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82336068
	if (ctx.cr6.eq) goto loc_82336068;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// lwz r11,13024(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 13024);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x82336a38
	ctx.lr = 0x82335F80;
	sub_82336A38(ctx, base);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82336068
	if (ctx.cr6.eq) goto loc_82336068;
	// lwz r11,280(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 280);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233601c
	if (ctx.cr6.eq) goto loc_8233601C;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82336ae8
	ctx.lr = 0x82335FA0;
	sub_82336AE8(ctx, base);
	// li r3,880
	ctx.r3.s64 = 880;
	// bl 0x82833108
	ctx.lr = 0x82335FA8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8233603c
	if (ctx.cr0.eq) goto loc_8233603C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82963eb8
	ctx.lr = 0x82335FBC;
	sub_82963EB8(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 856, ctx.r11.u32);
	// stw r28,860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 860, ctx.r28.u32);
	// stw r28,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r28.u32);
	// stw r28,868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 868, ctx.r28.u32);
	// stw r28,872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 872, ctx.r28.u32);
	// stw r28,852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 852, ctx.r28.u32);
	// bl 0x82816528
	ctx.lr = 0x82335FE4;
	sub_82816528(ctx, base);
	// stw r3,848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 848, ctx.r3.u32);
	// li r3,592
	ctx.r3.s64 = 592;
	// bl 0x82833108
	ctx.lr = 0x82335FF0;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8233600c
	if (ctx.cr0.eq) goto loc_8233600C;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 + 20;
	// bl 0x828aef20
	ctx.lr = 0x82336004;
	sub_828AEF20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82336010
	goto loc_82336010;
loc_8233600C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82336010:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829645a8
	ctx.lr = 0x82336018;
	sub_829645A8(ctx, base);
	// b 0x82336040
	goto loc_82336040;
loc_8233601C:
	// li r3,848
	ctx.r3.s64 = 848;
	// bl 0x82833108
	ctx.lr = 0x82336024;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8233603c
	if (ctx.cr0.eq) goto loc_8233603C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82963eb8
	ctx.lr = 0x82336034;
	sub_82963EB8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82336040
	goto loc_82336040;
loc_8233603C:
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_82336040:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r29,40
	ctx.r3.s64 = ctx.r29.s64 + 40;
	// bl 0x82332d50
	ctx.lr = 0x82336054;
	sub_82332D50(ctx, base);
	// lwz r11,52(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82336068
	if (ctx.cr0.eq) goto loc_82336068;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
loc_82336068:
	// lwz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82335f50
	if (ctx.cr6.lt) goto loc_82335F50;
loc_82336080:
	// lwz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82336138
	if (!ctx.cr6.gt) goto loc_82336138;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82336098:
	// lwz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// lwzx r5,r11,r30
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82336120
	if (ctx.cr6.eq) goto loc_82336120;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// lwz r11,13024(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 13024);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x82336b48
	ctx.lr = 0x823360C8;
	sub_82336B48(ctx, base);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82336120
	if (ctx.cr6.eq) goto loc_82336120;
	// li r3,2000
	ctx.r3.s64 = 2000;
	// bl 0x82833108
	ctx.lr = 0x823360DC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823360f4
	if (ctx.cr0.eq) goto loc_823360F4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82851e78
	ctx.lr = 0x823360EC;
	sub_82851E78(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x823360f8
	goto loc_823360F8;
loc_823360F4:
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_823360F8:
	// addi r3,r29,40
	ctx.r3.s64 = ctx.r29.s64 + 40;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82332d50
	ctx.lr = 0x8233610C;
	sub_82332D50(ctx, base);
	// lwz r10,52(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82336120
	if (ctx.cr0.eq) goto loc_82336120;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
loc_82336120:
	// lwz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82336098
	if (ctx.cr6.lt) goto loc_82336098;
loc_82336138:
	// lwz r11,240(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 240);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82336190
	if (ctx.cr6.eq) goto loc_82336190;
	// lwz r11,56(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// lwz r10,52(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8233616c
	if (!ctx.cr6.gt) goto loc_8233616C;
loc_82336154:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r8,240(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 240);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r8,368(r9)
	PPC_STORE_U32(ctx.r9.u32 + 368, ctx.r8.u32);
	// bne 0x82336154
	if (!ctx.cr0.eq) goto loc_82336154;
loc_8233616C:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,15096
	ctx.r3.s64 = ctx.r11.s64 + 15096;
	// bl 0x82816528
	ctx.lr = 0x82336178;
	sub_82816528(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r11,240(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 240);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,816
	ctx.r3.s64 = ctx.r11.s64 + 816;
	// lfs f1,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82980518
	ctx.lr = 0x82336190;
	sub_82980518(ctx, base);
loc_82336190:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82a4ea3c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82336198"))) PPC_WEAK_FUNC(sub_82336198);
PPC_FUNC_IMPL(__imp__sub_82336198) {
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
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823361C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233620c
	if (ctx.cr6.eq) goto loc_8233620C;
	// bl 0x82332988
	ctx.lr = 0x823361D0;
	sub_82332988(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8233620c
	if (ctx.cr0.eq) goto loc_8233620C;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f13,108(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8233620c
	if (!ctx.cr6.gt) goto loc_8233620C;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8233620c
	if (!ctx.cr6.gt) goto loc_8233620C;
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8233620c
	if (!ctx.cr6.eq) goto loc_8233620C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82335dc8
	ctx.lr = 0x8233620C;
	sub_82335DC8(ctx, base);
loc_8233620C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82336220"))) PPC_WEAK_FUNC(sub_82336220);
PPC_FUNC_IMPL(__imp__sub_82336220) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82336228;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r5,r30,60
	ctx.r5.s64 = ctx.r30.s64 + 60;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// lfs f0,52(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// bl 0x827f1758
	ctx.lr = 0x823362AC;
	sub_827F1758(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r30,68
	ctx.r5.s64 = ctx.r30.s64 + 68;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x827f1758
	ctx.lr = 0x823362BC;
	sub_827F1758(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r30,76
	ctx.r5.s64 = ctx.r30.s64 + 76;
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// bl 0x827f1758
	ctx.lr = 0x823362CC;
	sub_827F1758(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r30,84
	ctx.r5.s64 = ctx.r30.s64 + 84;
	// addi r3,r31,132
	ctx.r3.s64 = ctx.r31.s64 + 132;
	// bl 0x827f1758
	ctx.lr = 0x823362DC;
	sub_827F1758(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r30,92
	ctx.r5.s64 = ctx.r30.s64 + 92;
	// addi r3,r31,156
	ctx.r3.s64 = ctx.r31.s64 + 156;
	// bl 0x827f1758
	ctx.lr = 0x823362EC;
	sub_827F1758(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r30,100
	ctx.r5.s64 = ctx.r30.s64 + 100;
	// addi r3,r31,180
	ctx.r3.s64 = ctx.r31.s64 + 180;
	// bl 0x827f1758
	ctx.lr = 0x823362FC;
	sub_827F1758(ctx, base);
	// addi r5,r30,108
	ctx.r5.s64 = ctx.r30.s64 + 108;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,204
	ctx.r3.s64 = ctx.r31.s64 + 204;
	// bl 0x827f1758
	ctx.lr = 0x8233630C;
	sub_827F1758(ctx, base);
	// lfs f0,116(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,228(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 228, temp.u32);
	// lfs f0,120(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,232(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 232, temp.u32);
	// lfs f0,124(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,236(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 236, temp.u32);
	// lwz r11,128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// lwz r10,132(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// lwz r9,136(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// stw r11,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r11.u32);
	// stw r10,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r10.u32);
	// stw r9,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r9.u32);
	// lfs f0,140(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,252(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 252, temp.u32);
	// lwz r11,144(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// lwz r10,148(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// lwz r9,152(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// stw r11,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r11.u32);
	// stw r10,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r10.u32);
	// stw r9,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r9.u32);
	// lfs f0,156(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,268(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 268, temp.u32);
	// lwz r11,160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// lwz r10,164(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// lwz r9,168(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// stw r11,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r11.u32);
	// stw r10,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r10.u32);
	// stw r9,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r9.u32);
	// lfs f0,172(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,284(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
	// lwz r11,180(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// lwz r10,184(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// lwz r9,176(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// stw r9,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r9.u32);
	// stw r11,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r11.u32);
	// stw r10,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r10.u32);
	// lfs f0,188(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,300(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 300, temp.u32);
	// lfs f0,192(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,304(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 304, temp.u32);
	// lfs f0,196(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,308(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 308, temp.u32);
	// lfs f0,200(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 200);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,312(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 312, temp.u32);
	// lfs f0,204(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 204);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,316(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 316, temp.u32);
	// lwz r11,212(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	// lwz r10,208(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// lwz r9,216(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 216);
	// stw r10,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r10.u32);
	// stw r11,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r11.u32);
	// stw r9,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r9.u32);
	// lfs f0,220(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,332(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 332, temp.u32);
	// lwz r11,224(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	// stw r11,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r11.u32);
	// lwz r11,228(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// stw r11,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r11.u32);
	// lwz r11,232(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	// stw r11,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r11.u32);
	// lwz r11,236(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	// stw r11,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r11.u32);
	// lwz r11,240(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	// stw r11,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r11.u32);
	// lwz r11,244(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	// stw r11,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r11.u32);
	// lwz r11,248(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	// stw r11,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r11.u32);
	// lwz r11,252(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 252);
	// stw r11,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r11.u32);
	// lwz r11,256(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	// stw r11,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r11.u32);
	// lwz r11,260(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// stw r11,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r11.u32);
	// lwz r11,264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// stw r11,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r11.u32);
	// lwz r11,268(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 268);
	// stw r11,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r11.u32);
	// lwz r11,272(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	// stw r11,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r11.u32);
	// lwz r11,276(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 276);
	// stw r11,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r11.u32);
	// lwz r11,280(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 280);
	// stw r11,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r11.u32);
	// lwz r11,284(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	// stw r11,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r11.u32);
	// lwz r11,288(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 288);
	// stw r11,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r11.u32);
	// lwz r11,152(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 152);
	// stw r11,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82336480"))) PPC_WEAK_FUNC(sub_82336480);
PPC_FUNC_IMPL(__imp__sub_82336480) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82336488;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82833180
	ctx.lr = 0x82336494;
	sub_82833180(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r8,r11,15356
	ctx.r8.s64 = ctx.r11.s64 + 15356;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r8,r10,15432
	ctx.r8.s64 = ctx.r10.s64 + 15432;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// addi r9,r9,15512
	ctx.r9.s64 = ctx.r9.s64 + 15512;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// li r6,10000
	ctx.r6.s64 = 10000;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// lis r5,-32215
	ctx.r5.s64 = -2111242240;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// lfs f0,904(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// stw r7,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r7.u32);
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// stw r30,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r30.u32);
	// stw r30,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r30.u32);
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// stw r6,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r6.u32);
	// stw r10,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r10.u32);
	// stw r10,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r10.u32);
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// stw r30,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r30.u32);
	// addi r11,r31,92
	ctx.r11.s64 = ctx.r31.s64 + 92;
	// stw r30,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r30.u32);
	// stw r30,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r30.u32);
	// stw r30,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r30.u32);
	// stw r30,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r30.u32);
	// stfs f0,224(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 224, temp.u32);
	// stw r10,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r10.u32);
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823365d8
	if (!ctx.cr6.eq) goto loc_823365D8;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r3,r10,15112
	ctx.r3.s64 = ctx.r10.s64 + 15112;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// addi r29,r11,1268
	ctx.r29.s64 = ctx.r11.s64 + 1268;
	// bl 0x82816528
	ctx.lr = 0x82336590;
	sub_82816528(ctx, base);
	// li r7,-1
	ctx.r7.s64 = -1;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82336bf8
	ctx.lr = 0x823365A8;
	sub_82336BF8(ctx, base);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x823365d8
	if (ctx.cr6.eq) goto loc_823365D8;
	// li r3,964
	ctx.r3.s64 = 964;
	// bl 0x82833108
	ctx.lr = 0x823365BC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823365d0
	if (ctx.cr0.eq) goto loc_823365D0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82855c68
	ctx.lr = 0x823365CC;
	sub_82855C68(ctx, base);
	// b 0x823365d4
	goto loc_823365D4;
loc_823365D0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_823365D4:
	// stw r3,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r3.u32);
loc_823365D8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823365E8"))) PPC_WEAK_FUNC(sub_823365E8);
PPC_FUNC_IMPL(__imp__sub_823365E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x823365F0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r11,15432
	ctx.r11.s64 = ctx.r11.s64 + 15432;
	// lwz r10,204(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// addi r9,r9,15512
	ctx.r9.s64 = ctx.r9.s64 + 15512;
	// addi r27,r31,8
	ctx.r27.s64 = ctx.r31.s64 + 8;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8233666c
	if (!ctx.cr6.gt) goto loc_8233666C;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_8233662C:
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82336650
	if (ctx.cr6.eq) goto loc_82336650;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82336650;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82336650:
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stwx r29,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r29.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8233662c
	if (ctx.cr6.lt) goto loc_8233662C;
loc_8233666C:
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// addi r30,r31,188
	ctx.r30.s64 = ctx.r31.s64 + 188;
	// stw r29,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82336694
	if (ctx.cr6.eq) goto loc_82336694;
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332c38
	ctx.lr = 0x82336694;
	sub_82332C38(ctx, base);
loc_82336694:
	// lwz r4,240(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823366b4
	if (ctx.cr6.eq) goto loc_823366B4;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829bb1f8
	ctx.lr = 0x823366B0;
	sub_829BB1F8(ctx, base);
	// stw r29,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r29.u32);
loc_823366B4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8239d768
	ctx.lr = 0x823366BC;
	sub_8239D768(ctx, base);
	// addi r3,r31,148
	ctx.r3.s64 = ctx.r31.s64 + 148;
	// bl 0x8284aff8
	ctx.lr = 0x823366C4;
	sub_8284AFF8(ctx, base);
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x8239d768
	ctx.lr = 0x823366CC;
	sub_8239D768(ctx, base);
	// addi r30,r31,40
	ctx.r30.s64 = ctx.r31.s64 + 40;
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r5,56(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332ca8
	ctx.lr = 0x823366E8;
	sub_82332CA8(ctx, base);
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823366f8
	if (ctx.cr6.eq) goto loc_823366F8;
	// bl 0x82332db8
	ctx.lr = 0x823366F8;
	sub_82332DB8(ctx, base);
loc_823366F8:
	// stw r29,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r29.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// bl 0x823375f0
	ctx.lr = 0x8233670C;
	sub_823375F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82833238
	ctx.lr = 0x82336714;
	sub_82833238(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82336720"))) PPC_WEAK_FUNC(sub_82336720);
PPC_FUNC_IMPL(__imp__sub_82336720) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
	// addi r4,r11,23576
	ctx.r4.s64 = ctx.r11.s64 + 23576;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82336760;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8233681c
	if (!ctx.cr0.eq) goto loc_8233681C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,28408
	ctx.r4.s64 = ctx.r11.s64 + 28408;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82336784;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8233681c
	if (!ctx.cr0.eq) goto loc_8233681C;
	// lwz r11,240(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233681c
	if (ctx.cr6.eq) goto loc_8233681C;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,15076
	ctx.r3.s64 = ctx.r11.s64 + 15076;
	// bl 0x82816528
	ctx.lr = 0x823367A4;
	sub_82816528(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lwz r11,240(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,816
	ctx.r3.s64 = ctx.r11.s64 + 816;
	// lfs f31,908(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,904(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f30.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82980630
	ctx.lr = 0x823367D0;
	sub_82980630(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,15096
	ctx.r3.s64 = ctx.r11.s64 + 15096;
	// bl 0x82816528
	ctx.lr = 0x823367DC;
	sub_82816528(ctx, base);
	// lwz r11,240(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// addi r3,r11,816
	ctx.r3.s64 = ctx.r11.s64 + 816;
	// bl 0x82980518
	ctx.lr = 0x823367F0;
	sub_82980518(ctx, base);
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r10,0
	ctx.r10.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r11,r11,23576
	ctx.r11.s64 = ctx.r11.s64 + 23576;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82336948
	ctx.lr = 0x8233681C;
	sub_82336948(ctx, base);
loc_8233681C:
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

__attribute__((alias("__imp__sub_82336840"))) PPC_WEAK_FUNC(sub_82336840);
PPC_FUNC_IMPL(__imp__sub_82336840) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-27924(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27924);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82336880
	if (!ctx.cr0.eq) goto loc_82336880;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// stw r11,-27924(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27924, ctx.r11.u32);
	// addi r3,r9,14976
	ctx.r3.s64 = ctx.r9.s64 + 14976;
	// bl 0x82816528
	ctx.lr = 0x82336878;
	sub_82816528(ctx, base);
	// stw r3,-27928(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27928, ctx.r3.u32);
	// b 0x82336884
	goto loc_82336884;
loc_82336880:
	// lwz r3,-27928(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27928);
loc_82336884:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82336898"))) PPC_WEAK_FUNC(sub_82336898);
PPC_FUNC_IMPL(__imp__sub_82336898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823368e8
	ctx.lr = 0x823368B8;
	sub_823368E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823368CC;
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

__attribute__((alias("__imp__sub_823368E8"))) PPC_WEAK_FUNC(sub_823368E8);
PPC_FUNC_IMPL(__imp__sub_823368E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r31,r11,-32548
	ctx.r31.s64 = ctx.r11.s64 + -32548;
	// lwz r11,-32552(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32552);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82336930
	if (!ctx.cr0.eq) goto loc_82336930;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,15160
	ctx.r9.s64 = ctx.r9.s64 + 15160;
	// stw r11,-32552(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32552, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-30296
	ctx.r3.s64 = ctx.r11.s64 + -30296;
	// bl 0x82a4c758
	ctx.lr = 0x82336930;
	sub_82A4C758(ctx, base);
loc_82336930:
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

__attribute__((alias("__imp__sub_82336948"))) PPC_WEAK_FUNC(sub_82336948);
PPC_FUNC_IMPL(__imp__sub_82336948) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82336950;
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
	ctx.lr = 0x82336974;
	sub_829C80B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82336a0c
	if (!ctx.cr0.eq) goto loc_82336A0C;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f30,f31
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// bne cr6,0x82336994
	if (!ctx.cr6.eq) goto loc_82336994;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f30,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f30.f64 = double(temp.f32);
loc_82336994:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82336ee0
	ctx.lr = 0x8233699C;
	sub_82336EE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823369B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82333900
	ctx.lr = 0x823369BC;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x823369f8
	if (ctx.cr0.eq) goto loc_823369F8;
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
	// b 0x823369fc
	goto loc_823369FC;
loc_823369F8:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_823369FC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82410060
	ctx.lr = 0x82336A08;
	sub_82410060(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82336A0C:
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
	ctx.lr = 0x82336A28;
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

__attribute__((alias("__imp__sub_82336A38"))) PPC_WEAK_FUNC(sub_82336A38);
PPC_FUNC_IMPL(__imp__sub_82336A38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x82336A40;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,12
	ctx.r10.s64 = 12;
	// lwz r27,0(r13)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// addi r28,r10,24
	ctx.r28.s64 = ctx.r10.s64 + 24;
	// addi r25,r11,-15412
	ctx.r25.s64 = ctx.r11.s64 + -15412;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwzx r11,r28,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r27.u32);
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82336a7c
	if (!ctx.cr0.eq) goto loc_82336A7C;
	// addi r3,r25,4
	ctx.r3.s64 = ctx.r25.s64 + 4;
	// bl 0x8312e74c
	ctx.lr = 0x82336A7C;
	sub_8312E74C(ctx, base);
loc_82336A7C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82336ca8
	ctx.lr = 0x82336A88;
	sub_82336CA8(ctx, base);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828552a0
	ctx.lr = 0x82336AA0;
	sub_828552A0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82336ac0
	if (ctx.cr0.eq) goto loc_82336AC0;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// ble cr6,0x82336abc
	if (!ctx.cr6.gt) goto loc_82336ABC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82336ABC:
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
loc_82336AC0:
	// lwzx r11,r28,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r27.u32);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82336ad4
	if (!ctx.cr0.eq) goto loc_82336AD4;
	// addi r3,r25,4
	ctx.r3.s64 = ctx.r25.s64 + 4;
	// bl 0x8312e73c
	ctx.lr = 0x82336AD4;
	sub_8312E73C(ctx, base);
loc_82336AD4:
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82336AE8"))) PPC_WEAK_FUNC(sub_82336AE8);
PPC_FUNC_IMPL(__imp__sub_82336AE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// beq cr6,0x82336b2c
	if (ctx.cr6.eq) goto loc_82336B2C;
	// bl 0x82337028
	ctx.lr = 0x82336B08;
	sub_82337028(ctx, base);
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
	ctx.lr = 0x82336B20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x82336b30
	if (!ctx.cr0.eq) goto loc_82336B30;
loc_82336B2C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82336B30:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82336B48"))) PPC_WEAK_FUNC(sub_82336B48);
PPC_FUNC_IMPL(__imp__sub_82336B48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82336B50;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,12
	ctx.r10.s64 = 12;
	// lwz r28,0(r13)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// addi r29,r10,24
	ctx.r29.s64 = ctx.r10.s64 + 24;
	// addi r26,r11,-15412
	ctx.r26.s64 = ctx.r11.s64 + -15412;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwzx r11,r29,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82336b88
	if (!ctx.cr0.eq) goto loc_82336B88;
	// addi r3,r26,4
	ctx.r3.s64 = ctx.r26.s64 + 4;
	// bl 0x8312e74c
	ctx.lr = 0x82336B88;
	sub_8312E74C(ctx, base);
loc_82336B88:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82336d60
	ctx.lr = 0x82336B94;
	sub_82336D60(ctx, base);
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828552a0
	ctx.lr = 0x82336BAC;
	sub_828552A0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82336bcc
	if (ctx.cr0.eq) goto loc_82336BCC;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// ble cr6,0x82336bc8
	if (!ctx.cr6.gt) goto loc_82336BC8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82336BC8:
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_82336BCC:
	// lwzx r11,r29,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82336be0
	if (!ctx.cr0.eq) goto loc_82336BE0;
	// addi r3,r26,4
	ctx.r3.s64 = ctx.r26.s64 + 4;
	// bl 0x8312e73c
	ctx.lr = 0x82336BE0;
	sub_8312E73C(ctx, base);
loc_82336BE0:
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82336BF8"))) PPC_WEAK_FUNC(sub_82336BF8);
PPC_FUNC_IMPL(__imp__sub_82336BF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x82336C00;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,12
	ctx.r10.s64 = 12;
	// lwz r27,0(r13)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// addi r28,r10,24
	ctx.r28.s64 = ctx.r10.s64 + 24;
	// addi r25,r11,-15412
	ctx.r25.s64 = ctx.r11.s64 + -15412;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwzx r11,r28,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r27.u32);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82336c3c
	if (!ctx.cr0.eq) goto loc_82336C3C;
	// addi r3,r25,4
	ctx.r3.s64 = ctx.r25.s64 + 4;
	// bl 0x8312e74c
	ctx.lr = 0x82336C3C;
	sub_8312E74C(ctx, base);
loc_82336C3C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82336e18
	ctx.lr = 0x82336C48;
	sub_82336E18(ctx, base);
	// li r7,-1
	ctx.r7.s64 = -1;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828552a0
	ctx.lr = 0x82336C60;
	sub_828552A0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82336c80
	if (ctx.cr0.eq) goto loc_82336C80;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// ble cr6,0x82336c7c
	if (!ctx.cr6.gt) goto loc_82336C7C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82336C7C:
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
loc_82336C80:
	// lwzx r11,r28,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r27.u32);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82336c94
	if (!ctx.cr0.eq) goto loc_82336C94;
	// addi r3,r25,4
	ctx.r3.s64 = ctx.r25.s64 + 4;
	// bl 0x8312e73c
	ctx.lr = 0x82336C94;
	sub_8312E73C(ctx, base);
loc_82336C94:
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82336CA8"))) PPC_WEAK_FUNC(sub_82336CA8);
PPC_FUNC_IMPL(__imp__sub_82336CA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82336CB0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31956
	ctx.r31.s64 = -2094268416;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lis r29,-31956
	ctx.r29.s64 = -2094268416;
	// lwz r11,-32532(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32532);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82336d18
	if (!ctx.cr0.eq) goto loc_82336D18;
	// lis r30,-31956
	ctx.r30.s64 = -2094268416;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,-32532(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32532, ctx.r11.u32);
	// lwz r3,-32468(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32468);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82336d10
	if (!ctx.cr6.eq) goto loc_82336D10;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// addi r4,r11,-24392
	ctx.r4.s64 = ctx.r11.s64 + -24392;
	// addi r3,r10,760
	ctx.r3.s64 = ctx.r10.s64 + 760;
	// bl 0x82a4c7d8
	ctx.lr = 0x82336CF8;
	sub_82A4C7D8(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82a4ca90
	ctx.lr = 0x82336D00;
	sub_82A4CA90(ctx, base);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bl 0x82816528
	ctx.lr = 0x82336D08;
	sub_82816528(ctx, base);
	// lwz r11,-32532(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32532);
	// stw r3,-32468(r30)
	PPC_STORE_U32(ctx.r30.u32 + -32468, ctx.r3.u32);
loc_82336D10:
	// stw r3,-32528(r29)
	PPC_STORE_U32(ctx.r29.u32 + -32528, ctx.r3.u32);
	// b 0x82336d1c
	goto loc_82336D1C;
loc_82336D18:
	// lwz r3,-32528(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32528);
loc_82336D1C:
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r9,r10,-32524
	ctx.r9.s64 = ctx.r10.s64 + -32524;
	// bne 0x82336d40
	if (!ctx.cr0.eq) goto loc_82336D40;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// addi r10,r10,14428
	ctx.r10.s64 = ctx.r10.s64 + 14428;
	// stw r11,-32532(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32532, ctx.r11.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_82336D40:
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

__attribute__((alias("__imp__sub_82336D60"))) PPC_WEAK_FUNC(sub_82336D60);
PPC_FUNC_IMPL(__imp__sub_82336D60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82336D68;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31956
	ctx.r31.s64 = -2094268416;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lis r29,-31956
	ctx.r29.s64 = -2094268416;
	// lwz r11,-32544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32544);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82336dd0
	if (!ctx.cr0.eq) goto loc_82336DD0;
	// lis r30,-31956
	ctx.r30.s64 = -2094268416;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,-32544(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32544, ctx.r11.u32);
	// lwz r3,-32464(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32464);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82336dc8
	if (!ctx.cr6.eq) goto loc_82336DC8;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// addi r4,r11,-24392
	ctx.r4.s64 = ctx.r11.s64 + -24392;
	// addi r3,r10,796
	ctx.r3.s64 = ctx.r10.s64 + 796;
	// bl 0x82a4c7d8
	ctx.lr = 0x82336DB0;
	sub_82A4C7D8(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82a4ca90
	ctx.lr = 0x82336DB8;
	sub_82A4CA90(ctx, base);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bl 0x82816528
	ctx.lr = 0x82336DC0;
	sub_82816528(ctx, base);
	// lwz r11,-32544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32544);
	// stw r3,-32464(r30)
	PPC_STORE_U32(ctx.r30.u32 + -32464, ctx.r3.u32);
loc_82336DC8:
	// stw r3,-32540(r29)
	PPC_STORE_U32(ctx.r29.u32 + -32540, ctx.r3.u32);
	// b 0x82336dd4
	goto loc_82336DD4;
loc_82336DD0:
	// lwz r3,-32540(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32540);
loc_82336DD4:
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r9,r10,-32536
	ctx.r9.s64 = ctx.r10.s64 + -32536;
	// bne 0x82336df8
	if (!ctx.cr0.eq) goto loc_82336DF8;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// addi r10,r10,14428
	ctx.r10.s64 = ctx.r10.s64 + 14428;
	// stw r11,-32544(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32544, ctx.r11.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_82336DF8:
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

__attribute__((alias("__imp__sub_82336E18"))) PPC_WEAK_FUNC(sub_82336E18);
PPC_FUNC_IMPL(__imp__sub_82336E18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82336E20;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31956
	ctx.r31.s64 = -2094268416;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lis r29,-31956
	ctx.r29.s64 = -2094268416;
	// lwz r11,-32520(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32520);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82336e88
	if (!ctx.cr0.eq) goto loc_82336E88;
	// lis r30,-31956
	ctx.r30.s64 = -2094268416;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,-32520(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32520, ctx.r11.u32);
	// lwz r3,-32460(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32460);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82336e80
	if (!ctx.cr6.eq) goto loc_82336E80;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// addi r4,r11,-24392
	ctx.r4.s64 = ctx.r11.s64 + -24392;
	// addi r3,r10,828
	ctx.r3.s64 = ctx.r10.s64 + 828;
	// bl 0x82a4c7d8
	ctx.lr = 0x82336E68;
	sub_82A4C7D8(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82a4ca90
	ctx.lr = 0x82336E70;
	sub_82A4CA90(ctx, base);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bl 0x82816528
	ctx.lr = 0x82336E78;
	sub_82816528(ctx, base);
	// lwz r11,-32520(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32520);
	// stw r3,-32460(r30)
	PPC_STORE_U32(ctx.r30.u32 + -32460, ctx.r3.u32);
loc_82336E80:
	// stw r3,-32516(r29)
	PPC_STORE_U32(ctx.r29.u32 + -32516, ctx.r3.u32);
	// b 0x82336e8c
	goto loc_82336E8C;
loc_82336E88:
	// lwz r3,-32516(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32516);
loc_82336E8C:
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r9,r10,-32512
	ctx.r9.s64 = ctx.r10.s64 + -32512;
	// bne 0x82336eb0
	if (!ctx.cr0.eq) goto loc_82336EB0;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// addi r10,r10,14428
	ctx.r10.s64 = ctx.r10.s64 + 14428;
	// stw r11,-32520(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32520, ctx.r11.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_82336EB0:
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

__attribute__((alias("__imp__sub_82336ED0"))) PPC_WEAK_FUNC(sub_82336ED0);
PPC_FUNC_IMPL(__imp__sub_82336ED0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82336EE0"))) PPC_WEAK_FUNC(sub_82336EE0);
PPC_FUNC_IMPL(__imp__sub_82336EE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r31,r11,-32492
	ctx.r31.s64 = ctx.r11.s64 + -32492;
	// lwz r11,-32496(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32496);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82336f28
	if (!ctx.cr0.eq) goto loc_82336F28;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,15564
	ctx.r9.s64 = ctx.r9.s64 + 15564;
	// stw r11,-32496(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32496, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-30272
	ctx.r3.s64 = ctx.r11.s64 + -30272;
	// bl 0x82a4c758
	ctx.lr = 0x82336F28;
	sub_82A4C758(ctx, base);
loc_82336F28:
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

__attribute__((alias("__imp__sub_82336F40"))) PPC_WEAK_FUNC(sub_82336F40);
PPC_FUNC_IMPL(__imp__sub_82336F40) {
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
	// li r3,248
	ctx.r3.s64 = 248;
	// bl 0x82833108
	ctx.lr = 0x82336F54;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82336f64
	if (ctx.cr0.eq) goto loc_82336F64;
	// bl 0x82336480
	ctx.lr = 0x82336F60;
	sub_82336480(ctx, base);
	// b 0x82336f68
	goto loc_82336F68;
loc_82336F64:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82336F68:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82336F78"))) PPC_WEAK_FUNC(sub_82336F78);
PPC_FUNC_IMPL(__imp__sub_82336F78) {
	PPC_FUNC_PROLOGUE();
	// li r3,248
	ctx.r3.s64 = 248;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82336F80"))) PPC_WEAK_FUNC(sub_82336F80);
PPC_FUNC_IMPL(__imp__sub_82336F80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-27932(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27932);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82336fc0
	if (!ctx.cr0.eq) goto loc_82336FC0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// stw r11,-27932(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27932, ctx.r11.u32);
	// addi r3,r9,15208
	ctx.r3.s64 = ctx.r9.s64 + 15208;
	// bl 0x82816528
	ctx.lr = 0x82336FB8;
	sub_82816528(ctx, base);
	// stw r3,-27936(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27936, ctx.r3.u32);
	// b 0x82336fc4
	goto loc_82336FC4;
loc_82336FC0:
	// lwz r3,-27936(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27936);
loc_82336FC4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82336FD8"))) PPC_WEAK_FUNC(sub_82336FD8);
PPC_FUNC_IMPL(__imp__sub_82336FD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82336ee0
	ctx.lr = 0x82336FF8;
	sub_82336EE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8233700C;
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

__attribute__((alias("__imp__sub_82337028"))) PPC_WEAK_FUNC(sub_82337028);
PPC_FUNC_IMPL(__imp__sub_82337028) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r31,r11,-32476
	ctx.r31.s64 = ctx.r11.s64 + -32476;
	// lwz r11,-32472(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32472);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82337070
	if (!ctx.cr0.eq) goto loc_82337070;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,15584
	ctx.r9.s64 = ctx.r9.s64 + 15584;
	// stw r11,-32472(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32472, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-30248
	ctx.r3.s64 = ctx.r11.s64 + -30248;
	// bl 0x82a4c758
	ctx.lr = 0x82337070;
	sub_82A4C758(ctx, base);
loc_82337070:
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

__attribute__((alias("__imp__sub_82337088"))) PPC_WEAK_FUNC(sub_82337088);
PPC_FUNC_IMPL(__imp__sub_82337088) {
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
	// li r3,1488
	ctx.r3.s64 = 1488;
	// bl 0x82833108
	ctx.lr = 0x8233709C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823370ac
	if (ctx.cr0.eq) goto loc_823370AC;
	// bl 0x8284c630
	ctx.lr = 0x823370A8;
	sub_8284C630(ctx, base);
	// b 0x823370b0
	goto loc_823370B0;
loc_823370AC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823370B0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823370C0"))) PPC_WEAK_FUNC(sub_823370C0);
PPC_FUNC_IMPL(__imp__sub_823370C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-27940(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27940);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82337100
	if (!ctx.cr0.eq) goto loc_82337100;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// stw r11,-27940(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27940, ctx.r11.u32);
	// addi r3,r9,15236
	ctx.r3.s64 = ctx.r9.s64 + 15236;
	// bl 0x82816528
	ctx.lr = 0x823370F8;
	sub_82816528(ctx, base);
	// stw r3,-27944(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27944, ctx.r3.u32);
	// b 0x82337104
	goto loc_82337104;
loc_82337100:
	// lwz r3,-27944(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27944);
loc_82337104:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82337118"))) PPC_WEAK_FUNC(sub_82337118);
PPC_FUNC_IMPL(__imp__sub_82337118) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82337028
	ctx.lr = 0x82337138;
	sub_82337028(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8233714C;
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

__attribute__((alias("__imp__sub_82337168"))) PPC_WEAK_FUNC(sub_82337168);
PPC_FUNC_IMPL(__imp__sub_82337168) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82337170
	sub_82337170(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82337170"))) PPC_WEAK_FUNC(sub_82337170);
PPC_FUNC_IMPL(__imp__sub_82337170) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823365e8
	ctx.lr = 0x82337190;
	sub_823365E8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823371a0
	if (ctx.cr0.eq) goto loc_823371A0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x823371A0;
	sub_82332DB8(ctx, base);
loc_823371A0:
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

__attribute__((alias("__imp__sub_823371C0"))) PPC_WEAK_FUNC(sub_823371C0);
PPC_FUNC_IMPL(__imp__sub_823371C0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x823371c8
	sub_823371C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823371C8"))) PPC_WEAK_FUNC(sub_823371C8);
PPC_FUNC_IMPL(__imp__sub_823371C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82336ee0
	ctx.lr = 0x823371E8;
	sub_82336EE0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x823371f8
	if (!ctx.cr6.eq) goto loc_823371F8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8233720c
	goto loc_8233720C;
loc_823371F8:
	// bl 0x82333d20
	ctx.lr = 0x823371FC;
	sub_82333D20(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8233720c
	if (ctx.cr6.eq) goto loc_8233720C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8233720C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82337228"))) PPC_WEAK_FUNC(sub_82337228);
PPC_FUNC_IMPL(__imp__sub_82337228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// beq cr6,0x82337268
	if (ctx.cr6.eq) goto loc_82337268;
	// bl 0x82336ee0
	ctx.lr = 0x82337248;
	sub_82336EE0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82337258
	if (!ctx.cr6.eq) goto loc_82337258;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8233726c
	goto loc_8233726C;
loc_82337258:
	// bl 0x82333d20
	ctx.lr = 0x8233725C;
	sub_82333D20(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x8233726c
	if (ctx.cr6.eq) goto loc_8233726C;
loc_82337268:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8233726C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82337280"))) PPC_WEAK_FUNC(sub_82337280);
PPC_FUNC_IMPL(__imp__sub_82337280) {
	PPC_FUNC_PROLOGUE();
	// b 0x82336ee0
	sub_82336EE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82337288"))) PPC_WEAK_FUNC(sub_82337288);
PPC_FUNC_IMPL(__imp__sub_82337288) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,248
	ctx.r3.s64 = 248;
	// bl 0x82833108
	ctx.lr = 0x823372A4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823372b8
	if (ctx.cr0.eq) goto loc_823372B8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823372d0
	ctx.lr = 0x823372B4;
	sub_823372D0(ctx, base);
	// b 0x823372bc
	goto loc_823372BC;
loc_823372B8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823372BC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823372D0"))) PPC_WEAK_FUNC(sub_823372D0);
PPC_FUNC_IMPL(__imp__sub_823372D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x823372D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r11,r11,14104
	ctx.r11.s64 = ctx.r11.s64 + 14104;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r4,r29,8
	ctx.r4.s64 = ctx.r29.s64 + 8;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82337440
	ctx.lr = 0x82337304;
	sub_82337440(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r11,r11,15432
	ctx.r11.s64 = ctx.r11.s64 + 15432;
	// addi r10,r10,15512
	ctx.r10.s64 = ctx.r10.s64 + 15512;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r30,r31,40
	ctx.r30.s64 = ctx.r31.s64 + 40;
	// addi r28,r29,40
	ctx.r28.s64 = ctx.r29.s64 + 40;
	// lwz r9,36(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
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
	// beq cr6,0x8233739c
	if (ctx.cr6.eq) goto loc_8233739C;
	// lwz r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8233739c
	if (!ctx.cr6.gt) goto loc_8233739C;
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82337380
	if (ctx.cr0.eq) goto loc_82337380;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332c38
	ctx.lr = 0x82337380;
	sub_82332C38(ctx, base);
loc_82337380:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r4,12(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x82a45878
	ctx.lr = 0x82337394;
	sub_82A45878(ctx, base);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
loc_8233739C:
	// addi r4,r29,64
	ctx.r4.s64 = ctx.r29.s64 + 64;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x82873b58
	ctx.lr = 0x823373A8;
	sub_82873B58(ctx, base);
	// lwz r11,88(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// addi r4,r29,92
	ctx.r4.s64 = ctx.r29.s64 + 92;
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82337530
	ctx.lr = 0x823373BC;
	sub_82337530(ctx, base);
	// lwz r11,172(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 172);
	// addi r4,r29,188
	ctx.r4.s64 = ctx.r29.s64 + 188;
	// addi r3,r31,188
	ctx.r3.s64 = ctx.r31.s64 + 188;
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// lwz r11,176(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 176);
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
	// lfs f0,180(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 180);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,180(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 180, temp.u32);
	// lwz r11,184(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
	// bl 0x82873b58
	ctx.lr = 0x823373E8;
	sub_82873B58(ctx, base);
	// lwz r11,212(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 212);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// lwz r11,216(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 216);
	// stw r11,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r11.u32);
	// lfs f0,220(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 220);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,220(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 220, temp.u32);
	// lfs f0,224(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 224);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,224(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 224, temp.u32);
	// lwz r11,228(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 228);
	// stw r11,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r11.u32);
	// lwz r11,232(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 232);
	// stw r11,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r11.u32);
	// lwz r11,236(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 236);
	// stw r11,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r11.u32);
	// lwz r11,240(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 240);
	// stw r11,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r11.u32);
	// lwz r11,244(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 244);
	// stw r11,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82337440"))) PPC_WEAK_FUNC(sub_82337440);
PPC_FUNC_IMPL(__imp__sub_82337440) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82337448;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,15356
	ctx.r10.s64 = ctx.r10.s64 + 15356;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// addi r30,r4,4
	ctx.r30.s64 = ctx.r4.s64 + 4;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// stw r11,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
	// stw r9,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r9.u32);
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
	// stw r11,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r11.u32);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// beq cr6,0x823374d4
	if (ctx.cr6.eq) goto loc_823374D4;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823374d4
	if (!ctx.cr6.gt) goto loc_823374D4;
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x823374b8
	if (ctx.cr0.eq) goto loc_823374B8;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c38
	ctx.lr = 0x823374B8;
	sub_82332C38(ctx, base);
loc_823374B8:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82a45878
	ctx.lr = 0x823374CC;
	sub_82A45878(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_823374D4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823374E0"))) PPC_WEAK_FUNC(sub_823374E0);
PPC_FUNC_IMPL(__imp__sub_823374E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823375f0
	ctx.lr = 0x82337500;
	sub_823375F0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82337510
	if (ctx.cr0.eq) goto loc_82337510;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x82337510;
	sub_82332DB8(ctx, base);
loc_82337510:
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

__attribute__((alias("__imp__sub_82337530"))) PPC_WEAK_FUNC(sub_82337530);
PPC_FUNC_IMPL(__imp__sub_82337530) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,56
	ctx.r4.s64 = ctx.r11.s64 + 56;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// lfs f0,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lfs f0,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lfs f0,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// lfs f0,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lfs f0,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// bl 0x8284b058
	ctx.lr = 0x823375C4;
	sub_8284B058(ctx, base);
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

__attribute__((alias("__imp__sub_823375E0"))) PPC_WEAK_FUNC(sub_823375E0);
PPC_FUNC_IMPL(__imp__sub_823375E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,15208
	ctx.r3.s64 = ctx.r11.s64 + 15208;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823375F0"))) PPC_WEAK_FUNC(sub_823375F0);
PPC_FUNC_IMPL(__imp__sub_823375F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r11,r11,15356
	ctx.r11.s64 = ctx.r11.s64 + 15356;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x829c8440
	ctx.lr = 0x82337614;
	sub_829C8440(ctx, base);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82332ca8
	ctx.lr = 0x82337630;
	sub_82332CA8(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82337640
	if (ctx.cr6.eq) goto loc_82337640;
	// bl 0x82332db8
	ctx.lr = 0x82337640;
	sub_82332DB8(ctx, base);
loc_82337640:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82337668"))) PPC_WEAK_FUNC(sub_82337668);
PPC_FUNC_IMPL(__imp__sub_82337668) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r31,r11,-32484
	ctx.r31.s64 = ctx.r11.s64 + -32484;
	// lwz r11,-32480(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32480);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823376b0
	if (!ctx.cr0.eq) goto loc_823376B0;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,15408
	ctx.r9.s64 = ctx.r9.s64 + 15408;
	// stw r11,-32480(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32480, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-30224
	ctx.r3.s64 = ctx.r11.s64 + -30224;
	// bl 0x82a4c758
	ctx.lr = 0x823376B0;
	sub_82A4C758(ctx, base);
loc_823376B0:
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

__attribute__((alias("__imp__sub_823376C8"))) PPC_WEAK_FUNC(sub_823376C8);
PPC_FUNC_IMPL(__imp__sub_823376C8) {
	PPC_FUNC_PROLOGUE();
	// li r3,848
	ctx.r3.s64 = 848;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823376D0"))) PPC_WEAK_FUNC(sub_823376D0);
PPC_FUNC_IMPL(__imp__sub_823376D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-27948(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27948);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82337710
	if (!ctx.cr0.eq) goto loc_82337710;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// stw r11,-27948(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27948, ctx.r11.u32);
	// addi r3,r9,15180
	ctx.r3.s64 = ctx.r9.s64 + 15180;
	// bl 0x82816528
	ctx.lr = 0x82337708;
	sub_82816528(ctx, base);
	// stw r3,-27952(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27952, ctx.r3.u32);
	// b 0x82337714
	goto loc_82337714;
loc_82337710:
	// lwz r3,-27952(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27952);
loc_82337714:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82337728"))) PPC_WEAK_FUNC(sub_82337728);
PPC_FUNC_IMPL(__imp__sub_82337728) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82337668
	ctx.lr = 0x82337748;
	sub_82337668(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8233775C;
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

__attribute__((alias("__imp__sub_82337778"))) PPC_WEAK_FUNC(sub_82337778);
PPC_FUNC_IMPL(__imp__sub_82337778) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,15304
	ctx.r3.s64 = ctx.r11.s64 + 15304;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82337788"))) PPC_WEAK_FUNC(sub_82337788);
PPC_FUNC_IMPL(__imp__sub_82337788) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823377d8
	ctx.lr = 0x823377A8;
	sub_823377D8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x823377bc
	if (ctx.cr6.eq) goto loc_823377BC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333b08
	ctx.lr = 0x823377BC;
	sub_82333B08(ctx, base);
loc_823377BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823377D8"))) PPC_WEAK_FUNC(sub_823377D8);
PPC_FUNC_IMPL(__imp__sub_823377D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r31,r11,-32504
	ctx.r31.s64 = ctx.r11.s64 + -32504;
	// lwz r11,-32508(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32508);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82337820
	if (!ctx.cr0.eq) goto loc_82337820;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,15792
	ctx.r9.s64 = ctx.r9.s64 + 15792;
	// stw r11,-32508(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32508, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-30200
	ctx.r3.s64 = ctx.r11.s64 + -30200;
	// bl 0x82a4c758
	ctx.lr = 0x82337820;
	sub_82A4C758(ctx, base);
loc_82337820:
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

__attribute__((alias("__imp__sub_82337838"))) PPC_WEAK_FUNC(sub_82337838);
PPC_FUNC_IMPL(__imp__sub_82337838) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-27956(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27956);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82337878
	if (!ctx.cr0.eq) goto loc_82337878;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// stw r11,-27956(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27956, ctx.r11.u32);
	// addi r3,r9,15304
	ctx.r3.s64 = ctx.r9.s64 + 15304;
	// bl 0x82816528
	ctx.lr = 0x82337870;
	sub_82816528(ctx, base);
	// stw r3,-27960(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27960, ctx.r3.u32);
	// b 0x8233787c
	goto loc_8233787C;
loc_82337878:
	// lwz r3,-27960(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27960);
loc_8233787C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82337890"))) PPC_WEAK_FUNC(sub_82337890);
PPC_FUNC_IMPL(__imp__sub_82337890) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823377d8
	ctx.lr = 0x823378B0;
	sub_823377D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823378C4;
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

__attribute__((alias("__imp__sub_823378E0"))) PPC_WEAK_FUNC(sub_823378E0);
PPC_FUNC_IMPL(__imp__sub_823378E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82337918
	if (ctx.cr6.eq) goto loc_82337918;
	// bl 0x823377d8
	ctx.lr = 0x82337908;
	sub_823377D8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82337918
	if (!ctx.cr6.eq) goto loc_82337918;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82337924
	goto loc_82337924;
loc_82337918:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333c70
	ctx.lr = 0x82337924;
	sub_82333C70(ctx, base);
loc_82337924:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82337940"))) PPC_WEAK_FUNC(sub_82337940);
PPC_FUNC_IMPL(__imp__sub_82337940) {
	PPC_FUNC_PROLOGUE();
	// b 0x823377d8
	sub_823377D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82337948"))) PPC_WEAK_FUNC(sub_82337948);
PPC_FUNC_IMPL(__imp__sub_82337948) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x82337964;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823379c4
	if (ctx.cr0.eq) goto loc_823379C4;
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
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r9,r9,15712
	ctx.r9.s64 = ctx.r9.s64 + 15712;
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
	// b 0x823379c8
	goto loc_823379C8;
loc_823379C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823379C8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823379E0"))) PPC_WEAK_FUNC(sub_823379E0);
PPC_FUNC_IMPL(__imp__sub_823379E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,15252
	ctx.r3.s64 = ctx.r11.s64 + 15252;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823379F0"))) PPC_WEAK_FUNC(sub_823379F0);
PPC_FUNC_IMPL(__imp__sub_823379F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82337a40
	ctx.lr = 0x82337A10;
	sub_82337A40(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82337a24
	if (ctx.cr6.eq) goto loc_82337A24;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333b08
	ctx.lr = 0x82337A24;
	sub_82333B08(ctx, base);
loc_82337A24:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82337A40"))) PPC_WEAK_FUNC(sub_82337A40);
PPC_FUNC_IMPL(__imp__sub_82337A40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r31,r11,-32488
	ctx.r31.s64 = ctx.r11.s64 + -32488;
	// lwz r11,-32500(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32500);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82337a88
	if (!ctx.cr0.eq) goto loc_82337A88;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,15688
	ctx.r9.s64 = ctx.r9.s64 + 15688;
	// stw r11,-32500(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32500, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-30176
	ctx.r3.s64 = ctx.r11.s64 + -30176;
	// bl 0x82a4c758
	ctx.lr = 0x82337A88;
	sub_82A4C758(ctx, base);
loc_82337A88:
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

__attribute__((alias("__imp__sub_82337AA0"))) PPC_WEAK_FUNC(sub_82337AA0);
PPC_FUNC_IMPL(__imp__sub_82337AA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-27964(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27964);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82337ae0
	if (!ctx.cr0.eq) goto loc_82337AE0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// stw r11,-27964(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27964, ctx.r11.u32);
	// addi r3,r9,15252
	ctx.r3.s64 = ctx.r9.s64 + 15252;
	// bl 0x82816528
	ctx.lr = 0x82337AD8;
	sub_82816528(ctx, base);
	// stw r3,-27968(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27968, ctx.r3.u32);
	// b 0x82337ae4
	goto loc_82337AE4;
loc_82337AE0:
	// lwz r3,-27968(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27968);
loc_82337AE4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82337AF8"))) PPC_WEAK_FUNC(sub_82337AF8);
PPC_FUNC_IMPL(__imp__sub_82337AF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82337a40
	ctx.lr = 0x82337B18;
	sub_82337A40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82337B2C;
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

__attribute__((alias("__imp__sub_82337B48"))) PPC_WEAK_FUNC(sub_82337B48);
PPC_FUNC_IMPL(__imp__sub_82337B48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82337b80
	if (ctx.cr6.eq) goto loc_82337B80;
	// bl 0x82337a40
	ctx.lr = 0x82337B70;
	sub_82337A40(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82337b80
	if (!ctx.cr6.eq) goto loc_82337B80;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82337b8c
	goto loc_82337B8C;
loc_82337B80:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333c70
	ctx.lr = 0x82337B8C;
	sub_82333C70(ctx, base);
loc_82337B8C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82337BA8"))) PPC_WEAK_FUNC(sub_82337BA8);
PPC_FUNC_IMPL(__imp__sub_82337BA8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82337a40
	sub_82337A40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82337BB0"))) PPC_WEAK_FUNC(sub_82337BB0);
PPC_FUNC_IMPL(__imp__sub_82337BB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x82337BCC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82337c2c
	if (ctx.cr0.eq) goto loc_82337C2C;
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
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r9,r9,15608
	ctx.r9.s64 = ctx.r9.s64 + 15608;
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
	// b 0x82337c30
	goto loc_82337C30;
loc_82337C2C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82337C30:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82337C48"))) PPC_WEAK_FUNC(sub_82337C48);
PPC_FUNC_IMPL(__imp__sub_82337C48) {
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
	ctx.lr = 0x82337C60;
	sub_829BDC10(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stw r11,1408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1408, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,1416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1416, ctx.r11.u32);
	// stw r9,1420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1420, ctx.r9.u32);
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1412(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1412, temp.u32);
	// lwz r11,1204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1204);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82337c94
	if (!ctx.cr6.eq) goto loc_82337C94;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c3628
	ctx.lr = 0x82337C94;
	sub_829C3628(ctx, base);
loc_82337C94:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82337CA8"))) PPC_WEAK_FUNC(sub_82337CA8);
PPC_FUNC_IMPL(__imp__sub_82337CA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x82337CC0;
	sub_829BD978(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c36c0
	ctx.lr = 0x82337CC8;
	sub_829C36C0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82337CE0"))) PPC_WEAK_FUNC(sub_82337CE0);
PPC_FUNC_IMPL(__imp__sub_82337CE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x829be2e8
	ctx.lr = 0x82337CF8;
	sub_829BE2E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82337d18
	ctx.lr = 0x82337D00;
	sub_82337D18(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82337D18"))) PPC_WEAK_FUNC(sub_82337D18);
PPC_FUNC_IMPL(__imp__sub_82337D18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x82337D20;
	__savegprlr_24(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,1416(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1416);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82337d44
	if (ctx.cr6.eq) goto loc_82337D44;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82337d6c
	if (!ctx.cr6.eq) goto loc_82337D6C;
loc_82337D44:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,15834
	ctx.r4.s64 = ctx.r11.s64 + 15834;
	// bl 0x8233a258
	ctx.lr = 0x82337D54;
	sub_8233A258(ctx, base);
	// lis r4,4876
	ctx.r4.s64 = 319553536;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r4,r4,14445
	ctx.r4.u64 = ctx.r4.u64 | 14445;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x829c3740
	ctx.lr = 0x82337D68;
	sub_829C3740(ctx, base);
	// stw r3,1416(r26)
	PPC_STORE_U32(ctx.r26.u32 + 1416, ctx.r3.u32);
loc_82337D6C:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// addi r4,r11,808
	ctx.r4.s64 = ctx.r11.s64 + 808;
	// bl 0x82873b58
	ctx.lr = 0x82337D80;
	sub_82873B58(ctx, base);
	// lwz r11,1420(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1420);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82337ea4
	if (!ctx.cr6.eq) goto loc_82337EA4;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82337e50
	if (!ctx.cr6.gt) goto loc_82337E50;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// lwz r27,108(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// addi r31,r11,-23916
	ctx.r31.s64 = ctx.r11.s64 + -23916;
loc_82337DA8:
	// lwz r29,0(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82337e0c
	if (ctx.cr6.eq) goto loc_82337E0C;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x8312e74c
	ctx.lr = 0x82337DC0;
	sub_8312E74C(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824d6ea8
	ctx.lr = 0x82337DC8;
	sub_824D6EA8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82337dd4
	if (ctx.cr0.eq) goto loc_82337DD4;
	// lwz r30,20(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
loc_82337DD4:
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x8312e73c
	ctx.lr = 0x82337DDC;
	sub_8312E73C(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// add r28,r30,r28
	ctx.r28.u64 = ctx.r30.u64 + ctx.r28.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x8312e74c
	ctx.lr = 0x82337DEC;
	sub_8312E74C(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824d6f28
	ctx.lr = 0x82337DF4;
	sub_824D6F28(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82337e00
	if (ctx.cr0.eq) goto loc_82337E00;
	// lwz r30,20(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
loc_82337E00:
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x8312e73c
	ctx.lr = 0x82337E08;
	sub_8312E73C(ctx, base);
	// add r24,r30,r24
	ctx.r24.u64 = ctx.r30.u64 + ctx.r24.u64;
loc_82337E0C:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// bne 0x82337da8
	if (!ctx.cr0.eq) goto loc_82337DA8;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bgt cr6,0x82337e28
	if (ctx.cr6.gt) goto loc_82337E28;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82337e40
	if (!ctx.cr6.gt) goto loc_82337E40;
loc_82337E28:
	// lwz r11,1408(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1408);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82337e40
	if (!ctx.cr6.eq) goto loc_82337E40;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82338120
	ctx.lr = 0x82337E3C;
	sub_82338120(ctx, base);
	// b 0x82337ea4
	goto loc_82337EA4;
loc_82337E40:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x82337ea4
	if (!ctx.cr6.eq) goto loc_82337EA4;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x82337ea4
	if (!ctx.cr6.eq) goto loc_82337EA4;
loc_82337E50:
	// lwz r11,1408(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1408);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82337ea4
	if (!ctx.cr6.eq) goto loc_82337EA4;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f13,1412(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 1412);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82337ea4
	if (!ctx.cr6.eq) goto loc_82337EA4;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,32440
	ctx.r10.s64 = ctx.r10.s64 + 32440;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lfs f1,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f1.f64 = double(temp.f32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stfs f1,1412(r26)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r26.u32 + 1412, temp.u32);
	// addi r3,r26,8
	ctx.r3.s64 = ctx.r26.s64 + 8;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x823383c0
	ctx.lr = 0x82337EA4;
	sub_823383C0(ctx, base);
loc_82337EA4:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8239d768
	ctx.lr = 0x82337EAC;
	sub_8239D768(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82337EB8"))) PPC_WEAK_FUNC(sub_82337EB8);
PPC_FUNC_IMPL(__imp__sub_82337EB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x82337EC0;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// addi r4,r11,808
	ctx.r4.s64 = ctx.r11.s64 + 808;
	// bl 0x82873b58
	ctx.lr = 0x82337EDC;
	sub_82873B58(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r24,0
	ctx.r24.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82337fdc
	if (!ctx.cr6.gt) goto loc_82337FDC;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// lwz r26,92(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// addi r30,r11,-23916
	ctx.r30.s64 = ctx.r11.s64 + -23916;
loc_82337F00:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82337f68
	if (ctx.cr6.eq) goto loc_82337F68;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// rotlwi r29,r11,0
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x8312e74c
	ctx.lr = 0x82337F1C;
	sub_8312E74C(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824d6ea8
	ctx.lr = 0x82337F24;
	sub_824D6EA8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82337f30
	if (ctx.cr0.eq) goto loc_82337F30;
	// lwz r28,20(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
loc_82337F30:
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x8312e73c
	ctx.lr = 0x82337F38;
	sub_8312E73C(ctx, base);
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// add r27,r28,r27
	ctx.r27.u64 = ctx.r28.u64 + ctx.r27.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x8312e74c
	ctx.lr = 0x82337F48;
	sub_8312E74C(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824d6f28
	ctx.lr = 0x82337F50;
	sub_824D6F28(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82337f5c
	if (ctx.cr0.eq) goto loc_82337F5C;
	// lwz r28,20(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
loc_82337F5C:
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x8312e73c
	ctx.lr = 0x82337F64;
	sub_8312E73C(ctx, base);
	// add r24,r28,r24
	ctx.r24.u64 = ctx.r28.u64 + ctx.r24.u64;
loc_82337F68:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// bne 0x82337f00
	if (!ctx.cr0.eq) goto loc_82337F00;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f13,1412(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1412);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// lfs f0,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,1412(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1412, temp.u32);
	// bgt cr6,0x82337f98
	if (ctx.cr6.gt) goto loc_82337F98;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// ble cr6,0x82337fc8
	if (!ctx.cr6.gt) goto loc_82337FC8;
loc_82337F98:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// addi r4,r11,32440
	ctx.r4.s64 = ctx.r11.s64 + 32440;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82337FB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1412(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1412, temp.u32);
	// bl 0x82338120
	ctx.lr = 0x82337FC8;
	sub_82338120(ctx, base);
loc_82337FC8:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f13,1412(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1412);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,17688(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17688);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82338000
	if (!ctx.cr6.eq) goto loc_82338000;
loc_82337FDC:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// addi r4,r11,32440
	ctx.r4.s64 = ctx.r11.s64 + 32440;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82337FF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82338020
	ctx.lr = 0x82338000;
	sub_82338020(ctx, base);
loc_82338000:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8239d768
	ctx.lr = 0x82338008;
	sub_8239D768(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82338010"))) PPC_WEAK_FUNC(sub_82338010);
PPC_FUNC_IMPL(__imp__sub_82338010) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1420(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1420, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82338020"))) PPC_WEAK_FUNC(sub_82338020);
PPC_FUNC_IMPL(__imp__sub_82338020) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82338028;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// addi r4,r11,-32064
	ctx.r4.s64 = ctx.r11.s64 + -32064;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82338050;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-32752
	ctx.r4.s64 = ctx.r11.s64 + -32752;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8233806C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r28,1
	ctx.r28.s64 = 1;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r28,1420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1420, ctx.r28.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,15834
	ctx.r4.s64 = ctx.r11.s64 + 15834;
	// bl 0x8233a258
	ctx.lr = 0x82338084;
	sub_8233A258(ctx, base);
	// lis r11,2960
	ctx.r11.s64 = 193986560;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r29,r11,64749
	ctx.r29.u64 = ctx.r11.u64 | 64749;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x829c3740
	ctx.lr = 0x8233809C;
	sub_829C3740(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r8,-32204
	ctx.r8.s64 = -2110521344;
	// stw r11,1408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1408, ctx.r11.u32);
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r11,r8,-32216
	ctx.r11.s64 = ctx.r8.s64 + -32216;
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stfs f0,1412(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1412, temp.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f1,-12104(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -12104);
	ctx.f1.f64 = double(temp.f32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x823383c0
	ctx.lr = 0x823380DC;
	sub_823383C0(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r3,13024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r11,788(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 788);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x823380f8
	if (ctx.cr6.eq) goto loc_823380F8;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82338114
	if (!ctx.cr6.eq) goto loc_82338114;
loc_823380F8:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r11,r11,18536
	ctx.r11.s64 = ctx.r11.s64 + 18536;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x8282c688
	ctx.lr = 0x82338114;
	sub_8282C688(ctx, base);
loc_82338114:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82338120"))) PPC_WEAK_FUNC(sub_82338120);
PPC_FUNC_IMPL(__imp__sub_82338120) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82338128;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// addi r4,r11,-32216
	ctx.r4.s64 = ctx.r11.s64 + -32216;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82338150;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,15834
	ctx.r4.s64 = ctx.r11.s64 + 15834;
	// bl 0x8233a258
	ctx.lr = 0x82338160;
	sub_8233A258(ctx, base);
	// lis r11,7886
	ctx.r11.s64 = 516816896;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r28,r11,40582
	ctx.r28.u64 = ctx.r11.u64 | 40582;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x829c3740
	ctx.lr = 0x82338178;
	sub_829C3740(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r29,1420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1420, ctx.r29.u32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r11,1408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1408, ctx.r11.u32);
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r11,r11,-32752
	ctx.r11.s64 = ctx.r11.s64 + -32752;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f1,32716(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32716);
	ctx.f1.f64 = double(temp.f32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x823383c0
	ctx.lr = 0x823381B4;
	sub_823383C0(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lfs f1,17688(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17688);
	ctx.f1.f64 = double(temp.f32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r11,r10,-32064
	ctx.r11.s64 = ctx.r10.s64 + -32064;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x823383c0
	ctx.lr = 0x823381E0;
	sub_823383C0(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r3,13024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r11,788(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 788);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x823381fc
	if (ctx.cr6.eq) goto loc_823381FC;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8233821c
	if (!ctx.cr6.eq) goto loc_8233821C;
loc_823381FC:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,18536
	ctx.r11.s64 = ctx.r11.s64 + 18536;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x8282c688
	ctx.lr = 0x8233821C;
	sub_8282C688(ctx, base);
loc_8233821C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82338228"))) PPC_WEAK_FUNC(sub_82338228);
PPC_FUNC_IMPL(__imp__sub_82338228) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,15834
	ctx.r4.s64 = ctx.r11.s64 + 15834;
	// bl 0x8233a258
	ctx.lr = 0x82338250;
	sub_8233A258(ctx, base);
	// lis r11,2960
	ctx.r11.s64 = 193986560;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r31,r11,64749
	ctx.r31.u64 = ctx.r11.u64 | 64749;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x829c3740
	ctx.lr = 0x82338268;
	sub_829C3740(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r3,13024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r11,788(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 788);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82338284
	if (ctx.cr6.eq) goto loc_82338284;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x823382a4
	if (!ctx.cr6.eq) goto loc_823382A4;
loc_82338284:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,18536
	ctx.r11.s64 = ctx.r11.s64 + 18536;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8282c688
	ctx.lr = 0x823382A4;
	sub_8282C688(ctx, base);
loc_823382A4:
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

__attribute__((alias("__imp__sub_823382C0"))) PPC_WEAK_FUNC(sub_823382C0);
PPC_FUNC_IMPL(__imp__sub_823382C0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,15834
	ctx.r4.s64 = ctx.r11.s64 + 15834;
	// bl 0x8233a258
	ctx.lr = 0x823382E8;
	sub_8233A258(ctx, base);
	// lis r11,7886
	ctx.r11.s64 = 516816896;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r31,r11,40582
	ctx.r31.u64 = ctx.r11.u64 | 40582;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x829c3740
	ctx.lr = 0x82338300;
	sub_829C3740(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r3,13024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r11,788(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 788);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8233831c
	if (ctx.cr6.eq) goto loc_8233831C;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8233833c
	if (!ctx.cr6.eq) goto loc_8233833C;
loc_8233831C:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,18536
	ctx.r11.s64 = ctx.r11.s64 + 18536;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8282c688
	ctx.lr = 0x8233833C;
	sub_8282C688(ctx, base);
loc_8233833C:
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

__attribute__((alias("__imp__sub_82338358"))) PPC_WEAK_FUNC(sub_82338358);
PPC_FUNC_IMPL(__imp__sub_82338358) {
	PPC_FUNC_PROLOGUE();
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lwz r31,2244(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2244);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823383a4
	if (ctx.cr6.eq) goto loc_823383A4;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,15834
	ctx.r4.s64 = ctx.r11.s64 + 15834;
	// bl 0x8233a258
	ctx.lr = 0x82338394;
	sub_8233A258(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x829c3740
	ctx.lr = 0x823383A4;
	sub_829C3740(ctx, base);
loc_823383A4:
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

__attribute__((alias("__imp__sub_823383C0"))) PPC_WEAK_FUNC(sub_823383C0);
PPC_FUNC_IMPL(__imp__sub_823383C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x823383C8;
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
	ctx.lr = 0x823383F0;
	sub_829C80B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82338488
	if (!ctx.cr0.eq) goto loc_82338488;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f30,f31
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// bne cr6,0x82338410
	if (!ctx.cr6.eq) goto loc_82338410;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f30,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f30.f64 = double(temp.f32);
loc_82338410:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823385d0
	ctx.lr = 0x82338418;
	sub_823385D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8233842C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82333900
	ctx.lr = 0x82338438;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x82338474
	if (ctx.cr0.eq) goto loc_82338474;
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
	// b 0x82338478
	goto loc_82338478;
loc_82338474:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82338478:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82410060
	ctx.lr = 0x82338484;
	sub_82410060(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82338488:
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
	ctx.lr = 0x823384A4;
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

__attribute__((alias("__imp__sub_823384B8"))) PPC_WEAK_FUNC(sub_823384B8);
PPC_FUNC_IMPL(__imp__sub_823384B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r4,496
	ctx.r4.s64 = ctx.r4.s64 + 496;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82a4ea80
	ctx.lr = 0x823384D8;
	sub_82A4EA80(ctx, base);
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

__attribute__((alias("__imp__sub_823384F0"))) PPC_WEAK_FUNC(sub_823384F0);
PPC_FUNC_IMPL(__imp__sub_823384F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lwz r9,-8(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stb r10,24(r8)
	PPC_STORE_U8(ctx.r8.u32 + 24, ctx.r10.u8);
	// lwz r10,-12(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// stw r11,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r11.u32);
	// stw r10,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r10.u32);
	// stw r9,20(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82338538"))) PPC_WEAK_FUNC(sub_82338538);
PPC_FUNC_IMPL(__imp__sub_82338538) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1084(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1084);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82338540"))) PPC_WEAK_FUNC(sub_82338540);
PPC_FUNC_IMPL(__imp__sub_82338540) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,808(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 808);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82338568
	if (ctx.cr6.eq) goto loc_82338568;
	// lwz r11,924(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 924);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x82338560
	if (ctx.cr6.eq) goto loc_82338560;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x82338568
	if (!ctx.cr6.eq) goto loc_82338568;
loc_82338560:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82338568:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82338570"))) PPC_WEAK_FUNC(sub_82338570);
PPC_FUNC_IMPL(__imp__sub_82338570) {
	PPC_FUNC_PROLOGUE();
	// stw r4,944(r3)
	PPC_STORE_U32(ctx.r3.u32 + 944, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82338578"))) PPC_WEAK_FUNC(sub_82338578);
PPC_FUNC_IMPL(__imp__sub_82338578) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,824(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 824);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,620(r3)
	PPC_STORE_U32(ctx.r3.u32 + 620, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,624(r3)
	PPC_STORE_U32(ctx.r3.u32 + 624, ctx.r11.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,628(r3)
	PPC_STORE_U32(ctx.r3.u32 + 628, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823385A0"))) PPC_WEAK_FUNC(sub_823385A0);
PPC_FUNC_IMPL(__imp__sub_823385A0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,620
	ctx.r3.s64 = ctx.r3.s64 + 620;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823385A8"))) PPC_WEAK_FUNC(sub_823385A8);
PPC_FUNC_IMPL(__imp__sub_823385A8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,1020(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1020, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823385B0"))) PPC_WEAK_FUNC(sub_823385B0);
PPC_FUNC_IMPL(__imp__sub_823385B0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,1112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1112, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823385B8"))) PPC_WEAK_FUNC(sub_823385B8);
PPC_FUNC_IMPL(__imp__sub_823385B8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,1116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1116, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823385C0"))) PPC_WEAK_FUNC(sub_823385C0);
PPC_FUNC_IMPL(__imp__sub_823385C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,964(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 964, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823385C8"))) PPC_WEAK_FUNC(sub_823385C8);
PPC_FUNC_IMPL(__imp__sub_823385C8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823385D0"))) PPC_WEAK_FUNC(sub_823385D0);
PPC_FUNC_IMPL(__imp__sub_823385D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r31,r11,-32456
	ctx.r31.s64 = ctx.r11.s64 + -32456;
	// lwz r11,-32452(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32452);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82338618
	if (!ctx.cr0.eq) goto loc_82338618;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,18516
	ctx.r9.s64 = ctx.r9.s64 + 18516;
	// stw r11,-32452(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32452, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-30104
	ctx.r3.s64 = ctx.r11.s64 + -30104;
	// bl 0x82a4c758
	ctx.lr = 0x82338618;
	sub_82A4C758(ctx, base);
loc_82338618:
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

__attribute__((alias("__imp__sub_82338630"))) PPC_WEAK_FUNC(sub_82338630);
PPC_FUNC_IMPL(__imp__sub_82338630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,1424
	ctx.r3.s64 = 1424;
	// bl 0x82833108
	ctx.lr = 0x82338648;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82338684
	if (ctx.cr0.eq) goto loc_82338684;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829bc540
	ctx.lr = 0x82338658;
	sub_829BC540(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// addi r11,r11,17456
	ctx.r11.s64 = ctx.r11.s64 + 17456;
	// addi r10,r10,18464
	ctx.r10.s64 = ctx.r10.s64 + 18464;
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
	// b 0x82338688
	goto loc_82338688;
loc_82338684:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82338688:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823386A0"))) PPC_WEAK_FUNC(sub_823386A0);
PPC_FUNC_IMPL(__imp__sub_823386A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823385d0
	ctx.lr = 0x823386C0;
	sub_823385D0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x823386d0
	if (!ctx.cr6.eq) goto loc_823386D0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x823386e8
	goto loc_823386E8;
loc_823386D0:
	// bl 0x82338750
	ctx.lr = 0x823386D4;
	sub_82338750(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x823386e8
	if (ctx.cr6.eq) goto loc_823386E8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82338858
	ctx.lr = 0x823386E8;
	sub_82338858(ctx, base);
loc_823386E8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82338700"))) PPC_WEAK_FUNC(sub_82338700);
PPC_FUNC_IMPL(__imp__sub_82338700) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82338750
	ctx.lr = 0x82338720;
	sub_82338750(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82338734
	if (ctx.cr6.eq) goto loc_82338734;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82338858
	ctx.lr = 0x82338734;
	sub_82338858(ctx, base);
loc_82338734:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82338750"))) PPC_WEAK_FUNC(sub_82338750);
PPC_FUNC_IMPL(__imp__sub_82338750) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r31,r11,-32392
	ctx.r31.s64 = ctx.r11.s64 + -32392;
	// lwz r11,-32388(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32388);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82338798
	if (!ctx.cr0.eq) goto loc_82338798;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,17352
	ctx.r9.s64 = ctx.r9.s64 + 17352;
	// stw r11,-32388(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32388, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-30152
	ctx.r3.s64 = ctx.r11.s64 + -30152;
	// bl 0x82a4c758
	ctx.lr = 0x82338798;
	sub_82A4C758(ctx, base);
loc_82338798:
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

__attribute__((alias("__imp__sub_823387B0"))) PPC_WEAK_FUNC(sub_823387B0);
PPC_FUNC_IMPL(__imp__sub_823387B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-27972(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27972);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823387f0
	if (!ctx.cr0.eq) goto loc_823387F0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// stw r11,-27972(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27972, ctx.r11.u32);
	// addi r3,r9,15828
	ctx.r3.s64 = ctx.r9.s64 + 15828;
	// bl 0x82816528
	ctx.lr = 0x823387E8;
	sub_82816528(ctx, base);
	// stw r3,-27976(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27976, ctx.r3.u32);
	// b 0x823387f4
	goto loc_823387F4;
loc_823387F0:
	// lwz r3,-27976(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27976);
loc_823387F4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82338808"))) PPC_WEAK_FUNC(sub_82338808);
PPC_FUNC_IMPL(__imp__sub_82338808) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82338750
	ctx.lr = 0x82338828;
	sub_82338750(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8233883C;
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

__attribute__((alias("__imp__sub_82338858"))) PPC_WEAK_FUNC(sub_82338858);
PPC_FUNC_IMPL(__imp__sub_82338858) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823388b8
	ctx.lr = 0x82338878;
	sub_823388B8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82338888
	if (!ctx.cr6.eq) goto loc_82338888;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8233889c
	goto loc_8233889C;
loc_82338888:
	// bl 0x82333d20
	ctx.lr = 0x8233888C;
	sub_82333D20(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8233889c
	if (ctx.cr6.eq) goto loc_8233889C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8233889C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823388B8"))) PPC_WEAK_FUNC(sub_823388B8);
PPC_FUNC_IMPL(__imp__sub_823388B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r31,r11,-32400
	ctx.r31.s64 = ctx.r11.s64 + -32400;
	// lwz r11,-32396(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32396);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82338900
	if (!ctx.cr0.eq) goto loc_82338900;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,17332
	ctx.r9.s64 = ctx.r9.s64 + 17332;
	// stw r11,-32396(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32396, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-30128
	ctx.r3.s64 = ctx.r11.s64 + -30128;
	// bl 0x82a4c758
	ctx.lr = 0x82338900;
	sub_82A4C758(ctx, base);
loc_82338900:
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

__attribute__((alias("__imp__sub_82338918"))) PPC_WEAK_FUNC(sub_82338918);
PPC_FUNC_IMPL(__imp__sub_82338918) {
	PPC_FUNC_PROLOGUE();
	// li r3,396
	ctx.r3.s64 = 396;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82338920"))) PPC_WEAK_FUNC(sub_82338920);
PPC_FUNC_IMPL(__imp__sub_82338920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-27980(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27980);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82338960
	if (!ctx.cr0.eq) goto loc_82338960;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// stw r11,-27980(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27980, ctx.r11.u32);
	// addi r3,r9,15812
	ctx.r3.s64 = ctx.r9.s64 + 15812;
	// bl 0x82816528
	ctx.lr = 0x82338958;
	sub_82816528(ctx, base);
	// stw r3,-27984(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27984, ctx.r3.u32);
	// b 0x82338964
	goto loc_82338964;
loc_82338960:
	// lwz r3,-27984(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27984);
loc_82338964:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82338978"))) PPC_WEAK_FUNC(sub_82338978);
PPC_FUNC_IMPL(__imp__sub_82338978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823388b8
	ctx.lr = 0x82338998;
	sub_823388B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823389AC;
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

__attribute__((alias("__imp__sub_823389C8"))) PPC_WEAK_FUNC(sub_823389C8);
PPC_FUNC_IMPL(__imp__sub_823389C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82338a00
	if (ctx.cr6.eq) goto loc_82338A00;
	// bl 0x823385d0
	ctx.lr = 0x823389F0;
	sub_823385D0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82338a00
	if (!ctx.cr6.eq) goto loc_82338A00;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82338a0c
	goto loc_82338A0C;
loc_82338A00:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82338a28
	ctx.lr = 0x82338A0C;
	sub_82338A28(ctx, base);
loc_82338A0C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

