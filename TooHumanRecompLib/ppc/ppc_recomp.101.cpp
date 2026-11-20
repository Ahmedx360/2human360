#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_826B3D28"))) PPC_WEAK_FUNC(sub_826B3D28);
PPC_FUNC_IMPL(__imp__sub_826B3D28) {
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
	// lwz r11,4620(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4620);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x826b3e68
	if (!ctx.cr6.eq) goto loc_826B3E68;
	// bl 0x827e6e78
	ctx.lr = 0x826B3D4C;
	sub_827E6E78(ctx, base);
	// lwz r11,4564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4564);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x826b3df0
	if (ctx.cr6.lt) goto loc_826B3DF0;
	// beq cr6,0x826b3d9c
	if (ctx.cr6.eq) goto loc_826B3D9C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x826b3e68
	if (!ctx.cr6.lt) goto loc_826B3E68;
loc_826B3D64:
	// lwz r11,4612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4612);
	// lbz r11,820(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 820);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x826b3e68
	if (!ctx.cr0.eq) goto loc_826B3E68;
	// lwz r3,4612(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4612);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826B3D8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4612);
	// lfs f0,4568(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4568);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,824(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 824, temp.u32);
	// b 0x826b3e68
	goto loc_826B3E68;
loc_826B3D9C:
	// lwz r11,4608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4608);
	// lbz r11,820(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 820);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x826b3dc4
	if (ctx.cr0.eq) goto loc_826B3DC4;
	// lwz r3,4608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4608);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826B3DC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826B3DC4:
	// lwz r11,1664(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1664);
	// lbz r11,820(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 820);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x826b3d64
	if (!ctx.cr0.eq) goto loc_826B3D64;
	// lwz r3,1664(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1664);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826B3DEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x826b3d64
	goto loc_826B3D64;
loc_826B3DF0:
	// lwz r11,4608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4608);
	// lbz r11,820(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 820);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x826b3e18
	if (!ctx.cr0.eq) goto loc_826B3E18;
	// lwz r3,4608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4608);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826B3E18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826B3E18:
	// lwz r11,1664(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1664);
	// lbz r11,820(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 820);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x826b3e40
	if (ctx.cr0.eq) goto loc_826B3E40;
	// lwz r3,1664(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1664);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826B3E40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826B3E40:
	// lwz r11,4612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4612);
	// lbz r11,820(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 820);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x826b3e68
	if (ctx.cr0.eq) goto loc_826B3E68;
	// lwz r3,4612(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4612);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826B3E68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826B3E68:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B3E80"))) PPC_WEAK_FUNC(sub_826B3E80);
PPC_FUNC_IMPL(__imp__sub_826B3E80) {
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
	// lwz r11,4620(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4620);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x826b3ea0
	if (ctx.cr6.eq) goto loc_826B3EA0;
loc_826B3E98:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826b3eb4
	goto loc_826B3EB4;
loc_826B3EA0:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x826b3e98
	if (!ctx.cr6.eq) goto loc_826B3E98;
	// lwz r3,1664(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1664);
	// bl 0x826ab190
	ctx.lr = 0x826B3EB0;
	sub_826AB190(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
loc_826B3EB4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B3EC8"))) PPC_WEAK_FUNC(sub_826B3EC8);
PPC_FUNC_IMPL(__imp__sub_826B3EC8) {
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
	// li r3,832
	ctx.r3.s64 = 832;
	// bl 0x82833108
	ctx.lr = 0x826B3EE0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826b3f1c
	if (ctx.cr0.eq) goto loc_826B3F1C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827ee8f8
	ctx.lr = 0x826B3EF0;
	sub_827EE8F8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r9,r9,-20536
	ctx.r9.s64 = ctx.r9.s64 + -20536;
	// lfs f0,-27300(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27300);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f13.f64 = double(temp.f32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stfs f0,824(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 824, temp.u32);
	// stfs f13,828(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 828, temp.u32);
	// b 0x826b3f20
	goto loc_826B3F20;
loc_826B3F1C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826B3F20:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B3F38"))) PPC_WEAK_FUNC(sub_826B3F38);
PPC_FUNC_IMPL(__imp__sub_826B3F38) {
	PPC_FUNC_PROLOGUE();
	// li r3,832
	ctx.r3.s64 = 832;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B3F40"))) PPC_WEAK_FUNC(sub_826B3F40);
PPC_FUNC_IMPL(__imp__sub_826B3F40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,23936(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23936);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826b3f80
	if (!ctx.cr0.eq) goto loc_826B3F80;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// stw r11,23936(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23936, ctx.r11.u32);
	// addi r3,r9,-21984
	ctx.r3.s64 = ctx.r9.s64 + -21984;
	// bl 0x82816528
	ctx.lr = 0x826B3F78;
	sub_82816528(ctx, base);
	// stw r3,23932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23932, ctx.r3.u32);
	// b 0x826b3f84
	goto loc_826B3F84;
loc_826B3F80:
	// lwz r3,23932(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23932);
loc_826B3F84:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B3F98"))) PPC_WEAK_FUNC(sub_826B3F98);
PPC_FUNC_IMPL(__imp__sub_826B3F98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826b3fe8
	ctx.lr = 0x826B3FB8;
	sub_826B3FE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826B3FCC;
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

__attribute__((alias("__imp__sub_826B3FE8"))) PPC_WEAK_FUNC(sub_826B3FE8);
PPC_FUNC_IMPL(__imp__sub_826B3FE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,23940
	ctx.r31.s64 = ctx.r11.s64 + 23940;
	// lwz r11,23944(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23944);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826b4030
	if (!ctx.cr0.eq) goto loc_826B4030;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-20440
	ctx.r9.s64 = ctx.r9.s64 + -20440;
	// stw r11,23944(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23944, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,28664
	ctx.r3.s64 = ctx.r11.s64 + 28664;
	// bl 0x82a4c758
	ctx.lr = 0x826B4030;
	sub_82A4C758(ctx, base);
loc_826B4030:
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

__attribute__((alias("__imp__sub_826B4048"))) PPC_WEAK_FUNC(sub_826B4048);
PPC_FUNC_IMPL(__imp__sub_826B4048) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x826B4050;
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
	ctx.lr = 0x826B4068;
	sub_829C80B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x826b40f0
	if (!ctx.cr0.eq) goto loc_826B40F0;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x826a81b0
	ctx.lr = 0x826B4078;
	sub_826A81B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826B408C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82333900
	ctx.lr = 0x826B4098;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x826b40dc
	if (ctx.cr0.eq) goto loc_826B40DC;
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
	// b 0x826b40e0
	goto loc_826B40E0;
loc_826B40DC:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_826B40E0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82410060
	ctx.lr = 0x826B40EC;
	sub_82410060(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_826B40F0:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f1,32716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32716);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826B4110;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B4118"))) PPC_WEAK_FUNC(sub_826B4118);
PPC_FUNC_IMPL(__imp__sub_826B4118) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82a61744
	ctx.lr = 0x826B4128;
	__savefpr_27(ctx, base);
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f5,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 - ctx.f0.f64));
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f4,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f4,f4,f13
	ctx.f4.f64 = double(float(ctx.f4.f64 - ctx.f13.f64));
	// lfs f3,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f11,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f3,f3,f12
	ctx.f3.f64 = double(float(ctx.f3.f64 - ctx.f12.f64));
	// lfs f2,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// lfs f10,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f2,f2,f11
	ctx.f2.f64 = double(float(ctx.f2.f64 - ctx.f11.f64));
	// lfs f1,16(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// lfs f9,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f1,f1,f10
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f10.f64));
	// lfs f31,20(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f31.f64 = double(temp.f32);
	// lfs f27,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f27.f64 = double(temp.f32);
	// fsubs f31,f31,f9
	ctx.f31.f64 = double(float(ctx.f31.f64 - ctx.f9.f64));
	// lfs f8,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f5,f5,f27
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f27.f64));
	// lfs f30,24(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f4,f4,f27
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f27.f64));
	// lfs f7,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f30,f30,f8
	ctx.f30.f64 = double(float(ctx.f30.f64 - ctx.f8.f64));
	// lfs f29,28(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f3,f3,f27
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f27.f64));
	// lfs f6,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f29,f29,f7
	ctx.f29.f64 = double(float(ctx.f29.f64 - ctx.f7.f64));
	// lfs f28,32(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f2,f2,f27
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f27.f64));
	// fsubs f28,f28,f6
	ctx.f28.f64 = double(float(ctx.f28.f64 - ctx.f6.f64));
	// fmuls f1,f1,f27
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f27.f64));
	// fmuls f31,f31,f27
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f27.f64));
	// fadds f0,f0,f5
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f5.f64));
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fadds f0,f13,f4
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f4.f64));
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fmuls f30,f30,f27
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f27.f64));
	// fadds f0,f12,f3
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f3.f64));
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fmuls f29,f29,f27
	ctx.f29.f64 = double(float(ctx.f29.f64 * ctx.f27.f64));
	// fadds f0,f11,f2
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f2.f64));
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// fmuls f28,f28,f27
	ctx.f28.f64 = double(float(ctx.f28.f64 * ctx.f27.f64));
	// fadds f0,f10,f1
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f1.f64));
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// fadds f0,f9,f31
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f31.f64));
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// fadds f0,f8,f30
	ctx.f0.f64 = double(float(ctx.f8.f64 + ctx.f30.f64));
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// fadds f0,f7,f29
	ctx.f0.f64 = double(float(ctx.f7.f64 + ctx.f29.f64));
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// fadds f0,f6,f28
	ctx.f0.f64 = double(float(ctx.f6.f64 + ctx.f28.f64));
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82a61790
	ctx.lr = 0x826B420C;
	__restfpr_27(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B4218"))) PPC_WEAK_FUNC(sub_826B4218);
PPC_FUNC_IMPL(__imp__sub_826B4218) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x826b2fb8
	sub_826B2FB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B4220"))) PPC_WEAK_FUNC(sub_826B4220);
PPC_FUNC_IMPL(__imp__sub_826B4220) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x826b2fb8
	sub_826B2FB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B4228"))) PPC_WEAK_FUNC(sub_826B4228);
PPC_FUNC_IMPL(__imp__sub_826B4228) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x826b2dd0
	sub_826B2DD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B4230"))) PPC_WEAK_FUNC(sub_826B4230);
PPC_FUNC_IMPL(__imp__sub_826B4230) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,-20420
	ctx.r3.s64 = ctx.r11.s64 + -20420;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B4240"))) PPC_WEAK_FUNC(sub_826B4240);
PPC_FUNC_IMPL(__imp__sub_826B4240) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x826b4278
	if (ctx.cr6.eq) goto loc_826B4278;
	// bl 0x826b69a8
	ctx.lr = 0x826B4268;
	sub_826B69A8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826b4278
	if (!ctx.cr6.eq) goto loc_826B4278;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826b4284
	goto loc_826B4284;
loc_826B4278:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826a0e90
	ctx.lr = 0x826B4284;
	sub_826A0E90(ctx, base);
loc_826B4284:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B42A0"))) PPC_WEAK_FUNC(sub_826B42A0);
PPC_FUNC_IMPL(__imp__sub_826B42A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x826b69a8
	sub_826B69A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B42A8"))) PPC_WEAK_FUNC(sub_826B42A8);
PPC_FUNC_IMPL(__imp__sub_826B42A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,1012
	ctx.r3.s64 = 1012;
	// bl 0x82833108
	ctx.lr = 0x826B42C4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826b42d8
	if (ctx.cr0.eq) goto loc_826B42D8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826b4350
	ctx.lr = 0x826B42D4;
	sub_826B4350(ctx, base);
	// b 0x826b42dc
	goto loc_826B42DC;
loc_826B42D8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826B42DC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B42F0"))) PPC_WEAK_FUNC(sub_826B42F0);
PPC_FUNC_IMPL(__imp__sub_826B42F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826b69a8
	ctx.lr = 0x826B4310;
	sub_826B69A8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826b4320
	if (!ctx.cr6.eq) goto loc_826B4320;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x826b4338
	goto loc_826B4338;
loc_826B4320:
	// bl 0x826a1370
	ctx.lr = 0x826B4324;
	sub_826A1370(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x826b4338
	if (ctx.cr6.eq) goto loc_826B4338;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8269fac8
	ctx.lr = 0x826B4338;
	sub_8269FAC8(ctx, base);
loc_826B4338:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B4350"))) PPC_WEAK_FUNC(sub_826B4350);
PPC_FUNC_IMPL(__imp__sub_826B4350) {
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
	// bl 0x826a10f0
	ctx.lr = 0x826B4370;
	sub_826A10F0(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r31,868
	ctx.r3.s64 = ctx.r31.s64 + 868;
	// addi r11,r11,-20224
	ctx.r11.s64 = ctx.r11.s64 + -20224;
	// addi r4,r30,868
	ctx.r4.s64 = ctx.r30.s64 + 868;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lfs f0,852(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 852);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,852(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 852, temp.u32);
	// lfs f0,856(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 856);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,856(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 856, temp.u32);
	// lfs f0,860(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 860);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,860(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 860, temp.u32);
	// lfs f0,864(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 864);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,864(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 864, temp.u32);
	// bl 0x82873b58
	ctx.lr = 0x826B43A8;
	sub_82873B58(ctx, base);
	// addi r3,r31,892
	ctx.r3.s64 = ctx.r31.s64 + 892;
	// addi r4,r30,892
	ctx.r4.s64 = ctx.r30.s64 + 892;
	// bl 0x82855048
	ctx.lr = 0x826B43B4;
	sub_82855048(ctx, base);
	// addi r3,r31,916
	ctx.r3.s64 = ctx.r31.s64 + 916;
	// addi r4,r30,916
	ctx.r4.s64 = ctx.r30.s64 + 916;
	// bl 0x8282f630
	ctx.lr = 0x826B43C0;
	sub_8282F630(ctx, base);
	// addi r3,r31,940
	ctx.r3.s64 = ctx.r31.s64 + 940;
	// addi r4,r30,940
	ctx.r4.s64 = ctx.r30.s64 + 940;
	// bl 0x8282f630
	ctx.lr = 0x826B43CC;
	sub_8282F630(ctx, base);
	// lfs f0,964(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 964);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,964(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 964, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,968(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 968);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,968(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 968, temp.u32);
	// lfs f0,972(r30)
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
	// lfs f0,988(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 988);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,988(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 988, temp.u32);
	// lwz r11,992(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 992);
	// stw r11,992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 992, ctx.r11.u32);
	// lwz r11,996(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 996);
	// stw r11,996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 996, ctx.r11.u32);
	// lwz r11,1000(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1000);
	// stw r11,1000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1000, ctx.r11.u32);
	// lbz r11,1004(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1004);
	// stb r11,1004(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1004, ctx.r11.u8);
	// lwz r11,1008(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1008);
	// stw r11,1008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1008, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B4448"))) PPC_WEAK_FUNC(sub_826B4448);
PPC_FUNC_IMPL(__imp__sub_826B4448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,940
	ctx.r3.s64 = ctx.r31.s64 + 940;
	// bl 0x82400f38
	ctx.lr = 0x826B446C;
	sub_82400F38(ctx, base);
	// addi r3,r31,916
	ctx.r3.s64 = ctx.r31.s64 + 916;
	// bl 0x82400f38
	ctx.lr = 0x826B4474;
	sub_82400F38(ctx, base);
	// addi r3,r31,892
	ctx.r3.s64 = ctx.r31.s64 + 892;
	// bl 0x82855110
	ctx.lr = 0x826B447C;
	sub_82855110(ctx, base);
	// addi r3,r31,868
	ctx.r3.s64 = ctx.r31.s64 + 868;
	// bl 0x8239d768
	ctx.lr = 0x826B4484;
	sub_8239D768(ctx, base);
	// addi r3,r31,824
	ctx.r3.s64 = ctx.r31.s64 + 824;
	// bl 0x826a1240
	ctx.lr = 0x826B448C;
	sub_826A1240(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,22304
	ctx.r11.s64 = ctx.r11.s64 + 22304;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82833238
	ctx.lr = 0x826B44A0;
	sub_82833238(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826b44b0
	if (ctx.cr0.eq) goto loc_826B44B0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x826B44B0;
	sub_82332DB8(ctx, base);
loc_826B44B0:
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

__attribute__((alias("__imp__sub_826B44D0"))) PPC_WEAK_FUNC(sub_826B44D0);
PPC_FUNC_IMPL(__imp__sub_826B44D0) {
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
	ctx.lr = 0x826B44E8;
	sub_827EE8F8(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// addi r7,r9,-27328
	ctx.r7.s64 = ctx.r9.s64 + -27328;
	// lis r6,-32221
	ctx.r6.s64 = -2111635456;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f13,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f13.f64 = double(temp.f32);
	// li r5,80
	ctx.r5.s64 = 80;
	// addi r10,r6,-20224
	ctx.r10.s64 = ctx.r6.s64 + -20224;
	// stw r11,832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 832, ctx.r11.u32);
	// stw r5,828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 828, ctx.r5.u32);
	// lfs f12,900(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 900);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 836, ctx.r11.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r11,840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 840, ctx.r11.u32);
	// lfs f0,28(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 844, ctx.r11.u32);
	// li r8,32
	ctx.r8.s64 = 32;
	// stw r11,824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 824, ctx.r11.u32);
	// stfs f0,860(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 860, temp.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stfs f0,864(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 864, temp.u32);
	// stfs f13,852(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 852, temp.u32);
	// li r10,12
	ctx.r10.s64 = 12;
	// stfs f12,856(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 856, temp.u32);
	// stw r6,872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 872, ctx.r6.u32);
	// stw r11,876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 876, ctx.r11.u32);
	// lis r7,-31961
	ctx.r7.s64 = -2094596096;
	// stw r11,880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 880, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 884, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 888, ctx.r11.u32);
	// stw r11,868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 868, ctx.r11.u32);
	// stw r8,896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 896, ctx.r8.u32);
	// stw r11,900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 900, ctx.r11.u32);
	// stw r11,904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 904, ctx.r11.u32);
	// stw r11,908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 908, ctx.r11.u32);
	// stw r11,912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 912, ctx.r11.u32);
	// stw r11,892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 892, ctx.r11.u32);
	// stw r10,920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 920, ctx.r10.u32);
	// stw r11,924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 924, ctx.r11.u32);
	// stw r11,928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 928, ctx.r11.u32);
	// stw r11,932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 932, ctx.r11.u32);
	// stw r11,936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 936, ctx.r11.u32);
	// stw r11,916(r31)
	PPC_STORE_U32(ctx.r31.u32 + 916, ctx.r11.u32);
	// stw r10,944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 944, ctx.r10.u32);
	// stw r11,948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 948, ctx.r11.u32);
	// stw r11,952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 952, ctx.r11.u32);
	// stw r11,956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 956, ctx.r11.u32);
	// stw r11,960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 960, ctx.r11.u32);
	// stw r11,940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 940, ctx.r11.u32);
	// stfs f0,968(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 968, temp.u32);
	// lfs f0,-27328(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -27328);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 980, ctx.r11.u32);
	// stfs f0,972(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 972, temp.u32);
	// stb r11,1004(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1004, ctx.r11.u8);
	// lfs f0,-28788(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -28788);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,964(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 964, temp.u32);
	// stfs f0,976(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 976, temp.u32);
	// bl 0x826b47a8
	ctx.lr = 0x826B45DC;
	sub_826B47A8(ctx, base);
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

__attribute__((alias("__imp__sub_826B45F8"))) PPC_WEAK_FUNC(sub_826B45F8);
PPC_FUNC_IMPL(__imp__sub_826B45F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x826B4600;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r31,816(r30)
	PPC_STORE_U32(ctx.r30.u32 + 816, ctx.r31.u32);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826B4620;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x826a81b0
	ctx.lr = 0x826B4624;
	sub_826A81B0(ctx, base);
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
	ctx.lr = 0x826B463C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// bne 0x826b464c
	if (!ctx.cr0.eq) goto loc_826B464C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_826B464C:
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// stw r11,984(r30)
	PPC_STORE_U32(ctx.r30.u32 + 984, ctx.r11.u32);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r29,r11,-20364
	ctx.r29.s64 = ctx.r11.s64 + -20364;
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// lwz r3,108(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826b468c
	if (ctx.cr0.eq) goto loc_826B468C;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r10,-20392
	ctx.r5.s64 = ctx.r10.s64 + -20392;
	// addi r6,r30,864
	ctx.r6.s64 = ctx.r30.s64 + 864;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x828c5740
	ctx.lr = 0x826B4688;
	sub_828C5740(ctx, base);
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
loc_826B468C:
	// lwz r3,108(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826b46b4
	if (ctx.cr0.eq) goto loc_826B46B4;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r10,-20304
	ctx.r5.s64 = ctx.r10.s64 + -20304;
	// addi r6,r30,860
	ctx.r6.s64 = ctx.r30.s64 + 860;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x828c5740
	ctx.lr = 0x826B46B4;
	sub_828C5740(ctx, base);
loc_826B46B4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B46C0"))) PPC_WEAK_FUNC(sub_826B46C0);
PPC_FUNC_IMPL(__imp__sub_826B46C0) {
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
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r10,984(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 984);
	// lfs f13,864(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 864);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,988(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 988, temp.u32);
	// lwz r11,4592(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4592);
	// lwz r10,664(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 664);
	// lwz r9,656(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 656);
	// lwz r11,660(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 660);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82817bb8
	ctx.lr = 0x826B4714;
	sub_82817BB8(ctx, base);
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// addi r11,r31,992
	ctx.r11.s64 = ctx.r31.s64 + 992;
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mulli r11,r9,80
	ctx.r11.s64 = ctx.r9.s64 * 80;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lfs f0,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r6,992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 992, ctx.r6.u32);
	// stw r9,996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 996, ctx.r9.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r7,1000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1000, ctx.r7.u32);
	// lfs f0,992(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 992);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,996(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 996);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,836(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 836);
	// lfs f11,1000(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1000);
	ctx.f11.f64 = double(temp.f32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f12,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f13,996(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 996, temp.u32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f0,992(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 992, temp.u32);
	// stfs f11,1000(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1000, temp.u32);
	// stb r8,1004(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1004, ctx.r8.u8);
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

__attribute__((alias("__imp__sub_826B47A8"))) PPC_WEAK_FUNC(sub_826B47A8);
PPC_FUNC_IMPL(__imp__sub_826B47A8) {
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
	// clrlwi. r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r4,820(r31)
	PPC_STORE_U8(ctx.r31.u32 + 820, ctx.r4.u8);
	// beq 0x826b4874
	if (ctx.cr0.eq) goto loc_826B4874;
	// lwz r30,984(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 984);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827e25c8
	ctx.lr = 0x826B47D8;
	sub_827E25C8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f0,628(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 628);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f13,620(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 620);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r31,992
	ctx.r3.s64 = ctx.r31.s64 + 992;
	// lfs f12,624(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 624);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f10,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lfs f1,16668(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16668);
	ctx.f1.f64 = double(temp.f32);
	// stw r9,1000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1000, ctx.r9.u32);
	// stw r8,992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 992, ctx.r8.u32);
	// stw r11,996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 996, ctx.r11.u32);
	// bl 0x82332e18
	ctx.lr = 0x826B4834;
	sub_82332E18(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stb r11,1004(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1004, ctx.r11.u8);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 980, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,1008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1008, ctx.r8.u32);
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-32760(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -32760);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,988(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 988, temp.u32);
	// stfs f0,964(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 964, temp.u32);
	// lwz r11,984(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 984);
	// stfs f13,1948(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1948, temp.u32);
	// stfs f13,2568(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2568, temp.u32);
	// bl 0x826b4b60
	ctx.lr = 0x826B4874;
	sub_826B4B60(ctx, base);
loc_826B4874:
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

__attribute__((alias("__imp__sub_826B4890"))) PPC_WEAK_FUNC(sub_826B4890);
PPC_FUNC_IMPL(__imp__sub_826B4890) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x826b25a8
	ctx.lr = 0x826B48A8;
	sub_826B25A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826b48c8
	ctx.lr = 0x826B48B0;
	sub_826B48C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B48C8"))) PPC_WEAK_FUNC(sub_826B48C8);
PPC_FUNC_IMPL(__imp__sub_826B48C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f4
	ctx.lr = 0x826B48D0;
	__savegprlr_23(ctx, base);
	// stfd f29,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f29.u64);
	// stfd f30,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f30.u64);
	// stfd f31,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r9,848(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// lwz r10,836(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 836);
	// lwz r11,908(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 908);
	// mulli r9,r9,80
	ctx.r9.s64 = ctx.r9.s64 * 80;
	// add r24,r9,r10
	ctx.r24.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bge cr6,0x826b4914
	if (!ctx.cr6.lt) goto loc_826B4914;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,32
	ctx.r5.s64 = 32;
	// subfic r4,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r4.s64 = 16 - ctx.r11.s64;
	// addi r3,r30,892
	ctx.r3.s64 = ctx.r30.s64 + 892;
	// bl 0x82332d50
	ctx.lr = 0x826B4914;
	sub_82332D50(ctx, base);
loc_826B4914:
	// lwz r11,956(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 956);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bge cr6,0x826b4934
	if (!ctx.cr6.lt) goto loc_826B4934;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,12
	ctx.r5.s64 = 12;
	// subfic r4,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r4.s64 = 16 - ctx.r11.s64;
	// addi r3,r30,940
	ctx.r3.s64 = ctx.r30.s64 + 940;
	// bl 0x82332d50
	ctx.lr = 0x826B4934;
	sub_82332D50(ctx, base);
loc_826B4934:
	// lwz r11,932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 932);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bge cr6,0x826b4954
	if (!ctx.cr6.lt) goto loc_826B4954;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,12
	ctx.r5.s64 = 12;
	// subfic r4,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r4.s64 = 16 - ctx.r11.s64;
	// addi r3,r30,916
	ctx.r3.s64 = ctx.r30.s64 + 916;
	// bl 0x82332d50
	ctx.lr = 0x826B4954;
	sub_82332D50(ctx, base);
loc_826B4954:
	// li r23,0
	ctx.r23.s64 = 0;
	// addi r26,r24,28
	ctx.r26.s64 = ctx.r24.s64 + 28;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// stw r23,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r23.u32);
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// addi r25,r24,40
	ctx.r25.s64 = ctx.r24.s64 + 40;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
loc_826B4974:
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x824f97d8
	ctx.lr = 0x826B4984;
	sub_824F97D8(ctx, base);
	// lfs f0,4(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f10.f64 = double(temp.f32);
	// lwz r11,928(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 928);
	// lfs f9,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f12,f10,f0
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f11,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f5,f9,f0
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f31,f11,f0
	ctx.f31.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f2,8(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f7,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f7.f64 = double(temp.f32);
	// add r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lfs f6,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f6.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f8,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f8.f64 = double(temp.f32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lfs f1,0(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f4,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f3.f64 = double(temp.f32);
	// lfs f13,196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f30,f7,f2,f12
	ctx.f30.f64 = double(float(ctx.f7.f64 * ctx.f2.f64 + ctx.f12.f64));
	// fmadds f29,f6,f2,f5
	ctx.f29.f64 = double(float(ctx.f6.f64 * ctx.f2.f64 + ctx.f5.f64));
	// fmadds f2,f8,f2,f31
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f2.f64 + ctx.f31.f64));
	// lfs f5,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f5.f64 = double(temp.f32);
	// lfs f12,200(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f31,f4,f1,f30
	ctx.f31.f64 = double(float(ctx.f4.f64 * ctx.f1.f64 + ctx.f30.f64));
	// lfs f0,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f30,f3,f1,f29
	ctx.f30.f64 = double(float(ctx.f3.f64 * ctx.f1.f64 + ctx.f29.f64));
	// fmadds f2,f5,f1,f2
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f1.f64 + ctx.f2.f64));
	// fadds f1,f31,f13
	ctx.f1.f64 = double(float(ctx.f31.f64 + ctx.f13.f64));
	// stfs f1,100(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f1,f30,f12
	ctx.f1.f64 = double(float(ctx.f30.f64 + ctx.f12.f64));
	// stfs f1,104(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fadds f2,f2,f0
	ctx.f2.f64 = double(float(ctx.f2.f64 + ctx.f0.f64));
	// stfs f2,96(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// stwx r7,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r7.u32);
	// lfs f2,8(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,952(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 952);
	// lfs f31,4(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f9,f31,f9
	ctx.f9.f64 = double(float(ctx.f31.f64 * ctx.f9.f64));
	// fmuls f11,f31,f11
	ctx.f11.f64 = double(float(ctx.f31.f64 * ctx.f11.f64));
	// add r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 + ctx.r11.u64;
	// fmadds f9,f2,f6,f9
	ctx.f9.f64 = double(float(ctx.f2.f64 * ctx.f6.f64 + ctx.f9.f64));
	// fmuls f10,f31,f10
	ctx.f10.f64 = double(float(ctx.f31.f64 * ctx.f10.f64));
	// fmadds f11,f2,f8,f11
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f8.f64 + ctx.f11.f64));
	// fmadds f9,f3,f1,f9
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f1.f64 + ctx.f9.f64));
	// fmadds f10,f2,f7,f10
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f7.f64 + ctx.f10.f64));
	// fmadds f11,f1,f5,f11
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f5.f64 + ctx.f11.f64));
	// fadds f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmadds f12,f4,f1,f10
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f1.f64 + ctx.f10.f64));
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fadds f0,f12,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lwz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stwx r8,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r8.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// bl 0x82817bb8
	ctx.lr = 0x826B4A90;
	sub_82817BB8(ctx, base);
	// lwz r11,928(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 928);
	// lwz r10,952(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 952);
	// lfs f13,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,52(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,904(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 904);
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// lfs f11,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fneg f11,f11
	ctx.f11.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// lfs f10,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f9,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// add r28,r27,r9
	ctx.r28.u64 = ctx.r27.u64 + ctx.r9.u64;
	// lfs f7,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lfs f6,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// stw r29,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r29.u32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fadds f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// fadds f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// fadds f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 + ctx.f0.f64));
	// fsubs f13,f7,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 - ctx.f13.f64));
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fsubs f13,f6,f12
	ctx.f13.f64 = double(float(ctx.f6.f64 - ctx.f12.f64));
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fsubs f0,f5,f0
	ctx.f0.f64 = double(float(ctx.f5.f64 - ctx.f0.f64));
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bl 0x82817280
	ctx.lr = 0x826B4B1C;
	sub_82817280(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r23,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r23.u32);
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r29,r29,4095
	ctx.r29.s64 = ctx.r29.s64 + 4095;
	// ori r10,r10,65520
	ctx.r10.u64 = ctx.r10.u64 | 65520;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// stw r11,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r11.u32);
	// addi r27,r27,32
	ctx.r27.s64 = ctx.r27.s64 + 32;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// lfs f0,24(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 24, temp.u32);
	// blt cr6,0x826b4974
	if (ctx.cr6.lt) goto loc_826B4974;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lfd f29,-104(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f30,-96(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x82a4ea44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B4B60"))) PPC_WEAK_FUNC(sub_826B4B60);
PPC_FUNC_IMPL(__imp__sub_826B4B60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x826B4B68;
	__savegprlr_26(ctx, base);
	// stfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f29.u64);
	// stfd f30,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,984(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 984);
	// lwz r11,4592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4592);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826b4cf4
	if (ctx.cr6.eq) goto loc_826B4CF4;
	// lwz r10,848(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 848);
	// addi r27,r11,620
	ctx.r27.s64 = ctx.r11.s64 + 620;
	// lwz r11,836(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 836);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// mulli r10,r10,80
	ctx.r10.s64 = ctx.r10.s64 * 80;
	// lfs f30,908(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 908);
	ctx.f30.f64 = double(temp.f32);
	// add r26,r10,r11
	ctx.r26.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// lfs f29,16668(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16668);
	ctx.f29.f64 = double(temp.f32);
	// lfs f31,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
loc_826B4BC0:
	// lwz r11,904(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 904);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// add r31,r30,r11
	ctx.r31.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// bl 0x82817bb8
	ctx.lr = 0x826B4BD4;
	sub_82817BB8(ctx, base);
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fneg f11,f12
	ctx.f11.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f12,f13,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fcmpu cr6,f12,f30
	ctx.cr6.compare(ctx.f12.f64, ctx.f30.f64);
	// bne cr6,0x826b4c38
	if (!ctx.cr6.eq) goto loc_826B4C38;
	// fcmpu cr6,f11,f31
	ctx.cr6.compare(ctx.f11.f64, ctx.f31.f64);
	// bne cr6,0x826b4c5c
	if (!ctx.cr6.eq) goto loc_826B4C5C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// lfs f0,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// b 0x826b4c60
	goto loc_826B4C60;
loc_826B4C38:
	// fcmpu cr6,f12,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f29.f64);
	// bge cr6,0x826b4c4c
	if (!ctx.cr6.lt) goto loc_826B4C4C;
	// fmr f13,f31
	ctx.f13.f64 = ctx.f31.f64;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x826b4c5c
	goto loc_826B4C5C;
loc_826B4C4C:
	// fsqrts f12,f12
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(sqrt(ctx.f12.f64)));
	// fdivs f11,f30,f12
	ctx.f11.f64 = double(float(ctx.f30.f64 / ctx.f12.f64));
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
loc_826B4C5C:
	// fmr f12,f31
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f31.f64;
loc_826B4C60:
	// lfs f11,52(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfs f10,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// lfs f9,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// lfs f11,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// cmpwi cr6,r30,512
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 512, ctx.xer);
	// fadds f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fadds f0,f9,f12
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fadds f0,f11,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,928(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 928);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fadds f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r28,r28,12
	ctx.r28.s64 = ctx.r28.s64 + 12;
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// blt cr6,0x826b4bc0
	if (ctx.cr6.lt) goto loc_826B4BC0;
loc_826B4CF4:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f30,-72(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B4D08"))) PPC_WEAK_FUNC(sub_826B4D08);
PPC_FUNC_IMPL(__imp__sub_826B4D08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x826B4D10;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r11,984(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 984);
	// lwz r3,4592(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4592);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x826b4e50
	if (ctx.cr6.eq) goto loc_826B4E50;
	// bl 0x824090e0
	ctx.lr = 0x826B4D34;
	sub_824090E0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826b4e50
	if (ctx.cr0.eq) goto loc_826B4E50;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r10,984(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 984);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r26,4592(r10)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4592);
	// addi r28,r11,216
	ctx.r28.s64 = ctx.r11.s64 + 216;
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826b4e50
	if (!ctx.cr6.gt) goto loc_826B4E50;
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r29,0
	ctx.r29.s64 = 0;
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
loc_826B4D6C:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lwzx r31,r11,r29
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826b4e44
	if (ctx.cr6.eq) goto loc_826B4E44;
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
	ctx.lr = 0x826B4D94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x826b4e44
	if (!ctx.cr6.gt) goto loc_826B4E44;
	// lfs f13,620(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,620(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 620);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,628(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 628);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f11,624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,624(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 624);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f11,856(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 856);
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
	// bgt cr6,0x826b4e44
	if (ctx.cr6.gt) goto loc_826B4E44;
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x82332d50
	ctx.lr = 0x826B4E0C;
	sub_82332D50(ctx, base);
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// mulli r10,r3,56
	ctx.r10.s64 = ctx.r3.s64 * 56;
	// add. r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826b4e44
	if (ctx.cr0.eq) goto loc_826B4E44;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82873b58
	ctx.lr = 0x826B4E30;
	sub_82873B58(ctx, base);
	// addi r4,r30,28
	ctx.r4.s64 = ctx.r30.s64 + 28;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x82873b58
	ctx.lr = 0x826B4E3C;
	sub_82873B58(ctx, base);
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
loc_826B4E44:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r29,r29,56
	ctx.r29.s64 = ctx.r29.s64 + 56;
	// bne 0x826b4d6c
	if (!ctx.cr0.eq) goto loc_826B4D6C;
loc_826B4E50:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B4E60"))) PPC_WEAK_FUNC(sub_826B4E60);
PPC_FUNC_IMPL(__imp__sub_826B4E60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x826B4E68;
	__savegprlr_25(ctx, base);
	// stfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f29.u64);
	// stfd f30,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// fmr f29,f1
	ctx.f29.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x826b534c
	if (ctx.cr6.eq) goto loc_826B534C;
	// lwz r10,848(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,836(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 836);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mulli r10,r10,80
	ctx.r10.s64 = ctx.r10.s64 * 80;
	// add r27,r10,r11
	ctx.r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x826b6758
	ctx.lr = 0x826B4EAC;
	sub_826B6758(ctx, base);
	// lwz r30,816(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// lfs f30,48(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	ctx.f30.f64 = double(temp.f32);
	// lwz r11,984(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 984);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// addi r4,r11,1408
	ctx.r4.s64 = ctx.r11.s64 + 1408;
	// lwz r6,2256(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2256);
	// lwz r7,2248(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2248);
	// lfs f0,1412(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1412);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,2252(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2252);
	// lfs f13,1416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1416);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,1408(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1408);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,4600(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4600);
	// lfs f10,908(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f10.f64 = double(temp.f32);
	// stw r6,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r6.u32);
	// lfs f8,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f8.f64 = double(temp.f32);
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// lfs f9,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f9.f64 = double(temp.f32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// lfs f11,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f31,904(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fadds f8,f8,f30
	ctx.f8.f64 = double(float(ctx.f8.f64 + ctx.f30.f64));
	// lwz r28,1408(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1408);
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fsubs f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fsubs f13,f13,f8
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f8.f64));
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmadds f11,f13,f13,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmadds f11,f12,f12,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f11.f64));
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// bne cr6,0x826b4f5c
	if (!ctx.cr6.eq) goto loc_826B4F5C;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// lfs f0,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// b 0x826b4f90
	goto loc_826B4F90;
loc_826B4F5C:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f9,16668(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16668);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f11,f9
	ctx.cr6.compare(ctx.f11.f64, ctx.f9.f64);
	// bge cr6,0x826b4f7c
	if (!ctx.cr6.lt) goto loc_826B4F7C;
	// fmr f12,f31
	ctx.f12.f64 = ctx.f31.f64;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// fmr f13,f31
	ctx.f13.f64 = ctx.f31.f64;
	// b 0x826b4f90
	goto loc_826B4F90;
loc_826B4F7C:
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
loc_826B4F90:
	// lfs f11,52(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfs f9,624(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 624);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// lfs f10,620(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 620);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// lfs f11,628(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 628);
	ctx.f11.f64 = double(temp.f32);
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r29,r26,620
	ctx.r29.s64 = ctx.r26.s64 + 620;
	// fadds f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f0,f11,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x82a4ea80
	ctx.lr = 0x826B4FD4;
	sub_82A4EA80(ctx, base);
	// lwz r5,2256(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2256);
	// lwz r10,2252(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2252);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lwz r11,2248(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2248);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// lfs f11,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f0,-24640(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -24640);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// stw r4,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r4.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f11,f11,f30
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f30.f64));
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x826b5368
	ctx.lr = 0x826B5050;
	sub_826B5368(ctx, base);
	// lwz r11,1008(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1008);
	// li r30,0
	ctx.r30.s64 = 0;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826b506c
	if (ctx.cr6.eq) goto loc_826B506C;
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
	// stw r30,1008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1008, ctx.r30.u32);
loc_826B506C:
	// li r11,56
	ctx.r11.s64 = 56;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r30.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r30.u32);
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// bl 0x826b4d08
	ctx.lr = 0x826B50AC;
	sub_826B4D08(ctx, base);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// lwz r3,816(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// bl 0x827ebf48
	ctx.lr = 0x826B50BC;
	sub_827EBF48(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x826b50dc
	if (ctx.cr0.eq) goto loc_826B50DC;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,96(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// bl 0x827da008
	ctx.lr = 0x826B50D8;
	sub_827DA008(ctx, base);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_826B50DC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x826b50f4
	if (ctx.cr6.eq) goto loc_826B50F4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82643c20
	ctx.lr = 0x826B50EC;
	sub_82643C20(ctx, base);
	// lwz r11,1776(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1776);
	// lwz r30,4572(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4572);
loc_826B50F4:
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826b51f0
	if (!ctx.cr6.eq) goto loc_826B51F0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x826b5168
	if (ctx.cr6.eq) goto loc_826B5168;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,516(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 516);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826B511C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826b5168
	if (ctx.cr0.eq) goto loc_826B5168;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,516(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 516);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826B5138;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,1112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826B514C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x826b51f0
	if (ctx.cr6.gt) goto loc_826B51F0;
loc_826B5168:
	// lwz r11,656(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 656);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,660(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 660);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r9,664(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 664);
	// lfs f30,52(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 52);
	ctx.f30.f64 = double(temp.f32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x82817bb8
	ctx.lr = 0x826B5190;
	sub_82817BB8(ctx, base);
	// lfs f10,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f30,f10
	ctx.f10.f64 = double(float(ctx.f30.f64 * ctx.f10.f64));
	// lfs f9,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f11,f11,f30
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f30.f64));
	// fmuls f9,f9,f30
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f30.f64));
	// lfs f0,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// stb r11,1004(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1004, ctx.r11.u8);
	// fsubs f10,f0,f10
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// fsubs f11,f13,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// fsubs f9,f12,f9
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// fsubs f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fsubs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fsubs f0,f9,f12
	ctx.f0.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// b 0x826b5270
	goto loc_826B5270;
