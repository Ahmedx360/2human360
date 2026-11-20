#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82F587E8"))) PPC_WEAK_FUNC(sub_82F587E8);
PPC_FUNC_IMPL(__imp__sub_82F587E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82F587F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// li r5,224
	ctx.r5.s64 = 224;
	// addi r31,r10,11848
	ctx.r31.s64 = ctx.r10.s64 + 11848;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,16688(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16688);
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82F58818;
	sub_82A4EFB0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r11,r11,-2512
	ctx.r11.s64 = ctx.r11.s64 + -2512;
	// addi r10,r10,-2496
	ctx.r10.s64 = ctx.r10.s64 + -2496;
	// lis r8,-32234
	ctx.r8.s64 = -2112487424;
	// stw r11,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
	// lis r7,-32234
	ctx.r7.s64 = -2112487424;
	// stw r10,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r10.u32);
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// addi r11,r8,-992
	ctx.r11.s64 = ctx.r8.s64 + -992;
	// addi r9,r9,-1004
	ctx.r9.s64 = ctx.r9.s64 + -1004;
	// addi r10,r7,-980
	ctx.r10.s64 = ctx.r7.s64 + -980;
	// stw r11,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r11.u32);
	// lis r6,-32234
	ctx.r6.s64 = -2112487424;
	// stw r9,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r9.u32);
	// lis r5,-32234
	ctx.r5.s64 = -2112487424;
	// stw r10,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r10.u32);
	// lis r4,-32234
	ctx.r4.s64 = -2112487424;
	// addi r11,r5,-956
	ctx.r11.s64 = ctx.r5.s64 + -956;
	// addi r10,r4,-948
	ctx.r10.s64 = ctx.r4.s64 + -948;
	// addi r9,r6,-968
	ctx.r9.s64 = ctx.r6.s64 + -968;
	// stw r11,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r11.u32);
	// li r5,224
	ctx.r5.s64 = 224;
	// stw r10,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r9,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r9.u32);
	// addi r3,r31,316
	ctx.r3.s64 = ctx.r31.s64 + 316;
	// bl 0x82a4efb0
	ctx.lr = 0x82F58888;
	sub_82A4EFB0(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r9,-31948
	ctx.r9.s64 = -2093744128;
	// lis r8,-31948
	ctx.r8.s64 = -2093744128;
	// lis r7,-31948
	ctx.r7.s64 = -2093744128;
	// lis r6,-31948
	ctx.r6.s64 = -2093744128;
	// lwz r11,15920(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15920);
	// lis r30,-31948
	ctx.r30.s64 = -2093744128;
	// lwz r10,16008(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16008);
	// lis r29,-31948
	ctx.r29.s64 = -2093744128;
	// lwz r9,16360(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16360);
	// lwz r8,16592(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16592);
	// li r5,224
	ctx.r5.s64 = 224;
	// lwz r7,16144(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16144);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r6,16976(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16976);
	// addi r3,r31,572
	ctx.r3.s64 = ctx.r31.s64 + 572;
	// lwz r30,16028(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16028);
	// lwz r29,16380(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16380);
	// stw r11,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r11.u32);
	// stw r10,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r10.u32);
	// stw r9,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r9.u32);
	// stw r8,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r8.u32);
	// stw r7,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r7.u32);
	// stw r6,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r6.u32);
	// stw r30,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r30.u32);
	// stw r29,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r29.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82F588F8;
	sub_82A4EFB0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r11,796(r31)
	PPC_STORE_U8(ctx.r31.u32 + 796, ctx.r11.u8);
	// li r11,3
	ctx.r11.s64 = 3;
	// li r9,5
	ctx.r9.s64 = 5;
	// stb r10,798(r31)
	PPC_STORE_U8(ctx.r31.u32 + 798, ctx.r10.u8);
	// stb r11,797(r31)
	PPC_STORE_U8(ctx.r31.u32 + 797, ctx.r11.u8);
	// li r11,6
	ctx.r11.s64 = 6;
	// stb r9,799(r31)
	PPC_STORE_U8(ctx.r31.u32 + 799, ctx.r9.u8);
	// li r5,56
	ctx.r5.s64 = 56;
	// stb r11,800(r31)
	PPC_STORE_U8(ctx.r31.u32 + 800, ctx.r11.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,804
	ctx.r3.s64 = ctx.r31.s64 + 804;
	// li r10,7
	ctx.r10.s64 = 7;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r10,801(r31)
	PPC_STORE_U8(ctx.r31.u32 + 801, ctx.r10.u8);
	// stb r9,802(r31)
	PPC_STORE_U8(ctx.r31.u32 + 802, ctx.r9.u8);
	// stb r11,803(r31)
	PPC_STORE_U8(ctx.r31.u32 + 803, ctx.r11.u8);
	// bl 0x82a4efb0
	ctx.lr = 0x82F58948;
	sub_82A4EFB0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 860, ctx.r11.u32);
	// li r9,18
	ctx.r9.s64 = 18;
	// stw r10,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r10.u32);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r10,10
	ctx.r10.s64 = 10;
	// stw r9,868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 868, ctx.r9.u32);
	// stw r11,872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 872, ctx.r11.u32);
	// li r9,14
	ctx.r9.s64 = 14;
	// stw r10,876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 876, ctx.r10.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r9,880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 880, ctx.r9.u32);
	// li r5,224
	ctx.r5.s64 = 224;
	// stw r11,884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 884, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 888, ctx.r10.u32);
	// addi r3,r31,892
	ctx.r3.s64 = ctx.r31.s64 + 892;
	// bl 0x82a4efb0
	ctx.lr = 0x82F58998;
	sub_82A4EFB0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r31,1116
	ctx.r11.s64 = ctx.r31.s64 + 1116;
	// stw r10,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F589B0"))) PPC_WEAK_FUNC(sub_82F589B0);
PPC_FUNC_IMPL(__imp__sub_82F589B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// li r5,240
	ctx.r5.s64 = 240;
	// addi r31,r10,15208
	ctx.r31.s64 = ctx.r10.s64 + 15208;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,16328(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16328);
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82F589E4;
	sub_82A4EFB0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r8,-32234
	ctx.r8.s64 = -2112487424;
	// addi r11,r11,-2488
	ctx.r11.s64 = ctx.r11.s64 + -2488;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// stw r11,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
	// addi r10,r10,-940
	ctx.r10.s64 = ctx.r10.s64 + -940;
	// addi r9,r9,-928
	ctx.r9.s64 = ctx.r9.s64 + -928;
	// addi r11,r8,-916
	ctx.r11.s64 = ctx.r8.s64 + -916;
	// stw r10,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r10.u32);
	// li r5,240
	ctx.r5.s64 = 240;
	// stw r9,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r9.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r11.u32);
	// addi r3,r31,300
	ctx.r3.s64 = ctx.r31.s64 + 300;
	// bl 0x82a4efb0
	ctx.lr = 0x82F58A24;
	sub_82A4EFB0(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r9,-31948
	ctx.r9.s64 = -2093744128;
	// lis r8,-31948
	ctx.r8.s64 = -2093744128;
	// li r5,240
	ctx.r5.s64 = 240;
	// lwz r11,16172(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16172);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,17080(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17080);
	// addi r3,r31,556
	ctx.r3.s64 = ctx.r31.s64 + 556;
	// lwz r9,16752(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16752);
	// lwz r8,16988(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16988);
	// stw r11,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r11.u32);
	// stw r10,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r10.u32);
	// stw r9,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r9.u32);
	// stw r8,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r8.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82F58A64;
	sub_82A4EFB0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,796(r31)
	PPC_STORE_U8(ctx.r31.u32 + 796, ctx.r11.u8);
	// li r9,2
	ctx.r9.s64 = 2;
	// li r11,3
	ctx.r11.s64 = 3;
	// stb r10,797(r31)
	PPC_STORE_U8(ctx.r31.u32 + 797, ctx.r10.u8);
	// li r5,60
	ctx.r5.s64 = 60;
	// stb r9,798(r31)
	PPC_STORE_U8(ctx.r31.u32 + 798, ctx.r9.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r11,799(r31)
	PPC_STORE_U8(ctx.r31.u32 + 799, ctx.r11.u8);
	// addi r3,r31,800
	ctx.r3.s64 = ctx.r31.s64 + 800;
	// bl 0x82a4efb0
	ctx.lr = 0x82F58A94;
	sub_82A4EFB0(ctx, base);
	// li r11,84
	ctx.r11.s64 = 84;
	// li r10,28
	ctx.r10.s64 = 28;
	// stw r11,860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 860, ctx.r11.u32);
	// li r9,56
	ctx.r9.s64 = 56;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r10.u32);
	// li r5,240
	ctx.r5.s64 = 240;
	// stw r9,868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 868, ctx.r9.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 872, ctx.r11.u32);
	// addi r3,r31,876
	ctx.r3.s64 = ctx.r31.s64 + 876;
	// bl 0x82a4efb0
	ctx.lr = 0x82F58AC4;
	sub_82A4EFB0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r31,1116
	ctx.r11.s64 = ctx.r31.s64 + 1116;
	// stw r10,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F58AE8"))) PPC_WEAK_FUNC(sub_82F58AE8);
PPC_FUNC_IMPL(__imp__sub_82F58AE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// li r5,240
	ctx.r5.s64 = 240;
	// addi r31,r10,-4952
	ctx.r31.s64 = ctx.r10.s64 + -4952;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,16196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16196);
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82F58B1C;
	sub_82A4EFB0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r8,-32234
	ctx.r8.s64 = -2112487424;
	// addi r11,r11,-2488
	ctx.r11.s64 = ctx.r11.s64 + -2488;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// stw r11,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
	// addi r10,r10,-940
	ctx.r10.s64 = ctx.r10.s64 + -940;
	// addi r9,r9,-928
	ctx.r9.s64 = ctx.r9.s64 + -928;
	// addi r11,r8,-916
	ctx.r11.s64 = ctx.r8.s64 + -916;
	// stw r10,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r10.u32);
	// li r5,240
	ctx.r5.s64 = 240;
	// stw r9,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r9.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r11.u32);
	// addi r3,r31,300
	ctx.r3.s64 = ctx.r31.s64 + 300;
	// bl 0x82a4efb0
	ctx.lr = 0x82F58B5C;
	sub_82A4EFB0(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r9,-31948
	ctx.r9.s64 = -2093744128;
	// lis r8,-31948
	ctx.r8.s64 = -2093744128;
	// li r5,240
	ctx.r5.s64 = 240;
	// lwz r11,16804(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16804);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,16228(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16228);
	// addi r3,r31,556
	ctx.r3.s64 = ctx.r31.s64 + 556;
	// lwz r9,16184(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16184);
	// lwz r8,16840(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16840);
	// stw r11,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r11.u32);
	// stw r10,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r10.u32);
	// stw r9,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r9.u32);
	// stw r8,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r8.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82F58B9C;
	sub_82A4EFB0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,796(r31)
	PPC_STORE_U8(ctx.r31.u32 + 796, ctx.r11.u8);
	// li r9,2
	ctx.r9.s64 = 2;
	// li r11,3
	ctx.r11.s64 = 3;
	// stb r10,797(r31)
	PPC_STORE_U8(ctx.r31.u32 + 797, ctx.r10.u8);
	// li r5,60
	ctx.r5.s64 = 60;
	// stb r9,798(r31)
	PPC_STORE_U8(ctx.r31.u32 + 798, ctx.r9.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r11,799(r31)
	PPC_STORE_U8(ctx.r31.u32 + 799, ctx.r11.u8);
	// addi r3,r31,800
	ctx.r3.s64 = ctx.r31.s64 + 800;
	// bl 0x82a4efb0
	ctx.lr = 0x82F58BCC;
	sub_82A4EFB0(ctx, base);
	// li r11,84
	ctx.r11.s64 = 84;
	// li r10,28
	ctx.r10.s64 = 28;
	// stw r11,860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 860, ctx.r11.u32);
	// li r9,56
	ctx.r9.s64 = 56;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r10.u32);
	// li r5,240
	ctx.r5.s64 = 240;
	// stw r9,868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 868, ctx.r9.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 872, ctx.r11.u32);
	// addi r3,r31,876
	ctx.r3.s64 = ctx.r31.s64 + 876;
	// bl 0x82a4efb0
	ctx.lr = 0x82F58BFC;
	sub_82A4EFB0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r31,1116
	ctx.r11.s64 = ctx.r31.s64 + 1116;
	// stw r10,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F58C20"))) PPC_WEAK_FUNC(sub_82F58C20);
PPC_FUNC_IMPL(__imp__sub_82F58C20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f4
	ctx.lr = 0x82F58C28;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// li r5,200
	ctx.r5.s64 = 200;
	// addi r31,r10,10728
	ctx.r31.s64 = ctx.r10.s64 + 10728;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,16560(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16560);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82F58C50;
	sub_82A4EFB0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r11,r11,-2512
	ctx.r11.s64 = ctx.r11.s64 + -2512;
	// addi r10,r10,-2496
	ctx.r10.s64 = ctx.r10.s64 + -2496;
	// lis r8,-32234
	ctx.r8.s64 = -2112487424;
	// stw r11,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
	// lis r7,-32234
	ctx.r7.s64 = -2112487424;
	// stw r10,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r10.u32);
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// addi r11,r8,-888
	ctx.r11.s64 = ctx.r8.s64 + -888;
	// addi r9,r9,-904
	ctx.r9.s64 = ctx.r9.s64 + -904;
	// addi r10,r7,-880
	ctx.r10.s64 = ctx.r7.s64 + -880;
	// stw r11,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r11.u32);
	// lis r6,-32234
	ctx.r6.s64 = -2112487424;
	// stw r9,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r9.u32);
	// lis r5,-32234
	ctx.r5.s64 = -2112487424;
	// stw r10,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r10.u32);
	// lis r4,-32234
	ctx.r4.s64 = -2112487424;
	// addi r11,r5,-868
	ctx.r11.s64 = ctx.r5.s64 + -868;
	// addi r10,r4,-856
	ctx.r10.s64 = ctx.r4.s64 + -856;
	// addi r9,r6,-2488
	ctx.r9.s64 = ctx.r6.s64 + -2488;
	// stw r11,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r11.u32);
	// lis r3,-32234
	ctx.r3.s64 = -2112487424;
	// stw r10,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r10.u32);
	// lis r30,-32234
	ctx.r30.s64 = -2112487424;
	// stw r9,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r9.u32);
	// lis r29,-32234
	ctx.r29.s64 = -2112487424;
	// addi r9,r3,-840
	ctx.r9.s64 = ctx.r3.s64 + -840;
	// addi r11,r30,-2152
	ctx.r11.s64 = ctx.r30.s64 + -2152;
	// addi r10,r29,-828
	ctx.r10.s64 = ctx.r29.s64 + -828;
	// stw r9,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r9.u32);
	// lis r28,-32234
	ctx.r28.s64 = -2112487424;
	// stw r11,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r11.u32);
	// lis r27,-32234
	ctx.r27.s64 = -2112487424;
	// stw r10,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r10.u32);
	// lis r26,-32234
	ctx.r26.s64 = -2112487424;
	// addi r9,r28,-816
	ctx.r9.s64 = ctx.r28.s64 + -816;
	// addi r11,r27,-808
	ctx.r11.s64 = ctx.r27.s64 + -808;
	// addi r10,r26,-800
	ctx.r10.s64 = ctx.r26.s64 + -800;
	// stw r9,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r9.u32);
	// li r5,200
	ctx.r5.s64 = 200;
	// stw r11,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r10.u32);
	// addi r3,r31,340
	ctx.r3.s64 = ctx.r31.s64 + 340;
	// bl 0x82a4efb0
	ctx.lr = 0x82F58D08;
	sub_82A4EFB0(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r9,-31948
	ctx.r9.s64 = -2093744128;
	// lis r8,-31948
	ctx.r8.s64 = -2093744128;
	// lis r7,-31948
	ctx.r7.s64 = -2093744128;
	// lwz r11,16268(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16268);
	// lis r6,-31948
	ctx.r6.s64 = -2093744128;
	// lwz r10,16088(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16088);
	// li r5,200
	ctx.r5.s64 = 200;
	// lwz r9,16260(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16260);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r8,16364(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16364);
	// addi r3,r31,596
	ctx.r3.s64 = ctx.r31.s64 + 596;
	// lwz r7,17024(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 17024);
	// lis r30,-31948
	ctx.r30.s64 = -2093744128;
	// lwz r6,16756(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16756);
	// lis r29,-31948
	ctx.r29.s64 = -2093744128;
	// stw r11,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r11.u32);
	// lis r28,-31948
	ctx.r28.s64 = -2093744128;
	// stw r10,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r10.u32);
	// lis r27,-31948
	ctx.r27.s64 = -2093744128;
	// stw r9,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r9.u32);
	// lis r26,-31948
	ctx.r26.s64 = -2093744128;
	// stw r8,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r8.u32);
	// lis r25,-31948
	ctx.r25.s64 = -2093744128;
	// stw r7,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r7.u32);
	// lis r24,-31948
	ctx.r24.s64 = -2093744128;
	// lwz r11,16936(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16936);
	// lis r23,-31948
	ctx.r23.s64 = -2093744128;
	// lwz r10,17112(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 17112);
	// lwz r9,16120(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16120);
	// lwz r8,15904(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 15904);
	// lwz r7,16064(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16064);
	// lwz r30,16028(r25)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16028);
	// lwz r29,15948(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 15948);
	// lwz r28,16380(r23)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16380);
	// stw r6,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r6.u32);
	// stw r11,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r11.u32);
	// stw r10,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r10.u32);
	// stw r9,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r9.u32);
	// stw r8,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r8.u32);
	// stw r7,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r7.u32);
	// stw r30,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r30.u32);
	// stw r29,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r29.u32);
	// stw r28,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r28.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82F58DC0;
	sub_82A4EFB0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r11,796(r31)
	PPC_STORE_U8(ctx.r31.u32 + 796, ctx.r11.u8);
	// li r9,4
	ctx.r9.s64 = 4;
	// stb r10,797(r31)
	PPC_STORE_U8(ctx.r31.u32 + 797, ctx.r10.u8);
	// li r11,5
	ctx.r11.s64 = 5;
	// li r10,6
	ctx.r10.s64 = 6;
	// stb r9,798(r31)
	PPC_STORE_U8(ctx.r31.u32 + 798, ctx.r9.u8);
	// stb r11,799(r31)
	PPC_STORE_U8(ctx.r31.u32 + 799, ctx.r11.u8);
	// li r9,7
	ctx.r9.s64 = 7;
	// stb r10,800(r31)
	PPC_STORE_U8(ctx.r31.u32 + 800, ctx.r10.u8);
	// li r11,8
	ctx.r11.s64 = 8;
	// li r10,9
	ctx.r10.s64 = 9;
	// stb r9,801(r31)
	PPC_STORE_U8(ctx.r31.u32 + 801, ctx.r9.u8);
	// stb r11,802(r31)
	PPC_STORE_U8(ctx.r31.u32 + 802, ctx.r11.u8);
	// li r9,10
	ctx.r9.s64 = 10;
	// stb r10,803(r31)
	PPC_STORE_U8(ctx.r31.u32 + 803, ctx.r10.u8);
	// li r11,11
	ctx.r11.s64 = 11;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r9,804(r31)
	PPC_STORE_U8(ctx.r31.u32 + 804, ctx.r9.u8);
	// stb r11,805(r31)
	PPC_STORE_U8(ctx.r31.u32 + 805, ctx.r11.u8);
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r10,806(r31)
	PPC_STORE_U8(ctx.r31.u32 + 806, ctx.r10.u8);
	// li r11,13
	ctx.r11.s64 = 13;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r9,807(r31)
	PPC_STORE_U8(ctx.r31.u32 + 807, ctx.r9.u8);
	// li r5,50
	ctx.r5.s64 = 50;
	// stb r11,808(r31)
	PPC_STORE_U8(ctx.r31.u32 + 808, ctx.r11.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r10,809(r31)
	PPC_STORE_U8(ctx.r31.u32 + 809, ctx.r10.u8);
	// addi r3,r31,810
	ctx.r3.s64 = ctx.r31.s64 + 810;
	// bl 0x82a4efb0
	ctx.lr = 0x82F58E40;
	sub_82A4EFB0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,14
	ctx.r10.s64 = 14;
	// stw r11,860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 860, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 868, ctx.r10.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r11,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r11.u32);
	// li r11,38
	ctx.r11.s64 = 38;
	// li r10,66
	ctx.r10.s64 = 66;
	// stw r9,876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 876, ctx.r9.u32);
	// stw r11,872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 872, ctx.r11.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r9,6
	ctx.r9.s64 = 6;
	// stw r10,880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 880, ctx.r10.u32);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r11,884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 884, ctx.r11.u32);
	// stw r9,888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 888, ctx.r9.u32);
	// li r11,18
	ctx.r11.s64 = 18;
	// li r9,10
	ctx.r9.s64 = 10;
	// stw r10,892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 892, ctx.r10.u32);
	// li r10,22
	ctx.r10.s64 = 22;
	// stw r11,896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 896, ctx.r11.u32);
	// stw r9,900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 900, ctx.r9.u32);
	// li r5,200
	ctx.r5.s64 = 200;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 904, ctx.r10.u32);
	// addi r3,r31,916
	ctx.r3.s64 = ctx.r31.s64 + 916;
	// li r11,30
	ctx.r11.s64 = 30;
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r11,908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 908, ctx.r11.u32);
	// stw r9,912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 912, ctx.r9.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82F58EC0;
	sub_82A4EFB0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r31,1116
	ctx.r11.s64 = ctx.r31.s64 + 1116;
	// stw r10,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F58ED8"))) PPC_WEAK_FUNC(sub_82F58ED8);
PPC_FUNC_IMPL(__imp__sub_82F58ED8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f0
	ctx.lr = 0x82F58EE0;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// li r5,196
	ctx.r5.s64 = 196;
	// addi r31,r10,21928
	ctx.r31.s64 = ctx.r10.s64 + 21928;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,16680(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16680);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82F58F08;
	sub_82A4EFB0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// addi r11,r11,-2512
	ctx.r11.s64 = ctx.r11.s64 + -2512;
	// addi r10,r10,-2496
	ctx.r10.s64 = ctx.r10.s64 + -2496;
	// addi r9,r9,-904
	ctx.r9.s64 = ctx.r9.s64 + -904;
	// stw r11,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
	// lis r8,-32234
	ctx.r8.s64 = -2112487424;
	// stw r10,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r10.u32);
	// lis r7,-32234
	ctx.r7.s64 = -2112487424;
	// stw r9,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r9.u32);
	// lis r6,-32234
	ctx.r6.s64 = -2112487424;
	// addi r11,r8,-888
	ctx.r11.s64 = ctx.r8.s64 + -888;
	// addi r10,r7,-880
	ctx.r10.s64 = ctx.r7.s64 + -880;
	// addi r9,r6,-2488
	ctx.r9.s64 = ctx.r6.s64 + -2488;
	// stw r11,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r11.u32);
	// lis r5,-32234
	ctx.r5.s64 = -2112487424;
	// stw r10,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r10.u32);
	// lis r4,-32234
	ctx.r4.s64 = -2112487424;
	// stw r9,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r9.u32);
	// lis r3,-32234
	ctx.r3.s64 = -2112487424;
	// addi r11,r5,-868
	ctx.r11.s64 = ctx.r5.s64 + -868;
	// addi r10,r4,-856
	ctx.r10.s64 = ctx.r4.s64 + -856;
	// addi r9,r3,-840
	ctx.r9.s64 = ctx.r3.s64 + -840;
	// stw r11,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r11.u32);
	// lis r30,-32234
	ctx.r30.s64 = -2112487424;
	// stw r10,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r10.u32);
	// lis r29,-32234
	ctx.r29.s64 = -2112487424;
	// stw r9,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r9.u32);
	// lis r28,-32234
	ctx.r28.s64 = -2112487424;
	// addi r11,r30,-2152
	ctx.r11.s64 = ctx.r30.s64 + -2152;
	// addi r10,r29,-828
	ctx.r10.s64 = ctx.r29.s64 + -828;
	// addi r9,r28,-816
	ctx.r9.s64 = ctx.r28.s64 + -816;
	// stw r11,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r11.u32);
	// lis r27,-32234
	ctx.r27.s64 = -2112487424;
	// stw r10,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r10.u32);
	// lis r26,-32234
	ctx.r26.s64 = -2112487424;
	// stw r9,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r9.u32);
	// lis r25,-32234
	ctx.r25.s64 = -2112487424;
	// addi r11,r27,-808
	ctx.r11.s64 = ctx.r27.s64 + -808;
	// addi r10,r26,-800
	ctx.r10.s64 = ctx.r26.s64 + -800;
	// addi r9,r25,-792
	ctx.r9.s64 = ctx.r25.s64 + -792;
	// stw r11,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r11.u32);
	// li r5,196
	ctx.r5.s64 = 196;
	// stw r10,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r9,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r9.u32);
	// addi r3,r31,344
	ctx.r3.s64 = ctx.r31.s64 + 344;
	// bl 0x82a4efb0
	ctx.lr = 0x82F58FCC;
	sub_82A4EFB0(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r9,-31948
	ctx.r9.s64 = -2093744128;
	// lis r8,-31948
	ctx.r8.s64 = -2093744128;
	// lis r7,-31948
	ctx.r7.s64 = -2093744128;
	// lwz r11,16268(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16268);
	// li r5,196
	ctx.r5.s64 = 196;
	// lwz r10,16088(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16088);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r9,16260(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16260);
	// addi r3,r31,600
	ctx.r3.s64 = ctx.r31.s64 + 600;
	// lwz r8,16364(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16364);
	// lis r6,-31948
	ctx.r6.s64 = -2093744128;
	// lwz r7,17024(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 17024);
	// lis r30,-31948
	ctx.r30.s64 = -2093744128;
	// stw r11,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r11.u32);
	// lis r29,-31948
	ctx.r29.s64 = -2093744128;
	// stw r10,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r10.u32);
	// lis r28,-31948
	ctx.r28.s64 = -2093744128;
	// stw r9,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r9.u32);
	// lis r27,-31948
	ctx.r27.s64 = -2093744128;
	// stw r8,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r8.u32);
	// stw r7,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r7.u32);
	// lis r26,-31948
	ctx.r26.s64 = -2093744128;
	// lwz r11,16756(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16756);
	// lis r25,-31948
	ctx.r25.s64 = -2093744128;
	// lwz r10,16936(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16936);
	// lis r24,-31948
	ctx.r24.s64 = -2093744128;
	// lwz r9,17112(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 17112);
	// lis r23,-31948
	ctx.r23.s64 = -2093744128;
	// lwz r8,17044(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 17044);
	// lis r22,-31948
	ctx.r22.s64 = -2093744128;
	// lwz r7,16120(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16120);
	// lwz r6,15904(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 15904);
	// lwz r30,16064(r25)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16064);
	// lwz r29,16028(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16028);
	// lwz r28,15948(r23)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r23.u32 + 15948);
	// lwz r27,16380(r22)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r22.u32 + 16380);
	// stw r11,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r11.u32);
	// stw r10,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r10.u32);
	// stw r9,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r9.u32);
	// stw r8,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r8.u32);
	// stw r7,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r7.u32);
	// stw r6,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r6.u32);
	// stw r30,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r30.u32);
	// stw r29,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r29.u32);
	// stw r28,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r28.u32);
	// stw r27,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r27.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82F59090;
	sub_82A4EFB0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,4
	ctx.r9.s64 = 4;
	// stb r11,796(r31)
	PPC_STORE_U8(ctx.r31.u32 + 796, ctx.r11.u8);
	// stb r10,797(r31)
	PPC_STORE_U8(ctx.r31.u32 + 797, ctx.r10.u8);
	// li r11,5
	ctx.r11.s64 = 5;
	// stb r9,798(r31)
	PPC_STORE_U8(ctx.r31.u32 + 798, ctx.r9.u8);
	// li r10,6
	ctx.r10.s64 = 6;
	// li r9,7
	ctx.r9.s64 = 7;
	// stb r11,799(r31)
	PPC_STORE_U8(ctx.r31.u32 + 799, ctx.r11.u8);
	// stb r10,800(r31)
	PPC_STORE_U8(ctx.r31.u32 + 800, ctx.r10.u8);
	// li r11,8
	ctx.r11.s64 = 8;
	// stb r9,801(r31)
	PPC_STORE_U8(ctx.r31.u32 + 801, ctx.r9.u8);
	// li r10,9
	ctx.r10.s64 = 9;
	// li r9,14
	ctx.r9.s64 = 14;
	// stb r11,802(r31)
	PPC_STORE_U8(ctx.r31.u32 + 802, ctx.r11.u8);
	// stb r10,803(r31)
	PPC_STORE_U8(ctx.r31.u32 + 803, ctx.r10.u8);
	// li r11,10
	ctx.r11.s64 = 10;
	// stb r9,804(r31)
	PPC_STORE_U8(ctx.r31.u32 + 804, ctx.r9.u8);
	// li r10,11
	ctx.r10.s64 = 11;
	// li r9,12
	ctx.r9.s64 = 12;
	// stb r11,805(r31)
	PPC_STORE_U8(ctx.r31.u32 + 805, ctx.r11.u8);
	// stb r10,806(r31)
	PPC_STORE_U8(ctx.r31.u32 + 806, ctx.r10.u8);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r9,807(r31)
	PPC_STORE_U8(ctx.r31.u32 + 807, ctx.r9.u8);
	// li r10,13
	ctx.r10.s64 = 13;
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r11,808(r31)
	PPC_STORE_U8(ctx.r31.u32 + 808, ctx.r11.u8);
	// li r5,49
	ctx.r5.s64 = 49;
	// stb r10,809(r31)
	PPC_STORE_U8(ctx.r31.u32 + 809, ctx.r10.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r9,810(r31)
	PPC_STORE_U8(ctx.r31.u32 + 810, ctx.r9.u8);
	// addi r3,r31,811
	ctx.r3.s64 = ctx.r31.s64 + 811;
	// bl 0x82a4efb0
	ctx.lr = 0x82F59118;
	sub_82A4EFB0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,18
	ctx.r9.s64 = 18;
	// stw r11,860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 860, ctx.r11.u32);
	// stw r10,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r10.u32);
	// li r11,42
	ctx.r11.s64 = 42;
	// stw r9,868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 868, ctx.r9.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r9,70
	ctx.r9.s64 = 70;
	// stw r11,872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 872, ctx.r11.u32);
	// stw r10,876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 876, ctx.r10.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r9,880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 880, ctx.r9.u32);
	// li r10,6
	ctx.r10.s64 = 6;
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r11,884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 884, ctx.r11.u32);
	// stw r10,888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 888, ctx.r10.u32);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r9,892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 892, ctx.r9.u32);
	// li r10,10
	ctx.r10.s64 = 10;
	// li r9,26
	ctx.r9.s64 = 26;
	// stw r11,896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 896, ctx.r11.u32);
	// li r11,34
	ctx.r11.s64 = 34;
	// stw r10,900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 900, ctx.r10.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r9,904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 904, ctx.r9.u32);
	// li r9,14
	ctx.r9.s64 = 14;
	// li r5,196
	ctx.r5.s64 = 196;
	// stw r11,908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 908, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 912, ctx.r10.u32);
	// addi r3,r31,920
	ctx.r3.s64 = ctx.r31.s64 + 920;
	// stw r9,916(r31)
	PPC_STORE_U32(ctx.r31.u32 + 916, ctx.r9.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82F591A0;
	sub_82A4EFB0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r31,1116
	ctx.r11.s64 = ctx.r31.s64 + 1116;
	// stw r10,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F591B8"))) PPC_WEAK_FUNC(sub_82F591B8);
PPC_FUNC_IMPL(__imp__sub_82F591B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f0
	ctx.lr = 0x82F591C0;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// li r5,196
	ctx.r5.s64 = 196;
	// addi r31,r10,18568
	ctx.r31.s64 = ctx.r10.s64 + 18568;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,16136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16136);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82F591E8;
	sub_82A4EFB0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// addi r11,r11,-2512
	ctx.r11.s64 = ctx.r11.s64 + -2512;
	// addi r10,r10,-2496
	ctx.r10.s64 = ctx.r10.s64 + -2496;
	// addi r9,r9,-904
	ctx.r9.s64 = ctx.r9.s64 + -904;
	// stw r11,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
	// lis r8,-32234
	ctx.r8.s64 = -2112487424;
	// stw r10,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r10.u32);
	// lis r7,-32234
	ctx.r7.s64 = -2112487424;
	// stw r9,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r9.u32);
	// lis r6,-32234
	ctx.r6.s64 = -2112487424;
	// addi r11,r8,-888
	ctx.r11.s64 = ctx.r8.s64 + -888;
	// addi r10,r7,-880
	ctx.r10.s64 = ctx.r7.s64 + -880;
	// addi r9,r6,-2488
	ctx.r9.s64 = ctx.r6.s64 + -2488;
	// stw r11,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r11.u32);
	// lis r5,-32234
	ctx.r5.s64 = -2112487424;
	// stw r10,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r10.u32);
	// lis r4,-32234
	ctx.r4.s64 = -2112487424;
	// stw r9,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r9.u32);
	// lis r3,-32234
	ctx.r3.s64 = -2112487424;
	// addi r11,r5,-868
	ctx.r11.s64 = ctx.r5.s64 + -868;
	// addi r10,r4,-856
	ctx.r10.s64 = ctx.r4.s64 + -856;
	// addi r9,r3,-840
	ctx.r9.s64 = ctx.r3.s64 + -840;
	// stw r11,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r11.u32);
	// lis r30,-32234
	ctx.r30.s64 = -2112487424;
	// stw r10,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r10.u32);
	// lis r29,-32234
	ctx.r29.s64 = -2112487424;
	// stw r9,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r9.u32);
	// lis r28,-32234
	ctx.r28.s64 = -2112487424;
	// addi r11,r30,-2152
	ctx.r11.s64 = ctx.r30.s64 + -2152;
	// addi r10,r29,-828
	ctx.r10.s64 = ctx.r29.s64 + -828;
	// addi r9,r28,-816
	ctx.r9.s64 = ctx.r28.s64 + -816;
	// stw r11,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r11.u32);
	// lis r27,-32234
	ctx.r27.s64 = -2112487424;
	// stw r10,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r10.u32);
	// lis r26,-32234
	ctx.r26.s64 = -2112487424;
	// stw r9,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r9.u32);
	// lis r25,-32234
	ctx.r25.s64 = -2112487424;
	// addi r11,r27,-808
	ctx.r11.s64 = ctx.r27.s64 + -808;
	// addi r10,r26,-800
	ctx.r10.s64 = ctx.r26.s64 + -800;
	// addi r9,r25,-772
	ctx.r9.s64 = ctx.r25.s64 + -772;
	// stw r11,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r11.u32);
	// li r5,196
	ctx.r5.s64 = 196;
	// stw r10,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r9,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r9.u32);
	// addi r3,r31,344
	ctx.r3.s64 = ctx.r31.s64 + 344;
	// bl 0x82a4efb0
	ctx.lr = 0x82F592AC;
	sub_82A4EFB0(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r9,-31948
	ctx.r9.s64 = -2093744128;
	// lis r8,-31948
	ctx.r8.s64 = -2093744128;
	// lis r7,-31948
	ctx.r7.s64 = -2093744128;
	// lwz r11,16268(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16268);
	// li r5,196
	ctx.r5.s64 = 196;
	// lwz r10,16088(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16088);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r9,16260(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16260);
	// addi r3,r31,600
	ctx.r3.s64 = ctx.r31.s64 + 600;
	// lwz r8,17000(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 17000);
	// lis r6,-31948
	ctx.r6.s64 = -2093744128;
	// lwz r7,16364(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16364);
	// lis r30,-31948
	ctx.r30.s64 = -2093744128;
	// stw r11,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r11.u32);
	// lis r29,-31948
	ctx.r29.s64 = -2093744128;
	// stw r10,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r10.u32);
	// lis r28,-31948
	ctx.r28.s64 = -2093744128;
	// stw r9,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r9.u32);
	// lis r27,-31948
	ctx.r27.s64 = -2093744128;
	// stw r8,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r8.u32);
	// stw r7,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r7.u32);
	// lis r26,-31948
	ctx.r26.s64 = -2093744128;
	// lwz r11,17024(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 17024);
	// lis r25,-31948
	ctx.r25.s64 = -2093744128;
	// lwz r10,16756(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16756);
	// lis r24,-31948
	ctx.r24.s64 = -2093744128;
	// lwz r9,16936(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16936);
	// lis r23,-31948
	ctx.r23.s64 = -2093744128;
	// lwz r8,17112(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 17112);
	// lis r22,-31948
	ctx.r22.s64 = -2093744128;
	// lwz r7,16120(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16120);
	// lwz r6,15904(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 15904);
	// lwz r30,16064(r25)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16064);
	// lwz r29,16028(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16028);
	// lwz r28,15948(r23)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r23.u32 + 15948);
	// lwz r27,16380(r22)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r22.u32 + 16380);
	// stw r11,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r11.u32);
	// stw r10,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r10.u32);
	// stw r9,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r9.u32);
	// stw r8,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r8.u32);
	// stw r7,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r7.u32);
	// stw r6,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r6.u32);
	// stw r30,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r30.u32);
	// stw r29,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r29.u32);
	// stw r28,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r28.u32);
	// stw r27,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r27.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82F59370;
	sub_82A4EFB0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,4
	ctx.r9.s64 = 4;
	// stb r11,796(r31)
	PPC_STORE_U8(ctx.r31.u32 + 796, ctx.r11.u8);
	// stb r10,797(r31)
	PPC_STORE_U8(ctx.r31.u32 + 797, ctx.r10.u8);
	// li r11,14
	ctx.r11.s64 = 14;
	// stb r9,798(r31)
	PPC_STORE_U8(ctx.r31.u32 + 798, ctx.r9.u8);
	// li r10,5
	ctx.r10.s64 = 5;
	// li r9,6
	ctx.r9.s64 = 6;
	// stb r11,799(r31)
	PPC_STORE_U8(ctx.r31.u32 + 799, ctx.r11.u8);
	// stb r10,800(r31)
	PPC_STORE_U8(ctx.r31.u32 + 800, ctx.r10.u8);
	// li r11,7
	ctx.r11.s64 = 7;
	// stb r9,801(r31)
	PPC_STORE_U8(ctx.r31.u32 + 801, ctx.r9.u8);
	// li r10,8
	ctx.r10.s64 = 8;
	// li r9,9
	ctx.r9.s64 = 9;
	// stb r11,802(r31)
	PPC_STORE_U8(ctx.r31.u32 + 802, ctx.r11.u8);
	// stb r10,803(r31)
	PPC_STORE_U8(ctx.r31.u32 + 803, ctx.r10.u8);
	// li r11,10
	ctx.r11.s64 = 10;
	// stb r9,804(r31)
	PPC_STORE_U8(ctx.r31.u32 + 804, ctx.r9.u8);
	// li r10,11
	ctx.r10.s64 = 11;
	// li r9,12
	ctx.r9.s64 = 12;
	// stb r11,805(r31)
	PPC_STORE_U8(ctx.r31.u32 + 805, ctx.r11.u8);
	// stb r10,806(r31)
	PPC_STORE_U8(ctx.r31.u32 + 806, ctx.r10.u8);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r9,807(r31)
	PPC_STORE_U8(ctx.r31.u32 + 807, ctx.r9.u8);
	// li r10,13
	ctx.r10.s64 = 13;
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r11,808(r31)
	PPC_STORE_U8(ctx.r31.u32 + 808, ctx.r11.u8);
	// li r5,49
	ctx.r5.s64 = 49;
	// stb r10,809(r31)
	PPC_STORE_U8(ctx.r31.u32 + 809, ctx.r10.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r9,810(r31)
	PPC_STORE_U8(ctx.r31.u32 + 810, ctx.r9.u8);
	// addi r3,r31,811
	ctx.r3.s64 = ctx.r31.s64 + 811;
	// bl 0x82a4efb0
	ctx.lr = 0x82F593F8;
	sub_82A4EFB0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,14
	ctx.r9.s64 = 14;
	// stw r11,860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 860, ctx.r11.u32);
	// stw r10,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r10.u32);
	// li r11,42
	ctx.r11.s64 = 42;
	// stw r9,868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 868, ctx.r9.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r9,70
	ctx.r9.s64 = 70;
	// stw r11,872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 872, ctx.r11.u32);
	// stw r10,876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 876, ctx.r10.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r9,880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 880, ctx.r9.u32);
	// li r10,6
	ctx.r10.s64 = 6;
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r11,884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 884, ctx.r11.u32);
	// stw r10,888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 888, ctx.r10.u32);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r9,892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 892, ctx.r9.u32);
	// li r10,10
	ctx.r10.s64 = 10;
	// li r9,26
	ctx.r9.s64 = 26;
	// stw r11,896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 896, ctx.r11.u32);
	// li r11,34
	ctx.r11.s64 = 34;
	// stw r10,900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 900, ctx.r10.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r9,904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 904, ctx.r9.u32);
	// li r9,18
	ctx.r9.s64 = 18;
	// li r5,196
	ctx.r5.s64 = 196;
	// stw r11,908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 908, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 912, ctx.r10.u32);
	// addi r3,r31,920
	ctx.r3.s64 = ctx.r31.s64 + 920;
	// stw r9,916(r31)
	PPC_STORE_U32(ctx.r31.u32 + 916, ctx.r9.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82F59480;
	sub_82A4EFB0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r31,1116
	ctx.r11.s64 = ctx.r31.s64 + 1116;
	// stw r10,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F59498"))) PPC_WEAK_FUNC(sub_82F59498);
PPC_FUNC_IMPL(__imp__sub_82F59498) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// li r5,228
	ctx.r5.s64 = 228;
	// addi r31,r10,14088
	ctx.r31.s64 = ctx.r10.s64 + 14088;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,16284(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16284);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82F594D0;
	sub_82A4EFB0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r8,-32234
	ctx.r8.s64 = -2112487424;
	// addi r11,r11,-2512
	ctx.r11.s64 = ctx.r11.s64 + -2512;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// stw r11,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
	// addi r10,r10,-2496
	ctx.r10.s64 = ctx.r10.s64 + -2496;
	// addi r9,r9,-2488
	ctx.r9.s64 = ctx.r9.s64 + -2488;
	// addi r11,r8,-2480
	ctx.r11.s64 = ctx.r8.s64 + -2480;
	// stw r10,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r10.u32);
	// lis r7,-32234
	ctx.r7.s64 = -2112487424;
	// stw r9,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r9.u32);
	// lis r6,-32234
	ctx.r6.s64 = -2112487424;
	// stw r11,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r11.u32);
	// lis r5,-32234
	ctx.r5.s64 = -2112487424;
	// addi r10,r7,-2468
	ctx.r10.s64 = ctx.r7.s64 + -2468;
	// addi r11,r5,-2444
	ctx.r11.s64 = ctx.r5.s64 + -2444;
	// addi r9,r6,-2456
	ctx.r9.s64 = ctx.r6.s64 + -2456;
	// stw r10,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r10.u32);
	// li r5,228
	ctx.r5.s64 = 228;
	// stw r11,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r9,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r9.u32);
	// addi r3,r31,312
	ctx.r3.s64 = ctx.r31.s64 + 312;
	// bl 0x82a4efb0
	ctx.lr = 0x82F59534;
	sub_82A4EFB0(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r9,-31948
	ctx.r9.s64 = -2093744128;
	// lis r8,-31948
	ctx.r8.s64 = -2093744128;
	// lis r7,-31948
	ctx.r7.s64 = -2093744128;
	// lis r6,-31948
	ctx.r6.s64 = -2093744128;
	// lwz r11,16780(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16780);
	// lis r30,-31948
	ctx.r30.s64 = -2093744128;
	// lwz r10,17108(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17108);
	// lwz r9,16536(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16536);
	// li r5,228
	ctx.r5.s64 = 228;
	// lwz r8,16356(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16356);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r7,16028(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16028);
	// addi r3,r31,568
	ctx.r3.s64 = ctx.r31.s64 + 568;
	// lwz r6,16380(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16380);
	// lwz r30,16180(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16180);
	// stw r11,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r11.u32);
	// stw r10,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r10.u32);
	// stw r9,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r9.u32);
	// stw r8,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r8.u32);
	// stw r7,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r7.u32);
	// stw r6,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r6.u32);
	// stw r30,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r30.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82F59598;
	sub_82A4EFB0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r11,796(r31)
	PPC_STORE_U8(ctx.r31.u32 + 796, ctx.r11.u8);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r11,5
	ctx.r11.s64 = 5;
	// stb r10,797(r31)
	PPC_STORE_U8(ctx.r31.u32 + 797, ctx.r10.u8);
	// stb r9,798(r31)
	PPC_STORE_U8(ctx.r31.u32 + 798, ctx.r9.u8);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,799(r31)
	PPC_STORE_U8(ctx.r31.u32 + 799, ctx.r11.u8);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,6
	ctx.r9.s64 = 6;
	// stb r10,801(r31)
	PPC_STORE_U8(ctx.r31.u32 + 801, ctx.r10.u8);
	// li r5,57
	ctx.r5.s64 = 57;
	// stb r11,800(r31)
	PPC_STORE_U8(ctx.r31.u32 + 800, ctx.r11.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r9,802(r31)
	PPC_STORE_U8(ctx.r31.u32 + 802, ctx.r9.u8);
	// addi r3,r31,803
	ctx.r3.s64 = ctx.r31.s64 + 803;
	// bl 0x82a4efb0
	ctx.lr = 0x82F595E0;
	sub_82A4EFB0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r11,860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 860, ctx.r11.u32);
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r10,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r10.u32);
	// stw r9,868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 868, ctx.r9.u32);
	// li r10,11
	ctx.r10.s64 = 11;
	// stw r11,872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 872, ctx.r11.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r10,876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 876, ctx.r10.u32);
	// li r5,228
	ctx.r5.s64 = 228;
	// stw r9,880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 880, ctx.r9.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 884, ctx.r11.u32);
	// addi r3,r31,888
	ctx.r3.s64 = ctx.r31.s64 + 888;
	// bl 0x82a4efb0
	ctx.lr = 0x82F59628;
	sub_82A4EFB0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r31,1116
	ctx.r11.s64 = ctx.r31.s64 + 1116;
	// stw r10,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F59650"))) PPC_WEAK_FUNC(sub_82F59650);
PPC_FUNC_IMPL(__imp__sub_82F59650) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f0
	ctx.lr = 0x82F59658;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// li r5,196
	ctx.r5.s64 = 196;
	// addi r31,r10,16328
	ctx.r31.s64 = ctx.r10.s64 + 16328;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,16864(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16864);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82F59680;
	sub_82A4EFB0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// addi r11,r11,-2512
	ctx.r11.s64 = ctx.r11.s64 + -2512;
	// addi r10,r10,-2496
	ctx.r10.s64 = ctx.r10.s64 + -2496;
	// addi r9,r9,-904
	ctx.r9.s64 = ctx.r9.s64 + -904;
	// stw r11,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
	// lis r8,-32234
	ctx.r8.s64 = -2112487424;
	// stw r10,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r10.u32);
	// lis r7,-32234
	ctx.r7.s64 = -2112487424;
	// stw r9,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r9.u32);
	// lis r6,-32234
	ctx.r6.s64 = -2112487424;
	// addi r11,r8,-888
	ctx.r11.s64 = ctx.r8.s64 + -888;
	// addi r10,r7,-880
	ctx.r10.s64 = ctx.r7.s64 + -880;
	// addi r9,r6,-2488
	ctx.r9.s64 = ctx.r6.s64 + -2488;
	// stw r11,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r11.u32);
	// lis r5,-32234
	ctx.r5.s64 = -2112487424;
	// stw r10,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r10.u32);
	// lis r4,-32234
	ctx.r4.s64 = -2112487424;
	// stw r9,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r9.u32);
	// lis r3,-32234
	ctx.r3.s64 = -2112487424;
	// addi r11,r5,-868
	ctx.r11.s64 = ctx.r5.s64 + -868;
	// addi r10,r4,-856
	ctx.r10.s64 = ctx.r4.s64 + -856;
	// addi r9,r3,-840
	ctx.r9.s64 = ctx.r3.s64 + -840;
	// stw r11,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r11.u32);
	// lis r30,-32234
	ctx.r30.s64 = -2112487424;
	// stw r10,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r10.u32);
	// lis r29,-32234
	ctx.r29.s64 = -2112487424;
	// stw r9,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r9.u32);
	// lis r28,-32234
	ctx.r28.s64 = -2112487424;
	// addi r11,r30,-2152
	ctx.r11.s64 = ctx.r30.s64 + -2152;
	// addi r10,r29,-828
	ctx.r10.s64 = ctx.r29.s64 + -828;
	// addi r9,r28,-816
	ctx.r9.s64 = ctx.r28.s64 + -816;
	// stw r11,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r11.u32);
	// lis r27,-32234
	ctx.r27.s64 = -2112487424;
	// stw r10,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r10.u32);
	// lis r26,-32234
	ctx.r26.s64 = -2112487424;
	// stw r9,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r9.u32);
	// lis r25,-32234
	ctx.r25.s64 = -2112487424;
	// addi r11,r27,-808
	ctx.r11.s64 = ctx.r27.s64 + -808;
	// addi r10,r26,-800
	ctx.r10.s64 = ctx.r26.s64 + -800;
	// addi r9,r25,-760
	ctx.r9.s64 = ctx.r25.s64 + -760;
	// stw r11,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r11.u32);
	// li r5,196
	ctx.r5.s64 = 196;
	// stw r10,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r9,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r9.u32);
	// addi r3,r31,344
	ctx.r3.s64 = ctx.r31.s64 + 344;
	// bl 0x82a4efb0
	ctx.lr = 0x82F59744;
	sub_82A4EFB0(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r9,-31948
	ctx.r9.s64 = -2093744128;
	// lis r8,-31948
	ctx.r8.s64 = -2093744128;
	// lis r7,-31948
	ctx.r7.s64 = -2093744128;
	// lwz r11,16268(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16268);
	// li r5,196
	ctx.r5.s64 = 196;
	// lwz r10,16088(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16088);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r9,16260(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16260);
	// addi r3,r31,600
	ctx.r3.s64 = ctx.r31.s64 + 600;
	// lwz r8,16364(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16364);
	// lis r6,-31948
	ctx.r6.s64 = -2093744128;
	// lwz r7,17024(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 17024);
	// lis r30,-31948
	ctx.r30.s64 = -2093744128;
	// stw r11,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r11.u32);
	// lis r29,-31948
	ctx.r29.s64 = -2093744128;
	// stw r10,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r10.u32);
	// lis r28,-31948
	ctx.r28.s64 = -2093744128;
	// stw r9,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r9.u32);
	// lis r27,-31948
	ctx.r27.s64 = -2093744128;
	// stw r8,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r8.u32);
	// stw r7,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r7.u32);
	// lis r26,-31948
	ctx.r26.s64 = -2093744128;
	// lwz r11,16756(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16756);
	// lis r25,-31948
	ctx.r25.s64 = -2093744128;
	// lwz r10,16936(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16936);
	// lis r24,-31948
	ctx.r24.s64 = -2093744128;
	// lwz r9,16524(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16524);
	// lis r23,-31948
	ctx.r23.s64 = -2093744128;
	// lwz r8,17112(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 17112);
	// lis r22,-31948
	ctx.r22.s64 = -2093744128;
	// lwz r7,16120(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16120);
	// lwz r6,15904(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 15904);
	// lwz r30,16064(r25)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16064);
	// lwz r29,16028(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16028);
	// lwz r28,15948(r23)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r23.u32 + 15948);
	// lwz r27,16380(r22)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r22.u32 + 16380);
	// stw r11,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r11.u32);
	// stw r10,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r10.u32);
	// stw r9,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r9.u32);
	// stw r8,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r8.u32);
	// stw r7,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r7.u32);
	// stw r6,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r6.u32);
	// stw r30,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r30.u32);
	// stw r29,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r29.u32);
	// stw r28,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r28.u32);
	// stw r27,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r27.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82F59808;
	sub_82A4EFB0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,4
	ctx.r9.s64 = 4;
	// stb r11,796(r31)
	PPC_STORE_U8(ctx.r31.u32 + 796, ctx.r11.u8);
	// stb r10,797(r31)
	PPC_STORE_U8(ctx.r31.u32 + 797, ctx.r10.u8);
	// li r11,5
	ctx.r11.s64 = 5;
	// stb r9,798(r31)
	PPC_STORE_U8(ctx.r31.u32 + 798, ctx.r9.u8);
	// li r10,6
	ctx.r10.s64 = 6;
	// li r9,7
	ctx.r9.s64 = 7;
	// stb r11,799(r31)
	PPC_STORE_U8(ctx.r31.u32 + 799, ctx.r11.u8);
	// stb r10,800(r31)
	PPC_STORE_U8(ctx.r31.u32 + 800, ctx.r10.u8);
	// li r11,8
	ctx.r11.s64 = 8;
	// stb r9,801(r31)
	PPC_STORE_U8(ctx.r31.u32 + 801, ctx.r9.u8);
	// li r10,14
	ctx.r10.s64 = 14;
	// li r9,9
	ctx.r9.s64 = 9;
	// stb r11,802(r31)
	PPC_STORE_U8(ctx.r31.u32 + 802, ctx.r11.u8);
	// stb r10,803(r31)
	PPC_STORE_U8(ctx.r31.u32 + 803, ctx.r10.u8);
	// li r11,10
	ctx.r11.s64 = 10;
	// stb r9,804(r31)
	PPC_STORE_U8(ctx.r31.u32 + 804, ctx.r9.u8);
	// li r10,11
	ctx.r10.s64 = 11;
	// li r9,12
	ctx.r9.s64 = 12;
	// stb r11,805(r31)
	PPC_STORE_U8(ctx.r31.u32 + 805, ctx.r11.u8);
	// stb r10,806(r31)
	PPC_STORE_U8(ctx.r31.u32 + 806, ctx.r10.u8);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r9,807(r31)
	PPC_STORE_U8(ctx.r31.u32 + 807, ctx.r9.u8);
	// li r10,13
	ctx.r10.s64 = 13;
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r11,808(r31)
	PPC_STORE_U8(ctx.r31.u32 + 808, ctx.r11.u8);
	// li r5,49
	ctx.r5.s64 = 49;
	// stb r10,809(r31)
	PPC_STORE_U8(ctx.r31.u32 + 809, ctx.r10.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r9,810(r31)
	PPC_STORE_U8(ctx.r31.u32 + 810, ctx.r9.u8);
	// addi r3,r31,811
	ctx.r3.s64 = ctx.r31.s64 + 811;
	// bl 0x82a4efb0
	ctx.lr = 0x82F59890;
	sub_82A4EFB0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,18
	ctx.r9.s64 = 18;
	// stw r11,860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 860, ctx.r11.u32);
	// stw r10,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r10.u32);
	// li r11,42
	ctx.r11.s64 = 42;
	// stw r9,868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 868, ctx.r9.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r9,70
	ctx.r9.s64 = 70;
	// stw r11,872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 872, ctx.r11.u32);
	// stw r10,876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 876, ctx.r10.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r9,880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 880, ctx.r9.u32);
	// li r10,6
	ctx.r10.s64 = 6;
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r11,884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 884, ctx.r11.u32);
	// stw r10,888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 888, ctx.r10.u32);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r9,892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 892, ctx.r9.u32);
	// li r10,10
	ctx.r10.s64 = 10;
	// li r9,26
	ctx.r9.s64 = 26;
	// stw r11,896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 896, ctx.r11.u32);
	// li r11,34
	ctx.r11.s64 = 34;
	// stw r10,900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 900, ctx.r10.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r9,904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 904, ctx.r9.u32);
	// li r9,14
	ctx.r9.s64 = 14;
	// li r5,196
	ctx.r5.s64 = 196;
	// stw r11,908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 908, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 912, ctx.r10.u32);
	// addi r3,r31,920
	ctx.r3.s64 = ctx.r31.s64 + 920;
	// stw r9,916(r31)
	PPC_STORE_U32(ctx.r31.u32 + 916, ctx.r9.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82F59918;
	sub_82A4EFB0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r31,1116
	ctx.r11.s64 = ctx.r31.s64 + 1116;
	// stw r10,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F59930"))) PPC_WEAK_FUNC(sub_82F59930);
PPC_FUNC_IMPL(__imp__sub_82F59930) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// li r5,252
	ctx.r5.s64 = 252;
	// addi r31,r10,5128
	ctx.r31.s64 = ctx.r10.s64 + 5128;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,16720(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16720);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82F59964;
	sub_82A4EFB0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// li r5,252
	ctx.r5.s64 = 252;
	// addi r11,r11,-748
	ctx.r11.s64 = ctx.r11.s64 + -748;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,288
	ctx.r3.s64 = ctx.r31.s64 + 288;
	// stw r11,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82F59980;
	sub_82A4EFB0(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// li r5,252
	ctx.r5.s64 = 252;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,544
	ctx.r3.s64 = ctx.r31.s64 + 544;
	// lwz r11,16788(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16788);
	// stw r11,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r11.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82F5999C;
	sub_82A4EFB0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,63
	ctx.r5.s64 = 63;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r11,796(r31)
	PPC_STORE_U8(ctx.r31.u32 + 796, ctx.r11.u8);
	// addi r3,r31,797
	ctx.r3.s64 = ctx.r31.s64 + 797;
	// bl 0x82a4efb0
	ctx.lr = 0x82F599B4;
	sub_82A4EFB0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,252
	ctx.r5.s64 = 252;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 860, ctx.r11.u32);
	// addi r3,r31,864
	ctx.r3.s64 = ctx.r31.s64 + 864;
	// bl 0x82a4efb0
	ctx.lr = 0x82F599CC;
	sub_82A4EFB0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r31,1116
	ctx.r11.s64 = ctx.r31.s64 + 1116;
	// stw r10,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F599F0"))) PPC_WEAK_FUNC(sub_82F599F0);
PPC_FUNC_IMPL(__imp__sub_82F599F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f4
	ctx.lr = 0x82F599F8;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// li r5,200
	ctx.r5.s64 = 200;
	// addi r31,r10,25288
	ctx.r31.s64 = ctx.r10.s64 + 25288;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,17012(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17012);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82F59A20;
	sub_82A4EFB0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r11,r11,-736
	ctx.r11.s64 = ctx.r11.s64 + -736;
	// addi r10,r10,-712
	ctx.r10.s64 = ctx.r10.s64 + -712;
	// lis r8,-32234
	ctx.r8.s64 = -2112487424;
	// stw r11,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
	// lis r7,-32234
	ctx.r7.s64 = -2112487424;
	// stw r10,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r10.u32);
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// addi r11,r8,-664
	ctx.r11.s64 = ctx.r8.s64 + -664;
	// addi r9,r9,-680
	ctx.r9.s64 = ctx.r9.s64 + -680;
	// addi r10,r7,-644
	ctx.r10.s64 = ctx.r7.s64 + -644;
	// stw r11,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r11.u32);
	// lis r6,-32234
	ctx.r6.s64 = -2112487424;
	// stw r9,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r9.u32);
	// lis r5,-32234
	ctx.r5.s64 = -2112487424;
	// stw r10,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r10.u32);
	// lis r4,-32234
	ctx.r4.s64 = -2112487424;
	// addi r11,r5,-600
	ctx.r11.s64 = ctx.r5.s64 + -600;
	// addi r10,r4,-580
	ctx.r10.s64 = ctx.r4.s64 + -580;
	// addi r9,r6,-628
	ctx.r9.s64 = ctx.r6.s64 + -628;
	// stw r11,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r11.u32);
	// lis r3,-32234
	ctx.r3.s64 = -2112487424;
	// stw r10,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r10.u32);
	// lis r30,-32234
	ctx.r30.s64 = -2112487424;
	// stw r9,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r9.u32);
	// lis r29,-32234
	ctx.r29.s64 = -2112487424;
	// addi r9,r3,-552
	ctx.r9.s64 = ctx.r3.s64 + -552;
	// addi r11,r30,-528
	ctx.r11.s64 = ctx.r30.s64 + -528;
	// addi r10,r29,-504
	ctx.r10.s64 = ctx.r29.s64 + -504;
	// stw r9,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r9.u32);
	// lis r28,-32234
	ctx.r28.s64 = -2112487424;
	// stw r11,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r11.u32);
	// lis r27,-32234
	ctx.r27.s64 = -2112487424;
	// stw r10,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r10.u32);
	// lis r26,-32234
	ctx.r26.s64 = -2112487424;
	// addi r9,r28,-480
	ctx.r9.s64 = ctx.r28.s64 + -480;
	// addi r11,r27,-460
	ctx.r11.s64 = ctx.r27.s64 + -460;
	// addi r10,r26,-440
	ctx.r10.s64 = ctx.r26.s64 + -440;
	// stw r9,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r9.u32);
	// li r5,200
	ctx.r5.s64 = 200;
	// stw r11,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r10.u32);
	// addi r3,r31,340
	ctx.r3.s64 = ctx.r31.s64 + 340;
	// bl 0x82a4efb0
	ctx.lr = 0x82F59AD8;
	sub_82A4EFB0(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r9,-31948
	ctx.r9.s64 = -2093744128;
	// lis r8,-31948
	ctx.r8.s64 = -2093744128;
	// lis r7,-31948
	ctx.r7.s64 = -2093744128;
	// lwz r11,15940(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15940);
	// lis r6,-31948
	ctx.r6.s64 = -2093744128;
	// lwz r10,16036(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16036);
	// li r5,200
	ctx.r5.s64 = 200;
	// lwz r9,16456(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16456);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r8,16164(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16164);
	// addi r3,r31,596
	ctx.r3.s64 = ctx.r31.s64 + 596;
	// lwz r7,16324(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16324);
	// lis r30,-31948
	ctx.r30.s64 = -2093744128;
	// lwz r6,16460(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16460);
	// lis r29,-31948
	ctx.r29.s64 = -2093744128;
	// stw r11,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r11.u32);
	// lis r28,-31948
	ctx.r28.s64 = -2093744128;
	// stw r10,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r10.u32);
	// lis r27,-31948
	ctx.r27.s64 = -2093744128;
	// stw r9,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r9.u32);
	// lis r26,-31948
	ctx.r26.s64 = -2093744128;
	// stw r8,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r8.u32);
	// lis r25,-31948
	ctx.r25.s64 = -2093744128;
	// stw r7,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r7.u32);
	// lis r24,-31948
	ctx.r24.s64 = -2093744128;
	// lwz r11,16512(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16512);
	// lis r23,-31948
	ctx.r23.s64 = -2093744128;
	// lwz r10,16600(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16600);
	// lwz r9,16240(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16240);
	// lwz r8,16604(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16604);
	// lwz r7,17008(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17008);
	// lwz r30,16072(r25)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16072);
	// lwz r29,16900(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16900);
	// lwz r28,16964(r23)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16964);
	// stw r6,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r6.u32);
	// stw r11,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r11.u32);
	// stw r10,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r10.u32);
	// stw r9,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r9.u32);
	// stw r8,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r8.u32);
	// stw r7,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r7.u32);
	// stw r30,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r30.u32);
	// stw r29,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r29.u32);
	// stw r28,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r28.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82F59B90;
	sub_82A4EFB0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,796(r31)
	PPC_STORE_U8(ctx.r31.u32 + 796, ctx.r11.u8);
	// li r9,2
	ctx.r9.s64 = 2;
	// stb r10,797(r31)
	PPC_STORE_U8(ctx.r31.u32 + 797, ctx.r10.u8);
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r9,798(r31)
	PPC_STORE_U8(ctx.r31.u32 + 798, ctx.r9.u8);
	// stb r11,799(r31)
	PPC_STORE_U8(ctx.r31.u32 + 799, ctx.r11.u8);
	// li r9,5
	ctx.r9.s64 = 5;
	// stb r10,800(r31)
	PPC_STORE_U8(ctx.r31.u32 + 800, ctx.r10.u8);
	// li r11,6
	ctx.r11.s64 = 6;
	// li r10,7
	ctx.r10.s64 = 7;
	// stb r9,801(r31)
	PPC_STORE_U8(ctx.r31.u32 + 801, ctx.r9.u8);
	// stb r11,802(r31)
	PPC_STORE_U8(ctx.r31.u32 + 802, ctx.r11.u8);
	// li r9,8
	ctx.r9.s64 = 8;
	// stb r10,803(r31)
	PPC_STORE_U8(ctx.r31.u32 + 803, ctx.r10.u8);
	// li r11,9
	ctx.r11.s64 = 9;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r9,804(r31)
	PPC_STORE_U8(ctx.r31.u32 + 804, ctx.r9.u8);
	// stb r11,805(r31)
	PPC_STORE_U8(ctx.r31.u32 + 805, ctx.r11.u8);
	// li r9,11
	ctx.r9.s64 = 11;
	// stb r10,806(r31)
	PPC_STORE_U8(ctx.r31.u32 + 806, ctx.r10.u8);
	// li r11,12
	ctx.r11.s64 = 12;
	// li r10,13
	ctx.r10.s64 = 13;
	// stb r9,807(r31)
	PPC_STORE_U8(ctx.r31.u32 + 807, ctx.r9.u8);
	// li r5,50
	ctx.r5.s64 = 50;
	// stb r11,808(r31)
	PPC_STORE_U8(ctx.r31.u32 + 808, ctx.r11.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r10,809(r31)
	PPC_STORE_U8(ctx.r31.u32 + 809, ctx.r10.u8);
	// addi r3,r31,810
	ctx.r3.s64 = ctx.r31.s64 + 810;
	// bl 0x82a4efb0
	ctx.lr = 0x82F59C10;
	sub_82A4EFB0(ctx, base);
	// li r11,32
	ctx.r11.s64 = 32;
	// li r10,24
	ctx.r10.s64 = 24;
	// stw r11,860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 860, ctx.r11.u32);
	// li r11,48
	ctx.r11.s64 = 48;
	// stw r10,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r10.u32);
	// li r9,44
	ctx.r9.s64 = 44;
	// stw r11,872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 872, ctx.r11.u32);
	// li r10,28
	ctx.r10.s64 = 28;
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r9,868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 868, ctx.r9.u32);
	// stw r10,876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 876, ctx.r10.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// li r10,40
	ctx.r10.s64 = 40;
	// stw r11,880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 880, ctx.r11.u32);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r9,884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 884, ctx.r9.u32);
	// stw r10,888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 888, ctx.r10.u32);
	// li r9,36
	ctx.r9.s64 = 36;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 892, ctx.r11.u32);
	// li r11,20
	ctx.r11.s64 = 20;
	// stw r9,896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 896, ctx.r9.u32);
	// stw r10,900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 900, ctx.r10.u32);
	// li r5,200
	ctx.r5.s64 = 200;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 904, ctx.r11.u32);
	// addi r3,r31,916
	ctx.r3.s64 = ctx.r31.s64 + 916;
	// li r9,12
	ctx.r9.s64 = 12;
	// li r10,52
	ctx.r10.s64 = 52;
	// stw r9,908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 908, ctx.r9.u32);
	// stw r10,912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 912, ctx.r10.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82F59C90;
	sub_82A4EFB0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r31,1116
	ctx.r11.s64 = ctx.r31.s64 + 1116;
	// stw r10,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F59CA8"))) PPC_WEAK_FUNC(sub_82F59CA8);
PPC_FUNC_IMPL(__imp__sub_82F59CA8) {
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
	// addi r4,r11,-2512
	ctx.r4.s64 = ctx.r11.s64 + -2512;
	// bl 0x8277b880
	ctx.lr = 0x82F59CC4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17256(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17256, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F59CE0"))) PPC_WEAK_FUNC(sub_82F59CE0);
PPC_FUNC_IMPL(__imp__sub_82F59CE0) {
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
	// addi r4,r11,-2496
	ctx.r4.s64 = ctx.r11.s64 + -2496;
	// bl 0x8277b880
	ctx.lr = 0x82F59CFC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17608(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17608, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F59D18"))) PPC_WEAK_FUNC(sub_82F59D18);
PPC_FUNC_IMPL(__imp__sub_82F59D18) {
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
	// addi r4,r11,-2488
	ctx.r4.s64 = ctx.r11.s64 + -2488;
	// bl 0x8277b880
	ctx.lr = 0x82F59D34;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,18008(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18008, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F59D50"))) PPC_WEAK_FUNC(sub_82F59D50);
PPC_FUNC_IMPL(__imp__sub_82F59D50) {
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
	// addi r4,r11,-2480
	ctx.r4.s64 = ctx.r11.s64 + -2480;
	// bl 0x8277b880
	ctx.lr = 0x82F59D6C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,18364(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18364, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F59D88"))) PPC_WEAK_FUNC(sub_82F59D88);
PPC_FUNC_IMPL(__imp__sub_82F59D88) {
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
	// addi r4,r11,-2468
	ctx.r4.s64 = ctx.r11.s64 + -2468;
	// bl 0x8277b880
	ctx.lr = 0x82F59DA4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17764(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17764, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F59DC0"))) PPC_WEAK_FUNC(sub_82F59DC0);
PPC_FUNC_IMPL(__imp__sub_82F59DC0) {
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
	// addi r4,r11,-2456
	ctx.r4.s64 = ctx.r11.s64 + -2456;
	// bl 0x8277b880
	ctx.lr = 0x82F59DDC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17584(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17584, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F59DF8"))) PPC_WEAK_FUNC(sub_82F59DF8);
PPC_FUNC_IMPL(__imp__sub_82F59DF8) {
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
	// addi r4,r11,-2444
	ctx.r4.s64 = ctx.r11.s64 + -2444;
	// bl 0x8277b880
	ctx.lr = 0x82F59E14;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17408(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17408, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F59E30"))) PPC_WEAK_FUNC(sub_82F59E30);
PPC_FUNC_IMPL(__imp__sub_82F59E30) {
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
	// addi r4,r11,-2432
	ctx.r4.s64 = ctx.r11.s64 + -2432;
	// bl 0x8277b880
	ctx.lr = 0x82F59E4C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17428(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17428, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F59E68"))) PPC_WEAK_FUNC(sub_82F59E68);
PPC_FUNC_IMPL(__imp__sub_82F59E68) {
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
	// addi r4,r11,-2416
	ctx.r4.s64 = ctx.r11.s64 + -2416;
	// bl 0x8277b880
	ctx.lr = 0x82F59E84;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F59EA0"))) PPC_WEAK_FUNC(sub_82F59EA0);
PPC_FUNC_IMPL(__imp__sub_82F59EA0) {
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
	// addi r4,r11,-2408
	ctx.r4.s64 = ctx.r11.s64 + -2408;
	// bl 0x8277b880
	ctx.lr = 0x82F59EBC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17872(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17872, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F59ED8"))) PPC_WEAK_FUNC(sub_82F59ED8);
PPC_FUNC_IMPL(__imp__sub_82F59ED8) {
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
	// addi r4,r11,-2400
	ctx.r4.s64 = ctx.r11.s64 + -2400;
	// bl 0x8277b880
	ctx.lr = 0x82F59EF4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17992(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17992, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F59F10"))) PPC_WEAK_FUNC(sub_82F59F10);
PPC_FUNC_IMPL(__imp__sub_82F59F10) {
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
	// addi r4,r11,-2380
	ctx.r4.s64 = ctx.r11.s64 + -2380;
	// bl 0x8277b880
	ctx.lr = 0x82F59F2C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17840(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17840, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F59F48"))) PPC_WEAK_FUNC(sub_82F59F48);
PPC_FUNC_IMPL(__imp__sub_82F59F48) {
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
	// addi r4,r11,-2368
	ctx.r4.s64 = ctx.r11.s64 + -2368;
	// bl 0x8277b880
	ctx.lr = 0x82F59F64;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17172(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17172, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F59F80"))) PPC_WEAK_FUNC(sub_82F59F80);
PPC_FUNC_IMPL(__imp__sub_82F59F80) {
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
	// addi r4,r11,-2348
	ctx.r4.s64 = ctx.r11.s64 + -2348;
	// bl 0x8277b880
	ctx.lr = 0x82F59F9C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17192(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17192, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F59FB8"))) PPC_WEAK_FUNC(sub_82F59FB8);
PPC_FUNC_IMPL(__imp__sub_82F59FB8) {
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
	// addi r4,r11,-2340
	ctx.r4.s64 = ctx.r11.s64 + -2340;
	// bl 0x8277b880
	ctx.lr = 0x82F59FD4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17280(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17280, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F59FF0"))) PPC_WEAK_FUNC(sub_82F59FF0);
PPC_FUNC_IMPL(__imp__sub_82F59FF0) {
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
	// addi r4,r11,-2324
	ctx.r4.s64 = ctx.r11.s64 + -2324;
	// bl 0x8277b880
	ctx.lr = 0x82F5A00C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17432(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17432, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5A028"))) PPC_WEAK_FUNC(sub_82F5A028);
PPC_FUNC_IMPL(__imp__sub_82F5A028) {
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
	// addi r4,r11,-2300
	ctx.r4.s64 = ctx.r11.s64 + -2300;
	// bl 0x8277b880
	ctx.lr = 0x82F5A044;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17384(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17384, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5A060"))) PPC_WEAK_FUNC(sub_82F5A060);
PPC_FUNC_IMPL(__imp__sub_82F5A060) {
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
	// addi r4,r11,-2280
	ctx.r4.s64 = ctx.r11.s64 + -2280;
	// bl 0x8277b880
	ctx.lr = 0x82F5A07C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17572(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17572, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5A098"))) PPC_WEAK_FUNC(sub_82F5A098);
PPC_FUNC_IMPL(__imp__sub_82F5A098) {
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
	// addi r4,r11,-2268
	ctx.r4.s64 = ctx.r11.s64 + -2268;
	// bl 0x8277b880
	ctx.lr = 0x82F5A0B4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,18084(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18084, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5A0D0"))) PPC_WEAK_FUNC(sub_82F5A0D0);
PPC_FUNC_IMPL(__imp__sub_82F5A0D0) {
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
	// addi r4,r11,-2252
	ctx.r4.s64 = ctx.r11.s64 + -2252;
	// bl 0x8277b880
	ctx.lr = 0x82F5A0EC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17708(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17708, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5A108"))) PPC_WEAK_FUNC(sub_82F5A108);
PPC_FUNC_IMPL(__imp__sub_82F5A108) {
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
	// addi r4,r11,-2236
	ctx.r4.s64 = ctx.r11.s64 + -2236;
	// bl 0x8277b880
	ctx.lr = 0x82F5A124;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17756(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17756, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5A140"))) PPC_WEAK_FUNC(sub_82F5A140);
PPC_FUNC_IMPL(__imp__sub_82F5A140) {
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
	// addi r4,r11,-2224
	ctx.r4.s64 = ctx.r11.s64 + -2224;
	// bl 0x8277b880
	ctx.lr = 0x82F5A15C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17368(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17368, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5A178"))) PPC_WEAK_FUNC(sub_82F5A178);
PPC_FUNC_IMPL(__imp__sub_82F5A178) {
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
	// addi r4,r11,-2208
	ctx.r4.s64 = ctx.r11.s64 + -2208;
	// bl 0x8277b880
	ctx.lr = 0x82F5A194;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17564(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17564, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5A1B0"))) PPC_WEAK_FUNC(sub_82F5A1B0);
PPC_FUNC_IMPL(__imp__sub_82F5A1B0) {
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
	// addi r4,r11,-2196
	ctx.r4.s64 = ctx.r11.s64 + -2196;
	// bl 0x8277b880
	ctx.lr = 0x82F5A1CC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,18100(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18100, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5A1E8"))) PPC_WEAK_FUNC(sub_82F5A1E8);
PPC_FUNC_IMPL(__imp__sub_82F5A1E8) {
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
	// addi r4,r11,-2176
	ctx.r4.s64 = ctx.r11.s64 + -2176;
	// bl 0x8277b880
	ctx.lr = 0x82F5A204;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,18112(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18112, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5A220"))) PPC_WEAK_FUNC(sub_82F5A220);
PPC_FUNC_IMPL(__imp__sub_82F5A220) {
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
	// addi r4,r11,-2164
	ctx.r4.s64 = ctx.r11.s64 + -2164;
	// bl 0x8277b880
	ctx.lr = 0x82F5A23C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17876(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17876, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5A258"))) PPC_WEAK_FUNC(sub_82F5A258);
PPC_FUNC_IMPL(__imp__sub_82F5A258) {
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
	// addi r4,r11,-2152
	ctx.r4.s64 = ctx.r11.s64 + -2152;
	// bl 0x8277b880
	ctx.lr = 0x82F5A274;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,18176(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18176, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5A290"))) PPC_WEAK_FUNC(sub_82F5A290);
PPC_FUNC_IMPL(__imp__sub_82F5A290) {
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
	// addi r4,r11,-2144
	ctx.r4.s64 = ctx.r11.s64 + -2144;
	// bl 0x8277b880
	ctx.lr = 0x82F5A2AC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,18108(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18108, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5A2C8"))) PPC_WEAK_FUNC(sub_82F5A2C8);
PPC_FUNC_IMPL(__imp__sub_82F5A2C8) {
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
	// addi r4,r11,-2132
	ctx.r4.s64 = ctx.r11.s64 + -2132;
	// bl 0x8277b880
	ctx.lr = 0x82F5A2E4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17712(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17712, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5A300"))) PPC_WEAK_FUNC(sub_82F5A300);
PPC_FUNC_IMPL(__imp__sub_82F5A300) {
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
	// addi r4,r11,-2124
	ctx.r4.s64 = ctx.r11.s64 + -2124;
	// bl 0x8277b880
	ctx.lr = 0x82F5A31C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,18288(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18288, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5A338"))) PPC_WEAK_FUNC(sub_82F5A338);
PPC_FUNC_IMPL(__imp__sub_82F5A338) {
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
	// addi r4,r11,-2108
	ctx.r4.s64 = ctx.r11.s64 + -2108;
	// bl 0x8277b880
	ctx.lr = 0x82F5A354;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17516(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17516, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5A370"))) PPC_WEAK_FUNC(sub_82F5A370);
PPC_FUNC_IMPL(__imp__sub_82F5A370) {
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
	// addi r4,r11,-2100
	ctx.r4.s64 = ctx.r11.s64 + -2100;
	// bl 0x8277b880
	ctx.lr = 0x82F5A38C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,18312(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18312, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5A3A8"))) PPC_WEAK_FUNC(sub_82F5A3A8);
PPC_FUNC_IMPL(__imp__sub_82F5A3A8) {
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
	// addi r4,r11,-2088
	ctx.r4.s64 = ctx.r11.s64 + -2088;
	// bl 0x8277b880
	ctx.lr = 0x82F5A3C4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17968(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17968, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5A3E0"))) PPC_WEAK_FUNC(sub_82F5A3E0);
PPC_FUNC_IMPL(__imp__sub_82F5A3E0) {
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
	// addi r4,r11,-2076
	ctx.r4.s64 = ctx.r11.s64 + -2076;
	// bl 0x8277b880
	ctx.lr = 0x82F5A3FC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17436(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17436, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5A418"))) PPC_WEAK_FUNC(sub_82F5A418);
PPC_FUNC_IMPL(__imp__sub_82F5A418) {
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
	// addi r4,r11,-2060
	ctx.r4.s64 = ctx.r11.s64 + -2060;
	// bl 0x8277b880
	ctx.lr = 0x82F5A434;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17704(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17704, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5A450"))) PPC_WEAK_FUNC(sub_82F5A450);
PPC_FUNC_IMPL(__imp__sub_82F5A450) {
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
	// addi r4,r11,-2052
	ctx.r4.s64 = ctx.r11.s64 + -2052;
	// bl 0x8277b880
	ctx.lr = 0x82F5A46C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17248(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17248, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5A488"))) PPC_WEAK_FUNC(sub_82F5A488);
PPC_FUNC_IMPL(__imp__sub_82F5A488) {
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
	// addi r4,r11,-2040
	ctx.r4.s64 = ctx.r11.s64 + -2040;
	// bl 0x8277b880
	ctx.lr = 0x82F5A4A4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,18048(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18048, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5A4C0"))) PPC_WEAK_FUNC(sub_82F5A4C0);
PPC_FUNC_IMPL(__imp__sub_82F5A4C0) {
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
	// addi r4,r11,-2032
	ctx.r4.s64 = ctx.r11.s64 + -2032;
	// bl 0x8277b880
	ctx.lr = 0x82F5A4DC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17484(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17484, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5A4F8"))) PPC_WEAK_FUNC(sub_82F5A4F8);
PPC_FUNC_IMPL(__imp__sub_82F5A4F8) {
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
	// addi r4,r11,-2020
	ctx.r4.s64 = ctx.r11.s64 + -2020;
	// bl 0x8277b880
	ctx.lr = 0x82F5A514;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17388(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17388, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5A530"))) PPC_WEAK_FUNC(sub_82F5A530);
PPC_FUNC_IMPL(__imp__sub_82F5A530) {
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
	// addi r4,r11,-2016
	ctx.r4.s64 = ctx.r11.s64 + -2016;
	// bl 0x8277b880
	ctx.lr = 0x82F5A54C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,18144(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18144, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5A568"))) PPC_WEAK_FUNC(sub_82F5A568);
PPC_FUNC_IMPL(__imp__sub_82F5A568) {
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
	// addi r4,r11,-2008
	ctx.r4.s64 = ctx.r11.s64 + -2008;
	// bl 0x8277b880
	ctx.lr = 0x82F5A584;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17696(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17696, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5A5A0"))) PPC_WEAK_FUNC(sub_82F5A5A0);
PPC_FUNC_IMPL(__imp__sub_82F5A5A0) {
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
	// addi r4,r11,-1996
	ctx.r4.s64 = ctx.r11.s64 + -1996;
	// bl 0x8277b880
	ctx.lr = 0x82F5A5BC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,18020(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18020, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5A5D8"))) PPC_WEAK_FUNC(sub_82F5A5D8);
PPC_FUNC_IMPL(__imp__sub_82F5A5D8) {
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
	// addi r4,r11,-1988
	ctx.r4.s64 = ctx.r11.s64 + -1988;
	// bl 0x8277b880
	ctx.lr = 0x82F5A5F4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17252(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17252, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5A610"))) PPC_WEAK_FUNC(sub_82F5A610);
PPC_FUNC_IMPL(__imp__sub_82F5A610) {
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
	// addi r4,r11,-1976
	ctx.r4.s64 = ctx.r11.s64 + -1976;
	// bl 0x8277b880
	ctx.lr = 0x82F5A62C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17944(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17944, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5A648"))) PPC_WEAK_FUNC(sub_82F5A648);
PPC_FUNC_IMPL(__imp__sub_82F5A648) {
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
	// addi r4,r11,-1964
	ctx.r4.s64 = ctx.r11.s64 + -1964;
	// bl 0x8277b880
	ctx.lr = 0x82F5A664;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,18172(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18172, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5A680"))) PPC_WEAK_FUNC(sub_82F5A680);
PPC_FUNC_IMPL(__imp__sub_82F5A680) {
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
	// addi r4,r11,-1956
	ctx.r4.s64 = ctx.r11.s64 + -1956;
	// bl 0x8277b880
	ctx.lr = 0x82F5A69C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17548(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17548, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5A6B8"))) PPC_WEAK_FUNC(sub_82F5A6B8);
PPC_FUNC_IMPL(__imp__sub_82F5A6B8) {
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
	// addi r4,r11,-1940
	ctx.r4.s64 = ctx.r11.s64 + -1940;
	// bl 0x8277b880
	ctx.lr = 0x82F5A6D4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17528(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17528, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5A6F0"))) PPC_WEAK_FUNC(sub_82F5A6F0);
PPC_FUNC_IMPL(__imp__sub_82F5A6F0) {
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
	// addi r4,r11,-1932
	ctx.r4.s64 = ctx.r11.s64 + -1932;
	// bl 0x8277b880
	ctx.lr = 0x82F5A70C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17224(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17224, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5A728"))) PPC_WEAK_FUNC(sub_82F5A728);
PPC_FUNC_IMPL(__imp__sub_82F5A728) {
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
	// addi r4,r11,-1924
	ctx.r4.s64 = ctx.r11.s64 + -1924;
	// bl 0x8277b880
	ctx.lr = 0x82F5A744;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,18208(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18208, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5A760"))) PPC_WEAK_FUNC(sub_82F5A760);
PPC_FUNC_IMPL(__imp__sub_82F5A760) {
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
	// addi r4,r11,-1916
	ctx.r4.s64 = ctx.r11.s64 + -1916;
	// bl 0x8277b880
	ctx.lr = 0x82F5A77C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17620(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17620, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5A798"))) PPC_WEAK_FUNC(sub_82F5A798);
PPC_FUNC_IMPL(__imp__sub_82F5A798) {
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
	// addi r4,r11,-1904
	ctx.r4.s64 = ctx.r11.s64 + -1904;
	// bl 0x8277b880
	ctx.lr = 0x82F5A7B4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,18004(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18004, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5A7D0"))) PPC_WEAK_FUNC(sub_82F5A7D0);
PPC_FUNC_IMPL(__imp__sub_82F5A7D0) {
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
	// addi r4,r11,-1896
	ctx.r4.s64 = ctx.r11.s64 + -1896;
	// bl 0x8277b880
	ctx.lr = 0x82F5A7EC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,18076(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18076, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5A808"))) PPC_WEAK_FUNC(sub_82F5A808);
PPC_FUNC_IMPL(__imp__sub_82F5A808) {
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
	// addi r4,r11,-1888
	ctx.r4.s64 = ctx.r11.s64 + -1888;
	// bl 0x8277b880
	ctx.lr = 0x82F5A824;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17520(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17520, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5A840"))) PPC_WEAK_FUNC(sub_82F5A840);
PPC_FUNC_IMPL(__imp__sub_82F5A840) {
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
	// addi r4,r11,-1876
	ctx.r4.s64 = ctx.r11.s64 + -1876;
	// bl 0x8277b880
	ctx.lr = 0x82F5A85C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,18024(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18024, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5A878"))) PPC_WEAK_FUNC(sub_82F5A878);
PPC_FUNC_IMPL(__imp__sub_82F5A878) {
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
	// addi r4,r11,-1864
	ctx.r4.s64 = ctx.r11.s64 + -1864;
	// bl 0x8277b880
	ctx.lr = 0x82F5A894;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17188(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17188, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5A8B0"))) PPC_WEAK_FUNC(sub_82F5A8B0);
PPC_FUNC_IMPL(__imp__sub_82F5A8B0) {
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
	// addi r4,r11,-1848
	ctx.r4.s64 = ctx.r11.s64 + -1848;
	// bl 0x8277b880
	ctx.lr = 0x82F5A8CC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,18212(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18212, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5A8E8"))) PPC_WEAK_FUNC(sub_82F5A8E8);
PPC_FUNC_IMPL(__imp__sub_82F5A8E8) {
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
	// addi r4,r11,-1844
	ctx.r4.s64 = ctx.r11.s64 + -1844;
	// bl 0x8277b880
	ctx.lr = 0x82F5A904;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17928(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17928, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5A920"))) PPC_WEAK_FUNC(sub_82F5A920);
PPC_FUNC_IMPL(__imp__sub_82F5A920) {
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
	// addi r4,r11,-1840
	ctx.r4.s64 = ctx.r11.s64 + -1840;
	// bl 0x8277b880
	ctx.lr = 0x82F5A93C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,18096(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18096, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5A958"))) PPC_WEAK_FUNC(sub_82F5A958);
PPC_FUNC_IMPL(__imp__sub_82F5A958) {
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
	// addi r4,r11,-1828
	ctx.r4.s64 = ctx.r11.s64 + -1828;
	// bl 0x8277b880
	ctx.lr = 0x82F5A974;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17596(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17596, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5A990"))) PPC_WEAK_FUNC(sub_82F5A990);
PPC_FUNC_IMPL(__imp__sub_82F5A990) {
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
	// addi r4,r11,-1816
	ctx.r4.s64 = ctx.r11.s64 + -1816;
	// bl 0x8277b880
	ctx.lr = 0x82F5A9AC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17344(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17344, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5A9C8"))) PPC_WEAK_FUNC(sub_82F5A9C8);
PPC_FUNC_IMPL(__imp__sub_82F5A9C8) {
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
	// addi r4,r11,-1804
	ctx.r4.s64 = ctx.r11.s64 + -1804;
	// bl 0x8277b880
	ctx.lr = 0x82F5A9E4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,18088(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18088, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5AA00"))) PPC_WEAK_FUNC(sub_82F5AA00);
PPC_FUNC_IMPL(__imp__sub_82F5AA00) {
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
	// addi r4,r11,-1796
	ctx.r4.s64 = ctx.r11.s64 + -1796;
	// bl 0x8277b880
	ctx.lr = 0x82F5AA1C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17180(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17180, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5AA38"))) PPC_WEAK_FUNC(sub_82F5AA38);
PPC_FUNC_IMPL(__imp__sub_82F5AA38) {
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
	// addi r4,r11,-1788
	ctx.r4.s64 = ctx.r11.s64 + -1788;
	// bl 0x8277b880
	ctx.lr = 0x82F5AA54;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,18292(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18292, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5AA70"))) PPC_WEAK_FUNC(sub_82F5AA70);
PPC_FUNC_IMPL(__imp__sub_82F5AA70) {
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
	// addi r4,r11,-1780
	ctx.r4.s64 = ctx.r11.s64 + -1780;
	// bl 0x8277b880
	ctx.lr = 0x82F5AA8C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17404(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17404, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5AAA8"))) PPC_WEAK_FUNC(sub_82F5AAA8);
PPC_FUNC_IMPL(__imp__sub_82F5AAA8) {
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
	// addi r4,r11,-1772
	ctx.r4.s64 = ctx.r11.s64 + -1772;
	// bl 0x8277b880
	ctx.lr = 0x82F5AAC4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17648(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17648, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5AAE0"))) PPC_WEAK_FUNC(sub_82F5AAE0);
PPC_FUNC_IMPL(__imp__sub_82F5AAE0) {
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
	// addi r4,r11,-1760
	ctx.r4.s64 = ctx.r11.s64 + -1760;
	// bl 0x8277b880
	ctx.lr = 0x82F5AAFC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,18276(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18276, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5AB18"))) PPC_WEAK_FUNC(sub_82F5AB18);
PPC_FUNC_IMPL(__imp__sub_82F5AB18) {
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
	// addi r4,r11,-1744
	ctx.r4.s64 = ctx.r11.s64 + -1744;
	// bl 0x8277b880
	ctx.lr = 0x82F5AB34;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17160(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17160, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5AB50"))) PPC_WEAK_FUNC(sub_82F5AB50);
PPC_FUNC_IMPL(__imp__sub_82F5AB50) {
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
	// addi r4,r11,-1940
	ctx.r4.s64 = ctx.r11.s64 + -1940;
	// bl 0x8277b880
	ctx.lr = 0x82F5AB6C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17628(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17628, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5AB88"))) PPC_WEAK_FUNC(sub_82F5AB88);
PPC_FUNC_IMPL(__imp__sub_82F5AB88) {
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
	// addi r4,r11,-1732
	ctx.r4.s64 = ctx.r11.s64 + -1732;
	// bl 0x8277b880
	ctx.lr = 0x82F5ABA4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17976(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17976, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5ABC0"))) PPC_WEAK_FUNC(sub_82F5ABC0);
PPC_FUNC_IMPL(__imp__sub_82F5ABC0) {
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
	// addi r4,r11,-1716
	ctx.r4.s64 = ctx.r11.s64 + -1716;
	// bl 0x8277b880
	ctx.lr = 0x82F5ABDC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17492(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17492, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5ABF8"))) PPC_WEAK_FUNC(sub_82F5ABF8);
PPC_FUNC_IMPL(__imp__sub_82F5ABF8) {
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
	// addi r4,r11,-1704
	ctx.r4.s64 = ctx.r11.s64 + -1704;
	// bl 0x8277b880
	ctx.lr = 0x82F5AC14;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17716(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17716, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5AC30"))) PPC_WEAK_FUNC(sub_82F5AC30);
PPC_FUNC_IMPL(__imp__sub_82F5AC30) {
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
	// addi r4,r11,-1688
	ctx.r4.s64 = ctx.r11.s64 + -1688;
	// bl 0x8277b880
	ctx.lr = 0x82F5AC4C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17600(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17600, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5AC68"))) PPC_WEAK_FUNC(sub_82F5AC68);
PPC_FUNC_IMPL(__imp__sub_82F5AC68) {
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
	// addi r4,r11,-1676
	ctx.r4.s64 = ctx.r11.s64 + -1676;
	// bl 0x8277b880
	ctx.lr = 0x82F5AC84;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17352(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17352, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5ACA0"))) PPC_WEAK_FUNC(sub_82F5ACA0);
PPC_FUNC_IMPL(__imp__sub_82F5ACA0) {
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
	// addi r4,r11,-1660
	ctx.r4.s64 = ctx.r11.s64 + -1660;
	// bl 0x8277b880
	ctx.lr = 0x82F5ACBC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17860(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17860, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5ACD8"))) PPC_WEAK_FUNC(sub_82F5ACD8);
PPC_FUNC_IMPL(__imp__sub_82F5ACD8) {
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
	// addi r4,r11,-1904
	ctx.r4.s64 = ctx.r11.s64 + -1904;
	// bl 0x8277b880
	ctx.lr = 0x82F5ACF4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,18120(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18120, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5AD10"))) PPC_WEAK_FUNC(sub_82F5AD10);
PPC_FUNC_IMPL(__imp__sub_82F5AD10) {
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
	// addi r4,r11,-1876
	ctx.r4.s64 = ctx.r11.s64 + -1876;
	// bl 0x8277b880
	ctx.lr = 0x82F5AD2C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,18184(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18184, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5AD48"))) PPC_WEAK_FUNC(sub_82F5AD48);
PPC_FUNC_IMPL(__imp__sub_82F5AD48) {
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
	// addi r4,r11,-1648
	ctx.r4.s64 = ctx.r11.s64 + -1648;
	// bl 0x8277b880
	ctx.lr = 0x82F5AD64;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,18376(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18376, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5AD80"))) PPC_WEAK_FUNC(sub_82F5AD80);
PPC_FUNC_IMPL(__imp__sub_82F5AD80) {
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
	// addi r4,r11,-1640
	ctx.r4.s64 = ctx.r11.s64 + -1640;
	// bl 0x8277b880
	ctx.lr = 0x82F5AD9C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17924(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17924, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5ADB8"))) PPC_WEAK_FUNC(sub_82F5ADB8);
PPC_FUNC_IMPL(__imp__sub_82F5ADB8) {
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
	// addi r4,r11,-1632
	ctx.r4.s64 = ctx.r11.s64 + -1632;
	// bl 0x8277b880
	ctx.lr = 0x82F5ADD4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,18052(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18052, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5ADF0"))) PPC_WEAK_FUNC(sub_82F5ADF0);
PPC_FUNC_IMPL(__imp__sub_82F5ADF0) {
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
	// addi r4,r11,-1624
	ctx.r4.s64 = ctx.r11.s64 + -1624;
	// bl 0x8277b880
	ctx.lr = 0x82F5AE0C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17956(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17956, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5AE28"))) PPC_WEAK_FUNC(sub_82F5AE28);
PPC_FUNC_IMPL(__imp__sub_82F5AE28) {
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
	// addi r4,r11,-1612
	ctx.r4.s64 = ctx.r11.s64 + -1612;
	// bl 0x8277b880
	ctx.lr = 0x82F5AE44;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17268(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17268, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5AE60"))) PPC_WEAK_FUNC(sub_82F5AE60);
PPC_FUNC_IMPL(__imp__sub_82F5AE60) {
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
	// addi r4,r11,-1592
	ctx.r4.s64 = ctx.r11.s64 + -1592;
	// bl 0x8277b880
	ctx.lr = 0x82F5AE7C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17136(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17136, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5AE98"))) PPC_WEAK_FUNC(sub_82F5AE98);
PPC_FUNC_IMPL(__imp__sub_82F5AE98) {
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
	// addi r4,r11,-1576
	ctx.r4.s64 = ctx.r11.s64 + -1576;
	// bl 0x8277b880
	ctx.lr = 0x82F5AEB4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,18348(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18348, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5AED0"))) PPC_WEAK_FUNC(sub_82F5AED0);
PPC_FUNC_IMPL(__imp__sub_82F5AED0) {
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
	// addi r4,r11,-1568
	ctx.r4.s64 = ctx.r11.s64 + -1568;
	// bl 0x8277b880
	ctx.lr = 0x82F5AEEC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17144(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17144, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5AF08"))) PPC_WEAK_FUNC(sub_82F5AF08);
PPC_FUNC_IMPL(__imp__sub_82F5AF08) {
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
	// addi r4,r11,-1560
	ctx.r4.s64 = ctx.r11.s64 + -1560;
	// bl 0x8277b880
	ctx.lr = 0x82F5AF24;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17672(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17672, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5AF40"))) PPC_WEAK_FUNC(sub_82F5AF40);
PPC_FUNC_IMPL(__imp__sub_82F5AF40) {
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
	// addi r4,r11,-1548
	ctx.r4.s64 = ctx.r11.s64 + -1548;
	// bl 0x8277b880
	ctx.lr = 0x82F5AF5C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,18352(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18352, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5AF78"))) PPC_WEAK_FUNC(sub_82F5AF78);
PPC_FUNC_IMPL(__imp__sub_82F5AF78) {
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
	// addi r4,r11,-1536
	ctx.r4.s64 = ctx.r11.s64 + -1536;
	// bl 0x8277b880
	ctx.lr = 0x82F5AF94;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17988(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17988, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5AFB0"))) PPC_WEAK_FUNC(sub_82F5AFB0);
PPC_FUNC_IMPL(__imp__sub_82F5AFB0) {
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
	// addi r4,r11,-1520
	ctx.r4.s64 = ctx.r11.s64 + -1520;
	// bl 0x8277b880
	ctx.lr = 0x82F5AFCC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17952(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17952, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5AFE8"))) PPC_WEAK_FUNC(sub_82F5AFE8);
PPC_FUNC_IMPL(__imp__sub_82F5AFE8) {
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
	// addi r4,r11,-1504
	ctx.r4.s64 = ctx.r11.s64 + -1504;
	// bl 0x8277b880
	ctx.lr = 0x82F5B004;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17196(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17196, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5B020"))) PPC_WEAK_FUNC(sub_82F5B020);
PPC_FUNC_IMPL(__imp__sub_82F5B020) {
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
	// addi r4,r11,-1492
	ctx.r4.s64 = ctx.r11.s64 + -1492;
	// bl 0x8277b880
	ctx.lr = 0x82F5B03C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17792(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17792, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5B058"))) PPC_WEAK_FUNC(sub_82F5B058);
PPC_FUNC_IMPL(__imp__sub_82F5B058) {
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
	// addi r4,r11,-1480
	ctx.r4.s64 = ctx.r11.s64 + -1480;
	// bl 0x8277b880
	ctx.lr = 0x82F5B074;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17576, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5B090"))) PPC_WEAK_FUNC(sub_82F5B090);
PPC_FUNC_IMPL(__imp__sub_82F5B090) {
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
	// addi r4,r11,-1468
	ctx.r4.s64 = ctx.r11.s64 + -1468;
	// bl 0x8277b880
	ctx.lr = 0x82F5B0AC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17920(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17920, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5B0C8"))) PPC_WEAK_FUNC(sub_82F5B0C8);
PPC_FUNC_IMPL(__imp__sub_82F5B0C8) {
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
	// addi r4,r11,-1460
	ctx.r4.s64 = ctx.r11.s64 + -1460;
	// bl 0x8277b880
	ctx.lr = 0x82F5B0E4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17460(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17460, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5B100"))) PPC_WEAK_FUNC(sub_82F5B100);
PPC_FUNC_IMPL(__imp__sub_82F5B100) {
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
	// addi r4,r11,-1592
	ctx.r4.s64 = ctx.r11.s64 + -1592;
	// bl 0x8277b880
	ctx.lr = 0x82F5B11C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17228(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17228, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5B138"))) PPC_WEAK_FUNC(sub_82F5B138);
PPC_FUNC_IMPL(__imp__sub_82F5B138) {
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
	// addi r4,r11,-1444
	ctx.r4.s64 = ctx.r11.s64 + -1444;
	// bl 0x8277b880
	ctx.lr = 0x82F5B154;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,18304(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18304, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5B170"))) PPC_WEAK_FUNC(sub_82F5B170);
PPC_FUNC_IMPL(__imp__sub_82F5B170) {
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
	// addi r4,r11,-1436
	ctx.r4.s64 = ctx.r11.s64 + -1436;
	// bl 0x8277b880
	ctx.lr = 0x82F5B18C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,18012(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18012, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5B1A8"))) PPC_WEAK_FUNC(sub_82F5B1A8);
PPC_FUNC_IMPL(__imp__sub_82F5B1A8) {
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
	// addi r4,r11,-1468
	ctx.r4.s64 = ctx.r11.s64 + -1468;
	// bl 0x8277b880
	ctx.lr = 0x82F5B1C4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17568(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17568, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5B1E0"))) PPC_WEAK_FUNC(sub_82F5B1E0);
PPC_FUNC_IMPL(__imp__sub_82F5B1E0) {
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
	// addi r4,r11,-1444
	ctx.r4.s64 = ctx.r11.s64 + -1444;
	// bl 0x8277b880
	ctx.lr = 0x82F5B1FC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,18148(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18148, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5B218"))) PPC_WEAK_FUNC(sub_82F5B218);
PPC_FUNC_IMPL(__imp__sub_82F5B218) {
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
	// addi r4,r11,-1436
	ctx.r4.s64 = ctx.r11.s64 + -1436;
	// bl 0x8277b880
	ctx.lr = 0x82F5B234;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,18116(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18116, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5B250"))) PPC_WEAK_FUNC(sub_82F5B250);
PPC_FUNC_IMPL(__imp__sub_82F5B250) {
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
	// addi r4,r11,-1428
	ctx.r4.s64 = ctx.r11.s64 + -1428;
	// bl 0x8277b880
	ctx.lr = 0x82F5B26C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,18260(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18260, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5B288"))) PPC_WEAK_FUNC(sub_82F5B288);
PPC_FUNC_IMPL(__imp__sub_82F5B288) {
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
	// addi r4,r11,-1416
	ctx.r4.s64 = ctx.r11.s64 + -1416;
	// bl 0x8277b880
	ctx.lr = 0x82F5B2A4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,18180(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18180, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5B2C0"))) PPC_WEAK_FUNC(sub_82F5B2C0);
PPC_FUNC_IMPL(__imp__sub_82F5B2C0) {
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
	// addi r4,r11,-1404
	ctx.r4.s64 = ctx.r11.s64 + -1404;
	// bl 0x8277b880
	ctx.lr = 0x82F5B2DC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17736(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17736, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5B2F8"))) PPC_WEAK_FUNC(sub_82F5B2F8);
PPC_FUNC_IMPL(__imp__sub_82F5B2F8) {
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
	// addi r4,r11,-1392
	ctx.r4.s64 = ctx.r11.s64 + -1392;
	// bl 0x8277b880
	ctx.lr = 0x82F5B314;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17748(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17748, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5B330"))) PPC_WEAK_FUNC(sub_82F5B330);
PPC_FUNC_IMPL(__imp__sub_82F5B330) {
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
	// addi r4,r11,-1384
	ctx.r4.s64 = ctx.r11.s64 + -1384;
	// bl 0x8277b880
	ctx.lr = 0x82F5B34C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17328(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17328, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5B368"))) PPC_WEAK_FUNC(sub_82F5B368);
PPC_FUNC_IMPL(__imp__sub_82F5B368) {
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
	// addi r4,r11,-1372
	ctx.r4.s64 = ctx.r11.s64 + -1372;
	// bl 0x8277b880
	ctx.lr = 0x82F5B384;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17536(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17536, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5B3A0"))) PPC_WEAK_FUNC(sub_82F5B3A0);
PPC_FUNC_IMPL(__imp__sub_82F5B3A0) {
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
	// addi r4,r11,-1364
	ctx.r4.s64 = ctx.r11.s64 + -1364;
	// bl 0x8277b880
	ctx.lr = 0x82F5B3BC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17140(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17140, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5B3D8"))) PPC_WEAK_FUNC(sub_82F5B3D8);
PPC_FUNC_IMPL(__imp__sub_82F5B3D8) {
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
	// addi r4,r11,-1356
	ctx.r4.s64 = ctx.r11.s64 + -1356;
	// bl 0x8277b880
	ctx.lr = 0x82F5B3F4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17812(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17812, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5B410"))) PPC_WEAK_FUNC(sub_82F5B410);
PPC_FUNC_IMPL(__imp__sub_82F5B410) {
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
	// addi r4,r11,-1344
	ctx.r4.s64 = ctx.r11.s64 + -1344;
	// bl 0x8277b880
	ctx.lr = 0x82F5B42C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17560(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17560, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5B448"))) PPC_WEAK_FUNC(sub_82F5B448);
PPC_FUNC_IMPL(__imp__sub_82F5B448) {
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
	// addi r4,r11,-1332
	ctx.r4.s64 = ctx.r11.s64 + -1332;
	// bl 0x8277b880
	ctx.lr = 0x82F5B464;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17272(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17272, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5B480"))) PPC_WEAK_FUNC(sub_82F5B480);
PPC_FUNC_IMPL(__imp__sub_82F5B480) {
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
	// addi r4,r11,-1320
	ctx.r4.s64 = ctx.r11.s64 + -1320;
	// bl 0x8277b880
	ctx.lr = 0x82F5B49C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,18196(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18196, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5B4B8"))) PPC_WEAK_FUNC(sub_82F5B4B8);
PPC_FUNC_IMPL(__imp__sub_82F5B4B8) {
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
	// addi r4,r11,-1308
	ctx.r4.s64 = ctx.r11.s64 + -1308;
	// bl 0x8277b880
	ctx.lr = 0x82F5B4D4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,18056(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18056, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5B4F0"))) PPC_WEAK_FUNC(sub_82F5B4F0);
PPC_FUNC_IMPL(__imp__sub_82F5B4F0) {
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
	// addi r4,r11,-1288
	ctx.r4.s64 = ctx.r11.s64 + -1288;
	// bl 0x8277b880
	ctx.lr = 0x82F5B50C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17540(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17540, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5B528"))) PPC_WEAK_FUNC(sub_82F5B528);
PPC_FUNC_IMPL(__imp__sub_82F5B528) {
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
	// addi r4,r11,-1276
	ctx.r4.s64 = ctx.r11.s64 + -1276;
	// bl 0x8277b880
	ctx.lr = 0x82F5B544;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17440(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17440, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5B560"))) PPC_WEAK_FUNC(sub_82F5B560);
PPC_FUNC_IMPL(__imp__sub_82F5B560) {
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
	// addi r4,r11,-1260
	ctx.r4.s64 = ctx.r11.s64 + -1260;
	// bl 0x8277b880
	ctx.lr = 0x82F5B57C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,18328(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18328, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5B598"))) PPC_WEAK_FUNC(sub_82F5B598);
PPC_FUNC_IMPL(__imp__sub_82F5B598) {
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
	// addi r4,r11,-1248
	ctx.r4.s64 = ctx.r11.s64 + -1248;
	// bl 0x8277b880
	ctx.lr = 0x82F5B5B4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17864(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17864, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5B5D0"))) PPC_WEAK_FUNC(sub_82F5B5D0);
PPC_FUNC_IMPL(__imp__sub_82F5B5D0) {
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
	// addi r4,r11,-1236
	ctx.r4.s64 = ctx.r11.s64 + -1236;
	// bl 0x8277b880
	ctx.lr = 0x82F5B5EC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17960(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17960, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5B608"))) PPC_WEAK_FUNC(sub_82F5B608);
PPC_FUNC_IMPL(__imp__sub_82F5B608) {
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
	// addi r4,r11,-1224
	ctx.r4.s64 = ctx.r11.s64 + -1224;
	// bl 0x8277b880
	ctx.lr = 0x82F5B624;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,18356(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18356, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5B640"))) PPC_WEAK_FUNC(sub_82F5B640);
PPC_FUNC_IMPL(__imp__sub_82F5B640) {
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
	// addi r4,r11,-1212
	ctx.r4.s64 = ctx.r11.s64 + -1212;
	// bl 0x8277b880
	ctx.lr = 0x82F5B65C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,18320(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18320, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5B678"))) PPC_WEAK_FUNC(sub_82F5B678);
PPC_FUNC_IMPL(__imp__sub_82F5B678) {
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
	// addi r4,r11,-1200
	ctx.r4.s64 = ctx.r11.s64 + -1200;
	// bl 0x8277b880
	ctx.lr = 0x82F5B694;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17880(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17880, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5B6B0"))) PPC_WEAK_FUNC(sub_82F5B6B0);
PPC_FUNC_IMPL(__imp__sub_82F5B6B0) {
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
	// addi r4,r11,-1180
	ctx.r4.s64 = ctx.r11.s64 + -1180;
	// bl 0x8277b880
	ctx.lr = 0x82F5B6CC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17500(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17500, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5B6E8"))) PPC_WEAK_FUNC(sub_82F5B6E8);
PPC_FUNC_IMPL(__imp__sub_82F5B6E8) {
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
	// addi r4,r11,-1168
	ctx.r4.s64 = ctx.r11.s64 + -1168;
	// bl 0x8277b880
	ctx.lr = 0x82F5B704;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17444(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17444, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5B720"))) PPC_WEAK_FUNC(sub_82F5B720);
PPC_FUNC_IMPL(__imp__sub_82F5B720) {
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
	// addi r4,r11,-1156
	ctx.r4.s64 = ctx.r11.s64 + -1156;
	// bl 0x8277b880
	ctx.lr = 0x82F5B73C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,18308(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18308, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5B758"))) PPC_WEAK_FUNC(sub_82F5B758);
PPC_FUNC_IMPL(__imp__sub_82F5B758) {
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
	// addi r4,r11,-1148
	ctx.r4.s64 = ctx.r11.s64 + -1148;
	// bl 0x8277b880
	ctx.lr = 0x82F5B774;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17664(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17664, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5B790"))) PPC_WEAK_FUNC(sub_82F5B790);
PPC_FUNC_IMPL(__imp__sub_82F5B790) {
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
	// addi r4,r11,-1140
	ctx.r4.s64 = ctx.r11.s64 + -1140;
	// bl 0x8277b880
	ctx.lr = 0x82F5B7AC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17448(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17448, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5B7C8"))) PPC_WEAK_FUNC(sub_82F5B7C8);
PPC_FUNC_IMPL(__imp__sub_82F5B7C8) {
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
	// addi r4,r11,-1132
	ctx.r4.s64 = ctx.r11.s64 + -1132;
	// bl 0x8277b880
	ctx.lr = 0x82F5B7E4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17416(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17416, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5B800"))) PPC_WEAK_FUNC(sub_82F5B800);
PPC_FUNC_IMPL(__imp__sub_82F5B800) {
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
	// addi r4,r11,-1120
	ctx.r4.s64 = ctx.r11.s64 + -1120;
	// bl 0x8277b880
	ctx.lr = 0x82F5B81C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17232(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17232, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5B838"))) PPC_WEAK_FUNC(sub_82F5B838);
PPC_FUNC_IMPL(__imp__sub_82F5B838) {
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
	// addi r4,r11,-1112
	ctx.r4.s64 = ctx.r11.s64 + -1112;
	// bl 0x8277b880
	ctx.lr = 0x82F5B854;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17868(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17868, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5B870"))) PPC_WEAK_FUNC(sub_82F5B870);
PPC_FUNC_IMPL(__imp__sub_82F5B870) {
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
	// addi r4,r11,-1100
	ctx.r4.s64 = ctx.r11.s64 + -1100;
	// bl 0x8277b880
	ctx.lr = 0x82F5B88C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17452(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17452, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5B8A8"))) PPC_WEAK_FUNC(sub_82F5B8A8);
PPC_FUNC_IMPL(__imp__sub_82F5B8A8) {
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
	// addi r4,r11,-1088
	ctx.r4.s64 = ctx.r11.s64 + -1088;
	// bl 0x8277b880
	ctx.lr = 0x82F5B8C4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,18136(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18136, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5B8E0"))) PPC_WEAK_FUNC(sub_82F5B8E0);
PPC_FUNC_IMPL(__imp__sub_82F5B8E0) {
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
	// addi r4,r11,-1076
	ctx.r4.s64 = ctx.r11.s64 + -1076;
	// bl 0x8277b880
	ctx.lr = 0x82F5B8FC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,18296(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18296, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5B918"))) PPC_WEAK_FUNC(sub_82F5B918);
PPC_FUNC_IMPL(__imp__sub_82F5B918) {
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
	// addi r4,r11,-1064
	ctx.r4.s64 = ctx.r11.s64 + -1064;
	// bl 0x8277b880
	ctx.lr = 0x82F5B934;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17844(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17844, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5B950"))) PPC_WEAK_FUNC(sub_82F5B950);
PPC_FUNC_IMPL(__imp__sub_82F5B950) {
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
	// addi r4,r11,-1048
	ctx.r4.s64 = ctx.r11.s64 + -1048;
	// bl 0x8277b880
	ctx.lr = 0x82F5B96C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17164(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17164, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5B988"))) PPC_WEAK_FUNC(sub_82F5B988);
PPC_FUNC_IMPL(__imp__sub_82F5B988) {
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
	// addi r4,r11,-1032
	ctx.r4.s64 = ctx.r11.s64 + -1032;
	// bl 0x8277b880
	ctx.lr = 0x82F5B9A4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,18252(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18252, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5B9C0"))) PPC_WEAK_FUNC(sub_82F5B9C0);
PPC_FUNC_IMPL(__imp__sub_82F5B9C0) {
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
	// addi r4,r11,-1020
	ctx.r4.s64 = ctx.r11.s64 + -1020;
	// bl 0x8277b880
	ctx.lr = 0x82F5B9DC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17284(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17284, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5B9F8"))) PPC_WEAK_FUNC(sub_82F5B9F8);
PPC_FUNC_IMPL(__imp__sub_82F5B9F8) {
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
	// addi r4,r11,-1004
	ctx.r4.s64 = ctx.r11.s64 + -1004;
	// bl 0x8277b880
	ctx.lr = 0x82F5BA14;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17148(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17148, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5BA30"))) PPC_WEAK_FUNC(sub_82F5BA30);
PPC_FUNC_IMPL(__imp__sub_82F5BA30) {
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
	// addi r4,r11,-992
	ctx.r4.s64 = ctx.r11.s64 + -992;
	// bl 0x8277b880
	ctx.lr = 0x82F5BA4C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17236(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17236, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5BA68"))) PPC_WEAK_FUNC(sub_82F5BA68);
PPC_FUNC_IMPL(__imp__sub_82F5BA68) {
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
	// addi r4,r11,-980
	ctx.r4.s64 = ctx.r11.s64 + -980;
	// bl 0x8277b880
	ctx.lr = 0x82F5BA84;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17588(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17588, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5BAA0"))) PPC_WEAK_FUNC(sub_82F5BAA0);
PPC_FUNC_IMPL(__imp__sub_82F5BAA0) {
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
	// addi r4,r11,-968
	ctx.r4.s64 = ctx.r11.s64 + -968;
	// bl 0x8277b880
	ctx.lr = 0x82F5BABC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17820(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17820, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5BAD8"))) PPC_WEAK_FUNC(sub_82F5BAD8);
PPC_FUNC_IMPL(__imp__sub_82F5BAD8) {
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
	// addi r4,r11,-956
	ctx.r4.s64 = ctx.r11.s64 + -956;
	// bl 0x8277b880
	ctx.lr = 0x82F5BAF4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17372(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17372, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5BB10"))) PPC_WEAK_FUNC(sub_82F5BB10);
PPC_FUNC_IMPL(__imp__sub_82F5BB10) {
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
	// addi r4,r11,-948
	ctx.r4.s64 = ctx.r11.s64 + -948;
	// bl 0x8277b880
	ctx.lr = 0x82F5BB2C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,18204(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18204, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5BB48"))) PPC_WEAK_FUNC(sub_82F5BB48);
PPC_FUNC_IMPL(__imp__sub_82F5BB48) {
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
	// addi r4,r11,-2488
	ctx.r4.s64 = ctx.r11.s64 + -2488;
	// bl 0x8277b880
	ctx.lr = 0x82F5BB64;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17400(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17400, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5BB80"))) PPC_WEAK_FUNC(sub_82F5BB80);
PPC_FUNC_IMPL(__imp__sub_82F5BB80) {
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
	// addi r4,r11,-940
	ctx.r4.s64 = ctx.r11.s64 + -940;
	// bl 0x8277b880
	ctx.lr = 0x82F5BB9C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,18336(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18336, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5BBB8"))) PPC_WEAK_FUNC(sub_82F5BBB8);
PPC_FUNC_IMPL(__imp__sub_82F5BBB8) {
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
	// addi r4,r11,-928
	ctx.r4.s64 = ctx.r11.s64 + -928;
	// bl 0x8277b880
	ctx.lr = 0x82F5BBD4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17980(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17980, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5BBF0"))) PPC_WEAK_FUNC(sub_82F5BBF0);
PPC_FUNC_IMPL(__imp__sub_82F5BBF0) {
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
	// addi r4,r11,-916
	ctx.r4.s64 = ctx.r11.s64 + -916;
	// bl 0x8277b880
	ctx.lr = 0x82F5BC0C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,18216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18216, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5BC28"))) PPC_WEAK_FUNC(sub_82F5BC28);
PPC_FUNC_IMPL(__imp__sub_82F5BC28) {
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
	// addi r4,r11,-2488
	ctx.r4.s64 = ctx.r11.s64 + -2488;
	// bl 0x8277b880
	ctx.lr = 0x82F5BC44;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,18032(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18032, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5BC60"))) PPC_WEAK_FUNC(sub_82F5BC60);
PPC_FUNC_IMPL(__imp__sub_82F5BC60) {
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
	// addi r4,r11,-940
	ctx.r4.s64 = ctx.r11.s64 + -940;
	// bl 0x8277b880
	ctx.lr = 0x82F5BC7C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17456(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17456, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5BC98"))) PPC_WEAK_FUNC(sub_82F5BC98);
PPC_FUNC_IMPL(__imp__sub_82F5BC98) {
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
	// addi r4,r11,-928
	ctx.r4.s64 = ctx.r11.s64 + -928;
	// bl 0x8277b880
	ctx.lr = 0x82F5BCB4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17412(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17412, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5BCD0"))) PPC_WEAK_FUNC(sub_82F5BCD0);
PPC_FUNC_IMPL(__imp__sub_82F5BCD0) {
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
	// addi r4,r11,-916
	ctx.r4.s64 = ctx.r11.s64 + -916;
	// bl 0x8277b880
	ctx.lr = 0x82F5BCEC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,18068(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18068, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5BD08"))) PPC_WEAK_FUNC(sub_82F5BD08);
PPC_FUNC_IMPL(__imp__sub_82F5BD08) {
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
	// addi r4,r11,-904
	ctx.r4.s64 = ctx.r11.s64 + -904;
	// bl 0x8277b880
	ctx.lr = 0x82F5BD24;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17496(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17496, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5BD40"))) PPC_WEAK_FUNC(sub_82F5BD40);
PPC_FUNC_IMPL(__imp__sub_82F5BD40) {
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
	// addi r4,r11,-888
	ctx.r4.s64 = ctx.r11.s64 + -888;
	// bl 0x8277b880
	ctx.lr = 0x82F5BD5C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17316(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17316, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5BD78"))) PPC_WEAK_FUNC(sub_82F5BD78);
PPC_FUNC_IMPL(__imp__sub_82F5BD78) {
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
	// addi r4,r11,-880
	ctx.r4.s64 = ctx.r11.s64 + -880;
	// bl 0x8277b880
	ctx.lr = 0x82F5BD94;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17488(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17488, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5BDB0"))) PPC_WEAK_FUNC(sub_82F5BDB0);
PPC_FUNC_IMPL(__imp__sub_82F5BDB0) {
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
	// addi r4,r11,-2488
	ctx.r4.s64 = ctx.r11.s64 + -2488;
	// bl 0x8277b880
	ctx.lr = 0x82F5BDCC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17592(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17592, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5BDE8"))) PPC_WEAK_FUNC(sub_82F5BDE8);
PPC_FUNC_IMPL(__imp__sub_82F5BDE8) {
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
	// addi r4,r11,-868
	ctx.r4.s64 = ctx.r11.s64 + -868;
	// bl 0x8277b880
	ctx.lr = 0x82F5BE04;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,18280(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18280, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5BE20"))) PPC_WEAK_FUNC(sub_82F5BE20);
PPC_FUNC_IMPL(__imp__sub_82F5BE20) {
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
	// addi r4,r11,-856
	ctx.r4.s64 = ctx.r11.s64 + -856;
	// bl 0x8277b880
	ctx.lr = 0x82F5BE3C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17984(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17984, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5BE58"))) PPC_WEAK_FUNC(sub_82F5BE58);
PPC_FUNC_IMPL(__imp__sub_82F5BE58) {
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
	// addi r4,r11,-840
	ctx.r4.s64 = ctx.r11.s64 + -840;
	// bl 0x8277b880
	ctx.lr = 0x82F5BE74;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,18164(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18164, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5BE90"))) PPC_WEAK_FUNC(sub_82F5BE90);
PPC_FUNC_IMPL(__imp__sub_82F5BE90) {
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
	// addi r4,r11,-2152
	ctx.r4.s64 = ctx.r11.s64 + -2152;
	// bl 0x8277b880
	ctx.lr = 0x82F5BEAC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,18368(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18368, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5BEC8"))) PPC_WEAK_FUNC(sub_82F5BEC8);
PPC_FUNC_IMPL(__imp__sub_82F5BEC8) {
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
	// addi r4,r11,-828
	ctx.r4.s64 = ctx.r11.s64 + -828;
	// bl 0x8277b880
	ctx.lr = 0x82F5BEE4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17348(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17348, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5BF00"))) PPC_WEAK_FUNC(sub_82F5BF00);
PPC_FUNC_IMPL(__imp__sub_82F5BF00) {
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
	// addi r4,r11,-816
	ctx.r4.s64 = ctx.r11.s64 + -816;
	// bl 0x8277b880
	ctx.lr = 0x82F5BF1C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17132(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17132, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5BF38"))) PPC_WEAK_FUNC(sub_82F5BF38);
PPC_FUNC_IMPL(__imp__sub_82F5BF38) {
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
	// addi r4,r11,-808
	ctx.r4.s64 = ctx.r11.s64 + -808;
	// bl 0x8277b880
	ctx.lr = 0x82F5BF54;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17292(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17292, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5BF70"))) PPC_WEAK_FUNC(sub_82F5BF70);
PPC_FUNC_IMPL(__imp__sub_82F5BF70) {
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
	// addi r4,r11,-800
	ctx.r4.s64 = ctx.r11.s64 + -800;
	// bl 0x8277b880
	ctx.lr = 0x82F5BF8C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17176(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17176, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5BFA8"))) PPC_WEAK_FUNC(sub_82F5BFA8);
PPC_FUNC_IMPL(__imp__sub_82F5BFA8) {
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
	// addi r4,r11,-792
	ctx.r4.s64 = ctx.r11.s64 + -792;
	// bl 0x8277b880
	ctx.lr = 0x82F5BFC4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,18300(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18300, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5BFE0"))) PPC_WEAK_FUNC(sub_82F5BFE0);
PPC_FUNC_IMPL(__imp__sub_82F5BFE0) {
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
	// addi r4,r11,-772
	ctx.r4.s64 = ctx.r11.s64 + -772;
	// bl 0x8277b880
	ctx.lr = 0x82F5BFFC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,18256(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18256, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5C018"))) PPC_WEAK_FUNC(sub_82F5C018);
PPC_FUNC_IMPL(__imp__sub_82F5C018) {
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
	// addi r4,r11,-760
	ctx.r4.s64 = ctx.r11.s64 + -760;
	// bl 0x8277b880
	ctx.lr = 0x82F5C034;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17752(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17752, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5C050"))) PPC_WEAK_FUNC(sub_82F5C050);
PPC_FUNC_IMPL(__imp__sub_82F5C050) {
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
	// addi r4,r11,-748
	ctx.r4.s64 = ctx.r11.s64 + -748;
	// bl 0x8277b880
	ctx.lr = 0x82F5C06C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,18016(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18016, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5C088"))) PPC_WEAK_FUNC(sub_82F5C088);
PPC_FUNC_IMPL(__imp__sub_82F5C088) {
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
	// addi r4,r11,-736
	ctx.r4.s64 = ctx.r11.s64 + -736;
	// bl 0x8277b880
	ctx.lr = 0x82F5C0A4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17168, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5C0C0"))) PPC_WEAK_FUNC(sub_82F5C0C0);
PPC_FUNC_IMPL(__imp__sub_82F5C0C0) {
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
	// addi r4,r11,-712
	ctx.r4.s64 = ctx.r11.s64 + -712;
	// bl 0x8277b880
	ctx.lr = 0x82F5C0DC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17264(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17264, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5C0F8"))) PPC_WEAK_FUNC(sub_82F5C0F8);
PPC_FUNC_IMPL(__imp__sub_82F5C0F8) {
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
	// addi r4,r11,-680
	ctx.r4.s64 = ctx.r11.s64 + -680;
	// bl 0x8277b880
	ctx.lr = 0x82F5C114;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17684(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17684, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5C130"))) PPC_WEAK_FUNC(sub_82F5C130);
PPC_FUNC_IMPL(__imp__sub_82F5C130) {
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
	// addi r4,r11,-664
	ctx.r4.s64 = ctx.r11.s64 + -664;
	// bl 0x8277b880
	ctx.lr = 0x82F5C14C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17392(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17392, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5C168"))) PPC_WEAK_FUNC(sub_82F5C168);
PPC_FUNC_IMPL(__imp__sub_82F5C168) {
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
	// addi r4,r11,-644
	ctx.r4.s64 = ctx.r11.s64 + -644;
	// bl 0x8277b880
	ctx.lr = 0x82F5C184;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17552(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17552, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5C1A0"))) PPC_WEAK_FUNC(sub_82F5C1A0);
PPC_FUNC_IMPL(__imp__sub_82F5C1A0) {
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
	// addi r4,r11,-628
	ctx.r4.s64 = ctx.r11.s64 + -628;
	// bl 0x8277b880
	ctx.lr = 0x82F5C1BC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17688(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17688, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5C1D8"))) PPC_WEAK_FUNC(sub_82F5C1D8);
PPC_FUNC_IMPL(__imp__sub_82F5C1D8) {
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
	// addi r4,r11,-600
	ctx.r4.s64 = ctx.r11.s64 + -600;
	// bl 0x8277b880
	ctx.lr = 0x82F5C1F4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17740(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17740, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5C210"))) PPC_WEAK_FUNC(sub_82F5C210);
PPC_FUNC_IMPL(__imp__sub_82F5C210) {
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
	// addi r4,r11,-580
	ctx.r4.s64 = ctx.r11.s64 + -580;
	// bl 0x8277b880
	ctx.lr = 0x82F5C22C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17828(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17828, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5C248"))) PPC_WEAK_FUNC(sub_82F5C248);
PPC_FUNC_IMPL(__imp__sub_82F5C248) {
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
	// addi r4,r11,-552
	ctx.r4.s64 = ctx.r11.s64 + -552;
	// bl 0x8277b880
	ctx.lr = 0x82F5C264;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17468(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17468, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5C280"))) PPC_WEAK_FUNC(sub_82F5C280);
PPC_FUNC_IMPL(__imp__sub_82F5C280) {
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
	// addi r4,r11,-528
	ctx.r4.s64 = ctx.r11.s64 + -528;
	// bl 0x8277b880
	ctx.lr = 0x82F5C29C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17832(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17832, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5C2B8"))) PPC_WEAK_FUNC(sub_82F5C2B8);
PPC_FUNC_IMPL(__imp__sub_82F5C2B8) {
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
	// addi r4,r11,-504
	ctx.r4.s64 = ctx.r11.s64 + -504;
	// bl 0x8277b880
	ctx.lr = 0x82F5C2D4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,18264(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18264, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5C2F0"))) PPC_WEAK_FUNC(sub_82F5C2F0);
PPC_FUNC_IMPL(__imp__sub_82F5C2F0) {
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
	// addi r4,r11,-480
	ctx.r4.s64 = ctx.r11.s64 + -480;
	// bl 0x8277b880
	ctx.lr = 0x82F5C30C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17300(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17300, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5C328"))) PPC_WEAK_FUNC(sub_82F5C328);
PPC_FUNC_IMPL(__imp__sub_82F5C328) {
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
	// addi r4,r11,-460
	ctx.r4.s64 = ctx.r11.s64 + -460;
	// bl 0x8277b880
	ctx.lr = 0x82F5C344;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,18128(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18128, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5C360"))) PPC_WEAK_FUNC(sub_82F5C360);
PPC_FUNC_IMPL(__imp__sub_82F5C360) {
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
	// addi r4,r11,-440
	ctx.r4.s64 = ctx.r11.s64 + -440;
	// bl 0x8277b880
	ctx.lr = 0x82F5C37C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,18192(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18192, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5C398"))) PPC_WEAK_FUNC(sub_82F5C398);
PPC_FUNC_IMPL(__imp__sub_82F5C398) {
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
	// addi r4,r11,-420
	ctx.r4.s64 = ctx.r11.s64 + -420;
	// bl 0x8277b880
	ctx.lr = 0x82F5C3B4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17216, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5C3D0"))) PPC_WEAK_FUNC(sub_82F5C3D0);
PPC_FUNC_IMPL(__imp__sub_82F5C3D0) {
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
	// addi r4,r11,-412
	ctx.r4.s64 = ctx.r11.s64 + -412;
	// bl 0x8277b880
	ctx.lr = 0x82F5C3EC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,18028(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18028, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5C408"))) PPC_WEAK_FUNC(sub_82F5C408);
PPC_FUNC_IMPL(__imp__sub_82F5C408) {
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
	// addi r4,r11,-396
	ctx.r4.s64 = ctx.r11.s64 + -396;
	// bl 0x8277b880
	ctx.lr = 0x82F5C424;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17776(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17776, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5C440"))) PPC_WEAK_FUNC(sub_82F5C440);
PPC_FUNC_IMPL(__imp__sub_82F5C440) {
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
	// addi r4,r11,-388
	ctx.r4.s64 = ctx.r11.s64 + -388;
	// bl 0x8277b880
	ctx.lr = 0x82F5C45C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,18316(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18316, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5C478"))) PPC_WEAK_FUNC(sub_82F5C478);
PPC_FUNC_IMPL(__imp__sub_82F5C478) {
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
	// addi r4,r11,-380
	ctx.r4.s64 = ctx.r11.s64 + -380;
	// bl 0x8277b880
	ctx.lr = 0x82F5C494;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17964(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17964, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5C4B0"))) PPC_WEAK_FUNC(sub_82F5C4B0);
PPC_FUNC_IMPL(__imp__sub_82F5C4B0) {
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
	// addi r4,r11,-364
	ctx.r4.s64 = ctx.r11.s64 + -364;
	// bl 0x8277b880
	ctx.lr = 0x82F5C4CC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17632(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17632, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5C4E8"))) PPC_WEAK_FUNC(sub_82F5C4E8);
PPC_FUNC_IMPL(__imp__sub_82F5C4E8) {
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
	// addi r4,r11,-352
	ctx.r4.s64 = ctx.r11.s64 + -352;
	// bl 0x8277b880
	ctx.lr = 0x82F5C504;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17208(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17208, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5C520"))) PPC_WEAK_FUNC(sub_82F5C520);
PPC_FUNC_IMPL(__imp__sub_82F5C520) {
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
	// addi r4,r11,-340
	ctx.r4.s64 = ctx.r11.s64 + -340;
	// bl 0x8277b880
	ctx.lr = 0x82F5C53C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17288(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17288, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5C558"))) PPC_WEAK_FUNC(sub_82F5C558);
PPC_FUNC_IMPL(__imp__sub_82F5C558) {
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
	// addi r4,r11,-328
	ctx.r4.s64 = ctx.r11.s64 + -328;
	// bl 0x8277b880
	ctx.lr = 0x82F5C574;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17376(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17376, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5C590"))) PPC_WEAK_FUNC(sub_82F5C590);
PPC_FUNC_IMPL(__imp__sub_82F5C590) {
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
	// addi r4,r11,-316
	ctx.r4.s64 = ctx.r11.s64 + -316;
	// bl 0x8277b880
	ctx.lr = 0x82F5C5AC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17260(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17260, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5C5C8"))) PPC_WEAK_FUNC(sub_82F5C5C8);
PPC_FUNC_IMPL(__imp__sub_82F5C5C8) {
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
	// addi r4,r11,-304
	ctx.r4.s64 = ctx.r11.s64 + -304;
	// bl 0x8277b880
	ctx.lr = 0x82F5C5E4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17660(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17660, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5C600"))) PPC_WEAK_FUNC(sub_82F5C600);
PPC_FUNC_IMPL(__imp__sub_82F5C600) {
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
	// addi r4,r11,-292
	ctx.r4.s64 = ctx.r11.s64 + -292;
	// bl 0x8277b880
	ctx.lr = 0x82F5C61C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,18060(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18060, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5C638"))) PPC_WEAK_FUNC(sub_82F5C638);
PPC_FUNC_IMPL(__imp__sub_82F5C638) {
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
	// addi r4,r11,-280
	ctx.r4.s64 = ctx.r11.s64 + -280;
	// bl 0x8277b880
	ctx.lr = 0x82F5C654;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,18340(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18340, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5C670"))) PPC_WEAK_FUNC(sub_82F5C670);
PPC_FUNC_IMPL(__imp__sub_82F5C670) {
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
	// addi r4,r11,-268
	ctx.r4.s64 = ctx.r11.s64 + -268;
	// bl 0x8277b880
	ctx.lr = 0x82F5C68C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,18080(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18080, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5C6A8"))) PPC_WEAK_FUNC(sub_82F5C6A8);
PPC_FUNC_IMPL(__imp__sub_82F5C6A8) {
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
	// addi r4,r11,-256
	ctx.r4.s64 = ctx.r11.s64 + -256;
	// bl 0x8277b880
	ctx.lr = 0x82F5C6C4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17892(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17892, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5C6E0"))) PPC_WEAK_FUNC(sub_82F5C6E0);
PPC_FUNC_IMPL(__imp__sub_82F5C6E0) {
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
	// addi r4,r11,-244
	ctx.r4.s64 = ctx.r11.s64 + -244;
	// bl 0x8277b880
	ctx.lr = 0x82F5C6FC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17508(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17508, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5C718"))) PPC_WEAK_FUNC(sub_82F5C718);
PPC_FUNC_IMPL(__imp__sub_82F5C718) {
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
	// addi r4,r11,-232
	ctx.r4.s64 = ctx.r11.s64 + -232;
	// bl 0x8277b880
	ctx.lr = 0x82F5C734;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17836(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17836, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5C750"))) PPC_WEAK_FUNC(sub_82F5C750);
PPC_FUNC_IMPL(__imp__sub_82F5C750) {
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
	// addi r4,r11,-220
	ctx.r4.s64 = ctx.r11.s64 + -220;
	// bl 0x8277b880
	ctx.lr = 0x82F5C76C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17320(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17320, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5C788"))) PPC_WEAK_FUNC(sub_82F5C788);
PPC_FUNC_IMPL(__imp__sub_82F5C788) {
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
	// addi r4,r11,-208
	ctx.r4.s64 = ctx.r11.s64 + -208;
	// bl 0x8277b880
	ctx.lr = 0x82F5C7A4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17780(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17780, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5C7C0"))) PPC_WEAK_FUNC(sub_82F5C7C0);
PPC_FUNC_IMPL(__imp__sub_82F5C7C0) {
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
	// addi r4,r11,-196
	ctx.r4.s64 = ctx.r11.s64 + -196;
	// bl 0x8277b880
	ctx.lr = 0x82F5C7DC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17240(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17240, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5C7F8"))) PPC_WEAK_FUNC(sub_82F5C7F8);
PPC_FUNC_IMPL(__imp__sub_82F5C7F8) {
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
	// addi r4,r11,-184
	ctx.r4.s64 = ctx.r11.s64 + -184;
	// bl 0x8277b880
	ctx.lr = 0x82F5C814;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,18000(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18000, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5C830"))) PPC_WEAK_FUNC(sub_82F5C830);
PPC_FUNC_IMPL(__imp__sub_82F5C830) {
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
	// addi r4,r11,-172
	ctx.r4.s64 = ctx.r11.s64 + -172;
	// bl 0x8277b880
	ctx.lr = 0x82F5C84C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17668(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17668, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5C868"))) PPC_WEAK_FUNC(sub_82F5C868);
PPC_FUNC_IMPL(__imp__sub_82F5C868) {
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
	// addi r4,r11,-156
	ctx.r4.s64 = ctx.r11.s64 + -156;
	// bl 0x8277b880
	ctx.lr = 0x82F5C884;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17720(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17720, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5C8A0"))) PPC_WEAK_FUNC(sub_82F5C8A0);
PPC_FUNC_IMPL(__imp__sub_82F5C8A0) {
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
	// addi r4,r11,-140
	ctx.r4.s64 = ctx.r11.s64 + -140;
	// bl 0x8277b880
	ctx.lr = 0x82F5C8BC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17732(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17732, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5C8D8"))) PPC_WEAK_FUNC(sub_82F5C8D8);
PPC_FUNC_IMPL(__imp__sub_82F5C8D8) {
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
	// addi r4,r11,-132
	ctx.r4.s64 = ctx.r11.s64 + -132;
	// bl 0x8277b880
	ctx.lr = 0x82F5C8F4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17472(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17472, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5C910"))) PPC_WEAK_FUNC(sub_82F5C910);
PPC_FUNC_IMPL(__imp__sub_82F5C910) {
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
	// addi r4,r11,-120
	ctx.r4.s64 = ctx.r11.s64 + -120;
	// bl 0x8277b880
	ctx.lr = 0x82F5C92C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,18140(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18140, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5C948"))) PPC_WEAK_FUNC(sub_82F5C948);
PPC_FUNC_IMPL(__imp__sub_82F5C948) {
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
	// addi r4,r11,-108
	ctx.r4.s64 = ctx.r11.s64 + -108;
	// bl 0x8277b880
	ctx.lr = 0x82F5C964;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17932(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17932, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5C980"))) PPC_WEAK_FUNC(sub_82F5C980);
PPC_FUNC_IMPL(__imp__sub_82F5C980) {
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
	// addi r4,r11,-96
	ctx.r4.s64 = ctx.r11.s64 + -96;
	// bl 0x8277b880
	ctx.lr = 0x82F5C99C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17724(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17724, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5C9B8"))) PPC_WEAK_FUNC(sub_82F5C9B8);
PPC_FUNC_IMPL(__imp__sub_82F5C9B8) {
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
	// addi r4,r11,-84
	ctx.r4.s64 = ctx.r11.s64 + -84;
	// bl 0x8277b880
	ctx.lr = 0x82F5C9D4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,18272(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18272, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5C9F0"))) PPC_WEAK_FUNC(sub_82F5C9F0);
PPC_FUNC_IMPL(__imp__sub_82F5C9F0) {
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
	// addi r4,r11,-72
	ctx.r4.s64 = ctx.r11.s64 + -72;
	// bl 0x8277b880
	ctx.lr = 0x82F5CA0C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,18064(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18064, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5CA28"))) PPC_WEAK_FUNC(sub_82F5CA28);
PPC_FUNC_IMPL(__imp__sub_82F5CA28) {
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
	// addi r4,r11,-60
	ctx.r4.s64 = ctx.r11.s64 + -60;
	// bl 0x8277b880
	ctx.lr = 0x82F5CA44;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,18284(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18284, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5CA60"))) PPC_WEAK_FUNC(sub_82F5CA60);
PPC_FUNC_IMPL(__imp__sub_82F5CA60) {
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
	// addi r4,r11,-48
	ctx.r4.s64 = ctx.r11.s64 + -48;
	// bl 0x8277b880
	ctx.lr = 0x82F5CA7C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17464(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17464, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5CA98"))) PPC_WEAK_FUNC(sub_82F5CA98);
PPC_FUNC_IMPL(__imp__sub_82F5CA98) {
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
	// addi r4,r11,-36
	ctx.r4.s64 = ctx.r11.s64 + -36;
	// bl 0x8277b880
	ctx.lr = 0x82F5CAB4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,18332(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18332, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5CAD0"))) PPC_WEAK_FUNC(sub_82F5CAD0);
PPC_FUNC_IMPL(__imp__sub_82F5CAD0) {
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
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// bl 0x8277b880
	ctx.lr = 0x82F5CAEC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17800(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17800, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5CB08"))) PPC_WEAK_FUNC(sub_82F5CB08);
PPC_FUNC_IMPL(__imp__sub_82F5CB08) {
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
	// addi r4,r11,-12
	ctx.r4.s64 = ctx.r11.s64 + -12;
	// bl 0x8277b880
	ctx.lr = 0x82F5CB24;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17972(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17972, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5CB40"))) PPC_WEAK_FUNC(sub_82F5CB40);
PPC_FUNC_IMPL(__imp__sub_82F5CB40) {
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
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// bl 0x8277b880
	ctx.lr = 0x82F5CB5C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17940(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17940, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5CB78"))) PPC_WEAK_FUNC(sub_82F5CB78);
PPC_FUNC_IMPL(__imp__sub_82F5CB78) {
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
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x8277b880
	ctx.lr = 0x82F5CB94;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17332(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17332, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5CBB0"))) PPC_WEAK_FUNC(sub_82F5CBB0);
PPC_FUNC_IMPL(__imp__sub_82F5CBB0) {
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
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x8277b880
	ctx.lr = 0x82F5CBCC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17604(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17604, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5CBE8"))) PPC_WEAK_FUNC(sub_82F5CBE8);
PPC_FUNC_IMPL(__imp__sub_82F5CBE8) {
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
	// addi r4,r11,40
	ctx.r4.s64 = ctx.r11.s64 + 40;
	// bl 0x8277b880
	ctx.lr = 0x82F5CC04;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17184(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17184, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5CC20"))) PPC_WEAK_FUNC(sub_82F5CC20);
PPC_FUNC_IMPL(__imp__sub_82F5CC20) {
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
	// addi r4,r11,52
	ctx.r4.s64 = ctx.r11.s64 + 52;
	// bl 0x8277b880
	ctx.lr = 0x82F5CC3C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,18160(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18160, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5CC58"))) PPC_WEAK_FUNC(sub_82F5CC58);
PPC_FUNC_IMPL(__imp__sub_82F5CC58) {
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
	// addi r4,r11,60
	ctx.r4.s64 = ctx.r11.s64 + 60;
	// bl 0x8277b880
	ctx.lr = 0x82F5CC74;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,18124(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18124, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5CC90"))) PPC_WEAK_FUNC(sub_82F5CC90);
PPC_FUNC_IMPL(__imp__sub_82F5CC90) {
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
	// addi r4,r11,68
	ctx.r4.s64 = ctx.r11.s64 + 68;
	// bl 0x8277b880
	ctx.lr = 0x82F5CCAC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,18324(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18324, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5CCC8"))) PPC_WEAK_FUNC(sub_82F5CCC8);
PPC_FUNC_IMPL(__imp__sub_82F5CCC8) {
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
	// addi r4,r11,76
	ctx.r4.s64 = ctx.r11.s64 + 76;
	// bl 0x8277b880
	ctx.lr = 0x82F5CCE4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17504(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17504, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5CD00"))) PPC_WEAK_FUNC(sub_82F5CD00);
PPC_FUNC_IMPL(__imp__sub_82F5CD00) {
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
	// addi r4,r11,84
	ctx.r4.s64 = ctx.r11.s64 + 84;
	// bl 0x8277b880
	ctx.lr = 0x82F5CD1C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,18360(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18360, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5CD38"))) PPC_WEAK_FUNC(sub_82F5CD38);
PPC_FUNC_IMPL(__imp__sub_82F5CD38) {
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
	// addi r4,r11,92
	ctx.r4.s64 = ctx.r11.s64 + 92;
	// bl 0x8277b880
	ctx.lr = 0x82F5CD54;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17212(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17212, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5CD70"))) PPC_WEAK_FUNC(sub_82F5CD70);
PPC_FUNC_IMPL(__imp__sub_82F5CD70) {
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
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bl 0x8277b880
	ctx.lr = 0x82F5CD8C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17612(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17612, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5CDA8"))) PPC_WEAK_FUNC(sub_82F5CDA8);
PPC_FUNC_IMPL(__imp__sub_82F5CDA8) {
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
	// addi r4,r11,108
	ctx.r4.s64 = ctx.r11.s64 + 108;
	// bl 0x8277b880
	ctx.lr = 0x82F5CDC4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17200(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17200, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5CDE0"))) PPC_WEAK_FUNC(sub_82F5CDE0);
PPC_FUNC_IMPL(__imp__sub_82F5CDE0) {
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
	// addi r4,r11,116
	ctx.r4.s64 = ctx.r11.s64 + 116;
	// bl 0x8277b880
	ctx.lr = 0x82F5CDFC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17532(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17532, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5CE18"))) PPC_WEAK_FUNC(sub_82F5CE18);
PPC_FUNC_IMPL(__imp__sub_82F5CE18) {
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
	// addi r4,r11,124
	ctx.r4.s64 = ctx.r11.s64 + 124;
	// bl 0x8277b880
	ctx.lr = 0x82F5CE34;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17304(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17304, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5CE50"))) PPC_WEAK_FUNC(sub_82F5CE50);
PPC_FUNC_IMPL(__imp__sub_82F5CE50) {
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
	// addi r4,r11,132
	ctx.r4.s64 = ctx.r11.s64 + 132;
	// bl 0x8277b880
	ctx.lr = 0x82F5CE6C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17824(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17824, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5CE88"))) PPC_WEAK_FUNC(sub_82F5CE88);
PPC_FUNC_IMPL(__imp__sub_82F5CE88) {
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
	// addi r4,r11,140
	ctx.r4.s64 = ctx.r11.s64 + 140;
	// bl 0x8277b880
	ctx.lr = 0x82F5CEA4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17652(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17652, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5CEC0"))) PPC_WEAK_FUNC(sub_82F5CEC0);
PPC_FUNC_IMPL(__imp__sub_82F5CEC0) {
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
	// addi r4,r11,148
	ctx.r4.s64 = ctx.r11.s64 + 148;
	// bl 0x8277b880
	ctx.lr = 0x82F5CEDC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,18104(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18104, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5CEF8"))) PPC_WEAK_FUNC(sub_82F5CEF8);
PPC_FUNC_IMPL(__imp__sub_82F5CEF8) {
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
	// addi r4,r11,156
	ctx.r4.s64 = ctx.r11.s64 + 156;
	// bl 0x8277b880
	ctx.lr = 0x82F5CF14;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17616(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17616, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5CF30"))) PPC_WEAK_FUNC(sub_82F5CF30);
PPC_FUNC_IMPL(__imp__sub_82F5CF30) {
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
	// addi r4,r11,164
	ctx.r4.s64 = ctx.r11.s64 + 164;
	// bl 0x8277b880
	ctx.lr = 0x82F5CF4C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17936(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17936, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5CF68"))) PPC_WEAK_FUNC(sub_82F5CF68);
PPC_FUNC_IMPL(__imp__sub_82F5CF68) {
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
	// addi r4,r11,172
	ctx.r4.s64 = ctx.r11.s64 + 172;
	// bl 0x8277b880
	ctx.lr = 0x82F5CF84;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17356(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17356, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5CFA0"))) PPC_WEAK_FUNC(sub_82F5CFA0);
PPC_FUNC_IMPL(__imp__sub_82F5CFA0) {
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
	// addi r4,r11,180
	ctx.r4.s64 = ctx.r11.s64 + 180;
	// bl 0x8277b880
	ctx.lr = 0x82F5CFBC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17884(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17884, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5CFD8"))) PPC_WEAK_FUNC(sub_82F5CFD8);
PPC_FUNC_IMPL(__imp__sub_82F5CFD8) {
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
	// addi r4,r11,188
	ctx.r4.s64 = ctx.r11.s64 + 188;
	// bl 0x8277b880
	ctx.lr = 0x82F5CFF4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17676(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17676, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5D010"))) PPC_WEAK_FUNC(sub_82F5D010);
PPC_FUNC_IMPL(__imp__sub_82F5D010) {
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
	// addi r4,r11,200
	ctx.r4.s64 = ctx.r11.s64 + 200;
	// bl 0x8277b880
	ctx.lr = 0x82F5D02C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,18384(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18384, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5D048"))) PPC_WEAK_FUNC(sub_82F5D048);
PPC_FUNC_IMPL(__imp__sub_82F5D048) {
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
	// addi r4,r11,212
	ctx.r4.s64 = ctx.r11.s64 + 212;
	// bl 0x8277b880
	ctx.lr = 0x82F5D064;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17644(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17644, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5D080"))) PPC_WEAK_FUNC(sub_82F5D080);
PPC_FUNC_IMPL(__imp__sub_82F5D080) {
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
	// addi r4,r11,228
	ctx.r4.s64 = ctx.r11.s64 + 228;
	// bl 0x8277b880
	ctx.lr = 0x82F5D09C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,18344(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18344, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5D0B8"))) PPC_WEAK_FUNC(sub_82F5D0B8);
PPC_FUNC_IMPL(__imp__sub_82F5D0B8) {
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
	// addi r4,r11,240
	ctx.r4.s64 = ctx.r11.s64 + 240;
	// bl 0x8277b880
	ctx.lr = 0x82F5D0D4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,18220(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18220, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5D0F0"))) PPC_WEAK_FUNC(sub_82F5D0F0);
PPC_FUNC_IMPL(__imp__sub_82F5D0F0) {
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
	// addi r4,r11,252
	ctx.r4.s64 = ctx.r11.s64 + 252;
	// bl 0x8277b880
	ctx.lr = 0x82F5D10C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17296(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17296, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5D128"))) PPC_WEAK_FUNC(sub_82F5D128);
PPC_FUNC_IMPL(__imp__sub_82F5D128) {
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
	// addi r4,r11,260
	ctx.r4.s64 = ctx.r11.s64 + 260;
	// bl 0x8277b880
	ctx.lr = 0x82F5D144;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17760(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17760, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5D160"))) PPC_WEAK_FUNC(sub_82F5D160);
PPC_FUNC_IMPL(__imp__sub_82F5D160) {
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
	// addi r4,r11,272
	ctx.r4.s64 = ctx.r11.s64 + 272;
	// bl 0x8277b880
	ctx.lr = 0x82F5D17C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17308(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17308, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5D198"))) PPC_WEAK_FUNC(sub_82F5D198);
PPC_FUNC_IMPL(__imp__sub_82F5D198) {
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
	// addi r4,r11,292
	ctx.r4.s64 = ctx.r11.s64 + 292;
	// bl 0x8277b880
	ctx.lr = 0x82F5D1B4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17544(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17544, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5D1D0"))) PPC_WEAK_FUNC(sub_82F5D1D0);
PPC_FUNC_IMPL(__imp__sub_82F5D1D0) {
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
	// addi r4,r11,312
	ctx.r4.s64 = ctx.r11.s64 + 312;
	// bl 0x8277b880
	ctx.lr = 0x82F5D1EC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17896(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17896, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5D208"))) PPC_WEAK_FUNC(sub_82F5D208);
PPC_FUNC_IMPL(__imp__sub_82F5D208) {
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
	// addi r4,r11,336
	ctx.r4.s64 = ctx.r11.s64 + 336;
	// bl 0x8277b880
	ctx.lr = 0x82F5D224;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17692(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17692, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F5D240"))) PPC_WEAK_FUNC(sub_82F5D240);
PPC_FUNC_IMPL(__imp__sub_82F5D240) {
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
	// addi r4,r11,360
	ctx.r4.s64 = ctx.r11.s64 + 360;
	// bl 0x8277b880
	ctx.lr = 0x82F5D25C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17312(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17312, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

