#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82651768"))) PPC_WEAK_FUNC(sub_82651768);
PPC_FUNC_IMPL(__imp__sub_82651768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826516b0
	ctx.lr = 0x82651788;
	sub_826516B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265179C;
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

__attribute__((alias("__imp__sub_826517B8"))) PPC_WEAK_FUNC(sub_826517B8);
PPC_FUNC_IMPL(__imp__sub_826517B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x826517C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8265181c
	if (ctx.cr6.eq) goto loc_8265181C;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// addi r31,r11,13260
	ctx.r31.s64 = ctx.r11.s64 + 13260;
	// lwz r11,13256(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13256);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8265180c
	if (!ctx.cr0.eq) goto loc_8265180C;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,22316
	ctx.r9.s64 = ctx.r9.s64 + 22316;
	// stw r11,13256(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13256, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,25824
	ctx.r3.s64 = ctx.r11.s64 + 25824;
	// bl 0x82a4c758
	ctx.lr = 0x8265180C;
	sub_82A4C758(ctx, base);
loc_8265180C:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8265181c
	if (!ctx.cr6.eq) goto loc_8265181C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82651828
	goto loc_82651828;
loc_8265181C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82339b70
	ctx.lr = 0x82651828;
	sub_82339B70(ctx, base);
loc_82651828:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82651830"))) PPC_WEAK_FUNC(sub_82651830);
PPC_FUNC_IMPL(__imp__sub_82651830) {
	PPC_FUNC_PROLOGUE();
	// b 0x82651838
	sub_82651838(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82651838"))) PPC_WEAK_FUNC(sub_82651838);
PPC_FUNC_IMPL(__imp__sub_82651838) {
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
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x82333900
	ctx.lr = 0x82651854;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826518c8
	if (ctx.cr0.eq) goto loc_826518C8;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lis r8,-32225
	ctx.r8.s64 = -2111897600;
	// li r6,1
	ctx.r6.s64 = 1;
	// lfs f0,904(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r8,22276
	ctx.r8.s64 = ctx.r8.s64 + 22276;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r31,4(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r30,8(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// stw r31,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r31.u32);
	// stw r30,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r30.u32);
	// stw r10,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
	// b 0x826518cc
	goto loc_826518CC;
loc_826518C8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826518CC:
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

__attribute__((alias("__imp__sub_826518E8"))) PPC_WEAK_FUNC(sub_826518E8);
PPC_FUNC_IMPL(__imp__sub_826518E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,13280(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13280);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82651930
	if (!ctx.cr6.eq) goto loc_82651930;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// addi r4,r11,-24392
	ctx.r4.s64 = ctx.r11.s64 + -24392;
	// addi r3,r10,-27016
	ctx.r3.s64 = ctx.r10.s64 + -27016;
	// bl 0x82a4c7d8
	ctx.lr = 0x8265191C;
	sub_82A4C7D8(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82a4ca90
	ctx.lr = 0x82651924;
	sub_82A4CA90(ctx, base);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bl 0x82816528
	ctx.lr = 0x8265192C;
	sub_82816528(ctx, base);
	// stw r3,13280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13280, ctx.r3.u32);
loc_82651930:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82651948"))) PPC_WEAK_FUNC(sub_82651948);
PPC_FUNC_IMPL(__imp__sub_82651948) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82651950;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,13260
	ctx.r31.s64 = ctx.r11.s64 + 13260;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,13256(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13256);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82651994
	if (!ctx.cr0.eq) goto loc_82651994;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,22316
	ctx.r9.s64 = ctx.r9.s64 + 22316;
	// stw r11,13256(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13256, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,25824
	ctx.r3.s64 = ctx.r11.s64 + 25824;
	// bl 0x82a4c758
	ctx.lr = 0x82651994;
	sub_82A4C758(ctx, base);
loc_82651994:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// beq cr6,0x826519a8
	if (ctx.cr6.eq) goto loc_826519A8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82339f40
	ctx.lr = 0x826519A8;
	sub_82339F40(ctx, base);
loc_826519A8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826519B0"))) PPC_WEAK_FUNC(sub_826519B0);
PPC_FUNC_IMPL(__imp__sub_826519B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82651a20
	ctx.lr = 0x826519D8;
	sub_82651A20(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,24
	ctx.r4.s64 = ctx.r31.s64 + 24;
	// bl 0x82651a20
	ctx.lr = 0x826519E4;
	sub_82651A20(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,40
	ctx.r4.s64 = ctx.r31.s64 + 40;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82651A00;
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

__attribute__((alias("__imp__sub_82651A20"))) PPC_WEAK_FUNC(sub_82651A20);
PPC_FUNC_IMPL(__imp__sub_82651A20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82651A28;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// li r8,8
	ctx.r8.s64 = 8;
	// lvlx v0,0,r31
	temp.u32 = ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// vor v13,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// li r6,12
	ctx.r6.s64 = 12;
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// vpkd3d128 v13,v0,5,2,2
	ctx.fpscr.enableFlushMode();
	temp.u32 = (ctx.v0.u32[0]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v0.u32[0]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v0.u32[0]&0x7FE000)>>13) : 0x0;
	ctx.v13.u16[4] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v13.u16[4] |= ((ctx.v0.u32[0]&0x80000000)>>16);
	temp.u32 = (ctx.v0.u32[1]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v0.u32[1]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v0.u32[1]&0x7FE000)>>13) : 0x0;
	ctx.v13.u16[5] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v13.u16[5] |= ((ctx.v0.u32[1]&0x80000000)>>16);
	temp.u32 = (ctx.v0.u32[2]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v0.u32[2]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v0.u32[2]&0x7FE000)>>13) : 0x0;
	ctx.v13.u16[6] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v13.u16[6] |= ((ctx.v0.u32[2]&0x80000000)>>16);
	temp.u32 = (ctx.v0.u32[3]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v0.u32[3]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v0.u32[3]&0x7FE000)>>13) : 0x0;
	ctx.v13.u16[7] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v13.u16[7] |= ((ctx.v0.u32[3]&0x80000000)>>16);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// vsplth v0,v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_set1_epi16(short(0xF0E))));
	// stvehx v0,r0,r11
	ea = (ctx.r11.u32) & ~0x1;
	PPC_STORE_U16(ea, ctx.v0.u16[7 - ((ea & 0xF) >> 1)]);
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lvlx v0,r31,r10
	temp.u32 = ctx.r31.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
	// vor v13,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vpkd3d128 v13,v0,5,2,2
	temp.u32 = (ctx.v0.u32[0]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v0.u32[0]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v0.u32[0]&0x7FE000)>>13) : 0x0;
	ctx.v13.u16[4] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v13.u16[4] |= ((ctx.v0.u32[0]&0x80000000)>>16);
	temp.u32 = (ctx.v0.u32[1]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v0.u32[1]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v0.u32[1]&0x7FE000)>>13) : 0x0;
	ctx.v13.u16[5] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v13.u16[5] |= ((ctx.v0.u32[1]&0x80000000)>>16);
	temp.u32 = (ctx.v0.u32[2]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v0.u32[2]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v0.u32[2]&0x7FE000)>>13) : 0x0;
	ctx.v13.u16[6] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v13.u16[6] |= ((ctx.v0.u32[2]&0x80000000)>>16);
	temp.u32 = (ctx.v0.u32[3]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v0.u32[3]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v0.u32[3]&0x7FE000)>>13) : 0x0;
	ctx.v13.u16[7] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v13.u16[7] |= ((ctx.v0.u32[3]&0x80000000)>>16);
	// vsplth v0,v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_set1_epi16(short(0xF0E))));
	// stvehx v0,r0,r9
	ea = (ctx.r9.u32) & ~0x1;
	PPC_STORE_U16(ea, ctx.v0.u16[7 - ((ea & 0xF) >> 1)]);
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lvlx v0,r31,r8
	temp.u32 = ctx.r31.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// sth r11,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r11.u16);
	// vor v13,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vpkd3d128 v13,v0,5,2,2
	temp.u32 = (ctx.v0.u32[0]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v0.u32[0]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v0.u32[0]&0x7FE000)>>13) : 0x0;
	ctx.v13.u16[4] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v13.u16[4] |= ((ctx.v0.u32[0]&0x80000000)>>16);
	temp.u32 = (ctx.v0.u32[1]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v0.u32[1]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v0.u32[1]&0x7FE000)>>13) : 0x0;
	ctx.v13.u16[5] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v13.u16[5] |= ((ctx.v0.u32[1]&0x80000000)>>16);
	temp.u32 = (ctx.v0.u32[2]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v0.u32[2]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v0.u32[2]&0x7FE000)>>13) : 0x0;
	ctx.v13.u16[6] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v13.u16[6] |= ((ctx.v0.u32[2]&0x80000000)>>16);
	temp.u32 = (ctx.v0.u32[3]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v0.u32[3]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v0.u32[3]&0x7FE000)>>13) : 0x0;
	ctx.v13.u16[7] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v13.u16[7] |= ((ctx.v0.u32[3]&0x80000000)>>16);
	// vsplth v0,v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_set1_epi16(short(0xF0E))));
	// stvehx v0,r0,r7
	ea = (ctx.r7.u32) & ~0x1;
	PPC_STORE_U16(ea, ctx.v0.u16[7 - ((ea & 0xF) >> 1)]);
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lvlx v0,r31,r6
	temp.u32 = ctx.r31.u32 + ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// sth r11,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r11.u16);
	// vor v13,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vpkd3d128 v13,v0,5,2,2
	temp.u32 = (ctx.v0.u32[0]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v0.u32[0]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v0.u32[0]&0x7FE000)>>13) : 0x0;
	ctx.v13.u16[4] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v13.u16[4] |= ((ctx.v0.u32[0]&0x80000000)>>16);
	temp.u32 = (ctx.v0.u32[1]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v0.u32[1]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v0.u32[1]&0x7FE000)>>13) : 0x0;
	ctx.v13.u16[5] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v13.u16[5] |= ((ctx.v0.u32[1]&0x80000000)>>16);
	temp.u32 = (ctx.v0.u32[2]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v0.u32[2]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v0.u32[2]&0x7FE000)>>13) : 0x0;
	ctx.v13.u16[6] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v13.u16[6] |= ((ctx.v0.u32[2]&0x80000000)>>16);
	temp.u32 = (ctx.v0.u32[3]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v0.u32[3]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v0.u32[3]&0x7FE000)>>13) : 0x0;
	ctx.v13.u16[7] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v13.u16[7] |= ((ctx.v0.u32[3]&0x80000000)>>16);
	// vsplth v0,v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_set1_epi16(short(0xF0E))));
	// stvehx v0,r0,r29
	ea = (ctx.r29.u32) & ~0x1;
	PPC_STORE_U16(ea, ctx.v0.u16[7 - ((ea & 0xF) >> 1)]);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82651AD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82651AF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,86
	ctx.r4.s64 = ctx.r1.s64 + 86;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82651B10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82651B2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82651bfc
	if (ctx.cr6.eq) goto loc_82651BFC;
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,100
	ctx.r9.s64 = ctx.r1.s64 + 100;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// lvlx v0,0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsplth v0,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_set1_epi16(short(0xF0E))));
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// vupkd3d128 v0,v0,20
	__builtin_debugtrap();
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stvewx v0,r0,r9
	ea = (ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v0.u32[3 - ((ea & 0xF) >> 2)]);
	// lhz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// sth r9,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r9.u16);
	// lvlx v0,0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsplth v0,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_set1_epi16(short(0xF0E))));
	// vupkd3d128 v0,v0,20
	__builtin_debugtrap();
	// stvewx v0,r0,r7
	ea = (ctx.r7.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v0.u32[3 - ((ea & 0xF) >> 2)]);
	// lhz r9,86(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// sth r9,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r9.u16);
	// lvlx v0,0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsplth v0,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_set1_epi16(short(0xF0E))));
	// vupkd3d128 v0,v0,20
	__builtin_debugtrap();
	// stvewx v0,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v0.u32[3 - ((ea & 0xF) >> 2)]);
	// lhz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// lvlx v0,0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsplth v0,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_set1_epi16(short(0xF0E))));
	// vupkd3d128 v0,v0,20
	__builtin_debugtrap();
	// stvewx v0,r0,r5
	ea = (ctx.r5.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v0.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f12,124(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
loc_82651BFC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82651C08"))) PPC_WEAK_FUNC(sub_82651C08);
PPC_FUNC_IMPL(__imp__sub_82651C08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,13268
	ctx.r31.s64 = ctx.r11.s64 + 13268;
	// lwz r11,13264(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13264);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82651c50
	if (!ctx.cr0.eq) goto loc_82651C50;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,22316
	ctx.r9.s64 = ctx.r9.s64 + 22316;
	// stw r11,13264(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13264, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,25848
	ctx.r3.s64 = ctx.r11.s64 + 25848;
	// bl 0x82a4c758
	ctx.lr = 0x82651C50;
	sub_82A4C758(ctx, base);
loc_82651C50:
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

__attribute__((alias("__imp__sub_82651C68"))) PPC_WEAK_FUNC(sub_82651C68);
PPC_FUNC_IMPL(__imp__sub_82651C68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82651cb8
	ctx.lr = 0x82651C88;
	sub_82651CB8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82651c9c
	if (ctx.cr6.eq) goto loc_82651C9C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333b08
	ctx.lr = 0x82651C9C;
	sub_82333B08(ctx, base);
loc_82651C9C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82651CB8"))) PPC_WEAK_FUNC(sub_82651CB8);
PPC_FUNC_IMPL(__imp__sub_82651CB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,24800
	ctx.r31.s64 = ctx.r11.s64 + 24800;
	// lwz r11,-19392(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19392);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82651d00
	if (!ctx.cr0.eq) goto loc_82651D00;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,23696
	ctx.r9.s64 = ctx.r9.s64 + 23696;
	// stw r11,-19392(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19392, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,25872
	ctx.r3.s64 = ctx.r11.s64 + 25872;
	// bl 0x82a4c758
	ctx.lr = 0x82651D00;
	sub_82A4C758(ctx, base);
loc_82651D00:
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

__attribute__((alias("__imp__sub_82651D18"))) PPC_WEAK_FUNC(sub_82651D18);
PPC_FUNC_IMPL(__imp__sub_82651D18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,24796(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24796);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82651d58
	if (!ctx.cr0.eq) goto loc_82651D58;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// stw r11,24796(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24796, ctx.r11.u32);
	// addi r3,r9,22136
	ctx.r3.s64 = ctx.r9.s64 + 22136;
	// bl 0x82816528
	ctx.lr = 0x82651D50;
	sub_82816528(ctx, base);
	// stw r3,24792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24792, ctx.r3.u32);
	// b 0x82651d5c
	goto loc_82651D5C;
loc_82651D58:
	// lwz r3,24792(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24792);
loc_82651D5C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82651D70"))) PPC_WEAK_FUNC(sub_82651D70);
PPC_FUNC_IMPL(__imp__sub_82651D70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82651cb8
	ctx.lr = 0x82651D90;
	sub_82651CB8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82651DA4;
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

__attribute__((alias("__imp__sub_82651DC0"))) PPC_WEAK_FUNC(sub_82651DC0);
PPC_FUNC_IMPL(__imp__sub_82651DC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82651df8
	if (ctx.cr6.eq) goto loc_82651DF8;
	// bl 0x82651cb8
	ctx.lr = 0x82651DE8;
	sub_82651CB8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82651df8
	if (!ctx.cr6.eq) goto loc_82651DF8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82651e04
	goto loc_82651E04;
loc_82651DF8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333c70
	ctx.lr = 0x82651E04;
	sub_82333C70(ctx, base);
loc_82651E04:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82651E20"))) PPC_WEAK_FUNC(sub_82651E20);
PPC_FUNC_IMPL(__imp__sub_82651E20) {
	PPC_FUNC_PROLOGUE();
	// b 0x82651cb8
	sub_82651CB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82651E28"))) PPC_WEAK_FUNC(sub_82651E28);
PPC_FUNC_IMPL(__imp__sub_82651E28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x82651E44;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82651eb4
	if (ctx.cr0.eq) goto loc_82651EB4;
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
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r9,r9,23616
	ctx.r9.s64 = ctx.r9.s64 + 23616;
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
	// b 0x82651eb8
	goto loc_82651EB8;
loc_82651EB4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82651EB8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82651ED0"))) PPC_WEAK_FUNC(sub_82651ED0);
PPC_FUNC_IMPL(__imp__sub_82651ED0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r11,22136
	ctx.r3.s64 = ctx.r11.s64 + 22136;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82651EE0"))) PPC_WEAK_FUNC(sub_82651EE0);
PPC_FUNC_IMPL(__imp__sub_82651EE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82651f30
	ctx.lr = 0x82651F00;
	sub_82651F30(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82651f14
	if (ctx.cr6.eq) goto loc_82651F14;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333b08
	ctx.lr = 0x82651F14;
	sub_82333B08(ctx, base);
loc_82651F14:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82651F30"))) PPC_WEAK_FUNC(sub_82651F30);
PPC_FUNC_IMPL(__imp__sub_82651F30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,24788
	ctx.r31.s64 = ctx.r11.s64 + 24788;
	// lwz r11,-19396(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19396);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82651f78
	if (!ctx.cr0.eq) goto loc_82651F78;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,23736
	ctx.r9.s64 = ctx.r9.s64 + 23736;
	// stw r11,-19396(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19396, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,25896
	ctx.r3.s64 = ctx.r11.s64 + 25896;
	// bl 0x82a4c758
	ctx.lr = 0x82651F78;
	sub_82A4C758(ctx, base);
loc_82651F78:
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

__attribute__((alias("__imp__sub_82651F90"))) PPC_WEAK_FUNC(sub_82651F90);
PPC_FUNC_IMPL(__imp__sub_82651F90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,24784(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24784);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82651fd0
	if (!ctx.cr0.eq) goto loc_82651FD0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// stw r11,24784(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24784, ctx.r11.u32);
	// addi r3,r9,22216
	ctx.r3.s64 = ctx.r9.s64 + 22216;
	// bl 0x82816528
	ctx.lr = 0x82651FC8;
	sub_82816528(ctx, base);
	// stw r3,24780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24780, ctx.r3.u32);
	// b 0x82651fd4
	goto loc_82651FD4;
loc_82651FD0:
	// lwz r3,24780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24780);
loc_82651FD4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82651FE8"))) PPC_WEAK_FUNC(sub_82651FE8);
PPC_FUNC_IMPL(__imp__sub_82651FE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82651f30
	ctx.lr = 0x82652008;
	sub_82651F30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265201C;
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

__attribute__((alias("__imp__sub_82652038"))) PPC_WEAK_FUNC(sub_82652038);
PPC_FUNC_IMPL(__imp__sub_82652038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82652070
	if (ctx.cr6.eq) goto loc_82652070;
	// bl 0x82651f30
	ctx.lr = 0x82652060;
	sub_82651F30(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82652070
	if (!ctx.cr6.eq) goto loc_82652070;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8265207c
	goto loc_8265207C;
loc_82652070:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333c70
	ctx.lr = 0x8265207C;
	sub_82333C70(ctx, base);
loc_8265207C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82652098"))) PPC_WEAK_FUNC(sub_82652098);
PPC_FUNC_IMPL(__imp__sub_82652098) {
	PPC_FUNC_PROLOGUE();
	// b 0x82651f30
	sub_82651F30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826520A0"))) PPC_WEAK_FUNC(sub_826520A0);
PPC_FUNC_IMPL(__imp__sub_826520A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x826520BC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8265211c
	if (ctx.cr0.eq) goto loc_8265211C;
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
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r9,r9,23536
	ctx.r9.s64 = ctx.r9.s64 + 23536;
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
	// b 0x82652120
	goto loc_82652120;
loc_8265211C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82652120:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82652138"))) PPC_WEAK_FUNC(sub_82652138);
PPC_FUNC_IMPL(__imp__sub_82652138) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r11,22216
	ctx.r3.s64 = ctx.r11.s64 + 22216;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82652148"))) PPC_WEAK_FUNC(sub_82652148);
PPC_FUNC_IMPL(__imp__sub_82652148) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82652198
	ctx.lr = 0x82652168;
	sub_82652198(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8265217c
	if (ctx.cr6.eq) goto loc_8265217C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333b08
	ctx.lr = 0x8265217C;
	sub_82333B08(ctx, base);
loc_8265217C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82652198"))) PPC_WEAK_FUNC(sub_82652198);
PPC_FUNC_IMPL(__imp__sub_82652198) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,24776
	ctx.r31.s64 = ctx.r11.s64 + 24776;
	// lwz r11,-19400(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19400);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826521e0
	if (!ctx.cr0.eq) goto loc_826521E0;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,23716
	ctx.r9.s64 = ctx.r9.s64 + 23716;
	// stw r11,-19400(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19400, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,25920
	ctx.r3.s64 = ctx.r11.s64 + 25920;
	// bl 0x82a4c758
	ctx.lr = 0x826521E0;
	sub_82A4C758(ctx, base);
loc_826521E0:
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

__attribute__((alias("__imp__sub_826521F8"))) PPC_WEAK_FUNC(sub_826521F8);
PPC_FUNC_IMPL(__imp__sub_826521F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,24772(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24772);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82652238
	if (!ctx.cr0.eq) goto loc_82652238;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// stw r11,24772(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24772, ctx.r11.u32);
	// addi r3,r9,22172
	ctx.r3.s64 = ctx.r9.s64 + 22172;
	// bl 0x82816528
	ctx.lr = 0x82652230;
	sub_82816528(ctx, base);
	// stw r3,24768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24768, ctx.r3.u32);
	// b 0x8265223c
	goto loc_8265223C;
loc_82652238:
	// lwz r3,24768(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24768);
loc_8265223C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82652250"))) PPC_WEAK_FUNC(sub_82652250);
PPC_FUNC_IMPL(__imp__sub_82652250) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82652198
	ctx.lr = 0x82652270;
	sub_82652198(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82652284;
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

__attribute__((alias("__imp__sub_826522A0"))) PPC_WEAK_FUNC(sub_826522A0);
PPC_FUNC_IMPL(__imp__sub_826522A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x826522d8
	if (ctx.cr6.eq) goto loc_826522D8;
	// bl 0x82652198
	ctx.lr = 0x826522C8;
	sub_82652198(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826522d8
	if (!ctx.cr6.eq) goto loc_826522D8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826522e4
	goto loc_826522E4;
loc_826522D8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333c70
	ctx.lr = 0x826522E4;
	sub_82333C70(ctx, base);
loc_826522E4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82652300"))) PPC_WEAK_FUNC(sub_82652300);
PPC_FUNC_IMPL(__imp__sub_82652300) {
	PPC_FUNC_PROLOGUE();
	// b 0x82652198
	sub_82652198(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82652308"))) PPC_WEAK_FUNC(sub_82652308);
PPC_FUNC_IMPL(__imp__sub_82652308) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x82652324;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82652384
	if (ctx.cr0.eq) goto loc_82652384;
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
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r9,r9,23456
	ctx.r9.s64 = ctx.r9.s64 + 23456;
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
	// b 0x82652388
	goto loc_82652388;
loc_82652384:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82652388:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826523A0"))) PPC_WEAK_FUNC(sub_826523A0);
PPC_FUNC_IMPL(__imp__sub_826523A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r11,22172
	ctx.r3.s64 = ctx.r11.s64 + 22172;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826523B0"))) PPC_WEAK_FUNC(sub_826523B0);
PPC_FUNC_IMPL(__imp__sub_826523B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,152(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 152);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,20(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lwz r11,28(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// lbz r11,32(r6)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// lbz r11,33(r6)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 33);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826523E8"))) PPC_WEAK_FUNC(sub_826523E8);
PPC_FUNC_IMPL(__imp__sub_826523E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x826523F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addic. r28,r29,20
	ctx.xer.ca = ctx.r29.u32 > 4294967275;
	ctx.r28.s64 = ctx.r29.s64 + 20;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x82652408
	if (ctx.cr0.eq) goto loc_82652408;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// b 0x8265240c
	goto loc_8265240C;
loc_82652408:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8265240C:
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8265241C;
	sub_829B9720(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82652468
	if (ctx.cr0.eq) goto loc_82652468;
	// bl 0x824122f8
	ctx.lr = 0x82652428;
	sub_824122F8(ctx, base);
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
	ctx.lr = 0x82652440;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82652468
	if (ctx.cr0.eq) goto loc_82652468;
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// lwz r10,36(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82652468
	if (!ctx.cr6.eq) goto loc_82652468;
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// lwz r10,40(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8265249c
	if (ctx.cr6.eq) goto loc_8265249C;
loc_82652468:
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r4,1312(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1312);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82652488
	if (ctx.cr6.eq) goto loc_82652488;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82652480;
	sub_829B9720(ctx, base);
	// bl 0x82409c40
	ctx.lr = 0x82652484;
	sub_82409C40(ctx, base);
	// b 0x8265248c
	goto loc_8265248C;
loc_82652488:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8265248C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8265249c
	if (ctx.cr6.eq) goto loc_8265249C;
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_8265249C:
	// lwz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,40(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// stw r11,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r11.u32);
	// stw r10,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826524B8"))) PPC_WEAK_FUNC(sub_826524B8);
PPC_FUNC_IMPL(__imp__sub_826524B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,56(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 56);
	// stw r11,256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 256, ctx.r11.u32);
	// lwz r11,60(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 60);
	// stw r11,260(r3)
	PPC_STORE_U32(ctx.r3.u32 + 260, ctx.r11.u32);
	// b 0x828f1cb0
	sub_828F1CB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826524D0"))) PPC_WEAK_FUNC(sub_826524D0);
PPC_FUNC_IMPL(__imp__sub_826524D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f4
	ctx.lr = 0x826524D8;
	__savegprlr_23(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x828f1fc8
	ctx.lr = 0x826524E4;
	sub_828F1FC8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// addi r5,r10,23756
	ctx.r5.s64 = ctx.r10.s64 + 23756;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
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
	// bl 0x82650eb0
	ctx.lr = 0x82652530;
	sub_82650EB0(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r5,r11,23776
	ctx.r5.s64 = ctx.r11.s64 + 23776;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82650eb0
	ctx.lr = 0x82652544;
	sub_82650EB0(ctx, base);
	// lwz r30,140(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265255C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82652580
	if (ctx.cr0.eq) goto loc_82652580;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82652578;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82652584
	goto loc_82652584;
loc_82652580:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82652584:
	// lis r23,-31949
	ctx.r23.s64 = -2093809664;
	// lwz r11,13024(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82652594;
	sub_829B9720(ctx, base);
	// bl 0x82416348
	ctx.lr = 0x82652598;
	sub_82416348(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82652688
	if (ctx.cr0.eq) goto loc_82652688;
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// addi r26,r27,224
	ctx.r26.s64 = ctx.r27.s64 + 224;
	// stw r11,248(r27)
	PPC_STORE_U32(ctx.r27.u32 + 248, ctx.r11.u32);
	// lwz r11,244(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 244);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r31,240(r27)
	PPC_STORE_U32(ctx.r27.u32 + 240, ctx.r31.u32);
	// beq cr6,0x826525d0
	if (ctx.cr6.eq) goto loc_826525D0;
	// stw r31,20(r26)
	PPC_STORE_U32(ctx.r26.u32 + 20, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82332c38
	ctx.lr = 0x826525D0;
	sub_82332C38(ctx, base);
loc_826525D0:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82652688
	if (!ctx.cr6.gt) goto loc_82652688;
	// lwz r25,108(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
loc_826525E4:
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826525F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8265261c
	if (ctx.cr0.eq) goto loc_8265261C;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82652614;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82652620
	goto loc_82652620;
loc_8265261C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82652620:
	// lwz r11,13024(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8265262C;
	sub_829B9720(ctx, base);
	// bl 0x824381f0
	ctx.lr = 0x82652630;
	sub_824381F0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8265267c
	if (ctx.cr0.eq) goto loc_8265267C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r28,8(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// bl 0x82333a20
	ctx.lr = 0x82652644;
	sub_82333A20(ctx, base);
	// addi r29,r27,216
	ctx.r29.s64 = ctx.r27.s64 + 216;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82652668
	if (ctx.cr0.eq) goto loc_82652668;
	// lwz r3,1608(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1608);
	// bl 0x82414510
	ctx.lr = 0x82652658;
	sub_82414510(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82652668
	if (ctx.cr0.eq) goto loc_82652668;
	// stw r28,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r28.u32);
	// stw r29,1756(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1756, ctx.r29.u32);
loc_82652668:
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x8265267C;
	sub_82410060(ctx, base);
loc_8265267C:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// bne 0x826525e4
	if (!ctx.cr0.eq) goto loc_826525E4;
loc_82652688:
	// lwz r11,56(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 56);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// oris r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 2147483648;
	// stw r10,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r10.u32);
	// bl 0x8239d768
	ctx.lr = 0x826526A0;
	sub_8239D768(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8239d768
	ctx.lr = 0x826526A8;
	sub_8239D768(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82a4ea44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826526B0"))) PPC_WEAK_FUNC(sub_826526B0);
PPC_FUNC_IMPL(__imp__sub_826526B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x826526B8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,252(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 252);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826526d8
	if (ctx.cr6.eq) goto loc_826526D8;
	// lwz r11,256(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8265279c
	if (ctx.cr6.eq) goto loc_8265279C;
loc_826526D8:
	// lwz r11,240(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8265279c
	if (!ctx.cr6.gt) goto loc_8265279C;
	// li r27,0
	ctx.r27.s64 = 0;
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
loc_826526F0:
	// lwz r10,236(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lwzx r4,r27,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r10.u32);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82652704;
	sub_829B9720(ctx, base);
	// bl 0x824381f0
	ctx.lr = 0x82652708;
	sub_824381F0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82652788
	if (ctx.cr0.eq) goto loc_82652788;
	// lwz r11,2112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82652788
	if (!ctx.cr6.gt) goto loc_82652788;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82652788
	if (!ctx.cr0.eq) goto loc_82652788;
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lwz r29,1492(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// lwz r4,248(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8265273C;
	sub_829B9720(ctx, base);
	// bl 0x82416348
	ctx.lr = 0x82652740;
	sub_82416348(ctx, base);
	// mr. r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x82652788
	if (ctx.cr0.eq) goto loc_82652788;
	// lwz r11,252(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 252);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826527b8
	if (ctx.cr6.eq) goto loc_826527B8;
	// lwz r11,256(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826527b8
	if (!ctx.cr6.eq) goto loc_826527B8;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r6,620
	ctx.r5.s64 = ctx.r6.s64 + 620;
	// addi r4,r31,620
	ctx.r4.s64 = ctx.r31.s64 + 620;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82652780;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826527b8
	if (ctx.cr0.eq) goto loc_826527B8;
loc_82652788:
	// lwz r11,240(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826526f0
	if (ctx.cr6.lt) goto loc_826526F0;
loc_8265279C:
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// oris r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 2147483648;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
loc_826527B0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
loc_826527B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826527b0
	goto loc_826527B0;
}

__attribute__((alias("__imp__sub_826527C0"))) PPC_WEAK_FUNC(sub_826527C0);
PPC_FUNC_IMPL(__imp__sub_826527C0) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826527D0"))) PPC_WEAK_FUNC(sub_826527D0);
PPC_FUNC_IMPL(__imp__sub_826527D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x826527D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82652914
	if (ctx.cr6.eq) goto loc_82652914;
	// lwz r11,36(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82652804
	if (ctx.cr6.eq) goto loc_82652804;
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82652914
	if (ctx.cr6.eq) goto loc_82652914;
loc_82652804:
	// lwz r29,1584(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1584);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82652914
	if (ctx.cr6.eq) goto loc_82652914;
	// lwz r11,2112(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82652914
	if (!ctx.cr6.gt) goto loc_82652914;
	// lwz r11,84(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82652914
	if (!ctx.cr0.eq) goto loc_82652914;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r4,32(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8265283C;
	sub_829B9720(ctx, base);
	// bl 0x82416348
	ctx.lr = 0x82652840;
	sub_82416348(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82652914
	if (ctx.cr0.eq) goto loc_82652914;
	// lwz r11,44(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// lwz r3,1492(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1492);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82652880
	if (!ctx.cr6.eq) goto loc_82652880;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r31,620
	ctx.r5.s64 = ctx.r31.s64 + 620;
	// addi r4,r29,620
	ctx.r4.s64 = ctx.r29.s64 + 620;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82652878;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826528a8
	if (ctx.cr0.eq) goto loc_826528A8;
loc_82652880:
	// lwz r11,44(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x826528c0
	if (!ctx.cr6.eq) goto loc_826528C0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828a97e0
	ctx.lr = 0x826528A0;
	sub_828A97E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826528c0
	if (!ctx.cr0.eq) goto loc_826528C0;
loc_826528A8:
	// lwz r11,1408(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1408);
	// lis r3,14112
	ctx.r3.s64 = 924844032;
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// ori r3,r3,53358
	ctx.r3.u64 = ctx.r3.u64 | 53358;
	// stw r10,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
	// b 0x82652918
	goto loc_82652918;
loc_826528C0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,1928(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1928);
	// bl 0x824d7228
	ctx.lr = 0x826528CC;
	sub_824D7228(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r3,1928(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1928);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,1736(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1736, ctx.r11.u32);
	// lwz r11,44(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82652900
	if (!ctx.cr6.eq) goto loc_82652900;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x824d6fa8
	ctx.lr = 0x826528F4;
	sub_824D6FA8(ctx, base);
	// lis r3,9385
	ctx.r3.s64 = 615055360;
	// ori r3,r3,21604
	ctx.r3.u64 = ctx.r3.u64 | 21604;
	// b 0x82652918
	goto loc_82652918;
loc_82652900:
	// li r6,2
	ctx.r6.s64 = 2;
	// bl 0x824d6fa8
	ctx.lr = 0x82652908;
	sub_824D6FA8(ctx, base);
	// lis r3,7330
	ctx.r3.s64 = 480378880;
	// ori r3,r3,14075
	ctx.r3.u64 = ctx.r3.u64 | 14075;
	// b 0x82652918
	goto loc_82652918;
loc_82652914:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82652918:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82652920"))) PPC_WEAK_FUNC(sub_82652920);
PPC_FUNC_IMPL(__imp__sub_82652920) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,60(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 60);
	// stw r11,260(r3)
	PPC_STORE_U32(ctx.r3.u32 + 260, ctx.r11.u32);
	// lwz r11,56(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 56);
	// stw r11,248(r3)
	PPC_STORE_U32(ctx.r3.u32 + 248, ctx.r11.u32);
	// b 0x828f1cb0
	sub_828F1CB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82652938"))) PPC_WEAK_FUNC(sub_82652938);
PPC_FUNC_IMPL(__imp__sub_82652938) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82652940;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x828f1fc8
	ctx.lr = 0x8265294C;
	sub_828F1FC8(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// oris r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 2147483648;
	// stw r10,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r10.u32);
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826529c8
	if (!ctx.cr6.gt) goto loc_826529C8;
	// addi r27,r31,252
	ctx.r27.s64 = ctx.r31.s64 + 252;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
loc_82652978:
	// lwz r10,236(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lwzx r4,r10,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8265298C;
	sub_829B9720(ctx, base);
	// bl 0x82333a20
	ctx.lr = 0x82652990;
	sub_82333A20(ctx, base);
	// lwz r29,8(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826529b4
	if (ctx.cr0.eq) goto loc_826529B4;
	// lwz r3,1608(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1608);
	// bl 0x82414510
	ctx.lr = 0x826529A4;
	sub_82414510(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826529b4
	if (ctx.cr0.eq) goto loc_826529B4;
	// stw r29,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r29.u32);
	// stw r27,1756(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1756, ctx.r27.u32);
loc_826529B4:
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82652978
	if (ctx.cr6.lt) goto loc_82652978;
loc_826529C8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826529D0"))) PPC_WEAK_FUNC(sub_826529D0);
PPC_FUNC_IMPL(__imp__sub_826529D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x826529D8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// beq cr6,0x82652a78
	if (ctx.cr6.eq) goto loc_82652A78;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r4,-36(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + -36);
	// lwz r29,1408(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82652A08;
	sub_829B9720(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82652a78
	if (ctx.cr0.eq) goto loc_82652A78;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82652A20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82652a78
	if (ctx.cr0.eq) goto loc_82652A78;
	// lwz r11,1584(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1584);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82652a78
	if (ctx.cr6.eq) goto loc_82652A78;
	// lwz r3,1492(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1492);
	// addi r4,r11,620
	ctx.r4.s64 = ctx.r11.s64 + 620;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r30,620
	ctx.r5.s64 = ctx.r30.s64 + 620;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82652A58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82652a78
	if (!ctx.cr0.eq) goto loc_82652A78;
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// lis r28,14112
	ctx.r28.s64 = 924844032;
	// stw r27,56(r29)
	PPC_STORE_U32(ctx.r29.u32 + 56, ctx.r27.u32);
	// ori r28,r28,53358
	ctx.r28.u64 = ctx.r28.u64 | 53358;
	// stw r11,72(r29)
	PPC_STORE_U32(ctx.r29.u32 + 72, ctx.r11.u32);
	// stw r27,1956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1956, ctx.r27.u32);
loc_82652A78:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82652A88"))) PPC_WEAK_FUNC(sub_82652A88);
PPC_FUNC_IMPL(__imp__sub_82652A88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x828f1cb0
	ctx.lr = 0x82652AA8;
	sub_828F1CB0(ctx, base);
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// stw r11,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82652AC8"))) PPC_WEAK_FUNC(sub_82652AC8);
PPC_FUNC_IMPL(__imp__sub_82652AC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f4
	ctx.lr = 0x82652AD0;
	__savegprlr_23(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// addi r5,r10,21896
	ctx.r5.s64 = ctx.r10.s64 + 21896;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// bl 0x82650eb0
	ctx.lr = 0x82652B08;
	sub_82650EB0(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82652be0
	if (!ctx.cr6.gt) goto loc_82652BE0;
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// lwz r26,92(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
	// addi r27,r11,23848
	ctx.r27.s64 = ctx.r11.s64 + 23848;
loc_82652B28:
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82652B3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82652b60
	if (ctx.cr0.eq) goto loc_82652B60;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82652B58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82652b64
	goto loc_82652B64;
loc_82652B60:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82652B64:
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82652B70;
	sub_829B9720(ctx, base);
	// bl 0x82333a20
	ctx.lr = 0x82652B74;
	sub_82333A20(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82652bd4
	if (ctx.cr0.eq) goto loc_82652BD4;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82833108
	ctx.lr = 0x82652B84;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82652bc4
	if (ctx.cr0.eq) goto loc_82652BC4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,80(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// lwz r23,216(r25)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r25.u32 + 216);
	// bl 0x82833180
	ctx.lr = 0x82652B9C;
	sub_82833180(ctx, base);
	// lis r11,-8531
	ctx.r11.s64 = -559087616;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// ori r11,r11,47806
	ctx.r11.u64 = ctx.r11.u64 | 47806;
	// stw r23,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r23.u32);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// b 0x82652bc8
	goto loc_82652BC8;
loc_82652BC4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82652BC8:
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x82652BD4;
	sub_82833A30(ctx, base);
loc_82652BD4:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// bne 0x82652b28
	if (!ctx.cr0.eq) goto loc_82652B28;
loc_82652BE0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8239d768
	ctx.lr = 0x82652BE8;
	sub_8239D768(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82a4ea44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82652BF0"))) PPC_WEAK_FUNC(sub_82652BF0);
PPC_FUNC_IMPL(__imp__sub_82652BF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82652BF8;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r5,r10,21896
	ctx.r5.s64 = ctx.r10.s64 + 21896;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82650eb0
	ctx.lr = 0x82652C30;
	sub_82650EB0(ctx, base);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// lwz r26,96(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x82652cd8
	if (!ctx.cr6.gt) goto loc_82652CD8;
	// lwz r30,92(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lis r27,-31949
	ctx.r27.s64 = -2093809664;
loc_82652C48:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82652C5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82652c80
	if (ctx.cr0.eq) goto loc_82652C80;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82652C78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82652c84
	goto loc_82652C84;
loc_82652C80:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82652C84:
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82652C90;
	sub_829B9720(ctx, base);
	// bl 0x82333a20
	ctx.lr = 0x82652C94;
	sub_82333A20(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82652cc8
	if (ctx.cr0.eq) goto loc_82652CC8;
	// lwz r11,216(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 216);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82652cbc
	if (ctx.cr6.eq) goto loc_82652CBC;
	// lwz r10,2196(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2196);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82652d00
	if (ctx.cr6.eq) goto loc_82652D00;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82652cc8
	if (!ctx.cr6.eq) goto loc_82652CC8;
loc_82652CBC:
	// lwz r11,2196(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2196);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82652cec
	if (!ctx.cr6.eq) goto loc_82652CEC;
loc_82652CC8:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r26
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x82652c48
	if (ctx.cr6.lt) goto loc_82652C48;
loc_82652CD8:
	// lwz r11,56(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// li r31,1
	ctx.r31.s64 = 1;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// oris r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 2147483648;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
loc_82652CEC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8239d768
	ctx.lr = 0x82652CF4;
	sub_8239D768(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82652CF8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
loc_82652D00:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8239d768
	ctx.lr = 0x82652D08;
	sub_8239D768(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82652cf8
	goto loc_82652CF8;
}

__attribute__((alias("__imp__sub_82652D10"))) PPC_WEAK_FUNC(sub_82652D10);
PPC_FUNC_IMPL(__imp__sub_82652D10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82333a20
	ctx.lr = 0x82652D30;
	sub_82333A20(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82652d80
	if (ctx.cr0.eq) goto loc_82652D80;
	// lwz r3,1608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82652d58
	if (ctx.cr6.eq) goto loc_82652D58;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,552(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 552);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82652D54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82652d5c
	goto loc_82652D5C;
loc_82652D58:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82652D5C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82652d68
	if (ctx.cr6.eq) goto loc_82652D68;
	// bl 0x824cd328
	ctx.lr = 0x82652D68;
	sub_824CD328(ctx, base);
loc_82652D68:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82652d7c
	if (!ctx.cr6.eq) goto loc_82652D7C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82652D7C:
	// stw r11,2200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2200, ctx.r11.u32);
loc_82652D80:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82652D98"))) PPC_WEAK_FUNC(sub_82652D98);
PPC_FUNC_IMPL(__imp__sub_82652D98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82652de8
	ctx.lr = 0x82652DB8;
	sub_82652DE8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82652dcc
	if (ctx.cr6.eq) goto loc_82652DCC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333b08
	ctx.lr = 0x82652DCC;
	sub_82333B08(ctx, base);
loc_82652DCC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82652DE8"))) PPC_WEAK_FUNC(sub_82652DE8);
PPC_FUNC_IMPL(__imp__sub_82652DE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,24764
	ctx.r31.s64 = ctx.r11.s64 + 24764;
	// lwz r11,-19404(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19404);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82652e30
	if (!ctx.cr0.eq) goto loc_82652E30;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,23928
	ctx.r9.s64 = ctx.r9.s64 + 23928;
	// stw r11,-19404(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19404, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,25944
	ctx.r3.s64 = ctx.r11.s64 + 25944;
	// bl 0x82a4c758
	ctx.lr = 0x82652E30;
	sub_82A4C758(ctx, base);
loc_82652E30:
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

__attribute__((alias("__imp__sub_82652E48"))) PPC_WEAK_FUNC(sub_82652E48);
PPC_FUNC_IMPL(__imp__sub_82652E48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,24760(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24760);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82652e88
	if (!ctx.cr0.eq) goto loc_82652E88;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// stw r11,24760(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24760, ctx.r11.u32);
	// addi r3,r9,23804
	ctx.r3.s64 = ctx.r9.s64 + 23804;
	// bl 0x82816528
	ctx.lr = 0x82652E80;
	sub_82816528(ctx, base);
	// stw r3,24756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24756, ctx.r3.u32);
	// b 0x82652e8c
	goto loc_82652E8C;
loc_82652E88:
	// lwz r3,24756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24756);
loc_82652E8C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82652EA0"))) PPC_WEAK_FUNC(sub_82652EA0);
PPC_FUNC_IMPL(__imp__sub_82652EA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82652de8
	ctx.lr = 0x82652EC0;
	sub_82652DE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82652ED4;
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

__attribute__((alias("__imp__sub_82652EF0"))) PPC_WEAK_FUNC(sub_82652EF0);
PPC_FUNC_IMPL(__imp__sub_82652EF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82652f28
	if (ctx.cr6.eq) goto loc_82652F28;
	// bl 0x82652de8
	ctx.lr = 0x82652F18;
	sub_82652DE8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82652f28
	if (!ctx.cr6.eq) goto loc_82652F28;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82652f34
	goto loc_82652F34;
loc_82652F28:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333c70
	ctx.lr = 0x82652F34;
	sub_82333C70(ctx, base);
loc_82652F34:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82652F50"))) PPC_WEAK_FUNC(sub_82652F50);
PPC_FUNC_IMPL(__imp__sub_82652F50) {
	PPC_FUNC_PROLOGUE();
	// b 0x82652de8
	sub_82652DE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82652F58"))) PPC_WEAK_FUNC(sub_82652F58);
PPC_FUNC_IMPL(__imp__sub_82652F58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x82652F74;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82652fd4
	if (ctx.cr0.eq) goto loc_82652FD4;
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
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r9,r9,23848
	ctx.r9.s64 = ctx.r9.s64 + 23848;
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
	// b 0x82652fd8
	goto loc_82652FD8;
loc_82652FD4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82652FD8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82652FF0"))) PPC_WEAK_FUNC(sub_82652FF0);
PPC_FUNC_IMPL(__imp__sub_82652FF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r11,23804
	ctx.r3.s64 = ctx.r11.s64 + 23804;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82653000"))) PPC_WEAK_FUNC(sub_82653000);
PPC_FUNC_IMPL(__imp__sub_82653000) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f4
	ctx.lr = 0x82653008;
	__savegprlr_23(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r5,r10,21896
	ctx.r5.s64 = ctx.r10.s64 + 21896;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bl 0x82650eb0
	ctx.lr = 0x82653058;
	sub_82650EB0(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r5,r11,21748
	ctx.r5.s64 = ctx.r11.s64 + 21748;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82650eb0
	ctx.lr = 0x8265306C;
	sub_82650EB0(ctx, base);
	// lwz r23,96(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// ble cr6,0x826531bc
	if (!ctx.cr6.gt) goto loc_826531BC;
	// lwz r25,124(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lis r27,-31949
	ctx.r27.s64 = -2093809664;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// subf r24,r25,r11
	ctx.r24.s64 = ctx.r11.s64 - ctx.r25.s64;
loc_82653090:
	// lwzx r3,r24,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r29.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826530A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826530c8
	if (ctx.cr0.eq) goto loc_826530C8;
	// lwzx r3,r24,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r29.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826530C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x826530cc
	goto loc_826530CC;
loc_826530C8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_826530CC:
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x826530D8;
	sub_829B9720(ctx, base);
	// bl 0x82333a20
	ctx.lr = 0x826530DC;
	sub_82333A20(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x826531ac
	if (ctx.cr0.eq) goto loc_826531AC;
	// lwz r11,152(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 152);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82653130
	if (ctx.cr6.eq) goto loc_82653130;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824defd8
	ctx.lr = 0x826530F8;
	sub_824DEFD8(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82653110
	if (ctx.cr0.eq) goto loc_82653110;
	// lwz r10,80(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// b 0x82653114
	goto loc_82653114;
loc_82653110:
	// stw r31,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r31.u32);
loc_82653114:
	// lwz r11,56(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// oris r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 2147483648;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// bne cr6,0x826531bc
	if (!ctx.cr6.eq) goto loc_826531BC;
	// b 0x826531ac
	goto loc_826531AC;
loc_82653130:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82653144;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82653168
	if (ctx.cr0.eq) goto loc_82653168;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82653160;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8265316c
	goto loc_8265316C;
loc_82653168:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_8265316C:
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82653178;
	sub_829B9720(ctx, base);
	// bl 0x824a0990
	ctx.lr = 0x8265317C;
	sub_824A0990(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826531ac
	if (ctx.cr0.eq) goto loc_826531AC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,1008(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1008);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265319C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,56(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// oris r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 2147483648;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
loc_826531AC:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r26,r23
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x82653090
	if (ctx.cr6.lt) goto loc_82653090;
loc_826531BC:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8239d768
	ctx.lr = 0x826531C4;
	sub_8239D768(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8239d768
	ctx.lr = 0x826531CC;
	sub_8239D768(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82a4ea44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826531D8"))) PPC_WEAK_FUNC(sub_826531D8);
PPC_FUNC_IMPL(__imp__sub_826531D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lwz r3,1316(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1316);
	// bl 0x82409be0
	ctx.lr = 0x826531FC;
	sub_82409BE0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8265320c
	if (ctx.cr0.eq) goto loc_8265320C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,7684(r3)
	PPC_STORE_U32(ctx.r3.u32 + 7684, ctx.r11.u32);
loc_8265320C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828e8418
	ctx.lr = 0x82653214;
	sub_828E8418(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82653228"))) PPC_WEAK_FUNC(sub_82653228);
PPC_FUNC_IMPL(__imp__sub_82653228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f4
	ctx.lr = 0x82653230;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r24,-31949
	ctx.r24.s64 = -2093809664;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// lwz r11,13024(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13024);
	// lwz r31,72(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82653380
	if (ctx.cr6.eq) goto loc_82653380;
	// lwz r26,84(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
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
	ctx.lr = 0x82653270;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8265328c
	if (!ctx.cr6.gt) goto loc_8265328C;
	// lwz r11,84(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 84);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,84(r27)
	PPC_STORE_U32(ctx.r27.u32 + 84, ctx.r11.u32);
	// b 0x82653360
	goto loc_82653360;
loc_8265328C:
	// lwz r11,68(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8265332c
	if (!ctx.cr6.eq) goto loc_8265332C;
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
	ctx.lr = 0x826532B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,964(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 964);
	// addi r29,r26,948
	ctx.r29.s64 = ctx.r26.s64 + 948;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8265330c
	if (!ctx.cr6.gt) goto loc_8265330C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_826532C8:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x826532f8
	if (!ctx.cr6.eq) goto loc_826532F8;
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
	ctx.lr = 0x826532F0;
	sub_82332CA8(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
loc_826532F8:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826532c8
	if (ctx.cr6.lt) goto loc_826532C8;
loc_8265330C:
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
	ctx.lr = 0x8265332C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8265332C:
	// lwz r11,84(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82653360
	if (!ctx.cr0.eq) goto loc_82653360;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265334C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82653360
	if (ctx.cr0.eq) goto loc_82653360;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r26,924
	ctx.r3.s64 = ctx.r26.s64 + 924;
	// bl 0x82410060
	ctx.lr = 0x82653360;
	sub_82410060(ctx, base);
loc_82653360:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82653374;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,13024(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13024);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
loc_82653380:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x828e88f0
	ctx.lr = 0x82653388;
	sub_828E88F0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82653390"))) PPC_WEAK_FUNC(sub_82653390);
PPC_FUNC_IMPL(__imp__sub_82653390) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f4
	ctx.lr = 0x82653398;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r24,-31949
	ctx.r24.s64 = -2093809664;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// lwz r11,13024(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13024);
	// lwz r31,72(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826534e8
	if (ctx.cr6.eq) goto loc_826534E8;
	// lwz r26,84(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
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
	ctx.lr = 0x826533D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826533f4
	if (!ctx.cr6.gt) goto loc_826533F4;
	// lwz r11,84(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 84);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,84(r27)
	PPC_STORE_U32(ctx.r27.u32 + 84, ctx.r11.u32);
	// b 0x826534c8
	goto loc_826534C8;
loc_826533F4:
	// lwz r11,68(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82653494
	if (!ctx.cr6.eq) goto loc_82653494;
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
	ctx.lr = 0x82653418;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,964(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 964);
	// addi r29,r26,948
	ctx.r29.s64 = ctx.r26.s64 + 948;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82653474
	if (!ctx.cr6.gt) goto loc_82653474;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82653430:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x82653460
	if (!ctx.cr6.eq) goto loc_82653460;
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
	ctx.lr = 0x82653458;
	sub_82332CA8(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
loc_82653460:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82653430
	if (ctx.cr6.lt) goto loc_82653430;
loc_82653474:
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
	ctx.lr = 0x82653494;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82653494:
	// lwz r11,84(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826534c8
	if (!ctx.cr0.eq) goto loc_826534C8;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826534B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826534c8
	if (ctx.cr0.eq) goto loc_826534C8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r26,924
	ctx.r3.s64 = ctx.r26.s64 + 924;
	// bl 0x82410060
	ctx.lr = 0x826534C8;
	sub_82410060(ctx, base);
loc_826534C8:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826534DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,13024(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13024);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
loc_826534E8:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x828e93f0
	ctx.lr = 0x826534F0;
	sub_828E93F0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826534F8"))) PPC_WEAK_FUNC(sub_826534F8);
PPC_FUNC_IMPL(__imp__sub_826534F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f4
	ctx.lr = 0x82653500;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r24,-31949
	ctx.r24.s64 = -2093809664;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// lwz r11,13024(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13024);
	// lwz r31,72(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82653650
	if (ctx.cr6.eq) goto loc_82653650;
	// lwz r26,84(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
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
	ctx.lr = 0x82653540;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8265355c
	if (!ctx.cr6.gt) goto loc_8265355C;
	// lwz r11,84(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 84);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,84(r27)
	PPC_STORE_U32(ctx.r27.u32 + 84, ctx.r11.u32);
	// b 0x82653630
	goto loc_82653630;
loc_8265355C:
	// lwz r11,68(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826535fc
	if (!ctx.cr6.eq) goto loc_826535FC;
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
	ctx.lr = 0x82653580;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,964(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 964);
	// addi r29,r26,948
	ctx.r29.s64 = ctx.r26.s64 + 948;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826535dc
	if (!ctx.cr6.gt) goto loc_826535DC;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82653598:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x826535c8
	if (!ctx.cr6.eq) goto loc_826535C8;
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
	ctx.lr = 0x826535C0;
	sub_82332CA8(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
loc_826535C8:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82653598
	if (ctx.cr6.lt) goto loc_82653598;
loc_826535DC:
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
	ctx.lr = 0x826535FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826535FC:
	// lwz r11,84(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82653630
	if (!ctx.cr0.eq) goto loc_82653630;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265361C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82653630
	if (ctx.cr0.eq) goto loc_82653630;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r26,924
	ctx.r3.s64 = ctx.r26.s64 + 924;
	// bl 0x82410060
	ctx.lr = 0x82653630;
	sub_82410060(ctx, base);
loc_82653630:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82653644;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,13024(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13024);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
loc_82653650:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x828e90a0
	ctx.lr = 0x82653658;
	sub_828E90A0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82653660"))) PPC_WEAK_FUNC(sub_82653660);
PPC_FUNC_IMPL(__imp__sub_82653660) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f0
	ctx.lr = 0x82653668;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r24,-31949
	ctx.r24.s64 = -2093809664;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// lwz r11,13024(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13024);
	// lwz r31,72(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826537bc
	if (ctx.cr6.eq) goto loc_826537BC;
	// lwz r26,84(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
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
	ctx.lr = 0x826536AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826536c8
	if (!ctx.cr6.gt) goto loc_826536C8;
	// lwz r11,84(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 84);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,84(r27)
	PPC_STORE_U32(ctx.r27.u32 + 84, ctx.r11.u32);
	// b 0x8265379c
	goto loc_8265379C;
loc_826536C8:
	// lwz r11,68(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82653768
	if (!ctx.cr6.eq) goto loc_82653768;
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
	ctx.lr = 0x826536EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,964(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 964);
	// addi r29,r26,948
	ctx.r29.s64 = ctx.r26.s64 + 948;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82653748
	if (!ctx.cr6.gt) goto loc_82653748;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82653704:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x82653734
	if (!ctx.cr6.eq) goto loc_82653734;
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
	ctx.lr = 0x8265372C;
	sub_82332CA8(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
loc_82653734:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82653704
	if (ctx.cr6.lt) goto loc_82653704;
loc_82653748:
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
	ctx.lr = 0x82653768;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82653768:
	// lwz r11,84(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8265379c
	if (!ctx.cr0.eq) goto loc_8265379C;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82653788;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8265379c
	if (ctx.cr0.eq) goto loc_8265379C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r26,924
	ctx.r3.s64 = ctx.r26.s64 + 924;
	// bl 0x82410060
	ctx.lr = 0x8265379C;
	sub_82410060(ctx, base);
loc_8265379C:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826537B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,13024(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13024);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
loc_826537BC:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x828e87d8
	ctx.lr = 0x826537C8;
	sub_828E87D8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826537D0"))) PPC_WEAK_FUNC(sub_826537D0);
PPC_FUNC_IMPL(__imp__sub_826537D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x826537D8;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x828e8878
	ctx.lr = 0x826537E0;
	sub_828E8878(ctx, base);
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r11,788(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82653800
	if (ctx.cr6.eq) goto loc_82653800;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82653874
	if (!ctx.cr6.eq) goto loc_82653874;
loc_82653800:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// addi r28,r1,112
	ctx.r28.s64 = ctx.r1.s64 + 112;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// addi r3,r10,23948
	ctx.r3.s64 = ctx.r10.s64 + 23948;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r27,r1,128
	ctx.r27.s64 = ctx.r1.s64 + 128;
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x82653838;
	sub_82816528(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
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
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x828250b0
	ctx.lr = 0x82653874;
	sub_828250B0(ctx, base);
loc_82653874:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82653880"))) PPC_WEAK_FUNC(sub_82653880);
PPC_FUNC_IMPL(__imp__sub_82653880) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826538d0
	ctx.lr = 0x826538A0;
	sub_826538D0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826538b0
	if (ctx.cr0.eq) goto loc_826538B0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x826538B0;
	sub_82332DB8(ctx, base);
loc_826538B0:
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

__attribute__((alias("__imp__sub_826538D0"))) PPC_WEAK_FUNC(sub_826538D0);
PPC_FUNC_IMPL(__imp__sub_826538D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r11,r11,23976
	ctx.r11.s64 = ctx.r11.s64 + 23976;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// bl 0x82332db8
	ctx.lr = 0x826538F8;
	sub_82332DB8(ctx, base);
	// lwz r3,232(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// bl 0x82332db8
	ctx.lr = 0x82653900;
	sub_82332DB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828e8348
	ctx.lr = 0x82653908;
	sub_828E8348(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82653920"))) PPC_WEAK_FUNC(sub_82653920);
PPC_FUNC_IMPL(__imp__sub_82653920) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,172(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82653928"))) PPC_WEAK_FUNC(sub_82653928);
PPC_FUNC_IMPL(__imp__sub_82653928) {
	PPC_FUNC_PROLOGUE();
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x82333900
	sub_82333900(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82653930"))) PPC_WEAK_FUNC(sub_82653930);
PPC_FUNC_IMPL(__imp__sub_82653930) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,232(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 232);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82653938"))) PPC_WEAK_FUNC(sub_82653938);
PPC_FUNC_IMPL(__imp__sub_82653938) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82653940;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82653a0c
	if (ctx.cr6.eq) goto loc_82653A0C;
	// lwz r11,160(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 160);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82653998
	if (ctx.cr6.eq) goto loc_82653998;
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// lwz r9,348(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 348);
	// lis r4,8192
	ctx.r4.s64 = 536870912;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,8
	ctx.r5.s64 = 8;
	// ori r4,r4,7
	ctx.r4.u64 = ctx.r4.u64 | 7;
	// lwz r3,17296(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17296);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwa r11,348(r28)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r28.u32 + 348));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x82a46230
	ctx.lr = 0x82653994;
	sub_82A46230(ctx, base);
	// b 0x82653a0c
	goto loc_82653A0C;
loc_82653998:
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82653a0c
	if (!ctx.cr6.gt) goto loc_82653A0C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_826539AC:
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// bl 0x82414568
	ctx.lr = 0x826539C0;
	sub_82414568(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82419458
	ctx.lr = 0x826539C8;
	sub_82419458(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x826539D4;
	sub_82333960(ctx, base);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x826539f4
	if (!ctx.cr6.eq) goto loc_826539F4;
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,88
	ctx.r30.s64 = ctx.r30.s64 + 88;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826539ac
	if (ctx.cr6.lt) goto loc_826539AC;
	// b 0x82653a0c
	goto loc_82653A0C;
loc_826539F4:
	// lwz r10,148(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// mulli r11,r29,88
	ctx.r11.s64 = ctx.r29.s64 * 88;
	// lwz r9,348(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 348);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_82653A0C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82333960
	ctx.lr = 0x82653A14;
	sub_82333960(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82653A20"))) PPC_WEAK_FUNC(sub_82653A20);
PPC_FUNC_IMPL(__imp__sub_82653A20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,1316(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1316);
	// b 0x824ac680
	sub_824AC680(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82653A30"))) PPC_WEAK_FUNC(sub_82653A30);
PPC_FUNC_IMPL(__imp__sub_82653A30) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// li r3,13
	ctx.r3.s64 = 13;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x82653bb4
	if (!ctx.cr6.eq) goto loc_82653BB4;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// bne cr6,0x82653aac
	if (!ctx.cr6.eq) goto loc_82653AAC;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x82653a7c
	if (!ctx.cr6.eq) goto loc_82653A7C;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// mulli r6,r4,10
	ctx.r6.s64 = ctx.r4.s64 * 10;
	// lwz r5,13024(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13024);
	// lwz r4,548(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 548);
	// li r5,31
	ctx.r5.s64 = 31;
	// b 0x82653e50
	goto loc_82653E50;
loc_82653A7C:
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// bne cr6,0x82653a9c
	if (!ctx.cr6.eq) goto loc_82653A9C;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mulli r10,r4,10
	ctx.r10.s64 = ctx.r4.s64 * 10;
	// lwz r31,56(r8)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 56);
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// li r4,31
	ctx.r4.s64 = 31;
	// b 0x82653eb8
	goto loc_82653EB8;
loc_82653A9C:
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bne cr6,0x82653ed0
	if (!ctx.cr6.eq) goto loc_82653ED0;
	// li r5,31
	ctx.r5.s64 = 31;
	// b 0x82653ea4
	goto loc_82653EA4;
loc_82653AAC:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82653b04
	if (!ctx.cr6.eq) goto loc_82653B04;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x82653ad4
	if (!ctx.cr6.eq) goto loc_82653AD4;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// mulli r6,r4,10
	ctx.r6.s64 = ctx.r4.s64 * 10;
	// lwz r5,13024(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13024);
	// lwz r4,548(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 548);
	// li r5,29
	ctx.r5.s64 = 29;
	// b 0x82653e50
	goto loc_82653E50;
loc_82653AD4:
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// bne cr6,0x82653af4
	if (!ctx.cr6.eq) goto loc_82653AF4;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mulli r10,r4,10
	ctx.r10.s64 = ctx.r4.s64 * 10;
	// lwz r31,56(r8)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 56);
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// li r4,29
	ctx.r4.s64 = 29;
	// b 0x82653eb8
	goto loc_82653EB8;
loc_82653AF4:
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bne cr6,0x82653ed0
	if (!ctx.cr6.eq) goto loc_82653ED0;
	// li r5,29
	ctx.r5.s64 = 29;
	// b 0x82653ea4
	goto loc_82653EA4;
loc_82653B04:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bne cr6,0x82653b5c
	if (!ctx.cr6.eq) goto loc_82653B5C;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x82653b2c
	if (!ctx.cr6.eq) goto loc_82653B2C;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// mulli r6,r4,10
	ctx.r6.s64 = ctx.r4.s64 * 10;
	// lwz r5,13024(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13024);
	// lwz r4,548(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 548);
	// li r5,35
	ctx.r5.s64 = 35;
	// b 0x82653e50
	goto loc_82653E50;
loc_82653B2C:
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// bne cr6,0x82653b4c
	if (!ctx.cr6.eq) goto loc_82653B4C;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mulli r10,r4,10
	ctx.r10.s64 = ctx.r4.s64 * 10;
	// lwz r31,56(r8)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 56);
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// li r4,35
	ctx.r4.s64 = 35;
	// b 0x82653eb8
	goto loc_82653EB8;
loc_82653B4C:
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bne cr6,0x82653ed0
	if (!ctx.cr6.eq) goto loc_82653ED0;
	// li r5,35
	ctx.r5.s64 = 35;
	// b 0x82653ea4
	goto loc_82653EA4;
loc_82653B5C:
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// bne cr6,0x82653ed0
	if (!ctx.cr6.eq) goto loc_82653ED0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x82653b84
	if (!ctx.cr6.eq) goto loc_82653B84;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// mulli r6,r4,10
	ctx.r6.s64 = ctx.r4.s64 * 10;
	// lwz r5,13024(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13024);
	// lwz r4,548(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 548);
	// li r5,33
	ctx.r5.s64 = 33;
	// b 0x82653e50
	goto loc_82653E50;
loc_82653B84:
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// bne cr6,0x82653ba4
	if (!ctx.cr6.eq) goto loc_82653BA4;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mulli r10,r4,10
	ctx.r10.s64 = ctx.r4.s64 * 10;
	// lwz r31,56(r8)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 56);
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// li r4,33
	ctx.r4.s64 = 33;
	// b 0x82653eb8
	goto loc_82653EB8;
loc_82653BA4:
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bne cr6,0x82653ed0
	if (!ctx.cr6.eq) goto loc_82653ED0;
	// li r5,33
	ctx.r5.s64 = 33;
	// b 0x82653ea4
	goto loc_82653EA4;
loc_82653BB4:
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// bne cr6,0x82653d1c
	if (!ctx.cr6.eq) goto loc_82653D1C;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// bne cr6,0x82653c14
	if (!ctx.cr6.eq) goto loc_82653C14;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x82653be4
	if (!ctx.cr6.eq) goto loc_82653BE4;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// mulli r6,r4,10
	ctx.r6.s64 = ctx.r4.s64 * 10;
	// lwz r5,13024(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13024);
	// lwz r4,548(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 548);
	// li r5,30
	ctx.r5.s64 = 30;
	// b 0x82653e50
	goto loc_82653E50;
loc_82653BE4:
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// bne cr6,0x82653c04
	if (!ctx.cr6.eq) goto loc_82653C04;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mulli r10,r4,10
	ctx.r10.s64 = ctx.r4.s64 * 10;
	// lwz r31,56(r8)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 56);
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// li r4,30
	ctx.r4.s64 = 30;
	// b 0x82653eb8
	goto loc_82653EB8;
loc_82653C04:
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bne cr6,0x82653ed0
	if (!ctx.cr6.eq) goto loc_82653ED0;
	// li r5,30
	ctx.r5.s64 = 30;
	// b 0x82653ea4
	goto loc_82653EA4;
loc_82653C14:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82653c6c
	if (!ctx.cr6.eq) goto loc_82653C6C;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x82653c3c
	if (!ctx.cr6.eq) goto loc_82653C3C;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// mulli r6,r4,10
	ctx.r6.s64 = ctx.r4.s64 * 10;
	// lwz r5,13024(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13024);
	// lwz r4,548(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 548);
	// li r5,28
	ctx.r5.s64 = 28;
	// b 0x82653e50
	goto loc_82653E50;
loc_82653C3C:
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// bne cr6,0x82653c5c
	if (!ctx.cr6.eq) goto loc_82653C5C;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mulli r10,r4,10
	ctx.r10.s64 = ctx.r4.s64 * 10;
	// lwz r31,56(r8)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 56);
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// li r4,28
	ctx.r4.s64 = 28;
	// b 0x82653eb8
	goto loc_82653EB8;
loc_82653C5C:
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bne cr6,0x82653ed0
	if (!ctx.cr6.eq) goto loc_82653ED0;
	// li r5,28
	ctx.r5.s64 = 28;
	// b 0x82653ea4
	goto loc_82653EA4;
loc_82653C6C:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bne cr6,0x82653cc4
	if (!ctx.cr6.eq) goto loc_82653CC4;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x82653c94
	if (!ctx.cr6.eq) goto loc_82653C94;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// mulli r6,r4,10
	ctx.r6.s64 = ctx.r4.s64 * 10;
	// lwz r5,13024(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13024);
	// lwz r4,548(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 548);
	// li r5,34
	ctx.r5.s64 = 34;
	// b 0x82653e50
	goto loc_82653E50;
loc_82653C94:
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// bne cr6,0x82653cb4
	if (!ctx.cr6.eq) goto loc_82653CB4;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mulli r10,r4,10
	ctx.r10.s64 = ctx.r4.s64 * 10;
	// lwz r31,56(r8)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 56);
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// li r4,34
	ctx.r4.s64 = 34;
	// b 0x82653eb8
	goto loc_82653EB8;
loc_82653CB4:
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bne cr6,0x82653ed0
	if (!ctx.cr6.eq) goto loc_82653ED0;
	// li r5,34
	ctx.r5.s64 = 34;
	// b 0x82653ea4
	goto loc_82653EA4;
loc_82653CC4:
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// bne cr6,0x82653ed0
	if (!ctx.cr6.eq) goto loc_82653ED0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x82653cec
	if (!ctx.cr6.eq) goto loc_82653CEC;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// mulli r6,r4,10
	ctx.r6.s64 = ctx.r4.s64 * 10;
	// lwz r5,13024(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13024);
	// lwz r4,548(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 548);
	// li r5,32
	ctx.r5.s64 = 32;
	// b 0x82653e50
	goto loc_82653E50;
loc_82653CEC:
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// bne cr6,0x82653d0c
	if (!ctx.cr6.eq) goto loc_82653D0C;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mulli r10,r4,10
	ctx.r10.s64 = ctx.r4.s64 * 10;
	// lwz r31,56(r8)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 56);
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// li r4,32
	ctx.r4.s64 = 32;
	// b 0x82653eb8
	goto loc_82653EB8;
loc_82653D0C:
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bne cr6,0x82653ed0
	if (!ctx.cr6.eq) goto loc_82653ED0;
	// li r5,32
	ctx.r5.s64 = 32;
	// b 0x82653ea4
	goto loc_82653EA4;
loc_82653D1C:
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// bne cr6,0x82653ed0
	if (!ctx.cr6.eq) goto loc_82653ED0;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// bne cr6,0x82653d7c
	if (!ctx.cr6.eq) goto loc_82653D7C;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x82653d4c
	if (!ctx.cr6.eq) goto loc_82653D4C;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// mulli r6,r4,10
	ctx.r6.s64 = ctx.r4.s64 * 10;
	// lwz r5,13024(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13024);
	// lwz r4,548(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 548);
	// li r5,26
	ctx.r5.s64 = 26;
	// b 0x82653e50
	goto loc_82653E50;
loc_82653D4C:
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// bne cr6,0x82653d6c
	if (!ctx.cr6.eq) goto loc_82653D6C;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mulli r10,r4,10
	ctx.r10.s64 = ctx.r4.s64 * 10;
	// lwz r31,56(r8)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 56);
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// li r4,26
	ctx.r4.s64 = 26;
	// b 0x82653eb8
	goto loc_82653EB8;
loc_82653D6C:
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bne cr6,0x82653ed0
	if (!ctx.cr6.eq) goto loc_82653ED0;
	// li r5,26
	ctx.r5.s64 = 26;
	// b 0x82653ea4
	goto loc_82653EA4;
loc_82653D7C:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82653dd4
	if (!ctx.cr6.eq) goto loc_82653DD4;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x82653da4
	if (!ctx.cr6.eq) goto loc_82653DA4;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// mulli r6,r4,10
	ctx.r6.s64 = ctx.r4.s64 * 10;
	// lwz r5,13024(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13024);
	// lwz r4,548(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 548);
	// li r5,4
	ctx.r5.s64 = 4;
	// b 0x82653e50
	goto loc_82653E50;
loc_82653DA4:
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// bne cr6,0x82653dc4
	if (!ctx.cr6.eq) goto loc_82653DC4;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mulli r10,r4,10
	ctx.r10.s64 = ctx.r4.s64 * 10;
	// lwz r31,56(r8)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 56);
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x82653eb8
	goto loc_82653EB8;
loc_82653DC4:
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bne cr6,0x82653ed0
	if (!ctx.cr6.eq) goto loc_82653ED0;
	// li r5,4
	ctx.r5.s64 = 4;
	// b 0x82653ea4
	goto loc_82653EA4;
loc_82653DD4:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bne cr6,0x82653e2c
	if (!ctx.cr6.eq) goto loc_82653E2C;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x82653dfc
	if (!ctx.cr6.eq) goto loc_82653DFC;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// mulli r6,r4,10
	ctx.r6.s64 = ctx.r4.s64 * 10;
	// lwz r5,13024(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13024);
	// lwz r4,548(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 548);
	// li r5,25
	ctx.r5.s64 = 25;
	// b 0x82653e50
	goto loc_82653E50;
loc_82653DFC:
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// bne cr6,0x82653e1c
	if (!ctx.cr6.eq) goto loc_82653E1C;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mulli r10,r4,10
	ctx.r10.s64 = ctx.r4.s64 * 10;
	// lwz r31,56(r8)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 56);
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// li r4,25
	ctx.r4.s64 = 25;
	// b 0x82653eb8
	goto loc_82653EB8;
loc_82653E1C:
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bne cr6,0x82653ed0
	if (!ctx.cr6.eq) goto loc_82653ED0;
	// li r5,25
	ctx.r5.s64 = 25;
	// b 0x82653ea4
	goto loc_82653EA4;
loc_82653E2C:
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// bne cr6,0x82653ed0
	if (!ctx.cr6.eq) goto loc_82653ED0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x82653e78
	if (!ctx.cr6.eq) goto loc_82653E78;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// mulli r6,r4,10
	ctx.r6.s64 = ctx.r4.s64 * 10;
	// lwz r5,13024(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13024);
	// lwz r4,548(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 548);
	// li r5,27
	ctx.r5.s64 = 27;
loc_82653E50:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// li r7,10
	ctx.r7.s64 = 10;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r31,60(r8)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 60);
	// li r8,0
	ctx.r8.s64 = 0;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82653E74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82653ed0
	goto loc_82653ED0;
loc_82653E78:
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// bne cr6,0x82653e98
	if (!ctx.cr6.eq) goto loc_82653E98;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mulli r10,r4,10
	ctx.r10.s64 = ctx.r4.s64 * 10;
	// lwz r31,56(r8)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 56);
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// li r4,27
	ctx.r4.s64 = 27;
	// b 0x82653eb8
	goto loc_82653EB8;
loc_82653E98:
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bne cr6,0x82653ed0
	if (!ctx.cr6.eq) goto loc_82653ED0;
	// li r5,27
	ctx.r5.s64 = 27;
loc_82653EA4:
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,13024(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13024);
	// lwz r31,64(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// lwz r4,548(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 548);
loc_82653EB8:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r6,10
	ctx.r6.s64 = 10;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82653ED0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82653ED0:
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

__attribute__((alias("__imp__sub_82653EE8"))) PPC_WEAK_FUNC(sub_82653EE8);
PPC_FUNC_IMPL(__imp__sub_82653EE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// lwz r10,524(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 524);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82653f14
	if (ctx.cr6.eq) goto loc_82653F14;
	// bl 0x828e9480
	ctx.lr = 0x82653F10;
	sub_828E9480(ctx, base);
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
loc_82653F14:
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,1408(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1408, ctx.r9.u32);
	// lwz r11,9736(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9736);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82653f34
	if (ctx.cr6.eq) goto loc_82653F34;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r10.u32);
loc_82653F34:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82653F48"))) PPC_WEAK_FUNC(sub_82653F48);
PPC_FUNC_IMPL(__imp__sub_82653F48) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,136
	ctx.r3.s64 = ctx.r3.s64 + 136;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82653F50"))) PPC_WEAK_FUNC(sub_82653F50);
PPC_FUNC_IMPL(__imp__sub_82653F50) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,128(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82653F58"))) PPC_WEAK_FUNC(sub_82653F58);
PPC_FUNC_IMPL(__imp__sub_82653F58) {
	PPC_FUNC_PROLOGUE();
	// stw r4,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82653F60"))) PPC_WEAK_FUNC(sub_82653F60);
PPC_FUNC_IMPL(__imp__sub_82653F60) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82653F68"))) PPC_WEAK_FUNC(sub_82653F68);
PPC_FUNC_IMPL(__imp__sub_82653F68) {
	PPC_FUNC_PROLOGUE();
	// stw r4,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82653F70"))) PPC_WEAK_FUNC(sub_82653F70);
PPC_FUNC_IMPL(__imp__sub_82653F70) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82653F78"))) PPC_WEAK_FUNC(sub_82653F78);
PPC_FUNC_IMPL(__imp__sub_82653F78) {
	PPC_FUNC_PROLOGUE();
	// stw r4,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82653F80"))) PPC_WEAK_FUNC(sub_82653F80);
PPC_FUNC_IMPL(__imp__sub_82653F80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,24388
	ctx.r11.s64 = ctx.r11.s64 + 24388;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x82653fac
	if (ctx.cr0.eq) goto loc_82653FAC;
	// bl 0x82332db8
	ctx.lr = 0x82653FAC;
	sub_82332DB8(ctx, base);
loc_82653FAC:
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

__attribute__((alias("__imp__sub_82653FC8"))) PPC_WEAK_FUNC(sub_82653FC8);
PPC_FUNC_IMPL(__imp__sub_82653FC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82653FD0;
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
	// lwz r3,22780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22780);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82653FF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,13
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 13, ctx.xer);
	// beq cr6,0x82654570
	if (ctx.cr6.eq) goto loc_82654570;
	// cmpwi cr6,r3,17
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 17, ctx.xer);
	// beq cr6,0x82654444
	if (ctx.cr6.eq) goto loc_82654444;
	// cmpwi cr6,r3,18
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 18, ctx.xer);
	// beq cr6,0x82654238
	if (ctx.cr6.eq) goto loc_82654238;
	// cmpwi cr6,r3,19
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 19, ctx.xer);
	// beq cr6,0x82654204
	if (ctx.cr6.eq) goto loc_82654204;
	// cmpwi cr6,r3,20
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 20, ctx.xer);
	// bne cr6,0x82654598
	if (!ctx.cr6.eq) goto loc_82654598;
	// lwz r3,22780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22780);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r11,19628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19628, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r28,19632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19632, ctx.r28.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82654040;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x828e0c18
	ctx.lr = 0x82654044;
	sub_828E0C18(ctx, base);
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// lwz r10,548(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 548);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x8265407c
	if (ctx.cr6.eq) goto loc_8265407C;
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// slw r8,r28,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r10.u8 & 0x3F));
	// lwz r9,10876(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 10876);
	// and r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ctx.r9.u64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x826540c0
	if (!ctx.cr6.eq) goto loc_826540C0;
loc_8265407C:
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,10548(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10548);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,212(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82654098;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// lwz r9,216(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 216);
loc_826540A0:
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f1,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// b 0x82654568
	goto loc_82654568;
loc_826540C0:
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x826540ec
	if (ctx.cr6.eq) goto loc_826540EC;
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// slw r8,r28,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r10.u8 & 0x3F));
	// lwz r10,10884(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 10884);
	// and r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ctx.r10.u64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82654170
	if (!ctx.cr6.eq) goto loc_82654170;
loc_826540EC:
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// lwz r3,184(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16276(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16276);
	// bl 0x828cef18
	ctx.lr = 0x82654100;
	sub_828CEF18(ctx, base);
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// lwz r3,10548(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 10548);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,212(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82654120;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r9,216(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 216);
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f31,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8265414C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,10548(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 10548);
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,212(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82654168;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,40
	ctx.r4.s64 = 40;
	// b 0x8265454c
	goto loc_8265454C;
loc_82654170:
	// lwz r10,912(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82654180
	if (ctx.cr6.eq) goto loc_82654180;
	// lwz r10,120(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 120);
loc_82654180:
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// lwz r3,184(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16276(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16276);
	// bl 0x828cef18
	ctx.lr = 0x82654194;
	sub_828CEF18(ctx, base);
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// lwz r3,10548(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 10548);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,212(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826541B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r9,216(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 216);
	// li r4,39
	ctx.r4.s64 = 39;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f31,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x826541E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,10548(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 10548);
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,212(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826541FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,38
	ctx.r4.s64 = 38;
	// b 0x8265454c
	goto loc_8265454C;
loc_82654204:
	// lwz r3,22780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22780);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82654218;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82654598
	if (!ctx.cr0.eq) goto loc_82654598;
	// li r11,10
	ctx.r11.s64 = 10;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,19632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19632, ctx.r11.u32);
	// stw r10,19628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19628, ctx.r10.u32);
	// bl 0x828e0c18
	ctx.lr = 0x82654234;
	sub_828E0C18(ctx, base);
	// b 0x82654580
	goto loc_82654580;
loc_82654238:
	// lwz r3,22780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22780);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r11,19628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19628, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r28,19632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19632, ctx.r28.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82654260;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r10,524(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 524);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82654298
	if (!ctx.cr6.eq) goto loc_82654298;
	// lwz r10,520(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 520);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82654298
	if (!ctx.cr6.eq) goto loc_82654298;
	// lwz r10,548(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 548);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82654298
	if (ctx.cr6.eq) goto loc_82654298;
	// lwz r11,528(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 528);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x826542e8
	if (!ctx.cr6.eq) goto loc_826542E8;
loc_82654298:
	// lwz r3,22780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22780);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826542AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,14
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 14, ctx.xer);
	// bne cr6,0x826542e8
	if (!ctx.cr6.eq) goto loc_826542E8;
	// lis r29,-31954
	ctx.r29.s64 = -2094137344;
	// lwz r3,9736(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 9736);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826542d0
	if (ctx.cr6.eq) goto loc_826542D0;
	// bl 0x82332db8
	ctx.lr = 0x826542C8;
	sub_82332DB8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,9736(r29)
	PPC_STORE_U32(ctx.r29.u32 + 9736, ctx.r11.u32);
loc_826542D0:
	// lwz r3,22780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22780);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826542E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826542E8:
	// bl 0x828e0c18
	ctx.lr = 0x826542EC;
	sub_828E0C18(ctx, base);
	// lwz r3,13024(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r11,788(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 788);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82654308
	if (!ctx.cr6.eq) goto loc_82654308;
	// lwz r11,432(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 432);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x82654338
	if (ctx.cr6.lt) goto loc_82654338;
loc_82654308:
	// lwz r11,548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 548);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82654338
	if (ctx.cr6.eq) goto loc_82654338;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// slw r9,r28,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r10,10876(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10876);
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82654360
	if (!ctx.cr6.eq) goto loc_82654360;
loc_82654338:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,10548(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,212(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82654354;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r9,216(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// b 0x826540a0
	goto loc_826540A0;
loc_82654360:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8265438c
	if (ctx.cr6.eq) goto loc_8265438C;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// slw r9,r28,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r11,10884(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10884);
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82654418
	if (!ctx.cr6.eq) goto loc_82654418;
loc_8265438C:
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lwz r3,184(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16276(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16276);
	// bl 0x828cef18
	ctx.lr = 0x826543A0;
	sub_828CEF18(ctx, base);
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r3,10548(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 10548);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,212(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826543C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r9,216(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f31,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x826543EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,10548(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 10548);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,212(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82654408;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r10,216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// li r4,40
	ctx.r4.s64 = 40;
	// b 0x82654554
	goto loc_82654554;
loc_82654418:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,212(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82654428;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823f7268
	ctx.lr = 0x82654430;
	sub_823F7268(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// b 0x82654590
	goto loc_82654590;
loc_82654444:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,22780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22780);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,19628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19628, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,19632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19632, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265446C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lwz r3,13024(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,212(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82654484;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x823f7268
	ctx.lr = 0x8265448C;
	sub_823F7268(ctx, base);
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
	ctx.lr = 0x826544A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne 0x826544b4
	if (!ctx.cr0.eq) goto loc_826544B4;
	// li r3,0
	ctx.r3.s64 = 0;
loc_826544B4:
	// li r4,18
	ctx.r4.s64 = 18;
	// bl 0x826eeb28
	ctx.lr = 0x826544BC;
	sub_826EEB28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82654598
	if (!ctx.cr0.eq) goto loc_82654598;
	// bl 0x828e0c18
	ctx.lr = 0x826544C8;
	sub_828E0C18(ctx, base);
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,184(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// lwz r5,16276(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16276);
	// bl 0x828cef18
	ctx.lr = 0x826544E0;
	sub_828CEF18(ctx, base);
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// lwz r3,10548(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 10548);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,212(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82654500;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r9,216(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 216);
	// li r4,39
	ctx.r4.s64 = 39;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f31,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8265452C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,10548(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 10548);
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,212(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82654548;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,37
	ctx.r4.s64 = 37;
loc_8265454C:
	// lwz r10,216(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 216);
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
loc_82654554:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82654568:
	// bctrl 
	ctx.lr = 0x8265456C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82654598
	goto loc_82654598;
loc_82654570:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,19628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19628, ctx.r11.u32);
	// stw r10,19632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19632, ctx.r10.u32);
loc_82654580:
	// lwz r3,22780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22780);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
loc_82654590:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82654598;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82654598:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826545A8"))) PPC_WEAK_FUNC(sub_826545A8);
PPC_FUNC_IMPL(__imp__sub_826545A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x826545B0;
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
	// lwz r11,22792(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22792);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82654628
	if (ctx.cr6.eq) goto loc_82654628;
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lwz r11,184(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// lwz r11,452(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82654628
	if (!ctx.cr6.eq) goto loc_82654628;
	// stw r29,22792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22792, ctx.r29.u32);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,-26156
	ctx.r3.s64 = ctx.r11.s64 + -26156;
	// bl 0x82816528
	ctx.lr = 0x826545FC;
	sub_82816528(ctx, base);
	// bl 0x828e0d10
	ctx.lr = 0x82654600;
	sub_828E0D10(ctx, base);
	// bl 0x82437e90
	ctx.lr = 0x82654604;
	sub_82437E90(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82654628
	if (ctx.cr0.eq) goto loc_82654628;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,-16060
	ctx.r4.s64 = ctx.r10.s64 + -16060;
	// lwz r11,1036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1036);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82654628;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82654628:
	// lwz r3,22780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22780);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82654640;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82653fc8
	ctx.lr = 0x82654648;
	sub_82653FC8(ctx, base);
	// lwz r11,19632(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19632);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 21, ctx.xer);
	// lfs f31,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// bgt cr6,0x82654f08
	if (ctx.cr6.gt) goto loc_82654F08;
	// lis r12,-32242
	ctx.r12.s64 = -2113011712;
	// addi r12,r12,-30256
	ctx.r12.s64 = ctx.r12.s64 + -30256;
	// rlwinm r0,r11,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32155
	ctx.r12.s64 = -2107310080;
	// addi r12,r12,18056
	ctx.r12.s64 = ctx.r12.s64 + 18056;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82654688;
	case 1:
		goto loc_82654F08;
	case 2:
		goto loc_82654F08;
	case 3:
		goto loc_82654F08;
	case 4:
		goto loc_826546E4;
	case 5:
		goto loc_826548A4;
	case 6:
		goto loc_8265494C;
	case 7:
		goto loc_82654A84;
	case 8:
		goto loc_82654C18;
	case 9:
		goto loc_82654DA8;
	case 10:
		goto loc_82654DF0;
	case 11:
		goto loc_82654F08;
	case 12:
		goto loc_82654F08;
	case 13:
		goto loc_82654F08;
	case 14:
		goto loc_82654F08;
	case 15:
		goto loc_826546CC;
	case 16:
		goto loc_82654F08;
	case 17:
		goto loc_82654F08;
	case 18:
		goto loc_82654EA0;
	case 19:
		goto loc_82654E88;
	case 20:
		goto loc_82654ED8;
	case 21:
		goto loc_82654EF0;
	default:
		__builtin_unreachable();
	}
loc_82654688:
	// lwz r3,22780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22780);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265469C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// beq cr6,0x826546bc
	if (ctx.cr6.eq) goto loc_826546BC;
	// lwz r3,22780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22780);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,188(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826546BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826546BC:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r29,19628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19628, ctx.r29.u32);
	// stw r29,19624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19624, ctx.r29.u32);
	// b 0x82654f04
	goto loc_82654F04;
loc_826546CC:
	// lwz r11,22776(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22776);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,22776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22776, ctx.r11.u32);
	// bne 0x82654f08
	if (!ctx.cr0.eq) goto loc_82654F08;
loc_826546DC:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82654f04
	goto loc_82654F04;
loc_826546E4:
	// lwz r3,22780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22780);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826546F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82654710
	if (!ctx.cr0.eq) goto loc_82654710;
loc_82654700:
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r29,19628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19628, ctx.r29.u32);
	// li r4,21
	ctx.r4.s64 = 21;
	// b 0x82654eb8
	goto loc_82654EB8;
loc_82654710:
	// lwz r3,22780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22780);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82654724;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82654f08
	if (ctx.cr0.eq) goto loc_82654F08;
	// lwz r3,22780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22780);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82654740;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82654844
	if (!ctx.cr0.eq) goto loc_82654844;
	// lwz r11,19628(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19628);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x826547a8
	if (ctx.cr6.eq) goto loc_826547A8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82654768
	if (ctx.cr6.eq) goto loc_82654768;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82654760:
	// stw r29,19628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19628, ctx.r29.u32);
	// b 0x82654f04
	goto loc_82654F04;
loc_82654768:
	// lwz r11,19608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19608);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r29,19628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19628, ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// ble cr6,0x8265479c
	if (!ctx.cr6.gt) goto loc_8265479C;
	// li r10,20
	ctx.r10.s64 = 20;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r10,19632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19632, ctx.r10.u32);
	// li r4,18
	ctx.r4.s64 = 18;
	// stw r9,22776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22776, ctx.r9.u32);
	// b 0x82654ec8
	goto loc_82654EC8;
loc_8265479C:
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,19632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19632, ctx.r10.u32);
	// b 0x82654884
	goto loc_82654884;
loc_826547A8:
	// lwz r11,19608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19608);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82654834
	if (!ctx.cr6.gt) goto loc_82654834;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lwz r11,16104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16104);
	// cmpwi cr6,r11,106
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 106, ctx.xer);
	// bne cr6,0x82654834
	if (!ctx.cr6.eq) goto loc_82654834;
	// lwz r3,13024(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// stw r29,19624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19624, ctx.r29.u32);
	// stw r29,19612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19612, ctx.r29.u32);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,212(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826547E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r10,216(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 216);
	// li r4,21
	ctx.r4.s64 = 21;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82654804;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,22780(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22780);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,284(r10)
	PPC_STORE_U32(ctx.r10.u32 + 284, ctx.r11.u32);
	// lwz r3,22780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22780);
	// lwz r4,19612(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19612);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82654828;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,19632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19632, ctx.r11.u32);
	// b 0x8265483c
	goto loc_8265483C;
loc_82654834:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82655fc8
	ctx.lr = 0x8265483C;
	sub_82655FC8(ctx, base);
loc_8265483C:
	// li r4,18
	ctx.r4.s64 = 18;
	// b 0x82654dd0
	goto loc_82654DD0;
loc_82654844:
	// lwz r3,22780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22780);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82654858;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,22780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22780);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r29,19628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19628, ctx.r29.u32);
	// stw r11,19632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19632, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82654878;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
loc_82654884:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,19
	ctx.r4.s64 = 19;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82654894;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,25
	ctx.r3.s64 = 25;
	// bl 0x826d1788
	ctx.lr = 0x826548A0;
	sub_826D1788(ctx, base);
	// b 0x82654f08
	goto loc_82654F08;
loc_826548A4:
	// lwz r3,22780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22780);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826548B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82654700
	if (ctx.cr0.eq) goto loc_82654700;
	// lwz r3,22780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22780);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826548D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82654f08
	if (ctx.cr0.eq) goto loc_82654F08;
	// lwz r3,22780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22780);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826548F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82654924
	if (!ctx.cr0.eq) goto loc_82654924;
	// lwz r11,19628(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19628);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82654944
	if (!ctx.cr6.eq) goto loc_82654944;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82654920;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82654944
	goto loc_82654944;
loc_82654924:
	// lwz r3,22780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22780);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82654938;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r29,19628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19628, ctx.r29.u32);
	// stw r11,19632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19632, ctx.r11.u32);
loc_82654944:
	// li r11,11
	ctx.r11.s64 = 11;
	// b 0x82654760
	goto loc_82654760;
loc_8265494C:
	// lwz r3,22780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22780);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82654960;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82654700
	if (ctx.cr0.eq) goto loc_82654700;
	// lwz r3,22780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22780);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265497C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82654a38
	if (ctx.cr0.eq) goto loc_82654A38;
	// lwz r3,22780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22780);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82654998;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826549e4
	if (!ctx.cr0.eq) goto loc_826549E4;
	// lwz r3,13024(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,212(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826549B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82438310
	ctx.lr = 0x826549B8;
	sub_82438310(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826549cc
	if (ctx.cr0.eq) goto loc_826549CC;
	// li r4,21
	ctx.r4.s64 = 21;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x826ee958
	ctx.lr = 0x826549CC;
	sub_826EE958(ctx, base);
loc_826549CC:
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// li r10,6
	ctx.r10.s64 = 6;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,432(r11)
	PPC_STORE_U32(ctx.r11.u32 + 432, ctx.r10.u32);
	// stw r9,19632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19632, ctx.r9.u32);
	// b 0x82654de8
	goto loc_82654DE8;
loc_826549E4:
	// lwz r11,19612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19612);
	// lwz r10,19608(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19608);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,19612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19612, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82654a78
	if (!ctx.cr6.lt) goto loc_82654A78;
	// lwz r11,19624(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19624);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82654a78
	if (!ctx.cr6.eq) goto loc_82654A78;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lwz r11,16104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16104);
	// cmpwi cr6,r11,106
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 106, ctx.xer);
	// bne cr6,0x82654a78
	if (!ctx.cr6.eq) goto loc_82654A78;
	// lwz r11,22780(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22780);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,284(r11)
	PPC_STORE_U32(ctx.r11.u32 + 284, ctx.r10.u32);
	// lwz r3,22780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22780);
	// lwz r4,19612(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19612);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// b 0x82654c0c
	goto loc_82654C0C;
loc_82654A38:
	// lwz r11,19624(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19624);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82654a54
	if (!ctx.cr6.eq) goto loc_82654A54;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lwz r11,16104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16104);
	// cmpwi cr6,r11,106
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 106, ctx.xer);
	// beq cr6,0x82654f08
	if (ctx.cr6.eq) goto loc_82654F08;
loc_82654A54:
	// lwz r3,22780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22780);
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82654A6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r11,10828(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10828, ctx.r11.u32);
loc_82654A78:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82655fc8
	ctx.lr = 0x82654A80;
	sub_82655FC8(ctx, base);
	// b 0x82654f08
	goto loc_82654F08;
loc_82654A84:
	// lwz r3,22780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22780);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82654A98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82654700
	if (ctx.cr0.eq) goto loc_82654700;
	// lwz r3,22780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22780);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82654AB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82654f08
	if (ctx.cr0.eq) goto loc_82654F08;
	// lwz r3,22780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22780);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82654AD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82654b4c
	if (!ctx.cr0.eq) goto loc_82654B4C;
	// lwz r3,22780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22780);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82654AEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82654b04
	if (!ctx.cr6.eq) goto loc_82654B04;
	// li r10,11
	ctx.r10.s64 = 11;
	// stw r29,19628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19628, ctx.r29.u32);
	// li r4,18
	ctx.r4.s64 = 18;
	// b 0x82654eb8
	goto loc_82654EB8;
loc_82654B04:
	// cmpwi cr6,r3,16
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 16, ctx.xer);
	// bne cr6,0x82654f08
	if (!ctx.cr6.eq) goto loc_82654F08;
	// stw r29,19628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19628, ctx.r29.u32);
loc_82654B10:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,19632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19632, ctx.r10.u32);
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82654B34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,22780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22780);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82654B48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82654f08
	goto loc_82654F08;
loc_82654B4C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,19632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19632, ctx.r10.u32);
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82654B70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,22780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22780);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82654B84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,12
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 12, ctx.xer);
	// bne cr6,0x82654ba8
	if (!ctx.cr6.eq) goto loc_82654BA8;
	// lwz r3,13024(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,212(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82654BA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,52
	ctx.r4.s64 = 52;
	// b 0x82654bdc
	goto loc_82654BDC;
loc_82654BA8:
	// lwz r3,22780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22780);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82654BBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// lwz r3,13024(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// bne cr6,0x82654c00
	if (!ctx.cr6.eq) goto loc_82654C00;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,212(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82654BD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,33
	ctx.r4.s64 = 33;
loc_82654BDC:
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r10,216(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 216);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82654BFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82654f08
	goto loc_82654F08;
loc_82654C00:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,272(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
loc_82654C0C:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82654C14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82654f08
	goto loc_82654F08;
loc_82654C18:
	// lwz r3,22780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22780);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82654C2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82654c3c
	if (!ctx.cr0.eq) goto loc_82654C3C;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82654760
	goto loc_82654760;
loc_82654C3C:
	// lwz r3,22780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22780);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82654C50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r3,22780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22780);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// beq 0x82654d68
	if (ctx.cr0.eq) goto loc_82654D68;
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82654C6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82654c9c
	if (!ctx.cr0.eq) goto loc_82654C9C;
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lwz r3,912(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82654C8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,16
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 16, ctx.xer);
	// stw r29,19628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19628, ctx.r29.u32);
	// bne cr6,0x826546dc
	if (!ctx.cr6.eq) goto loc_826546DC;
	// b 0x82654b10
	goto loc_82654B10;
loc_82654C9C:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r29,19628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19628, ctx.r29.u32);
	// stw r11,19632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19632, ctx.r11.u32);
	// bl 0x828e0c18
	ctx.lr = 0x82654CAC;
	sub_828E0C18(ctx, base);
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// li r10,5
	ctx.r10.s64 = 5;
	// lwz r9,912(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// stw r29,284(r9)
	PPC_STORE_U32(ctx.r9.u32 + 284, ctx.r29.u32);
	// stw r10,432(r11)
	PPC_STORE_U32(ctx.r11.u32 + 432, ctx.r10.u32);
	// lwz r3,22780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22780);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82654CD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82654cf8
	if (!ctx.cr6.eq) goto loc_82654CF8;
	// lwz r3,13024(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,212(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82654CF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,32
	ctx.r4.s64 = 32;
	// b 0x82654bdc
	goto loc_82654BDC;
loc_82654CF8:
	// lwz r3,22780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22780);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82654D0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,12
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 12, ctx.xer);
	// bne cr6,0x82654d30
	if (!ctx.cr6.eq) goto loc_82654D30;
	// lwz r3,13024(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,212(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82654D28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,53
	ctx.r4.s64 = 53;
	// b 0x82654bdc
	goto loc_82654BDC;
loc_82654D30:
	// lwz r3,22780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22780);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82654D44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 11, ctx.xer);
	// beq cr6,0x82654f08
	if (ctx.cr6.eq) goto loc_82654F08;
	// lwz r3,13024(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,212(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82654D60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,36
	ctx.r4.s64 = 36;
	// b 0x82654bdc
	goto loc_82654BDC;
loc_82654D68:
	// lwz r11,176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82654D74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82654f08
	if (!ctx.cr0.eq) goto loc_82654F08;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,10824(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10824);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82654f08
	if (!ctx.cr6.eq) goto loc_82654F08;
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lwz r11,912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// lwz r11,284(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 284);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82654f08
	if (ctx.cr6.eq) goto loc_82654F08;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82654f04
	goto loc_82654F04;
loc_82654DA8:
	// lwz r3,22780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22780);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82654DBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82654f08
	if (ctx.cr0.eq) goto loc_82654F08;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r4,22
	ctx.r4.s64 = 22;
	// stw r10,19632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19632, ctx.r10.u32);
loc_82654DD0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82654DE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82654DE8:
	// stw r29,19628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19628, ctx.r29.u32);
	// b 0x82654f08
	goto loc_82654F08;
loc_82654DF0:
	// lwz r3,22780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22780);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82654E04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82654e18
	if (!ctx.cr0.eq) goto loc_82654E18;
	// li r10,15
	ctx.r10.s64 = 15;
	// li r4,19
	ctx.r4.s64 = 19;
	// b 0x82654eb8
	goto loc_82654EB8;
loc_82654E18:
	// lwz r3,22780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22780);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82654E2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82654f08
	if (ctx.cr0.eq) goto loc_82654F08;
	// lwz r3,22780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22780);
	// li r30,18
	ctx.r30.s64 = 18;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82654E4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82654e58
	if (ctx.cr0.eq) goto loc_82654E58;
	// li r30,19
	ctx.r30.s64 = 19;
loc_82654E58:
	// lwz r3,22780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22780);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82654E6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// li r11,11
	ctx.r11.s64 = 11;
	// beq cr6,0x82654e7c
	if (ctx.cr6.eq) goto loc_82654E7C;
	// li r11,15
	ctx.r11.s64 = 15;
loc_82654E7C:
	// stw r11,19632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19632, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// b 0x82654ebc
	goto loc_82654EBC;
loc_82654E88:
	// lwz r11,22776(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22776);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,22776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22776, ctx.r11.u32);
	// bne 0x82654f08
	if (!ctx.cr0.eq) goto loc_82654F08;
	// li r4,24
	ctx.r4.s64 = 24;
	// b 0x82654eb4
	goto loc_82654EB4;
loc_82654EA0:
	// lwz r11,22776(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22776);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,22776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22776, ctx.r11.u32);
	// bne 0x82654f08
	if (!ctx.cr0.eq) goto loc_82654F08;
	// li r4,23
	ctx.r4.s64 = 23;
loc_82654EB4:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82654EB8:
	// stw r10,19632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19632, ctx.r10.u32);
loc_82654EBC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
loc_82654EC8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82654ED4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82654f08
	goto loc_82654F08;
loc_82654ED8:
	// lwz r11,22776(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22776);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,22776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22776, ctx.r11.u32);
	// bne 0x82654f08
	if (!ctx.cr0.eq) goto loc_82654F08;
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x82654f04
	goto loc_82654F04;
loc_82654EF0:
	// lwz r11,22776(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22776);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,22776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22776, ctx.r11.u32);
	// bne 0x82654f08
	if (!ctx.cr0.eq) goto loc_82654F08;
	// li r11,7
	ctx.r11.s64 = 7;
loc_82654F04:
	// stw r11,19632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19632, ctx.r11.u32);
loc_82654F08:
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lwz r11,788(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82654f28
	if (ctx.cr6.eq) goto loc_82654F28;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82654f28
	if (ctx.cr6.eq) goto loc_82654F28;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82654f58
	if (!ctx.cr6.eq) goto loc_82654F58;
loc_82654F28:
	// lwz r3,22780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22780);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,152(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82654F3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,16(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,22796(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22796);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x82654f58
	if (ctx.cr6.eq) goto loc_82654F58;
	// stw r4,22796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22796, ctx.r4.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826559a8
	ctx.lr = 0x82654F58;
	sub_826559A8(ctx, base);
loc_82654F58:
	// lwz r11,22784(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22784);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82654fd4
	if (!ctx.cr6.eq) goto loc_82654FD4;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x828e0ad0
	ctx.lr = 0x82654F70;
	sub_828E0AD0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82654fd4
	if (!ctx.cr0.eq) goto loc_82654FD4;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// addi r30,r11,-18444
	ctx.r30.s64 = ctx.r11.s64 + -18444;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82654fd4
	if (!ctx.cr6.gt) goto loc_82654FD4;
	// lwz r29,12(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x823339b8
	ctx.lr = 0x82654F9C;
	sub_823339B8(ctx, base);
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bl 0x82655e58
	ctx.lr = 0x82654FB0;
	sub_82655E58(ctx, base);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x82333960
	ctx.lr = 0x82654FB8;
	sub_82333960(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,28
	ctx.r6.s64 = 28;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82332ca8
	ctx.lr = 0x82654FD0;
	sub_82332CA8(ctx, base);
	// b 0x82654ff8
	goto loc_82654FF8;
loc_82654FD4:
	// lwz r11,22784(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22784);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82654ff8
	if (!ctx.cr6.eq) goto loc_82654FF8;
	// lfs f0,22788(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 22788);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 + ctx.f0.f64));
	// stfs f0,22788(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 22788, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x82654ff8
	if (ctx.cr6.lt) goto loc_82654FF8;
	// stw r29,22784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22784, ctx.r29.u32);
loc_82654FF8:
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

__attribute__((alias("__imp__sub_82655008"))) PPC_WEAK_FUNC(sub_82655008);
PPC_FUNC_IMPL(__imp__sub_82655008) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82655010;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-736(r1)
	ea = -736 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bgt cr6,0x82655720
	if (ctx.cr6.gt) goto loc_82655720;
	// lis r12,-32242
	ctx.r12.s64 = -2113011712;
	// addi r12,r12,-30432
	ctx.r12.s64 = ctx.r12.s64 + -30432;
	// rlwinm r0,r11,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32155
	ctx.r12.s64 = -2107310080;
	// addi r12,r12,20560
	ctx.r12.s64 = ctx.r12.s64 + 20560;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82655050;
	case 1:
		goto loc_82655068;
	case 2:
		goto loc_82655070;
	case 3:
		goto loc_8265508C;
	case 4:
		goto loc_8265517C;
	case 5:
		goto loc_826553C4;
	case 6:
		goto loc_826555F8;
	case 7:
		goto loc_826555AC;
	case 8:
		goto loc_82655720;
	case 9:
		goto loc_82655720;
	case 10:
		goto loc_82655720;
	case 11:
		goto loc_82655720;
	case 12:
		goto loc_82655720;
	case 13:
		goto loc_82655718;
	case 14:
		goto loc_82655628;
	case 15:
		goto loc_82655610;
	default:
		__builtin_unreachable();
	}
loc_82655050:
	// lwz r3,22780(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 22780);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82655068;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82655068:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x8265571c
	goto loc_8265571C;
loc_82655070:
	// lwz r3,22780(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 22780);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
loc_8265507C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82655080:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82655088;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82655720
	goto loc_82655720;
loc_8265508C:
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// lwz r3,13024(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r11,548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 548);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x826550c8
	if (ctx.cr6.eq) goto loc_826550C8;
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r8,r10,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r11,10884(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 10884);
	// and r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 & ctx.r11.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82655108
	if (!ctx.cr6.eq) goto loc_82655108;
loc_826550C8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// lwz r11,212(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826550DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r9,216(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// li r4,1001
	ctx.r4.s64 = 1001;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f1,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82655100:
	// bctrl 
	ctx.lr = 0x82655104;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82655720
	goto loc_82655720;
loc_82655108:
	// lwz r11,19628(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19628);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82655118
	if (!ctx.cr6.eq) goto loc_82655118;
	// stw r10,19628(r29)
	PPC_STORE_U32(ctx.r29.u32 + 19628, ctx.r10.u32);
loc_82655118:
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,19632(r29)
	PPC_STORE_U32(ctx.r29.u32 + 19632, ctx.r11.u32);
	// lwz r3,1316(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1316);
	// bl 0x82409be0
	ctx.lr = 0x82655128;
	sub_82409BE0(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x82655720
	if (ctx.cr0.eq) goto loc_82655720;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,480
	ctx.r5.s64 = ctx.r1.s64 + 480;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82655d70
	ctx.lr = 0x8265514C;
	sub_82655D70(ctx, base);
	// addi r6,r1,480
	ctx.r6.s64 = ctx.r1.s64 + 480;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82655158:
	// lwz r3,22780(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 22780);
	// li r7,50
	ctx.r7.s64 = 50;
	// addi r8,r29,8
	ctx.r8.s64 = ctx.r29.s64 + 8;
	// addi r9,r29,19608
	ctx.r9.s64 = ctx.r29.s64 + 19608;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82655178;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82655720
	goto loc_82655720;
loc_8265517C:
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lwz r3,13024(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// lwz r11,548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 548);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x826551b8
	if (ctx.cr6.eq) goto loc_826551B8;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// li r9,1
	ctx.r9.s64 = 1;
	// slw r9,r9,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r11,10884(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10884);
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82655230
	if (!ctx.cr6.eq) goto loc_82655230;
loc_826551B8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// lwz r11,212(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826551CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r9,216(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 216);
	// li r4,1004
	ctx.r4.s64 = 1004;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f31,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x826551F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,13024(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,212(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265520C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// lwz r10,216(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 216);
loc_82655214:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r4,1001
	ctx.r4.s64 = 1001;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// b 0x82655100
	goto loc_82655100;
loc_82655230:
	// lwz r11,19628(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19628);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82655244
	if (!ctx.cr6.eq) goto loc_82655244;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,19628(r29)
	PPC_STORE_U32(ctx.r29.u32 + 19628, ctx.r11.u32);
loc_82655244:
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,19632(r29)
	PPC_STORE_U32(ctx.r29.u32 + 19632, ctx.r11.u32);
	// lwz r3,1316(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1316);
	// bl 0x82409be0
	ctx.lr = 0x82655254;
	sub_82409BE0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82655720
	if (ctx.cr0.eq) goto loc_82655720;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r11,16104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16104);
	// cmpwi cr6,r11,116
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 116, ctx.xer);
	// beq cr6,0x82655324
	if (ctx.cr6.eq) goto loc_82655324;
	// li r7,5
	ctx.r7.s64 = 5;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82655a50
	ctx.lr = 0x8265528C;
	sub_82655A50(ctx, base);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r5,788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 788, ctx.r5.u32);
	// ble cr6,0x826553b8
	if (!ctx.cr6.gt) goto loc_826553B8;
	// li r10,0
	ctx.r10.s64 = 0;
loc_826552A4:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lwz r9,796(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 796);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r7,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,796(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 796);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r7,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r7.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// beq cr6,0x826552e4
	if (ctx.cr6.eq) goto loc_826552E4;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x826552f0
	if (!ctx.cr6.eq) goto loc_826552F0;
loc_826552E4:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x826552fc
	goto loc_826552FC;
loc_826552F0:
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bne cr6,0x826552fc
	if (!ctx.cr6.eq) goto loc_826552FC;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
loc_826552FC:
	// lwz r11,796(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 796);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r11,788(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 788);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826552a4
	if (ctx.cr6.lt) goto loc_826552A4;
	// b 0x826553b8
	goto loc_826553B8;
loc_82655324:
	// lwz r11,788(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 788);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826553b4
	if (!ctx.cr6.gt) goto loc_826553B4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82655338:
	// lwz r8,796(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 796);
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// stw r10,-4(r9)
	PPC_STORE_U32(ctx.r9.u32 + -4, ctx.r10.u32);
	// lwz r10,796(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 796);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r10,796(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 796);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ld r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// beq cr6,0x82655380
	if (ctx.cr6.eq) goto loc_82655380;
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x8265538c
	if (!ctx.cr6.eq) goto loc_8265538C;
loc_82655380:
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// b 0x82655398
	goto loc_82655398;
loc_8265538C:
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// bne cr6,0x82655398
	if (!ctx.cr6.eq) goto loc_82655398;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
loc_82655398:
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// std r10,4(r9)
	PPC_STORE_U64(ctx.r9.u32 + 4, ctx.r10.u64);
	// lwz r10,788(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 788);
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82655338
	if (ctx.cr6.lt) goto loc_82655338;
loc_826553B4:
	// lwz r5,788(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 788);
loc_826553B8:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82655158
	goto loc_82655158;
loc_826553C4:
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// lwz r3,13024(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r11,548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 548);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82655400
	if (ctx.cr6.eq) goto loc_82655400;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// li r9,1
	ctx.r9.s64 = 1;
	// slw r9,r9,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r11,10884(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10884);
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82655460
	if (!ctx.cr6.eq) goto loc_82655460;
loc_82655400:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// lwz r11,212(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82655414;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r9,216(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// li r4,1004
	ctx.r4.s64 = 1004;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f31,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82655440;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,13024(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82655454;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r10,216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// b 0x82655214
	goto loc_82655214;
loc_82655460:
	// lwz r11,19628(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19628);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82655720
	if (!ctx.cr6.eq) goto loc_82655720;
	// li r11,5
	ctx.r11.s64 = 5;
	// li r10,23
	ctx.r10.s64 = 23;
	// li r26,3
	ctx.r26.s64 = 3;
	// stw r11,22776(r29)
	PPC_STORE_U32(ctx.r29.u32 + 22776, ctx.r11.u32);
	// stw r10,19632(r29)
	PPC_STORE_U32(ctx.r29.u32 + 19632, ctx.r10.u32);
	// stw r26,19628(r29)
	PPC_STORE_U32(ctx.r29.u32 + 19628, ctx.r26.u32);
	// lwz r3,1316(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1316);
	// bl 0x82409be0
	ctx.lr = 0x8265548C;
	sub_82409BE0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82655720
	if (ctx.cr0.eq) goto loc_82655720;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// li r27,2
	ctx.r27.s64 = 2;
	// addi r3,r11,-16828
	ctx.r3.s64 = ctx.r11.s64 + -16828;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x82816528
	ctx.lr = 0x826554A8;
	sub_82816528(ctx, base);
	// bl 0x828e0d10
	ctx.lr = 0x826554AC;
	sub_828E0D10(ctx, base);
	// bl 0x82438488
	ctx.lr = 0x826554B0;
	sub_82438488(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826554c0
	if (ctx.cr0.eq) goto loc_826554C0;
	// lwz r28,1828(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1828);
	// subfic r27,r28,2
	ctx.xer.ca = ctx.r28.u32 <= 2;
	ctx.r27.s64 = 2 - ctx.r28.s64;
loc_826554C0:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r7,6
	ctx.r7.s64 = 6;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82655a50
	ctx.lr = 0x826554E0;
	sub_82655A50(ctx, base);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stw r6,792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 792, ctx.r6.u32);
	// ble cr6,0x82655574
	if (!ctx.cr6.gt) goto loc_82655574;
	// li r10,0
	ctx.r10.s64 = 0;
loc_826554F8:
	// addi r11,r1,288
	ctx.r11.s64 = ctx.r1.s64 + 288;
	// lwz r9,800(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r7,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,800(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r7,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r7.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// beq cr6,0x82655538
	if (ctx.cr6.eq) goto loc_82655538;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x82655544
	if (!ctx.cr6.eq) goto loc_82655544;
loc_82655538:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x82655550
	goto loc_82655550;
loc_82655544:
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bne cr6,0x82655550
	if (!ctx.cr6.eq) goto loc_82655550;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
loc_82655550:
	// lwz r11,800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r11,792(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 792);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826554f8
	if (ctx.cr6.lt) goto loc_826554F8;
loc_82655574:
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// addi r7,r1,288
	ctx.r7.s64 = ctx.r1.s64 + 288;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r26,432(r11)
	PPC_STORE_U32(ctx.r11.u32 + 432, ctx.r26.u32);
	// lwz r3,22780(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 22780);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265559C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,13024(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// bl 0x828289e0
	ctx.lr = 0x826555A8;
	sub_828289E0(ctx, base);
	// b 0x82655720
	goto loc_82655720;
loc_826555AC:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r3,r11,-16828
	ctx.r3.s64 = ctx.r11.s64 + -16828;
	// bl 0x82816528
	ctx.lr = 0x826555BC;
	sub_82816528(ctx, base);
	// bl 0x828e0d10
	ctx.lr = 0x826555C0;
	sub_828E0D10(ctx, base);
	// bl 0x82438488
	ctx.lr = 0x826555C4;
	sub_82438488(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826555d0
	if (ctx.cr0.eq) goto loc_826555D0;
	// lwz r31,1848(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1848);
loc_826555D0:
	// lwz r11,22780(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 22780);
	// li r10,9
	ctx.r10.s64 = 9;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,19632(r29)
	PPC_STORE_U32(ctx.r29.u32 + 19632, ctx.r10.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r9,284(r11)
	PPC_STORE_U32(ctx.r11.u32 + 284, ctx.r9.u32);
	// lwz r3,22780(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 22780);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// b 0x82655080
	goto loc_82655080;
loc_826555F8:
	// lwz r3,22780(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 22780);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265560C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82655720
	goto loc_82655720;
loc_82655610:
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r3,22780(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 22780);
	// stw r11,19632(r29)
	PPC_STORE_U32(ctx.r29.u32 + 19632, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// b 0x8265507c
	goto loc_8265507C;
loc_82655628:
	// lwz r3,22780(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 22780);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265563C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826556f0
	if (ctx.cr0.eq) goto loc_826556F0;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,-16828
	ctx.r3.s64 = ctx.r11.s64 + -16828;
	// bl 0x82816528
	ctx.lr = 0x82655650;
	sub_82816528(ctx, base);
	// bl 0x828e0d10
	ctx.lr = 0x82655654;
	sub_828E0D10(ctx, base);
	// bl 0x82438488
	ctx.lr = 0x82655658;
	sub_82438488(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82655720
	if (ctx.cr0.eq) goto loc_82655720;
	// lwz r11,22780(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 22780);
	// lwz r31,1852(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1852);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,152(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 152);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265567C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// ble cr6,0x826556c4
	if (!ctx.cr6.gt) goto loc_826556C4;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x826556c4
	if (ctx.cr6.eq) goto loc_826556C4;
	// lwz r9,22780(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 22780);
	// mulli r10,r31,88
	ctx.r10.s64 = ctx.r31.s64 * 88;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,164(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 164);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826556BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,12
	ctx.r11.s64 = 12;
	// b 0x8265571c
	goto loc_8265571C;
loc_826556C4:
	// lwz r3,22780(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 22780);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826556D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// li r11,11
	ctx.r11.s64 = 11;
	// beq cr6,0x826556e8
	if (ctx.cr6.eq) goto loc_826556E8;
	// li r11,15
	ctx.r11.s64 = 15;
loc_826556E8:
	// stw r11,19632(r29)
	PPC_STORE_U32(ctx.r29.u32 + 19632, ctx.r11.u32);
	// b 0x826556f8
	goto loc_826556F8;
loc_826556F0:
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r10,19632(r29)
	PPC_STORE_U32(ctx.r29.u32 + 19632, ctx.r10.u32);
loc_826556F8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82655714;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82655720
	goto loc_82655720;
loc_82655718:
	// li r11,15
	ctx.r11.s64 = 15;
loc_8265571C:
	// stw r11,19632(r29)
	PPC_STORE_U32(ctx.r29.u32 + 19632, ctx.r11.u32);
loc_82655720:
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82655730"))) PPC_WEAK_FUNC(sub_82655730);
PPC_FUNC_IMPL(__imp__sub_82655730) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,18
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 18, ctx.xer);
	// beq cr6,0x826557c0
	if (ctx.cr6.eq) goto loc_826557C0;
	// cmpwi cr6,r4,19
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 19, ctx.xer);
	// beq cr6,0x8265578c
	if (ctx.cr6.eq) goto loc_8265578C;
	// cmpwi cr6,r4,22
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 22, ctx.xer);
	// bne cr6,0x826557f8
	if (!ctx.cr6.eq) goto loc_826557F8;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,-16828
	ctx.r3.s64 = ctx.r11.s64 + -16828;
	// bl 0x82816528
	ctx.lr = 0x82655768;
	sub_82816528(ctx, base);
	// bl 0x828e0d10
	ctx.lr = 0x8265576C;
	sub_828E0D10(ctx, base);
	// bl 0x82438488
	ctx.lr = 0x82655770;
	sub_82438488(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826557f8
	if (ctx.cr0.eq) goto loc_826557F8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,1108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1108);
	// b 0x826557f0
	goto loc_826557F0;
loc_8265578C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8265579c
	if (!ctx.cr6.eq) goto loc_8265579C;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// addi r31,r11,-26972
	ctx.r31.s64 = ctx.r11.s64 + -26972;
loc_8265579C:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,-16828
	ctx.r3.s64 = ctx.r11.s64 + -16828;
	// bl 0x82816528
	ctx.lr = 0x826557A8;
	sub_82816528(ctx, base);
	// bl 0x828e0d10
	ctx.lr = 0x826557AC;
	sub_828E0D10(ctx, base);
	// bl 0x82438488
	ctx.lr = 0x826557B0;
	sub_82438488(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826557f8
	if (ctx.cr0.eq) goto loc_826557F8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// b 0x826557e4
	goto loc_826557E4;
loc_826557C0:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,-16828
	ctx.r3.s64 = ctx.r11.s64 + -16828;
	// bl 0x82816528
	ctx.lr = 0x826557CC;
	sub_82816528(ctx, base);
	// bl 0x828e0d10
	ctx.lr = 0x826557D0;
	sub_828E0D10(ctx, base);
	// bl 0x82438488
	ctx.lr = 0x826557D4;
	sub_82438488(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826557f8
	if (ctx.cr0.eq) goto loc_826557F8;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// addi r4,r10,24312
	ctx.r4.s64 = ctx.r10.s64 + 24312;
loc_826557E4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwz r11,1036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1036);
loc_826557F0:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826557F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826557F8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82655810"))) PPC_WEAK_FUNC(sub_82655810);
PPC_FUNC_IMPL(__imp__sub_82655810) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82655818;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r11,10548(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10548);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r31,1992(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1992, ctx.r31.u32);
	// bl 0x8276df70
	ctx.lr = 0x82655840;
	sub_8276DF70(ctx, base);
	// bl 0x8276ecf8
	ctx.lr = 0x82655844;
	sub_8276ECF8(ctx, base);
	// lis r29,-31963
	ctx.r29.s64 = -2094727168;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r3,17296(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 17296);
	// bl 0x82a46198
	ctx.lr = 0x82655864;
	sub_82A46198(ctx, base);
	// lwz r3,22780(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 22780);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82655878;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82655888
	if (ctx.cr6.eq) goto loc_82655888;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
loc_82655888:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82655908
	if (ctx.cr6.lt) goto loc_82655908;
	// lwz r11,10548(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10548);
	// lwz r11,3416(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3416);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82655908
	if (!ctx.cr6.lt) goto loc_82655908;
	// li r5,0
	ctx.r5.s64 = 0;
	// cmpwi cr6,r31,11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 11, ctx.xer);
	// bgt cr6,0x826558dc
	if (ctx.cr6.gt) goto loc_826558DC;
	// cmpwi cr6,r31,7
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 7, ctx.xer);
	// bge cr6,0x826558d4
	if (!ctx.cr6.lt) goto loc_826558D4;
	// cmplwi cr6,r31,3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 3, ctx.xer);
	// blt cr6,0x826558cc
	if (ctx.cr6.lt) goto loc_826558CC;
	// cmplwi cr6,r31,7
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 7, ctx.xer);
	// bge cr6,0x826558f0
	if (!ctx.cr6.lt) goto loc_826558F0;
	// li r5,2
	ctx.r5.s64 = 2;
	// b 0x826558f0
	goto loc_826558F0;
loc_826558CC:
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x826558f0
	goto loc_826558F0;
loc_826558D4:
	// li r5,3
	ctx.r5.s64 = 3;
	// b 0x826558f0
	goto loc_826558F0;
loc_826558DC:
	// cmpwi cr6,r31,12
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 12, ctx.xer);
	// blt cr6,0x826558f0
	if (ctx.cr6.lt) goto loc_826558F0;
	// cmpwi cr6,r31,16
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 16, ctx.xer);
	// bgt cr6,0x826558f0
	if (ctx.cr6.gt) goto loc_826558F0;
	// li r5,4
	ctx.r5.s64 = 4;
loc_826558F0:
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r3,17296(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 17296);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x82a46198
	ctx.lr = 0x82655908;
	sub_82A46198(ctx, base);
loc_82655908:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82655910"))) PPC_WEAK_FUNC(sub_82655910);
PPC_FUNC_IMPL(__imp__sub_82655910) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,17296(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17296);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// bl 0x82a46198
	ctx.lr = 0x8265594C;
	sub_82A46198(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// stw r31,1988(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1988, ctx.r31.u32);
	// bl 0x8276df70
	ctx.lr = 0x82655968;
	sub_8276DF70(ctx, base);
	// bl 0x8276ecf8
	ctx.lr = 0x8265596C;
	sub_8276ECF8(ctx, base);
	// lwz r3,22780(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 22780);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82655980;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82655990
	if (ctx.cr6.eq) goto loc_82655990;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
loc_82655990:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826559A8"))) PPC_WEAK_FUNC(sub_826559A8);
PPC_FUNC_IMPL(__imp__sub_826559A8) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r10,13024(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r11,788(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 788);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826559e0
	if (ctx.cr6.eq) goto loc_826559E0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x826559e0
	if (ctx.cr6.eq) goto loc_826559E0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82655a3c
	if (!ctx.cr6.eq) goto loc_82655A3C;
loc_826559E0:
	// lwz r11,912(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 912);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82655a3c
	if (ctx.cr6.eq) goto loc_82655A3C;
	// lwz r3,22780(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22780);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82655A04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// beq cr6,0x82655a14
	if (ctx.cr6.eq) goto loc_82655A14;
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
loc_82655A14:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,17296(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17296);
	// ori r4,r4,33
	ctx.r4.u64 = ctx.r4.u64 | 33;
	// bl 0x82a46230
	ctx.lr = 0x82655A3C;
	sub_82A46230(ctx, base);
loc_82655A3C:
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

__attribute__((alias("__imp__sub_82655A50"))) PPC_WEAK_FUNC(sub_82655A50);
PPC_FUNC_IMPL(__imp__sub_82655A50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f4
	ctx.lr = 0x82655A58;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,22780(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22780);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82655A80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r3,r11,-16828
	ctx.r3.s64 = ctx.r11.s64 + -16828;
	// bl 0x82816528
	ctx.lr = 0x82655A90;
	sub_82816528(ctx, base);
	// bl 0x828e0d10
	ctx.lr = 0x82655A94;
	sub_828E0D10(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x823fa5d0
	ctx.lr = 0x82655A9C;
	sub_823FA5D0(ctx, base);
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
	ctx.lr = 0x82655AB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82655ac4
	if (!ctx.cr0.eq) goto loc_82655AC4;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
loc_82655AC4:
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// lwz r11,1816(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1816);
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r28,1
	ctx.r28.s64 = 1;
	// lwz r10,16104(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16104);
	// lwz r6,10548(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 10548);
	// cmpwi cr6,r10,117
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 117, ctx.xer);
	// bne cr6,0x82655b00
	if (!ctx.cr6.eq) goto loc_82655B00;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82655bc4
	if (ctx.cr6.lt) goto loc_82655BC4;
	// lwz r10,3392(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 3392);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82655bc4
	if (!ctx.cr6.lt) goto loc_82655BC4;
	// b 0x82655b8c
	goto loc_82655B8C;
loc_82655B00:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82655bc4
	if (ctx.cr6.lt) goto loc_82655BC4;
	// lwz r10,3416(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 3416);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82655bc4
	if (!ctx.cr6.lt) goto loc_82655BC4;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// add r10,r9,r31
	ctx.r10.u64 = ctx.r9.u64 + ctx.r31.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// stw r5,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r5.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// bgt cr6,0x82655b74
	if (ctx.cr6.gt) goto loc_82655B74;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bge cr6,0x82655b6c
	if (!ctx.cr6.lt) goto loc_82655B6C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82655b64
	if (ctx.cr6.lt) goto loc_82655B64;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bge cr6,0x82655b88
	if (!ctx.cr6.lt) goto loc_82655B88;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// b 0x82655b88
	goto loc_82655B88;
loc_82655B64:
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// b 0x82655b88
	goto loc_82655B88;
loc_82655B6C:
	// li r9,3
	ctx.r9.s64 = 3;
	// b 0x82655b88
	goto loc_82655B88;
loc_82655B74:
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// blt cr6,0x82655b88
	if (ctx.cr6.lt) goto loc_82655B88;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bgt cr6,0x82655b88
	if (ctx.cr6.gt) goto loc_82655B88;
	// li r9,4
	ctx.r9.s64 = 4;
loc_82655B88:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82655B8C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82655bc4
	if (ctx.cr6.lt) goto loc_82655BC4;
	// lwz r10,3392(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 3392);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82655bc4
	if (!ctx.cr6.lt) goto loc_82655BC4;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,5
	ctx.r5.s64 = 5;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// add r10,r9,r31
	ctx.r10.u64 = ctx.r9.u64 + ctx.r31.u64;
	// stw r4,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r4.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
	// stwx r8,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r8.u32);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
loc_82655BC4:
	// lwz r10,1824(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1824);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82655c04
	if (ctx.cr6.lt) goto loc_82655C04;
	// lwz r11,3464(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 3464);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82655c04
	if (!ctx.cr6.lt) goto loc_82655C04;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,3
	ctx.r6.s64 = 3;
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// add r11,r9,r31
	ctx.r11.u64 = ctx.r9.u64 + ctx.r31.u64;
	// stw r5,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r5.u32);
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// stwx r8,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r8.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r10,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r10.u32);
loc_82655C04:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r5,8192
	ctx.r5.s64 = 536870912;
	// lwa r3,348(r26)
	ctx.r3.s64 = int32_t(PPC_LOAD_U32(ctx.r26.u32 + 348));
	// lis r26,-31954
	ctx.r26.s64 = -2094137344;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// ori r5,r5,7
	ctx.r5.u64 = ctx.r5.u64 | 7;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lis r6,-31954
	ctx.r6.s64 = -2094137344;
	// rlwinm r8,r11,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r5,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r5.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// rlwinm r4,r11,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// rlwinm r3,r10,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// std r5,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r5.u64);
	// add r24,r8,r31
	ctx.r24.u64 = ctx.r8.u64 + ctx.r31.u64;
	// lwz r5,10232(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 10232);
	// lis r23,8192
	ctx.r23.s64 = 536870912;
	// lwz r6,10236(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 10236);
	// add r8,r4,r31
	ctx.r8.u64 = ctx.r4.u64 + ctx.r31.u64;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// add r26,r3,r31
	ctx.r26.u64 = ctx.r3.u64 + ctx.r31.u64;
	// ori r3,r23,34
	ctx.r3.u64 = ctx.r23.u64 | 34;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r4,-31954
	ctx.r4.s64 = -2094137344;
	// stw r3,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r3.u32);
	// lis r23,8192
	ctx.r23.s64 = 536870912;
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// std r6,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r6.u64);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// ori r23,r23,35
	ctx.r23.u64 = ctx.r23.u64 | 35;
	// lwz r4,10228(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 10228);
	// add r24,r9,r31
	ctx.r24.u64 = ctx.r9.u64 + ctx.r31.u64;
	// lis r8,8192
	ctx.r8.s64 = 536870912;
	// stw r23,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r23.u32);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// add r9,r3,r31
	ctx.r9.u64 = ctx.r3.u64 + ctx.r31.u64;
	// ori r8,r8,36
	ctx.r8.u64 = ctx.r8.u64 | 36;
	// std r6,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r6.u64);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// stw r8,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r8.u32);
	// stwx r7,r3,r31
	PPC_STORE_U32(ctx.r3.u32 + ctx.r31.u32, ctx.r7.u32);
	// cmpwi cr6,r25,6
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 6, ctx.xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// std r10,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r10.u64);
	// bne cr6,0x82655d68
	if (!ctx.cr6.eq) goto loc_82655D68;
	// rlwinm r8,r11,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r5,1828(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1828);
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// add r4,r8,r31
	ctx.r4.u64 = ctx.r8.u64 + ctx.r31.u64;
	// lis r3,4096
	ctx.r3.s64 = 268435456;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// rlwinm r8,r10,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// ori r3,r3,9
	ctx.r3.u64 = ctx.r3.u64 | 9;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r29,r8,r31
	ctx.r29.u64 = ctx.r8.u64 + ctx.r31.u64;
	// stw r3,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r3.u32);
	// rlwinm r6,r11,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r7,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r7.u32);
	// rlwinm r8,r11,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r28,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r28.u32);
	// lis r26,4096
	ctx.r26.s64 = 268435456;
	// stw r5,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r5.u32);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r6,r6,r31
	ctx.r6.u64 = ctx.r6.u64 + ctx.r31.u64;
	// lis r9,4096
	ctx.r9.s64 = 268435456;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// ori r7,r26,33
	ctx.r7.u64 = ctx.r26.u64 | 33;
	// ori r9,r9,37
	ctx.r9.u64 = ctx.r9.u64 | 37;
	// stw r7,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r7.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r28,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r28.u32);
	// stw r28,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r28.u32);
	// stw r9,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r9.u32);
	// stw r28,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r28.u32);
	// stw r28,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r28.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82655D68:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82655D70"))) PPC_WEAK_FUNC(sub_82655D70);
PPC_FUNC_IMPL(__imp__sub_82655D70) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82655D78;
	__savegprlr_27(ctx, base);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lis r7,8192
	ctx.r7.s64 = 536870912;
	// lis r29,-31954
	ctx.r29.s64 = -2094137344;
	// ori r6,r7,7
	ctx.r6.u64 = ctx.r7.u64 | 7;
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r28,-31954
	ctx.r28.s64 = -2094137344;
	// lis r27,8192
	ctx.r27.s64 = 536870912;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r9,r10,r5
	ctx.r9.u64 = ctx.r10.u64 + ctx.r5.u64;
	// rlwinm r7,r11,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r6,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r6.u32);
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// rlwinm r31,r10,4,0,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r6,10236(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 10236);
	// add r29,r7,r5
	ctx.r29.u64 = ctx.r7.u64 + ctx.r5.u64;
	// lwa r4,348(r4)
	ctx.r4.s64 = int32_t(PPC_LOAD_U32(ctx.r4.u32 + 348));
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// std r7,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r7.u64);
	// add r7,r3,r5
	ctx.r7.u64 = ctx.r3.u64 + ctx.r5.u64;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// ori r9,r27,34
	ctx.r9.u64 = ctx.r27.u64 | 34;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r4,10232(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 10232);
	// add r28,r31,r5
	ctx.r28.u64 = ctx.r31.u64 + ctx.r5.u64;
	// stw r9,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r9.u32);
	// lis r3,-31954
	ctx.r3.s64 = -2094137344;
	// lis r27,8192
	ctx.r27.s64 = 536870912;
	// stw r8,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r8.u32);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// std r6,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r6.u64);
	// rlwinm r31,r11,4,0,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// ori r29,r27,35
	ctx.r29.u64 = ctx.r27.u64 | 35;
	// lwz r3,10228(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10228);
	// add r31,r31,r5
	ctx.r31.u64 = ctx.r31.u64 + ctx.r5.u64;
	// lis r7,8192
	ctx.r7.s64 = 536870912;
	// stw r29,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r29.u32);
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// ori r7,r7,36
	ctx.r7.u64 = ctx.r7.u64 | 36;
	// std r6,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r6.u64);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// std r10,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r10.u64);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82655E58"))) PPC_WEAK_FUNC(sub_82655E58);
PPC_FUNC_IMPL(__imp__sub_82655E58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82655E60;
	__savegprlr_27(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lfs f0,17060(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17060);
	ctx.f0.f64 = double(temp.f32);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// stfs f0,22788(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 22788, temp.u32);
	// stw r9,22784(r11)
	PPC_STORE_U32(ctx.r11.u32 + 22784, ctx.r9.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// bl 0x823339b8
	ctx.lr = 0x82655E94;
	sub_823339B8(ctx, base);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r6,r10,-21636
	ctx.r6.s64 = ctx.r10.s64 + -21636;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// addi r11,r11,24108
	ctx.r11.s64 = ctx.r11.s64 + 24108;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// li r29,2
	ctx.r29.s64 = 2;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// addi r4,r9,24332
	ctx.r4.s64 = ctx.r9.s64 + 24332;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r10,24(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r10,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x828db5e0
	ctx.lr = 0x82655EE4;
	sub_828DB5E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82400b48
	ctx.lr = 0x82655EF0;
	sub_82400B48(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82333960
	ctx.lr = 0x82655EF8;
	sub_82333960(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82655f0c
	if (ctx.cr6.eq) goto loc_82655F0C;
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// b 0x82655f14
	goto loc_82655F14;
loc_82655F0C:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r4,r11,7896
	ctx.r4.s64 = ctx.r11.s64 + 7896;
loc_82655F14:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x824193a8
	ctx.lr = 0x82655F1C;
	sub_824193A8(ctx, base);
	// li r3,472
	ctx.r3.s64 = 472;
	// bl 0x82833108
	ctx.lr = 0x82655F24;
	sub_82833108(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82655f8c
	if (ctx.cr0.eq) goto loc_82655F8C;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f3,30996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30996);
	ctx.f3.f64 = double(temp.f32);
	// li r28,1
	ctx.r28.s64 = 1;
	// lfs f2,908(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,-11456(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -11456);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82900660
	ctx.lr = 0x82655F70;
	sub_82900660(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// addi r11,r11,-23928
	ctx.r11.s64 = ctx.r11.s64 + -23928;
	// addi r10,r10,-23664
	ctx.r10.s64 = ctx.r10.s64 + -23664;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
loc_82655F8C:
	// clrlwi. r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82655f9c
	if (ctx.cr0.eq) goto loc_82655F9C;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82333960
	ctx.lr = 0x82655F9C;
	sub_82333960(ctx, base);
loc_82655F9C:
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82900ca0
	ctx.lr = 0x82655FA8;
	sub_82900CA0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x82655FB0;
	sub_82333960(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82333960
	ctx.lr = 0x82655FB8;
	sub_82333960(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82333960
	ctx.lr = 0x82655FC0;
	sub_82333960(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82655FC8"))) PPC_WEAK_FUNC(sub_82655FC8);
PPC_FUNC_IMPL(__imp__sub_82655FC8) {
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
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r3,13024(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// stw r11,19628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19628, ctx.r11.u32);
	// stw r10,19632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19632, ctx.r10.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,432(r3)
	PPC_STORE_U32(ctx.r3.u32 + 432, ctx.r11.u32);
	// lwz r11,212(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265600C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82438310
	ctx.lr = 0x82656010;
	sub_82438310(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82656028
	if (ctx.cr0.eq) goto loc_82656028;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r4,21
	ctx.r4.s64 = 21;
	// lfs f1,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x826ee958
	ctx.lr = 0x82656028;
	sub_826EE958(ctx, base);
loc_82656028:
	// lwz r11,19624(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19624);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82656050
	if (!ctx.cr6.eq) goto loc_82656050;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lwz r11,16104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16104);
	// cmpwi cr6,r11,106
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 106, ctx.xer);
	// bne cr6,0x82656050
	if (!ctx.cr6.eq) goto loc_82656050;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,26
	ctx.r3.s64 = 26;
	// bl 0x826d1788
	ctx.lr = 0x82656050;
	sub_826D1788(ctx, base);
loc_82656050:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265606C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,184(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// bl 0x828cec70
	ctx.lr = 0x8265607C;
	sub_828CEC70(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,22792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22792, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826560A0"))) PPC_WEAK_FUNC(sub_826560A0);
PPC_FUNC_IMPL(__imp__sub_826560A0) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,19624(r3)
	PPC_STORE_U32(ctx.r3.u32 + 19624, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826560B0"))) PPC_WEAK_FUNC(sub_826560B0);
PPC_FUNC_IMPL(__imp__sub_826560B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x826560B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82656114
	if (ctx.cr6.eq) goto loc_82656114;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// addi r31,r11,13288
	ctx.r31.s64 = ctx.r11.s64 + 13288;
	// lwz r11,13284(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13284);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82656104
	if (!ctx.cr0.eq) goto loc_82656104;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,25780
	ctx.r9.s64 = ctx.r9.s64 + 25780;
	// stw r11,13284(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13284, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,26200
	ctx.r3.s64 = ctx.r11.s64 + 26200;
	// bl 0x82a4c758
	ctx.lr = 0x82656104;
	sub_82A4C758(ctx, base);
loc_82656104:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82656114
	if (!ctx.cr6.eq) goto loc_82656114;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82656120
	goto loc_82656120;
loc_82656114:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82339ee8
	ctx.lr = 0x82656120;
	sub_82339EE8(ctx, base);
loc_82656120:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82656128"))) PPC_WEAK_FUNC(sub_82656128);
PPC_FUNC_IMPL(__imp__sub_82656128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82656130;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,13288
	ctx.r31.s64 = ctx.r11.s64 + 13288;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,13284(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13284);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82656174
	if (!ctx.cr0.eq) goto loc_82656174;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,25780
	ctx.r9.s64 = ctx.r9.s64 + 25780;
	// stw r11,13284(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13284, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,26200
	ctx.r3.s64 = ctx.r11.s64 + 26200;
	// bl 0x82a4c758
	ctx.lr = 0x82656174;
	sub_82A4C758(ctx, base);
loc_82656174:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// beq cr6,0x82656188
	if (ctx.cr6.eq) goto loc_82656188;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82339d80
	ctx.lr = 0x82656188;
	sub_82339D80(ctx, base);
loc_82656188:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82656190"))) PPC_WEAK_FUNC(sub_82656190);
PPC_FUNC_IMPL(__imp__sub_82656190) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,25748
	ctx.r10.s64 = ctx.r10.s64 + 25748;
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r9,24
	ctx.r9.s64 = 24;
	// stw r8,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r9,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r9.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r9,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r9.u32);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r8,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r8.u32);
	// stw r11,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r11.u32);
	// stw r11,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r11.u32);
	// stw r11,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r11.u32);
	// stw r11,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r11.u32);
	// stw r11,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r10,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r10.u32);
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// stw r11,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r11.u32);
	// stw r11,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r11.u32);
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// stw r10,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82656248"))) PPC_WEAK_FUNC(sub_82656248);
PPC_FUNC_IMPL(__imp__sub_82656248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r11,r11,25748
	ctx.r11.s64 = ctx.r11.s64 + 25748;
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82656288
	if (ctx.cr6.eq) goto loc_82656288;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82656288;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82656288:
	// addi r3,r31,124
	ctx.r3.s64 = ctx.r31.s64 + 124;
	// bl 0x8239d768
	ctx.lr = 0x82656290;
	sub_8239D768(ctx, base);
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x82400988
	ctx.lr = 0x82656298;
	sub_82400988(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82400988
	ctx.lr = 0x826562A0;
	sub_82400988(ctx, base);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x82333960
	ctx.lr = 0x826562A8;
	sub_82333960(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r11,r11,16980
	ctx.r11.s64 = ctx.r11.s64 + 16980;
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

__attribute__((alias("__imp__sub_826562C8"))) PPC_WEAK_FUNC(sub_826562C8);
PPC_FUNC_IMPL(__imp__sub_826562C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82656300;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r30,12
	ctx.r4.s64 = ctx.r30.s64 + 12;
	// bl 0x828ff9f8
	ctx.lr = 0x8265630C;
	sub_828FF9F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r30,36
	ctx.r4.s64 = ctx.r30.s64 + 36;
	// bl 0x828db368
	ctx.lr = 0x82656318;
	sub_828DB368(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r30,40
	ctx.r4.s64 = ctx.r30.s64 + 40;
	// bl 0x824bf8e0
	ctx.lr = 0x82656324;
	sub_824BF8E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r30,64
	ctx.r4.s64 = ctx.r30.s64 + 64;
	// bl 0x824bf8e0
	ctx.lr = 0x82656330;
	sub_824BF8E0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,92
	ctx.r4.s64 = ctx.r30.s64 + 92;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265634C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,96
	ctx.r4.s64 = ctx.r30.s64 + 96;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82656368;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r30,100
	ctx.r4.s64 = ctx.r30.s64 + 100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828db368
	ctx.lr = 0x82656374;
	sub_828DB368(ctx, base);
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826563e8
	if (ctx.cr6.eq) goto loc_826563E8;
	// addi r4,r30,104
	ctx.r4.s64 = ctx.r30.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828db368
	ctx.lr = 0x8265638C;
	sub_828DB368(ctx, base);
	// addi r4,r30,108
	ctx.r4.s64 = ctx.r30.s64 + 108;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828db368
	ctx.lr = 0x82656398;
	sub_828DB368(ctx, base);
	// addi r4,r30,112
	ctx.r4.s64 = ctx.r30.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828db368
	ctx.lr = 0x826563A4;
	sub_828DB368(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,116
	ctx.r4.s64 = ctx.r30.s64 + 116;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826563C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,120
	ctx.r4.s64 = ctx.r30.s64 + 120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826563DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r30,124
	ctx.r4.s64 = ctx.r30.s64 + 124;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82831d88
	ctx.lr = 0x826563E8;
	sub_82831D88(ctx, base);
loc_826563E8:
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

__attribute__((alias("__imp__sub_82656408"))) PPC_WEAK_FUNC(sub_82656408);
PPC_FUNC_IMPL(__imp__sub_82656408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82656248
	ctx.lr = 0x82656428;
	sub_82656248(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82656438
	if (ctx.cr0.eq) goto loc_82656438;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x82656438;
	sub_82332DB8(ctx, base);
loc_82656438:
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

__attribute__((alias("__imp__sub_82656458"))) PPC_WEAK_FUNC(sub_82656458);
PPC_FUNC_IMPL(__imp__sub_82656458) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// addi r11,r11,25804
	ctx.r11.s64 = ctx.r11.s64 + 25804;
	// addi r30,r10,25800
	ctx.r30.s64 = ctx.r10.s64 + 25800;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// bl 0x8265a8c0
	ctx.lr = 0x82656490;
	sub_8265A8C0(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x8265a8c0
	ctx.lr = 0x8265649C;
	sub_8265A8C0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826564B8"))) PPC_WEAK_FUNC(sub_826564B8);
PPC_FUNC_IMPL(__imp__sub_826564B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82656458
	ctx.lr = 0x826564D8;
	sub_82656458(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826564e8
	if (ctx.cr0.eq) goto loc_826564E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x826564E8;
	sub_82332DB8(ctx, base);
loc_826564E8:
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

__attribute__((alias("__imp__sub_82656508"))) PPC_WEAK_FUNC(sub_82656508);
PPC_FUNC_IMPL(__imp__sub_82656508) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-4516
	ctx.r3.s64 = ctx.r11.s64 + -4516;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82656518"))) PPC_WEAK_FUNC(sub_82656518);
PPC_FUNC_IMPL(__imp__sub_82656518) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82656550
	if (ctx.cr6.eq) goto loc_82656550;
	// bl 0x823c9628
	ctx.lr = 0x82656540;
	sub_823C9628(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82656550
	if (!ctx.cr6.eq) goto loc_82656550;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8265655c
	goto loc_8265655C;
loc_82656550:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82338a28
	ctx.lr = 0x8265655C;
	sub_82338A28(ctx, base);
loc_8265655C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82656578"))) PPC_WEAK_FUNC(sub_82656578);
PPC_FUNC_IMPL(__imp__sub_82656578) {
	PPC_FUNC_PROLOGUE();
	// b 0x823c9628
	sub_823C9628(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82656580"))) PPC_WEAK_FUNC(sub_82656580);
PPC_FUNC_IMPL(__imp__sub_82656580) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x8265659C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826565b0
	if (ctx.cr0.eq) goto loc_826565B0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82656628
	ctx.lr = 0x826565AC;
	sub_82656628(ctx, base);
	// b 0x826565b4
	goto loc_826565B4;
loc_826565B0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826565B4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826565C8"))) PPC_WEAK_FUNC(sub_826565C8);
PPC_FUNC_IMPL(__imp__sub_826565C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823c9628
	ctx.lr = 0x826565E8;
	sub_823C9628(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826565f8
	if (!ctx.cr6.eq) goto loc_826565F8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82656610
	goto loc_82656610;
loc_826565F8:
	// bl 0x82338750
	ctx.lr = 0x826565FC;
	sub_82338750(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82656610
	if (ctx.cr6.eq) goto loc_82656610;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82338858
	ctx.lr = 0x82656610;
	sub_82338858(ctx, base);
loc_82656610:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82656628"))) PPC_WEAK_FUNC(sub_82656628);
PPC_FUNC_IMPL(__imp__sub_82656628) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82656630;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82338b88
	ctx.lr = 0x82656640;
	sub_82338B88(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// addi r11,r11,24456
	ctx.r11.s64 = ctx.r11.s64 + 24456;
	// addi r10,r10,25464
	ctx.r10.s64 = ctx.r10.s64 + 25464;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// addi r7,r11,25804
	ctx.r7.s64 = ctx.r11.s64 + 25804;
	// addi r9,r9,25516
	ctx.r9.s64 = ctx.r9.s64 + 25516;
	// addi r11,r30,1412
	ctx.r11.s64 = ctx.r30.s64 + 1412;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r6,r10,25800
	ctx.r6.s64 = ctx.r10.s64 + 25800;
	// addi r10,r31,1412
	ctx.r10.s64 = ctx.r31.s64 + 1412;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// addi r8,r10,8
	ctx.r8.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// addi r11,r8,20
	ctx.r11.s64 = ctx.r8.s64 + 20;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,1408(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1408);
	// li r26,4
	ctx.r26.s64 = 4;
	// stw r11,1408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1408, ctx.r11.u32);
	// addi r11,r9,20
	ctx.r11.s64 = ctx.r9.s64 + 20;
	// stw r7,1412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1412, ctx.r7.u32);
	// addi r11,r10,20
	ctx.r11.s64 = ctx.r10.s64 + 20;
	// lwz r9,1416(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1416);
	// addi r29,r31,1500
	ctx.r29.s64 = ctx.r31.s64 + 1500;
	// stw r9,1416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1416, ctx.r9.u32);
	// addi r27,r30,1500
	ctx.r27.s64 = ctx.r30.s64 + 1500;
	// stw r6,1420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1420, ctx.r6.u32);
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// lwz r11,1424(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1424);
	// stw r11,1424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1424, ctx.r11.u32);
	// lwz r11,1428(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1428);
	// stw r11,1428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1428, ctx.r11.u32);
	// lwz r11,1432(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1432);
	// stw r11,1432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1432, ctx.r11.u32);
	// lwz r11,1436(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1436);
	// stw r11,1436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1436, ctx.r11.u32);
	// lwz r11,1440(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1440);
	// stw r11,1440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1440, ctx.r11.u32);
	// lwz r11,1444(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1444);
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
	// stw r6,1460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1460, ctx.r6.u32);
	// lwz r11,1464(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1464);
	// stw r11,1464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1464, ctx.r11.u32);
	// lwz r11,1468(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1468);
	// stw r11,1468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1468, ctx.r11.u32);
	// lwz r11,1472(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1472);
	// stw r11,1472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1472, ctx.r11.u32);
	// lwz r11,1476(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1476);
	// stw r11,1476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1476, ctx.r11.u32);
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
	// stw r26,1504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1504, ctx.r26.u32);
	// stw r28,1508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1508, ctx.r28.u32);
	// stw r28,1512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1512, ctx.r28.u32);
	// stw r28,1516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1516, ctx.r28.u32);
	// stw r28,1520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1520, ctx.r28.u32);
	// stw r28,1500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1500, ctx.r28.u32);
	// beq cr6,0x826567c0
	if (ctx.cr6.eq) goto loc_826567C0;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r28,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826567c0
	if (!ctx.cr6.gt) goto loc_826567C0;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826567a4
	if (ctx.cr0.eq) goto loc_826567A4;
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332c38
	ctx.lr = 0x826567A4;
	sub_82332C38(ctx, base);
loc_826567A4:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// lwz r4,12(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x82a45878
	ctx.lr = 0x826567B8;
	sub_82A45878(ctx, base);
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r11,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
loc_826567C0:
	// addi r29,r31,1524
	ctx.r29.s64 = ctx.r31.s64 + 1524;
	// stw r26,1528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1528, ctx.r26.u32);
	// addi r27,r30,1524
	ctx.r27.s64 = ctx.r30.s64 + 1524;
	// stw r28,1532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1532, ctx.r28.u32);
	// stw r28,1536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1536, ctx.r28.u32);
	// stw r28,1540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1540, ctx.r28.u32);
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// stw r28,1544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1544, ctx.r28.u32);
	// stw r28,1524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1524, ctx.r28.u32);
	// beq cr6,0x82656830
	if (ctx.cr6.eq) goto loc_82656830;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r28,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82656830
	if (!ctx.cr6.gt) goto loc_82656830;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82656814
	if (ctx.cr0.eq) goto loc_82656814;
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332c38
	ctx.lr = 0x82656814;
	sub_82332C38(ctx, base);
loc_82656814:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// lwz r4,12(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x82a45878
	ctx.lr = 0x82656828;
	sub_82A45878(ctx, base);
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r11,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
loc_82656830:
	// lwz r11,1548(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1548);
	// addi r4,r30,1556
	ctx.r4.s64 = ctx.r30.s64 + 1556;
	// addi r3,r31,1556
	ctx.r3.s64 = ctx.r31.s64 + 1556;
	// stw r11,1548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1548, ctx.r11.u32);
	// lwz r11,1552(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1552);
	// stw r11,1552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1552, ctx.r11.u32);
	// bl 0x82873b58
	ctx.lr = 0x8265684C;
	sub_82873B58(ctx, base);
	// addi r4,r30,1580
	ctx.r4.s64 = ctx.r30.s64 + 1580;
	// addi r3,r31,1580
	ctx.r3.s64 = ctx.r31.s64 + 1580;
	// bl 0x82873b58
	ctx.lr = 0x82656858;
	sub_82873B58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82656868"))) PPC_WEAK_FUNC(sub_82656868);
PPC_FUNC_IMPL(__imp__sub_82656868) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82657440
	ctx.lr = 0x82656888;
	sub_82657440(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82656898
	if (ctx.cr0.eq) goto loc_82656898;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x82656898;
	sub_82332DB8(ctx, base);
loc_82656898:
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

__attribute__((alias("__imp__sub_826568B8"))) PPC_WEAK_FUNC(sub_826568B8);
PPC_FUNC_IMPL(__imp__sub_826568B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,25800
	ctx.r11.s64 = ctx.r11.s64 + 25800;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8265a8c0
	ctx.lr = 0x826568E4;
	sub_8265A8C0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826568f4
	if (ctx.cr0.eq) goto loc_826568F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x826568F4;
	sub_82332DB8(ctx, base);
loc_826568F4:
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

__attribute__((alias("__imp__sub_82656910"))) PPC_WEAK_FUNC(sub_82656910);
PPC_FUNC_IMPL(__imp__sub_82656910) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82656948
	if (ctx.cr6.eq) goto loc_82656948;
	// bl 0x8265b168
	ctx.lr = 0x82656938;
	sub_8265B168(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82656948
	if (!ctx.cr6.eq) goto loc_82656948;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82656954
	goto loc_82656954;
loc_82656948:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82339ee8
	ctx.lr = 0x82656954;
	sub_82339EE8(ctx, base);
loc_82656954:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82656970"))) PPC_WEAK_FUNC(sub_82656970);
PPC_FUNC_IMPL(__imp__sub_82656970) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8265b168
	ctx.lr = 0x82656990;
	sub_8265B168(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x826569a4
	if (ctx.cr6.eq) goto loc_826569A4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82339d80
	ctx.lr = 0x826569A4;
	sub_82339D80(ctx, base);
loc_826569A4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826569C0"))) PPC_WEAK_FUNC(sub_826569C0);
PPC_FUNC_IMPL(__imp__sub_826569C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x826569C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82656a24
	if (ctx.cr6.eq) goto loc_82656A24;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// addi r31,r11,13304
	ctx.r31.s64 = ctx.r11.s64 + 13304;
	// lwz r11,13300(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13300);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82656a14
	if (!ctx.cr0.eq) goto loc_82656A14;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,25828
	ctx.r9.s64 = ctx.r9.s64 + 25828;
	// stw r11,13300(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13300, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,26152
	ctx.r3.s64 = ctx.r11.s64 + 26152;
	// bl 0x82a4c758
	ctx.lr = 0x82656A14;
	sub_82A4C758(ctx, base);
loc_82656A14:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82656a24
	if (!ctx.cr6.eq) goto loc_82656A24;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82656a30
	goto loc_82656A30;
loc_82656A24:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82339ee8
	ctx.lr = 0x82656A30;
	sub_82339EE8(ctx, base);
loc_82656A30:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82656A38"))) PPC_WEAK_FUNC(sub_82656A38);
PPC_FUNC_IMPL(__imp__sub_82656A38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82656A40;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,13304
	ctx.r31.s64 = ctx.r11.s64 + 13304;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,13300(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13300);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82656a84
	if (!ctx.cr0.eq) goto loc_82656A84;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,25828
	ctx.r9.s64 = ctx.r9.s64 + 25828;
	// stw r11,13300(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13300, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,26152
	ctx.r3.s64 = ctx.r11.s64 + 26152;
	// bl 0x82a4c758
	ctx.lr = 0x82656A84;
	sub_82A4C758(ctx, base);
loc_82656A84:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// beq cr6,0x82656a98
	if (ctx.cr6.eq) goto loc_82656A98;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82339d80
	ctx.lr = 0x82656A98;
	sub_82339D80(ctx, base);
loc_82656A98:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82656AA0"))) PPC_WEAK_FUNC(sub_82656AA0);
PPC_FUNC_IMPL(__imp__sub_82656AA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r11,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r11.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82656AC0"))) PPC_WEAK_FUNC(sub_82656AC0);
PPC_FUNC_IMPL(__imp__sub_82656AC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82656AC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82656b24
	if (ctx.cr6.eq) goto loc_82656B24;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// addi r31,r11,13312
	ctx.r31.s64 = ctx.r11.s64 + 13312;
	// lwz r11,13308(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13308);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82656b14
	if (!ctx.cr0.eq) goto loc_82656B14;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,25848
	ctx.r9.s64 = ctx.r9.s64 + 25848;
	// stw r11,13308(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13308, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,26128
	ctx.r3.s64 = ctx.r11.s64 + 26128;
	// bl 0x82a4c758
	ctx.lr = 0x82656B14;
	sub_82A4C758(ctx, base);
loc_82656B14:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82656b24
	if (!ctx.cr6.eq) goto loc_82656B24;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82656b30
	goto loc_82656B30;
loc_82656B24:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826569c0
	ctx.lr = 0x82656B30;
	sub_826569C0(ctx, base);
loc_82656B30:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82656B38"))) PPC_WEAK_FUNC(sub_82656B38);
PPC_FUNC_IMPL(__imp__sub_82656B38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82656B40;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,13312
	ctx.r31.s64 = ctx.r11.s64 + 13312;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,13308(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13308);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82656b84
	if (!ctx.cr0.eq) goto loc_82656B84;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,25848
	ctx.r9.s64 = ctx.r9.s64 + 25848;
	// stw r11,13308(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13308, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,26128
	ctx.r3.s64 = ctx.r11.s64 + 26128;
	// bl 0x82a4c758
	ctx.lr = 0x82656B84;
	sub_82A4C758(ctx, base);
loc_82656B84:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// beq cr6,0x82656b98
	if (ctx.cr6.eq) goto loc_82656B98;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82656a38
	ctx.lr = 0x82656B98;
	sub_82656A38(ctx, base);
loc_82656B98:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82656BA0"))) PPC_WEAK_FUNC(sub_82656BA0);
PPC_FUNC_IMPL(__imp__sub_82656BA0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82412770
	sub_82412770(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82656BA8"))) PPC_WEAK_FUNC(sub_82656BA8);
PPC_FUNC_IMPL(__imp__sub_82656BA8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82658210
	sub_82658210(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82656BB8"))) PPC_WEAK_FUNC(sub_82656BB8);
PPC_FUNC_IMPL(__imp__sub_82656BB8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x826588a8
	sub_826588A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82656BC8"))) PPC_WEAK_FUNC(sub_82656BC8);
PPC_FUNC_IMPL(__imp__sub_82656BC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82656BD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82656c2c
	if (ctx.cr6.eq) goto loc_82656C2C;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// addi r31,r11,13320
	ctx.r31.s64 = ctx.r11.s64 + 13320;
	// lwz r11,13316(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13316);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82656c1c
	if (!ctx.cr0.eq) goto loc_82656C1C;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,25868
	ctx.r9.s64 = ctx.r9.s64 + 25868;
	// stw r11,13316(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13316, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,26104
	ctx.r3.s64 = ctx.r11.s64 + 26104;
	// bl 0x82a4c758
	ctx.lr = 0x82656C1C;
	sub_82A4C758(ctx, base);
loc_82656C1C:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82656c2c
	if (!ctx.cr6.eq) goto loc_82656C2C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82656c38
	goto loc_82656C38;
loc_82656C2C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826569c0
	ctx.lr = 0x82656C38;
	sub_826569C0(ctx, base);
loc_82656C38:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82656C40"))) PPC_WEAK_FUNC(sub_82656C40);
PPC_FUNC_IMPL(__imp__sub_82656C40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82656C48;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,13320
	ctx.r31.s64 = ctx.r11.s64 + 13320;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,13316(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13316);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82656c8c
	if (!ctx.cr0.eq) goto loc_82656C8C;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,25868
	ctx.r9.s64 = ctx.r9.s64 + 25868;
	// stw r11,13316(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13316, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,26104
	ctx.r3.s64 = ctx.r11.s64 + 26104;
	// bl 0x82a4c758
	ctx.lr = 0x82656C8C;
	sub_82A4C758(ctx, base);
loc_82656C8C:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// beq cr6,0x82656ca0
	if (ctx.cr6.eq) goto loc_82656CA0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82656a38
	ctx.lr = 0x82656CA0;
	sub_82656A38(ctx, base);
loc_82656CA0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82656CA8"))) PPC_WEAK_FUNC(sub_82656CA8);
PPC_FUNC_IMPL(__imp__sub_82656CA8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82658510
	sub_82658510(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82656CB8"))) PPC_WEAK_FUNC(sub_82656CB8);
PPC_FUNC_IMPL(__imp__sub_82656CB8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x826589d0
	sub_826589D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82656CC8"))) PPC_WEAK_FUNC(sub_82656CC8);
PPC_FUNC_IMPL(__imp__sub_82656CC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82656CD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82656d2c
	if (ctx.cr6.eq) goto loc_82656D2C;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// addi r31,r11,13328
	ctx.r31.s64 = ctx.r11.s64 + 13328;
	// lwz r11,13324(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13324);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82656d1c
	if (!ctx.cr0.eq) goto loc_82656D1C;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,25888
	ctx.r9.s64 = ctx.r9.s64 + 25888;
	// stw r11,13324(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13324, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,26080
	ctx.r3.s64 = ctx.r11.s64 + 26080;
	// bl 0x82a4c758
	ctx.lr = 0x82656D1C;
	sub_82A4C758(ctx, base);
loc_82656D1C:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82656d2c
	if (!ctx.cr6.eq) goto loc_82656D2C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82656d38
	goto loc_82656D38;
loc_82656D2C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826569c0
	ctx.lr = 0x82656D38;
	sub_826569C0(ctx, base);
loc_82656D38:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82656D40"))) PPC_WEAK_FUNC(sub_82656D40);
PPC_FUNC_IMPL(__imp__sub_82656D40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82656D48;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,13328
	ctx.r31.s64 = ctx.r11.s64 + 13328;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,13324(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13324);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82656d8c
	if (!ctx.cr0.eq) goto loc_82656D8C;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,25888
	ctx.r9.s64 = ctx.r9.s64 + 25888;
	// stw r11,13324(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13324, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,26080
	ctx.r3.s64 = ctx.r11.s64 + 26080;
	// bl 0x82a4c758
	ctx.lr = 0x82656D8C;
	sub_82A4C758(ctx, base);
loc_82656D8C:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// beq cr6,0x82656da0
	if (ctx.cr6.eq) goto loc_82656DA0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82656a38
	ctx.lr = 0x82656DA0;
	sub_82656A38(ctx, base);
loc_82656DA0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82656DA8"))) PPC_WEAK_FUNC(sub_82656DA8);
PPC_FUNC_IMPL(__imp__sub_82656DA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r11,r11,25704
	ctx.r11.s64 = ctx.r11.s64 + 25704;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82656de8
	if (ctx.cr6.eq) goto loc_82656DE8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82656DE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82656DE8:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r11,r11,16980
	ctx.r11.s64 = ctx.r11.s64 + 16980;
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

__attribute__((alias("__imp__sub_82656E08"))) PPC_WEAK_FUNC(sub_82656E08);
PPC_FUNC_IMPL(__imp__sub_82656E08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82656E10;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// lwz r9,16(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r29,r11,13328
	ctx.r29.s64 = ctx.r11.s64 + 13328;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// lwz r11,13324(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13324);
	// clrlwi. r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// bne 0x82656e6c
	if (!ctx.cr0.eq) goto loc_82656E6C;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,25888
	ctx.r9.s64 = ctx.r9.s64 + 25888;
	// stw r11,13324(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13324, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// addi r3,r11,26080
	ctx.r3.s64 = ctx.r11.s64 + 26080;
	// bl 0x82a4c758
	ctx.lr = 0x82656E6C;
	sub_82A4C758(ctx, base);
loc_82656E6C:
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
	ctx.lr = 0x82656E84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82656e90
	if (!ctx.cr0.eq) goto loc_82656E90;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82656E90:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82656ec0
	if (!ctx.cr6.eq) goto loc_82656EC0;
	// lis r10,30517
	ctx.r10.s64 = 1999962112;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// li r9,4
	ctx.r9.s64 = 4;
	// ori r10,r10,37888
	ctx.r10.u64 = ctx.r10.u64 | 37888;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82656f28
	if (ctx.cr6.lt) goto loc_82656F28;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x82656f28
	goto loc_82656F28;
loc_82656EC0:
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82656ee8
	if (!ctx.cr6.eq) goto loc_82656EE8;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82656f2c
	if (ctx.cr6.eq) goto loc_82656F2C;
	// bl 0x8265a9e0
	ctx.lr = 0x82656ED8;
	sub_8265A9E0(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// b 0x82656f2c
	goto loc_82656F2C;
loc_82656EE8:
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x82656ef8
	if (!ctx.cr6.eq) goto loc_82656EF8;
	// li r10,7
	ctx.r10.s64 = 7;
	// b 0x82656f04
	goto loc_82656F04;
loc_82656EF8:
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x82656f14
	if (!ctx.cr6.eq) goto loc_82656F14;
	// li r10,8
	ctx.r10.s64 = 8;
loc_82656F04:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// b 0x82656f2c
	goto loc_82656F2C;
loc_82656F14:
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82656f2c
	if (!ctx.cr6.eq) goto loc_82656F2C;
	// li r10,5
	ctx.r10.s64 = 5;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
loc_82656F28:
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_82656F2C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82656F38"))) PPC_WEAK_FUNC(sub_82656F38);
PPC_FUNC_IMPL(__imp__sub_82656F38) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x826586a8
	sub_826586A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82656F48"))) PPC_WEAK_FUNC(sub_82656F48);
PPC_FUNC_IMPL(__imp__sub_82656F48) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82658c48
	sub_82658C48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82656F58"))) PPC_WEAK_FUNC(sub_82656F58);
PPC_FUNC_IMPL(__imp__sub_82656F58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82656ff0
	if (ctx.cr6.eq) goto loc_82656FF0;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82656fd0
	if (!ctx.cr6.eq) goto loc_82656FD0;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82656fb4
	if (ctx.cr6.eq) goto loc_82656FB4;
	// li r3,152
	ctx.r3.s64 = 152;
	// bl 0x82333900
	ctx.lr = 0x82656F9C;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82656fac
	if (ctx.cr0.eq) goto loc_82656FAC;
	// bl 0x82656190
	ctx.lr = 0x82656FA8;
	sub_82656190(ctx, base);
	// b 0x82656fb0
	goto loc_82656FB0;
loc_82656FAC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82656FB0:
	// stw r3,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r3.u32);
loc_82656FB4:
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82656FCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8265700c
	goto loc_8265700C;
loc_82656FD0:
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x82656fe0
	if (!ctx.cr6.eq) goto loc_82656FE0;
loc_82656FD8:
	// addi r4,r30,28
	ctx.r4.s64 = ctx.r30.s64 + 28;
	// b 0x82656ff4
	goto loc_82656FF4;
loc_82656FE0:
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x82656fd8
	if (ctx.cr6.eq) goto loc_82656FD8;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8265700c
	if (!ctx.cr6.eq) goto loc_8265700C;
loc_82656FF0:
	// addi r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 + 20;
loc_82656FF4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265700C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8265700C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82412770
	ctx.lr = 0x82657018;
	sub_82412770(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82657030"))) PPC_WEAK_FUNC(sub_82657030);
PPC_FUNC_IMPL(__imp__sub_82657030) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82656da8
	ctx.lr = 0x82657050;
	sub_82656DA8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82657060
	if (ctx.cr0.eq) goto loc_82657060;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x82657060;
	sub_82332DB8(ctx, base);
loc_82657060:
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

__attribute__((alias("__imp__sub_82657080"))) PPC_WEAK_FUNC(sub_82657080);
PPC_FUNC_IMPL(__imp__sub_82657080) {
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
	// addi r31,r11,-21184
	ctx.r31.s64 = ctx.r11.s64 + -21184;
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82332d50
	ctx.lr = 0x826570B8;
	sub_82332D50(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r10,r3,24
	ctx.r10.s64 = ctx.r3.s64 * 24;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826570e4
	if (ctx.cr0.eq) goto loc_826570E4;
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
loc_826570E4:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82657108
	if (ctx.cr6.eq) goto loc_82657108;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,24
	ctx.r4.s64 = 24;
	// bl 0x82332c38
	ctx.lr = 0x82657108;
	sub_82332C38(ctx, base);
loc_82657108:
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

__attribute__((alias("__imp__sub_82657120"))) PPC_WEAK_FUNC(sub_82657120);
PPC_FUNC_IMPL(__imp__sub_82657120) {
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
	// addi r11,r11,-21184
	ctx.r11.s64 = ctx.r11.s64 + -21184;
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
	// ble cr6,0x8265718c
	if (!ctx.cr6.gt) goto loc_8265718C;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8265715C:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8265717c
	if (ctx.cr6.eq) goto loc_8265717C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8265715c
	if (ctx.cr6.lt) goto loc_8265715C;
	// b 0x8265718c
	goto loc_8265718C;
loc_8265717C:
	// mulli r11,r10,24
	ctx.r11.s64 = ctx.r10.s64 * 24;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
loc_8265718C:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826571b4
	if (ctx.cr6.eq) goto loc_826571B4;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826571AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826571b8
	goto loc_826571B8;
loc_826571B4:
	// bl 0x829bc030
	ctx.lr = 0x826571B8;
	sub_829BC030(ctx, base);
loc_826571B8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826571C8"))) PPC_WEAK_FUNC(sub_826571C8);
PPC_FUNC_IMPL(__imp__sub_826571C8) {
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
	// addi r11,r11,-21184
	ctx.r11.s64 = ctx.r11.s64 + -21184;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82657228
	if (!ctx.cr6.gt) goto loc_82657228;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_826571F4:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82657214
	if (ctx.cr6.eq) goto loc_82657214;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x826571f4
	if (ctx.cr6.lt) goto loc_826571F4;
	// b 0x82657228
	goto loc_82657228;
loc_82657214:
	// mulli r11,r10,24
	ctx.r11.s64 = ctx.r10.s64 * 24;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82657230
	if (!ctx.cr6.eq) goto loc_82657230;
loc_82657228:
	// bl 0x829bc0e0
	ctx.lr = 0x8265722C;
	sub_829BC0E0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82657230:
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

__attribute__((alias("__imp__sub_82657248"))) PPC_WEAK_FUNC(sub_82657248);
PPC_FUNC_IMPL(__imp__sub_82657248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r11,r11,-21184
	ctx.r11.s64 = ctx.r11.s64 + -21184;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x826572c8
	if (!ctx.cr6.gt) goto loc_826572C8;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82657284:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r31
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x826572a4
	if (ctx.cr6.eq) goto loc_826572A4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82657284
	if (ctx.cr6.lt) goto loc_82657284;
	// b 0x826572c8
	goto loc_826572C8;
loc_826572A4:
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
	ctx.lr = 0x826572C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x826572d4
	if (!ctx.cr0.eq) goto loc_826572D4;
loc_826572C8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829bc140
	ctx.lr = 0x826572D4;
	sub_829BC140(ctx, base);
loc_826572D4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826572F0"))) PPC_WEAK_FUNC(sub_826572F0);
PPC_FUNC_IMPL(__imp__sub_826572F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x826572F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x829bc540
	ctx.lr = 0x82657304;
	sub_829BC540(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// addi r11,r11,24456
	ctx.r11.s64 = ctx.r11.s64 + 24456;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// lis r8,-32225
	ctx.r8.s64 = -2111897600;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r7,-32225
	ctx.r7.s64 = -2111897600;
	// addi r10,r10,25464
	ctx.r10.s64 = ctx.r10.s64 + 25464;
	// addi r9,r9,25516
	ctx.r9.s64 = ctx.r9.s64 + 25516;
	// addi r11,r8,25804
	ctx.r11.s64 = ctx.r8.s64 + 25804;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r28,r7,25800
	ctx.r28.s64 = ctx.r7.s64 + 25800;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,1412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1412, ctx.r11.u32);
	// stw r28,1420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1420, ctx.r28.u32);
	// addi r29,r31,1412
	ctx.r29.s64 = ctx.r31.s64 + 1412;
	// stw r30,1440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1440, ctx.r30.u32);
	// stw r30,1444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1444, ctx.r30.u32);
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// stw r30,1448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1448, ctx.r30.u32);
	// stw r30,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r30.u32);
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
	// bl 0x8265a8c0
	ctx.lr = 0x82657364;
	sub_8265A8C0(ctx, base);
	// stw r28,1460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1460, ctx.r28.u32);
	// stw r30,1480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1480, ctx.r30.u32);
	// addi r3,r29,48
	ctx.r3.s64 = ctx.r29.s64 + 48;
	// stw r30,1484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1484, ctx.r30.u32);
	// stw r30,1488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1488, ctx.r30.u32);
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
	// stw r30,1492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1492, ctx.r30.u32);
	// bl 0x8265a8c0
	ctx.lr = 0x82657384;
	sub_8265A8C0(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r30,1416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1416, ctx.r30.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,1504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1504, ctx.r11.u32);
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// stw r30,1508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1508, ctx.r30.u32);
	// stw r30,1512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1512, ctx.r30.u32);
	// stw r30,1516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1516, ctx.r30.u32);
	// stw r30,1520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1520, ctx.r30.u32);
	// stw r30,1500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1500, ctx.r30.u32);
	// stw r11,1528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1528, ctx.r11.u32);
	// stw r30,1532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1532, ctx.r30.u32);
	// stw r30,1536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1536, ctx.r30.u32);
	// stw r30,1540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1540, ctx.r30.u32);
	// stw r30,1544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1544, ctx.r30.u32);
	// stw r30,1524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1524, ctx.r30.u32);
	// stw r11,1560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1560, ctx.r11.u32);
	// stw r30,1564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1564, ctx.r30.u32);
	// stw r30,1568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1568, ctx.r30.u32);
	// stw r30,1572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1572, ctx.r30.u32);
	// stw r30,1576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1576, ctx.r30.u32);
	// stw r30,1556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1556, ctx.r30.u32);
	// stw r11,1584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1584, ctx.r11.u32);
	// stw r30,1588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1588, ctx.r30.u32);
	// stw r30,1592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1592, ctx.r30.u32);
	// stw r30,1596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1596, ctx.r30.u32);
	// stw r30,1600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1600, ctx.r30.u32);
	// stw r30,1580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1580, ctx.r30.u32);
	// stw r10,956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 956, ctx.r10.u32);
	// stw r10,1024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1024, ctx.r10.u32);
	// stw r30,1032(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1032, ctx.r30.u32);
	// stw r10,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r10.u32);
	// stw r30,1408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1408, ctx.r30.u32);
	// stw r30,1548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1548, ctx.r30.u32);
	// stw r30,1552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1552, ctx.r30.u32);
	// stw r30,1416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1416, ctx.r30.u32);
	// bl 0x8265a8c0
	ctx.lr = 0x82657418;
	sub_8265A8C0(ctx, base);
	// addi r3,r29,48
	ctx.r3.s64 = ctx.r29.s64 + 48;
	// bl 0x8265a8c0
	ctx.lr = 0x82657420;
	sub_8265A8C0(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// stw r10,2240(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2240, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82657440"))) PPC_WEAK_FUNC(sub_82657440);
PPC_FUNC_IMPL(__imp__sub_82657440) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82657448;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// addi r11,r11,24456
	ctx.r11.s64 = ctx.r11.s64 + 24456;
	// addi r10,r10,25464
	ctx.r10.s64 = ctx.r10.s64 + 25464;
	// addi r9,r9,25516
	ctx.r9.s64 = ctx.r9.s64 + 25516;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r3,r31,1580
	ctx.r3.s64 = ctx.r31.s64 + 1580;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// bl 0x8239d768
	ctx.lr = 0x8265747C;
	sub_8239D768(ctx, base);
	// addi r3,r31,1556
	ctx.r3.s64 = ctx.r31.s64 + 1556;
	// bl 0x8239d768
	ctx.lr = 0x82657484;
	sub_8239D768(ctx, base);
	// addi r29,r31,1524
	ctx.r29.s64 = ctx.r31.s64 + 1524;
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r5,1540(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1540);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332ca8
	ctx.lr = 0x826574A0;
	sub_82332CA8(ctx, base);
	// lwz r3,1536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1536);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826574b0
	if (ctx.cr6.eq) goto loc_826574B0;
	// bl 0x82332db8
	ctx.lr = 0x826574B0;
	sub_82332DB8(ctx, base);
loc_826574B0:
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r30,r31,1500
	ctx.r30.s64 = ctx.r31.s64 + 1500;
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
	// lwz r5,1516(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1516);
	// bl 0x82332ca8
	ctx.lr = 0x826574DC;
	sub_82332CA8(ctx, base);
	// lwz r3,1512(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1512);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826574ec
	if (ctx.cr6.eq) goto loc_826574EC;
	// bl 0x82332db8
	ctx.lr = 0x826574EC;
	sub_82332DB8(ctx, base);
loc_826574EC:
	// stw r28,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r28.u32);
	// addi r3,r31,1412
	ctx.r3.s64 = ctx.r31.s64 + 1412;
	// stw r28,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r28.u32);
	// stw r28,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r28.u32);
	// bl 0x82656458
	ctx.lr = 0x82657500;
	sub_82656458(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829bc9e8
	ctx.lr = 0x82657508;
	sub_829BC9E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82657510"))) PPC_WEAK_FUNC(sub_82657510);
PPC_FUNC_IMPL(__imp__sub_82657510) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82657518;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// stw r26,1408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1408, ctx.r26.u32);
	// bl 0x8265a0a8
	ctx.lr = 0x8265752C;
	sub_8265A0A8(ctx, base);
	// lwz r11,1572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1572);
	// addic. r30,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r30.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x8265758c
	if (ctx.cr0.lt) goto loc_8265758C;
	// addi r27,r31,1556
	ctx.r27.s64 = ctx.r31.s64 + 1556;
	// rlwinm r29,r30,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
loc_82657540:
	// lwz r11,1568(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1568);
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
	// lwzx r28,r11,r29
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// bl 0x82332ca8
	ctx.lr = 0x82657560;
	sub_82332CA8(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82657580
	if (ctx.cr6.eq) goto loc_82657580;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82657580;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82657580:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
	// bge 0x82657540
	if (!ctx.cr0.lt) goto loc_82657540;
loc_8265758C:
	// lwz r11,1596(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1596);
	// addic. r30,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r30.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x826575ec
	if (ctx.cr0.lt) goto loc_826575EC;
	// addi r27,r31,1580
	ctx.r27.s64 = ctx.r31.s64 + 1580;
	// rlwinm r29,r30,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
loc_826575A0:
	// lwz r11,1592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1592);
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
	// lwzx r28,r11,r29
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// bl 0x82332ca8
	ctx.lr = 0x826575C0;
	sub_82332CA8(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x826575e0
	if (ctx.cr6.eq) goto loc_826575E0;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826575E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826575E0:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
	// bge 0x826575a0
	if (!ctx.cr0.lt) goto loc_826575A0;
loc_826575EC:
	// lwz r11,1516(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1516);
	// addic. r30,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r30.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x8265764c
	if (ctx.cr0.lt) goto loc_8265764C;
	// addi r27,r31,1500
	ctx.r27.s64 = ctx.r31.s64 + 1500;
	// rlwinm r29,r30,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
loc_82657600:
	// lwz r11,1512(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1512);
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
	// lwzx r28,r11,r29
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// bl 0x82332ca8
	ctx.lr = 0x82657620;
	sub_82332CA8(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82657640
	if (ctx.cr6.eq) goto loc_82657640;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82657640;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82657640:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
	// bge 0x82657600
	if (!ctx.cr0.lt) goto loc_82657600;
loc_8265764C:
	// lwz r11,1544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1544);
	// addi r3,r31,1524
	ctx.r3.s64 = ctx.r31.s64 + 1524;
	// stw r26,1540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1540, ctx.r26.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82657670
	if (ctx.cr6.eq) goto loc_82657670;
	// stw r26,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r26.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82332c38
	ctx.lr = 0x82657670;
	sub_82332C38(ctx, base);
loc_82657670:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lwz r9,2240(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2240);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8265768c
	if (!ctx.cr6.eq) goto loc_8265768C;
	// stw r26,2240(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2240, ctx.r26.u32);
loc_8265768C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829bd978
	ctx.lr = 0x82657694;
	sub_829BD978(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826576A0"))) PPC_WEAK_FUNC(sub_826576A0);
PPC_FUNC_IMPL(__imp__sub_826576A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,1416(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1416);
	// stw r10,1408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1408, ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826576d4
	if (ctx.cr6.eq) goto loc_826576D4;
	// bl 0x82659360
	ctx.lr = 0x826576D4;
	sub_82659360(ctx, base);
loc_826576D4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c6fb8
	ctx.lr = 0x826576E0;
	sub_829C6FB8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826576F8"))) PPC_WEAK_FUNC(sub_826576F8);
PPC_FUNC_IMPL(__imp__sub_826576F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x829c5148
	sub_829C5148(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82657700"))) PPC_WEAK_FUNC(sub_82657700);
PPC_FUNC_IMPL(__imp__sub_82657700) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82657708;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x829be2e8
	ctx.lr = 0x82657714;
	sub_829BE2E8(ctx, base);
	// lwz r11,1408(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1408);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826577ac
	if (!ctx.cr6.eq) goto loc_826577AC;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lwz r4,1312(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1312);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82657744
	if (ctx.cr6.eq) goto loc_82657744;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8265773C;
	sub_829B9720(ctx, base);
	// bl 0x82409c40
	ctx.lr = 0x82657740;
	sub_82409C40(ctx, base);
	// b 0x82657748
	goto loc_82657748;
loc_82657744:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82657748:
	// bl 0x82411c50
	ctx.lr = 0x8265774C;
	sub_82411C50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826577ac
	if (ctx.cr0.eq) goto loc_826577AC;
	// lwz r31,1412(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1412);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x826577ac
	if (ctx.cr6.eq) goto loc_826577AC;
	// bl 0x82332278
	ctx.lr = 0x82657764;
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
	ctx.lr = 0x8265777C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82657788
	if (!ctx.cr0.eq) goto loc_82657788;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82657788:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826577a8
	if (ctx.cr6.eq) goto loc_826577A8;
	// lwz r11,1408(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1408);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x826577a8
	if (ctx.cr6.eq) goto loc_826577A8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,80(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// bl 0x829bd3a8
	ctx.lr = 0x826577A8;
	sub_829BD3A8(ctx, base);
loc_826577A8:
	// stw r31,1408(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1408, ctx.r31.u32);
loc_826577AC:
	// lwz r11,960(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 960);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8265782c
	if (!ctx.cr6.eq) goto loc_8265782C;
	// lwz r11,1572(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1572);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82657824
	if (ctx.cr6.eq) goto loc_82657824;
	// addi r31,r29,1556
	ctx.r31.s64 = ctx.r29.s64 + 1556;
loc_826577C8:
	// lwz r11,1568(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1568);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826577E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332ca8
	ctx.lr = 0x82657800;
	sub_82332CA8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82657818;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1572(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1572);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826577c8
	if (!ctx.cr6.eq) goto loc_826577C8;
loc_82657824:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82657db8
	ctx.lr = 0x8265782C;
	sub_82657DB8(ctx, base);
loc_8265782C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82657b88
	ctx.lr = 0x82657834;
	sub_82657B88(ctx, base);
	// lwz r11,1416(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1416);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826578cc
	if (ctx.cr6.eq) goto loc_826578CC;
	// lwz r11,1540(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1540);
	// addic. r30,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r30.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x826578cc
	if (ctx.cr0.lt) goto loc_826578CC;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// rlwinm r28,r30,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r27,r11,-22252
	ctx.r27.s64 = ctx.r11.s64 + -22252;
loc_82657858:
	// lwz r11,1536(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1536);
	// lwzx r31,r28,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82657878
	if (!ctx.cr6.eq) goto loc_82657878;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8265aad0
	ctx.lr = 0x82657874;
	sub_8265AAD0(ctx, base);
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
loc_82657878:
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826578c0
	if (ctx.cr6.eq) goto loc_826578C0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x8265788C;
	sub_82816528(ctx, base);
	// bl 0x828e0d10
	ctx.lr = 0x82657890;
	sub_828E0D10(ctx, base);
	// bl 0x82438250
	ctx.lr = 0x82657894;
	sub_82438250(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826578a8
	if (ctx.cr0.eq) goto loc_826578A8;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,148(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// bl 0x827020e8
	ctx.lr = 0x826578A8;
	sub_827020E8(ctx, base);
loc_826578A8:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r29,1524
	ctx.r3.s64 = ctx.r29.s64 + 1524;
	// bl 0x82332ca8
	ctx.lr = 0x826578C0;
	sub_82332CA8(ctx, base);
loc_826578C0:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r28,r28,-4
	ctx.r28.s64 = ctx.r28.s64 + -4;
	// bge 0x82657858
	if (!ctx.cr0.lt) goto loc_82657858;
loc_826578CC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826578e0
	ctx.lr = 0x826578D4;
	sub_826578E0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826578E0"))) PPC_WEAK_FUNC(sub_826578E0);
PPC_FUNC_IMPL(__imp__sub_826578E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x826578E8;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,1408(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1408);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82657b78
	if (ctx.cr6.eq) goto loc_82657B78;
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82657b78
	if (!ctx.cr0.eq) goto loc_82657B78;
	// lwz r11,1416(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1416);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82657b78
	if (!ctx.cr6.eq) goto loc_82657B78;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,560(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 560);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82657928;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,10548(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// lfs f31,-32516(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32516);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x82439c68
	ctx.lr = 0x8265794C;
	sub_82439C68(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826579d0
	if (!ctx.cr6.gt) goto loc_826579D0;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_82657960:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x826579bc
	if (ctx.cr6.eq) goto loc_826579BC;
	// lwz r8,84(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// rlwinm. r8,r8,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x826579bc
	if (!ctx.cr0.eq) goto loc_826579BC;
	// lfs f13,624(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,628(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 628);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f12,620(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,620(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 620);
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
	// bge cr6,0x826579bc
	if (!ctx.cr6.lt) goto loc_826579BC;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_826579BC:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x82657960
	if (!ctx.cr0.eq) goto loc_82657960;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82657a54
	if (!ctx.cr6.eq) goto loc_82657A54;
loc_826579D0:
	// lwz r11,1552(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1552);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826579e0
	if (ctx.cr6.eq) goto loc_826579E0;
	// stw r27,1552(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1552, ctx.r27.u32);
loc_826579E0:
	// lwz r11,1548(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1548);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82657b70
	if (ctx.cr6.eq) goto loc_82657B70;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,-17336
	ctx.r3.s64 = ctx.r11.s64 + -17336;
	// bl 0x82816528
	ctx.lr = 0x826579F8;
	sub_82816528(ctx, base);
	// bl 0x828e0d10
	ctx.lr = 0x826579FC;
	sub_828E0D10(ctx, base);
	// bl 0x82438370
	ctx.lr = 0x82657A00;
	sub_82438370(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82657b70
	if (ctx.cr0.eq) goto loc_82657B70;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r4,1312(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1312);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82657a2c
	if (ctx.cr6.eq) goto loc_82657A2C;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82657A24;
	sub_829B9720(ctx, base);
	// bl 0x82409c40
	ctx.lr = 0x82657A28;
	sub_82409C40(ctx, base);
	// b 0x82657a30
	goto loc_82657A30;
loc_82657A2C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82657A30:
	// bl 0x82438130
	ctx.lr = 0x82657A34;
	sub_82438130(ctx, base);
	// lwz r11,2868(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2868);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82657b6c
	if (!ctx.cr6.eq) goto loc_82657B6C;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82657b6c
	if (ctx.cr6.eq) goto loc_82657B6C;
	// bl 0x8263fa58
	ctx.lr = 0x82657A4C;
	sub_8263FA58(ctx, base);
	// stw r27,2868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2868, ctx.r27.u32);
	// b 0x82657b6c
	goto loc_82657B6C;
loc_82657A54:
	// lwz r11,1416(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1416);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82657b70
	if (!ctx.cr6.eq) goto loc_82657B70;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,-17336
	ctx.r3.s64 = ctx.r11.s64 + -17336;
	// bl 0x82816528
	ctx.lr = 0x82657A6C;
	sub_82816528(ctx, base);
	// bl 0x828e0d10
	ctx.lr = 0x82657A70;
	sub_828E0D10(ctx, base);
	// bl 0x82438370
	ctx.lr = 0x82657A74;
	sub_82438370(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82657b70
	if (ctx.cr0.eq) goto loc_82657B70;
	// lwz r7,996(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 996);
	// lwz r11,1552(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1552);
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82657b0c
	if (ctx.cr6.eq) goto loc_82657B0C;
	// lwz r11,8420(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8420);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82657b0c
	if (!ctx.cr6.eq) goto loc_82657B0C;
	// stw r7,1552(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1552, ctx.r7.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r6,996(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 996);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826d13b8
	ctx.lr = 0x82657AB0;
	sub_826D13B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82657ac0
	if (ctx.cr0.eq) goto loc_82657AC0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1548(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1548, ctx.r11.u32);
loc_82657AC0:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// ld r8,8472(r30)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8472);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r11,912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// lwz r10,152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82657b70
	if (!ctx.cr6.gt) goto loc_82657B70;
	// lwz r11,148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
loc_82657AE4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82657af8
	if (ctx.cr6.eq) goto loc_82657AF8;
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// cmpld cr6,r7,r8
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, ctx.r8.u64, ctx.xer);
	// beq cr6,0x82657b70
	if (ctx.cr6.eq) goto loc_82657B70;
loc_82657AF8:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 + 88;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82657ae4
	if (ctx.cr6.lt) goto loc_82657AE4;
	// b 0x82657b70
	goto loc_82657B70;
loc_82657B0C:
	// lwz r11,1548(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1548);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82657b70
	if (ctx.cr6.eq) goto loc_82657B70;
	// lwz r11,8420(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8420);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82657b70
	if (ctx.cr6.eq) goto loc_82657B70;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r4,1312(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1312);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82657b48
	if (ctx.cr6.eq) goto loc_82657B48;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82657B40;
	sub_829B9720(ctx, base);
	// bl 0x82409c40
	ctx.lr = 0x82657B44;
	sub_82409C40(ctx, base);
	// b 0x82657b4c
	goto loc_82657B4C;
loc_82657B48:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82657B4C:
	// bl 0x82438130
	ctx.lr = 0x82657B50;
	sub_82438130(ctx, base);
	// lwz r11,2868(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2868);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82657b6c
	if (!ctx.cr6.eq) goto loc_82657B6C;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82657b6c
	if (ctx.cr6.eq) goto loc_82657B6C;
	// bl 0x8263fa58
	ctx.lr = 0x82657B68;
	sub_8263FA58(ctx, base);
	// stw r27,2868(r29)
	PPC_STORE_U32(ctx.r29.u32 + 2868, ctx.r27.u32);
loc_82657B6C:
	// stw r27,1548(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1548, ctx.r27.u32);
loc_82657B70:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8239d768
	ctx.lr = 0x82657B78;
	sub_8239D768(ctx, base);
loc_82657B78:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82657B88"))) PPC_WEAK_FUNC(sub_82657B88);
PPC_FUNC_IMPL(__imp__sub_82657B88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82657B90;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r10,1596(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1596);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82657c9c
	if (ctx.cr6.eq) goto loc_82657C9C;
	// addic. r31,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r31.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// blt 0x82657c28
	if (ctx.cr0.lt) goto loc_82657C28;
	// addi r27,r28,1580
	ctx.r27.s64 = ctx.r28.s64 + 1580;
	// rlwinm r30,r31,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
loc_82657BD4:
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r29,1592(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1592);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82332d50
	ctx.lr = 0x82657BEC;
	sub_82332D50(ctx, base);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82657c04
	if (ctx.cr0.eq) goto loc_82657C04;
	// lwzx r10,r29,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82657C04:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82332ca8
	ctx.lr = 0x82657C1C;
	sub_82332CA8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
	// bge 0x82657bd4
	if (!ctx.cr0.lt) goto loc_82657BD4;
loc_82657C28:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addic. r31,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r31.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82657c94
	if (ctx.cr0.lt) goto loc_82657C94;
	// rlwinm r30,r31,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
loc_82657C38:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwzx r29,r30,r11
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82657C58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82332ca8
	ctx.lr = 0x82657C70;
	sub_82332CA8(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82657C88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
	// bge 0x82657c38
	if (!ctx.cr0.lt) goto loc_82657C38;
loc_82657C94:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8239d768
	ctx.lr = 0x82657C9C;
	sub_8239D768(ctx, base);
loc_82657C9C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82657CA8"))) PPC_WEAK_FUNC(sub_82657CA8);
PPC_FUNC_IMPL(__imp__sub_82657CA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,1416(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1416);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82657d4c
	if (!ctx.cr6.eq) goto loc_82657D4C;
	// lwz r9,1456(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1456);
	// addi r11,r3,1412
	ctx.r11.s64 = ctx.r3.s64 + 1412;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82657ccc
	if (ctx.cr6.eq) goto loc_82657CCC;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// b 0x82657ce0
	goto loc_82657CE0;
loc_82657CCC:
	// lwz r9,84(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82657ce0
	if (!ctx.cr6.eq) goto loc_82657CE0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82657CE0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82657cfc
	if (ctx.cr6.eq) goto loc_82657CFC;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82657d58
	if (!ctx.cr0.eq) goto loc_82657D58;
loc_82657CFC:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82657d4c
	if (!ctx.cr6.eq) goto loc_82657D4C;
	// lwz r9,1456(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1456);
	// addi r11,r3,1412
	ctx.r11.s64 = ctx.r3.s64 + 1412;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82657d1c
	if (ctx.cr6.eq) goto loc_82657D1C;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// b 0x82657d30
	goto loc_82657D30;
loc_82657D1C:
	// lwz r9,84(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82657d30
	if (!ctx.cr6.eq) goto loc_82657D30;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82657D30:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82657d4c
	if (ctx.cr6.eq) goto loc_82657D4C;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82657d58
	if (ctx.cr6.eq) goto loc_82657D58;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82657d58
	if (ctx.cr6.eq) goto loc_82657D58;
loc_82657D4C:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82657D58:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82657D60"))) PPC_WEAK_FUNC(sub_82657D60);
PPC_FUNC_IMPL(__imp__sub_82657D60) {
	PPC_FUNC_PROLOGUE();
	// lwz r8,1516(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1516);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82657da4
	if (!ctx.cr6.gt) goto loc_82657DA4;
	// lwz r7,1512(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1512);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_82657D78:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,12(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpw cr6,r6,r4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x82657dac
	if (ctx.cr6.eq) goto loc_82657DAC;
	// lwz r10,52(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x82657dac
	if (ctx.cr6.eq) goto loc_82657DAC;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82657d78
	if (ctx.cr6.lt) goto loc_82657D78;
loc_82657DA4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82657DAC:
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r7
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82657DB8"))) PPC_WEAK_FUNC(sub_82657DB8);
PPC_FUNC_IMPL(__imp__sub_82657DB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x82657DC0;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,1516(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1516);
	// addic. r26,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r26.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// blt 0x82657f54
	if (ctx.cr0.lt) goto loc_82657F54;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// rlwinm r25,r26,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r28,r10,16980
	ctx.r28.s64 = ctx.r10.s64 + 16980;
	// addi r27,r11,25660
	ctx.r27.s64 = ctx.r11.s64 + 25660;
loc_82657DEC:
	// lwz r11,1512(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1512);
	// lwzx r31,r25,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r11.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x82657f18
	if (ctx.cr6.eq) goto loc_82657F18;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82657f18
	if (ctx.cr6.eq) goto loc_82657F18;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82657e98
	if (!ctx.cr6.eq) goto loc_82657E98;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82657e24
	if (ctx.cr6.eq) goto loc_82657E24;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82657e98
	if (!ctx.cr6.eq) goto loc_82657E98;
loc_82657E24:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82657e38
	if (ctx.cr6.eq) goto loc_82657E38;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82657e98
	if (!ctx.cr6.eq) goto loc_82657E98;
loc_82657E38:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,11
	ctx.r10.s64 = 11;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r4,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// bl 0x826580c8
	ctx.lr = 0x82657E74;
	sub_826580C8(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r4,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// bl 0x826580c8
	ctx.lr = 0x82657E90;
	sub_826580C8(ctx, base);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// b 0x82657f48
	goto loc_82657F48;
loc_82657E98:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x82657f48
	if (!ctx.cr6.eq) goto loc_82657F48;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82657f48
	if (!ctx.cr6.eq) goto loc_82657F48;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82657f48
	if (!ctx.cr6.eq) goto loc_82657F48;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,13
	ctx.r10.s64 = 13;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// bl 0x826580c8
	ctx.lr = 0x82657EF4;
	sub_826580C8(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// bl 0x826580c8
	ctx.lr = 0x82657F10;
	sub_826580C8(ctx, base);
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// b 0x82657f48
	goto loc_82657F48;
loc_82657F18:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r29,1500
	ctx.r3.s64 = ctx.r29.s64 + 1500;
	// bl 0x82332ca8
	ctx.lr = 0x82657F30;
	sub_82332CA8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82657F48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82657F48:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r25,r25,-4
	ctx.r25.s64 = ctx.r25.s64 + -4;
	// bge 0x82657dec
	if (!ctx.cr0.lt) goto loc_82657DEC;
loc_82657F54:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82657F60"))) PPC_WEAK_FUNC(sub_82657F60);
PPC_FUNC_IMPL(__imp__sub_82657F60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82657F68;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,12(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82657fc8
	if (ctx.cr6.eq) goto loc_82657FC8;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8265a4b8
	ctx.lr = 0x82657F84;
	sub_8265A4B8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82657FA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r29,1556
	ctx.r3.s64 = ctx.r29.s64 + 1556;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82332d50
	ctx.lr = 0x82657FB4;
	sub_82332D50(ctx, base);
	// lwz r11,1568(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1568);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82657fc8
	if (ctx.cr0.eq) goto loc_82657FC8;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
loc_82657FC8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82657FD0"))) PPC_WEAK_FUNC(sub_82657FD0);
PPC_FUNC_IMPL(__imp__sub_82657FD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82657FD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,12(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82658038
	if (ctx.cr6.eq) goto loc_82658038;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8265a4b8
	ctx.lr = 0x82657FF4;
	sub_8265A4B8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82658010;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r29,1580
	ctx.r3.s64 = ctx.r29.s64 + 1580;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82332d50
	ctx.lr = 0x82658024;
	sub_82332D50(ctx, base);
	// lwz r11,1592(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1592);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82658038
	if (ctx.cr0.eq) goto loc_82658038;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
loc_82658038:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82658040"))) PPC_WEAK_FUNC(sub_82658040);
PPC_FUNC_IMPL(__imp__sub_82658040) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82658048;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,1408(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1408);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826580bc
	if (ctx.cr6.eq) goto loc_826580BC;
	// lwz r11,996(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 996);
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// lwz r9,16(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r10,r10,25540
	ctx.r10.s64 = ctx.r10.s64 + 25540;
	// stw r4,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// lis r8,-32225
	ctx.r8.s64 = -2111897600;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// addi r3,r8,24408
	ctx.r3.s64 = ctx.r8.s64 + 24408;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x82816528
	ctx.lr = 0x82658094;
	sub_82816528(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r3,13024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// bl 0x8282c950
	ctx.lr = 0x826580AC;
	sub_8282C950(ctx, base);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// bl 0x8265a458
	ctx.lr = 0x826580BC;
	sub_8265A458(ctx, base);
loc_826580BC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826580C8"))) PPC_WEAK_FUNC(sub_826580C8);
PPC_FUNC_IMPL(__imp__sub_826580C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x826580D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// lwz r9,10548(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10548);
	// lwz r8,1740(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1740);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8265812c
	if (!ctx.cr6.gt) goto loc_8265812C;
	// lwz r6,1736(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1736);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
loc_826580FC:
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82658110
	if (ctx.cr6.eq) goto loc_82658110;
	// lwz r10,80(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// b 0x82658114
	goto loc_82658114;
loc_82658110:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82658114:
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x826581b8
	if (ctx.cr6.eq) goto loc_826581B8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x826580fc
	if (ctx.cr6.lt) goto loc_826580FC;
loc_8265812C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82658130:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82658208
	if (ctx.cr6.eq) goto loc_82658208;
	// lwz r10,1608(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1608);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82658208
	if (ctx.cr6.eq) goto loc_82658208;
	// lwz r11,824(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 824);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// lwz r7,996(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 996);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82658208
	if (!ctx.cr6.gt) goto loc_82658208;
	// lwz r9,820(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 820);
loc_8265815C:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r10,1904(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1904);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8265817c
	if (ctx.cr6.eq) goto loc_8265817C;
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8265817c
	if (!ctx.cr6.eq) goto loc_8265817C;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
loc_8265817C:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x8265815c
	if (!ctx.cr0.eq) goto loc_8265815C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82658208
	if (ctx.cr6.eq) goto loc_82658208;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// addi r11,r11,25540
	ctx.r11.s64 = ctx.r11.s64 + 25540;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x826581c4
	if (ctx.cr6.eq) goto loc_826581C4;
	// lwz r11,16(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// b 0x826581c8
	goto loc_826581C8;
loc_826581B8:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// b 0x82658130
	goto loc_82658130;
loc_826581C4:
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
loc_826581C8:
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,24432
	ctx.r3.s64 = ctx.r11.s64 + 24432;
	// bl 0x82816528
	ctx.lr = 0x826581D8;
	sub_82816528(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,13024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// bl 0x8282c710
	ctx.lr = 0x826581F8;
	sub_8282C710(ctx, base);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8265a458
	ctx.lr = 0x82658208;
	sub_8265A458(ctx, base);
loc_82658208:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82658210"))) PPC_WEAK_FUNC(sub_82658210);
PPC_FUNC_IMPL(__imp__sub_82658210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x82658218;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lwz r11,10548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10548);
	// lwz r7,1740(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1740);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x8265827c
	if (!ctx.cr6.gt) goto loc_8265827C;
	// lwz r6,1736(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1736);
	// lwz r5,12(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
loc_8265824C:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82658260
	if (ctx.cr6.eq) goto loc_82658260;
	// lwz r8,80(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 80);
	// b 0x82658264
	goto loc_82658264;
loc_82658260:
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
loc_82658264:
	// cmpw cr6,r8,r5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x826582a4
	if (ctx.cr6.eq) goto loc_826582A4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8265824c
	if (ctx.cr6.lt) goto loc_8265824C;
loc_8265827C:
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
loc_82658280:
	// lwz r4,1312(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1312);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x826582b0
	if (ctx.cr6.eq) goto loc_826582B0;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82658298;
	sub_829B9720(ctx, base);
	// bl 0x82409c40
	ctx.lr = 0x8265829C;
	sub_82409C40(ctx, base);
	// lwz r11,10548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10548);
	// b 0x826582b4
	goto loc_826582B4;
loc_826582A4:
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r27,r10,r6
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// b 0x82658280
	goto loc_82658280;
loc_826582B0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_826582B4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82658318
	if (ctx.cr6.eq) goto loc_82658318;
	// lwz r4,1312(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1312);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x826582dc
	if (ctx.cr6.eq) goto loc_826582DC;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x826582D0;
	sub_829B9720(ctx, base);
	// bl 0x82409c40
	ctx.lr = 0x826582D4;
	sub_82409C40(ctx, base);
	// lwz r11,10548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10548);
	// b 0x826582e0
	goto loc_826582E0;
loc_826582DC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_826582E0:
	// lwz r10,1412(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1412);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82658318
	if (ctx.cr6.eq) goto loc_82658318;
	// lwz r4,1312(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1312);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82658308
	if (ctx.cr6.eq) goto loc_82658308;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82658300;
	sub_829B9720(ctx, base);
	// bl 0x82409c40
	ctx.lr = 0x82658304;
	sub_82409C40(ctx, base);
	// b 0x8265830c
	goto loc_8265830C;
loc_82658308:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8265830C:
	// lwz r3,1412(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1412);
	// bl 0x824a0b58
	ctx.lr = 0x82658314;
	sub_824A0B58(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82658318:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,656(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 656);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82658348
	if (!ctx.cr6.eq) goto loc_82658348;
	// lwz r11,652(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 652);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82658344
	if (ctx.cr6.eq) goto loc_82658344;
	// lwz r3,140(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82658348
	if (!ctx.cr6.eq) goto loc_82658348;
loc_82658344:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82658348:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x826583dc
	if (ctx.cr6.eq) goto loc_826583DC;
	// lwz r11,1608(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1608);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826583dc
	if (ctx.cr6.eq) goto loc_826583DC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826583dc
	if (ctx.cr6.eq) goto loc_826583DC;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,80(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r11,300(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 300);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82658378;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r28,1
	ctx.r28.s64 = 1;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82658394
	if (ctx.cr0.eq) goto loc_82658394;
	// cmplw cr6,r27,r29
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82658394
	if (ctx.cr6.eq) goto loc_82658394;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// b 0x82658398
	goto loc_82658398;
loc_82658394:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82658398:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826583dc
	if (ctx.cr6.eq) goto loc_826583DC;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,12(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// bl 0x82657d60
	ctx.lr = 0x826583AC;
	sub_82657D60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826583f8
	if (ctx.cr0.eq) goto loc_826583F8;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x826583dc
	if (!ctx.cr6.eq) goto loc_826583DC;
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x826583f0
	if (ctx.cr6.eq) goto loc_826583F0;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x826583f0
	if (ctx.cr6.eq) goto loc_826583F0;
loc_826583DC:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,8(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,12(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// bl 0x82658fe8
	ctx.lr = 0x826583F0;
	sub_82658FE8(ctx, base);
loc_826583F0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
loc_826583F8:
	// li r3,88
	ctx.r3.s64 = 88;
	// bl 0x82333900
	ctx.lr = 0x82658400;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82658464
	if (ctx.cr0.eq) goto loc_82658464;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// addi r11,r11,25804
	ctx.r11.s64 = ctx.r11.s64 + 25804;
	// addi r29,r10,25800
	ctx.r29.s64 = ctx.r10.s64 + 25800;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x8265a8c0
	ctx.lr = 0x8265843C;
	sub_8265A8C0(ctx, base);
	// stw r29,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r29.u32);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// bl 0x8265a8c0
	ctx.lr = 0x8265845C;
	sub_8265A8C0(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// b 0x82658468
	goto loc_82658468;
loc_82658464:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_82658468:
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// addi r29,r25,1500
	ctx.r29.s64 = ctx.r25.s64 + 1500;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// stw r28,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
	// lwz r9,12(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// stw r9,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r9.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r28,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r28.u32);
	// lwz r11,1516(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1516);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826584d4
	if (!ctx.cr6.gt) goto loc_826584D4;
	// lwz r9,12(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
loc_826584B8:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r8,r31
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x826584fc
	if (ctx.cr6.eq) goto loc_826584FC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826584b8
	if (ctx.cr6.lt) goto loc_826584B8;
loc_826584D4:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332d50
	ctx.lr = 0x826584E8;
	sub_82332D50(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826584fc
	if (ctx.cr0.eq) goto loc_826584FC;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
loc_826584FC:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r4,12(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x826580c8
	ctx.lr = 0x8265850C;
	sub_826580C8(ctx, base);
	// b 0x826583f0
	goto loc_826583F0;
}

__attribute__((alias("__imp__sub_82658510"))) PPC_WEAK_FUNC(sub_82658510);
PPC_FUNC_IMPL(__imp__sub_82658510) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82658518;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r4,12(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// bl 0x82657d60
	ctx.lr = 0x8265852C;
	sub_82657D60(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8265868c
	if (ctx.cr0.eq) goto loc_8265868C;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x82658548
	if (!ctx.cr6.eq) goto loc_82658548;
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
	// b 0x8265855c
	goto loc_8265855C;
loc_82658548:
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r29,r31,48
	ctx.r29.s64 = ctx.r31.s64 + 48;
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x8265855c
	if (ctx.cr6.eq) goto loc_8265855C;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8265855C:
	// lwz r7,8(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x82658570
	if (!ctx.cr6.eq) goto loc_82658570;
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// b 0x82658584
	goto loc_82658584;
loc_82658570:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r30,r31,48
	ctx.r30.s64 = ctx.r31.s64 + 48;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x82658584
	if (ctx.cr6.eq) goto loc_82658584;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82658584:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8265868c
	if (ctx.cr6.eq) goto loc_8265868C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8265868c
	if (ctx.cr6.eq) goto loc_8265868C;
	// lwz r11,16(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x826585d8
	if (!ctx.cr6.eq) goto loc_826585D8;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r31,3
	ctx.r31.s64 = 3;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x826585c4
	if (!ctx.cr6.eq) goto loc_826585C4;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826590b0
	ctx.lr = 0x826585C0;
	sub_826590B0(ctx, base);
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
loc_826585C4:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8265869c
	if (!ctx.cr6.eq) goto loc_8265869C;
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// b 0x8265869c
	goto loc_8265869C;
loc_826585D8:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x826585f4
	if (!ctx.cr6.eq) goto loc_826585F4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826580c8
	ctx.lr = 0x826585E8;
	sub_826580C8(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x8265869c
	goto loc_8265869C;
loc_826585F4:
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x82658630
	if (!ctx.cr6.eq) goto loc_82658630;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8265afc8
	ctx.lr = 0x82658604;
	sub_8265AFC8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// beq 0x82658624
	if (ctx.cr0.eq) goto loc_82658624;
	// li r11,4
	ctx.r11.s64 = 4;
loc_82658614:
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lwz r4,12(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// bl 0x826580c8
	ctx.lr = 0x82658620;
	sub_826580C8(ctx, base);
	// b 0x8265869c
	goto loc_8265869C;
loc_82658624:
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// b 0x82658698
	goto loc_82658698;
loc_82658630:
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x82658644
	if (!ctx.cr6.eq) goto loc_82658644;
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x82658614
	goto loc_82658614;
loc_82658644:
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x8265869c
	if (!ctx.cr6.eq) goto loc_8265869C;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82658660
	if (ctx.cr6.eq) goto loc_82658660;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82658680
	if (!ctx.cr6.eq) goto loc_82658680;
loc_82658660:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82658674
	if (ctx.cr6.eq) goto loc_82658674;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82658680
	if (!ctx.cr6.eq) goto loc_82658680;
loc_82658674:
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// b 0x8265869c
	goto loc_8265869C;
loc_82658680:
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// b 0x82658694
	goto loc_82658694;
loc_8265868C:
	// lwz r5,8(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
loc_82658694:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82658698:
	// bl 0x82658fe8
	ctx.lr = 0x8265869C;
	sub_82658FE8(ctx, base);
loc_8265869C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826586A8"))) PPC_WEAK_FUNC(sub_826586A8);
PPC_FUNC_IMPL(__imp__sub_826586A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x826586B0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r4,12(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// bl 0x82657d60
	ctx.lr = 0x826586C4;
	sub_82657D60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8265889c
	if (ctx.cr0.eq) goto loc_8265889C;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x826586e4
	if (!ctx.cr6.eq) goto loc_826586E4;
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// b 0x826586f8
	goto loc_826586F8;
loc_826586E4:
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r9,r3,48
	ctx.r9.s64 = ctx.r3.s64 + 48;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x826586f8
	if (ctx.cr6.eq) goto loc_826586F8;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_826586F8:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8265870c
	if (!ctx.cr6.eq) goto loc_8265870C;
	// addi r31,r3,8
	ctx.r31.s64 = ctx.r3.s64 + 8;
	// b 0x82658720
	goto loc_82658720;
loc_8265870C:
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r31,r3,48
	ctx.r31.s64 = ctx.r3.s64 + 48;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82658720
	if (ctx.cr6.eq) goto loc_82658720;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
loc_82658720:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8265889c
	if (ctx.cr6.eq) goto loc_8265889C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8265889c
	if (ctx.cr6.eq) goto loc_8265889C;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bne cr6,0x82658748
	if (!ctx.cr6.eq) goto loc_82658748;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82658748:
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bne cr6,0x82658758
	if (!ctx.cr6.eq) goto loc_82658758;
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
loc_82658758:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82658768
	if (ctx.cr6.eq) goto loc_82658768;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82658768:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82658798
	if (!ctx.cr6.eq) goto loc_82658798;
	// lis r10,30517
	ctx.r10.s64 = 1999962112;
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// ori r10,r10,37888
	ctx.r10.u64 = ctx.r10.u64 | 37888;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82658874
	if (ctx.cr6.gt) goto loc_82658874;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// b 0x8265886c
	goto loc_8265886C;
loc_82658798:
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x826587b4
	if (!ctx.cr6.eq) goto loc_826587B4;
	// lwz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8265886c
	if (ctx.cr6.eq) goto loc_8265886C;
	// stw r8,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r8.u32);
	// b 0x8265884c
	goto loc_8265884C;
loc_826587B4:
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82658800
	if (!ctx.cr6.eq) goto loc_82658800;
	// lwz r3,24(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x82658874
	if (!ctx.cr6.lt) goto loc_82658874;
	// bl 0x8265a9e0
	ctx.lr = 0x826587D0;
	sub_8265A9E0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r4,5
	ctx.r11.s64 = ctx.r4.s64 + 5;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r29,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826587f8
	if (ctx.cr6.eq) goto loc_826587F8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8265ad78
	ctx.lr = 0x826587F8;
	sub_8265AD78(ctx, base);
loc_826587F8:
	// stwx r30,r29,r31
	PPC_STORE_U32(ctx.r29.u32 + ctx.r31.u32, ctx.r30.u32);
	// b 0x8265886c
	goto loc_8265886C;
loc_82658800:
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x8265881c
	if (!ctx.cr6.eq) goto loc_8265881C;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,28(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8265ad78
	ctx.lr = 0x82658818;
	sub_8265AD78(ctx, base);
	// b 0x8265886c
	goto loc_8265886C;
loc_8265881C:
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x8265886c
	if (!ctx.cr6.eq) goto loc_8265886C;
	// lwz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265886c
	if (ctx.cr6.eq) goto loc_8265886C;
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8265886c
	if (ctx.cr6.eq) goto loc_8265886C;
	// stw r8,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r8.u32);
loc_8265884C:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,-22252
	ctx.r3.s64 = ctx.r11.s64 + -22252;
	// bl 0x82816528
	ctx.lr = 0x82658858;
	sub_82816528(ctx, base);
	// bl 0x828e0d10
	ctx.lr = 0x8265885C;
	sub_828E0D10(ctx, base);
	// bl 0x82438250
	ctx.lr = 0x82658860;
	sub_82438250(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8265886c
	if (ctx.cr0.eq) goto loc_8265886C;
	// bl 0x82701cb8
	ctx.lr = 0x8265886C;
	sub_82701CB8(ctx, base);
loc_8265886C:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x8265888c
	if (ctx.cr6.eq) goto loc_8265888C;
loc_82658874:
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,12(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,8(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// bl 0x82658fe8
	ctx.lr = 0x82658888;
	sub_82658FE8(ctx, base);
	// b 0x8265889c
	goto loc_8265889C;
loc_8265888C:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r4,12(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x826580c8
	ctx.lr = 0x8265889C;
	sub_826580C8(ctx, base);
loc_8265889C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826588A8"))) PPC_WEAK_FUNC(sub_826588A8);
PPC_FUNC_IMPL(__imp__sub_826588A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x826588B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,1408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826589b8
	if (ctx.cr6.eq) goto loc_826589B8;
	// lwz r3,1608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1608);
	// bl 0x82438130
	ctx.lr = 0x826588D0;
	sub_82438130(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x826589b8
	if (ctx.cr0.eq) goto loc_826589B8;
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826589b8
	if (ctx.cr6.eq) goto loc_826589B8;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x828e0ad0
	ctx.lr = 0x826588F0;
	sub_828E0AD0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826589b8
	if (!ctx.cr0.eq) goto loc_826589B8;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,10836(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10836);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x826589b8
	if (!ctx.cr6.eq) goto loc_826589B8;
	// lwz r11,1416(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1416);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826589b8
	if (!ctx.cr6.eq) goto loc_826589B8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8262bb80
	ctx.lr = 0x82658924;
	sub_8262BB80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826589b8
	if (!ctx.cr0.eq) goto loc_826589B8;
	// lwz r11,1416(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1416);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x826589b8
	if (ctx.cr6.eq) goto loc_826589B8;
	// lwz r10,1408(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r11,1416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1416, ctx.r11.u32);
	// lis r8,-32234
	ctx.r8.s64 = -2112487424;
	// lwz r10,996(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 996);
	// addi r3,r8,-17336
	ctx.r3.s64 = ctx.r8.s64 + -17336;
	// stw r10,1424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1424, ctx.r10.u32);
	// stw r11,1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1456, ctx.r11.u32);
	// stw r30,1432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1432, ctx.r30.u32);
	// stw r9,1428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1428, ctx.r9.u32);
	// stw r11,1436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1436, ctx.r11.u32);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r10,1464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1464, ctx.r10.u32);
	// stw r30,1496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1496, ctx.r30.u32);
	// stw r30,1472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1472, ctx.r30.u32);
	// stw r11,1468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1468, ctx.r11.u32);
	// stw r11,1476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1476, ctx.r11.u32);
	// bl 0x82816528
	ctx.lr = 0x82658988;
	sub_82816528(ctx, base);
	// bl 0x828e0d10
	ctx.lr = 0x8265898C;
	sub_828E0D10(ctx, base);
	// bl 0x82438370
	ctx.lr = 0x82658990;
	sub_82438370(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826589c8
	if (ctx.cr0.eq) goto loc_826589C8;
	// lwz r11,1408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r7,8(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r6,996(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 996);
	// bl 0x826d13b8
	ctx.lr = 0x826589B0;
	sub_826D13B8(ctx, base);
	// stw r30,1548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1548, ctx.r30.u32);
	// b 0x826589c8
	goto loc_826589C8;
loc_826589B8:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82659270
	ctx.lr = 0x826589C8;
	sub_82659270(ctx, base);
loc_826589C8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826589D0"))) PPC_WEAK_FUNC(sub_826589D0);
PPC_FUNC_IMPL(__imp__sub_826589D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x826589D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,1408(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1408);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82658c3c
	if (ctx.cr6.eq) goto loc_82658C3C;
	// lwz r9,1416(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1416);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82658c3c
	if (ctx.cr6.eq) goto loc_82658C3C;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addi r11,r29,1412
	ctx.r11.s64 = ctx.r29.s64 + 1412;
	// lwz r8,1424(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1424);
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82658a14
	if (!ctx.cr6.eq) goto loc_82658A14;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// b 0x82658a28
	goto loc_82658A28;
loc_82658A14:
	// lwz r8,52(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// addi r8,r11,48
	ctx.r8.s64 = ctx.r11.s64 + 48;
	// beq cr6,0x82658a28
	if (ctx.cr6.eq) goto loc_82658A28;
	// li r8,0
	ctx.r8.s64 = 0;
loc_82658A28:
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82658a40
	if (!ctx.cr6.eq) goto loc_82658A40;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// b 0x82658a54
	goto loc_82658A54;
loc_82658A40:
	// lwz r7,52(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82658a54
	if (ctx.cr6.eq) goto loc_82658A54;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82658A54:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82658c3c
	if (ctx.cr6.eq) goto loc_82658C3C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82658c3c
	if (ctx.cr6.eq) goto loc_82658C3C;
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x82658b00
	if (!ctx.cr6.eq) goto loc_82658B00;
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82658a8c
	if (!ctx.cr6.eq) goto loc_82658A8C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x82659f88
	ctx.lr = 0x82658A88;
	sub_82659F88(ctx, base);
	// b 0x82658c3c
	goto loc_82658C3C;
loc_82658A8C:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82658af4
	if (!ctx.cr6.eq) goto loc_82658AF4;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lwz r31,4(r8)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r3,r10,-17336
	ctx.r3.s64 = ctx.r10.s64 + -17336;
	// bl 0x82816528
	ctx.lr = 0x82658AAC;
	sub_82816528(ctx, base);
	// bl 0x828e0d10
	ctx.lr = 0x82658AB0;
	sub_828E0D10(ctx, base);
	// bl 0x82438370
	ctx.lr = 0x82658AB4;
	sub_82438370(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82658ae8
	if (ctx.cr0.eq) goto loc_82658AE8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82658adc
	if (ctx.cr6.eq) goto loc_82658ADC;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x826d13b8
	ctx.lr = 0x82658AD8;
	sub_826D13B8(ctx, base);
	// b 0x82658ae8
	goto loc_82658AE8;
loc_82658ADC:
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,2868(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2868, ctx.r11.u32);
	// bl 0x826d1600
	ctx.lr = 0x82658AE8;
	sub_826D1600(ctx, base);
loc_82658AE8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8265a0a8
	ctx.lr = 0x82658AF0;
	sub_8265A0A8(ctx, base);
	// b 0x82658c3c
	goto loc_82658C3C;
loc_82658AF4:
	// li r11,3
	ctx.r11.s64 = 3;
loc_82658AF8:
	// stw r11,1416(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1416, ctx.r11.u32);
	// b 0x82658c3c
	goto loc_82658C3C;
loc_82658B00:
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x82658c24
	if (!ctx.cr6.eq) goto loc_82658C24;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x82658b50
	if (!ctx.cr6.eq) goto loc_82658B50;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r9,3
	ctx.r9.s64 = 3;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82658b28
	if (ctx.cr6.eq) goto loc_82658B28;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x82658b2c
	if (!ctx.cr6.eq) goto loc_82658B2C;
loc_82658B28:
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
loc_82658B2C:
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82658b40
	if (ctx.cr6.eq) goto loc_82658B40;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82658b44
	if (!ctx.cr6.eq) goto loc_82658B44;
loc_82658B40:
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
loc_82658B44:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82659ee8
	ctx.lr = 0x82658B4C;
	sub_82659EE8(ctx, base);
	// b 0x82658c3c
	goto loc_82658C3C;
loc_82658B50:
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// bne cr6,0x82658bc4
	if (!ctx.cr6.eq) goto loc_82658BC4;
	// li r11,4
	ctx.r11.s64 = 4;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// stw r11,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r11.u32);
	// addi r3,r10,-22252
	ctx.r3.s64 = ctx.r10.s64 + -22252;
	// bl 0x82816528
	ctx.lr = 0x82658B6C;
	sub_82816528(ctx, base);
	// bl 0x828e0d10
	ctx.lr = 0x82658B70;
	sub_828E0D10(ctx, base);
	// bl 0x82438250
	ctx.lr = 0x82658B74;
	sub_82438250(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82658c3c
	if (ctx.cr0.eq) goto loc_82658C3C;
	// lwz r11,3376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3376);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x82658c3c
	if (ctx.cr6.eq) goto loc_82658C3C;
	// lwz r11,3384(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3384);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82658c3c
	if (ctx.cr6.eq) goto loc_82658C3C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,-2916
	ctx.r4.s64 = ctx.r10.s64 + -2916;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1036);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82658BB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,3236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3236, ctx.r11.u32);
	// stw r11,1792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1792, ctx.r11.u32);
	// b 0x82658c3c
	goto loc_82658C3C;
loc_82658BC4:
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// bne cr6,0x82658be0
	if (!ctx.cr6.eq) goto loc_82658BE0;
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// stw r11,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r11.u32);
	// bl 0x8265af40
	ctx.lr = 0x82658BDC;
	sub_8265AF40(ctx, base);
	// b 0x82658c3c
	goto loc_82658C3C;
loc_82658BE0:
	// cmpwi cr6,r10,11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 11, ctx.xer);
	// bne cr6,0x82658c3c
	if (!ctx.cr6.eq) goto loc_82658C3C;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82658bfc
	if (ctx.cr6.eq) goto loc_82658BFC;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82658c18
	if (!ctx.cr6.eq) goto loc_82658C18;
loc_82658BFC:
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82658c10
	if (ctx.cr6.eq) goto loc_82658C10;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82658c18
	if (!ctx.cr6.eq) goto loc_82658C18;
loc_82658C10:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82658af8
	goto loc_82658AF8;
loc_82658C18:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82659360
	ctx.lr = 0x82658C20;
	sub_82659360(ctx, base);
	// b 0x82658c3c
	goto loc_82658C3C;
loc_82658C24:
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bne cr6,0x82658c3c
	if (!ctx.cr6.eq) goto loc_82658C3C;
	// cmpwi cr6,r10,13
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 13, ctx.xer);
	// bne cr6,0x82658c3c
	if (!ctx.cr6.eq) goto loc_82658C3C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82658e28
	ctx.lr = 0x82658C3C;
	sub_82658E28(ctx, base);
loc_82658C3C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82658C48"))) PPC_WEAK_FUNC(sub_82658C48);
PPC_FUNC_IMPL(__imp__sub_82658C48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,1408(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1408);
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82658e10
	if (ctx.cr6.eq) goto loc_82658E10;
	// lwz r11,1416(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1416);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82658e10
	if (!ctx.cr6.eq) goto loc_82658E10;
	// lwz r10,996(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 996);
	// addi r11,r3,1412
	ctx.r11.s64 = ctx.r3.s64 + 1412;
	// lwz r9,1424(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1424);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82658c94
	if (!ctx.cr6.eq) goto loc_82658C94;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// b 0x82658ca8
	goto loc_82658CA8;
loc_82658C94:
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// addi r9,r11,48
	ctx.r9.s64 = ctx.r11.s64 + 48;
	// beq cr6,0x82658ca8
	if (ctx.cr6.eq) goto loc_82658CA8;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82658CA8:
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82658cc0
	if (!ctx.cr6.eq) goto loc_82658CC0;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// b 0x82658cd4
	goto loc_82658CD4;
loc_82658CC0:
	// lwz r7,52(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82658cd4
	if (ctx.cr6.eq) goto loc_82658CD4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82658CD4:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82658e10
	if (ctx.cr6.eq) goto loc_82658E10;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82658e10
	if (ctx.cr6.eq) goto loc_82658E10;
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r10,3
	ctx.r10.s64 = 3;
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// bne cr6,0x82658cf8
	if (!ctx.cr6.eq) goto loc_82658CF8;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_82658CF8:
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// bne cr6,0x82658d08
	if (!ctx.cr6.eq) goto loc_82658D08;
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
loc_82658D08:
	// lwz r10,16(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bne cr6,0x82658d7c
	if (!ctx.cr6.eq) goto loc_82658D7C;
	// lis r10,30517
	ctx.r10.s64 = 1999962112;
	// lwz r30,20(r8)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// ori r10,r10,37888
	ctx.r10.u64 = ctx.r10.u64 | 37888;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82658e0c
	if (ctx.cr6.gt) goto loc_82658E0C;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r30,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r30.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// addi r31,r10,-22252
	ctx.r31.s64 = ctx.r10.s64 + -22252;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82816528
	ctx.lr = 0x82658D44;
	sub_82816528(ctx, base);
	// bl 0x828e0d10
	ctx.lr = 0x82658D48;
	sub_828E0D10(ctx, base);
	// bl 0x82438250
	ctx.lr = 0x82658D4C;
	sub_82438250(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82658d58
	if (ctx.cr0.eq) goto loc_82658D58;
	// bl 0x82701cb8
	ctx.lr = 0x82658D58;
	sub_82701CB8(ctx, base);
loc_82658D58:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82816528
	ctx.lr = 0x82658D60;
	sub_82816528(ctx, base);
	// bl 0x828e0d10
	ctx.lr = 0x82658D64;
	sub_828E0D10(ctx, base);
	// bl 0x82438250
	ctx.lr = 0x82658D68;
	sub_82438250(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82658e10
	if (ctx.cr0.eq) goto loc_82658E10;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x827023f8
	ctx.lr = 0x82658D78;
	sub_827023F8(ctx, base);
	// b 0x82658e10
	goto loc_82658E10;
loc_82658D7C:
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// bne cr6,0x82658d98
	if (!ctx.cr6.eq) goto loc_82658D98;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,20(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x8265a930
	ctx.lr = 0x82658D94;
	sub_8265A930(ctx, base);
	// b 0x82658e10
	goto loc_82658E10;
loc_82658D98:
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bne cr6,0x82658dd4
	if (!ctx.cr6.eq) goto loc_82658DD4;
	// lwz r5,24(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bge cr6,0x82658e0c
	if (!ctx.cr6.lt) goto loc_82658E0C;
	// li r10,6
	ctx.r10.s64 = 6;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r10.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r9,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r9.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// bl 0x8265ac80
	ctx.lr = 0x82658DD0;
	sub_8265AC80(ctx, base);
	// b 0x82658e10
	goto loc_82658E10;
loc_82658DD4:
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// bne cr6,0x82658df0
	if (!ctx.cr6.eq) goto loc_82658DF0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,28(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8265ad78
	ctx.lr = 0x82658DEC;
	sub_8265AD78(ctx, base);
	// b 0x82658e10
	goto loc_82658E10;
loc_82658DF0:
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// bne cr6,0x82658e10
	if (!ctx.cr6.eq) goto loc_82658E10;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,28(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x8265ae78
	ctx.lr = 0x82658E08;
	sub_8265AE78(ctx, base);
	// b 0x82658e10
	goto loc_82658E10;
loc_82658E0C:
	// bl 0x82659360
	ctx.lr = 0x82658E10;
	sub_82659360(ctx, base);
loc_82658E10:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82658E28"))) PPC_WEAK_FUNC(sub_82658E28);
PPC_FUNC_IMPL(__imp__sub_82658E28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x82658E30;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lwz r10,1408(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1408);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82658fd4
	if (ctx.cr6.eq) goto loc_82658FD4;
	// lwz r11,1416(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1416);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82658fd4
	if (!ctx.cr6.eq) goto loc_82658FD4;
	// lwz r10,996(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 996);
	// addi r11,r24,1412
	ctx.r11.s64 = ctx.r24.s64 + 1412;
	// lwz r9,1424(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1424);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82658e70
	if (!ctx.cr6.eq) goto loc_82658E70;
	// addi r28,r11,8
	ctx.r28.s64 = ctx.r11.s64 + 8;
	// b 0x82658e84
	goto loc_82658E84;
loc_82658E70:
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// addi r28,r11,48
	ctx.r28.s64 = ctx.r11.s64 + 48;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82658e84
	if (ctx.cr6.eq) goto loc_82658E84;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
loc_82658E84:
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82658e9c
	if (!ctx.cr6.eq) goto loc_82658E9C;
	// addi r30,r11,48
	ctx.r30.s64 = ctx.r11.s64 + 48;
	// b 0x82658eac
	goto loc_82658EAC;
loc_82658E9C:
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82658fd4
	if (!ctx.cr6.eq) goto loc_82658FD4;
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
loc_82658EAC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82658fd4
	if (ctx.cr6.eq) goto loc_82658FD4;
	// lis r25,-31949
	ctx.r25.s64 = -2093809664;
	// lwz r11,13024(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13024);
	// lwz r3,1316(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1316);
	// bl 0x82409be0
	ctx.lr = 0x82658EC4;
	sub_82409BE0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r31,r28,20
	ctx.r31.s64 = ctx.r28.s64 + 20;
	// li r29,4
	ctx.r29.s64 = 4;
loc_82658ED0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82658f04
	if (ctx.cr6.eq) goto loc_82658F04;
	// lwz r3,148(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82658efc
	if (ctx.cr6.eq) goto loc_82658EFC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82658EFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82658EFC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r26,148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 148, ctx.r26.u32);
loc_82658F04:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x82658ed0
	if (!ctx.cr0.eq) goto loc_82658ED0;
	// addi r31,r30,20
	ctx.r31.s64 = ctx.r30.s64 + 20;
	// li r29,4
	ctx.r29.s64 = 4;
loc_82658F18:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82658f68
	if (ctx.cr6.eq) goto loc_82658F68;
	// lwz r4,148(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82658f68
	if (ctx.cr6.eq) goto loc_82658F68;
	// lwz r3,7264(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 7264);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82658f4c
	if (ctx.cr6.eq) goto loc_82658F4C;
	// lwz r11,520(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 520);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82658f4c
	if (!ctx.cr6.gt) goto loc_82658F4C;
	// bl 0x82418228
	ctx.lr = 0x82658F4C;
	sub_82418228(ctx, base);
loc_82658F4C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,148(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// bl 0x824b2ab0
	ctx.lr = 0x82658F60;
	sub_824B2AB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r26,148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 148, ctx.r26.u32);
loc_82658F68:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x82658f18
	if (!ctx.cr0.eq) goto loc_82658F18;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x824a8bc0
	ctx.lr = 0x82658F80;
	sub_824A8BC0(ctx, base);
	// stw r26,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r26.u32);
	// stw r26,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r26.u32);
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// stw r26,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r26.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r26,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r26.u32);
	// lwz r11,13024(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13024);
	// lwz r5,16276(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16276);
	// lwz r3,184(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// bl 0x828cef18
	ctx.lr = 0x82658FA8;
	sub_828CEF18(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,1416(r24)
	PPC_STORE_U32(ctx.r24.u32 + 1416, ctx.r11.u32);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,-22252
	ctx.r3.s64 = ctx.r11.s64 + -22252;
	// bl 0x82816528
	ctx.lr = 0x82658FBC;
	sub_82816528(ctx, base);
	// bl 0x828e0d10
	ctx.lr = 0x82658FC0;
	sub_828E0D10(ctx, base);
	// bl 0x82438250
	ctx.lr = 0x82658FC4;
	sub_82438250(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82658fdc
	if (ctx.cr0.eq) goto loc_82658FDC;
	// bl 0x82702a38
	ctx.lr = 0x82658FD0;
	sub_82702A38(ctx, base);
	// b 0x82658fdc
	goto loc_82658FDC;
loc_82658FD4:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,1416(r24)
	PPC_STORE_U32(ctx.r24.u32 + 1416, ctx.r11.u32);
loc_82658FDC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82658FE8"))) PPC_WEAK_FUNC(sub_82658FE8);
PPC_FUNC_IMPL(__imp__sub_82658FE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82658FF0;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r11,r11,25660
	ctx.r11.s64 = ctx.r11.s64 + 25660;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// li r28,3
	ctx.r28.s64 = 3;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x826580c8
	ctx.lr = 0x82659034;
	sub_826580C8(ctx, base);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82659054
	if (ctx.cr6.eq) goto loc_82659054;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826580c8
	ctx.lr = 0x82659054;
	sub_826580C8(ctx, base);
loc_82659054:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82657d60
	ctx.lr = 0x82659060;
	sub_82657D60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826590a8
	if (ctx.cr0.eq) goto loc_826590A8;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x826590a8
	if (ctx.cr6.eq) goto loc_826590A8;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x82659088
	if (!ctx.cr6.eq) goto loc_82659088;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// b 0x8265909c
	goto loc_8265909C;
loc_82659088:
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// addi r11,r3,48
	ctx.r11.s64 = ctx.r3.s64 + 48;
	// beq cr6,0x8265909c
	if (ctx.cr6.eq) goto loc_8265909C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8265909C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826590a8
	if (ctx.cr6.eq) goto loc_826590A8;
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r28.u32);
loc_826590A8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826590B0"))) PPC_WEAK_FUNC(sub_826590B0);
PPC_FUNC_IMPL(__imp__sub_826590B0) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82657d60
	ctx.lr = 0x826590D4;
	sub_82657D60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82659148
	if (ctx.cr0.eq) goto loc_82659148;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82659148
	if (ctx.cr6.eq) goto loc_82659148;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// bne cr6,0x826590fc
	if (!ctx.cr6.eq) goto loc_826590FC;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// b 0x82659110
	goto loc_82659110;
loc_826590FC:
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// addi r11,r3,48
	ctx.r11.s64 = ctx.r3.s64 + 48;
	// beq cr6,0x82659110
	if (ctx.cr6.eq) goto loc_82659110;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82659110:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82659148
	if (ctx.cr6.eq) goto loc_82659148;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// stw r4,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// addi r11,r11,25660
	ctx.r11.s64 = ctx.r11.s64 + 25660;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826580c8
	ctx.lr = 0x82659148;
	sub_826580C8(ctx, base);
loc_82659148:
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

__attribute__((alias("__imp__sub_82659160"))) PPC_WEAK_FUNC(sub_82659160);
PPC_FUNC_IMPL(__imp__sub_82659160) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82659168;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,1416(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1416);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82659204
	if (ctx.cr6.eq) goto loc_82659204;
	// lwz r10,1424(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1424);
	// addi r11,r31,1412
	ctx.r11.s64 = ctx.r31.s64 + 1412;
	// cmpw cr6,r10,r28
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x8265919c
	if (!ctx.cr6.eq) goto loc_8265919C;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// b 0x826591b0
	goto loc_826591B0;
loc_8265919C:
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// cmpw cr6,r10,r28
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r28.s32, ctx.xer);
	// beq cr6,0x826591b0
	if (ctx.cr6.eq) goto loc_826591B0;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_826591B0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82659268
	if (ctx.cr6.eq) goto loc_82659268;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// addi r10,r10,25660
	ctx.r10.s64 = ctx.r10.s64 + 25660;
	// stw r11,1428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1428, ctx.r11.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r9,1416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1416, ctx.r9.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1468, ctx.r11.u32);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// bl 0x82659ee8
	ctx.lr = 0x826591F4;
	sub_82659EE8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82658040
	ctx.lr = 0x82659200;
	sub_82658040(ctx, base);
	// b 0x82659268
	goto loc_82659268;
loc_82659204:
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// stw r28,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r28.u32);
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// addi r11,r11,25616
	ctx.r11.s64 = ctx.r11.s64 + 25616;
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82658040
	ctx.lr = 0x82659230;
	sub_82658040(ctx, base);
	// lwz r10,1408(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// stw r30,1416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1416, ctx.r30.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r10,996(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 996);
	// stw r10,1424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1424, ctx.r10.u32);
	// stw r30,1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1456, ctx.r30.u32);
	// stw r29,1432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1432, ctx.r29.u32);
	// stw r30,1428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1428, ctx.r30.u32);
	// stw r30,1436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1436, ctx.r30.u32);
	// stw r28,1464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1464, ctx.r28.u32);
	// stw r29,1496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1496, ctx.r29.u32);
	// stw r29,1472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1472, ctx.r29.u32);
	// stw r11,1468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1468, ctx.r11.u32);
	// stw r30,1476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1476, ctx.r30.u32);
loc_82659268:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82659270"))) PPC_WEAK_FUNC(sub_82659270);
PPC_FUNC_IMPL(__imp__sub_82659270) {
	PPC_FUNC_PROLOGUE();
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
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r10,25660
	ctx.r10.s64 = ctx.r10.s64 + 25660;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r11,3
	ctx.r11.s64 = 3;
	// beq cr6,0x826592d4
	if (ctx.cr6.eq) goto loc_826592D4;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,1428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1428, ctx.r11.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r11,1468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1468, ctx.r11.u32);
	// stw r10,1416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1416, ctx.r10.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// bl 0x82659ee8
	ctx.lr = 0x826592D0;
	sub_82659EE8(ctx, base);
	// b 0x8265933c
	goto loc_8265933C;
loc_826592D4:
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x828e0ad0
	ctx.lr = 0x826592E4;
	sub_828E0AD0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82659334
	if (!ctx.cr0.eq) goto loc_82659334;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,-17336
	ctx.r3.s64 = ctx.r11.s64 + -17336;
	// bl 0x82816528
	ctx.lr = 0x826592F8;
	sub_82816528(ctx, base);
	// bl 0x828e0d10
	ctx.lr = 0x826592FC;
	sub_828E0D10(ctx, base);
	// bl 0x82438370
	ctx.lr = 0x82659300;
	sub_82438370(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82659334
	if (ctx.cr0.eq) goto loc_82659334;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82659328
	if (ctx.cr6.eq) goto loc_82659328;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x826d13b8
	ctx.lr = 0x82659324;
	sub_826D13B8(ctx, base);
	// b 0x82659334
	goto loc_82659334;
loc_82659328:
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,2868(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2868, ctx.r11.u32);
	// bl 0x826d1600
	ctx.lr = 0x82659334;
	sub_826D1600(ctx, base);
loc_82659334:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8265a0a8
	ctx.lr = 0x8265933C;
	sub_8265A0A8(ctx, base);
loc_8265933C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82658040
	ctx.lr = 0x82659348;
	sub_82658040(ctx, base);
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

__attribute__((alias("__imp__sub_82659360"))) PPC_WEAK_FUNC(sub_82659360);
PPC_FUNC_IMPL(__imp__sub_82659360) {
	PPC_FUNC_PROLOGUE();
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
	// li r30,3
	ctx.r30.s64 = 3;
	// lwz r11,1416(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1416);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82659410
	if (!ctx.cr6.eq) goto loc_82659410;
	// lwz r10,1456(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	// addi r11,r31,1412
	ctx.r11.s64 = ctx.r31.s64 + 1412;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x826593a0
	if (ctx.cr6.eq) goto loc_826593A0;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// b 0x826593b4
	goto loc_826593B4;
loc_826593A0:
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r10,r11,48
	ctx.r10.s64 = ctx.r11.s64 + 48;
	// bne cr6,0x826593b4
	if (!ctx.cr6.eq) goto loc_826593B4;
	// li r10,0
	ctx.r10.s64 = 0;
loc_826593B4:
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x826593d0
	if (!ctx.cr6.eq) goto loc_826593D0;
	// addi r9,r11,48
	ctx.r9.s64 = ctx.r11.s64 + 48;
	// b 0x826593e0
	goto loc_826593E0;
loc_826593D0:
	// lwz r8,52(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x826593e0
	if (!ctx.cr6.eq) goto loc_826593E0;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
loc_826593E0:
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r9,25660
	ctx.r10.s64 = ctx.r9.s64 + 25660;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x82658040
	ctx.lr = 0x82659410;
	sub_82658040(ctx, base);
loc_82659410:
	// stw r30,1416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1416, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82659430"))) PPC_WEAK_FUNC(sub_82659430);
PPC_FUNC_IMPL(__imp__sub_82659430) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82659438;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,30517
	ctx.r11.s64 = 1999962112;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// ori r8,r11,37888
	ctx.r8.u64 = ctx.r11.u64 | 37888;
	// cmplw cr6,r29,r8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82659454
	if (ctx.cr6.lt) goto loc_82659454;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
loc_82659454:
	// lwz r11,1416(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1416);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82659544
	if (!ctx.cr6.eq) goto loc_82659544;
	// lwz r10,1456(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1456);
	// addi r11,r3,1412
	ctx.r11.s64 = ctx.r3.s64 + 1412;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8265947c
	if (ctx.cr6.eq) goto loc_8265947C;
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
	// b 0x82659490
	goto loc_82659490;
loc_8265947C:
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// addi r30,r11,48
	ctx.r30.s64 = ctx.r11.s64 + 48;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82659490
	if (!ctx.cr6.eq) goto loc_82659490;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
loc_82659490:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x826594ac
	if (!ctx.cr6.eq) goto loc_826594AC;
	// addi r31,r11,48
	ctx.r31.s64 = ctx.r11.s64 + 48;
	// b 0x826594bc
	goto loc_826594BC;
loc_826594AC:
	// lwz r7,52(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x826594bc
	if (!ctx.cr6.eq) goto loc_826594BC;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
loc_826594BC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r10,r10,25704
	ctx.r10.s64 = ctx.r10.s64 + 25704;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// cmplw cr6,r29,r8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r8.u32, ctx.xer);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// blt cr6,0x826594f4
	if (ctx.cr6.lt) goto loc_826594F4;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
loc_826594F4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82658040
	ctx.lr = 0x826594FC;
	sub_82658040(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r10,3
	ctx.r10.s64 = 3;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82659514
	if (ctx.cr6.eq) goto loc_82659514;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82659518
	if (!ctx.cr6.eq) goto loc_82659518;
loc_82659514:
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
loc_82659518:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8265952c
	if (ctx.cr6.eq) goto loc_8265952C;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82659530
	if (!ctx.cr6.eq) goto loc_82659530;
loc_8265952C:
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
loc_82659530:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r29,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// bl 0x82656da8
	ctx.lr = 0x82659544;
	sub_82656DA8(ctx, base);
loc_82659544:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82659550"))) PPC_WEAK_FUNC(sub_82659550);
PPC_FUNC_IMPL(__imp__sub_82659550) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82659558;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1416(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1416);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82659664
	if (!ctx.cr6.eq) goto loc_82659664;
	// lwz r10,1456(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1456);
	// addi r11,r3,1412
	ctx.r11.s64 = ctx.r3.s64 + 1412;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82659584
	if (ctx.cr6.eq) goto loc_82659584;
	// addi r29,r11,8
	ctx.r29.s64 = ctx.r11.s64 + 8;
	// b 0x82659598
	goto loc_82659598;
loc_82659584:
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// addi r29,r11,48
	ctx.r29.s64 = ctx.r11.s64 + 48;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82659598
	if (!ctx.cr6.eq) goto loc_82659598;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_82659598:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x826595b4
	if (!ctx.cr6.eq) goto loc_826595B4;
	// addi r31,r11,48
	ctx.r31.s64 = ctx.r11.s64 + 48;
	// b 0x826595c4
	goto loc_826595C4;
loc_826595B4:
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x826595c4
	if (!ctx.cr6.eq) goto loc_826595C4;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
loc_826595C4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// addi r10,r10,25704
	ctx.r10.s64 = ctx.r10.s64 + 25704;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// bl 0x82658040
	ctx.lr = 0x826595F8;
	sub_82658040(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82659628
	if (ctx.cr6.eq) goto loc_82659628;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,-22252
	ctx.r3.s64 = ctx.r11.s64 + -22252;
	// bl 0x82816528
	ctx.lr = 0x82659614;
	sub_82816528(ctx, base);
	// bl 0x828e0d10
	ctx.lr = 0x82659618;
	sub_828E0D10(ctx, base);
	// bl 0x82438250
	ctx.lr = 0x8265961C;
	sub_82438250(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82659628
	if (ctx.cr0.eq) goto loc_82659628;
	// bl 0x82701cb8
	ctx.lr = 0x82659628;
	sub_82701CB8(ctx, base);
loc_82659628:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r10,3
	ctx.r10.s64 = 3;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82659640
	if (ctx.cr6.eq) goto loc_82659640;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82659644
	if (!ctx.cr6.eq) goto loc_82659644;
loc_82659640:
	// stw r10,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r10.u32);
loc_82659644:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82659658
	if (ctx.cr6.eq) goto loc_82659658;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8265965c
	if (!ctx.cr6.eq) goto loc_8265965C;
loc_82659658:
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
loc_8265965C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82656da8
	ctx.lr = 0x82659664;
	sub_82656DA8(ctx, base);
loc_82659664:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82659670"))) PPC_WEAK_FUNC(sub_82659670);
PPC_FUNC_IMPL(__imp__sub_82659670) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f0
	ctx.lr = 0x82659678;
	__savegprlr_22(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,1416(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 1416);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x826598ec
	if (!ctx.cr6.eq) goto loc_826598EC;
	// lwz r10,1456(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 1456);
	// addi r11,r22,1412
	ctx.r11.s64 = ctx.r22.s64 + 1412;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x826596b0
	if (ctx.cr6.eq) goto loc_826596B0;
	// addi r25,r11,8
	ctx.r25.s64 = ctx.r11.s64 + 8;
	// b 0x826596c4
	goto loc_826596C4;
loc_826596B0:
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// addi r25,r11,48
	ctx.r25.s64 = ctx.r11.s64 + 48;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x826596c4
	if (!ctx.cr6.eq) goto loc_826596C4;
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
loc_826596C4:
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// mr r23,r26
	ctx.r23.u64 = ctx.r26.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x826596e0
	if (!ctx.cr6.eq) goto loc_826596E0;
	// addi r23,r11,48
	ctx.r23.s64 = ctx.r11.s64 + 48;
	// b 0x826596f0
	goto loc_826596F0;
loc_826596E0:
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x826596f0
	if (!ctx.cr6.eq) goto loc_826596F0;
	// addi r23,r11,8
	ctx.r23.s64 = ctx.r11.s64 + 8;
loc_826596F0:
	// addi r11,r30,5
	ctx.r11.s64 = ctx.r30.s64 + 5;
	// rlwinm r24,r11,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r24,r25
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r25.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82659714
	if (ctx.cr6.eq) goto loc_82659714;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8265ad78
	ctx.lr = 0x82659714;
	sub_8265AD78(ctx, base);
loc_82659714:
	// li r3,152
	ctx.r3.s64 = 152;
	// bl 0x82333900
	ctx.lr = 0x8265971C;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82659730
	if (ctx.cr0.eq) goto loc_82659730;
	// bl 0x82656190
	ctx.lr = 0x82659728;
	sub_82656190(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82659734
	goto loc_82659734;
loc_82659730:
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_82659734:
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// addi r4,r28,144
	ctx.r4.s64 = ctx.r28.s64 + 144;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x82400b48
	ctx.lr = 0x82659744;
	sub_82400B48(ctx, base);
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// stw r28,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r28.u32);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// rlwinm r11,r11,2,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lwz r11,436(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 436);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82659794
	if (!ctx.cr6.gt) goto loc_82659794;
	// addi r27,r31,40
	ctx.r27.s64 = ctx.r31.s64 + 40;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_8265976C:
	// lwz r11,432(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 432);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// addi r4,r11,144
	ctx.r4.s64 = ctx.r11.s64 + 144;
	// bl 0x824152a0
	ctx.lr = 0x82659780;
	sub_824152A0(ctx, base);
	// lwz r11,436(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 436);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8265976c
	if (ctx.cr6.lt) goto loc_8265976C;
loc_82659794:
	// lwz r11,460(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 460);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826597d4
	if (!ctx.cr6.gt) goto loc_826597D4;
	// addi r27,r31,64
	ctx.r27.s64 = ctx.r31.s64 + 64;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_826597AC:
	// lwz r11,456(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 456);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// addi r4,r11,144
	ctx.r4.s64 = ctx.r11.s64 + 144;
	// bl 0x824152a0
	ctx.lr = 0x826597C0;
	sub_824152A0(ctx, base);
	// lwz r11,460(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 460);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826597ac
	if (ctx.cr6.lt) goto loc_826597AC;
loc_826597D4:
	// lwz r11,60(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// lwz r11,516(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 516);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// bl 0x82437f50
	ctx.lr = 0x826597EC;
	sub_82437F50(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82659868
	if (ctx.cr0.eq) goto loc_82659868;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// lwz r11,768(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 768);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// lwz r11,772(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 772);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// lwz r11,784(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 784);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// lwz r11,712(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 712);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// lwz r11,724(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 724);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// lwz r11,704(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 704);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8265986c
	if (!ctx.cr6.gt) goto loc_8265986C;
	// addi r27,r31,124
	ctx.r27.s64 = ctx.r31.s64 + 124;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_8265983C:
	// lwz r11,700(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 700);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x82410060
	ctx.lr = 0x82659850;
	sub_82410060(ctx, base);
	// lwz r11,704(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 704);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8265983c
	if (ctx.cr6.lt) goto loc_8265983C;
	// b 0x8265986c
	goto loc_8265986C;
loc_82659868:
	// stw r26,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r26.u32);
loc_8265986C:
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// li r30,6
	ctx.r30.s64 = 6;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// addi r10,r10,25704
	ctx.r10.s64 = ctx.r10.s64 + 25704;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// bl 0x82658040
	ctx.lr = 0x826598A4;
	sub_82658040(ctx, base);
	// stwx r31,r24,r25
	PPC_STORE_U32(ctx.r24.u32 + ctx.r25.u32, ctx.r31.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x826598c8
	if (ctx.cr6.eq) goto loc_826598C8;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x826598cc
	if (!ctx.cr6.eq) goto loc_826598CC;
loc_826598C8:
	// stw r10,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r10.u32);
loc_826598CC:
	// lwz r11,8(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x826598e0
	if (ctx.cr6.eq) goto loc_826598E0;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x826598e4
	if (!ctx.cr6.eq) goto loc_826598E4;
loc_826598E0:
	// stw r10,8(r23)
	PPC_STORE_U32(ctx.r23.u32 + 8, ctx.r10.u32);
loc_826598E4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82656da8
	ctx.lr = 0x826598EC;
	sub_82656DA8(ctx, base);
loc_826598EC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82a4ea40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826598F8"))) PPC_WEAK_FUNC(sub_826598F8);
PPC_FUNC_IMPL(__imp__sub_826598F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82659900;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1416(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1416);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82659a30
	if (!ctx.cr6.eq) goto loc_82659A30;
	// lwz r10,1456(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1456);
	// addi r11,r3,1412
	ctx.r11.s64 = ctx.r3.s64 + 1412;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82659930
	if (ctx.cr6.eq) goto loc_82659930;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// b 0x82659944
	goto loc_82659944;
loc_82659930:
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// addi r31,r11,48
	ctx.r31.s64 = ctx.r11.s64 + 48;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82659944
	if (!ctx.cr6.eq) goto loc_82659944;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_82659944:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82659960
	if (!ctx.cr6.eq) goto loc_82659960;
	// addi r28,r11,48
	ctx.r28.s64 = ctx.r11.s64 + 48;
	// b 0x82659970
	goto loc_82659970;
loc_82659960:
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82659970
	if (!ctx.cr6.eq) goto loc_82659970;
	// addi r28,r11,8
	ctx.r28.s64 = ctx.r11.s64 + 8;
loc_82659970:
	// addi r11,r27,5
	ctx.r11.s64 = ctx.r27.s64 + 5;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r29,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82659a30
	if (ctx.cr6.eq) goto loc_82659A30;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// li r9,7
	ctx.r9.s64 = 7;
	// stw r27,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// addi r10,r10,25704
	ctx.r10.s64 = ctx.r10.s64 + 25704;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// bl 0x82658040
	ctx.lr = 0x826599BC;
	sub_82658040(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,1316(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1316);
	// bl 0x82409be0
	ctx.lr = 0x826599CC;
	sub_82409BE0(ctx, base);
	// lwzx r11,r29,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,148(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// bl 0x824b2ab0
	ctx.lr = 0x826599DC;
	sub_824B2AB0(ctx, base);
	// lwzx r11,r29,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 148, ctx.r30.u32);
	// bl 0x8265ad78
	ctx.lr = 0x826599F4;
	sub_8265AD78(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,3
	ctx.r10.s64 = 3;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82659a0c
	if (ctx.cr6.eq) goto loc_82659A0C;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82659a10
	if (!ctx.cr6.eq) goto loc_82659A10;
loc_82659A0C:
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
loc_82659A10:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82659a24
	if (ctx.cr6.eq) goto loc_82659A24;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82659a28
	if (!ctx.cr6.eq) goto loc_82659A28;
loc_82659A24:
	// stw r10,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r10.u32);
loc_82659A28:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82656da8
	ctx.lr = 0x82659A30;
	sub_82656DA8(ctx, base);
loc_82659A30:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82659A38"))) PPC_WEAK_FUNC(sub_82659A38);
PPC_FUNC_IMPL(__imp__sub_82659A38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82659A40;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1416(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1416);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82659b70
	if (!ctx.cr6.eq) goto loc_82659B70;
	// lwz r10,1456(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1456);
	// addi r11,r3,1412
	ctx.r11.s64 = ctx.r3.s64 + 1412;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82659a6c
	if (ctx.cr6.eq) goto loc_82659A6C;
	// addi r28,r11,8
	ctx.r28.s64 = ctx.r11.s64 + 8;
	// b 0x82659a80
	goto loc_82659A80;
loc_82659A6C:
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// addi r28,r11,48
	ctx.r28.s64 = ctx.r11.s64 + 48;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82659a80
	if (!ctx.cr6.eq) goto loc_82659A80;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_82659A80:
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82659a9c
	if (!ctx.cr6.eq) goto loc_82659A9C;
	// addi r31,r11,48
	ctx.r31.s64 = ctx.r11.s64 + 48;
	// b 0x82659aac
	goto loc_82659AAC;
loc_82659A9C:
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82659aac
	if (!ctx.cr6.eq) goto loc_82659AAC;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
loc_82659AAC:
	// addi r11,r4,5
	ctx.r11.s64 = ctx.r4.s64 + 5;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r30,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82659b70
	if (ctx.cr6.eq) goto loc_82659B70;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r4,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r4.u32);
	// addi r10,r10,25704
	ctx.r10.s64 = ctx.r10.s64 + 25704;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// bl 0x82658040
	ctx.lr = 0x82659AF8;
	sub_82658040(ctx, base);
	// lwzx r11,r30,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82659b34
	if (ctx.cr6.eq) goto loc_82659B34;
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82659b34
	if (ctx.cr6.eq) goto loc_82659B34;
	// stw r29,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r29.u32);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,-22252
	ctx.r3.s64 = ctx.r11.s64 + -22252;
	// bl 0x82816528
	ctx.lr = 0x82659B20;
	sub_82816528(ctx, base);
	// bl 0x828e0d10
	ctx.lr = 0x82659B24;
	sub_828E0D10(ctx, base);
	// bl 0x82438250
	ctx.lr = 0x82659B28;
	sub_82438250(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82659b34
	if (ctx.cr0.eq) goto loc_82659B34;
	// bl 0x82701cb8
	ctx.lr = 0x82659B34;
	sub_82701CB8(ctx, base);
loc_82659B34:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// li r10,3
	ctx.r10.s64 = 3;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82659b4c
	if (ctx.cr6.eq) goto loc_82659B4C;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82659b50
	if (!ctx.cr6.eq) goto loc_82659B50;
loc_82659B4C:
	// stw r10,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r10.u32);
loc_82659B50:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82659b64
	if (ctx.cr6.eq) goto loc_82659B64;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82659b68
	if (!ctx.cr6.eq) goto loc_82659B68;
loc_82659B64:
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
loc_82659B68:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82656da8
	ctx.lr = 0x82659B70;
	sub_82656DA8(ctx, base);
loc_82659B70:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82659B78"))) PPC_WEAK_FUNC(sub_82659B78);
PPC_FUNC_IMPL(__imp__sub_82659B78) {
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
	// lwz r11,1416(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1416);
	// li r5,0
	ctx.r5.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82659c28
	if (!ctx.cr6.eq) goto loc_82659C28;
	// lwz r10,1456(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1456);
	// addi r11,r3,1412
	ctx.r11.s64 = ctx.r3.s64 + 1412;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82659bac
	if (ctx.cr6.eq) goto loc_82659BAC;
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// b 0x82659bc0
	goto loc_82659BC0;
loc_82659BAC:
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// addi r6,r11,48
	ctx.r6.s64 = ctx.r11.s64 + 48;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82659bc0
	if (!ctx.cr6.eq) goto loc_82659BC0;
	// li r6,0
	ctx.r6.s64 = 0;
loc_82659BC0:
	// lwz r10,4(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82659bd8
	if (!ctx.cr6.eq) goto loc_82659BD8;
	// addi r7,r11,48
	ctx.r7.s64 = ctx.r11.s64 + 48;
	// b 0x82659be8
	goto loc_82659BE8;
loc_82659BD8:
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82659c28
	if (!ctx.cr6.eq) goto loc_82659C28;
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
loc_82659BE8:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82659c28
	if (ctx.cr6.eq) goto loc_82659C28;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x8265afc8
	ctx.lr = 0x82659BF8;
	sub_8265AFC8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82659c28
	if (ctx.cr0.eq) goto loc_82659C28;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x8265afc8
	ctx.lr = 0x82659C08;
	sub_8265AFC8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82659c28
	if (ctx.cr0.eq) goto loc_82659C28;
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82659c28
	if (ctx.cr6.eq) goto loc_82659C28;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82659c28
	if (ctx.cr6.eq) goto loc_82659C28;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82659C28:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82659C40"))) PPC_WEAK_FUNC(sub_82659C40);
PPC_FUNC_IMPL(__imp__sub_82659C40) {
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
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,1416(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1416);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82659d2c
	if (!ctx.cr6.eq) goto loc_82659D2C;
	// lwz r10,1456(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1456);
	// addi r11,r5,1412
	ctx.r11.s64 = ctx.r5.s64 + 1412;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82659c7c
	if (ctx.cr6.eq) goto loc_82659C7C;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// b 0x82659c90
	goto loc_82659C90;
loc_82659C7C:
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// addi r31,r11,48
	ctx.r31.s64 = ctx.r11.s64 + 48;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82659c90
	if (!ctx.cr6.eq) goto loc_82659C90;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
loc_82659C90:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82659ca8
	if (!ctx.cr6.eq) goto loc_82659CA8;
	// addi r7,r11,48
	ctx.r7.s64 = ctx.r11.s64 + 48;
	// b 0x82659cb8
	goto loc_82659CB8;
loc_82659CA8:
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82659d2c
	if (!ctx.cr6.eq) goto loc_82659D2C;
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
loc_82659CB8:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82659d2c
	if (ctx.cr6.eq) goto loc_82659D2C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8265afc8
	ctx.lr = 0x82659CC8;
	sub_8265AFC8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82659d2c
	if (ctx.cr0.eq) goto loc_82659D2C;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x8265afc8
	ctx.lr = 0x82659CD8;
	sub_8265AFC8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82659d2c
	if (ctx.cr0.eq) goto loc_82659D2C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82659d2c
	if (ctx.cr6.eq) goto loc_82659D2C;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82659d2c
	if (ctx.cr6.eq) goto loc_82659D2C;
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// li r9,9
	ctx.r9.s64 = 9;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// addi r10,r10,25660
	ctx.r10.s64 = ctx.r10.s64 + 25660;
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x82658040
	ctx.lr = 0x82659D24;
	sub_82658040(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82659D2C:
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

__attribute__((alias("__imp__sub_82659D40"))) PPC_WEAK_FUNC(sub_82659D40);
PPC_FUNC_IMPL(__imp__sub_82659D40) {
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
	// lwz r11,1416(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1416);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82659dfc
	if (!ctx.cr6.eq) goto loc_82659DFC;
	// lwz r10,1456(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1456);
	// addi r11,r3,1412
	ctx.r11.s64 = ctx.r3.s64 + 1412;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82659d78
	if (ctx.cr6.eq) goto loc_82659D78;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// b 0x82659d8c
	goto loc_82659D8C;
loc_82659D78:
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// addi r31,r11,48
	ctx.r31.s64 = ctx.r11.s64 + 48;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82659d8c
	if (!ctx.cr6.eq) goto loc_82659D8C;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
loc_82659D8C:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82659da4
	if (!ctx.cr6.eq) goto loc_82659DA4;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// b 0x82659db4
	goto loc_82659DB4;
loc_82659DA4:
	// lwz r8,52(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82659dfc
	if (!ctx.cr6.eq) goto loc_82659DFC;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_82659DB4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82659dfc
	if (ctx.cr6.eq) goto loc_82659DFC;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// beq cr6,0x82659dfc
	if (ctx.cr6.eq) goto loc_82659DFC;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// li r8,10
	ctx.r8.s64 = 10;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r10,r10,25660
	ctx.r10.s64 = ctx.r10.s64 + 25660;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x82658040
	ctx.lr = 0x82659DF4;
	sub_82658040(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82659DFC:
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

__attribute__((alias("__imp__sub_82659E10"))) PPC_WEAK_FUNC(sub_82659E10);
PPC_FUNC_IMPL(__imp__sub_82659E10) {
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
	// lwz r11,1416(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1416);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82659ed8
	if (!ctx.cr6.eq) goto loc_82659ED8;
	// lwz r10,1456(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1456);
	// addi r11,r3,1412
	ctx.r11.s64 = ctx.r3.s64 + 1412;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82659e44
	if (ctx.cr6.eq) goto loc_82659E44;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// b 0x82659e58
	goto loc_82659E58;
loc_82659E44:
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// addi r8,r11,48
	ctx.r8.s64 = ctx.r11.s64 + 48;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82659e58
	if (!ctx.cr6.eq) goto loc_82659E58;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
loc_82659E58:
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r6,r10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82659e74
	if (!ctx.cr6.eq) goto loc_82659E74;
	// addi r9,r11,48
	ctx.r9.s64 = ctx.r11.s64 + 48;
	// b 0x82659e84
	goto loc_82659E84;
loc_82659E74:
	// lwz r6,52(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmpw cr6,r6,r10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82659e84
	if (!ctx.cr6.eq) goto loc_82659E84;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
loc_82659E84:
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82659e98
	if (ctx.cr6.eq) goto loc_82659E98;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82659ed8
	if (!ctx.cr6.eq) goto loc_82659ED8;
loc_82659E98:
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82659eac
	if (ctx.cr6.eq) goto loc_82659EAC;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82659ed8
	if (!ctx.cr6.eq) goto loc_82659ED8;
loc_82659EAC:
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// addi r10,r10,25660
	ctx.r10.s64 = ctx.r10.s64 + 25660;
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x82658040
	ctx.lr = 0x82659ED8;
	sub_82658040(ctx, base);
loc_82659ED8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82659EE8"))) PPC_WEAK_FUNC(sub_82659EE8);
PPC_FUNC_IMPL(__imp__sub_82659EE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,-17336
	ctx.r3.s64 = ctx.r11.s64 + -17336;
	// bl 0x82816528
	ctx.lr = 0x82659F08;
	sub_82816528(ctx, base);
	// bl 0x828e0d10
	ctx.lr = 0x82659F0C;
	sub_828E0D10(ctx, base);
	// bl 0x82438370
	ctx.lr = 0x82659F10;
	sub_82438370(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82659f70
	if (ctx.cr0.eq) goto loc_82659F70;
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,13024(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// bl 0x82824308
	ctx.lr = 0x82659F2C;
	sub_82824308(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826d1010
	ctx.lr = 0x82659F38;
	sub_826D1010(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,13024(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// stw r11,2872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2872, ctx.r11.u32);
	// lwz r11,420(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 420);
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x82827bd0
	ctx.lr = 0x82659F50;
	sub_82827BD0(ctx, base);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r10,420(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 420);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// stw r10,632(r11)
	PPC_STORE_U32(ctx.r11.u32 + 632, ctx.r10.u32);
	// stw r9,2868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2868, ctx.r9.u32);
	// stw r8,2792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2792, ctx.r8.u32);
loc_82659F70:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82659F88"))) PPC_WEAK_FUNC(sub_82659F88);
PPC_FUNC_IMPL(__imp__sub_82659F88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82659F90;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r4,1312(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1312);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82659fbc
	if (ctx.cr6.eq) goto loc_82659FBC;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82659FB4;
	sub_829B9720(ctx, base);
	// bl 0x82409c40
	ctx.lr = 0x82659FB8;
	sub_82409C40(ctx, base);
	// b 0x82659fc0
	goto loc_82659FC0;
loc_82659FBC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82659FC0:
	// bl 0x82438130
	ctx.lr = 0x82659FC4;
	sub_82438130(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-17336
	ctx.r31.s64 = ctx.r11.s64 + -17336;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82816528
	ctx.lr = 0x82659FD8;
	sub_82816528(ctx, base);
	// bl 0x828e0d10
	ctx.lr = 0x82659FDC;
	sub_828E0D10(ctx, base);
	// bl 0x82438370
	ctx.lr = 0x82659FE0;
	sub_82438370(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8265a09c
	if (ctx.cr6.eq) goto loc_8265A09C;
	// lwz r11,1416(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1416);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8265a09c
	if (ctx.cr6.eq) goto loc_8265A09C;
	// lwz r10,1456(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1456);
	// addi r11,r29,1412
	ctx.r11.s64 = ctx.r29.s64 + 1412;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8265a00c
	if (ctx.cr6.eq) goto loc_8265A00C;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// b 0x8265a020
	goto loc_8265A020;
loc_8265A00C:
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r10,r11,48
	ctx.r10.s64 = ctx.r11.s64 + 48;
	// bne cr6,0x8265a020
	if (!ctx.cr6.eq) goto loc_8265A020;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8265A020:
	// lwz r30,4(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r9,r30
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x8265a03c
	if (!ctx.cr6.eq) goto loc_8265A03C;
	// addi r10,r11,48
	ctx.r10.s64 = ctx.r11.s64 + 48;
	// b 0x8265a04c
	goto loc_8265A04C;
loc_8265A03C:
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmpw cr6,r9,r30
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x8265a04c
	if (!ctx.cr6.eq) goto loc_8265A04C;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
loc_8265A04C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r31,4(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x82816528
	ctx.lr = 0x8265A058;
	sub_82816528(ctx, base);
	// bl 0x828e0d10
	ctx.lr = 0x8265A05C;
	sub_828E0D10(ctx, base);
	// bl 0x82438370
	ctx.lr = 0x8265A060;
	sub_82438370(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8265a094
	if (ctx.cr0.eq) goto loc_8265A094;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8265a088
	if (ctx.cr6.eq) goto loc_8265A088;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x826d13b8
	ctx.lr = 0x8265A084;
	sub_826D13B8(ctx, base);
	// b 0x8265a094
	goto loc_8265A094;
loc_8265A088:
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,2868(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2868, ctx.r11.u32);
	// bl 0x826d1600
	ctx.lr = 0x8265A094;
	sub_826D1600(ctx, base);
loc_8265A094:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8265a0a8
	ctx.lr = 0x8265A09C;
	sub_8265A0A8(ctx, base);
loc_8265A09C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8265A0A8"))) PPC_WEAK_FUNC(sub_8265A0A8);
PPC_FUNC_IMPL(__imp__sub_8265A0A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x8265A0B0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1416(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1416);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8265a0c8
	if (!ctx.cr6.eq) goto loc_8265A0C8;
	// bl 0x8265a278
	ctx.lr = 0x8265A0C4;
	sub_8265A278(ctx, base);
	// b 0x8265a26c
	goto loc_8265A26C;
loc_8265A0C8:
	// lwz r11,1456(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1456);
	// addi r25,r3,1412
	ctx.r25.s64 = ctx.r3.s64 + 1412;
	// li r24,0
	ctx.r24.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8265a0e4
	if (ctx.cr6.eq) goto loc_8265A0E4;
	// addi r28,r25,8
	ctx.r28.s64 = ctx.r25.s64 + 8;
	// b 0x8265a0f8
	goto loc_8265A0F8;
loc_8265A0E4:
	// lwz r11,84(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 84);
	// addi r28,r25,48
	ctx.r28.s64 = ctx.r25.s64 + 48;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8265a0f8
	if (!ctx.cr6.eq) goto loc_8265A0F8;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
loc_8265A0F8:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8265a258
	if (ctx.cr6.eq) goto loc_8265A258;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// lwz r10,12(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8265a11c
	if (!ctx.cr6.eq) goto loc_8265A11C;
	// addi r26,r25,48
	ctx.r26.s64 = ctx.r25.s64 + 48;
	// b 0x8265a12c
	goto loc_8265A12C;
loc_8265A11C:
	// lwz r10,52(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 52);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8265a12c
	if (!ctx.cr6.eq) goto loc_8265A12C;
	// addi r26,r25,8
	ctx.r26.s64 = ctx.r25.s64 + 8;
loc_8265A12C:
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r3,1316(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1316);
	// bl 0x82409be0
	ctx.lr = 0x8265A13C;
	sub_82409BE0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r28,20
	ctx.r31.s64 = ctx.r28.s64 + 20;
	// li r27,4
	ctx.r27.s64 = 4;
loc_8265A148:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265a198
	if (ctx.cr6.eq) goto loc_8265A198;
	// lwz r4,148(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8265a174
	if (ctx.cr6.eq) goto loc_8265A174;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824b2ab0
	ctx.lr = 0x8265A16C;
	sub_824B2AB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r24,148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 148, ctx.r24.u32);
loc_8265A174:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8265a194
	if (ctx.cr6.eq) goto loc_8265A194;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265A194;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8265A194:
	// stw r24,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
loc_8265A198:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x8265a148
	if (!ctx.cr0.eq) goto loc_8265A148;
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8265a1bc
	if (ctx.cr6.eq) goto loc_8265A1BC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,12(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// bl 0x824a8bc0
	ctx.lr = 0x8265A1BC;
	sub_824A8BC0(ctx, base);
loc_8265A1BC:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8265a238
	if (ctx.cr6.eq) goto loc_8265A238;
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r3,1316(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1316);
	// bl 0x82409be0
	ctx.lr = 0x8265A1D0;
	sub_82409BE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r26,20
	ctx.r31.s64 = ctx.r26.s64 + 20;
	// li r29,4
	ctx.r29.s64 = 4;
loc_8265A1DC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265a22c
	if (ctx.cr6.eq) goto loc_8265A22C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8265a22c
	if (ctx.cr6.eq) goto loc_8265A22C;
	// lwz r3,148(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8265a22c
	if (ctx.cr6.eq) goto loc_8265A22C;
	// bl 0x82438190
	ctx.lr = 0x8265A200;
	sub_82438190(ctx, base);
	// lwz r11,7264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7264);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265a22c
	if (ctx.cr6.eq) goto loc_8265A22C;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8265a22c
	if (ctx.cr6.eq) goto loc_8265A22C;
	// lwz r10,520(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 520);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8265a22c
	if (!ctx.cr6.gt) goto loc_8265A22C;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82418228
	ctx.lr = 0x8265A22C;
	sub_82418228(ctx, base);
loc_8265A22C:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x8265a1dc
	if (!ctx.cr0.eq) goto loc_8265A1DC;
loc_8265A238:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,-22252
	ctx.r3.s64 = ctx.r11.s64 + -22252;
	// bl 0x82816528
	ctx.lr = 0x8265A244;
	sub_82816528(ctx, base);
	// bl 0x828e0d10
	ctx.lr = 0x8265A248;
	sub_828E0D10(ctx, base);
	// bl 0x82438250
	ctx.lr = 0x8265A24C;
	sub_82438250(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8265a258
	if (ctx.cr0.eq) goto loc_8265A258;
	// bl 0x82702a38
	ctx.lr = 0x8265A258;
	sub_82702A38(ctx, base);
loc_8265A258:
	// stw r24,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r24.u32);
	// addi r3,r25,8
	ctx.r3.s64 = ctx.r25.s64 + 8;
	// bl 0x8265a8c0
	ctx.lr = 0x8265A264;
	sub_8265A8C0(ctx, base);
	// addi r3,r25,48
	ctx.r3.s64 = ctx.r25.s64 + 48;
	// bl 0x8265a8c0
	ctx.lr = 0x8265A26C;
	sub_8265A8C0(ctx, base);
loc_8265A26C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8265A278"))) PPC_WEAK_FUNC(sub_8265A278);
PPC_FUNC_IMPL(__imp__sub_8265A278) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x8265A280;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1456(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1456);
	// addi r27,r3,1412
	ctx.r27.s64 = ctx.r3.s64 + 1412;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8265a2a0
	if (ctx.cr6.eq) goto loc_8265A2A0;
	// addi r31,r27,8
	ctx.r31.s64 = ctx.r27.s64 + 8;
	// b 0x8265a2b4
	goto loc_8265A2B4;
loc_8265A2A0:
	// lwz r11,84(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 84);
	// addi r31,r27,48
	ctx.r31.s64 = ctx.r27.s64 + 48;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8265a2b4
	if (!ctx.cr6.eq) goto loc_8265A2B4;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_8265A2B4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8265a3e8
	if (ctx.cr6.eq) goto loc_8265A3E8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// lwz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8265a2d8
	if (!ctx.cr6.eq) goto loc_8265A2D8;
	// addi r28,r27,48
	ctx.r28.s64 = ctx.r27.s64 + 48;
	// b 0x8265a2e8
	goto loc_8265A2E8;
loc_8265A2D8:
	// lwz r10,52(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 52);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8265a2e8
	if (!ctx.cr6.eq) goto loc_8265A2E8;
	// addi r28,r27,8
	ctx.r28.s64 = ctx.r27.s64 + 8;
loc_8265A2E8:
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r3,1316(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1316);
	// bl 0x82409be0
	ctx.lr = 0x8265A2F8;
	sub_82409BE0(ctx, base);
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// li r29,4
	ctx.r29.s64 = 4;
loc_8265A300:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265a340
	if (ctx.cr6.eq) goto loc_8265A340;
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8265a31c
	if (ctx.cr6.eq) goto loc_8265A31C;
	// stw r26,148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 148, ctx.r26.u32);
loc_8265A31C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8265a33c
	if (ctx.cr6.eq) goto loc_8265A33C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265A33C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8265A33C:
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
loc_8265A340:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x8265a300
	if (!ctx.cr0.eq) goto loc_8265A300;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8265a3c8
	if (ctx.cr6.eq) goto loc_8265A3C8;
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r3,1316(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1316);
	// bl 0x82409be0
	ctx.lr = 0x8265A360;
	sub_82409BE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r28,20
	ctx.r31.s64 = ctx.r28.s64 + 20;
	// li r29,4
	ctx.r29.s64 = 4;
loc_8265A36C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265a3bc
	if (ctx.cr6.eq) goto loc_8265A3BC;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8265a3bc
	if (ctx.cr6.eq) goto loc_8265A3BC;
	// lwz r3,148(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8265a3bc
	if (ctx.cr6.eq) goto loc_8265A3BC;
	// bl 0x82438190
	ctx.lr = 0x8265A390;
	sub_82438190(ctx, base);
	// lwz r11,7264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7264);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265a3bc
	if (ctx.cr6.eq) goto loc_8265A3BC;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8265a3bc
	if (ctx.cr6.eq) goto loc_8265A3BC;
	// lwz r10,520(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 520);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8265a3bc
	if (!ctx.cr6.gt) goto loc_8265A3BC;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82418228
	ctx.lr = 0x8265A3BC;
	sub_82418228(ctx, base);
loc_8265A3BC:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x8265a36c
	if (!ctx.cr0.eq) goto loc_8265A36C;
loc_8265A3C8:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,-22252
	ctx.r3.s64 = ctx.r11.s64 + -22252;
	// bl 0x82816528
	ctx.lr = 0x8265A3D4;
	sub_82816528(ctx, base);
	// bl 0x828e0d10
	ctx.lr = 0x8265A3D8;
	sub_828E0D10(ctx, base);
	// bl 0x82438250
	ctx.lr = 0x8265A3DC;
	sub_82438250(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8265a3e8
	if (ctx.cr0.eq) goto loc_8265A3E8;
	// bl 0x82702a38
	ctx.lr = 0x8265A3E8;
	sub_82702A38(ctx, base);
loc_8265A3E8:
	// stw r26,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r26.u32);
	// addi r3,r27,8
	ctx.r3.s64 = ctx.r27.s64 + 8;
	// bl 0x8265a8c0
	ctx.lr = 0x8265A3F4;
	sub_8265A8C0(ctx, base);
	// addi r3,r27,48
	ctx.r3.s64 = ctx.r27.s64 + 48;
	// bl 0x8265a8c0
	ctx.lr = 0x8265A3FC;
	sub_8265A8C0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8265A408"))) PPC_WEAK_FUNC(sub_8265A408);
PPC_FUNC_IMPL(__imp__sub_8265A408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8265a458
	ctx.lr = 0x8265A428;
	sub_8265A458(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8265a438
	if (ctx.cr0.eq) goto loc_8265A438;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x8265A438;
	sub_82332DB8(ctx, base);
loc_8265A438:
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

__attribute__((alias("__imp__sub_8265A458"))) PPC_WEAK_FUNC(sub_8265A458);
PPC_FUNC_IMPL(__imp__sub_8265A458) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r11,r11,25540
	ctx.r11.s64 = ctx.r11.s64 + 25540;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8265a498
	if (ctx.cr6.eq) goto loc_8265A498;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265A498;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8265A498:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r11,r11,16980
	ctx.r11.s64 = ctx.r11.s64 + 16980;
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

__attribute__((alias("__imp__sub_8265A4B8"))) PPC_WEAK_FUNC(sub_8265A4B8);
PPC_FUNC_IMPL(__imp__sub_8265A4B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bgt cr6,0x8265a838
	if (ctx.cr6.gt) goto loc_8265A838;
	// lis r12,-32242
	ctx.r12.s64 = -2113011712;
	// addi r12,r12,-31128
	ctx.r12.s64 = ctx.r12.s64 + -31128;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32154
	ctx.r12.s64 = -2107244544;
	// addi r12,r12,-23292
	ctx.r12.s64 = ctx.r12.s64 + -23292;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8265A504;
	case 1:
		goto loc_8265A540;
	case 2:
		goto loc_8265A57C;
	case 3:
		goto loc_8265A6E4;
	case 4:
		goto loc_8265A728;
	case 5:
		goto loc_8265A76C;
	case 6:
		goto loc_8265A7B0;
	case 7:
		goto loc_8265A7F4;
	case 8:
		goto loc_8265A5B8;
	case 9:
		goto loc_8265A5F4;
	case 10:
		goto loc_8265A630;
	case 11:
		goto loc_8265A66C;
	case 12:
		goto loc_8265A6A8;
	default:
		__builtin_unreachable();
	}
loc_8265A504:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82333900
	ctx.lr = 0x8265A50C;
	sub_82333900(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8265a538
	if (ctx.cr0.eq) goto loc_8265A538;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// addi r10,r10,25616
	ctx.r10.s64 = ctx.r10.s64 + 25616;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8265a834
	goto loc_8265A834;
loc_8265A538:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8265a834
	goto loc_8265A834;
loc_8265A540:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82333900
	ctx.lr = 0x8265A548;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8265a570
	if (ctx.cr0.eq) goto loc_8265A570;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// addi r11,r11,25660
	ctx.r11.s64 = ctx.r11.s64 + 25660;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8265a574
	goto loc_8265A574;
loc_8265A570:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8265A574:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x8265a834
	goto loc_8265A834;
loc_8265A57C:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82333900
	ctx.lr = 0x8265A584;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8265a5ac
	if (ctx.cr0.eq) goto loc_8265A5AC;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// addi r11,r11,25660
	ctx.r11.s64 = ctx.r11.s64 + 25660;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8265a5b0
	goto loc_8265A5B0;
loc_8265A5AC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8265A5B0:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x8265a834
	goto loc_8265A834;
loc_8265A5B8:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82333900
	ctx.lr = 0x8265A5C0;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8265a5e8
	if (ctx.cr0.eq) goto loc_8265A5E8;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// addi r11,r11,25660
	ctx.r11.s64 = ctx.r11.s64 + 25660;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8265a5ec
	goto loc_8265A5EC;
loc_8265A5E8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8265A5EC:
	// li r11,9
	ctx.r11.s64 = 9;
	// b 0x8265a834
	goto loc_8265A834;
loc_8265A5F4:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82333900
	ctx.lr = 0x8265A5FC;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8265a624
	if (ctx.cr0.eq) goto loc_8265A624;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// addi r11,r11,25660
	ctx.r11.s64 = ctx.r11.s64 + 25660;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8265a628
	goto loc_8265A628;
loc_8265A624:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8265A628:
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x8265a834
	goto loc_8265A834;
loc_8265A630:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82333900
	ctx.lr = 0x8265A638;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8265a660
	if (ctx.cr0.eq) goto loc_8265A660;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// addi r11,r11,25660
	ctx.r11.s64 = ctx.r11.s64 + 25660;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8265a664
	goto loc_8265A664;
loc_8265A660:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8265A664:
	// li r11,11
	ctx.r11.s64 = 11;
	// b 0x8265a834
	goto loc_8265A834;
loc_8265A66C:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82333900
	ctx.lr = 0x8265A674;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8265a69c
	if (ctx.cr0.eq) goto loc_8265A69C;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// addi r11,r11,25660
	ctx.r11.s64 = ctx.r11.s64 + 25660;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8265a6a0
	goto loc_8265A6A0;
loc_8265A69C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8265A6A0:
	// li r11,12
	ctx.r11.s64 = 12;
	// b 0x8265a834
	goto loc_8265A834;
loc_8265A6A8:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82333900
	ctx.lr = 0x8265A6B0;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8265a6d8
	if (ctx.cr0.eq) goto loc_8265A6D8;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// addi r11,r11,25660
	ctx.r11.s64 = ctx.r11.s64 + 25660;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8265a6dc
	goto loc_8265A6DC;
loc_8265A6D8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8265A6DC:
	// li r11,13
	ctx.r11.s64 = 13;
	// b 0x8265a834
	goto loc_8265A834;
loc_8265A6E4:
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82333900
	ctx.lr = 0x8265A6EC;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8265a71c
	if (ctx.cr0.eq) goto loc_8265A71C;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// addi r11,r11,25704
	ctx.r11.s64 = ctx.r11.s64 + 25704;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r31,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r31.u32);
	// stw r31,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r31.u32);
	// b 0x8265a720
	goto loc_8265A720;
loc_8265A71C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8265A720:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x8265a834
	goto loc_8265A834;
loc_8265A728:
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82333900
	ctx.lr = 0x8265A730;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8265a760
	if (ctx.cr0.eq) goto loc_8265A760;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// addi r11,r11,25704
	ctx.r11.s64 = ctx.r11.s64 + 25704;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r31,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r31.u32);
	// stw r31,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r31.u32);
	// b 0x8265a764
	goto loc_8265A764;
loc_8265A760:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8265A764:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x8265a834
	goto loc_8265A834;
loc_8265A76C:
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82333900
	ctx.lr = 0x8265A774;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8265a7a4
	if (ctx.cr0.eq) goto loc_8265A7A4;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// addi r11,r11,25704
	ctx.r11.s64 = ctx.r11.s64 + 25704;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r31,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r31.u32);
	// stw r31,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r31.u32);
	// b 0x8265a7a8
	goto loc_8265A7A8;
loc_8265A7A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8265A7A8:
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x8265a834
	goto loc_8265A834;
loc_8265A7B0:
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82333900
	ctx.lr = 0x8265A7B8;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8265a7e8
	if (ctx.cr0.eq) goto loc_8265A7E8;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// addi r11,r11,25704
	ctx.r11.s64 = ctx.r11.s64 + 25704;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r31,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r31.u32);
	// stw r31,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r31.u32);
	// b 0x8265a7ec
	goto loc_8265A7EC;
loc_8265A7E8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8265A7EC:
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x8265a834
	goto loc_8265A834;
loc_8265A7F4:
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82333900
	ctx.lr = 0x8265A7FC;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8265a82c
	if (ctx.cr0.eq) goto loc_8265A82C;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// addi r11,r11,25704
	ctx.r11.s64 = ctx.r11.s64 + 25704;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r31,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r31.u32);
	// stw r31,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r31.u32);
	// b 0x8265a830
	goto loc_8265A830;
loc_8265A82C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8265A830:
	// li r11,8
	ctx.r11.s64 = 8;
loc_8265A834:
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
loc_8265A838:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265A850"))) PPC_WEAK_FUNC(sub_8265A850);
PPC_FUNC_IMPL(__imp__sub_8265A850) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8265A858;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r29,r30,8
	ctx.r29.s64 = ctx.r30.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265A884;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8265a89c
	if (ctx.cr6.eq) goto loc_8265A89C;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8265a4b8
	ctx.lr = 0x8265A898;
	sub_8265A4B8(ctx, base);
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
loc_8265A89C:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265A8B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8265A8C0"))) PPC_WEAK_FUNC(sub_8265A8C0);
PPC_FUNC_IMPL(__imp__sub_8265A8C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8265A8C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r28,4
	ctx.r28.s64 = 4;
	// addi r31,r30,20
	ctx.r31.s64 = ctx.r30.s64 + 20;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8265A8DC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8265a900
	if (ctx.cr6.eq) goto loc_8265A900;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265A8FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_8265A900:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x8265a8dc
	if (!ctx.cr0.eq) goto loc_8265A8DC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// stw r29,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r29.u32);
	// stw r29,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r29.u32);
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8265A930"))) PPC_WEAK_FUNC(sub_8265A930);
PPC_FUNC_IMPL(__imp__sub_8265A930) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8265A938;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8265a9d8
	if (ctx.cr6.eq) goto loc_8265A9D8;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// addi r31,r11,-22252
	ctx.r31.s64 = ctx.r11.s64 + -22252;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82816528
	ctx.lr = 0x8265A968;
	sub_82816528(ctx, base);
	// bl 0x828e0d10
	ctx.lr = 0x8265A96C;
	sub_828E0D10(ctx, base);
	// bl 0x82438250
	ctx.lr = 0x8265A970;
	sub_82438250(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8265a97c
	if (ctx.cr0.eq) goto loc_8265A97C;
	// bl 0x82701cb8
	ctx.lr = 0x8265A97C;
	sub_82701CB8(ctx, base);
loc_8265A97C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8265a9d8
	if (ctx.cr6.eq) goto loc_8265A9D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82816528
	ctx.lr = 0x8265A98C;
	sub_82816528(ctx, base);
	// bl 0x828e0d10
	ctx.lr = 0x8265A990;
	sub_828E0D10(ctx, base);
	// bl 0x82438250
	ctx.lr = 0x8265A994;
	sub_82438250(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8265a9d8
	if (ctx.cr0.eq) goto loc_8265A9D8;
	// lwz r11,3256(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3256);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r8,6
	ctx.r8.s64 = 6;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stw r29,3644(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3644, ctx.r29.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// stw r10,3384(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3384, ctx.r10.u32);
	// stw r11,3256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3256, ctx.r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// stw r8,3376(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3376, ctx.r8.u32);
	// addi r4,r7,26556
	ctx.r4.s64 = ctx.r7.s64 + 26556;
	// lwz r11,1036(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1036);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265A9D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8265A9D8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8265A9E0"))) PPC_WEAK_FUNC(sub_8265A9E0);
PPC_FUNC_IMPL(__imp__sub_8265A9E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,152
	ctx.r3.s64 = 152;
	// bl 0x82333900
	ctx.lr = 0x8265AA00;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8265aa14
	if (ctx.cr0.eq) goto loc_8265AA14;
	// bl 0x82656190
	ctx.lr = 0x8265AA0C;
	sub_82656190(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8265aa18
	goto loc_8265AA18;
loc_8265AA14:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8265AA18:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r4,r30,12
	ctx.r4.s64 = ctx.r30.s64 + 12;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82400b48
	ctx.lr = 0x8265AA2C;
	sub_82400B48(ctx, base);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// addi r4,r30,40
	ctx.r4.s64 = ctx.r30.s64 + 40;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x824bc0c0
	ctx.lr = 0x8265AA40;
	sub_824BC0C0(ctx, base);
	// addi r4,r30,64
	ctx.r4.s64 = ctx.r30.s64 + 64;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x824bc0c0
	ctx.lr = 0x8265AA4C;
	sub_824BC0C0(ctx, base);
	// lwz r10,88(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// lwz r10,92(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// stw r10,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r10.u32);
	// lwz r10,96(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8265aab4
	if (ctx.cr6.eq) goto loc_8265AAB4;
	// lwz r11,104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// addi r4,r30,124
	ctx.r4.s64 = ctx.r30.s64 + 124;
	// addi r3,r31,124
	ctx.r3.s64 = ctx.r31.s64 + 124;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// lwz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// lwz r11,116(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// lwz r11,120(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// bl 0x828e0f90
	ctx.lr = 0x8265AAB4;
	sub_828E0F90(ctx, base);
loc_8265AAB4:
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

__attribute__((alias("__imp__sub_8265AAD0"))) PPC_WEAK_FUNC(sub_8265AAD0);
PPC_FUNC_IMPL(__imp__sub_8265AAD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8265AAD8;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// bl 0x823339b8
	ctx.lr = 0x8265AAEC;
	sub_823339B8(ctx, base);
	// lis r27,-31949
	ctx.r27.s64 = -2093809664;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r7,-1
	ctx.r7.s64 = -1;
	// lwz r3,10548(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 10548);
	// bl 0x8241eb30
	ctx.lr = 0x8265AB08;
	sub_8241EB30(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8265ac74
	if (ctx.cr0.eq) goto loc_8265AC74;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// rlwimi r10,r11,30,1,1
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 30) & 0x40000000) | (ctx.r10.u64 & 0xFFFFFFFFBFFFFFFF);
	// stw r10,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r10.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// stw r11,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r11.u32);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8265ab8c
	if (!ctx.cr6.gt) goto loc_8265AB8C;
	// li r28,0
	ctx.r28.s64 = 0;
loc_8265AB3C:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x823339b8
	ctx.lr = 0x8265AB4C;
	sub_823339B8(ctx, base);
	// lwz r11,10548(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 10548);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r7,-1
	ctx.r7.s64 = -1;
	// bl 0x8241eb30
	ctx.lr = 0x8265AB68;
	sub_8241EB30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826822b0
	ctx.lr = 0x8265AB78;
	sub_826822B0(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,24
	ctx.r28.s64 = ctx.r28.s64 + 24;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8265ab3c
	if (ctx.cr6.lt) goto loc_8265AB3C;
loc_8265AB8C:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8265abf0
	if (!ctx.cr6.gt) goto loc_8265ABF0;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8265ABA0:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x823339b8
	ctx.lr = 0x8265ABB0;
	sub_823339B8(ctx, base);
	// lwz r11,10548(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 10548);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r7,-1
	ctx.r7.s64 = -1;
	// bl 0x8241eb30
	ctx.lr = 0x8265ABCC;
	sub_8241EB30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826822b0
	ctx.lr = 0x8265ABDC;
	sub_826822B0(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,24
	ctx.r29.s64 = ctx.r29.s64 + 24;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8265aba0
	if (ctx.cr6.lt) goto loc_8265ABA0;
loc_8265ABF0:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,516(r30)
	PPC_STORE_U32(ctx.r30.u32 + 516, ctx.r11.u32);
	// lwz r11,140(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 140);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265AC0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265AC20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8265ac74
	if (ctx.cr6.eq) goto loc_8265AC74;
	// bl 0x82439178
	ctx.lr = 0x8265AC30;
	sub_82439178(ctx, base);
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
	ctx.lr = 0x8265AC48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne 0x8265ac58
	if (!ctx.cr0.eq) goto loc_8265AC58;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8265AC58:
	// addi r9,r31,124
	ctx.r9.s64 = ctx.r31.s64 + 124;
	// lwz r8,120(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r7,116(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r6,112(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r5,108(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x82683828
	ctx.lr = 0x8265AC74;
	sub_82683828(ctx, base);
loc_8265AC74:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8265AC80"))) PPC_WEAK_FUNC(sub_8265AC80);
PPC_FUNC_IMPL(__imp__sub_8265AC80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8265AC88;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,5
	ctx.r11.s64 = ctx.r4.s64 + 5;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwzx r11,r29,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265acb4
	if (ctx.cr6.eq) goto loc_8265ACB4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8265ad78
	ctx.lr = 0x8265ACB4;
	sub_8265AD78(ctx, base);
loc_8265ACB4:
	// stwx r28,r29,r31
	PPC_STORE_U32(ctx.r29.u32 + ctx.r31.u32, ctx.r28.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8265ad6c
	if (ctx.cr6.eq) goto loc_8265AD6C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8265aad0
	ctx.lr = 0x8265ACC8;
	sub_8265AAD0(ctx, base);
	// stw r3,148(r28)
	PPC_STORE_U32(ctx.r28.u32 + 148, ctx.r3.u32);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r3,10548(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// bl 0x82435048
	ctx.lr = 0x8265ACD8;
	sub_82435048(ctx, base);
	// lwz r11,148(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 148);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265ad10
	if (ctx.cr6.eq) goto loc_8265AD10;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,-22252
	ctx.r3.s64 = ctx.r11.s64 + -22252;
	// bl 0x82816528
	ctx.lr = 0x8265ACF0;
	sub_82816528(ctx, base);
	// bl 0x828e0d10
	ctx.lr = 0x8265ACF4;
	sub_828E0D10(ctx, base);
	// bl 0x82438250
	ctx.lr = 0x8265ACF8;
	sub_82438250(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8265ad6c
	if (ctx.cr0.eq) goto loc_8265AD6C;
	// lwz r5,8(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r4,148(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 148);
	// bl 0x827020e8
	ctx.lr = 0x8265AD0C;
	sub_827020E8(ctx, base);
	// b 0x8265ad6c
	goto loc_8265AD6C;
loc_8265AD10:
	// lwz r9,1540(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1540);
	// addi r31,r3,1524
	ctx.r31.s64 = ctx.r3.s64 + 1524;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8265ad44
	if (!ctx.cr6.gt) goto loc_8265AD44;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_8265AD28:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r28
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8265ad6c
	if (ctx.cr6.eq) goto loc_8265AD6C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8265ad28
	if (ctx.cr6.lt) goto loc_8265AD28;
loc_8265AD44:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332d50
	ctx.lr = 0x8265AD58;
	sub_82332D50(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8265ad6c
	if (ctx.cr0.eq) goto loc_8265AD6C;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
loc_8265AD6C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8265AD78"))) PPC_WEAK_FUNC(sub_8265AD78);
PPC_FUNC_IMPL(__imp__sub_8265AD78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x8265AD80;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,5
	ctx.r11.s64 = ctx.r4.s64 + 5;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265ae6c
	if (ctx.cr6.eq) goto loc_8265AE6C;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8265add8
	if (ctx.cr6.eq) goto loc_8265ADD8;
	// lwz r11,148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265add8
	if (ctx.cr6.eq) goto loc_8265ADD8;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,-22252
	ctx.r3.s64 = ctx.r11.s64 + -22252;
	// bl 0x82816528
	ctx.lr = 0x8265ADBC;
	sub_82816528(ctx, base);
	// bl 0x828e0d10
	ctx.lr = 0x8265ADC0;
	sub_828E0D10(ctx, base);
	// bl 0x82438250
	ctx.lr = 0x8265ADC4;
	sub_82438250(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8265add8
	if (ctx.cr0.eq) goto loc_8265ADD8;
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// lwz r4,148(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// bl 0x82702310
	ctx.lr = 0x8265ADD8;
	sub_82702310(ctx, base);
loc_8265ADD8:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r3,10548(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// bl 0x82435048
	ctx.lr = 0x8265ADE4;
	sub_82435048(ctx, base);
	// lwz r11,1540(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1540);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwzx r26,r27,r28
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// addi r31,r3,1524
	ctx.r31.s64 = ctx.r3.s64 + 1524;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8265ae44
	if (!ctx.cr6.gt) goto loc_8265AE44;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8265AE00:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x8265ae30
	if (!ctx.cr6.eq) goto loc_8265AE30;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332ca8
	ctx.lr = 0x8265AE28;
	sub_82332CA8(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
loc_8265AE30:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8265ae00
	if (ctx.cr6.lt) goto loc_8265AE00;
loc_8265AE44:
	// lwzx r3,r27,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8265ae64
	if (ctx.cr6.eq) goto loc_8265AE64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265AE64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8265AE64:
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r27,r28
	PPC_STORE_U32(ctx.r27.u32 + ctx.r28.u32, ctx.r11.u32);
loc_8265AE6C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8265AE78"))) PPC_WEAK_FUNC(sub_8265AE78);
PPC_FUNC_IMPL(__imp__sub_8265AE78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8265AE80;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r11,r30,5
	ctx.r11.s64 = ctx.r30.s64 + 5;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265af34
	if (ctx.cr6.eq) goto loc_8265AF34;
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8265af34
	if (ctx.cr6.eq) goto loc_8265AF34;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// stw r9,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r9.u32);
	// addi r31,r10,-22252
	ctx.r31.s64 = ctx.r10.s64 + -22252;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82816528
	ctx.lr = 0x8265AEC4;
	sub_82816528(ctx, base);
	// bl 0x828e0d10
	ctx.lr = 0x8265AEC8;
	sub_828E0D10(ctx, base);
	// bl 0x82438250
	ctx.lr = 0x8265AECC;
	sub_82438250(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8265aed8
	if (ctx.cr0.eq) goto loc_8265AED8;
	// bl 0x82701cb8
	ctx.lr = 0x8265AED8;
	sub_82701CB8(ctx, base);
loc_8265AED8:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8265af34
	if (ctx.cr6.eq) goto loc_8265AF34;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82816528
	ctx.lr = 0x8265AEE8;
	sub_82816528(ctx, base);
	// bl 0x828e0d10
	ctx.lr = 0x8265AEEC;
	sub_828E0D10(ctx, base);
	// bl 0x82438250
	ctx.lr = 0x8265AEF0;
	sub_82438250(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8265af34
	if (ctx.cr0.eq) goto loc_8265AF34;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,3256(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3256);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r8,6
	ctx.r8.s64 = 6;
	// slw r7,r11,r30
	ctx.r7.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r30.u8 & 0x3F));
	// stw r11,3384(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3384, ctx.r11.u32);
	// or r11,r7,r10
	ctx.r11.u64 = ctx.r7.u64 | ctx.r10.u64;
	// lwz r9,1036(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1036);
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// stw r8,3376(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3376, ctx.r8.u32);
	// stw r11,3256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3256, ctx.r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,26556
	ctx.r4.s64 = ctx.r10.s64 + 26556;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8265AF34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8265AF34:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8265AF40"))) PPC_WEAK_FUNC(sub_8265AF40);
PPC_FUNC_IMPL(__imp__sub_8265AF40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,-22252
	ctx.r3.s64 = ctx.r11.s64 + -22252;
	// bl 0x82816528
	ctx.lr = 0x8265AF5C;
	sub_82816528(ctx, base);
	// bl 0x828e0d10
	ctx.lr = 0x8265AF60;
	sub_828E0D10(ctx, base);
	// bl 0x82438250
	ctx.lr = 0x8265AF64;
	sub_82438250(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8265afb4
	if (ctx.cr0.eq) goto loc_8265AFB4;
	// lwz r11,3376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3376);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x8265afb4
	if (ctx.cr6.eq) goto loc_8265AFB4;
	// lwz r11,3384(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3384);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8265afb4
	if (ctx.cr6.eq) goto loc_8265AFB4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,-2940
	ctx.r4.s64 = ctx.r10.s64 + -2940;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1036);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265AFA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,3236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3236, ctx.r11.u32);
	// stw r10,1792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1792, ctx.r10.u32);
loc_8265AFB4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265AFC8"))) PPC_WEAK_FUNC(sub_8265AFC8);
PPC_FUNC_IMPL(__imp__sub_8265AFC8) {
	PPC_FUNC_PROLOGUE();
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,16(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r10,r8,20
	ctx.r10.s64 = ctx.r8.s64 + 20;
loc_8265AFE0:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8265b000
	if (ctx.cr6.eq) goto loc_8265B000;
	// lwz r9,88(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8265b00c
	if (ctx.cr6.eq) goto loc_8265B00C;
loc_8265B000:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// b 0x8265afe0
	goto loc_8265AFE0;
loc_8265B00C:
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r3,88(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265B020"))) PPC_WEAK_FUNC(sub_8265B020);
PPC_FUNC_IMPL(__imp__sub_8265B020) {
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
	// li r3,152
	ctx.r3.s64 = 152;
	// bl 0x82333900
	ctx.lr = 0x8265B034;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8265b044
	if (ctx.cr0.eq) goto loc_8265B044;
	// bl 0x82656190
	ctx.lr = 0x8265B040;
	sub_82656190(ctx, base);
	// b 0x8265b048
	goto loc_8265B048;
loc_8265B044:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8265B048:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265B058"))) PPC_WEAK_FUNC(sub_8265B058);
PPC_FUNC_IMPL(__imp__sub_8265B058) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,13332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13332);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8265b0a0
	if (!ctx.cr6.eq) goto loc_8265B0A0;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// addi r4,r11,-24392
	ctx.r4.s64 = ctx.r11.s64 + -24392;
	// addi r3,r10,-26956
	ctx.r3.s64 = ctx.r10.s64 + -26956;
	// bl 0x82a4c7d8
	ctx.lr = 0x8265B08C;
	sub_82A4C7D8(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82a4ca90
	ctx.lr = 0x8265B094;
	sub_82A4CA90(ctx, base);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bl 0x82816528
	ctx.lr = 0x8265B09C;
	sub_82816528(ctx, base);
	// stw r3,13332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13332, ctx.r3.u32);
loc_8265B0A0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265B0B8"))) PPC_WEAK_FUNC(sub_8265B0B8);
PPC_FUNC_IMPL(__imp__sub_8265B0B8) {
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
	ctx.lr = 0x8265B0CC;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8265b0f4
	if (ctx.cr0.eq) goto loc_8265B0F4;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,25540
	ctx.r10.s64 = ctx.r10.s64 + 25540;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x8265b0f8
	goto loc_8265B0F8;
loc_8265B0F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8265B0F8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265B108"))) PPC_WEAK_FUNC(sub_8265B108);
PPC_FUNC_IMPL(__imp__sub_8265B108) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,13336(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13336);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8265b150
	if (!ctx.cr6.eq) goto loc_8265B150;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// addi r4,r11,-24392
	ctx.r4.s64 = ctx.r11.s64 + -24392;
	// addi r3,r10,-26916
	ctx.r3.s64 = ctx.r10.s64 + -26916;
	// bl 0x82a4c7d8
	ctx.lr = 0x8265B13C;
	sub_82A4C7D8(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82a4ca90
	ctx.lr = 0x8265B144;
	sub_82A4CA90(ctx, base);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bl 0x82816528
	ctx.lr = 0x8265B14C;
	sub_82816528(ctx, base);
	// stw r3,13336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13336, ctx.r3.u32);
loc_8265B150:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265B168"))) PPC_WEAK_FUNC(sub_8265B168);
PPC_FUNC_IMPL(__imp__sub_8265B168) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,13296
	ctx.r31.s64 = ctx.r11.s64 + 13296;
	// lwz r11,13292(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13292);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8265b1b0
	if (!ctx.cr0.eq) goto loc_8265B1B0;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,25808
	ctx.r9.s64 = ctx.r9.s64 + 25808;
	// stw r11,13292(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13292, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,26176
	ctx.r3.s64 = ctx.r11.s64 + 26176;
	// bl 0x82a4c758
	ctx.lr = 0x8265B1B0;
	sub_82A4C758(ctx, base);
loc_8265B1B0:
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

__attribute__((alias("__imp__sub_8265B1C8"))) PPC_WEAK_FUNC(sub_8265B1C8);
PPC_FUNC_IMPL(__imp__sub_8265B1C8) {
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
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82333900
	ctx.lr = 0x8265B1DC;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8265b208
	if (ctx.cr0.eq) goto loc_8265B208;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,25572
	ctx.r10.s64 = ctx.r10.s64 + 25572;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// b 0x8265b20c
	goto loc_8265B20C;
loc_8265B208:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8265B20C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265B220"))) PPC_WEAK_FUNC(sub_8265B220);
PPC_FUNC_IMPL(__imp__sub_8265B220) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,13340(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13340);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8265b268
	if (!ctx.cr6.eq) goto loc_8265B268;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// addi r4,r11,-24392
	ctx.r4.s64 = ctx.r11.s64 + -24392;
	// addi r3,r10,-26876
	ctx.r3.s64 = ctx.r10.s64 + -26876;
	// bl 0x82a4c7d8
	ctx.lr = 0x8265B254;
	sub_82A4C7D8(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82a4ca90
	ctx.lr = 0x8265B25C;
	sub_82A4CA90(ctx, base);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bl 0x82816528
	ctx.lr = 0x8265B264;
	sub_82816528(ctx, base);
	// stw r3,13340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13340, ctx.r3.u32);
loc_8265B268:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265B280"))) PPC_WEAK_FUNC(sub_8265B280);
PPC_FUNC_IMPL(__imp__sub_8265B280) {
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
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82333900
	ctx.lr = 0x8265B294;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8265b2c4
	if (ctx.cr0.eq) goto loc_8265B2C4;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,25616
	ctx.r10.s64 = ctx.r10.s64 + 25616;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// b 0x8265b2c8
	goto loc_8265B2C8;
loc_8265B2C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8265B2C8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265B2D8"))) PPC_WEAK_FUNC(sub_8265B2D8);
PPC_FUNC_IMPL(__imp__sub_8265B2D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,13344(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13344);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8265b320
	if (!ctx.cr6.eq) goto loc_8265B320;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// addi r4,r11,-24392
	ctx.r4.s64 = ctx.r11.s64 + -24392;
	// addi r3,r10,-26840
	ctx.r3.s64 = ctx.r10.s64 + -26840;
	// bl 0x82a4c7d8
	ctx.lr = 0x8265B30C;
	sub_82A4C7D8(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82a4ca90
	ctx.lr = 0x8265B314;
	sub_82A4CA90(ctx, base);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bl 0x82816528
	ctx.lr = 0x8265B31C;
	sub_82816528(ctx, base);
	// stw r3,13344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13344, ctx.r3.u32);
loc_8265B320:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265B338"))) PPC_WEAK_FUNC(sub_8265B338);
PPC_FUNC_IMPL(__imp__sub_8265B338) {
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
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82333900
	ctx.lr = 0x8265B34C;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8265b378
	if (ctx.cr0.eq) goto loc_8265B378;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,25660
	ctx.r10.s64 = ctx.r10.s64 + 25660;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// b 0x8265b37c
	goto loc_8265B37C;
loc_8265B378:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8265B37C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265B390"))) PPC_WEAK_FUNC(sub_8265B390);
PPC_FUNC_IMPL(__imp__sub_8265B390) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,13348(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13348);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8265b3d8
	if (!ctx.cr6.eq) goto loc_8265B3D8;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// addi r4,r11,-24392
	ctx.r4.s64 = ctx.r11.s64 + -24392;
	// addi r3,r10,-26796
	ctx.r3.s64 = ctx.r10.s64 + -26796;
	// bl 0x82a4c7d8
	ctx.lr = 0x8265B3C4;
	sub_82A4C7D8(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82a4ca90
	ctx.lr = 0x8265B3CC;
	sub_82A4CA90(ctx, base);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bl 0x82816528
	ctx.lr = 0x8265B3D4;
	sub_82816528(ctx, base);
	// stw r3,13348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13348, ctx.r3.u32);
loc_8265B3D8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265B3F0"))) PPC_WEAK_FUNC(sub_8265B3F0);
PPC_FUNC_IMPL(__imp__sub_8265B3F0) {
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
	ctx.lr = 0x8265B404;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8265b438
	if (ctx.cr0.eq) goto loc_8265B438;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,25704
	ctx.r10.s64 = ctx.r10.s64 + 25704;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// b 0x8265b43c
	goto loc_8265B43C;
loc_8265B438:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8265B43C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265B450"))) PPC_WEAK_FUNC(sub_8265B450);
PPC_FUNC_IMPL(__imp__sub_8265B450) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,13352(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13352);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8265b498
	if (!ctx.cr6.eq) goto loc_8265B498;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// addi r4,r11,-24392
	ctx.r4.s64 = ctx.r11.s64 + -24392;
	// addi r3,r10,-26744
	ctx.r3.s64 = ctx.r10.s64 + -26744;
	// bl 0x82a4c7d8
	ctx.lr = 0x8265B484;
	sub_82A4C7D8(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82a4ca90
	ctx.lr = 0x8265B48C;
	sub_82A4CA90(ctx, base);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bl 0x82816528
	ctx.lr = 0x8265B494;
	sub_82816528(ctx, base);
	// stw r3,13352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13352, ctx.r3.u32);
loc_8265B498:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265B4B0"))) PPC_WEAK_FUNC(sub_8265B4B0);
PPC_FUNC_IMPL(__imp__sub_8265B4B0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x82656868
	sub_82656868(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8265B4B8"))) PPC_WEAK_FUNC(sub_8265B4B8);
PPC_FUNC_IMPL(__imp__sub_8265B4B8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82656868
	sub_82656868(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8265B4C0"))) PPC_WEAK_FUNC(sub_8265B4C0);
PPC_FUNC_IMPL(__imp__sub_8265B4C0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x826565c8
	sub_826565C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8265B4C8"))) PPC_WEAK_FUNC(sub_8265B4C8);
PPC_FUNC_IMPL(__imp__sub_8265B4C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x8265B4D0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8265b538
	if (ctx.cr6.eq) goto loc_8265B538;
	// lwz r11,1448(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1448);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8265b538
	if (!ctx.cr6.gt) goto loc_8265B538;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8265B4FC:
	// lwz r11,1444(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1444);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwzx r30,r31,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265B51C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8265b554
	if (!ctx.cr0.eq) goto loc_8265B554;
	// lwz r11,1448(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1448);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8265b4fc
	if (ctx.cr6.lt) goto loc_8265B4FC;
loc_8265B538:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8265B53C:
	// bl 0x8265b998
	ctx.lr = 0x8265B540;
	sub_8265B998(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x8265b55c
	if (!ctx.cr0.eq) goto loc_8265B55C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x8265b5c8
	if (!ctx.cr6.eq) goto loc_8265B5C8;
	// b 0x8265b5b0
	goto loc_8265B5B0;
loc_8265B554:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8265b53c
	goto loc_8265B53C;
loc_8265B55C:
	// addic. r11,r4,300
	ctx.xer.ca = ctx.r4.u32 > 4294966995;
	ctx.r11.s64 = ctx.r4.s64 + 300;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8265b57c
	if (ctx.cr0.eq) goto loc_8265B57C;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8265b57c
	if (ctx.cr6.eq) goto loc_8265B57C;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8265b580
	goto loc_8265B580;
loc_8265B57C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8265B580:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265b5c8
	if (ctx.cr6.eq) goto loc_8265B5C8;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8265b5c8
	if (ctx.cr6.eq) goto loc_8265B5C8;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265b5c8
	if (ctx.cr6.eq) goto loc_8265B5C8;
loc_8265B5B0:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,1028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1028);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265B5C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r26,1
	ctx.r26.s64 = 1;
loc_8265B5C8:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8265B5D8"))) PPC_WEAK_FUNC(sub_8265B5D8);
PPC_FUNC_IMPL(__imp__sub_8265B5D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8265B5E0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,64(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 64);
	// bl 0x824381f0
	ctx.lr = 0x8265B5F4;
	sub_824381F0(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// beq 0x8265b608
	if (ctx.cr0.eq) goto loc_8265B608;
	// lwz r29,1780(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1780);
loc_8265B608:
	// lwz r11,1476(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1476);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8265b648
	if (!ctx.cr6.eq) goto loc_8265B648;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8265b630
	if (ctx.cr6.eq) goto loc_8265B630;
	// lwz r11,1456(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1456);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8265b648
	if (!ctx.cr6.eq) goto loc_8265B648;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265b648
	if (ctx.cr6.eq) goto loc_8265B648;
loc_8265B630:
	// lwz r11,1480(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1480);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8265b7e4
	if (ctx.cr6.eq) goto loc_8265B7E4;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x8265b7e4
	if (!ctx.cr6.eq) goto loc_8265B7E4;
	// b 0x8265b724
	goto loc_8265B724;
loc_8265B648:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8265b72c
	if (ctx.cr6.eq) goto loc_8265B72C;
	// lis r27,-31949
	ctx.r27.s64 = -2093809664;
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lwz r11,788(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8265b674
	if (ctx.cr6.eq) goto loc_8265B674;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8265b674
	if (ctx.cr6.eq) goto loc_8265B674;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8265b684
	if (!ctx.cr6.eq) goto loc_8265B684;
loc_8265B674:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x829111d0
	ctx.lr = 0x8265B680;
	sub_829111D0(ctx, base);
	// b 0x8265b724
	goto loc_8265B724;
loc_8265B684:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829c1f08
	ctx.lr = 0x8265B68C;
	sub_829C1F08(ctx, base);
	// bl 0x828a4a20
	ctx.lr = 0x8265B690;
	sub_828A4A20(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8265b6a4
	if (ctx.cr0.eq) goto loc_8265B6A4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// b 0x8265b6b0
	goto loc_8265B6B0;
loc_8265B6A4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,1316(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1316);
loc_8265B6B0:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265B6B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82333900
	ctx.lr = 0x8265B6C0;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8265b6e0
	if (ctx.cr0.eq) goto loc_8265B6E0;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,27124
	ctx.r11.s64 = ctx.r11.s64 + 27124;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_8265B6E0:
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r11,25908
	ctx.r3.s64 = ctx.r11.s64 + 25908;
	// bl 0x82816528
	ctx.lr = 0x8265B6EC;
	sub_82816528(ctx, base);
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x8282c950
	ctx.lr = 0x8265B704;
	sub_8282C950(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8265b724
	if (ctx.cr6.eq) goto loc_8265B724;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265B724;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8265B724:
	// stw r30,1456(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1456, ctx.r30.u32);
	// b 0x8265b7e4
	goto loc_8265B7E4;
loc_8265B72C:
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// stw r30,1456(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1456, ctx.r30.u32);
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lwz r11,788(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8265b754
	if (ctx.cr6.eq) goto loc_8265B754;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8265b754
	if (ctx.cr6.eq) goto loc_8265B754;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8265b764
	if (!ctx.cr6.eq) goto loc_8265B764;
loc_8265B754:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x829111d0
	ctx.lr = 0x8265B760;
	sub_829111D0(ctx, base);
	// b 0x8265b7d0
	goto loc_8265B7D0;
loc_8265B764:
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82333900
	ctx.lr = 0x8265B76C;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8265b78c
	if (ctx.cr0.eq) goto loc_8265B78C;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,27124
	ctx.r11.s64 = ctx.r11.s64 + 27124;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_8265B78C:
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r11,25908
	ctx.r3.s64 = ctx.r11.s64 + 25908;
	// bl 0x82816528
	ctx.lr = 0x8265B798;
	sub_82816528(ctx, base);
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x8282c950
	ctx.lr = 0x8265B7B0;
	sub_8282C950(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8265b7d0
	if (ctx.cr6.eq) goto loc_8265B7D0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265B7D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8265B7D0:
	// lwz r11,960(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 960);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8265b7e4
	if (ctx.cr6.eq) goto loc_8265B7E4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82911390
	ctx.lr = 0x8265B7E4;
	sub_82911390(ctx, base);
loc_8265B7E4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8265B7F0"))) PPC_WEAK_FUNC(sub_8265B7F0);
PPC_FUNC_IMPL(__imp__sub_8265B7F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x824381f0
	ctx.lr = 0x8265B80C;
	sub_824381F0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8265b84c
	if (ctx.cr0.eq) goto loc_8265B84C;
	// lwz r3,1780(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1780);
	// lwz r11,1456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8265b84c
	if (!ctx.cr6.eq) goto loc_8265B84C;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8265b83c
	if (ctx.cr6.eq) goto loc_8265B83C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,356(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 356);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265B83C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8265B83C:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1456, ctx.r11.u32);
	// b 0x8265b850
	goto loc_8265B850;
loc_8265B84C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8265B850:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265B868"))) PPC_WEAK_FUNC(sub_8265B868);
PPC_FUNC_IMPL(__imp__sub_8265B868) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,800(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 800);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265B898;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8265b8bc
	if (ctx.cr6.eq) goto loc_8265B8BC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8265b8bc
	if (ctx.cr6.eq) goto loc_8265B8BC;
	// lwz r11,2864(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2864);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8265b8bc
	if (!ctx.cr6.eq) goto loc_8265B8BC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,2864(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2864, ctx.r11.u32);
loc_8265B8BC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82910698
	ctx.lr = 0x8265B8C8;
	sub_82910698(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265B8E0"))) PPC_WEAK_FUNC(sub_8265B8E0);
PPC_FUNC_IMPL(__imp__sub_8265B8E0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,1476(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1476);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x8265b908
	if (ctx.cr6.eq) goto loc_8265B908;
	// lwz r11,1456(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1456);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_8265B908:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265B910"))) PPC_WEAK_FUNC(sub_8265B910);
PPC_FUNC_IMPL(__imp__sub_8265B910) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1476(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1476);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265B930"))) PPC_WEAK_FUNC(sub_8265B930);
PPC_FUNC_IMPL(__imp__sub_8265B930) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// beq cr6,0x8265b978
	if (ctx.cr6.eq) goto loc_8265B978;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265B960;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8265b978
	if (ctx.cr0.eq) goto loc_8265B978;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1668(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1668);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265B978;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8265B978:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82910858
	ctx.lr = 0x8265B980;
	sub_82910858(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265B998"))) PPC_WEAK_FUNC(sub_8265B998);
PPC_FUNC_IMPL(__imp__sub_8265B998) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// beq cr6,0x8265b9dc
	if (ctx.cr6.eq) goto loc_8265B9DC;
	// bl 0x8239cf50
	ctx.lr = 0x8265B9B8;
	sub_8239CF50(ctx, base);
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
	ctx.lr = 0x8265B9D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x8265b9e0
	if (!ctx.cr0.eq) goto loc_8265B9E0;
loc_8265B9DC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8265B9E0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265B9F8"))) PPC_WEAK_FUNC(sub_8265B9F8);
PPC_FUNC_IMPL(__imp__sub_8265B9F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8265BA00;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8265ba5c
	if (ctx.cr6.eq) goto loc_8265BA5C;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// addi r31,r11,13356
	ctx.r31.s64 = ctx.r11.s64 + 13356;
	// lwz r11,13360(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13360);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8265ba4c
	if (!ctx.cr0.eq) goto loc_8265BA4C;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,27156
	ctx.r9.s64 = ctx.r9.s64 + 27156;
	// stw r11,13360(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13360, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,26224
	ctx.r3.s64 = ctx.r11.s64 + 26224;
	// bl 0x82a4c758
	ctx.lr = 0x8265BA4C;
	sub_82A4C758(ctx, base);
loc_8265BA4C:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8265ba5c
	if (!ctx.cr6.eq) goto loc_8265BA5C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8265ba68
	goto loc_8265BA68;
loc_8265BA5C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82339ee8
	ctx.lr = 0x8265BA68;
	sub_82339EE8(ctx, base);
loc_8265BA68:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8265BA70"))) PPC_WEAK_FUNC(sub_8265BA70);
PPC_FUNC_IMPL(__imp__sub_8265BA70) {
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
	ctx.lr = 0x8265BA84;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8265baa8
	if (ctx.cr0.eq) goto loc_8265BAA8;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,27124
	ctx.r10.s64 = ctx.r10.s64 + 27124;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x8265baac
	goto loc_8265BAAC;
loc_8265BAA8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8265BAAC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265BAC0"))) PPC_WEAK_FUNC(sub_8265BAC0);
PPC_FUNC_IMPL(__imp__sub_8265BAC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,13372(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13372);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8265bb08
	if (!ctx.cr6.eq) goto loc_8265BB08;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// addi r4,r11,-24392
	ctx.r4.s64 = ctx.r11.s64 + -24392;
	// addi r3,r10,-26684
	ctx.r3.s64 = ctx.r10.s64 + -26684;
	// bl 0x82a4c7d8
	ctx.lr = 0x8265BAF4;
	sub_82A4C7D8(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82a4ca90
	ctx.lr = 0x8265BAFC;
	sub_82A4CA90(ctx, base);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bl 0x82816528
	ctx.lr = 0x8265BB04;
	sub_82816528(ctx, base);
	// stw r3,13372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13372, ctx.r3.u32);
loc_8265BB08:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265BB20"))) PPC_WEAK_FUNC(sub_8265BB20);
PPC_FUNC_IMPL(__imp__sub_8265BB20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8265BB28;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,13356
	ctx.r31.s64 = ctx.r11.s64 + 13356;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,13360(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13360);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8265bb6c
	if (!ctx.cr0.eq) goto loc_8265BB6C;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,27156
	ctx.r9.s64 = ctx.r9.s64 + 27156;
	// stw r11,13360(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13360, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,26224
	ctx.r3.s64 = ctx.r11.s64 + 26224;
	// bl 0x82a4c758
	ctx.lr = 0x8265BB6C;
	sub_82A4C758(ctx, base);
loc_8265BB6C:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// beq cr6,0x8265bb80
	if (ctx.cr6.eq) goto loc_8265BB80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82339d80
	ctx.lr = 0x8265BB80;
	sub_82339D80(ctx, base);
loc_8265BB80:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8265BB88"))) PPC_WEAK_FUNC(sub_8265BB88);
PPC_FUNC_IMPL(__imp__sub_8265BB88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82910118
	ctx.lr = 0x8265BBA8;
	sub_82910118(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8265bbb8
	if (ctx.cr0.eq) goto loc_8265BBB8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x8265BBB8;
	sub_82332DB8(ctx, base);
loc_8265BBB8:
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

__attribute__((alias("__imp__sub_8265BBD8"))) PPC_WEAK_FUNC(sub_8265BBD8);
PPC_FUNC_IMPL(__imp__sub_8265BBD8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8265bb88
	sub_8265BB88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8265BBE0"))) PPC_WEAK_FUNC(sub_8265BBE0);
PPC_FUNC_IMPL(__imp__sub_8265BBE0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8265bbe8
	sub_8265BBE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8265BBE8"))) PPC_WEAK_FUNC(sub_8265BBE8);
PPC_FUNC_IMPL(__imp__sub_8265BBE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823eab08
	ctx.lr = 0x8265BC08;
	sub_823EAB08(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8265bc1c
	if (ctx.cr6.eq) goto loc_8265BC1C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8265bc38
	ctx.lr = 0x8265BC1C;
	sub_8265BC38(ctx, base);
loc_8265BC1C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265BC38"))) PPC_WEAK_FUNC(sub_8265BC38);
PPC_FUNC_IMPL(__imp__sub_8265BC38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8265bc98
	ctx.lr = 0x8265BC58;
	sub_8265BC98(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8265bc68
	if (!ctx.cr6.eq) goto loc_8265BC68;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8265bc80
	goto loc_8265BC80;
loc_8265BC68:
	// bl 0x82338750
	ctx.lr = 0x8265BC6C;
	sub_82338750(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8265bc80
	if (ctx.cr6.eq) goto loc_8265BC80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82338858
	ctx.lr = 0x8265BC80;
	sub_82338858(ctx, base);
loc_8265BC80:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265BC98"))) PPC_WEAK_FUNC(sub_8265BC98);
PPC_FUNC_IMPL(__imp__sub_8265BC98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,13364
	ctx.r31.s64 = ctx.r11.s64 + 13364;
	// lwz r11,13368(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13368);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8265bce0
	if (!ctx.cr0.eq) goto loc_8265BCE0;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,27176
	ctx.r9.s64 = ctx.r9.s64 + 27176;
	// stw r11,13368(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13368, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,26248
	ctx.r3.s64 = ctx.r11.s64 + 26248;
	// bl 0x82a4c758
	ctx.lr = 0x8265BCE0;
	sub_82A4C758(ctx, base);
loc_8265BCE0:
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

__attribute__((alias("__imp__sub_8265BCF8"))) PPC_WEAK_FUNC(sub_8265BCF8);
PPC_FUNC_IMPL(__imp__sub_8265BCF8) {
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
	// li r3,1472
	ctx.r3.s64 = 1472;
	// bl 0x82833108
	ctx.lr = 0x8265BD0C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8265bd1c
	if (ctx.cr0.eq) goto loc_8265BD1C;
	// bl 0x82910010
	ctx.lr = 0x8265BD18;
	sub_82910010(ctx, base);
	// b 0x8265bd20
	goto loc_8265BD20;
loc_8265BD1C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8265BD20:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265BD30"))) PPC_WEAK_FUNC(sub_8265BD30);
PPC_FUNC_IMPL(__imp__sub_8265BD30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,24752(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24752);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8265bd70
	if (!ctx.cr0.eq) goto loc_8265BD70;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// stw r11,24752(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24752, ctx.r11.u32);
	// addi r3,r9,25944
	ctx.r3.s64 = ctx.r9.s64 + 25944;
	// bl 0x82816528
	ctx.lr = 0x8265BD68;
	sub_82816528(ctx, base);
	// stw r3,24748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24748, ctx.r3.u32);
	// b 0x8265bd74
	goto loc_8265BD74;
loc_8265BD70:
	// lwz r3,24748(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24748);
loc_8265BD74:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265BD88"))) PPC_WEAK_FUNC(sub_8265BD88);
PPC_FUNC_IMPL(__imp__sub_8265BD88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8265bc98
	ctx.lr = 0x8265BDA8;
	sub_8265BC98(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265BDBC;
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

__attribute__((alias("__imp__sub_8265BDD8"))) PPC_WEAK_FUNC(sub_8265BDD8);
PPC_FUNC_IMPL(__imp__sub_8265BDD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8265be10
	if (ctx.cr6.eq) goto loc_8265BE10;
	// bl 0x823eab08
	ctx.lr = 0x8265BE00;
	sub_823EAB08(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8265be10
	if (!ctx.cr6.eq) goto loc_8265BE10;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8265be1c
	goto loc_8265BE1C;
loc_8265BE10:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8265be38
	ctx.lr = 0x8265BE1C;
	sub_8265BE38(ctx, base);
loc_8265BE1C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265BE38"))) PPC_WEAK_FUNC(sub_8265BE38);
PPC_FUNC_IMPL(__imp__sub_8265BE38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8265be70
	if (ctx.cr6.eq) goto loc_8265BE70;
	// bl 0x8265bc98
	ctx.lr = 0x8265BE60;
	sub_8265BC98(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8265be70
	if (!ctx.cr6.eq) goto loc_8265BE70;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8265be7c
	goto loc_8265BE7C;
loc_8265BE70:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82338a28
	ctx.lr = 0x8265BE7C;
	sub_82338A28(ctx, base);
loc_8265BE7C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265BE98"))) PPC_WEAK_FUNC(sub_8265BE98);
PPC_FUNC_IMPL(__imp__sub_8265BE98) {
	PPC_FUNC_PROLOGUE();
	// b 0x823eab08
	sub_823EAB08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8265BEA0"))) PPC_WEAK_FUNC(sub_8265BEA0);
PPC_FUNC_IMPL(__imp__sub_8265BEA0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8265bc98
	sub_8265BC98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8265BEA8"))) PPC_WEAK_FUNC(sub_8265BEA8);
PPC_FUNC_IMPL(__imp__sub_8265BEA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,1488
	ctx.r3.s64 = 1488;
	// bl 0x82833108
	ctx.lr = 0x8265BEC8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8265bf20
	if (ctx.cr0.eq) goto loc_8265BF20;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8265bf40
	ctx.lr = 0x8265BEDC;
	sub_8265BF40(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// addi r11,r11,27200
	ctx.r11.s64 = ctx.r11.s64 + 27200;
	// addi r10,r10,28280
	ctx.r10.s64 = ctx.r10.s64 + 28280;
	// addi r9,r9,27100
	ctx.r9.s64 = ctx.r9.s64 + 27100;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lwz r11,1472(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1472);
	// stw r11,1472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1472, ctx.r11.u32);
	// lwz r11,1476(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1476);
	// stw r11,1476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1476, ctx.r11.u32);
	// lwz r11,1480(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1480);
	// stw r11,1480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1480, ctx.r11.u32);
	// b 0x8265bf24
	goto loc_8265BF24;
loc_8265BF20:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8265BF24:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265BF40"))) PPC_WEAK_FUNC(sub_8265BF40);
PPC_FUNC_IMPL(__imp__sub_8265BF40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8265BF48;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82338b88
	ctx.lr = 0x8265BF58;
	sub_82338B88(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// addi r11,r11,25968
	ctx.r11.s64 = ctx.r11.s64 + 25968;
	// addi r10,r10,27048
	ctx.r10.s64 = ctx.r10.s64 + 27048;
	// addi r9,r9,27100
	ctx.r9.s64 = ctx.r9.s64 + 27100;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// addi r4,r29,1408
	ctx.r4.s64 = ctx.r29.s64 + 1408;
	// stw r9,396(r30)
	PPC_STORE_U32(ctx.r30.u32 + 396, ctx.r9.u32);
	// addi r3,r30,1408
	ctx.r3.s64 = ctx.r30.s64 + 1408;
	// bl 0x82873b58
	ctx.lr = 0x8265BF88;
	sub_82873B58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r30,1432
	ctx.r31.s64 = ctx.r30.s64 + 1432;
	// addi r28,r29,1432
	ctx.r28.s64 = ctx.r29.s64 + 1432;
	// stw r11,1440(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1440, ctx.r11.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,1444(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1444, ctx.r11.u32);
	// stw r11,1448(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1448, ctx.r11.u32);
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// stw r10,1436(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1436, ctx.r10.u32);
	// stw r11,1452(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1452, ctx.r11.u32);
	// stw r11,1432(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1432, ctx.r11.u32);
	// beq cr6,0x8265c000
	if (ctx.cr6.eq) goto loc_8265C000;
	// lwz r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8265c000
	if (!ctx.cr6.gt) goto loc_8265C000;
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8265bfe4
	if (ctx.cr0.eq) goto loc_8265BFE4;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c38
	ctx.lr = 0x8265BFE4;
	sub_82332C38(ctx, base);
loc_8265BFE4:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r4,12(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82a45878
	ctx.lr = 0x8265BFF8;
	sub_82A45878(ctx, base);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_8265C000:
	// lwz r11,1456(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1456);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,1456(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1456, ctx.r11.u32);
	// lwz r11,1460(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1460);
	// stw r11,1460(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1460, ctx.r11.u32);
	// lwz r11,1464(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1464);
	// stw r11,1464(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1464, ctx.r11.u32);
	// lwz r11,1468(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1468);
	// stw r11,1468(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1468, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8265C030"))) PPC_WEAK_FUNC(sub_8265C030);
PPC_FUNC_IMPL(__imp__sub_8265C030) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,1472
	ctx.r3.s64 = 1472;
	// bl 0x82833108
	ctx.lr = 0x8265C04C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8265c060
	if (ctx.cr0.eq) goto loc_8265C060;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8265bf40
	ctx.lr = 0x8265C05C;
	sub_8265BF40(ctx, base);
	// b 0x8265c064
	goto loc_8265C064;
loc_8265C060:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8265C064:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265C078"))) PPC_WEAK_FUNC(sub_8265C078);
PPC_FUNC_IMPL(__imp__sub_8265C078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r11,25944
	ctx.r3.s64 = ctx.r11.s64 + 25944;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265C088"))) PPC_WEAK_FUNC(sub_8265C088);
PPC_FUNC_IMPL(__imp__sub_8265C088) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8265bc38
	sub_8265BC38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8265C090"))) PPC_WEAK_FUNC(sub_8265C090);
PPC_FUNC_IMPL(__imp__sub_8265C090) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x8265bb88
	sub_8265BB88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8265C098"))) PPC_WEAK_FUNC(sub_8265C098);
PPC_FUNC_IMPL(__imp__sub_8265C098) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,8256
	ctx.r3.s64 = ctx.r11.s64 + 8256;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265C0A8"))) PPC_WEAK_FUNC(sub_8265C0A8);
PPC_FUNC_IMPL(__imp__sub_8265C0A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x82333900
	ctx.lr = 0x8265C0C4;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8265c11c
	if (ctx.cr0.eq) goto loc_8265C11C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r9,r9,29628
	ctx.r9.s64 = ctx.r9.s64 + 29628;
	// lwz r7,28(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r31,20(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r8,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r8.u32);
	// stw r7,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
	// stw r6,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r6.u32);
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// stw r31,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r31.u32);
	// b 0x8265c120
	goto loc_8265C120;
loc_8265C11C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8265C120:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265C138"))) PPC_WEAK_FUNC(sub_8265C138);
PPC_FUNC_IMPL(__imp__sub_8265C138) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8265c170
	if (ctx.cr6.eq) goto loc_8265C170;
	// bl 0x82664048
	ctx.lr = 0x8265C160;
	sub_82664048(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8265c170
	if (!ctx.cr6.eq) goto loc_8265C170;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8265c17c
	goto loc_8265C17C;
loc_8265C170:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82339ee8
	ctx.lr = 0x8265C17C;
	sub_82339EE8(ctx, base);
loc_8265C17C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265C198"))) PPC_WEAK_FUNC(sub_8265C198);
PPC_FUNC_IMPL(__imp__sub_8265C198) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82664048
	ctx.lr = 0x8265C1B8;
	sub_82664048(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8265c1cc
	if (ctx.cr6.eq) goto loc_8265C1CC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82339d80
	ctx.lr = 0x8265C1CC;
	sub_82339D80(ctx, base);
loc_8265C1CC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265C1E8"))) PPC_WEAK_FUNC(sub_8265C1E8);
PPC_FUNC_IMPL(__imp__sub_8265C1E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r11,28332
	ctx.r3.s64 = ctx.r11.s64 + 28332;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265C1F8"))) PPC_WEAK_FUNC(sub_8265C1F8);
PPC_FUNC_IMPL(__imp__sub_8265C1F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8265c230
	if (ctx.cr6.eq) goto loc_8265C230;
	// bl 0x826641a0
	ctx.lr = 0x8265C220;
	sub_826641A0(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8265c230
	if (!ctx.cr6.eq) goto loc_8265C230;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8265c248
	goto loc_8265C248;
loc_8265C230:
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x8234ecf8
	ctx.lr = 0x8265C248;
	sub_8234ECF8(ctx, base);
loc_8265C248:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265C260"))) PPC_WEAK_FUNC(sub_8265C260);
PPC_FUNC_IMPL(__imp__sub_8265C260) {
	PPC_FUNC_PROLOGUE();
	// b 0x826641a0
	sub_826641A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8265C268"))) PPC_WEAK_FUNC(sub_8265C268);
PPC_FUNC_IMPL(__imp__sub_8265C268) {
	PPC_FUNC_PROLOGUE();
	// b 0x8239da28
	sub_8239DA28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8265C270"))) PPC_WEAK_FUNC(sub_8265C270);
PPC_FUNC_IMPL(__imp__sub_8265C270) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x82833108
	ctx.lr = 0x8265C28C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8265c2a4
	if (ctx.cr0.eq) goto loc_8265C2A4;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// bl 0x8265c330
	ctx.lr = 0x8265C2A0;
	sub_8265C330(ctx, base);
	// b 0x8265c2a8
	goto loc_8265C2A8;
loc_8265C2A4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8265C2A8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8265c2bc
	if (ctx.cr6.eq) goto loc_8265C2BC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_8265C2BC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265C2D0"))) PPC_WEAK_FUNC(sub_8265C2D0);
PPC_FUNC_IMPL(__imp__sub_8265C2D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826641a0
	ctx.lr = 0x8265C2F0;
	sub_826641A0(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8265c300
	if (!ctx.cr6.eq) goto loc_8265C300;
	// addi r3,r31,-4
	ctx.r3.s64 = ctx.r31.s64 + -4;
	// b 0x8265c318
	goto loc_8265C318;
loc_8265C300:
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x8234edc8
	ctx.lr = 0x8265C318;
	sub_8234EDC8(ctx, base);
loc_8265C318:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265C330"))) PPC_WEAK_FUNC(sub_8265C330);
PPC_FUNC_IMPL(__imp__sub_8265C330) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8265C338;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r11,-8232
	ctx.r11.s64 = ctx.r11.s64 + -8232;
	// addi r10,r10,15084
	ctx.r10.s64 = ctx.r10.s64 + 15084;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// addi r9,r9,-26776
	ctx.r9.s64 = ctx.r9.s64 + -26776;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r8,-26516
	ctx.r11.s64 = ctx.r8.s64 + -26516;
	// stw r9,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r9.u32);
	// addi r10,r7,27680
	ctx.r10.s64 = ctx.r7.s64 + 27680;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// addi r29,r31,64
	ctx.r29.s64 = ctx.r31.s64 + 64;
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8265c39c
	if (ctx.cr6.eq) goto loc_8265C39C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_8265C39C:
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82404518
	ctx.lr = 0x8265C3A4;
	sub_82404518(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8265c3b4
	if (!ctx.cr6.eq) goto loc_8265C3B4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8265c3c0
	goto loc_8265C3C0;
loc_8265C3B4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_8265C3C0:
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
	// bne cr6,0x8265c404
	if (!ctx.cr6.eq) goto loc_8265C404;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x8265c410
	goto loc_8265C410;
loc_8265C404:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_8265C410:
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lwz r8,76(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r11,r31,72
	ctx.r11.s64 = ctx.r31.s64 + 72;
	// addi r10,r10,13144
	ctx.r10.s64 = ctx.r10.s64 + 13144;
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
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
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r7,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// bne cr6,0x8265c468
	if (!ctx.cr6.eq) goto loc_8265C468;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8265c474
	goto loc_8265C474;
loc_8265C468:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_8265C474:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x8234eb50
	ctx.lr = 0x8265C480;
	sub_8234EB50(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r31,96
	ctx.r11.s64 = ctx.r31.s64 + 96;
	// addi r10,r10,-16484
	ctx.r10.s64 = ctx.r10.s64 + -16484;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r9,r9,15112
	ctx.r9.s64 = ctx.r9.s64 + 15112;
	// addi r8,r10,15288
	ctx.r8.s64 = ctx.r10.s64 + 15288;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// addi r6,r10,15344
	ctx.r6.s64 = ctx.r10.s64 + 15344;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// addi r7,r7,15412
	ctx.r7.s64 = ctx.r7.s64 + 15412;
	// addi r4,r10,29688
	ctx.r4.s64 = ctx.r10.s64 + 29688;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// lis r5,-32225
	ctx.r5.s64 = -2111897600;
	// addi r30,r10,29920
	ctx.r30.s64 = ctx.r10.s64 + 29920;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r5,r5,29864
	ctx.r5.s64 = ctx.r5.s64 + 29864;
	// addi r27,r10,-16484
	ctx.r27.s64 = ctx.r10.s64 + -16484;
	// lis r3,-32225
	ctx.r3.s64 = -2111897600;
	// lwz r28,100(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r29,r3,29988
	ctx.r29.s64 = ctx.r3.s64 + 29988;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r8.u32);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r4,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r4.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r5,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stwx r30,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r30.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stwx r29,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r29.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stwx r27,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r27.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8265C568"))) PPC_WEAK_FUNC(sub_8265C568);
PPC_FUNC_IMPL(__imp__sub_8265C568) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x8265C580;
	sub_829C1F08(ctx, base);
	// bl 0x82664200
	ctx.lr = 0x8265C584;
	sub_82664200(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8265c598
	if (ctx.cr0.eq) goto loc_8265C598;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8265c5a4
	goto loc_8265C5A4;
loc_8265C598:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1424(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1424);
loc_8265C5A4:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265C5AC;
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

__attribute__((alias("__imp__sub_8265C5C0"))) PPC_WEAK_FUNC(sub_8265C5C0);
PPC_FUNC_IMPL(__imp__sub_8265C5C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8265C5C8;
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
	// bl 0x829c1f08
	ctx.lr = 0x8265C5DC;
	sub_829C1F08(ctx, base);
	// bl 0x82664200
	ctx.lr = 0x8265C5E0;
	sub_82664200(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// beq 0x8265c5fc
	if (ctx.cr0.eq) goto loc_8265C5FC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x8265c608
	goto loc_8265C608;
loc_8265C5FC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1428(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1428);
loc_8265C608:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265C610;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8265C618"))) PPC_WEAK_FUNC(sub_8265C618);
PPC_FUNC_IMPL(__imp__sub_8265C618) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x8265C630;
	sub_829C1F08(ctx, base);
	// bl 0x82664200
	ctx.lr = 0x8265C634;
	sub_82664200(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8265c648
	if (ctx.cr0.eq) goto loc_8265C648;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x8265c654
	goto loc_8265C654;
loc_8265C648:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1432(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1432);
loc_8265C654:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265C65C;
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

__attribute__((alias("__imp__sub_8265C670"))) PPC_WEAK_FUNC(sub_8265C670);
PPC_FUNC_IMPL(__imp__sub_8265C670) {
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
	// addi r11,r11,-21160
	ctx.r11.s64 = ctx.r11.s64 + -21160;
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
	// ble cr6,0x8265c6dc
	if (!ctx.cr6.gt) goto loc_8265C6DC;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8265C6AC:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8265c6cc
	if (ctx.cr6.eq) goto loc_8265C6CC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8265c6ac
	if (ctx.cr6.lt) goto loc_8265C6AC;
	// b 0x8265c6dc
	goto loc_8265C6DC;
loc_8265C6CC:
	// mulli r11,r10,24
	ctx.r11.s64 = ctx.r10.s64 * 24;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
loc_8265C6DC:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8265c704
	if (ctx.cr6.eq) goto loc_8265C704;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8265C6FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8265c708
	goto loc_8265C708;
loc_8265C704:
	// bl 0x828a1640
	ctx.lr = 0x8265C708;
	sub_828A1640(ctx, base);
loc_8265C708:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265C718"))) PPC_WEAK_FUNC(sub_8265C718);
PPC_FUNC_IMPL(__imp__sub_8265C718) {
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
	// addi r11,r11,-21160
	ctx.r11.s64 = ctx.r11.s64 + -21160;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8265c778
	if (!ctx.cr6.gt) goto loc_8265C778;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8265C744:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8265c764
	if (ctx.cr6.eq) goto loc_8265C764;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8265c744
	if (ctx.cr6.lt) goto loc_8265C744;
	// b 0x8265c778
	goto loc_8265C778;
loc_8265C764:
	// mulli r11,r10,24
	ctx.r11.s64 = ctx.r10.s64 * 24;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265c780
	if (!ctx.cr6.eq) goto loc_8265C780;
loc_8265C778:
	// bl 0x828a16e8
	ctx.lr = 0x8265C77C;
	sub_828A16E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8265C780:
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

__attribute__((alias("__imp__sub_8265C798"))) PPC_WEAK_FUNC(sub_8265C798);
PPC_FUNC_IMPL(__imp__sub_8265C798) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r11,r11,-21160
	ctx.r11.s64 = ctx.r11.s64 + -21160;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8265c818
	if (!ctx.cr6.gt) goto loc_8265C818;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8265C7D4:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r31
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8265c7f4
	if (ctx.cr6.eq) goto loc_8265C7F4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8265c7d4
	if (ctx.cr6.lt) goto loc_8265C7D4;
	// b 0x8265c818
	goto loc_8265C818;
loc_8265C7F4:
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
	ctx.lr = 0x8265C810;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8265c824
	if (!ctx.cr0.eq) goto loc_8265C824;
loc_8265C818:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828a1768
	ctx.lr = 0x8265C824;
	sub_828A1768(ctx, base);
loc_8265C824:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265C840"))) PPC_WEAK_FUNC(sub_8265C840);
PPC_FUNC_IMPL(__imp__sub_8265C840) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8265C848;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x828a1918
	ctx.lr = 0x8265C858;
	sub_828A1918(ctx, base);
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r9,r9,-30936
	ctx.r9.s64 = ctx.r9.s64 + -30936;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,21392
	ctx.r11.s64 = ctx.r11.s64 + 21392;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r10,r10,23060
	ctx.r10.s64 = ctx.r10.s64 + 23060;
	// li r29,4
	ctx.r29.s64 = 4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r29,2024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2024, ctx.r29.u32);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r30,2028(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2028, ctx.r30.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r30,2032(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2032, ctx.r30.u32);
	// addi r8,r10,14784
	ctx.r8.s64 = ctx.r10.s64 + 14784;
	// stw r30,2036(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2036, ctx.r30.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r30,2040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2040, ctx.r30.u32);
	// li r7,-2
	ctx.r7.s64 = -2;
	// stw r30,2020(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2020, ctx.r30.u32);
	// addi r28,r31,2020
	ctx.r28.s64 = ctx.r31.s64 + 2020;
	// stw r29,2148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2148, ctx.r29.u32);
	// addi r3,r31,2456
	ctx.r3.s64 = ctx.r31.s64 + 2456;
	// stw r30,2152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2152, ctx.r30.u32);
	// stw r30,2156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2156, ctx.r30.u32);
	// stw r30,2160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2160, ctx.r30.u32);
	// stw r30,2164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2164, ctx.r30.u32);
	// stw r30,2144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2144, ctx.r30.u32);
	// stw r9,2192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2192, ctx.r9.u32);
	// stw r30,2196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2196, ctx.r30.u32);
	// stw r30,2200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2200, ctx.r30.u32);
	// stw r30,2204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2204, ctx.r30.u32);
	// stw r30,2208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2208, ctx.r30.u32);
	// stw r30,2188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2188, ctx.r30.u32);
	// stw r29,2216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2216, ctx.r29.u32);
	// stw r30,2220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2220, ctx.r30.u32);
	// stw r30,2224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2224, ctx.r30.u32);
	// stw r30,2228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2228, ctx.r30.u32);
	// stw r30,2232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2232, ctx.r30.u32);
	// stw r30,2212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2212, ctx.r30.u32);
	// stw r29,2280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2280, ctx.r29.u32);
	// stw r30,2284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2284, ctx.r30.u32);
	// stw r30,2288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2288, ctx.r30.u32);
	// stw r30,2292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2292, ctx.r30.u32);
	// stw r30,2296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2296, ctx.r30.u32);
	// stw r30,2276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2276, ctx.r30.u32);
	// stw r11,2324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2324, ctx.r11.u32);
	// stw r30,2328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2328, ctx.r30.u32);
	// stw r30,2332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2332, ctx.r30.u32);
	// stw r30,2336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2336, ctx.r30.u32);
	// stw r30,2340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2340, ctx.r30.u32);
	// stw r30,2320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2320, ctx.r30.u32);
	// stw r11,2356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2356, ctx.r11.u32);
	// stw r30,2360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2360, ctx.r30.u32);
	// stw r30,2364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2364, ctx.r30.u32);
	// stw r30,2368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2368, ctx.r30.u32);
	// stw r30,2372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2372, ctx.r30.u32);
	// stw r30,2352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2352, ctx.r30.u32);
	// stw r30,2380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2380, ctx.r30.u32);
	// stw r8,2376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2376, ctx.r8.u32);
	// stw r11,2428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2428, ctx.r11.u32);
	// addi r11,r31,2376
	ctx.r11.s64 = ctx.r31.s64 + 2376;
	// stw r30,2432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2432, ctx.r30.u32);
	// stw r30,2436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2436, ctx.r30.u32);
	// stw r30,2440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2440, ctx.r30.u32);
	// stw r30,2424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2424, ctx.r30.u32);
	// stw r30,2444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2444, ctx.r30.u32);
	// stw r30,2388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2388, ctx.r30.u32);
	// stw r30,2392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2392, ctx.r30.u32);
	// stw r7,2396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2396, ctx.r7.u32);
	// stw r10,2400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2400, ctx.r10.u32);
	// stw r10,2404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2404, ctx.r10.u32);
	// stw r30,2412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2412, ctx.r30.u32);
	// stw r30,2416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2416, ctx.r30.u32);
	// stw r30,2420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2420, ctx.r30.u32);
	// stw r30,2448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2448, ctx.r30.u32);
	// bl 0x82681040
	ctx.lr = 0x8265C998;
	sub_82681040(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r29,3220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3220, ctx.r29.u32);
	// stw r30,3224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3224, ctx.r30.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r30,3228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3228, ctx.r30.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r30,3232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3232, ctx.r30.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,3236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3236, ctx.r30.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stw r30,3216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3216, ctx.r30.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stw r29,3248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3248, ctx.r29.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// li r29,1
	ctx.r29.s64 = 1;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stw r30,3252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3252, ctx.r30.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stw r30,3256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3256, ctx.r30.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stw r30,3260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3260, ctx.r30.u32);
	// stw r30,3264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3264, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,3244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3244, ctx.r30.u32);
	// stw r30,2064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2064, ctx.r30.u32);
	// stw r30,2068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2068, ctx.r30.u32);
	// stw r30,2072(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2072, ctx.r30.u32);
	// stw r30,2076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2076, ctx.r30.u32);
	// stw r30,2080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2080, ctx.r30.u32);
	// stw r30,2100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2100, ctx.r30.u32);
	// stw r30,2084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2084, ctx.r30.u32);
	// stw r30,2092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2092, ctx.r30.u32);
	// stw r29,2044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2044, ctx.r29.u32);
	// stw r30,1876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1876, ctx.r30.u32);
	// stw r29,1924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1924, ctx.r29.u32);
	// stw r29,2012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2012, ctx.r29.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r28,100(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r27,104(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r11,2104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2104, ctx.r11.u32);
	// stw r10,2108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2108, ctx.r10.u32);
	// stw r9,2112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2112, ctx.r9.u32);
	// stw r8,2116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2116, ctx.r8.u32);
	// stw r28,2120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2120, ctx.r28.u32);
	// stw r27,2124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2124, ctx.r27.u32);
	// stw r29,2004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2004, ctx.r29.u32);
	// stw r29,2016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2016, ctx.r29.u32);
	// bl 0x823327e0
	ctx.lr = 0x8265CA6C;
	sub_823327E0(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r10,50
	ctx.r10.s64 = 50;
	// stw r29,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r29.u32);
	// stw r30,1016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1016, ctx.r30.u32);
	// lis r9,-32232
	ctx.r9.s64 = -2112356352;
	// stw r30,2056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2056, ctx.r30.u32);
	// stw r29,2172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2172, ctx.r29.u32);
	// addi r3,r9,-5704
	ctx.r3.s64 = ctx.r9.s64 + -5704;
	// lfs f31,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f31.f64 = double(temp.f32);
	// stw r30,2168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2168, ctx.r30.u32);
	// stfs f31,2268(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2268, temp.u32);
	// stw r30,2240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2240, ctx.r30.u32);
	// stfs f31,2304(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2304, temp.u32);
	// stw r30,2244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2244, ctx.r30.u32);
	// stw r10,2264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2264, ctx.r10.u32);
	// stw r30,2248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2248, ctx.r30.u32);
	// stw r30,2252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2252, ctx.r30.u32);
	// stw r30,2256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2256, ctx.r30.u32);
	// stw r30,2260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2260, ctx.r30.u32);
	// stw r30,2272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2272, ctx.r30.u32);
	// stw r30,2300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2300, ctx.r30.u32);
	// bl 0x82816528
	ctx.lr = 0x8265CAC4;
	sub_82816528(ctx, base);
	// stfs f31,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r9,1204(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1204);
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r3,1972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1972, ctx.r3.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r30,2236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2236, ctx.r30.u32);
	// stw r30,3088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3088, ctx.r30.u32);
	// stw r30,3092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3092, ctx.r30.u32);
	// stw r30,3096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3096, ctx.r30.u32);
	// stw r30,3100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3100, ctx.r30.u32);
	// stw r8,2128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2128, ctx.r8.u32);
	// stw r11,2132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2132, ctx.r11.u32);
	// stw r10,2136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2136, ctx.r10.u32);
	// bne cr6,0x8265cb14
	if (!ctx.cr6.eq) goto loc_8265CB14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c3628
	ctx.lr = 0x8265CB14;
	sub_829C3628(ctx, base);
loc_8265CB14:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// addi r3,r10,28384
	ctx.r3.s64 = ctx.r10.s64 + 28384;
	// lfs f0,30356(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30356);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2316(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2316, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x8265CB2C;
	sub_82816528(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,12115
	ctx.r10.s64 = 793968640;
	// stw r3,2308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2308, ctx.r3.u32);
	// stw r30,2052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2052, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r10,r10,11234
	ctx.r10.u64 = ctx.r10.u64 | 11234;
	// lfs f0,-32460(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32460);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,1928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1928, ctx.r10.u32);
	// stfs f0,3212(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3212, temp.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8265CB60"))) PPC_WEAK_FUNC(sub_8265CB60);
PPC_FUNC_IMPL(__imp__sub_8265CB60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x8289fe48
	ctx.lr = 0x8265CB78;
	sub_8289FE48(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r4,r31,1608
	ctx.r4.s64 = ctx.r31.s64 + 1608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,28436
	ctx.r5.s64 = ctx.r11.s64 + 28436;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x824115b8
	ctx.lr = 0x8265CB94;
	sub_824115B8(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r4,r31,1616
	ctx.r4.s64 = ctx.r31.s64 + 1616;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,28456
	ctx.r5.s64 = ctx.r11.s64 + 28456;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x824115b8
	ctx.lr = 0x8265CBB0;
	sub_824115B8(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r4,r31,2056
	ctx.r4.s64 = ctx.r31.s64 + 2056;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,28484
	ctx.r5.s64 = ctx.r11.s64 + 28484;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x82416240
	ctx.lr = 0x8265CBCC;
	sub_82416240(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r4,r31,2688
	ctx.r4.s64 = ctx.r31.s64 + 2688;
	// addi r5,r11,28516
	ctx.r5.s64 = ctx.r11.s64 + 28516;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824115b8
	ctx.lr = 0x8265CBE8;
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

__attribute__((alias("__imp__sub_8265CC00"))) PPC_WEAK_FUNC(sub_8265CC00);
PPC_FUNC_IMPL(__imp__sub_8265CC00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8265CC08;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// addi r11,r11,21392
	ctx.r11.s64 = ctx.r11.s64 + 21392;
	// lwz r3,2344(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2344);
	// addi r10,r10,23060
	ctx.r10.s64 = ctx.r10.s64 + 23060;
	// addi r9,r9,-30936
	ctx.r9.s64 = ctx.r9.s64 + -30936;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// beq cr6,0x8265cc5c
	if (ctx.cr6.eq) goto loc_8265CC5C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265CC58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,2344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2344, ctx.r28.u32);
loc_8265CC5C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c36c0
	ctx.lr = 0x8265CC64;
	sub_829C36C0(ctx, base);
	// lwz r4,2312(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2312);
	// li r11,-1
	ctx.r11.s64 = -1;
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// stw r11,3084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3084, ctx.r11.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8265cc8c
	if (ctx.cr6.eq) goto loc_8265CC8C;
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829bb1f8
	ctx.lr = 0x8265CC88;
	sub_829BB1F8(ctx, base);
	// stw r28,2312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2312, ctx.r28.u32);
loc_8265CC8C:
	// lwz r4,3240(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3240);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8265cca8
	if (ctx.cr6.eq) goto loc_8265CCA8;
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829bb1f8
	ctx.lr = 0x8265CCA4;
	sub_829BB1F8(ctx, base);
	// stw r28,3240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3240, ctx.r28.u32);
loc_8265CCA8:
	// addi r3,r31,3244
	ctx.r3.s64 = ctx.r31.s64 + 3244;
	// bl 0x8239d768
	ctx.lr = 0x8265CCB0;
	sub_8239D768(ctx, base);
	// addi r3,r31,3216
	ctx.r3.s64 = ctx.r31.s64 + 3216;
	// bl 0x8239d768
	ctx.lr = 0x8265CCB8;
	sub_8239D768(ctx, base);
	// addi r30,r31,2456
	ctx.r30.s64 = ctx.r31.s64 + 2456;
	// li r27,1
	ctx.r27.s64 = 1;
	// addi r29,r30,608
	ctx.r29.s64 = ctx.r30.s64 + 608;
loc_8265CCC4:
	// addi r29,r29,-24
	ctx.r29.s64 = ctx.r29.s64 + -24;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82333960
	ctx.lr = 0x8265CCD0;
	sub_82333960(ctx, base);
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bge 0x8265ccc4
	if (!ctx.cr0.lt) goto loc_8265CCC4;
	// addi r3,r30,528
	ctx.r3.s64 = ctx.r30.s64 + 528;
	// bl 0x82333960
	ctx.lr = 0x8265CCE0;
	sub_82333960(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823fd2d8
	ctx.lr = 0x8265CCE8;
	sub_823FD2D8(ctx, base);
	// addi r11,r31,2376
	ctx.r11.s64 = ctx.r31.s64 + 2376;
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// bl 0x82333960
	ctx.lr = 0x8265CCF4;
	sub_82333960(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r31,2352
	ctx.r3.s64 = ctx.r31.s64 + 2352;
	// addi r11,r11,16980
	ctx.r11.s64 = ctx.r11.s64 + 16980;
	// stw r11,2376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2376, ctx.r11.u32);
	// bl 0x82333960
	ctx.lr = 0x8265CD08;
	sub_82333960(ctx, base);
	// addi r3,r31,2320
	ctx.r3.s64 = ctx.r31.s64 + 2320;
	// bl 0x82333960
	ctx.lr = 0x8265CD10;
	sub_82333960(ctx, base);
	// addi r3,r31,2276
	ctx.r3.s64 = ctx.r31.s64 + 2276;
	// bl 0x8239d768
	ctx.lr = 0x8265CD18;
	sub_8239D768(ctx, base);
	// addi r30,r31,2212
	ctx.r30.s64 = ctx.r31.s64 + 2212;
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r5,2228(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2228);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332ca8
	ctx.lr = 0x8265CD34;
	sub_82332CA8(ctx, base);
	// lwz r3,2224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2224);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8265cd44
	if (ctx.cr6.eq) goto loc_8265CD44;
	// bl 0x82332db8
	ctx.lr = 0x8265CD44;
	sub_82332DB8(ctx, base);
loc_8265CD44:
	// stw r28,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r28.u32);
	// addi r29,r31,2188
	ctx.r29.s64 = ctx.r31.s64 + 2188;
	// stw r28,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r28.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r28,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r28.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,2204(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2204);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332ca8
	ctx.lr = 0x8265CD6C;
	sub_82332CA8(ctx, base);
	// lwz r3,2200(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2200);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8265cd7c
	if (ctx.cr6.eq) goto loc_8265CD7C;
	// bl 0x82332db8
	ctx.lr = 0x8265CD7C;
	sub_82332DB8(ctx, base);
loc_8265CD7C:
	// stw r28,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r28.u32);
	// addi r3,r31,2144
	ctx.r3.s64 = ctx.r31.s64 + 2144;
	// stw r28,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r28.u32);
	// stw r28,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r28.u32);
	// bl 0x8239d768
	ctx.lr = 0x8265CD90;
	sub_8239D768(ctx, base);
	// addi r3,r31,2020
	ctx.r3.s64 = ctx.r31.s64 + 2020;
	// bl 0x8239d768
	ctx.lr = 0x8265CD98;
	sub_8239D768(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828a1c98
	ctx.lr = 0x8265CDA0;
	sub_828A1C98(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8265CDA8"))) PPC_WEAK_FUNC(sub_8265CDA8);
PPC_FUNC_IMPL(__imp__sub_8265CDA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8265CDB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x828a1d90
	ctx.lr = 0x8265CDBC;
	sub_828A1D90(ctx, base);
	// addic. r11,r30,300
	ctx.xer.ca = ctx.r30.u32 > 4294966995;
	ctx.r11.s64 = ctx.r30.s64 + 300;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8265cddc
	if (ctx.cr0.eq) goto loc_8265CDDC;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8265cddc
	if (ctx.cr6.eq) goto loc_8265CDDC;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8265cde0
	goto loc_8265CDE0;
loc_8265CDDC:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8265CDE0:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-26576
	ctx.r3.s64 = ctx.r11.s64 + -26576;
	// bl 0x82816528
	ctx.lr = 0x8265CDEC;
	sub_82816528(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r11,28548
	ctx.r3.s64 = ctx.r11.s64 + 28548;
	// bl 0x82816528
	ctx.lr = 0x8265CDFC;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x828d0cb0
	ctx.lr = 0x8265CE0C;
	sub_828D0CB0(ctx, base);
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
	// addi r3,r31,384
	ctx.r3.s64 = ctx.r31.s64 + 384;
	// bl 0x82332d50
	ctx.lr = 0x8265CE28;
	sub_82332D50(ctx, base);
	// lwz r11,396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8265ce3c
	if (ctx.cr0.eq) goto loc_8265CE3C;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
loc_8265CE3C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8265CE48"))) PPC_WEAK_FUNC(sub_8265CE48);
PPC_FUNC_IMPL(__imp__sub_8265CE48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8265CE50;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x828a03e8
	ctx.lr = 0x8265CE5C;
	sub_828A03E8(ctx, base);
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8265cf9c
	if (!ctx.cr6.eq) goto loc_8265CF9C;
	// addi r11,r31,2004
	ctx.r11.s64 = ctx.r31.s64 + 2004;
	// addi r29,r31,424
	ctx.r29.s64 = ctx.r31.s64 + 424;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82838fd0
	ctx.lr = 0x8265CE84;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r31,2012
	ctx.r10.s64 = ctx.r31.s64 + 2012;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bl 0x82838fd0
	ctx.lr = 0x8265CEA4;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1636(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1636);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265CEC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8265cf0c
	if (ctx.cr0.eq) goto loc_8265CF0C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1636(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1636);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265CEE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,236(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265cf0c
	if (ctx.cr6.eq) goto loc_8265CF0C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1636(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1636);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265CF00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,236(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// stw r11,3084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3084, ctx.r11.u32);
loc_8265CF0C:
	// lwz r10,3084(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3084);
	// addi r11,r31,3084
	ctx.r11.s64 = ctx.r31.s64 + 3084;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x8265cf38
	if (ctx.cr6.lt) goto loc_8265CF38;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82838fd0
	ctx.lr = 0x8265CF2C;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
loc_8265CF38:
	// lwz r11,956(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 956);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8265cf9c
	if (!ctx.cr6.eq) goto loc_8265CF9C;
	// lwz r11,1944(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1944);
	// lwz r10,1948(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1948);
	// lwz r9,1940(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1940);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// bne cr6,0x8265cf9c
	if (!ctx.cr6.eq) goto loc_8265CF9C;
	// lwz r10,1944(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1944);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r9,1948(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1948);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// bne cr6,0x8265cf9c
	if (!ctx.cr6.eq) goto loc_8265CF9C;
	// addi r11,r31,2452
	ctx.r11.s64 = ctx.r31.s64 + 2452;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82838fd0
	ctx.lr = 0x8265CF90;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
loc_8265CF9C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8265CFA8"))) PPC_WEAK_FUNC(sub_8265CFA8);
PPC_FUNC_IMPL(__imp__sub_8265CFA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x8265CFB0;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x828a0460
	ctx.lr = 0x8265CFC0;
	sub_828A0460(ctx, base);
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8265d240
	if (!ctx.cr6.eq) goto loc_8265D240;
	// addi r28,r31,2004
	ctx.r28.s64 = ctx.r31.s64 + 2004;
	// addi r30,r31,424
	ctx.r30.s64 = ctx.r31.s64 + 424;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x8265CFE8;
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
	ctx.lr = 0x8265D00C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r4,r3,r27
	ctx.r4.u64 = ctx.r3.u64 + ctx.r27.u64;
	// lwz r3,484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265D020;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8265d044
	if (!ctx.cr0.eq) goto loc_8265D044;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x8265D038;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_8265D044:
	// addi r28,r31,2012
	ctx.r28.s64 = ctx.r31.s64 + 2012;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x8265D058;
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
	ctx.lr = 0x8265D07C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r4,r3,r27
	ctx.r4.u64 = ctx.r3.u64 + ctx.r27.u64;
	// lwz r3,484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265D090;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8265d0b4
	if (!ctx.cr0.eq) goto loc_8265D0B4;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x8265D0A8;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_8265D0B4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1636(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1636);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265D0C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8265d110
	if (ctx.cr0.eq) goto loc_8265D110;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1636(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1636);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265D0E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,236(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265d110
	if (ctx.cr6.eq) goto loc_8265D110;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1636(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1636);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265D104;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,236(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// stw r11,3084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3084, ctx.r11.u32);
loc_8265D110:
	// lwz r11,3084(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3084);
	// addi r28,r31,3084
	ctx.r28.s64 = ctx.r31.s64 + 3084;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8265d18c
	if (ctx.cr6.lt) goto loc_8265D18C;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x8265D130;
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
	ctx.lr = 0x8265D154;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r4,r3,r27
	ctx.r4.u64 = ctx.r3.u64 + ctx.r27.u64;
	// lwz r3,484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265D168;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8265d18c
	if (!ctx.cr0.eq) goto loc_8265D18C;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x8265D180;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_8265D18C:
	// lwz r11,956(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 956);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8265d240
	if (!ctx.cr6.eq) goto loc_8265D240;
	// lwz r11,1944(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1944);
	// lwz r10,1948(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1948);
	// lwz r9,1940(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1940);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// bne cr6,0x8265d240
	if (!ctx.cr6.eq) goto loc_8265D240;
	// lwz r10,1944(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1944);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r9,1948(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1948);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// bne cr6,0x8265d240
	if (!ctx.cr6.eq) goto loc_8265D240;
	// addi r28,r31,2452
	ctx.r28.s64 = ctx.r31.s64 + 2452;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x8265D1E4;
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
	ctx.lr = 0x8265D208;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r4,r3,r27
	ctx.r4.u64 = ctx.r3.u64 + ctx.r27.u64;
	// lwz r3,484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265D21C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8265d240
	if (!ctx.cr0.eq) goto loc_8265D240;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x8265D234;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_8265D240:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