loc_826B51F0:
	// lwz r11,984(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 984);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r6,r11,1408
	ctx.r6.s64 = ctx.r11.s64 + 1408;
	// addi r5,r31,892
	ctx.r5.s64 = ctx.r31.s64 + 892;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x826b5be8
	ctx.lr = 0x826B5210;
	sub_826B5BE8(ctx, base);
	// lwz r11,200(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x826b5340
	if (ctx.cr6.lt) goto loc_826B5340;
	// fmuls f13,f30,f29
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f30.f64 * ctx.f29.f64));
	// lfs f0,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x826b5284
	if (!ctx.cr6.gt) goto loc_826B5284;
	// lfs f13,172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f0,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// stb r11,1004(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1004, ctx.r11.u8);
	// lfs f13,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f13,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_826B5270:
	// stfs f31,988(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 988, temp.u32);
	// stw r9,1000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1000, ctx.r9.u32);
	// stw r11,992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 992, ctx.r11.u32);
	// stw r10,996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 996, ctx.r10.u32);
	// b 0x826b5340
	goto loc_826B5340;
loc_826B5284:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x826b5324
	if (ctx.cr6.gt) goto loc_826B5324;
	// lwz r11,656(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 656);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,660(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 660);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r9,664(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 664);
	// lfs f30,52(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 52);
	ctx.f30.f64 = double(temp.f32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x82817bb8
	ctx.lr = 0x826B52B4;
	sub_82817BB8(ctx, base);
	// lfs f11,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f11,f30,f11
	ctx.f11.f64 = double(float(ctx.f30.f64 * ctx.f11.f64));
	// lfs f0,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f10,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f30
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f30.f64));
	// stb r11,1004(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1004, ctx.r11.u8);
	// fmuls f9,f9,f30
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f30.f64));
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// stfs f31,988(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 988, temp.u32);
	// fsubs f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fsubs f10,f12,f10
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// fsubs f9,f13,f9
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// fsubs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// fsubs f0,f10,f12
	ctx.f0.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fsubs f0,f9,f13
	ctx.f0.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r10,996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 996, ctx.r10.u32);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r11,992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 992, ctx.r11.u32);
	// stw r10,1000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1000, ctx.r10.u32);
	// b 0x826b5340
	goto loc_826B5340;
loc_826B5324:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lfs f13,864(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 864);
	ctx.f13.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,1004(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1004, ctx.r10.u8);
	// lfs f0,30996(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30996);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,988(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 988, temp.u32);
loc_826B5340:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x824d8e70
	ctx.lr = 0x826B5348;
	sub_824D8E70(ctx, base);
	// b 0x826b5354
	goto loc_826B5354;
loc_826B534C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,1004(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1004, ctx.r11.u8);
loc_826B5354:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f30,-80(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B5368"))) PPC_WEAK_FUNC(sub_826B5368);
PPC_FUNC_IMPL(__imp__sub_826B5368) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9e0
	ctx.lr = 0x826B5370;
	__savegprlr_18(ctx, base);
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x82a61710
	ctx.lr = 0x826B5378;
	__savefpr_14(ctx, base);
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// lfs f0,-27300(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27300);
	ctx.f0.f64 = double(temp.f32);
	// mr r19,r5
	ctx.r19.u64 = ctx.r5.u64;
	// lwz r3,816(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 816);
	// stfs f31,208(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f31,212(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// stfs f31,216(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// stfs f31,220(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// stfs f31,224(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stw r30,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r30.u32);
	// stfs f31,228(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// stw r9,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r9.u32);
	// stfs f31,232(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// stw r30,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r30.u32);
	// stfs f31,236(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// stw r30,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r30.u32);
	// stfs f31,240(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// stw r30,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r30.u32);
	// stfs f0,244(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// stw r30,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r30.u32);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stw r30,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r30.u32);
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// bl 0x827ebf48
	ctx.lr = 0x826B5400;
	sub_827EBF48(ctx, base);
	// mr. r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne 0x826b5410
	if (!ctx.cr0.eq) goto loc_826B5410;
loc_826B5408:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// b 0x826b5bd8
	goto loc_826B5BD8;
loc_826B5410:
	// lwz r22,1412(r23)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r23.u32 + 1412);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x826b5408
	if (ctx.cr6.eq) goto loc_826B5408;
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
	// lwz r5,816(r21)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r21.u32 + 816);
	// lis r8,4
	ctx.r8.s64 = 262144;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// ori r8,r8,8326
	ctx.r8.u64 = ctx.r8.u64 | 8326;
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// lwz r3,13024(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// li r18,1
	ctx.r18.s64 = 1;
	// bl 0x82825330
	ctx.lr = 0x826B544C;
	sub_82825330(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826b5458
	if (ctx.cr0.eq) goto loc_826B5458;
	// mr r18,r30
	ctx.r18.u64 = ctx.r30.u64;
loc_826B5458:
	// ld r11,460(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 460);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfs f2,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x828191b8
	ctx.lr = 0x826B5474;
	sub_828191B8(ctx, base);
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lfs f26,204(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	ctx.f26.f64 = double(temp.f32);
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lfs f25,200(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f25.f64 = double(temp.f32);
	// addi r26,r11,216
	ctx.r26.s64 = ctx.r11.s64 + 216;
	// lfs f24,196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f24.f64 = double(temp.f32);
	// lfs f23,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f23.f64 = double(temp.f32);
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// lfs f0,5808(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5808);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,32752(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32752);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,908(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 908);
	ctx.f12.f64 = double(temp.f32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f22,188(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	ctx.f22.f64 = double(temp.f32);
	// lfs f21,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f21.f64 = double(temp.f32);
	// lfs f20,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f20.f64 = double(temp.f32);
	// lfs f19,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f19.f64 = double(temp.f32);
	// lfs f18,172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f18.f64 = double(temp.f32);
	// lfs f17,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f17.f64 = double(temp.f32);
	// lfs f16,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f16.f64 = double(temp.f32);
	// lfs f15,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f15.f64 = double(temp.f32);
	// lfs f14,156(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f14.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ble cr6,0x826b5724
	if (!ctx.cr6.gt) goto loc_826B5724;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
loc_826B54E8:
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// lwzx r31,r11,r27
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826b5718
	if (ctx.cr6.eq) goto loc_826B5718;
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
	ctx.lr = 0x826B5510;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x826b5718
	if (!ctx.cr6.gt) goto loc_826B5718;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1176);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826B5544;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// stfs f29,1800(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1800, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f13,8(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// addi r29,r31,620
	ctx.r29.s64 = ctx.r31.s64 + 620;
	// lfs f11,628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f11.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f10,0(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,620(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,4(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,1464(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1464);
	// lfs f12,624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f27,f0,f12
	ctx.f27.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fsubs f30,f10,f9
	ctx.f30.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// fsubs f28,f13,f11
	ctx.f28.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826B5588;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fmuls f0,f28,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f28.f64 * ctx.f28.f64));
	// lfs f13,856(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 856);
	ctx.f13.f64 = double(temp.f32);
	// fmr f28,f1
	ctx.f28.f64 = ctx.f1.f64;
	// fmadds f0,f30,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f30.f64 + ctx.f0.f64));
	// fmadds f0,f27,f27,f0
	ctx.f0.f64 = double(float(ctx.f27.f64 * ctx.f27.f64 + ctx.f0.f64));
	// fsqrts f27,f0
	ctx.f27.f64 = double(float(sqrt(ctx.f0.f64)));
	// fcmpu cr6,f27,f13
	ctx.cr6.compare(ctx.f27.f64, ctx.f13.f64);
	// bgt cr6,0x826b5718
	if (ctx.cr6.gt) goto loc_826B5718;
	// lfs f0,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lfs f11,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f14,f0
	ctx.f12.f64 = double(float(ctx.f14.f64 * ctx.f0.f64));
	// lfs f13,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f10,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f0,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lfs f9,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f12,f18,f0,f12
	ctx.f12.f64 = double(float(ctx.f18.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fmadds f11,f16,f0,f11
	ctx.f11.f64 = double(float(ctx.f16.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fmadds f13,f15,f0,f13
	ctx.f13.f64 = double(float(ctx.f15.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmadds f0,f17,f0,f10
	ctx.f0.f64 = double(float(ctx.f17.f64 * ctx.f0.f64 + ctx.f10.f64));
	// fmadds f12,f22,f9,f12
	ctx.f12.f64 = double(float(ctx.f22.f64 * ctx.f9.f64 + ctx.f12.f64));
	// fmadds f11,f20,f9,f11
	ctx.f11.f64 = double(float(ctx.f20.f64 * ctx.f9.f64 + ctx.f11.f64));
	// fmadds f13,f19,f9,f13
	ctx.f13.f64 = double(float(ctx.f19.f64 * ctx.f9.f64 + ctx.f13.f64));
	// fmadds f10,f21,f9,f0
	ctx.f10.f64 = double(float(ctx.f21.f64 * ctx.f9.f64 + ctx.f0.f64));
	// fadds f0,f12,f26
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f26.f64));
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fadds f12,f11,f24
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f24.f64));
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fadds f13,f13,f23
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f23.f64));
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fadds f12,f10,f25
	ctx.f12.f64 = double(float(ctx.f10.f64 + ctx.f25.f64));
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// stw r8,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r8.u32);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// blt cr6,0x826b5718
	if (ctx.cr6.lt) goto loc_826B5718;
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// lfs f13,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// fdivs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// blt cr6,0x826b5718
	if (ctx.cr6.lt) goto loc_826B5718;
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bgt cr6,0x826b5718
	if (ctx.cr6.gt) goto loc_826B5718;
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x826b5718
	if (ctx.cr6.lt) goto loc_826B5718;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x826b5718
	if (ctx.cr6.gt) goto loc_826B5718;
	// lwz r11,1608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826b569c
	if (ctx.cr6.eq) goto loc_826B569C;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82414510
	ctx.lr = 0x826B569C;
	sub_82414510(ctx, base);
loc_826B569C:
	// fmr f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f31.f64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826b56b8
	if (ctx.cr6.eq) goto loc_826B56B8;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x828ab328
	ctx.lr = 0x826B56B0;
	sub_828AB328(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x826b56e4
	if (!ctx.cr0.lt) goto loc_826B56E4;
loc_826B56B8:
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lwz r11,788(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x826b56e8
	if (!ctx.cr6.eq) goto loc_826B56E8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1352(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1352);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826B56DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826b56e8
	if (ctx.cr0.eq) goto loc_826B56E8;
loc_826B56E4:
	// fmr f30,f29
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f29.f64;
loc_826B56E8:
	// fcmpu cr6,f28,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f28.f64, ctx.f31.f64);
	// ble cr6,0x826b570c
	if (!ctx.cr6.gt) goto loc_826B570C;
	// fdivs f13,f27,f28
	ctx.f13.f64 = double(float(ctx.f27.f64 / ctx.f28.f64));
	// lfs f0,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fmuls f30,f13,f30
	ctx.f30.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// bge cr6,0x826b570c
	if (!ctx.cr6.lt) goto loc_826B570C;
	// fmr f30,f0
	ctx.f30.f64 = ctx.f0.f64;
loc_826B570C:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 + ctx.f0.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_826B5718:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r27,r27,56
	ctx.r27.s64 = ctx.r27.s64 + 56;
	// bne 0x826b54e8
	if (!ctx.cr0.eq) goto loc_826B54E8;
loc_826B5724:
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// lwz r3,96(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// bl 0x827da008
	ctx.lr = 0x826B573C;
	sub_827DA008(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826b5984
	if (ctx.cr6.eq) goto loc_826B5984;
	// bl 0x82643c20
	ctx.lr = 0x826B574C;
	sub_82643C20(ctx, base);
	// lwz r11,1776(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1776);
	// lwz r31,4572(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4572);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826b5984
	if (ctx.cr6.eq) goto loc_826B5984;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,520(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 520);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826B5770;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826b5984
	if (ctx.cr0.eq) goto loc_826B5984;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,520(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 520);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826B578C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,1112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826B57A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x826b5984
	if (!ctx.cr6.gt) goto loc_826B5984;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,520(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 520);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826B57D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r30,r31,620
	ctx.r30.s64 = ctx.r31.s64 + 620;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1176);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826B57EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// stfs f30,1800(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1800, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f11,620(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f11.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f10,628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f13,4(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,1464(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1464);
	// fsubs f27,f13,f12
	ctx.f27.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f0,0(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f29,f9,f10
	ctx.f29.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// fsubs f28,f0,f11
	ctx.f28.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826B582C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fmuls f0,f29,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f29.f64 * ctx.f29.f64));
	// fmadds f0,f28,f28,f0
	ctx.f0.f64 = double(float(ctx.f28.f64 * ctx.f28.f64 + ctx.f0.f64));
	// fmadds f0,f27,f27,f0
	ctx.f0.f64 = double(float(ctx.f27.f64 * ctx.f27.f64 + ctx.f0.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bgt cr6,0x826b5984
	if (ctx.cr6.gt) goto loc_826B5984;
	// lfs f12,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
	// lfs f10,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f9.f64 = double(temp.f32);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lfs f7,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f7.f64 = double(temp.f32);
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmr f8,f11
	ctx.f8.f64 = ctx.f11.f64;
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmuls f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f9,f9,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f6,f14,f13
	ctx.f6.f64 = double(float(ctx.f14.f64 * ctx.f13.f64));
	// fmuls f13,f7,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fmadds f10,f16,f0,f10
	ctx.f10.f64 = double(float(ctx.f16.f64 * ctx.f0.f64 + ctx.f10.f64));
	// fmadds f9,f17,f0,f9
	ctx.f9.f64 = double(float(ctx.f17.f64 * ctx.f0.f64 + ctx.f9.f64));
	// fmadds f7,f18,f0,f6
	ctx.f7.f64 = double(float(ctx.f18.f64 * ctx.f0.f64 + ctx.f6.f64));
	// fmadds f13,f15,f0,f13
	ctx.f13.f64 = double(float(ctx.f15.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmadds f10,f8,f20,f10
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f20.f64 + ctx.f10.f64));
	// fmadds f9,f8,f21,f9
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f21.f64 + ctx.f9.f64));
	// fmadds f7,f8,f22,f7
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f22.f64 + ctx.f7.f64));
	// fmadds f8,f8,f19,f13
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f19.f64 + ctx.f13.f64));
	// fadds f10,f10,f24
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f24.f64));
	// stfs f10,116(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fadds f10,f9,f25
	ctx.f10.f64 = double(float(ctx.f9.f64 + ctx.f25.f64));
	// stfs f10,120(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fadds f13,f7,f26
	ctx.f13.f64 = double(float(ctx.f7.f64 + ctx.f26.f64));
	// stfs f13,124(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fadds f10,f8,f23
	ctx.f10.f64 = double(float(ctx.f8.f64 + ctx.f23.f64));
	// stfs f10,112(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// blt cr6,0x826b5984
	if (ctx.cr6.lt) goto loc_826B5984;
	// fdivs f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 / ctx.f13.f64));
	// lfs f10,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f8.f64 = double(temp.f32);
	// fdivs f10,f9,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 / ctx.f10.f64));
	// fcmpu cr6,f13,f8
	ctx.cr6.compare(ctx.f13.f64, ctx.f8.f64);
	// blt cr6,0x826b5984
	if (ctx.cr6.lt) goto loc_826B5984;
	// lfs f9,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f13,f9
	ctx.cr6.compare(ctx.f13.f64, ctx.f9.f64);
	// bgt cr6,0x826b5984
	if (ctx.cr6.gt) goto loc_826B5984;
	// fmr f13,f8
	ctx.f13.f64 = ctx.f8.f64;
	// fcmpu cr6,f10,f13
	ctx.cr6.compare(ctx.f10.f64, ctx.f13.f64);
	// blt cr6,0x826b5984
	if (ctx.cr6.lt) goto loc_826B5984;
	// fmr f13,f9
	ctx.f13.f64 = ctx.f9.f64;
	// fcmpu cr6,f10,f13
	ctx.cr6.compare(ctx.f10.f64, ctx.f13.f64);
	// bgt cr6,0x826b5984
	if (ctx.cr6.gt) goto loc_826B5984;
	// lfs f10,0(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmr f13,f30
	ctx.f13.f64 = ctx.f30.f64;
	// fsubs f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// lfs f9,4(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,8(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// fsubs f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// ble cr6,0x826b5978
	if (!ctx.cr6.gt) goto loc_826B5978;
	// fmuls f13,f11,f11
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f13,f12,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f13,f0,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f13.f64));
	// lfs f0,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// fdivs f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f1.f64));
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fmuls f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x826b5978
	if (!ctx.cr6.lt) goto loc_826B5978;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_826B5978:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_826B5984:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r10,10548(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lwz r11,2300(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2300);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826b5b30
	if (!ctx.cr6.gt) goto loc_826B5B30;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x826b5b30
	if (!ctx.cr0.gt) goto loc_826B5B30;
	// lwz r9,2296(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2296);
	// lfs f6,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f5.f64 = double(temp.f32);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lfs f4,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f4.f64 = double(temp.f32);
loc_826B59B4:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826b5b20
	if (ctx.cr6.eq) goto loc_826B5B20;
	// lfs f0,620(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 620);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x826b5b20
	if (ctx.cr6.eq) goto loc_826B5B20;
	// lfs f0,624(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x826b5b20
	if (ctx.cr6.eq) goto loc_826B5B20;
	// lfs f0,628(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 628);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x826b5b20
	if (ctx.cr6.eq) goto loc_826B5B20;
	// lfs f12,0(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,620(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 620);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f12,628(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 628);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,8(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f9,f9,f12
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// lfs f0,624(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,4(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// lfs f8,3568(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3568);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,3572(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3572);
	ctx.f7.f64 = double(temp.f32);
	// fcmpu cr6,f8,f31
	ctx.cr6.compare(ctx.f8.f64, ctx.f31.f64);
	// fmuls f9,f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fmadds f11,f11,f11,f9
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f9.f64));
	// fmadds f11,f10,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f11.f64));
	// fsqrts f11,f11
	ctx.f11.f64 = double(float(sqrt(ctx.f11.f64)));
	// beq cr6,0x826b5a30
	if (ctx.cr6.eq) goto loc_826B5A30;
	// fcmpu cr6,f11,f8
	ctx.cr6.compare(ctx.f11.f64, ctx.f8.f64);
	// b 0x826b5a38
	goto loc_826B5A38;
loc_826B5A30:
	// lfs f3,856(r21)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 856);
	ctx.f3.f64 = double(temp.f32);
	// fcmpu cr6,f11,f3
	ctx.cr6.compare(ctx.f11.f64, ctx.f3.f64);
loc_826B5A38:
	// bgt cr6,0x826b5b20
	if (ctx.cr6.gt) goto loc_826B5B20;
	// lfs f10,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lfs f9,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f3,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f9,f9,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f3,f3,f13
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmuls f13,f14,f13
	ctx.f13.f64 = double(float(ctx.f14.f64 * ctx.f13.f64));
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// fmadds f10,f15,f0,f10
	ctx.f10.f64 = double(float(ctx.f15.f64 * ctx.f0.f64 + ctx.f10.f64));
	// fmadds f9,f16,f0,f9
	ctx.f9.f64 = double(float(ctx.f16.f64 * ctx.f0.f64 + ctx.f9.f64));
	// fmadds f3,f17,f0,f3
	ctx.f3.f64 = double(float(ctx.f17.f64 * ctx.f0.f64 + ctx.f3.f64));
	// fmadds f0,f18,f0,f13
	ctx.f0.f64 = double(float(ctx.f18.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmadds f13,f12,f19,f10
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f19.f64 + ctx.f10.f64));
	// fmadds f10,f12,f20,f9
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f20.f64 + ctx.f9.f64));
	// fmadds f9,f12,f21,f3
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f21.f64 + ctx.f3.f64));
	// fmadds f0,f12,f22,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f22.f64 + ctx.f0.f64));
	// fadds f13,f13,f23
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f23.f64));
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fadds f12,f10,f24
	ctx.f12.f64 = double(float(ctx.f10.f64 + ctx.f24.f64));
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fadds f12,f9,f25
	ctx.f12.f64 = double(float(ctx.f9.f64 + ctx.f25.f64));
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fadds f0,f0,f26
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f26.f64));
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r6,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r6.u32);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r5,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r5.u32);
	// stw r4,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r4.u32);
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// blt cr6,0x826b5b20
	if (ctx.cr6.lt) goto loc_826B5B20;
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// lfs f13,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// fcmpu cr6,f0,f5
	ctx.cr6.compare(ctx.f0.f64, ctx.f5.f64);
	// blt cr6,0x826b5b20
	if (ctx.cr6.lt) goto loc_826B5B20;
	// fcmpu cr6,f0,f4
	ctx.cr6.compare(ctx.f0.f64, ctx.f4.f64);
	// bgt cr6,0x826b5b20
	if (ctx.cr6.gt) goto loc_826B5B20;
	// fcmpu cr6,f13,f5
	ctx.cr6.compare(ctx.f13.f64, ctx.f5.f64);
	// blt cr6,0x826b5b20
	if (ctx.cr6.lt) goto loc_826B5B20;
	// fcmpu cr6,f13,f4
	ctx.cr6.compare(ctx.f13.f64, ctx.f4.f64);
	// bgt cr6,0x826b5b20
	if (ctx.cr6.gt) goto loc_826B5B20;
	// fmr f0,f7
	ctx.f0.f64 = ctx.f7.f64;
	// fcmpu cr6,f8,f31
	ctx.cr6.compare(ctx.f8.f64, ctx.f31.f64);
	// ble cr6,0x826b5b14
	if (!ctx.cr6.gt) goto loc_826B5B14;
	// fdivs f0,f11,f8
	ctx.f0.f64 = double(float(ctx.f11.f64 / ctx.f8.f64));
	// fsubs f0,f6,f0
	ctx.f0.f64 = double(float(ctx.f6.f64 - ctx.f0.f64));
	// fmuls f0,f0,f7
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
loc_826B5B14:
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_826B5B20:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x826b59b4
	if (!ctx.cr0.eq) goto loc_826B59B4;
	// b 0x826b5b34
	goto loc_826B5B34;
loc_826B5B30:
	// lfs f6,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f6.f64 = double(temp.f32);
loc_826B5B34:
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// beq cr6,0x826b5bd4
	if (ctx.cr6.eq) goto loc_826B5BD4;
	// lfs f0,4(r19)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lfs f13,4(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,212(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f0,8(r19)
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,8(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,216(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fsubs f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// lfs f0,0(r19)
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f9,0(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// fsubs f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// lfs f0,30996(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30996);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmuls f12,f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f13,f11,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f13.f64));
	// fmadds f12,f10,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fmadds f13,f9,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f13.f64));
	// fmadds f12,f8,f8,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f12.f64));
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// fsqrts f12,f12
	ctx.f12.f64 = double(float(sqrt(ctx.f12.f64)));
	// fdivs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f6
	ctx.cr6.compare(ctx.f0.f64, ctx.f6.f64);
	// ble cr6,0x826b5bb4
	if (!ctx.cr6.gt) goto loc_826B5BB4;
	// fmr f0,f6
	ctx.f0.f64 = ctx.f6.f64;
loc_826B5BB4:
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// bgt cr6,0x826b5bcc
	if (ctx.cr6.gt) goto loc_826B5BCC;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,18284(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18284);
	ctx.f0.f64 = double(temp.f32);
	// b 0x826b5bd0
	goto loc_826B5BD0;
loc_826B5BCC:
	// fmuls f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
loc_826B5BD0:
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_826B5BD4:
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
loc_826B5BD8:
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x82a6175c
	ctx.lr = 0x826B5BE4;
	__restfpr_14(ctx, base);
	// b 0x82a4ea30
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B5BE8"))) PPC_WEAK_FUNC(sub_826B5BE8);
PPC_FUNC_IMPL(__imp__sub_826B5BE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9e8
	ctx.lr = 0x826B5BF0;
	__savegprlr_20(ctx, base);
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x82a61748
	ctx.lr = 0x826B5BF8;
	__savefpr_28(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// addi r29,r11,20396
	ctx.r29.s64 = ctx.r11.s64 + 20396;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// lfs f13,16540(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16540);
	ctx.f13.f64 = double(temp.f32);
	// li r5,44
	ctx.r5.s64 = 44;
	// lfs f0,17812(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 17812);
	ctx.f0.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stfs f0,36(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 36, temp.u32);
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// stfs f13,32(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 32, temp.u32);
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// addi r27,r30,8
	ctx.r27.s64 = ctx.r30.s64 + 8;
	// bl 0x82a455d0
	ctx.lr = 0x826B5C3C;
	sub_82A455D0(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r10,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r10.u32);
	// addi r26,r31,868
	ctx.r26.s64 = ctx.r31.s64 + 868;
	// lfs f0,18284(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18284);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lwz r7,848(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r6,888(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 888);
	// lwz r10,984(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 984);
	// lwz r11,816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// addi r9,r11,2248
	ctx.r9.s64 = ctx.r11.s64 + 2248;
	// lwz r11,836(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 836);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// lwz r5,4600(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4600);
	// mulli r10,r7,80
	ctx.r10.s64 = ctx.r7.s64 * 80;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// lwz r21,1408(r5)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1408);
	// stfs f12,108(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lfs f0,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stw r28,884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 884, ctx.r28.u32);
	// beq cr6,0x826b5cd8
	if (ctx.cr6.eq) goto loc_826B5CD8;
	// stw r28,20(r26)
	PPC_STORE_U32(ctx.r26.u32 + 20, ctx.r28.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82332c38
	ctx.lr = 0x826B5CD8;
	sub_82332C38(ctx, base);
loc_826B5CD8:
	// lwz r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// mr r23,r28
	ctx.r23.u64 = ctx.r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826b5e00
	if (!ctx.cr6.gt) goto loc_826B5E00;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lfs f0,20500(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 20500);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f29,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f29.f64 = double(temp.f32);
	// lis r9,0
	ctx.r9.s64 = 0;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// ori r24,r9,65534
	ctx.r24.u64 = ctx.r9.u64 | 65534;
	// lfs f28,30996(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30996);
	ctx.f28.f64 = double(temp.f32);
	// lfs f30,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f30.f64 = double(temp.f32);
loc_826B5D14:
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// add r29,r28,r11
	ctx.r29.u64 = ctx.r28.u64 + ctx.r11.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826b5368
	ctx.lr = 0x826B5D38;
	sub_826B5368(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// ble cr6,0x826b5db0
	if (!ctx.cr6.gt) goto loc_826B5DB0;
	// lwz r11,16(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r10,r11,r24
	ctx.r10.u64 = ctx.r11.u64 + ctx.r24.u64;
	// blt cr6,0x826b5d5c
	if (ctx.cr6.lt) goto loc_826B5D5C;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_826B5D5C:
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x826b5d74
	if (!ctx.cr6.lt) goto loc_826B5D74;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
loc_826B5D74:
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r11,32767
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32767, ctx.xer);
	// ble cr6,0x826b5d90
	if (!ctx.cr6.gt) goto loc_826B5D90;
	// subf r11,r11,r24
	ctx.r11.s64 = ctx.r24.s64 - ctx.r11.s64;
loc_826B5D90:
	// cmpwi cr6,r11,24575
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24575, ctx.xer);
	// ble cr6,0x826b5da0
	if (!ctx.cr6.gt) goto loc_826B5DA0;
	// fmuls f31,f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f29.f64));
	// b 0x826b5dac
	goto loc_826B5DAC;
loc_826B5DA0:
	// cmpwi cr6,r11,8192
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8192, ctx.xer);
	// ble cr6,0x826b5db0
	if (!ctx.cr6.gt) goto loc_826B5DB0;
	// fmuls f31,f31,f28
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f28.f64));
loc_826B5DAC:
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_826B5DB0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x824fc978
	ctx.lr = 0x826B5DBC;
	sub_824FC978(ctx, base);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x826b5dec
	if (!ctx.cr6.gt) goto loc_826B5DEC;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stfs f31,0(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stw r23,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r23.u32);
	// li r5,32
	ctx.r5.s64 = 32;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a4ea80
	ctx.lr = 0x826B5DEC;
	sub_82A4EA80(ctx, base);
loc_826B5DEC:
	// lwz r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r28,r28,32
	ctx.r28.s64 = ctx.r28.s64 + 32;
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826b5d14
	if (ctx.cr6.lt) goto loc_826B5D14;
loc_826B5E00:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x82a61794
	ctx.lr = 0x826B5E10;
	__restfpr_28(ctx, base);
	// b 0x82a4ea38
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B5E18"))) PPC_WEAK_FUNC(sub_826B5E18);
PPC_FUNC_IMPL(__imp__sub_826B5E18) {
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
	// bl 0x82a61730
	ctx.lr = 0x826B5E30;
	__savefpr_22(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lfs f0,964(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 964);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// lfs f13,968(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 968);
	ctx.f13.f64 = double(temp.f32);
	// lfs f22,23784(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23784);
	ctx.f22.f64 = double(temp.f32);
	// lfs f23,16668(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16668);
	ctx.f23.f64 = double(temp.f32);
	// lfs f31,904(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// lfs f24,908(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 908);
	ctx.f24.f64 = double(temp.f32);
	// stfs f0,964(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 964, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x826b6054
	if (ctx.cr6.lt) goto loc_826B6054;
	// lfs f0,996(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 996);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,984(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 984);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,992(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 992);
	ctx.f13.f64 = double(temp.f32);
	// addi r31,r30,992
	ctx.r31.s64 = ctx.r30.s64 + 992;
	// lwz r11,4592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4592);
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f24
	ctx.cr6.compare(ctx.f0.f64, ctx.f24.f64);
	// bne cr6,0x826b5ed0
	if (!ctx.cr6.eq) goto loc_826B5ED0;
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x826b5ec8
	if (!ctx.cr6.eq) goto loc_826B5EC8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// b 0x826b5efc
	goto loc_826B5EFC;
loc_826B5EC8:
	// lfs f12,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// b 0x826b5ef8
	goto loc_826B5EF8;
loc_826B5ED0:
	// fcmpu cr6,f0,f23
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f23.f64);
	// bge cr6,0x826b5ee4
	if (!ctx.cr6.lt) goto loc_826B5EE4;
	// fmr f13,f31
	ctx.f13.f64 = ctx.f31.f64;
	// fmr f12,f31
	ctx.f12.f64 = ctx.f31.f64;
	// b 0x826b5ef8
	goto loc_826B5EF8;
loc_826B5EE4:
	// fsqrts f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f11,f24,f0
	ctx.f11.f64 = double(float(ctx.f24.f64 / ctx.f0.f64));
	// fmuls f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// fmuls f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
loc_826B5EF8:
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
loc_826B5EFC:
	// lwz r10,656(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 656);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r9,660(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 660);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,664(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 664);
	// fneg f27,f13
	ctx.fpscr.disableFlushMode();
	ctx.f27.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f26,f12
	ctx.f26.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fneg f25,f0
	ctx.f25.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82817bb8
	ctx.lr = 0x826B5F2C;
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
	// fmadds f13,f0,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fcmpu cr6,f13,f24
	ctx.cr6.compare(ctx.f13.f64, ctx.f24.f64);
	// bne cr6,0x826b5f84
	if (!ctx.cr6.eq) goto loc_826B5F84;
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// bne cr6,0x826b5f78
	if (!ctx.cr6.eq) goto loc_826B5F78;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f29,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f28.f64 = double(temp.f32);
	// lfs f30,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f30.f64 = double(temp.f32);
	// b 0x826b5fb0
	goto loc_826B5FB0;
loc_826B5F78:
	// lfs f28,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f28.f64 = double(temp.f32);
	// fmr f29,f0
	ctx.f29.f64 = ctx.f0.f64;
	// b 0x826b5fac
	goto loc_826B5FAC;
loc_826B5F84:
	// fcmpu cr6,f13,f23
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f23.f64);
	// bge cr6,0x826b5f98
	if (!ctx.cr6.lt) goto loc_826B5F98;
	// fmr f29,f31
	ctx.f29.f64 = ctx.f31.f64;
	// fmr f28,f31
	ctx.f28.f64 = ctx.f31.f64;
	// b 0x826b5fac
	goto loc_826B5FAC;
loc_826B5F98:
	// fsqrts f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f13,f24,f13
	ctx.f13.f64 = double(float(ctx.f24.f64 / ctx.f13.f64));
	// fmuls f29,f0,f13
	ctx.f29.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f28,f12,f13
	ctx.f28.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
loc_826B5FAC:
	// fmr f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f31.f64;
loc_826B5FB0:
	// fmuls f0,f28,f26
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f28.f64 * ctx.f26.f64));
	// lfs f13,976(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 976);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f13,f22
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f22.f64));
	// fmadds f0,f30,f25,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f25.f64 + ctx.f0.f64));
	// fmadds f27,f29,f27,f0
	ctx.f27.f64 = double(float(ctx.f29.f64 * ctx.f27.f64 + ctx.f0.f64));
	// bl 0x82a4e118
	ctx.lr = 0x826B5FC8;
	sub_82A4E118(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fcmpu cr6,f27,f0
	ctx.cr6.compare(ctx.f27.f64, ctx.f0.f64);
	// bge cr6,0x826b6044
	if (!ctx.cr6.lt) goto loc_826B6044;
	// fneg f0,f30
	ctx.f0.u64 = ctx.f30.u64 ^ 0x8000000000000000;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fneg f0,f29
	ctx.f0.u64 = ctx.f29.u64 ^ 0x8000000000000000;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// fneg f0,f28
	ctx.f0.u64 = ctx.f28.u64 ^ 0x8000000000000000;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,848(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// lwz r11,836(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 836);
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// mulli r10,r10,80
	ctx.r10.s64 = ctx.r10.s64 * 80;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f11,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmuls f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stw r9,980(r30)
	PPC_STORE_U32(ctx.r30.u32 + 980, ctx.r9.u32);
loc_826B6044:
	// lfs f0,964(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 964);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,968(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 968);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,964(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 964, temp.u32);
loc_826B6054:
	// lwz r11,980(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 980);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826b62b0
	if (ctx.cr6.eq) goto loc_826B62B0;
	// lwz r11,984(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 984);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,4592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4592);
	// lwz r10,656(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 656);
	// lwz r9,660(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 660);
	// lwz r11,664(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 664);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82817bb8
	ctx.lr = 0x826B608C;
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
	// fmadds f13,f0,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fcmpu cr6,f13,f24
	ctx.cr6.compare(ctx.f13.f64, ctx.f24.f64);
	// bne cr6,0x826b60e4
	if (!ctx.cr6.eq) goto loc_826B60E4;
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// bne cr6,0x826b60d8
	if (!ctx.cr6.eq) goto loc_826B60D8;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f27,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f27.f64 = double(temp.f32);
	// lfs f26,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f26.f64 = double(temp.f32);
	// lfs f28,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f28.f64 = double(temp.f32);
	// b 0x826b6110
	goto loc_826B6110;
loc_826B60D8:
	// lfs f26,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f26.f64 = double(temp.f32);
	// fmr f27,f0
	ctx.f27.f64 = ctx.f0.f64;
	// b 0x826b610c
	goto loc_826B610C;
loc_826B60E4:
	// fcmpu cr6,f13,f23
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f23.f64);
	// bge cr6,0x826b60f8
	if (!ctx.cr6.lt) goto loc_826B60F8;
	// fmr f27,f31
	ctx.f27.f64 = ctx.f31.f64;
	// fmr f26,f31
	ctx.f26.f64 = ctx.f31.f64;
	// b 0x826b610c
	goto loc_826B610C;
loc_826B60F8:
	// fsqrts f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f13,f24,f13
	ctx.f13.f64 = double(float(ctx.f24.f64 / ctx.f13.f64));
	// fmuls f27,f0,f13
	ctx.f27.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f26,f12,f13
	ctx.f26.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
loc_826B610C:
	// fmr f28,f31
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f31.f64;
loc_826B6110:
	// lwz r11,816(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 816);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,2960
	ctx.r4.s64 = ctx.r11.s64 + 2960;
	// bl 0x82817bb8
	ctx.lr = 0x826B6120;
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
	// fmadds f13,f0,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fcmpu cr6,f13,f24
	ctx.cr6.compare(ctx.f13.f64, ctx.f24.f64);
	// bne cr6,0x826b6174
	if (!ctx.cr6.eq) goto loc_826B6174;
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// bne cr6,0x826b616c
	if (!ctx.cr6.eq) goto loc_826B616C;
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
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f31,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f31.f64 = double(temp.f32);
	// b 0x826b619c
	goto loc_826B619C;
loc_826B616C:
	// lfs f13,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// b 0x826b619c
	goto loc_826B619C;
loc_826B6174:
	// fcmpu cr6,f13,f23
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f23.f64);
	// bge cr6,0x826b6188
	if (!ctx.cr6.lt) goto loc_826B6188;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// fmr f13,f31
	ctx.f13.f64 = ctx.f31.f64;
	// b 0x826b619c
	goto loc_826B619C;
