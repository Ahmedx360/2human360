#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82F25F60"))) PPC_WEAK_FUNC(sub_82F25F60);
PPC_FUNC_IMPL(__imp__sub_82F25F60) {
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
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,10288
	ctx.r11.s64 = ctx.r11.s64 + 10288;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82339de0
	ctx.lr = 0x82F25F88;
	sub_82339DE0(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,5260
	ctx.r3.s64 = ctx.r11.s64 + 5260;
	// bl 0x82816528
	ctx.lr = 0x82F25F98;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8261cbd0
	ctx.lr = 0x82F25FA8;
	sub_8261CBD0(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,464(r11)
	PPC_STORE_U8(ctx.r11.u32 + 464, ctx.r3.u8);
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

__attribute__((alias("__imp__sub_82F25FC8"))) PPC_WEAK_FUNC(sub_82F25FC8);
PPC_FUNC_IMPL(__imp__sub_82F25FC8) {
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
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// lis r9,-31944
	ctx.r9.s64 = -2093481984;
	// addi r7,r11,13704
	ctx.r7.s64 = ctx.r11.s64 + 13704;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,13084(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13084);
	// addi r31,r9,13088
	ctx.r31.s64 = ctx.r9.s64 + 13088;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f26024
	if (!ctx.cr0.eq) goto loc_82F26024;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,9732
	ctx.r9.s64 = ctx.r9.s64 + 9732;
	// stw r11,13084(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13084, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,25096
	ctx.r3.s64 = ctx.r11.s64 + 25096;
	// bl 0x82a4c758
	ctx.lr = 0x82F26024;
	sub_82A4C758(ctx, base);
loc_82F26024:
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r11,5288
	ctx.r3.s64 = ctx.r11.s64 + 5288;
	// bl 0x82816528
	ctx.lr = 0x82F26030;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8261cbd0
	ctx.lr = 0x82F26040;
	sub_8261CBD0(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,465(r11)
	PPC_STORE_U8(ctx.r11.u32 + 465, ctx.r3.u8);
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

__attribute__((alias("__imp__sub_82F26060"))) PPC_WEAK_FUNC(sub_82F26060);
PPC_FUNC_IMPL(__imp__sub_82F26060) {
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
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// lis r9,-31944
	ctx.r9.s64 = -2093481984;
	// addi r7,r11,13864
	ctx.r7.s64 = ctx.r11.s64 + 13864;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,13092(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13092);
	// addi r31,r9,13096
	ctx.r31.s64 = ctx.r9.s64 + 13096;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f260bc
	if (!ctx.cr0.eq) goto loc_82F260BC;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,9796
	ctx.r9.s64 = ctx.r9.s64 + 9796;
	// stw r11,13092(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13092, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,25072
	ctx.r3.s64 = ctx.r11.s64 + 25072;
	// bl 0x82a4c758
	ctx.lr = 0x82F260BC;
	sub_82A4C758(ctx, base);
loc_82F260BC:
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r11,5312
	ctx.r3.s64 = ctx.r11.s64 + 5312;
	// bl 0x82816528
	ctx.lr = 0x82F260C8;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8261cbd0
	ctx.lr = 0x82F260D8;
	sub_8261CBD0(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,466(r11)
	PPC_STORE_U8(ctx.r11.u32 + 466, ctx.r3.u8);
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

__attribute__((alias("__imp__sub_82F260F8"))) PPC_WEAK_FUNC(sub_82F260F8);
PPC_FUNC_IMPL(__imp__sub_82F260F8) {
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
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// lis r9,-31944
	ctx.r9.s64 = -2093481984;
	// addi r7,r11,14936
	ctx.r7.s64 = ctx.r11.s64 + 14936;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,13100(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13100);
	// addi r31,r9,13104
	ctx.r31.s64 = ctx.r9.s64 + 13104;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f26154
	if (!ctx.cr0.eq) goto loc_82F26154;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,9860
	ctx.r9.s64 = ctx.r9.s64 + 9860;
	// stw r11,13100(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13100, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,25048
	ctx.r3.s64 = ctx.r11.s64 + 25048;
	// bl 0x82a4c758
	ctx.lr = 0x82F26154;
	sub_82A4C758(ctx, base);
loc_82F26154:
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r11,5336
	ctx.r3.s64 = ctx.r11.s64 + 5336;
	// bl 0x82816528
	ctx.lr = 0x82F26160;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8261cbd0
	ctx.lr = 0x82F26170;
	sub_8261CBD0(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,467(r11)
	PPC_STORE_U8(ctx.r11.u32 + 467, ctx.r3.u8);
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

__attribute__((alias("__imp__sub_82F26190"))) PPC_WEAK_FUNC(sub_82F26190);
PPC_FUNC_IMPL(__imp__sub_82F26190) {
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
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// lis r9,-31944
	ctx.r9.s64 = -2093481984;
	// addi r7,r11,15568
	ctx.r7.s64 = ctx.r11.s64 + 15568;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,13108(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13108);
	// addi r31,r9,13112
	ctx.r31.s64 = ctx.r9.s64 + 13112;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f261ec
	if (!ctx.cr0.eq) goto loc_82F261EC;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,9924
	ctx.r9.s64 = ctx.r9.s64 + 9924;
	// stw r11,13108(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13108, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,25024
	ctx.r3.s64 = ctx.r11.s64 + 25024;
	// bl 0x82a4c758
	ctx.lr = 0x82F261EC;
	sub_82A4C758(ctx, base);
loc_82F261EC:
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r11,5356
	ctx.r3.s64 = ctx.r11.s64 + 5356;
	// bl 0x82816528
	ctx.lr = 0x82F261F8;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8261cbd0
	ctx.lr = 0x82F26208;
	sub_8261CBD0(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,468(r11)
	PPC_STORE_U8(ctx.r11.u32 + 468, ctx.r3.u8);
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

__attribute__((alias("__imp__sub_82F26228"))) PPC_WEAK_FUNC(sub_82F26228);
PPC_FUNC_IMPL(__imp__sub_82F26228) {
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
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// lis r9,-31944
	ctx.r9.s64 = -2093481984;
	// addi r7,r11,17048
	ctx.r7.s64 = ctx.r11.s64 + 17048;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,13116(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13116);
	// addi r31,r9,13120
	ctx.r31.s64 = ctx.r9.s64 + 13120;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f26284
	if (!ctx.cr0.eq) goto loc_82F26284;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,9988
	ctx.r9.s64 = ctx.r9.s64 + 9988;
	// stw r11,13116(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13116, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,25000
	ctx.r3.s64 = ctx.r11.s64 + 25000;
	// bl 0x82a4c758
	ctx.lr = 0x82F26284;
	sub_82A4C758(ctx, base);
loc_82F26284:
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r11,5376
	ctx.r3.s64 = ctx.r11.s64 + 5376;
	// bl 0x82816528
	ctx.lr = 0x82F26290;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8261cbd0
	ctx.lr = 0x82F262A0;
	sub_8261CBD0(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,469(r11)
	PPC_STORE_U8(ctx.r11.u32 + 469, ctx.r3.u8);
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

__attribute__((alias("__imp__sub_82F262C0"))) PPC_WEAK_FUNC(sub_82F262C0);
PPC_FUNC_IMPL(__imp__sub_82F262C0) {
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
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// lis r9,-31944
	ctx.r9.s64 = -2093481984;
	// addi r7,r11,17168
	ctx.r7.s64 = ctx.r11.s64 + 17168;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,13124(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13124);
	// addi r31,r9,13128
	ctx.r31.s64 = ctx.r9.s64 + 13128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f2631c
	if (!ctx.cr0.eq) goto loc_82F2631C;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,10040
	ctx.r9.s64 = ctx.r9.s64 + 10040;
	// stw r11,13124(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13124, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,24976
	ctx.r3.s64 = ctx.r11.s64 + 24976;
	// bl 0x82a4c758
	ctx.lr = 0x82F2631C;
	sub_82A4C758(ctx, base);
loc_82F2631C:
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r11,5220
	ctx.r3.s64 = ctx.r11.s64 + 5220;
	// bl 0x82816528
	ctx.lr = 0x82F26328;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8261cbd0
	ctx.lr = 0x82F26338;
	sub_8261CBD0(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,470(r11)
	PPC_STORE_U8(ctx.r11.u32 + 470, ctx.r3.u8);
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

__attribute__((alias("__imp__sub_82F26358"))) PPC_WEAK_FUNC(sub_82F26358);
PPC_FUNC_IMPL(__imp__sub_82F26358) {
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
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// lis r9,-31944
	ctx.r9.s64 = -2093481984;
	// addi r7,r11,17176
	ctx.r7.s64 = ctx.r11.s64 + 17176;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,13132(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13132);
	// addi r31,r9,13136
	ctx.r31.s64 = ctx.r9.s64 + 13136;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f263b4
	if (!ctx.cr0.eq) goto loc_82F263B4;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,10092
	ctx.r9.s64 = ctx.r9.s64 + 10092;
	// stw r11,13132(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13132, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,24952
	ctx.r3.s64 = ctx.r11.s64 + 24952;
	// bl 0x82a4c758
	ctx.lr = 0x82F263B4;
	sub_82A4C758(ctx, base);
loc_82F263B4:
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r11,5396
	ctx.r3.s64 = ctx.r11.s64 + 5396;
	// bl 0x82816528
	ctx.lr = 0x82F263C0;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8261cbd0
	ctx.lr = 0x82F263D0;
	sub_8261CBD0(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,471(r11)
	PPC_STORE_U8(ctx.r11.u32 + 471, ctx.r3.u8);
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

__attribute__((alias("__imp__sub_82F263F0"))) PPC_WEAK_FUNC(sub_82F263F0);
PPC_FUNC_IMPL(__imp__sub_82F263F0) {
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
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// lis r9,-31944
	ctx.r9.s64 = -2093481984;
	// addi r7,r11,-9392
	ctx.r7.s64 = ctx.r11.s64 + -9392;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,13052(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13052);
	// addi r31,r9,13056
	ctx.r31.s64 = ctx.r9.s64 + 13056;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f2644c
	if (!ctx.cr0.eq) goto loc_82F2644C;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,9536
	ctx.r9.s64 = ctx.r9.s64 + 9536;
	// stw r11,13052(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13052, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,25192
	ctx.r3.s64 = ctx.r11.s64 + 25192;
	// bl 0x82a4c758
	ctx.lr = 0x82F2644C;
	sub_82A4C758(ctx, base);
loc_82F2644C:
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r11,5416
	ctx.r3.s64 = ctx.r11.s64 + 5416;
	// bl 0x82816528
	ctx.lr = 0x82F26458;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8261cbd0
	ctx.lr = 0x82F26468;
	sub_8261CBD0(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,472(r11)
	PPC_STORE_U8(ctx.r11.u32 + 472, ctx.r3.u8);
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

__attribute__((alias("__imp__sub_82F26488"))) PPC_WEAK_FUNC(sub_82F26488);
PPC_FUNC_IMPL(__imp__sub_82F26488) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// addi r3,r9,25504
	ctx.r3.s64 = ctx.r9.s64 + 25504;
	// stw r10,-21232(r11)
	PPC_STORE_U32(ctx.r11.u32 + -21232, ctx.r10.u32);
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F264A0"))) PPC_WEAK_FUNC(sub_82F264A0);
PPC_FUNC_IMPL(__imp__sub_82F264A0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32099
	ctx.r11.s64 = -2103640064;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-32704
	ctx.r11.s64 = ctx.r11.s64 + -32704;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82339c78
	ctx.lr = 0x82F264CC;
	sub_82339C78(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,14328
	ctx.r3.s64 = ctx.r11.s64 + 14328;
	// bl 0x82816528
	ctx.lr = 0x82F264DC;
	sub_82816528(ctx, base);
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r31,r11,-21232
	ctx.r31.s64 = ctx.r11.s64 + -21232;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// li r5,24
	ctx.r5.s64 = 24;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// bl 0x82332d50
	ctx.lr = 0x82F26508;
	sub_82332D50(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r10,r3,24
	ctx.r10.s64 = ctx.r3.s64 * 24;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f26534
	if (ctx.cr0.eq) goto loc_82F26534;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
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
loc_82F26534:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82f26558
	if (ctx.cr6.eq) goto loc_82F26558;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,24
	ctx.r4.s64 = 24;
	// bl 0x82332c38
	ctx.lr = 0x82F26558;
	sub_82332C38(ctx, base);
loc_82F26558:
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,473(r10)
	PPC_STORE_U8(ctx.r10.u32 + 473, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_82F26580"))) PPC_WEAK_FUNC(sub_82F26580);
PPC_FUNC_IMPL(__imp__sub_82F26580) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// addi r3,r9,25640
	ctx.r3.s64 = ctx.r9.s64 + 25640;
	// stw r10,-21208(r11)
	PPC_STORE_U32(ctx.r11.u32 + -21208, ctx.r10.u32);
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F26598"))) PPC_WEAK_FUNC(sub_82F26598);
PPC_FUNC_IMPL(__imp__sub_82F26598) {
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
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-11496
	ctx.r11.s64 = ctx.r11.s64 + -11496;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82339c78
	ctx.lr = 0x82F265C0;
	sub_82339C78(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,18736
	ctx.r3.s64 = ctx.r11.s64 + 18736;
	// bl 0x82816528
	ctx.lr = 0x82F265D0;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8264baf8
	ctx.lr = 0x82F265E0;
	sub_8264BAF8(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,474(r11)
	PPC_STORE_U8(ctx.r11.u32 + 474, ctx.r3.u8);
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

__attribute__((alias("__imp__sub_82F26600"))) PPC_WEAK_FUNC(sub_82F26600);
PPC_FUNC_IMPL(__imp__sub_82F26600) {
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
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-11480
	ctx.r11.s64 = ctx.r11.s64 + -11480;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82339c78
	ctx.lr = 0x82F26628;
	sub_82339C78(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,18760
	ctx.r3.s64 = ctx.r11.s64 + 18760;
	// bl 0x82816528
	ctx.lr = 0x82F26638;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8264baf8
	ctx.lr = 0x82F26648;
	sub_8264BAF8(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,475(r11)
	PPC_STORE_U8(ctx.r11.u32 + 475, ctx.r3.u8);
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

__attribute__((alias("__imp__sub_82F26668"))) PPC_WEAK_FUNC(sub_82F26668);
PPC_FUNC_IMPL(__imp__sub_82F26668) {
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
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-11456
	ctx.r11.s64 = ctx.r11.s64 + -11456;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82339c78
	ctx.lr = 0x82F26690;
	sub_82339C78(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,18784
	ctx.r3.s64 = ctx.r11.s64 + 18784;
	// bl 0x82816528
	ctx.lr = 0x82F266A0;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8264baf8
	ctx.lr = 0x82F266B0;
	sub_8264BAF8(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,476(r11)
	PPC_STORE_U8(ctx.r11.u32 + 476, ctx.r3.u8);
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

__attribute__((alias("__imp__sub_82F266D0"))) PPC_WEAK_FUNC(sub_82F266D0);
PPC_FUNC_IMPL(__imp__sub_82F266D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// addi r3,r9,25968
	ctx.r3.s64 = ctx.r9.s64 + 25968;
	// stw r10,-21184(r11)
	PPC_STORE_U32(ctx.r11.u32 + -21184, ctx.r10.u32);
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F266E8"))) PPC_WEAK_FUNC(sub_82F266E8);
PPC_FUNC_IMPL(__imp__sub_82F266E8) {
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
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,32608
	ctx.r11.s64 = ctx.r11.s64 + 32608;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8265b168
	ctx.lr = 0x82F26710;
	sub_8265B168(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,24408
	ctx.r3.s64 = ctx.r11.s64 + 24408;
	// bl 0x82816528
	ctx.lr = 0x82F26720;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82657080
	ctx.lr = 0x82F26730;
	sub_82657080(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,477(r11)
	PPC_STORE_U8(ctx.r11.u32 + 477, ctx.r3.u8);
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

__attribute__((alias("__imp__sub_82F26750"))) PPC_WEAK_FUNC(sub_82F26750);
PPC_FUNC_IMPL(__imp__sub_82F26750) {
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
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,32720
	ctx.r11.s64 = ctx.r11.s64 + 32720;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8265b168
	ctx.lr = 0x82F26778;
	sub_8265B168(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,24432
	ctx.r3.s64 = ctx.r11.s64 + 24432;
	// bl 0x82816528
	ctx.lr = 0x82F26788;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82657080
	ctx.lr = 0x82F26798;
	sub_82657080(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,478(r11)
	PPC_STORE_U8(ctx.r11.u32 + 478, ctx.r3.u8);
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

__attribute__((alias("__imp__sub_82F267B8"))) PPC_WEAK_FUNC(sub_82F267B8);
PPC_FUNC_IMPL(__imp__sub_82F267B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// addi r3,r9,26272
	ctx.r3.s64 = ctx.r9.s64 + 26272;
	// stw r10,-21160(r11)
	PPC_STORE_U32(ctx.r11.u32 + -21160, ctx.r10.u32);
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F267D0"))) PPC_WEAK_FUNC(sub_82F267D0);
PPC_FUNC_IMPL(__imp__sub_82F267D0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,19392
	ctx.r11.s64 = ctx.r11.s64 + 19392;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82664048
	ctx.lr = 0x82F267FC;
	sub_82664048(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,28360
	ctx.r3.s64 = ctx.r11.s64 + 28360;
	// bl 0x82816528
	ctx.lr = 0x82F2680C;
	sub_82816528(ctx, base);
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r31,r11,-21160
	ctx.r31.s64 = ctx.r11.s64 + -21160;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// li r5,24
	ctx.r5.s64 = 24;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// bl 0x82332d50
	ctx.lr = 0x82F26838;
	sub_82332D50(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r10,r3,24
	ctx.r10.s64 = ctx.r3.s64 * 24;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f26864
	if (ctx.cr0.eq) goto loc_82F26864;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
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
loc_82F26864:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82f26888
	if (ctx.cr6.eq) goto loc_82F26888;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,24
	ctx.r4.s64 = 24;
	// bl 0x82332c38
	ctx.lr = 0x82F26888;
	sub_82332C38(ctx, base);
loc_82F26888:
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,479(r10)
	PPC_STORE_U8(ctx.r10.u32 + 479, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_82F268B0"))) PPC_WEAK_FUNC(sub_82F268B0);
PPC_FUNC_IMPL(__imp__sub_82F268B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// addi r3,r9,26504
	ctx.r3.s64 = ctx.r9.s64 + 26504;
	// stw r10,-21136(r11)
	PPC_STORE_U32(ctx.r11.u32 + -21136, ctx.r10.u32);
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F268C8"))) PPC_WEAK_FUNC(sub_82F268C8);
PPC_FUNC_IMPL(__imp__sub_82F268C8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,19392
	ctx.r11.s64 = ctx.r11.s64 + 19392;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82666590
	ctx.lr = 0x82F268F4;
	sub_82666590(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,28360
	ctx.r3.s64 = ctx.r11.s64 + 28360;
	// bl 0x82816528
	ctx.lr = 0x82F26904;
	sub_82816528(ctx, base);
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r31,r11,-21136
	ctx.r31.s64 = ctx.r11.s64 + -21136;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// li r5,24
	ctx.r5.s64 = 24;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// bl 0x82332d50
	ctx.lr = 0x82F26930;
	sub_82332D50(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r10,r3,24
	ctx.r10.s64 = ctx.r3.s64 * 24;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f2695c
	if (ctx.cr0.eq) goto loc_82F2695C;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
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
loc_82F2695C:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82f26980
	if (ctx.cr6.eq) goto loc_82F26980;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,24
	ctx.r4.s64 = 24;
	// bl 0x82332c38
	ctx.lr = 0x82F26980;
	sub_82332C38(ctx, base);
loc_82F26980:
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,480(r10)
	PPC_STORE_U8(ctx.r10.u32 + 480, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_82F269A8"))) PPC_WEAK_FUNC(sub_82F269A8);
PPC_FUNC_IMPL(__imp__sub_82F269A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// addi r3,r9,26832
	ctx.r3.s64 = ctx.r9.s64 + 26832;
	// stw r10,-21112(r11)
	PPC_STORE_U32(ctx.r11.u32 + -21112, ctx.r10.u32);
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F269C0"))) PPC_WEAK_FUNC(sub_82F269C0);
PPC_FUNC_IMPL(__imp__sub_82F269C0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,19392
	ctx.r11.s64 = ctx.r11.s64 + 19392;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x826708b8
	ctx.lr = 0x82F269EC;
	sub_826708B8(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,28360
	ctx.r3.s64 = ctx.r11.s64 + 28360;
	// bl 0x82816528
	ctx.lr = 0x82F269FC;
	sub_82816528(ctx, base);
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r31,r11,-21112
	ctx.r31.s64 = ctx.r11.s64 + -21112;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// li r5,24
	ctx.r5.s64 = 24;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// bl 0x82332d50
	ctx.lr = 0x82F26A28;
	sub_82332D50(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r10,r3,24
	ctx.r10.s64 = ctx.r3.s64 * 24;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f26a54
	if (ctx.cr0.eq) goto loc_82F26A54;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
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
loc_82F26A54:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82f26a78
	if (ctx.cr6.eq) goto loc_82F26A78;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,24
	ctx.r4.s64 = 24;
	// bl 0x82332c38
	ctx.lr = 0x82F26A78;
	sub_82332C38(ctx, base);
loc_82F26A78:
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,481(r10)
	PPC_STORE_U8(ctx.r10.u32 + 481, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_82F26AA0"))) PPC_WEAK_FUNC(sub_82F26AA0);
PPC_FUNC_IMPL(__imp__sub_82F26AA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// addi r3,r9,28408
	ctx.r3.s64 = ctx.r9.s64 + 28408;
	// stw r10,-20720(r11)
	PPC_STORE_U32(ctx.r11.u32 + -20720, ctx.r10.u32);
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F26AB8"))) PPC_WEAK_FUNC(sub_82F26AB8);
PPC_FUNC_IMPL(__imp__sub_82F26AB8) {
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
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-11228
	ctx.r3.s64 = ctx.r11.s64 + -11228;
	// bl 0x82816528
	ctx.lr = 0x82F26AD0;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,484(r11)
	PPC_STORE_U32(ctx.r11.u32 + 484, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F26AE8"))) PPC_WEAK_FUNC(sub_82F26AE8);
PPC_FUNC_IMPL(__imp__sub_82F26AE8) {
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
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-11212
	ctx.r3.s64 = ctx.r11.s64 + -11212;
	// bl 0x82816528
	ctx.lr = 0x82F26B00;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,488(r11)
	PPC_STORE_U32(ctx.r11.u32 + 488, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F26B18"))) PPC_WEAK_FUNC(sub_82F26B18);
PPC_FUNC_IMPL(__imp__sub_82F26B18) {
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
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-11192
	ctx.r3.s64 = ctx.r11.s64 + -11192;
	// bl 0x82816528
	ctx.lr = 0x82F26B30;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,492(r11)
	PPC_STORE_U32(ctx.r11.u32 + 492, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F26B48"))) PPC_WEAK_FUNC(sub_82F26B48);
PPC_FUNC_IMPL(__imp__sub_82F26B48) {
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
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-11172
	ctx.r3.s64 = ctx.r11.s64 + -11172;
	// bl 0x82816528
	ctx.lr = 0x82F26B60;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,496(r11)
	PPC_STORE_U32(ctx.r11.u32 + 496, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F26B78"))) PPC_WEAK_FUNC(sub_82F26B78);
PPC_FUNC_IMPL(__imp__sub_82F26B78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// addi r3,r9,28832
	ctx.r3.s64 = ctx.r9.s64 + 28832;
	// stw r10,-20504(r11)
	PPC_STORE_U32(ctx.r11.u32 + -20504, ctx.r10.u32);
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F26B90"))) PPC_WEAK_FUNC(sub_82F26B90);
PPC_FUNC_IMPL(__imp__sub_82F26B90) {
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
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,30520
	ctx.r11.s64 = ctx.r11.s64 + 30520;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82339c78
	ctx.lr = 0x82F26BB8;
	sub_82339C78(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,20156
	ctx.r3.s64 = ctx.r11.s64 + 20156;
	// bl 0x82816528
	ctx.lr = 0x82F26BC8;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x826c64c8
	ctx.lr = 0x82F26BD8;
	sub_826C64C8(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,482(r11)
	PPC_STORE_U8(ctx.r11.u32 + 482, ctx.r3.u8);
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

__attribute__((alias("__imp__sub_82F26BF8"))) PPC_WEAK_FUNC(sub_82F26BF8);
PPC_FUNC_IMPL(__imp__sub_82F26BF8) {
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
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,30568
	ctx.r11.s64 = ctx.r11.s64 + 30568;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82339c78
	ctx.lr = 0x82F26C20;
	sub_82339C78(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,20180
	ctx.r3.s64 = ctx.r11.s64 + 20180;
	// bl 0x82816528
	ctx.lr = 0x82F26C30;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x826c64c8
	ctx.lr = 0x82F26C40;
	sub_826C64C8(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,483(r11)
	PPC_STORE_U8(ctx.r11.u32 + 483, ctx.r3.u8);
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

__attribute__((alias("__imp__sub_82F26C60"))) PPC_WEAK_FUNC(sub_82F26C60);
PPC_FUNC_IMPL(__imp__sub_82F26C60) {
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
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// lis r9,-31944
	ctx.r9.s64 = -2093481984;
	// addi r7,r11,-30976
	ctx.r7.s64 = ctx.r11.s64 + -30976;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,23852(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23852);
	// addi r31,r9,23848
	ctx.r31.s64 = ctx.r9.s64 + 23848;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f26cbc
	if (!ctx.cr0.eq) goto loc_82F26CBC;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,20504
	ctx.r9.s64 = ctx.r9.s64 + 20504;
	// stw r11,23852(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23852, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,28944
	ctx.r3.s64 = ctx.r11.s64 + 28944;
	// bl 0x82a4c758
	ctx.lr = 0x82F26CBC;
	sub_82A4C758(ctx, base);
loc_82F26CBC:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,20444
	ctx.r3.s64 = ctx.r11.s64 + 20444;
	// bl 0x82816528
	ctx.lr = 0x82F26CC8;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x826c64c8
	ctx.lr = 0x82F26CD8;
	sub_826C64C8(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,500(r11)
	PPC_STORE_U8(ctx.r11.u32 + 500, ctx.r3.u8);
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

__attribute__((alias("__imp__sub_82F26CF8"))) PPC_WEAK_FUNC(sub_82F26CF8);
PPC_FUNC_IMPL(__imp__sub_82F26CF8) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,488
	ctx.r4.s64 = ctx.r11.s64 + 488;
	// bl 0x8277b880
	ctx.lr = 0x82F26D14;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,504(r10)
	PPC_STORE_U32(ctx.r10.u32 + 504, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F26D30"))) PPC_WEAK_FUNC(sub_82F26D30);
PPC_FUNC_IMPL(__imp__sub_82F26D30) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-24036
	ctx.r3.s64 = ctx.r11.s64 + -24036;
	// bl 0x82816528
	ctx.lr = 0x82F26D48;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,508(r11)
	PPC_STORE_U32(ctx.r11.u32 + 508, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F26D60"))) PPC_WEAK_FUNC(sub_82F26D60);
PPC_FUNC_IMPL(__imp__sub_82F26D60) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-24024
	ctx.r3.s64 = ctx.r11.s64 + -24024;
	// bl 0x82816528
	ctx.lr = 0x82F26D78;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,512(r11)
	PPC_STORE_U32(ctx.r11.u32 + 512, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F26D90"))) PPC_WEAK_FUNC(sub_82F26D90);
PPC_FUNC_IMPL(__imp__sub_82F26D90) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,-20652
	ctx.r3.s64 = ctx.r11.s64 + -20652;
	// bl 0x82816528
	ctx.lr = 0x82F26DA8;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,516(r11)
	PPC_STORE_U32(ctx.r11.u32 + 516, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F26DC0"))) PPC_WEAK_FUNC(sub_82F26DC0);
PPC_FUNC_IMPL(__imp__sub_82F26DC0) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-24000
	ctx.r3.s64 = ctx.r11.s64 + -24000;
	// bl 0x82816528
	ctx.lr = 0x82F26DD8;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,520(r11)
	PPC_STORE_U32(ctx.r11.u32 + 520, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F26DF0"))) PPC_WEAK_FUNC(sub_82F26DF0);
PPC_FUNC_IMPL(__imp__sub_82F26DF0) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-23968
	ctx.r3.s64 = ctx.r11.s64 + -23968;
	// bl 0x82816528
	ctx.lr = 0x82F26E08;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,524(r11)
	PPC_STORE_U32(ctx.r11.u32 + 524, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F26E20"))) PPC_WEAK_FUNC(sub_82F26E20);
PPC_FUNC_IMPL(__imp__sub_82F26E20) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-23932
	ctx.r3.s64 = ctx.r11.s64 + -23932;
	// bl 0x82816528
	ctx.lr = 0x82F26E38;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,528(r11)
	PPC_STORE_U32(ctx.r11.u32 + 528, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F26E50"))) PPC_WEAK_FUNC(sub_82F26E50);
PPC_FUNC_IMPL(__imp__sub_82F26E50) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-23900
	ctx.r3.s64 = ctx.r11.s64 + -23900;
	// bl 0x82816528
	ctx.lr = 0x82F26E68;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,532(r11)
	PPC_STORE_U32(ctx.r11.u32 + 532, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F26E80"))) PPC_WEAK_FUNC(sub_82F26E80);
PPC_FUNC_IMPL(__imp__sub_82F26E80) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-23860
	ctx.r3.s64 = ctx.r11.s64 + -23860;
	// bl 0x82816528
	ctx.lr = 0x82F26E98;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,536(r11)
	PPC_STORE_U32(ctx.r11.u32 + 536, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F26EB0"))) PPC_WEAK_FUNC(sub_82F26EB0);
PPC_FUNC_IMPL(__imp__sub_82F26EB0) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-23832
	ctx.r3.s64 = ctx.r11.s64 + -23832;
	// bl 0x82816528
	ctx.lr = 0x82F26EC8;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,540(r11)
	PPC_STORE_U32(ctx.r11.u32 + 540, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F26EE0"))) PPC_WEAK_FUNC(sub_82F26EE0);
PPC_FUNC_IMPL(__imp__sub_82F26EE0) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-23796
	ctx.r3.s64 = ctx.r11.s64 + -23796;
	// bl 0x82816528
	ctx.lr = 0x82F26EF8;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,544(r11)
	PPC_STORE_U32(ctx.r11.u32 + 544, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F26F10"))) PPC_WEAK_FUNC(sub_82F26F10);
PPC_FUNC_IMPL(__imp__sub_82F26F10) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-23768
	ctx.r3.s64 = ctx.r11.s64 + -23768;
	// bl 0x82816528
	ctx.lr = 0x82F26F28;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,548(r11)
	PPC_STORE_U32(ctx.r11.u32 + 548, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F26F40"))) PPC_WEAK_FUNC(sub_82F26F40);
PPC_FUNC_IMPL(__imp__sub_82F26F40) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-23732
	ctx.r3.s64 = ctx.r11.s64 + -23732;
	// bl 0x82816528
	ctx.lr = 0x82F26F58;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,552(r11)
	PPC_STORE_U32(ctx.r11.u32 + 552, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F26F70"))) PPC_WEAK_FUNC(sub_82F26F70);
PPC_FUNC_IMPL(__imp__sub_82F26F70) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-23700
	ctx.r3.s64 = ctx.r11.s64 + -23700;
	// bl 0x82816528
	ctx.lr = 0x82F26F88;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,556(r11)
	PPC_STORE_U32(ctx.r11.u32 + 556, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F26FA0"))) PPC_WEAK_FUNC(sub_82F26FA0);
PPC_FUNC_IMPL(__imp__sub_82F26FA0) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-23664
	ctx.r3.s64 = ctx.r11.s64 + -23664;
	// bl 0x82816528
	ctx.lr = 0x82F26FB8;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,560(r11)
	PPC_STORE_U32(ctx.r11.u32 + 560, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F26FD0"))) PPC_WEAK_FUNC(sub_82F26FD0);
PPC_FUNC_IMPL(__imp__sub_82F26FD0) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-23632
	ctx.r3.s64 = ctx.r11.s64 + -23632;
	// bl 0x82816528
	ctx.lr = 0x82F26FE8;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,564(r11)
	PPC_STORE_U32(ctx.r11.u32 + 564, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F27000"))) PPC_WEAK_FUNC(sub_82F27000);
PPC_FUNC_IMPL(__imp__sub_82F27000) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-23596
	ctx.r3.s64 = ctx.r11.s64 + -23596;
	// bl 0x82816528
	ctx.lr = 0x82F27018;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 568, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F27030"))) PPC_WEAK_FUNC(sub_82F27030);
PPC_FUNC_IMPL(__imp__sub_82F27030) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-23564
	ctx.r3.s64 = ctx.r11.s64 + -23564;
	// bl 0x82816528
	ctx.lr = 0x82F27048;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,572(r11)
	PPC_STORE_U32(ctx.r11.u32 + 572, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F27060"))) PPC_WEAK_FUNC(sub_82F27060);
PPC_FUNC_IMPL(__imp__sub_82F27060) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-23528
	ctx.r3.s64 = ctx.r11.s64 + -23528;
	// bl 0x82816528
	ctx.lr = 0x82F27078;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,576(r11)
	PPC_STORE_U32(ctx.r11.u32 + 576, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F27090"))) PPC_WEAK_FUNC(sub_82F27090);
PPC_FUNC_IMPL(__imp__sub_82F27090) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-23496
	ctx.r3.s64 = ctx.r11.s64 + -23496;
	// bl 0x82816528
	ctx.lr = 0x82F270A8;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,580(r11)
	PPC_STORE_U32(ctx.r11.u32 + 580, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F270C0"))) PPC_WEAK_FUNC(sub_82F270C0);
PPC_FUNC_IMPL(__imp__sub_82F270C0) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-23460
	ctx.r3.s64 = ctx.r11.s64 + -23460;
	// bl 0x82816528
	ctx.lr = 0x82F270D8;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,584(r11)
	PPC_STORE_U32(ctx.r11.u32 + 584, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F270F0"))) PPC_WEAK_FUNC(sub_82F270F0);
PPC_FUNC_IMPL(__imp__sub_82F270F0) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-23428
	ctx.r3.s64 = ctx.r11.s64 + -23428;
	// bl 0x82816528
	ctx.lr = 0x82F27108;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,588(r11)
	PPC_STORE_U32(ctx.r11.u32 + 588, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F27120"))) PPC_WEAK_FUNC(sub_82F27120);
PPC_FUNC_IMPL(__imp__sub_82F27120) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-23392
	ctx.r3.s64 = ctx.r11.s64 + -23392;
	// bl 0x82816528
	ctx.lr = 0x82F27138;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,592(r11)
	PPC_STORE_U32(ctx.r11.u32 + 592, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F27150"))) PPC_WEAK_FUNC(sub_82F27150);
PPC_FUNC_IMPL(__imp__sub_82F27150) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-23364
	ctx.r3.s64 = ctx.r11.s64 + -23364;
	// bl 0x82816528
	ctx.lr = 0x82F27168;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,596(r11)
	PPC_STORE_U32(ctx.r11.u32 + 596, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F27180"))) PPC_WEAK_FUNC(sub_82F27180);
PPC_FUNC_IMPL(__imp__sub_82F27180) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-23328
	ctx.r3.s64 = ctx.r11.s64 + -23328;
	// bl 0x82816528
	ctx.lr = 0x82F27198;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,600(r11)
	PPC_STORE_U32(ctx.r11.u32 + 600, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F271B0"))) PPC_WEAK_FUNC(sub_82F271B0);
PPC_FUNC_IMPL(__imp__sub_82F271B0) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-23304
	ctx.r3.s64 = ctx.r11.s64 + -23304;
	// bl 0x82816528
	ctx.lr = 0x82F271C8;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,604(r11)
	PPC_STORE_U32(ctx.r11.u32 + 604, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F271E0"))) PPC_WEAK_FUNC(sub_82F271E0);
PPC_FUNC_IMPL(__imp__sub_82F271E0) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-23276
	ctx.r3.s64 = ctx.r11.s64 + -23276;
	// bl 0x82816528
	ctx.lr = 0x82F271F8;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,608(r11)
	PPC_STORE_U32(ctx.r11.u32 + 608, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F27210"))) PPC_WEAK_FUNC(sub_82F27210);
PPC_FUNC_IMPL(__imp__sub_82F27210) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-23252
	ctx.r3.s64 = ctx.r11.s64 + -23252;
	// bl 0x82816528
	ctx.lr = 0x82F27228;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,612(r11)
	PPC_STORE_U32(ctx.r11.u32 + 612, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F27240"))) PPC_WEAK_FUNC(sub_82F27240);
PPC_FUNC_IMPL(__imp__sub_82F27240) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-23220
	ctx.r3.s64 = ctx.r11.s64 + -23220;
	// bl 0x82816528
	ctx.lr = 0x82F27258;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,616(r11)
	PPC_STORE_U32(ctx.r11.u32 + 616, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F27270"))) PPC_WEAK_FUNC(sub_82F27270);
PPC_FUNC_IMPL(__imp__sub_82F27270) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-23192
	ctx.r3.s64 = ctx.r11.s64 + -23192;
	// bl 0x82816528
	ctx.lr = 0x82F27288;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,620(r11)
	PPC_STORE_U32(ctx.r11.u32 + 620, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F272A0"))) PPC_WEAK_FUNC(sub_82F272A0);
PPC_FUNC_IMPL(__imp__sub_82F272A0) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-23156
	ctx.r3.s64 = ctx.r11.s64 + -23156;
	// bl 0x82816528
	ctx.lr = 0x82F272B8;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,624(r11)
	PPC_STORE_U32(ctx.r11.u32 + 624, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F272D0"))) PPC_WEAK_FUNC(sub_82F272D0);
PPC_FUNC_IMPL(__imp__sub_82F272D0) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-23132
	ctx.r3.s64 = ctx.r11.s64 + -23132;
	// bl 0x82816528
	ctx.lr = 0x82F272E8;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,628(r11)
	PPC_STORE_U32(ctx.r11.u32 + 628, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F27300"))) PPC_WEAK_FUNC(sub_82F27300);
PPC_FUNC_IMPL(__imp__sub_82F27300) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-23104
	ctx.r3.s64 = ctx.r11.s64 + -23104;
	// bl 0x82816528
	ctx.lr = 0x82F27318;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,632(r11)
	PPC_STORE_U32(ctx.r11.u32 + 632, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F27330"))) PPC_WEAK_FUNC(sub_82F27330);
PPC_FUNC_IMPL(__imp__sub_82F27330) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-23080
	ctx.r3.s64 = ctx.r11.s64 + -23080;
	// bl 0x82816528
	ctx.lr = 0x82F27348;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,636(r11)
	PPC_STORE_U32(ctx.r11.u32 + 636, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F27360"))) PPC_WEAK_FUNC(sub_82F27360);
PPC_FUNC_IMPL(__imp__sub_82F27360) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-23052
	ctx.r3.s64 = ctx.r11.s64 + -23052;
	// bl 0x82816528
	ctx.lr = 0x82F27378;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,640(r11)
	PPC_STORE_U32(ctx.r11.u32 + 640, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F27390"))) PPC_WEAK_FUNC(sub_82F27390);
PPC_FUNC_IMPL(__imp__sub_82F27390) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-23024
	ctx.r3.s64 = ctx.r11.s64 + -23024;
	// bl 0x82816528
	ctx.lr = 0x82F273A8;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,644(r11)
	PPC_STORE_U32(ctx.r11.u32 + 644, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F273C0"))) PPC_WEAK_FUNC(sub_82F273C0);
PPC_FUNC_IMPL(__imp__sub_82F273C0) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-22996
	ctx.r3.s64 = ctx.r11.s64 + -22996;
	// bl 0x82816528
	ctx.lr = 0x82F273D8;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,648(r11)
	PPC_STORE_U32(ctx.r11.u32 + 648, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F273F0"))) PPC_WEAK_FUNC(sub_82F273F0);
PPC_FUNC_IMPL(__imp__sub_82F273F0) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-22960
	ctx.r3.s64 = ctx.r11.s64 + -22960;
	// bl 0x82816528
	ctx.lr = 0x82F27408;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,652(r11)
	PPC_STORE_U32(ctx.r11.u32 + 652, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F27420"))) PPC_WEAK_FUNC(sub_82F27420);
PPC_FUNC_IMPL(__imp__sub_82F27420) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-22928
	ctx.r3.s64 = ctx.r11.s64 + -22928;
	// bl 0x82816528
	ctx.lr = 0x82F27438;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,656(r11)
	PPC_STORE_U32(ctx.r11.u32 + 656, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F27450"))) PPC_WEAK_FUNC(sub_82F27450);
PPC_FUNC_IMPL(__imp__sub_82F27450) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-22892
	ctx.r3.s64 = ctx.r11.s64 + -22892;
	// bl 0x82816528
	ctx.lr = 0x82F27468;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,660(r11)
	PPC_STORE_U32(ctx.r11.u32 + 660, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F27480"))) PPC_WEAK_FUNC(sub_82F27480);
PPC_FUNC_IMPL(__imp__sub_82F27480) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-22868
	ctx.r3.s64 = ctx.r11.s64 + -22868;
	// bl 0x82816528
	ctx.lr = 0x82F27498;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,664(r11)
	PPC_STORE_U32(ctx.r11.u32 + 664, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F274B0"))) PPC_WEAK_FUNC(sub_82F274B0);
PPC_FUNC_IMPL(__imp__sub_82F274B0) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-22836
	ctx.r3.s64 = ctx.r11.s64 + -22836;
	// bl 0x82816528
	ctx.lr = 0x82F274C8;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,668(r11)
	PPC_STORE_U32(ctx.r11.u32 + 668, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F274E0"))) PPC_WEAK_FUNC(sub_82F274E0);
PPC_FUNC_IMPL(__imp__sub_82F274E0) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-22804
	ctx.r3.s64 = ctx.r11.s64 + -22804;
	// bl 0x82816528
	ctx.lr = 0x82F274F8;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,672(r11)
	PPC_STORE_U32(ctx.r11.u32 + 672, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F27510"))) PPC_WEAK_FUNC(sub_82F27510);
PPC_FUNC_IMPL(__imp__sub_82F27510) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-22780
	ctx.r3.s64 = ctx.r11.s64 + -22780;
	// bl 0x82816528
	ctx.lr = 0x82F27528;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,676(r11)
	PPC_STORE_U32(ctx.r11.u32 + 676, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F27540"))) PPC_WEAK_FUNC(sub_82F27540);
PPC_FUNC_IMPL(__imp__sub_82F27540) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-22752
	ctx.r3.s64 = ctx.r11.s64 + -22752;
	// bl 0x82816528
	ctx.lr = 0x82F27558;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,680(r11)
	PPC_STORE_U32(ctx.r11.u32 + 680, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F27570"))) PPC_WEAK_FUNC(sub_82F27570);
PPC_FUNC_IMPL(__imp__sub_82F27570) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-22728
	ctx.r3.s64 = ctx.r11.s64 + -22728;
	// bl 0x82816528
	ctx.lr = 0x82F27588;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,684(r11)
	PPC_STORE_U32(ctx.r11.u32 + 684, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F275A0"))) PPC_WEAK_FUNC(sub_82F275A0);
PPC_FUNC_IMPL(__imp__sub_82F275A0) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-22708
	ctx.r3.s64 = ctx.r11.s64 + -22708;
	// bl 0x82816528
	ctx.lr = 0x82F275B8;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,688(r11)
	PPC_STORE_U32(ctx.r11.u32 + 688, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F275D0"))) PPC_WEAK_FUNC(sub_82F275D0);
PPC_FUNC_IMPL(__imp__sub_82F275D0) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-22688
	ctx.r3.s64 = ctx.r11.s64 + -22688;
	// bl 0x82816528
	ctx.lr = 0x82F275E8;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,692(r11)
	PPC_STORE_U32(ctx.r11.u32 + 692, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F27600"))) PPC_WEAK_FUNC(sub_82F27600);
PPC_FUNC_IMPL(__imp__sub_82F27600) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-22668
	ctx.r3.s64 = ctx.r11.s64 + -22668;
	// bl 0x82816528
	ctx.lr = 0x82F27618;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,696(r11)
	PPC_STORE_U32(ctx.r11.u32 + 696, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F27630"))) PPC_WEAK_FUNC(sub_82F27630);
PPC_FUNC_IMPL(__imp__sub_82F27630) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-22644
	ctx.r3.s64 = ctx.r11.s64 + -22644;
	// bl 0x82816528
	ctx.lr = 0x82F27648;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,700(r11)
	PPC_STORE_U32(ctx.r11.u32 + 700, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F27660"))) PPC_WEAK_FUNC(sub_82F27660);
PPC_FUNC_IMPL(__imp__sub_82F27660) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-22624
	ctx.r3.s64 = ctx.r11.s64 + -22624;
	// bl 0x82816528
	ctx.lr = 0x82F27678;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,704(r11)
	PPC_STORE_U32(ctx.r11.u32 + 704, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F27690"))) PPC_WEAK_FUNC(sub_82F27690);
PPC_FUNC_IMPL(__imp__sub_82F27690) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-22592
	ctx.r3.s64 = ctx.r11.s64 + -22592;
	// bl 0x82816528
	ctx.lr = 0x82F276A8;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,708(r11)
	PPC_STORE_U32(ctx.r11.u32 + 708, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F276C0"))) PPC_WEAK_FUNC(sub_82F276C0);
PPC_FUNC_IMPL(__imp__sub_82F276C0) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-22556
	ctx.r3.s64 = ctx.r11.s64 + -22556;
	// bl 0x82816528
	ctx.lr = 0x82F276D8;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,712(r11)
	PPC_STORE_U32(ctx.r11.u32 + 712, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F276F0"))) PPC_WEAK_FUNC(sub_82F276F0);
PPC_FUNC_IMPL(__imp__sub_82F276F0) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-22524
	ctx.r3.s64 = ctx.r11.s64 + -22524;
	// bl 0x82816528
	ctx.lr = 0x82F27708;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,716(r11)
	PPC_STORE_U32(ctx.r11.u32 + 716, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F27720"))) PPC_WEAK_FUNC(sub_82F27720);
PPC_FUNC_IMPL(__imp__sub_82F27720) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-22484
	ctx.r3.s64 = ctx.r11.s64 + -22484;
	// bl 0x82816528
	ctx.lr = 0x82F27738;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,720(r11)
	PPC_STORE_U32(ctx.r11.u32 + 720, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F27750"))) PPC_WEAK_FUNC(sub_82F27750);
PPC_FUNC_IMPL(__imp__sub_82F27750) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-22456
	ctx.r3.s64 = ctx.r11.s64 + -22456;
	// bl 0x82816528
	ctx.lr = 0x82F27768;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,724(r11)
	PPC_STORE_U32(ctx.r11.u32 + 724, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F27780"))) PPC_WEAK_FUNC(sub_82F27780);
PPC_FUNC_IMPL(__imp__sub_82F27780) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-22420
	ctx.r3.s64 = ctx.r11.s64 + -22420;
	// bl 0x82816528
	ctx.lr = 0x82F27798;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,728(r11)
	PPC_STORE_U32(ctx.r11.u32 + 728, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F277B0"))) PPC_WEAK_FUNC(sub_82F277B0);
PPC_FUNC_IMPL(__imp__sub_82F277B0) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-22392
	ctx.r3.s64 = ctx.r11.s64 + -22392;
	// bl 0x82816528
	ctx.lr = 0x82F277C8;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,732(r11)
	PPC_STORE_U32(ctx.r11.u32 + 732, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F277E0"))) PPC_WEAK_FUNC(sub_82F277E0);
PPC_FUNC_IMPL(__imp__sub_82F277E0) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-22356
	ctx.r3.s64 = ctx.r11.s64 + -22356;
	// bl 0x82816528
	ctx.lr = 0x82F277F8;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,736(r11)
	PPC_STORE_U32(ctx.r11.u32 + 736, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F27810"))) PPC_WEAK_FUNC(sub_82F27810);
PPC_FUNC_IMPL(__imp__sub_82F27810) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-22324
	ctx.r3.s64 = ctx.r11.s64 + -22324;
	// bl 0x82816528
	ctx.lr = 0x82F27828;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,740(r11)
	PPC_STORE_U32(ctx.r11.u32 + 740, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F27840"))) PPC_WEAK_FUNC(sub_82F27840);
PPC_FUNC_IMPL(__imp__sub_82F27840) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-22288
	ctx.r3.s64 = ctx.r11.s64 + -22288;
	// bl 0x82816528
	ctx.lr = 0x82F27858;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,744(r11)
	PPC_STORE_U32(ctx.r11.u32 + 744, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F27870"))) PPC_WEAK_FUNC(sub_82F27870);
PPC_FUNC_IMPL(__imp__sub_82F27870) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-22256
	ctx.r3.s64 = ctx.r11.s64 + -22256;
	// bl 0x82816528
	ctx.lr = 0x82F27888;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,748(r11)
	PPC_STORE_U32(ctx.r11.u32 + 748, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F278A0"))) PPC_WEAK_FUNC(sub_82F278A0);
PPC_FUNC_IMPL(__imp__sub_82F278A0) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-22220
	ctx.r3.s64 = ctx.r11.s64 + -22220;
	// bl 0x82816528
	ctx.lr = 0x82F278B8;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,752(r11)
	PPC_STORE_U32(ctx.r11.u32 + 752, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F278D0"))) PPC_WEAK_FUNC(sub_82F278D0);
PPC_FUNC_IMPL(__imp__sub_82F278D0) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-22188
	ctx.r3.s64 = ctx.r11.s64 + -22188;
	// bl 0x82816528
	ctx.lr = 0x82F278E8;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,756(r11)
	PPC_STORE_U32(ctx.r11.u32 + 756, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F27900"))) PPC_WEAK_FUNC(sub_82F27900);
PPC_FUNC_IMPL(__imp__sub_82F27900) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-22152
	ctx.r3.s64 = ctx.r11.s64 + -22152;
	// bl 0x82816528
	ctx.lr = 0x82F27918;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,760(r11)
	PPC_STORE_U32(ctx.r11.u32 + 760, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F27930"))) PPC_WEAK_FUNC(sub_82F27930);
PPC_FUNC_IMPL(__imp__sub_82F27930) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-22120
	ctx.r3.s64 = ctx.r11.s64 + -22120;
	// bl 0x82816528
	ctx.lr = 0x82F27948;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,764(r11)
	PPC_STORE_U32(ctx.r11.u32 + 764, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F27960"))) PPC_WEAK_FUNC(sub_82F27960);
PPC_FUNC_IMPL(__imp__sub_82F27960) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-22084
	ctx.r3.s64 = ctx.r11.s64 + -22084;
	// bl 0x82816528
	ctx.lr = 0x82F27978;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,768(r11)
	PPC_STORE_U32(ctx.r11.u32 + 768, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F27990"))) PPC_WEAK_FUNC(sub_82F27990);
PPC_FUNC_IMPL(__imp__sub_82F27990) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-22052
	ctx.r3.s64 = ctx.r11.s64 + -22052;
	// bl 0x82816528
	ctx.lr = 0x82F279A8;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,772(r11)
	PPC_STORE_U32(ctx.r11.u32 + 772, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F279C0"))) PPC_WEAK_FUNC(sub_82F279C0);
PPC_FUNC_IMPL(__imp__sub_82F279C0) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-22016
	ctx.r3.s64 = ctx.r11.s64 + -22016;
	// bl 0x82816528
	ctx.lr = 0x82F279D8;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,776(r11)
	PPC_STORE_U32(ctx.r11.u32 + 776, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F279F0"))) PPC_WEAK_FUNC(sub_82F279F0);
PPC_FUNC_IMPL(__imp__sub_82F279F0) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-21988
	ctx.r3.s64 = ctx.r11.s64 + -21988;
	// bl 0x82816528
	ctx.lr = 0x82F27A08;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,780(r11)
	PPC_STORE_U32(ctx.r11.u32 + 780, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F27A20"))) PPC_WEAK_FUNC(sub_82F27A20);
PPC_FUNC_IMPL(__imp__sub_82F27A20) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-21952
	ctx.r3.s64 = ctx.r11.s64 + -21952;
	// bl 0x82816528
	ctx.lr = 0x82F27A38;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,784(r11)
	PPC_STORE_U32(ctx.r11.u32 + 784, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F27A50"))) PPC_WEAK_FUNC(sub_82F27A50);
PPC_FUNC_IMPL(__imp__sub_82F27A50) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-21928
	ctx.r3.s64 = ctx.r11.s64 + -21928;
	// bl 0x82816528
	ctx.lr = 0x82F27A68;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,788(r11)
	PPC_STORE_U32(ctx.r11.u32 + 788, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F27A80"))) PPC_WEAK_FUNC(sub_82F27A80);
PPC_FUNC_IMPL(__imp__sub_82F27A80) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-21900
	ctx.r3.s64 = ctx.r11.s64 + -21900;
	// bl 0x82816528
	ctx.lr = 0x82F27A98;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,792(r11)
	PPC_STORE_U32(ctx.r11.u32 + 792, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F27AB0"))) PPC_WEAK_FUNC(sub_82F27AB0);
PPC_FUNC_IMPL(__imp__sub_82F27AB0) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-21876
	ctx.r3.s64 = ctx.r11.s64 + -21876;
	// bl 0x82816528
	ctx.lr = 0x82F27AC8;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,796(r11)
	PPC_STORE_U32(ctx.r11.u32 + 796, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F27AE0"))) PPC_WEAK_FUNC(sub_82F27AE0);
PPC_FUNC_IMPL(__imp__sub_82F27AE0) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-21844
	ctx.r3.s64 = ctx.r11.s64 + -21844;
	// bl 0x82816528
	ctx.lr = 0x82F27AF8;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,800(r11)
	PPC_STORE_U32(ctx.r11.u32 + 800, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F27B10"))) PPC_WEAK_FUNC(sub_82F27B10);
PPC_FUNC_IMPL(__imp__sub_82F27B10) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-21816
	ctx.r3.s64 = ctx.r11.s64 + -21816;
	// bl 0x82816528
	ctx.lr = 0x82F27B28;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,804(r11)
	PPC_STORE_U32(ctx.r11.u32 + 804, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F27B40"))) PPC_WEAK_FUNC(sub_82F27B40);
PPC_FUNC_IMPL(__imp__sub_82F27B40) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-21780
	ctx.r3.s64 = ctx.r11.s64 + -21780;
	// bl 0x82816528
	ctx.lr = 0x82F27B58;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,808(r11)
	PPC_STORE_U32(ctx.r11.u32 + 808, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F27B70"))) PPC_WEAK_FUNC(sub_82F27B70);
PPC_FUNC_IMPL(__imp__sub_82F27B70) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-21756
	ctx.r3.s64 = ctx.r11.s64 + -21756;
	// bl 0x82816528
	ctx.lr = 0x82F27B88;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,812(r11)
	PPC_STORE_U32(ctx.r11.u32 + 812, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F27BA0"))) PPC_WEAK_FUNC(sub_82F27BA0);
PPC_FUNC_IMPL(__imp__sub_82F27BA0) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-21728
	ctx.r3.s64 = ctx.r11.s64 + -21728;
	// bl 0x82816528
	ctx.lr = 0x82F27BB8;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,816(r11)
	PPC_STORE_U32(ctx.r11.u32 + 816, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F27BD0"))) PPC_WEAK_FUNC(sub_82F27BD0);
PPC_FUNC_IMPL(__imp__sub_82F27BD0) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-21704
	ctx.r3.s64 = ctx.r11.s64 + -21704;
	// bl 0x82816528
	ctx.lr = 0x82F27BE8;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,820(r11)
	PPC_STORE_U32(ctx.r11.u32 + 820, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F27C00"))) PPC_WEAK_FUNC(sub_82F27C00);
PPC_FUNC_IMPL(__imp__sub_82F27C00) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-21676
	ctx.r3.s64 = ctx.r11.s64 + -21676;
	// bl 0x82816528
	ctx.lr = 0x82F27C18;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,824(r11)
	PPC_STORE_U32(ctx.r11.u32 + 824, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F27C30"))) PPC_WEAK_FUNC(sub_82F27C30);
PPC_FUNC_IMPL(__imp__sub_82F27C30) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-21648
	ctx.r3.s64 = ctx.r11.s64 + -21648;
	// bl 0x82816528
	ctx.lr = 0x82F27C48;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,828(r11)
	PPC_STORE_U32(ctx.r11.u32 + 828, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F27C60"))) PPC_WEAK_FUNC(sub_82F27C60);
PPC_FUNC_IMPL(__imp__sub_82F27C60) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-21620
	ctx.r3.s64 = ctx.r11.s64 + -21620;
	// bl 0x82816528
	ctx.lr = 0x82F27C78;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,832(r11)
	PPC_STORE_U32(ctx.r11.u32 + 832, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F27C90"))) PPC_WEAK_FUNC(sub_82F27C90);
PPC_FUNC_IMPL(__imp__sub_82F27C90) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-21584
	ctx.r3.s64 = ctx.r11.s64 + -21584;
	// bl 0x82816528
	ctx.lr = 0x82F27CA8;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,836(r11)
	PPC_STORE_U32(ctx.r11.u32 + 836, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F27CC0"))) PPC_WEAK_FUNC(sub_82F27CC0);
PPC_FUNC_IMPL(__imp__sub_82F27CC0) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-21552
	ctx.r3.s64 = ctx.r11.s64 + -21552;
	// bl 0x82816528
	ctx.lr = 0x82F27CD8;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,840(r11)
	PPC_STORE_U32(ctx.r11.u32 + 840, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F27CF0"))) PPC_WEAK_FUNC(sub_82F27CF0);
PPC_FUNC_IMPL(__imp__sub_82F27CF0) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-21516
	ctx.r3.s64 = ctx.r11.s64 + -21516;
	// bl 0x82816528
	ctx.lr = 0x82F27D08;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,844(r11)
	PPC_STORE_U32(ctx.r11.u32 + 844, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F27D20"))) PPC_WEAK_FUNC(sub_82F27D20);
PPC_FUNC_IMPL(__imp__sub_82F27D20) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-21492
	ctx.r3.s64 = ctx.r11.s64 + -21492;
	// bl 0x82816528
	ctx.lr = 0x82F27D38;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,848(r11)
	PPC_STORE_U32(ctx.r11.u32 + 848, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F27D50"))) PPC_WEAK_FUNC(sub_82F27D50);
PPC_FUNC_IMPL(__imp__sub_82F27D50) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-21460
	ctx.r3.s64 = ctx.r11.s64 + -21460;
	// bl 0x82816528
	ctx.lr = 0x82F27D68;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,852(r11)
	PPC_STORE_U32(ctx.r11.u32 + 852, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F27D80"))) PPC_WEAK_FUNC(sub_82F27D80);
PPC_FUNC_IMPL(__imp__sub_82F27D80) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-21428
	ctx.r3.s64 = ctx.r11.s64 + -21428;
	// bl 0x82816528
	ctx.lr = 0x82F27D98;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,856(r11)
	PPC_STORE_U32(ctx.r11.u32 + 856, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F27DB0"))) PPC_WEAK_FUNC(sub_82F27DB0);
PPC_FUNC_IMPL(__imp__sub_82F27DB0) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-21404
	ctx.r3.s64 = ctx.r11.s64 + -21404;
	// bl 0x82816528
	ctx.lr = 0x82F27DC8;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,860(r11)
	PPC_STORE_U32(ctx.r11.u32 + 860, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F27DE0"))) PPC_WEAK_FUNC(sub_82F27DE0);
PPC_FUNC_IMPL(__imp__sub_82F27DE0) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-21376
	ctx.r3.s64 = ctx.r11.s64 + -21376;
	// bl 0x82816528
	ctx.lr = 0x82F27DF8;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,864(r11)
	PPC_STORE_U32(ctx.r11.u32 + 864, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F27E10"))) PPC_WEAK_FUNC(sub_82F27E10);
PPC_FUNC_IMPL(__imp__sub_82F27E10) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-21352
	ctx.r3.s64 = ctx.r11.s64 + -21352;
	// bl 0x82816528
	ctx.lr = 0x82F27E28;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,868(r11)
	PPC_STORE_U32(ctx.r11.u32 + 868, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F27E40"))) PPC_WEAK_FUNC(sub_82F27E40);
PPC_FUNC_IMPL(__imp__sub_82F27E40) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-21332
	ctx.r3.s64 = ctx.r11.s64 + -21332;
	// bl 0x82816528
	ctx.lr = 0x82F27E58;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,872(r11)
	PPC_STORE_U32(ctx.r11.u32 + 872, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F27E70"))) PPC_WEAK_FUNC(sub_82F27E70);
PPC_FUNC_IMPL(__imp__sub_82F27E70) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-21312
	ctx.r3.s64 = ctx.r11.s64 + -21312;
	// bl 0x82816528
	ctx.lr = 0x82F27E88;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,876(r11)
	PPC_STORE_U32(ctx.r11.u32 + 876, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F27EA0"))) PPC_WEAK_FUNC(sub_82F27EA0);
PPC_FUNC_IMPL(__imp__sub_82F27EA0) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-21292
	ctx.r3.s64 = ctx.r11.s64 + -21292;
	// bl 0x82816528
	ctx.lr = 0x82F27EB8;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,880(r11)
	PPC_STORE_U32(ctx.r11.u32 + 880, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F27ED0"))) PPC_WEAK_FUNC(sub_82F27ED0);
PPC_FUNC_IMPL(__imp__sub_82F27ED0) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-21268
	ctx.r3.s64 = ctx.r11.s64 + -21268;
	// bl 0x82816528
	ctx.lr = 0x82F27EE8;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,884(r11)
	PPC_STORE_U32(ctx.r11.u32 + 884, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F27F00"))) PPC_WEAK_FUNC(sub_82F27F00);
PPC_FUNC_IMPL(__imp__sub_82F27F00) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,-21672
	ctx.r3.s64 = ctx.r11.s64 + -21672;
	// bl 0x82816528
	ctx.lr = 0x82F27F18;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,888(r11)
	PPC_STORE_U32(ctx.r11.u32 + 888, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F27F30"))) PPC_WEAK_FUNC(sub_82F27F30);
PPC_FUNC_IMPL(__imp__sub_82F27F30) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,-20924
	ctx.r3.s64 = ctx.r11.s64 + -20924;
	// bl 0x82816528
	ctx.lr = 0x82F27F48;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,892(r11)
	PPC_STORE_U32(ctx.r11.u32 + 892, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F27F60"))) PPC_WEAK_FUNC(sub_82F27F60);
PPC_FUNC_IMPL(__imp__sub_82F27F60) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,-21752
	ctx.r3.s64 = ctx.r11.s64 + -21752;
	// bl 0x82816528
	ctx.lr = 0x82F27F78;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,896(r11)
	PPC_STORE_U32(ctx.r11.u32 + 896, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F27F90"))) PPC_WEAK_FUNC(sub_82F27F90);
PPC_FUNC_IMPL(__imp__sub_82F27F90) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-32584
	ctx.r3.s64 = ctx.r11.s64 + -32584;
	// bl 0x82816528
	ctx.lr = 0x82F27FA8;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,900(r11)
	PPC_STORE_U32(ctx.r11.u32 + 900, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F27FC0"))) PPC_WEAK_FUNC(sub_82F27FC0);
PPC_FUNC_IMPL(__imp__sub_82F27FC0) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-32560
	ctx.r3.s64 = ctx.r11.s64 + -32560;
	// bl 0x82816528
	ctx.lr = 0x82F27FD8;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,904(r11)
	PPC_STORE_U32(ctx.r11.u32 + 904, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F27FF0"))) PPC_WEAK_FUNC(sub_82F27FF0);
PPC_FUNC_IMPL(__imp__sub_82F27FF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r31,r11,912
	ctx.r31.s64 = ctx.r11.s64 + 912;
	// addi r4,r10,-3384
	ctx.r4.s64 = ctx.r10.s64 + -3384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233a258
	ctx.lr = 0x82F28018;
	sub_8233A258(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r4,r11,-3432
	ctx.r4.s64 = ctx.r11.s64 + -3432;
	// bl 0x8233a258
	ctx.lr = 0x82F28028;
	sub_8233A258(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// addi r4,r11,-3476
	ctx.r4.s64 = ctx.r11.s64 + -3476;
	// bl 0x8233a258
	ctx.lr = 0x82F28038;
	sub_8233A258(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// addi r4,r11,-3524
	ctx.r4.s64 = ctx.r11.s64 + -3524;
	// bl 0x8233a258
	ctx.lr = 0x82F28048;
	sub_8233A258(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// addi r4,r11,-3580
	ctx.r4.s64 = ctx.r11.s64 + -3580;
	// bl 0x8233a258
	ctx.lr = 0x82F28058;
	sub_8233A258(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// addi r4,r11,-3632
	ctx.r4.s64 = ctx.r11.s64 + -3632;
	// bl 0x8233a258
	ctx.lr = 0x82F28068;
	sub_8233A258(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// addi r4,r11,-3688
	ctx.r4.s64 = ctx.r11.s64 + -3688;
	// bl 0x8233a258
	ctx.lr = 0x82F28078;
	sub_8233A258(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r31,168
	ctx.r3.s64 = ctx.r31.s64 + 168;
	// addi r4,r11,-3748
	ctx.r4.s64 = ctx.r11.s64 + -3748;
	// bl 0x8233a258
	ctx.lr = 0x82F28088;
	sub_8233A258(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// addi r4,r11,-3800
	ctx.r4.s64 = ctx.r11.s64 + -3800;
	// bl 0x8233a258
	ctx.lr = 0x82F28098;
	sub_8233A258(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r31,216
	ctx.r3.s64 = ctx.r31.s64 + 216;
	// addi r4,r11,-3864
	ctx.r4.s64 = ctx.r11.s64 + -3864;
	// bl 0x8233a258
	ctx.lr = 0x82F280A8;
	sub_8233A258(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r31,240
	ctx.r3.s64 = ctx.r31.s64 + 240;
	// addi r4,r11,-3916
	ctx.r4.s64 = ctx.r11.s64 + -3916;
	// bl 0x8233a258
	ctx.lr = 0x82F280B8;
	sub_8233A258(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r31,264
	ctx.r3.s64 = ctx.r31.s64 + 264;
	// addi r4,r11,-3968
	ctx.r4.s64 = ctx.r11.s64 + -3968;
	// bl 0x8233a258
	ctx.lr = 0x82F280C8;
	sub_8233A258(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r31,288
	ctx.r3.s64 = ctx.r31.s64 + 288;
	// addi r4,r11,-4020
	ctx.r4.s64 = ctx.r11.s64 + -4020;
	// bl 0x8233a258
	ctx.lr = 0x82F280D8;
	sub_8233A258(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r31,312
	ctx.r3.s64 = ctx.r31.s64 + 312;
	// addi r4,r11,-4072
	ctx.r4.s64 = ctx.r11.s64 + -4072;
	// bl 0x8233a258
	ctx.lr = 0x82F280E8;
	sub_8233A258(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r31,336
	ctx.r3.s64 = ctx.r31.s64 + 336;
	// addi r4,r11,-4124
	ctx.r4.s64 = ctx.r11.s64 + -4124;
	// bl 0x8233a258
	ctx.lr = 0x82F280F8;
	sub_8233A258(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r31,360
	ctx.r3.s64 = ctx.r31.s64 + 360;
	// addi r4,r11,-4176
	ctx.r4.s64 = ctx.r11.s64 + -4176;
	// bl 0x8233a258
	ctx.lr = 0x82F28108;
	sub_8233A258(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r31,384
	ctx.r3.s64 = ctx.r31.s64 + 384;
	// addi r4,r11,-4228
	ctx.r4.s64 = ctx.r11.s64 + -4228;
	// bl 0x8233a258
	ctx.lr = 0x82F28118;
	sub_8233A258(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r31,408
	ctx.r3.s64 = ctx.r31.s64 + 408;
	// addi r4,r11,-4280
	ctx.r4.s64 = ctx.r11.s64 + -4280;
	// bl 0x8233a258
	ctx.lr = 0x82F28128;
	sub_8233A258(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// addi r3,r11,29416
	ctx.r3.s64 = ctx.r11.s64 + 29416;
	// bl 0x82a4c758
	ctx.lr = 0x82F28134;
	sub_82A4C758(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F28148"))) PPC_WEAK_FUNC(sub_82F28148);
PPC_FUNC_IMPL(__imp__sub_82F28148) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r31,r11,1344
	ctx.r31.s64 = ctx.r11.s64 + 1344;
	// addi r4,r10,-3240
	ctx.r4.s64 = ctx.r10.s64 + -3240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233a258
	ctx.lr = 0x82F28170;
	sub_8233A258(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r4,r11,-3288
	ctx.r4.s64 = ctx.r11.s64 + -3288;
	// bl 0x8233a258
	ctx.lr = 0x82F28180;
	sub_8233A258(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// addi r4,r11,-3340
	ctx.r4.s64 = ctx.r11.s64 + -3340;
	// bl 0x8233a258
	ctx.lr = 0x82F28190;
	sub_8233A258(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// addi r3,r11,29496
	ctx.r3.s64 = ctx.r11.s64 + 29496;
	// bl 0x82a4c758
	ctx.lr = 0x82F2819C;
	sub_82A4C758(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F281B0"))) PPC_WEAK_FUNC(sub_82F281B0);
PPC_FUNC_IMPL(__imp__sub_82F281B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// addi r3,r9,29600
	ctx.r3.s64 = ctx.r9.s64 + 29600;
	// stw r10,-20336(r11)
	PPC_STORE_U32(ctx.r11.u32 + -20336, ctx.r10.u32);
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F281C8"))) PPC_WEAK_FUNC(sub_82F281C8);
PPC_FUNC_IMPL(__imp__sub_82F281C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// addi r3,r9,29712
	ctx.r3.s64 = ctx.r9.s64 + 29712;
	// stw r10,-20312(r11)
	PPC_STORE_U32(ctx.r11.u32 + -20312, ctx.r10.u32);
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F281E0"))) PPC_WEAK_FUNC(sub_82F281E0);
PPC_FUNC_IMPL(__imp__sub_82F281E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// addi r3,r9,29824
	ctx.r3.s64 = ctx.r9.s64 + 29824;
	// stw r10,-20288(r11)
	PPC_STORE_U32(ctx.r11.u32 + -20288, ctx.r10.u32);
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F281F8"))) PPC_WEAK_FUNC(sub_82F281F8);
PPC_FUNC_IMPL(__imp__sub_82F281F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// addi r3,r9,29936
	ctx.r3.s64 = ctx.r9.s64 + 29936;
	// stw r10,-20264(r11)
	PPC_STORE_U32(ctx.r11.u32 + -20264, ctx.r10.u32);
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F28210"))) PPC_WEAK_FUNC(sub_82F28210);
PPC_FUNC_IMPL(__imp__sub_82F28210) {
	PPC_FUNC_PROLOGUE();
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
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-32143
	ctx.r11.s64 = -2106523648;
	// lis r9,-31944
	ctx.r9.s64 = -2093481984;
	// addi r8,r11,-25856
	ctx.r8.s64 = ctx.r11.s64 + -25856;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,13856(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13856);
	// addi r30,r9,13860
	ctx.r30.s64 = ctx.r9.s64 + 13860;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// bne 0x82f28270
	if (!ctx.cr0.eq) goto loc_82F28270;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,8288
	ctx.r9.s64 = ctx.r9.s64 + 8288;
	// stw r11,13856(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13856, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// addi r3,r11,30048
	ctx.r3.s64 = ctx.r11.s64 + 30048;
	// bl 0x82a4c758
	ctx.lr = 0x82F28270;
	sub_82A4C758(ctx, base);
loc_82F28270:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,8240
	ctx.r3.s64 = ctx.r11.s64 + 8240;
	// bl 0x82816528
	ctx.lr = 0x82F2827C;
	sub_82816528(ctx, base);
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r31,r11,-20264
	ctx.r31.s64 = ctx.r11.s64 + -20264;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// li r5,24
	ctx.r5.s64 = 24;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// bl 0x82332d50
	ctx.lr = 0x82F282A8;
	sub_82332D50(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r10,r3,24
	ctx.r10.s64 = ctx.r3.s64 * 24;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f282d4
	if (ctx.cr0.eq) goto loc_82F282D4;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
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
loc_82F282D4:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82f282f8
	if (ctx.cr6.eq) goto loc_82F282F8;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,24
	ctx.r4.s64 = 24;
	// bl 0x82332c38
	ctx.lr = 0x82F282F8;
	sub_82332C38(ctx, base);
loc_82F282F8:
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,1416(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1416, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_82F28320"))) PPC_WEAK_FUNC(sub_82F28320);
PPC_FUNC_IMPL(__imp__sub_82F28320) {
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
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-17696
	ctx.r3.s64 = ctx.r11.s64 + -17696;
	// bl 0x82816528
	ctx.lr = 0x82F28338;
	sub_82816528(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,1420(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1420, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F28350"))) PPC_WEAK_FUNC(sub_82F28350);
PPC_FUNC_IMPL(__imp__sub_82F28350) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// addi r3,r9,30336
	ctx.r3.s64 = ctx.r9.s64 + 30336;
	// stw r10,-20240(r11)
	PPC_STORE_U32(ctx.r11.u32 + -20240, ctx.r10.u32);
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F28368"))) PPC_WEAK_FUNC(sub_82F28368);
PPC_FUNC_IMPL(__imp__sub_82F28368) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82F28370;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F28378;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,-15548
	ctx.r3.s64 = ctx.r11.s64 + -15548;
	// bl 0x82816528
	ctx.lr = 0x82F28388;
	sub_82816528(ctx, base);
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,-20240
	ctx.r31.s64 = ctx.r11.s64 + -20240;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r28,r11,5056
	ctx.r28.s64 = ctx.r11.s64 + 5056;
	// bl 0x82332d50
	ctx.lr = 0x82F283B0;
	sub_82332D50(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 * 12;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f283cc
	if (ctx.cr0.eq) goto loc_82F283CC;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
loc_82F283CC:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82f283f0
	if (ctx.cr6.eq) goto loc_82F283F0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x82332c38
	ctx.lr = 0x82F283F0;
	sub_82332C38(ctx, base);
loc_82F283F0:
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,1424(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1424, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F28408"))) PPC_WEAK_FUNC(sub_82F28408);
PPC_FUNC_IMPL(__imp__sub_82F28408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82F28410;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F28418;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,-15520
	ctx.r3.s64 = ctx.r11.s64 + -15520;
	// bl 0x82816528
	ctx.lr = 0x82F28428;
	sub_82816528(ctx, base);
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,-20240
	ctx.r31.s64 = ctx.r11.s64 + -20240;
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r28,r11,2832
	ctx.r28.s64 = ctx.r11.s64 + 2832;
	// bl 0x82332d50
	ctx.lr = 0x82F28450;
	sub_82332D50(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 * 12;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f2846c
	if (ctx.cr0.eq) goto loc_82F2846C;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
loc_82F2846C:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82f28490
	if (ctx.cr6.eq) goto loc_82F28490;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x82332c38
	ctx.lr = 0x82F28490;
	sub_82332C38(ctx, base);
loc_82F28490:
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,1425(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1425, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F284A8"))) PPC_WEAK_FUNC(sub_82F284A8);
PPC_FUNC_IMPL(__imp__sub_82F284A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// addi r3,r9,30544
	ctx.r3.s64 = ctx.r9.s64 + 30544;
	// stw r10,-20216(r11)
	PPC_STORE_U32(ctx.r11.u32 + -20216, ctx.r10.u32);
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F284C0"))) PPC_WEAK_FUNC(sub_82F284C0);
PPC_FUNC_IMPL(__imp__sub_82F284C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82F284C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F284D0;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,-14944
	ctx.r3.s64 = ctx.r11.s64 + -14944;
	// bl 0x82816528
	ctx.lr = 0x82F284E0;
	sub_82816528(ctx, base);
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,-20216
	ctx.r31.s64 = ctx.r11.s64 + -20216;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r28,r11,5056
	ctx.r28.s64 = ctx.r11.s64 + 5056;
	// bl 0x82332d50
	ctx.lr = 0x82F28508;
	sub_82332D50(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 * 12;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f28524
	if (ctx.cr0.eq) goto loc_82F28524;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
loc_82F28524:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82f28548
	if (ctx.cr6.eq) goto loc_82F28548;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x82332c38
	ctx.lr = 0x82F28548;
	sub_82332C38(ctx, base);
loc_82F28548:
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,1426(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1426, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F28560"))) PPC_WEAK_FUNC(sub_82F28560);
PPC_FUNC_IMPL(__imp__sub_82F28560) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82F28568;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F28570;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,-14912
	ctx.r3.s64 = ctx.r11.s64 + -14912;
	// bl 0x82816528
	ctx.lr = 0x82F28580;
	sub_82816528(ctx, base);
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,-20216
	ctx.r31.s64 = ctx.r11.s64 + -20216;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r28,r11,7248
	ctx.r28.s64 = ctx.r11.s64 + 7248;
	// bl 0x82332d50
	ctx.lr = 0x82F285A8;
	sub_82332D50(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 * 12;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f285c4
	if (ctx.cr0.eq) goto loc_82F285C4;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
loc_82F285C4:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82f285e8
	if (ctx.cr6.eq) goto loc_82F285E8;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x82332c38
	ctx.lr = 0x82F285E8;
	sub_82332C38(ctx, base);
loc_82F285E8:
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,1427(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1427, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F28600"))) PPC_WEAK_FUNC(sub_82F28600);
PPC_FUNC_IMPL(__imp__sub_82F28600) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// addi r3,r9,30656
	ctx.r3.s64 = ctx.r9.s64 + 30656;
	// stw r10,-20192(r11)
	PPC_STORE_U32(ctx.r11.u32 + -20192, ctx.r10.u32);
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F28618"))) PPC_WEAK_FUNC(sub_82F28618);
PPC_FUNC_IMPL(__imp__sub_82F28618) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82F28620;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F28628;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,-14736
	ctx.r3.s64 = ctx.r11.s64 + -14736;
	// bl 0x82816528
	ctx.lr = 0x82F28638;
	sub_82816528(ctx, base);
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,-20192
	ctx.r31.s64 = ctx.r11.s64 + -20192;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r28,r11,8160
	ctx.r28.s64 = ctx.r11.s64 + 8160;
	// bl 0x82332d50
	ctx.lr = 0x82F28660;
	sub_82332D50(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 * 12;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f2867c
	if (ctx.cr0.eq) goto loc_82F2867C;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
loc_82F2867C:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82f286a0
	if (ctx.cr6.eq) goto loc_82F286A0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x82332c38
	ctx.lr = 0x82F286A0;
	sub_82332C38(ctx, base);
loc_82F286A0:
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,1428(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1428, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F286B8"))) PPC_WEAK_FUNC(sub_82F286B8);
PPC_FUNC_IMPL(__imp__sub_82F286B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// addi r3,r9,30768
	ctx.r3.s64 = ctx.r9.s64 + 30768;
	// stw r10,-20168(r11)
	PPC_STORE_U32(ctx.r11.u32 + -20168, ctx.r10.u32);
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F286D0"))) PPC_WEAK_FUNC(sub_82F286D0);
PPC_FUNC_IMPL(__imp__sub_82F286D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// addi r3,r9,30928
	ctx.r3.s64 = ctx.r9.s64 + 30928;
	// stw r10,-20144(r11)
	PPC_STORE_U32(ctx.r11.u32 + -20144, ctx.r10.u32);
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F286E8"))) PPC_WEAK_FUNC(sub_82F286E8);
PPC_FUNC_IMPL(__imp__sub_82F286E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F286FC;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-14316
	ctx.r3.s64 = ctx.r11.s64 + -14316;
	// bl 0x82816528
	ctx.lr = 0x82F2870C;
	sub_82816528(ctx, base);
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,5056
	ctx.r3.s64 = ctx.r11.s64 + 5056;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82723a98
	ctx.lr = 0x82F28720;
	sub_82723A98(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1429(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1429, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F28740"))) PPC_WEAK_FUNC(sub_82F28740);
PPC_FUNC_IMPL(__imp__sub_82F28740) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F28754;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-14280
	ctx.r3.s64 = ctx.r11.s64 + -14280;
	// bl 0x82816528
	ctx.lr = 0x82F28764;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,2832
	ctx.r3.s64 = ctx.r11.s64 + 2832;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82723a98
	ctx.lr = 0x82F28778;
	sub_82723A98(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1430(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1430, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F28798"))) PPC_WEAK_FUNC(sub_82F28798);
PPC_FUNC_IMPL(__imp__sub_82F28798) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F287AC;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-14240
	ctx.r3.s64 = ctx.r11.s64 + -14240;
	// bl 0x82816528
	ctx.lr = 0x82F287BC;
	sub_82816528(ctx, base);
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,5056
	ctx.r3.s64 = ctx.r11.s64 + 5056;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82723a98
	ctx.lr = 0x82F287D0;
	sub_82723A98(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1431(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1431, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F287F0"))) PPC_WEAK_FUNC(sub_82F287F0);
PPC_FUNC_IMPL(__imp__sub_82F287F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F28804;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-14204
	ctx.r3.s64 = ctx.r11.s64 + -14204;
	// bl 0x82816528
	ctx.lr = 0x82F28814;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,2832
	ctx.r3.s64 = ctx.r11.s64 + 2832;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82723a98
	ctx.lr = 0x82F28828;
	sub_82723A98(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1432(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1432, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F28848"))) PPC_WEAK_FUNC(sub_82F28848);
PPC_FUNC_IMPL(__imp__sub_82F28848) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2885C;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-14164
	ctx.r3.s64 = ctx.r11.s64 + -14164;
	// bl 0x82816528
	ctx.lr = 0x82F2886C;
	sub_82816528(ctx, base);
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,5056
	ctx.r3.s64 = ctx.r11.s64 + 5056;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82723a98
	ctx.lr = 0x82F28880;
	sub_82723A98(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1433(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1433, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F288A0"))) PPC_WEAK_FUNC(sub_82F288A0);
PPC_FUNC_IMPL(__imp__sub_82F288A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F288B4;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-14128
	ctx.r3.s64 = ctx.r11.s64 + -14128;
	// bl 0x82816528
	ctx.lr = 0x82F288C4;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,2832
	ctx.r3.s64 = ctx.r11.s64 + 2832;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82723a98
	ctx.lr = 0x82F288D8;
	sub_82723A98(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1434(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1434, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F288F8"))) PPC_WEAK_FUNC(sub_82F288F8);
PPC_FUNC_IMPL(__imp__sub_82F288F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2890C;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-14088
	ctx.r3.s64 = ctx.r11.s64 + -14088;
	// bl 0x82816528
	ctx.lr = 0x82F2891C;
	sub_82816528(ctx, base);
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,5056
	ctx.r3.s64 = ctx.r11.s64 + 5056;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82723a98
	ctx.lr = 0x82F28930;
	sub_82723A98(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1435(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1435, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F28950"))) PPC_WEAK_FUNC(sub_82F28950);
PPC_FUNC_IMPL(__imp__sub_82F28950) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F28964;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-14052
	ctx.r3.s64 = ctx.r11.s64 + -14052;
	// bl 0x82816528
	ctx.lr = 0x82F28974;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,2832
	ctx.r3.s64 = ctx.r11.s64 + 2832;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82723a98
	ctx.lr = 0x82F28988;
	sub_82723A98(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1436(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1436, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F289A8"))) PPC_WEAK_FUNC(sub_82F289A8);
PPC_FUNC_IMPL(__imp__sub_82F289A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F289BC;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-14012
	ctx.r3.s64 = ctx.r11.s64 + -14012;
	// bl 0x82816528
	ctx.lr = 0x82F289CC;
	sub_82816528(ctx, base);
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,5056
	ctx.r3.s64 = ctx.r11.s64 + 5056;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82723a98
	ctx.lr = 0x82F289E0;
	sub_82723A98(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1437(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1437, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F28A00"))) PPC_WEAK_FUNC(sub_82F28A00);
PPC_FUNC_IMPL(__imp__sub_82F28A00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F28A14;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-13976
	ctx.r3.s64 = ctx.r11.s64 + -13976;
	// bl 0x82816528
	ctx.lr = 0x82F28A24;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,2832
	ctx.r3.s64 = ctx.r11.s64 + 2832;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82723a98
	ctx.lr = 0x82F28A38;
	sub_82723A98(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1438(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1438, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F28A58"))) PPC_WEAK_FUNC(sub_82F28A58);
PPC_FUNC_IMPL(__imp__sub_82F28A58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F28A6C;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-13936
	ctx.r3.s64 = ctx.r11.s64 + -13936;
	// bl 0x82816528
	ctx.lr = 0x82F28A7C;
	sub_82816528(ctx, base);
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,5056
	ctx.r3.s64 = ctx.r11.s64 + 5056;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82723a98
	ctx.lr = 0x82F28A90;
	sub_82723A98(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1439(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1439, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F28AB0"))) PPC_WEAK_FUNC(sub_82F28AB0);
PPC_FUNC_IMPL(__imp__sub_82F28AB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F28AC4;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-13900
	ctx.r3.s64 = ctx.r11.s64 + -13900;
	// bl 0x82816528
	ctx.lr = 0x82F28AD4;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,2832
	ctx.r3.s64 = ctx.r11.s64 + 2832;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82723a98
	ctx.lr = 0x82F28AE8;
	sub_82723A98(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1440(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1440, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F28B08"))) PPC_WEAK_FUNC(sub_82F28B08);
PPC_FUNC_IMPL(__imp__sub_82F28B08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// addi r3,r9,31040
	ctx.r3.s64 = ctx.r9.s64 + 31040;
	// stw r10,-20120(r11)
	PPC_STORE_U32(ctx.r11.u32 + -20120, ctx.r10.u32);
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F28B20"))) PPC_WEAK_FUNC(sub_82F28B20);
PPC_FUNC_IMPL(__imp__sub_82F28B20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F28B34;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-13600
	ctx.r3.s64 = ctx.r11.s64 + -13600;
	// bl 0x82816528
	ctx.lr = 0x82F28B44;
	sub_82816528(ctx, base);
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,5056
	ctx.r3.s64 = ctx.r11.s64 + 5056;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x827246b8
	ctx.lr = 0x82F28B58;
	sub_827246B8(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1441(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1441, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F28B78"))) PPC_WEAK_FUNC(sub_82F28B78);
PPC_FUNC_IMPL(__imp__sub_82F28B78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F28B8C;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-13568
	ctx.r3.s64 = ctx.r11.s64 + -13568;
	// bl 0x82816528
	ctx.lr = 0x82F28B9C;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,2832
	ctx.r3.s64 = ctx.r11.s64 + 2832;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x827246b8
	ctx.lr = 0x82F28BB0;
	sub_827246B8(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1442(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1442, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F28BD0"))) PPC_WEAK_FUNC(sub_82F28BD0);
PPC_FUNC_IMPL(__imp__sub_82F28BD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F28BE4;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-13528
	ctx.r3.s64 = ctx.r11.s64 + -13528;
	// bl 0x82816528
	ctx.lr = 0x82F28BF4;
	sub_82816528(ctx, base);
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,19384
	ctx.r3.s64 = ctx.r11.s64 + 19384;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x827246b8
	ctx.lr = 0x82F28C08;
	sub_827246B8(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1443(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1443, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F28C28"))) PPC_WEAK_FUNC(sub_82F28C28);
PPC_FUNC_IMPL(__imp__sub_82F28C28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F28C3C;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-13496
	ctx.r3.s64 = ctx.r11.s64 + -13496;
	// bl 0x82816528
	ctx.lr = 0x82F28C4C;
	sub_82816528(ctx, base);
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,19976
	ctx.r3.s64 = ctx.r11.s64 + 19976;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x827246b8
	ctx.lr = 0x82F28C60;
	sub_827246B8(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1444(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1444, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F28C80"))) PPC_WEAK_FUNC(sub_82F28C80);
PPC_FUNC_IMPL(__imp__sub_82F28C80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F28C94;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-13460
	ctx.r3.s64 = ctx.r11.s64 + -13460;
	// bl 0x82816528
	ctx.lr = 0x82F28CA4;
	sub_82816528(ctx, base);
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,20288
	ctx.r3.s64 = ctx.r11.s64 + 20288;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x827246b8
	ctx.lr = 0x82F28CB8;
	sub_827246B8(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1445(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1445, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F28CD8"))) PPC_WEAK_FUNC(sub_82F28CD8);
PPC_FUNC_IMPL(__imp__sub_82F28CD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F28CEC;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-13424
	ctx.r3.s64 = ctx.r11.s64 + -13424;
	// bl 0x82816528
	ctx.lr = 0x82F28CFC;
	sub_82816528(ctx, base);
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,20432
	ctx.r3.s64 = ctx.r11.s64 + 20432;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x827246b8
	ctx.lr = 0x82F28D10;
	sub_827246B8(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1446(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1446, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F28D30"))) PPC_WEAK_FUNC(sub_82F28D30);
PPC_FUNC_IMPL(__imp__sub_82F28D30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F28D44;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-13388
	ctx.r3.s64 = ctx.r11.s64 + -13388;
	// bl 0x82816528
	ctx.lr = 0x82F28D54;
	sub_82816528(ctx, base);
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,20616
	ctx.r3.s64 = ctx.r11.s64 + 20616;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x827246b8
	ctx.lr = 0x82F28D68;
	sub_827246B8(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1447(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1447, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F28D88"))) PPC_WEAK_FUNC(sub_82F28D88);
PPC_FUNC_IMPL(__imp__sub_82F28D88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F28D9C;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-13352
	ctx.r3.s64 = ctx.r11.s64 + -13352;
	// bl 0x82816528
	ctx.lr = 0x82F28DAC;
	sub_82816528(ctx, base);
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,20432
	ctx.r3.s64 = ctx.r11.s64 + 20432;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x827246b8
	ctx.lr = 0x82F28DC0;
	sub_827246B8(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1448(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1448, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F28DE0"))) PPC_WEAK_FUNC(sub_82F28DE0);
PPC_FUNC_IMPL(__imp__sub_82F28DE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F28DF4;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-13316
	ctx.r3.s64 = ctx.r11.s64 + -13316;
	// bl 0x82816528
	ctx.lr = 0x82F28E04;
	sub_82816528(ctx, base);
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,20800
	ctx.r3.s64 = ctx.r11.s64 + 20800;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x827246b8
	ctx.lr = 0x82F28E18;
	sub_827246B8(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1449(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1449, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F28E38"))) PPC_WEAK_FUNC(sub_82F28E38);
PPC_FUNC_IMPL(__imp__sub_82F28E38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F28E4C;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-13280
	ctx.r3.s64 = ctx.r11.s64 + -13280;
	// bl 0x82816528
	ctx.lr = 0x82F28E5C;
	sub_82816528(ctx, base);
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,20928
	ctx.r3.s64 = ctx.r11.s64 + 20928;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x827246b8
	ctx.lr = 0x82F28E70;
	sub_827246B8(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1450(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1450, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F28E90"))) PPC_WEAK_FUNC(sub_82F28E90);
PPC_FUNC_IMPL(__imp__sub_82F28E90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// addi r3,r9,31152
	ctx.r3.s64 = ctx.r9.s64 + 31152;
	// stw r10,-20096(r11)
	PPC_STORE_U32(ctx.r11.u32 + -20096, ctx.r10.u32);
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F28EA8"))) PPC_WEAK_FUNC(sub_82F28EA8);
PPC_FUNC_IMPL(__imp__sub_82F28EA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F28EBC;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-12600
	ctx.r3.s64 = ctx.r11.s64 + -12600;
	// bl 0x82816528
	ctx.lr = 0x82F28ECC;
	sub_82816528(ctx, base);
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,5056
	ctx.r3.s64 = ctx.r11.s64 + 5056;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82725510
	ctx.lr = 0x82F28EE0;
	sub_82725510(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1451(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1451, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F28F00"))) PPC_WEAK_FUNC(sub_82F28F00);
PPC_FUNC_IMPL(__imp__sub_82F28F00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F28F14;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-12568
	ctx.r3.s64 = ctx.r11.s64 + -12568;
	// bl 0x82816528
	ctx.lr = 0x82F28F24;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,2832
	ctx.r3.s64 = ctx.r11.s64 + 2832;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82725510
	ctx.lr = 0x82F28F38;
	sub_82725510(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1452(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1452, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F28F58"))) PPC_WEAK_FUNC(sub_82F28F58);
PPC_FUNC_IMPL(__imp__sub_82F28F58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F28F6C;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-12532
	ctx.r3.s64 = ctx.r11.s64 + -12532;
	// bl 0x82816528
	ctx.lr = 0x82F28F7C;
	sub_82816528(ctx, base);
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,23696
	ctx.r3.s64 = ctx.r11.s64 + 23696;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82725510
	ctx.lr = 0x82F28F90;
	sub_82725510(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1453(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1453, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F28FB0"))) PPC_WEAK_FUNC(sub_82F28FB0);
PPC_FUNC_IMPL(__imp__sub_82F28FB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F28FC4;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-12500
	ctx.r3.s64 = ctx.r11.s64 + -12500;
	// bl 0x82816528
	ctx.lr = 0x82F28FD4;
	sub_82816528(ctx, base);
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,23784
	ctx.r3.s64 = ctx.r11.s64 + 23784;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82725510
	ctx.lr = 0x82F28FE8;
	sub_82725510(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1454(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1454, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F29008"))) PPC_WEAK_FUNC(sub_82F29008);
PPC_FUNC_IMPL(__imp__sub_82F29008) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// addi r3,r9,31264
	ctx.r3.s64 = ctx.r9.s64 + 31264;
	// stw r10,-20072(r11)
	PPC_STORE_U32(ctx.r11.u32 + -20072, ctx.r10.u32);
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F29020"))) PPC_WEAK_FUNC(sub_82F29020);
PPC_FUNC_IMPL(__imp__sub_82F29020) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F29034;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-11832
	ctx.r3.s64 = ctx.r11.s64 + -11832;
	// bl 0x82816528
	ctx.lr = 0x82F29044;
	sub_82816528(ctx, base);
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,5056
	ctx.r3.s64 = ctx.r11.s64 + 5056;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82725ed8
	ctx.lr = 0x82F29058;
	sub_82725ED8(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1455(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1455, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F29078"))) PPC_WEAK_FUNC(sub_82F29078);
PPC_FUNC_IMPL(__imp__sub_82F29078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2908C;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-11800
	ctx.r3.s64 = ctx.r11.s64 + -11800;
	// bl 0x82816528
	ctx.lr = 0x82F2909C;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,2832
	ctx.r3.s64 = ctx.r11.s64 + 2832;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82725ed8
	ctx.lr = 0x82F290B0;
	sub_82725ED8(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1456(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1456, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F290D0"))) PPC_WEAK_FUNC(sub_82F290D0);
PPC_FUNC_IMPL(__imp__sub_82F290D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F290E4;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-11764
	ctx.r3.s64 = ctx.r11.s64 + -11764;
	// bl 0x82816528
	ctx.lr = 0x82F290F4;
	sub_82816528(ctx, base);
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,26448
	ctx.r3.s64 = ctx.r11.s64 + 26448;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82725ed8
	ctx.lr = 0x82F29108;
	sub_82725ED8(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1457(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1457, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F29128"))) PPC_WEAK_FUNC(sub_82F29128);
PPC_FUNC_IMPL(__imp__sub_82F29128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2913C;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-11728
	ctx.r3.s64 = ctx.r11.s64 + -11728;
	// bl 0x82816528
	ctx.lr = 0x82F2914C;
	sub_82816528(ctx, base);
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,26520
	ctx.r3.s64 = ctx.r11.s64 + 26520;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82725ed8
	ctx.lr = 0x82F29160;
	sub_82725ED8(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1458(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1458, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F29180"))) PPC_WEAK_FUNC(sub_82F29180);
PPC_FUNC_IMPL(__imp__sub_82F29180) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F29194;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-11692
	ctx.r3.s64 = ctx.r11.s64 + -11692;
	// bl 0x82816528
	ctx.lr = 0x82F291A4;
	sub_82816528(ctx, base);
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,26624
	ctx.r3.s64 = ctx.r11.s64 + 26624;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82725ed8
	ctx.lr = 0x82F291B8;
	sub_82725ED8(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1459(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1459, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F291D8"))) PPC_WEAK_FUNC(sub_82F291D8);
PPC_FUNC_IMPL(__imp__sub_82F291D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// addi r3,r9,31376
	ctx.r3.s64 = ctx.r9.s64 + 31376;
	// stw r10,-20048(r11)
	PPC_STORE_U32(ctx.r11.u32 + -20048, ctx.r10.u32);
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F291F0"))) PPC_WEAK_FUNC(sub_82F291F0);
PPC_FUNC_IMPL(__imp__sub_82F291F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F29204;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-11288
	ctx.r3.s64 = ctx.r11.s64 + -11288;
	// bl 0x82816528
	ctx.lr = 0x82F29214;
	sub_82816528(ctx, base);
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,5056
	ctx.r3.s64 = ctx.r11.s64 + 5056;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x827269f8
	ctx.lr = 0x82F29228;
	sub_827269F8(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1460(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1460, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F29248"))) PPC_WEAK_FUNC(sub_82F29248);
PPC_FUNC_IMPL(__imp__sub_82F29248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2925C;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-11256
	ctx.r3.s64 = ctx.r11.s64 + -11256;
	// bl 0x82816528
	ctx.lr = 0x82F2926C;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,2832
	ctx.r3.s64 = ctx.r11.s64 + 2832;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x827269f8
	ctx.lr = 0x82F29280;
	sub_827269F8(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1461(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1461, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F292A0"))) PPC_WEAK_FUNC(sub_82F292A0);
PPC_FUNC_IMPL(__imp__sub_82F292A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F292B4;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-11220
	ctx.r3.s64 = ctx.r11.s64 + -11220;
	// bl 0x82816528
	ctx.lr = 0x82F292C4;
	sub_82816528(ctx, base);
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,26448
	ctx.r3.s64 = ctx.r11.s64 + 26448;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x827269f8
	ctx.lr = 0x82F292D8;
	sub_827269F8(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1462(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1462, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F292F8"))) PPC_WEAK_FUNC(sub_82F292F8);
PPC_FUNC_IMPL(__imp__sub_82F292F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2930C;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-11184
	ctx.r3.s64 = ctx.r11.s64 + -11184;
	// bl 0x82816528
	ctx.lr = 0x82F2931C;
	sub_82816528(ctx, base);
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,28672
	ctx.r3.s64 = ctx.r11.s64 + 28672;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x827269f8
	ctx.lr = 0x82F29330;
	sub_827269F8(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1463(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1463, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F29350"))) PPC_WEAK_FUNC(sub_82F29350);
PPC_FUNC_IMPL(__imp__sub_82F29350) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// addi r3,r9,31488
	ctx.r3.s64 = ctx.r9.s64 + 31488;
	// stw r10,-20024(r11)
	PPC_STORE_U32(ctx.r11.u32 + -20024, ctx.r10.u32);
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F29368"))) PPC_WEAK_FUNC(sub_82F29368);
PPC_FUNC_IMPL(__imp__sub_82F29368) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2937C;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-10776
	ctx.r3.s64 = ctx.r11.s64 + -10776;
	// bl 0x82816528
	ctx.lr = 0x82F2938C;
	sub_82816528(ctx, base);
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,5056
	ctx.r3.s64 = ctx.r11.s64 + 5056;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82727188
	ctx.lr = 0x82F293A0;
	sub_82727188(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1464(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1464, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F293C0"))) PPC_WEAK_FUNC(sub_82F293C0);
PPC_FUNC_IMPL(__imp__sub_82F293C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F293D4;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-10744
	ctx.r3.s64 = ctx.r11.s64 + -10744;
	// bl 0x82816528
	ctx.lr = 0x82F293E4;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,2832
	ctx.r3.s64 = ctx.r11.s64 + 2832;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82727188
	ctx.lr = 0x82F293F8;
	sub_82727188(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1465(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1465, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F29418"))) PPC_WEAK_FUNC(sub_82F29418);
PPC_FUNC_IMPL(__imp__sub_82F29418) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2942C;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-10708
	ctx.r3.s64 = ctx.r11.s64 + -10708;
	// bl 0x82816528
	ctx.lr = 0x82F2943C;
	sub_82816528(ctx, base);
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,26448
	ctx.r3.s64 = ctx.r11.s64 + 26448;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82727188
	ctx.lr = 0x82F29450;
	sub_82727188(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1466(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1466, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F29470"))) PPC_WEAK_FUNC(sub_82F29470);
PPC_FUNC_IMPL(__imp__sub_82F29470) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F29484;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-10676
	ctx.r3.s64 = ctx.r11.s64 + -10676;
	// bl 0x82816528
	ctx.lr = 0x82F29494;
	sub_82816528(ctx, base);
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,30952
	ctx.r3.s64 = ctx.r11.s64 + 30952;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82727188
	ctx.lr = 0x82F294A8;
	sub_82727188(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1467(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1467, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F294C8"))) PPC_WEAK_FUNC(sub_82F294C8);
PPC_FUNC_IMPL(__imp__sub_82F294C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// addi r3,r9,31600
	ctx.r3.s64 = ctx.r9.s64 + 31600;
	// stw r10,-20000(r11)
	PPC_STORE_U32(ctx.r11.u32 + -20000, ctx.r10.u32);
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F294E0"))) PPC_WEAK_FUNC(sub_82F294E0);
PPC_FUNC_IMPL(__imp__sub_82F294E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F294F4;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-10128
	ctx.r3.s64 = ctx.r11.s64 + -10128;
	// bl 0x82816528
	ctx.lr = 0x82F29504;
	sub_82816528(ctx, base);
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,5056
	ctx.r3.s64 = ctx.r11.s64 + 5056;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82727a98
	ctx.lr = 0x82F29518;
	sub_82727A98(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1468(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1468, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F29538"))) PPC_WEAK_FUNC(sub_82F29538);
PPC_FUNC_IMPL(__imp__sub_82F29538) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2954C;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-10096
	ctx.r3.s64 = ctx.r11.s64 + -10096;
	// bl 0x82816528
	ctx.lr = 0x82F2955C;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,2832
	ctx.r3.s64 = ctx.r11.s64 + 2832;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82727a98
	ctx.lr = 0x82F29570;
	sub_82727A98(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1469(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1469, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F29590"))) PPC_WEAK_FUNC(sub_82F29590);
PPC_FUNC_IMPL(__imp__sub_82F29590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F295A4;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-10060
	ctx.r3.s64 = ctx.r11.s64 + -10060;
	// bl 0x82816528
	ctx.lr = 0x82F295B4;
	sub_82816528(ctx, base);
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,26448
	ctx.r3.s64 = ctx.r11.s64 + 26448;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82727a98
	ctx.lr = 0x82F295C8;
	sub_82727A98(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1470(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1470, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F295E8"))) PPC_WEAK_FUNC(sub_82F295E8);
PPC_FUNC_IMPL(__imp__sub_82F295E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F295FC;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-10028
	ctx.r3.s64 = ctx.r11.s64 + -10028;
	// bl 0x82816528
	ctx.lr = 0x82F2960C;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-31776
	ctx.r3.s64 = ctx.r11.s64 + -31776;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82727a98
	ctx.lr = 0x82F29620;
	sub_82727A98(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1471(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1471, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F29640"))) PPC_WEAK_FUNC(sub_82F29640);
PPC_FUNC_IMPL(__imp__sub_82F29640) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F29654;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-9988
	ctx.r3.s64 = ctx.r11.s64 + -9988;
	// bl 0x82816528
	ctx.lr = 0x82F29664;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-31704
	ctx.r3.s64 = ctx.r11.s64 + -31704;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82727a98
	ctx.lr = 0x82F29678;
	sub_82727A98(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1472(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1472, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F29698"))) PPC_WEAK_FUNC(sub_82F29698);
PPC_FUNC_IMPL(__imp__sub_82F29698) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F296AC;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-9952
	ctx.r3.s64 = ctx.r11.s64 + -9952;
	// bl 0x82816528
	ctx.lr = 0x82F296BC;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-31664
	ctx.r3.s64 = ctx.r11.s64 + -31664;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82727a98
	ctx.lr = 0x82F296D0;
	sub_82727A98(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1473(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1473, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F296F0"))) PPC_WEAK_FUNC(sub_82F296F0);
PPC_FUNC_IMPL(__imp__sub_82F296F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F29704;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-9916
	ctx.r3.s64 = ctx.r11.s64 + -9916;
	// bl 0x82816528
	ctx.lr = 0x82F29714;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-31504
	ctx.r3.s64 = ctx.r11.s64 + -31504;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82727a98
	ctx.lr = 0x82F29728;
	sub_82727A98(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1474(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1474, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F29748"))) PPC_WEAK_FUNC(sub_82F29748);
PPC_FUNC_IMPL(__imp__sub_82F29748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2975C;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-9880
	ctx.r3.s64 = ctx.r11.s64 + -9880;
	// bl 0x82816528
	ctx.lr = 0x82F2976C;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-31464
	ctx.r3.s64 = ctx.r11.s64 + -31464;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82727a98
	ctx.lr = 0x82F29780;
	sub_82727A98(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1475(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1475, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F297A0"))) PPC_WEAK_FUNC(sub_82F297A0);
PPC_FUNC_IMPL(__imp__sub_82F297A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// addi r3,r9,31712
	ctx.r3.s64 = ctx.r9.s64 + 31712;
	// stw r10,-19976(r11)
	PPC_STORE_U32(ctx.r11.u32 + -19976, ctx.r10.u32);
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F297B8"))) PPC_WEAK_FUNC(sub_82F297B8);
PPC_FUNC_IMPL(__imp__sub_82F297B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82F297C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F297C8;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,-9488
	ctx.r3.s64 = ctx.r11.s64 + -9488;
	// bl 0x82816528
	ctx.lr = 0x82F297D8;
	sub_82816528(ctx, base);
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,-19976
	ctx.r31.s64 = ctx.r11.s64 + -19976;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r28,r11,5056
	ctx.r28.s64 = ctx.r11.s64 + 5056;
	// bl 0x82332d50
	ctx.lr = 0x82F29800;
	sub_82332D50(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 * 12;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f2981c
	if (ctx.cr0.eq) goto loc_82F2981C;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
loc_82F2981C:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82f29840
	if (ctx.cr6.eq) goto loc_82F29840;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x82332c38
	ctx.lr = 0x82F29840;
	sub_82332C38(ctx, base);
loc_82F29840:
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,1476(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1476, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F29858"))) PPC_WEAK_FUNC(sub_82F29858);
PPC_FUNC_IMPL(__imp__sub_82F29858) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82F29860;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F29868;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,-9456
	ctx.r3.s64 = ctx.r11.s64 + -9456;
	// bl 0x82816528
	ctx.lr = 0x82F29878;
	sub_82816528(ctx, base);
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,-19976
	ctx.r31.s64 = ctx.r11.s64 + -19976;
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r28,r11,2832
	ctx.r28.s64 = ctx.r11.s64 + 2832;
	// bl 0x82332d50
	ctx.lr = 0x82F298A0;
	sub_82332D50(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 * 12;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f298bc
	if (ctx.cr0.eq) goto loc_82F298BC;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
loc_82F298BC:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82f298e0
	if (ctx.cr6.eq) goto loc_82F298E0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x82332c38
	ctx.lr = 0x82F298E0;
	sub_82332C38(ctx, base);
loc_82F298E0:
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,1477(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1477, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F298F8"))) PPC_WEAK_FUNC(sub_82F298F8);
PPC_FUNC_IMPL(__imp__sub_82F298F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// addi r3,r9,31824
	ctx.r3.s64 = ctx.r9.s64 + 31824;
	// stw r10,-19952(r11)
	PPC_STORE_U32(ctx.r11.u32 + -19952, ctx.r10.u32);
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F29910"))) PPC_WEAK_FUNC(sub_82F29910);
PPC_FUNC_IMPL(__imp__sub_82F29910) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F29924;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-9280
	ctx.r3.s64 = ctx.r11.s64 + -9280;
	// bl 0x82816528
	ctx.lr = 0x82F29934;
	sub_82816528(ctx, base);
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,5056
	ctx.r3.s64 = ctx.r11.s64 + 5056;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82728a08
	ctx.lr = 0x82F29948;
	sub_82728A08(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1478(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1478, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F29968"))) PPC_WEAK_FUNC(sub_82F29968);
PPC_FUNC_IMPL(__imp__sub_82F29968) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2997C;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-9248
	ctx.r3.s64 = ctx.r11.s64 + -9248;
	// bl 0x82816528
	ctx.lr = 0x82F2998C;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,2832
	ctx.r3.s64 = ctx.r11.s64 + 2832;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82728a08
	ctx.lr = 0x82F299A0;
	sub_82728A08(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1479(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1479, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F299C0"))) PPC_WEAK_FUNC(sub_82F299C0);
PPC_FUNC_IMPL(__imp__sub_82F299C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F299D4;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-9212
	ctx.r3.s64 = ctx.r11.s64 + -9212;
	// bl 0x82816528
	ctx.lr = 0x82F299E4;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-29520
	ctx.r3.s64 = ctx.r11.s64 + -29520;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82728a08
	ctx.lr = 0x82F299F8;
	sub_82728A08(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1480(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1480, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F29A18"))) PPC_WEAK_FUNC(sub_82F29A18);
PPC_FUNC_IMPL(__imp__sub_82F29A18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F29A2C;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-9180
	ctx.r3.s64 = ctx.r11.s64 + -9180;
	// bl 0x82816528
	ctx.lr = 0x82F29A3C;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-29400
	ctx.r3.s64 = ctx.r11.s64 + -29400;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82728a08
	ctx.lr = 0x82F29A50;
	sub_82728A08(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1481(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1481, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F29A70"))) PPC_WEAK_FUNC(sub_82F29A70);
PPC_FUNC_IMPL(__imp__sub_82F29A70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F29A84;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-9148
	ctx.r3.s64 = ctx.r11.s64 + -9148;
	// bl 0x82816528
	ctx.lr = 0x82F29A94;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-29264
	ctx.r3.s64 = ctx.r11.s64 + -29264;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82728a08
	ctx.lr = 0x82F29AA8;
	sub_82728A08(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1482(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1482, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F29AC8"))) PPC_WEAK_FUNC(sub_82F29AC8);
PPC_FUNC_IMPL(__imp__sub_82F29AC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// addi r3,r9,31936
	ctx.r3.s64 = ctx.r9.s64 + 31936;
	// stw r10,-19928(r11)
	PPC_STORE_U32(ctx.r11.u32 + -19928, ctx.r10.u32);
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F29AE0"))) PPC_WEAK_FUNC(sub_82F29AE0);
PPC_FUNC_IMPL(__imp__sub_82F29AE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F29AF4;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-8880
	ctx.r3.s64 = ctx.r11.s64 + -8880;
	// bl 0x82816528
	ctx.lr = 0x82F29B04;
	sub_82816528(ctx, base);
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,5056
	ctx.r3.s64 = ctx.r11.s64 + 5056;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82728f40
	ctx.lr = 0x82F29B18;
	sub_82728F40(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1483(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1483, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F29B38"))) PPC_WEAK_FUNC(sub_82F29B38);
PPC_FUNC_IMPL(__imp__sub_82F29B38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F29B4C;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-8848
	ctx.r3.s64 = ctx.r11.s64 + -8848;
	// bl 0x82816528
	ctx.lr = 0x82F29B5C;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,2832
	ctx.r3.s64 = ctx.r11.s64 + 2832;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82728f40
	ctx.lr = 0x82F29B70;
	sub_82728F40(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1484(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1484, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F29B90"))) PPC_WEAK_FUNC(sub_82F29B90);
PPC_FUNC_IMPL(__imp__sub_82F29B90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F29BA4;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-8812
	ctx.r3.s64 = ctx.r11.s64 + -8812;
	// bl 0x82816528
	ctx.lr = 0x82F29BB4;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-6568
	ctx.r3.s64 = ctx.r11.s64 + -6568;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82728f40
	ctx.lr = 0x82F29BC8;
	sub_82728F40(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1485(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1485, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F29BE8"))) PPC_WEAK_FUNC(sub_82F29BE8);
PPC_FUNC_IMPL(__imp__sub_82F29BE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F29BFC;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-8780
	ctx.r3.s64 = ctx.r11.s64 + -8780;
	// bl 0x82816528
	ctx.lr = 0x82F29C0C;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-27080
	ctx.r3.s64 = ctx.r11.s64 + -27080;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82728f40
	ctx.lr = 0x82F29C20;
	sub_82728F40(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1486(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1486, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F29C40"))) PPC_WEAK_FUNC(sub_82F29C40);
PPC_FUNC_IMPL(__imp__sub_82F29C40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F29C54;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-8744
	ctx.r3.s64 = ctx.r11.s64 + -8744;
	// bl 0x82816528
	ctx.lr = 0x82F29C64;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-24840
	ctx.r3.s64 = ctx.r11.s64 + -24840;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82728f40
	ctx.lr = 0x82F29C78;
	sub_82728F40(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1487(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1487, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F29C98"))) PPC_WEAK_FUNC(sub_82F29C98);
PPC_FUNC_IMPL(__imp__sub_82F29C98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F29CAC;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-8708
	ctx.r3.s64 = ctx.r11.s64 + -8708;
	// bl 0x82816528
	ctx.lr = 0x82F29CBC;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-26888
	ctx.r3.s64 = ctx.r11.s64 + -26888;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82728f40
	ctx.lr = 0x82F29CD0;
	sub_82728F40(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1488(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1488, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F29CF0"))) PPC_WEAK_FUNC(sub_82F29CF0);
PPC_FUNC_IMPL(__imp__sub_82F29CF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F29D04;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-8672
	ctx.r3.s64 = ctx.r11.s64 + -8672;
	// bl 0x82816528
	ctx.lr = 0x82F29D14;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-26616
	ctx.r3.s64 = ctx.r11.s64 + -26616;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82728f40
	ctx.lr = 0x82F29D28;
	sub_82728F40(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1489(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1489, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F29D48"))) PPC_WEAK_FUNC(sub_82F29D48);
PPC_FUNC_IMPL(__imp__sub_82F29D48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// addi r3,r9,32048
	ctx.r3.s64 = ctx.r9.s64 + 32048;
	// stw r10,-19904(r11)
	PPC_STORE_U32(ctx.r11.u32 + -19904, ctx.r10.u32);
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F29D60"))) PPC_WEAK_FUNC(sub_82F29D60);
PPC_FUNC_IMPL(__imp__sub_82F29D60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F29D74;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-8112
	ctx.r3.s64 = ctx.r11.s64 + -8112;
	// bl 0x82816528
	ctx.lr = 0x82F29D84;
	sub_82816528(ctx, base);
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,5056
	ctx.r3.s64 = ctx.r11.s64 + 5056;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82729a08
	ctx.lr = 0x82F29D98;
	sub_82729A08(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1490(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1490, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F29DB8"))) PPC_WEAK_FUNC(sub_82F29DB8);
PPC_FUNC_IMPL(__imp__sub_82F29DB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F29DCC;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-8080
	ctx.r3.s64 = ctx.r11.s64 + -8080;
	// bl 0x82816528
	ctx.lr = 0x82F29DDC;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,2832
	ctx.r3.s64 = ctx.r11.s64 + 2832;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82729a08
	ctx.lr = 0x82F29DF0;
	sub_82729A08(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1491(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1491, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F29E10"))) PPC_WEAK_FUNC(sub_82F29E10);
PPC_FUNC_IMPL(__imp__sub_82F29E10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F29E24;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-8040
	ctx.r3.s64 = ctx.r11.s64 + -8040;
	// bl 0x82816528
	ctx.lr = 0x82F29E34;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-24840
	ctx.r3.s64 = ctx.r11.s64 + -24840;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82729a08
	ctx.lr = 0x82F29E48;
	sub_82729A08(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1492(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1492, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F29E68"))) PPC_WEAK_FUNC(sub_82F29E68);
PPC_FUNC_IMPL(__imp__sub_82F29E68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F29E7C;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-8004
	ctx.r3.s64 = ctx.r11.s64 + -8004;
	// bl 0x82816528
	ctx.lr = 0x82F29E8C;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-24832
	ctx.r3.s64 = ctx.r11.s64 + -24832;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82729a08
	ctx.lr = 0x82F29EA0;
	sub_82729A08(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1493(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1493, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F29EC0"))) PPC_WEAK_FUNC(sub_82F29EC0);
PPC_FUNC_IMPL(__imp__sub_82F29EC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F29ED4;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-7968
	ctx.r3.s64 = ctx.r11.s64 + -7968;
	// bl 0x82816528
	ctx.lr = 0x82F29EE4;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-6568
	ctx.r3.s64 = ctx.r11.s64 + -6568;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82729a08
	ctx.lr = 0x82F29EF8;
	sub_82729A08(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1494(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1494, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F29F18"))) PPC_WEAK_FUNC(sub_82F29F18);
PPC_FUNC_IMPL(__imp__sub_82F29F18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F29F2C;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-7936
	ctx.r3.s64 = ctx.r11.s64 + -7936;
	// bl 0x82816528
	ctx.lr = 0x82F29F3C;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-24720
	ctx.r3.s64 = ctx.r11.s64 + -24720;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82729a08
	ctx.lr = 0x82F29F50;
	sub_82729A08(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1495(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1495, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F29F70"))) PPC_WEAK_FUNC(sub_82F29F70);
PPC_FUNC_IMPL(__imp__sub_82F29F70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F29F84;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-7896
	ctx.r3.s64 = ctx.r11.s64 + -7896;
	// bl 0x82816528
	ctx.lr = 0x82F29F94;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-24576
	ctx.r3.s64 = ctx.r11.s64 + -24576;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82729a08
	ctx.lr = 0x82F29FA8;
	sub_82729A08(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1496(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1496, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F29FC8"))) PPC_WEAK_FUNC(sub_82F29FC8);
PPC_FUNC_IMPL(__imp__sub_82F29FC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F29FDC;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-7848
	ctx.r3.s64 = ctx.r11.s64 + -7848;
	// bl 0x82816528
	ctx.lr = 0x82F29FEC;
	sub_82816528(ctx, base);
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,5056
	ctx.r3.s64 = ctx.r11.s64 + 5056;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82729a08
	ctx.lr = 0x82F2A000;
	sub_82729A08(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1497(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1497, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2A020"))) PPC_WEAK_FUNC(sub_82F2A020);
PPC_FUNC_IMPL(__imp__sub_82F2A020) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2A034;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-7812
	ctx.r3.s64 = ctx.r11.s64 + -7812;
	// bl 0x82816528
	ctx.lr = 0x82F2A044;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,2832
	ctx.r3.s64 = ctx.r11.s64 + 2832;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82729a08
	ctx.lr = 0x82F2A058;
	sub_82729A08(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1498(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1498, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2A078"))) PPC_WEAK_FUNC(sub_82F2A078);
PPC_FUNC_IMPL(__imp__sub_82F2A078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2A08C;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-7768
	ctx.r3.s64 = ctx.r11.s64 + -7768;
	// bl 0x82816528
	ctx.lr = 0x82F2A09C;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-6568
	ctx.r3.s64 = ctx.r11.s64 + -6568;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82729a08
	ctx.lr = 0x82F2A0B0;
	sub_82729A08(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1499(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1499, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2A0D0"))) PPC_WEAK_FUNC(sub_82F2A0D0);
PPC_FUNC_IMPL(__imp__sub_82F2A0D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2A0E4;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-7728
	ctx.r3.s64 = ctx.r11.s64 + -7728;
	// bl 0x82816528
	ctx.lr = 0x82F2A0F4;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-24720
	ctx.r3.s64 = ctx.r11.s64 + -24720;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82729a08
	ctx.lr = 0x82F2A108;
	sub_82729A08(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1500(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1500, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2A128"))) PPC_WEAK_FUNC(sub_82F2A128);
PPC_FUNC_IMPL(__imp__sub_82F2A128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2A13C;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-7684
	ctx.r3.s64 = ctx.r11.s64 + -7684;
	// bl 0x82816528
	ctx.lr = 0x82F2A14C;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-24576
	ctx.r3.s64 = ctx.r11.s64 + -24576;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82729a08
	ctx.lr = 0x82F2A160;
	sub_82729A08(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1501(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1501, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2A180"))) PPC_WEAK_FUNC(sub_82F2A180);
PPC_FUNC_IMPL(__imp__sub_82F2A180) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2A194;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-7632
	ctx.r3.s64 = ctx.r11.s64 + -7632;
	// bl 0x82816528
	ctx.lr = 0x82F2A1A4;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-24840
	ctx.r3.s64 = ctx.r11.s64 + -24840;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82729a08
	ctx.lr = 0x82F2A1B8;
	sub_82729A08(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1502(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1502, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2A1D8"))) PPC_WEAK_FUNC(sub_82F2A1D8);
PPC_FUNC_IMPL(__imp__sub_82F2A1D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2A1EC;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-7592
	ctx.r3.s64 = ctx.r11.s64 + -7592;
	// bl 0x82816528
	ctx.lr = 0x82F2A1FC;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-24832
	ctx.r3.s64 = ctx.r11.s64 + -24832;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82729a08
	ctx.lr = 0x82F2A210;
	sub_82729A08(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1503(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1503, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2A230"))) PPC_WEAK_FUNC(sub_82F2A230);
PPC_FUNC_IMPL(__imp__sub_82F2A230) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// addi r3,r9,32160
	ctx.r3.s64 = ctx.r9.s64 + 32160;
	// stw r10,-19880(r11)
	PPC_STORE_U32(ctx.r11.u32 + -19880, ctx.r10.u32);
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2A248"))) PPC_WEAK_FUNC(sub_82F2A248);
PPC_FUNC_IMPL(__imp__sub_82F2A248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2A25C;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-7304
	ctx.r3.s64 = ctx.r11.s64 + -7304;
	// bl 0x82816528
	ctx.lr = 0x82F2A26C;
	sub_82816528(ctx, base);
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,5056
	ctx.r3.s64 = ctx.r11.s64 + 5056;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8272a188
	ctx.lr = 0x82F2A280;
	sub_8272A188(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1504(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1504, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2A2A0"))) PPC_WEAK_FUNC(sub_82F2A2A0);
PPC_FUNC_IMPL(__imp__sub_82F2A2A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2A2B4;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-7260
	ctx.r3.s64 = ctx.r11.s64 + -7260;
	// bl 0x82816528
	ctx.lr = 0x82F2A2C4;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,2832
	ctx.r3.s64 = ctx.r11.s64 + 2832;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8272a188
	ctx.lr = 0x82F2A2D8;
	sub_8272A188(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1505(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1505, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2A2F8"))) PPC_WEAK_FUNC(sub_82F2A2F8);
PPC_FUNC_IMPL(__imp__sub_82F2A2F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2A30C;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-7212
	ctx.r3.s64 = ctx.r11.s64 + -7212;
	// bl 0x82816528
	ctx.lr = 0x82F2A31C;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-6568
	ctx.r3.s64 = ctx.r11.s64 + -6568;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8272a188
	ctx.lr = 0x82F2A330;
	sub_8272A188(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1506(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1506, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2A350"))) PPC_WEAK_FUNC(sub_82F2A350);
PPC_FUNC_IMPL(__imp__sub_82F2A350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2A364;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-7168
	ctx.r3.s64 = ctx.r11.s64 + -7168;
	// bl 0x82816528
	ctx.lr = 0x82F2A374;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-22520
	ctx.r3.s64 = ctx.r11.s64 + -22520;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8272a188
	ctx.lr = 0x82F2A388;
	sub_8272A188(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1507(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1507, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2A3A8"))) PPC_WEAK_FUNC(sub_82F2A3A8);
PPC_FUNC_IMPL(__imp__sub_82F2A3A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2A3BC;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-7124
	ctx.r3.s64 = ctx.r11.s64 + -7124;
	// bl 0x82816528
	ctx.lr = 0x82F2A3CC;
	sub_82816528(ctx, base);
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,5056
	ctx.r3.s64 = ctx.r11.s64 + 5056;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8272a188
	ctx.lr = 0x82F2A3E0;
	sub_8272A188(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1508(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1508, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2A400"))) PPC_WEAK_FUNC(sub_82F2A400);
PPC_FUNC_IMPL(__imp__sub_82F2A400) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2A414;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-7076
	ctx.r3.s64 = ctx.r11.s64 + -7076;
	// bl 0x82816528
	ctx.lr = 0x82F2A424;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,2832
	ctx.r3.s64 = ctx.r11.s64 + 2832;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8272a188
	ctx.lr = 0x82F2A438;
	sub_8272A188(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1509(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1509, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2A458"))) PPC_WEAK_FUNC(sub_82F2A458);
PPC_FUNC_IMPL(__imp__sub_82F2A458) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2A46C;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-7024
	ctx.r3.s64 = ctx.r11.s64 + -7024;
	// bl 0x82816528
	ctx.lr = 0x82F2A47C;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-6568
	ctx.r3.s64 = ctx.r11.s64 + -6568;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8272a188
	ctx.lr = 0x82F2A490;
	sub_8272A188(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1510(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1510, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2A4B0"))) PPC_WEAK_FUNC(sub_82F2A4B0);
PPC_FUNC_IMPL(__imp__sub_82F2A4B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2A4C4;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-6972
	ctx.r3.s64 = ctx.r11.s64 + -6972;
	// bl 0x82816528
	ctx.lr = 0x82F2A4D4;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-22520
	ctx.r3.s64 = ctx.r11.s64 + -22520;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8272a188
	ctx.lr = 0x82F2A4E8;
	sub_8272A188(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1511(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1511, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2A508"))) PPC_WEAK_FUNC(sub_82F2A508);
PPC_FUNC_IMPL(__imp__sub_82F2A508) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// addi r3,r9,32272
	ctx.r3.s64 = ctx.r9.s64 + 32272;
	// stw r10,-19856(r11)
	PPC_STORE_U32(ctx.r11.u32 + -19856, ctx.r10.u32);
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2A520"))) PPC_WEAK_FUNC(sub_82F2A520);
PPC_FUNC_IMPL(__imp__sub_82F2A520) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2A534;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-6752
	ctx.r3.s64 = ctx.r11.s64 + -6752;
	// bl 0x82816528
	ctx.lr = 0x82F2A544;
	sub_82816528(ctx, base);
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,5056
	ctx.r3.s64 = ctx.r11.s64 + 5056;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8272a9b8
	ctx.lr = 0x82F2A558;
	sub_8272A9B8(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1512(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1512, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2A578"))) PPC_WEAK_FUNC(sub_82F2A578);
PPC_FUNC_IMPL(__imp__sub_82F2A578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2A58C;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-6720
	ctx.r3.s64 = ctx.r11.s64 + -6720;
	// bl 0x82816528
	ctx.lr = 0x82F2A59C;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,2832
	ctx.r3.s64 = ctx.r11.s64 + 2832;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8272a9b8
	ctx.lr = 0x82F2A5B0;
	sub_8272A9B8(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1513(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1513, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2A5D0"))) PPC_WEAK_FUNC(sub_82F2A5D0);
PPC_FUNC_IMPL(__imp__sub_82F2A5D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2A5E4;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-6684
	ctx.r3.s64 = ctx.r11.s64 + -6684;
	// bl 0x82816528
	ctx.lr = 0x82F2A5F4;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-20208
	ctx.r3.s64 = ctx.r11.s64 + -20208;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8272a9b8
	ctx.lr = 0x82F2A608;
	sub_8272A9B8(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1514(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1514, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2A628"))) PPC_WEAK_FUNC(sub_82F2A628);
PPC_FUNC_IMPL(__imp__sub_82F2A628) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2A63C;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-6652
	ctx.r3.s64 = ctx.r11.s64 + -6652;
	// bl 0x82816528
	ctx.lr = 0x82F2A64C;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-20000
	ctx.r3.s64 = ctx.r11.s64 + -20000;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8272a9b8
	ctx.lr = 0x82F2A660;
	sub_8272A9B8(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1515(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1515, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2A680"))) PPC_WEAK_FUNC(sub_82F2A680);
PPC_FUNC_IMPL(__imp__sub_82F2A680) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2A694;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-6620
	ctx.r3.s64 = ctx.r11.s64 + -6620;
	// bl 0x82816528
	ctx.lr = 0x82F2A6A4;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-19872
	ctx.r3.s64 = ctx.r11.s64 + -19872;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8272a9b8
	ctx.lr = 0x82F2A6B8;
	sub_8272A9B8(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1516(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1516, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2A6D8"))) PPC_WEAK_FUNC(sub_82F2A6D8);
PPC_FUNC_IMPL(__imp__sub_82F2A6D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2A6EC;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-6588
	ctx.r3.s64 = ctx.r11.s64 + -6588;
	// bl 0x82816528
	ctx.lr = 0x82F2A6FC;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-19648
	ctx.r3.s64 = ctx.r11.s64 + -19648;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8272a9b8
	ctx.lr = 0x82F2A710;
	sub_8272A9B8(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1517(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1517, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2A730"))) PPC_WEAK_FUNC(sub_82F2A730);
PPC_FUNC_IMPL(__imp__sub_82F2A730) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2A744;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-6556
	ctx.r3.s64 = ctx.r11.s64 + -6556;
	// bl 0x82816528
	ctx.lr = 0x82F2A754;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-19872
	ctx.r3.s64 = ctx.r11.s64 + -19872;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8272a9b8
	ctx.lr = 0x82F2A768;
	sub_8272A9B8(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1518(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1518, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2A788"))) PPC_WEAK_FUNC(sub_82F2A788);
PPC_FUNC_IMPL(__imp__sub_82F2A788) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2A79C;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-6520
	ctx.r3.s64 = ctx.r11.s64 + -6520;
	// bl 0x82816528
	ctx.lr = 0x82F2A7AC;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-19424
	ctx.r3.s64 = ctx.r11.s64 + -19424;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8272a9b8
	ctx.lr = 0x82F2A7C0;
	sub_8272A9B8(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1519(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1519, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2A7E0"))) PPC_WEAK_FUNC(sub_82F2A7E0);
PPC_FUNC_IMPL(__imp__sub_82F2A7E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2A7F4;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-6484
	ctx.r3.s64 = ctx.r11.s64 + -6484;
	// bl 0x82816528
	ctx.lr = 0x82F2A804;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-19184
	ctx.r3.s64 = ctx.r11.s64 + -19184;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8272a9b8
	ctx.lr = 0x82F2A818;
	sub_8272A9B8(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1520(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1520, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