loc_826B6188:
	// fsqrts f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f13,f24,f13
	ctx.f13.f64 = double(float(ctx.f24.f64 / ctx.f13.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
loc_826B619C:
	// fneg f30,f13
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f13,972(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 972);
	ctx.f13.f64 = double(temp.f32);
	// fneg f29,f0
	ctx.f29.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fneg f31,f31
	ctx.f31.u64 = ctx.f31.u64 ^ 0x8000000000000000;
	// fmuls f1,f13,f22
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f22.f64));
	// fmuls f0,f30,f26
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f26.f64));
	// fmadds f0,f31,f28,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f28.f64 + ctx.f0.f64));
	// fmadds f25,f29,f27,f0
	ctx.f25.f64 = double(float(ctx.f29.f64 * ctx.f27.f64 + ctx.f0.f64));
	// bl 0x82a4e118
	ctx.lr = 0x826B61C0;
	sub_82A4E118(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fcmpu cr6,f25,f0
	ctx.cr6.compare(ctx.f25.f64, ctx.f0.f64);
	// ble cr6,0x826b6244
	if (!ctx.cr6.gt) goto loc_826B6244;
	// fneg f0,f31
	ctx.f0.u64 = ctx.f31.u64 ^ 0x8000000000000000;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// fneg f0,f30
	ctx.f0.u64 = ctx.f30.u64 ^ 0x8000000000000000;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fneg f0,f29
	ctx.f0.u64 = ctx.f29.u64 ^ 0x8000000000000000;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,992(r30)
	PPC_STORE_U32(ctx.r30.u32 + 992, ctx.r11.u32);
	// addi r11,r30,992
	ctx.r11.s64 = ctx.r30.s64 + 992;
	// stw r10,1000(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1000, ctx.r10.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,848(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// lwz r10,836(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 836);
	// stw r9,996(r30)
	PPC_STORE_U32(ctx.r30.u32 + 996, ctx.r9.u32);
	// lfs f12,992(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 992);
	ctx.f12.f64 = double(temp.f32);
	// mulli r9,r11,80
	ctx.r9.s64 = ctx.r11.s64 * 80;
	// lfs f11,996(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 996);
	ctx.f11.f64 = double(temp.f32);
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lfs f13,1000(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1000);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmuls f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f12,992(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 992, temp.u32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f11,996(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 996, temp.u32);
	// stfs f0,1000(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1000, temp.u32);
	// stw r8,980(r30)
	PPC_STORE_U32(ctx.r30.u32 + 980, ctx.r8.u32);
	// b 0x826b62b0
	goto loc_826B62B0;
loc_826B6244:
	// fneg f0,f26
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f26.u64 ^ 0x8000000000000000;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fneg f0,f27
	ctx.f0.u64 = ctx.f27.u64 ^ 0x8000000000000000;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fneg f0,f28
	ctx.f0.u64 = ctx.f28.u64 ^ 0x8000000000000000;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,996(r30)
	PPC_STORE_U32(ctx.r30.u32 + 996, ctx.r10.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,1000(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1000, ctx.r11.u32);
	// addi r11,r30,992
	ctx.r11.s64 = ctx.r30.s64 + 992;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,992(r30)
	PPC_STORE_U32(ctx.r30.u32 + 992, ctx.r11.u32);
	// lwz r9,848(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// lfs f0,1000(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1000);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,836(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 836);
	// lfs f12,996(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 996);
	ctx.f12.f64 = double(temp.f32);
	// mulli r9,r9,80
	ctx.r9.s64 = ctx.r9.s64 * 80;
	// lfs f11,992(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 992);
	ctx.f11.f64 = double(temp.f32);
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lfs f13,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,1000(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1000, temp.u32);
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f12,996(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 996, temp.u32);
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f13,992(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 992, temp.u32);
loc_826B62B0:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x82a6177c
	ctx.lr = 0x826B62BC;
	__restfpr_22(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B62D0"))) PPC_WEAK_FUNC(sub_826B62D0);
PPC_FUNC_IMPL(__imp__sub_826B62D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x826B62D8;
	__savegprlr_25(ctx, base);
	// stfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// bl 0x826b4b60
	ctx.lr = 0x826B62F8;
	sub_826B4B60(ctx, base);
	// lfs f0,988(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 988);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,620(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 620);
	// lwz r10,624(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 624);
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// lwz r9,628(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 628);
	// stfs f0,988(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 988, temp.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// bl 0x824090e0
	ctx.lr = 0x826B6324;
	sub_824090E0(ctx, base);
	// li r26,1
	ctx.r26.s64 = 1;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826b63b0
	if (ctx.cr0.eq) goto loc_826B63B0;
	// lwz r11,11024(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11024);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826b63b0
	if (ctx.cr6.eq) goto loc_826B63B0;
	// lwz r11,984(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 984);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,2960
	ctx.r4.s64 = ctx.r11.s64 + 2960;
	// bl 0x82817bb8
	ctx.lr = 0x826B634C;
	sub_82817BB8(ctx, base);
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// addi r11,r31,992
	ctx.r11.s64 = ctx.r31.s64 + 992;
	// lwz r10,836(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 836);
	// mulli r11,r9,80
	ctx.r11.s64 = ctx.r9.s64 * 80;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r9,992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 992, ctx.r9.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 996, ctx.r10.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r10,1000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1000, ctx.r10.u32);
	// lfs f0,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,996(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 996);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,1000(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1000);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,992(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 992);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f12,992(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 992, temp.u32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,1000(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1000, temp.u32);
	// stfs f11,996(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 996, temp.u32);
	// stb r26,1004(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1004, ctx.r26.u8);
	// lfs f0,988(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 988);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// stfs f0,988(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 988, temp.u32);
loc_826B63B0:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,56
	ctx.r11.s64 = 56;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bl 0x826b4d08
	ctx.lr = 0x826B63DC;
	sub_826B4D08(ctx, base);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// lwz r3,816(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// bl 0x827ebf48
	ctx.lr = 0x826B63EC;
	sub_827EBF48(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x826b640c
	if (ctx.cr0.eq) goto loc_826B640C;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,96(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// bl 0x827da008
	ctx.lr = 0x826B6408;
	sub_827DA008(ctx, base);
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_826B640C:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x826b6428
	if (ctx.cr6.eq) goto loc_826B6428;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82643c20
	ctx.lr = 0x826B6420;
	sub_82643C20(ctx, base);
	// lwz r11,1776(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1776);
	// lwz r29,4572(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4572);
loc_826B6428:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// bgt cr6,0x826b64b8
	if (ctx.cr6.gt) goto loc_826B64B8;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x826b64a4
	if (ctx.cr6.eq) goto loc_826B64A4;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,516(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 516);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826B6458;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826b64a4
	if (ctx.cr0.eq) goto loc_826B64A4;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,516(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 516);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826B6474;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,1112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826B6488;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x826b64b8
	if (ctx.cr6.gt) goto loc_826B64B8;
loc_826B64A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x826b5e18
	ctx.lr = 0x826B64B0;
	sub_826B5E18(ctx, base);
	// stb r26,1004(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1004, ctx.r26.u8);
	// b 0x826b650c
	goto loc_826B650C;
loc_826B64B8:
	// lwz r11,984(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 984);
	// stfs f31,964(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 964, temp.u32);
	// stw r30,980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 980, ctx.r30.u32);
	// lbz r11,4624(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4624);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x826b650c
	if (!ctx.cr0.eq) goto loc_826B650C;
	// lbz r11,1004(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1004);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x826b64ec
	if (ctx.cr0.eq) goto loc_826B64EC;
	// lfs f0,988(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 988);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,864(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 864);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x826b650c
	if (!ctx.cr6.gt) goto loc_826B650C;
loc_826B64EC:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f1,860(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 860);
	ctx.f1.f64 = double(temp.f32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x826b4e60
	ctx.lr = 0x826B650C;
	sub_826B4E60(ctx, base);
loc_826B650C:
	// lfs f0,992(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 992);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,996(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 996);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,1000(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1000);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r10,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r10.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r10.u32);
	// lbz r31,1004(r31)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1004);
	// bl 0x824d8e70
	ctx.lr = 0x826B6560;
	sub_824D8E70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B6578"))) PPC_WEAK_FUNC(sub_826B6578);
PPC_FUNC_IMPL(__imp__sub_826B6578) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lwz r11,984(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 984);
	// lfs f0,-27328(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27328);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16540(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16540);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f13,152(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lwz r4,4592(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4592);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x826b6728
	if (ctx.cr6.eq) goto loc_826B6728;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// bl 0x826b62d0
	ctx.lr = 0x826B65C4;
	sub_826B62D0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826b66a8
	if (ctx.cr0.eq) goto loc_826B66A8;
	// lwz r3,984(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 984);
	// bl 0x827e25c8
	ctx.lr = 0x826B65D4;
	sub_827E25C8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f0,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f12,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82817280
	ctx.lr = 0x826B6614;
	sub_82817280(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r31,156
	ctx.r4.s64 = ctx.r31.s64 + 156;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r10.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// lwz r30,816(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// lfs f31,1728(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1728);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x82817bb8
	ctx.lr = 0x826B663C;
	sub_82817BB8(ctx, base);
	// lwz r10,2256(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2256);
	// lfs f12,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lwz r9,2252(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2252);
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// lwz r11,2248(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2248);
	// fmuls f9,f9,f31
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fadds f0,f10,f9
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// stw r9,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r9.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
loc_826B66A8:
	// lwz r10,848(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r11,836(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 836);
	// mulli r10,r10,80
	ctx.r10.s64 = ctx.r10.s64 * 80;
	// lwz r9,816(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f0,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,548(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 548, temp.u32);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// stw r10,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r10.u32);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// stw r10,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r10.u32);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r10,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r10.u32);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r10,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r10.u32);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stw r10,472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 472, ctx.r10.u32);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// stw r10,476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 476, ctx.r10.u32);
	// lfs f0,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1708(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 1708, temp.u32);
	// stfs f0,1736(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 1736, temp.u32);
	// lwz r10,816(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// lwz r9,56(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// stw r9,1820(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1820, ctx.r9.u32);
	// lwz r9,60(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// stw r9,1824(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1824, ctx.r9.u32);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// stw r9,1828(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1828, ctx.r9.u32);
	// lwz r10,816(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// lfs f0,68(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1900(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 1900, temp.u32);
loc_826B6728:
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

__attribute__((alias("__imp__sub_826B6748"))) PPC_WEAK_FUNC(sub_826B6748);
PPC_FUNC_IMPL(__imp__sub_826B6748) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,-20268
	ctx.r3.s64 = ctx.r11.s64 + -20268;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B6758"))) PPC_WEAK_FUNC(sub_826B6758);
PPC_FUNC_IMPL(__imp__sub_826B6758) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,984(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 984);
	// lwz r10,4592(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4592);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826b6780
	if (!ctx.cr6.eq) goto loc_826B6780;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
loc_826B6780:
	// lfs f0,1408(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1408);
	ctx.f0.f64 = double(temp.f32);
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lfs f13,620(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 620);
	ctx.f13.f64 = double(temp.f32);
	// lwz r7,848(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 848);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f13,1412(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1412);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,624(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 624);
	ctx.f12.f64 = double(temp.f32);
	// lwz r9,836(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 836);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f12,1416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1416);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,628(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 628);
	ctx.f10.f64 = double(temp.f32);
	// mulli r11,r7,80
	ctx.r11.s64 = ctx.r7.s64 * 80;
	// fsubs f10,f10,f12
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// lfs f11,908(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 908);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,-32(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// stfs f13,-28(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// stfs f10,-24(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// fmadds f12,f13,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bne cr6,0x826b6810
	if (!ctx.cr6.eq) goto loc_826B6810;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f12,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f10,f12
	ctx.cr6.compare(ctx.f10.f64, ctx.f12.f64);
	// bne cr6,0x826b6848
	if (!ctx.cr6.eq) goto loc_826B6848;
	// lwz r10,-32(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	// lwz r9,-28(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -28);
	// lwz r8,-24(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// stw r10,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r10.u32);
	// lfs f0,-32(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r9.u32);
	// lfs f13,-28(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -28);
	ctx.f13.f64 = double(temp.f32);
	// stw r8,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r8.u32);
	// lfs f12,-24(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	ctx.f12.f64 = double(temp.f32);
	// b 0x826b6848
	goto loc_826B6848;
loc_826B6810:
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f10,16668(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16668);
	ctx.f10.f64 = double(temp.f32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// fcmpu cr6,f12,f10
	ctx.cr6.compare(ctx.f12.f64, ctx.f10.f64);
	// bge cr6,0x826b6834
	if (!ctx.cr6.lt) goto loc_826B6834;
	// lfs f0,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// b 0x826b6848
	goto loc_826B6848;
loc_826B6834:
	// fsqrts f10,f12
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(sqrt(ctx.f12.f64)));
	// lfs f12,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 / ctx.f10.f64));
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
loc_826B6848:
	// lwz r10,816(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 816);
	// lfs f11,852(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 852);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// lfs f10,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lwz r9,2256(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2256);
	// lwz r11,2252(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2252);
	// lwz r10,2248(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2248);
	// stw r9,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r9.u32);
	// lfs f11,-24(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	ctx.f11.f64 = double(temp.f32);
	// fadds f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// stw r11,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r11.u32);
	// lfs f10,-28(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -28);
	ctx.f10.f64 = double(temp.f32);
	// fadds f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// stfs f13,-12(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stw r10,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r10.u32);
	// lfs f13,-32(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// stfs f12,-8(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lwz r10,-8(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r9,-16(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B68C0"))) PPC_WEAK_FUNC(sub_826B68C0);
PPC_FUNC_IMPL(__imp__sub_826B68C0) {
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
	// li r3,1012
	ctx.r3.s64 = 1012;
	// bl 0x82833108
	ctx.lr = 0x826B68D4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826b68e4
	if (ctx.cr0.eq) goto loc_826B68E4;
	// bl 0x826b44d0
	ctx.lr = 0x826B68E0;
	sub_826B44D0(ctx, base);
	// b 0x826b68e8
	goto loc_826B68E8;
loc_826B68E4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826B68E8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B68F8"))) PPC_WEAK_FUNC(sub_826B68F8);
PPC_FUNC_IMPL(__imp__sub_826B68F8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1012
	ctx.r3.s64 = 1012;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B6900"))) PPC_WEAK_FUNC(sub_826B6900);
PPC_FUNC_IMPL(__imp__sub_826B6900) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,23920(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23920);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826b6940
	if (!ctx.cr0.eq) goto loc_826B6940;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// stw r11,23920(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23920, ctx.r11.u32);
	// addi r3,r9,-20420
	ctx.r3.s64 = ctx.r9.s64 + -20420;
	// bl 0x82816528
	ctx.lr = 0x826B6938;
	sub_82816528(ctx, base);
	// stw r3,23916(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23916, ctx.r3.u32);
	// b 0x826b6944
	goto loc_826B6944;
loc_826B6940:
	// lwz r3,23916(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23916);
loc_826B6944:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B6958"))) PPC_WEAK_FUNC(sub_826B6958);
PPC_FUNC_IMPL(__imp__sub_826B6958) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826b69a8
	ctx.lr = 0x826B6978;
	sub_826B69A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826B698C;
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

__attribute__((alias("__imp__sub_826B69A8"))) PPC_WEAK_FUNC(sub_826B69A8);
PPC_FUNC_IMPL(__imp__sub_826B69A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,23924
	ctx.r31.s64 = ctx.r11.s64 + 23924;
	// lwz r11,23928(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23928);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826b69f0
	if (!ctx.cr0.eq) goto loc_826B69F0;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-20120
	ctx.r9.s64 = ctx.r9.s64 + -20120;
	// stw r11,23928(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23928, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,28688
	ctx.r3.s64 = ctx.r11.s64 + 28688;
	// bl 0x82a4c758
	ctx.lr = 0x826B69F0;
	sub_82A4C758(ctx, base);
loc_826B69F0:
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

__attribute__((alias("__imp__sub_826B6A08"))) PPC_WEAK_FUNC(sub_826B6A08);
PPC_FUNC_IMPL(__imp__sub_826B6A08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,-20100
	ctx.r3.s64 = ctx.r11.s64 + -20100;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B6A18"))) PPC_WEAK_FUNC(sub_826B6A18);
PPC_FUNC_IMPL(__imp__sub_826B6A18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x826b6a50
	if (ctx.cr6.eq) goto loc_826B6A50;
	// bl 0x826b8780
	ctx.lr = 0x826B6A40;
	sub_826B8780(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826b6a50
	if (!ctx.cr6.eq) goto loc_826B6A50;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826b6a5c
	goto loc_826B6A5C;
loc_826B6A50:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826a0e90
	ctx.lr = 0x826B6A5C;
	sub_826A0E90(ctx, base);
loc_826B6A5C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B6A78"))) PPC_WEAK_FUNC(sub_826B6A78);
PPC_FUNC_IMPL(__imp__sub_826B6A78) {
	PPC_FUNC_PROLOGUE();
	// b 0x826b8780
	sub_826B8780(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B6A80"))) PPC_WEAK_FUNC(sub_826B6A80);
PPC_FUNC_IMPL(__imp__sub_826B6A80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,1044
	ctx.r3.s64 = 1044;
	// bl 0x82833108
	ctx.lr = 0x826B6A9C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826b6ab0
	if (ctx.cr0.eq) goto loc_826B6AB0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826b6b28
	ctx.lr = 0x826B6AAC;
	sub_826B6B28(ctx, base);
	// b 0x826b6ab4
	goto loc_826B6AB4;
loc_826B6AB0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826B6AB4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B6AC8"))) PPC_WEAK_FUNC(sub_826B6AC8);
PPC_FUNC_IMPL(__imp__sub_826B6AC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826b8780
	ctx.lr = 0x826B6AE8;
	sub_826B8780(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826b6af8
	if (!ctx.cr6.eq) goto loc_826B6AF8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x826b6b10
	goto loc_826B6B10;
loc_826B6AF8:
	// bl 0x826a1370
	ctx.lr = 0x826B6AFC;
	sub_826A1370(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x826b6b10
	if (ctx.cr6.eq) goto loc_826B6B10;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8269fac8
	ctx.lr = 0x826B6B10;
	sub_8269FAC8(ctx, base);
loc_826B6B10:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B6B28"))) PPC_WEAK_FUNC(sub_826B6B28);
PPC_FUNC_IMPL(__imp__sub_826B6B28) {
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
	// bl 0x826a10f0
	ctx.lr = 0x826B6B48;
	sub_826A10F0(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r31,852
	ctx.r3.s64 = ctx.r31.s64 + 852;
	// addi r11,r11,-19960
	ctx.r11.s64 = ctx.r11.s64 + -19960;
	// addi r4,r30,852
	ctx.r4.s64 = ctx.r30.s64 + 852;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82873b58
	ctx.lr = 0x826B6B60;
	sub_82873B58(ctx, base);
	// addi r3,r31,876
	ctx.r3.s64 = ctx.r31.s64 + 876;
	// addi r4,r30,876
	ctx.r4.s64 = ctx.r30.s64 + 876;
	// bl 0x82873b58
	ctx.lr = 0x826B6B6C;
	sub_82873B58(ctx, base);
	// lwz r11,900(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 900);
	// addi r3,r31,964
	ctx.r3.s64 = ctx.r31.s64 + 964;
	// addi r4,r30,964
	ctx.r4.s64 = ctx.r30.s64 + 964;
	// stw r11,900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 900, ctx.r11.u32);
	// lfs f0,904(r30)
	ctx.fpscr.disableFlushMode();
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
	// lwz r11,928(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 928);
	// stw r11,928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 928, ctx.r11.u32);
	// lwz r11,932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 932);
	// stw r11,932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 932, ctx.r11.u32);
	// lbz r11,936(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 936);
	// stb r11,936(r31)
	PPC_STORE_U8(ctx.r31.u32 + 936, ctx.r11.u8);
	// lwz r11,940(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 940);
	// stw r11,940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 940, ctx.r11.u32);
	// lwz r11,944(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 944);
	// stw r11,944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 944, ctx.r11.u32);
	// lwz r11,948(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 948);
	// stw r11,948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 948, ctx.r11.u32);
	// lfs f0,952(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 952);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,952(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 952, temp.u32);
	// lfs f0,956(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 956);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,956(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 956, temp.u32);
	// lbz r11,960(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 960);
	// stb r11,960(r31)
	PPC_STORE_U8(ctx.r31.u32 + 960, ctx.r11.u8);
	// bl 0x82873b58
	ctx.lr = 0x826B6BF8;
	sub_82873B58(ctx, base);
	// addi r3,r31,988
	ctx.r3.s64 = ctx.r31.s64 + 988;
	// addi r4,r30,988
	ctx.r4.s64 = ctx.r30.s64 + 988;
	// bl 0x82873b58
	ctx.lr = 0x826B6C04;
	sub_82873B58(ctx, base);
	// lfs f0,1012(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1012);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1012(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1012, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,1016(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1016);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1016(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1016, temp.u32);
	// lfs f0,1020(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1020);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1020(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1020, temp.u32);
	// lfs f0,1024(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1024);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1024(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1024, temp.u32);
	// lfs f0,1028(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1028);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1028(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1028, temp.u32);
	// lfs f0,1032(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1032);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1032(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1032, temp.u32);
	// lwz r11,1036(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1036);
	// stw r11,1036(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1036, ctx.r11.u32);
	// lwz r11,1040(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1040);
	// stw r11,1040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1040, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B6C60"))) PPC_WEAK_FUNC(sub_826B6C60);
PPC_FUNC_IMPL(__imp__sub_826B6C60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,988
	ctx.r3.s64 = ctx.r31.s64 + 988;
	// bl 0x8239d768
	ctx.lr = 0x826B6C84;
	sub_8239D768(ctx, base);
	// addi r3,r31,964
	ctx.r3.s64 = ctx.r31.s64 + 964;
	// bl 0x8239d768
	ctx.lr = 0x826B6C8C;
	sub_8239D768(ctx, base);
	// addi r3,r31,876
	ctx.r3.s64 = ctx.r31.s64 + 876;
	// bl 0x8239d768
	ctx.lr = 0x826B6C94;
	sub_8239D768(ctx, base);
	// addi r3,r31,852
	ctx.r3.s64 = ctx.r31.s64 + 852;
	// bl 0x8239d768
	ctx.lr = 0x826B6C9C;
	sub_8239D768(ctx, base);
	// addi r3,r31,824
	ctx.r3.s64 = ctx.r31.s64 + 824;
	// bl 0x826a1240
	ctx.lr = 0x826B6CA4;
	sub_826A1240(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,22304
	ctx.r11.s64 = ctx.r11.s64 + 22304;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82833238
	ctx.lr = 0x826B6CB8;
	sub_82833238(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826b6cc8
	if (ctx.cr0.eq) goto loc_826B6CC8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x826B6CC8;
	sub_82332DB8(ctx, base);
loc_826B6CC8:
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

__attribute__((alias("__imp__sub_826B6CE8"))) PPC_WEAK_FUNC(sub_826B6CE8);
PPC_FUNC_IMPL(__imp__sub_826B6CE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x826B6CF0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x827ee8f8
	ctx.lr = 0x826B6CFC;
	sub_827EE8F8(ctx, base);
	// li r6,80
	ctx.r6.s64 = 80;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// stw r6,828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 828, ctx.r6.u32);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r8,-27300
	ctx.r7.s64 = ctx.r8.s64 + -27300;
	// lis r3,-32215
	ctx.r3.s64 = -2111242240;
	// stw r11,832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 832, ctx.r11.u32);
	// addi r5,r9,32752
	ctx.r5.s64 = ctx.r9.s64 + 32752;
	// stw r11,836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 836, ctx.r11.u32);
	// lis r4,-31961
	ctx.r4.s64 = -2094596096;
	// stw r11,840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 840, ctx.r11.u32);
	// lis r6,-32215
	ctx.r6.s64 = -2111242240;
	// stw r11,844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 844, ctx.r11.u32);
	// addi r30,r10,-19960
	ctx.r30.s64 = ctx.r10.s64 + -19960;
	// stw r11,824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 824, ctx.r11.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// lfs f12,904(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 904);
	ctx.f12.f64 = double(temp.f32);
	// lis r29,-32215
	ctx.r29.s64 = -2111242240;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r10,856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 856, ctx.r10.u32);
	// lis r30,-32244
	ctx.r30.s64 = -2113142784;
	// stw r11,860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 860, ctx.r11.u32);
	// lis r28,-31963
	ctx.r28.s64 = -2094727168;
	// stw r11,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r11.u32);
	// lfs f10,-1984(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -1984);
	ctx.f10.f64 = double(temp.f32);
	// stw r11,868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 868, ctx.r11.u32);
	// lfs f0,-28(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -28);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 872, ctx.r11.u32);
	// lfs f9,-36(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -36);
	ctx.f9.f64 = double(temp.f32);
	// stw r11,852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 852, ctx.r11.u32);
	// lfs f13,-28788(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -28788);
	ctx.f13.f64 = double(temp.f32);
	// stw r10,880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 880, ctx.r10.u32);
	// lfs f8,19132(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 19132);
	ctx.f8.f64 = double(temp.f32);
	// stw r11,884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 884, ctx.r11.u32);
	// lfs f11,32752(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32752);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 888, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 892, ctx.r11.u32);
	// stw r11,896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 896, ctx.r11.u32);
	// stw r11,876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 876, ctx.r11.u32);
	// stfs f10,904(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 904, temp.u32);
	// stfs f9,908(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 908, temp.u32);
	// stfs f0,912(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 912, temp.u32);
	// stfs f13,916(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 916, temp.u32);
	// stfs f8,920(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 920, temp.u32);
	// stfs f12,924(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 924, temp.u32);
	// stfs f11,928(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 928, temp.u32);
	// stfs f11,932(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 932, temp.u32);
	// lfs f10,908(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 908);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,952(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 952, temp.u32);
	// stw r10,968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 968, ctx.r10.u32);
	// stw r11,972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 972, ctx.r11.u32);
	// lfs f11,-27300(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -27300);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 976, ctx.r11.u32);
	// lfs f10,30996(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 30996);
	ctx.f10.f64 = double(temp.f32);
	// stw r11,980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 980, ctx.r11.u32);
	// lfs f9,23664(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 23664);
	ctx.f9.f64 = double(temp.f32);
	// stw r11,984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 984, ctx.r11.u32);
	// stw r11,964(r31)
	PPC_STORE_U32(ctx.r31.u32 + 964, ctx.r11.u32);
	// stw r10,992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 992, ctx.r10.u32);
	// stw r11,996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 996, ctx.r11.u32);
	// stw r11,1000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1000, ctx.r11.u32);
	// stw r11,1004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1004, ctx.r11.u32);
	// stw r11,1008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1008, ctx.r11.u32);
	// stw r11,988(r31)
	PPC_STORE_U32(ctx.r31.u32 + 988, ctx.r11.u32);
	// stfs f12,1012(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1012, temp.u32);
	// stfs f11,1016(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1016, temp.u32);
	// stw r11,1036(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1036, ctx.r11.u32);
	// stfs f13,1020(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1020, temp.u32);
	// stb r11,820(r31)
	PPC_STORE_U8(ctx.r31.u32 + 820, ctx.r11.u8);
	// stfs f0,1024(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1024, temp.u32);
	// stfs f10,1028(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1028, temp.u32);
	// stfs f9,1032(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1032, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B6E30"))) PPC_WEAK_FUNC(sub_826B6E30);
PPC_FUNC_IMPL(__imp__sub_826B6E30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r31,816(r30)
	PPC_STORE_U32(ctx.r30.u32 + 816, ctx.r31.u32);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826B6E60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x826a81b0
	ctx.lr = 0x826B6E64;
	sub_826A81B0(ctx, base);
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
	ctx.lr = 0x826B6E7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826b6e88
	if (!ctx.cr0.eq) goto loc_826B6E88;
	// li r31,0
	ctx.r31.s64 = 0;
loc_826B6E88:
	// stw r31,900(r30)
	PPC_STORE_U32(ctx.r30.u32 + 900, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B6EA8"))) PPC_WEAK_FUNC(sub_826B6EA8);
PPC_FUNC_IMPL(__imp__sub_826B6EA8) {
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
	// lwz r30,900(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 900);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827e25c8
	ctx.lr = 0x826B6ECC;
	sub_827E25C8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f0,628(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 628);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f13,620(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 620);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r31,940
	ctx.r3.s64 = ctx.r31.s64 + 940;
	// lfs f12,624(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 624);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f10,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lfs f1,16668(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16668);
	ctx.f1.f64 = double(temp.f32);
	// stw r9,948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 948, ctx.r9.u32);
	// stw r8,940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 940, ctx.r8.u32);
	// stw r11,944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 944, ctx.r11.u32);
	// bl 0x82332e18
	ctx.lr = 0x826B6F28;
	sub_82332E18(ctx, base);
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

__attribute__((alias("__imp__sub_826B6F40"))) PPC_WEAK_FUNC(sub_826B6F40);
PPC_FUNC_IMPL(__imp__sub_826B6F40) {
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
	// stb r4,820(r31)
	PPC_STORE_U8(ctx.r31.u32 + 820, ctx.r4.u8);
	// lwz r30,900(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 900);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827e25c8
	ctx.lr = 0x826B6F68;
	sub_827E25C8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f0,628(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 628);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f13,620(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 620);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r31,940
	ctx.r3.s64 = ctx.r31.s64 + 940;
	// lfs f12,624(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 624);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f10,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lfs f1,16668(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16668);
	ctx.f1.f64 = double(temp.f32);
	// stw r9,948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 948, ctx.r9.u32);
	// stw r8,940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 940, ctx.r8.u32);
	// stw r11,944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 944, ctx.r11.u32);
	// bl 0x82332e18
	ctx.lr = 0x826B6FC4;
	sub_82332E18(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,936(r31)
	PPC_STORE_U8(ctx.r31.u32 + 936, ctx.r11.u8);
	// lfs f0,908(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,952(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 952, temp.u32);
	// lwz r10,900(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 900);
	// lfs f0,1440(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 1440);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,1036(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1036, ctx.r11.u32);
	// stfs f0,956(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 956, temp.u32);
	// stw r11,1040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1040, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_826B7008"))) PPC_WEAK_FUNC(sub_826B7008);
PPC_FUNC_IMPL(__imp__sub_826B7008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x826B7010;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// addi r4,r3,964
	ctx.r4.s64 = ctx.r3.s64 + 964;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82873b58
	ctx.lr = 0x826B7024;
	sub_82873B58(ctx, base);
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addic. r28,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r28.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r25,r10,-1
	ctx.r25.s64 = ctx.r10.s64 + -1;
	// blt 0x826b709c
	if (ctx.cr0.lt) goto loc_826B709C;
	// mulli r27,r28,12
	ctx.r27.s64 = ctx.r28.s64 * 12;
loc_826B703C:
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// add r3,r27,r11
	ctx.r3.u64 = ctx.r27.u64 + ctx.r11.u64;
	// bl 0x8281d960
	ctx.lr = 0x826B7048;
	sub_8281D960(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x826b7090
	if (ctx.cr0.eq) goto loc_826B7090;
	// addic. r31,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r31.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x826b7090
	if (ctx.cr0.lt) goto loc_826B7090;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_826B7064:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826B707C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826b70a4
	if (!ctx.cr0.eq) goto loc_826B70A4;
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
	// bge 0x826b7064
	if (!ctx.cr0.lt) goto loc_826B7064;
loc_826B7090:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r27,r27,-12
	ctx.r27.s64 = ctx.r27.s64 + -12;
	// bge 0x826b703c
	if (!ctx.cr0.lt) goto loc_826B703C;
loc_826B709C:
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x826b70a8
	goto loc_826B70A8;
loc_826B70A4:
	// li r31,1
	ctx.r31.s64 = 1;
loc_826B70A8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8239d768
	ctx.lr = 0x826B70B0;
	sub_8239D768(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B70C0"))) PPC_WEAK_FUNC(sub_826B70C0);
PPC_FUNC_IMPL(__imp__sub_826B70C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x826B70C8;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82a61734
	ctx.lr = 0x826B70D0;
	__savefpr_23(ctx, base);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lwz r11,2324(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2324);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826b7100
	if (ctx.cr6.eq) goto loc_826B7100;
	// lwz r11,848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r10,888(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 888);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f1.f64 = double(temp.f32);
	// b 0x826b7470
	goto loc_826B7470;
loc_826B7100:
	// lwz r11,900(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 900);
	// lbz r10,960(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 960);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r30,4596(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4596);
	// beq 0x826b745c
	if (ctx.cr0.eq) goto loc_826B745C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lwz r11,1452(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1452);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826B712C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,256(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// beq cr6,0x826b714c
	if (ctx.cr6.eq) goto loc_826B714C;
	// lwz r10,864(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 864);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f31,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f31.f64 = double(temp.f32);
	// b 0x826b715c
	goto loc_826B715C;
loc_826B714C:
	// lwz r10,836(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 836);
	// mulli r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 * 80;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f31,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f31.f64 = double(temp.f32);
loc_826B715C:
	// lwz r11,900(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 900);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// addi r4,r11,1408
	ctx.r4.s64 = ctx.r11.s64 + 1408;
	// bl 0x82818dc8
	ctx.lr = 0x826B716C;
	sub_82818DC8(ctx, base);
	// lwz r11,1412(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1412);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// addi r4,r11,620
	ctx.r4.s64 = ctx.r11.s64 + 620;
	// bl 0x827d9878
	ctx.lr = 0x826B717C;
	sub_827D9878(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// ble cr6,0x826b7188
	if (!ctx.cr6.gt) goto loc_826B7188;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
loc_826B7188:
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826b7008
	ctx.lr = 0x826B7194;
	sub_826B7008(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826b7438
	if (!ctx.cr0.eq) goto loc_826B7438;
	// lwz r11,256(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// addic. r27,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r27.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// blt 0x826b7418
	if (ctx.cr0.lt) goto loc_826B7418;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mulli r28,r27,12
	ctx.r28.s64 = ctx.r27.s64 * 12;
	// lfs f23,30996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30996);
	ctx.f23.f64 = double(temp.f32);
loc_826B71B4:
	// lwz r11,252(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// lbz r10,960(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 960);
	// add r29,r28,r11
	ctx.r29.u64 = ctx.r28.u64 + ctx.r11.u64;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// beq 0x826b71f0
	if (ctx.cr0.eq) goto loc_826B71F0;
	// bl 0x8281d960
	ctx.lr = 0x826B71D0;
	sub_8281D960(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x826b73e8
	if (ctx.cr0.eq) goto loc_826B73E8;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// lwz r11,632(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 632);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826B71EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
loc_826B71F0:
	// bl 0x8281dc68
	ctx.lr = 0x826B71F4;
	sub_8281DC68(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x826b73e8
	if (ctx.cr6.eq) goto loc_826B73E8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8281b988
	ctx.lr = 0x826B720C;
	sub_8281B988(ctx, base);
	// lbz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 960);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x826b724c
	if (ctx.cr0.eq) goto loc_826B724C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8281d960
	ctx.lr = 0x826B7220;
	sub_8281D960(ctx, base);
	// lwz r10,620(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 620);
	// lwz r11,624(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 624);
	// lwz r9,628(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 628);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lfs f24,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f24.f64 = double(temp.f32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lfs f25,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f25.f64 = double(temp.f32);
	// stfs f25,84(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stfs f24,80(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// b 0x826b7254
	goto loc_826B7254;
loc_826B724C:
	// lfs f25,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f25.f64 = double(temp.f32);
	// lfs f24,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f24.f64 = double(temp.f32);
loc_826B7254:
	// lfs f13,316(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 316);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lfs f0,328(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 328);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,324(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 324);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,336(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 336);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f12,332(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 332);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,320(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 320);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f26,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f26.f64 = double(temp.f32);
	// fmuls f0,f0,f23
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f23.f64));
	// fmuls f13,f13,f23
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f23.f64));
	// fmuls f12,f12,f23
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f23.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fsqrts f30,f0
	ctx.f30.f64 = double(float(sqrt(ctx.f0.f64)));
	// fadds f29,f30,f24
	ctx.f29.f64 = double(float(ctx.f30.f64 + ctx.f24.f64));
	// stfs f29,192(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// fadds f28,f30,f25
	ctx.f28.f64 = double(float(ctx.f30.f64 + ctx.f25.f64));
	// stfs f28,196(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// fadds f27,f26,f30
	ctx.f27.f64 = double(float(ctx.f26.f64 + ctx.f30.f64));
	// stfs f27,200(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// bl 0x827d9878
	ctx.lr = 0x826B72BC;
	sub_827D9878(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// ble cr6,0x826b72c8
	if (!ctx.cr6.gt) goto loc_826B72C8;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
loc_826B72C8:
	// fneg f30,f30
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = ctx.f30.u64 ^ 0x8000000000000000;
	// stfs f29,144(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f28,148(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// fadds f0,f30,f26
	ctx.f0.f64 = double(float(ctx.f30.f64 + ctx.f26.f64));
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// bl 0x827d9878
	ctx.lr = 0x826B72E8;
	sub_827D9878(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// ble cr6,0x826b72f4
	if (!ctx.cr6.gt) goto loc_826B72F4;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
loc_826B72F4:
	// fadds f0,f30,f25
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 + ctx.f25.f64));
	// stfs f29,208(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f27,216(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// stfs f0,212(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x827d9878
	ctx.lr = 0x826B7310;
	sub_827D9878(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// ble cr6,0x826b731c
	if (!ctx.cr6.gt) goto loc_826B731C;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
loc_826B731C:
	// fadds f0,f30,f25
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 + ctx.f25.f64));
	// stfs f29,176(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// fadds f13,f30,f26
	ctx.f13.f64 = double(float(ctx.f30.f64 + ctx.f26.f64));
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f13,184(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x827d9878
	ctx.lr = 0x826B733C;
	sub_827D9878(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// ble cr6,0x826b7348
	if (!ctx.cr6.gt) goto loc_826B7348;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
loc_826B7348:
	// fadds f0,f30,f24
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 + ctx.f24.f64));
	// stfs f28,116(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f27,120(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x827d9878
	ctx.lr = 0x826B7364;
	sub_827D9878(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// ble cr6,0x826b7370
	if (!ctx.cr6.gt) goto loc_826B7370;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
loc_826B7370:
	// fadds f0,f30,f24
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 + ctx.f24.f64));
	// stfs f28,228(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// fadds f13,f30,f26
	ctx.f13.f64 = double(float(ctx.f30.f64 + ctx.f26.f64));
	// stfs f0,224(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stfs f13,232(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x827d9878
	ctx.lr = 0x826B7390;
	sub_827D9878(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// ble cr6,0x826b739c
	if (!ctx.cr6.gt) goto loc_826B739C;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
loc_826B739C:
	// fadds f0,f30,f24
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 + ctx.f24.f64));
	// stfs f27,136(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fadds f13,f30,f25
	ctx.f13.f64 = double(float(ctx.f30.f64 + ctx.f25.f64));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x827d9878
	ctx.lr = 0x826B73BC;
	sub_827D9878(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// ble cr6,0x826b73c8
	if (!ctx.cr6.gt) goto loc_826B73C8;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
loc_826B73C8:
	// fadds f0,f30,f24
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 + ctx.f24.f64));
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fadds f0,f30,f25
	ctx.f0.f64 = double(float(ctx.f30.f64 + ctx.f25.f64));
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fadds f0,f30,f26
	ctx.f0.f64 = double(float(ctx.f30.f64 + ctx.f26.f64));
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// b 0x826b73f8
	goto loc_826B73F8;
loc_826B73E8:
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8281d9b0
	ctx.lr = 0x826B73F4;
	sub_8281D9B0(ctx, base);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
loc_826B73F8:
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x827d9878
	ctx.lr = 0x826B7400;
	sub_827D9878(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// ble cr6,0x826b740c
	if (!ctx.cr6.gt) goto loc_826B740C;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
loc_826B740C:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r28,r28,-12
	ctx.r28.s64 = ctx.r28.s64 + -12;
	// bge 0x826b71b4
	if (!ctx.cr0.lt) goto loc_826B71B4;
loc_826B7418:
	// lwz r11,848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r10,888(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 888);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x826b744c
	if (!ctx.cr6.gt) goto loc_826B744C;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
	// b 0x826b744c
	goto loc_826B744C;
loc_826B7438:
	// lwz r11,848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r10,836(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 836);
	// mulli r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 * 80;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f31,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f31.f64 = double(temp.f32);
loc_826B744C:
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82400f38
	ctx.lr = 0x826B7454;
	sub_82400F38(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// b 0x826b7470
	goto loc_826B7470;
loc_826B745C:
	// lwz r10,848(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r11,836(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 836);
	// mulli r10,r10,80
	ctx.r10.s64 = ctx.r10.s64 * 80;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f1,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
loc_826B7470:
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82a61780
	ctx.lr = 0x826B747C;
	__restfpr_23(ctx, base);
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B7480"))) PPC_WEAK_FUNC(sub_826B7480);
PPC_FUNC_IMPL(__imp__sub_826B7480) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x826B7488;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lbz r11,960(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 960);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x826b74cc
	if (ctx.cr0.eq) goto loc_826B74CC;
	// bl 0x8281d960
	ctx.lr = 0x826B74AC;
	sub_8281D960(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x826b7504
	if (ctx.cr0.eq) goto loc_826B7504;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,632(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 632);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826B74C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
loc_826B74CC:
	// bl 0x8281dc68
	ctx.lr = 0x826B74D0;
	sub_8281DC68(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_826B74D4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8281d960
	ctx.lr = 0x826B74DC;
	sub_8281D960(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826b750c
	if (ctx.cr6.eq) goto loc_826B750C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8281b988
	ctx.lr = 0x826B74F4;
	sub_8281B988(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x826b7524
	goto loc_826B7524;
loc_826B7504:
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x826b74d4
	goto loc_826B74D4;
loc_826B750C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8281d9b0
	ctx.lr = 0x826B7518;
	sub_8281D9B0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_826B7524:
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// beq cr6,0x826b75ac
	if (ctx.cr6.eq) goto loc_826B75AC;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,572(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 572);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826B754C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826b7578
	if (ctx.cr0.eq) goto loc_826B7578;
	// lwz r11,1604(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1604);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826b7578
	if (ctx.cr6.eq) goto loc_826B7578;
	// lwz r10,620(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 620);
	// lwz r9,624(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	// lwz r11,628(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 628);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
loc_826B7578:
	// lbz r11,960(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 960);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x826b75ac
	if (ctx.cr0.eq) goto loc_826B75AC;
	// lwz r10,624(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 624);
	// lwz r11,620(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 620);
	// lwz r9,628(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 628);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lfs f13,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
loc_826B75AC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B75B8"))) PPC_WEAK_FUNC(sub_826B75B8);
PPC_FUNC_IMPL(__imp__sub_826B75B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x826B75C0;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82a61724
	ctx.lr = 0x826B75C8;
	__savefpr_19(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r11,900(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 900);
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,4592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4592);
	// lwz r10,620(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 620);
	// lwz r9,624(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	// lwz r11,628(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 628);
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// bl 0x826b7480
	ctx.lr = 0x826B760C;
	sub_826B7480(ctx, base);
	// lfs f21,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f21.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f20,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f20.f64 = double(temp.f32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lfs f19,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f19.f64 = double(temp.f32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f21
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f21.f64));
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f13,f20
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f20.f64));
	// fsubs f12,f12,f19
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f19.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// lfs f27,16668(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16668);
	ctx.f27.f64 = double(temp.f32);
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// bl 0x82332e18
	ctx.lr = 0x826B7668;
	sub_82332E18(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lfs f31,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f31.f64 = double(temp.f32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lfs f30,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f30.f64 = double(temp.f32);
	// li r28,1
	ctx.r28.s64 = 1;
	// lfs f29,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f29.f64 = double(temp.f32);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// lfs f23,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f23.f64 = double(temp.f32);
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// lfs f24,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f24.f64 = double(temp.f32);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lfs f26,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f26.f64 = double(temp.f32);
	// lfs f25,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f25.f64 = double(temp.f32);
	// lfs f28,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f28.f64 = double(temp.f32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// lfs f22,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f22.f64 = double(temp.f32);
	// ble cr6,0x826b778c
	if (!ctx.cr6.gt) goto loc_826B778C;
	// li r29,12
	ctx.r29.s64 = 12;
loc_826B76B8:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// add r5,r29,r11
	ctx.r5.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x826b7480
	ctx.lr = 0x826B76CC;
	sub_826B7480(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// fmr f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f27.f64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
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
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fadds f30,f30,f13
	ctx.f30.f64 = double(float(ctx.f30.f64 + ctx.f13.f64));
	// fadds f31,f31,f12
	ctx.f31.f64 = double(float(ctx.f31.f64 + ctx.f12.f64));
	// fsubs f11,f0,f21
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f21.f64));
	// stfs f11,128(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fsubs f11,f13,f20
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f20.f64));
	// stfs f11,132(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fsubs f11,f12,f19
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f19.f64));
	// stfs f11,136(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fadds f29,f29,f0
	ctx.f29.f64 = double(float(ctx.f29.f64 + ctx.f0.f64));
	// bl 0x82332e18
	ctx.lr = 0x826B7724;
	sub_82332E18(ctx, base);
	// lfs f0,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// ble cr6,0x826b7734
	if (!ctx.cr6.gt) goto loc_826B7734;
	// fmr f28,f0
	ctx.f28.f64 = ctx.f0.f64;
loc_826B7734:
	// lfs f12,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f25
	ctx.cr6.compare(ctx.f12.f64, ctx.f25.f64);
	// ble cr6,0x826b7744
	if (!ctx.cr6.gt) goto loc_826B7744;
	// fmr f25,f12
	ctx.f25.f64 = ctx.f12.f64;
loc_826B7744:
	// lfs f13,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f26
	ctx.cr6.compare(ctx.f13.f64, ctx.f26.f64);
	// ble cr6,0x826b7754
	if (!ctx.cr6.gt) goto loc_826B7754;
	// fmr f26,f13
	ctx.f26.f64 = ctx.f13.f64;
loc_826B7754:
	// fcmpu cr6,f0,f22
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f22.f64);
	// bge cr6,0x826b7760
	if (!ctx.cr6.lt) goto loc_826B7760;
	// fmr f22,f0
	ctx.f22.f64 = ctx.f0.f64;
loc_826B7760:
	// fcmpu cr6,f12,f23
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f23.f64);
	// bge cr6,0x826b776c
	if (!ctx.cr6.lt) goto loc_826B776C;
	// fmr f23,f12
	ctx.f23.f64 = ctx.f12.f64;
loc_826B776C:
	// fcmpu cr6,f13,f24
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f24.f64);
	// bge cr6,0x826b7778
	if (!ctx.cr6.lt) goto loc_826B7778;
	// fmr f24,f13
	ctx.f24.f64 = ctx.f13.f64;
loc_826B7778:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826b76b8
	if (ctx.cr6.lt) goto loc_826B76B8;
loc_826B778C:
	// lwa r11,16(r31)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 16));
	// fadds f12,f22,f28
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f22.f64 + ctx.f28.f64));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// fadds f11,f23,f25
	ctx.f11.f64 = double(float(ctx.f23.f64 + ctx.f25.f64));
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// fadds f10,f24,f26
	ctx.f10.f64 = double(float(ctx.f24.f64 + ctx.f26.f64));
	// frsp f9,f0
	ctx.f9.f64 = double(float(ctx.f0.f64));
	// lfs f0,30996(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 30996);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,128(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lfs f13,908(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f11,f0
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f12,132(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fdivs f0,f13,f9
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f9.f64));
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r7,136(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// fmuls f13,f31,f0
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmuls f13,f0,f29
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f0,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lwz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r6,116(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r9,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r9.u32);
	// stw r6,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r6.u32);
	// stw r8,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r8.u32);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// stw r10,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r10.u32);
	// stw r7,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r7.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82a61770
	ctx.lr = 0x826B782C;
	__restfpr_19(ctx, base);
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B7830"))) PPC_WEAK_FUNC(sub_826B7830);
PPC_FUNC_IMPL(__imp__sub_826B7830) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x826B7838;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// stw r29,1036(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1036, ctx.r29.u32);
	// lwz r25,16(r30)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x826b78c8
	if (!ctx.cr6.gt) goto loc_826B78C8;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
loc_826B7864:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x8281d960
	ctx.lr = 0x826B7870;
	sub_8281D960(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x824381f0
	ctx.lr = 0x826B7878;
	sub_824381F0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826b789c
	if (ctx.cr0.eq) goto loc_826B789C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,1112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826B7894;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt 0x826b78b0
	if (ctx.cr0.gt) goto loc_826B78B0;
loc_826B789C:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,12
	ctx.r27.s64 = ctx.r27.s64 + 12;
	// cmpw cr6,r26,r25
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x826b7864
	if (ctx.cr6.lt) goto loc_826B7864;
	// b 0x826b78c8
	goto loc_826B78C8;
loc_826B78B0:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x826b78c0
	if (ctx.cr6.eq) goto loc_826B78C0;
	// lwz r11,80(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 80);
	// b 0x826b78c4
	goto loc_826B78C4;
loc_826B78C0:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_826B78C4:
	// stw r11,1036(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1036, ctx.r11.u32);
loc_826B78C8:
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,900(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 900);
	// stw r29,1040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1040, ctx.r29.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stb r10,936(r31)
	PPC_STORE_U8(ctx.r31.u32 + 936, ctx.r10.u8);
	// addi r26,r11,1408
	ctx.r26.s64 = ctx.r11.s64 + 1408;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r11,4556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4556);
	// lwz r11,1408(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1408);
	// ld r11,460(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 460);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfs f2,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x828191b8
	ctx.lr = 0x826B7900;
	sub_828191B8(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826b7954
	if (!ctx.cr6.gt) goto loc_826B7954;
	// addi r28,r31,928
	ctx.r28.s64 = ctx.r31.s64 + 928;
loc_826B7914:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// add r5,r11,r29
	ctx.r5.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x826b7480
	ctx.lr = 0x826B7928;
	sub_826B7480(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x827d98c0
	ctx.lr = 0x826B7938;
	sub_827D98C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826b7954
	if (!ctx.cr0.eq) goto loc_826B7954;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826b7914
	if (ctx.cr6.lt) goto loc_826B7914;
loc_826B7954:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826b75b8
	ctx.lr = 0x826B7968;
	sub_826B75B8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82817280
	ctx.lr = 0x826B7974;
	sub_82817280(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82648440
	ctx.lr = 0x826B7980;
	sub_82648440(ctx, base);
	// lwz r30,900(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 900);
	// lbz r11,4624(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4624);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x826b79ac
	if (!ctx.cr0.eq) goto loc_826B79AC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,4551
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4551, ctx.xer);
	// ble cr6,0x826b79ac
	if (!ctx.cr6.gt) goto loc_826B79AC;
	// cmpwi cr6,r11,32767
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32767, ctx.xer);
	// bge cr6,0x826b79ac
	if (!ctx.cr6.lt) goto loc_826B79AC;
	// li r11,4551
	ctx.r11.s64 = 4551;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_826B79AC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82817bb8
	ctx.lr = 0x826B79B8;
	sub_82817BB8(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lfs f0,-10428(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -10428);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x826b7a08
	if (!ctx.cr6.lt) goto loc_826B7A08;
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x826b7a08
	if (!ctx.cr6.lt) goto loc_826B7A08;
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x826b7b70
	if (ctx.cr6.lt) goto loc_826B7B70;
loc_826B7A08:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f1,16668(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16668);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82332e18
	ctx.lr = 0x826B7A18;
	sub_82332E18(ctx, base);
	// lwz r11,4556(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4556);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r11,1408(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1408);
	// ld r11,460(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 460);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfs f2,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x828191b8
	ctx.lr = 0x826B7A3C;
	sub_828191B8(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,1028(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1028);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lfs f0,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x827d98c0
	ctx.lr = 0x826B7A60;
	sub_827D98C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826b7a80
	if (ctx.cr0.eq) goto loc_826B7A80;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r11,940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 940, ctx.r11.u32);
	// stw r10,944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 944, ctx.r10.u32);
	// stw r9,948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 948, ctx.r9.u32);
loc_826B7A80:
	// lwz r11,900(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 900);
	// lfs f0,948(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 948);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,940(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 940);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,944(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 944);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,920(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 920);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,3640(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3640);
	ctx.f10.f64 = double(temp.f32);
	// fneg f10,f10
	ctx.f10.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// fmuls f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmuls f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f12,f11,f10
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x826b7ac8
	if (ctx.cr6.lt) goto loc_826B7AC8;
	// lfs f13,924(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 924);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x826b7acc
	if (!ctx.cr6.gt) goto loc_826B7ACC;
loc_826B7AC8:
	// stfs f13,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
loc_826B7ACC:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82817280
	ctx.lr = 0x826B7AD8;
	sub_82817280(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r31,156
	ctx.r4.s64 = ctx.r31.s64 + 156;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r10.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// lwz r30,816(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// lfs f31,1728(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1728);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x82817bb8
	ctx.lr = 0x826B7B00;
	sub_82817BB8(ctx, base);
	// lwz r10,2256(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2256);
	// lfs f12,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lwz r9,2252(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2252);
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// lwz r11,2248(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2248);
	// fmuls f9,f9,f31
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// lfs f11,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lfs f0,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fadds f0,f10,f9
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// stw r9,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r9.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// b 0x826b7b7c
	goto loc_826B7B7C;
loc_826B7B70:
	// addi r4,r30,1408
	ctx.r4.s64 = ctx.r30.s64 + 1408;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827e4eb0
	ctx.lr = 0x826B7B7C;
	sub_827E4EB0(ctx, base);
loc_826B7B7C:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B7B88"))) PPC_WEAK_FUNC(sub_826B7B88);
PPC_FUNC_IMPL(__imp__sub_826B7B88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x826B7B90;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82a61748
	ctx.lr = 0x826B7B98;
	__savefpr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r4,1036(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1036);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x826B7BC0;
	sub_829B9720(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x826b7bd0
	if (!ctx.cr0.eq) goto loc_826B7BD0;
	// stw r28,1036(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1036, ctx.r28.u32);
	// b 0x826b7d60
	goto loc_826B7D60;
loc_826B7BD0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824381f0
	ctx.lr = 0x826B7BD8;
	sub_824381F0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826b7c04
	if (ctx.cr0.eq) goto loc_826B7C04;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,1112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826B7BF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt 0x826b7c04
	if (ctx.cr0.gt) goto loc_826B7C04;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// li r29,1
	ctx.r29.s64 = 1;
loc_826B7C04:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x826b7d58
	if (ctx.cr6.eq) goto loc_826B7D58;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824a0a48
	ctx.lr = 0x826B7C14;
	sub_824A0A48(ctx, base);
	// lwz r11,900(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 900);
	// lwz r11,4596(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4596);
	// lwz r11,1412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1412);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826b81e4
	if (ctx.cr6.eq) goto loc_826B81E4;
	// lfs f13,620(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 620);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,620(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 620);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f13,624(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,624(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 624);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lfs f13,628(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 628);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,628(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 628);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lfs f13,920(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 920);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 948, ctx.r11.u32);
	// lfs f0,948(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 948);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 940, ctx.r10.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// stw r9,944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 944, ctx.r9.u32);
	// blt cr6,0x826b7c8c
	if (ctx.cr6.lt) goto loc_826B7C8C;
	// lfs f13,924(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 924);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x826b7c90
	if (!ctx.cr6.gt) goto loc_826B7C90;
loc_826B7C8C:
	// stfs f13,948(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 948, temp.u32);
loc_826B7C90:
	// lfs f0,940(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 940);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f13,944(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 944);
	ctx.f13.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f12,948(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 948);
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x82817280
	ctx.lr = 0x826B7CC0;
	sub_82817280(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r31,156
	ctx.r4.s64 = ctx.r31.s64 + 156;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r10.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// lwz r30,816(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// lfs f31,1728(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1728);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x82817bb8
	ctx.lr = 0x826B7CE8;
	sub_82817BB8(ctx, base);
	// lwz r10,2256(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2256);
	// lfs f12,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lwz r9,2252(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2252);
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f12,f31,f12
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f12.f64));
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// lwz r11,2248(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2248);
	// fmuls f9,f9,f31
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fadds f0,f10,f9
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// stw r9,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r9.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// b 0x826b81e4
	goto loc_826B81E4;
loc_826B7D58:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x826b8100
	if (!ctx.cr6.eq) goto loc_826B8100;
loc_826B7D60:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lbz r10,936(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 936);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// beq 0x826b7d80
	if (ctx.cr0.eq) goto loc_826B7D80;
	// stfs f31,1012(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1012, temp.u32);
	// stb r28,936(r31)
	PPC_STORE_U8(ctx.r31.u32 + 936, ctx.r28.u8);
	// stw r28,1040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1040, ctx.r28.u32);
loc_826B7D80:
	// lbz r11,936(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 936);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x826b8020
	if (!ctx.cr0.eq) goto loc_826B8020;
	// lfs f0,1012(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1012);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f13,1016(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1016);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,1012(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1012, temp.u32);
	// lfs f28,23784(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23784);
	ctx.f28.f64 = double(temp.f32);
	// lfs f29,16668(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16668);
	ctx.f29.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x826b7e5c
	if (ctx.cr6.lt) goto loc_826B7E5C;
	// lwz r11,900(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 900);
	// addi r30,r31,940
	ctx.r30.s64 = ctx.r31.s64 + 940;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r29,4592(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4592);
	// bl 0x82332e18
	ctx.lr = 0x826B7DCC;
	sub_82332E18(ctx, base);
	// lwz r11,656(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 656);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r10,660(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 660);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r9,664(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 664);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// bl 0x82817bb8
	ctx.lr = 0x826B7DF0;
	sub_82817BB8(ctx, base);
	// lfs f12,1020(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1020);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f1,f12,f28
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f28.f64));
	// lfs f0,944(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 944);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,948(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 948);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,940(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 940);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f13,f12,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fmadds f30,f11,f10,f0
	ctx.f30.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f0.f64));
	// bl 0x82a4e118
	ctx.lr = 0x826B7E20;
	sub_82A4E118(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// bge cr6,0x826b7e44
	if (!ctx.cr6.lt) goto loc_826B7E44;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
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
loc_826B7E44:
	// lfs f0,1012(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1012);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f13,1016(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1016);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,1012(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1012, temp.u32);
	// stw r11,1040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1040, ctx.r11.u32);
loc_826B7E5C:
	// lwz r11,1040(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1040);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826b8020
	if (ctx.cr6.eq) goto loc_826B8020;
	// lwz r11,900(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 900);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,4592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4592);
	// lwz r10,656(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 656);
	// lwz r9,660(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 660);
	// lwz r11,664(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 664);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bl 0x82817bb8
	ctx.lr = 0x826B7E94;
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
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f30,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f30.f64 = double(temp.f32);
	// fmadds f13,f0,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fcmpu cr6,f13,f30
	ctx.cr6.compare(ctx.f13.f64, ctx.f30.f64);
	// bne cr6,0x826b7eec
	if (!ctx.cr6.eq) goto loc_826B7EEC;
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// bne cr6,0x826b7edc
	if (!ctx.cr6.eq) goto loc_826B7EDC;
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
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// b 0x826b7f20
	goto loc_826B7F20;
loc_826B7EDC:
	// lfs f13,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// b 0x826b7f1c
	goto loc_826B7F1C;
loc_826B7EEC:
	// fcmpu cr6,f13,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f29.f64);
	// bge cr6,0x826b7f00
	if (!ctx.cr6.lt) goto loc_826B7F00;
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// b 0x826b7f1c
	goto loc_826B7F1C;
loc_826B7F00:
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
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f0,f12,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_826B7F1C:
	// stfs f31,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_826B7F20:
	// lwz r11,816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,2960
	ctx.r4.s64 = ctx.r11.s64 + 2960;
	// bl 0x82817bb8
	ctx.lr = 0x826B7F30;
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
	// fmadds f13,f0,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fcmpu cr6,f13,f30
	ctx.cr6.compare(ctx.f13.f64, ctx.f30.f64);
	// bne cr6,0x826b7f84
	if (!ctx.cr6.eq) goto loc_826B7F84;
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// bne cr6,0x826b7f7c
	if (!ctx.cr6.eq) goto loc_826B7F7C;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lfs f31,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f31.f64 = double(temp.f32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lfs f0,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// b 0x826b7fac
	goto loc_826B7FAC;
loc_826B7F7C:
	// lfs f13,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// b 0x826b7fac
	goto loc_826B7FAC;
loc_826B7F84:
	// fcmpu cr6,f13,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f29.f64);
	// bge cr6,0x826b7f98
	if (!ctx.cr6.lt) goto loc_826B7F98;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// fmr f13,f31
	ctx.f13.f64 = ctx.f31.f64;
	// b 0x826b7fac
	goto loc_826B7FAC;
loc_826B7F98:
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
loc_826B7FAC:
	// fneg f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fneg f12,f31
	ctx.f12.u64 = ctx.f31.u64 ^ 0x8000000000000000;
	// lfs f10,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f9,1024(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1024);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f1,f9,f28
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f28.f64));
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// fmadds f13,f12,f10,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f10.f64 + ctx.f13.f64));
	// fmadds f31,f0,f8,f13
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f8.f64 + ctx.f13.f64));
	// bl 0x82a4e118
	ctx.lr = 0x826B7FE8;
	sub_82A4E118(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x826b8008
	if (!ctx.cr6.gt) goto loc_826B8008;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r28,1040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1040, ctx.r28.u32);
	// b 0x826b8014
	goto loc_826B8014;
loc_826B8008:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_826B8014:
	// stw r9,948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 948, ctx.r9.u32);
	// stw r10,944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 944, ctx.r10.u32);
	// stw r11,940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 940, ctx.r11.u32);
loc_826B8020:
	// lfs f13,920(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 920);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,948(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 948);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x826b803c
	if (ctx.cr6.lt) goto loc_826B803C;
	// lfs f13,924(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 924);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x826b8040
	if (!ctx.cr6.gt) goto loc_826B8040;
loc_826B803C:
	// stfs f13,948(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 948, temp.u32);
loc_826B8040:
	// lfs f0,940(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 940);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f13,944(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 944);
	ctx.f13.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f12,948(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 948);
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x82817280
	ctx.lr = 0x826B8070;
	sub_82817280(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r31,156
	ctx.r4.s64 = ctx.r31.s64 + 156;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r10.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// lwz r30,816(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// lfs f31,1728(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1728);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x82817bb8
	ctx.lr = 0x826B8098;
	sub_82817BB8(ctx, base);
	// lwz r10,2252(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2252);
	// lfs f11,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lwz r9,2248(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2248);
	// lfs f9,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f11,f11,f31
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// lwz r11,2256(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2256);
	// fmuls f9,f9,f31
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// lfs f12,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// lfs f10,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lfs f0,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fadds f0,f13,f9
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// fadds f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r10,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
	// b 0x826b81dc
	goto loc_826B81DC;
loc_826B8100:
	// lfs f13,920(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 920);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,948(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 948);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x826b811c
	if (ctx.cr6.lt) goto loc_826B811C;
	// lfs f13,924(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 924);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x826b8120
	if (!ctx.cr6.gt) goto loc_826B8120;
loc_826B811C:
	// stfs f13,948(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 948, temp.u32);
loc_826B8120:
	// lfs f0,940(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 940);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f13,944(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 944);
	ctx.f13.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f12,948(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 948);
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
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x82817280
	ctx.lr = 0x826B8150;
	sub_82817280(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r31,156
	ctx.r4.s64 = ctx.r31.s64 + 156;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r10.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// lwz r30,816(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// lfs f31,1728(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1728);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x82817bb8
	ctx.lr = 0x826B8178;
	sub_82817BB8(ctx, base);
	// lwz r11,2248(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2248);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fmuls f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// lwz r9,2256(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2256);
	// lwz r10,2252(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2252);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// fadds f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// lfs f11,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// fadds f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stw r9,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r9.u32);
loc_826B81DC:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
loc_826B81E4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82a61794
	ctx.lr = 0x826B81F0;
	__restfpr_28(ctx, base);
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B81F8"))) PPC_WEAK_FUNC(sub_826B81F8);
PPC_FUNC_IMPL(__imp__sub_826B81F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x826B8200;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x826b8314
	if (ctx.cr6.eq) goto loc_826B8314;
	// lwz r11,900(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 900);
	// lwz r3,4592(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4592);
	// bl 0x824090e0
	ctx.lr = 0x826B821C;
	sub_824090E0(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addic. r30,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r30.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x826b8314
	if (ctx.cr0.lt) goto loc_826B8314;
	// mulli r28,r30,12
	ctx.r28.s64 = ctx.r30.s64 * 12;
loc_826B8230:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r10,r28,r11
	ctx.r10.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwzx r11,r28,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// bl 0x8281d960
	ctx.lr = 0x826B8258;
	sub_8281D960(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x824381f0
	ctx.lr = 0x826B8260;
	sub_824381F0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826b829c
	if (ctx.cr0.eq) goto loc_826B829C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,1112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826B827C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt 0x826b829c
	if (ctx.cr0.gt) goto loc_826B829C;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,12
	ctx.r6.s64 = 12;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332ca8
	ctx.lr = 0x826B829C;
	sub_82332CA8(ctx, base);
loc_826B829C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x826b8308
	if (ctx.cr6.eq) goto loc_826B8308;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826b8308
	if (ctx.cr6.eq) goto loc_826B8308;
	// lwz r11,6156(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 6156);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826b82c4
	if (ctx.cr6.eq) goto loc_826B82C4;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x826b82c8
	goto loc_826B82C8;
loc_826B82C4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_826B82C8:
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x826b82f0
	if (ctx.cr6.eq) goto loc_826B82F0;
	// lwz r11,6152(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 6152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826b82e4
	if (ctx.cr6.eq) goto loc_826B82E4;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x826b82e8
	goto loc_826B82E8;
loc_826B82E4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_826B82E8:
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x826b8308
	if (!ctx.cr6.eq) goto loc_826B8308;
loc_826B82F0:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,12
	ctx.r6.s64 = 12;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332ca8
	ctx.lr = 0x826B8308;
	sub_82332CA8(ctx, base);
loc_826B8308:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r28,r28,-12
	ctx.r28.s64 = ctx.r28.s64 + -12;
	// bge 0x826b8230
	if (!ctx.cr0.lt) goto loc_826B8230;
loc_826B8314:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B8320"))) PPC_WEAK_FUNC(sub_826B8320);
PPC_FUNC_IMPL(__imp__sub_826B8320) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r11,900(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 900);
	// lwz r4,4596(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4596);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x826b84c8
	if (ctx.cr6.eq) goto loc_826B84C8;
	// lwz r11,4592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4592);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826b84c8
	if (ctx.cr6.eq) goto loc_826B84C8;
	// lbz r11,1921(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1921);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r11,960(r31)
	PPC_STORE_U8(ctx.r31.u32 + 960, ctx.r11.u8);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,1452(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1452);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826B8374;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826b81f8
	ctx.lr = 0x826B8380;
	sub_826B81F8(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826b83a0
	if (ctx.cr6.eq) goto loc_826B83A0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x826b7830
	ctx.lr = 0x826B839C;
	sub_826B7830(ctx, base);
	// b 0x826b83a4
	goto loc_826B83A4;
loc_826B83A0:
	// bl 0x826b7b88
	ctx.lr = 0x826B83A4;
	sub_826B7B88(ctx, base);
loc_826B83A4:
	// lwz r10,848(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// addi r5,r31,8
	ctx.r5.s64 = ctx.r31.s64 + 8;
	// lwz r11,836(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 836);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mulli r10,r10,80
	ctx.r10.s64 = ctx.r10.s64 * 80;
	// lwz r9,816(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// stw r10,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r10.u32);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// stw r10,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r10.u32);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r10,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r10.u32);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r10,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r10.u32);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stw r10,472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 472, ctx.r10.u32);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// stw r10,476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 476, ctx.r10.u32);
	// lfs f0,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1708(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 1708, temp.u32);
	// stfs f0,1736(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 1736, temp.u32);
	// lwz r11,836(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 836);
	// lwz r9,816(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// lwz r10,848(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// mulli r10,r10,80
	ctx.r10.s64 = ctx.r10.s64 * 80;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f0,68(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1900(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 1900, temp.u32);
	// lwz r11,848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r10,816(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// mulli r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 * 80;
	// lwz r9,836(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 836);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r9,56(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// stw r9,1820(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1820, ctx.r9.u32);
	// lwz r9,60(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// stw r9,1824(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1824, ctx.r9.u32);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// stw r11,1828(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1828, ctx.r11.u32);
	// lwz r4,900(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 900);
	// bl 0x827e4cb8
	ctx.lr = 0x826B844C;
	sub_827E4CB8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// ld r7,24(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// bl 0x826b70c0
	ctx.lr = 0x826B8468;
	sub_826B70C0(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f13,904(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 904);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,524(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 524, temp.u32);
	// lfs f0,540(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 540);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,908(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 908);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,528(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 528, temp.u32);
	// fsubs f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x826b84b0
	if (!ctx.cr6.lt) goto loc_826B84B0;
	// stfs f0,552(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 552, temp.u32);
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// stfs f0,540(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 540, temp.u32);
	// stfs f0,556(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 556, temp.u32);
	// stfs f0,544(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 544, temp.u32);
	// stfs f0,548(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 548, temp.u32);
	// b 0x826b84b4
	goto loc_826B84B4;
loc_826B84B0:
	// stfs f1,548(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 548, temp.u32);
loc_826B84B4:
	// lwz r11,900(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 900);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f1,1948(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1948, temp.u32);
	// stfs f1,2568(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2568, temp.u32);
	// bl 0x82400f38
	ctx.lr = 0x826B84C8;
	sub_82400F38(ctx, base);
loc_826B84C8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
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

__attribute__((alias("__imp__sub_826B84E0"))) PPC_WEAK_FUNC(sub_826B84E0);
PPC_FUNC_IMPL(__imp__sub_826B84E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,-20072
	ctx.r3.s64 = ctx.r11.s64 + -20072;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B84F0"))) PPC_WEAK_FUNC(sub_826B84F0);
PPC_FUNC_IMPL(__imp__sub_826B84F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f4
	ctx.lr = 0x826B84F8;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x826b25a8
	ctx.lr = 0x826B8508;
	sub_826B25A8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826B851C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,896(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 896);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r24,r30,876
	ctx.r24.s64 = ctx.r30.s64 + 876;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// stw r31,892(r30)
	PPC_STORE_U32(ctx.r30.u32 + 892, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826b854c
	if (ctx.cr6.eq) goto loc_826B854C;
	// stw r31,20(r24)
	PPC_STORE_U32(ctx.r24.u32 + 20, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82332c38
	ctx.lr = 0x826B854C;
	sub_82332C38(ctx, base);
loc_826B854C:
	// lwz r11,872(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 872);
	// addi r26,r30,852
	ctx.r26.s64 = ctx.r30.s64 + 852;
	// stw r31,868(r30)
	PPC_STORE_U32(ctx.r30.u32 + 868, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826b8574
	if (ctx.cr6.eq) goto loc_826B8574;
	// stw r31,20(r26)
	PPC_STORE_U32(ctx.r26.u32 + 20, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82332c38
	ctx.lr = 0x826B8574;
	sub_82332C38(ctx, base);
loc_826B8574:
	// lwz r11,840(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 840);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826b8654
	if (!ctx.cr6.gt) goto loc_826B8654;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// addi r27,r10,-19996
	ctx.r27.s64 = ctx.r10.s64 + -19996;
	// addi r28,r11,-20028
	ctx.r28.s64 = ctx.r11.s64 + -20028;
loc_826B8598:
	// lwz r31,868(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 868);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,836(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 836);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mulli r10,r31,80
	ctx.r10.s64 = ctx.r31.s64 * 80;
	// lwz r9,892(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 892);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mulli r10,r9,80
	ctx.r10.s64 = ctx.r9.s64 * 80;
	// lfs f0,24(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lfs f0,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x82816b80
	ctx.lr = 0x826B85D4;
	sub_82816B80(ctx, base);
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lwz r3,108(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826b85fc
	if (ctx.cr0.eq) goto loc_826B85FC;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// addi r6,r1,116
	ctx.r6.s64 = ctx.r1.s64 + 116;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x828c5740
	ctx.lr = 0x826B85FC;
	sub_828C5740(ctx, base);
loc_826B85FC:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82816b80
	ctx.lr = 0x826B860C;
	sub_82816B80(ctx, base);
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lwz r3,108(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826b8634
	if (ctx.cr0.eq) goto loc_826B8634;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// addi r6,r1,116
	ctx.r6.s64 = ctx.r1.s64 + 116;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x828c5740
	ctx.lr = 0x826B8634;
	sub_828C5740(ctx, base);
loc_826B8634:
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x824fc978
	ctx.lr = 0x826B8640;
	sub_824FC978(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x824fc978
	ctx.lr = 0x826B864C;
	sub_824FC978(ctx, base);
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne 0x826b8598
	if (!ctx.cr0.eq) goto loc_826B8598;
loc_826B8654:
	// lwz r11,840(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 840);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826b8688
	if (!ctx.cr6.eq) goto loc_826B8688;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lfs f31,-32760(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32760);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x824fc978
	ctx.lr = 0x826B8678;
	sub_824FC978(ctx, base);
	// stfs f31,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x824fc978
	ctx.lr = 0x826B8688;
	sub_824FC978(ctx, base);
loc_826B8688:
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x82a4ea44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B8698"))) PPC_WEAK_FUNC(sub_826B8698);
PPC_FUNC_IMPL(__imp__sub_826B8698) {
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
	// li r3,1044
	ctx.r3.s64 = 1044;
	// bl 0x82833108
	ctx.lr = 0x826B86AC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826b86bc
	if (ctx.cr0.eq) goto loc_826B86BC;
	// bl 0x826b6ce8
	ctx.lr = 0x826B86B8;
	sub_826B6CE8(ctx, base);
	// b 0x826b86c0
	goto loc_826B86C0;
loc_826B86BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826B86C0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B86D0"))) PPC_WEAK_FUNC(sub_826B86D0);
PPC_FUNC_IMPL(__imp__sub_826B86D0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1044
	ctx.r3.s64 = 1044;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B86D8"))) PPC_WEAK_FUNC(sub_826B86D8);
PPC_FUNC_IMPL(__imp__sub_826B86D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,23904(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23904);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826b8718
	if (!ctx.cr0.eq) goto loc_826B8718;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// stw r11,23904(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23904, ctx.r11.u32);
	// addi r3,r9,-20100
	ctx.r3.s64 = ctx.r9.s64 + -20100;
	// bl 0x82816528
	ctx.lr = 0x826B8710;
	sub_82816528(ctx, base);
	// stw r3,23900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23900, ctx.r3.u32);
	// b 0x826b871c
	goto loc_826B871C;
loc_826B8718:
	// lwz r3,23900(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23900);
loc_826B871C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B8730"))) PPC_WEAK_FUNC(sub_826B8730);
PPC_FUNC_IMPL(__imp__sub_826B8730) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826b8780
	ctx.lr = 0x826B8750;
	sub_826B8780(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826B8764;
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

__attribute__((alias("__imp__sub_826B8780"))) PPC_WEAK_FUNC(sub_826B8780);
PPC_FUNC_IMPL(__imp__sub_826B8780) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,23908
	ctx.r31.s64 = ctx.r11.s64 + 23908;
	// lwz r11,23912(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23912);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826b87c8
	if (!ctx.cr0.eq) goto loc_826B87C8;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-19856
	ctx.r9.s64 = ctx.r9.s64 + -19856;
	// stw r11,23912(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23912, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,28712
	ctx.r3.s64 = ctx.r11.s64 + 28712;
	// bl 0x82a4c758
	ctx.lr = 0x826B87C8;
	sub_82A4C758(ctx, base);
loc_826B87C8:
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

__attribute__((alias("__imp__sub_826B87E0"))) PPC_WEAK_FUNC(sub_826B87E0);
PPC_FUNC_IMPL(__imp__sub_826B87E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,13572
	ctx.r3.s64 = ctx.r11.s64 + 13572;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B87F0"))) PPC_WEAK_FUNC(sub_826B87F0);
PPC_FUNC_IMPL(__imp__sub_826B87F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x826b8828
	if (ctx.cr6.eq) goto loc_826B8828;
	// bl 0x823324f8
	ctx.lr = 0x826B8818;
	sub_823324F8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826b8828
	if (!ctx.cr6.eq) goto loc_826B8828;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826b8834
	goto loc_826B8834;
loc_826B8828:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82338a28
	ctx.lr = 0x826B8834;
	sub_82338A28(ctx, base);
loc_826B8834:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B8850"))) PPC_WEAK_FUNC(sub_826B8850);
PPC_FUNC_IMPL(__imp__sub_826B8850) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,1680
	ctx.r3.s64 = 1680;
	// bl 0x82833108
	ctx.lr = 0x826B886C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826b8880
	if (ctx.cr0.eq) goto loc_826B8880;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826b88f8
	ctx.lr = 0x826B887C;
	sub_826B88F8(ctx, base);
	// b 0x826b8884
	goto loc_826B8884;
loc_826B8880:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826B8884:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B8898"))) PPC_WEAK_FUNC(sub_826B8898);
PPC_FUNC_IMPL(__imp__sub_826B8898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823324f8
	ctx.lr = 0x826B88B8;
	sub_823324F8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826b88c8
	if (!ctx.cr6.eq) goto loc_826B88C8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x826b88e0
	goto loc_826B88E0;
loc_826B88C8:
	// bl 0x82338750
	ctx.lr = 0x826B88CC;
	sub_82338750(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x826b88e0
	if (ctx.cr6.eq) goto loc_826B88E0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82338858
	ctx.lr = 0x826B88E0;
	sub_82338858(ctx, base);
loc_826B88E0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B88F8"))) PPC_WEAK_FUNC(sub_826B88F8);
PPC_FUNC_IMPL(__imp__sub_826B88F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x826B8900;
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
	ctx.lr = 0x826B8910;
	sub_82338B88(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r10,r10,-18712
	ctx.r10.s64 = ctx.r10.s64 + -18712;
	// addi r11,r11,-19728
	ctx.r11.s64 = ctx.r11.s64 + -19728;
	// addi r9,r9,-15204
	ctx.r9.s64 = ctx.r9.s64 + -15204;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lfs f0,1408(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1408);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1408(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1408, temp.u32);
	// addi r29,r31,1476
	ctx.r29.s64 = ctx.r31.s64 + 1476;
	// lfs f0,1412(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1412);
	ctx.f0.f64 = double(temp.f32);
	// addi r27,r30,1476
	ctx.r27.s64 = ctx.r30.s64 + 1476;
	// stfs f0,1412(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1412, temp.u32);
	// li r11,8
	ctx.r11.s64 = 8;
	// lfs f0,1416(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1416);
	ctx.f0.f64 = double(temp.f32);
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// stfs f0,1416(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1416, temp.u32);
	// lfs f0,1420(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1420);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1420(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1420, temp.u32);
	// lwz r10,1424(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1424);
	// stw r10,1424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1424, ctx.r10.u32);
	// lwz r10,1428(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1428);
	// stw r10,1428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1428, ctx.r10.u32);
	// lwz r10,1432(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1432);
	// stw r10,1432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1432, ctx.r10.u32);
	// lwz r10,1436(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1436);
	// stw r10,1436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1436, ctx.r10.u32);
	// lwz r10,1440(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1440);
	// stw r10,1440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1440, ctx.r10.u32);
	// lwz r10,1444(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1444);
	// stw r10,1444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1444, ctx.r10.u32);
	// lwz r10,1448(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1448);
	// stw r10,1448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1448, ctx.r10.u32);
	// lwz r10,1452(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1452);
	// stw r10,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r10.u32);
	// lwz r10,1456(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1456);
	// stw r10,1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1456, ctx.r10.u32);
	// lwz r10,1460(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1460);
	// stw r10,1460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1460, ctx.r10.u32);
	// lwz r10,1464(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1464);
	// stw r10,1464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1464, ctx.r10.u32);
	// lwz r10,1468(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1468);
	// stw r10,1468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1468, ctx.r10.u32);
	// lwz r10,1472(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1472);
	// stw r10,1472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1472, ctx.r10.u32);
	// stw r11,1480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1480, ctx.r11.u32);
	// stw r28,1484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1484, ctx.r28.u32);
	// stw r28,1488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1488, ctx.r28.u32);
	// stw r28,1492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1492, ctx.r28.u32);
	// stw r28,1496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1496, ctx.r28.u32);
	// stw r28,1476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1476, ctx.r28.u32);
	// beq cr6,0x826b8a78
	if (ctx.cr6.eq) goto loc_826B8A78;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r28,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826b8a78
	if (!ctx.cr6.gt) goto loc_826B8A78;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826b8a18
	if (ctx.cr0.eq) goto loc_826B8A18;
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332c38
	ctx.lr = 0x826B8A18;
	sub_82332C38(ctx, base);
loc_826B8A18:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826b8a78
	if (!ctx.cr6.gt) goto loc_826B8A78;
loc_826B8A28:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332d50
	ctx.lr = 0x826B8A3C;
	sub_82332D50(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826b8a64
	if (ctx.cr0.eq) goto loc_826B8A64;
	// lwz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
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
loc_826B8A64:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826b8a28
	if (ctx.cr6.lt) goto loc_826B8A28;
loc_826B8A78:
	// lwz r11,1500(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1500);
	// addi r4,r30,1524
	ctx.r4.s64 = ctx.r30.s64 + 1524;
	// addi r3,r31,1524
	ctx.r3.s64 = ctx.r31.s64 + 1524;
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
	// bl 0x82873b58
	ctx.lr = 0x826B8AB4;
	sub_82873B58(ctx, base);
	// lfs f0,1548(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1548);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1548(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1548, temp.u32);
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
	// lfs f0,1616(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1616);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1616(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1616, temp.u32);
	// lfs f0,1620(r30)
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
	// lfs f0,1632(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1632);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1632(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1632, temp.u32);
	// lfs f0,1636(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1636);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1636(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1636, temp.u32);
	// lwz r11,1640(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1640);
	// stw r11,1640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1640, ctx.r11.u32);
	// lfs f0,1644(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1644);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1644(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1644, temp.u32);
	// lfs f0,1648(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1648);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1648(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1648, temp.u32);
	// lwz r11,1652(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1652);
	// stw r11,1652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1652, ctx.r11.u32);
	// lfs f0,1656(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1656);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1656(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1656, temp.u32);
	// lfs f0,1660(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1660);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1660(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1660, temp.u32);
	// lwz r11,1664(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1664);
	// stw r11,1664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1664, ctx.r11.u32);
	// lwz r11,1668(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1668);
	// stw r11,1668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1668, ctx.r11.u32);
	// lwz r11,1672(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1672);
	// stw r11,1672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1672, ctx.r11.u32);
	// lwz r11,1676(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1676);
	// stw r11,1676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1676, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B8BC8"))) PPC_WEAK_FUNC(sub_826B8BC8);
PPC_FUNC_IMPL(__imp__sub_826B8BC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-18436
	ctx.r3.s64 = ctx.r11.s64 + -18436;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B8BD8"))) PPC_WEAK_FUNC(sub_826B8BD8);
PPC_FUNC_IMPL(__imp__sub_826B8BD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x826b8c10
	if (ctx.cr6.eq) goto loc_826B8C10;
	// bl 0x823aaa08
	ctx.lr = 0x826B8C00;
	sub_823AAA08(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826b8c10
	if (!ctx.cr6.eq) goto loc_826B8C10;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826b8c1c
	goto loc_826B8C1C;
loc_826B8C10:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826b87f0
	ctx.lr = 0x826B8C1C;
	sub_826B87F0(ctx, base);
loc_826B8C1C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B8C38"))) PPC_WEAK_FUNC(sub_826B8C38);
PPC_FUNC_IMPL(__imp__sub_826B8C38) {
	PPC_FUNC_PROLOGUE();
	// b 0x823aaa08
	sub_823AAA08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B8C40"))) PPC_WEAK_FUNC(sub_826B8C40);
PPC_FUNC_IMPL(__imp__sub_826B8C40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,1680
	ctx.r3.s64 = 1680;
	// bl 0x82833108
	ctx.lr = 0x826B8C60;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826b8ca0
	if (ctx.cr0.eq) goto loc_826B8CA0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826b88f8
	ctx.lr = 0x826B8C74;
	sub_826B88F8(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r11,r11,-18656
	ctx.r11.s64 = ctx.r11.s64 + -18656;
	// addi r10,r10,-17640
	ctx.r10.s64 = ctx.r10.s64 + -17640;
	// addi r9,r9,-15204
	ctx.r9.s64 = ctx.r9.s64 + -15204;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x826b8ca4
	goto loc_826B8CA4;
loc_826B8CA0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826B8CA4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B8CC0"))) PPC_WEAK_FUNC(sub_826B8CC0);
PPC_FUNC_IMPL(__imp__sub_826B8CC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823aaa08
	ctx.lr = 0x826B8CE0;
	sub_823AAA08(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x826b8cf4
	if (ctx.cr6.eq) goto loc_826B8CF4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826b8898
	ctx.lr = 0x826B8CF4;
	sub_826B8898(ctx, base);
loc_826B8CF4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B8D10"))) PPC_WEAK_FUNC(sub_826B8D10);
PPC_FUNC_IMPL(__imp__sub_826B8D10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x826B8D18;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82713ce0
	ctx.lr = 0x826B8D24;
	sub_82713CE0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r9,r11,-32616
	ctx.r9.s64 = ctx.r11.s64 + -32616;
	// lis r8,-32221
	ctx.r8.s64 = -2111635456;
	// lis r7,-32221
	ctx.r7.s64 = -2111635456;
	// lfs f0,-32616(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32616);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r10,-18656
	ctx.r11.s64 = ctx.r10.s64 + -18656;
	// addi r10,r8,-17640
	ctx.r10.s64 = ctx.r8.s64 + -17640;
	// stfs f0,1420(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1420, temp.u32);
	// lfs f0,-204(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -204);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r7,-15204
	ctx.r8.s64 = ctx.r7.s64 + -15204;
	// lfs f13,-60(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -60);
	ctx.f13.f64 = double(temp.f32);
	// li r7,40
	ctx.r7.s64 = 40;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stfs f0,1416(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1416, temp.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stfs f13,1408(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1408, temp.u32);
	// stw r8,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r8.u32);
	// stw r7,1424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1424, ctx.r7.u32);
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
	// stw r9,1512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1512, ctx.r9.u32);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,-19836
	ctx.r3.s64 = ctx.r11.s64 + -19836;
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// addi r29,r11,1268
	ctx.r29.s64 = ctx.r11.s64 + 1268;
	// bl 0x82816528
	ctx.lr = 0x826B8D90;
	sub_82816528(ctx, base);
	// li r30,-1
	ctx.r30.s64 = -1;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r31,1468
	ctx.r4.s64 = ctx.r31.s64 + 1468;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823cf190
	ctx.lr = 0x826B8DAC;
	sub_823CF190(ctx, base);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// addi r3,r10,-19788
	ctx.r3.s64 = ctx.r10.s64 + -19788;
	// addi r29,r11,1268
	ctx.r29.s64 = ctx.r11.s64 + 1268;
	// bl 0x82816528
	ctx.lr = 0x826B8DC0;
	sub_82816528(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r31,1472
	ctx.r4.s64 = ctx.r31.s64 + 1472;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// bl 0x823cf190
	ctx.lr = 0x826B8DD8;
	sub_823CF190(ctx, base);
	// lis r11,6865
	ctx.r11.s64 = 449904640;
	// lis r10,16991
	ctx.r10.s64 = 1113522176;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,37284
	ctx.r11.u64 = ctx.r11.u64 | 37284;
	// ori r10,r10,57115
	ctx.r10.u64 = ctx.r10.u64 | 57115;
	// stw r9,956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 956, ctx.r9.u32);
	// stw r11,1560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1560, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B8E08"))) PPC_WEAK_FUNC(sub_826B8E08);
PPC_FUNC_IMPL(__imp__sub_826B8E08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x82714bb0
	ctx.lr = 0x826B8E20;
	sub_82714BB0(ctx, base);
	// lwz r11,1508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1508);
	// lwz r10,460(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 460);
	// oris r10,r10,256
	ctx.r10.u64 = ctx.r10.u64 | 16777216;
	// stw r10,460(r11)
	PPC_STORE_U32(ctx.r11.u32 + 460, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B8E48"))) PPC_WEAK_FUNC(sub_826B8E48);
PPC_FUNC_IMPL(__imp__sub_826B8E48) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x826b8cc0
	sub_826B8CC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B8E50"))) PPC_WEAK_FUNC(sub_826B8E50);
PPC_FUNC_IMPL(__imp__sub_826B8E50) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x826b8898
	sub_826B8898(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B8E58"))) PPC_WEAK_FUNC(sub_826B8E58);
PPC_FUNC_IMPL(__imp__sub_826B8E58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x826B8E60;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x828b2858
	ctx.lr = 0x826B8E70;
	sub_828B2858(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r11,r11,20160
	ctx.r11.s64 = ctx.r11.s64 + 20160;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// addi r10,r10,21336
	ctx.r10.s64 = ctx.r10.s64 + 21336;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r9,r9,29100
	ctx.r9.s64 = ctx.r9.s64 + 29100;
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
	// stw r30,1560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1560, ctx.r30.u32);
	// stw r11,1556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1556, ctx.r11.u32);
	// li r9,48
	ctx.r9.s64 = 48;
	// stw r30,1564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1564, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,1568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1568, ctx.r30.u32);
	// stw r30,1572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1572, ctx.r30.u32);
	// stw r30,1552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1552, ctx.r30.u32);
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
	// stw r11,1728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1728, ctx.r11.u32);
	// stw r30,1732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1732, ctx.r30.u32);
	// stw r30,1736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1736, ctx.r30.u32);
	// stw r30,1740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1740, ctx.r30.u32);
	// stw r30,1744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1744, ctx.r30.u32);
	// stw r30,1724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1724, ctx.r30.u32);
	// stw r9,1792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1792, ctx.r9.u32);
	// stw r30,1796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1796, ctx.r30.u32);
	// stw r30,1800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1800, ctx.r30.u32);
	// stw r30,1804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1804, ctx.r30.u32);
	// stw r30,1808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1808, ctx.r30.u32);
	// stw r30,1788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1788, ctx.r30.u32);
	// bl 0x829bee20
	ctx.lr = 0x826B8F0C;
	sub_829BEE20(ctx, base);
	// bl 0x826bbac0
	ctx.lr = 0x826B8F10;
	sub_826BBAC0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x826b8f58
	if (!ctx.cr0.eq) goto loc_826B8F58;
	// li r3,416
	ctx.r3.s64 = 416;
	// bl 0x82833108
	ctx.lr = 0x826B8F20;
	sub_82833108(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-32616
	ctx.r29.s64 = ctx.r11.s64 + -32616;
	// lfs f31,-204(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -204);
	ctx.f31.f64 = double(temp.f32);
	// beq 0x826b8f48
	if (ctx.cr0.eq) goto loc_826B8F48;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x828d4bc0
	ctx.lr = 0x826B8F40;
	sub_828D4BC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x826b8f4c
	goto loc_826B8F4C;
loc_826B8F48:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_826B8F4C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829be6e8
	ctx.lr = 0x826B8F54;
	sub_829BE6E8(ctx, base);
	// b 0x826b8f7c
	goto loc_826B8F7C;
loc_826B8F58:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r29,r11,-32616
	ctx.r29.s64 = ctx.r11.s64 + -32616;
	// lwz r11,164(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 164);
	// lfs f31,-204(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -204);
	ctx.f31.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826B8F7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826B8F7C:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1512(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1512, temp.u32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lis r7,-32216
	ctx.r7.s64 = -2111307776;
	// lis r3,-32215
	ctx.r3.s64 = -2111242240;
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f0,17060(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17060);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r28,1
	ctx.r28.s64 = 1;
	// lfs f11,900(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 900);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,24000(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24000);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lfs f0,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-12104(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -12104);
	ctx.f13.f64 = double(temp.f32);
	// stw r28,1876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1876, ctx.r28.u32);
	// stfs f0,1868(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1868, temp.u32);
	// stw r30,1704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1704, ctx.r30.u32);
	// stfs f13,696(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 696, temp.u32);
	// stw r30,1848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1848, ctx.r30.u32);
	// stfs f12,1864(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1864, temp.u32);
	// stw r30,836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 836, ctx.r30.u32);
	// stfs f11,1504(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1504, temp.u32);
	// stw r30,1748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1748, ctx.r30.u32);
	// stw r30,1752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1752, ctx.r30.u32);
	// li r3,576
	ctx.r3.s64 = 576;
	// stw r30,1764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1764, ctx.r30.u32);
	// stw r30,1696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1696, ctx.r30.u32);
	// stw r30,1700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1700, ctx.r30.u32);
	// stw r9,1664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1664, ctx.r9.u32);
	// stw r11,1660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1660, ctx.r11.u32);
	// stw r6,1648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1648, ctx.r6.u32);
	// stw r5,1652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1652, ctx.r5.u32);
	// stw r4,1656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1656, ctx.r4.u32);
	// stw r8,1668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1668, ctx.r8.u32);
	// bl 0x82833108
	ctx.lr = 0x826B9034;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826b904c
	if (ctx.cr0.eq) goto loc_826B904C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82977530
	ctx.lr = 0x826B9044;
	sub_82977530(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x826b9050
	goto loc_826B9050;
loc_826B904C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_826B9050:
	// stw r4,1576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1576, ctx.r4.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829be6e8
	ctx.lr = 0x826B905C;
	sub_829BE6E8(ctx, base);
	// lis r11,12115
	ctx.r11.s64 = 793968640;
	// li r10,128
	ctx.r10.s64 = 128;
	// stw r30,1712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1712, ctx.r30.u32);
	// ori r11,r11,11234
	ctx.r11.u64 = ctx.r11.u64 | 11234;
	// stw r30,1780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1780, ctx.r30.u32);
	// li r9,16385
	ctx.r9.s64 = 16385;
	// stw r30,1716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1716, ctx.r30.u32);
	// stw r11,1600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1600, ctx.r11.u32);
	// stw r30,1784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1784, ctx.r30.u32);
	// stw r30,1776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1776, ctx.r30.u32);
	// stw r10,1812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1812, ctx.r10.u32);
	// stw r9,1816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1816, ctx.r9.u32);
	// stw r28,1852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1852, ctx.r28.u32);
	// stw r30,1492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1492, ctx.r30.u32);
	// stw r30,1588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1588, ctx.r30.u32);
	// stw r30,956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 956, ctx.r30.u32);
	// lwz r11,1204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1204);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826b90b0
	if (!ctx.cr6.eq) goto loc_826B90B0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c3628
	ctx.lr = 0x826B90B0;
	sub_829C3628(ctx, base);
loc_826B90B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 808, ctx.r30.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B90C8"))) PPC_WEAK_FUNC(sub_826B90C8);
PPC_FUNC_IMPL(__imp__sub_826B90C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// addi r11,r11,20160
	ctx.r11.s64 = ctx.r11.s64 + 20160;
	// addi r10,r10,21336
	ctx.r10.s64 = ctx.r10.s64 + 21336;
	// addi r9,r9,29100
	ctx.r9.s64 = ctx.r9.s64 + 29100;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// bl 0x829c36c0
	ctx.lr = 0x826B9108;
	sub_829C36C0(ctx, base);
	// addi r30,r31,1788
	ctx.r30.s64 = ctx.r31.s64 + 1788;
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r5,1804(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1804);
	// li r6,48
	ctx.r6.s64 = 48;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332ca8
	ctx.lr = 0x826B9124;
	sub_82332CA8(ctx, base);
	// lwz r3,1800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1800);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826b9134
	if (ctx.cr6.eq) goto loc_826B9134;
	// bl 0x82332db8
	ctx.lr = 0x826B9134;
	sub_82332DB8(ctx, base);
loc_826B9134:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,1724
	ctx.r3.s64 = ctx.r31.s64 + 1724;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// bl 0x8239d768
	ctx.lr = 0x826B914C;
	sub_8239D768(ctx, base);
	// addi r3,r31,1672
	ctx.r3.s64 = ctx.r31.s64 + 1672;
	// bl 0x82400f38
	ctx.lr = 0x826B9154;
	sub_82400F38(ctx, base);
	// addi r3,r31,1552
	ctx.r3.s64 = ctx.r31.s64 + 1552;
	// bl 0x8239d768
	ctx.lr = 0x826B915C;
	sub_8239D768(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r11,r11,10432
	ctx.r11.s64 = ctx.r11.s64 + 10432;
	// addi r10,r10,11556
	ctx.r10.s64 = ctx.r10.s64 + 11556;
	// addi r9,r9,11608
	ctx.r9.s64 = ctx.r9.s64 + 11608;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// bl 0x8284c6d0
	ctx.lr = 0x826B9188;
	sub_8284C6D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B91A0"))) PPC_WEAK_FUNC(sub_826B91A0);
PPC_FUNC_IMPL(__imp__sub_826B91A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,1612(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1612);
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f1,1512(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1512, temp.u32);
	// stw r10,1852(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1852, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r9,452
	ctx.r9.s64 = 452;
	// fctiwz f0,f1
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stw r10,592(r11)
	PPC_STORE_U32(ctx.r11.u32 + 592, ctx.r10.u32);
	// stfiwx f0,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.f0.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B91D0"))) PPC_WEAK_FUNC(sub_826B91D0);
PPC_FUNC_IMPL(__imp__sub_826B91D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x828b29b8
	ctx.lr = 0x826B91E8;
	sub_828B29B8(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r4,r31,1236
	ctx.r4.s64 = ctx.r31.s64 + 1236;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-17588
	ctx.r5.s64 = ctx.r11.s64 + -17588;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x824f5de8
	ctx.lr = 0x826B9204;
	sub_824F5DE8(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r4,r31,1460
	ctx.r4.s64 = ctx.r31.s64 + 1460;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-17544
	ctx.r5.s64 = ctx.r11.s64 + -17544;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x824f5fd8
	ctx.lr = 0x826B9220;
	sub_824F5FD8(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r4,r31,1464
	ctx.r4.s64 = ctx.r31.s64 + 1464;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-17500
	ctx.r5.s64 = ctx.r11.s64 + -17500;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x824f5fd8
	ctx.lr = 0x826B923C;
	sub_824F5FD8(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r4,r31,1364
	ctx.r4.s64 = ctx.r31.s64 + 1364;
	// addi r5,r11,-17452
	ctx.r5.s64 = ctx.r11.s64 + -17452;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416240
	ctx.lr = 0x826B9258;
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

__attribute__((alias("__imp__sub_826B9270"))) PPC_WEAK_FUNC(sub_826B9270);
PPC_FUNC_IMPL(__imp__sub_826B9270) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x826B9278;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x828b2a00
	ctx.lr = 0x826B9284;
	sub_828B2A00(ctx, base);
	// addi r11,r31,1632
	ctx.r11.s64 = ctx.r31.s64 + 1632;
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
	ctx.lr = 0x826B92A0;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r31,1856
	ctx.r10.s64 = ctx.r31.s64 + 1856;
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
	ctx.lr = 0x826B92C0;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r31,1860
	ctx.r10.s64 = ctx.r31.s64 + 1860;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// bl 0x82838fd0
	ctx.lr = 0x826B92E0;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r31,1760
	ctx.r10.s64 = ctx.r31.s64 + 1760;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r28,4
	ctx.r31.s64 = ctx.r28.s64 + 4;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// bl 0x82838fd0
	ctx.lr = 0x826B9300;
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

__attribute__((alias("__imp__sub_826B9318"))) PPC_WEAK_FUNC(sub_826B9318);
PPC_FUNC_IMPL(__imp__sub_826B9318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x826B9320;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x826c8660
	ctx.lr = 0x826B9330;
	sub_826C8660(ctx, base);
	// addi r27,r31,1632
	ctx.r27.s64 = ctx.r31.s64 + 1632;
	// addi r30,r31,424
	ctx.r30.s64 = ctx.r31.s64 + 424;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x826B934C;
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
	ctx.lr = 0x826B9370;
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
	ctx.lr = 0x826B9384;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826b93a8
	if (!ctx.cr0.eq) goto loc_826B93A8;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x826B939C;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_826B93A8:
	// addi r27,r31,1856
	ctx.r27.s64 = ctx.r31.s64 + 1856;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x826B93BC;
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
	ctx.lr = 0x826B93E0;
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
	ctx.lr = 0x826B93F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826b9418
	if (!ctx.cr0.eq) goto loc_826B9418;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x826B940C;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_826B9418:
	// addi r27,r31,1860
	ctx.r27.s64 = ctx.r31.s64 + 1860;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x826B942C;
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
	ctx.lr = 0x826B9450;
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
	ctx.lr = 0x826B9464;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826b9488
	if (!ctx.cr0.eq) goto loc_826B9488;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x826B947C;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_826B9488:
	// addi r27,r31,1760
	ctx.r27.s64 = ctx.r31.s64 + 1760;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x826B949C;
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
	ctx.lr = 0x826B94C0;
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
	ctx.lr = 0x826B94D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826b94f8
	if (!ctx.cr0.eq) goto loc_826B94F8;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x826B94EC;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_826B94F8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B9508"))) PPC_WEAK_FUNC(sub_826B9508);
PPC_FUNC_IMPL(__imp__sub_826B9508) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x826B9510;
	__savegprlr_25(ctx, base);
	// stfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f29.u64);
	// stfd f30,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// bl 0x82333a20
	ctx.lr = 0x826B952C;
	sub_82333A20(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828b2fe0
	ctx.lr = 0x826B9538;
	sub_828B2FE0(ctx, base);
	// li r25,1
	ctx.r25.s64 = 1;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x826b989c
	if (ctx.cr6.eq) goto loc_826B989C;
	// lwz r11,1852(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1852);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x826b9580
	if (!ctx.cr6.eq) goto loc_826B9580;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r4,r31,1608
	ctx.r4.s64 = ctx.r31.s64 + 1608;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,1572(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1572);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826B9568;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,1512(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1512, temp.u32);
loc_826B9580:
	// lfs f0,1660(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1660);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lfs f13,1648(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1648);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// fsubs f31,f0,f13
	ctx.f31.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,1652(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1652);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,1664(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1664);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f30,f12,f0
	ctx.f30.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f13,1668(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1668);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,1656(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1656);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,1576(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1576);
	// fsubs f29,f13,f0
	ctx.f29.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826B95B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fmuls f13,f30,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f30.f64 * ctx.f30.f64));
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lfs f0,30996(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30996);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f29,f29,f13
	ctx.f13.f64 = double(float(ctx.f29.f64 * ctx.f29.f64 + ctx.f13.f64));
	// fmadds f13,f31,f31,f13
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f31.f64 + ctx.f13.f64));
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// fnmsubs f0,f13,f0,f1
	ctx.f0.f64 = double(float(-(ctx.f13.f64 * ctx.f0.f64 - ctx.f1.f64)));
	// stfs f0,1864(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1864, temp.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,1628(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1628);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826B95EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,1636(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1636);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826B9604;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x826b9648
	if (ctx.cr6.eq) goto loc_826B9648;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x826b9630
	if (ctx.cr6.eq) goto loc_826B9630;
	// bl 0x82a4cd78
	ctx.lr = 0x826B961C;
	sub_82A4CD78(ctx, base);
	// clrlwi. r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826b962c
	if (!ctx.cr0.eq) goto loc_826B962C;
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x826b9630
	goto loc_826B9630;
loc_826B962C:
	// li r30,0
	ctx.r30.s64 = 0;
loc_826B9630:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x826b9648
	if (ctx.cr6.eq) goto loc_826B9648;
	// stw r25,1712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1712, ctx.r25.u32);
	// lwz r11,2960(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 2960);
	// stw r11,1780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1780, ctx.r11.u32);
	// b 0x826b965c
	goto loc_826B965C;
loc_826B9648:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x826b965c
	if (ctx.cr6.eq) goto loc_826B965C;
	// stw r25,1716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1716, ctx.r25.u32);
	// lwz r11,2972(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 2972);
	// stw r11,1784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1784, ctx.r11.u32);
loc_826B965C:
	// lwz r3,2864(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 2864);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826b9758
	if (ctx.cr6.eq) goto loc_826B9758;
	// lwz r11,1884(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1884);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826b9758
	if (!ctx.cr6.eq) goto loc_826B9758;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1636(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1636);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826B9684;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x826b96e4
	if (ctx.cr0.eq) goto loc_826B96E4;
	// lwz r11,204(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 204);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826b9830
	if (!ctx.cr6.gt) goto loc_826B9830;
	// addi r27,r31,1552
	ctx.r27.s64 = ctx.r31.s64 + 1552;
	// li r30,0
	ctx.r30.s64 = 0;
loc_826B96A4:
	// lwz r11,200(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 200);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826B96BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82410060
	ctx.lr = 0x826B96CC;
	sub_82410060(ctx, base);
	// lwz r11,204(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 204);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826b96a4
	if (ctx.cr6.lt) goto loc_826B96A4;
	// b 0x826b9830
	goto loc_826B9830;
loc_826B96E4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x824ba060
	ctx.lr = 0x826B96EC;
	sub_824BA060(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x826b9830
	if (ctx.cr0.eq) goto loc_826B9830;
	// lwz r11,6572(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6572);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826b9830
	if (ctx.cr6.eq) goto loc_826B9830;
	// lwz r11,6136(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6136);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826b9830
	if (!ctx.cr6.gt) goto loc_826B9830;
	// addi r27,r31,1552
	ctx.r27.s64 = ctx.r31.s64 + 1552;
	// li r30,0
	ctx.r30.s64 = 0;
loc_826B9718:
	// lwz r11,6132(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6132);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826B9730;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82410060
	ctx.lr = 0x826B9740;
	sub_82410060(ctx, base);
	// lwz r11,6136(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6136);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826b9718
	if (ctx.cr6.lt) goto loc_826B9718;
	// b 0x826b9830
	goto loc_826B9830;
loc_826B9758:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x824ba060
	ctx.lr = 0x826B9760;
	sub_824BA060(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x826b97cc
	if (ctx.cr0.eq) goto loc_826B97CC;
	// lwz r11,6572(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6572);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826b97cc
	if (ctx.cr6.eq) goto loc_826B97CC;
	// lwz r11,6136(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6136);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826b9830
	if (!ctx.cr6.gt) goto loc_826B9830;
	// addi r27,r31,1552
	ctx.r27.s64 = ctx.r31.s64 + 1552;
	// li r30,0
	ctx.r30.s64 = 0;
loc_826B978C:
	// lwz r11,6132(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6132);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826B97A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82410060
	ctx.lr = 0x826B97B4;
	sub_82410060(ctx, base);
	// lwz r11,6136(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6136);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826b978c
	if (ctx.cr6.lt) goto loc_826B978C;
	// b 0x826b9830
	goto loc_826B9830;
loc_826B97CC:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82332868
	ctx.lr = 0x826B97D4;
	sub_82332868(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x826b9830
	if (ctx.cr0.eq) goto loc_826B9830;
	// lwz r11,6352(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 6352);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826b9830
	if (!ctx.cr6.gt) goto loc_826B9830;
	// addi r27,r31,1552
	ctx.r27.s64 = ctx.r31.s64 + 1552;
	// li r30,0
	ctx.r30.s64 = 0;
loc_826B97F4:
	// lwz r11,6348(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 6348);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826B980C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82410060
	ctx.lr = 0x826B981C;
	sub_82410060(ctx, base);
	// lwz r11,6352(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 6352);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826b97f4
	if (ctx.cr6.lt) goto loc_826B97F4;
loc_826B9830:
	// lwz r11,1280(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1280);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826b9888
	if (!ctx.cr6.gt) goto loc_826B9888;
	// addi r28,r31,1264
	ctx.r28.s64 = ctx.r31.s64 + 1264;
	// li r30,0
	ctx.r30.s64 = 0;
loc_826B9848:
	// lwz r11,1276(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1276);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// bl 0x824cac78
	ctx.lr = 0x826B9874;
	sub_824CAC78(ctx, base);
	// lwz r11,1280(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1280);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826b9848
	if (ctx.cr6.lt) goto loc_826B9848;
loc_826B9888:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,900(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 900);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826B989C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826B989C:
	// lwz r11,1568(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1568);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826b9908
	if (!ctx.cr6.gt) goto loc_826B9908;
	// li r30,0
	ctx.r30.s64 = 0;
loc_826B98B0:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x826b98d8
	if (ctx.cr6.eq) goto loc_826B98D8;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r29,1564(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1564);
	// lwz r11,1536(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1536);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826B98D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwzx r11,r29,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// stfs f1,100(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 100, temp.u32);
loc_826B98D8:
	// lwz r11,1564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1564);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x8271d640
	ctx.lr = 0x826B98EC;
	sub_8271D640(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826b9908
	if (!ctx.cr0.eq) goto loc_826B9908;
	// lwz r11,1568(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1568);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826b98b0
	if (ctx.cr6.lt) goto loc_826B98B0;
loc_826B9908:
	// lwz r5,1580(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1580);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x826b992c
	if (ctx.cr6.eq) goto loc_826B992C;
	// lwz r3,1576(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1576);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826b992c
	if (ctx.cr6.eq) goto loc_826B992C;
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// bl 0x82978bc0
	ctx.lr = 0x826B992C;
	sub_82978BC0(ctx, base);
loc_826B992C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1164(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1164);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826B9940;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r25,1760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1760, ctx.r25.u32);
	// lfs f13,572(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	ctx.f13.f64 = double(temp.f32);
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f0,-10428(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -10428);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x826b99c8
	if (!ctx.cr6.lt) goto loc_826B99C8;
	// lfs f13,576(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	ctx.f13.f64 = double(temp.f32);
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x826b99c8
	if (!ctx.cr6.lt) goto loc_826B99C8;
	// lfs f13,580(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	ctx.f13.f64 = double(temp.f32);
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x826b99c8
	if (!ctx.cr6.lt) goto loc_826B99C8;
	// addi r4,r31,656
	ctx.r4.s64 = ctx.r31.s64 + 656;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82817bb8
	ctx.lr = 0x826B9988;
	sub_82817BB8(ctx, base);
	// lfs f13,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,1504(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1504);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f12,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r10.u32);
	// stw r11,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r11.u32);
	// stw r9,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r9.u32);
loc_826B99C8:
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x826b9a30
	if (!ctx.cr6.eq) goto loc_826B9A30;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82332988
	ctx.lr = 0x826B99DC;
	sub_82332988(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826b9a30
	if (ctx.cr0.eq) goto loc_826B9A30;
	// lwz r30,1780(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1780);
	// bl 0x823323b8
	ctx.lr = 0x826B99EC;
	sub_823323B8(ctx, base);
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
	ctx.lr = 0x826B9A04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne 0x826b9a14
	if (!ctx.cr0.eq) goto loc_826B9A14;
	// li r3,0
	ctx.r3.s64 = 0;
loc_826B9A14:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lbz r5,1632(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1632);
	// lwz r11,1408(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1408);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826B9A2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x826b9a50
	goto loc_826B9A50;
loc_826B9A30:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,15834
	ctx.r4.s64 = ctx.r11.s64 + 15834;
	// bl 0x8233a258
	ctx.lr = 0x826B9A40;
	sub_8233A258(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1488(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1488);
	// bl 0x829c3740
	ctx.lr = 0x826B9A50;
	sub_829C3740(ctx, base);
loc_826B9A50:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f30,-80(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B9A68"))) PPC_WEAK_FUNC(sub_826B9A68);
PPC_FUNC_IMPL(__imp__sub_826B9A68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x826B9A70;
	__savegprlr_27(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,1708(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1708);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826b9a90
	if (ctx.cr6.eq) goto loc_826B9A90;
	// lwz r11,1720(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1720);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826b9cdc
	if (ctx.cr6.eq) goto loc_826B9CDC;
loc_826B9A90:
	// lwz r10,1584(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1584);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// addi r28,r11,15834
	ctx.r28.s64 = ctx.r11.s64 + 15834;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826b9b38
	if (ctx.cr6.eq) goto loc_826B9B38;
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
	ctx.lr = 0x826B9AE8;
	sub_82817280(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,13024(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r5,1584(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1584);
	// li r4,16
	ctx.r4.s64 = 16;
	// ld r7,128(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x8282b1e0
	ctx.lr = 0x826B9B1C;
	sub_8282B1E0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8233a258
	ctx.lr = 0x826B9B28;
	sub_8233A258(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1588(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1588);
	// bl 0x829c3740
	ctx.lr = 0x826B9B38;
	sub_829C3740(ctx, base);
loc_826B9B38:
	// lwz r4,1616(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1616);
	// li r27,1
	ctx.r27.s64 = 1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x826b9cd8
	if (ctx.cr6.eq) goto loc_826B9CD8;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r3,10548(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826b9cd8
	if (ctx.cr6.eq) goto loc_826B9CD8;
	// lfs f0,1620(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1620);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// lfs f13,1624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1624);
	ctx.f13.f64 = double(temp.f32);
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// lfs f12,620(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f12.f64 = double(temp.f32);
	// ld r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// lfs f11,624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fsubs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// ld r7,128(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// lfs f0,1628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1628);
	ctx.f0.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f13,628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f13.f64 = double(temp.f32);
	// lwz r6,800(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r10,r30,32,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFF00000000;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x8242f058
	ctx.lr = 0x826B9BB4;
	sub_8242F058(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x826b9cd8
	if (ctx.cr0.eq) goto loc_826B9CD8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8233a258
	ctx.lr = 0x826B9BC8;
	sub_8233A258(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1588(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1588);
	// bl 0x829c3740
	ctx.lr = 0x826B9BD8;
	sub_829C3740(ctx, base);
	// lwz r11,1756(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1756);
	// lwz r10,1496(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1496);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,1424(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1424, ctx.r11.u32);
	// lfs f0,1868(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1868);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1520(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1520, temp.u32);
	// beq cr6,0x826b9ca4
	if (ctx.cr6.eq) goto loc_826B9CA4;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x827dff88
	ctx.lr = 0x826B9BFC;
	sub_827DFF88(ctx, base);
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
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
	ctx.lr = 0x826B9C28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lwz r8,628(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r9,r10,-32676
	ctx.r9.s64 = ctx.r10.s64 + -32676;
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// stw r27,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r27.u32);
	// addi r4,r1,232
	ctx.r4.s64 = ctx.r1.s64 + 232;
	// li r5,32
	ctx.r5.s64 = 32;
	// lfs f0,-32676(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32676);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,260(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// stw r8,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r8.u32);
	// lfs f0,-112(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -112);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,256(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// lwz r10,620(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	// lwz r9,624(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	// stw r10,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r10.u32);
	// stw r9,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r9.u32);
	// lwz r29,96(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r28,0(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82a4ea80
	ctx.lr = 0x826B9C78;
	sub_82A4EA80(ctx, base);
	// lwz r11,1028(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1028);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
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
	ctx.lr = 0x826B9CA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826B9CA4:
	// lwz r11,1776(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1776);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826b9cc0
	if (ctx.cr6.eq) goto loc_826B9CC0;
	// li r11,1448
	ctx.r11.s64 = 1448;
	// lfs f0,1512(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1512);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.f0.u32);
loc_826B9CC0:
	// lwz r11,1848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1848);
	// stw r11,1428(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1428, ctx.r11.u32);
	// lwz r11,1592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1592);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826b9cd8
	if (ctx.cr6.eq) goto loc_826B9CD8;
	// stw r11,1444(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1444, ctx.r11.u32);
loc_826B9CD8:
	// stw r27,1708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1708, ctx.r27.u32);
loc_826B9CDC:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B9CE8"))) PPC_WEAK_FUNC(sub_826B9CE8);
PPC_FUNC_IMPL(__imp__sub_826B9CE8) {
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
	// std r6,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r6.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r7,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r7.u64);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r9,148(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// addi r3,r31,1620
	ctx.r3.s64 = ctx.r31.s64 + 1620;
	// lwz r8,152(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stw r11,1620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1620, ctx.r11.u32);
	// stw r9,1624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1624, ctx.r9.u32);
	// lfs f1,16668(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16668);
	ctx.f1.f64 = double(temp.f32);
	// stw r8,1628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1628, ctx.r8.u32);
	// bl 0x82332e18
	ctx.lr = 0x826B9D2C;
	sub_82332E18(ctx, base);
	// lfs f12,1648(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1648);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,1660(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1660);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// lfs f11,1624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1624);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,1628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1628);
	ctx.f10.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,30996(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30996);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f12,1620(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1620);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f13,1620(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1620, temp.u32);
	// fmuls f13,f11,f0
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f13,1624(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1624, temp.u32);
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f0,1628(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1628, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,1720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1720, ctx.r10.u32);
	// lwz r11,1124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826B9D84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1720, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B9DA0"))) PPC_WEAK_FUNC(sub_826B9DA0);
PPC_FUNC_IMPL(__imp__sub_826B9DA0) {
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
	// std r5,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r5.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r6,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r6.u64);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x826b9dec
	if (ctx.cr6.eq) goto loc_826B9DEC;
	// lwz r11,80(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// stw r11,1644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1644, ctx.r11.u32);
	// lwz r11,620(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 620);
	// stw r11,1632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1632, ctx.r11.u32);
	// lwz r11,624(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 624);
	// stw r11,1636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1636, ctx.r11.u32);
	// lwz r11,628(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 628);
	// stw r11,1640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1640, ctx.r11.u32);
	// b 0x826b9e04
	goto loc_826B9E04;
loc_826B9DEC:
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r9,168(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// stw r11,1632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1632, ctx.r11.u32);
	// stw r10,1636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1636, ctx.r10.u32);
	// stw r9,1640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1640, ctx.r9.u32);
loc_826B9E04:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x826b9eb4
	if (ctx.cr6.eq) goto loc_826B9EB4;
	// lfs f13,628(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,1640(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1640);
	ctx.f0.f64 = double(temp.f32);
	// addi r30,r31,572
	ctx.r30.s64 = ctx.r31.s64 + 572;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f12,1632(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1632);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f13,620(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,1636(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1636);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f13,624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f13.f64 = double(temp.f32);
	// stw r9,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r9.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r8,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r8.u32);
	// lfs f1,16668(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16668);
	ctx.f1.f64 = double(temp.f32);
	// stw r10,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r10.u32);
	// bl 0x82332e18
	ctx.lr = 0x826B9E68;
	sub_82332E18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82817280
	ctx.lr = 0x826B9E78;
	sub_82817280(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,316(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 316);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826B9E8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,1504(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1504);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,572(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,576(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,580(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f13,572(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 572, temp.u32);
	// stfs f12,576(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 576, temp.u32);
	// stfs f0,580(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 580, temp.u32);
loc_826B9EB4:
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

__attribute__((alias("__imp__sub_826B9ED0"))) PPC_WEAK_FUNC(sub_826B9ED0);
PPC_FUNC_IMPL(__imp__sub_826B9ED0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,580(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 580);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,572(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 572);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lfs f10,576(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 576);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f13,f1,f13
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// fmuls f10,f10,f1
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// lfs f12,628(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 628);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,620(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 620);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,624(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 624);
	ctx.f9.f64 = double(temp.f32);
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// fadds f0,f11,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// fadds f0,f9,f10
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// lwz r9,-12(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// lwz r11,-8(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B9F28"))) PPC_WEAK_FUNC(sub_826B9F28);
PPC_FUNC_IMPL(__imp__sub_826B9F28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x826B9F30;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r7,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r7.u64);
	// std r8,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r8.u64);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// std r9,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r9.u64);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// std r10,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r10.u64);
	// ori r27,r5,2
	ctx.r27.u64 = ctx.r5.u64 | 2;
	// lwz r11,1848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1848);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x826b9f74
	if (ctx.cr6.lt) goto loc_826B9F74;
	// beq cr6,0x826b9f6c
	if (ctx.cr6.eq) goto loc_826B9F6C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826b9fec
	goto loc_826B9FEC;
loc_826B9F6C:
	// li r30,2
	ctx.r30.s64 = 2;
	// b 0x826b9f78
	goto loc_826B9F78;
loc_826B9F74:
	// li r30,1
	ctx.r30.s64 = 1;
loc_826B9F78:
	// bl 0x824113a0
	ctx.lr = 0x826B9F7C;
	sub_824113A0(ctx, base);
	// lwz r11,248(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// ld r10,240(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 240);
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c87d0
	ctx.lr = 0x826B9FB4;
	sub_829C87D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826b9fec
	if (ctx.cr0.eq) goto loc_826B9FEC;
	// lwz r11,208(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r10,212(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r9,216(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// lwz r8,224(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// lwz r7,228(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r6,232(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
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
loc_826B9FEC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B9FF8"))) PPC_WEAK_FUNC(sub_826B9FF8);
PPC_FUNC_IMPL(__imp__sub_826B9FF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x826BA000;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r6,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r6.u64);
	// std r7,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r7.u64);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// std r8,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r8.u64);
	// ori r28,r5,4
	ctx.r28.u64 = ctx.r5.u64 | 4;
	// std r9,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r9.u64);
	// lwz r11,1848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1848);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x826ba040
	if (ctx.cr6.lt) goto loc_826BA040;
	// beq cr6,0x826ba038
	if (ctx.cr6.eq) goto loc_826BA038;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826ba0bc
	goto loc_826BA0BC;
loc_826BA038:
	// li r30,2
	ctx.r30.s64 = 2;
	// b 0x826ba044
	goto loc_826BA044;
loc_826BA040:
	// li r30,1
	ctx.r30.s64 = 1;
loc_826BA044:
	// bl 0x824113a0
	ctx.lr = 0x826BA048;
	sub_824113A0(ctx, base);
	// lwz r11,264(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// lis r7,4
	ctx.r7.s64 = 262144;
	// ld r10,256(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 256);
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r7,r7,1535
	ctx.r7.u64 = ctx.r7.u64 | 1535;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c87d0
	ctx.lr = 0x826BA084;
	sub_829C87D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826ba0bc
	if (ctx.cr0.eq) goto loc_826BA0BC;
	// lwz r11,208(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r10,212(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r9,216(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// lwz r8,224(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// lwz r7,228(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r6,232(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
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
loc_826BA0BC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826BA0C8"))) PPC_WEAK_FUNC(sub_826BA0C8);
PPC_FUNC_IMPL(__imp__sub_826BA0C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x826BA0D0;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r5,16
	ctx.r5.s64 = 1048576;
	// lis r4,26666
	ctx.r4.s64 = 1747582976;
	// ori r5,r5,128
	ctx.r5.u64 = ctx.r5.u64 | 128;
	// lfs f31,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// ori r4,r4,18444
	ctx.r4.u64 = ctx.r4.u64 | 18444;
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
	// lwz r10,1668(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1668);
	// lwz r8,1656(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1656);
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r6,1812(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// rldicr r8,r8,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r9,1660(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1660);
	// ld r7,1648(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1648);
	// bl 0x826b9f28
	ctx.lr = 0x826BA130;
	sub_826B9F28(ctx, base);
	// lwz r11,800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// stw r3,1612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1612, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826ba15c
	if (ctx.cr6.eq) goto loc_826BA15C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,556(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826BA154;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// b 0x826ba160
	goto loc_826BA160;
loc_826BA15C:
	// li r6,0
	ctx.r6.s64 = 0;
loc_826BA160:
	// lfs f0,1512(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1512);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,1832(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1832);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.f0.u64);
	// lwz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// li r9,0
	ctx.r9.s64 = 0;
	// ld r30,1820(r31)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1820);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r29,1828(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1828);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f4,1844(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1844);
	ctx.f4.f64 = double(temp.f32);
	// lfs f2,1840(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1840);
	ctx.f2.f64 = double(temp.f32);
	// lwz r10,1816(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// lfs f1,1836(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1836);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,1612(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1612);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r30.u64);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// bl 0x82331120
	ctx.lr = 0x826BA1B4;
	sub_82331120(ctx, base);
	// lwz r10,1612(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1612);
	// li r11,452
	ctx.r11.s64 = 452;
	// lfs f0,1768(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1768);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1772(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1772);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,528(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 528, temp.u32);
	// stfs f13,524(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 524, temp.u32);
	// lwz r10,1608(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// lwz r9,1612(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1612);
	// lfs f0,1512(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1512);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.f0.u32);
	// stw r10,592(r9)
	PPC_STORE_U32(ctx.r9.u32 + 592, ctx.r10.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826BA1F0"))) PPC_WEAK_FUNC(sub_826BA1F0);
PPC_FUNC_IMPL(__imp__sub_826BA1F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x826BA1F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x826ba378
	if (ctx.cr6.eq) goto loc_826BA378;
	// lwz r11,460(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 460);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826ba378
	if (ctx.cr0.eq) goto loc_826BA378;
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
	ctx.lr = 0x826BA238;
	sub_8281D960(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826ba258
	if (ctx.cr0.eq) goto loc_826BA258;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826BA250;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x826ba25c
	goto loc_826BA25C;
loc_826BA258:
	// li r29,0
	ctx.r29.s64 = 0;
loc_826BA25C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x826ba2bc
	if (!ctx.cr6.eq) goto loc_826BA2BC;
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
	ctx.lr = 0x826BA284;
	sub_8281D960(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826ba370
	if (ctx.cr0.eq) goto loc_826BA370;
	// lwz r3,800(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 800);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826ba2b0
	if (ctx.cr6.eq) goto loc_826BA2B0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826BA2A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x826ba2b4
	goto loc_826BA2B4;
loc_826BA2B0:
	// li r29,0
	ctx.r29.s64 = 0;
loc_826BA2B4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x826ba370
	if (ctx.cr6.eq) goto loc_826BA370;
loc_826BA2BC:
	// lwz r3,1608(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1608);
	// bl 0x82414510
	ctx.lr = 0x826BA2C4;
	sub_82414510(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826ba370
	if (ctx.cr0.eq) goto loc_826BA370;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82833108
	ctx.lr = 0x826BA2D4;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826ba35c
	if (ctx.cr0.eq) goto loc_826BA35C;
	// lwz r28,80(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x826ba2f0
	if (ctx.cr6.eq) goto loc_826BA2F0;
	// lwz r29,80(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// b 0x826ba2f4
	goto loc_826BA2F4;
loc_826BA2F0:
	// li r29,0
	ctx.r29.s64 = 0;
loc_826BA2F4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82833180
	ctx.lr = 0x826BA2FC;
	sub_82833180(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-8531
	ctx.r10.s64 = -559087616;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// addi r11,r11,-17320
	ctx.r11.s64 = ctx.r11.s64 + -17320;
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
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
	// lwz r11,620(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 620);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lwz r11,624(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 624);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lwz r11,628(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 628);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lwz r11,572(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 572);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lwz r11,576(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 576);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// lwz r11,580(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 580);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x826ba360
	goto loc_826BA360;
loc_826BA35C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_826BA360:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x826BA370;
	sub_82833A30(ctx, base);
loc_826BA370:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826ba37c
	goto loc_826BA37C;
loc_826BA378:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826BA37C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826BA388"))) PPC_WEAK_FUNC(sub_826BA388);
PPC_FUNC_IMPL(__imp__sub_826BA388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x826BA390;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,800(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 800);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826ba3c8
	if (ctx.cr6.eq) goto loc_826BA3C8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826BA3C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x826ba3cc
	goto loc_826BA3CC;
loc_826BA3C8:
	// li r31,0
	ctx.r31.s64 = 0;
loc_826BA3CC:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x826ba3f0
	if (ctx.cr6.eq) goto loc_826BA3F0;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826BA3E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x826ba3f4
	goto loc_826BA3F4;
loc_826BA3F0:
	// li r29,0
	ctx.r29.s64 = 0;
loc_826BA3F4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826ba498
	if (ctx.cr6.eq) goto loc_826BA498;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// ld r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r30.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,1816(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1816);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826BA428;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x826ba498
	if (ctx.cr6.eq) goto loc_826BA498;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,1848(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1848);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826BA444;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826ba498
	if (!ctx.cr0.eq) goto loc_826BA498;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1840(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1840);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826BA470;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r11,1844(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1844);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826BA498;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826BA498:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826BA4A0"))) PPC_WEAK_FUNC(sub_826BA4A0);
PPC_FUNC_IMPL(__imp__sub_826BA4A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x826BA4A8;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lwz r10,28(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// lwz r9,32(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x8281d960
	ctx.lr = 0x826BA4E0;
	sub_8281D960(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826ba4fc
	if (ctx.cr0.eq) goto loc_826BA4FC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826BA4F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x826ba500
	goto loc_826BA500;
loc_826BA4FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826BA500:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826ba570
	if (ctx.cr6.eq) goto loc_826BA570;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1848(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1848);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826BA518;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826ba570
	if (!ctx.cr0.eq) goto loc_826BA570;
	// lwz r11,1568(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1568);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826ba570
	if (!ctx.cr6.gt) goto loc_826BA570;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r31,0
	ctx.r31.s64 = 0;
	// lfs f31,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f31.f64 = double(temp.f32);
loc_826BA53C:
	// lwz r11,1564(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1564);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x8271d1c8
	ctx.lr = 0x826BA55C;
	sub_8271D1C8(ctx, base);
	// lwz r11,1568(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1568);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826ba53c
	if (ctx.cr6.lt) goto loc_826BA53C;
loc_826BA570:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826BA580"))) PPC_WEAK_FUNC(sub_826BA580);
PPC_FUNC_IMPL(__imp__sub_826BA580) {
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
	// lis r11,4100
	ctx.r11.s64 = 268697600;
	// lwz r10,64(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r11,r11,1535
	ctx.r11.u64 = ctx.r11.u64 | 1535;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x826ba6ac
	if (!ctx.cr6.eq) goto loc_826BA6AC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// ld r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 4);
	// rldicr r5,r9,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,1128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1128);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826BA5D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lfs f1,16668(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16668);
	ctx.f1.f64 = double(temp.f32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82332e18
	ctx.lr = 0x826BA600;
	sub_82332E18(ctx, base);
	// lfs f0,576(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// fmuls f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,580(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	ctx.f9.f64 = double(temp.f32);
	// addi r4,r31,572
	ctx.r4.s64 = ctx.r31.s64 + 572;
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// fmr f6,f9
	ctx.f6.f64 = ctx.f9.f64;
	// lfs f8,572(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	ctx.f8.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f0,-27300(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27300);
	ctx.f0.f64 = double(temp.f32);
	// fmr f4,f8
	ctx.f4.f64 = ctx.f8.f64;
	// fmuls f7,f11,f0
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmuls f5,f12,f0
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,576(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f11,f9,f11,f10
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fmadds f12,f8,f12,f11
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f11.f64));
	// fmuls f11,f7,f12
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmuls f10,f5,f12
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// fsubs f12,f6,f11
	ctx.f12.f64 = double(float(ctx.f6.f64 - ctx.f11.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fsubs f12,f4,f10
	ctx.f12.f64 = double(float(ctx.f4.f64 - ctx.f10.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r11.u32);
	// stw r9,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r9.u32);
	// stw r10,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r10.u32);
	// bl 0x82817280
	ctx.lr = 0x826BA690;
	sub_82817280(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,316(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 316);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826BA6A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826ba6b0
	goto loc_826BA6B0;
loc_826BA6AC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826BA6B0:
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

__attribute__((alias("__imp__sub_826BA6C8"))) PPC_WEAK_FUNC(sub_826BA6C8);
PPC_FUNC_IMPL(__imp__sub_826BA6C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x826BA6D0;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x826ba1f0
	ctx.lr = 0x826BA6E8;
	sub_826BA1F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826bac00
	if (!ctx.cr0.eq) goto loc_826BAC00;
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,28(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// lwz r9,32(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x8281d960
	ctx.lr = 0x826BA710;
	sub_8281D960(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// li r24,0
	ctx.r24.s64 = 0;
	// beq 0x826ba738
	if (ctx.cr0.eq) goto loc_826BA738;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826BA730;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x826ba73c
	goto loc_826BA73C;
loc_826BA738:
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
loc_826BA73C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x826ba760
	if (ctx.cr6.eq) goto loc_826BA760;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,572(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 572);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826BA758;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// b 0x826ba764
	goto loc_826BA764;
loc_826BA760:
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
loc_826BA764:
	// lwz r3,800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// bl 0x82333a20
	ctx.lr = 0x826BA76C;
	sub_82333A20(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826ba784
	if (ctx.cr0.eq) goto loc_826BA784;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x826ba784
	if (ctx.cr6.eq) goto loc_826BA784;
	// cmplw cr6,r29,r3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x826ba79c
	if (ctx.cr6.eq) goto loc_826BA79C;
loc_826BA784:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x826ba7a4
	if (ctx.cr6.eq) goto loc_826BA7A4;
	// lwz r11,800(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 800);
	// lwz r10,800(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x826ba7a4
	if (!ctx.cr6.eq) goto loc_826BA7A4;
loc_826BA79C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826bac04
	goto loc_826BAC04;
loc_826BA7A4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x826ba880
	if (ctx.cr6.eq) goto loc_826BA880;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,1824(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1824);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826BA7CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826ba4a0
	ctx.lr = 0x826BA7E0;
	sub_826BA4A0(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826ba388
	ctx.lr = 0x826BA7F8;
	sub_826BA388(ctx, base);
	// lwz r3,800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x826ba840
	if (ctx.cr6.eq) goto loc_826BA840;
	// bl 0x82332988
	ctx.lr = 0x826BA808;
	sub_82332988(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826ba840
	if (ctx.cr0.eq) goto loc_826BA840;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1872);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826BA820;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826ba840
	if (ctx.cr0.eq) goto loc_826BA840;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,47
	ctx.r4.s64 = 47;
	// lwz r11,136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826BA840;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826BA840:
	// lwz r5,1600(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1600);
	// lwz r11,2624(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2624);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x826ba8e8
	if (ctx.cr6.eq) goto loc_826BA8E8;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// stw r5,2624(r29)
	PPC_STORE_U32(ctx.r29.u32 + 2624, ctx.r5.u32);
	// lis r4,12499
	ctx.r4.s64 = 819134464;
	// lwz r6,80(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// ori r4,r4,23802
	ctx.r4.u64 = ctx.r4.u64 | 23802;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,904(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,336(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 336);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826BA87C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x826ba8e8
	goto loc_826BA8E8;
loc_826BA880:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x826ba8e8
	if (ctx.cr6.eq) goto loc_826BA8E8;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826ba388
	ctx.lr = 0x826BA8A0;
	sub_826BA388(ctx, base);
	// lwz r3,800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x826ba8e8
	if (ctx.cr6.eq) goto loc_826BA8E8;
	// bl 0x82332988
	ctx.lr = 0x826BA8B0;
	sub_82332988(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826ba8e8
	if (ctx.cr0.eq) goto loc_826BA8E8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1872);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826BA8C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826ba8e8
	if (ctx.cr0.eq) goto loc_826BA8E8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,47
	ctx.r4.s64 = 47;
	// lwz r11,136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826BA8E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826BA8E8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,1492(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// lwz r4,444(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 444);
	// lwz r11,888(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 888);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826BA904;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1172(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1172);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826BA920;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826ba79c
	if (!ctx.cr0.eq) goto loc_826BA79C;
	// lwz r11,1716(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1716);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826ba980
	if (ctx.cr6.eq) goto loc_826BA980;
	// lwz r11,1784(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1784);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826ba980
	if (ctx.cr6.eq) goto loc_826BA980;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// ld r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 4);
	// rldicr r5,r9,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,1128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1128);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826BA96C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1784(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1784);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,1784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1784, ctx.r11.u32);
	// b 0x826bac04
	goto loc_826BAC04;
loc_826BA980:
	// lwz r11,1712(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1712);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826babd4
	if (ctx.cr6.eq) goto loc_826BABD4;
	// lwz r11,1780(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1780);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826babd4
	if (!ctx.cr6.gt) goto loc_826BABD4;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,15834
	ctx.r4.s64 = ctx.r11.s64 + 15834;
	// bl 0x8233a258
	ctx.lr = 0x826BA9A8;
	sub_8233A258(ctx, base);
	// lis r4,3351
	ctx.r4.s64 = 219611136;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r4,r4,18914
	ctx.r4.u64 = ctx.r4.u64 | 18914;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c3740
	ctx.lr = 0x826BA9BC;
	sub_829C3740(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x826baacc
	if (ctx.cr6.eq) goto loc_826BAACC;
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r24.u32);
	// stw r24,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r24.u32);
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// stw r24,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r24.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r24,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r24.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r24,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f1,24020(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24020);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x824f0670
	ctx.lr = 0x826BA9FC;
	sub_824F0670(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ld r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 4);
	// rldicr r5,r9,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// beq cr6,0x826baab4
	if (ctx.cr6.eq) goto loc_826BAAB4;
	// lwz r11,1128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1128);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826BAA34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lfs f11,620(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 620);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f10,624(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 624);
	ctx.f10.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f1,16668(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16668);
	ctx.f1.f64 = double(temp.f32);
	// lfs f11,628(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 628);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82332e18
	ctx.lr = 0x826BAA78;
	sub_82332E18(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,1088(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1088);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826BAA98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// lwz r11,1780(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1780);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lfs f0,24000(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24000);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,1780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1780, ctx.r11.u32);
	// stfs f0,1864(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1864, temp.u32);
	// b 0x826baac0
	goto loc_826BAAC0;
loc_826BAAB4:
	// lwz r11,1116(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826BAAC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826BAAC0:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82400f38
	ctx.lr = 0x826BAAC8;
	sub_82400F38(ctx, base);
	// b 0x826ba79c
	goto loc_826BA79C;
loc_826BAACC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// ld r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 4);
	// rldicr r5,r9,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,1128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1128);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826BAAF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lfs f1,16668(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16668);
	ctx.f1.f64 = double(temp.f32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82332e18
	ctx.lr = 0x826BAB20;
	sub_82332E18(ctx, base);
	// lfs f0,576(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// fmuls f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,580(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	ctx.f9.f64 = double(temp.f32);
	// addi r4,r31,572
	ctx.r4.s64 = ctx.r31.s64 + 572;
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// fmr f6,f9
	ctx.f6.f64 = ctx.f9.f64;
	// lfs f8,572(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	ctx.f8.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f0,-27300(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27300);
	ctx.f0.f64 = double(temp.f32);
	// fmr f4,f8
	ctx.f4.f64 = ctx.f8.f64;
	// fmuls f7,f11,f0
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmuls f5,f12,f0
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,576(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f11,f9,f11,f10
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fmadds f12,f12,f8,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f8.f64 + ctx.f11.f64));
	// fmuls f11,f7,f12
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmuls f10,f5,f12
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// fsubs f12,f6,f11
	ctx.f12.f64 = double(float(ctx.f6.f64 - ctx.f11.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fsubs f12,f4,f10
	ctx.f12.f64 = double(float(ctx.f4.f64 - ctx.f10.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r11.u32);
	// stw r9,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r9.u32);
	// stw r10,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r10.u32);
	// bl 0x82817280
	ctx.lr = 0x826BABB0;
	sub_82817280(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,316(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 316);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826BABC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1780(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1780);
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// stw r11,1780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1780, ctx.r11.u32);
	// b 0x826ba79c
	goto loc_826BA79C;
loc_826BABD4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// ld r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 4);
	// rldicr r5,r9,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,1116(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826BAC00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826BAC00:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826BAC04:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826BAC10"))) PPC_WEAK_FUNC(sub_826BAC10);
PPC_FUNC_IMPL(__imp__sub_826BAC10) {
	PPC_FUNC_PROLOGUE();
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x826bac64
	if (ctx.cr6.eq) goto loc_826BAC64;
	// lwz r5,40(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x826bac64
	if (ctx.cr6.eq) goto loc_826BAC64;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,904(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	// beq cr6,0x826bac5c
	if (ctx.cr6.eq) goto loc_826BAC5C;
	// lwz r6,80(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// b 0x826bac8c
	goto loc_826BAC8C;
loc_826BAC5C:
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x826bac8c
	goto loc_826BAC8C;
loc_826BAC64:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,904(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	// beq cr6,0x826bac80
	if (ctx.cr6.eq) goto loc_826BAC80;
	// lwz r6,80(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// b 0x826bac84
	goto loc_826BAC84;
loc_826BAC80:
	// li r6,0
	ctx.r6.s64 = 0;
loc_826BAC84:
	// lis r5,12421
	ctx.r5.s64 = 814022656;
	// ori r5,r5,40830
	ctx.r5.u64 = ctx.r5.u64 | 40830;
loc_826BAC8C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r4,740
	ctx.r4.s64 = 48496640;
	// ori r4,r4,17019
	ctx.r4.u64 = ctx.r4.u64 | 17019;
	// lwz r11,336(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 336);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826BACA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,15834
	ctx.r4.s64 = ctx.r11.s64 + 15834;
	// bl 0x8233a258
	ctx.lr = 0x826BACB4;
	sub_8233A258(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c3740
	ctx.lr = 0x826BACC4;
	sub_829C3740(ctx, base);
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

__attribute__((alias("__imp__sub_826BACE0"))) PPC_WEAK_FUNC(sub_826BACE0);
PPC_FUNC_IMPL(__imp__sub_826BACE0) {
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
	// std r7,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r7.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x828b2f60
	ctx.lr = 0x826BAD04;
	sub_828B2F60(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826bad1c
	if (ctx.cr0.eq) goto loc_826BAD1C;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,-28788(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28788);
	ctx.f0.f64 = double(temp.f32);
	// b 0x826bad30
	goto loc_826BAD30;
loc_826BAD1C:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f13,1868(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1868);
	ctx.f13.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
loc_826BAD30:
	// stfs f0,1868(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1868, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BAD48"))) PPC_WEAK_FUNC(sub_826BAD48);
PPC_FUNC_IMPL(__imp__sub_826BAD48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8284c7e8
	ctx.lr = 0x826BAD64;
	sub_8284C7E8(ctx, base);
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
	// addi r3,r31,312
	ctx.r3.s64 = ctx.r31.s64 + 312;
	// bl 0x82332d50
	ctx.lr = 0x826BAD80;
	sub_82332D50(ctx, base);
	// lwz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826bad94
	if (ctx.cr0.eq) goto loc_826BAD94;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
loc_826BAD94:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BADB0"))) PPC_WEAK_FUNC(sub_826BADB0);
PPC_FUNC_IMPL(__imp__sub_826BADB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x826BADB8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,960(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 960);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x826badf0
	if (!ctx.cr6.eq) goto loc_826BADF0;
	// lwz r11,1704(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1704);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826badf0
	if (!ctx.cr6.eq) goto loc_826BADF0;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,1704(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1704, ctx.r10.u32);
	// lwz r11,1124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826BADF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826BADF0:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// addi r29,r11,312
	ctx.r29.s64 = ctx.r11.s64 + 312;
	// lwz r11,328(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 328);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826bae58
	if (!ctx.cr6.gt) goto loc_826BAE58;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_826BAE14:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x826bae44
	if (!ctx.cr6.eq) goto loc_826BAE44;
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
	ctx.lr = 0x826BAE3C;
	sub_82332CA8(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
loc_826BAE44:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826bae14
	if (ctx.cr6.lt) goto loc_826BAE14;
loc_826BAE58:
	// lwz r3,1604(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1604);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826bae78
	if (ctx.cr6.eq) goto loc_826BAE78;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,1096(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1096);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826BAE78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826BAE78:
	// lwz r11,1568(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1568);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826baec4
	if (!ctx.cr6.gt) goto loc_826BAEC4;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_826BAE8C:
	// lwz r11,1564(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1564);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826baeb0
	if (ctx.cr6.eq) goto loc_826BAEB0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826BAEB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826BAEB0:
	// lwz r11,1568(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1568);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826bae8c
	if (ctx.cr6.lt) goto loc_826BAE8C;
loc_826BAEC4:
	// lwz r11,1572(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1572);
	// addi r3,r28,1552
	ctx.r3.s64 = ctx.r28.s64 + 1552;
	// stw r27,1568(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1568, ctx.r27.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826baee8
	if (ctx.cr6.eq) goto loc_826BAEE8;
	// stw r27,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r27.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82332c38
	ctx.lr = 0x826BAEE8;
	sub_82332C38(ctx, base);
loc_826BAEE8:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,1016(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1016);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826BAEFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x829bd978
	ctx.lr = 0x826BAF04;
	sub_829BD978(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826BAF10"))) PPC_WEAK_FUNC(sub_826BAF10);
PPC_FUNC_IMPL(__imp__sub_826BAF10) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lfs f0,1864(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1864);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x826bafbc
	if (!ctx.cr6.gt) goto loc_826BAFBC;
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f13
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f11,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,1872(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1872);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f11,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f12.f64));
	// fmadds f12,f10,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fsqrts f12,f12
	ctx.f12.f64 = double(float(sqrt(ctx.f12.f64)));
	// fadds f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x826bafb8
	if (!ctx.cr6.gt) goto loc_826BAFB8;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// fsubs f31,f0,f13
	ctx.f31.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,16668(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16668);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82332e18
	ctx.lr = 0x826BAF84;
	sub_82332E18(ctx, base);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f31,f13
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f13.f64));
	// fmuls f12,f31,f12
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f12.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f0,1872(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1872);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f0,1872(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1872, temp.u32);
	// b 0x826bafbc
	goto loc_826BAFBC;
loc_826BAFB8:
	// stfs f12,1872(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1872, temp.u32);
loc_826BAFBC:
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

__attribute__((alias("__imp__sub_826BAFD8"))) PPC_WEAK_FUNC(sub_826BAFD8);
PPC_FUNC_IMPL(__imp__sub_826BAFD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x826BAFE0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r24,-31949
	ctx.r24.s64 = -2093809664;
	// lwz r11,1704(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1704);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826bb140
	if (ctx.cr6.eq) goto loc_826BB140;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826BB008;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x826bb144
	if (!ctx.cr6.eq) goto loc_826BB144;
	// lwz r11,13024(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13024);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
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
	ctx.lr = 0x826BB038;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826bb054
	if (!ctx.cr6.gt) goto loc_826BB054;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// b 0x826bb128
	goto loc_826BB128;
loc_826BB054:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826bb0f4
	if (!ctx.cr6.eq) goto loc_826BB0F4;
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
	ctx.lr = 0x826BB078;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,964(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 964);
	// addi r28,r26,948
	ctx.r28.s64 = ctx.r26.s64 + 948;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826bb0d4
	if (!ctx.cr6.gt) goto loc_826BB0D4;
	// li r29,0
	ctx.r29.s64 = 0;
loc_826BB090:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826bb0c0
	if (!ctx.cr6.eq) goto loc_826BB0C0;
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
	ctx.lr = 0x826BB0B8;
	sub_82332CA8(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
loc_826BB0C0:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826bb090
	if (ctx.cr6.lt) goto loc_826BB090;
loc_826BB0D4:
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
	ctx.lr = 0x826BB0F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826BB0F4:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826bb128
	if (!ctx.cr0.eq) goto loc_826BB128;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826BB114;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826bb128
	if (ctx.cr0.eq) goto loc_826BB128;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r26,924
	ctx.r3.s64 = ctx.r26.s64 + 924;
	// bl 0x82410060
	ctx.lr = 0x826BB128;
	sub_82410060(ctx, base);
loc_826BB128:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826BB13C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x826bb144
	goto loc_826BB144;
loc_826BB140:
	// bl 0x826bb658
	ctx.lr = 0x826BB144;
	sub_826BB658(ctx, base);
loc_826BB144:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,1864(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1864);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x826bb2a4
	if (!ctx.cr6.gt) goto loc_826BB2A4;
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x826bb2a4
	if (!ctx.cr6.eq) goto loc_826BB2A4;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826bb2a4
	if (!ctx.cr0.eq) goto loc_826BB2A4;
	// lfs f13,1872(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1872);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x826bb2a4
	if (ctx.cr6.lt) goto loc_826BB2A4;
	// lwz r11,13024(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13024);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
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
	ctx.lr = 0x826BB1A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826bb1bc
	if (!ctx.cr6.gt) goto loc_826BB1BC;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// b 0x826bb290
	goto loc_826BB290;
loc_826BB1BC:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826bb25c
	if (!ctx.cr6.eq) goto loc_826BB25C;
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
	ctx.lr = 0x826BB1E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,964(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 964);
	// addi r28,r26,948
	ctx.r28.s64 = ctx.r26.s64 + 948;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826bb23c
	if (!ctx.cr6.gt) goto loc_826BB23C;
	// li r29,0
	ctx.r29.s64 = 0;
loc_826BB1F8:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826bb228
	if (!ctx.cr6.eq) goto loc_826BB228;
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
	ctx.lr = 0x826BB220;
	sub_82332CA8(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
loc_826BB228:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826bb1f8
	if (ctx.cr6.lt) goto loc_826BB1F8;
loc_826BB23C:
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
	ctx.lr = 0x826BB25C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826BB25C:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826bb290
	if (!ctx.cr0.eq) goto loc_826BB290;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826BB27C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826bb290
	if (ctx.cr0.eq) goto loc_826BB290;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r26,924
	ctx.r3.s64 = ctx.r26.s64 + 924;
	// bl 0x82410060
	ctx.lr = 0x826BB290;
	sub_82410060(ctx, base);
loc_826BB290:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826BB2A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826BB2A4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826BB2B0"))) PPC_WEAK_FUNC(sub_826BB2B0);
PPC_FUNC_IMPL(__imp__sub_826BB2B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9ec
	ctx.lr = 0x826BB2B8;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x826bb564
	if (ctx.cr6.eq) goto loc_826BB564;
	// lwz r11,1584(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1584);
	// lis r24,-31949
	ctx.r24.s64 = -2093809664;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826bb420
	if (ctx.cr6.eq) goto loc_826BB420;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x826bb420
	if (!ctx.cr6.eq) goto loc_826BB420;
	// lwz r11,13024(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13024);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
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
	ctx.lr = 0x826BB31C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826bb338
	if (!ctx.cr6.gt) goto loc_826BB338;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// b 0x826bb40c
	goto loc_826BB40C;
loc_826BB338:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826bb3d8
	if (!ctx.cr6.eq) goto loc_826BB3D8;
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
	ctx.lr = 0x826BB35C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,964(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 964);
	// addi r28,r26,948
	ctx.r28.s64 = ctx.r26.s64 + 948;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826bb3b8
	if (!ctx.cr6.gt) goto loc_826BB3B8;
	// li r29,0
	ctx.r29.s64 = 0;
loc_826BB374:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826bb3a4
	if (!ctx.cr6.eq) goto loc_826BB3A4;
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
	ctx.lr = 0x826BB39C;
	sub_82332CA8(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
loc_826BB3A4:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826bb374
	if (ctx.cr6.lt) goto loc_826BB374;
loc_826BB3B8:
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
	ctx.lr = 0x826BB3D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826BB3D8:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826bb40c
	if (!ctx.cr0.eq) goto loc_826BB40C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826BB3F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826bb40c
	if (ctx.cr0.eq) goto loc_826BB40C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r26,924
	ctx.r3.s64 = ctx.r26.s64 + 924;
	// bl 0x82410060
	ctx.lr = 0x826BB40C;
	sub_82410060(ctx, base);
loc_826BB40C:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826BB420;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826BB420:
	// lwz r11,1580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1580);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826bb564
	if (ctx.cr6.eq) goto loc_826BB564;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x826bb564
	if (!ctx.cr6.eq) goto loc_826BB564;
	// lwz r11,13024(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13024);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
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
	ctx.lr = 0x826BB460;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826bb47c
	if (!ctx.cr6.gt) goto loc_826BB47C;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// b 0x826bb550
	goto loc_826BB550;
loc_826BB47C:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826bb51c
	if (!ctx.cr6.eq) goto loc_826BB51C;
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
	ctx.lr = 0x826BB4A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,964(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 964);
	// addi r28,r26,948
	ctx.r28.s64 = ctx.r26.s64 + 948;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826bb4fc
	if (!ctx.cr6.gt) goto loc_826BB4FC;
	// li r29,0
	ctx.r29.s64 = 0;
loc_826BB4B8:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826bb4e8
	if (!ctx.cr6.eq) goto loc_826BB4E8;
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
	ctx.lr = 0x826BB4E0;
	sub_82332CA8(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
loc_826BB4E8:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826bb4b8
	if (ctx.cr6.lt) goto loc_826BB4B8;
loc_826BB4FC:
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
	ctx.lr = 0x826BB51C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826BB51C:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826bb550
	if (!ctx.cr0.eq) goto loc_826BB550;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826BB53C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826bb550
	if (ctx.cr0.eq) goto loc_826BB550;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r26,924
	ctx.r3.s64 = ctx.r26.s64 + 924;
	// bl 0x82410060
	ctx.lr = 0x826BB550;
	sub_82410060(ctx, base);
loc_826BB550:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826BB564;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826BB564:
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8284cab8
	ctx.lr = 0x826BB578;
	sub_8284CAB8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82a4ea3c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826BB580"))) PPC_WEAK_FUNC(sub_826BB580);
PPC_FUNC_IMPL(__imp__sub_826BB580) {
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
	// std r4,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r4.u64);
	// std r5,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r5.u64);
	// std r6,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r6.u64);
	// std r7,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r7.u64);
	// lwz r11,1704(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1704);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826bb640
	if (!ctx.cr6.eq) goto loc_826BB640;
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,148(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lwz r7,152(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// addi r3,r31,1620
	ctx.r3.s64 = ctx.r31.s64 + 1620;
	// stw r10,1704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1704, ctx.r10.u32);
	// stw r11,1620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1620, ctx.r11.u32);
	// stw r9,1624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1624, ctx.r9.u32);
	// lfs f1,16668(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 16668);
	ctx.f1.f64 = double(temp.f32);
	// stw r7,1628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1628, ctx.r7.u32);
	// bl 0x82332e18
	ctx.lr = 0x826BB5E0;
	sub_82332E18(ctx, base);
	// lfs f12,1648(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1648);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,1660(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1660);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// lfs f11,1624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1624);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,1628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1628);
	ctx.f10.f64 = double(temp.f32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,30996(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30996);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f12,1620(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1620);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f13,1620(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1620, temp.u32);
	// fmuls f13,f11,f0
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f13,1624(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1624, temp.u32);
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f0,1628(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1628, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,704(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 704);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// lwz r11,460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 460);
	// stw r10,704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 704, ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826BB640;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826BB640:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BB658"))) PPC_WEAK_FUNC(sub_826BB658);
PPC_FUNC_IMPL(__imp__sub_826BB658) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9ec
	ctx.lr = 0x826BB660;
	__savegprlr_21(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// addi r11,r30,572
	ctx.r11.s64 = ctx.r30.s64 + 572;
	// lfs f0,576(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 576);
	ctx.f0.f64 = double(temp.f32);
	// lwz r27,620(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 620);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,572(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 572);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,580(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 580);
	ctx.f11.f64 = double(temp.f32);
	// lwz r26,624(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 624);
	// lwz r25,628(r30)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + 628);
	// lfs f12,908(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f12.f64 = double(temp.f32);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f11,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bne cr6,0x826bb6d4
	if (!ctx.cr6.eq) goto loc_826BB6D4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lfs f11,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// b 0x826bb714
	goto loc_826BB714;
loc_826BB6D4:
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f11,16668(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16668);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x826bb6f8
	if (!ctx.cr6.lt) goto loc_826BB6F8;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f13,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f13.f64 = double(temp.f32);
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
	// fmr f11,f13
	ctx.f11.f64 = ctx.f13.f64;
	// b 0x826bb714
	goto loc_826BB714;
loc_826BB6F8:
	// fsqrts f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fdivs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// fmuls f12,f11,f0
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f11,f10,f0
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
loc_826BB714:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f10,1504(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1504);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f9.f64 = double(temp.f32);
	// lis r23,-31949
	ctx.r23.s64 = -2093809664;
	// lfs f8,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f8.f64 = double(temp.f32);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lfs f7,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f7.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r6,r10,13868
	ctx.r6.s64 = ctx.r10.s64 + 13868;
	// lfs f0,-25080(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -25080);
	ctx.f0.f64 = double(temp.f32);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// fmuls f6,f13,f0
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// li r7,1
	ctx.r7.s64 = 1;
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,13024(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 13024);
	// fmuls f0,f6,f10
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f10.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f13,f12,f10
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f12,f11,f10
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fadds f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fadds f13,f8,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 + ctx.f13.f64));
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fadds f0,f7,f12
	ctx.f0.f64 = double(float(ctx.f7.f64 + ctx.f12.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x828253c8
	ctx.lr = 0x826BB790;
	sub_828253C8(ctx, base);
	// mr. r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// mr r22,r24
	ctx.r22.u64 = ctx.r24.u64;
	// beq 0x826bb858
	if (ctx.cr0.eq) goto loc_826BB858;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r28,r11,-17320
	ctx.r28.s64 = ctx.r11.s64 + -17320;
loc_826BB7A4:
	// lwz r3,64(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826bb844
	if (ctx.cr6.eq) goto loc_826BB844;
	// bl 0x824395b8
	ctx.lr = 0x826BB7B4;
	sub_824395B8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,1848(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1848);
	// lwz r10,1692(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1692);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x826bb844
	if (ctx.cr6.eq) goto loc_826BB844;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82833108
	ctx.lr = 0x826BB7D0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826bb834
	if (ctx.cr0.eq) goto loc_826BB834;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,80(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// lwz r21,80(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// bl 0x82833180
	ctx.lr = 0x826BB7E8;
	sub_82833180(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lis r9,-8531
	ctx.r9.s64 = -559087616;
	// lwz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r9,r9,47806
	ctx.r9.u64 = ctx.r9.u64 | 47806;
	// stw r21,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r21.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r7,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r7.u32);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// stw r27,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r27.u32);
	// stw r26,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r26.u32);
	// stw r25,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r25.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// stw r8,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r8.u32);
	// b 0x826bb838
	goto loc_826BB838;
loc_826BB834:
	// li r4,0
	ctx.r4.s64 = 0;
loc_826BB838:
	// lwz r11,13024(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x826BB844;
	sub_82833A30(ctx, base);
loc_826BB844:
	// lwz r22,68(r22)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r22.u32 + 68);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// bne cr6,0x826bb7a4
	if (!ctx.cr6.eq) goto loc_826BB7A4;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82332db8
	ctx.lr = 0x826BB858;
	sub_82332DB8(ctx, base);
loc_826BB858:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82a4ea3c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826BB860"))) PPC_WEAK_FUNC(sub_826BB860);
PPC_FUNC_IMPL(__imp__sub_826BB860) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x826BB868;
	__savegprlr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// std r29,240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 240, ctx.r29.u64);
	// li r28,0
	ctx.r28.s64 = 0;
	// std r5,248(r1)
	PPC_STORE_U64(ctx.r1.u32 + 248, ctx.r5.u64);
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// stw r30,1540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1540, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x826bb950
	if (ctx.cr6.eq) goto loc_826BB950;
	// lwz r11,824(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 824);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826bb950
	if (!ctx.cr6.eq) goto loc_826BB950;
	// lwz r11,816(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 816);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826bb950
	if (!ctx.cr6.eq) goto loc_826BB950;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f13,1516(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1516);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x826bb950
	if (!ctx.cr6.eq) goto loc_826BB950;
	// lwz r11,572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r9,576(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r8,580(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// lfs f1,16668(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16668);
	ctx.f1.f64 = double(temp.f32);
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// stw r8,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r8.u32);
	// bl 0x82332e18
	ctx.lr = 0x826BB8E8;
	sub_82332E18(ctx, base);
	// lfs f13,1512(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1512);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f13.u64);
	// lfs f0,1520(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1520);
	ctx.f0.f64 = double(temp.f32);
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lfs f12,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,628(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r10,1532(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1532);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,1536(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1536);
	// ld r6,620(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 620);
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// lfs f13,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// ld r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// lfs f13,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// rldicr r9,r11,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x829c21d0
	ctx.lr = 0x826BB950;
	sub_829C21D0(ctx, base);
loc_826BB950:
	// lwz r11,1712(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1712);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826bba6c
	if (ctx.cr6.eq) goto loc_826BBA6C;
	// lwz r11,1780(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1780);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826bba6c
	if (!ctx.cr6.gt) goto loc_826BBA6C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r10,248(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,628(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	// ld r4,620(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 620);
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r5,r9,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,1128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1128);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826BB994;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f11,248(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	ctx.f11.f64 = double(temp.f32);
	// addi r4,r31,572
	ctx.r4.s64 = ctx.r31.s64 + 572;
	// lfs f13,240(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f12,244(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	ctx.f12.f64 = double(temp.f32);
	// lfs f8,576(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,-27300(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27300);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f7,572(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f4,576(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f12,f8,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fmr f5,f7
	ctx.f5.f64 = ctx.f7.f64;
	// lfs f8,580(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	ctx.f8.f64 = double(temp.f32);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmadds f12,f8,f11,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f11.f64 + ctx.f12.f64));
	// fmr f6,f8
	ctx.f6.f64 = ctx.f8.f64;
	// fmadds f13,f13,f7,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f7.f64 + ctx.f12.f64));
	// fmuls f12,f10,f13
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f11,f9,f13
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fsubs f13,f6,f12
	ctx.f13.f64 = double(float(ctx.f6.f64 - ctx.f12.f64));
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fsubs f0,f4,f0
	ctx.f0.f64 = double(float(ctx.f4.f64 - ctx.f0.f64));
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fsubs f13,f5,f11
	ctx.f13.f64 = double(float(ctx.f5.f64 - ctx.f11.f64));
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r11,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r11.u32);
	// stw r9,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r9.u32);
	// stw r10,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r10.u32);
	// bl 0x82817280
	ctx.lr = 0x826BBA24;
	sub_82817280(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,316(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 316);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826BBA38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1780(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1780);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r4,r10,15834
	ctx.r4.s64 = ctx.r10.s64 + 15834;
	// stw r11,1780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1780, ctx.r11.u32);
	// bl 0x8233a258
	ctx.lr = 0x826BBA54;
	sub_8233A258(ctx, base);
	// lis r4,3351
	ctx.r4.s64 = 219611136;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r4,r4,18914
	ctx.r4.u64 = ctx.r4.u64 | 18914;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c3740
	ctx.lr = 0x826BBA68;
	sub_829C3740(ctx, base);
	// b 0x826bba98
	goto loc_826BBA98;
loc_826BBA6C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r10,248(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,628(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	// ld r4,620(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 620);
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r5,r9,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,1116(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826BBA98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826BBA98:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r5,1492(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r28,1540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1540, ctx.r28.u32);
	// lwz r11,888(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 888);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826BBAB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826BBAC0"))) PPC_WEAK_FUNC(sub_826BBAC0);
PPC_FUNC_IMPL(__imp__sub_826BBAC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// beq cr6,0x826bbb04
	if (ctx.cr6.eq) goto loc_826BBB04;
	// bl 0x826bbb20
	ctx.lr = 0x826BBAE0;
	sub_826BBB20(ctx, base);
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
	ctx.lr = 0x826BBAF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x826bbb08
	if (!ctx.cr0.eq) goto loc_826BBB08;
loc_826BBB04:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826BBB08:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BBB20"))) PPC_WEAK_FUNC(sub_826BBB20);
PPC_FUNC_IMPL(__imp__sub_826BBB20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,13716
	ctx.r31.s64 = ctx.r11.s64 + 13716;
	// lwz r11,13712(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13712);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826bbb68
	if (!ctx.cr0.eq) goto loc_826BBB68;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-17340
	ctx.r9.s64 = ctx.r9.s64 + -17340;
	// stw r11,13712(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13712, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,28736
	ctx.r3.s64 = ctx.r11.s64 + 28736;
	// bl 0x82a4c758
	ctx.lr = 0x826BBB68;
	sub_82A4C758(ctx, base);
loc_826BBB68:
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

__attribute__((alias("__imp__sub_826BBB80"))) PPC_WEAK_FUNC(sub_826BBB80);
PPC_FUNC_IMPL(__imp__sub_826BBB80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,23896(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23896);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826bbbc0
	if (!ctx.cr0.eq) goto loc_826BBBC0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// stw r11,23896(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23896, ctx.r11.u32);
	// addi r3,r9,-17416
	ctx.r3.s64 = ctx.r9.s64 + -17416;
	// bl 0x82816528
	ctx.lr = 0x826BBBB8;
	sub_82816528(ctx, base);
	// stw r3,23892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23892, ctx.r3.u32);
	// b 0x826bbbc4
	goto loc_826BBBC4;
loc_826BBBC0:
	// lwz r3,23892(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23892);
loc_826BBBC4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BBBD8"))) PPC_WEAK_FUNC(sub_826BBBD8);
PPC_FUNC_IMPL(__imp__sub_826BBBD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826bbb20
	ctx.lr = 0x826BBBF8;
	sub_826BBB20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826BBC0C;
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

__attribute__((alias("__imp__sub_826BBC28"))) PPC_WEAK_FUNC(sub_826BBC28);
PPC_FUNC_IMPL(__imp__sub_826BBC28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826bbc78
	ctx.lr = 0x826BBC48;
	sub_826BBC78(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x826bbc5c
	if (ctx.cr6.eq) goto loc_826BBC5C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333b08
	ctx.lr = 0x826BBC5C;
	sub_82333B08(ctx, base);
loc_826BBC5C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BBC78"))) PPC_WEAK_FUNC(sub_826BBC78);
PPC_FUNC_IMPL(__imp__sub_826BBC78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,23888
	ctx.r31.s64 = ctx.r11.s64 + 23888;
	// lwz r11,-19416(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19416);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826bbcc0
	if (!ctx.cr0.eq) goto loc_826BBCC0;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-17240
	ctx.r9.s64 = ctx.r9.s64 + -17240;
	// stw r11,-19416(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19416, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,28760
	ctx.r3.s64 = ctx.r11.s64 + 28760;
	// bl 0x82a4c758
	ctx.lr = 0x826BBCC0;
	sub_82A4C758(ctx, base);
loc_826BBCC0:
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

__attribute__((alias("__imp__sub_826BBCD8"))) PPC_WEAK_FUNC(sub_826BBCD8);
PPC_FUNC_IMPL(__imp__sub_826BBCD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,23884(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23884);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826bbd18
	if (!ctx.cr0.eq) goto loc_826BBD18;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// stw r11,23884(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23884, ctx.r11.u32);
	// addi r3,r9,-17388
	ctx.r3.s64 = ctx.r9.s64 + -17388;
	// bl 0x82816528
	ctx.lr = 0x826BBD10;
	sub_82816528(ctx, base);
	// stw r3,23880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23880, ctx.r3.u32);
	// b 0x826bbd1c
	goto loc_826BBD1C;
loc_826BBD18:
	// lwz r3,23880(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23880);
loc_826BBD1C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BBD30"))) PPC_WEAK_FUNC(sub_826BBD30);
PPC_FUNC_IMPL(__imp__sub_826BBD30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826bbc78
	ctx.lr = 0x826BBD50;
	sub_826BBC78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826BBD64;
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

__attribute__((alias("__imp__sub_826BBD80"))) PPC_WEAK_FUNC(sub_826BBD80);
PPC_FUNC_IMPL(__imp__sub_826BBD80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x826bbdb8
	if (ctx.cr6.eq) goto loc_826BBDB8;
	// bl 0x826bbc78
	ctx.lr = 0x826BBDA8;
	sub_826BBC78(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826bbdb8
	if (!ctx.cr6.eq) goto loc_826BBDB8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826bbdc4
	goto loc_826BBDC4;
loc_826BBDB8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333c70
	ctx.lr = 0x826BBDC4;
	sub_82333C70(ctx, base);
loc_826BBDC4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BBDE0"))) PPC_WEAK_FUNC(sub_826BBDE0);
PPC_FUNC_IMPL(__imp__sub_826BBDE0) {
	PPC_FUNC_PROLOGUE();
	// b 0x826bbc78
	sub_826BBC78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826BBDE8"))) PPC_WEAK_FUNC(sub_826BBDE8);
PPC_FUNC_IMPL(__imp__sub_826BBDE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82833108
	ctx.lr = 0x826BBE04;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826bbe8c
	if (ctx.cr0.eq) goto loc_826BBE8C;
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
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r9,r9,-17320
	ctx.r9.s64 = ctx.r9.s64 + -17320;
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
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// b 0x826bbe90
	goto loc_826BBE90;
loc_826BBE8C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826BBE90:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BBEA8"))) PPC_WEAK_FUNC(sub_826BBEA8);
PPC_FUNC_IMPL(__imp__sub_826BBEA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,-17388
	ctx.r3.s64 = ctx.r11.s64 + -17388;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BBEB8"))) PPC_WEAK_FUNC(sub_826BBEB8);
PPC_FUNC_IMPL(__imp__sub_826BBEB8) {
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
	// bl 0x826c3598
	ctx.lr = 0x826BBED0;
	sub_826C3598(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r6,15377
	ctx.r6.s64 = 1007747072;
	// stw r11,836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 836, ctx.r11.u32);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r11,1848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1848, ctx.r11.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// addi r11,r11,-25740
	ctx.r11.s64 = ctx.r11.s64 + -25740;
	// lis r8,-32224
	ctx.r8.s64 = -2111832064;
	// stw r11,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r11.u32);
	// ori r11,r6,30076
	ctx.r11.u64 = ctx.r6.u64 | 30076;
	// addi r9,r9,-9640
	ctx.r9.s64 = ctx.r9.s64 + -9640;
	// addi r8,r8,-8464
	ctx.r8.s64 = ctx.r8.s64 + -8464;
	// stw r11,1492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1492, ctx.r11.u32);
	// lis r7,7439
	ctx.r7.s64 = 487522304;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r9,100
	ctx.r9.s64 = 100;
	// ori r8,r7,25623
	ctx.r8.u64 = ctx.r7.u64 | 25623;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// stw r9,1892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1892, ctx.r9.u32);
	// stw r8,1488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1488, ctx.r8.u32);
	// lwz r11,13024(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13024);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826bbf60
	if (ctx.cr6.eq) goto loc_826BBF60;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r5,r11,-17220
	ctx.r5.s64 = ctx.r11.s64 + -17220;
	// addi r4,r10,-17176
	ctx.r4.s64 = ctx.r10.s64 + -17176;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x828c5680
	ctx.lr = 0x826BBF60;
	sub_828C5680(ctx, base);
loc_826BBF60:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1876, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_826BBF80"))) PPC_WEAK_FUNC(sub_826BBF80);
PPC_FUNC_IMPL(__imp__sub_826BBF80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r11,32232
	ctx.r3.s64 = ctx.r11.s64 + 32232;
	// b 0x828165a8
	sub_828165A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826BBF90"))) PPC_WEAK_FUNC(sub_826BBF90);
PPC_FUNC_IMPL(__imp__sub_826BBF90) {
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
	// bl 0x826bafd8
	ctx.lr = 0x826BBFA8;
	sub_826BAFD8(ctx, base);
	// lwz r11,664(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 664);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,656(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,4600
	ctx.r11.s64 = ctx.r11.s64 + 4600;
	// lwz r9,660(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 660);
	// stw r11,664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 664, ctx.r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,316(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 316);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826BBFE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,664(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 664);
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x826bc024
	if (!ctx.cr6.gt) goto loc_826BC024;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,656(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r8,660(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 660);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// lwz r11,316(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 316);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826BC024;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826BC024:
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

__attribute__((alias("__imp__sub_826BC038"))) PPC_WEAK_FUNC(sub_826BC038);
PPC_FUNC_IMPL(__imp__sub_826BC038) {
	PPC_FUNC_PROLOGUE();
	// b 0x826b9508
	sub_826B9508(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826BC040"))) PPC_WEAK_FUNC(sub_826BC040);
PPC_FUNC_IMPL(__imp__sub_826BC040) {
	PPC_FUNC_PROLOGUE();
	// b 0x826c3678
	sub_826C3678(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826BC048"))) PPC_WEAK_FUNC(sub_826BC048);
PPC_FUNC_IMPL(__imp__sub_826BC048) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,-17136
	ctx.r3.s64 = ctx.r11.s64 + -17136;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BC058"))) PPC_WEAK_FUNC(sub_826BC058);
PPC_FUNC_IMPL(__imp__sub_826BC058) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x826bc090
	if (ctx.cr6.eq) goto loc_826BC090;
	// bl 0x826c1a30
	ctx.lr = 0x826BC080;
	sub_826C1A30(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826bc090
	if (!ctx.cr6.eq) goto loc_826BC090;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826bc09c
	goto loc_826BC09C;
loc_826BC090:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826b87f0
	ctx.lr = 0x826BC09C;
	sub_826B87F0(ctx, base);
loc_826BC09C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BC0B8"))) PPC_WEAK_FUNC(sub_826BC0B8);
PPC_FUNC_IMPL(__imp__sub_826BC0B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x826c1a30
	sub_826C1A30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826BC0C0"))) PPC_WEAK_FUNC(sub_826BC0C0);
PPC_FUNC_IMPL(__imp__sub_826BC0C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,1680
	ctx.r3.s64 = 1680;
	// bl 0x82833108
	ctx.lr = 0x826BC0E0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826bc120
	if (ctx.cr0.eq) goto loc_826BC120;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826b88f8
	ctx.lr = 0x826BC0F4;
	sub_826B88F8(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r11,r11,-16272
	ctx.r11.s64 = ctx.r11.s64 + -16272;
	// addi r10,r10,-15256
	ctx.r10.s64 = ctx.r10.s64 + -15256;
	// addi r9,r9,-15204
	ctx.r9.s64 = ctx.r9.s64 + -15204;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x826bc124
	goto loc_826BC124;
loc_826BC120:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826BC124:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BC140"))) PPC_WEAK_FUNC(sub_826BC140);
PPC_FUNC_IMPL(__imp__sub_826BC140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826c1a30
	ctx.lr = 0x826BC160;
	sub_826C1A30(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x826bc174
	if (ctx.cr6.eq) goto loc_826BC174;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826b8898
	ctx.lr = 0x826BC174;
	sub_826B8898(ctx, base);
loc_826BC174:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BC190"))) PPC_WEAK_FUNC(sub_826BC190);
PPC_FUNC_IMPL(__imp__sub_826BC190) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,19520
	ctx.r3.s64 = ctx.r11.s64 + 19520;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BC1A0"))) PPC_WEAK_FUNC(sub_826BC1A0);
PPC_FUNC_IMPL(__imp__sub_826BC1A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x826bc1d8
	if (ctx.cr6.eq) goto loc_826BC1D8;
	// bl 0x82395108
	ctx.lr = 0x826BC1C8;
	sub_82395108(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826bc1d8
	if (!ctx.cr6.eq) goto loc_826BC1D8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826bc1e4
	goto loc_826BC1E4;
loc_826BC1D8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826b87f0
	ctx.lr = 0x826BC1E4;
	sub_826B87F0(ctx, base);
loc_826BC1E4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BC200"))) PPC_WEAK_FUNC(sub_826BC200);
PPC_FUNC_IMPL(__imp__sub_826BC200) {
	PPC_FUNC_PROLOGUE();
	// b 0x82395108
	sub_82395108(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826BC208"))) PPC_WEAK_FUNC(sub_826BC208);
PPC_FUNC_IMPL(__imp__sub_826BC208) {
	PPC_FUNC_PROLOGUE();
	// b 0x823324f8
	sub_823324F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826BC210"))) PPC_WEAK_FUNC(sub_826BC210);
PPC_FUNC_IMPL(__imp__sub_826BC210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,1680
	ctx.r3.s64 = 1680;
	// bl 0x82833108
	ctx.lr = 0x826BC230;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826bc270
	if (ctx.cr0.eq) goto loc_826BC270;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826b88f8
	ctx.lr = 0x826BC244;
	sub_826B88F8(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r11,r11,-15160
	ctx.r11.s64 = ctx.r11.s64 + -15160;
	// addi r10,r10,-14144
	ctx.r10.s64 = ctx.r10.s64 + -14144;
	// addi r9,r9,-15204
	ctx.r9.s64 = ctx.r9.s64 + -15204;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x826bc274
	goto loc_826BC274;
loc_826BC270:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826BC274:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BC290"))) PPC_WEAK_FUNC(sub_826BC290);
PPC_FUNC_IMPL(__imp__sub_826BC290) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82395108
	ctx.lr = 0x826BC2B0;
	sub_82395108(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x826bc2c4
	if (ctx.cr6.eq) goto loc_826BC2C4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826b8898
	ctx.lr = 0x826BC2C4;
	sub_826B8898(ctx, base);
loc_826BC2C4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BC2E0"))) PPC_WEAK_FUNC(sub_826BC2E0);
PPC_FUNC_IMPL(__imp__sub_826BC2E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,-17112
	ctx.r3.s64 = ctx.r11.s64 + -17112;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BC2F0"))) PPC_WEAK_FUNC(sub_826BC2F0);
PPC_FUNC_IMPL(__imp__sub_826BC2F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x826bc328
	if (ctx.cr6.eq) goto loc_826BC328;
	// bl 0x826c1bd0
	ctx.lr = 0x826BC318;
	sub_826C1BD0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826bc328
	if (!ctx.cr6.eq) goto loc_826BC328;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826bc334
	goto loc_826BC334;
loc_826BC328:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826b87f0
	ctx.lr = 0x826BC334;
	sub_826B87F0(ctx, base);
loc_826BC334:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BC350"))) PPC_WEAK_FUNC(sub_826BC350);
PPC_FUNC_IMPL(__imp__sub_826BC350) {
	PPC_FUNC_PROLOGUE();
	// b 0x826c1bd0
	sub_826C1BD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826BC358"))) PPC_WEAK_FUNC(sub_826BC358);
PPC_FUNC_IMPL(__imp__sub_826BC358) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,1680
	ctx.r3.s64 = 1680;
	// bl 0x82833108
	ctx.lr = 0x826BC378;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826bc3b8
	if (ctx.cr0.eq) goto loc_826BC3B8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826b88f8
	ctx.lr = 0x826BC38C;
	sub_826B88F8(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r11,r11,-14088
	ctx.r11.s64 = ctx.r11.s64 + -14088;
	// addi r10,r10,-13072
	ctx.r10.s64 = ctx.r10.s64 + -13072;
	// addi r9,r9,-15204
	ctx.r9.s64 = ctx.r9.s64 + -15204;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x826bc3bc
	goto loc_826BC3BC;
loc_826BC3B8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826BC3BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BC3D8"))) PPC_WEAK_FUNC(sub_826BC3D8);
PPC_FUNC_IMPL(__imp__sub_826BC3D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826c1bd0
	ctx.lr = 0x826BC3F8;
	sub_826C1BD0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x826bc40c
	if (ctx.cr6.eq) goto loc_826BC40C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826b8898
	ctx.lr = 0x826BC40C;
	sub_826B8898(ctx, base);
loc_826BC40C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BC428"))) PPC_WEAK_FUNC(sub_826BC428);
PPC_FUNC_IMPL(__imp__sub_826BC428) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82713e40
	ctx.lr = 0x826BC448;
	sub_82713E40(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826bc458
	if (ctx.cr0.eq) goto loc_826BC458;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x826BC458;
	sub_82332DB8(ctx, base);
loc_826BC458:
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

__attribute__((alias("__imp__sub_826BC478"))) PPC_WEAK_FUNC(sub_826BC478);
PPC_FUNC_IMPL(__imp__sub_826BC478) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r3,r11,-29008
	ctx.r3.s64 = ctx.r11.s64 + -29008;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BC488"))) PPC_WEAK_FUNC(sub_826BC488);
PPC_FUNC_IMPL(__imp__sub_826BC488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x826bc4c0
	if (ctx.cr6.eq) goto loc_826BC4C0;
	// bl 0x82667a38
	ctx.lr = 0x826BC4B0;
	sub_82667A38(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826bc4c0
	if (!ctx.cr6.eq) goto loc_826BC4C0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826bc4cc
	goto loc_826BC4CC;
loc_826BC4C0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233e5b8
	ctx.lr = 0x826BC4CC;
	sub_8233E5B8(ctx, base);
loc_826BC4CC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BC4E8"))) PPC_WEAK_FUNC(sub_826BC4E8);
PPC_FUNC_IMPL(__imp__sub_826BC4E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82667a38
	sub_82667A38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826BC4F0"))) PPC_WEAK_FUNC(sub_826BC4F0);
PPC_FUNC_IMPL(__imp__sub_826BC4F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x826BC510;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826bc550
	if (ctx.cr0.eq) goto loc_826BC550;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233e6c8
	ctx.lr = 0x826BC524;
	sub_8233E6C8(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// addi r11,r11,-13000
	ctx.r11.s64 = ctx.r11.s64 + -13000;
	// addi r10,r10,-11824
	ctx.r10.s64 = ctx.r10.s64 + -11824;
	// addi r9,r9,29100
	ctx.r9.s64 = ctx.r9.s64 + 29100;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x826bc554
	goto loc_826BC554;
loc_826BC550:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826BC554:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BC570"))) PPC_WEAK_FUNC(sub_826BC570);
PPC_FUNC_IMPL(__imp__sub_826BC570) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82667a38
	ctx.lr = 0x826BC590;
	sub_82667A38(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x826bc5a4
	if (ctx.cr6.eq) goto loc_826BC5A4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8233e668
	ctx.lr = 0x826BC5A4;
	sub_8233E668(ctx, base);
loc_826BC5A4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BC5C0"))) PPC_WEAK_FUNC(sub_826BC5C0);
PPC_FUNC_IMPL(__imp__sub_826BC5C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,19540
	ctx.r3.s64 = ctx.r11.s64 + 19540;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BC5D0"))) PPC_WEAK_FUNC(sub_826BC5D0);
PPC_FUNC_IMPL(__imp__sub_826BC5D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x826bc608
	if (ctx.cr6.eq) goto loc_826BC608;
	// bl 0x82395210
	ctx.lr = 0x826BC5F8;
	sub_82395210(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826bc608
	if (!ctx.cr6.eq) goto loc_826BC608;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826bc614
	goto loc_826BC614;
loc_826BC608:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233e5b8
	ctx.lr = 0x826BC614;
	sub_8233E5B8(ctx, base);
loc_826BC614:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BC630"))) PPC_WEAK_FUNC(sub_826BC630);
PPC_FUNC_IMPL(__imp__sub_826BC630) {
	PPC_FUNC_PROLOGUE();
	// b 0x82395210
	sub_82395210(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826BC638"))) PPC_WEAK_FUNC(sub_826BC638);
PPC_FUNC_IMPL(__imp__sub_826BC638) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x826BC658;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826bc698
	if (ctx.cr0.eq) goto loc_826BC698;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233e6c8
	ctx.lr = 0x826BC66C;
	sub_8233E6C8(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// addi r11,r11,-11768
	ctx.r11.s64 = ctx.r11.s64 + -11768;
	// addi r10,r10,-10592
	ctx.r10.s64 = ctx.r10.s64 + -10592;
	// addi r9,r9,29100
	ctx.r9.s64 = ctx.r9.s64 + 29100;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x826bc69c
	goto loc_826BC69C;
loc_826BC698:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826BC69C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BC6B8"))) PPC_WEAK_FUNC(sub_826BC6B8);
PPC_FUNC_IMPL(__imp__sub_826BC6B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82395210
	ctx.lr = 0x826BC6D8;
	sub_82395210(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x826bc6ec
	if (ctx.cr6.eq) goto loc_826BC6EC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8233e668
	ctx.lr = 0x826BC6EC;
	sub_8233E668(ctx, base);
loc_826BC6EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BC708"))) PPC_WEAK_FUNC(sub_826BC708);
PPC_FUNC_IMPL(__imp__sub_826BC708) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,19568
	ctx.r3.s64 = ctx.r11.s64 + 19568;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BC718"))) PPC_WEAK_FUNC(sub_826BC718);
PPC_FUNC_IMPL(__imp__sub_826BC718) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x826bc750
	if (ctx.cr6.eq) goto loc_826BC750;
	// bl 0x823952c8
	ctx.lr = 0x826BC740;
	sub_823952C8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826bc750
	if (!ctx.cr6.eq) goto loc_826BC750;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826bc75c
	goto loc_826BC75C;
loc_826BC750:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233e5b8
	ctx.lr = 0x826BC75C;
	sub_8233E5B8(ctx, base);
loc_826BC75C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BC778"))) PPC_WEAK_FUNC(sub_826BC778);
PPC_FUNC_IMPL(__imp__sub_826BC778) {
	PPC_FUNC_PROLOGUE();
	// b 0x823952c8
	sub_823952C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826BC780"))) PPC_WEAK_FUNC(sub_826BC780);
PPC_FUNC_IMPL(__imp__sub_826BC780) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x826BC7A0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826bc7e0
	if (ctx.cr0.eq) goto loc_826BC7E0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233e6c8
	ctx.lr = 0x826BC7B4;
	sub_8233E6C8(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// addi r11,r11,-10536
	ctx.r11.s64 = ctx.r11.s64 + -10536;
	// addi r10,r10,-9360
	ctx.r10.s64 = ctx.r10.s64 + -9360;
	// addi r9,r9,29100
	ctx.r9.s64 = ctx.r9.s64 + 29100;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x826bc7e4
	goto loc_826BC7E4;
loc_826BC7E0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826BC7E4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BC800"))) PPC_WEAK_FUNC(sub_826BC800);
PPC_FUNC_IMPL(__imp__sub_826BC800) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823952c8
	ctx.lr = 0x826BC820;
	sub_823952C8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x826bc834
	if (ctx.cr6.eq) goto loc_826BC834;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8233e668
	ctx.lr = 0x826BC834;
	sub_8233E668(ctx, base);
loc_826BC834:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BC850"))) PPC_WEAK_FUNC(sub_826BC850);
PPC_FUNC_IMPL(__imp__sub_826BC850) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,19596
	ctx.r3.s64 = ctx.r11.s64 + 19596;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BC860"))) PPC_WEAK_FUNC(sub_826BC860);
PPC_FUNC_IMPL(__imp__sub_826BC860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x826bc898
	if (ctx.cr6.eq) goto loc_826BC898;
	// bl 0x823953b8
	ctx.lr = 0x826BC888;
	sub_823953B8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826bc898
	if (!ctx.cr6.eq) goto loc_826BC898;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826bc8a4
	goto loc_826BC8A4;
loc_826BC898:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233e5b8
	ctx.lr = 0x826BC8A4;
	sub_8233E5B8(ctx, base);
loc_826BC8A4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BC8C0"))) PPC_WEAK_FUNC(sub_826BC8C0);
PPC_FUNC_IMPL(__imp__sub_826BC8C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x823953b8
	sub_823953B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826BC8C8"))) PPC_WEAK_FUNC(sub_826BC8C8);
PPC_FUNC_IMPL(__imp__sub_826BC8C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x826BC8E8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826bc928
	if (ctx.cr0.eq) goto loc_826BC928;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233e6c8
	ctx.lr = 0x826BC8FC;
	sub_8233E6C8(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// addi r11,r11,-9304
	ctx.r11.s64 = ctx.r11.s64 + -9304;
	// addi r10,r10,-8128
	ctx.r10.s64 = ctx.r10.s64 + -8128;
	// addi r9,r9,29100
	ctx.r9.s64 = ctx.r9.s64 + 29100;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x826bc92c
	goto loc_826BC92C;
loc_826BC928:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826BC92C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BC948"))) PPC_WEAK_FUNC(sub_826BC948);
PPC_FUNC_IMPL(__imp__sub_826BC948) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823953b8
	ctx.lr = 0x826BC968;
	sub_823953B8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x826bc97c
	if (ctx.cr6.eq) goto loc_826BC97C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8233e668
	ctx.lr = 0x826BC97C;
	sub_8233E668(ctx, base);
loc_826BC97C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BC998"))) PPC_WEAK_FUNC(sub_826BC998);
PPC_FUNC_IMPL(__imp__sub_826BC998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,19628
	ctx.r3.s64 = ctx.r11.s64 + 19628;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BC9A8"))) PPC_WEAK_FUNC(sub_826BC9A8);
PPC_FUNC_IMPL(__imp__sub_826BC9A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x826bc9e0
	if (ctx.cr6.eq) goto loc_826BC9E0;
	// bl 0x82395418
	ctx.lr = 0x826BC9D0;
	sub_82395418(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826bc9e0
	if (!ctx.cr6.eq) goto loc_826BC9E0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826bc9ec
	goto loc_826BC9EC;
loc_826BC9E0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233e5b8
	ctx.lr = 0x826BC9EC;
	sub_8233E5B8(ctx, base);
loc_826BC9EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BCA08"))) PPC_WEAK_FUNC(sub_826BCA08);
PPC_FUNC_IMPL(__imp__sub_826BCA08) {
	PPC_FUNC_PROLOGUE();
	// b 0x82395418
	sub_82395418(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826BCA10"))) PPC_WEAK_FUNC(sub_826BCA10);
PPC_FUNC_IMPL(__imp__sub_826BCA10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x826BCA30;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826bca70
	if (ctx.cr0.eq) goto loc_826BCA70;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233e6c8
	ctx.lr = 0x826BCA44;
	sub_8233E6C8(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// addi r11,r11,-8072
	ctx.r11.s64 = ctx.r11.s64 + -8072;
	// addi r10,r10,-6896
	ctx.r10.s64 = ctx.r10.s64 + -6896;
	// addi r9,r9,29100
	ctx.r9.s64 = ctx.r9.s64 + 29100;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x826bca74
	goto loc_826BCA74;
loc_826BCA70:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826BCA74:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BCA90"))) PPC_WEAK_FUNC(sub_826BCA90);
PPC_FUNC_IMPL(__imp__sub_826BCA90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82395418
	ctx.lr = 0x826BCAB0;
	sub_82395418(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x826bcac4
	if (ctx.cr6.eq) goto loc_826BCAC4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8233e668
	ctx.lr = 0x826BCAC4;
	sub_8233E668(ctx, base);
loc_826BCAC4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BCAE0"))) PPC_WEAK_FUNC(sub_826BCAE0);
PPC_FUNC_IMPL(__imp__sub_826BCAE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,19652
	ctx.r3.s64 = ctx.r11.s64 + 19652;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BCAF0"))) PPC_WEAK_FUNC(sub_826BCAF0);
PPC_FUNC_IMPL(__imp__sub_826BCAF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x826bcb28
	if (ctx.cr6.eq) goto loc_826BCB28;
	// bl 0x823954d0
	ctx.lr = 0x826BCB18;
	sub_823954D0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826bcb28
	if (!ctx.cr6.eq) goto loc_826BCB28;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826bcb34
	goto loc_826BCB34;
loc_826BCB28:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233e5b8
	ctx.lr = 0x826BCB34;
	sub_8233E5B8(ctx, base);
loc_826BCB34:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BCB50"))) PPC_WEAK_FUNC(sub_826BCB50);
PPC_FUNC_IMPL(__imp__sub_826BCB50) {
	PPC_FUNC_PROLOGUE();
	// b 0x823954d0
	sub_823954D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826BCB58"))) PPC_WEAK_FUNC(sub_826BCB58);
PPC_FUNC_IMPL(__imp__sub_826BCB58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x826BCB78;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826bcbb8
	if (ctx.cr0.eq) goto loc_826BCBB8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233e6c8
	ctx.lr = 0x826BCB8C;
	sub_8233E6C8(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// addi r11,r11,-6840
	ctx.r11.s64 = ctx.r11.s64 + -6840;
	// addi r10,r10,-5664
	ctx.r10.s64 = ctx.r10.s64 + -5664;
	// addi r9,r9,29100
	ctx.r9.s64 = ctx.r9.s64 + 29100;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x826bcbbc
	goto loc_826BCBBC;
loc_826BCBB8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826BCBBC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BCBD8"))) PPC_WEAK_FUNC(sub_826BCBD8);
PPC_FUNC_IMPL(__imp__sub_826BCBD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823954d0
	ctx.lr = 0x826BCBF8;
	sub_823954D0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x826bcc0c
	if (ctx.cr6.eq) goto loc_826BCC0C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8233e668
	ctx.lr = 0x826BCC0C;
	sub_8233E668(ctx, base);
loc_826BCC0C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BCC28"))) PPC_WEAK_FUNC(sub_826BCC28);
PPC_FUNC_IMPL(__imp__sub_826BCC28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,19680
	ctx.r3.s64 = ctx.r11.s64 + 19680;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BCC38"))) PPC_WEAK_FUNC(sub_826BCC38);
PPC_FUNC_IMPL(__imp__sub_826BCC38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x826bcc70
	if (ctx.cr6.eq) goto loc_826BCC70;
	// bl 0x82395588
	ctx.lr = 0x826BCC60;
	sub_82395588(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826bcc70
	if (!ctx.cr6.eq) goto loc_826BCC70;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826bcc7c
	goto loc_826BCC7C;
loc_826BCC70:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233e5b8
	ctx.lr = 0x826BCC7C;
	sub_8233E5B8(ctx, base);
loc_826BCC7C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BCC98"))) PPC_WEAK_FUNC(sub_826BCC98);
PPC_FUNC_IMPL(__imp__sub_826BCC98) {
	PPC_FUNC_PROLOGUE();
	// b 0x82395588
	sub_82395588(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826BCCA0"))) PPC_WEAK_FUNC(sub_826BCCA0);
PPC_FUNC_IMPL(__imp__sub_826BCCA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x826BCCC0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826bcd00
	if (ctx.cr0.eq) goto loc_826BCD00;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233e6c8
	ctx.lr = 0x826BCCD4;
	sub_8233E6C8(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// addi r11,r11,-5608
	ctx.r11.s64 = ctx.r11.s64 + -5608;
	// addi r10,r10,-4432
	ctx.r10.s64 = ctx.r10.s64 + -4432;
	// addi r9,r9,29100
	ctx.r9.s64 = ctx.r9.s64 + 29100;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x826bcd04
	goto loc_826BCD04;
loc_826BCD00:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826BCD04:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BCD20"))) PPC_WEAK_FUNC(sub_826BCD20);
PPC_FUNC_IMPL(__imp__sub_826BCD20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82395588
	ctx.lr = 0x826BCD40;
	sub_82395588(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x826bcd54
	if (ctx.cr6.eq) goto loc_826BCD54;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8233e668
	ctx.lr = 0x826BCD54;
	sub_8233E668(ctx, base);
loc_826BCD54:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BCD70"))) PPC_WEAK_FUNC(sub_826BCD70);
PPC_FUNC_IMPL(__imp__sub_826BCD70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,19708
	ctx.r3.s64 = ctx.r11.s64 + 19708;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BCD80"))) PPC_WEAK_FUNC(sub_826BCD80);
PPC_FUNC_IMPL(__imp__sub_826BCD80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x826bcdb8
	if (ctx.cr6.eq) goto loc_826BCDB8;
	// bl 0x823956c8
	ctx.lr = 0x826BCDA8;
	sub_823956C8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826bcdb8
	if (!ctx.cr6.eq) goto loc_826BCDB8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826bcdc4
	goto loc_826BCDC4;
loc_826BCDB8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233eaf0
	ctx.lr = 0x826BCDC4;
	sub_8233EAF0(ctx, base);
loc_826BCDC4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BCDE0"))) PPC_WEAK_FUNC(sub_826BCDE0);
PPC_FUNC_IMPL(__imp__sub_826BCDE0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82394e88
	sub_82394E88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826BCDE8"))) PPC_WEAK_FUNC(sub_826BCDE8);
PPC_FUNC_IMPL(__imp__sub_826BCDE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,1936
	ctx.r3.s64 = 1936;
	// bl 0x82833108
	ctx.lr = 0x826BCE04;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826bce18
	if (ctx.cr0.eq) goto loc_826BCE18;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826bce80
	ctx.lr = 0x826BCE14;
	sub_826BCE80(ctx, base);
	// b 0x826bce1c
	goto loc_826BCE1C;
loc_826BCE18:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826BCE1C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BCE30"))) PPC_WEAK_FUNC(sub_826BCE30);
PPC_FUNC_IMPL(__imp__sub_826BCE30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823956c8
	ctx.lr = 0x826BCE50;
	sub_823956C8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x826bce64
	if (ctx.cr6.eq) goto loc_826BCE64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8233eba0
	ctx.lr = 0x826BCE64;
	sub_8233EBA0(ctx, base);
loc_826BCE64:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BCE80"))) PPC_WEAK_FUNC(sub_826BCE80);
PPC_FUNC_IMPL(__imp__sub_826BCE80) {
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
	// bl 0x8233ec00
	ctx.lr = 0x826BCEA0;
	sub_8233EC00(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r11,r11,-4376
	ctx.r11.s64 = ctx.r11.s64 + -4376;
	// addi r10,r10,-3188
	ctx.r10.s64 = ctx.r10.s64 + -3188;
	// addi r9,r9,-1896
	ctx.r9.s64 = ctx.r9.s64 + -1896;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lwz r11,1920(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1920);
	// stw r11,1920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1920, ctx.r11.u32);
	// lfs f0,1924(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1924);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1924(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1924, temp.u32);
	// lwz r11,1928(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1928);
	// stw r11,1928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1928, ctx.r11.u32);
	// lwz r11,1932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1932);
	// stw r11,1932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1932, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BCF00"))) PPC_WEAK_FUNC(sub_826BCF00);
PPC_FUNC_IMPL(__imp__sub_826BCF00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,19732
	ctx.r3.s64 = ctx.r11.s64 + 19732;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BCF10"))) PPC_WEAK_FUNC(sub_826BCF10);
PPC_FUNC_IMPL(__imp__sub_826BCF10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x826bcf48
	if (ctx.cr6.eq) goto loc_826BCF48;
	// bl 0x82395788
	ctx.lr = 0x826BCF38;
	sub_82395788(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826bcf48
	if (!ctx.cr6.eq) goto loc_826BCF48;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826bcf54
	goto loc_826BCF54;
loc_826BCF48:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826bcd80
	ctx.lr = 0x826BCF54;
	sub_826BCD80(ctx, base);
loc_826BCF54:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BCF70"))) PPC_WEAK_FUNC(sub_826BCF70);
PPC_FUNC_IMPL(__imp__sub_826BCF70) {
	PPC_FUNC_PROLOGUE();
	// b 0x82395788
	sub_82395788(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826BCF78"))) PPC_WEAK_FUNC(sub_826BCF78);
PPC_FUNC_IMPL(__imp__sub_826BCF78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,1936
	ctx.r3.s64 = 1936;
	// bl 0x82833108
	ctx.lr = 0x826BCF98;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826bcfd8
	if (ctx.cr0.eq) goto loc_826BCFD8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826bce80
	ctx.lr = 0x826BCFAC;
	sub_826BCE80(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r11,r11,-3136
	ctx.r11.s64 = ctx.r11.s64 + -3136;
	// addi r10,r10,-1948
	ctx.r10.s64 = ctx.r10.s64 + -1948;
	// addi r9,r9,-1896
	ctx.r9.s64 = ctx.r9.s64 + -1896;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x826bcfdc
	goto loc_826BCFDC;
loc_826BCFD8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826BCFDC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BCFF8"))) PPC_WEAK_FUNC(sub_826BCFF8);
PPC_FUNC_IMPL(__imp__sub_826BCFF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82395788
	ctx.lr = 0x826BD018;
	sub_82395788(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826bd028
	if (!ctx.cr6.eq) goto loc_826BD028;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x826bd040
	goto loc_826BD040;
loc_826BD028:
	// bl 0x823956c8
	ctx.lr = 0x826BD02C;
	sub_823956C8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x826bd040
	if (ctx.cr6.eq) goto loc_826BD040;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8233eba0
	ctx.lr = 0x826BD040;
	sub_8233EBA0(ctx, base);
loc_826BD040:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BD058"))) PPC_WEAK_FUNC(sub_826BD058);
PPC_FUNC_IMPL(__imp__sub_826BD058) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,19760
	ctx.r3.s64 = ctx.r11.s64 + 19760;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BD068"))) PPC_WEAK_FUNC(sub_826BD068);
PPC_FUNC_IMPL(__imp__sub_826BD068) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x826bd0a0
	if (ctx.cr6.eq) goto loc_826BD0A0;
	// bl 0x82395840
	ctx.lr = 0x826BD090;
	sub_82395840(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826bd0a0
	if (!ctx.cr6.eq) goto loc_826BD0A0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826bd0ac
	goto loc_826BD0AC;
loc_826BD0A0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826bcd80
	ctx.lr = 0x826BD0AC;
	sub_826BCD80(ctx, base);
loc_826BD0AC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BD0C8"))) PPC_WEAK_FUNC(sub_826BD0C8);
PPC_FUNC_IMPL(__imp__sub_826BD0C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82395840
	sub_82395840(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826BD0D0"))) PPC_WEAK_FUNC(sub_826BD0D0);
PPC_FUNC_IMPL(__imp__sub_826BD0D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,1936
	ctx.r3.s64 = 1936;
	// bl 0x82833108
	ctx.lr = 0x826BD0F0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826bd130
	if (ctx.cr0.eq) goto loc_826BD130;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826bce80
	ctx.lr = 0x826BD104;
	sub_826BCE80(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r11,r11,-1872
	ctx.r11.s64 = ctx.r11.s64 + -1872;
	// addi r10,r10,-684
	ctx.r10.s64 = ctx.r10.s64 + -684;
	// addi r9,r9,-1896
	ctx.r9.s64 = ctx.r9.s64 + -1896;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x826bd134
	goto loc_826BD134;
loc_826BD130:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826BD134:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BD150"))) PPC_WEAK_FUNC(sub_826BD150);
PPC_FUNC_IMPL(__imp__sub_826BD150) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82395840
	ctx.lr = 0x826BD170;
	sub_82395840(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826bd180
	if (!ctx.cr6.eq) goto loc_826BD180;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x826bd198
	goto loc_826BD198;
loc_826BD180:
	// bl 0x823956c8
	ctx.lr = 0x826BD184;
	sub_823956C8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x826bd198
	if (ctx.cr6.eq) goto loc_826BD198;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8233eba0
	ctx.lr = 0x826BD198;
	sub_8233EBA0(ctx, base);
loc_826BD198:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BD1B0"))) PPC_WEAK_FUNC(sub_826BD1B0);
PPC_FUNC_IMPL(__imp__sub_826BD1B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,19788
	ctx.r3.s64 = ctx.r11.s64 + 19788;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BD1C0"))) PPC_WEAK_FUNC(sub_826BD1C0);
PPC_FUNC_IMPL(__imp__sub_826BD1C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x826bd1f8
	if (ctx.cr6.eq) goto loc_826BD1F8;
	// bl 0x82395988
	ctx.lr = 0x826BD1E8;
	sub_82395988(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826bd1f8
	if (!ctx.cr6.eq) goto loc_826BD1F8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826bd204
	goto loc_826BD204;
loc_826BD1F8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824001e8
	ctx.lr = 0x826BD204;
	sub_824001E8(ctx, base);
loc_826BD204:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BD220"))) PPC_WEAK_FUNC(sub_826BD220);
PPC_FUNC_IMPL(__imp__sub_826BD220) {
	PPC_FUNC_PROLOGUE();
	// b 0x82395988
	sub_82395988(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826BD228"))) PPC_WEAK_FUNC(sub_826BD228);
PPC_FUNC_IMPL(__imp__sub_826BD228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x826BD248;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826bd288
	if (ctx.cr0.eq) goto loc_826BD288;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fffc8
	ctx.lr = 0x826BD25C;
	sub_823FFFC8(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// addi r11,r11,-632
	ctx.r11.s64 = ctx.r11.s64 + -632;
	// addi r10,r10,408
	ctx.r10.s64 = ctx.r10.s64 + 408;
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
	// b 0x826bd28c
	goto loc_826BD28C;
loc_826BD288:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826BD28C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BD2A8"))) PPC_WEAK_FUNC(sub_826BD2A8);
PPC_FUNC_IMPL(__imp__sub_826BD2A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82395988
	ctx.lr = 0x826BD2C8;
	sub_82395988(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x826bd2dc
	if (ctx.cr6.eq) goto loc_826BD2DC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82400188
	ctx.lr = 0x826BD2DC;
	sub_82400188(ctx, base);
loc_826BD2DC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BD2F8"))) PPC_WEAK_FUNC(sub_826BD2F8);
PPC_FUNC_IMPL(__imp__sub_826BD2F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,19816
	ctx.r3.s64 = ctx.r11.s64 + 19816;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BD308"))) PPC_WEAK_FUNC(sub_826BD308);
PPC_FUNC_IMPL(__imp__sub_826BD308) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x826bd340
	if (ctx.cr6.eq) goto loc_826BD340;
	// bl 0x82395ad0
	ctx.lr = 0x826BD330;
	sub_82395AD0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826bd340
	if (!ctx.cr6.eq) goto loc_826BD340;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826bd34c
	goto loc_826BD34C;
loc_826BD340:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824001e8
	ctx.lr = 0x826BD34C;
	sub_824001E8(ctx, base);
loc_826BD34C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BD368"))) PPC_WEAK_FUNC(sub_826BD368);
PPC_FUNC_IMPL(__imp__sub_826BD368) {
	PPC_FUNC_PROLOGUE();
	// b 0x823f61b8
	sub_823F61B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826BD370"))) PPC_WEAK_FUNC(sub_826BD370);
PPC_FUNC_IMPL(__imp__sub_826BD370) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,1568
	ctx.r3.s64 = 1568;
	// bl 0x82833108
	ctx.lr = 0x826BD38C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826bd3a0
	if (ctx.cr0.eq) goto loc_826BD3A0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826bd408
	ctx.lr = 0x826BD39C;
	sub_826BD408(ctx, base);
	// b 0x826bd3a4
	goto loc_826BD3A4;
loc_826BD3A0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826BD3A4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BD3B8"))) PPC_WEAK_FUNC(sub_826BD3B8);
PPC_FUNC_IMPL(__imp__sub_826BD3B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82395ad0
	ctx.lr = 0x826BD3D8;
	sub_82395AD0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x826bd3ec
	if (ctx.cr6.eq) goto loc_826BD3EC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82400188
	ctx.lr = 0x826BD3EC;
	sub_82400188(ctx, base);
loc_826BD3EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BD408"))) PPC_WEAK_FUNC(sub_826BD408);
PPC_FUNC_IMPL(__imp__sub_826BD408) {
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
	ctx.lr = 0x826BD428;
	sub_823FFFC8(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// addi r11,r11,464
	ctx.r11.s64 = ctx.r11.s64 + 464;
	// addi r10,r10,1504
	ctx.r10.s64 = ctx.r10.s64 + 1504;
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
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BD470"))) PPC_WEAK_FUNC(sub_826BD470);
PPC_FUNC_IMPL(__imp__sub_826BD470) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,19848
	ctx.r3.s64 = ctx.r11.s64 + 19848;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BD480"))) PPC_WEAK_FUNC(sub_826BD480);
PPC_FUNC_IMPL(__imp__sub_826BD480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x826bd4b8
	if (ctx.cr6.eq) goto loc_826BD4B8;
	// bl 0x82395c88
	ctx.lr = 0x826BD4A8;
	sub_82395C88(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826bd4b8
	if (!ctx.cr6.eq) goto loc_826BD4B8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826bd4c4
	goto loc_826BD4C4;
loc_826BD4B8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826bd308
	ctx.lr = 0x826BD4C4;
	sub_826BD308(ctx, base);
loc_826BD4C4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BD4E0"))) PPC_WEAK_FUNC(sub_826BD4E0);
PPC_FUNC_IMPL(__imp__sub_826BD4E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82395c88
	sub_82395C88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826BD4E8"))) PPC_WEAK_FUNC(sub_826BD4E8);
PPC_FUNC_IMPL(__imp__sub_826BD4E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82395ad0
	sub_82395AD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826BD4F0"))) PPC_WEAK_FUNC(sub_826BD4F0);
PPC_FUNC_IMPL(__imp__sub_826BD4F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x826BD510;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826bd550
	if (ctx.cr0.eq) goto loc_826BD550;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826bd408
	ctx.lr = 0x826BD524;
	sub_826BD408(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// addi r11,r11,1560
	ctx.r11.s64 = ctx.r11.s64 + 1560;
	// addi r10,r10,2600
	ctx.r10.s64 = ctx.r10.s64 + 2600;
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
	// b 0x826bd554
	goto loc_826BD554;
loc_826BD550:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826BD554:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BD570"))) PPC_WEAK_FUNC(sub_826BD570);
PPC_FUNC_IMPL(__imp__sub_826BD570) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82395c88
	ctx.lr = 0x826BD590;
	sub_82395C88(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826bd5a0
	if (!ctx.cr6.eq) goto loc_826BD5A0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x826bd5b8
	goto loc_826BD5B8;
loc_826BD5A0:
	// bl 0x82395ad0
	ctx.lr = 0x826BD5A4;
	sub_82395AD0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x826bd5b8
	if (ctx.cr6.eq) goto loc_826BD5B8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82400188
	ctx.lr = 0x826BD5B8;
	sub_82400188(ctx, base);
loc_826BD5B8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BD5D0"))) PPC_WEAK_FUNC(sub_826BD5D0);
PPC_FUNC_IMPL(__imp__sub_826BD5D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,19888
	ctx.r3.s64 = ctx.r11.s64 + 19888;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BD5E0"))) PPC_WEAK_FUNC(sub_826BD5E0);
PPC_FUNC_IMPL(__imp__sub_826BD5E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x826bd618
	if (ctx.cr6.eq) goto loc_826BD618;
	// bl 0x82395e40
	ctx.lr = 0x826BD608;
	sub_82395E40(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826bd618
	if (!ctx.cr6.eq) goto loc_826BD618;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826bd624
	goto loc_826BD624;
loc_826BD618:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826bd308
	ctx.lr = 0x826BD624;
	sub_826BD308(ctx, base);
loc_826BD624:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BD640"))) PPC_WEAK_FUNC(sub_826BD640);
PPC_FUNC_IMPL(__imp__sub_826BD640) {
	PPC_FUNC_PROLOGUE();
	// b 0x82395e40
	sub_82395E40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826BD648"))) PPC_WEAK_FUNC(sub_826BD648);
PPC_FUNC_IMPL(__imp__sub_826BD648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x826BD668;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826bd6a8
	if (ctx.cr0.eq) goto loc_826BD6A8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826bd408
	ctx.lr = 0x826BD67C;
	sub_826BD408(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// addi r11,r11,2656
	ctx.r11.s64 = ctx.r11.s64 + 2656;
	// addi r10,r10,3696
	ctx.r10.s64 = ctx.r10.s64 + 3696;
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
	// b 0x826bd6ac
	goto loc_826BD6AC;
loc_826BD6A8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826BD6AC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BD6C8"))) PPC_WEAK_FUNC(sub_826BD6C8);
PPC_FUNC_IMPL(__imp__sub_826BD6C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82395e40
	ctx.lr = 0x826BD6E8;
	sub_82395E40(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826bd6f8
	if (!ctx.cr6.eq) goto loc_826BD6F8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x826bd710
	goto loc_826BD710;
loc_826BD6F8:
	// bl 0x82395ad0
	ctx.lr = 0x826BD6FC;
	sub_82395AD0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x826bd710
	if (ctx.cr6.eq) goto loc_826BD710;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82400188
	ctx.lr = 0x826BD710;
	sub_82400188(ctx, base);
loc_826BD710:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BD728"))) PPC_WEAK_FUNC(sub_826BD728);
PPC_FUNC_IMPL(__imp__sub_826BD728) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,19928
	ctx.r3.s64 = ctx.r11.s64 + 19928;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BD738"))) PPC_WEAK_FUNC(sub_826BD738);
PPC_FUNC_IMPL(__imp__sub_826BD738) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x826bd770
	if (ctx.cr6.eq) goto loc_826BD770;
	// bl 0x82395ff8
	ctx.lr = 0x826BD760;
	sub_82395FF8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826bd770
	if (!ctx.cr6.eq) goto loc_826BD770;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826bd77c
	goto loc_826BD77C;
loc_826BD770:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826bd308
	ctx.lr = 0x826BD77C;
	sub_826BD308(ctx, base);
loc_826BD77C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BD798"))) PPC_WEAK_FUNC(sub_826BD798);
PPC_FUNC_IMPL(__imp__sub_826BD798) {
	PPC_FUNC_PROLOGUE();
	// b 0x82395ff8
	sub_82395FF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826BD7A0"))) PPC_WEAK_FUNC(sub_826BD7A0);
PPC_FUNC_IMPL(__imp__sub_826BD7A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x826BD7C0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826bd800
	if (ctx.cr0.eq) goto loc_826BD800;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826bd408
	ctx.lr = 0x826BD7D4;
	sub_826BD408(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// addi r11,r11,3752
	ctx.r11.s64 = ctx.r11.s64 + 3752;
	// addi r10,r10,4792
	ctx.r10.s64 = ctx.r10.s64 + 4792;
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
	// b 0x826bd804
	goto loc_826BD804;
loc_826BD800:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826BD804:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BD820"))) PPC_WEAK_FUNC(sub_826BD820);
PPC_FUNC_IMPL(__imp__sub_826BD820) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82395ff8
	ctx.lr = 0x826BD840;
	sub_82395FF8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826bd850
	if (!ctx.cr6.eq) goto loc_826BD850;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x826bd868
	goto loc_826BD868;
loc_826BD850:
	// bl 0x82395ad0
	ctx.lr = 0x826BD854;
	sub_82395AD0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x826bd868
	if (ctx.cr6.eq) goto loc_826BD868;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82400188
	ctx.lr = 0x826BD868;
	sub_82400188(ctx, base);
loc_826BD868:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BD880"))) PPC_WEAK_FUNC(sub_826BD880);
PPC_FUNC_IMPL(__imp__sub_826BD880) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,19964
	ctx.r3.s64 = ctx.r11.s64 + 19964;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BD890"))) PPC_WEAK_FUNC(sub_826BD890);
PPC_FUNC_IMPL(__imp__sub_826BD890) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x826bd8c8
	if (ctx.cr6.eq) goto loc_826BD8C8;
	// bl 0x82396140
	ctx.lr = 0x826BD8B8;
	sub_82396140(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826bd8c8
	if (!ctx.cr6.eq) goto loc_826BD8C8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826bd8d4
	goto loc_826BD8D4;
loc_826BD8C8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824001e8
	ctx.lr = 0x826BD8D4;
	sub_824001E8(ctx, base);
loc_826BD8D4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BD8F0"))) PPC_WEAK_FUNC(sub_826BD8F0);
PPC_FUNC_IMPL(__imp__sub_826BD8F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82396140
	sub_82396140(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826BD8F8"))) PPC_WEAK_FUNC(sub_826BD8F8);
PPC_FUNC_IMPL(__imp__sub_826BD8F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x826BD918;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826bd958
	if (ctx.cr0.eq) goto loc_826BD958;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fffc8
	ctx.lr = 0x826BD92C;
	sub_823FFFC8(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// addi r11,r11,4848
	ctx.r11.s64 = ctx.r11.s64 + 4848;
	// addi r10,r10,5888
	ctx.r10.s64 = ctx.r10.s64 + 5888;
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
	// b 0x826bd95c
	goto loc_826BD95C;
loc_826BD958:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826BD95C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BD978"))) PPC_WEAK_FUNC(sub_826BD978);
PPC_FUNC_IMPL(__imp__sub_826BD978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82396140
	ctx.lr = 0x826BD998;
	sub_82396140(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x826bd9ac
	if (ctx.cr6.eq) goto loc_826BD9AC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82400188
	ctx.lr = 0x826BD9AC;
	sub_82400188(ctx, base);
loc_826BD9AC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BD9C8"))) PPC_WEAK_FUNC(sub_826BD9C8);
PPC_FUNC_IMPL(__imp__sub_826BD9C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,20000
	ctx.r3.s64 = ctx.r11.s64 + 20000;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BD9D8"))) PPC_WEAK_FUNC(sub_826BD9D8);
PPC_FUNC_IMPL(__imp__sub_826BD9D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x826bda10
	if (ctx.cr6.eq) goto loc_826BDA10;
	// bl 0x82396288
	ctx.lr = 0x826BDA00;
	sub_82396288(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826bda10
	if (!ctx.cr6.eq) goto loc_826BDA10;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826bda1c
	goto loc_826BDA1C;
loc_826BDA10:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824001e8
	ctx.lr = 0x826BDA1C;
	sub_824001E8(ctx, base);
loc_826BDA1C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BDA38"))) PPC_WEAK_FUNC(sub_826BDA38);
PPC_FUNC_IMPL(__imp__sub_826BDA38) {
	PPC_FUNC_PROLOGUE();
	// b 0x82396288
	sub_82396288(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826BDA40"))) PPC_WEAK_FUNC(sub_826BDA40);
PPC_FUNC_IMPL(__imp__sub_826BDA40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x826BDA60;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826bdaa0
	if (ctx.cr0.eq) goto loc_826BDAA0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fffc8
	ctx.lr = 0x826BDA74;
	sub_823FFFC8(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// addi r11,r11,5944
	ctx.r11.s64 = ctx.r11.s64 + 5944;
	// addi r10,r10,6984
	ctx.r10.s64 = ctx.r10.s64 + 6984;
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
	// b 0x826bdaa4
	goto loc_826BDAA4;
loc_826BDAA0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826BDAA4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BDAC0"))) PPC_WEAK_FUNC(sub_826BDAC0);
PPC_FUNC_IMPL(__imp__sub_826BDAC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82396288
	ctx.lr = 0x826BDAE0;
	sub_82396288(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x826bdaf4
	if (ctx.cr6.eq) goto loc_826BDAF4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82400188
	ctx.lr = 0x826BDAF4;
	sub_82400188(ctx, base);
loc_826BDAF4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BDB10"))) PPC_WEAK_FUNC(sub_826BDB10);
PPC_FUNC_IMPL(__imp__sub_826BDB10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,20036
	ctx.r3.s64 = ctx.r11.s64 + 20036;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BDB20"))) PPC_WEAK_FUNC(sub_826BDB20);
PPC_FUNC_IMPL(__imp__sub_826BDB20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x826bdb58
	if (ctx.cr6.eq) goto loc_826BDB58;
	// bl 0x823963d0
	ctx.lr = 0x826BDB48;
	sub_823963D0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826bdb58
	if (!ctx.cr6.eq) goto loc_826BDB58;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826bdb64
	goto loc_826BDB64;
loc_826BDB58:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824001e8
	ctx.lr = 0x826BDB64;
	sub_824001E8(ctx, base);
loc_826BDB64:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BDB80"))) PPC_WEAK_FUNC(sub_826BDB80);
PPC_FUNC_IMPL(__imp__sub_826BDB80) {
	PPC_FUNC_PROLOGUE();
	// b 0x823963d0
	sub_823963D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826BDB88"))) PPC_WEAK_FUNC(sub_826BDB88);
PPC_FUNC_IMPL(__imp__sub_826BDB88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x826BDBA8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826bdbe8
	if (ctx.cr0.eq) goto loc_826BDBE8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fffc8
	ctx.lr = 0x826BDBBC;
	sub_823FFFC8(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// addi r11,r11,7040
	ctx.r11.s64 = ctx.r11.s64 + 7040;
	// addi r10,r10,8080
	ctx.r10.s64 = ctx.r10.s64 + 8080;
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
	// b 0x826bdbec
	goto loc_826BDBEC;
loc_826BDBE8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826BDBEC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BDC08"))) PPC_WEAK_FUNC(sub_826BDC08);
PPC_FUNC_IMPL(__imp__sub_826BDC08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823963d0
	ctx.lr = 0x826BDC28;
	sub_823963D0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x826bdc3c
	if (ctx.cr6.eq) goto loc_826BDC3C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82400188
	ctx.lr = 0x826BDC3C;
	sub_82400188(ctx, base);
loc_826BDC3C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BDC58"))) PPC_WEAK_FUNC(sub_826BDC58);
PPC_FUNC_IMPL(__imp__sub_826BDC58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,20076
	ctx.r3.s64 = ctx.r11.s64 + 20076;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BDC68"))) PPC_WEAK_FUNC(sub_826BDC68);
PPC_FUNC_IMPL(__imp__sub_826BDC68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x826bdca0
	if (ctx.cr6.eq) goto loc_826BDCA0;
	// bl 0x82396510
	ctx.lr = 0x826BDC90;
	sub_82396510(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826bdca0
	if (!ctx.cr6.eq) goto loc_826BDCA0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826bdcac
	goto loc_826BDCAC;
loc_826BDCA0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233ecc8
	ctx.lr = 0x826BDCAC;
	sub_8233ECC8(ctx, base);
loc_826BDCAC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BDCC8"))) PPC_WEAK_FUNC(sub_826BDCC8);
PPC_FUNC_IMPL(__imp__sub_826BDCC8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82396510
	sub_82396510(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826BDCD0"))) PPC_WEAK_FUNC(sub_826BDCD0);
PPC_FUNC_IMPL(__imp__sub_826BDCD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x826BDCEC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826bdd00
	if (ctx.cr0.eq) goto loc_826BDD00;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826bddb0
	ctx.lr = 0x826BDCFC;
	sub_826BDDB0(ctx, base);
	// b 0x826bdd04
	goto loc_826BDD04;
loc_826BDD00:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826BDD04:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BDD18"))) PPC_WEAK_FUNC(sub_826BDD18);
PPC_FUNC_IMPL(__imp__sub_826BDD18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82396510
	ctx.lr = 0x826BDD38;
	sub_82396510(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826bdd48
	if (!ctx.cr6.eq) goto loc_826BDD48;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x826bdd60
	goto loc_826BDD60;
loc_826BDD48:
	// bl 0x82394fc8
	ctx.lr = 0x826BDD4C;
	sub_82394FC8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x826bdd60
	if (ctx.cr6.eq) goto loc_826BDD60;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8233eba0
	ctx.lr = 0x826BDD60;
	sub_8233EBA0(ctx, base);
loc_826BDD60:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BDD78"))) PPC_WEAK_FUNC(sub_826BDD78);
PPC_FUNC_IMPL(__imp__sub_826BDD78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,1612(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1612);
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f1,1512(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1512, temp.u32);
	// stw r10,1852(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1852, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826bdda0
	if (ctx.cr6.eq) goto loc_826BDDA0;
	// li r9,452
	ctx.r9.s64 = 452;
	// fctiwz f0,f1
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stw r10,592(r11)
	PPC_STORE_U32(ctx.r11.u32 + 592, ctx.r10.u32);
	// stfiwx f0,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.f0.u32);
loc_826BDDA0:
	// li r11,3288
	ctx.r11.s64 = 3288;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfiwx f0,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.f0.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BDDB0"))) PPC_WEAK_FUNC(sub_826BDDB0);
PPC_FUNC_IMPL(__imp__sub_826BDDB0) {
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
	// bl 0x8233edc0
	ctx.lr = 0x826BDDD0;
	sub_8233EDC0(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// addi r11,r11,8136
	ctx.r11.s64 = ctx.r11.s64 + 8136;
	// addi r10,r10,9324
	ctx.r10.s64 = ctx.r10.s64 + 9324;
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
	// lfs f0,3220(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3220);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3220(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3220, temp.u32);
	// lwz r11,3224(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3224);
	// stw r11,3224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3224, ctx.r11.u32);
	// lwz r11,3228(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3228);
	// stw r11,3228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3228, ctx.r11.u32);
	// lfs f0,3232(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3232);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3232(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3232, temp.u32);
	// lfs f0,3236(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3236);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3236(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3236, temp.u32);
	// lfs f0,3240(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3240);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3240(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3240, temp.u32);
	// lfs f0,3244(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3244);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3244(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3244, temp.u32);
	// lfs f0,3248(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3248);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3248(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3248, temp.u32);
	// lfs f0,3252(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3252);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3252(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3252, temp.u32);
	// lwz r11,3256(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3256);
	// stw r11,3256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3256, ctx.r11.u32);
	// lwz r11,3260(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3260);
	// stw r11,3260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3260, ctx.r11.u32);
	// lwz r11,3264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3264);
	// stw r11,3264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3264, ctx.r11.u32);
	// lwz r11,3268(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3268);
	// stw r11,3268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3268, ctx.r11.u32);
	// lfs f0,3272(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3272);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3272(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3272, temp.u32);
	// lfs f0,3276(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3276);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3276(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3276, temp.u32);
	// lfs f0,3280(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3280);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3280(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3280, temp.u32);
	// lfs f0,3284(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3284);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3284(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3284, temp.u32);
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
	// lwz r11,3304(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3304);
	// stw r11,3304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3304, ctx.r11.u32);
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
	// lfs f0,3320(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3320);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3320(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3320, temp.u32);
	// lwz r11,3324(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3324);
	// stw r11,3324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3324, ctx.r11.u32);
	// lwz r11,3328(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3328);
	// stw r11,3328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3328, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BDEF8"))) PPC_WEAK_FUNC(sub_826BDEF8);
PPC_FUNC_IMPL(__imp__sub_826BDEF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,20104
	ctx.r3.s64 = ctx.r11.s64 + 20104;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BDF08"))) PPC_WEAK_FUNC(sub_826BDF08);
PPC_FUNC_IMPL(__imp__sub_826BDF08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x826bdf40
	if (ctx.cr6.eq) goto loc_826BDF40;
	// bl 0x82396650
	ctx.lr = 0x826BDF30;
	sub_82396650(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826bdf40
	if (!ctx.cr6.eq) goto loc_826BDF40;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826bdf4c
	goto loc_826BDF4C;
loc_826BDF40:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233e5b8
	ctx.lr = 0x826BDF4C;
	sub_8233E5B8(ctx, base);
loc_826BDF4C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BDF68"))) PPC_WEAK_FUNC(sub_826BDF68);
PPC_FUNC_IMPL(__imp__sub_826BDF68) {
	PPC_FUNC_PROLOGUE();
	// b 0x82396650
	sub_82396650(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826BDF70"))) PPC_WEAK_FUNC(sub_826BDF70);
PPC_FUNC_IMPL(__imp__sub_826BDF70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x826BDF90;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826bdfd0
	if (ctx.cr0.eq) goto loc_826BDFD0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233e6c8
	ctx.lr = 0x826BDFA4;
	sub_8233E6C8(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// addi r11,r11,9376
	ctx.r11.s64 = ctx.r11.s64 + 9376;
	// addi r10,r10,10552
	ctx.r10.s64 = ctx.r10.s64 + 10552;
	// addi r9,r9,29100
	ctx.r9.s64 = ctx.r9.s64 + 29100;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x826bdfd4
	goto loc_826BDFD4;
loc_826BDFD0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826BDFD4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BDFF0"))) PPC_WEAK_FUNC(sub_826BDFF0);
PPC_FUNC_IMPL(__imp__sub_826BDFF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82396650
	ctx.lr = 0x826BE010;
	sub_82396650(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x826be024
	if (ctx.cr6.eq) goto loc_826BE024;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8233e668
	ctx.lr = 0x826BE024;
	sub_8233E668(ctx, base);
loc_826BE024:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BE040"))) PPC_WEAK_FUNC(sub_826BE040);
PPC_FUNC_IMPL(__imp__sub_826BE040) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,20128
	ctx.r3.s64 = ctx.r11.s64 + 20128;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BE050"))) PPC_WEAK_FUNC(sub_826BE050);
PPC_FUNC_IMPL(__imp__sub_826BE050) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x826be088
	if (ctx.cr6.eq) goto loc_826BE088;
	// bl 0x82396708
	ctx.lr = 0x826BE078;
	sub_82396708(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826be088
	if (!ctx.cr6.eq) goto loc_826BE088;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826be094
	goto loc_826BE094;
loc_826BE088:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233e5b8
	ctx.lr = 0x826BE094;
	sub_8233E5B8(ctx, base);
loc_826BE094:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BE0B0"))) PPC_WEAK_FUNC(sub_826BE0B0);
PPC_FUNC_IMPL(__imp__sub_826BE0B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82396708
	sub_82396708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826BE0B8"))) PPC_WEAK_FUNC(sub_826BE0B8);
PPC_FUNC_IMPL(__imp__sub_826BE0B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82394c08
	sub_82394C08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826BE0C0"))) PPC_WEAK_FUNC(sub_826BE0C0);
PPC_FUNC_IMPL(__imp__sub_826BE0C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x826BE0E0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826be120
	if (ctx.cr0.eq) goto loc_826BE120;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233e6c8
	ctx.lr = 0x826BE0F4;
	sub_8233E6C8(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// addi r11,r11,10608
	ctx.r11.s64 = ctx.r11.s64 + 10608;
	// addi r10,r10,11784
	ctx.r10.s64 = ctx.r10.s64 + 11784;
	// addi r9,r9,29100
	ctx.r9.s64 = ctx.r9.s64 + 29100;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x826be124
	goto loc_826BE124;
loc_826BE120:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826BE124:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BE140"))) PPC_WEAK_FUNC(sub_826BE140);
PPC_FUNC_IMPL(__imp__sub_826BE140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82396708
	ctx.lr = 0x826BE160;
	sub_82396708(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x826be174
	if (ctx.cr6.eq) goto loc_826BE174;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8233e668
	ctx.lr = 0x826BE174;
	sub_8233E668(ctx, base);
loc_826BE174:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BE190"))) PPC_WEAK_FUNC(sub_826BE190);
PPC_FUNC_IMPL(__imp__sub_826BE190) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826b90c8
	ctx.lr = 0x826BE1B0;
	sub_826B90C8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826be1c0
	if (ctx.cr0.eq) goto loc_826BE1C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x826BE1C0;
	sub_82332DB8(ctx, base);
loc_826BE1C0:
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

__attribute__((alias("__imp__sub_826BE1E0"))) PPC_WEAK_FUNC(sub_826BE1E0);
PPC_FUNC_IMPL(__imp__sub_826BE1E0) {
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
	// bl 0x82713ce0
	ctx.lr = 0x826BE1F8;
	sub_82713CE0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r9,r11,-32616
	ctx.r9.s64 = ctx.r11.s64 + -32616;
	// lis r8,-32221
	ctx.r8.s64 = -2111635456;
	// lis r7,-32221
	ctx.r7.s64 = -2111635456;
	// lfs f0,-32616(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32616);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f0,1420(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1420, temp.u32);
	// addi r10,r10,-16272
	ctx.r10.s64 = ctx.r10.s64 + -16272;
	// lfs f0,-204(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -204);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r8,-15256
	ctx.r8.s64 = ctx.r8.s64 + -15256;
	// lfs f13,-60(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -60);
	ctx.f13.f64 = double(temp.f32);
	// addi r7,r7,-15204
	ctx.r7.s64 = ctx.r7.s64 + -15204;
	// li r9,40
	ctx.r9.s64 = 40;
	// stfs f0,1416(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1416, temp.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stfs f13,1408(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1408, temp.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// stw r7,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r7.u32);
	// stw r9,1424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1424, ctx.r9.u32);
	// stw r6,1512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1512, ctx.r6.u32);
	// stw r11,1520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1520, ctx.r11.u32);
	// stw r11,1600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1600, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

