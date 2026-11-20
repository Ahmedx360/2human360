#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_827796A8"))) PPC_WEAK_FUNC(sub_827796A8);
PPC_FUNC_IMPL(__imp__sub_827796A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x827796B0;
	__savegprlr_27(ctx, base);
	// stwu r1,-672(r1)
	ea = -672 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82833180
	ctx.lr = 0x827796C0;
	sub_82833180(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r10,23672
	ctx.r10.s64 = ctx.r10.s64 + 23672;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// li r3,32
	ctx.r3.s64 = 32;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// addi r27,r31,12
	ctx.r27.s64 = ctx.r31.s64 + 12;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// bl 0x82333900
	ctx.lr = 0x827796FC;
	sub_82333900(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x8277971c
	if (ctx.cr0.eq) goto loc_8277971C;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// addi r11,r11,15852
	ctx.r11.s64 = ctx.r11.s64 + 15852;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bl 0x8312e7dc
	ctx.lr = 0x82779718;
	sub_8312E7DC(ctx, base);
	// b 0x82779720
	goto loc_82779720;
loc_8277971C:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_82779720:
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// addi r4,r11,23652
	ctx.r4.s64 = ctx.r11.s64 + 23652;
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// li r5,7
	ctx.r5.s64 = 7;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// bl 0x82a4ea80
	ctx.lr = 0x82779750;
	sub_82A4EA80(ctx, base);
	// li r5,253
	ctx.r5.s64 = 253;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,87
	ctx.r3.s64 = ctx.r1.s64 + 87;
	// bl 0x82a4efb0
	ctx.lr = 0x82779760;
	sub_82A4EFB0(ctx, base);
	// li r5,259
	ctx.r5.s64 = 259;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r30,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r30.u8);
	// addi r3,r1,353
	ctx.r3.s64 = ctx.r1.s64 + 353;
	// bl 0x82a4efb0
	ctx.lr = 0x82779774;
	sub_82A4EFB0(ctx, base);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_8277977C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8277977c
	if (!ctx.cr6.eq) goto loc_8277977C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82779790:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x82779790
	if (!ctx.cr6.eq) goto loc_82779790;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x828166e0
	ctx.lr = 0x827797B4;
	sub_828166E0(ctx, base);
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82333900
	ctx.lr = 0x827797BC;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827797d0
	if (ctx.cr0.eq) goto loc_827797D0;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// bl 0x8277b4c8
	ctx.lr = 0x827797CC;
	sub_8277B4C8(ctx, base);
	// b 0x827797d4
	goto loc_827797D4;
loc_827797D0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_827797D4:
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82333900
	ctx.lr = 0x827797E0;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827797f8
	if (ctx.cr0.eq) goto loc_827797F8;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// b 0x827797fc
	goto loc_827797FC;
loc_827797F8:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_827797FC:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r3,72
	ctx.r3.s64 = 72;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// bl 0x82333900
	ctx.lr = 0x82779818;
	sub_82333900(ctx, base);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82779830"))) PPC_WEAK_FUNC(sub_82779830);
PPC_FUNC_IMPL(__imp__sub_82779830) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r10,r10,23672
	ctx.r10.s64 = ctx.r10.s64 + 23672;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82779878
	if (ctx.cr6.eq) goto loc_82779878;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82332db8
	ctx.lr = 0x82779868;
	sub_82332DB8(ctx, base);
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// bl 0x82332db8
	ctx.lr = 0x82779870;
	sub_82332DB8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
loc_82779878:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82779898
	if (ctx.cr6.eq) goto loc_82779898;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82779898;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82779898:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82779ae8
	ctx.lr = 0x827798A0;
	sub_82779AE8(ctx, base);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827798c0
	if (ctx.cr6.eq) goto loc_827798C0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827798C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827798C0:
	// lwz r30,60(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82779904
	if (ctx.cr6.eq) goto loc_82779904;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82332db8
	ctx.lr = 0x827798D4;
	sub_82332DB8(ctx, base);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82332db8
	ctx.lr = 0x827798DC;
	sub_82332DB8(ctx, base);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x82332db8
	ctx.lr = 0x827798E4;
	sub_82332DB8(ctx, base);
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x82775cb8
	ctx.lr = 0x827798EC;
	sub_82775CB8(ctx, base);
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x82775cb8
	ctx.lr = 0x827798F4;
	sub_82775CB8(ctx, base);
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// bl 0x82775cb8
	ctx.lr = 0x827798FC;
	sub_82775CB8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332db8
	ctx.lr = 0x82779904;
	sub_82332DB8(ctx, base);
loc_82779904:
	// lwz r30,64(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82779948
	if (ctx.cr6.eq) goto loc_82779948;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82332db8
	ctx.lr = 0x82779918;
	sub_82332DB8(ctx, base);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82332db8
	ctx.lr = 0x82779920;
	sub_82332DB8(ctx, base);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x82332db8
	ctx.lr = 0x82779928;
	sub_82332DB8(ctx, base);
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x82775cb8
	ctx.lr = 0x82779930;
	sub_82775CB8(ctx, base);
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x82775cb8
	ctx.lr = 0x82779938;
	sub_82775CB8(ctx, base);
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// bl 0x82775cb8
	ctx.lr = 0x82779940;
	sub_82775CB8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332db8
	ctx.lr = 0x82779948;
	sub_82332DB8(ctx, base);
loc_82779948:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,24088
	ctx.r11.s64 = ctx.r11.s64 + 24088;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82833238
	ctx.lr = 0x8277995C;
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

__attribute__((alias("__imp__sub_82779978"))) PPC_WEAK_FUNC(sub_82779978);
PPC_FUNC_IMPL(__imp__sub_82779978) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x82779980;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82a455d0
	ctx.lr = 0x827799A0;
	sub_82A455D0(ctx, base);
	// lwz r5,68(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// subfic r11,r26,0
	ctx.xer.ca = ctx.r26.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r26.s64;
	// li r10,4
	ctx.r10.s64 = 4;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// addi r9,r9,-24224
	ctx.r9.s64 = ctx.r9.s64 + -24224;
	// lis r8,-32136
	ctx.r8.s64 = -2106064896;
	// li r7,-1
	ctx.r7.s64 = -1;
	// addi r8,r8,-24224
	ctx.r8.s64 = ctx.r8.s64 + -24224;
	// li r6,5
	ctx.r6.s64 = 5;
	// li r3,28
	ctx.r3.s64 = 28;
	// lwz r5,8(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r8.u32);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r31,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r31.u32);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r31,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r31.u32);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r7,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r7.u32);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r6,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r6.u32);
	// bl 0x82833108
	ctx.lr = 0x82779A44;
	sub_82833108(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lis r27,-31949
	ctx.r27.s64 = -2093809664;
	// beq 0x82779ac0
	if (ctx.cr0.eq) goto loc_82779AC0;
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82779a68
	if (ctx.cr0.eq) goto loc_82779A68;
	// lwz r28,80(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x82779a6c
	goto loc_82779A6C;
loc_82779A68:
	// li r28,0
	ctx.r28.s64 = 0;
loc_82779A6C:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82779a7c
	if (ctx.cr0.eq) goto loc_82779A7C;
	// lwz r29,80(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x82779a80
	goto loc_82779A80;
loc_82779A7C:
	// li r29,0
	ctx.r29.s64 = 0;
loc_82779A80:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r25,68(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// bl 0x82833180
	ctx.lr = 0x82779A8C;
	sub_82833180(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-8531
	ctx.r10.s64 = -559087616;
	// stw r29,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r29.u32);
	// addi r11,r11,23872
	ctx.r11.s64 = ctx.r11.s64 + 23872;
	// stw r28,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r28.u32);
	// ori r10,r10,47806
	ctx.r10.u64 = ctx.r10.u64 | 47806;
	// stw r25,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r25.u32);
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
	// b 0x82779ac4
	goto loc_82779AC4;
loc_82779AC0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82779AC4:
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x82779AD0;
	sub_82833A30(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r26,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r26.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82779AE8"))) PPC_WEAK_FUNC(sub_82779AE8);
PPC_FUNC_IMPL(__imp__sub_82779AE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x82779AF0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82779be0
	if (ctx.cr6.eq) goto loc_82779BE0;
	// lwz r30,32(r25)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + 32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82779B1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r24,-31949
	ctx.r24.s64 = -2093809664;
	// lis r11,-32105
	ctx.r11.s64 = -2104033280;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r10,r11,29240
	ctx.r10.s64 = ctx.r11.s64 + 29240;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r11,13024(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13024);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82779b4c
	if (ctx.cr0.eq) goto loc_82779B4C;
	// lwz r26,80(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x82779b50
	goto loc_82779B50;
loc_82779B4C:
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
loc_82779B50:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82779b60
	if (ctx.cr0.eq) goto loc_82779B60;
	// lwz r27,80(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x82779b64
	goto loc_82779B64;
loc_82779B60:
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
loc_82779B64:
	// li r3,40
	ctx.r3.s64 = 40;
	// lwz r28,12(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// bl 0x82833108
	ctx.lr = 0x82779B70;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82779bb8
	if (ctx.cr0.eq) goto loc_82779BB8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82833180
	ctx.lr = 0x82779B80;
	sub_82833180(ctx, base);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// stw r27,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r27.u32);
	// lis r9,-8531
	ctx.r9.s64 = -559087616;
	// stw r26,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
	// addi r10,r10,23976
	ctx.r10.s64 = ctx.r10.s64 + 23976;
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
	// b 0x82779bbc
	goto loc_82779BBC;
loc_82779BB8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82779BBC:
	// lwz r11,13024(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x82779BC8;
	sub_82833A30(ctx, base);
	// stw r29,12(r25)
	PPC_STORE_U32(ctx.r25.u32 + 12, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82779BE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82779BE0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82779BE8"))) PPC_WEAK_FUNC(sub_82779BE8);
PPC_FUNC_IMPL(__imp__sub_82779BE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x82779BF0;
	__savegprlr_24(ctx, base);
	// stwu r1,-576(r1)
	ea = -576 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// lwz r24,32(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82779C18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8277a028
	if (ctx.cr6.eq) goto loc_8277A028;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8277a028
	if (ctx.cr6.eq) goto loc_8277A028;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8277a028
	if (!ctx.cr6.eq) goto loc_8277A028;
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// li r26,0
	ctx.r26.s64 = 0;
	// ori r30,r11,36008
	ctx.r30.u64 = ctx.r11.u64 | 36008;
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// addi r11,r11,76
	ctx.r11.s64 = ctx.r11.s64 + 76;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r10,r10,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// addi r10,r10,15
	ctx.r10.s64 = ctx.r10.s64 + 15;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82779cac
	if (!ctx.cr6.eq) goto loc_82779CAC;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82333900
	ctx.lr = 0x82779C74;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82779c8c
	if (ctx.cr0.eq) goto loc_82779C8C;
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x8277a1e0
	ctx.lr = 0x82779C88;
	sub_8277A1E0(ctx, base);
	// b 0x82779c90
	goto loc_82779C90;
loc_82779C8C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_82779C90:
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// addi r11,r11,76
	ctx.r11.s64 = ctx.r11.s64 + 76;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r10,r10,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// addi r10,r10,15
	ctx.r10.s64 = ctx.r10.s64 + 15;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r3.u32);
loc_82779CAC:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r9,r1,116
	ctx.r9.s64 = ctx.r1.s64 + 116;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 15;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r11,r31
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82742248
	ctx.lr = 0x82779CEC;
	sub_82742248(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// addi r9,r1,108
	ctx.r9.s64 = ctx.r1.s64 + 108;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r8,r1,104
	ctx.r8.s64 = ctx.r1.s64 + 104;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82742248
	ctx.lr = 0x82779D18;
	sub_82742248(ctx, base);
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// addi r10,r1,180
	ctx.r10.s64 = ctx.r1.s64 + 180;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82742248
	ctx.lr = 0x82779D44;
	sub_82742248(ctx, base);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// lwz r6,108(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// rlwinm r4,r10,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// mullw r7,r10,r8
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r11,6
	ctx.r11.s64 = 6;
	// mullw r10,r4,r6
	ctx.r10.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r6.s32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82779D6C:
	// std r5,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r5.u64);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// bdnz 0x82779d6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82779D6C;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// beq cr6,0x82779d98
	if (ctx.cr6.eq) goto loc_82779D98;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
loc_82779D98:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r26,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r26.u32);
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// stw r9,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// stw r5,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r5.u32);
	// stw r7,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r7.u32);
	// stw r10,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r10.u32);
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// stw r8,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r8.u32);
	// stw r6,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r6.u32);
	// stw r4,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r4.u32);
	// beq cr6,0x82779e20
	if (ctx.cr6.eq) goto loc_82779E20;
loc_82779DDC:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82c360e8
	ctx.lr = 0x82779DE8;
	sub_82C360E8(ctx, base);
	// lis r11,5734
	ctx.r11.s64 = 375783424;
	// ori r11,r11,38
	ctx.r11.u64 = ctx.r11.u64 | 38;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82779e1c
	if (ctx.cr6.eq) goto loc_82779E1C;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82779e10
	if (!ctx.cr6.eq) goto loc_82779E10;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
loc_82779E10:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne 0x82779ddc
	if (!ctx.cr0.eq) goto loc_82779DDC;
	// b 0x82779e20
	goto loc_82779E20;
loc_82779E1C:
	// stw r29,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r29.u32);
loc_82779E20:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r5,r11,0,0,19
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// rlwinm r4,r10,0,0,19
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF000;
	// bl 0x827444f0
	ctx.lr = 0x82779E38;
	sub_827444F0(ctx, base);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r5,r11,0,0,19
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// rlwinm r4,r10,0,0,19
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF000;
	// bl 0x827444f0
	ctx.lr = 0x82779E50;
	sub_827444F0(ctx, base);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r5,r11,0,0,19
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// rlwinm r4,r10,0,0,19
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF000;
	// bl 0x827444f0
	ctx.lr = 0x82779E68;
	sub_827444F0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// rldicr r29,r11,63,63
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// beq cr6,0x82779f88
	if (ctx.cr6.eq) goto loc_82779F88;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r4,12440(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12440);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82779e90
	if (ctx.cr6.eq) goto loc_82779E90;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x827446d8
	ctx.lr = 0x82779E90;
	sub_827446D8(ctx, base);
loc_82779E90:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,23660
	ctx.r6.s64 = ctx.r11.s64 + 23660;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x827793a8
	ctx.lr = 0x82779EA8;
	sub_827793A8(ctx, base);
	// lis r5,0
	ctx.r5.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,43981
	ctx.r5.u64 = ctx.r5.u64 | 43981;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x8298f940
	ctx.lr = 0x82779EC4;
	sub_8298F940(ctx, base);
	// lis r5,0
	ctx.r5.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,43982
	ctx.r5.u64 = ctx.r5.u64 | 43982;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x8298f940
	ctx.lr = 0x82779EE0;
	sub_8298F940(ctx, base);
	// lis r5,0
	ctx.r5.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,43983
	ctx.r5.u64 = ctx.r5.u64 | 43983;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8298f940
	ctx.lr = 0x82779EFC;
	sub_8298F940(ctx, base);
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// addi r8,r1,256
	ctx.r8.s64 = ctx.r1.s64 + 256;
	// addi r3,r11,-13880
	ctx.r3.s64 = ctx.r11.s64 + -13880;
	// addi r7,r1,336
	ctx.r7.s64 = ctx.r1.s64 + 336;
	// addi r6,r1,416
	ctx.r6.s64 = ctx.r1.s64 + 416;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,-13880(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13880);
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82779F28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_82779F2C:
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// srd r6,r29,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r29.u64 >> (ctx.r11.u8 & 0x7F));
	// bl 0x82742d00
	ctx.lr = 0x82779F48;
	sub_82742D00(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// blt cr6,0x82779f2c
	if (ctx.cr6.lt) goto loc_82779F2C;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r31,10908(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10908);
	// stw r31,10928(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10928, ctx.r31.u32);
	// bl 0x82746938
	ctx.lr = 0x82779F64;
	sub_82746938(ctx, base);
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8298fa00
	ctx.lr = 0x82779F70;
	sub_8298FA00(ctx, base);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x8298fa00
	ctx.lr = 0x82779F78;
	sub_8298FA00(ctx, base);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x8298fa00
	ctx.lr = 0x82779F80;
	sub_8298FA00(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8298f278
	ctx.lr = 0x82779F88;
	sub_8298F278(ctx, base);
loc_82779F88:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r26,11820(r11)
	PPC_STORE_U32(ctx.r11.u32 + 11820, ctx.r26.u32);
	// ld r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// std r10,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// bl 0x82994080
	ctx.lr = 0x82779FAC;
	sub_82994080(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x829940e8
	ctx.lr = 0x82779FBC;
	sub_829940E8(ctx, base);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_82779FC0:
	// subfic r11,r31,95
	ctx.xer.ca = ctx.r31.u32 <= 95;
	ctx.r11.s64 = 95 - ctx.r31.s64;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// mulli r11,r11,21846
	ctx.r11.s64 = ctx.r11.s64 * 21846;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// srd r8,r29,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r29.u64 >> (ctx.r11.u8 & 0x7F));
	// bl 0x8274e658
	ctx.lr = 0x82779FF0;
	sub_8274E658(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82994158
	ctx.lr = 0x8277A000;
	sub_82994158(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// blt cr6,0x82779fc0
	if (ctx.cr6.lt) goto loc_82779FC0;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277A020;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x8277a040
	goto loc_8277A040;
loc_8277A028:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277A03C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8277A040:
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8277A048"))) PPC_WEAK_FUNC(sub_8277A048);
PPC_FUNC_IMPL(__imp__sub_8277A048) {
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
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8277a0f4
	if (ctx.cr6.eq) goto loc_8277A0F4;
	// lwz r30,32(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277A084;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a455d0
	ctx.lr = 0x8277A094;
	sub_82A455D0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82c36108
	ctx.lr = 0x8277A0A0;
	sub_82C36108(ctx, base);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r10,1000
	ctx.r10.s64 = 1000;
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// divwu r11,r11,r10
	ctx.r11.u32 = ctx.r11.u32 / ctx.r10.u32;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277A0F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8277A0F4:
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

__attribute__((alias("__imp__sub_8277A110"))) PPC_WEAK_FUNC(sub_8277A110);
PPC_FUNC_IMPL(__imp__sub_8277A110) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8277a148
	if (!ctx.cr6.eq) goto loc_8277A148;
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277A13C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne 0x8277a14c
	if (!ctx.cr0.eq) goto loc_8277A14C;
loc_8277A148:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8277A14C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8277A160"))) PPC_WEAK_FUNC(sub_8277A160);
PPC_FUNC_IMPL(__imp__sub_8277A160) {
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
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8277a18c
	if (!ctx.cr6.eq) goto loc_8277A18C;
	// bl 0x8277a048
	ctx.lr = 0x8277A184;
	sub_8277A048(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8277a1c8
	goto loc_8277A1C8;
loc_8277A18C:
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rotlwi r5,r4,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277A1A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8277a1b4
	if (ctx.cr6.eq) goto loc_8277A1B4;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_8277A1B4:
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// rlwinm r11,r11,0,27,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFC1F;
	// addi r3,r11,995
	ctx.r3.s64 = ctx.r11.s64 + 995;
loc_8277A1C8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8277A1E0"))) PPC_WEAK_FUNC(sub_8277A1E0);
PPC_FUNC_IMPL(__imp__sub_8277A1E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8277A1E8;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r3,52
	ctx.r3.s64 = 52;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// bl 0x82333900
	ctx.lr = 0x8277A214;
	sub_82333900(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x8277a230
	if (ctx.cr0.eq) goto loc_8277A230;
	// li r5,52
	ctx.r5.s64 = 52;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a4efb0
	ctx.lr = 0x8277A22C;
	sub_82A4EFB0(ctx, base);
	// b 0x8277a234
	goto loc_8277A234;
loc_8277A230:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_8277A234:
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x82333900
	ctx.lr = 0x8277A240;
	sub_82333900(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x8277a25c
	if (ctx.cr0.eq) goto loc_8277A25C;
	// li r5,52
	ctx.r5.s64 = 52;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a4efb0
	ctx.lr = 0x8277A258;
	sub_82A4EFB0(ctx, base);
	// b 0x8277a260
	goto loc_8277A260;
loc_8277A25C:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_8277A260:
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x82333900
	ctx.lr = 0x8277A26C;
	sub_82333900(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x8277a28c
	if (ctx.cr0.eq) goto loc_8277A28C;
	// li r5,52
	ctx.r5.s64 = 52;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a4efb0
	ctx.lr = 0x8277A284;
	sub_82A4EFB0(ctx, base);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x8277a290
	goto loc_8277A290;
loc_8277A28C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8277A290:
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r10,10240
	ctx.r10.s64 = 671088640;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// ori r29,r10,2
	ctx.r29.u64 = ctx.r10.u64 | 2;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b1ff70
	ctx.lr = 0x8277A2D8;
	sub_82B1FF70(ctx, base);
	// addi r11,r1,116
	ctx.r11.s64 = ctx.r1.s64 + 116;
	// rlwinm r27,r27,31,1,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// rlwinm r28,r28,31,1,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x82b1ff70
	ctx.lr = 0x8277A31C;
	sub_82B1FF70(ctx, base);
	// addi r11,r1,120
	ctx.r11.s64 = ctx.r1.s64 + 120;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x82b1ff70
	ctx.lr = 0x8277A358;
	sub_82B1FF70(ctx, base);
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// lwz r3,13016(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13016);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8277a378
	if (!ctx.cr6.eq) goto loc_8277A378;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82775c60
	ctx.lr = 0x8277A374;
	sub_82775C60(ctx, base);
	// b 0x8277a390
	goto loc_8277A390;
loc_8277A378:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277A390;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8277A390:
	// lwz r11,13016(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13016);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8277a3b0
	if (!ctx.cr6.eq) goto loc_8277A3B0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82775c60
	ctx.lr = 0x8277A3AC;
	sub_82775C60(ctx, base);
	// b 0x8277a3cc
	goto loc_8277A3CC;
loc_8277A3B0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277A3CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8277A3CC:
	// lwz r11,13016(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13016);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8277a3ec
	if (!ctx.cr6.eq) goto loc_8277A3EC;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x82775c60
	ctx.lr = 0x8277A3E8;
	sub_82775C60(ctx, base);
	// b 0x8277a408
	goto loc_8277A408;
loc_8277A3EC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277A408;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8277A408:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x8277A420;
	sub_82A4EFB0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,116(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82a4efb0
	ctx.lr = 0x8277A430;
	sub_82A4EFB0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82a4efb0
	ctx.lr = 0x8277A440;
	sub_82A4EFB0(ctx, base);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82b20198
	ctx.lr = 0x8277A44C;
	sub_82B20198(ctx, base);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82b20198
	ctx.lr = 0x8277A458;
	sub_82B20198(ctx, base);
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82b20198
	ctx.lr = 0x8277A464;
	sub_82B20198(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8277A478"))) PPC_WEAK_FUNC(sub_8277A478);
PPC_FUNC_IMPL(__imp__sub_8277A478) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,23376(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23376);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8277a4b8
	if (!ctx.cr0.eq) goto loc_8277A4B8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// stw r11,23376(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23376, ctx.r11.u32);
	// addi r3,r9,23596
	ctx.r3.s64 = ctx.r9.s64 + 23596;
	// bl 0x82816528
	ctx.lr = 0x8277A4B0;
	sub_82816528(ctx, base);
	// stw r3,23372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23372, ctx.r3.u32);
	// b 0x8277a4bc
	goto loc_8277A4BC;
loc_8277A4B8:
	// lwz r3,23372(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23372);
loc_8277A4BC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8277A4D0"))) PPC_WEAK_FUNC(sub_8277A4D0);
PPC_FUNC_IMPL(__imp__sub_8277A4D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8277a520
	ctx.lr = 0x8277A4F0;
	sub_8277A520(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277A504;
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

__attribute__((alias("__imp__sub_8277A520"))) PPC_WEAK_FUNC(sub_8277A520);
PPC_FUNC_IMPL(__imp__sub_8277A520) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,23380
	ctx.r31.s64 = ctx.r11.s64 + 23380;
	// lwz r11,23384(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23384);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8277a568
	if (!ctx.cr0.eq) goto loc_8277A568;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,23800
	ctx.r9.s64 = ctx.r9.s64 + 23800;
	// stw r11,23384(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23384, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-27816
	ctx.r3.s64 = ctx.r11.s64 + -27816;
	// bl 0x82a4c758
	ctx.lr = 0x8277A568;
	sub_82A4C758(ctx, base);
loc_8277A568:
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

__attribute__((alias("__imp__sub_8277A580"))) PPC_WEAK_FUNC(sub_8277A580);
PPC_FUNC_IMPL(__imp__sub_8277A580) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,23368(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23368);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8277a5c0
	if (!ctx.cr0.eq) goto loc_8277A5C0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// stw r11,23368(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23368, ctx.r11.u32);
	// addi r3,r9,23612
	ctx.r3.s64 = ctx.r9.s64 + 23612;
	// bl 0x82816528
	ctx.lr = 0x8277A5B8;
	sub_82816528(ctx, base);
	// stw r3,23364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23364, ctx.r3.u32);
	// b 0x8277a5c4
	goto loc_8277A5C4;
loc_8277A5C0:
	// lwz r3,23364(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23364);
loc_8277A5C4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8277A5D8"))) PPC_WEAK_FUNC(sub_8277A5D8);
PPC_FUNC_IMPL(__imp__sub_8277A5D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8277a628
	ctx.lr = 0x8277A5F8;
	sub_8277A628(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277A60C;
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

__attribute__((alias("__imp__sub_8277A628"))) PPC_WEAK_FUNC(sub_8277A628);
PPC_FUNC_IMPL(__imp__sub_8277A628) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,14080
	ctx.r31.s64 = ctx.r11.s64 + 14080;
	// lwz r11,14076(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14076);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8277a670
	if (!ctx.cr0.eq) goto loc_8277A670;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,23952
	ctx.r9.s64 = ctx.r9.s64 + 23952;
	// stw r11,14076(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14076, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-27840
	ctx.r3.s64 = ctx.r11.s64 + -27840;
	// bl 0x82a4c758
	ctx.lr = 0x8277A670;
	sub_82A4C758(ctx, base);
loc_8277A670:
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

__attribute__((alias("__imp__sub_8277A688"))) PPC_WEAK_FUNC(sub_8277A688);
PPC_FUNC_IMPL(__imp__sub_8277A688) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8277a6c0
	if (ctx.cr6.eq) goto loc_8277A6C0;
	// bl 0x8277a918
	ctx.lr = 0x8277A6B0;
	sub_8277A918(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8277a6c0
	if (!ctx.cr6.eq) goto loc_8277A6C0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8277a6cc
	goto loc_8277A6CC;
loc_8277A6C0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333c70
	ctx.lr = 0x8277A6CC;
	sub_82333C70(ctx, base);
loc_8277A6CC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8277A6E8"))) PPC_WEAK_FUNC(sub_8277A6E8);
PPC_FUNC_IMPL(__imp__sub_8277A6E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8277a918
	sub_8277A918(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8277A6F0"))) PPC_WEAK_FUNC(sub_8277A6F0);
PPC_FUNC_IMPL(__imp__sub_8277A6F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x8277A70C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8277a77c
	if (ctx.cr0.eq) goto loc_8277A77C;
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
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r9,r9,23976
	ctx.r9.s64 = ctx.r9.s64 + 23976;
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
	// b 0x8277a780
	goto loc_8277A780;
loc_8277A77C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8277A780:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8277A798"))) PPC_WEAK_FUNC(sub_8277A798);
PPC_FUNC_IMPL(__imp__sub_8277A798) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8277a918
	ctx.lr = 0x8277A7B8;
	sub_8277A918(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8277a7cc
	if (ctx.cr6.eq) goto loc_8277A7CC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333b08
	ctx.lr = 0x8277A7CC;
	sub_82333B08(ctx, base);
loc_8277A7CC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8277A7E8"))) PPC_WEAK_FUNC(sub_8277A7E8);
PPC_FUNC_IMPL(__imp__sub_8277A7E8) {
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
	ctx.lr = 0x8277A800;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8277a854
	if (ctx.cr0.eq) goto loc_8277A854;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82833180
	ctx.lr = 0x8277A810;
	sub_82833180(ctx, base);
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r8,-8531
	ctx.r8.s64 = -559087616;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r9,r9,23976
	ctx.r9.s64 = ctx.r9.s64 + 23976;
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
	// b 0x8277a858
	goto loc_8277A858;
loc_8277A854:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8277A858:
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

__attribute__((alias("__imp__sub_8277A870"))) PPC_WEAK_FUNC(sub_8277A870);
PPC_FUNC_IMPL(__imp__sub_8277A870) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,23352(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23352);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8277a8b0
	if (!ctx.cr0.eq) goto loc_8277A8B0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,23352(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23352, ctx.r11.u32);
	// addi r3,r9,4840
	ctx.r3.s64 = ctx.r9.s64 + 4840;
	// bl 0x82816528
	ctx.lr = 0x8277A8A8;
	sub_82816528(ctx, base);
	// stw r3,23348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23348, ctx.r3.u32);
	// b 0x8277a8b4
	goto loc_8277A8B4;
loc_8277A8B0:
	// lwz r3,23348(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23348);
loc_8277A8B4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8277A8C8"))) PPC_WEAK_FUNC(sub_8277A8C8);
PPC_FUNC_IMPL(__imp__sub_8277A8C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8277a918
	ctx.lr = 0x8277A8E8;
	sub_8277A918(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277A8FC;
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

__attribute__((alias("__imp__sub_8277A918"))) PPC_WEAK_FUNC(sub_8277A918);
PPC_FUNC_IMPL(__imp__sub_8277A918) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,23356
	ctx.r31.s64 = ctx.r11.s64 + 23356;
	// lwz r11,23360(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23360);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8277a960
	if (!ctx.cr0.eq) goto loc_8277A960;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,24056
	ctx.r9.s64 = ctx.r9.s64 + 24056;
	// stw r11,23360(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23360, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-27792
	ctx.r3.s64 = ctx.r11.s64 + -27792;
	// bl 0x82a4c758
	ctx.lr = 0x8277A960;
	sub_82A4C758(ctx, base);
loc_8277A960:
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

__attribute__((alias("__imp__sub_8277A978"))) PPC_WEAK_FUNC(sub_8277A978);
PPC_FUNC_IMPL(__imp__sub_8277A978) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8277A988"))) PPC_WEAK_FUNC(sub_8277A988);
PPC_FUNC_IMPL(__imp__sub_8277A988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,24088
	ctx.r11.s64 = ctx.r11.s64 + 24088;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82833238
	ctx.lr = 0x8277A9B4;
	sub_82833238(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8277a9c4
	if (ctx.cr0.eq) goto loc_8277A9C4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x8277A9C4;
	sub_82332DB8(ctx, base);
loc_8277A9C4:
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

__attribute__((alias("__imp__sub_8277A9E0"))) PPC_WEAK_FUNC(sub_8277A9E0);
PPC_FUNC_IMPL(__imp__sub_8277A9E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,24076
	ctx.r3.s64 = ctx.r11.s64 + 24076;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8277A9F0"))) PPC_WEAK_FUNC(sub_8277A9F0);
PPC_FUNC_IMPL(__imp__sub_8277A9F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8277aa50
	ctx.lr = 0x8277AA10;
	sub_8277AA50(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8277aa20
	if (!ctx.cr6.eq) goto loc_8277AA20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8277aa34
	goto loc_8277AA34;
loc_8277AA20:
	// bl 0x82333d20
	ctx.lr = 0x8277AA24;
	sub_82333D20(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8277aa34
	if (ctx.cr6.eq) goto loc_8277AA34;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8277AA34:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8277AA50"))) PPC_WEAK_FUNC(sub_8277AA50);
PPC_FUNC_IMPL(__imp__sub_8277AA50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,23344
	ctx.r31.s64 = ctx.r11.s64 + 23344;
	// lwz r11,-23544(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23544);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8277aa98
	if (!ctx.cr0.eq) goto loc_8277AA98;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,24212
	ctx.r9.s64 = ctx.r9.s64 + 24212;
	// stw r11,-23544(r10)
	PPC_STORE_U32(ctx.r10.u32 + -23544, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-27768
	ctx.r3.s64 = ctx.r11.s64 + -27768;
	// bl 0x82a4c758
	ctx.lr = 0x8277AA98;
	sub_82A4C758(ctx, base);
loc_8277AA98:
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

__attribute__((alias("__imp__sub_8277AAB0"))) PPC_WEAK_FUNC(sub_8277AAB0);
PPC_FUNC_IMPL(__imp__sub_8277AAB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,23340(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23340);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8277aaf0
	if (!ctx.cr0.eq) goto loc_8277AAF0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// stw r11,23340(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23340, ctx.r11.u32);
	// addi r3,r9,24076
	ctx.r3.s64 = ctx.r9.s64 + 24076;
	// bl 0x82816528
	ctx.lr = 0x8277AAE8;
	sub_82816528(ctx, base);
	// stw r3,23336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23336, ctx.r3.u32);
	// b 0x8277aaf4
	goto loc_8277AAF4;
loc_8277AAF0:
	// lwz r3,23336(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23336);
loc_8277AAF4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8277AB08"))) PPC_WEAK_FUNC(sub_8277AB08);
PPC_FUNC_IMPL(__imp__sub_8277AB08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8277aa50
	ctx.lr = 0x8277AB28;
	sub_8277AA50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277AB3C;
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

__attribute__((alias("__imp__sub_8277AB58"))) PPC_WEAK_FUNC(sub_8277AB58);
PPC_FUNC_IMPL(__imp__sub_8277AB58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// beq cr6,0x8277ab98
	if (ctx.cr6.eq) goto loc_8277AB98;
	// bl 0x8277aa50
	ctx.lr = 0x8277AB78;
	sub_8277AA50(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8277ab88
	if (!ctx.cr6.eq) goto loc_8277AB88;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8277ab9c
	goto loc_8277AB9C;
loc_8277AB88:
	// bl 0x82333d20
	ctx.lr = 0x8277AB8C;
	sub_82333D20(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x8277ab9c
	if (ctx.cr6.eq) goto loc_8277AB9C;
loc_8277AB98:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8277AB9C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8277ABB0"))) PPC_WEAK_FUNC(sub_8277ABB0);
PPC_FUNC_IMPL(__imp__sub_8277ABB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// b 0x8277abd0
	goto loc_8277ABD0;
loc_8277ABC8:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a6e460
	ctx.lr = 0x8277ABD0;
	sub_82A6E460(ctx, base);
loc_8277ABD0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277ABE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8277abc8
	if (ctx.cr0.eq) goto loc_8277ABC8;
	// b 0x8277ac08
	goto loc_8277AC08;
loc_8277ABF0:
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277ABFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8277ac08
	if (!ctx.cr0.eq) goto loc_8277AC08;
	// bl 0x82a6e460
	ctx.lr = 0x8277AC08;
	sub_82A6E460(ctx, base);
loc_8277AC08:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,116(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277AC1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x8277abf0
	if (ctx.cr0.eq) goto loc_8277ABF0;
	// b 0x8277ac4c
	goto loc_8277AC4C;
loc_8277AC30:
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277AC3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a6e460
	ctx.lr = 0x8277AC44;
	sub_82A6E460(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8277AC4C:
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277AC58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x8277ac30
	if (ctx.cr0.eq) goto loc_8277AC30;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277AC78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8277AC90"))) PPC_WEAK_FUNC(sub_8277AC90);
PPC_FUNC_IMPL(__imp__sub_8277AC90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,24232
	ctx.r3.s64 = ctx.r11.s64 + 24232;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8277ACA0"))) PPC_WEAK_FUNC(sub_8277ACA0);
PPC_FUNC_IMPL(__imp__sub_8277ACA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8277acd8
	if (ctx.cr6.eq) goto loc_8277ACD8;
	// bl 0x8277b468
	ctx.lr = 0x8277ACC8;
	sub_8277B468(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8277acd8
	if (!ctx.cr6.eq) goto loc_8277ACD8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8277ace4
	goto loc_8277ACE4;
loc_8277ACD8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333c70
	ctx.lr = 0x8277ACE4;
	sub_82333C70(ctx, base);
loc_8277ACE4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8277AD00"))) PPC_WEAK_FUNC(sub_8277AD00);
PPC_FUNC_IMPL(__imp__sub_8277AD00) {
	PPC_FUNC_PROLOGUE();
	// b 0x8277b468
	sub_8277B468(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8277AD08"))) PPC_WEAK_FUNC(sub_8277AD08);
PPC_FUNC_IMPL(__imp__sub_8277AD08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x8277AD24;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8277ad94
	if (ctx.cr0.eq) goto loc_8277AD94;
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
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r9,r9,24272
	ctx.r9.s64 = ctx.r9.s64 + 24272;
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
	// b 0x8277ad98
	goto loc_8277AD98;
loc_8277AD94:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8277AD98:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8277ADB0"))) PPC_WEAK_FUNC(sub_8277ADB0);
PPC_FUNC_IMPL(__imp__sub_8277ADB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8277b468
	ctx.lr = 0x8277ADD0;
	sub_8277B468(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8277ade4
	if (ctx.cr6.eq) goto loc_8277ADE4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333b08
	ctx.lr = 0x8277ADE4;
	sub_82333B08(ctx, base);
loc_8277ADE4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8277AE00"))) PPC_WEAK_FUNC(sub_8277AE00);
PPC_FUNC_IMPL(__imp__sub_8277AE00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8277ae38
	if (ctx.cr6.eq) goto loc_8277AE38;
	// bl 0x824096c0
	ctx.lr = 0x8277AE2C;
	sub_824096C0(ctx, base);
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x829771a8
	ctx.lr = 0x8277AE34;
	sub_829771A8(ctx, base);
	// b 0x8277aea0
	goto loc_8277AEA0;
loc_8277AE38:
	// bl 0x824096c0
	ctx.lr = 0x8277AE3C;
	sub_824096C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,156
	ctx.r3.s64 = 156;
	// lwz r31,24(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82333900
	ctx.lr = 0x8277AE4C;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8277ae88
	if (ctx.cr0.eq) goto loc_8277AE88;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,21
	ctx.r9.s64 = 21;
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
	// b 0x8277ae8c
	goto loc_8277AE8C;
loc_8277AE88:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8277AE8C:
	// stw r31,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r31.u32);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,13156(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13156);
	// bl 0x8281abd8
	ctx.lr = 0x8277AEA0;
	sub_8281ABD8(ctx, base);
loc_8277AEA0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8277AEB8"))) PPC_WEAK_FUNC(sub_8277AEB8);
PPC_FUNC_IMPL(__imp__sub_8277AEB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x8277AEC0;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r11,24372
	ctx.r11.s64 = ctx.r11.s64 + 24372;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// li r3,52
	ctx.r3.s64 = 52;
	// stw r4,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r4.u32);
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// stw r5,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r5.u32);
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// stw r6,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r6.u32);
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// stw r29,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r29.u32);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// bl 0x82333900
	ctx.lr = 0x8277AF18;
	sub_82333900(ctx, base);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lis r7,10280
	ctx.r7.s64 = 673710080;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// ori r7,r7,390
	ctx.r7.u64 = ctx.r7.u64 | 390;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82b1ff70
	ctx.lr = 0x8277AF5C;
	sub_82B1FF70(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r3,13016(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13016);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8277af7c
	if (!ctx.cr6.eq) goto loc_8277AF7C;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82775c60
	ctx.lr = 0x8277AF78;
	sub_82775C60(ctx, base);
	// b 0x8277af94
	goto loc_8277AF94;
loc_8277AF7C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277AF94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8277AF94:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x8277AFA4;
	sub_82A4EFB0(ctx, base);
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82b20198
	ctx.lr = 0x8277AFB0;
	sub_82B20198(ctx, base);
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x82833108
	ctx.lr = 0x8277AFB8;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8277afd8
	if (ctx.cr0.eq) goto loc_8277AFD8;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8298f940
	ctx.lr = 0x8277AFD4;
	sub_8298F940(ctx, base);
	// b 0x8277afdc
	goto loc_8277AFDC;
loc_8277AFD8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_8277AFDC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,0
	ctx.r10.s64 = 0;
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// li r3,36
	ctx.r3.s64 = 36;
	// ori r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 32768;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r10,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stw r28,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r28.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stw r27,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r27.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stw r26,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r26.u32);
	// bl 0x82833108
	ctx.lr = 0x8277B01C;
	sub_82833108(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lis r26,-31949
	ctx.r26.s64 = -2093809664;
	// beq 0x8277b0a4
	if (ctx.cr0.eq) goto loc_8277B0A4;
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8277b040
	if (ctx.cr0.eq) goto loc_8277B040;
	// lwz r27,80(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x8277b044
	goto loc_8277B044;
loc_8277B040:
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
loc_8277B044:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8277b054
	if (ctx.cr0.eq) goto loc_8277B054;
	// lwz r28,80(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x8277b058
	goto loc_8277B058;
loc_8277B054:
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_8277B058:
	// lwz r25,36(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r24,8(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// bl 0x82833180
	ctx.lr = 0x8277B068;
	sub_82833180(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// stw r28,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r28.u32);
	// lis r10,-8531
	ctx.r10.s64 = -559087616;
	// stw r27,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r27.u32);
	// addi r11,r11,24272
	ctx.r11.s64 = ctx.r11.s64 + 24272;
	// stw r24,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r24.u32);
	// ori r10,r10,47806
	ctx.r10.u64 = ctx.r10.u64 | 47806;
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r10,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r25,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r25.u32);
	// stw r9,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r9.u32);
	// b 0x8277b0a8
	goto loc_8277B0A8;
loc_8277B0A4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_8277B0A8:
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x8277B0B4;
	sub_82833A30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8277B0C0"))) PPC_WEAK_FUNC(sub_8277B0C0);
PPC_FUNC_IMPL(__imp__sub_8277B0C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8277b110
	ctx.lr = 0x8277B0E0;
	sub_8277B110(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8277b0f0
	if (ctx.cr0.eq) goto loc_8277B0F0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x8277B0F0;
	sub_82332DB8(ctx, base);
loc_8277B0F0:
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

__attribute__((alias("__imp__sub_8277B110"))) PPC_WEAK_FUNC(sub_8277B110);
PPC_FUNC_IMPL(__imp__sub_8277B110) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x8277B118;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r3,36
	ctx.r3.s64 = 36;
	// addi r11,r11,24372
	ctx.r11.s64 = ctx.r11.s64 + 24372;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bl 0x82833108
	ctx.lr = 0x8277B134;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lis r26,-31949
	ctx.r26.s64 = -2093809664;
	// li r27,0
	ctx.r27.s64 = 0;
	// beq 0x8277b1bc
	if (ctx.cr0.eq) goto loc_8277B1BC;
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8277b15c
	if (ctx.cr0.eq) goto loc_8277B15C;
	// lwz r28,80(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x8277b160
	goto loc_8277B160;
loc_8277B15C:
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
loc_8277B160:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8277b170
	if (ctx.cr0.eq) goto loc_8277B170;
	// lwz r30,80(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x8277b174
	goto loc_8277B174;
loc_8277B170:
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_8277B174:
	// lwz r25,36(r29)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r24,8(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// bl 0x82833180
	ctx.lr = 0x8277B184;
	sub_82833180(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// lis r10,-8531
	ctx.r10.s64 = -559087616;
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// addi r11,r11,24272
	ctx.r11.s64 = ctx.r11.s64 + 24272;
	// stw r24,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r24.u32);
	// ori r10,r10,47806
	ctx.r10.u64 = ctx.r10.u64 | 47806;
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stw r25,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r25.u32);
	// stw r27,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r27.u32);
	// b 0x8277b1c0
	goto loc_8277B1C0;
loc_8277B1BC:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_8277B1C0:
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x8277B1CC;
	sub_82833A30(ctx, base);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8277b1e0
	if (ctx.cr6.eq) goto loc_8277B1E0;
	// bl 0x82744750
	ctx.lr = 0x8277B1DC;
	sub_82744750(ctx, base);
	// stw r27,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r27.u32);
loc_8277B1E0:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8277B1F8"))) PPC_WEAK_FUNC(sub_8277B1F8);
PPC_FUNC_IMPL(__imp__sub_8277B1F8) {
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
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8277B230"))) PPC_WEAK_FUNC(sub_8277B230);
PPC_FUNC_IMPL(__imp__sub_8277B230) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x8277B238;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// addi r28,r31,4
	ctx.r28.s64 = ctx.r31.s64 + 4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r30,0(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8277b294
	if (!ctx.cr6.eq) goto loc_8277B294;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82a455d0
	ctx.lr = 0x8277B26C;
	sub_82A455D0(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// lis r5,10280
	ctx.r5.s64 = 673710080;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// ori r5,r5,390
	ctx.r5.u64 = ctx.r5.u64 | 390;
	// bl 0x82742ab8
	ctx.lr = 0x8277B290;
	sub_82742AB8(ctx, base);
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
loc_8277B294:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// lfs f0,908(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r8.u32);
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// bl 0x8274e890
	ctx.lr = 0x8277B2D8;
	sub_8274E890(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8274e5d8
	ctx.lr = 0x8277B2E4;
	sub_8274E5D8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8274ebf0
	ctx.lr = 0x8277B2F0;
	sub_8274EBF0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82765b00
	ctx.lr = 0x8277B314;
	sub_82765B00(ctx, base);
	// lis r27,-31949
	ctx.r27.s64 = -2093809664;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// ori r28,r11,36008
	ctx.r28.u64 = ctx.r11.u64 | 36008;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,104(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r11,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8277B350;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8277b388
	if (ctx.cr6.eq) goto loc_8277B388;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8275e9e0
	ctx.lr = 0x8277B388;
	sub_8275E9E0(ctx, base);
loc_8277B388:
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r29.u32);
	// bl 0x8274e890
	ctx.lr = 0x8277B3B0;
	sub_8274E890(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8277B3C0"))) PPC_WEAK_FUNC(sub_8277B3C0);
PPC_FUNC_IMPL(__imp__sub_8277B3C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,23332(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23332);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8277b400
	if (!ctx.cr0.eq) goto loc_8277B400;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// stw r11,23332(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23332, ctx.r11.u32);
	// addi r3,r9,24232
	ctx.r3.s64 = ctx.r9.s64 + 24232;
	// bl 0x82816528
	ctx.lr = 0x8277B3F8;
	sub_82816528(ctx, base);
	// stw r3,23328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23328, ctx.r3.u32);
	// b 0x8277b404
	goto loc_8277B404;
loc_8277B400:
	// lwz r3,23328(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23328);
loc_8277B404:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8277B418"))) PPC_WEAK_FUNC(sub_8277B418);
PPC_FUNC_IMPL(__imp__sub_8277B418) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8277b468
	ctx.lr = 0x8277B438;
	sub_8277B468(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277B44C;
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

__attribute__((alias("__imp__sub_8277B468"))) PPC_WEAK_FUNC(sub_8277B468);
PPC_FUNC_IMPL(__imp__sub_8277B468) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,14084
	ctx.r31.s64 = ctx.r11.s64 + 14084;
	// lwz r11,14088(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14088);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8277b4b0
	if (!ctx.cr0.eq) goto loc_8277B4B0;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,24352
	ctx.r9.s64 = ctx.r9.s64 + 24352;
	// stw r11,14088(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14088, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-27744
	ctx.r3.s64 = ctx.r11.s64 + -27744;
	// bl 0x82a4c758
	ctx.lr = 0x8277B4B0;
	sub_82A4C758(ctx, base);
loc_8277B4B0:
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

__attribute__((alias("__imp__sub_8277B4C8"))) PPC_WEAK_FUNC(sub_8277B4C8);
PPC_FUNC_IMPL(__imp__sub_8277B4C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8277B4D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,24392
	ctx.r11.s64 = ctx.r11.s64 + 24392;
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r3,272
	ctx.r3.s64 = 272;
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// bl 0x82333900
	ctx.lr = 0x8277B510;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8277b540
	if (ctx.cr0.eq) goto loc_8277B540;
	// lis r11,-32136
	ctx.r11.s64 = -2106064896;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,128
	ctx.r9.s64 = 128;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// addi r7,r11,-18472
	ctx.r7.s64 = ctx.r11.s64 + -18472;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82766a70
	ctx.lr = 0x8277B53C;
	sub_82766A70(ctx, base);
	// b 0x8277b544
	goto loc_8277B544;
loc_8277B540:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8277B544:
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// stw r28,220(r3)
	PPC_STORE_U32(ctx.r3.u32 + 220, ctx.r28.u32);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82766cd0
	ctx.lr = 0x8277B554;
	sub_82766CD0(ctx, base);
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82333900
	ctx.lr = 0x8277B55C;
	sub_82333900(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x8277b57c
	if (ctx.cr0.eq) goto loc_8277B57C;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// addi r11,r11,15852
	ctx.r11.s64 = ctx.r11.s64 + 15852;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bl 0x8312e7dc
	ctx.lr = 0x8277B578;
	sub_8312E7DC(ctx, base);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_8277B57C:
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8277B590"))) PPC_WEAK_FUNC(sub_8277B590);
PPC_FUNC_IMPL(__imp__sub_8277B590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8277b5e0
	ctx.lr = 0x8277B5B0;
	sub_8277B5E0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8277b5c0
	if (ctx.cr0.eq) goto loc_8277B5C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x8277B5C0;
	sub_82332DB8(ctx, base);
loc_8277B5C0:
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

__attribute__((alias("__imp__sub_8277B5E0"))) PPC_WEAK_FUNC(sub_8277B5E0);
PPC_FUNC_IMPL(__imp__sub_8277B5E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r10,r10,24392
	ctx.r10.s64 = ctx.r10.s64 + 24392;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8277b62c
	if (ctx.cr6.eq) goto loc_8277B62C;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,224(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	// bl 0x82767008
	ctx.lr = 0x8277B618;
	sub_82767008(ctx, base);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8277b62c
	if (ctx.cr6.eq) goto loc_8277B62C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824345e8
	ctx.lr = 0x8277B62C;
	sub_824345E8(ctx, base);
loc_8277B62C:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8277b64c
	if (ctx.cr6.eq) goto loc_8277B64C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277B64C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8277B64C:
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82339860
	ctx.lr = 0x8277B654;
	sub_82339860(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r11,r11,1776
	ctx.r11.s64 = ctx.r11.s64 + 1776;
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

__attribute__((alias("__imp__sub_8277B678"))) PPC_WEAK_FUNC(sub_8277B678);
PPC_FUNC_IMPL(__imp__sub_8277B678) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8277B680;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// b 0x8277b6a0
	goto loc_8277B6A0;
loc_8277B698:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a6e460
	ctx.lr = 0x8277B6A0;
	sub_82A6E460(ctx, base);
loc_8277B6A0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277B6BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8277b698
	if (ctx.cr0.eq) goto loc_8277B698;
	// lwz r30,32(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277B6DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bgt cr6,0x8277b6f0
	if (ctx.cr6.gt) goto loc_8277B6F0;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_8277B6F0:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x82a45878
	ctx.lr = 0x8277B704;
	sub_82A45878(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277B718;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8277B728"))) PPC_WEAK_FUNC(sub_8277B728);
PPC_FUNC_IMPL(__imp__sub_8277B728) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8277B730;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r31,32(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277B758;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r30,24(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x8277b7ac
	if (!ctx.cr6.gt) goto loc_8277B7AC;
	// add r28,r28,r27
	ctx.r28.u64 = ctx.r28.u64 + ctx.r27.u64;
	// lwz r31,20(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplw cr6,r28,r30
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r30.u32, ctx.xer);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bge cr6,0x8277b798
	if (!ctx.cr6.lt) goto loc_8277B798;
	// bctrl 
	ctx.lr = 0x8277B788;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// subfc r11,r28,r31
	ctx.xer.ca = ctx.r31.u32 >= ctx.r28.u32;
	ctx.r11.s64 = ctx.r31.s64 - ctx.r28.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// b 0x8277b7b8
	goto loc_8277B7B8;
loc_8277B798:
	// bctrl 
	ctx.lr = 0x8277B79C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// subf r11,r31,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r31.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x8277b7b8
	goto loc_8277B7B8;
loc_8277B7AC:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277B7B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8277B7B8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8277B7C0"))) PPC_WEAK_FUNC(sub_8277B7C0);
PPC_FUNC_IMPL(__imp__sub_8277B7C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r11,244(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 244);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8277B7D8"))) PPC_WEAK_FUNC(sub_8277B7D8);
PPC_FUNC_IMPL(__imp__sub_8277B7D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8277B7E0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r30,32(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277B80C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x8277b838
	if (!ctx.cr6.lt) goto loc_8277B838;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8277b838
	if (!ctx.cr6.gt) goto loc_8277B838;
	// stw r29,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r29.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82332c38
	ctx.lr = 0x8277B838;
	sub_82332C38(ctx, base);
loc_8277B838:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82332d50
	ctx.lr = 0x8277B84C;
	sub_82332D50(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bl 0x82a45878
	ctx.lr = 0x8277B860;
	sub_82A45878(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277B874;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8277B880"))) PPC_WEAK_FUNC(sub_8277B880);
PPC_FUNC_IMPL(__imp__sub_8277B880) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8277b8c0
	if (ctx.cr0.eq) goto loc_8277B8C0;
loc_8277B894:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x8277b8c0
	if (!ctx.cr6.lt) goto loc_8277B8C0;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lbz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r8,r8,63
	ctx.r8.u64 = ctx.r8.u64 | 63;
	// mullw r9,r9,r8
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// extsb. r11,r7
	ctx.r11.s64 = ctx.r7.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8277b894
	if (!ctx.cr0.eq) goto loc_8277B894;
loc_8277B8C0:
	// oris r11,r9,32768
	ctx.r11.u64 = ctx.r9.u64 | 2147483648;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8277B8D0"))) PPC_WEAK_FUNC(sub_8277B8D0);
PPC_FUNC_IMPL(__imp__sub_8277B8D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8277b8e4
	if (ctx.cr6.lt) goto loc_8277B8E4;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// b 0x8277b8e8
	goto loc_8277B8E8;
loc_8277B8E4:
	// addi r10,r4,4
	ctx.r10.s64 = ctx.r4.s64 + 4;
loc_8277B8E8:
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8277b928
	if (ctx.cr0.eq) goto loc_8277B928;
loc_8277B8FC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,100
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 100, ctx.xer);
	// bge cr6,0x8277b928
	if (!ctx.cr6.lt) goto loc_8277B928;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// mullw r8,r8,r7
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// extsb. r11,r6
	ctx.r11.s64 = ctx.r6.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8277b8fc
	if (!ctx.cr0.eq) goto loc_8277B8FC;
loc_8277B928:
	// oris r11,r8,32768
	ctx.r11.u64 = ctx.r8.u64 | 2147483648;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8277B938"))) PPC_WEAK_FUNC(sub_8277B938);
PPC_FUNC_IMPL(__imp__sub_8277B938) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8277B940;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8277b974
	if (ctx.cr6.gt) goto loc_8277B974;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8276fe08
	ctx.lr = 0x8277B970;
	sub_8276FE08(ctx, base);
	// b 0x8277b980
	goto loc_8277B980;
loc_8277B974:
	// li r5,0
	ctx.r5.s64 = 0;
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r11.s64;
	// bl 0x8277bb48
	ctx.lr = 0x8277B980;
	sub_8277BB48(ctx, base);
loc_8277B980:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8277b994
	if (!ctx.cr6.eq) goto loc_8277B994;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8277ba2c
	goto loc_8277BA2C;
loc_8277B994:
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// blt cr6,0x8277b9a8
	if (ctx.cr6.lt) goto loc_8277B9A8;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8277b9ac
	goto loc_8277B9AC;
loc_8277B9A8:
	// addi r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 4;
loc_8277B9AC:
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// blt cr6,0x8277b9cc
	if (ctx.cr6.lt) goto loc_8277B9CC;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x8277b9d0
	goto loc_8277B9D0;
loc_8277B9CC:
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
loc_8277B9D0:
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82785110
	ctx.lr = 0x8277B9EC;
	sub_82785110(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stb r29,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r29.u8);
	// bne 0x8277ba28
	if (!ctx.cr0.eq) goto loc_8277BA28;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x8277ba10
	if (!ctx.cr6.gt) goto loc_8277BA10;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x8277ba1c
	goto loc_8277BA1C;
loc_8277BA10:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x827852a8
	ctx.lr = 0x8277BA1C;
	sub_827852A8(ctx, base);
loc_8277BA1C:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8277ba28
	if (ctx.cr0.eq) goto loc_8277BA28;
	// li r29,1
	ctx.r29.s64 = 1;
loc_8277BA28:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_8277BA2C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8277BA38"))) PPC_WEAK_FUNC(sub_8277BA38);
PPC_FUNC_IMPL(__imp__sub_8277BA38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8277BA40;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r29,r10,1
	ctx.r29.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8277ba74
	if (ctx.cr6.gt) goto loc_8277BA74;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8249cea8
	ctx.lr = 0x8277BA70;
	sub_8249CEA8(ctx, base);
	// b 0x8277ba80
	goto loc_8277BA80;
loc_8277BA74:
	// li r5,0
	ctx.r5.s64 = 0;
	// subf r4,r11,r29
	ctx.r4.s64 = ctx.r29.s64 - ctx.r11.s64;
	// bl 0x8277bc18
	ctx.lr = 0x8277BA80;
	sub_8277BC18(ctx, base);
loc_8277BA80:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8277ba94
	if (ctx.cr6.lt) goto loc_8277BA94;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8277ba98
	goto loc_8277BA98;
loc_8277BA94:
	// addi r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 4;
loc_8277BA98:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r9,8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8, ctx.xer);
	// blt cr6,0x8277bab8
	if (ctx.cr6.lt) goto loc_8277BAB8;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x8277babc
	goto loc_8277BABC;
loc_8277BAB8:
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
loc_8277BABC:
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82785388
	ctx.lr = 0x8277BAD8;
	sub_82785388(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r9,r11,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r11.s64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8277BAF8"))) PPC_WEAK_FUNC(sub_8277BAF8);
PPC_FUNC_IMPL(__imp__sub_8277BAF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,24(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8277bb24
	if (ctx.cr6.lt) goto loc_8277BB24;
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// b 0x8277bb28
	goto loc_8277BB28;
loc_8277BB24:
	// addi r4,r5,4
	ctx.r4.s64 = ctx.r5.s64 + 4;
loc_8277BB28:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8277bd08
	ctx.lr = 0x8277BB30;
	sub_8277BD08(ctx, base);
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

__attribute__((alias("__imp__sub_8277BB48"))) PPC_WEAK_FUNC(sub_8277BB48);
PPC_FUNC_IMPL(__imp__sub_8277BB48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8277BB50;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// subfic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 <= 4294967295;
	ctx.r11.s64 = -1 - ctx.r11.s64;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bgt cr6,0x8277bb74
	if (ctx.cr6.gt) goto loc_8277BB74;
	// bl 0x82a4c040
	ctx.lr = 0x8277BB74;
	sub_82A4C040(ctx, base);
loc_8277BB74:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8277bc0c
	if (ctx.cr6.eq) goto loc_8277BC0C;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r27,r29,r11
	ctx.r27.u64 = ctx.r29.u64 + ctx.r11.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8249d3e8
	ctx.lr = 0x8277BB94;
	sub_8249D3E8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8277bc0c
	if (ctx.cr0.eq) goto loc_8277BC0C;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// bne cr6,0x8277bbcc
	if (!ctx.cr6.eq) goto loc_8277BBCC;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8277bbc0
	if (ctx.cr6.lt) goto loc_8277BBC0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x8277bbc4
	goto loc_8277BBC4;
loc_8277BBC0:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8277BBC4:
	// stbx r28,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r28.u8);
	// b 0x8277bbf0
	goto loc_8277BBF0;
loc_8277BBCC:
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8277bbdc
	if (ctx.cr6.lt) goto loc_8277BBDC;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x8277bbe0
	goto loc_8277BBE0;
loc_8277BBDC:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8277BBE0:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// extsb r4,r28
	ctx.r4.s64 = ctx.r28.s8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82a4efb0
	ctx.lr = 0x8277BBF0;
	sub_82A4EFB0(ctx, base);
loc_8277BBF0:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8277bc04
	if (ctx.cr6.lt) goto loc_8277BC04;
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8277BC04:
	// li r11,0
	ctx.r11.s64 = 0;
	// stbx r11,r30,r27
	PPC_STORE_U8(ctx.r30.u32 + ctx.r27.u32, ctx.r11.u8);
loc_8277BC0C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8277BC18"))) PPC_WEAK_FUNC(sub_8277BC18);
PPC_FUNC_IMPL(__imp__sub_8277BC18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8277BC20;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// subfic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 <= 4294967295;
	ctx.r11.s64 = -1 - ctx.r11.s64;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bgt cr6,0x8277bc40
	if (ctx.cr6.gt) goto loc_8277BC40;
	// bl 0x82a4c040
	ctx.lr = 0x8277BC40;
	sub_82A4C040(ctx, base);
loc_8277BC40:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8277bcf8
	if (ctx.cr6.eq) goto loc_8277BCF8;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r29,r31,r11
	ctx.r29.u64 = ctx.r31.u64 + ctx.r11.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8249cf78
	ctx.lr = 0x8277BC60;
	sub_8249CF78(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8277bcf8
	if (ctx.cr0.eq) goto loc_8277BCF8;
	// lwz r8,20(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r9,r30,4
	ctx.r9.s64 = ctx.r30.s64 + 4;
	// bne cr6,0x8277bca0
	if (!ctx.cr6.eq) goto loc_8277BCA0;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x8277bc8c
	if (ctx.cr6.lt) goto loc_8277BC8C;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8277bc90
	goto loc_8277BC90;
loc_8277BC8C:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8277BC90:
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// li r8,0
	ctx.r8.s64 = 0;
	// sthx r8,r10,r11
	PPC_STORE_U16(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u16);
	// b 0x8277bcd8
	goto loc_8277BCD8;
loc_8277BCA0:
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x8277bcb0
	if (ctx.cr6.lt) goto loc_8277BCB0;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8277bcb4
	goto loc_8277BCB4;
loc_8277BCB0:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8277BCB4:
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// beq 0x8277bcd8
	if (ctx.cr0.eq) goto loc_8277BCD8;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_8277BCCC:
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x8277bccc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8277BCCC;
loc_8277BCD8:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x8277bcec
	if (ctx.cr6.lt) goto loc_8277BCEC;
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_8277BCEC:
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// li r10,0
	ctx.r10.s64 = 0;
	// sthx r10,r11,r9
	PPC_STORE_U16(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u16);
loc_8277BCF8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8277BD08"))) PPC_WEAK_FUNC(sub_8277BD08);
PPC_FUNC_IMPL(__imp__sub_8277BD08) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8277bd60
	if (ctx.cr6.eq) goto loc_8277BD60;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8277bd60
	if (ctx.cr6.eq) goto loc_8277BD60;
	// lwz r9,24(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// addi r11,r5,4
	ctx.r11.s64 = ctx.r5.s64 + 4;
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// blt cr6,0x8277bd38
	if (ctx.cr6.lt) goto loc_8277BD38;
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// b 0x8277bd3c
	goto loc_8277BD3C;
loc_8277BD38:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8277BD3C:
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bgt cr6,0x8277bd60
	if (ctx.cr6.gt) goto loc_8277BD60;
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// blt cr6,0x8277bd50
	if (ctx.cr6.lt) goto loc_8277BD50;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8277BD50:
	// lwz r10,20(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8277bd64
	if (!ctx.cr6.gt) goto loc_8277BD64;
loc_8277BD60:
	// twi 31,r0,22
loc_8277BD64:
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8277BD70"))) PPC_WEAK_FUNC(sub_8277BD70);
PPC_FUNC_IMPL(__imp__sub_8277BD70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8277BD78;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// subfic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 <= 4294967295;
	ctx.r11.s64 = -1 - ctx.r11.s64;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bgt cr6,0x8277bd9c
	if (ctx.cr6.gt) goto loc_8277BD9C;
	// bl 0x82a4c040
	ctx.lr = 0x8277BD9C;
	sub_82A4C040(ctx, base);
loc_8277BD9C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8277be34
	if (ctx.cr6.eq) goto loc_8277BE34;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r27,r29,r11
	ctx.r27.u64 = ctx.r29.u64 + ctx.r11.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8276fec8
	ctx.lr = 0x8277BDBC;
	sub_8276FEC8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8277be34
	if (ctx.cr0.eq) goto loc_8277BE34;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// bne cr6,0x8277bdf4
	if (!ctx.cr6.eq) goto loc_8277BDF4;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8277bde8
	if (ctx.cr6.lt) goto loc_8277BDE8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x8277bdec
	goto loc_8277BDEC;
loc_8277BDE8:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8277BDEC:
	// stbx r28,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r28.u8);
	// b 0x8277be18
	goto loc_8277BE18;
loc_8277BDF4:
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8277be04
	if (ctx.cr6.lt) goto loc_8277BE04;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x8277be08
	goto loc_8277BE08;
loc_8277BE04:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8277BE08:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// extsb r4,r28
	ctx.r4.s64 = ctx.r28.s8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82a4efb0
	ctx.lr = 0x8277BE18;
	sub_82A4EFB0(ctx, base);
loc_8277BE18:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8277be2c
	if (ctx.cr6.lt) goto loc_8277BE2C;
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8277BE2C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stbx r11,r30,r27
	PPC_STORE_U8(ctx.r30.u32 + ctx.r27.u32, ctx.r11.u8);
loc_8277BE34:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8277BE40"))) PPC_WEAK_FUNC(sub_8277BE40);
PPC_FUNC_IMPL(__imp__sub_8277BE40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne cr6,0x8277be94
	if (!ctx.cr6.eq) goto loc_8277BE94;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// addi r6,r10,24548
	ctx.r6.s64 = ctx.r10.s64 + 24548;
	// lwz r11,17176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17176);
	// addi r4,r9,24608
	ctx.r4.s64 = ctx.r9.s64 + 24608;
	// addi r3,r8,24712
	ctx.r3.s64 = ctx.r8.s64 + 24712;
	// li r5,63
	ctx.r5.s64 = 63;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277BE94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8277BE94:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8277BEB8"))) PPC_WEAK_FUNC(sub_8277BEB8);
PPC_FUNC_IMPL(__imp__sub_8277BEB8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// rlwinm. r10,r3,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r10,r9,540
	ctx.r10.s64 = ctx.r9.s64 + 540;
loc_8277BEE0:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8277bf00
	if (ctx.cr6.eq) goto loc_8277BF00;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8277bee0
	if (ctx.cr6.lt) goto loc_8277BEE0;
	// blr 
	return;
loc_8277BF00:
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lbz r3,796(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 796);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8277BF10"))) PPC_WEAK_FUNC(sub_8277BF10);
PPC_FUNC_IMPL(__imp__sub_8277BF10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x8277BF18;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// lis r28,-31963
	ctx.r28.s64 = -2094727168;
	// addi r31,r9,24760
	ctx.r31.s64 = ctx.r9.s64 + 24760;
	// addi r30,r10,24608
	ctx.r30.s64 = ctx.r10.s64 + 24608;
	// addi r29,r11,24804
	ctx.r29.s64 = ctx.r11.s64 + 24804;
loc_8277BF48:
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8277bf70
	if (!ctx.cr6.eq) goto loc_8277BF70;
	// lwz r11,17176(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 17176);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,406
	ctx.r5.s64 = 406;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277BF70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8277BF70:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,20(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// bl 0x82786170
	ctx.lr = 0x8277BF7C;
	sub_82786170(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8277bfa0
	if (!ctx.cr0.eq) goto loc_8277BFA0;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x8277bfb0
	if (!ctx.cr6.eq) goto loc_8277BFB0;
	// lwz r11,24(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8277bfb0
	if (ctx.cr6.eq) goto loc_8277BFB0;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// b 0x8277bf48
	goto loc_8277BF48;
loc_8277BFA0:
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// b 0x8277bfb4
	goto loc_8277BFB4;
loc_8277BFB0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8277BFB4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8277BFC0"))) PPC_WEAK_FUNC(sub_8277BFC0);
PPC_FUNC_IMPL(__imp__sub_8277BFC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8277c018
	if (!ctx.cr6.eq) goto loc_8277C018;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// addi r6,r10,24828
	ctx.r6.s64 = ctx.r10.s64 + 24828;
	// lwz r11,17176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17176);
	// addi r4,r9,24608
	ctx.r4.s64 = ctx.r9.s64 + 24608;
	// addi r3,r8,24760
	ctx.r3.s64 = ctx.r8.s64 + 24760;
	// li r5,448
	ctx.r5.s64 = 448;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277C018;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8277C018:
	// lwz r4,140(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82786218
	ctx.lr = 0x8277C024;
	sub_82786218(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8277c074
	if (ctx.cr0.eq) goto loc_8277C074;
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8278fd30
	ctx.lr = 0x8277C03C;
	sub_8278FD30(ctx, base);
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x8277c074
	if (ctx.cr6.eq) goto loc_8277C074;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8277be40
	ctx.lr = 0x8277C050;
	sub_8277BE40(ctx, base);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x8277c06c
	goto loc_8277C06C;
loc_8277C058:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,140(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8277bfc0
	ctx.lr = 0x8277C068;
	sub_8277BFC0(ctx, base);
	// lwz r31,32(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
loc_8277C06C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8277c058
	if (!ctx.cr6.eq) goto loc_8277C058;
loc_8277C074:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8277C090"))) PPC_WEAK_FUNC(sub_8277C090);
PPC_FUNC_IMPL(__imp__sub_8277C090) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x8277C098;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// lis r27,-31963
	ctx.r27.s64 = -2094727168;
	// addi r30,r9,24760
	ctx.r30.s64 = ctx.r9.s64 + 24760;
	// addi r29,r10,24608
	ctx.r29.s64 = ctx.r10.s64 + 24608;
	// addi r28,r11,24856
	ctx.r28.s64 = ctx.r11.s64 + 24856;
loc_8277C0C8:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8277c0f0
	if (!ctx.cr6.eq) goto loc_8277C0F0;
	// lwz r11,17176(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 17176);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,486
	ctx.r5.s64 = 486;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277C0F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8277C0F0:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82786658
	ctx.lr = 0x8277C10C;
	sub_82786658(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8277c138
	if (!ctx.cr0.eq) goto loc_8277C138;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x8277c134
	if (!ctx.cr6.eq) goto loc_8277C134;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8277c134
	if (ctx.cr6.eq) goto loc_8277C134;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x8277c0c8
	goto loc_8277C0C8;
loc_8277C134:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_8277C138:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8277C140"))) PPC_WEAK_FUNC(sub_8277C140);
PPC_FUNC_IMPL(__imp__sub_8277C140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8277C148;
	__savegprlr_29(ctx, base);
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
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8277c190
	if (!ctx.cr6.eq) goto loc_8277C190;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// addi r6,r10,24884
	ctx.r6.s64 = ctx.r10.s64 + 24884;
	// lwz r11,17176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17176);
	// addi r4,r9,24608
	ctx.r4.s64 = ctx.r9.s64 + 24608;
	// addi r3,r8,24760
	ctx.r3.s64 = ctx.r8.s64 + 24760;
	// li r5,506
	ctx.r5.s64 = 506;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277C190;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8277C190:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8277beb8
	ctx.lr = 0x8277C19C;
	sub_8277BEB8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x827867d0
	ctx.lr = 0x8277C1B4;
	sub_827867D0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8278fd30
	ctx.lr = 0x8277C1C4;
	sub_8278FD30(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8277C1D0"))) PPC_WEAK_FUNC(sub_8277C1D0);
PPC_FUNC_IMPL(__imp__sub_8277C1D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f4
	ctx.lr = 0x8277C1D8;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// lis r27,-31963
	ctx.r27.s64 = -2094727168;
	// addi r30,r9,24760
	ctx.r30.s64 = ctx.r9.s64 + 24760;
	// addi r29,r10,24608
	ctx.r29.s64 = ctx.r10.s64 + 24608;
	// addi r28,r11,24908
	ctx.r28.s64 = ctx.r11.s64 + 24908;
loc_8277C20C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8277c234
	if (!ctx.cr6.eq) goto loc_8277C234;
	// lwz r11,17176(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 17176);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,515
	ctx.r5.s64 = 515;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277C234;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8277C234:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x827868d8
	ctx.lr = 0x8277C244;
	sub_827868D8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8277c268
	if (!ctx.cr0.eq) goto loc_8277C268;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x8277c278
	if (!ctx.cr6.eq) goto loc_8277C278;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8277c278
	if (ctx.cr6.eq) goto loc_8277C278;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x8277c20c
	goto loc_8277C20C;
loc_8277C268:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// b 0x8277c27c
	goto loc_8277C27C;
loc_8277C278:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8277C27C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8277C288"))) PPC_WEAK_FUNC(sub_8277C288);
PPC_FUNC_IMPL(__imp__sub_8277C288) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8277C290;
	__savegprlr_29(ctx, base);
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
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8277c2d8
	if (!ctx.cr6.eq) goto loc_8277C2D8;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// addi r6,r10,24884
	ctx.r6.s64 = ctx.r10.s64 + 24884;
	// lwz r11,17176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17176);
	// addi r4,r9,24608
	ctx.r4.s64 = ctx.r9.s64 + 24608;
	// addi r3,r8,24760
	ctx.r3.s64 = ctx.r8.s64 + 24760;
	// li r5,604
	ctx.r5.s64 = 604;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277C2D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8277C2D8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8277beb8
	ctx.lr = 0x8277C2E4;
	sub_8277BEB8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82786f70
	ctx.lr = 0x8277C2FC;
	sub_82786F70(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8278fd30
	ctx.lr = 0x8277C30C;
	sub_8278FD30(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8277C318"))) PPC_WEAK_FUNC(sub_8277C318);
PPC_FUNC_IMPL(__imp__sub_8277C318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x8277C320;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// lis r27,-31963
	ctx.r27.s64 = -2094727168;
	// addi r30,r9,24760
	ctx.r30.s64 = ctx.r9.s64 + 24760;
	// addi r29,r10,24608
	ctx.r29.s64 = ctx.r10.s64 + 24608;
	// addi r28,r11,24980
	ctx.r28.s64 = ctx.r11.s64 + 24980;
loc_8277C350:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8277c378
	if (!ctx.cr6.eq) goto loc_8277C378;
	// lwz r11,17176(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 17176);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,633
	ctx.r5.s64 = 633;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277C378;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8277C378:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x827871c8
	ctx.lr = 0x8277C394;
	sub_827871C8(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8277c3c0
	if (!ctx.cr0.eq) goto loc_8277C3C0;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x8277c3bc
	if (!ctx.cr6.eq) goto loc_8277C3BC;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8277c3bc
	if (ctx.cr6.eq) goto loc_8277C3BC;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x8277c350
	goto loc_8277C350;
loc_8277C3BC:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_8277C3C0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8277C3C8"))) PPC_WEAK_FUNC(sub_8277C3C8);
PPC_FUNC_IMPL(__imp__sub_8277C3C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8277C3D0;
	__savegprlr_29(ctx, base);
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
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8277c418
	if (!ctx.cr6.eq) goto loc_8277C418;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// addi r6,r10,24884
	ctx.r6.s64 = ctx.r10.s64 + 24884;
	// lwz r11,17176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17176);
	// addi r4,r9,24608
	ctx.r4.s64 = ctx.r9.s64 + 24608;
	// addi r3,r8,24760
	ctx.r3.s64 = ctx.r8.s64 + 24760;
	// li r5,653
	ctx.r5.s64 = 653;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277C418;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8277C418:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8277beb8
	ctx.lr = 0x8277C424;
	sub_8277BEB8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82787340
	ctx.lr = 0x8277C43C;
	sub_82787340(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8278fd30
	ctx.lr = 0x8277C44C;
	sub_8278FD30(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8277C458"))) PPC_WEAK_FUNC(sub_8277C458);
PPC_FUNC_IMPL(__imp__sub_8277C458) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f4
	ctx.lr = 0x8277C460;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// lis r27,-31963
	ctx.r27.s64 = -2094727168;
	// addi r30,r9,24760
	ctx.r30.s64 = ctx.r9.s64 + 24760;
	// addi r29,r10,24608
	ctx.r29.s64 = ctx.r10.s64 + 24608;
	// addi r28,r11,24908
	ctx.r28.s64 = ctx.r11.s64 + 24908;
loc_8277C494:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8277c4bc
	if (!ctx.cr6.eq) goto loc_8277C4BC;
	// lwz r11,17176(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 17176);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,662
	ctx.r5.s64 = 662;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277C4BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8277C4BC:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82787448
	ctx.lr = 0x8277C4CC;
	sub_82787448(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8277c4f0
	if (!ctx.cr0.eq) goto loc_8277C4F0;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x8277c500
	if (!ctx.cr6.eq) goto loc_8277C500;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8277c500
	if (ctx.cr6.eq) goto loc_8277C500;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x8277c494
	goto loc_8277C494;
loc_8277C4F0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// b 0x8277c504
	goto loc_8277C504;
loc_8277C500:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8277C504:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8277C510"))) PPC_WEAK_FUNC(sub_8277C510);
PPC_FUNC_IMPL(__imp__sub_8277C510) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x8277C518;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// lis r27,-31963
	ctx.r27.s64 = -2094727168;
	// addi r30,r9,24760
	ctx.r30.s64 = ctx.r9.s64 + 24760;
	// addi r29,r10,24608
	ctx.r29.s64 = ctx.r10.s64 + 24608;
	// addi r28,r11,25004
	ctx.r28.s64 = ctx.r11.s64 + 25004;
loc_8277C548:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8277c570
	if (!ctx.cr6.eq) goto loc_8277C570;
	// lwz r11,17176(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 17176);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,682
	ctx.r5.s64 = 682;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277C570;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8277C570:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82787598
	ctx.lr = 0x8277C58C;
	sub_82787598(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8277c5b8
	if (!ctx.cr0.eq) goto loc_8277C5B8;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x8277c5b4
	if (!ctx.cr6.eq) goto loc_8277C5B4;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8277c5b4
	if (ctx.cr6.eq) goto loc_8277C5B4;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x8277c548
	goto loc_8277C548;
loc_8277C5B4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_8277C5B8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8277C5C0"))) PPC_WEAK_FUNC(sub_8277C5C0);
PPC_FUNC_IMPL(__imp__sub_8277C5C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8277C5C8;
	__savegprlr_29(ctx, base);
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
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8277c610
	if (!ctx.cr6.eq) goto loc_8277C610;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// addi r6,r10,24884
	ctx.r6.s64 = ctx.r10.s64 + 24884;
	// lwz r11,17176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17176);
	// addi r4,r9,24608
	ctx.r4.s64 = ctx.r9.s64 + 24608;
	// addi r3,r8,24760
	ctx.r3.s64 = ctx.r8.s64 + 24760;
	// li r5,702
	ctx.r5.s64 = 702;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277C610;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8277C610:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8277beb8
	ctx.lr = 0x8277C61C;
	sub_8277BEB8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82787710
	ctx.lr = 0x8277C634;
	sub_82787710(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8278fd30
	ctx.lr = 0x8277C644;
	sub_8278FD30(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8277C650"))) PPC_WEAK_FUNC(sub_8277C650);
PPC_FUNC_IMPL(__imp__sub_8277C650) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f4
	ctx.lr = 0x8277C658;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// lis r27,-31963
	ctx.r27.s64 = -2094727168;
	// addi r30,r9,24760
	ctx.r30.s64 = ctx.r9.s64 + 24760;
	// addi r29,r10,24608
	ctx.r29.s64 = ctx.r10.s64 + 24608;
	// addi r28,r11,24908
	ctx.r28.s64 = ctx.r11.s64 + 24908;
loc_8277C68C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8277c6b4
	if (!ctx.cr6.eq) goto loc_8277C6B4;
	// lwz r11,17176(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 17176);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,711
	ctx.r5.s64 = 711;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277C6B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8277C6B4:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82787820
	ctx.lr = 0x8277C6C4;
	sub_82787820(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8277c6e8
	if (!ctx.cr0.eq) goto loc_8277C6E8;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x8277c6f8
	if (!ctx.cr6.eq) goto loc_8277C6F8;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8277c6f8
	if (ctx.cr6.eq) goto loc_8277C6F8;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x8277c68c
	goto loc_8277C68C;
loc_8277C6E8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// b 0x8277c6fc
	goto loc_8277C6FC;
loc_8277C6F8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8277C6FC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8277C708"))) PPC_WEAK_FUNC(sub_8277C708);
PPC_FUNC_IMPL(__imp__sub_8277C708) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x8277C710;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// lis r27,-31963
	ctx.r27.s64 = -2094727168;
	// addi r30,r9,24760
	ctx.r30.s64 = ctx.r9.s64 + 24760;
	// addi r29,r10,24608
	ctx.r29.s64 = ctx.r10.s64 + 24608;
	// addi r28,r11,25028
	ctx.r28.s64 = ctx.r11.s64 + 25028;
loc_8277C740:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8277c768
	if (!ctx.cr6.eq) goto loc_8277C768;
	// lwz r11,17176(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 17176);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,731
	ctx.r5.s64 = 731;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277C768;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8277C768:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82787970
	ctx.lr = 0x8277C784;
	sub_82787970(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8277c7b0
	if (!ctx.cr0.eq) goto loc_8277C7B0;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x8277c7ac
	if (!ctx.cr6.eq) goto loc_8277C7AC;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8277c7ac
	if (ctx.cr6.eq) goto loc_8277C7AC;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x8277c740
	goto loc_8277C740;
loc_8277C7AC:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_8277C7B0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8277C7B8"))) PPC_WEAK_FUNC(sub_8277C7B8);
PPC_FUNC_IMPL(__imp__sub_8277C7B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8277C7C0;
	__savegprlr_29(ctx, base);
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
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8277c808
	if (!ctx.cr6.eq) goto loc_8277C808;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// addi r6,r10,24884
	ctx.r6.s64 = ctx.r10.s64 + 24884;
	// lwz r11,17176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17176);
	// addi r4,r9,24608
	ctx.r4.s64 = ctx.r9.s64 + 24608;
	// addi r3,r8,24760
	ctx.r3.s64 = ctx.r8.s64 + 24760;
	// li r5,751
	ctx.r5.s64 = 751;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277C808;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8277C808:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8277beb8
	ctx.lr = 0x8277C814;
	sub_8277BEB8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82787ae8
	ctx.lr = 0x8277C82C;
	sub_82787AE8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8278fd30
	ctx.lr = 0x8277C83C;
	sub_8278FD30(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8277C848"))) PPC_WEAK_FUNC(sub_8277C848);
PPC_FUNC_IMPL(__imp__sub_8277C848) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x8277C850;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// lis r27,-31963
	ctx.r27.s64 = -2094727168;
	// addi r30,r9,24760
	ctx.r30.s64 = ctx.r9.s64 + 24760;
	// addi r29,r10,24608
	ctx.r29.s64 = ctx.r10.s64 + 24608;
	// addi r28,r11,25076
	ctx.r28.s64 = ctx.r11.s64 + 25076;
loc_8277C880:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8277c8a8
	if (!ctx.cr6.eq) goto loc_8277C8A8;
	// lwz r11,17176(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 17176);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,829
	ctx.r5.s64 = 829;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277C8A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8277C8A8:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82788110
	ctx.lr = 0x8277C8C4;
	sub_82788110(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8277c8f0
	if (!ctx.cr0.eq) goto loc_8277C8F0;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x8277c8ec
	if (!ctx.cr6.eq) goto loc_8277C8EC;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8277c8ec
	if (ctx.cr6.eq) goto loc_8277C8EC;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x8277c880
	goto loc_8277C880;
loc_8277C8EC:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_8277C8F0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8277C8F8"))) PPC_WEAK_FUNC(sub_8277C8F8);
PPC_FUNC_IMPL(__imp__sub_8277C8F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x8277C900;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// lis r27,-31963
	ctx.r27.s64 = -2094727168;
	// addi r30,r9,24760
	ctx.r30.s64 = ctx.r9.s64 + 24760;
	// addi r29,r10,24608
	ctx.r29.s64 = ctx.r10.s64 + 24608;
	// addi r28,r11,25100
	ctx.r28.s64 = ctx.r11.s64 + 25100;
loc_8277C930:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8277c958
	if (!ctx.cr6.eq) goto loc_8277C958;
	// lwz r11,17176(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 17176);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,878
	ctx.r5.s64 = 878;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277C958;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8277C958:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x827884e0
	ctx.lr = 0x8277C974;
	sub_827884E0(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8277c9a0
	if (!ctx.cr0.eq) goto loc_8277C9A0;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x8277c99c
	if (!ctx.cr6.eq) goto loc_8277C99C;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8277c99c
	if (ctx.cr6.eq) goto loc_8277C99C;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x8277c930
	goto loc_8277C930;
loc_8277C99C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_8277C9A0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8277C9A8"))) PPC_WEAK_FUNC(sub_8277C9A8);
PPC_FUNC_IMPL(__imp__sub_8277C9A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8277C9B0;
	__savegprlr_29(ctx, base);
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
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8277c9f8
	if (!ctx.cr6.eq) goto loc_8277C9F8;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// addi r6,r10,24884
	ctx.r6.s64 = ctx.r10.s64 + 24884;
	// lwz r11,17176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17176);
	// addi r4,r9,24608
	ctx.r4.s64 = ctx.r9.s64 + 24608;
	// addi r3,r8,24760
	ctx.r3.s64 = ctx.r8.s64 + 24760;
	// li r5,898
	ctx.r5.s64 = 898;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277C9F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8277C9F8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8277beb8
	ctx.lr = 0x8277CA04;
	sub_8277BEB8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82788658
	ctx.lr = 0x8277CA1C;
	sub_82788658(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8278fd30
	ctx.lr = 0x8277CA2C;
	sub_8278FD30(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8277CA38"))) PPC_WEAK_FUNC(sub_8277CA38);
PPC_FUNC_IMPL(__imp__sub_8277CA38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f4
	ctx.lr = 0x8277CA40;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// lis r27,-31963
	ctx.r27.s64 = -2094727168;
	// addi r30,r9,24760
	ctx.r30.s64 = ctx.r9.s64 + 24760;
	// addi r29,r10,24608
	ctx.r29.s64 = ctx.r10.s64 + 24608;
	// addi r28,r11,24908
	ctx.r28.s64 = ctx.r11.s64 + 24908;
loc_8277CA74:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8277ca9c
	if (!ctx.cr6.eq) goto loc_8277CA9C;
	// lwz r11,17176(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 17176);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,907
	ctx.r5.s64 = 907;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277CA9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8277CA9C:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82788760
	ctx.lr = 0x8277CAAC;
	sub_82788760(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8277cad0
	if (!ctx.cr0.eq) goto loc_8277CAD0;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x8277cae0
	if (!ctx.cr6.eq) goto loc_8277CAE0;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8277cae0
	if (ctx.cr6.eq) goto loc_8277CAE0;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x8277ca74
	goto loc_8277CA74;
loc_8277CAD0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// b 0x8277cae4
	goto loc_8277CAE4;
loc_8277CAE0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8277CAE4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8277CAF0"))) PPC_WEAK_FUNC(sub_8277CAF0);
PPC_FUNC_IMPL(__imp__sub_8277CAF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x8277CAF8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// lis r27,-31963
	ctx.r27.s64 = -2094727168;
	// addi r30,r9,24760
	ctx.r30.s64 = ctx.r9.s64 + 24760;
	// addi r29,r10,24608
	ctx.r29.s64 = ctx.r10.s64 + 24608;
	// addi r28,r11,25128
	ctx.r28.s64 = ctx.r11.s64 + 25128;
loc_8277CB28:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8277cb50
	if (!ctx.cr6.eq) goto loc_8277CB50;
	// lwz r11,17176(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 17176);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,927
	ctx.r5.s64 = 927;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277CB50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8277CB50:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x827888b0
	ctx.lr = 0x8277CB6C;
	sub_827888B0(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8277cb98
	if (!ctx.cr0.eq) goto loc_8277CB98;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x8277cb94
	if (!ctx.cr6.eq) goto loc_8277CB94;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8277cb94
	if (ctx.cr6.eq) goto loc_8277CB94;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x8277cb28
	goto loc_8277CB28;
loc_8277CB94:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_8277CB98:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8277CBA0"))) PPC_WEAK_FUNC(sub_8277CBA0);
PPC_FUNC_IMPL(__imp__sub_8277CBA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8277CBA8;
	__savegprlr_29(ctx, base);
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
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8277cbf0
	if (!ctx.cr6.eq) goto loc_8277CBF0;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// addi r6,r10,24884
	ctx.r6.s64 = ctx.r10.s64 + 24884;
	// lwz r11,17176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17176);
	// addi r4,r9,24608
	ctx.r4.s64 = ctx.r9.s64 + 24608;
	// addi r3,r8,24760
	ctx.r3.s64 = ctx.r8.s64 + 24760;
	// li r5,947
	ctx.r5.s64 = 947;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277CBF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8277CBF0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8277beb8
	ctx.lr = 0x8277CBFC;
	sub_8277BEB8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82788a28
	ctx.lr = 0x8277CC14;
	sub_82788A28(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8278fd30
	ctx.lr = 0x8277CC24;
	sub_8278FD30(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8277CC30"))) PPC_WEAK_FUNC(sub_8277CC30);
PPC_FUNC_IMPL(__imp__sub_8277CC30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f4
	ctx.lr = 0x8277CC38;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// lis r27,-31963
	ctx.r27.s64 = -2094727168;
	// addi r30,r9,24760
	ctx.r30.s64 = ctx.r9.s64 + 24760;
	// addi r29,r10,24608
	ctx.r29.s64 = ctx.r10.s64 + 24608;
	// addi r28,r11,24908
	ctx.r28.s64 = ctx.r11.s64 + 24908;
loc_8277CC6C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8277cc94
	if (!ctx.cr6.eq) goto loc_8277CC94;
	// lwz r11,17176(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 17176);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,956
	ctx.r5.s64 = 956;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277CC94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8277CC94:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82788b48
	ctx.lr = 0x8277CCA4;
	sub_82788B48(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8277ccc8
	if (!ctx.cr0.eq) goto loc_8277CCC8;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x8277ccd8
	if (!ctx.cr6.eq) goto loc_8277CCD8;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8277ccd8
	if (ctx.cr6.eq) goto loc_8277CCD8;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x8277cc6c
	goto loc_8277CC6C;
loc_8277CCC8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// b 0x8277ccdc
	goto loc_8277CCDC;
loc_8277CCD8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8277CCDC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8277CCE8"))) PPC_WEAK_FUNC(sub_8277CCE8);
PPC_FUNC_IMPL(__imp__sub_8277CCE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8277CCF0;
	__savegprlr_29(ctx, base);
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
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8277cd38
	if (!ctx.cr6.eq) goto loc_8277CD38;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// addi r6,r10,24884
	ctx.r6.s64 = ctx.r10.s64 + 24884;
	// lwz r11,17176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17176);
	// addi r4,r9,24608
	ctx.r4.s64 = ctx.r9.s64 + 24608;
	// addi r3,r8,24760
	ctx.r3.s64 = ctx.r8.s64 + 24760;
	// li r5,996
	ctx.r5.s64 = 996;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277CD38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8277CD38:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8277beb8
	ctx.lr = 0x8277CD44;
	sub_8277BEB8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82788e10
	ctx.lr = 0x8277CD5C;
	sub_82788E10(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8278fd30
	ctx.lr = 0x8277CD6C;
	sub_8278FD30(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8277CD78"))) PPC_WEAK_FUNC(sub_8277CD78);
PPC_FUNC_IMPL(__imp__sub_8277CD78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f4
	ctx.lr = 0x8277CD80;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// lis r27,-31963
	ctx.r27.s64 = -2094727168;
	// addi r30,r9,24760
	ctx.r30.s64 = ctx.r9.s64 + 24760;
	// addi r29,r10,24608
	ctx.r29.s64 = ctx.r10.s64 + 24608;
	// addi r28,r11,24908
	ctx.r28.s64 = ctx.r11.s64 + 24908;
loc_8277CDB4:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8277cddc
	if (!ctx.cr6.eq) goto loc_8277CDDC;
	// lwz r11,17176(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 17176);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,1005
	ctx.r5.s64 = 1005;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277CDDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8277CDDC:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82788f18
	ctx.lr = 0x8277CDEC;
	sub_82788F18(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8277ce10
	if (!ctx.cr0.eq) goto loc_8277CE10;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x8277ce20
	if (!ctx.cr6.eq) goto loc_8277CE20;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8277ce20
	if (ctx.cr6.eq) goto loc_8277CE20;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x8277cdb4
	goto loc_8277CDB4;
loc_8277CE10:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// b 0x8277ce24
	goto loc_8277CE24;
loc_8277CE20:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8277CE24:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8277CE30"))) PPC_WEAK_FUNC(sub_8277CE30);
PPC_FUNC_IMPL(__imp__sub_8277CE30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x8277CE38;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// lis r27,-31963
	ctx.r27.s64 = -2094727168;
	// addi r30,r9,24760
	ctx.r30.s64 = ctx.r9.s64 + 24760;
	// addi r29,r10,24608
	ctx.r29.s64 = ctx.r10.s64 + 24608;
	// addi r28,r11,25180
	ctx.r28.s64 = ctx.r11.s64 + 25180;
loc_8277CE68:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8277ce90
	if (!ctx.cr6.eq) goto loc_8277CE90;
	// lwz r11,17176(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 17176);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,1025
	ctx.r5.s64 = 1025;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277CE90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8277CE90:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82789068
	ctx.lr = 0x8277CEAC;
	sub_82789068(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8277ced8
	if (!ctx.cr0.eq) goto loc_8277CED8;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x8277ced4
	if (!ctx.cr6.eq) goto loc_8277CED4;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8277ced4
	if (ctx.cr6.eq) goto loc_8277CED4;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x8277ce68
	goto loc_8277CE68;
loc_8277CED4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_8277CED8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8277CEE0"))) PPC_WEAK_FUNC(sub_8277CEE0);
PPC_FUNC_IMPL(__imp__sub_8277CEE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x8277CEE8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// lis r27,-31963
	ctx.r27.s64 = -2094727168;
	// addi r30,r9,24760
	ctx.r30.s64 = ctx.r9.s64 + 24760;
	// addi r29,r10,24608
	ctx.r29.s64 = ctx.r10.s64 + 24608;
	// addi r28,r11,25208
	ctx.r28.s64 = ctx.r11.s64 + 25208;
loc_8277CF18:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8277cf40
	if (!ctx.cr6.eq) goto loc_8277CF40;
	// lwz r11,17176(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 17176);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,1074
	ctx.r5.s64 = 1074;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277CF40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8277CF40:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x827894a0
	ctx.lr = 0x8277CF5C;
	sub_827894A0(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8277cf88
	if (!ctx.cr0.eq) goto loc_8277CF88;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x8277cf84
	if (!ctx.cr6.eq) goto loc_8277CF84;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8277cf84
	if (ctx.cr6.eq) goto loc_8277CF84;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x8277cf18
	goto loc_8277CF18;
loc_8277CF84:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_8277CF88:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8277CF90"))) PPC_WEAK_FUNC(sub_8277CF90);
PPC_FUNC_IMPL(__imp__sub_8277CF90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8277CF98;
	__savegprlr_29(ctx, base);
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
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8277cfe0
	if (!ctx.cr6.eq) goto loc_8277CFE0;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// addi r6,r10,24884
	ctx.r6.s64 = ctx.r10.s64 + 24884;
	// lwz r11,17176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17176);
	// addi r4,r9,24608
	ctx.r4.s64 = ctx.r9.s64 + 24608;
	// addi r3,r8,24760
	ctx.r3.s64 = ctx.r8.s64 + 24760;
	// li r5,1094
	ctx.r5.s64 = 1094;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277CFE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8277CFE0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8277beb8
	ctx.lr = 0x8277CFEC;
	sub_8277BEB8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82789618
	ctx.lr = 0x8277D004;
	sub_82789618(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8278fd30
	ctx.lr = 0x8277D014;
	sub_8278FD30(ctx, base);
	// cmplwi cr6,r30,29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 29, ctx.xer);
	// bne cr6,0x8277d024
	if (!ctx.cr6.eq) goto loc_8277D024;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r11.u8);
loc_8277D024:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8277D030"))) PPC_WEAK_FUNC(sub_8277D030);
PPC_FUNC_IMPL(__imp__sub_8277D030) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f4
	ctx.lr = 0x8277D038;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// lis r27,-31963
	ctx.r27.s64 = -2094727168;
	// addi r30,r9,24760
	ctx.r30.s64 = ctx.r9.s64 + 24760;
	// addi r29,r10,24608
	ctx.r29.s64 = ctx.r10.s64 + 24608;
	// addi r28,r11,24908
	ctx.r28.s64 = ctx.r11.s64 + 24908;
loc_8277D06C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8277d094
	if (!ctx.cr6.eq) goto loc_8277D094;
	// lwz r11,17176(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 17176);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,1108
	ctx.r5.s64 = 1108;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277D094;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8277D094:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82789708
	ctx.lr = 0x8277D0A4;
	sub_82789708(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8277d0c8
	if (!ctx.cr0.eq) goto loc_8277D0C8;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x8277d0d8
	if (!ctx.cr6.eq) goto loc_8277D0D8;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8277d0d8
	if (ctx.cr6.eq) goto loc_8277D0D8;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x8277d06c
	goto loc_8277D06C;
loc_8277D0C8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// b 0x8277d0dc
	goto loc_8277D0DC;
loc_8277D0D8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8277D0DC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8277D0E8"))) PPC_WEAK_FUNC(sub_8277D0E8);
PPC_FUNC_IMPL(__imp__sub_8277D0E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x8277D0F0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// b 0x8277d124
	goto loc_8277D124;
loc_8277D110:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x8277d150
	if (ctx.cr6.eq) goto loc_8277D150;
	// lwz r31,24(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8277d150
	if (ctx.cr6.eq) goto loc_8277D150;
loc_8277D124:
	// stb r27,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r27.u8);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8278a050
	ctx.lr = 0x8277D140;
	sub_8278A050(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8277d110
	if (ctx.cr0.eq) goto loc_8277D110;
	// b 0x8277d154
	goto loc_8277D154;
loc_8277D150:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8277D154:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8277D160"))) PPC_WEAK_FUNC(sub_8277D160);
PPC_FUNC_IMPL(__imp__sub_8277D160) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x8277D168;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// b 0x8277d19c
	goto loc_8277D19C;
loc_8277D188:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x8277d1c8
	if (ctx.cr6.eq) goto loc_8277D1C8;
	// lwz r31,24(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8277d1c8
	if (ctx.cr6.eq) goto loc_8277D1C8;
loc_8277D19C:
	// stb r27,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r27.u8);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8278a550
	ctx.lr = 0x8277D1B8;
	sub_8278A550(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8277d188
	if (ctx.cr0.eq) goto loc_8277D188;
	// b 0x8277d1cc
	goto loc_8277D1CC;
loc_8277D1C8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8277D1CC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8277D1D8"))) PPC_WEAK_FUNC(sub_8277D1D8);
PPC_FUNC_IMPL(__imp__sub_8277D1D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f0
	ctx.lr = 0x8277D1E0;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r22,r8
	ctx.r22.u64 = ctx.r8.u64;
	// lis r27,-31963
	ctx.r27.s64 = -2094727168;
	// addi r30,r9,24760
	ctx.r30.s64 = ctx.r9.s64 + 24760;
	// addi r29,r10,24608
	ctx.r29.s64 = ctx.r10.s64 + 24608;
	// addi r28,r11,24908
	ctx.r28.s64 = ctx.r11.s64 + 24908;
loc_8277D218:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8277d240
	if (!ctx.cr6.eq) goto loc_8277D240;
	// lwz r11,17176(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 17176);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,1343
	ctx.r5.s64 = 1343;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277D240;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8277D240:
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x8278aa50
	ctx.lr = 0x8277D254;
	sub_8278AA50(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8277d278
	if (!ctx.cr0.eq) goto loc_8277D278;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne cr6,0x8277d288
	if (!ctx.cr6.eq) goto loc_8277D288;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8277d288
	if (ctx.cr6.eq) goto loc_8277D288;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x8277d218
	goto loc_8277D218;
loc_8277D278:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
	// b 0x8277d28c
	goto loc_8277D28C;
loc_8277D288:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8277D28C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8277D298"))) PPC_WEAK_FUNC(sub_8277D298);
PPC_FUNC_IMPL(__imp__sub_8277D298) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x8277D2A0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// b 0x8277d2d4
	goto loc_8277D2D4;
loc_8277D2C0:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x8277d300
	if (ctx.cr6.eq) goto loc_8277D300;
	// lwz r31,24(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8277d300
	if (ctx.cr6.eq) goto loc_8277D300;
loc_8277D2D4:
	// stb r27,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r27.u8);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8278abc0
	ctx.lr = 0x8277D2F0;
	sub_8278ABC0(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8277d2c0
	if (ctx.cr0.eq) goto loc_8277D2C0;
	// b 0x8277d304
	goto loc_8277D304;
loc_8277D300:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8277D304:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8277D310"))) PPC_WEAK_FUNC(sub_8277D310);
PPC_FUNC_IMPL(__imp__sub_8277D310) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8277D318;
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
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8277d364
	if (!ctx.cr6.eq) goto loc_8277D364;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// addi r6,r10,24884
	ctx.r6.s64 = ctx.r10.s64 + 24884;
	// lwz r11,17176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17176);
	// addi r4,r9,24608
	ctx.r4.s64 = ctx.r9.s64 + 24608;
	// addi r3,r8,24760
	ctx.r3.s64 = ctx.r8.s64 + 24760;
	// li r5,1381
	ctx.r5.s64 = 1381;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277D364;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8277D364:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8277beb8
	ctx.lr = 0x8277D370;
	sub_8277BEB8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x8278ae20
	ctx.lr = 0x8277D38C;
	sub_8278AE20(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8278fd30
	ctx.lr = 0x8277D3A0;
	sub_8278FD30(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8277D3B0"))) PPC_WEAK_FUNC(sub_8277D3B0);
PPC_FUNC_IMPL(__imp__sub_8277D3B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f0
	ctx.lr = 0x8277D3B8;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r22,r8
	ctx.r22.u64 = ctx.r8.u64;
	// lis r27,-31963
	ctx.r27.s64 = -2094727168;
	// addi r30,r9,24760
	ctx.r30.s64 = ctx.r9.s64 + 24760;
	// addi r29,r10,24608
	ctx.r29.s64 = ctx.r10.s64 + 24608;
	// addi r28,r11,24908
	ctx.r28.s64 = ctx.r11.s64 + 24908;
loc_8277D3F0:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8277d418
	if (!ctx.cr6.eq) goto loc_8277D418;
	// lwz r11,17176(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 17176);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,1390
	ctx.r5.s64 = 1390;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277D418;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8277D418:
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x8278b0c0
	ctx.lr = 0x8277D42C;
	sub_8278B0C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8277d450
	if (!ctx.cr0.eq) goto loc_8277D450;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne cr6,0x8277d460
	if (!ctx.cr6.eq) goto loc_8277D460;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8277d460
	if (ctx.cr6.eq) goto loc_8277D460;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x8277d3f0
	goto loc_8277D3F0;
loc_8277D450:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
	// b 0x8277d464
	goto loc_8277D464;
loc_8277D460:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8277D464:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8277D470"))) PPC_WEAK_FUNC(sub_8277D470);
PPC_FUNC_IMPL(__imp__sub_8277D470) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8277D478;
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
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8277d4c4
	if (!ctx.cr6.eq) goto loc_8277D4C4;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// addi r6,r10,24884
	ctx.r6.s64 = ctx.r10.s64 + 24884;
	// lwz r11,17176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17176);
	// addi r4,r9,24608
	ctx.r4.s64 = ctx.r9.s64 + 24608;
	// addi r3,r8,24760
	ctx.r3.s64 = ctx.r8.s64 + 24760;
	// li r5,1522
	ctx.r5.s64 = 1522;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277D4C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8277D4C4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8277beb8
	ctx.lr = 0x8277D4D0;
	sub_8277BEB8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x8278b768
	ctx.lr = 0x8277D4EC;
	sub_8278B768(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8278fd30
	ctx.lr = 0x8277D500;
	sub_8278FD30(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8277D510"))) PPC_WEAK_FUNC(sub_8277D510);
PPC_FUNC_IMPL(__imp__sub_8277D510) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f0
	ctx.lr = 0x8277D518;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r22,r8
	ctx.r22.u64 = ctx.r8.u64;
	// lis r27,-31963
	ctx.r27.s64 = -2094727168;
	// addi r30,r9,24760
	ctx.r30.s64 = ctx.r9.s64 + 24760;
	// addi r29,r10,24608
	ctx.r29.s64 = ctx.r10.s64 + 24608;
	// addi r28,r11,24908
	ctx.r28.s64 = ctx.r11.s64 + 24908;
loc_8277D550:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8277d578
	if (!ctx.cr6.eq) goto loc_8277D578;
	// lwz r11,17176(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 17176);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,1531
	ctx.r5.s64 = 1531;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277D578;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8277D578:
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x8278ba08
	ctx.lr = 0x8277D58C;
	sub_8278BA08(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8277d5b0
	if (!ctx.cr0.eq) goto loc_8277D5B0;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne cr6,0x8277d5c0
	if (!ctx.cr6.eq) goto loc_8277D5C0;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8277d5c0
	if (ctx.cr6.eq) goto loc_8277D5C0;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x8277d550
	goto loc_8277D550;
loc_8277D5B0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
	// b 0x8277d5c4
	goto loc_8277D5C4;
loc_8277D5C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8277D5C4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8277D5D0"))) PPC_WEAK_FUNC(sub_8277D5D0);
PPC_FUNC_IMPL(__imp__sub_8277D5D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8277D5D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8277d620
	if (!ctx.cr6.eq) goto loc_8277D620;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// addi r6,r10,25232
	ctx.r6.s64 = ctx.r10.s64 + 25232;
	// lwz r11,17176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17176);
	// addi r4,r9,24608
	ctx.r4.s64 = ctx.r9.s64 + 24608;
	// addi r3,r8,24760
	ctx.r3.s64 = ctx.r8.s64 + 24760;
	// li r5,1559
	ctx.r5.s64 = 1559;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277D620;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8277D620:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8277beb8
	ctx.lr = 0x8277D62C;
	sub_8277BEB8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,12
	ctx.r4.s64 = 12;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8277beb8
	ctx.lr = 0x8277D640;
	sub_8277BEB8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r6,20(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x8278bb78
	ctx.lr = 0x8277D658;
	sub_8278BB78(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8277d670
	if (ctx.cr0.eq) goto loc_8277D670;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8278fd30
	ctx.lr = 0x8277D670;
	sub_8278FD30(ctx, base);
loc_8277D670:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8277D678"))) PPC_WEAK_FUNC(sub_8277D678);
PPC_FUNC_IMPL(__imp__sub_8277D678) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8277D680;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r28,r31,28
	ctx.r28.s64 = ctx.r31.s64 + 28;
	// li r29,10
	ctx.r29.s64 = 10;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
loc_8277D6A0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8277d868
	ctx.lr = 0x8277D6A8;
	sub_8277D868(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r28,r28,12
	ctx.r28.s64 = ctx.r28.s64 + 12;
	// bge 0x8277d6a0
	if (!ctx.cr0.lt) goto loc_8277D6A0;
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r30,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r30.u32);
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// stw r30,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r30.u32);
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// stw r30,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r30.u32);
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// addi r5,r8,26304
	ctx.r5.s64 = ctx.r8.s64 + 26304;
	// stw r30,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r30.u32);
	// addi r7,r10,26312
	ctx.r7.s64 = ctx.r10.s64 + 26312;
	// stw r30,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r30.u32);
	// addi r6,r9,25848
	ctx.r6.s64 = ctx.r9.s64 + 25848;
	// stw r30,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r30.u32);
	// li r8,93
	ctx.r8.s64 = 93;
	// stw r30,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r30.u32);
	// li r4,40
	ctx.r4.s64 = 40;
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r29,r31,196
	ctx.r29.s64 = ctx.r31.s64 + 196;
	// addi r27,r31,180
	ctx.r27.s64 = ctx.r31.s64 + 180;
	// bl 0x82790c60
	ctx.lr = 0x8277D710;
	sub_82790C60(ctx, base);
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// lwz r10,204(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// stw r3,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r3.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8277d728
	if (!ctx.cr6.lt) goto loc_8277D728;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
loc_8277D728:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82a455d0
	ctx.lr = 0x8277D738;
	sub_82A455D0(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r29,r11,25268
	ctx.r29.s64 = ctx.r11.s64 + 25268;
	// addi r28,r10,25296
	ctx.r28.s64 = ctx.r10.s64 + 25296;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,25400
	ctx.r5.s64 = ctx.r11.s64 + 25400;
	// li r8,77
	ctx.r8.s64 = 77;
	// li r4,13308
	ctx.r4.s64 = 13308;
	// li r3,13308
	ctx.r3.s64 = 13308;
	// bl 0x82784ff0
	ctx.lr = 0x8277D768;
	sub_82784FF0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8277d778
	if (ctx.cr0.eq) goto loc_8277D778;
	// bl 0x8278f008
	ctx.lr = 0x8277D774;
	sub_8278F008(ctx, base);
	// b 0x8277d77c
	goto loc_8277D77C;
loc_8277D778:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8277D77C:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,25412
	ctx.r5.s64 = ctx.r11.s64 + 25412;
	// li r8,78
	ctx.r8.s64 = 78;
	// li r4,3736
	ctx.r4.s64 = 3736;
	// li r3,3736
	ctx.r3.s64 = 3736;
	// bl 0x82784ff0
	ctx.lr = 0x8277D7A0;
	sub_82784FF0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x8277d7ec
	if (ctx.cr0.eq) goto loc_8277D7EC;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
	// addi r9,r10,-30208
	ctx.r9.s64 = ctx.r10.s64 + -30208;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_8277D7C0:
	// stw r30,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r30.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bge 0x8277d7c0
	if (!ctx.cr0.lt) goto loc_8277D7C0;
	// li r5,3684
	ctx.r5.s64 = 3684;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r29,52
	ctx.r3.s64 = ctx.r29.s64 + 52;
	// bl 0x82a455d0
	ctx.lr = 0x8277D7E8;
	sub_82A455D0(ctx, base);
	// b 0x8277d7f0
	goto loc_8277D7F0;
loc_8277D7EC:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_8277D7F0:
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// bl 0x82791d78
	ctx.lr = 0x8277D800;
	sub_82791D78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r5,r11,25432
	ctx.r5.s64 = ctx.r11.s64 + 25432;
	// addi r4,r10,7876
	ctx.r4.s64 = ctx.r10.s64 + 7876;
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r31,16
	ctx.r29.s64 = ctx.r31.s64 + 16;
	// bl 0x8277dce0
	ctx.lr = 0x8277D824;
	sub_8277DCE0(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8277db50
	ctx.lr = 0x8277D834;
	sub_8277DB50(ctx, base);
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x8277c140
	ctx.lr = 0x8277D848;
	sub_8277C140(ctx, base);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// li r4,1024
	ctx.r4.s64 = 1024;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8277e7e0
	ctx.lr = 0x8277D858;
	sub_8277E7E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8277D868"))) PPC_WEAK_FUNC(sub_8277D868);
PPC_FUNC_IMPL(__imp__sub_8277D868) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r10,10
	ctx.r10.s64 = 10;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// li r8,93
	ctx.r8.s64 = 93;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r7,r9,26224
	ctx.r7.s64 = ctx.r9.s64 + 26224;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r6,r11,25848
	ctx.r6.s64 = ctx.r11.s64 + 25848;
	// addi r5,r10,26304
	ctx.r5.s64 = ctx.r10.s64 + 26304;
	// li r4,120
	ctx.r4.s64 = 120;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82790c60
	ctx.lr = 0x8277D8B8;
	sub_82790C60(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8277d8d0
	if (!ctx.cr6.lt) goto loc_8277D8D0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_8277D8D0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mulli r5,r11,12
	ctx.r5.s64 = ctx.r11.s64 * 12;
	// bl 0x82a455d0
	ctx.lr = 0x8277D8E0;
	sub_82A455D0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8277D8F8"))) PPC_WEAK_FUNC(sub_8277D8F8);
PPC_FUNC_IMPL(__imp__sub_8277D8F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8277D900;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8277d920
	if (ctx.cr6.eq) goto loc_8277D920;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8277d924
	if (!ctx.cr6.eq) goto loc_8277D924;
loc_8277D920:
	// lwz r5,196(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 196);
loc_8277D924:
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8277da24
	if (ctx.cr6.eq) goto loc_8277DA24;
loc_8277D930:
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8277da24
	if (ctx.cr6.eq) goto loc_8277DA24;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8277d950
	if (ctx.cr6.eq) goto loc_8277D950;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8277d954
	if (!ctx.cr6.eq) goto loc_8277D954;
loc_8277D950:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
loc_8277D954:
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// lbz r11,557(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 557);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8277d97c
	if (!ctx.cr0.eq) goto loc_8277D97C;
	// lbz r11,558(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 558);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8277d9fc
	if (ctx.cr0.eq) goto loc_8277D9FC;
	// lwz r3,536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 536);
	// bl 0x827a48f8
	ctx.lr = 0x8277D978;
	sub_827A48F8(ctx, base);
	// b 0x8277d9fc
	goto loc_8277D9FC;
loc_8277D97C:
	// lbz r11,556(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 556);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8277d9d4
	if (!ctx.cr0.eq) goto loc_8277D9D4;
	// lwz r11,536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 536);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8277d9ac
	if (ctx.cr6.eq) goto loc_8277D9AC;
	// lwz r8,60(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// subf r10,r10,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
	// srawi. r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8277d9c8
	if (!ctx.cr0.eq) goto loc_8277D9C8;
loc_8277D9AC:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8277d9cc
	if (ctx.cr6.eq) goto loc_8277D9CC;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi. r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8277d9cc
	if (ctx.cr0.eq) goto loc_8277D9CC;
loc_8277D9C8:
	// li r9,1
	ctx.r9.s64 = 1;
loc_8277D9CC:
	// clrlwi. r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8277d9fc
	if (ctx.cr0.eq) goto loc_8277D9FC;
loc_8277D9D4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8277e1e8
	ctx.lr = 0x8277D9E0;
	sub_8277E1E8(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r30,16
	ctx.r5.s64 = ctx.r30.s64 + 16;
	// addi r4,r30,180
	ctx.r4.s64 = ctx.r30.s64 + 180;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82783c50
	ctx.lr = 0x8277D9F4;
	sub_82783C50(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8277e2e0
	ctx.lr = 0x8277D9FC;
	sub_8277E2E0(ctx, base);
loc_8277D9FC:
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8277da1c
	if (ctx.cr6.eq) goto loc_8277DA1C;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r11,r28,4
	ctx.r11.s64 = ctx.r28.s64 + 4;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x8277da1c
	if (ctx.cr6.eq) goto loc_8277DA1C;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_8277DA1C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8277d930
	if (!ctx.cr6.eq) goto loc_8277D930;
loc_8277DA24:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8277e690
	ctx.lr = 0x8277DA2C;
	sub_8277E690(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8277DA38"))) PPC_WEAK_FUNC(sub_8277DA38);
PPC_FUNC_IMPL(__imp__sub_8277DA38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8277DA40;
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
	// beq cr6,0x8277da60
	if (ctx.cr6.eq) goto loc_8277DA60;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8277da64
	if (!ctx.cr6.eq) goto loc_8277DA64;
loc_8277DA60:
	// lwz r29,196(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
loc_8277DA64:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8277db44
	if (ctx.cr6.eq) goto loc_8277DB44;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8277db44
	if (ctx.cr6.eq) goto loc_8277DB44;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8277e630
	ctx.lr = 0x8277DA88;
	sub_8277E630(ctx, base);
loc_8277DA88:
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8277db34
	if (ctx.cr6.eq) goto loc_8277DB34;
	// lbz r11,556(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 556);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8277db2c
	if (ctx.cr0.eq) goto loc_8277DB2C;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8277e630
	ctx.lr = 0x8277DAAC;
	sub_8277E630(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8277e1e8
	ctx.lr = 0x8277DAB8;
	sub_8277E1E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8277e560
	ctx.lr = 0x8277DAC0;
	sub_8277E560(ctx, base);
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277DADC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,528(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 528);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r30,r11,44
	ctx.r30.s64 = ctx.r11.s64 + 44;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x827931e8
	ctx.lr = 0x8277DAFC;
	sub_827931E8(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x827931e8
	ctx.lr = 0x8277DB10;
	sub_827931E8(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x827931e8
	ctx.lr = 0x8277DB24;
	sub_827931E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8277e2e0
	ctx.lr = 0x8277DB2C;
	sub_8277E2E0(ctx, base);
loc_8277DB2C:
	// addic. r29,r29,4
	ctx.xer.ca = ctx.r29.u32 > 4294967291;
	ctx.r29.s64 = ctx.r29.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x8277da88
	if (!ctx.cr0.eq) goto loc_8277DA88;
loc_8277DB34:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8277e630
	ctx.lr = 0x8277DB44;
	sub_8277E630(ctx, base);
loc_8277DB44:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8277DB50"))) PPC_WEAK_FUNC(sub_8277DB50);
PPC_FUNC_IMPL(__imp__sub_8277DB50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8277dba4
	if (!ctx.cr6.eq) goto loc_8277DBA4;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// addi r6,r10,25444
	ctx.r6.s64 = ctx.r10.s64 + 25444;
	// lwz r11,17176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17176);
	// addi r4,r9,25296
	ctx.r4.s64 = ctx.r9.s64 + 25296;
	// addi r3,r8,25472
	ctx.r3.s64 = ctx.r8.s64 + 25472;
	// li r5,344
	ctx.r5.s64 = 344;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277DBA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8277DBA4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8278ec70
	ctx.lr = 0x8277DBB0;
	sub_8278EC70(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8277DBC8"))) PPC_WEAK_FUNC(sub_8277DBC8);
PPC_FUNC_IMPL(__imp__sub_8277DBC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x8277DBD0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8277dc14
	if (!ctx.cr6.eq) goto loc_8277DC14;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// addi r6,r10,25524
	ctx.r6.s64 = ctx.r10.s64 + 25524;
	// lwz r11,17176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17176);
	// addi r4,r9,25296
	ctx.r4.s64 = ctx.r9.s64 + 25296;
	// addi r3,r8,25472
	ctx.r3.s64 = ctx.r8.s64 + 25472;
	// li r5,391
	ctx.r5.s64 = 391;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277DC14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8277DC14:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8278ec70
	ctx.lr = 0x8277DC20;
	sub_8278EC70(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r11,4028
	ctx.r5.s64 = ctx.r11.s64 + 4028;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8277c8f8
	ctx.lr = 0x8277DC38;
	sub_8277C8F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8277dcb4
	if (ctx.cr6.eq) goto loc_8277DCB4;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8278ec70
	ctx.lr = 0x8277DC50;
	sub_8278EC70(ctx, base);
	// lwz r28,200(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r27,12(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8277dcd8
	if (ctx.cr6.eq) goto loc_8277DCD8;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8277DC68:
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277DC80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r3,r27
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x8277dc9c
	if (ctx.cr6.eq) goto loc_8277DC9C;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x8277dc68
	if (ctx.cr6.lt) goto loc_8277DC68;
	// b 0x8277dcd8
	goto loc_8277DCD8;
loc_8277DC9C:
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82783b00
	ctx.lr = 0x8277DCB0;
	sub_82783B00(ctx, base);
	// b 0x8277dcd8
	goto loc_8277DCD8;
loc_8277DCB4:
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8277c140
	ctx.lr = 0x8277DCCC;
	sub_8277C140(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r31,180
	ctx.r3.s64 = ctx.r31.s64 + 180;
	// bl 0x8277e8e0
	ctx.lr = 0x8277DCD8;
	sub_8277E8E0(ctx, base);
loc_8277DCD8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8277DCE0"))) PPC_WEAK_FUNC(sub_8277DCE0);
PPC_FUNC_IMPL(__imp__sub_8277DCE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8277DCE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,17788
	ctx.r4.s64 = ctx.r11.s64 + 17788;
	// bl 0x8278f210
	ctx.lr = 0x8277DD08;
	sub_8278F210(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8277c9a8
	ctx.lr = 0x8277DD18;
	sub_8277C9A8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8249d108
	ctx.lr = 0x8277DD28;
	sub_8249D108(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8277dd3c
	if (ctx.cr6.eq) goto loc_8277DD3C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8249d1d8
	ctx.lr = 0x8277DD3C;
	sub_8249D1D8(ctx, base);
loc_8277DD3C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8277cf90
	ctx.lr = 0x8277DD4C;
	sub_8277CF90(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8249d108
	ctx.lr = 0x8277DD5C;
	sub_8249D108(ctx, base);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8277DD68"))) PPC_WEAK_FUNC(sub_8277DD68);
PPC_FUNC_IMPL(__imp__sub_8277DD68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x8277DD70;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lwz r26,0(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r27,9160(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9160);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// bl 0x82786170
	ctx.lr = 0x8277DD94;
	sub_82786170(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// clrlwi. r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lis r29,-31963
	ctx.r29.s64 = -2094727168;
	// addi r31,r11,-30936
	ctx.r31.s64 = ctx.r11.s64 + -30936;
	// addi r30,r10,-30964
	ctx.r30.s64 = ctx.r10.s64 + -30964;
	// bne 0x8277ddd0
	if (!ctx.cr0.eq) goto loc_8277DDD0;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lwz r10,17176(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 17176);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,-30828
	ctx.r3.s64 = ctx.r11.s64 + -30828;
	// li r5,164
	ctx.r5.s64 = 164;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8277DDD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8277DDD0:
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82786170
	ctx.lr = 0x8277DDDC;
	sub_82786170(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8277de04
	if (!ctx.cr0.eq) goto loc_8277DE04;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lwz r10,17176(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 17176);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,-30780
	ctx.r3.s64 = ctx.r11.s64 + -30780;
	// li r5,165
	ctx.r5.s64 = 165;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8277DE04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8277DE04:
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lwz r11,17788(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17788);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8277de44
	if (ctx.cr6.eq) goto loc_8277DE44;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lwz r11,17364(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17364);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8277de44
	if (ctx.cr6.eq) goto loc_8277DE44;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lwz r10,17176(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 17176);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,-30736
	ctx.r3.s64 = ctx.r11.s64 + -30736;
	// li r5,166
	ctx.r5.s64 = 166;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8277DE44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8277DE44:
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8278f3f8
	ctx.lr = 0x8277DE58;
	sub_8278F3F8(ctx, base);
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8277DE68"))) PPC_WEAK_FUNC(sub_8277DE68);
PPC_FUNC_IMPL(__imp__sub_8277DE68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x8277DE70;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// lwz r10,196(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8277def8
	if (ctx.cr6.eq) goto loc_8277DEF8;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// addi r27,r11,-23748
	ctx.r27.s64 = ctx.r11.s64 + -23748;
loc_8277DE9C:
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8277deec
	if (ctx.cr6.eq) goto loc_8277DEEC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8277e1e8
	ctx.lr = 0x8277DEB4;
	sub_8277E1E8(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8277dce0
	ctx.lr = 0x8277DECC;
	sub_8277DCE0(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82783c50
	ctx.lr = 0x8277DEE4;
	sub_82783C50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8277e2e0
	ctx.lr = 0x8277DEEC;
	sub_8277E2E0(ctx, base);
loc_8277DEEC:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x8277de9c
	if (!ctx.cr0.eq) goto loc_8277DE9C;
loc_8277DEF8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8277DF00"))) PPC_WEAK_FUNC(sub_8277DF00);
PPC_FUNC_IMPL(__imp__sub_8277DF00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8277DF08;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r7,r11,25552
	ctx.r7.s64 = ctx.r11.s64 + 25552;
	// addi r6,r10,25296
	ctx.r6.s64 = ctx.r10.s64 + 25296;
	// addi r5,r9,25588
	ctx.r5.s64 = ctx.r9.s64 + 25588;
	// li r8,604
	ctx.r8.s64 = 604;
	// li r4,564
	ctx.r4.s64 = 564;
	// li r3,564
	ctx.r3.s64 = 564;
	// bl 0x82784ff0
	ctx.lr = 0x8277DF38;
	sub_82784FF0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8277df58
	if (ctx.cr0.eq) goto loc_8277DF58;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x827834e0
	ctx.lr = 0x8277DF50;
	sub_827834E0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x8277df5c
	goto loc_8277DF5C;
loc_8277DF58:
	// li r29,0
	ctx.r29.s64 = 0;
loc_8277DF5C:
	// lwz r11,200(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 200);
	// addi r31,r28,196
	ctx.r31.s64 = ctx.r28.s64 + 196;
	// lwz r30,204(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 204);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x8277dfd8
	if (ctx.cr6.lt) goto loc_8277DFD8;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// rlwinm r4,r30,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r7,r10,26312
	ctx.r7.s64 = ctx.r10.s64 + 26312;
	// addi r6,r11,25848
	ctx.r6.s64 = ctx.r11.s64 + 25848;
	// addi r5,r9,26304
	ctx.r5.s64 = ctx.r9.s64 + 26304;
	// li r8,93
	ctx.r8.s64 = 93;
	// bl 0x82790c60
	ctx.lr = 0x8277DFA4;
	sub_82790C60(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8277dfbc
	if (!ctx.cr6.lt) goto loc_8277DFBC;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_8277DFBC:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// subf r10,r30,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r30.s64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82a455d0
	ctx.lr = 0x8277DFD8;
	sub_82A455D0(ctx, base);
loc_8277DFD8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stwx r29,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r29.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x8277e630
	ctx.lr = 0x8277E004;
	sub_8277E630(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8277E010"))) PPC_WEAK_FUNC(sub_8277E010);
PPC_FUNC_IMPL(__imp__sub_8277E010) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8277E018;
	__savegprlr_29(ctx, base);
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
	// beq cr6,0x8277e158
	if (ctx.cr6.eq) goto loc_8277E158;
	// bl 0x8277e1e8
	ctx.lr = 0x8277E030;
	sub_8277E1E8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8277e630
	ctx.lr = 0x8277E040;
	sub_8277E630(ctx, base);
	// lwz r11,552(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 552);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8277e088
	if (ctx.cr6.eq) goto loc_8277E088;
	// addi r30,r29,544
	ctx.r30.s64 = ctx.r29.s64 + 544;
loc_8277E050:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8277e068
	if (!ctx.cr6.eq) goto loc_8277E068;
	// twi 31,r0,22
loc_8277E068:
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,520(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 520);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8278f4d0
	ctx.lr = 0x8277E07C;
	sub_8278F4D0(ctx, base);
	// lwz r11,552(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 552);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8277e050
	if (!ctx.cr6.eq) goto loc_8277E050;
loc_8277E088:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8277e2e0
	ctx.lr = 0x8277E090;
	sub_8277E2E0(ctx, base);
	// lwz r10,200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8277e0c0
	if (ctx.cr6.eq) goto loc_8277E0C0;
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
loc_8277E0A4:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r29
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8277e0c4
	if (ctx.cr6.eq) goto loc_8277E0C4;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8277e0a4
	if (ctx.cr6.lt) goto loc_8277E0A4;
loc_8277E0C0:
	// li r30,-1
	ctx.r30.s64 = -1;
loc_8277E0C4:
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x8277e130
	if (ctx.cr6.eq) goto loc_8277E130;
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8277e104
	if (ctx.cr6.lt) goto loc_8277E104;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// addi r6,r10,26000
	ctx.r6.s64 = ctx.r10.s64 + 26000;
	// lwz r11,17176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17176);
	// addi r4,r9,25848
	ctx.r4.s64 = ctx.r9.s64 + 25848;
	// addi r3,r8,25960
	ctx.r3.s64 = ctx.r8.s64 + 25960;
	// li r5,243
	ctx.r5.s64 = 243;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277E104;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8277E104:
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,200(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r11,r30,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r30.s64;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82a45878
	ctx.lr = 0x8277E124;
	sub_82A45878(ctx, base);
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
loc_8277E130:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277E148;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82784f18
	ctx.lr = 0x8277E14C;
	sub_82784F18(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,564
	ctx.r5.s64 = 564;
	// bl 0x82784a40
	ctx.lr = 0x8277E158;
	sub_82784A40(ctx, base);
loc_8277E158:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8277E160"))) PPC_WEAK_FUNC(sub_8277E160);
PPC_FUNC_IMPL(__imp__sub_8277E160) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,176(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8277e174
	if (!ctx.cr6.eq) goto loc_8277E174;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8277E174:
	// lwz r11,172(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	// lwz r10,176(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8277e18c
	if (!ctx.cr6.gt) goto loc_8277E18C;
	// twi 31,r0,22
loc_8277E18C:
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8277e1a0
	if (ctx.cr6.gt) goto loc_8277E1A0;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8277e1a4
	if (!ctx.cr6.lt) goto loc_8277E1A4;
loc_8277E1A0:
	// twi 31,r0,22
loc_8277E1A4:
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// rlwinm r11,r8,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// clrlwi r9,r8,30
	ctx.r9.u64 = ctx.r8.u32 & 0x3;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8277e1bc
	if (ctx.cr6.lt) goto loc_8277E1BC;
	// twi 31,r0,22
loc_8277E1BC:
	// lwz r10,168(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8277e1cc
	if (ctx.cr6.gt) goto loc_8277E1CC;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
loc_8277E1CC:
	// lwz r10,164(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r3,r11,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8277E1E8"))) PPC_WEAK_FUNC(sub_8277E1E8);
PPC_FUNC_IMPL(__imp__sub_8277E1E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x8277E1F0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r31,r28,160
	ctx.r31.s64 = ctx.r28.s64 + 160;
	// lwz r11,176(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 176);
	// lwz r10,172(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 172);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrlwi. r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8277e234
	if (!ctx.cr0.eq) goto loc_8277E234;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8277e234
	if (ctx.cr6.gt) goto loc_8277E234;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8277ee70
	ctx.lr = 0x8277E234;
	sub_8277EE70(ctx, base);
loc_8277E234:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r29,r9,r11
	ctx.r29.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r11,r29,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8277e254
	if (ctx.cr6.gt) goto loc_8277E254;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
loc_8277E254:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r30,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8277e2a4
	if (!ctx.cr6.eq) goto loc_8277E2A4;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// addi r26,r11,26164
	ctx.r26.s64 = ctx.r11.s64 + 26164;
	// addi r25,r10,26608
	ctx.r25.s64 = ctx.r10.s64 + 26608;
	// addi r24,r9,26712
	ctx.r24.s64 = ctx.r9.s64 + 26712;
	// bl 0x82784f18
	ctx.lr = 0x8277E284;
	sub_82784F18(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r8,124
	ctx.r8.s64 = 124;
	// bl 0x827848f8
	ctx.lr = 0x8277E29C;
	sub_827848F8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stwx r3,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r3.u32);
loc_8277E2A4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r29,2,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xC;
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8277e2bc
	if (ctx.cr0.eq) goto loc_8277E2BC;
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
loc_8277E2BC:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x8277e630
	ctx.lr = 0x8277E2D8;
	sub_8277E630(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8277E2E0"))) PPC_WEAK_FUNC(sub_8277E2E0);
PPC_FUNC_IMPL(__imp__sub_8277E2E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,176(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8277e394
	if (ctx.cr6.eq) goto loc_8277E394;
	// lwz r11,172(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	// addi r31,r3,160
	ctx.r31.s64 = ctx.r3.s64 + 160;
	// lwz r10,176(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8277e318
	if (!ctx.cr6.gt) goto loc_8277E318;
	// twi 31,r0,22
loc_8277E318:
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8277e32c
	if (ctx.cr6.gt) goto loc_8277E32C;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8277e330
	if (!ctx.cr6.lt) goto loc_8277E330;
loc_8277E32C:
	// twi 31,r0,22
loc_8277E330:
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// rlwinm r11,r8,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// clrlwi r9,r8,30
	ctx.r9.u64 = ctx.r8.u32 & 0x3;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8277e348
	if (ctx.cr6.lt) goto loc_8277E348;
	// twi 31,r0,22
loc_8277E348:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8277e358
	if (ctx.cr6.gt) goto loc_8277E358;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
loc_8277E358:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,7
	ctx.r4.s64 = 7;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r5,r11,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bl 0x8277e630
	ctx.lr = 0x8277E374;
	sub_8277E630(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8277e394
	if (ctx.cr6.eq) goto loc_8277E394;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bne 0x8277e394
	if (!ctx.cr0.eq) goto loc_8277E394;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_8277E394:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8277E3A8"))) PPC_WEAK_FUNC(sub_8277E3A8);
PPC_FUNC_IMPL(__imp__sub_8277E3A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8277E3B0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mulli r11,r4,12
	ctx.r11.s64 = ctx.r4.s64 * 12;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r31,r11,28
	ctx.r31.s64 = ctx.r11.s64 + 28;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r27,-1
	ctx.r27.s64 = -1;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x8277e444
	if (ctx.cr6.lt) goto loc_8277E444;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// addi r5,r8,26304
	ctx.r5.s64 = ctx.r8.s64 + 26304;
	// addi r7,r10,26224
	ctx.r7.s64 = ctx.r10.s64 + 26224;
	// mulli r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 * 12;
	// addi r6,r9,25848
	ctx.r6.s64 = ctx.r9.s64 + 25848;
	// li r8,93
	ctx.r8.s64 = 93;
	// bl 0x82790c60
	ctx.lr = 0x8277E410;
	sub_82790C60(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8277e428
	if (!ctx.cr6.lt) goto loc_8277E428;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_8277E428:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mulli r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 * 12;
	// subf r10,r30,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r30.s64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mulli r5,r10,12
	ctx.r5.s64 = ctx.r10.s64 * 12;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bl 0x82a455d0
	ctx.lr = 0x8277E444;
	sub_82A455D0(ctx, base);
loc_8277E444:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// stwx r28,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r28.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8277E478"))) PPC_WEAK_FUNC(sub_8277E478);
PPC_FUNC_IMPL(__imp__sub_8277E478) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mulli r11,r4,12
	ctx.r11.s64 = ctx.r4.s64 * 12;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,28
	ctx.r31.s64 = ctx.r11.s64 + 28;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8277e548
	if (ctx.cr6.eq) goto loc_8277E548;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_8277E4AC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x8277e4d0
	if (!ctx.cr6.eq) goto loc_8277E4D0;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x8277e4d0
	if (!ctx.cr6.eq) goto loc_8277E4D0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x8277e4e4
	if (ctx.cr6.eq) goto loc_8277E4E4;
loc_8277E4D0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8277e4ac
	if (ctx.cr6.lt) goto loc_8277E4AC;
	// b 0x8277e548
	goto loc_8277E548;
loc_8277E4E4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8277e51c
	if (ctx.cr6.lt) goto loc_8277E51C;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// addi r6,r10,25704
	ctx.r6.s64 = ctx.r10.s64 + 25704;
	// lwz r11,17176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17176);
	// addi r4,r9,25848
	ctx.r4.s64 = ctx.r9.s64 + 25848;
	// addi r3,r8,25960
	ctx.r3.s64 = ctx.r8.s64 + 25960;
	// li r5,243
	ctx.r5.s64 = 243;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277E51C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8277E51C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 * 12;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r11,r30,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r30.s64;
	// addi r4,r3,12
	ctx.r4.s64 = ctx.r3.s64 + 12;
	// mulli r5,r11,12
	ctx.r5.s64 = ctx.r11.s64 * 12;
	// bl 0x82a45878
	ctx.lr = 0x8277E53C;
	sub_82A45878(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_8277E548:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8277E560"))) PPC_WEAK_FUNC(sub_8277E560);
PPC_FUNC_IMPL(__imp__sub_8277E560) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8277e5ac
	if (!ctx.cr6.eq) goto loc_8277E5AC;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// addi r6,r10,25604
	ctx.r6.s64 = ctx.r10.s64 + 25604;
	// lwz r11,17176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17176);
	// addi r4,r9,25296
	ctx.r4.s64 = ctx.r9.s64 + 25296;
	// addi r3,r8,25640
	ctx.r3.s64 = ctx.r8.s64 + 25640;
	// li r5,782
	ctx.r5.s64 = 782;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277E5AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8277E5AC:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8277E5C8"))) PPC_WEAK_FUNC(sub_8277E5C8);
PPC_FUNC_IMPL(__imp__sub_8277E5C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8277e614
	if (!ctx.cr6.eq) goto loc_8277E614;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// addi r6,r10,25668
	ctx.r6.s64 = ctx.r10.s64 + 25668;
	// lwz r11,17176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17176);
	// addi r4,r9,25296
	ctx.r4.s64 = ctx.r9.s64 + 25296;
	// addi r3,r8,25472
	ctx.r3.s64 = ctx.r8.s64 + 25472;
	// li r5,792
	ctx.r5.s64 = 792;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277E614;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8277E614:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8277E630"))) PPC_WEAK_FUNC(sub_8277E630);
PPC_FUNC_IMPL(__imp__sub_8277E630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8277E638;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mulli r11,r29,12
	ctx.r11.s64 = ctx.r29.s64 * 12;
	// add r28,r11,r3
	ctx.r28.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r31,32(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8277e688
	if (ctx.cr6.eq) goto loc_8277E688;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8277E65C:
	// lwz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277E67C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// bne 0x8277e65c
	if (!ctx.cr0.eq) goto loc_8277E65C;
loc_8277E688:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8277E690"))) PPC_WEAK_FUNC(sub_8277E690);
PPC_FUNC_IMPL(__imp__sub_8277E690) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x8277E698;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r31,r27,180
	ctx.r31.s64 = ctx.r27.s64 + 180;
	// lwz r11,184(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 184);
	// lwz r10,188(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 188);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8277e6b8
	if (!ctx.cr6.gt) goto loc_8277E6B8;
	// twi 31,r0,22
loc_8277E6B8:
	// lwz r26,8(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// ble cr6,0x8277e6dc
	if (!ctx.cr6.gt) goto loc_8277E6DC;
	// twi 31,r0,22
loc_8277E6DC:
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lwz r29,88(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r30,92(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r28,r11,17180
	ctx.r28.s64 = ctx.r11.s64 + 17180;
loc_8277E6EC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8277e6fc
	if (ctx.cr6.eq) goto loc_8277E6FC;
	// cmplw cr6,r29,r31
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8277e700
	if (ctx.cr6.eq) goto loc_8277E700;
loc_8277E6FC:
	// twi 31,r0,22
loc_8277E700:
	// cmplw cr6,r30,r26
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x8277e788
	if (ctx.cr6.eq) goto loc_8277E788;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8277e714
	if (!ctx.cr6.eq) goto loc_8277E714;
	// twi 31,r0,22
loc_8277E714:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8277e724
	if (ctx.cr6.lt) goto loc_8277E724;
	// twi 31,r0,22
loc_8277E724:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x8278ec70
	ctx.lr = 0x8277E730;
	sub_8278EC70(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x8277c1d0
	ctx.lr = 0x8277E74C;
	sub_8277C1D0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x8277e75c
	if (ctx.cr0.eq) goto loc_8277E75C;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
loc_8277E75C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8277e770
	if (ctx.cr0.eq) goto loc_8277E770;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x8278f4d0
	ctx.lr = 0x8277E770;
	sub_8278F4D0(ctx, base);
loc_8277E770:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8277e780
	if (ctx.cr6.lt) goto loc_8277E780;
	// twi 31,r0,22
loc_8277E780:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// b 0x8277e6ec
	goto loc_8277E6EC;
loc_8277E788:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8277e79c
	if (!ctx.cr6.gt) goto loc_8277E79C;
	// twi 31,r0,22
loc_8277E79C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8277e7b8
	if (!ctx.cr6.gt) goto loc_8277E7B8;
	// twi 31,r0,22
loc_8277E7B8:
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// ld r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x8277e980
	ctx.lr = 0x8277E7D4;
	sub_8277E980(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8277E7E0"))) PPC_WEAK_FUNC(sub_8277E7E0);
PPC_FUNC_IMPL(__imp__sub_8277E7E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8277E7E8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8277e810
	if (ctx.cr6.eq) goto loc_8277E810;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplwi cr6,r11,1024
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1024, ctx.xer);
	// bge cr6,0x8277e8d8
	if (!ctx.cr6.lt) goto loc_8277E8D8;
loc_8277E810:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// addi r30,r11,26132
	ctx.r30.s64 = ctx.r11.s64 + 26132;
	// addi r29,r10,26608
	ctx.r29.s64 = ctx.r10.s64 + 26608;
	// addi r28,r9,26712
	ctx.r28.s64 = ctx.r9.s64 + 26712;
	// bl 0x82784f18
	ctx.lr = 0x8277E82C;
	sub_82784F18(ctx, base);
	// li r4,4096
	ctx.r4.s64 = 4096;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r8,124
	ctx.r8.s64 = 124;
	// bl 0x827848f8
	ctx.lr = 0x8277E844;
	sub_827848F8(ctx, base);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8277e860
	if (!ctx.cr6.gt) goto loc_8277E860;
	// twi 31,r0,22
	// twi 31,r0,22
loc_8277E860:
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// srawi. r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8277e87c
	if (ctx.cr0.eq) goto loc_8277E87C;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// bl 0x82a4d2d0
	ctx.lr = 0x8277E87C;
	sub_82A4D2D0(ctx, base);
loc_8277E87C:
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8277e890
	if (!ctx.cr6.eq) goto loc_8277E890;
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x8277e89c
	goto loc_8277E89C;
loc_8277E890:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// srawi r28,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r28.s64 = ctx.r11.s32 >> 2;
loc_8277E89C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8277e8c0
	if (ctx.cr6.eq) goto loc_8277E8C0;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// srawi r29,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r29.s64 = ctx.r11.s32 >> 2;
	// bl 0x82784f18
	ctx.lr = 0x8277E8B4;
	sub_82784F18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r5,r29,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82784a40
	ctx.lr = 0x8277E8C0;
	sub_82784A40(ctx, base);
loc_8277E8C0:
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// addi r10,r27,4096
	ctx.r10.s64 = ctx.r27.s64 + 4096;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_8277E8D8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8277E8E0"))) PPC_WEAK_FUNC(sub_8277E8E0);
PPC_FUNC_IMPL(__imp__sub_8277E8E0) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8277e904
	if (!ctx.cr6.eq) goto loc_8277E904;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x8277e910
	goto loc_8277E910;
loc_8277E904:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
loc_8277E910:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8277e944
	if (ctx.cr6.eq) goto loc_8277E944;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8277e944
	if (!ctx.cr6.lt) goto loc_8277E944;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// b 0x8277e96c
	goto loc_8277E96C;
loc_8277E944:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8277e954
	if (!ctx.cr6.gt) goto loc_8277E954;
	// twi 31,r0,22
loc_8277E954:
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8277ea00
	ctx.lr = 0x8277E96C;
	sub_8277EA00(ctx, base);
loc_8277E96C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8277E980"))) PPC_WEAK_FUNC(sub_8277E980);
PPC_FUNC_IMPL(__imp__sub_8277E980) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8277E988;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// std r28,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r28.u64);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// std r6,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r6.u64);
	// beq cr6,0x8277e9b8
	if (ctx.cr6.eq) goto loc_8277E9B8;
	// lwz r10,168(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8277e9bc
	if (ctx.cr6.eq) goto loc_8277E9BC;
loc_8277E9B8:
	// twi 31,r0,22
loc_8277E9BC:
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r5,172(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmplw cr6,r3,r5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x8277e9f0
	if (ctx.cr6.eq) goto loc_8277E9F0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// srawi. r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r6,r3
	ctx.r30.u64 = ctx.r6.u64 + ctx.r3.u64;
	// ble 0x8277e9ec
	if (!ctx.cr0.gt) goto loc_8277E9EC;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82a4d2d0
	ctx.lr = 0x8277E9EC;
	sub_82A4D2D0(ctx, base);
loc_8277E9EC:
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_8277E9F0:
	// std r28,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r28.u64);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8277EA00"))) PPC_WEAK_FUNC(sub_8277EA00);
PPC_FUNC_IMPL(__imp__sub_8277EA00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8277EA08;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// std r4,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r4.u64);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8277ea38
	if (ctx.cr6.eq) goto loc_8277EA38;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r9,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8277ea40
	if (!ctx.cr0.eq) goto loc_8277EA40;
loc_8277EA38:
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x8277ea70
	goto loc_8277EA70;
loc_8277EA40:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8277ea4c
	if (!ctx.cr6.gt) goto loc_8277EA4C;
	// twi 31,r0,22
loc_8277EA4C:
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8277ea60
	if (ctx.cr6.eq) goto loc_8277EA60;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8277ea64
	if (ctx.cr6.eq) goto loc_8277EA64;
loc_8277EA60:
	// twi 31,r0,22
loc_8277EA64:
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r30,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r30.s64 = ctx.r11.s32 >> 2;
loc_8277EA70:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8277eb40
	ctx.lr = 0x8277EA7C;
	sub_8277EB40(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8277ea90
	if (!ctx.cr6.gt) goto loc_8277EA90;
	// twi 31,r0,22
loc_8277EA90:
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bgt cr6,0x8277eac0
	if (ctx.cr6.gt) goto loc_8277EAC0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8277eac4
	if (!ctx.cr6.lt) goto loc_8277EAC4;
loc_8277EAC0:
	// twi 31,r0,22
loc_8277EAC4:
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r11.u64);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8277EAE0"))) PPC_WEAK_FUNC(sub_8277EAE0);
PPC_FUNC_IMPL(__imp__sub_8277EAE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,21104
	ctx.r4.s64 = ctx.r11.s64 + 21104;
	// bl 0x8276fba8
	ctx.lr = 0x8277EAFC;
	sub_8276FBA8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8277f0b8
	ctx.lr = 0x8277EB08;
	sub_8277F0B8(ctx, base);
	// bl 0x82770178
	ctx.lr = 0x8277EB0C;
	sub_82770178(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,11252
	ctx.r11.s64 = ctx.r11.s64 + 11252;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// bl 0x8276fa98
	ctx.lr = 0x8277EB20;
	sub_8276FA98(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8276fb38
	ctx.lr = 0x8277EB30;
	sub_8276FB38(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8277EB40"))) PPC_WEAK_FUNC(sub_8277EB40);
PPC_FUNC_IMPL(__imp__sub_8277EB40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x8277EB48;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r25,0(r6)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// std r4,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r4.u64);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8277eb70
	if (!ctx.cr6.eq) goto loc_8277EB70;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x8277eb7c
	goto loc_8277EB7C;
loc_8277EB70:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// srawi r8,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 2;
loc_8277EB7C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8277ee64
	if (ctx.cr6.eq) goto loc_8277EE64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8277eb94
	if (!ctx.cr6.eq) goto loc_8277EB94;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8277eba0
	goto loc_8277EBA0;
loc_8277EB94:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
loc_8277EBA0:
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x8277ebbc
	if (!ctx.cr6.lt) goto loc_8277EBBC;
	// bl 0x8277eae0
	ctx.lr = 0x8277EBB8;
	sub_8277EAE0(ctx, base);
	// b 0x8277ee64
	goto loc_8277EE64;
loc_8277EBBC:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8277ebcc
	if (!ctx.cr6.eq) goto loc_8277EBCC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8277ebd8
	goto loc_8277EBD8;
loc_8277EBCC:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
loc_8277EBD8:
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8277ed58
	if (!ctx.cr6.lt) goto loc_8277ED58;
	// rlwinm r11,r8,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x8277ebfc
	if (!ctx.cr6.lt) goto loc_8277EBFC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8277ec00
	goto loc_8277EC00;
loc_8277EBFC:
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
loc_8277EC00:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8277ec10
	if (!ctx.cr6.eq) goto loc_8277EC10;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x8277ec1c
	goto loc_8277EC1C;
loc_8277EC10:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
loc_8277EC1C:
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8277ec48
	if (!ctx.cr6.lt) goto loc_8277EC48;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8277ec38
	if (!ctx.cr6.eq) goto loc_8277EC38;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8277ec44
	goto loc_8277EC44;
loc_8277EC38:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
loc_8277EC44:
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
loc_8277EC48:
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// addi r31,r10,26132
	ctx.r31.s64 = ctx.r10.s64 + 26132;
	// addi r29,r9,26608
	ctx.r29.s64 = ctx.r9.s64 + 26608;
	// addi r28,r8,26712
	ctx.r28.s64 = ctx.r8.s64 + 26712;
	// rlwinm r26,r11,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82784f18
	ctx.lr = 0x8277EC68;
	sub_82784F18(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r8,124
	ctx.r8.s64 = 124;
	// bl 0x827848f8
	ctx.lr = 0x8277EC80;
	sub_827848F8(ctx, base);
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r31,172(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// subf r11,r5,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r5.s64;
	// srawi. r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r6,r29
	ctx.r28.u64 = ctx.r6.u64 + ctx.r29.u64;
	// beq 0x8277eca8
	if (ctx.cr0.eq) goto loc_8277ECA8;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82a4d2d0
	ctx.lr = 0x8277ECA8;
	sub_82A4D2D0(ctx, base);
loc_8277ECA8:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8277eccc
	if (ctx.cr6.eq) goto loc_8277ECCC;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// cmplwi r27,0
	ctx.cr0.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq 0x8277eccc
	if (ctx.cr0.eq) goto loc_8277ECCC;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
loc_8277ECC0:
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8277ecc0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8277ECC0;
loc_8277ECCC:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// srawi. r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8277ecf4
	if (ctx.cr0.eq) goto loc_8277ECF4;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x82a4d2d0
	ctx.lr = 0x8277ECF4;
	sub_82A4D2D0(ctx, base);
loc_8277ECF4:
	// lwz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8277ed08
	if (!ctx.cr6.eq) goto loc_8277ED08;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8277ed14
	goto loc_8277ED14;
loc_8277ED08:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
loc_8277ED14:
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8277ed3c
	if (ctx.cr6.eq) goto loc_8277ED3C;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// srawi r28,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r28.s64 = ctx.r11.s32 >> 2;
	// bl 0x82784f18
	ctx.lr = 0x8277ED30;
	sub_82784F18(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// rlwinm r5,r28,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82784a40
	ctx.lr = 0x8277ED3C;
	sub_82784A40(ctx, base);
loc_8277ED3C:
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// add r10,r26,r29
	ctx.r10.u64 = ctx.r26.u64 + ctx.r29.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r10,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// b 0x8277ee64
	goto loc_8277EE64;
loc_8277ED58:
	// lwz r31,172(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// lwz r28,8(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subf r11,r31,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r31.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x8277edf0
	if (!ctx.cr6.lt) goto loc_8277EDF0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8277ed90
	if (ctx.cr0.eq) goto loc_8277ED90;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82a4d2d0
	ctx.lr = 0x8277ED90;
	sub_82A4D2D0(ctx, base);
loc_8277ED90:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subf r11,r31,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r31.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// subf. r11,r11,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8277edbc
	if (ctx.cr0.eq) goto loc_8277EDBC;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8277edbc
	if (ctx.cr0.eq) goto loc_8277EDBC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8277EDB0:
	// stw r25,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r25.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8277edb0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8277EDB0;
loc_8277EDBC:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8277ee64
	if (ctx.cr6.eq) goto loc_8277EE64;
loc_8277EDDC:
	// stw r25,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r25.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8277eddc
	if (!ctx.cr6.eq) goto loc_8277EDDC;
	// b 0x8277ee64
	goto loc_8277EE64;
loc_8277EDF0:
	// rlwinm r27,r27,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subf r29,r27,r28
	ctx.r29.s64 = ctx.r28.s64 - ctx.r27.s64;
	// subf r11,r29,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r29.s64;
	// srawi. r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r26,r6,r3
	ctx.r26.u64 = ctx.r6.u64 + ctx.r3.u64;
	// beq 0x8277ee1c
	if (ctx.cr0.eq) goto loc_8277EE1C;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82a4d2d0
	ctx.lr = 0x8277EE1C;
	sub_82A4D2D0(ctx, base);
loc_8277EE1C:
	// subf r11,r31,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r31.s64;
	// stw r26,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r26.u32);
	// srawi. r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8277ee44
	if (!ctx.cr0.gt) goto loc_8277EE44;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// subf r3,r11,r28
	ctx.r3.s64 = ctx.r28.s64 - ctx.r11.s64;
	// bl 0x82a4d2d0
	ctx.lr = 0x8277EE44;
	sub_82A4D2D0(ctx, base);
loc_8277EE44:
	// add r10,r27,r31
	ctx.r10.u64 = ctx.r27.u64 + ctx.r31.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8277ee64
	if (ctx.cr6.eq) goto loc_8277EE64;
loc_8277EE54:
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8277ee54
	if (!ctx.cr6.eq) goto loc_8277EE54;
loc_8277EE64:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8277EE70"))) PPC_WEAK_FUNC(sub_8277EE70);
PPC_FUNC_IMPL(__imp__sub_8277EE70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x8277EE78;
	__savegprlr_25(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,4095
	ctx.r11.s64 = 268369920;
	// li r26,1
	ctx.r26.s64 = 1;
	// ori r31,r11,65535
	ctx.r31.u64 = ctx.r11.u64 | 65535;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subf r11,r10,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r10.s64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8277eee0
	if (!ctx.cr6.lt) goto loc_8277EEE0;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,26384
	ctx.r4.s64 = ctx.r11.s64 + 26384;
	// bl 0x8276fba8
	ctx.lr = 0x8277EEAC;
	sub_8276FBA8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8277f0b8
	ctx.lr = 0x8277EEB8;
	sub_8277F0B8(ctx, base);
	// bl 0x82770178
	ctx.lr = 0x8277EEBC;
	sub_82770178(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,11252
	ctx.r11.s64 = ctx.r11.s64 + 11252;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// bl 0x8276fa98
	ctx.lr = 0x8277EED0;
	sub_8276FA98(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8276fb38
	ctx.lr = 0x8277EEE0;
	sub_8276FB38(ctx, base);
loc_8277EEE0:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bge cr6,0x8277eef4
	if (!ctx.cr6.lt) goto loc_8277EEF4;
	// li r10,8
	ctx.r10.s64 = 8;
loc_8277EEF4:
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x8277ef0c
	if (!ctx.cr6.gt) goto loc_8277EF0C;
	// subf r9,r10,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x8277ef0c
	if (ctx.cr6.gt) goto loc_8277EF0C;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
loc_8277EF0C:
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// addi r28,r9,26404
	ctx.r28.s64 = ctx.r9.s64 + 26404;
	// addi r27,r8,26608
	ctx.r27.s64 = ctx.r8.s64 + 26608;
	// addi r25,r7,26712
	ctx.r25.s64 = ctx.r7.s64 + 26712;
	// rlwinm r29,r10,30,2,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// add r31,r11,r26
	ctx.r31.u64 = ctx.r11.u64 + ctx.r26.u64;
	// bl 0x82784f18
	ctx.lr = 0x8277EF34;
	sub_82784F18(ctx, base);
	// rlwinm r4,r31,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r8,124
	ctx.r8.s64 = 124;
	// bl 0x827848f8
	ctx.lr = 0x8277EF4C;
	sub_827848F8(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r31,r29,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// add r5,r31,r11
	ctx.r5.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r31,r27
	ctx.r3.u64 = ctx.r31.u64 + ctx.r27.u64;
	// subf r10,r5,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r5.s64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi. r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r6,r3
	ctx.r28.u64 = ctx.r6.u64 + ctx.r3.u64;
	// beq 0x8277ef88
	if (ctx.cr0.eq) goto loc_8277EF88;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82a4d2d0
	ctx.lr = 0x8277EF88;
	sub_82A4D2D0(ctx, base);
loc_8277EF88:
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, ctx.xer);
	// bgt cr6,0x8277f00c
	if (ctx.cr6.gt) goto loc_8277F00C;
	// subf r11,r5,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r5.s64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// srawi. r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r6,r28
	ctx.r31.u64 = ctx.r6.u64 + ctx.r28.u64;
	// beq 0x8277efb8
	if (ctx.cr0.eq) goto loc_8277EFB8;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a4d2d0
	ctx.lr = 0x8277EFB8;
	sub_82A4D2D0(ctx, base);
loc_8277EFB8:
	// subf. r11,r29,r26
	ctx.r11.s64 = ctx.r26.s64 - ctx.r29.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8277efe0
	if (ctx.cr0.eq) goto loc_8277EFE0;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8277efe0
	if (ctx.cr0.eq) goto loc_8277EFE0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8277EFD4:
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8277efd4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8277EFD4;
loc_8277EFE0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8277f080
	if (ctx.cr6.eq) goto loc_8277F080;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi r29,0
	ctx.cr0.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq 0x8277f080
	if (ctx.cr0.eq) goto loc_8277F080;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
loc_8277EFFC:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8277effc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8277EFFC;
	// b 0x8277f080
	goto loc_8277F080;
loc_8277F00C:
	// rlwinm r29,r26,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r5,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r5.s64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// srawi. r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8277f030
	if (ctx.cr0.eq) goto loc_8277F030;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// bl 0x82a4d2d0
	ctx.lr = 0x8277F030;
	sub_82A4D2D0(ctx, base);
loc_8277F030:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r5,r29,r11
	ctx.r5.u64 = ctx.r29.u64 + ctx.r11.u64;
	// subf r10,r5,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r5.s64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi. r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r6,r27
	ctx.r31.u64 = ctx.r6.u64 + ctx.r27.u64;
	// beq 0x8277f05c
	if (ctx.cr0.eq) goto loc_8277F05C;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a4d2d0
	ctx.lr = 0x8277F05C;
	sub_82A4D2D0(ctx, base);
loc_8277F05C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8277f080
	if (ctx.cr6.eq) goto loc_8277F080;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi r26,0
	ctx.cr0.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq 0x8277f080
	if (ctx.cr0.eq) goto loc_8277F080;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
loc_8277F074:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bdnz 0x8277f074
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8277F074;
loc_8277F080:
	// lwz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8277f0a0
	if (ctx.cr6.eq) goto loc_8277F0A0;
	// lwz r29,8(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82784f18
	ctx.lr = 0x8277F094;
	sub_82784F18(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// rlwinm r5,r29,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82784a40
	ctx.lr = 0x8277F0A0;
	sub_82784A40(ctx, base);
loc_8277F0A0:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r27,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r27.u32);
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8277F0B8"))) PPC_WEAK_FUNC(sub_8277F0B8);
PPC_FUNC_IMPL(__imp__sub_8277F0B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r11,r11,21124
	ctx.r11.s64 = ctx.r11.s64 + 21124;
	// addi r10,r10,21144
	ctx.r10.s64 = ctx.r10.s64 + 21144;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82770120
	ctx.lr = 0x8277F0EC;
	sub_82770120(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,11252
	ctx.r11.s64 = ctx.r11.s64 + 11252;
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

__attribute__((alias("__imp__sub_8277F110"))) PPC_WEAK_FUNC(sub_8277F110);
PPC_FUNC_IMPL(__imp__sub_8277F110) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r11,r11,11252
	ctx.r11.s64 = ctx.r11.s64 + 11252;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8276fa98
	sub_8276FA98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8277F120"))) PPC_WEAK_FUNC(sub_8277F120);
PPC_FUNC_IMPL(__imp__sub_8277F120) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,26468
	ctx.r3.s64 = ctx.r11.s64 + 26468;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8277F130"))) PPC_WEAK_FUNC(sub_8277F130);
PPC_FUNC_IMPL(__imp__sub_8277F130) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8277f1f0
	ctx.lr = 0x8277F150;
	sub_8277F1F0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8277f160
	if (ctx.cr0.eq) goto loc_8277F160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x8277F160;
	sub_82332DB8(ctx, base);
loc_8277F160:
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

__attribute__((alias("__imp__sub_8277F180"))) PPC_WEAK_FUNC(sub_8277F180);
PPC_FUNC_IMPL(__imp__sub_8277F180) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,27780
	ctx.r10.s64 = ctx.r10.s64 + 27780;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// stw r4,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bl 0x8249d108
	ctx.lr = 0x8277F1CC;
	sub_8249D108(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8277F1F0"))) PPC_WEAK_FUNC(sub_8277F1F0);
PPC_FUNC_IMPL(__imp__sub_8277F1F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8277F1F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r11,r11,27780
	ctx.r11.s64 = ctx.r11.s64 + 27780;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8277f2c8
	if (ctx.cr6.eq) goto loc_8277F2C8;
	// bl 0x827816b0
	ctx.lr = 0x8277F21C;
	sub_827816B0(ctx, base);
	// lwz r31,16(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_8277F23C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8277f24c
	if (ctx.cr6.eq) goto loc_8277F24C;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8277f250
	if (ctx.cr6.eq) goto loc_8277F250;
loc_8277F24C:
	// twi 31,r0,22
loc_8277F250:
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8277f2c8
	if (ctx.cr6.eq) goto loc_8277F2C8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8277f264
	if (!ctx.cr6.eq) goto loc_8277F264;
	// twi 31,r0,22
loc_8277F264:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8277f274
	if (!ctx.cr6.eq) goto loc_8277F274;
	// twi 31,r0,22
loc_8277F274:
	// addi r11,r10,12
	ctx.r11.s64 = ctx.r10.s64 + 12;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8277f284
	if (!ctx.cr6.eq) goto loc_8277F284;
	// twi 31,r0,22
loc_8277F284:
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x8277f298
	if (ctx.cr6.lt) goto loc_8277F298;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8277f29c
	goto loc_8277F29C;
loc_8277F298:
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
loc_8277F29C:
	// addi r7,r30,12
	ctx.r7.s64 = ctx.r30.s64 + 12;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r8,r11,28
	ctx.r8.s64 = ctx.r11.s64 + 28;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x827957a8
	ctx.lr = 0x8277F2B4;
	sub_827957A8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827829f0
	ctx.lr = 0x8277F2BC;
	sub_827829F0(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x8277f23c
	goto loc_8277F23C;
loc_8277F2C8:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8277f2f8
	if (ctx.cr6.eq) goto loc_8277F2F8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8249d108
	ctx.lr = 0x8277F2E4;
	sub_8249D108(ctx, base);
	// lwz r31,20(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x82784f18
	ctx.lr = 0x8277F2EC;
	sub_82784F18(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,36
	ctx.r5.s64 = 36;
	// bl 0x82784a40
	ctx.lr = 0x8277F2F8;
	sub_82784A40(ctx, base);
loc_8277F2F8:
	// lwz r31,16(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8277f364
	if (ctx.cr6.eq) goto loc_8277F364;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82782f78
	ctx.lr = 0x8277F330;
	sub_82782F78(ctx, base);
	// lwz r29,4(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82784f18
	ctx.lr = 0x8277F338;
	sub_82784F18(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,124
	ctx.r5.s64 = 124;
	// bl 0x82784a40
	ctx.lr = 0x8277F344;
	sub_82784A40(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r31,16(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x82784f18
	ctx.lr = 0x8277F358;
	sub_82784F18(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x82784a40
	ctx.lr = 0x8277F364;
	sub_82784A40(ctx, base);
loc_8277F364:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x8249d108
	ctx.lr = 0x8277F374;
	sub_8249D108(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8277F380"))) PPC_WEAK_FUNC(sub_8277F380);
PPC_FUNC_IMPL(__imp__sub_8277F380) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8277F388;
	__savegprlr_27(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r5,r11,26496
	ctx.r5.s64 = ctx.r11.s64 + 26496;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r30,r31,12
	ctx.r30.s64 = ctx.r31.s64 + 12;
	// bl 0x82a50ca8
	ctx.lr = 0x8277F3B0;
	sub_82A50CA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82781648
	ctx.lr = 0x8277F3B8;
	sub_82781648(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8277db50
	ctx.lr = 0x8277F3C0;
	sub_8277DB50(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r31,24
	ctx.r29.s64 = ctx.r31.s64 + 24;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8249d1d8
	ctx.lr = 0x8277F3D8;
	sub_8249D1D8(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// ld r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8277f3f4
	if (!ctx.cr6.eq) goto loc_8277F3F4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8277F3F4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r11,15834
	ctx.r4.s64 = ctx.r11.s64 + 15834;
	// beq 0x8277f428
	if (ctx.cr0.eq) goto loc_8277F428;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8249d188
	ctx.lr = 0x8277F40C;
	sub_8249D188(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r31,1
	ctx.r31.s64 = 1;
	// bl 0x8277cee0
	ctx.lr = 0x8277F424;
	sub_8277CEE0(ctx, base);
	// b 0x8277f434
	goto loc_8277F434;
loc_8277F428:
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// li r31,2
	ctx.r31.s64 = 2;
	// bl 0x8249d188
	ctx.lr = 0x8277F434;
	sub_8249D188(ctx, base);
loc_8277F434:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r4,r11,26504
	ctx.r4.s64 = ctx.r11.s64 + 26504;
	// bl 0x8249d188
	ctx.lr = 0x8277F448;
	sub_8249D188(ctx, base);
	// li r28,-1
	ctx.r28.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82782e78
	ctx.lr = 0x8277F45C;
	sub_82782E78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82782480
	ctx.lr = 0x8277F468;
	sub_82782480(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8249d108
	ctx.lr = 0x8277F478;
	sub_8249D108(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r5,r11,26500
	ctx.r5.s64 = ctx.r11.s64 + 26500;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r30,r10,-17732
	ctx.r30.s64 = ctx.r10.s64 + -17732;
	// addi r27,r1,304
	ctx.r27.s64 = ctx.r1.s64 + 304;
	// bl 0x82783148
	ctx.lr = 0x8277F498;
	sub_82783148(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x82783148
	ctx.lr = 0x8277F4A8;
	sub_82783148(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82783148
	ctx.lr = 0x8277F4B8;
	sub_82783148(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82782e78
	ctx.lr = 0x8277F4CC;
	sub_82782E78(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8249d108
	ctx.lr = 0x8277F4DC;
	sub_8249D108(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x8249d108
	ctx.lr = 0x8277F4EC;
	sub_8249D108(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8249d108
	ctx.lr = 0x8277F4FC;
	sub_8249D108(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8249d108
	ctx.lr = 0x8277F50C;
	sub_8249D108(ctx, base);
	// rlwinm. r11,r31,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8277f528
	if (ctx.cr0.eq) goto loc_8277F528;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// rlwinm r31,r31,0,31,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x8249d108
	ctx.lr = 0x8277F528;
	sub_8249D108(ctx, base);
loc_8277F528:
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8277f540
	if (ctx.cr0.eq) goto loc_8277F540;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8249d108
	ctx.lr = 0x8277F540;
	sub_8249D108(ctx, base);
loc_8277F540:
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8277f554
	if (ctx.cr6.lt) goto loc_8277F554;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// b 0x8277f558
	goto loc_8277F558;
loc_8277F554:
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
loc_8277F558:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8277F560"))) PPC_WEAK_FUNC(sub_8277F560);
PPC_FUNC_IMPL(__imp__sub_8277F560) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8277F568;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82801a70
	ctx.lr = 0x8277F584;
	sub_82801A70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8277f598
	if (!ctx.cr0.eq) goto loc_8277F598;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82794c30
	ctx.lr = 0x8277F598;
	sub_82794C30(ctx, base);
loc_8277F598:
	// li r28,0
	ctx.r28.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8277f6f8
	if (ctx.cr6.eq) goto loc_8277F6F8;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8249d188
	ctx.lr = 0x8277F5B4;
	sub_8249D188(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,26508
	ctx.r4.s64 = ctx.r11.s64 + 26508;
	// bl 0x82783288
	ctx.lr = 0x8277F5C4;
	sub_82783288(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8277f5d4
	if (!ctx.cr0.eq) goto loc_8277F5D4;
	// li r29,2
	ctx.r29.s64 = 2;
	// b 0x8277f630
	goto loc_8277F630;
loc_8277F5D4:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,26516
	ctx.r4.s64 = ctx.r11.s64 + 26516;
	// bl 0x82783288
	ctx.lr = 0x8277F5E4;
	sub_82783288(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8277f5f4
	if (!ctx.cr0.eq) goto loc_8277F5F4;
	// li r29,9
	ctx.r29.s64 = 9;
	// b 0x8277f630
	goto loc_8277F630;
loc_8277F5F4:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,26524
	ctx.r4.s64 = ctx.r11.s64 + 26524;
	// bl 0x82783288
	ctx.lr = 0x8277F604;
	sub_82783288(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8277f614
	if (!ctx.cr0.eq) goto loc_8277F614;
	// li r29,5
	ctx.r29.s64 = 5;
	// b 0x8277f630
	goto loc_8277F630;
loc_8277F614:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,26532
	ctx.r4.s64 = ctx.r11.s64 + 26532;
	// bl 0x82783288
	ctx.lr = 0x8277F624;
	sub_82783288(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8277f708
	if (!ctx.cr0.eq) goto loc_8277F708;
	// li r29,14
	ctx.r29.s64 = 14;
loc_8277F630:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x828017c0
	ctx.lr = 0x8277F644;
	sub_828017C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8277f6d4
	if (ctx.cr0.eq) goto loc_8277F6D4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8277f6a0
	if (ctx.cr6.eq) goto loc_8277F6A0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8277f684
	if (ctx.cr6.eq) goto loc_8277F684;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8277f6d4
	if (!ctx.cr6.eq) goto loc_8277F6D4;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x82801bb0
	ctx.lr = 0x8277F670;
	sub_82801BB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82781e70
	ctx.lr = 0x8277F680;
	sub_82781E70(ctx, base);
	// b 0x8277f6c4
	goto loc_8277F6C4;
loc_8277F684:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x82801b00
	ctx.lr = 0x8277F690;
	sub_82801B00(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82781c98
	ctx.lr = 0x8277F69C;
	sub_82781C98(ctx, base);
	// b 0x8277f6c4
	goto loc_8277F6C4;
loc_8277F6A0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82801b58
	ctx.lr = 0x8277F6B0;
	sub_82801B58(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r4,r11,1
	ctx.r4.u64 = ctx.r11.u64 ^ 1;
	// bl 0x82781ac0
	ctx.lr = 0x8277F6C4;
	sub_82781AC0(ctx, base);
loc_8277F6C4:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r28,r11,1
	ctx.r28.u64 = ctx.r11.u64 ^ 1;
loc_8277F6D4:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8277f6e8
	if (!ctx.cr0.eq) goto loc_8277F6E8;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82794c30
	ctx.lr = 0x8277F6E8;
	sub_82794C30(ctx, base);
loc_8277F6E8:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8249d108
	ctx.lr = 0x8277F6F8;
	sub_8249D108(ctx, base);
loc_8277F6F8:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x8277f714
	if (ctx.cr6.lt) goto loc_8277F714;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// b 0x8277f740
	goto loc_8277F740;
loc_8277F708:
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82794c30
	ctx.lr = 0x8277F714;
	sub_82794C30(ctx, base);
loc_8277F714:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// srawi r10,r31,31
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r31.s32 >> 31;
	// xor r9,r31,r10
	ctx.r9.u64 = ctx.r31.u64 ^ ctx.r10.u64;
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
loc_8277F740:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x828017c0
	ctx.lr = 0x8277F74C;
	sub_828017C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8277f760
	if (ctx.cr0.eq) goto loc_8277F760;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x8277f7a0
	if (ctx.cr6.eq) goto loc_8277F7A0;
loc_8277F760:
	// addi r11,r29,-5
	ctx.r11.s64 = ctx.r29.s64 + -5;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// rlwinm r6,r11,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827813f0
	ctx.lr = 0x8277F77C;
	sub_827813F0(ctx, base);
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8277f798
	if (ctx.cr0.eq) goto loc_8277F798;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
loc_8277F798:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
loc_8277F7A0:
	// li r4,7
	ctx.r4.s64 = 7;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82794c30
	ctx.lr = 0x8277F7AC;
	sub_82794C30(ctx, base);
}

__attribute__((alias("__imp__sub_8277F7B0"))) PPC_WEAK_FUNC(sub_8277F7B0);
PPC_FUNC_IMPL(__imp__sub_8277F7B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827816b0
	ctx.lr = 0x8277F7D0;
	sub_827816B0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277F7E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8277be40
	ctx.lr = 0x8277F7F0;
	sub_8277BE40(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x8277f80c
	goto loc_8277F80C;
loc_8277F7FC:
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x8277f864
	if (ctx.cr6.eq) goto loc_8277F864;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_8277F80C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8277f7fc
	if (!ctx.cr6.eq) goto loc_8277F7FC;
loc_8277F814:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
loc_8277F834:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r3,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 3;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8277F864:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8277f814
	if (ctx.cr6.eq) goto loc_8277F814;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82794b98
	ctx.lr = 0x8277F878;
	sub_82794B98(ctx, base);
	// b 0x8277f834
	goto loc_8277F834;
}

__attribute__((alias("__imp__sub_8277F880"))) PPC_WEAK_FUNC(sub_8277F880);
PPC_FUNC_IMPL(__imp__sub_8277F880) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9e0
	ctx.lr = 0x8277F888;
	__savegprlr_18(ctx, base);
	// stfd f31,-128(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r3,4(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// bl 0x8279f458
	ctx.lr = 0x8277F8A8;
	sub_8279F458(ctx, base);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x827816b0
	ctx.lr = 0x8277F8B0;
	sub_827816B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8277b880
	ctx.lr = 0x8277F8C0;
	sub_8277B880(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,10572
	ctx.r3.s64 = ctx.r11.s64 + 10572;
	// li r20,-1
	ctx.r20.s64 = -1;
	// bl 0x82783288
	ctx.lr = 0x8277F8D4;
	sub_82783288(ctx, base);
	// li r18,0
	ctx.r18.s64 = 0;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8277f934
	if (!ctx.cr0.eq) goto loc_8277F934;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8277f934
	if (!ctx.cr6.eq) goto loc_8277F934;
	// lwz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
	// mr r10,r18
	ctx.r10.u64 = ctx.r18.u64;
	// lbz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8277f930
	if (ctx.cr0.eq) goto loc_8277F930;
loc_8277F904:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x8277f930
	if (!ctx.cr6.lt) goto loc_8277F930;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// mullw r9,r9,r7
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// extsb. r11,r6
	ctx.r11.s64 = ctx.r6.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8277f904
	if (!ctx.cr0.eq) goto loc_8277F904;
loc_8277F930:
	// oris r20,r9,32768
	ctx.r20.u64 = ctx.r9.u64 | 2147483648;
loc_8277F934:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r24,r18
	ctx.r24.u64 = ctx.r18.u64;
	// addi r4,r19,12
	ctx.r4.s64 = ctx.r19.s64 + 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277F950;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8277be40
	ctx.lr = 0x8277F95C;
	sub_8277BE40(ctx, base);
	// lwz r30,92(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8277fc3c
	if (ctx.cr6.eq) goto loc_8277FC3C;
	// lis r6,-32215
	ctx.r6.s64 = -2111242240;
	// lwz r26,84(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// lis r7,-32244
	ctx.r7.s64 = -2113142784;
	// lfs f31,904(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// lis r27,-31963
	ctx.r27.s64 = -2094727168;
	// lis r23,-31963
	ctx.r23.s64 = -2094727168;
	// addi r25,r11,24776
	ctx.r25.s64 = ctx.r11.s64 + 24776;
	// addi r29,r10,24760
	ctx.r29.s64 = ctx.r10.s64 + 24760;
	// addi r28,r9,24608
	ctx.r28.s64 = ctx.r9.s64 + 24608;
	// addi r22,r8,24804
	ctx.r22.s64 = ctx.r8.s64 + 24804;
	// addi r21,r7,15834
	ctx.r21.s64 = ctx.r7.s64 + 15834;
loc_8277F9A4:
	// cmpwi cr6,r20,-1
	ctx.cr6.compare<int32_t>(ctx.r20.s32, -1, ctx.xer);
	// beq cr6,0x8277f9c4
	if (ctx.cr6.eq) goto loc_8277F9C4;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r11,r20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r20.u32, ctx.xer);
	// bne cr6,0x8277f9c4
	if (!ctx.cr6.eq) goto loc_8277F9C4;
	// li r24,1
	ctx.r24.s64 = 1;
	// b 0x8277fc18
	goto loc_8277FC18;
loc_8277F9C4:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8277beb8
	ctx.lr = 0x8277F9D0;
	sub_8277BEB8(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8277f9fc
	if (!ctx.cr6.eq) goto loc_8277F9FC;
	// lwz r11,17176(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 17176);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,406
	ctx.r5.s64 = 406;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277F9FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8277F9FC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x82786170
	ctx.lr = 0x8277FA08;
	sub_82786170(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8277fa20
	if (ctx.cr0.eq) goto loc_8277FA20;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,17180(r23)
	PPC_STORE_U32(ctx.r23.u32 + 17180, ctx.r11.u32);
	// b 0x8277fa24
	goto loc_8277FA24;
loc_8277FA20:
	// mr r10,r18
	ctx.r10.u64 = ctx.r18.u64;
loc_8277FA24:
	// clrlwi. r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8277fc18
	if (ctx.cr0.eq) goto loc_8277FC18;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8277fb94
	if (ctx.cr6.eq) goto loc_8277FB94;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8277fb10
	if (ctx.cr6.eq) goto loc_8277FB10;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8277fc18
	if (!ctx.cr6.eq) goto loc_8277FC18;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8277beb8
	ctx.lr = 0x8277FA54;
	sub_8277BEB8(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8277fa80
	if (!ctx.cr6.eq) goto loc_8277FA80;
	// lwz r11,17176(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 17176);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,335
	ctx.r5.s64 = 335;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277FA80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8277FA80:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x82786058
	ctx.lr = 0x8277FA8C;
	sub_82786058(ctx, base);
	// cmpwi cr6,r3,14
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 14, ctx.xer);
	// bne cr6,0x8277fc18
	if (!ctx.cr6.eq) goto loc_8277FC18;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8249d188
	ctx.lr = 0x8277FAA0;
	sub_8249D188(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8277cee0
	ctx.lr = 0x8277FAB4;
	sub_8277CEE0(ctx, base);
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8277fac8
	if (ctx.cr6.lt) goto loc_8277FAC8;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x8277facc
	goto loc_8277FACC;
loc_8277FAC8:
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_8277FACC:
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
loc_8277FAD0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x8277faf4
	if (ctx.cr0.eq) goto loc_8277FAF4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8277fad0
	if (ctx.cr6.eq) goto loc_8277FAD0;
loc_8277FAF4:
	// cntlzw r11,r9
	ctx.r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// rlwinm r24,r11,27,31,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x8249d108
	ctx.lr = 0x8277FB0C;
	sub_8249D108(ctx, base);
	// b 0x8277fc18
	goto loc_8277FC18;
loc_8277FB10:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8277beb8
	ctx.lr = 0x8277FB1C;
	sub_8277BEB8(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8277fb48
	if (!ctx.cr6.eq) goto loc_8277FB48;
	// lwz r11,17176(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 17176);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,335
	ctx.r5.s64 = 335;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277FB48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8277FB48:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x82786058
	ctx.lr = 0x8277FB54;
	sub_82786058(ctx, base);
	// cmpwi cr6,r3,9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 9, ctx.xer);
	// bne cr6,0x8277fc18
	if (!ctx.cr6.eq) goto loc_8277FC18;
	// stfs f31,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8277c510
	ctx.lr = 0x8277FB74;
	sub_8277C510(ctx, base);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x8277fb8c
	if (ctx.cr6.eq) goto loc_8277FB8C;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_8277FB8C:
	// clrlwi r24,r11,24
	ctx.r24.u64 = ctx.r11.u32 & 0xFF;
	// b 0x8277fc18
	goto loc_8277FC18;
loc_8277FB94:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8277beb8
	ctx.lr = 0x8277FBA0;
	sub_8277BEB8(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8277fbcc
	if (!ctx.cr6.eq) goto loc_8277FBCC;
	// lwz r11,17176(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 17176);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,335
	ctx.r5.s64 = 335;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277FBCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8277FBCC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x82786058
	ctx.lr = 0x8277FBD8;
	sub_82786058(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8277fc18
	if (!ctx.cr6.eq) goto loc_8277FC18;
	// stb r18,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r18.u8);
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8277c090
	ctx.lr = 0x8277FBF8;
	sub_8277C090(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r24,r11,27,31,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_8277FC18:
	// clrlwi. r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8277fc30
	if (!ctx.cr0.eq) goto loc_8277FC30;
	// lwz r30,32(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8277f9a4
	if (!ctx.cr6.eq) goto loc_8277F9A4;
	// b 0x8277fc3c
	goto loc_8277FC3C;
loc_8277FC30:
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// lwz r3,8(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 8);
	// bl 0x82794b98
	ctx.lr = 0x8277FC3C;
	sub_82794B98(ctx, base);
loc_8277FC3C:
	// clrlwi. r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8277fc60
	if (!ctx.cr0.eq) goto loc_8277FC60;
	// lwz r11,4(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r18,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r18.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
loc_8277FC60:
	// lwz r11,4(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r3,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 3;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f31,-128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x82a4ea30
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8277FC88"))) PPC_WEAK_FUNC(sub_8277FC88);
PPC_FUNC_IMPL(__imp__sub_8277FC88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9dc
	ctx.lr = 0x8277FC90;
	__savegprlr_17(ctx, base);
	// stfd f31,-136(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.f31.u64);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r17,r6
	ctx.r17.u64 = ctx.r6.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// lwz r3,4(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// bl 0x8279f458
	ctx.lr = 0x8277FCB8;
	sub_8279F458(ctx, base);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82780100
	if (!ctx.cr6.eq) goto loc_82780100;
	// lwz r11,4(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// li r10,-1
	ctx.r10.s64 = -1;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x827b4690
	ctx.lr = 0x8277FCE0;
	sub_827B4690(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8277b880
	ctx.lr = 0x8277FCEC;
	sub_8277B880(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,4(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// bl 0x8279f458
	ctx.lr = 0x8277FCFC;
	sub_8279F458(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,10572
	ctx.r3.s64 = ctx.r11.s64 + 10572;
	// li r18,-1
	ctx.r18.s64 = -1;
	// bl 0x82783288
	ctx.lr = 0x8277FD10;
	sub_82783288(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8277fd6c
	if (!ctx.cr0.eq) goto loc_8277FD6C;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8277fd6c
	if (!ctx.cr6.eq) goto loc_8277FD6C;
	// lwz r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8277fd68
	if (ctx.cr0.eq) goto loc_8277FD68;
loc_8277FD3C:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x8277fd68
	if (!ctx.cr6.lt) goto loc_8277FD68;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r7,r7,63
	ctx.r7.u64 = ctx.r7.u64 | 63;
	// mullw r9,r9,r7
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// extsb. r11,r6
	ctx.r11.s64 = ctx.r6.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8277fd3c
	if (!ctx.cr0.eq) goto loc_8277FD3C;
loc_8277FD68:
	// oris r18,r9,32768
	ctx.r18.u64 = ctx.r9.u64 | 2147483648;
loc_8277FD6C:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// li r19,1
	ctx.r19.s64 = 1;
	// bl 0x827816b0
	ctx.lr = 0x8277FD78;
	sub_827816B0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r20,12
	ctx.r4.s64 = ctx.r20.s64 + 12;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277FD8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8277be40
	ctx.lr = 0x8277FD98;
	sub_8277BE40(ctx, base);
	// lwz r30,92(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x827800c8
	if (ctx.cr6.eq) goto loc_827800C8;
	// lis r6,-32215
	ctx.r6.s64 = -2111242240;
	// lwz r25,84(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// lis r7,-32244
	ctx.r7.s64 = -2113142784;
	// lfs f31,904(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// lis r26,-31963
	ctx.r26.s64 = -2094727168;
	// lis r23,-31963
	ctx.r23.s64 = -2094727168;
	// addi r24,r11,24776
	ctx.r24.s64 = ctx.r11.s64 + 24776;
	// addi r28,r10,24760
	ctx.r28.s64 = ctx.r10.s64 + 24760;
	// addi r27,r9,24608
	ctx.r27.s64 = ctx.r9.s64 + 24608;
	// addi r22,r8,24804
	ctx.r22.s64 = ctx.r8.s64 + 24804;
	// addi r21,r7,15834
	ctx.r21.s64 = ctx.r7.s64 + 15834;
loc_8277FDE0:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r18,-1
	ctx.cr6.compare<int32_t>(ctx.r18.s32, -1, ctx.xer);
	// beq cr6,0x8277fdfc
	if (ctx.cr6.eq) goto loc_8277FDFC;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r11,r11,r18
	ctx.r11.s64 = ctx.r18.s64 - ctx.r11.s64;
	// b 0x8278004c
	goto loc_8278004C;
loc_8277FDFC:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8277beb8
	ctx.lr = 0x8277FE08;
	sub_8277BEB8(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8277fe34
	if (!ctx.cr6.eq) goto loc_8277FE34;
	// lwz r11,17176(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17176);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r5,406
	ctx.r5.s64 = 406;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277FE34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8277FE34:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x82786170
	ctx.lr = 0x8277FE40;
	sub_82786170(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8277fe58
	if (ctx.cr0.eq) goto loc_8277FE58;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,17180(r23)
	PPC_STORE_U32(ctx.r23.u32 + 17180, ctx.r11.u32);
	// b 0x8277fe5c
	goto loc_8277FE5C;
loc_8277FE58:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8277FE5C:
	// clrlwi. r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82780054
	if (ctx.cr0.eq) goto loc_82780054;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8277ffcc
	if (ctx.cr6.eq) goto loc_8277FFCC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8277ff48
	if (ctx.cr6.eq) goto loc_8277FF48;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82780054
	if (!ctx.cr6.eq) goto loc_82780054;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8277beb8
	ctx.lr = 0x8277FE8C;
	sub_8277BEB8(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8277feb8
	if (!ctx.cr6.eq) goto loc_8277FEB8;
	// lwz r11,17176(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17176);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r5,335
	ctx.r5.s64 = 335;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277FEB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8277FEB8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x82786058
	ctx.lr = 0x8277FEC4;
	sub_82786058(ctx, base);
	// cmpwi cr6,r3,14
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 14, ctx.xer);
	// bne cr6,0x82780054
	if (!ctx.cr6.eq) goto loc_82780054;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8249d188
	ctx.lr = 0x8277FED8;
	sub_8249D188(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8277cee0
	ctx.lr = 0x8277FEEC;
	sub_8277CEE0(ctx, base);
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8277ff00
	if (ctx.cr6.lt) goto loc_8277FF00;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x8277ff04
	goto loc_8277FF04;
loc_8277FF00:
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_8277FF04:
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
loc_8277FF08:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x8277ff2c
	if (ctx.cr0.eq) goto loc_8277FF2C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8277ff08
	if (ctx.cr6.eq) goto loc_8277FF08;
loc_8277FF2C:
	// cntlzw r11,r9
	ctx.r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// rlwinm r29,r11,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x8249d108
	ctx.lr = 0x8277FF44;
	sub_8249D108(ctx, base);
	// b 0x82780054
	goto loc_82780054;
loc_8277FF48:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8277beb8
	ctx.lr = 0x8277FF54;
	sub_8277BEB8(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8277ff80
	if (!ctx.cr6.eq) goto loc_8277FF80;
	// lwz r11,17176(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17176);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r5,335
	ctx.r5.s64 = 335;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277FF80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8277FF80:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x82786058
	ctx.lr = 0x8277FF8C;
	sub_82786058(ctx, base);
	// cmpwi cr6,r3,9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 9, ctx.xer);
	// bne cr6,0x82780054
	if (!ctx.cr6.eq) goto loc_82780054;
	// stfs f31,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8277c510
	ctx.lr = 0x8277FFAC;
	sub_8277C510(ctx, base);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x8277ffc4
	if (ctx.cr6.eq) goto loc_8277FFC4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8277FFC4:
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// b 0x82780054
	goto loc_82780054;
loc_8277FFCC:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8277beb8
	ctx.lr = 0x8277FFD8;
	sub_8277BEB8(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82780004
	if (!ctx.cr6.eq) goto loc_82780004;
	// lwz r11,17176(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17176);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r5,335
	ctx.r5.s64 = 335;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82780004;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82780004:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x82786058
	ctx.lr = 0x82780010;
	sub_82786058(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82780054
	if (!ctx.cr6.eq) goto loc_82780054;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8277c090
	ctx.lr = 0x82780034;
	sub_8277C090(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
loc_8278004C:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r29,r11,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82780054:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827800bc
	if (ctx.cr0.eq) goto loc_827800BC;
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// lwz r3,8(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	// bl 0x82794b98
	ctx.lr = 0x82780068;
	sub_82794B98(ctx, base);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,4(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// bl 0x8279f458
	ctx.lr = 0x82780078;
	sub_8279F458(ctx, base);
	// extsw r11,r19
	ctx.r11.s64 = ctx.r19.s32;
	// li r10,3
	ctx.r10.s64 = 3;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8279c958
	ctx.lr = 0x827800A8;
	sub_8279C958(ctx, base);
	// lwz r11,4(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// li r4,-2
	ctx.r4.s64 = -2;
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82801900
	ctx.lr = 0x827800BC;
	sub_82801900(ctx, base);
loc_827800BC:
	// lwz r30,32(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8277fde0
	if (!ctx.cr6.eq) goto loc_8277FDE0;
loc_827800C8:
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8279f5e8
	ctx.lr = 0x827800DC;
	sub_8279F5E8(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r5,r19,-1
	ctx.r5.s64 = ctx.r19.s64 + -1;
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x827c8e18
	ctx.lr = 0x827800F0;
	sub_827C8E18(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8279f648
	ctx.lr = 0x827800F8;
	sub_8279F648(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827b4578
	ctx.lr = 0x82780100;
	sub_827B4578(ctx, base);
loc_82780100:
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lfd f31,-136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x82a4ea2c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82780110"))) PPC_WEAK_FUNC(sub_82780110);
PPC_FUNC_IMPL(__imp__sub_82780110) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9d0
	ctx.lr = 0x82780118;
	__savegprlr_14(ctx, base);
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r15,r5
	ctx.r15.u64 = ctx.r5.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r5,r1,200
	ctx.r5.s64 = ctx.r1.s64 + 200;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8279f458
	ctx.lr = 0x8278013C;
	sub_8279F458(ctx, base);
	// lwz r11,200(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82780570
	if (!ctx.cr6.eq) goto loc_82780570;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,-1
	ctx.r10.s64 = -1;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// bl 0x827b4690
	ctx.lr = 0x82780164;
	sub_827B4690(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827816b0
	ctx.lr = 0x8278016C;
	sub_827816B0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8277b880
	ctx.lr = 0x8278017C;
	sub_8277B880(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,10572
	ctx.r3.s64 = ctx.r11.s64 + 10572;
	// bl 0x82783288
	ctx.lr = 0x8278018C;
	sub_82783288(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// li r16,1
	ctx.r16.s64 = 1;
	// rlwinm r30,r10,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827801B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8277be40
	ctx.lr = 0x827801BC;
	sub_8277BE40(ctx, base);
	// lwz r31,132(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82780538
	if (ctx.cr6.eq) goto loc_82780538;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r29,104(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// lis r7,-32219
	ctx.r7.s64 = -2111504384;
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// lis r6,-32219
	ctx.r6.s64 = -2111504384;
	// lis r5,-32219
	ctx.r5.s64 = -2111504384;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// clrlwi r14,r30,24
	ctx.r14.u64 = ctx.r30.u32 & 0xFF;
	// li r17,4
	ctx.r17.s64 = 4;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r24,3
	ctx.r24.s64 = 3;
	// lis r25,-31963
	ctx.r25.s64 = -2094727168;
	// lis r22,-31963
	ctx.r22.s64 = -2094727168;
	// addi r21,r10,25052
	ctx.r21.s64 = ctx.r10.s64 + 25052;
	// addi r20,r9,24956
	ctx.r20.s64 = ctx.r9.s64 + 24956;
	// addi r19,r8,24776
	ctx.r19.s64 = ctx.r8.s64 + 24776;
	// addi r27,r7,24760
	ctx.r27.s64 = ctx.r7.s64 + 24760;
	// addi r26,r6,24608
	ctx.r26.s64 = ctx.r6.s64 + 24608;
	// addi r18,r5,24804
	ctx.r18.s64 = ctx.r5.s64 + 24804;
	// addi r23,r11,15834
	ctx.r23.s64 = ctx.r11.s64 + 15834;
loc_82780224:
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 0, ctx.xer);
	// beq cr6,0x8278023c
	if (ctx.cr6.eq) goto loc_8278023C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r17,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r17.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x827804f0
	goto loc_827804F0;
loc_8278023C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8277beb8
	ctx.lr = 0x82780248;
	sub_8277BEB8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82780274
	if (!ctx.cr6.eq) goto loc_82780274;
	// lwz r11,17176(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 17176);
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r5,406
	ctx.r5.s64 = 406;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82780274;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82780274:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82786170
	ctx.lr = 0x82780280;
	sub_82786170(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82780298
	if (ctx.cr0.eq) goto loc_82780298;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,17180(r22)
	PPC_STORE_U32(ctx.r22.u32 + 17180, ctx.r11.u32);
	// b 0x8278029c
	goto loc_8278029C;
loc_82780298:
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_8278029C:
	// clrlwi. r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827804f8
	if (ctx.cr0.eq) goto loc_827804F8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8277beb8
	ctx.lr = 0x827802B0;
	sub_8277BEB8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827802dc
	if (!ctx.cr6.eq) goto loc_827802DC;
	// lwz r11,17176(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 17176);
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r5,335
	ctx.r5.s64 = 335;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827802DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827802DC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82786058
	ctx.lr = 0x827802E8;
	sub_82786058(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x827804cc
	if (ctx.cr6.eq) goto loc_827804CC;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x82780458
	if (ctx.cr6.eq) goto loc_82780458;
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// beq cr6,0x8278042c
	if (ctx.cr6.eq) goto loc_8278042C;
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// beq cr6,0x827803c4
	if (ctx.cr6.eq) goto loc_827803C4;
	// cmpwi cr6,r3,8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8, ctx.xer);
	// beq cr6,0x82780398
	if (ctx.cr6.eq) goto loc_82780398;
	// cmpwi cr6,r3,9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 9, ctx.xer);
	// beq cr6,0x82780374
	if (ctx.cr6.eq) goto loc_82780374;
	// cmpwi cr6,r3,14
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 14, ctx.xer);
	// bne cr6,0x827804f8
	if (!ctx.cr6.eq) goto loc_827804F8;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8249d188
	ctx.lr = 0x8278032C;
	sub_8249D188(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8277cee0
	ctx.lr = 0x82780340;
	sub_8277CEE0(ctx, base);
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// stw r17,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r17.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82780358
	if (ctx.cr6.lt) goto loc_82780358;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x8278035c
	goto loc_8278035C;
loc_82780358:
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_8278035C:
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8249d108
	ctx.lr = 0x82780370;
	sub_8249D108(ctx, base);
	// b 0x827804fc
	goto loc_827804FC;
loc_82780374:
	// stfs f31,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r24.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8277c510
	ctx.lr = 0x82780390;
	sub_8277C510(ctx, base);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// b 0x827804c4
	goto loc_827804C4;
loc_82780398:
	// stw r28,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r28.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r24.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8277c848
	ctx.lr = 0x827803B4;
	sub_8277C848(ctx, base);
	// lwa r11,0(r3)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r3.u32 + 0));
	// std r11,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r11.u64);
	// lfd f0,184(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// b 0x827804bc
	goto loc_827804BC;
loc_827803C4:
	// sth r28,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r28.u16);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827803f0
	if (!ctx.cr6.eq) goto loc_827803F0;
	// lwz r11,17176(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 17176);
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r5,780
	ctx.r5.s64 = 780;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827803F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827803F0:
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82787d40
	ctx.lr = 0x82780408;
	sub_82787D40(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82780418
	if (!ctx.cr0.eq) goto loc_82780418;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
loc_82780418:
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r11.u64);
	// lfd f0,160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// b 0x827804b8
	goto loc_827804B8;
loc_8278042C:
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r24.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8277c318
	ctx.lr = 0x82780448;
	sub_8277C318(ctx, base);
	// lwa r11,0(r3)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r3.u32 + 0));
	// std r11,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r11.u64);
	// lfd f0,168(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// b 0x827804bc
	goto loc_827804BC;
loc_82780458:
	// sth r28,102(r1)
	PPC_STORE_U16(ctx.r1.u32 + 102, ctx.r28.u16);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82780484
	if (!ctx.cr6.eq) goto loc_82780484;
	// lwz r11,17176(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 17176);
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r5,584
	ctx.r5.s64 = 584;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82780484;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82780484:
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,102
	ctx.r5.s64 = ctx.r1.s64 + 102;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82786df8
	ctx.lr = 0x8278049C;
	sub_82786DF8(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x827804ac
	if (!ctx.cr0.eq) goto loc_827804AC;
	// addi r3,r1,102
	ctx.r3.s64 = ctx.r1.s64 + 102;
loc_827804AC:
	// lha r11,0(r3)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r3.u32 + 0));
	// std r11,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r11.u64);
	// lfd f0,176(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
loc_827804B8:
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r24.u32);
loc_827804BC:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
loc_827804C4:
	// stfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// b 0x827804fc
	goto loc_827804FC;
loc_827804CC:
	// stb r28,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r28.u8);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r1,81
	ctx.r5.s64 = ctx.r1.s64 + 81;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8277c090
	ctx.lr = 0x827804EC;
	sub_8277C090(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
loc_827804F0:
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// b 0x827804fc
	goto loc_827804FC;
loc_827804F8:
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
loc_827804FC:
	// extsw r11,r16
	ctx.r11.s64 = ctx.r16.s32;
	// stw r24,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r24.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// std r11,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r11.u64);
	// lfd f0,192(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8279c958
	ctx.lr = 0x82780528;
	sub_8279C958(ctx, base);
	// addi r16,r16,1
	ctx.r16.s64 = ctx.r16.s64 + 1;
	// lwz r31,32(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82780224
	if (!ctx.cr6.eq) goto loc_82780224;
loc_82780538:
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8279f5e8
	ctx.lr = 0x8278054C;
	sub_8279F5E8(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r5,r16,-1
	ctx.r5.s64 = ctx.r16.s64 + -1;
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x827c8e18
	ctx.lr = 0x82780560;
	sub_827C8E18(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8279f648
	ctx.lr = 0x82780568;
	sub_8279F648(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827b4578
	ctx.lr = 0x82780570;
	sub_827B4578(ctx, base);
loc_82780570:
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82a4ea20
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82780580"))) PPC_WEAK_FUNC(sub_82780580);
PPC_FUNC_IMPL(__imp__sub_82780580) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82780588;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// li r28,-1
	ctx.r28.s64 = -1;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r29,r11,26468
	ctx.r29.s64 = ctx.r11.s64 + 26468;
	// bne cr6,0x827805d4
	if (!ctx.cr6.eq) goto loc_827805D4;
	// bl 0x827816b0
	ctx.lr = 0x827805B8;
	sub_827816B0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827805CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// b 0x8278062c
	goto loc_8278062C;
loc_827805D4:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8279f458
	ctx.lr = 0x827805E0;
	sub_8279F458(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x82780608
	if (!ctx.cr6.eq) goto loc_82780608;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8279f7c8
	ctx.lr = 0x827805FC;
	sub_8279F7C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82780624
	if (!ctx.cr0.eq) goto loc_82780624;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_82780608:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8278062c
	if (ctx.cr6.eq) goto loc_8278062C;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8278062c
	if (ctx.cr6.eq) goto loc_8278062C;
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82794c30
	ctx.lr = 0x82780624;
	sub_82794C30(ctx, base);
loc_82780624:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_8278062C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// beq cr6,0x827806a0
	if (ctx.cr6.eq) goto loc_827806A0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8279f458
	ctx.lr = 0x82780648;
	sub_8279F458(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x82780674
	if (!ctx.cr6.eq) goto loc_82780674;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8279f7c8
	ctx.lr = 0x82780664;
	sub_8279F7C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82780674
	if (ctx.cr0.eq) goto loc_82780674;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82780674:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x827806a0
	if (!ctx.cr6.eq) goto loc_827806A0;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827806a0
	if (ctx.cr6.eq) goto loc_827806A0;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x827806a0
	if (ctx.cr6.eq) goto loc_827806A0;
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82794c30
	ctx.lr = 0x827806A0;
	sub_82794C30(ctx, base);
loc_827806A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827816b0
	ctx.lr = 0x827806A8;
	sub_827816B0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// addi r29,r1,84
	ctx.r29.s64 = ctx.r1.s64 + 84;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827806C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// bl 0x827820c8
	ctx.lr = 0x827806DC;
	sub_827820C8(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82794b98
	ctx.lr = 0x827806EC;
	sub_82794B98(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r3,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 3;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82780710"))) PPC_WEAK_FUNC(sub_82780710);
PPC_FUNC_IMPL(__imp__sub_82780710) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82780718;
	__savegprlr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82780760
	if (!ctx.cr6.eq) goto loc_82780760;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// addi r6,r10,26756
	ctx.r6.s64 = ctx.r10.s64 + 26756;
	// lwz r11,17176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17176);
	// addi r4,r9,26576
	ctx.r4.s64 = ctx.r9.s64 + 26576;
	// addi r3,r8,26692
	ctx.r3.s64 = ctx.r8.s64 + 26692;
	// li r5,837
	ctx.r5.s64 = 837;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82780760;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82780760:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82780774
	if (!ctx.cr6.eq) goto loc_82780774;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82794c30
	ctx.lr = 0x82780774;
	sub_82794C30(ctx, base);
loc_82780774:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8279f838
	ctx.lr = 0x82780784;
	sub_8279F838(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r11,7404
	ctx.r29.s64 = ctx.r11.s64 + 7404;
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// addi r27,r31,12
	ctx.r27.s64 = ctx.r31.s64 + 12;
	// bl 0x827816b0
	ctx.lr = 0x8278079C;
	sub_827816B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// bl 0x827954d8
	ctx.lr = 0x827807B8;
	sub_827954D8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8279f908
	ctx.lr = 0x827807C0;
	sub_8279F908(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827807C8"))) PPC_WEAK_FUNC(sub_827807C8);
PPC_FUNC_IMPL(__imp__sub_827807C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x827807D0;
	__savegprlr_26(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8278081c
	if (!ctx.cr6.eq) goto loc_8278081C;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// addi r6,r10,26756
	ctx.r6.s64 = ctx.r10.s64 + 26756;
	// lwz r11,17176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17176);
	// addi r4,r9,26576
	ctx.r4.s64 = ctx.r9.s64 + 26576;
	// addi r3,r8,26692
	ctx.r3.s64 = ctx.r8.s64 + 26692;
	// li r5,856
	ctx.r5.s64 = 856;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8278081C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8278081C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82780830
	if (!ctx.cr6.eq) goto loc_82780830;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82794c30
	ctx.lr = 0x82780830;
	sub_82794C30(ctx, base);
loc_82780830:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8279f838
	ctx.lr = 0x82780840;
	sub_8279F838(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r28,r1,96
	ctx.r28.s64 = ctx.r1.s64 + 96;
	// addi r27,r31,12
	ctx.r27.s64 = ctx.r31.s64 + 12;
	// addi r26,r1,80
	ctx.r26.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x827816b0
	ctx.lr = 0x8278085C;
	sub_827816B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// bl 0x827954d8
	ctx.lr = 0x82780878;
	sub_827954D8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8279f908
	ctx.lr = 0x82780880;
	sub_8279F908(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82780888"))) PPC_WEAK_FUNC(sub_82780888);
PPC_FUNC_IMPL(__imp__sub_82780888) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82780890;
	__savegprlr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827808d8
	if (!ctx.cr6.eq) goto loc_827808D8;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// addi r6,r10,26800
	ctx.r6.s64 = ctx.r10.s64 + 26800;
	// lwz r11,17176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17176);
	// addi r4,r9,26576
	ctx.r4.s64 = ctx.r9.s64 + 26576;
	// addi r3,r8,26692
	ctx.r3.s64 = ctx.r8.s64 + 26692;
	// li r5,873
	ctx.r5.s64 = 873;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827808D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827808D8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x827808ec
	if (!ctx.cr6.eq) goto loc_827808EC;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82794c30
	ctx.lr = 0x827808EC;
	sub_82794C30(ctx, base);
loc_827808EC:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8279f838
	ctx.lr = 0x827808FC;
	sub_8279F838(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r11,7404
	ctx.r29.s64 = ctx.r11.s64 + 7404;
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// addi r27,r31,12
	ctx.r27.s64 = ctx.r31.s64 + 12;
	// bl 0x827816b0
	ctx.lr = 0x82780914;
	sub_827816B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// bl 0x827957a8
	ctx.lr = 0x82780930;
	sub_827957A8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8279f908
	ctx.lr = 0x82780938;
	sub_8279F908(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82780940"))) PPC_WEAK_FUNC(sub_82780940);
PPC_FUNC_IMPL(__imp__sub_82780940) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82780948;
	__savegprlr_26(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82780994
	if (!ctx.cr6.eq) goto loc_82780994;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// addi r6,r10,26800
	ctx.r6.s64 = ctx.r10.s64 + 26800;
	// lwz r11,17176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17176);
	// addi r4,r9,26576
	ctx.r4.s64 = ctx.r9.s64 + 26576;
	// addi r3,r8,26692
	ctx.r3.s64 = ctx.r8.s64 + 26692;
	// li r5,891
	ctx.r5.s64 = 891;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82780994;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82780994:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x827809a8
	if (!ctx.cr6.eq) goto loc_827809A8;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82794c30
	ctx.lr = 0x827809A8;
	sub_82794C30(ctx, base);
loc_827809A8:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8279f838
	ctx.lr = 0x827809B8;
	sub_8279F838(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r28,r1,96
	ctx.r28.s64 = ctx.r1.s64 + 96;
	// addi r27,r31,12
	ctx.r27.s64 = ctx.r31.s64 + 12;
	// addi r26,r1,80
	ctx.r26.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x827816b0
	ctx.lr = 0x827809D4;
	sub_827816B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// bl 0x827957a8
	ctx.lr = 0x827809F0;
	sub_827957A8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8279f908
	ctx.lr = 0x827809F8;
	sub_8279F908(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82780A00"))) PPC_WEAK_FUNC(sub_82780A00);
PPC_FUNC_IMPL(__imp__sub_82780A00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82780A08;
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
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82780a54
	if (!ctx.cr6.eq) goto loc_82780A54;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// addi r6,r10,26848
	ctx.r6.s64 = ctx.r10.s64 + 26848;
	// lwz r11,17176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17176);
	// addi r4,r9,26576
	ctx.r4.s64 = ctx.r9.s64 + 26576;
	// addi r3,r8,26692
	ctx.r3.s64 = ctx.r8.s64 + 26692;
	// li r5,908
	ctx.r5.s64 = 908;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82780A54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82780A54:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82780a68
	if (!ctx.cr6.eq) goto loc_82780A68;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82794c30
	ctx.lr = 0x82780A68;
	sub_82794C30(ctx, base);
loc_82780A68:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8249d188
	ctx.lr = 0x82780A74;
	sub_8249D188(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r29,r30,12
	ctx.r29.s64 = ctx.r30.s64 + 12;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x82781648
	ctx.lr = 0x82780A90;
	sub_82781648(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8277db50
	ctx.lr = 0x82780A98;
	sub_8277DB50(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// bl 0x8279f838
	ctx.lr = 0x82780AB4;
	sub_8279F838(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x82795d58
	ctx.lr = 0x82780AD0;
	sub_82795D58(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8279f908
	ctx.lr = 0x82780AD8;
	sub_8279F908(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8249d108
	ctx.lr = 0x82780AE8;
	sub_8249D108(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82780AF0"))) PPC_WEAK_FUNC(sub_82780AF0);
PPC_FUNC_IMPL(__imp__sub_82780AF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82780AF8;
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
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82780b44
	if (!ctx.cr6.eq) goto loc_82780B44;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// addi r6,r10,26892
	ctx.r6.s64 = ctx.r10.s64 + 26892;
	// lwz r11,17176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17176);
	// addi r4,r9,26576
	ctx.r4.s64 = ctx.r9.s64 + 26576;
	// addi r3,r8,26692
	ctx.r3.s64 = ctx.r8.s64 + 26692;
	// li r5,924
	ctx.r5.s64 = 924;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82780B44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82780B44:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82780b58
	if (!ctx.cr6.eq) goto loc_82780B58;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82794c30
	ctx.lr = 0x82780B58;
	sub_82794C30(ctx, base);
loc_82780B58:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8249d188
	ctx.lr = 0x82780B64;
	sub_8249D188(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r29,r30,12
	ctx.r29.s64 = ctx.r30.s64 + 12;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x82781648
	ctx.lr = 0x82780B80;
	sub_82781648(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8277db50
	ctx.lr = 0x82780B88;
	sub_8277DB50(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// bl 0x8279f838
	ctx.lr = 0x82780BA4;
	sub_8279F838(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x82796230
	ctx.lr = 0x82780BC0;
	sub_82796230(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8279f908
	ctx.lr = 0x82780BC8;
	sub_8279F908(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8249d108
	ctx.lr = 0x82780BD8;
	sub_8249D108(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82780BE0"))) PPC_WEAK_FUNC(sub_82780BE0);
PPC_FUNC_IMPL(__imp__sub_82780BE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9e8
	ctx.lr = 0x82780BE8;
	__savegprlr_20(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// li r21,0
	ctx.r21.s64 = 0;
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// mr r23,r21
	ctx.r23.u64 = ctx.r21.u64;
	// lwz r3,4(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// bl 0x8279f458
	ctx.lr = 0x82780C04;
	sub_8279F458(ctx, base);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// li r20,1
	ctx.r20.s64 = 1;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x827812d4
	if (!ctx.cr6.eq) goto loc_827812D4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x8277b880
	ctx.lr = 0x82780C20;
	sub_8277B880(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r31,r22,12
	ctx.r31.s64 = ctx.r22.s64 + 12;
	// lwz r25,0(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82781648
	ctx.lr = 0x82780C34;
	sub_82781648(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8277db50
	ctx.lr = 0x82780C3C;
	sub_8277DB50(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8277beb8
	ctx.lr = 0x82780C48;
	sub_8277BEB8(ctx, base);
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r24,-31963
	ctx.r24.s64 = -2094727168;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r27,r11,24760
	ctx.r27.s64 = ctx.r11.s64 + 24760;
	// addi r26,r10,24608
	ctx.r26.s64 = ctx.r10.s64 + 24608;
	// addi r28,r9,24776
	ctx.r28.s64 = ctx.r9.s64 + 24776;
	// bne cr6,0x82780c90
	if (!ctx.cr6.eq) goto loc_82780C90;
	// lwz r11,17176(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 17176);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r5,335
	ctx.r5.s64 = 335;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82780C90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82780C90:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82786058
	ctx.lr = 0x82780C9C;
	sub_82786058(ctx, base);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r29,r11,17180
	ctx.r29.s64 = ctx.r11.s64 + 17180;
	// bne cr6,0x82780de0
	if (!ctx.cr6.eq) goto loc_82780DE0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ld r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// bne cr6,0x82780ccc
	if (!ctx.cr6.eq) goto loc_82780CCC;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_82780CCC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82780de0
	if (ctx.cr0.eq) goto loc_82780DE0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// ld r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// rlwinm r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// bne cr6,0x82780cf8
	if (!ctx.cr6.eq) goto loc_82780CF8;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_82780CF8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82780d08
	if (ctx.cr0.eq) goto loc_82780D08;
	// li r4,21
	ctx.r4.s64 = 21;
	// b 0x82780d5c
	goto loc_82780D5C;
loc_82780D08:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ld r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// bne cr6,0x82780d24
	if (!ctx.cr6.eq) goto loc_82780D24;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_82780D24:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82780d34
	if (ctx.cr0.eq) goto loc_82780D34;
	// li r4,7
	ctx.r4.s64 = 7;
	// b 0x82780d5c
	goto loc_82780D5C;
loc_82780D34:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ld r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// rlwinm r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// bne cr6,0x82780d50
	if (!ctx.cr6.eq) goto loc_82780D50;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_82780D50:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82780de0
	if (ctx.cr0.eq) goto loc_82780DE0;
	// li r4,20
	ctx.r4.s64 = 20;
loc_82780D5C:
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8277ca38
	ctx.lr = 0x82780D70;
	sub_8277CA38(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82780de0
	if (ctx.cr6.eq) goto loc_82780DE0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x827816b0
	ctx.lr = 0x82780D84;
	sub_827816B0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82780D98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8277beb8
	ctx.lr = 0x82780DA4;
	sub_8277BEB8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82780dd0
	if (!ctx.cr6.eq) goto loc_82780DD0;
	// lwz r11,17176(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 17176);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r5,335
	ctx.r5.s64 = 335;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82780DD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82780DD0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82786058
	ctx.lr = 0x82780DDC;
	sub_82786058(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82780DE0:
	// cmpwi cr6,r30,7
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 7, ctx.xer);
	// bgt cr6,0x827810f0
	if (ctx.cr6.gt) goto loc_827810F0;
	// beq cr6,0x82781080
	if (ctx.cr6.eq) goto loc_82781080;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// beq cr6,0x82781028
	if (ctx.cr6.eq) goto loc_82781028;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// beq cr6,0x82780fb4
	if (ctx.cr6.eq) goto loc_82780FB4;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// beq cr6,0x82780f0c
	if (ctx.cr6.eq) goto loc_82780F0C;
	// cmpwi cr6,r30,5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 5, ctx.xer);
	// beq cr6,0x82780ed8
	if (ctx.cr6.eq) goto loc_82780ED8;
	// cmpwi cr6,r30,6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 6, ctx.xer);
	// bne cr6,0x827812d4
	if (!ctx.cr6.eq) goto loc_827812D4;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82780e40
	if (!ctx.cr6.eq) goto loc_82780E40;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lwz r10,17176(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 17176);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r6,r11,24908
	ctx.r6.s64 = ctx.r11.s64 + 24908;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r5,760
	ctx.r5.s64 = 760;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82780E40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82780E40:
	// addi r5,r1,106
	ctx.r5.s64 = ctx.r1.s64 + 106;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82787bf0
	ctx.lr = 0x82780E50;
	sub_82787BF0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82780e68
	if (ctx.cr0.eq) goto loc_82780E68;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r23,r20
	ctx.r23.u64 = ctx.r20.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x82780e6c
	goto loc_82780E6C;
loc_82780E68:
	// mr r23,r21
	ctx.r23.u64 = ctx.r21.u64;
loc_82780E6C:
	// clrlwi. r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827812d4
	if (ctx.cr0.eq) goto loc_827812D4;
	// lbz r10,106(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 106);
	// li r9,3
	ctx.r9.s64 = 3;
	// lwz r11,4(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r20,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r20.u32);
	// stb r21,124(r1)
	PPC_STORE_U8(ctx.r1.u32 + 124, ctx.r21.u8);
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// b 0x827812d0
	goto loc_827812D0;
loc_82780ED8:
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8277c458
	ctx.lr = 0x82780EF0;
	sub_8277C458(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// clrlwi. r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827812d4
	if (ctx.cr0.eq) goto loc_827812D4;
	// lwa r9,96(r1)
	ctx.r9.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 96));
	// std r9,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r9.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// b 0x8278127c
	goto loc_8278127C;
loc_82780F0C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82780f38
	if (!ctx.cr6.eq) goto loc_82780F38;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lwz r10,17176(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 17176);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r6,r11,24908
	ctx.r6.s64 = ctx.r11.s64 + 24908;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r5,613
	ctx.r5.s64 = 613;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82780F38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82780F38:
	// addi r5,r1,110
	ctx.r5.s64 = ctx.r1.s64 + 110;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82787078
	ctx.lr = 0x82780F48;
	sub_82787078(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82780f60
	if (ctx.cr0.eq) goto loc_82780F60;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r23,r20
	ctx.r23.u64 = ctx.r20.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x82780f64
	goto loc_82780F64;
loc_82780F60:
	// mr r23,r21
	ctx.r23.u64 = ctx.r21.u64;
loc_82780F64:
	// clrlwi. r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827812d4
	if (ctx.cr0.eq) goto loc_827812D4;
	// lha r10,110(r1)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r1.u32 + 110));
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
loc_82780F78:
	// lwz r11,4(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
	// li r9,3
	ctx.r9.s64 = 3;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
loc_82780FA4:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r20,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// b 0x827812b4
	goto loc_827812B4;
loc_82780FB4:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82780fe0
	if (!ctx.cr6.eq) goto loc_82780FE0;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lwz r10,17176(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 17176);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r6,r11,24908
	ctx.r6.s64 = ctx.r11.s64 + 24908;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r5,564
	ctx.r5.s64 = 564;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82780FE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82780FE0:
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82786ca8
	ctx.lr = 0x82780FF0;
	sub_82786CA8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82781008
	if (ctx.cr0.eq) goto loc_82781008;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r23,r20
	ctx.r23.u64 = ctx.r20.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x8278100c
	goto loc_8278100C;
loc_82781008:
	// mr r23,r21
	ctx.r23.u64 = ctx.r21.u64;
loc_8278100C:
	// clrlwi. r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827812d4
	if (ctx.cr0.eq) goto loc_827812D4;
	// lbz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 104);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// b 0x82780f78
	goto loc_82780F78;
loc_82781028:
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r1,105
	ctx.r5.s64 = ctx.r1.s64 + 105;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8277c1d0
	ctx.lr = 0x82781040;
	sub_8277C1D0(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// clrlwi. r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827812d4
	if (ctx.cr0.eq) goto loc_827812D4;
	// lwz r11,4(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// lbz r10,105(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 105);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// stw r20,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r20.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// b 0x82780fa4
	goto loc_82780FA4;
loc_82781080:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827810ac
	if (!ctx.cr6.eq) goto loc_827810AC;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lwz r10,17176(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 17176);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r6,r11,24908
	ctx.r6.s64 = ctx.r11.s64 + 24908;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r5,809
	ctx.r5.s64 = 809;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827810AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827810AC:
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82787fc0
	ctx.lr = 0x827810BC;
	sub_82787FC0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827810d4
	if (ctx.cr0.eq) goto loc_827810D4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r23,r20
	ctx.r23.u64 = ctx.r20.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x827810d8
	goto loc_827810D8;
loc_827810D4:
	// mr r23,r21
	ctx.r23.u64 = ctx.r21.u64;
loc_827810D8:
	// clrlwi. r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827812d4
	if (ctx.cr0.eq) goto loc_827812D4;
	// lhz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 108);
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// b 0x82780f78
	goto loc_82780F78;
loc_827810F0:
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 8, ctx.xer);
	// beq cr6,0x82781210
	if (ctx.cr6.eq) goto loc_82781210;
	// cmpwi cr6,r30,9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 9, ctx.xer);
	// beq cr6,0x827811e4
	if (ctx.cr6.eq) goto loc_827811E4;
	// cmpwi cr6,r30,14
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 14, ctx.xer);
	// beq cr6,0x8278114c
	if (ctx.cr6.eq) goto loc_8278114C;
	// cmpwi cr6,r30,128
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 128, ctx.xer);
	// ble cr6,0x827812d4
	if (!ctx.cr6.gt) goto loc_827812D4;
	// cmpwi cr6,r30,136
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 136, ctx.xer);
	// ble cr6,0x82781120
	if (!ctx.cr6.gt) goto loc_82781120;
	// cmpwi cr6,r30,138
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 138, ctx.xer);
	// bne cr6,0x827812d4
	if (!ctx.cr6.eq) goto loc_827812D4;
loc_82781120:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lwz r10,17176(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 17176);
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// addi r6,r11,26940
	ctx.r6.s64 = ctx.r11.s64 + 26940;
	// addi r4,r9,26576
	ctx.r4.s64 = ctx.r9.s64 + 26576;
	// addi r3,r8,24408
	ctx.r3.s64 = ctx.r8.s64 + 24408;
	// li r5,1066
	ctx.r5.s64 = 1066;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82781148;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x827812d4
	goto loc_827812D4;
loc_8278114C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8249d108
	ctx.lr = 0x8278115C;
	sub_8249D108(ctx, base);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8277d030
	ctx.lr = 0x82781174;
	sub_8277D030(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// clrlwi. r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827811d0
	if (ctx.cr0.eq) goto loc_827811D0;
	// lwz r31,4(r22)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// li r11,4
	ctx.r11.s64 = 4;
	// lwz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r4,164(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// stb r21,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r21.u8);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// bge cr6,0x827811a8
	if (!ctx.cr6.lt) goto loc_827811A8;
	// addi r4,r1,164
	ctx.r4.s64 = ctx.r1.s64 + 164;
loc_827811A8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82801d78
	ctx.lr = 0x827811B0;
	sub_82801D78(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x8279f648
	ctx.lr = 0x827811D0;
	sub_8279F648(ctx, base);
loc_827811D0:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8249d108
	ctx.lr = 0x827811E0;
	sub_8249D108(ctx, base);
	// b 0x827812d4
	goto loc_827812D4;
loc_827811E4:
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8277c650
	ctx.lr = 0x827811FC;
	sub_8277C650(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// clrlwi. r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827812d4
	if (ctx.cr0.eq) goto loc_827812D4;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82781284
	goto loc_82781284;
loc_82781210:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8278123c
	if (!ctx.cr6.eq) goto loc_8278123C;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lwz r10,17176(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 17176);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r6,r11,24908
	ctx.r6.s64 = ctx.r11.s64 + 24908;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r5,858
	ctx.r5.s64 = 858;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8278123C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8278123C:
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82788390
	ctx.lr = 0x8278124C;
	sub_82788390(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82781264
	if (ctx.cr0.eq) goto loc_82781264;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r23,r20
	ctx.r23.u64 = ctx.r20.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x82781268
	goto loc_82781268;
loc_82781264:
	// mr r23,r21
	ctx.r23.u64 = ctx.r21.u64;
loc_82781268:
	// clrlwi. r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827812d4
	if (ctx.cr0.eq) goto loc_827812D4;
	// lwz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
loc_8278127C:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
loc_82781284:
	// lwz r10,4(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stfs f0,4(r8)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_827812B4:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stb r21,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r21.u8);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
loc_827812D0:
	// bl 0x8279f648
	ctx.lr = 0x827812D4;
	sub_8279F648(ctx, base);
loc_827812D4:
	// clrlwi. r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x827813a8
	if (!ctx.cr0.eq) goto loc_827813A8;
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x827813a8
	if (!ctx.cr6.eq) goto loc_827813A8;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x8249d188
	ctx.lr = 0x827812F4;
	sub_8249D188(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x827816b0
	ctx.lr = 0x827812FC;
	sub_827816B0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r22,12
	ctx.r4.s64 = ctx.r22.s64 + 12;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82781310;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8277be40
	ctx.lr = 0x8278131C;
	sub_8277BE40(ctx, base);
	// lwz r31,100(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82781398
	if (ctx.cr6.eq) goto loc_82781398;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r30,r11,15834
	ctx.r30.s64 = ctx.r11.s64 + 15834;
loc_82781330:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8249d188
	ctx.lr = 0x8278133C;
	sub_8249D188(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8277cee0
	ctx.lr = 0x82781350;
	sub_8277CEE0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8249d108
	ctx.lr = 0x82781364;
	sub_8249D108(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827831d0
	ctx.lr = 0x82781370;
	sub_827831D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82781388
	if (ctx.cr0.eq) goto loc_82781388;
	// lwz r31,32(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82781330
	if (!ctx.cr6.eq) goto loc_82781330;
	// b 0x82781398
	goto loc_82781398;
loc_82781388:
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// lwz r3,8(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// bl 0x82794b98
	ctx.lr = 0x82781394;
	sub_82794B98(ctx, base);
	// mr r23,r20
	ctx.r23.u64 = ctx.r20.u64;
loc_82781398:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8249d108
	ctx.lr = 0x827813A8;
	sub_8249D108(ctx, base);
loc_827813A8:
	// clrlwi. r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x827813cc
	if (!ctx.cr0.eq) goto loc_827813CC;
	// lwz r11,4(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r21,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r21.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
loc_827813CC:
	// lwz r11,4(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r3,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 3;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x82a4ea38
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827813F0"))) PPC_WEAK_FUNC(sub_827813F0);
PPC_FUNC_IMPL(__imp__sub_827813F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x827813F8;
	__savegprlr_26(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8279f458
	ctx.lr = 0x82781418;
	sub_8279F458(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8278163c
	if (!ctx.cr6.eq) goto loc_8278163C;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x8277b880
	ctx.lr = 0x82781430;
	sub_8277B880(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8279f458
	ctx.lr = 0x82781448;
	sub_8279F458(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82781930
	ctx.lr = 0x82781458;
	sub_82781930(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82781580
	if (ctx.cr6.lt) goto loc_82781580;
	// beq cr6,0x82781540
	if (ctx.cr6.eq) goto loc_82781540;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x827814dc
	if (ctx.cr6.eq) goto loc_827814DC;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x82781494
	if (ctx.cr6.eq) goto loc_82781494;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bne cr6,0x8278163c
	if (!ctx.cr6.eq) goto loc_8278163C;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82781740
	ctx.lr = 0x82781490;
	sub_82781740(ctx, base);
	// b 0x8278163c
	goto loc_8278163C;
loc_82781494:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// bl 0x82781648
	ctx.lr = 0x827814A0;
	sub_82781648(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8277db50
	ctx.lr = 0x827814A8;
	sub_8277DB50(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x8249d188
	ctx.lr = 0x827814B8;
	sub_8249D188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8277cf90
	ctx.lr = 0x827814C8;
	sub_8277CF90(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8249d108
	ctx.lr = 0x827814D8;
	sub_8249D108(ctx, base);
	// b 0x82781578
	goto loc_82781578;
loc_827814DC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// beq 0x82781520
	if (ctx.cr0.eq) goto loc_82781520;
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// addi r30,r1,88
	ctx.r30.s64 = ctx.r1.s64 + 88;
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82781648
	ctx.lr = 0x82781508;
	sub_82781648(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8277db50
	ctx.lr = 0x82781510;
	sub_8277DB50(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8277c3c8
	ctx.lr = 0x8278151C;
	sub_8277C3C8(ctx, base);
	// b 0x82781578
	goto loc_82781578;
loc_82781520:
	// addi r30,r1,104
	ctx.r30.s64 = ctx.r1.s64 + 104;
	// bl 0x82781648
	ctx.lr = 0x82781528;
	sub_82781648(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8277db50
	ctx.lr = 0x82781530;
	sub_8277DB50(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8277c5c0
	ctx.lr = 0x8278153C;
	sub_8277C5C0(ctx, base);
	// b 0x82781578
	goto loc_82781578;
loc_82781540:
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x82781648
	ctx.lr = 0x82781564;
	sub_82781648(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8277db50
	ctx.lr = 0x8278156C;
	sub_8277DB50(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8277c140
	ctx.lr = 0x82781578;
	sub_8277C140(ctx, base);
loc_82781578:
	// li r26,1
	ctx.r26.s64 = 1;
	// b 0x8278163c
	goto loc_8278163C;
loc_82781580:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r27,r31,12
	ctx.r27.s64 = ctx.r31.s64 + 12;
	// bl 0x82781648
	ctx.lr = 0x8278158C;
	sub_82781648(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8277db50
	ctx.lr = 0x82781594;
	sub_8277DB50(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8277beb8
	ctx.lr = 0x827815A0;
	sub_8277BEB8(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827815dc
	if (!ctx.cr6.eq) goto loc_827815DC;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// addi r6,r10,24804
	ctx.r6.s64 = ctx.r10.s64 + 24804;
	// lwz r11,17176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17176);
	// addi r4,r9,24608
	ctx.r4.s64 = ctx.r9.s64 + 24608;
	// addi r3,r8,24760
	ctx.r3.s64 = ctx.r8.s64 + 24760;
	// li r5,406
	ctx.r5.s64 = 406;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827815DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827815DC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x82786170
	ctx.lr = 0x827815E8;
	sub_82786170(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82781604
	if (ctx.cr0.eq) goto loc_82781604;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lis r9,-31963
	ctx.r9.s64 = -2094727168;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,17180(r9)
	PPC_STORE_U32(ctx.r9.u32 + 17180, ctx.r10.u32);
	// b 0x82781608
	goto loc_82781608;
loc_82781604:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82781608:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8278163c
	if (ctx.cr0.eq) goto loc_8278163C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82781648
	ctx.lr = 0x82781618;
	sub_82781648(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8277db50
	ctx.lr = 0x82781620;
	sub_8277DB50(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// bl 0x8277beb8
	ctx.lr = 0x8278162C;
	sub_8277BEB8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8277bfc0
	ctx.lr = 0x8278163C;
	sub_8277BFC0(ctx, base);
loc_8278163C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82781648"))) PPC_WEAK_FUNC(sub_82781648);
PPC_FUNC_IMPL(__imp__sub_82781648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82781694
	if (!ctx.cr6.eq) goto loc_82781694;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// addi r6,r10,26984
	ctx.r6.s64 = ctx.r10.s64 + 26984;
	// lwz r11,17176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17176);
	// addi r4,r9,26576
	ctx.r4.s64 = ctx.r9.s64 + 26576;
	// addi r3,r8,26692
	ctx.r3.s64 = ctx.r8.s64 + 26692;
	// li r5,1204
	ctx.r5.s64 = 1204;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82781694;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82781694:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827816B0"))) PPC_WEAK_FUNC(sub_827816B0);
PPC_FUNC_IMPL(__imp__sub_827816B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x827816B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r28,-31963
	ctx.r28.s64 = -2094727168;
	// addi r30,r10,26576
	ctx.r30.s64 = ctx.r10.s64 + 26576;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r29,r11,27020
	ctx.r29.s64 = ctx.r11.s64 + 27020;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82781700
	if (!ctx.cr6.eq) goto loc_82781700;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lwz r10,17176(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 17176);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,26692
	ctx.r3.s64 = ctx.r11.s64 + 26692;
	// li r5,1215
	ctx.r5.s64 = 1215;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82781700;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82781700:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82781730
	if (!ctx.cr6.eq) goto loc_82781730;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lwz r10,17176(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 17176);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,27064
	ctx.r3.s64 = ctx.r11.s64 + 27064;
	// li r5,1218
	ctx.r5.s64 = 1218;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82781730;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82781730:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82781740"))) PPC_WEAK_FUNC(sub_82781740);
PPC_FUNC_IMPL(__imp__sub_82781740) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x82781748;
	__savegprlr_25(ctx, base);
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r31,r11,26576
	ctx.r31.s64 = ctx.r11.s64 + 26576;
	// addi r29,r10,27088
	ctx.r29.s64 = ctx.r10.s64 + 27088;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82781798
	if (!ctx.cr6.eq) goto loc_82781798;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r10,26692
	ctx.r3.s64 = ctx.r10.s64 + 26692;
	// lwz r11,17176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17176);
	// li r5,1249
	ctx.r5.s64 = 1249;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82781798;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82781798:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82781928
	if (!ctx.cr6.eq) goto loc_82781928;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82781874
	if (!ctx.cr6.eq) goto loc_82781874;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,27132
	ctx.r5.s64 = ctx.r11.s64 + 27132;
	// li r8,1254
	ctx.r8.s64 = 1254;
	// li r4,12
	ctx.r4.s64 = 12;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82784ff0
	ctx.lr = 0x827817D0;
	sub_82784FF0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8278186c
	if (ctx.cr0.eq) goto loc_8278186C;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// addi r29,r11,27328
	ctx.r29.s64 = ctx.r11.s64 + 27328;
	// addi r26,r10,26608
	ctx.r26.s64 = ctx.r10.s64 + 26608;
	// addi r25,r9,26712
	ctx.r25.s64 = ctx.r9.s64 + 26712;
	// bl 0x82784f18
	ctx.lr = 0x827817F4;
	sub_82784F18(ctx, base);
	// li r4,124
	ctx.r4.s64 = 124;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r8,124
	ctx.r8.s64 = 124;
	// bl 0x827848f8
	ctx.lr = 0x8278180C;
	sub_827848F8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8278181c
	if (ctx.cr0.eq) goto loc_8278181C;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_8278181C:
	// addic. r10,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r10.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82781828
	if (ctx.cr0.eq) goto loc_82781828;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_82781828:
	// addic. r10,r3,8
	ctx.xer.ca = ctx.r3.u32 > 4294967287;
	ctx.r10.s64 = ctx.r3.s64 + 8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82781834
	if (ctx.cr0.eq) goto loc_82781834;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_82781834:
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,121(r3)
	PPC_STORE_U8(ctx.r3.u32 + 121, ctx.r11.u8);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// stb r10,120(r3)
	PPC_STORE_U8(ctx.r3.u32 + 120, ctx.r10.u8);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// stb r10,121(r3)
	PPC_STORE_U8(ctx.r3.u32 + 121, ctx.r10.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r10.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82781870
	goto loc_82781870;
loc_8278186C:
	// li r9,0
	ctx.r9.s64 = 0;
loc_82781870:
	// stw r9,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r9.u32);
loc_82781874:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lwz r5,4(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8279f838
	ctx.lr = 0x82781884;
	sub_8279F838(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x8279f8a8
	ctx.lr = 0x82781890;
	sub_8279F8A8(ctx, base);
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8279f8a8
	ctx.lr = 0x827818A4;
	sub_8279F8A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8279f908
	ctx.lr = 0x827818AC;
	sub_8279F908(ctx, base);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x8249d188
	ctx.lr = 0x827818B8;
	sub_8249D188(ctx, base);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// addi r3,r1,300
	ctx.r3.s64 = ctx.r1.s64 + 300;
	// bl 0x8279f8a8
	ctx.lr = 0x827818C4;
	sub_8279F8A8(ctx, base);
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x827824d8
	ctx.lr = 0x827818D4;
	sub_827824D8(ctx, base);
	// addi r3,r1,300
	ctx.r3.s64 = ctx.r1.s64 + 300;
	// bl 0x8279f908
	ctx.lr = 0x827818DC;
	sub_8279F908(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x8249d108
	ctx.lr = 0x827818EC;
	sub_8249D108(ctx, base);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x8279f908
	ctx.lr = 0x827818F4;
	sub_8279F908(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r30,12
	ctx.r31.s64 = ctx.r30.s64 + 12;
	// addi r29,r1,192
	ctx.r29.s64 = ctx.r1.s64 + 192;
	// bl 0x827816b0
	ctx.lr = 0x82781904;
	sub_827816B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// bl 0x827954d8
	ctx.lr = 0x82781920;
	sub_827954D8(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8279f908
	ctx.lr = 0x82781928;
	sub_8279F908(ctx, base);
loc_82781928:
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82781930"))) PPC_WEAK_FUNC(sub_82781930);
PPC_FUNC_IMPL(__imp__sub_82781930) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82781938;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8278197c
	if (!ctx.cr6.eq) goto loc_8278197C;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// addi r6,r10,27148
	ctx.r6.s64 = ctx.r10.s64 + 27148;
	// lwz r11,17176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17176);
	// addi r4,r9,26576
	ctx.r4.s64 = ctx.r9.s64 + 26576;
	// addi r3,r8,26692
	ctx.r3.s64 = ctx.r8.s64 + 26692;
	// li r5,1270
	ctx.r5.s64 = 1270;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8278197C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8278197C:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82781ab4
	if (ctx.cr6.eq) goto loc_82781AB4;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8249d188
	ctx.lr = 0x82781994;
	sub_8249D188(ctx, base);
loc_82781994:
	// lwz r28,16(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r29,4(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r31,4(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// b 0x827819c8
	goto loc_827819C8;
loc_827819A4:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x827831d0
	ctx.lr = 0x827819B0;
	sub_827831D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x827819c0
	if (!ctx.cr0.lt) goto loc_827819C0;
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// b 0x827819c8
	goto loc_827819C8;
loc_827819C0:
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_827819C8:
	// lbz r11,121(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 121);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827819a4
	if (ctx.cr6.eq) goto loc_827819A4;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82781a04
	if (ctx.cr6.eq) goto loc_82781A04;
	// addi r4,r29,12
	ctx.r4.s64 = ctx.r29.s64 + 12;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827831d0
	ctx.lr = 0x827819F4;
	sub_827831D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82781a04
	if (ctx.cr0.lt) goto loc_82781A04;
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// b 0x82781a14
	goto loc_82781A14;
loc_82781A04:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r29,r1,88
	ctx.r29.s64 = ctx.r1.s64 + 88;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
loc_82781A14:
	// ld r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// beq cr6,0x82781a38
	if (ctx.cr6.eq) goto loc_82781A38;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82781a3c
	if (ctx.cr6.eq) goto loc_82781A3C;
loc_82781A38:
	// twi 31,r0,22
loc_82781A3C:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82781aa4
	if (ctx.cr6.eq) goto loc_82781AA4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82781a54
	if (!ctx.cr6.eq) goto loc_82781A54;
	// twi 31,r0,22
loc_82781A54:
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82781a64
	if (!ctx.cr6.eq) goto loc_82781A64;
	// twi 31,r0,22
loc_82781A64:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r30,12
	ctx.r31.s64 = ctx.r30.s64 + 12;
	// addi r28,r11,40
	ctx.r28.s64 = ctx.r11.s64 + 40;
	// bl 0x827816b0
	ctx.lr = 0x82781A74;
	sub_827816B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// bl 0x827957a8
	ctx.lr = 0x82781A90;
	sub_827957A8(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// ld r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x827825d8
	ctx.lr = 0x82781AA0;
	sub_827825D8(ctx, base);
	// b 0x82781994
	goto loc_82781994;
loc_82781AA4:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8249d108
	ctx.lr = 0x82781AB4;
	sub_8249D108(ctx, base);
loc_82781AB4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82781AC0"))) PPC_WEAK_FUNC(sub_82781AC0);
PPC_FUNC_IMPL(__imp__sub_82781AC0) {
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
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// bne cr6,0x82781b40
	if (!ctx.cr6.eq) goto loc_82781B40;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r9,r4,24
	ctx.r9.u64 = ctx.r4.u32 & 0xFF;
	// li r8,0
	ctx.r8.s64 = 0;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// stb r8,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r8.u8);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r8,8(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stw r10,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r10.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_82781B30:
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// b 0x82781c60
	goto loc_82781C60;
loc_82781B40:
	// cmpwi cr6,r5,9
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 9, ctx.xer);
	// bne cr6,0x82781bac
	if (!ctx.cr6.eq) goto loc_82781BAC;
	// clrlwi. r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82781b5c
	if (ctx.cr0.eq) goto loc_82781B5C;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82781b64
	goto loc_82781B64;
loc_82781B5C:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
loc_82781B64:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,3
	ctx.r11.s64 = 3;
	// stb r9,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r9.u8);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stfs f0,4(r8)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// b 0x82781b30
	goto loc_82781B30;
loc_82781BAC:
	// cmpwi cr6,r5,5
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 5, ctx.xer);
	// bne cr6,0x82781c28
	if (!ctx.cr6.eq) goto loc_82781C28;
	// clrlwi r9,r4,24
	ctx.r9.u64 = ctx.r4.u32 & 0xFF;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r11,3
	ctx.r11.s64 = 3;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stb r8,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r8.u8);
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lwz r9,8(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stfs f0,4(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// b 0x82781c5c
	goto loc_82781C5C;
loc_82781C28:
	// cmpwi cr6,r5,14
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 14, ctx.xer);
	// bne cr6,0x82781c80
	if (!ctx.cr6.eq) goto loc_82781C80;
	// clrlwi. r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82781c44
	if (ctx.cr0.eq) goto loc_82781C44;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r5,r11,26460
	ctx.r5.s64 = ctx.r11.s64 + 26460;
	// b 0x82781c4c
	goto loc_82781C4C;
loc_82781C44:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r5,r11,24408
	ctx.r5.s64 = ctx.r11.s64 + 24408;
loc_82781C4C:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8279f578
	ctx.lr = 0x82781C5C;
	sub_8279F578(ctx, base);
loc_82781C5C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
loc_82781C60:
	// bl 0x8279f648
	ctx.lr = 0x82781C64;
	sub_8279F648(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r3,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 3;
	// b 0x82781c84
	goto loc_82781C84;
loc_82781C80:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82781C84:
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

__attribute__((alias("__imp__sub_82781C98"))) PPC_WEAK_FUNC(sub_82781C98);
PPC_FUNC_IMPL(__imp__sub_82781C98) {
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
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// bne cr6,0x82781d30
	if (!ctx.cr6.eq) goto loc_82781D30;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x82781cd0
	if (!ctx.cr6.eq) goto loc_82781CD0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82781CD0:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// stb r8,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r8.u8);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// stw r9,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r9.u32);
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82781D14:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// b 0x82781e38
	goto loc_82781E38;
loc_82781D30:
	// cmpwi cr6,r5,9
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 9, ctx.xer);
	// bne cr6,0x82781d74
	if (!ctx.cr6.eq) goto loc_82781D74;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,3
	ctx.r11.s64 = 3;
	// stb r9,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r9.u8);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stfs f1,4(r8)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82781d14
	goto loc_82781D14;
loc_82781D74:
	// cmpwi cr6,r5,5
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 5, ctx.xer);
	// bne cr6,0x82781dfc
	if (!ctx.cr6.eq) goto loc_82781DFC;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lfs f0,30996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30996);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// bl 0x82a4cf18
	ctx.lr = 0x82781D8C;
	sub_82A4CF18(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,3
	ctx.r11.s64 = 3;
	// stb r9,124(r1)
	PPC_STORE_U8(ctx.r1.u32 + 124, ctx.r9.u8);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwa r8,84(r1)
	ctx.r8.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 84));
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,4(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// b 0x82781e34
	goto loc_82781E34;
loc_82781DFC:
	// cmpwi cr6,r5,14
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 14, ctx.xer);
	// bne cr6,0x82781e58
	if (!ctx.cr6.eq) goto loc_82781E58;
	// stfd f1,40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r5,r11,27196
	ctx.r5.s64 = ctx.r11.s64 + 27196;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a50ca8
	ctx.lr = 0x82781E20;
	sub_82A50CA8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8279f578
	ctx.lr = 0x82781E34;
	sub_8279F578(ctx, base);
loc_82781E34:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
loc_82781E38:
	// bl 0x8279f648
	ctx.lr = 0x82781E3C;
	sub_8279F648(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r3,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 3;
	// b 0x82781e5c
	goto loc_82781E5C;
loc_82781E58:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82781E5C:
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

__attribute__((alias("__imp__sub_82781E70"))) PPC_WEAK_FUNC(sub_82781E70);
PPC_FUNC_IMPL(__imp__sub_82781E70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82781E78;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x8249d188
	ctx.lr = 0x82781E90;
	sub_8249D188(ctx, base);
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// bne cr6,0x82781f10
	if (!ctx.cr6.eq) goto loc_82781F10;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,26460
	ctx.r4.s64 = ctx.r11.s64 + 26460;
	// bl 0x82783288
	ctx.lr = 0x82781EA8;
	sub_82783288(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cntlzw r9,r3
	ctx.r9.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stb r8,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r8.u8);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// lwz r8,8(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stw r10,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r10.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82781EF4:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// b 0x82782074
	goto loc_82782074;
loc_82781F10:
	// cmpwi cr6,r30,9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 9, ctx.xer);
	// bne cr6,0x82781f90
	if (!ctx.cr6.eq) goto loc_82781F90;
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x82781f34
	if (!ctx.cr6.lt) goto loc_82781F34;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
loc_82781F34:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82a51138
	ctx.lr = 0x82781F3C;
	sub_82A51138(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82781f58
	if (ctx.cr6.eq) goto loc_82781F58;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
loc_82781F58:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r11,3
	ctx.r11.s64 = 3;
	// stb r30,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r30.u8);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stfs f0,4(r8)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82781ef4
	goto loc_82781EF4;
loc_82781F90:
	// cmpwi cr6,r30,5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 5, ctx.xer);
	// bne cr6,0x82782054
	if (!ctx.cr6.eq) goto loc_82782054;
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x82781fb4
	if (!ctx.cr6.lt) goto loc_82781FB4;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
loc_82781FB4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82a51138
	ctx.lr = 0x82781FBC;
	sub_82A51138(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82781fd8
	if (ctx.cr6.eq) goto loc_82781FD8;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f13,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f13.f64 = double(temp.f32);
loc_82781FD8:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lfs f0,30996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30996);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// bl 0x82a4cf18
	ctx.lr = 0x82781FE8;
	sub_82A4CF18(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r11,3
	ctx.r11.s64 = 3;
	// stb r30,124(r1)
	PPC_STORE_U8(ctx.r1.u32 + 124, ctx.r30.u8);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lwa r8,100(r1)
	ctx.r8.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 100));
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f0,96(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,4(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// b 0x82782070
	goto loc_82782070;
loc_82782054:
	// cmpwi cr6,r30,14
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 14, ctx.xer);
	// bne cr6,0x827820a8
	if (!ctx.cr6.eq) goto loc_827820A8;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8279f578
	ctx.lr = 0x82782070;
	sub_8279F578(ctx, base);
loc_82782070:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
loc_82782074:
	// bl 0x8279f648
	ctx.lr = 0x82782078;
	sub_8279F648(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r31,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r31.s64 = ctx.r11.s32 >> 3;
	// bl 0x8249d108
	ctx.lr = 0x827820A0;
	sub_8249D108(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x827820bc
	goto loc_827820BC;
loc_827820A8:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8249d108
	ctx.lr = 0x827820B8;
	sub_8249D108(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_827820BC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827820C8"))) PPC_WEAK_FUNC(sub_827820C8);
PPC_FUNC_IMPL(__imp__sub_827820C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f0
	ctx.lr = 0x827820D0;
	__savegprlr_22(ctx, base);
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// bl 0x827816b0
	ctx.lr = 0x827820F0;
	sub_827816B0(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// bl 0x82796640
	ctx.lr = 0x82782100;
	sub_82796640(ctx, base);
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8278211C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x828e0a50
	ctx.lr = 0x82782128;
	sub_828E0A50(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r25,1
	ctx.r25.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,10668(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10668);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8278217c
	if (!ctx.cr6.eq) goto loc_8278217C;
	// li r3,816
	ctx.r3.s64 = 816;
	// bl 0x82833108
	ctx.lr = 0x82782154;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8278216c
	if (ctx.cr0.eq) goto loc_8278216C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82982cb0
	ctx.lr = 0x82782164;
	sub_82982CB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82782170
	goto loc_82782170;
loc_8278216C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82782170:
	// stw r29,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r29.u32);
	// stw r30,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r30.u32);
	// b 0x827822ec
	goto loc_827822EC;
loc_8278217C:
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lwz r10,10180(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10180);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x827822ec
	if (!ctx.cr6.eq) goto loc_827822EC;
	// li r3,720
	ctx.r3.s64 = 720;
	// bl 0x82833108
	ctx.lr = 0x82782194;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827821ac
	if (ctx.cr0.eq) goto loc_827821AC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82983640
	ctx.lr = 0x827821A4;
	sub_82983640(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x827821b0
	goto loc_827821B0;
loc_827821AC:
	// li r31,0
	ctx.r31.s64 = 0;
loc_827821B0:
	// stw r29,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r29.u32);
	// addi r3,r30,1612
	ctx.r3.s64 = ctx.r30.s64 + 1612;
	// stw r30,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r30.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82332d50
	ctx.lr = 0x827821CC;
	sub_82332D50(ctx, base);
	// lwz r11,1624(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1624);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827821e0
	if (ctx.cr0.eq) goto loc_827821E0;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
loc_827821E0:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,15834
	ctx.r4.s64 = ctx.r11.s64 + 15834;
	// bl 0x8249d188
	ctx.lr = 0x827821F0;
	sub_8249D188(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// li r4,27
	ctx.r4.s64 = 27;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8277cee0
	ctx.lr = 0x82782204;
	sub_8277CEE0(ctx, base);
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82782218
	if (ctx.cr6.lt) goto loc_82782218;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x8278221c
	goto loc_8278221C;
loc_82782218:
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
loc_8278221C:
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8276fba8
	ctx.lr = 0x82782224;
	sub_8276FBA8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8249d108
	ctx.lr = 0x82782234;
	sub_8249D108(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,136(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bl 0x8277c510
	ctx.lr = 0x82782254;
	sub_8277C510(ctx, base);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x82782268
	if (!ctx.cr6.eq) goto loc_82782268;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,17680(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17680);
	ctx.f0.f64 = double(temp.f32);
loc_82782268:
	// lwz r11,1740(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1740);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8278227c
	if (ctx.cr6.eq) goto loc_8278227C;
	// lwz r5,1736(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1736);
	// b 0x82782284
	goto loc_82782284;
loc_8278227C:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r5,r11,7896
	ctx.r5.s64 = ctx.r11.s64 + 7896;
loc_82782284:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// fctidz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stfd f0,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.f0.u64);
	// addi r4,r11,27200
	ctx.r4.s64 = ctx.r11.s64 + 27200;
	// lwz r6,148(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x82816c30
	ctx.lr = 0x827822A0;
	sub_82816C30(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r31,600
	ctx.r3.s64 = ctx.r31.s64 + 600;
	// bl 0x82400b48
	ctx.lr = 0x827822AC;
	sub_82400B48(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82333960
	ctx.lr = 0x827822B4;
	sub_82333960(ctx, base);
	// stw r25,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r25.u32);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,27212
	ctx.r4.s64 = ctx.r11.s64 + 27212;
	// bl 0x8233a258
	ctx.lr = 0x827822C8;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,624
	ctx.r3.s64 = ctx.r31.s64 + 624;
	// bl 0x82400b48
	ctx.lr = 0x827822D4;
	sub_82400B48(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82333960
	ctx.lr = 0x827822DC;
	sub_82333960(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8276fb38
	ctx.lr = 0x827822EC;
	sub_8276FB38(ctx, base);
loc_827822EC:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r11,48(r29)
	PPC_STORE_U32(ctx.r29.u32 + 48, ctx.r11.u32);
	// beq cr6,0x82782378
	if (ctx.cr6.eq) goto loc_82782378;
	// stw r25,516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 516, ctx.r25.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82782318;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8278233c
	if (ctx.cr6.eq) goto loc_8278233C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8278233C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8278233C:
	// stw r31,48(r29)
	PPC_STORE_U32(ctx.r29.u32 + 48, ctx.r31.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r30,1660
	ctx.r3.s64 = ctx.r30.s64 + 1660;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x8256e610
	ctx.lr = 0x82782350;
	sub_8256E610(ctx, base);
	// addi r3,r30,1636
	ctx.r3.s64 = ctx.r30.s64 + 1636;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82332d50
	ctx.lr = 0x82782364;
	sub_82332D50(ctx, base);
	// lwz r11,1648(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1648);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82782378
	if (ctx.cr0.eq) goto loc_82782378;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
loc_82782378:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// ld r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// bne cr6,0x82782394
	if (!ctx.cr6.eq) goto loc_82782394;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82782394:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827823b0
	if (ctx.cr0.eq) goto loc_827823B0;
	// stb r25,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r25.u8);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8277c140
	ctx.lr = 0x827823B0;
	sub_8277C140(ctx, base);
loc_827823B0:
	// clrlwi. r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82782444
	if (!ctx.cr0.eq) goto loc_82782444;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8277be40
	ctx.lr = 0x827823C4;
	sub_8277BE40(ctx, base);
	// lwz r31,148(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82782444
	if (ctx.cr6.eq) goto loc_82782444;
	// lis r30,-31948
	ctx.r30.s64 = -2093744128;
loc_827823D4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,10112(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10112);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82782438
	if (ctx.cr6.eq) goto loc_82782438;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82782400
	if (ctx.cr6.eq) goto loc_82782400;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82782438
	if (ctx.cr6.eq) goto loc_82782438;
loc_82782400:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x827816b0
	ctx.lr = 0x82782408;
	sub_827816B0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r29,r1,132
	ctx.r29.s64 = ctx.r1.s64 + 132;
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82782420;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// bl 0x827820c8
	ctx.lr = 0x82782438;
	sub_827820C8(ctx, base);
loc_82782438:
	// lwz r31,32(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x827823d4
	if (!ctx.cr6.eq) goto loc_827823D4;
loc_82782444:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8278246c
	if (ctx.cr6.eq) goto loc_8278246C;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8278246C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8278246C:
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x82a4ea40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82782480"))) PPC_WEAK_FUNC(sub_82782480);
PPC_FUNC_IMPL(__imp__sub_82782480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8249d108
	ctx.lr = 0x827824A8;
	sub_8249D108(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8249d300
	ctx.lr = 0x827824BC;
	sub_8249D300(ctx, base);
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

__attribute__((alias("__imp__sub_827824D8"))) PPC_WEAK_FUNC(sub_827824D8);
PPC_FUNC_IMPL(__imp__sub_827824D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x827824E0;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r25,1
	ctx.r25.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// lwz r30,4(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r29,4(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82782530
	goto loc_82782530;
loc_82782504:
	// addi r4,r29,12
	ctx.r4.s64 = ctx.r29.s64 + 12;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// bl 0x827831d0
	ctx.lr = 0x82782514;
	sub_827831D0(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r27,r11,27,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x8278252c
	if (ctx.cr0.eq) goto loc_8278252C;
	// lwz r29,0(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// b 0x82782530
	goto loc_82782530;
loc_8278252C:
	// lwz r29,8(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
loc_82782530:
	// lbz r11,121(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 121);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82782504
	if (ctx.cr6.eq) goto loc_82782504;
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// beq 0x82782594
	if (ctx.cr0.eq) goto loc_82782594;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82782590
	if (!ctx.cr6.eq) goto loc_82782590;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82782564:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// bl 0x82782a80
	ctx.lr = 0x82782574;
	sub_82782A80(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r25,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r25.u8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x827825c8
	goto loc_827825C8;
loc_82782590:
	// bl 0x82782dc0
	ctx.lr = 0x82782594;
	sub_82782DC0(ctx, base);
loc_82782594:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x827831d0
	ctx.lr = 0x827825A4;
	sub_827831D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x827825b8
	if (!ctx.cr0.lt) goto loc_827825B8;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// b 0x82782564
	goto loc_82782564;
loc_827825B8:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r10.u8);
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
loc_827825C8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827825D8"))) PPC_WEAK_FUNC(sub_827825D8);
PPC_FUNC_IMPL(__imp__sub_827825D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x827825E0;
	__savegprlr_25(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r5,256(r1)
	PPC_STORE_U64(ctx.r1.u32 + 256, ctx.r5.u64);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r31,260(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lbz r11,121(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 121);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82782644
	if (ctx.cr6.eq) goto loc_82782644;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,27280
	ctx.r4.s64 = ctx.r11.s64 + 27280;
	// bl 0x8276fba8
	ctx.lr = 0x82782610;
	sub_8276FBA8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8277f0b8
	ctx.lr = 0x8278261C;
	sub_8277F0B8(ctx, base);
	// bl 0x82770178
	ctx.lr = 0x82782620;
	sub_82770178(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,11252
	ctx.r11.s64 = ctx.r11.s64 + 11252;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// bl 0x8276fa98
	ctx.lr = 0x82782634;
	sub_8276FA98(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8276fb38
	ctx.lr = 0x82782644;
	sub_8276FB38(ctx, base);
loc_82782644:
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// bl 0x827829f0
	ctx.lr = 0x82782650;
	sub_827829F0(ctx, base);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lbz r11,121(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 121);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82782668
	if (ctx.cr6.eq) goto loc_82782668;
	// lwz r28,8(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// b 0x82782690
	goto loc_82782690;
loc_82782668:
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lbz r11,121(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 121);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82782680
	if (ctx.cr6.eq) goto loc_82782680;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// b 0x82782690
	goto loc_82782690;
loc_82782680:
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// lwz r28,8(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bne cr6,0x82782768
	if (!ctx.cr6.eq) goto loc_82782768;
loc_82782690:
	// lbz r11,121(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 121);
	// lwz r31,4(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827826a4
	if (!ctx.cr6.eq) goto loc_827826A4;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_827826A4:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x827826bc
	if (!ctx.cr6.eq) goto loc_827826BC;
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// b 0x827826d4
	goto loc_827826D4;
loc_827826BC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x827826d0
	if (!ctx.cr6.eq) goto loc_827826D0;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// b 0x827826d4
	goto loc_827826D4;
loc_827826D0:
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
loc_827826D4:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x8278271c
	if (!ctx.cr6.eq) goto loc_8278271C;
	// lbz r11,121(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 121);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827826f8
	if (ctx.cr6.eq) goto loc_827826F8;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x82782718
	goto loc_82782718;
loc_827826F8:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// b 0x8278270c
	goto loc_8278270C;
loc_82782704:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8278270C:
	// lbz r8,121(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 121);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82782704
	if (ctx.cr6.eq) goto loc_82782704;
loc_82782718:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_8278271C:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x827827fc
	if (!ctx.cr6.eq) goto loc_827827FC;
	// lbz r11,121(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 121);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82782740
	if (ctx.cr6.eq) goto loc_82782740;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x82782760
	goto loc_82782760;
loc_82782740:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// b 0x82782754
	goto loc_82782754;
loc_8278274C:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_82782754:
	// lbz r8,121(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 121);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8278274c
	if (ctx.cr6.eq) goto loc_8278274C;
loc_82782760:
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// b 0x827827fc
	goto loc_827827FC;
loc_82782768:
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82782788
	if (!ctx.cr6.eq) goto loc_82782788;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x827827b0
	goto loc_827827B0;
loc_82782788:
	// lbz r10,121(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 121);
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8278279c
	if (!ctx.cr6.eq) goto loc_8278279C;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_8278279C:
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
loc_827827B0:
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r9,r26
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x827827c8
	if (!ctx.cr6.eq) goto loc_827827C8;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// b 0x827827e4
	goto loc_827827E4;
loc_827827C8:
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r26
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x827827e0
	if (!ctx.cr6.eq) goto loc_827827E0;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x827827e4
	goto loc_827827E4;
loc_827827E0:
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
loc_827827E4:
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lbz r9,120(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 120);
	// lbz r10,120(r26)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r26.u32 + 120);
	// stb r10,120(r11)
	PPC_STORE_U8(ctx.r11.u32 + 120, ctx.r10.u8);
	// stb r9,120(r26)
	PPC_STORE_U8(ctx.r26.u32 + 120, ctx.r9.u8);
loc_827827FC:
	// lbz r11,120(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 120);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8278299c
	if (!ctx.cr6.eq) goto loc_8278299C;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82782998
	if (ctx.cr6.eq) goto loc_82782998;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82782820:
	// lbz r11,120(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 120);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82782998
	if (!ctx.cr6.eq) goto loc_82782998;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x827828dc
	if (!ctx.cr6.eq) goto loc_827828DC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lbz r10,120(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 120);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82782860
	if (!ctx.cr6.eq) goto loc_82782860;
	// stb r30,120(r11)
	PPC_STORE_U8(ctx.r11.u32 + 120, ctx.r30.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r29,120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 120, ctx.r29.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82782cf0
	ctx.lr = 0x8278285C;
	sub_82782CF0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_82782860:
	// lbz r10,121(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 121);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82782930
	if (!ctx.cr6.eq) goto loc_82782930;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,120(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 120);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x8278288c
	if (!ctx.cr6.eq) goto loc_8278288C;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r10,120(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 120);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x8278292c
	if (ctx.cr6.eq) goto loc_8278292C;
loc_8278288C:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r10,120(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 120);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x827828b8
	if (!ctx.cr6.eq) goto loc_827828B8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r30,120(r10)
	PPC_STORE_U8(ctx.r10.u32 + 120, ctx.r30.u8);
	// stb r29,120(r11)
	PPC_STORE_U8(ctx.r11.u32 + 120, ctx.r29.u8);
	// bl 0x82782d58
	ctx.lr = 0x827828B4;
	sub_82782D58(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_827828B8:
	// lbz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 120);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r10,120(r11)
	PPC_STORE_U8(ctx.r11.u32 + 120, ctx.r10.u8);
	// stb r30,120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 120, ctx.r30.u8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stb r30,120(r11)
	PPC_STORE_U8(ctx.r11.u32 + 120, ctx.r30.u8);
	// bl 0x82782cf0
	ctx.lr = 0x827828D8;
	sub_82782CF0(ctx, base);
	// b 0x82782998
	goto loc_82782998;
loc_827828DC:
	// lbz r10,120(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 120);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82782900
	if (!ctx.cr6.eq) goto loc_82782900;
	// stb r30,120(r11)
	PPC_STORE_U8(ctx.r11.u32 + 120, ctx.r30.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r29,120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 120, ctx.r29.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82782d58
	ctx.lr = 0x827828FC;
	sub_82782D58(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82782900:
	// lbz r10,121(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 121);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82782930
	if (!ctx.cr6.eq) goto loc_82782930;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r10,120(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 120);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x8278294c
	if (!ctx.cr6.eq) goto loc_8278294C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,120(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 120);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x8278294c
	if (!ctx.cr6.eq) goto loc_8278294C;
loc_8278292C:
	// stb r29,120(r11)
	PPC_STORE_U8(ctx.r11.u32 + 120, ctx.r29.u8);
loc_82782930:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82782820
	if (!ctx.cr6.eq) goto loc_82782820;
	// b 0x82782998
	goto loc_82782998;
loc_8278294C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,120(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 120);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82782978
	if (!ctx.cr6.eq) goto loc_82782978;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r30,120(r10)
	PPC_STORE_U8(ctx.r10.u32 + 120, ctx.r30.u8);
	// stb r29,120(r11)
	PPC_STORE_U8(ctx.r11.u32 + 120, ctx.r29.u8);
	// bl 0x82782cf0
	ctx.lr = 0x82782974;
	sub_82782CF0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82782978:
	// lbz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 120);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r10,120(r11)
	PPC_STORE_U8(ctx.r11.u32 + 120, ctx.r10.u8);
	// stb r30,120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 120, ctx.r30.u8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r30,120(r11)
	PPC_STORE_U8(ctx.r11.u32 + 120, ctx.r30.u8);
	// bl 0x82782d58
	ctx.lr = 0x82782998;
	sub_82782D58(ctx, base);
loc_82782998:
	// stb r30,120(r28)
	PPC_STORE_U8(ctx.r28.u32 + 120, ctx.r30.u8);
loc_8278299C:
	// addi r31,r26,12
	ctx.r31.s64 = ctx.r26.s64 + 12;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x8279f908
	ctx.lr = 0x827829A8;
	sub_8279F908(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8249d108
	ctx.lr = 0x827829B8;
	sub_8249D108(ctx, base);
	// bl 0x82784f18
	ctx.lr = 0x827829BC;
	sub_82784F18(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r5,124
	ctx.r5.s64 = 124;
	// bl 0x82784a40
	ctx.lr = 0x827829C8;
	sub_82784A40(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827829dc
	if (ctx.cr6.eq) goto loc_827829DC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
loc_827829DC:
	// ld r11,256(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 256);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// std r11,0(r25)
	PPC_STORE_U64(ctx.r25.u32 + 0, ctx.r11.u64);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827829F0"))) PPC_WEAK_FUNC(sub_827829F0);
PPC_FUNC_IMPL(__imp__sub_827829F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82782a00
	if (!ctx.cr6.eq) goto loc_82782A00;
	// twi 31,r0,22
loc_82782A00:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lbz r10,121(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 121);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82782a18
	if (ctx.cr6.eq) goto loc_82782A18;
	// twi 31,r0,22
	// blr 
	return;
loc_82782A18:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,121(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 121);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82782a64
	if (!ctx.cr6.eq) goto loc_82782A64;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82782a38
	goto loc_82782A38;
loc_82782A30:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82782A38:
	// lbz r9,121(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 121);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82782a30
	if (ctx.cr6.eq) goto loc_82782A30;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// blr 
	return;
loc_82782A4C:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82782a74
	if (!ctx.cr6.eq) goto loc_82782A74;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82782A64:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,121(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 121);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82782a4c
	if (ctx.cr6.eq) goto loc_82782A4C;
loc_82782A74:
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82782A80"))) PPC_WEAK_FUNC(sub_82782A80);
PPC_FUNC_IMPL(__imp__sub_82782A80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f4
	ctx.lr = 0x82782A88;
	__savegprlr_23(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lis r11,606
	ctx.r11.s64 = 39714816;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// ori r11,r11,53398
	ctx.r11.u64 = ctx.r11.u64 | 53398;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82782af8
	if (ctx.cr6.lt) goto loc_82782AF8;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,27308
	ctx.r4.s64 = ctx.r11.s64 + 27308;
	// bl 0x8276fba8
	ctx.lr = 0x82782AC4;
	sub_8276FBA8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8277f0b8
	ctx.lr = 0x82782AD0;
	sub_8277F0B8(ctx, base);
	// bl 0x82770178
	ctx.lr = 0x82782AD4;
	sub_82770178(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,11252
	ctx.r11.s64 = ctx.r11.s64 + 11252;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// bl 0x8276fa98
	ctx.lr = 0x82782AE8;
	sub_8276FA98(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8276fb38
	ctx.lr = 0x82782AF8;
	sub_8276FB38(ctx, base);
loc_82782AF8:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lwz r27,4(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// addi r30,r11,27328
	ctx.r30.s64 = ctx.r11.s64 + 27328;
	// addi r28,r10,26608
	ctx.r28.s64 = ctx.r10.s64 + 26608;
	// addi r24,r9,26712
	ctx.r24.s64 = ctx.r9.s64 + 26712;
	// bl 0x82784f18
	ctx.lr = 0x82782B18;
	sub_82784F18(ctx, base);
	// li r4,124
	ctx.r4.s64 = 124;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r8,124
	ctx.r8.s64 = 124;
	// bl 0x827848f8
	ctx.lr = 0x82782B30;
	sub_827848F8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// li r24,0
	ctx.r24.s64 = 0;
	// beq 0x82782b6c
	if (ctx.cr0.eq) goto loc_82782B6C;
	// stw r27,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r27.u32);
	// addi r28,r30,12
	ctx.r28.s64 = ctx.r30.s64 + 12;
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r27,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r27.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82782480
	ctx.lr = 0x82782B58;
	sub_82782480(ctx, base);
	// addi r4,r26,28
	ctx.r4.s64 = ctx.r26.s64 + 28;
	// addi r3,r28,28
	ctx.r3.s64 = ctx.r28.s64 + 28;
	// bl 0x8279f8a8
	ctx.lr = 0x82782B64;
	sub_8279F8A8(ctx, base);
	// stb r24,120(r30)
	PPC_STORE_U8(ctx.r30.u32 + 120, ctx.r24.u8);
	// stb r24,121(r30)
	PPC_STORE_U8(ctx.r30.u32 + 121, ctx.r24.u8);
loc_82782B6C:
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// stw r10,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r10.u32);
	// bne cr6,0x82782b98
	if (!ctx.cr6.eq) goto loc_82782B98;
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// b 0x82782bd0
	goto loc_82782BD0;
loc_82782B98:
	// clrlwi. r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82782bbc
	if (ctx.cr0.eq) goto loc_82782BBC;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82782bd4
	if (!ctx.cr6.eq) goto loc_82782BD4;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// b 0x82782bd4
	goto loc_82782BD4;
loc_82782BBC:
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82782bd4
	if (!ctx.cr6.eq) goto loc_82782BD4;
loc_82782BD0:
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
loc_82782BD4:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// li r28,1
	ctx.r28.s64 = 1;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// b 0x82782cc4
	goto loc_82782CC4;
loc_82782BE8:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82782c4c
	if (!ctx.cr6.eq) goto loc_82782C4C;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lbz r9,120(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 120);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82782c5c
	if (ctx.cr6.eq) goto loc_82782C5C;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82782c24
	if (!ctx.cr6.eq) goto loc_82782C24;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82782cf0
	ctx.lr = 0x82782C24;
	sub_82782CF0(ctx, base);
loc_82782C24:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r28,120(r11)
	PPC_STORE_U8(ctx.r11.u32 + 120, ctx.r28.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stb r24,120(r11)
	PPC_STORE_U8(ctx.r11.u32 + 120, ctx.r24.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82782d58
	ctx.lr = 0x82782C48;
	sub_82782D58(ctx, base);
	// b 0x82782cbc
	goto loc_82782CBC;
loc_82782C4C:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r9,120(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 120);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82782c80
	if (!ctx.cr6.eq) goto loc_82782C80;
loc_82782C5C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r28,120(r9)
	PPC_STORE_U8(ctx.r9.u32 + 120, ctx.r28.u8);
	// stb r28,120(r10)
	PPC_STORE_U8(ctx.r10.u32 + 120, ctx.r28.u8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stb r24,120(r10)
	PPC_STORE_U8(ctx.r10.u32 + 120, ctx.r24.u8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82782cbc
	goto loc_82782CBC;
loc_82782C80:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82782c98
	if (!ctx.cr6.eq) goto loc_82782C98;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82782d58
	ctx.lr = 0x82782C98;
	sub_82782D58(ctx, base);
loc_82782C98:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r28,120(r11)
	PPC_STORE_U8(ctx.r11.u32 + 120, ctx.r28.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stb r24,120(r11)
	PPC_STORE_U8(ctx.r11.u32 + 120, ctx.r24.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82782cf0
	ctx.lr = 0x82782CBC;
	sub_82782CF0(ctx, base);
loc_82782CBC:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
loc_82782CC4:
	// lbz r10,120(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 120);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82782be8
	if (ctx.cr6.eq) goto loc_82782BE8;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r30,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r30.u32);
	// stw r29,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r29.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stb r28,120(r11)
	PPC_STORE_U8(ctx.r11.u32 + 120, ctx.r28.u8);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82a4ea44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82782CF0"))) PPC_WEAK_FUNC(sub_82782CF0);
PPC_FUNC_IMPL(__imp__sub_82782CF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,121(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 121);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82782d10
	if (!ctx.cr6.eq) goto loc_82782D10;
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_82782D10:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82782d30
	if (!ctx.cr6.eq) goto loc_82782D30;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// b 0x82782d4c
	goto loc_82782D4C;
loc_82782D30:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82782d48
	if (!ctx.cr6.eq) goto loc_82782D48;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x82782d4c
	goto loc_82782D4C;
loc_82782D48:
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
loc_82782D4C:
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82782D58"))) PPC_WEAK_FUNC(sub_82782D58);
PPC_FUNC_IMPL(__imp__sub_82782D58) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,121(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 121);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82782d78
	if (!ctx.cr6.eq) goto loc_82782D78;
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_82782D78:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82782d98
	if (!ctx.cr6.eq) goto loc_82782D98;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// b 0x82782db4
	goto loc_82782DB4;
loc_82782D98:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82782db0
	if (!ctx.cr6.eq) goto loc_82782DB0;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// b 0x82782db4
	goto loc_82782DB4;
loc_82782DB0:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_82782DB4:
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82782DC0"))) PPC_WEAK_FUNC(sub_82782DC0);
PPC_FUNC_IMPL(__imp__sub_82782DC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82782dd0
	if (!ctx.cr6.eq) goto loc_82782DD0;
	// twi 31,r0,22
loc_82782DD0:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lbz r10,121(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 121);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82782df8
	if (ctx.cr6.eq) goto loc_82782DF8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lbz r11,121(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 121);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82782e64
	goto loc_82782E64;
loc_82782DF8:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,121(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 121);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82782e44
	if (!ctx.cr6.eq) goto loc_82782E44;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x82782e18
	goto loc_82782E18;
loc_82782E10:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_82782E18:
	// lbz r9,121(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 121);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82782e10
	if (ctx.cr6.eq) goto loc_82782E10;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// blr 
	return;
loc_82782E2C:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82782e54
	if (!ctx.cr6.eq) goto loc_82782E54;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82782E44:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,121(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 121);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82782e2c
	if (ctx.cr6.eq) goto loc_82782E2C;
loc_82782E54:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lbz r10,121(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 121);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82782e6c
	if (ctx.cr6.eq) goto loc_82782E6C;
loc_82782E64:
	// twi 31,r0,22
	// blr 
	return;
loc_82782E6C:
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82782E78"))) PPC_WEAK_FUNC(sub_82782E78);
PPC_FUNC_IMPL(__imp__sub_82782E78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82782E80;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x82782ea4
	if (!ctx.cr6.lt) goto loc_82782EA4;
	// bl 0x82a4c138
	ctx.lr = 0x82782EA4;
	sub_82A4C138(ctx, base);
loc_82782EA4:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// subf r11,r27,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r27.s64;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x82782eb8
	if (!ctx.cr6.lt) goto loc_82782EB8;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_82782EB8:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// subfic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 <= 4294967295;
	ctx.r10.s64 = -1 - ctx.r11.s64;
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// ble cr6,0x82782ed4
	if (!ctx.cr6.gt) goto loc_82782ED4;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82782ed8
	if (!ctx.cr6.lt) goto loc_82782ED8;
loc_82782ED4:
	// bl 0x82a4c040
	ctx.lr = 0x82782ED8;
	sub_82A4C040(ctx, base);
loc_82782ED8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82782f68
	if (ctx.cr6.eq) goto loc_82782F68;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r28,r11,r30
	ctx.r28.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8249d3e8
	ctx.lr = 0x82782EF8;
	sub_8249D3E8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82782f68
	if (ctx.cr0.eq) goto loc_82782F68;
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82782f14
	if (ctx.cr6.lt) goto loc_82782F14;
	// lwz r8,4(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// b 0x82782f18
	goto loc_82782F18;
loc_82782F14:
	// addi r8,r29,4
	ctx.r8.s64 = ctx.r29.s64 + 4;
loc_82782F18:
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// blt cr6,0x82782f30
	if (ctx.cr6.lt) goto loc_82782F30;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x82782f34
	goto loc_82782F34;
loc_82782F30:
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_82782F34:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// add r5,r8,r27
	ctx.r5.u64 = ctx.r8.u64 + ctx.r27.u64;
	// subf r4,r11,r9
	ctx.r4.s64 = ctx.r9.s64 - ctx.r11.s64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82a4d1f8
	ctx.lr = 0x82782F4C;
	sub_82A4D1F8(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82782f60
	if (ctx.cr6.lt) goto loc_82782F60;
	// lwz r29,0(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_82782F60:
	// li r11,0
	ctx.r11.s64 = 0;
	// stbx r11,r29,r28
	PPC_STORE_U8(ctx.r29.u32 + ctx.r28.u32, ctx.r11.u8);
loc_82782F68:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82782F78"))) PPC_WEAK_FUNC(sub_82782F78);
PPC_FUNC_IMPL(__imp__sub_82782F78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82782F80;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// std r5,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r5.u64);
	// lwz r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// std r6,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r6.u64);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x82782fb0
	if (ctx.cr6.eq) goto loc_82782FB0;
	// cmplw cr6,r9,r29
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82782fb4
	if (ctx.cr6.eq) goto loc_82782FB4;
loc_82782FB0:
	// twi 31,r0,22
loc_82782FB4:
	// lwz r8,180(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r30,188(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r31,184(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82783074
	if (!ctx.cr6.eq) goto loc_82783074;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82782fd8
	if (ctx.cr6.eq) goto loc_82782FD8;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82782fdc
	if (ctx.cr6.eq) goto loc_82782FDC;
loc_82782FD8:
	// twi 31,r0,22
loc_82782FDC:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82783074
	if (!ctx.cr6.eq) goto loc_82783074;
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// lbz r11,121(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 121);
	// b 0x82783038
	goto loc_82783038;
loc_82782FF4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x827830d0
	ctx.lr = 0x82783000;
	sub_827830D0(ctx, base);
	// addi r28,r30,12
	ctx.r28.s64 = ctx.r30.s64 + 12;
	// addi r3,r28,28
	ctx.r3.s64 = ctx.r28.s64 + 28;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8279f908
	ctx.lr = 0x82783010;
	sub_8279F908(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8249d108
	ctx.lr = 0x82783020;
	sub_8249D108(ctx, base);
	// bl 0x82784f18
	ctx.lr = 0x82783024;
	sub_82784F18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,124
	ctx.r5.s64 = 124;
	// bl 0x82784a40
	ctx.lr = 0x82783030;
	sub_82784A40(ctx, base);
	// lbz r11,121(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 121);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82783038:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82782ff4
	if (ctx.cr6.eq) goto loc_82782FF4;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r29,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r29.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r10,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r10.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r11.u32);
	// b 0x827830c0
	goto loc_827830C0;
loc_82783074:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82783084
	if (ctx.cr6.eq) goto loc_82783084;
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82783088
	if (ctx.cr6.eq) goto loc_82783088;
loc_82783084:
	// twi 31,r0,22
loc_82783088:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x827830bc
	if (ctx.cr6.eq) goto loc_827830BC;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x827829f0
	ctx.lr = 0x827830A0;
	sub_827829F0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827825d8
	ctx.lr = 0x827830B0;
	sub_827825D8(ctx, base);
	// ld r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// lwz r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// b 0x82783074
	goto loc_82783074;
loc_827830BC:
	// std r5,0(r27)
	PPC_STORE_U64(ctx.r27.u32 + 0, ctx.r5.u64);
loc_827830C0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827830D0"))) PPC_WEAK_FUNC(sub_827830D0);
PPC_FUNC_IMPL(__imp__sub_827830D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x827830D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// lbz r11,121(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 121);
	// b 0x82783134
	goto loc_82783134;
loc_827830F0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x827830d0
	ctx.lr = 0x827830FC;
	sub_827830D0(ctx, base);
	// addi r29,r30,12
	ctx.r29.s64 = ctx.r30.s64 + 12;
	// addi r3,r29,28
	ctx.r3.s64 = ctx.r29.s64 + 28;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8279f908
	ctx.lr = 0x8278310C;
	sub_8279F908(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8249d108
	ctx.lr = 0x8278311C;
	sub_8249D108(ctx, base);
	// bl 0x82784f18
	ctx.lr = 0x82783120;
	sub_82784F18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,124
	ctx.r5.s64 = 124;
	// bl 0x82784a40
	ctx.lr = 0x8278312C;
	sub_82784A40(ctx, base);
	// lbz r11,121(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 121);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82783134:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827830f0
	if (ctx.cr6.eq) goto loc_827830F0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82783148"))) PPC_WEAK_FUNC(sub_82783148);
PPC_FUNC_IMPL(__imp__sub_82783148) {
	PPC_FUNC_PROLOGUE();
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82782480
	ctx.lr = 0x8278316C;
	sub_82782480(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82783170:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82783170
	if (!ctx.cr6.eq) goto loc_82783170;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82783348
	ctx.lr = 0x82783194;
	sub_82783348(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82782480
	ctx.lr = 0x827831A0;
	sub_82782480(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8249d108
	ctx.lr = 0x827831B0;
	sub_8249D108(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

__attribute__((alias("__imp__sub_827831D0"))) PPC_WEAK_FUNC(sub_827831D0);
PPC_FUNC_IMPL(__imp__sub_827831D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// lwz r6,20(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x827831e8
	if (ctx.cr6.lt) goto loc_827831E8;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// b 0x827831ec
	goto loc_827831EC;
loc_827831E8:
	// addi r10,r4,4
	ctx.r10.s64 = ctx.r4.s64 + 4;
loc_827831EC:
	// lwz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x827831fc
	if (!ctx.cr6.lt) {
		sub_827831FC(ctx, base);
		return;
	}
}

__attribute__((alias("__imp__sub_827831FC"))) PPC_WEAK_FUNC(sub_827831FC);
PPC_FUNC_IMPL(__imp__sub_827831FC) {
	PPC_FUNC_PROLOGUE();
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// blt cr6,0x8278320c
	if (ctx.cr6.lt) goto loc_8278320C;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
loc_8278320C:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82783220
	if (ctx.cr6.lt) goto loc_82783220;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82783224
	goto loc_82783224;
loc_82783220:
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_82783224:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x82783254
	if (ctx.cr0.eq) goto loc_82783254;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
loc_82783234:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r5,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r5.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82783254
	if (!ctx.cr0.eq) goto loc_82783254;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82783234
	if (!ctx.cr6.eq) goto loc_82783234;
loc_82783254:
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x8278327c
	if (!ctx.cr0.eq) goto loc_8278327C;
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x8278326c
	if (!ctx.cr6.lt) goto loc_8278326C;
	// li r9,-1
	ctx.r9.s64 = -1;
	// b 0x8278327c
	goto loc_8278327C;
loc_8278326C:
	// subf r11,r7,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r7.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r9,r11,1
	ctx.r9.u64 = ctx.r11.u64 ^ 1;
loc_8278327C:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82783288"))) PPC_WEAK_FUNC(sub_82783288);
PPC_FUNC_IMPL(__imp__sub_82783288) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8278328C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8278328c
	if (!ctx.cr6.eq) goto loc_8278328C;
	// lwz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// rotlwi r6,r10,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bge cr6,0x827832b8
	if (!ctx.cr6.lt) {
		sub_827832B8(ctx, base);
		return;
	}
}

__attribute__((alias("__imp__sub_827832B8"))) PPC_WEAK_FUNC(sub_827832B8);
PPC_FUNC_IMPL(__imp__sub_827832B8) {
	PPC_FUNC_PROLOGUE();
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// blt cr6,0x827832c8
	if (ctx.cr6.lt) goto loc_827832C8;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
loc_827832C8:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x827832dc
	if (ctx.cr6.lt) goto loc_827832DC;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x827832e0
	goto loc_827832E0;
loc_827832DC:
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_827832E0:
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x82783314
	if (ctx.cr0.eq) goto loc_82783314;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
loc_827832F4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r5,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r5.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82783314
	if (!ctx.cr0.eq) goto loc_82783314;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x827832f4
	if (!ctx.cr6.eq) goto loc_827832F4;
loc_82783314:
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x8278333c
	if (!ctx.cr0.eq) goto loc_8278333C;
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x8278332c
	if (!ctx.cr6.lt) goto loc_8278332C;
	// li r9,-1
	ctx.r9.s64 = -1;
	// b 0x8278333c
	goto loc_8278333C;
loc_8278332C:
	// subf r11,r7,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r7.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r9,r11,1
	ctx.r9.u64 = ctx.r11.u64 ^ 1;
loc_8278333C:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82783348"))) PPC_WEAK_FUNC(sub_82783348);
PPC_FUNC_IMPL(__imp__sub_82783348) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82783350;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// blt cr6,0x82783378
	if (ctx.cr6.lt) goto loc_82783378;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x8278337c
	goto loc_8278337C;
loc_82783378:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8278337C:
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x827833ac
	if (ctx.cr6.lt) goto loc_827833AC;
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// blt cr6,0x82783394
	if (ctx.cr6.lt) goto loc_82783394;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// b 0x82783398
	goto loc_82783398;
loc_82783394:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82783398:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x827833b0
	if (ctx.cr6.gt) goto loc_827833B0;
loc_827833AC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_827833B0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827833e4
	if (ctx.cr0.eq) goto loc_827833E4;
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// blt cr6,0x827833c8
	if (ctx.cr6.lt) goto loc_827833C8;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// b 0x827833cc
	goto loc_827833CC;
loc_827833C8:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_827833CC:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// subf r5,r11,r27
	ctx.r5.s64 = ctx.r27.s64 - ctx.r11.s64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82782e78
	ctx.lr = 0x827833E0;
	sub_82782E78(ctx, base);
	// b 0x82783484
	goto loc_82783484;
loc_827833E4:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// subfic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 <= 4294967295;
	ctx.r10.s64 = -1 - ctx.r11.s64;
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, ctx.xer);
	// ble cr6,0x82783400
	if (!ctx.cr6.gt) goto loc_82783400;
	// add r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82783404
	if (!ctx.cr6.lt) goto loc_82783404;
loc_82783400:
	// bl 0x82a4c040
	ctx.lr = 0x82783404;
	sub_82A4C040(ctx, base);
loc_82783404:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82783480
	if (ctx.cr6.eq) goto loc_82783480;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r30,r28,r11
	ctx.r30.u64 = ctx.r28.u64 + ctx.r11.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8249d3e8
	ctx.lr = 0x82783424;
	sub_8249D3E8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82783480
	if (ctx.cr0.eq) goto loc_82783480;
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// blt cr6,0x82783440
	if (ctx.cr6.lt) goto loc_82783440;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// b 0x82783444
	goto loc_82783444;
loc_82783440:
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_82783444:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// subf r4,r11,r9
	ctx.r4.s64 = ctx.r9.s64 - ctx.r11.s64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82a4d1f8
	ctx.lr = 0x8278345C;
	sub_82A4D1F8(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82783474
	if (ctx.cr6.lt) goto loc_82783474;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// b 0x82783478
	goto loc_82783478;
loc_82783474:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82783478:
	// li r10,0
	ctx.r10.s64 = 0;
	// stbx r10,r11,r30
	PPC_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u8);
loc_82783480:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82783484:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82783490"))) PPC_WEAK_FUNC(sub_82783490);
PPC_FUNC_IMPL(__imp__sub_82783490) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,28560
	ctx.r11.s64 = ctx.r11.s64 + 28560;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x827834bc
	if (ctx.cr0.eq) goto loc_827834BC;
	// bl 0x82332db8
	ctx.lr = 0x827834BC;
	sub_82332DB8(ctx, base);
loc_827834BC:
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

__attribute__((alias("__imp__sub_827834D8"))) PPC_WEAK_FUNC(sub_827834D8);
PPC_FUNC_IMPL(__imp__sub_827834D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,260(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827834E0"))) PPC_WEAK_FUNC(sub_827834E0);
PPC_FUNC_IMPL(__imp__sub_827834E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x827834E8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r8,r11,28600
	ctx.r8.s64 = ctx.r11.s64 + 28600;
	// li r9,31
	ctx.r9.s64 = 31;
	// lwz r11,10912(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10912);
	// addi r30,r31,264
	ctx.r30.s64 = ctx.r31.s64 + 264;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// li r5,124
	ctx.r5.s64 = 124;
	// stw r11,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,10912(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10912, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r9,512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 512, ctx.r9.u32);
	// bl 0x82a455d0
	ctx.lr = 0x82783530;
	sub_82A455D0(ctx, base);
	// li r5,124
	ctx.r5.s64 = 124;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,124
	ctx.r3.s64 = ctx.r30.s64 + 124;
	// bl 0x82a455d0
	ctx.lr = 0x82783540;
	sub_82A455D0(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r28,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r28.u32);
	// addi r3,r31,544
	ctx.r3.s64 = ctx.r31.s64 + 544;
	// stw r29,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r29.u32);
	// stw r29,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r29.u32);
	// bl 0x82783790
	ctx.lr = 0x82783558;
	sub_82783790(ctx, base);
	// stb r29,556(r31)
	PPC_STORE_U8(ctx.r31.u32 + 556, ctx.r29.u8);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r27,r11,27788
	ctx.r27.s64 = ctx.r11.s64 + 27788;
	// addi r26,r10,27824
	ctx.r26.s64 = ctx.r10.s64 + 27824;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,27932
	ctx.r5.s64 = ctx.r11.s64 + 27932;
	// li r8,70
	ctx.r8.s64 = 70;
	// li r4,68
	ctx.r4.s64 = 68;
	// li r3,68
	ctx.r3.s64 = 68;
	// bl 0x82784ff0
	ctx.lr = 0x8278358C;
	sub_82784FF0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8278360c
	if (ctx.cr0.eq) goto loc_8278360C;
	// lwz r10,520(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// addi r8,r11,-24196
	ctx.r8.s64 = ctx.r11.s64 + -24196;
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// li r4,1024
	ctx.r4.s64 = 1024;
	// stw r9,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r9.u32);
	// addi r28,r11,12
	ctx.r28.s64 = ctx.r11.s64 + 12;
	// stw r29,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r29.u32);
	// stw r29,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r29.u32);
	// stw r29,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r29.u32);
	// stw r29,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r29.u32);
	// stw r29,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r29.u32);
	// stw r29,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r29.u32);
	// stw r29,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r29.u32);
	// stw r29,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r29.u32);
	// stw r29,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r29.u32);
	// bl 0x827a4fa8
	ctx.lr = 0x827835F4;
	sub_827A4FA8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x827a4fa8
	ctx.lr = 0x82783604;
	sub_827A4FA8(ctx, base);
	// stw r31,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r31.u32);
	// b 0x82783610
	goto loc_82783610;
loc_8278360C:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_82783610:
	// stw r30,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r30.u32);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,27944
	ctx.r5.s64 = ctx.r11.s64 + 27944;
	// li r8,73
	ctx.r8.s64 = 73;
	// li r4,148
	ctx.r4.s64 = 148;
	// li r3,148
	ctx.r3.s64 = 148;
	// bl 0x82784ff0
	ctx.lr = 0x82783634;
	sub_82784FF0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8278364c
	if (ctx.cr0.eq) goto loc_8278364C;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,520(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// bl 0x827a4210
	ctx.lr = 0x82783648;
	sub_827A4210(ctx, base);
	// b 0x82783650
	goto loc_82783650;
loc_8278364C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82783650:
	// stw r3,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r3.u32);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,27960
	ctx.r5.s64 = ctx.r11.s64 + 27960;
	// li r8,74
	ctx.r8.s64 = 74;
	// li r4,28
	ctx.r4.s64 = 28;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82784ff0
	ctx.lr = 0x82783674;
	sub_82784FF0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82783684
	if (ctx.cr0.eq) goto loc_82783684;
	// bl 0x827a1318
	ctx.lr = 0x82783680;
	sub_827A1318(ctx, base);
	// b 0x82783688
	goto loc_82783688;
loc_82783684:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82783688:
	// stw r3,532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 532, ctx.r3.u32);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,27976
	ctx.r5.s64 = ctx.r11.s64 + 27976;
	// li r8,75
	ctx.r8.s64 = 75;
	// li r4,48
	ctx.r4.s64 = 48;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82784ff0
	ctx.lr = 0x827836AC;
	sub_82784FF0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827836c0
	if (ctx.cr0.eq) goto loc_827836C0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x827a0c78
	ctx.lr = 0x827836BC;
	sub_827A0C78(ctx, base);
	// b 0x827836c4
	goto loc_827836C4;
loc_827836C0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_827836C4:
	// stw r3,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r3.u32);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,27992
	ctx.r5.s64 = ctx.r11.s64 + 27992;
	// li r8,78
	ctx.r8.s64 = 78;
	// li r4,12
	ctx.r4.s64 = 12;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82784ff0
	ctx.lr = 0x827836E8;
	sub_82784FF0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82783714
	if (ctx.cr0.eq) goto loc_82783714;
	// lis r11,-32136
	ctx.r11.s64 = -2106064896;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r11,r11,16416
	ctx.r11.s64 = ctx.r11.s64 + 16416;
	// addi r10,r10,16480
	ctx.r10.s64 = ctx.r10.s64 + 16480;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// b 0x82783718
	goto loc_82783718;
loc_82783714:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_82783718:
	// stw r5,516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 516, ctx.r5.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r3,520(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// addi r4,r11,6988
	ctx.r4.s64 = ctx.r11.s64 + 6988;
	// bl 0x8278f520
	ctx.lr = 0x8278372C;
	sub_8278F520(ctx, base);
	// stb r29,557(r31)
	PPC_STORE_U8(ctx.r31.u32 + 557, ctx.r29.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r29,558(r31)
	PPC_STORE_U8(ctx.r31.u32 + 558, ctx.r29.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82783740"))) PPC_WEAK_FUNC(sub_82783740);
PPC_FUNC_IMPL(__imp__sub_82783740) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82783838
	ctx.lr = 0x82783760;
	sub_82783838(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82783770
	if (ctx.cr0.eq) goto loc_82783770;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x82783770;
	sub_82332DB8(ctx, base);
loc_82783770:
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

__attribute__((alias("__imp__sub_82783790"))) PPC_WEAK_FUNC(sub_82783790);
PPC_FUNC_IMPL(__imp__sub_82783790) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82783798;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,28416
	ctx.r30.s64 = ctx.r11.s64 + 28416;
	// addi r29,r10,26608
	ctx.r29.s64 = ctx.r10.s64 + 26608;
	// addi r28,r9,26712
	ctx.r28.s64 = ctx.r9.s64 + 26712;
	// bl 0x82784f18
	ctx.lr = 0x827837BC;
	sub_82784F18(ctx, base);
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r8,124
	ctx.r8.s64 = 124;
	// bl 0x827848f8
	ctx.lr = 0x827837D4;
	sub_827848F8(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq 0x827837e4
	if (ctx.cr0.eq) goto loc_827837E4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_827837E4:
	// addic. r9,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r9.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x827837f0
	if (ctx.cr0.eq) goto loc_827837F0;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_827837F0:
	// addic. r9,r11,8
	ctx.xer.ca = ctx.r11.u32 > 4294967287;
	ctx.r9.s64 = ctx.r11.s64 + 8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x827837fc
	if (ctx.cr0.eq) goto loc_827837FC;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_827837FC:
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r10,17(r11)
	PPC_STORE_U8(ctx.r11.u32 + 17, ctx.r10.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r9,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r9.u8);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stb r9,17(r11)
	PPC_STORE_U8(ctx.r11.u32 + 17, ctx.r9.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82783838"))) PPC_WEAK_FUNC(sub_82783838);
PPC_FUNC_IMPL(__imp__sub_82783838) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82783840;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r11,r11,28600
	ctx.r11.s64 = ctx.r11.s64 + 28600;
	// lbz r10,557(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 557);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8278388c
	if (ctx.cr0.eq) goto loc_8278388C;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// addi r6,r10,28020
	ctx.r6.s64 = ctx.r10.s64 + 28020;
	// lwz r11,17176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17176);
	// addi r4,r9,27824
	ctx.r4.s64 = ctx.r9.s64 + 27824;
	// addi r3,r8,28060
	ctx.r3.s64 = ctx.r8.s64 + 28060;
	// li r5,91
	ctx.r5.s64 = 91;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8278388C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8278388C:
	// lwz r11,552(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 552);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827838d4
	if (ctx.cr6.eq) goto loc_827838D4;
	// addi r30,r31,544
	ctx.r30.s64 = ctx.r31.s64 + 544;
loc_8278389C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x827838b4
	if (!ctx.cr6.eq) goto loc_827838B4;
	// twi 31,r0,22
loc_827838B4:
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,520(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8278f4d0
	ctx.lr = 0x827838C8;
	sub_8278F4D0(ctx, base);
	// lwz r11,552(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 552);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8278389c
	if (!ctx.cr6.eq) goto loc_8278389C;
loc_827838D4:
	// lwz r11,512(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 512);
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82783938
	if (!ctx.cr6.gt) goto loc_82783938;
	// addi r30,r31,388
	ctx.r30.s64 = ctx.r31.s64 + 388;
loc_827838EC:
	// lwz r11,-124(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82783924
	if (ctx.cr6.eq) goto loc_82783924;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82783924
	if (ctx.cr6.eq) goto loc_82783924;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8278391C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82790bd0
	ctx.lr = 0x82783924;
	sub_82790BD0(ctx, base);
loc_82783924:
	// lwz r11,512(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 512);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x827838ec
	if (ctx.cr6.lt) goto loc_827838EC;
loc_82783938:
	// lwz r28,540(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 540);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x827839cc
	if (ctx.cr6.eq) goto loc_827839CC;
	// lwz r30,12(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82783fb8
	ctx.lr = 0x82783950;
	sub_82783FB8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x827a44b8
	ctx.lr = 0x8278395C;
	sub_827A44B8(ctx, base);
	// lwz r30,12(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82783978
	if (ctx.cr6.eq) goto loc_82783978;
	// bl 0x82784f18
	ctx.lr = 0x8278396C;
	sub_82784F18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x82784a40
	ctx.lr = 0x82783978;
	sub_82784A40(ctx, base);
loc_82783978:
	// lwz r29,36(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// addi r30,r28,32
	ctx.r30.s64 = ctx.r28.s64 + 32;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x827839a4
	if (ctx.cr6.eq) goto loc_827839A4;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// srawi r27,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r27.s64 = ctx.r11.s32 >> 2;
	// bl 0x82784f18
	ctx.lr = 0x82783998;
	sub_82784F18(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// rlwinm r5,r27,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82784a40
	ctx.lr = 0x827839A4;
	sub_82784A40(ctx, base);
loc_827839A4:
	// stw r26,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r26.u32);
	// addi r3,r28,16
	ctx.r3.s64 = ctx.r28.s64 + 16;
	// stw r26,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r26.u32);
	// stw r26,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r26.u32);
	// bl 0x827a0d58
	ctx.lr = 0x827839B8;
	sub_827A0D58(ctx, base);
	// lwz r30,540(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 540);
	// bl 0x82784f18
	ctx.lr = 0x827839C0;
	sub_82784F18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,48
	ctx.r5.s64 = 48;
	// bl 0x82784a40
	ctx.lr = 0x827839CC;
	sub_82784A40(ctx, base);
loc_827839CC:
	// lwz r3,532(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 532);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827839f0
	if (ctx.cr6.eq) goto loc_827839F0;
	// bl 0x827a13d0
	ctx.lr = 0x827839DC;
	sub_827A13D0(ctx, base);
	// lwz r30,532(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 532);
	// bl 0x82784f18
	ctx.lr = 0x827839E4;
	sub_82784F18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,28
	ctx.r5.s64 = 28;
	// bl 0x82784a40
	ctx.lr = 0x827839F0;
	sub_82784A40(ctx, base);
loc_827839F0:
	// lwz r30,536(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 536);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82783a54
	if (ctx.cr6.eq) goto loc_82783A54;
	// addi r3,r30,132
	ctx.r3.s64 = ctx.r30.s64 + 132;
	// bl 0x82792c90
	ctx.lr = 0x82783A04;
	sub_82792C90(ctx, base);
	// addi r29,r30,132
	ctx.r29.s64 = ctx.r30.s64 + 132;
	// li r28,2
	ctx.r28.s64 = 2;
loc_82783A0C:
	// addi r29,r29,-16
	ctx.r29.s64 = ctx.r29.s64 + -16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82792c90
	ctx.lr = 0x82783A18;
	sub_82792C90(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bge 0x82783a0c
	if (!ctx.cr0.lt) goto loc_82783A0C;
	// addi r3,r30,68
	ctx.r3.s64 = ctx.r30.s64 + 68;
	// bl 0x82792c90
	ctx.lr = 0x82783A28;
	sub_82792C90(ctx, base);
	// addi r3,r30,52
	ctx.r3.s64 = ctx.r30.s64 + 52;
	// bl 0x82792c90
	ctx.lr = 0x82783A30;
	sub_82792C90(ctx, base);
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// bl 0x82792c90
	ctx.lr = 0x82783A38;
	sub_82792C90(ctx, base);
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// bl 0x82792c90
	ctx.lr = 0x82783A40;
	sub_82792C90(ctx, base);
	// lwz r30,536(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 536);
	// bl 0x82784f18
	ctx.lr = 0x82783A48;
	sub_82784F18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,148
	ctx.r5.s64 = 148;
	// bl 0x82784a40
	ctx.lr = 0x82783A54;
	sub_82784A40(ctx, base);
loc_82783A54:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r5,516(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	// lwz r3,520(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// addi r4,r11,6988
	ctx.r4.s64 = ctx.r11.s64 + 6988;
	// bl 0x8278f598
	ctx.lr = 0x82783A68;
	sub_8278F598(ctx, base);
	// lwz r30,516(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82783a84
	if (ctx.cr6.eq) goto loc_82783A84;
	// bl 0x82784f18
	ctx.lr = 0x82783A78;
	sub_82784F18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x82784a40
	ctx.lr = 0x82783A84;
	sub_82784A40(ctx, base);
loc_82783A84:
	// lwz r3,528(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82783ab8
	if (ctx.cr6.eq) goto loc_82783AB8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82783AA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r30,528(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// bl 0x82784f18
	ctx.lr = 0x82783AAC;
	sub_82784F18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,68
	ctx.r5.s64 = 68;
	// bl 0x82784a40
	ctx.lr = 0x82783AB8;
	sub_82784A40(ctx, base);
loc_82783AB8:
	// addi r3,r31,544
	ctx.r3.s64 = ctx.r31.s64 + 544;
	// bl 0x82a2ed58
	ctx.lr = 0x82783AC0;
	sub_82A2ED58(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r11,r11,28560
	ctx.r11.s64 = ctx.r11.s64 + 28560;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82783AD8"))) PPC_WEAK_FUNC(sub_82783AD8);
PPC_FUNC_IMPL(__imp__sub_82783AD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,520(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 520);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82783AE0"))) PPC_WEAK_FUNC(sub_82783AE0);
PPC_FUNC_IMPL(__imp__sub_82783AE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,528(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 528);
	// addi r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 + 20;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82783AF0"))) PPC_WEAK_FUNC(sub_82783AF0);
PPC_FUNC_IMPL(__imp__sub_82783AF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,528(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 528);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82783B00"))) PPC_WEAK_FUNC(sub_82783B00);
PPC_FUNC_IMPL(__imp__sub_82783B00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82783B08;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lis r28,-31963
	ctx.r28.s64 = -2094727168;
	// lwz r9,536(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 536);
	// addi r30,r11,27824
	ctx.r30.s64 = ctx.r11.s64 + 27824;
	// addi r29,r10,28092
	ctx.r29.s64 = ctx.r10.s64 + 28092;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82783b54
	if (!ctx.cr6.eq) goto loc_82783B54;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lwz r10,17176(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 17176);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,28124
	ctx.r3.s64 = ctx.r11.s64 + 28124;
	// li r5,230
	ctx.r5.s64 = 230;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82783B54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82783B54:
	// lbz r11,557(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 557);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82783b80
	if (!ctx.cr0.eq) goto loc_82783B80;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lwz r10,17176(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 17176);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,28152
	ctx.r3.s64 = ctx.r11.s64 + 28152;
	// li r5,231
	ctx.r5.s64 = 231;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82783B80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82783B80:
	// lwz r31,536(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 536);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8278ec70
	ctx.lr = 0x82783B90;
	sub_8278EC70(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r11,18224
	ctx.r5.s64 = ctx.r11.s64 + 18224;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8277cee0
	ctx.lr = 0x82783BA8;
	sub_8277CEE0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8277c140
	ctx.lr = 0x82783BC0;
	sub_8277C140(ctx, base);
	// lbz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82783c08
	if (ctx.cr0.eq) goto loc_82783C08;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82783c00
	if (!ctx.cr6.eq) goto loc_82783C00;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lwz r10,17176(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 17176);
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// lis r8,-32218
	ctx.r8.s64 = -2111438848;
	// addi r6,r11,-24448
	ctx.r6.s64 = ctx.r11.s64 + -24448;
	// addi r4,r9,-24408
	ctx.r4.s64 = ctx.r9.s64 + -24408;
	// addi r3,r8,-24296
	ctx.r3.s64 = ctx.r8.s64 + -24296;
	// li r5,333
	ctx.r5.s64 = 333;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82783C00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82783C00:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// b 0x82783c40
	goto loc_82783C40;
loc_82783C08:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82783c3c
	if (!ctx.cr6.eq) goto loc_82783C3C;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lwz r10,17176(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 17176);
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// lis r8,-32218
	ctx.r8.s64 = -2111438848;
	// addi r6,r11,-24448
	ctx.r6.s64 = ctx.r11.s64 + -24448;
	// addi r4,r9,-24408
	ctx.r4.s64 = ctx.r9.s64 + -24408;
	// addi r3,r8,-24272
	ctx.r3.s64 = ctx.r8.s64 + -24272;
	// li r5,338
	ctx.r5.s64 = 338;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82783C3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82783C3C:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
loc_82783C40:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8277e8e0
	ctx.lr = 0x82783C48;
	sub_8277E8E0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82783C50"))) PPC_WEAK_FUNC(sub_82783C50);
PPC_FUNC_IMPL(__imp__sub_82783C50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82783C58;
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
	// lwz r11,536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 536);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82783ca4
	if (!ctx.cr6.eq) goto loc_82783CA4;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// addi r6,r10,28180
	ctx.r6.s64 = ctx.r10.s64 + 28180;
	// lwz r11,17176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17176);
	// addi r4,r9,27824
	ctx.r4.s64 = ctx.r9.s64 + 27824;
	// addi r3,r8,28212
	ctx.r3.s64 = ctx.r8.s64 + 28212;
	// li r5,246
	ctx.r5.s64 = 246;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82783CA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82783CA4:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r3,536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 536);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x827a4580
	ctx.lr = 0x82783CB8;
	sub_827A4580(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82783CC0"))) PPC_WEAK_FUNC(sub_82783CC0);
PPC_FUNC_IMPL(__imp__sub_82783CC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x82783d10
	if (!ctx.cr6.eq) goto loc_82783D10;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// addi r6,r10,28232
	ctx.r6.s64 = ctx.r10.s64 + 28232;
	// lwz r11,17176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17176);
	// addi r4,r9,27824
	ctx.r4.s64 = ctx.r9.s64 + 27824;
	// addi r3,r8,28264
	ctx.r3.s64 = ctx.r8.s64 + 28264;
	// li r5,260
	ctx.r5.s64 = 260;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82783D10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82783D10:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82783D24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,31
	ctx.r11.s64 = 31;
	// addi r10,r30,264
	ctx.r10.s64 = ctx.r30.s64 + 264;
	// divwu r11,r3,r11
	ctx.r11.u32 = ctx.r3.u32 / ctx.r11.u32;
	// mulli r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 * 31;
	// subf r9,r11,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r8,r9,31
	ctx.r8.s64 = ctx.r9.s64 + 31;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x82783d60
	goto loc_82783D60;
loc_82783D44:
	// cmplwi cr6,r11,30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 30, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// blt cr6,0x82783d54
	if (ctx.cr6.lt) goto loc_82783D54;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82783D54:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82783d84
	if (ctx.cr6.eq) goto loc_82783D84;
	// addi r8,r11,31
	ctx.r8.s64 = ctx.r11.s64 + 31;
loc_82783D60:
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82783d44
	if (!ctx.cr6.eq) goto loc_82783D44;
	// addi r9,r11,31
	ctx.r9.s64 = ctx.r11.s64 + 31;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r3.u32);
	// stwx r31,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r31.u32);
loc_82783D84:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82783DA0"))) PPC_WEAK_FUNC(sub_82783DA0);
PPC_FUNC_IMPL(__imp__sub_82783DA0) {
	PPC_FUNC_PROLOGUE();
	// li r11,31
	ctx.r11.s64 = 31;
	// addi r10,r3,264
	ctx.r10.s64 = ctx.r3.s64 + 264;
	// divwu r11,r4,r11
	ctx.r11.u32 = ctx.r4.u32 / ctx.r11.u32;
	// li r3,0
	ctx.r3.s64 = 0;
	// mulli r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 * 31;
	// subf r8,r11,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r11.s64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// b 0x82783dec
	goto loc_82783DEC;
loc_82783DC4:
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82783dfc
	if (ctx.cr6.eq) goto loc_82783DFC;
	// cmplwi cr6,r9,30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 30, ctx.xer);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// blt cr6,0x82783de0
	if (ctx.cr6.lt) goto loc_82783DE0;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82783DE0:
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
loc_82783DEC:
	// lwzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82783dc4
	if (!ctx.cr6.eq) goto loc_82783DC4;
	// blr 
	return;
loc_82783DFC:
	// addi r11,r9,31
	ctx.r11.s64 = ctx.r9.s64 + 31;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82783E10"))) PPC_WEAK_FUNC(sub_82783E10);
PPC_FUNC_IMPL(__imp__sub_82783E10) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,520(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 520);
	// b 0x8278ec70
	sub_8278EC70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82783E18"))) PPC_WEAK_FUNC(sub_82783E18);
PPC_FUNC_IMPL(__imp__sub_82783E18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r6,260(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	// lwz r3,520(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 520);
	// bl 0x8278f2e0
	ctx.lr = 0x82783E30;
	sub_8278F2E0(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82783E48"))) PPC_WEAK_FUNC(sub_82783E48);
PPC_FUNC_IMPL(__imp__sub_82783E48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r6,260(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	// lwz r3,520(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 520);
	// bl 0x8278f3f8
	ctx.lr = 0x82783E60;
	sub_8278F3F8(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82783E78"))) PPC_WEAK_FUNC(sub_82783E78);
PPC_FUNC_IMPL(__imp__sub_82783E78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82783e9c
	if (ctx.cr6.eq) goto loc_82783E9C;
	// lwz r6,260(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	// lwz r3,520(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 520);
	// bl 0x8278f2e0
	ctx.lr = 0x82783E98;
	sub_8278F2E0(ctx, base);
	// b 0x82783ea8
	goto loc_82783EA8;
loc_82783E9C:
	// lwz r5,260(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	// lwz r3,520(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 520);
	// bl 0x8278f100
	ctx.lr = 0x82783EA8;
	sub_8278F100(ctx, base);
loc_82783EA8:
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82783EC0"))) PPC_WEAK_FUNC(sub_82783EC0);
PPC_FUNC_IMPL(__imp__sub_82783EC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82783ee4
	if (ctx.cr6.eq) goto loc_82783EE4;
	// lwz r6,260(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	// lwz r3,520(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 520);
	// bl 0x8278f3f8
	ctx.lr = 0x82783EE0;
	sub_8278F3F8(ctx, base);
	// b 0x82783ef0
	goto loc_82783EF0;
loc_82783EE4:
	// lwz r5,260(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	// lwz r3,520(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 520);
	// bl 0x8278f210
	ctx.lr = 0x82783EF0;
	sub_8278F210(ctx, base);
loc_82783EF0:
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82783F08"))) PPC_WEAK_FUNC(sub_82783F08);
PPC_FUNC_IMPL(__imp__sub_82783F08) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,528(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 528);
	// b 0x827a6ba0
	sub_827A6BA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82783F10"))) PPC_WEAK_FUNC(sub_82783F10);
PPC_FUNC_IMPL(__imp__sub_82783F10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,520(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 520);
	// bl 0x8278ec70
	ctx.lr = 0x82783F24;
	sub_8278EC70(ctx, base);
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82783f38
	if (ctx.cr6.eq) goto loc_82783F38;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82783f3c
	goto loc_82783F3C;
loc_82783F38:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82783F3C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82783F50"))) PPC_WEAK_FUNC(sub_82783F50);
PPC_FUNC_IMPL(__imp__sub_82783F50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,532(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 532);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82783f9c
	if (!ctx.cr6.eq) goto loc_82783F9C;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// addi r6,r10,28288
	ctx.r6.s64 = ctx.r10.s64 + 28288;
	// lwz r11,17176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17176);
	// addi r4,r9,27824
	ctx.r4.s64 = ctx.r9.s64 + 27824;
	// addi r3,r8,28328
	ctx.r3.s64 = ctx.r8.s64 + 28328;
	// li r5,470
	ctx.r5.s64 = 470;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82783F9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82783F9C:
	// lwz r3,532(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 532);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82783FB8"))) PPC_WEAK_FUNC(sub_82783FB8);
PPC_FUNC_IMPL(__imp__sub_82783FB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 536);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82784004
	if (!ctx.cr6.eq) goto loc_82784004;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// addi r6,r10,28356
	ctx.r6.s64 = ctx.r10.s64 + 28356;
	// lwz r11,17176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17176);
	// addi r4,r9,27824
	ctx.r4.s64 = ctx.r9.s64 + 27824;
	// addi r3,r8,28124
	ctx.r3.s64 = ctx.r8.s64 + 28124;
	// li r5,490
	ctx.r5.s64 = 490;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82784004;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82784004:
	// lwz r3,536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 536);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82784020"))) PPC_WEAK_FUNC(sub_82784020);
PPC_FUNC_IMPL(__imp__sub_82784020) {
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
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,260(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 260);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8278404c
	if (!ctx.cr6.eq) goto loc_8278404C;
	// addi r5,r3,8
	ctx.r5.s64 = ctx.r3.s64 + 8;
	// addi r4,r4,544
	ctx.r4.s64 = ctx.r4.s64 + 544;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82784458
	ctx.lr = 0x8278404C;
	sub_82784458(ctx, base);
loc_8278404C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82784060"))) PPC_WEAK_FUNC(sub_82784060);
PPC_FUNC_IMPL(__imp__sub_82784060) {
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
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,260(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 260);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82784104
	if (!ctx.cr6.eq) goto loc_82784104;
	// addi r4,r4,544
	ctx.r4.s64 = ctx.r4.s64 + 544;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lbz r9,17(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 17);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x827840c0
	if (!ctx.cr6.eq) goto loc_827840C0;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
loc_82784098:
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x827840ac
	if (!ctx.cr6.lt) goto loc_827840AC;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x827840b4
	goto loc_827840B4;
loc_827840AC:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_827840B4:
	// lbz r8,17(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 17);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82784098
	if (ctx.cr6.eq) goto loc_82784098;
loc_827840C0:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x827840ec
	if (ctx.cr6.eq) goto loc_827840EC;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x827840ec
	if (ctx.cr6.lt) goto loc_827840EC;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// b 0x827840f8
	goto loc_827840F8;
loc_827840EC:
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
loc_827840F8:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// bl 0x82a2fb98
	ctx.lr = 0x82784104;
	sub_82A2FB98(ctx, base);
loc_82784104:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82784118"))) PPC_WEAK_FUNC(sub_82784118);
PPC_FUNC_IMPL(__imp__sub_82784118) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82784120;
	__savegprlr_28(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r31,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8249d108
	ctx.lr = 0x82784144;
	sub_8249D108(ctx, base);
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// bne cr6,0x82784168
	if (!ctx.cr6.eq) goto loc_82784168;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82784160;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r11.u32);
loc_82784168:
	// addi r4,r1,260
	ctx.r4.s64 = ctx.r1.s64 + 260;
	// lwz r3,520(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 520);
	// bl 0x8278ec70
	ctx.lr = 0x82784174;
	sub_8278EC70(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r28,r11,11204
	ctx.r28.s64 = ctx.r11.s64 + 11204;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// lwz r11,28(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// lbz r11,36(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 36);
	// stb r11,164(r1)
	PPC_STORE_U8(ctx.r1.u32 + 164, ctx.r11.u8);
	// lwz r11,40(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// lbz r11,44(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 44);
	// stb r11,172(r1)
	PPC_STORE_U8(ctx.r1.u32 + 172, ctx.r11.u8);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// bl 0x8277be40
	ctx.lr = 0x827841F0;
	sub_8277BE40(ctx, base);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x8278423c
	goto loc_8278423C;
loc_827841F8:
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8277cee0
	ctx.lr = 0x8278420C;
	sub_8277CEE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827831d0
	ctx.lr = 0x82784218;
	sub_827831D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8278424c
	if (ctx.cr0.eq) goto loc_8278424C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82784118
	ctx.lr = 0x82784230;
	sub_82784118(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82784270
	if (!ctx.cr6.eq) goto loc_82784270;
	// lwz r31,32(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
loc_8278423C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x827841f8
	if (!ctx.cr6.eq) goto loc_827841F8;
	// li r31,-1
	ctx.r31.s64 = -1;
	// b 0x82784250
	goto loc_82784250;
loc_8278424C:
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_82784250:
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8249d108
	ctx.lr = 0x82784264;
	sub_8249D108(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
loc_82784270:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82784250
	goto loc_82784250;
}

__attribute__((alias("__imp__sub_82784278"))) PPC_WEAK_FUNC(sub_82784278);
PPC_FUNC_IMPL(__imp__sub_82784278) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x82784280;
	__savegprlr_25(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r31.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8249d108
	ctx.lr = 0x827842A8;
	sub_8249D108(ctx, base);
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// bne cr6,0x827842cc
	if (!ctx.cr6.eq) goto loc_827842CC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827842C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r11.u32);
loc_827842CC:
	// addi r4,r1,332
	ctx.r4.s64 = ctx.r1.s64 + 332;
	// lwz r3,520(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 520);
	// bl 0x8278ec70
	ctx.lr = 0x827842D8;
	sub_8278EC70(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r25,r11,11204
	ctx.r25.s64 = ctx.r11.s64 + 11204;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stw r25,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r25.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// lwz r11,28(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// stw r11,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r11.u32);
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// lbz r11,36(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 36);
	// stb r11,196(r1)
	PPC_STORE_U8(ctx.r1.u32 + 196, ctx.r11.u8);
	// lwz r11,40(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
	// lbz r11,44(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 44);
	// stb r11,204(r1)
	PPC_STORE_U8(ctx.r1.u32 + 204, ctx.r11.u8);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r11,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
	// bl 0x8277be40
	ctx.lr = 0x82784354;
	sub_8277BE40(ctx, base);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8278441c
	if (ctx.cr6.eq) goto loc_8278441C;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// addi r28,r11,28396
	ctx.r28.s64 = ctx.r11.s64 + 28396;
	// addi r27,r10,17180
	ctx.r27.s64 = ctx.r10.s64 + 17180;
loc_82784370:
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8277cee0
	ctx.lr = 0x82784384;
	sub_8277CEE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x827831d0
	ctx.lr = 0x82784390;
	sub_827831D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x827843f4
	if (!ctx.cr0.eq) goto loc_827843F4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8249d108
	ctx.lr = 0x827843A8;
	sub_8249D108(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8277b880
	ctx.lr = 0x827843B4;
	sub_8277B880(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8277d030
	ctx.lr = 0x827843D0;
	sub_8277D030(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827831d0
	ctx.lr = 0x827843DC;
	sub_827831D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// beq 0x82784424
	if (ctx.cr0.eq) goto loc_82784424;
	// bl 0x8249d108
	ctx.lr = 0x827843F4;
	sub_8249D108(ctx, base);
loc_827843F4:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82784278
	ctx.lr = 0x82784408;
	sub_82784278(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8278444c
	if (!ctx.cr6.eq) goto loc_8278444C;
	// lwz r31,32(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82784370
	if (!ctx.cr6.eq) goto loc_82784370;
loc_8278441C:
	// li r31,-1
	ctx.r31.s64 = -1;
	// b 0x8278442c
	goto loc_8278442C;
loc_82784424:
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8249d108
	ctx.lr = 0x8278442C;
	sub_8249D108(ctx, base);
loc_8278442C:
	// stw r25,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r25.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8249d108
	ctx.lr = 0x82784440;
	sub_8249D108(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
loc_8278444C:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8278442c
	goto loc_8278442C;
}

__attribute__((alias("__imp__sub_82784458"))) PPC_WEAK_FUNC(sub_82784458);
PPC_FUNC_IMPL(__imp__sub_82784458) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82784460;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r26,1
	ctx.r26.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// lwz r30,4(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lbz r10,17(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 17);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827844c0
	if (!ctx.cr6.eq) goto loc_827844C0;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
loc_82784490:
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// subfc r9,r9,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r9.s64 = ctx.r10.s64 - ctx.r9.s64;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi. r28,r9,31
	ctx.r28.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x827844b0
	if (ctx.cr0.eq) goto loc_827844B0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x827844b4
	goto loc_827844B4;
loc_827844B0:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_827844B4:
	// lbz r9,17(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 17);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82784490
	if (ctx.cr6.eq) goto loc_82784490;
loc_827844C0:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// beq 0x82784518
	if (ctx.cr0.eq) goto loc_82784518;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82784514
	if (!ctx.cr6.eq) goto loc_82784514;
	// li r5,1
	ctx.r5.s64 = 1;
loc_827844E8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// bl 0x82784558
	ctx.lr = 0x827844F8;
	sub_82784558(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r26,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r26.u8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x82784548
	goto loc_82784548;
loc_82784514:
	// bl 0x82a2f400
	ctx.lr = 0x82784518;
	sub_82A2F400(ctx, base);
loc_82784518:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82784538
	if (!ctx.cr6.lt) goto loc_82784538;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// b 0x827844e8
	goto loc_827844E8;
loc_82784538:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r10.u8);
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
loc_82784548:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82784558"))) PPC_WEAK_FUNC(sub_82784558);
PPC_FUNC_IMPL(__imp__sub_82784558) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f4
	ctx.lr = 0x82784560;
	__savegprlr_23(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// ori r11,r11,65534
	ctx.r11.u64 = ctx.r11.u64 | 65534;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x827845d0
	if (ctx.cr6.lt) goto loc_827845D0;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,27308
	ctx.r4.s64 = ctx.r11.s64 + 27308;
	// bl 0x8276fba8
	ctx.lr = 0x8278459C;
	sub_8276FBA8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8277f0b8
	ctx.lr = 0x827845A8;
	sub_8277F0B8(ctx, base);
	// bl 0x82770178
	ctx.lr = 0x827845AC;
	sub_82770178(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,11252
	ctx.r11.s64 = ctx.r11.s64 + 11252;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// bl 0x8276fa98
	ctx.lr = 0x827845C0;
	sub_8276FA98(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8276fb38
	ctx.lr = 0x827845D0;
	sub_8276FB38(ctx, base);
loc_827845D0:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lwz r28,4(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// addi r30,r11,28416
	ctx.r30.s64 = ctx.r11.s64 + 28416;
	// addi r25,r10,26608
	ctx.r25.s64 = ctx.r10.s64 + 26608;
	// addi r23,r9,26712
	ctx.r23.s64 = ctx.r9.s64 + 26712;
	// bl 0x82784f18
	ctx.lr = 0x827845F0;
	sub_82784F18(ctx, base);
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r8,124
	ctx.r8.s64 = 124;
	// bl 0x827848f8
	ctx.lr = 0x82784608;
	sub_827848F8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// li r25,0
	ctx.r25.s64 = 0;
	// beq 0x82784630
	if (ctx.cr0.eq) goto loc_82784630;
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// stw r28,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r28.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// stb r25,16(r30)
	PPC_STORE_U8(ctx.r30.u32 + 16, ctx.r25.u8);
	// stb r25,17(r30)
	PPC_STORE_U8(ctx.r30.u32 + 17, ctx.r25.u8);
loc_82784630:
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// stw r10,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r10.u32);
	// bne cr6,0x8278465c
	if (!ctx.cr6.eq) goto loc_8278465C;
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// b 0x82784694
	goto loc_82784694;
loc_8278465C:
	// clrlwi. r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82784680
	if (ctx.cr0.eq) goto loc_82784680;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82784698
	if (!ctx.cr6.eq) goto loc_82784698;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// b 0x82784698
	goto loc_82784698;
loc_82784680:
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82784698
	if (!ctx.cr6.eq) goto loc_82784698;
loc_82784694:
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
loc_82784698:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// li r28,1
	ctx.r28.s64 = 1;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// b 0x82784788
	goto loc_82784788;
loc_827846AC:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82784710
	if (!ctx.cr6.eq) goto loc_82784710;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lbz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 16);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82784720
	if (ctx.cr6.eq) goto loc_82784720;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x827846e8
	if (!ctx.cr6.eq) goto loc_827846E8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82a2ff98
	ctx.lr = 0x827846E8;
	sub_82A2FF98(ctx, base);
loc_827846E8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r28,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r28.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stb r25,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r25.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82a30000
	ctx.lr = 0x8278470C;
	sub_82A30000(ctx, base);
	// b 0x82784780
	goto loc_82784780;
loc_82784710:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 16);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82784744
	if (!ctx.cr6.eq) goto loc_82784744;
loc_82784720:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r28,16(r9)
	PPC_STORE_U8(ctx.r9.u32 + 16, ctx.r28.u8);
	// stb r28,16(r10)
	PPC_STORE_U8(ctx.r10.u32 + 16, ctx.r28.u8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stb r25,16(r10)
	PPC_STORE_U8(ctx.r10.u32 + 16, ctx.r25.u8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82784780
	goto loc_82784780;
loc_82784744:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8278475c
	if (!ctx.cr6.eq) goto loc_8278475C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82a30000
	ctx.lr = 0x8278475C;
	sub_82A30000(ctx, base);
loc_8278475C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r28,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r28.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stb r25,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r25.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82a2ff98
	ctx.lr = 0x82784780;
	sub_82A2FF98(ctx, base);
loc_82784780:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
loc_82784788:
	// lbz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827846ac
	if (ctx.cr6.eq) goto loc_827846AC;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r30,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r30.u32);
	// stw r29,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r29.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stb r28,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r28.u8);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82a4ea44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827847B8"))) PPC_WEAK_FUNC(sub_827847B8);
PPC_FUNC_IMPL(__imp__sub_827847B8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x8312e74c
	sub_8312E74C(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827847C0"))) PPC_WEAK_FUNC(sub_827847C0);
PPC_FUNC_IMPL(__imp__sub_827847C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,29072
	ctx.r11.s64 = ctx.r11.s64 + 29072;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x827847ec
	if (ctx.cr0.eq) goto loc_827847EC;
	// bl 0x82332db8
	ctx.lr = 0x827847EC;
	sub_82332DB8(ctx, base);
loc_827847EC:
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

__attribute__((alias("__imp__sub_82784808"))) PPC_WEAK_FUNC(sub_82784808);
PPC_FUNC_IMPL(__imp__sub_82784808) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f0
	ctx.lr = 0x82784810;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r29,r11,21288
	ctx.r29.s64 = ctx.r11.s64 + 21288;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r22,-31963
	ctx.r22.s64 = -2094727168;
	// addi r24,r11,28688
	ctx.r24.s64 = ctx.r11.s64 + 28688;
	// addi r23,r10,28648
	ctx.r23.s64 = ctx.r10.s64 + 28648;
	// lwz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8278485c
	if (ctx.cr6.eq) goto loc_8278485C;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lwz r10,17176(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 17176);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r11,28800
	ctx.r3.s64 = ctx.r11.s64 + 28800;
	// li r5,114
	ctx.r5.s64 = 114;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8278485C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8278485C:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r26,r11,29084
	ctx.r26.s64 = ctx.r11.s64 + 29084;
	// addi r5,r10,21020
	ctx.r5.s64 = ctx.r10.s64 + 21020;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82a50ca8
	ctx.lr = 0x8278487C;
	sub_82A50CA8(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r29,32
	ctx.r30.s64 = ctx.r29.s64 + 32;
	// addi r28,r10,6948
	ctx.r28.s64 = ctx.r10.s64 + 6948;
	// addi r25,r11,28840
	ctx.r25.s64 = ctx.r11.s64 + 28840;
loc_82784894:
	// addi r27,r28,-36
	ctx.r27.s64 = ctx.r28.s64 + -36;
	// lwzx r11,r31,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x827848c8
	if (ctx.cr6.lt) goto loc_827848C8;
	// clrlwi. r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827848c8
	if (ctx.cr0.eq) goto loc_827848C8;
	// lwz r11,17176(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 17176);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r5,122
	ctx.r5.s64 = 122;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827848C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827848C8:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwzx r5,r31,r27
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r6,r31,r28
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// bl 0x827a6e68
	ctx.lr = 0x827848DC;
	sub_827A6E68(ctx, base);
	// addi r30,r30,88
	ctx.r30.s64 = ctx.r30.s64 + 88;
	// addi r11,r29,824
	ctx.r11.s64 = ctx.r29.s64 + 824;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82784894
	if (ctx.cr6.lt) goto loc_82784894;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827848F8"))) PPC_WEAK_FUNC(sub_827848F8);
PPC_FUNC_IMPL(__imp__sub_827848F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82784900;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r27,r11,-18260
	ctx.r27.s64 = ctx.r11.s64 + -18260;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,-18260(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18260);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82784928;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r29,32
	ctx.r11.s64 = ctx.r29.s64 + 32;
loc_82784930:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x827849a8
	if (!ctx.cr6.gt) goto loc_827849A8;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 + 88;
	// cmpwi cr6,r30,9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 9, ctx.xer);
	// blt cr6,0x82784930
	if (ctx.cr6.lt) goto loc_82784930;
loc_8278494C:
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r11,30728
	ctx.r3.s64 = ctx.r11.s64 + 30728;
	// bl 0x827a7790
	ctx.lr = 0x8278495C;
	sub_827A7790(ctx, base);
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lwz r3,13016(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13016);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82784974
	if (!ctx.cr6.eq) goto loc_82784974;
	// bl 0x828223f0
	ctx.lr = 0x82784970;
	sub_828223F0(ctx, base);
	// lwz r3,13016(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13016);
loc_82784974:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8278498C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 9, ctx.xer);
	// bge cr6,0x82784a14
	if (!ctx.cr6.lt) goto loc_82784A14;
	// rlwinm r11,r30,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 7) & 0xFFFFFF80;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r3,r11,888
	ctx.r3.s64 = ctx.r11.s64 + 888;
	// b 0x82784a18
	goto loc_82784A18;
loc_827849A8:
	// mulli r11,r30,88
	ctx.r11.s64 = ctx.r30.s64 * 88;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// lwz r31,20(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827849d0
	if (ctx.cr6.eq) goto loc_827849D0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// b 0x827849f4
	goto loc_827849F4;
loc_827849D0:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r31,16(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x827849e8
	if (ctx.cr6.lt) goto loc_827849E8;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x827849fc
	goto loc_827849FC;
loc_827849E8:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r10,r31,r4
	ctx.r10.u64 = ctx.r31.u64 + ctx.r4.u64;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
loc_827849F4:
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x827a7790
	ctx.lr = 0x827849FC;
	sub_827A7790(ctx, base);
loc_827849FC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8278494c
	if (ctx.cr6.eq) goto loc_8278494C;
	// rlwinm r11,r30,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 7) & 0xFFFFFF80;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r3,r11,824
	ctx.r3.s64 = ctx.r11.s64 + 824;
	// b 0x82784a18
	goto loc_82784A18;
loc_82784A14:
	// addi r3,r29,1976
	ctx.r3.s64 = ctx.r29.s64 + 1976;
loc_82784A18:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x827a7790
	ctx.lr = 0x82784A20;
	sub_827A7790(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82784A34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82784A40"))) PPC_WEAK_FUNC(sub_82784A40);
PPC_FUNC_IMPL(__imp__sub_82784A40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82784A48;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r26,r11,-18260
	ctx.r26.s64 = ctx.r11.s64 + -18260;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r11,-18260(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18260);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82784A74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r11,r29,44
	ctx.r11.s64 = ctx.r29.s64 + 44;
loc_82784A7C:
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82784a98
	if (!ctx.cr6.lt) goto loc_82784A98;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// bge cr6,0x82784a9c
	if (!ctx.cr6.lt) goto loc_82784A9C;
loc_82784A98:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82784A9C:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82784ab8
	if (!ctx.cr0.eq) goto loc_82784AB8;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 + 88;
	// cmpwi cr6,r28,9
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 9, ctx.xer);
	// blt cr6,0x82784a7c
	if (ctx.cr6.lt) goto loc_82784A7C;
	// li r28,9
	ctx.r28.s64 = 9;
loc_82784AB8:
	// cmpwi cr6,r28,9
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 9, ctx.xer);
	// bge cr6,0x82784b48
	if (!ctx.cr6.lt) goto loc_82784B48;
	// mulli r11,r28,88
	ctx.r11.s64 = ctx.r28.s64 * 88;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r31,r11,32
	ctx.r31.s64 = ctx.r11.s64 + 32;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82784ae8
	if (!ctx.cr6.lt) goto loc_82784AE8;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bge cr6,0x82784aec
	if (!ctx.cr6.lt) goto loc_82784AEC;
loc_82784AE8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82784AEC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82784b20
	if (!ctx.cr0.eq) goto loc_82784B20;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// lis r8,-32218
	ctx.r8.s64 = -2111438848;
	// addi r6,r10,-23988
	ctx.r6.s64 = ctx.r10.s64 + -23988;
	// lwz r11,17176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17176);
	// addi r4,r9,-24160
	ctx.r4.s64 = ctx.r9.s64 + -24160;
	// addi r3,r8,-23960
	ctx.r3.s64 = ctx.r8.s64 + -23960;
	// li r5,133
	ctx.r5.s64 = 133;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82784B20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82784B20:
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x827a77f8
	ctx.lr = 0x82784B2C;
	sub_827A77F8(ctx, base);
	// rlwinm r11,r28,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 7) & 0xFFFFFF80;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r3,r11,824
	ctx.r3.s64 = ctx.r11.s64 + 824;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// b 0x82784bb0
	goto loc_82784BB0;
loc_82784B48:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82784b68
	if (ctx.cr6.eq) goto loc_82784B68;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r11,30728
	ctx.r3.s64 = ctx.r11.s64 + 30728;
	// bl 0x827a77f8
	ctx.lr = 0x82784B60;
	sub_827A77F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332db8
	ctx.lr = 0x82784B68;
	sub_82332DB8(ctx, base);
loc_82784B68:
	// lwz r11,736(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 736);
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82784b7c
	if (!ctx.cr6.gt) goto loc_82784B7C;
	// addi r3,r29,1976
	ctx.r3.s64 = ctx.r29.s64 + 1976;
	// b 0x82784bb0
	goto loc_82784BB0;
loc_82784B7C:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r29,32
	ctx.r10.s64 = ctx.r29.s64 + 32;
loc_82784B84:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r27,r9
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x82784ba4
	if (!ctx.cr6.gt) goto loc_82784BA4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// blt cr6,0x82784b84
	if (ctx.cr6.lt) goto loc_82784B84;
	// b 0x82784bb8
	goto loc_82784BB8;
loc_82784BA4:
	// rlwinm r11,r11,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r3,r11,888
	ctx.r3.s64 = ctx.r11.s64 + 888;
loc_82784BB0:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x827a77f8
	ctx.lr = 0x82784BB8;
	sub_827A77F8(ctx, base);
loc_82784BB8:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82784BCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82784BD8"))) PPC_WEAK_FUNC(sub_82784BD8);
PPC_FUNC_IMPL(__imp__sub_82784BD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82784BE0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r26,r11,-18260
	ctx.r26.s64 = ctx.r11.s64 + -18260;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// stw r28,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r28.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-18260(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18260);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r29,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r29.u32);
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82784C1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82784c6c
	if (!ctx.cr6.eq) goto loc_82784C6C;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r6,r11,25848
	ctx.r6.s64 = ctx.r11.s64 + 25848;
	// addi r5,r10,26304
	ctx.r5.s64 = ctx.r10.s64 + 26304;
	// li r8,93
	ctx.r8.s64 = 93;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x827848f8
	ctx.lr = 0x82784C48;
	sub_827848F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82784C4C:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82784C60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
loc_82784C6C:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82784c88
	if (!ctx.cr6.eq) goto loc_82784C88;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82784a40
	ctx.lr = 0x82784C80;
	sub_82784A40(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x82784c4c
	goto loc_82784C4C;
loc_82784C88:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r6,r11,25848
	ctx.r6.s64 = ctx.r11.s64 + 25848;
	// addi r5,r10,26304
	ctx.r5.s64 = ctx.r10.s64 + 26304;
	// li r8,93
	ctx.r8.s64 = 93;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x827848f8
	ctx.lr = 0x82784CA8;
	sub_827848F8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpw cr6,r28,r29
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r29.s32, ctx.xer);
	// addi r11,r1,180
	ctx.r11.s64 = ctx.r1.s64 + 180;
	// blt cr6,0x82784cbc
	if (ctx.cr6.lt) goto loc_82784CBC;
	// addi r11,r1,188
	ctx.r11.s64 = ctx.r1.s64 + 188;
loc_82784CBC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a45878
	ctx.lr = 0x82784CCC;
	sub_82A45878(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82784a40
	ctx.lr = 0x82784CDC;
	sub_82784A40(ctx, base);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// b 0x82784c4c
	goto loc_82784C4C;
}

__attribute__((alias("__imp__sub_82784CE8"))) PPC_WEAK_FUNC(sub_82784CE8);
PPC_FUNC_IMPL(__imp__sub_82784CE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// cmpwi cr6,r31,9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 9, ctx.xer);
	// bge cr6,0x82784d14
	if (!ctx.cr6.lt) goto loc_82784D14;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge cr6,0x82784d40
	if (!ctx.cr6.lt) goto loc_82784D40;
loc_82784D14:
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// addi r6,r10,28952
	ctx.r6.s64 = ctx.r10.s64 + 28952;
	// lwz r11,17176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17176);
	// addi r4,r9,28688
	ctx.r4.s64 = ctx.r9.s64 + 28688;
	// addi r3,r8,28988
	ctx.r3.s64 = ctx.r8.s64 + 28988;
	// li r5,354
	ctx.r5.s64 = 354;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82784D40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82784D40:
	// mulli r11,r31,88
	ctx.r11.s64 = ctx.r31.s64 * 88;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82784D68"))) PPC_WEAK_FUNC(sub_82784D68);
PPC_FUNC_IMPL(__imp__sub_82784D68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// cmpwi cr6,r31,9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 9, ctx.xer);
	// bge cr6,0x82784d94
	if (!ctx.cr6.lt) goto loc_82784D94;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge cr6,0x82784dc0
	if (!ctx.cr6.lt) goto loc_82784DC0;
loc_82784D94:
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// addi r6,r10,29032
	ctx.r6.s64 = ctx.r10.s64 + 29032;
	// lwz r11,17176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17176);
	// addi r4,r9,28688
	ctx.r4.s64 = ctx.r9.s64 + 28688;
	// addi r3,r8,28988
	ctx.r3.s64 = ctx.r8.s64 + 28988;
	// li r5,366
	ctx.r5.s64 = 366;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82784DC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82784DC0:
	// rlwinm r11,r31,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 7) & 0xFFFFFF80;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,824
	ctx.r3.s64 = ctx.r11.s64 + 824;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82784DE8"))) PPC_WEAK_FUNC(sub_82784DE8);
PPC_FUNC_IMPL(__imp__sub_82784DE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82784DF0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x827a7730
	ctx.lr = 0x82784DF8;
	sub_827A7730(ctx, base);
	// addi r11,r4,76
	ctx.r11.s64 = ctx.r4.s64 + 76;
	// li r10,9
	ctx.r10.s64 = 9;
loc_82784E00:
	// lwz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r5,20(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r6,24(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r7,28(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r8,48(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// stw r9,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r9.u32);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r26,52(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// stw r9,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r9.u32);
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// add r9,r9,r26
	ctx.r9.u64 = ctx.r9.u64 + ctx.r26.u64;
	// lwz r27,56(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// stw r9,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r9.u32);
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// add r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 + ctx.r27.u64;
	// lwz r28,60(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// stw r9,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r9.u32);
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// add r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 + ctx.r28.u64;
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r9,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r9.u32);
	// lwz r9,-20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20);
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + ctx.r29.u64;
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r9,-16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// lwz r31,8(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lwz r9,-12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// lwz r4,12(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// lwz r9,-8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lwz r5,32(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// lwz r6,36(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// stw r9,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r9.u32);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// lwz r7,40(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// stw r9,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r9.u32);
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r8,44(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// stw r9,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r9.u32);
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 + 88;
	// stw r9,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r9.u32);
	// bne 0x82784e00
	if (!ctx.cr0.eq) goto loc_82784E00;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82784F18"))) PPC_WEAK_FUNC(sub_82784F18);
PPC_FUNC_IMPL(__imp__sub_82784F18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,21288
	ctx.r31.s64 = ctx.r11.s64 + 21288;
	// lwz r11,-18844(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -18844);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82784fa4
	if (!ctx.cr0.eq) goto loc_82784FA4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r11,-18844(r10)
	PPC_STORE_U32(ctx.r10.u32 + -18844, ctx.r11.u32);
	// addi r6,r31,32
	ctx.r6.s64 = ctx.r31.s64 + 32;
loc_82784F50:
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x827a6d98
	ctx.lr = 0x82784F58;
	sub_827A6D98(ctx, base);
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r6,r6,88
	ctx.r6.s64 = ctx.r6.s64 + 88;
	// bge 0x82784f50
	if (!ctx.cr0.lt) goto loc_82784F50;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r8,r31,824
	ctx.r8.s64 = ctx.r31.s64 + 824;
loc_82784F6C:
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x827a7730
	ctx.lr = 0x82784F74;
	sub_827A7730(ctx, base);
	// addi r3,r8,64
	ctx.r3.s64 = ctx.r8.s64 + 64;
	// bl 0x827a7730
	ctx.lr = 0x82784F7C;
	sub_827A7730(ctx, base);
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// bge 0x82784f6c
	if (!ctx.cr0.lt) goto loc_82784F6C;
	// addi r3,r31,1976
	ctx.r3.s64 = ctx.r31.s64 + 1976;
	// bl 0x827a7730
	ctx.lr = 0x82784F90;
	sub_827A7730(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a7000
	ctx.lr = 0x82784F98;
	sub_827A7000(ctx, base);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// addi r3,r11,-27648
	ctx.r3.s64 = ctx.r11.s64 + -27648;
	// bl 0x82a4c758
	ctx.lr = 0x82784FA4;
	sub_82A4C758(ctx, base);
loc_82784FA4:
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lbz r11,14092(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 14092);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82784fd8
	if (!ctx.cr0.eq) goto loc_82784FD8;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// stb r11,14092(r10)
	PPC_STORE_U8(ctx.r10.u32 + 14092, ctx.r11.u8);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r5,r9,6912
	ctx.r5.s64 = ctx.r9.s64 + 6912;
	// addi r4,r11,29084
	ctx.r4.s64 = ctx.r11.s64 + 29084;
	// addi r6,r5,36
	ctx.r6.s64 = ctx.r5.s64 + 36;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82784808
	ctx.lr = 0x82784FD8;
	sub_82784808(ctx, base);
loc_82784FD8:
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

__attribute__((alias("__imp__sub_82784FF0"))) PPC_WEAK_FUNC(sub_82784FF0);
PPC_FUNC_IMPL(__imp__sub_82784FF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82784FF8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82785044
	if (ctx.cr6.eq) goto loc_82785044;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// addi r6,r10,29100
	ctx.r6.s64 = ctx.r10.s64 + 29100;
	// lwz r11,17176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17176);
	// addi r4,r9,29120
	ctx.r4.s64 = ctx.r9.s64 + 29120;
	// addi r3,r8,29224
	ctx.r3.s64 = ctx.r8.s64 + 29224;
	// li r5,78
	ctx.r5.s64 = 78;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82785044;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82785044:
	// bl 0x82784f18
	ctx.lr = 0x82785048;
	sub_82784F18(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// bl 0x827848f8
	ctx.lr = 0x82785060;
	sub_827848F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82785068"))) PPC_WEAK_FUNC(sub_82785068);
PPC_FUNC_IMPL(__imp__sub_82785068) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82785070;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// addi r31,r3,16
	ctx.r31.s64 = ctx.r3.s64 + 16;
	// bl 0x82784f18
	ctx.lr = 0x8278508C;
	sub_82784F18(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// bl 0x827848f8
	ctx.lr = 0x827850A4;
	sub_827848F8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,4919
	ctx.r10.s64 = 322371584;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// ori r10,r10,61904
	ctx.r10.u64 = ctx.r10.u64 | 61904;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827850C8"))) PPC_WEAK_FUNC(sub_827850C8);
PPC_FUNC_IMPL(__imp__sub_827850C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r5,r11,29260
	ctx.r5.s64 = ctx.r11.s64 + 29260;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a50ca8
	ctx.lr = 0x827850F8;
	sub_82A50CA8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a51148
	ctx.lr = 0x82785100;
	sub_82A51148(ctx, base);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82785110"))) PPC_WEAK_FUNC(sub_82785110);
PPC_FUNC_IMPL(__imp__sub_82785110) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82785118;
	__savegprlr_27(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r31,0(r5)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x8278529c
	if (!ctx.cr6.lt) goto loc_8278529C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r28,r11,6904
	ctx.r28.s64 = ctx.r11.s64 + 6904;
loc_8278513C:
	// lhz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// cmplwi cr6,r10,55296
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 55296, ctx.xer);
	// blt cr6,0x8278518c
	if (ctx.cr6.lt) goto loc_8278518C;
	// cmplwi cr6,r10,56319
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 56319, ctx.xer);
	// bgt cr6,0x8278518c
	if (ctx.cr6.gt) goto loc_8278518C;
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x82785280
	if (!ctx.cr6.lt) goto loc_82785280;
	// lhz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// cmplwi cr6,r11,56320
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 56320, ctx.xer);
	// blt cr6,0x82785274
	if (ctx.cr6.lt) goto loc_82785274;
	// cmplwi cr6,r11,57343
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 57343, ctx.xer);
	// bgt cr6,0x82785274
	if (ctx.cr6.gt) goto loc_82785274;
	// addis r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -65536;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// addi r10,r10,10249
	ctx.r10.s64 = ctx.r10.s64 + 10249;
	// rlwinm r10,r10,10,0,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0xFFFFFC00;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8278519c
	goto loc_8278519C;
loc_8278518C:
	// cmplwi cr6,r10,56320
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 56320, ctx.xer);
	// blt cr6,0x8278519c
	if (ctx.cr6.lt) goto loc_8278519C;
	// cmplwi cr6,r10,57343
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 57343, ctx.xer);
	// ble cr6,0x82785274
	if (!ctx.cr6.gt) goto loc_82785274;
loc_8278519C:
	// cmplwi cr6,r10,128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 128, ctx.xer);
	// bge cr6,0x827851ac
	if (!ctx.cr6.lt) goto loc_827851AC;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// b 0x827851e8
	goto loc_827851E8;
loc_827851AC:
	// cmplwi cr6,r10,2048
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2048, ctx.xer);
	// bge cr6,0x827851bc
	if (!ctx.cr6.lt) goto loc_827851BC;
	// li r8,2
	ctx.r8.s64 = 2;
	// b 0x827851e8
	goto loc_827851E8;
loc_827851BC:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x827851e4
	if (ctx.cr6.lt) goto loc_827851E4;
	// lis r11,17
	ctx.r11.s64 = 1114112;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x827851dc
	if (!ctx.cr6.lt) goto loc_827851DC;
	// li r8,4
	ctx.r8.s64 = 4;
	// b 0x827851e8
	goto loc_827851E8;
loc_827851DC:
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r10,r10,65533
	ctx.r10.u64 = ctx.r10.u64 | 65533;
loc_827851E4:
	// li r8,3
	ctx.r8.s64 = 3;
loc_827851E8:
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// add r11,r7,r31
	ctx.r11.u64 = ctx.r7.u64 + ctx.r31.u64;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bgt cr6,0x8278528c
	if (ctx.cr6.gt) goto loc_8278528C;
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// beq cr6,0x82785254
	if (ctx.cr6.eq) goto loc_82785254;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// beq cr6,0x82785240
	if (ctx.cr6.eq) goto loc_82785240;
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// beq cr6,0x8278522c
	if (ctx.cr6.eq) goto loc_8278522C;
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// bne cr6,0x82785264
	if (!ctx.cr6.eq) goto loc_82785264;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwimi r8,r29,7,0,25
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r29.u32, 7) & 0xFFFFFFC0) | (ctx.r8.u64 & 0xFFFFFFFF0000003F);
	// rlwinm r10,r10,26,6,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x3FFFFFF;
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
loc_8278522C:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwimi r8,r29,7,0,25
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r29.u32, 7) & 0xFFFFFFC0) | (ctx.r8.u64 & 0xFFFFFFFF0000003F);
	// rlwinm r10,r10,26,6,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x3FFFFFF;
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
loc_82785240:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwimi r8,r29,7,0,25
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r29.u32, 7) & 0xFFFFFFC0) | (ctx.r8.u64 & 0xFFFFFFFF0000003F);
	// rlwinm r10,r10,26,6,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x3FFFFFF;
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
loc_82785254:
	// lbzx r8,r7,r28
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r28.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
loc_82785264:
	// add r31,r7,r11
	ctx.r31.u64 = ctx.r7.u64 + ctx.r11.u64;
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x8278513c
	if (ctx.cr6.lt) goto loc_8278513C;
	// b 0x8278529c
	goto loc_8278529C;
loc_82785274:
	// addi r9,r9,-2
	ctx.r9.s64 = ctx.r9.s64 + -2;
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8278529c
	goto loc_8278529C;
loc_82785280:
	// addi r9,r9,-2
	ctx.r9.s64 = ctx.r9.s64 + -2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x8278529c
	goto loc_8278529C;
loc_8278528C:
	// clrlwi r10,r8,16
	ctx.r10.u64 = ctx.r8.u32 & 0xFFFF;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// subf r31,r10,r11
	ctx.r31.s64 = ctx.r11.s64 - ctx.r10.s64;
	// li r3,2
	ctx.r3.s64 = 2;
loc_8278529C:
	// stw r9,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r9.u32);
	// stw r31,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r31.u32);
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827852A8"))) PPC_WEAK_FUNC(sub_827852A8);
PPC_FUNC_IMPL(__imp__sub_827852A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x82785360
	if (ctx.cr6.eq) goto loc_82785360;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x82785304
	if (ctx.cr6.eq) goto loc_82785304;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x827852ec
	if (ctx.cr6.eq) goto loc_827852EC;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// beq cr6,0x827852d4
	if (ctx.cr6.eq) goto loc_827852D4;
loc_827852CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_827852D4:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 128, ctx.xer);
	// blt cr6,0x827852cc
	if (ctx.cr6.lt) goto loc_827852CC;
	// cmplwi cr6,r10,191
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 191, ctx.xer);
	// bgt cr6,0x827852cc
	if (ctx.cr6.gt) goto loc_827852CC;
loc_827852EC:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 128, ctx.xer);
	// blt cr6,0x827852cc
	if (ctx.cr6.lt) goto loc_827852CC;
	// cmplwi cr6,r10,191
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 191, ctx.xer);
	// bgt cr6,0x827852cc
	if (ctx.cr6.gt) goto loc_827852CC;
loc_82785304:
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// cmplwi cr6,r10,191
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 191, ctx.xer);
	// bgt cr6,0x827852cc
	if (ctx.cr6.gt) goto loc_827852CC;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,224
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 224, ctx.xer);
	// beq cr6,0x82785358
	if (ctx.cr6.eq) goto loc_82785358;
	// cmpwi cr6,r11,237
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 237, ctx.xer);
	// beq cr6,0x8278534c
	if (ctx.cr6.eq) goto loc_8278534C;
	// cmpwi cr6,r11,240
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 240, ctx.xer);
	// beq cr6,0x82785344
	if (ctx.cr6.eq) goto loc_82785344;
	// cmpwi cr6,r11,244
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 244, ctx.xer);
	// beq cr6,0x8278533c
	if (ctx.cr6.eq) goto loc_8278533C;
	// cmplwi cr6,r10,128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 128, ctx.xer);
	// b 0x8278535c
	goto loc_8278535C;
loc_8278533C:
	// cmplwi cr6,r10,143
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 143, ctx.xer);
	// b 0x82785350
	goto loc_82785350;
loc_82785344:
	// cmplwi cr6,r10,144
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 144, ctx.xer);
	// b 0x8278535c
	goto loc_8278535C;
loc_8278534C:
	// cmplwi cr6,r10,159
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 159, ctx.xer);
loc_82785350:
	// ble cr6,0x82785360
	if (!ctx.cr6.gt) goto loc_82785360;
	// b 0x827852cc
	goto loc_827852CC;
loc_82785358:
	// cmplwi cr6,r10,160
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 160, ctx.xer);
loc_8278535C:
	// blt cr6,0x827852cc
	if (ctx.cr6.lt) goto loc_827852CC;
loc_82785360:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// blt cr6,0x82785374
	if (ctx.cr6.lt) goto loc_82785374;
	// cmplwi cr6,r11,194
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 194, ctx.xer);
	// blt cr6,0x827852cc
	if (ctx.cr6.lt) goto loc_827852CC;
loc_82785374:
	// subfic r11,r11,244
	ctx.xer.ca = ctx.r11.u32 <= 244;
	ctx.r11.s64 = 244 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82785388"))) PPC_WEAK_FUNC(sub_82785388);
PPC_FUNC_IMPL(__imp__sub_82785388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x82785390;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r30,0(r5)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplw cr6,r9,r29
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x82785534
	if (!ctx.cr6.lt) goto loc_82785534;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r27,r30,2
	ctx.r27.s64 = ctx.r30.s64 + 2;
	// addi r28,r11,6880
	ctx.r28.s64 = ctx.r11.s64 + 6880;
loc_827853BC:
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// addi r11,r28,-256
	ctx.r11.s64 = ctx.r28.s64 + -256;
	// li r8,0
	ctx.r8.s64 = 0;
	// lbzx r11,r7,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// clrlwi r31,r11,16
	ctx.r31.u64 = ctx.r11.u32 & 0xFFFF;
	// add r11,r31,r9
	ctx.r11.u64 = ctx.r31.u64 + ctx.r9.u64;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x82785500
	if (!ctx.cr6.lt) goto loc_82785500;
	// addi r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 1;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x827852a8
	ctx.lr = 0x827853EC;
	sub_827852A8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8278551c
	if (ctx.cr0.eq) goto loc_8278551C;
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// blt cr6,0x82785460
	if (ctx.cr6.lt) goto loc_82785460;
	// beq cr6,0x82785450
	if (ctx.cr6.eq) goto loc_82785450;
	// cmplwi cr6,r31,3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 3, ctx.xer);
	// blt cr6,0x82785440
	if (ctx.cr6.lt) goto loc_82785440;
	// beq cr6,0x82785430
	if (ctx.cr6.eq) goto loc_82785430;
	// cmplwi cr6,r31,5
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 5, ctx.xer);
	// blt cr6,0x82785420
	if (ctx.cr6.lt) goto loc_82785420;
	// bne cr6,0x8278546c
	if (!ctx.cr6.eq) goto loc_8278546C;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r8,r7,6,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 6) & 0xFFFFFFC0;
loc_82785420:
	// lbz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r8,r11,6,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
loc_82785430:
	// lbz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r8,r11,6,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
loc_82785440:
	// lbz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r8,r11,6,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
loc_82785450:
	// lbz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r8,r11,6,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
loc_82785460:
	// lbz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
loc_8278546C:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r30,r6
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r6.u32, ctx.xer);
	// lwzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// subf r11,r11,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r11.s64;
	// bge cr6,0x82785524
	if (!ctx.cr6.lt) goto loc_82785524;
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bgt cr6,0x827854a8
	if (ctx.cr6.gt) goto loc_827854A8;
	// cmplwi cr6,r11,55296
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 55296, ctx.xer);
	// blt cr6,0x82785498
	if (ctx.cr6.lt) goto loc_82785498;
	// cmplwi cr6,r11,57343
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 57343, ctx.xer);
	// ble cr6,0x82785508
	if (!ctx.cr6.gt) goto loc_82785508;
loc_82785498:
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// addi r27,r27,2
	ctx.r27.s64 = ctx.r27.s64 + 2;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// b 0x827854f4
	goto loc_827854F4;
loc_827854A8:
	// lis r10,16
	ctx.r10.s64 = 1048576;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82785510
	if (ctx.cr6.gt) goto loc_82785510;
	// cmplw cr6,r27,r6
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x82785524
	if (!ctx.cr6.lt) goto loc_82785524;
	// addis r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -65536;
	// addi r11,r30,2
	ctx.r11.s64 = ctx.r30.s64 + 2;
	// rlwinm r8,r10,22,10,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x3FFFFF;
	// clrlwi r10,r10,22
	ctx.r10.u64 = ctx.r10.u32 & 0x3FF;
	// addis r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 65536;
	// addis r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 65536;
	// addi r8,r8,-10240
	ctx.r8.s64 = ctx.r8.s64 + -10240;
	// addi r7,r7,-9216
	ctx.r7.s64 = ctx.r7.s64 + -9216;
	// addi r10,r27,2
	ctx.r10.s64 = ctx.r27.s64 + 2;
	// sth r8,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r8.u16);
	// sth r7,2(r30)
	PPC_STORE_U16(ctx.r30.u32 + 2, ctx.r7.u16);
	// addi r30,r11,2
	ctx.r30.s64 = ctx.r11.s64 + 2;
	// addi r27,r10,2
	ctx.r27.s64 = ctx.r10.s64 + 2;
loc_827854F4:
	// cmplw cr6,r9,r29
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x827853bc
	if (ctx.cr6.lt) goto loc_827853BC;
	// b 0x82785534
	goto loc_82785534;
loc_82785500:
	// li r26,1
	ctx.r26.s64 = 1;
	// b 0x82785534
	goto loc_82785534;
loc_82785508:
	// li r26,3
	ctx.r26.s64 = 3;
	// b 0x82785528
	goto loc_82785528;
loc_82785510:
	// clrlwi r11,r31,16
	ctx.r11.u64 = ctx.r31.u32 & 0xFFFF;
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
loc_8278551C:
	// li r26,3
	ctx.r26.s64 = 3;
	// b 0x82785534
	goto loc_82785534;
loc_82785524:
	// li r26,2
	ctx.r26.s64 = 2;
loc_82785528:
	// clrlwi r11,r31,16
	ctx.r11.u64 = ctx.r31.u32 & 0xFFFF;
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
loc_82785534:
	// stw r9,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r9.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r30,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r30.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82785548"))) PPC_WEAK_FUNC(sub_82785548);
PPC_FUNC_IMPL(__imp__sub_82785548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x82785550;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82785584
	if (ctx.cr6.eq) goto loc_82785584;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r5,r30
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x82785584
	if (ctx.cr6.eq) goto loc_82785584;
	// bl 0x82785600
	ctx.lr = 0x8278557C;
	sub_82785600(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82785584:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827855d0
	if (!ctx.cr6.eq) goto loc_827855D0;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// addi r28,r11,29288
	ctx.r28.s64 = ctx.r11.s64 + 29288;
	// addi r27,r10,29328
	ctx.r27.s64 = ctx.r10.s64 + 29328;
	// addi r26,r9,29440
	ctx.r26.s64 = ctx.r9.s64 + 29440;
	// addi r25,r30,4
	ctx.r25.s64 = ctx.r30.s64 + 4;
	// bl 0x82784f18
	ctx.lr = 0x827855B0;
	sub_82784F18(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r8,103
	ctx.r8.s64 = 103;
	// bl 0x827848f8
	ctx.lr = 0x827855C8;
	sub_827848F8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
loc_827855D0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x827855ec
	if (ctx.cr6.eq) goto loc_827855EC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82a45878
	ctx.lr = 0x827855EC;
	sub_82A45878(ctx, base);
loc_827855EC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82785600"))) PPC_WEAK_FUNC(sub_82785600);
PPC_FUNC_IMPL(__imp__sub_82785600) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82785660
	if (ctx.cr6.eq) goto loc_82785660;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// beq cr6,0x82785660
	if (ctx.cr6.eq) goto loc_82785660;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// addi r6,r10,29448
	ctx.r6.s64 = ctx.r10.s64 + 29448;
	// lwz r11,17176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17176);
	// addi r4,r9,29328
	ctx.r4.s64 = ctx.r9.s64 + 29328;
	// addi r3,r8,29480
	ctx.r3.s64 = ctx.r8.s64 + 29480;
	// li r5,123
	ctx.r5.s64 = 123;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82785660;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82785660:
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bl 0x82784f18
	ctx.lr = 0x8278566C;
	sub_82784F18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82784a40
	ctx.lr = 0x82785678;
	sub_82784A40(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82785690"))) PPC_WEAK_FUNC(sub_82785690);
PPC_FUNC_IMPL(__imp__sub_82785690) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,14
	ctx.r5.s64 = 14;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x827a7a40
	ctx.lr = 0x827856B4;
	sub_827A7A40(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// beq cr6,0x827856ec
	if (ctx.cr6.eq) goto loc_827856EC;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// addi r6,r10,30136
	ctx.r6.s64 = ctx.r10.s64 + 30136;
	// lwz r11,17176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17176);
	// addi r4,r9,29568
	ctx.r4.s64 = ctx.r9.s64 + 29568;
	// addi r3,r8,30164
	ctx.r3.s64 = ctx.r8.s64 + 30164;
	// li r5,109
	ctx.r5.s64 = 109;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827856EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827856EC:
	// lwz r31,16(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82785720
	if (ctx.cr6.eq) goto loc_82785720;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8278e280
	ctx.lr = 0x82785700;
	sub_8278E280(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8278e380
	ctx.lr = 0x8278570C;
	sub_8278E380(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8249d300
	ctx.lr = 0x82785720;
	sub_8249D300(ctx, base);
loc_82785720:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82785738"))) PPC_WEAK_FUNC(sub_82785738);
PPC_FUNC_IMPL(__imp__sub_82785738) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82785740;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// bgt cr6,0x82785768
	if (ctx.cr6.gt) goto loc_82785768;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82785768:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x827857ac
	if (!ctx.cr0.eq) goto loc_827857AC;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bne cr6,0x827857a4
	if (!ctx.cr6.eq) goto loc_827857A4;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827857a4
	if (ctx.cr6.eq) goto loc_827857A4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8249d108
	ctx.lr = 0x82785790;
	sub_8249D108(ctx, base);
	// lwz r27,16(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82784f18
	ctx.lr = 0x82785798;
	sub_82784F18(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r5,28
	ctx.r5.s64 = 28;
	// bl 0x82784a40
	ctx.lr = 0x827857A4;
	sub_82784A40(ctx, base);
loc_827857A4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_827857AC:
	// li r11,129
	ctx.r11.s64 = 129;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// addi r3,r30,1240
	ctx.r3.s64 = ctx.r30.s64 + 1240;
	// bl 0x82785548
	ctx.lr = 0x827857C8;
	sub_82785548(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827857D0"))) PPC_WEAK_FUNC(sub_827857D0);
PPC_FUNC_IMPL(__imp__sub_827857D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x827857D8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// bgt cr6,0x82785800
	if (ctx.cr6.gt) goto loc_82785800;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82785800:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82785844
	if (!ctx.cr0.eq) goto loc_82785844;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bne cr6,0x8278583c
	if (!ctx.cr6.eq) goto loc_8278583C;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8278583c
	if (ctx.cr6.eq) goto loc_8278583C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8249d108
	ctx.lr = 0x82785828;
	sub_8249D108(ctx, base);
	// lwz r27,16(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82784f18
	ctx.lr = 0x82785830;
	sub_82784F18(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r5,28
	ctx.r5.s64 = 28;
	// bl 0x82784a40
	ctx.lr = 0x8278583C;
	sub_82784A40(ctx, base);
loc_8278583C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_82785844:
	// li r11,130
	ctx.r11.s64 = 130;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// addi r3,r30,1240
	ctx.r3.s64 = ctx.r30.s64 + 1240;
	// bl 0x82785548
	ctx.lr = 0x82785860;
	sub_82785548(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82785868"))) PPC_WEAK_FUNC(sub_82785868);
PPC_FUNC_IMPL(__imp__sub_82785868) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82785870;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// bgt cr6,0x82785898
	if (ctx.cr6.gt) goto loc_82785898;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82785898:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x827858dc
	if (!ctx.cr0.eq) goto loc_827858DC;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bne cr6,0x827858d4
	if (!ctx.cr6.eq) goto loc_827858D4;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827858d4
	if (ctx.cr6.eq) goto loc_827858D4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8249d108
	ctx.lr = 0x827858C0;
	sub_8249D108(ctx, base);
	// lwz r27,16(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82784f18
	ctx.lr = 0x827858C8;
	sub_82784F18(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r5,28
	ctx.r5.s64 = 28;
	// bl 0x82784a40
	ctx.lr = 0x827858D4;
	sub_82784A40(ctx, base);
loc_827858D4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_827858DC:
	// li r11,131
	ctx.r11.s64 = 131;
	// rlwinm r6,r28,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// addi r3,r30,1240
	ctx.r3.s64 = ctx.r30.s64 + 1240;
	// bl 0x82785548
	ctx.lr = 0x827858F8;
	sub_82785548(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82785900"))) PPC_WEAK_FUNC(sub_82785900);
PPC_FUNC_IMPL(__imp__sub_82785900) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82785908;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// bgt cr6,0x82785930
	if (ctx.cr6.gt) goto loc_82785930;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82785930:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82785974
	if (!ctx.cr0.eq) goto loc_82785974;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bne cr6,0x8278596c
	if (!ctx.cr6.eq) goto loc_8278596C;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8278596c
	if (ctx.cr6.eq) goto loc_8278596C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8249d108
	ctx.lr = 0x82785958;
	sub_8249D108(ctx, base);
	// lwz r27,16(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82784f18
	ctx.lr = 0x82785960;
	sub_82784F18(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r5,28
	ctx.r5.s64 = 28;
	// bl 0x82784a40
	ctx.lr = 0x8278596C;
	sub_82784A40(ctx, base);
loc_8278596C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_82785974:
	// li r11,132
	ctx.r11.s64 = 132;
	// rlwinm r6,r28,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// addi r3,r30,1240
	ctx.r3.s64 = ctx.r30.s64 + 1240;
	// bl 0x82785548
	ctx.lr = 0x82785990;
	sub_82785548(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82785998"))) PPC_WEAK_FUNC(sub_82785998);
PPC_FUNC_IMPL(__imp__sub_82785998) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x827859A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// bgt cr6,0x827859c8
	if (ctx.cr6.gt) goto loc_827859C8;
	// li r10,0
	ctx.r10.s64 = 0;
loc_827859C8:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82785a0c
	if (!ctx.cr0.eq) goto loc_82785A0C;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bne cr6,0x82785a04
	if (!ctx.cr6.eq) goto loc_82785A04;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82785a04
	if (ctx.cr6.eq) goto loc_82785A04;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8249d108
	ctx.lr = 0x827859F0;
	sub_8249D108(ctx, base);
	// lwz r27,16(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82784f18
	ctx.lr = 0x827859F8;
	sub_82784F18(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r5,28
	ctx.r5.s64 = 28;
	// bl 0x82784a40
	ctx.lr = 0x82785A04;
	sub_82784A40(ctx, base);
loc_82785A04:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_82785A0C:
	// li r11,136
	ctx.r11.s64 = 136;
	// rlwinm r6,r28,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// addi r3,r30,1240
	ctx.r3.s64 = ctx.r30.s64 + 1240;
	// bl 0x82785548
	ctx.lr = 0x82785A28;
	sub_82785548(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82785A30"))) PPC_WEAK_FUNC(sub_82785A30);
PPC_FUNC_IMPL(__imp__sub_82785A30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82785A38;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// bgt cr6,0x82785a60
	if (ctx.cr6.gt) goto loc_82785A60;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82785A60:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82785aa4
	if (!ctx.cr0.eq) goto loc_82785AA4;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bne cr6,0x82785a9c
	if (!ctx.cr6.eq) goto loc_82785A9C;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82785a9c
	if (ctx.cr6.eq) goto loc_82785A9C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8249d108
	ctx.lr = 0x82785A88;
	sub_8249D108(ctx, base);
	// lwz r27,16(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82784f18
	ctx.lr = 0x82785A90;
	sub_82784F18(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r5,28
	ctx.r5.s64 = 28;
	// bl 0x82784a40
	ctx.lr = 0x82785A9C;
	sub_82784A40(ctx, base);
loc_82785A9C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_82785AA4:
	// li r11,133
	ctx.r11.s64 = 133;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// addi r3,r30,1240
	ctx.r3.s64 = ctx.r30.s64 + 1240;
	// bl 0x82785548
	ctx.lr = 0x82785AC0;
	sub_82785548(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82785AC8"))) PPC_WEAK_FUNC(sub_82785AC8);
PPC_FUNC_IMPL(__imp__sub_82785AC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82785AD0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// bgt cr6,0x82785af8
	if (ctx.cr6.gt) goto loc_82785AF8;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82785AF8:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82785b3c
	if (!ctx.cr0.eq) goto loc_82785B3C;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bne cr6,0x82785b34
	if (!ctx.cr6.eq) goto loc_82785B34;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82785b34
	if (ctx.cr6.eq) goto loc_82785B34;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8249d108
	ctx.lr = 0x82785B20;
	sub_8249D108(ctx, base);
	// lwz r27,16(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82784f18
	ctx.lr = 0x82785B28;
	sub_82784F18(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r5,28
	ctx.r5.s64 = 28;
	// bl 0x82784a40
	ctx.lr = 0x82785B34;
	sub_82784A40(ctx, base);
loc_82785B34:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_82785B3C:
	// li r11,134
	ctx.r11.s64 = 134;
	// rlwinm r6,r28,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// addi r3,r30,1240
	ctx.r3.s64 = ctx.r30.s64 + 1240;
	// bl 0x82785548
	ctx.lr = 0x82785B58;
	sub_82785548(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82785B60"))) PPC_WEAK_FUNC(sub_82785B60);
PPC_FUNC_IMPL(__imp__sub_82785B60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82785B68;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// bgt cr6,0x82785b90
	if (ctx.cr6.gt) goto loc_82785B90;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82785B90:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82785bd4
	if (!ctx.cr0.eq) goto loc_82785BD4;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bne cr6,0x82785bcc
	if (!ctx.cr6.eq) goto loc_82785BCC;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82785bcc
	if (ctx.cr6.eq) goto loc_82785BCC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8249d108
	ctx.lr = 0x82785BB8;
	sub_8249D108(ctx, base);
	// lwz r27,16(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82784f18
	ctx.lr = 0x82785BC0;
	sub_82784F18(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r5,28
	ctx.r5.s64 = 28;
	// bl 0x82784a40
	ctx.lr = 0x82785BCC;
	sub_82784A40(ctx, base);
loc_82785BCC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_82785BD4:
	// li r11,135
	ctx.r11.s64 = 135;
	// rlwinm r6,r28,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// addi r3,r30,1240
	ctx.r3.s64 = ctx.r30.s64 + 1240;
	// bl 0x82785548
	ctx.lr = 0x82785BF0;
	sub_82785548(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82785BF8"))) PPC_WEAK_FUNC(sub_82785BF8);
PPC_FUNC_IMPL(__imp__sub_82785BF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82785C00;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// bgt cr6,0x82785c28
	if (ctx.cr6.gt) goto loc_82785C28;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82785C28:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82785c6c
	if (!ctx.cr0.eq) goto loc_82785C6C;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bne cr6,0x82785c64
	if (!ctx.cr6.eq) goto loc_82785C64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82785c64
	if (ctx.cr6.eq) goto loc_82785C64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8249d108
	ctx.lr = 0x82785C50;
	sub_8249D108(ctx, base);
	// lwz r27,16(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82784f18
	ctx.lr = 0x82785C58;
	sub_82784F18(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r5,28
	ctx.r5.s64 = 28;
	// bl 0x82784a40
	ctx.lr = 0x82785C64;
	sub_82784A40(ctx, base);
loc_82785C64:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_82785C6C:
	// li r11,137
	ctx.r11.s64 = 137;
	// rlwinm r6,r28,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// addi r3,r30,1240
	ctx.r3.s64 = ctx.r30.s64 + 1240;
	// bl 0x82785548
	ctx.lr = 0x82785C88;
	sub_82785548(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82785C90"))) PPC_WEAK_FUNC(sub_82785C90);
PPC_FUNC_IMPL(__imp__sub_82785C90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r3,r11,17048
	ctx.r3.s64 = ctx.r11.s64 + 17048;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82785CA0"))) PPC_WEAK_FUNC(sub_82785CA0);
PPC_FUNC_IMPL(__imp__sub_82785CA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82785cf8
	if (ctx.cr6.lt) goto loc_82785CF8;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// addi r6,r10,30720
	ctx.r6.s64 = ctx.r10.s64 + 30720;
	// lwz r11,17176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17176);
	// addi r4,r9,24416
	ctx.r4.s64 = ctx.r9.s64 + 24416;
	// addi r3,r8,24524
	ctx.r3.s64 = ctx.r8.s64 + 24524;
	// li r5,334
	ctx.r5.s64 = 334;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82785CF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82785CF8:
	// addi r11,r31,7
	ctx.r11.s64 = ctx.r31.s64 + 7;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82785D20"))) PPC_WEAK_FUNC(sub_82785D20);
PPC_FUNC_IMPL(__imp__sub_82785D20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82785D28;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,-32108
	ctx.r11.s64 = ctx.r11.s64 + -32108;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// stw r6,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r6.u32);
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// stw r4,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r4.u32);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// std r30,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r30.u64);
	// addi r29,r10,-22040
	ctx.r29.s64 = ctx.r10.s64 + -22040;
	// addi r28,r11,26608
	ctx.r28.s64 = ctx.r11.s64 + 26608;
	// addi r27,r9,26712
	ctx.r27.s64 = ctx.r9.s64 + 26712;
	// bl 0x82784f18
	ctx.lr = 0x82785D6C;
	sub_82784F18(ctx, base);
	// li r4,80
	ctx.r4.s64 = 80;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r8,124
	ctx.r8.s64 = 124;
	// bl 0x827848f8
	ctx.lr = 0x82785D84;
	sub_827848F8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82785d90
	if (ctx.cr0.eq) goto loc_82785D90;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
loc_82785D90:
	// addic. r11,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r11.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82785d9c
	if (ctx.cr0.eq) goto loc_82785D9C;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
loc_82785D9C:
	// addic. r11,r3,8
	ctx.xer.ca = ctx.r3.u32 > 4294967287;
	ctx.r11.s64 = ctx.r3.s64 + 8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82785da8
	if (ctx.cr0.eq) goto loc_82785DA8;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
loc_82785DA8:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r30,65(r3)
	PPC_STORE_U8(ctx.r3.u32 + 65, ctx.r30.u8);
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// stb r11,64(r3)
	PPC_STORE_U8(ctx.r3.u32 + 64, ctx.r11.u8);
	// clrlwi. r9,r26,28
	ctx.r9.u64 = ctx.r26.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// lis r27,-31963
	ctx.r27.s64 = -2094727168;
	// stb r11,65(r3)
	PPC_STORE_U8(ctx.r3.u32 + 65, ctx.r11.u8);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r28,r10,30888
	ctx.r28.s64 = ctx.r10.s64 + 30888;
	// addi r29,r11,30760
	ctx.r29.s64 = ctx.r11.s64 + 30760;
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r8,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r8.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r26,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r26.u32);
	// beq 0x82785e18
	if (ctx.cr0.eq) goto loc_82785E18;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lwz r10,17176(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 17176);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,30924
	ctx.r3.s64 = ctx.r11.s64 + 30924;
	// li r5,262
	ctx.r5.s64 = 262;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82785E18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82785E18:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82785e44
	if (!ctx.cr6.eq) goto loc_82785E44;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lwz r10,17176(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 17176);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,30956
	ctx.r3.s64 = ctx.r11.s64 + 30956;
	// li r5,263
	ctx.r5.s64 = 263;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82785E44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82785E44:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82785E50"))) PPC_WEAK_FUNC(sub_82785E50);
PPC_FUNC_IMPL(__imp__sub_82785E50) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r11,r11,-32108
	ctx.r11.s64 = ctx.r11.s64 + -32108;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82786458
	ctx.lr = 0x82785E78;
	sub_82786458(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r4,r31,24
	ctx.r4.s64 = ctx.r31.s64 + 24;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x8278e580
	ctx.lr = 0x82785EA4;
	sub_8278E580(ctx, base);
	// lwz r30,28(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82784f18
	ctx.lr = 0x82785EAC;
	sub_82784F18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,80
	ctx.r5.s64 = 80;
	// bl 0x82784a40
	ctx.lr = 0x82785EB8;
	sub_82784A40(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82785EE0"))) PPC_WEAK_FUNC(sub_82785EE0);
PPC_FUNC_IMPL(__imp__sub_82785EE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82785EE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// ld r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16);
	// ld r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x8278604c
	if (ctx.cr6.eq) goto loc_8278604C;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8278604c
	if (ctx.cr6.eq) goto loc_8278604C;
	// bl 0x82786458
	ctx.lr = 0x82785F1C;
	sub_82786458(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82785fa4
	if (!ctx.cr6.gt) goto loc_82785FA4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r29,r11,6112
	ctx.r29.s64 = ctx.r11.s64 + 6112;
loc_82785F3C:
	// rlwinm. r11,r4,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82785f6c
	if (!ctx.cr0.eq) goto loc_82785F6C;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// ld r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ldx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r29.u32);
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82785f64
	if (!ctx.cr6.eq) goto loc_82785F64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82785F64:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// b 0x82785f70
	goto loc_82785F70;
loc_82785F6C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82785F70:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82785f8c
	if (ctx.cr0.eq) goto loc_82785F8C;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8278bb78
	ctx.lr = 0x82785F88;
	sub_8278BB78(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82785F8C:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82785f3c
	if (ctx.cr6.lt) goto loc_82785F3C;
loc_82785FA4:
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,92(r1)
	PPC_STORE_U64(ctx.r1.u32 + 92, ctx.r10.u64);
loc_82785FC4:
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82785fdc
	if (ctx.cr6.eq) goto loc_82785FDC;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82785fe0
	if (ctx.cr6.eq) goto loc_82785FE0;
loc_82785FDC:
	// twi 31,r0,22
loc_82785FE0:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8278604c
	if (ctx.cr6.eq) goto loc_8278604C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82785ff8
	if (!ctx.cr6.eq) goto loc_82785FF8;
	// twi 31,r0,22
loc_82785FF8:
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82786008
	if (!ctx.cr6.eq) goto loc_82786008;
	// twi 31,r0,22
loc_82786008:
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bne cr6,0x8278601c
	if (!ctx.cr6.eq) goto loc_8278601C;
	// twi 31,r0,22
loc_8278601C:
	// addi r5,r11,32
	ctx.r5.s64 = ctx.r11.s64 + 32;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a78b8
	ctx.lr = 0x8278602C;
	sub_827A78B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x827a7b60
	ctx.lr = 0x8278603C;
	sub_827A7B60(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x827a7f50
	ctx.lr = 0x82786044;
	sub_827A7F50(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// b 0x82785fc4
	goto loc_82785FC4;
loc_8278604C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82786058"))) PPC_WEAK_FUNC(sub_82786058);
PPC_FUNC_IMPL(__imp__sub_82786058) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// rlwinm. r11,r31,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x827860cc
	if (!ctx.cr0.eq) goto loc_827860CC;
	// bl 0x82785ca0
	ctx.lr = 0x82786080;
	sub_82785CA0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82786158
	if (!ctx.cr6.eq) goto loc_82786158;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// ld r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// rlwinm r9,r31,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,6112
	ctx.r11.s64 = ctx.r11.s64 + 6112;
	// ldx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r11.u32);
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x827860b0
	if (!ctx.cr6.eq) goto loc_827860B0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_827860B0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
loc_827860B4:
	// beq 0x82786158
	if (ctx.cr0.eq) goto loc_82786158;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8278bf58
	ctx.lr = 0x827860C4;
	sub_8278BF58(ctx, base);
loc_827860C4:
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82786158
	goto loc_82786158;
loc_827860CC:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x827a7bf0
	ctx.lr = 0x827860DC;
	sub_827A7BF0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x827860c4
	if (!ctx.cr0.eq) goto loc_827860C4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8278e220
	ctx.lr = 0x827860F0;
	sub_8278E220(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// beq cr6,0x82786154
	if (ctx.cr6.eq) goto loc_82786154;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82785ca0
	ctx.lr = 0x82786108;
	sub_82785CA0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82786158
	if (!ctx.cr6.eq) goto loc_82786158;
	// rlwinm. r11,r31,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82786148
	if (!ctx.cr0.eq) goto loc_82786148;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// ld r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// rlwinm r9,r31,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,6112
	ctx.r11.s64 = ctx.r11.s64 + 6112;
	// ldx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r11.u32);
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82786140
	if (!ctx.cr6.eq) goto loc_82786140;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82786140:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// b 0x8278614c
	goto loc_8278614C;
loc_82786148:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8278614C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x827860b4
	goto loc_827860B4;
loc_82786154:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82786158:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82786170"))) PPC_WEAK_FUNC(sub_82786170);
PPC_FUNC_IMPL(__imp__sub_82786170) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// stw r5,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r5.u32);
	// rlwinm. r11,r5,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x827861c0
	if (!ctx.cr0.eq) goto loc_827861C0;
	// rlwinm r9,r5,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
loc_82786194:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// ld r10,16(r6)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r6.u32 + 16);
	// addi r11,r11,6112
	ctx.r11.s64 = ctx.r11.s64 + 6112;
	// ldx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r11.u32);
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x827861b8
	if (!ctx.cr6.eq) goto loc_827861B8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_827861B8:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// b 0x82786204
	goto loc_82786204;
loc_827861C0:
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// addi r3,r6,24
	ctx.r3.s64 = ctx.r6.s64 + 24;
	// bl 0x827a7e98
	ctx.lr = 0x827861CC;
	sub_827A7E98(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827861dc
	if (ctx.cr0.eq) goto loc_827861DC;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82786204
	goto loc_82786204;
loc_827861DC:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x8278e220
	ctx.lr = 0x827861E8;
	sub_8278E220(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82786200
	if (ctx.cr6.eq) goto loc_82786200;
	// rlwinm. r11,r3,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82786200
	if (!ctx.cr0.eq) goto loc_82786200;
	// rlwinm r9,r3,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// b 0x82786194
	goto loc_82786194;
loc_82786200:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82786204:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82786218"))) PPC_WEAK_FUNC(sub_82786218);
PPC_FUNC_IMPL(__imp__sub_82786218) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82786220;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r30,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r30.u32);
	// li r5,15
	ctx.r5.s64 = 15;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r3,r1,97
	ctx.r3.s64 = ctx.r1.s64 + 97;
	// stb r27,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r27.u8);
	// bl 0x82a4efb0
	ctx.lr = 0x8278624C;
	sub_82A4EFB0(ctx, base);
	// rlwinm. r11,r30,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82786320
	if (!ctx.cr0.eq) goto loc_82786320;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// ld r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// rlwinm r28,r30,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r29,r11,6112
	ctx.r29.s64 = ctx.r11.s64 + 6112;
	// ldx r11,r28,r29
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + ctx.r29.u32);
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8278627c
	if (!ctx.cr6.eq) goto loc_8278627C;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_8278627C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8278644c
	if (ctx.cr0.eq) goto loc_8278644C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82785ca0
	ctx.lr = 0x82786290;
	sub_82785CA0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x827862ac
	if (!ctx.cr6.eq) goto loc_827862AC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8278bf58
	ctx.lr = 0x827862A4;
	sub_8278BF58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82786300
	goto loc_82786300;
loc_827862AC:
	// cmpwi cr6,r3,128
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 128, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x827862bc
	if (ctx.cr6.gt) goto loc_827862BC;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_827862BC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82786308
	if (ctx.cr0.eq) goto loc_82786308;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8278e058
	ctx.lr = 0x827862D4;
	sub_8278E058(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// bl 0x8278e118
	ctx.lr = 0x827862FC;
	sub_8278E118(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_82786300:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x827a79b0
	ctx.lr = 0x82786308;
	sub_827A79B0(ctx, base);
loc_82786308:
	// ldx r11,r28,r29
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + ctx.r29.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// ld r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// b 0x82786450
	goto loc_82786450;
loc_82786320:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,188
	ctx.r4.s64 = ctx.r1.s64 + 188;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x827a7d28
	ctx.lr = 0x82786330;
	sub_827A7D28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8278634c
	if (ctx.cr0.eq) goto loc_8278634C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x827a79b0
	ctx.lr = 0x82786344;
	sub_827A79B0(ctx, base);
loc_82786344:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82786450
	goto loc_82786450;
loc_8278634C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8278e220
	ctx.lr = 0x82786358;
	sub_8278E220(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x8278644c
	if (ctx.cr6.eq) goto loc_8278644C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// rlwinm. r28,r30,0,0,0
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r11,6112
	ctx.r29.s64 = ctx.r11.s64 + 6112;
	// bne 0x8278639c
	if (!ctx.cr0.eq) goto loc_8278639C;
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// ld r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ldx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r29.u32);
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82786394
	if (!ctx.cr6.eq) goto loc_82786394;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82786394:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// b 0x827863a0
	goto loc_827863A0;
loc_8278639C:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_827863A0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8278644c
	if (ctx.cr0.eq) goto loc_8278644C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82785ca0
	ctx.lr = 0x827863B4;
	sub_82785CA0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x827863d0
	if (!ctx.cr6.eq) goto loc_827863D0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8278bf58
	ctx.lr = 0x827863C8;
	sub_8278BF58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82786424
	goto loc_82786424;
loc_827863D0:
	// cmpwi cr6,r3,128
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 128, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x827863e0
	if (ctx.cr6.gt) goto loc_827863E0;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_827863E0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8278642c
	if (ctx.cr0.eq) goto loc_8278642C;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8278e058
	ctx.lr = 0x827863F8;
	sub_8278E058(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// bl 0x8278e118
	ctx.lr = 0x82786420;
	sub_8278E118(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_82786424:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x827a79b0
	ctx.lr = 0x8278642C;
	sub_827A79B0(ctx, base);
loc_8278642C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82786344
	if (!ctx.cr6.eq) goto loc_82786344;
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// ld r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ldx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r29.u32);
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// b 0x82786344
	goto loc_82786344;
loc_8278644C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82786450:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82786458"))) PPC_WEAK_FUNC(sub_82786458);
PPC_FUNC_IMPL(__imp__sub_82786458) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82786460;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8278654c
	if (!ctx.cr6.gt) goto loc_8278654C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r29,r11,6112
	ctx.r29.s64 = ctx.r11.s64 + 6112;
loc_82786488:
	// rlwinm. r11,r31,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x827864b4
	if (!ctx.cr0.eq) goto loc_827864B4;
	// ld r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// ld r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x827864ac
	if (!ctx.cr6.eq) goto loc_827864AC;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_827864AC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// b 0x827864b8
	goto loc_827864B8;
loc_827864B4:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_827864B8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82786534
	if (ctx.cr0.eq) goto loc_82786534;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82785ca0
	ctx.lr = 0x827864CC;
	sub_82785CA0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x827864e8
	if (!ctx.cr6.eq) goto loc_827864E8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8278bf58
	ctx.lr = 0x827864E0;
	sub_8278BF58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8278652c
	goto loc_8278652C;
loc_827864E8:
	// cmpwi cr6,r3,128
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 128, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x827864f8
	if (ctx.cr6.gt) goto loc_827864F8;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_827864F8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82786534
	if (ctx.cr0.eq) goto loc_82786534;
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8278e058
	ctx.lr = 0x82786510;
	sub_8278E058(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
loc_8278652C:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x827a79b0
	ctx.lr = 0x82786534;
	sub_827A79B0(ctx, base);
loc_82786534:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82786488
	if (ctx.cr6.lt) goto loc_82786488;
loc_8278654C:
	// addi r29,r30,24
	ctx.r29.s64 = ctx.r30.s64 + 24;
	// std r28,16(r30)
	PPC_STORE_U64(ctx.r30.u32 + 16, ctx.r28.u64);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,92(r1)
	PPC_STORE_U64(ctx.r1.u32 + 92, ctx.r10.u64);
loc_82786574:
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8278658c
	if (ctx.cr6.eq) goto loc_8278658C;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82786590
	if (ctx.cr6.eq) goto loc_82786590;
loc_8278658C:
	// twi 31,r0,22
loc_82786590:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x827865ec
	if (ctx.cr6.eq) goto loc_827865EC;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827865a8
	if (!ctx.cr6.eq) goto loc_827865A8;
	// twi 31,r0,22
loc_827865A8:
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x827865b8
	if (!ctx.cr6.eq) goto loc_827865B8;
	// twi 31,r0,22
loc_827865B8:
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x827a7bf0
	ctx.lr = 0x827865CC;
	sub_827A7BF0(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x827865dc
	if (ctx.cr0.eq) goto loc_827865DC;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x827a79b0
	ctx.lr = 0x827865DC;
	sub_827A79B0(ctx, base);
loc_827865DC:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x827a7f50
	ctx.lr = 0x827865E4;
	sub_827A7F50(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// b 0x82786574
	goto loc_82786574;
loc_827865EC:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// lbz r11,65(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 65);
	// b 0x82786628
	goto loc_82786628;
loc_82786600:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8278eab8
	ctx.lr = 0x8278660C;
	sub_8278EAB8(ctx, base);
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82784f18
	ctx.lr = 0x82786614;
	sub_82784F18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,80
	ctx.r5.s64 = 80;
	// bl 0x82784a40
	ctx.lr = 0x82786620;
	sub_82784A40(ctx, base);
	// lbz r11,65(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 65);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82786628:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82786600
	if (ctx.cr6.eq) goto loc_82786600;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r28,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r28.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82786658"))) PPC_WEAK_FUNC(sub_82786658);
PPC_FUNC_IMPL(__imp__sub_82786658) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82786660;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// rlwinm. r11,r31,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// bne 0x827866d4
	if (!ctx.cr0.eq) goto loc_827866D4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// ld r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// rlwinm r9,r31,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,6112
	ctx.r11.s64 = ctx.r11.s64 + 6112;
	// ldx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r11.u32);
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x827866ac
	if (!ctx.cr6.eq) goto loc_827866AC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_827866AC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827866f4
	if (ctx.cr0.eq) goto loc_827866F4;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x827866c4
	if (ctx.cr6.eq) goto loc_827866C4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
loc_827866C4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_827866C8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8278c008
	ctx.lr = 0x827866D0;
	sub_8278C008(ctx, base);
	// b 0x827867c8
	goto loc_827867C8;
loc_827866D4:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x827a7bf0
	ctx.lr = 0x827866E4;
	sub_827A7BF0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82786754
	if (ctx.cr0.eq) goto loc_82786754;
	// lwz r27,0(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r28,r3,16
	ctx.r28.s64 = ctx.r3.s64 + 16;
loc_827866F4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82786710
	if (ctx.cr6.eq) goto loc_82786710;
	// addi r11,r28,0
	ctx.r11.s64 = ctx.r28.s64 + 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
loc_82786710:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x827867c4
	if (ctx.cr6.eq) goto loc_827867C4;
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2, ctx.xer);
	// beq cr6,0x8278674c
	if (ctx.cr6.eq) goto loc_8278674C;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// addi r6,r10,29536
	ctx.r6.s64 = ctx.r10.s64 + 29536;
	// lwz r11,17176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17176);
	// addi r4,r9,29568
	ctx.r4.s64 = ctx.r9.s64 + 29568;
	// addi r3,r8,29672
	ctx.r3.s64 = ctx.r8.s64 + 29672;
	// li r5,100
	ctx.r5.s64 = 100;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8278674C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8278674C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x827867c8
	goto loc_827867C8;
loc_82786754:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8278e220
	ctx.lr = 0x82786760;
	sub_8278E220(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x827866f4
	if (ctx.cr6.eq) goto loc_827866F4;
	// rlwinm. r11,r4,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x827867a4
	if (!ctx.cr0.eq) goto loc_827867A4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// ld r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// rlwinm r9,r4,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,6112
	ctx.r11.s64 = ctx.r11.s64 + 6112;
	// ldx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r11.u32);
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8278679c
	if (!ctx.cr6.eq) goto loc_8278679C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8278679C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// b 0x827867a8
	goto loc_827867A8;
loc_827867A4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_827867A8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827866f4
	if (ctx.cr0.eq) goto loc_827866F4;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x827866c8
	if (ctx.cr6.eq) goto loc_827866C8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
	// b 0x827866c8
	goto loc_827866C8;
loc_827867C4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_827867C8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827867D0"))) PPC_WEAK_FUNC(sub_827867D0);
PPC_FUNC_IMPL(__imp__sub_827867D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x827867D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r30.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// rlwinm. r11,r30,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82786818
	if (!ctx.cr0.eq) goto loc_82786818;
	// bl 0x8278cdc8
	ctx.lr = 0x827867F8;
	sub_8278CDC8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,6112
	ctx.r11.s64 = ctx.r11.s64 + 6112;
	// ldx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r11.u32);
loc_82786808:
	// ld r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// b 0x827868cc
	goto loc_827868CC;
loc_82786818:
	// bl 0x8278e220
	ctx.lr = 0x8278681C;
	sub_8278E220(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x82786854
	if (ctx.cr6.eq) goto loc_82786854;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8278cdc8
	ctx.lr = 0x82786838;
	sub_8278CDC8(ctx, base);
	// rlwinm. r11,r30,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x827868cc
	if (!ctx.cr0.eq) goto loc_827868CC;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// rlwinm r9,r30,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,6112
	ctx.r11.s64 = ctx.r11.s64 + 6112;
	// ldx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r11.u32);
	// b 0x82786808
	goto loc_82786808;
loc_82786854:
	// addi r29,r31,24
	ctx.r29.s64 = ctx.r31.s64 + 24;
	// addi r4,r1,188
	ctx.r4.s64 = ctx.r1.s64 + 188;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827a7bf0
	ctx.lr = 0x82786864;
	sub_827A7BF0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82786888
	if (ctx.cr0.eq) goto loc_82786888;
	// li r5,2
	ctx.r5.s64 = 2;
	// lbz r29,0(r28)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x827a7a40
	ctx.lr = 0x82786880;
	sub_827A7A40(ctx, base);
	// stb r29,16(r30)
	PPC_STORE_U8(ctx.r30.u32 + 16, ctx.r29.u8);
	// b 0x827868cc
	goto loc_827868CC;
loc_82786888:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,15
	ctx.r5.s64 = 15;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,97
	ctx.r3.s64 = ctx.r1.s64 + 97;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// bl 0x82a4efb0
	ctx.lr = 0x827868A4;
	sub_82A4EFB0(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lbz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x827a7a40
	ctx.lr = 0x827868B8;
	sub_827A7A40(ctx, base);
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,188
	ctx.r4.s64 = ctx.r1.s64 + 188;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827a7b60
	ctx.lr = 0x827868CC;
	sub_827A7B60(ctx, base);
loc_827868CC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827868D8"))) PPC_WEAK_FUNC(sub_827868D8);
PPC_FUNC_IMPL(__imp__sub_827868D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x827868E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// rlwinm. r11,r31,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r29,0
	ctx.r29.s64 = 0;
	// bne 0x8278694c
	if (!ctx.cr0.eq) goto loc_8278694C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// ld r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// rlwinm r9,r31,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,6112
	ctx.r11.s64 = ctx.r11.s64 + 6112;
	// ldx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r11.u32);
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82786924
	if (!ctx.cr6.eq) goto loc_82786924;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82786924:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827869b0
	if (ctx.cr0.eq) goto loc_827869B0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82786930:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8278c008
	ctx.lr = 0x82786938;
	sub_8278C008(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r11,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r11.u8);
	// b 0x827869c0
	goto loc_827869C0;
loc_8278694C:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x827a7bf0
	ctx.lr = 0x8278695C;
	sub_827A7BF0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827869c8
	if (ctx.cr0.eq) goto loc_827869C8;
	// addi r29,r3,16
	ctx.r29.s64 = ctx.r3.s64 + 16;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x827869b0
	if (ctx.cr6.eq) goto loc_827869B0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x827869a8
	if (ctx.cr6.eq) goto loc_827869A8;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// addi r6,r10,29536
	ctx.r6.s64 = ctx.r10.s64 + 29536;
	// lwz r11,17176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17176);
	// addi r4,r9,29568
	ctx.r4.s64 = ctx.r9.s64 + 29568;
	// addi r3,r8,29672
	ctx.r3.s64 = ctx.r8.s64 + 29672;
	// li r5,100
	ctx.r5.s64 = 100;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827869A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827869A8:
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// stb r11,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r11.u8);
loc_827869B0:
	// addi r11,r29,0
	ctx.r11.s64 = ctx.r29.s64 + 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
loc_827869C0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
loc_827869C8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8278e220
	ctx.lr = 0x827869D4;
	sub_8278E220(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x827869b0
	if (ctx.cr6.eq) goto loc_827869B0;
	// rlwinm. r11,r4,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82786a18
	if (!ctx.cr0.eq) goto loc_82786A18;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// ld r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// rlwinm r9,r4,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,6112
	ctx.r11.s64 = ctx.r11.s64 + 6112;
	// ldx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r11.u32);
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82786a10
	if (!ctx.cr6.eq) goto loc_82786A10;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82786A10:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// b 0x82786a1c
	goto loc_82786A1C;
loc_82786A18:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82786A1C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827869b0
	if (ctx.cr0.eq) goto loc_827869B0;
	// b 0x82786930
	goto loc_82786930;
}

__attribute__((alias("__imp__sub_82786A28"))) PPC_WEAK_FUNC(sub_82786A28);
PPC_FUNC_IMPL(__imp__sub_82786A28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82786A30;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// rlwinm. r11,r31,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// bne 0x82786aa4
	if (!ctx.cr0.eq) goto loc_82786AA4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// ld r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// rlwinm r9,r31,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,6112
	ctx.r11.s64 = ctx.r11.s64 + 6112;
	// ldx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r11.u32);
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82786a7c
	if (!ctx.cr6.eq) goto loc_82786A7C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82786A7C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82786ac4
	if (ctx.cr0.eq) goto loc_82786AC4;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82786a94
	if (ctx.cr6.eq) goto loc_82786A94;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
loc_82786A94:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82786A98:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8278c118
	ctx.lr = 0x82786AA0;
	sub_8278C118(ctx, base);
	// b 0x82786b98
	goto loc_82786B98;
loc_82786AA4:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x827a7bf0
	ctx.lr = 0x82786AB4;
	sub_827A7BF0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82786b24
	if (ctx.cr0.eq) goto loc_82786B24;
	// lwz r27,0(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r28,r3,16
	ctx.r28.s64 = ctx.r3.s64 + 16;
loc_82786AC4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82786ae0
	if (ctx.cr6.eq) goto loc_82786AE0;
	// addi r11,r28,0
	ctx.r11.s64 = ctx.r28.s64 + 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
loc_82786AE0:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82786b94
	if (ctx.cr6.eq) goto loc_82786B94;
	// cmpwi cr6,r27,3
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 3, ctx.xer);
	// beq cr6,0x82786b1c
	if (ctx.cr6.eq) goto loc_82786B1C;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// addi r6,r10,29700
	ctx.r6.s64 = ctx.r10.s64 + 29700;
	// lwz r11,17176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17176);
	// addi r4,r9,29568
	ctx.r4.s64 = ctx.r9.s64 + 29568;
	// addi r3,r8,29728
	ctx.r3.s64 = ctx.r8.s64 + 29728;
	// li r5,101
	ctx.r5.s64 = 101;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82786B1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82786B1C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x82786b98
	goto loc_82786B98;
loc_82786B24:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8278e220
	ctx.lr = 0x82786B30;
	sub_8278E220(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x82786ac4
	if (ctx.cr6.eq) goto loc_82786AC4;
	// rlwinm. r11,r4,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82786b74
	if (!ctx.cr0.eq) goto loc_82786B74;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// ld r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// rlwinm r9,r4,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,6112
	ctx.r11.s64 = ctx.r11.s64 + 6112;
	// ldx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r11.u32);
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82786b6c
	if (!ctx.cr6.eq) goto loc_82786B6C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82786B6C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// b 0x82786b78
	goto loc_82786B78;
loc_82786B74:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82786B78:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82786ac4
	if (ctx.cr0.eq) goto loc_82786AC4;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82786a98
	if (ctx.cr6.eq) goto loc_82786A98;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
	// b 0x82786a98
	goto loc_82786A98;
loc_82786B94:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_82786B98:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82786BA0"))) PPC_WEAK_FUNC(sub_82786BA0);
PPC_FUNC_IMPL(__imp__sub_82786BA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82786BA8;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r30.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// rlwinm. r11,r30,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82786be8
	if (!ctx.cr0.eq) goto loc_82786BE8;
	// bl 0x8278cf30
	ctx.lr = 0x82786BC8;
	sub_8278CF30(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,6112
	ctx.r11.s64 = ctx.r11.s64 + 6112;
	// ldx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r11.u32);
loc_82786BD8:
	// ld r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// b 0x82786c9c
	goto loc_82786C9C;
loc_82786BE8:
	// bl 0x8278e220
	ctx.lr = 0x82786BEC;
	sub_8278E220(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x82786c24
	if (ctx.cr6.eq) goto loc_82786C24;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8278cf30
	ctx.lr = 0x82786C08;
	sub_8278CF30(ctx, base);
	// rlwinm. r11,r30,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82786c9c
	if (!ctx.cr0.eq) goto loc_82786C9C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// rlwinm r9,r30,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,6112
	ctx.r11.s64 = ctx.r11.s64 + 6112;
	// ldx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r11.u32);
	// b 0x82786bd8
	goto loc_82786BD8;
loc_82786C24:
	// addi r29,r31,24
	ctx.r29.s64 = ctx.r31.s64 + 24;
	// addi r4,r1,188
	ctx.r4.s64 = ctx.r1.s64 + 188;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827a7bf0
	ctx.lr = 0x82786C34;
	sub_827A7BF0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82786c58
	if (ctx.cr0.eq) goto loc_82786C58;
	// li r5,3
	ctx.r5.s64 = 3;
	// lbz r29,0(r28)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x827a7a40
	ctx.lr = 0x82786C50;
	sub_827A7A40(ctx, base);
	// stb r29,16(r30)
	PPC_STORE_U8(ctx.r30.u32 + 16, ctx.r29.u8);
	// b 0x82786c9c
	goto loc_82786C9C;
loc_82786C58:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,15
	ctx.r5.s64 = 15;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,97
	ctx.r3.s64 = ctx.r1.s64 + 97;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// bl 0x82a4efb0
	ctx.lr = 0x82786C74;
	sub_82A4EFB0(ctx, base);
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lbz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x827a7a40
	ctx.lr = 0x82786C88;
	sub_827A7A40(ctx, base);
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,188
	ctx.r4.s64 = ctx.r1.s64 + 188;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827a7b60
	ctx.lr = 0x82786C9C;
	sub_827A7B60(ctx, base);
loc_82786C9C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82786CA8"))) PPC_WEAK_FUNC(sub_82786CA8);
PPC_FUNC_IMPL(__imp__sub_82786CA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82786CB0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// rlwinm. r11,r31,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r29,0
	ctx.r29.s64 = 0;
	// bne 0x82786d1c
	if (!ctx.cr0.eq) goto loc_82786D1C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// ld r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// rlwinm r9,r31,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,6112
	ctx.r11.s64 = ctx.r11.s64 + 6112;
	// ldx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r11.u32);
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82786cf4
	if (!ctx.cr6.eq) goto loc_82786CF4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82786CF4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82786d80
	if (ctx.cr0.eq) goto loc_82786D80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82786D00:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8278c118
	ctx.lr = 0x82786D08;
	sub_8278C118(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r11,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r11.u8);
	// b 0x82786d90
	goto loc_82786D90;
loc_82786D1C:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x827a7bf0
	ctx.lr = 0x82786D2C;
	sub_827A7BF0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82786d98
	if (ctx.cr0.eq) goto loc_82786D98;
	// addi r29,r3,16
	ctx.r29.s64 = ctx.r3.s64 + 16;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82786d80
	if (ctx.cr6.eq) goto loc_82786D80;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82786d78
	if (ctx.cr6.eq) goto loc_82786D78;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// addi r6,r10,29700
	ctx.r6.s64 = ctx.r10.s64 + 29700;
	// lwz r11,17176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17176);
	// addi r4,r9,29568
	ctx.r4.s64 = ctx.r9.s64 + 29568;
	// addi r3,r8,29728
	ctx.r3.s64 = ctx.r8.s64 + 29728;
	// li r5,101
	ctx.r5.s64 = 101;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82786D78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82786D78:
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// stb r11,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r11.u8);
loc_82786D80:
	// addi r11,r29,0
	ctx.r11.s64 = ctx.r29.s64 + 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
loc_82786D90:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
loc_82786D98:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8278e220
	ctx.lr = 0x82786DA4;
	sub_8278E220(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x82786d80
	if (ctx.cr6.eq) goto loc_82786D80;
	// rlwinm. r11,r4,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82786de8
	if (!ctx.cr0.eq) goto loc_82786DE8;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// ld r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// rlwinm r9,r4,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,6112
	ctx.r11.s64 = ctx.r11.s64 + 6112;
	// ldx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r11.u32);
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82786de0
	if (!ctx.cr6.eq) goto loc_82786DE0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82786DE0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// b 0x82786dec
	goto loc_82786DEC;
loc_82786DE8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82786DEC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82786d80
	if (ctx.cr0.eq) goto loc_82786D80;
	// b 0x82786d00
	goto loc_82786D00;
}

__attribute__((alias("__imp__sub_82786DF8"))) PPC_WEAK_FUNC(sub_82786DF8);
PPC_FUNC_IMPL(__imp__sub_82786DF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82786E00;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// rlwinm. r11,r31,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// bne 0x82786e74
	if (!ctx.cr0.eq) goto loc_82786E74;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// ld r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// rlwinm r9,r31,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,6112
	ctx.r11.s64 = ctx.r11.s64 + 6112;
	// ldx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r11.u32);
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82786e4c
	if (!ctx.cr6.eq) goto loc_82786E4C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82786E4C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82786e94
	if (ctx.cr0.eq) goto loc_82786E94;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82786e64
	if (ctx.cr6.eq) goto loc_82786E64;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
loc_82786E64:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82786E68:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8278c228
	ctx.lr = 0x82786E70;
	sub_8278C228(ctx, base);
	// b 0x82786f68
	goto loc_82786F68;
loc_82786E74:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x827a7bf0
	ctx.lr = 0x82786E84;
	sub_827A7BF0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82786ef4
	if (ctx.cr0.eq) goto loc_82786EF4;
	// lwz r27,0(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r28,r3,16
	ctx.r28.s64 = ctx.r3.s64 + 16;
loc_82786E94:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82786eb0
	if (ctx.cr6.eq) goto loc_82786EB0;
	// addi r11,r28,0
	ctx.r11.s64 = ctx.r28.s64 + 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
loc_82786EB0:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82786f64
	if (ctx.cr6.eq) goto loc_82786F64;
	// cmpwi cr6,r27,4
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 4, ctx.xer);
	// beq cr6,0x82786eec
	if (ctx.cr6.eq) goto loc_82786EEC;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// addi r6,r10,29752
	ctx.r6.s64 = ctx.r10.s64 + 29752;
	// lwz r11,17176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17176);
	// addi r4,r9,29568
	ctx.r4.s64 = ctx.r9.s64 + 29568;
	// addi r3,r8,29780
	ctx.r3.s64 = ctx.r8.s64 + 29780;
	// li r5,102
	ctx.r5.s64 = 102;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82786EEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82786EEC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x82786f68
	goto loc_82786F68;
loc_82786EF4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8278e220
	ctx.lr = 0x82786F00;
	sub_8278E220(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x82786e94
	if (ctx.cr6.eq) goto loc_82786E94;
	// rlwinm. r11,r4,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82786f44
	if (!ctx.cr0.eq) goto loc_82786F44;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// ld r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// rlwinm r9,r4,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,6112
	ctx.r11.s64 = ctx.r11.s64 + 6112;
	// ldx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r11.u32);
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82786f3c
	if (!ctx.cr6.eq) goto loc_82786F3C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82786F3C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// b 0x82786f48
	goto loc_82786F48;
loc_82786F44:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82786F48:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82786e94
	if (ctx.cr0.eq) goto loc_82786E94;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82786e68
	if (ctx.cr6.eq) goto loc_82786E68;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
	// b 0x82786e68
	goto loc_82786E68;
loc_82786F64:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_82786F68:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82786F70"))) PPC_WEAK_FUNC(sub_82786F70);
PPC_FUNC_IMPL(__imp__sub_82786F70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82786F78;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r30.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// rlwinm. r11,r30,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82786fb8
	if (!ctx.cr0.eq) goto loc_82786FB8;
	// bl 0x8278d098
	ctx.lr = 0x82786F98;
	sub_8278D098(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,6112
	ctx.r11.s64 = ctx.r11.s64 + 6112;
	// ldx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r11.u32);
loc_82786FA8:
	// ld r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// b 0x8278706c
	goto loc_8278706C;
loc_82786FB8:
	// bl 0x8278e220
	ctx.lr = 0x82786FBC;
	sub_8278E220(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x82786ff4
	if (ctx.cr6.eq) goto loc_82786FF4;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8278d098
	ctx.lr = 0x82786FD8;
	sub_8278D098(ctx, base);
	// rlwinm. r11,r30,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8278706c
	if (!ctx.cr0.eq) goto loc_8278706C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// rlwinm r9,r30,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,6112
	ctx.r11.s64 = ctx.r11.s64 + 6112;
	// ldx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r11.u32);
	// b 0x82786fa8
	goto loc_82786FA8;
loc_82786FF4:
	// addi r29,r31,24
	ctx.r29.s64 = ctx.r31.s64 + 24;
	// addi r4,r1,188
	ctx.r4.s64 = ctx.r1.s64 + 188;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827a7bf0
	ctx.lr = 0x82787004;
	sub_827A7BF0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82787028
	if (ctx.cr0.eq) goto loc_82787028;
	// li r5,4
	ctx.r5.s64 = 4;
	// lhz r29,0(r28)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x827a7a40
	ctx.lr = 0x82787020;
	sub_827A7A40(ctx, base);
	// sth r29,16(r30)
	PPC_STORE_U16(ctx.r30.u32 + 16, ctx.r29.u16);
	// b 0x8278706c
	goto loc_8278706C;
loc_82787028:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,15
	ctx.r5.s64 = 15;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,97
	ctx.r3.s64 = ctx.r1.s64 + 97;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// bl 0x82a4efb0
	ctx.lr = 0x82787044;
	sub_82A4EFB0(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lhz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x827a7a40
	ctx.lr = 0x82787058;
	sub_827A7A40(ctx, base);
	// sth r30,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r30.u16);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,188
	ctx.r4.s64 = ctx.r1.s64 + 188;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827a7b60
	ctx.lr = 0x8278706C;
	sub_827A7B60(ctx, base);
loc_8278706C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82787078"))) PPC_WEAK_FUNC(sub_82787078);
PPC_FUNC_IMPL(__imp__sub_82787078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82787080;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// rlwinm. r11,r31,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r29,0
	ctx.r29.s64 = 0;
	// bne 0x827870ec
	if (!ctx.cr0.eq) goto loc_827870EC;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// ld r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// rlwinm r9,r31,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,6112
	ctx.r11.s64 = ctx.r11.s64 + 6112;
	// ldx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r11.u32);
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x827870c4
	if (!ctx.cr6.eq) goto loc_827870C4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_827870C4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82787150
	if (ctx.cr0.eq) goto loc_82787150;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_827870D0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8278c228
	ctx.lr = 0x827870D8;
	sub_8278C228(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// sth r11,0(r28)
	PPC_STORE_U16(ctx.r28.u32 + 0, ctx.r11.u16);
	// b 0x82787160
	goto loc_82787160;
loc_827870EC:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x827a7bf0
	ctx.lr = 0x827870FC;
	sub_827A7BF0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82787168
	if (ctx.cr0.eq) goto loc_82787168;
	// addi r29,r3,16
	ctx.r29.s64 = ctx.r3.s64 + 16;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82787150
	if (ctx.cr6.eq) goto loc_82787150;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82787148
	if (ctx.cr6.eq) goto loc_82787148;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// addi r6,r10,29752
	ctx.r6.s64 = ctx.r10.s64 + 29752;
	// lwz r11,17176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17176);
	// addi r4,r9,29568
	ctx.r4.s64 = ctx.r9.s64 + 29568;
	// addi r3,r8,29780
	ctx.r3.s64 = ctx.r8.s64 + 29780;
	// li r5,102
	ctx.r5.s64 = 102;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82787148;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82787148:
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// sth r11,0(r28)
	PPC_STORE_U16(ctx.r28.u32 + 0, ctx.r11.u16);
loc_82787150:
	// addi r11,r29,0
	ctx.r11.s64 = ctx.r29.s64 + 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
loc_82787160:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
loc_82787168:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8278e220
	ctx.lr = 0x82787174;
	sub_8278E220(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x82787150
	if (ctx.cr6.eq) goto loc_82787150;
	// rlwinm. r11,r4,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x827871b8
	if (!ctx.cr0.eq) goto loc_827871B8;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// ld r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// rlwinm r9,r4,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,6112
	ctx.r11.s64 = ctx.r11.s64 + 6112;
	// ldx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r11.u32);
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x827871b0
	if (!ctx.cr6.eq) goto loc_827871B0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_827871B0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// b 0x827871bc
	goto loc_827871BC;
loc_827871B8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_827871BC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82787150
	if (ctx.cr0.eq) goto loc_82787150;
	// b 0x827870d0
	goto loc_827870D0;
}

__attribute__((alias("__imp__sub_827871C8"))) PPC_WEAK_FUNC(sub_827871C8);
PPC_FUNC_IMPL(__imp__sub_827871C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x827871D0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// rlwinm. r11,r31,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// bne 0x82787244
	if (!ctx.cr0.eq) goto loc_82787244;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// ld r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// rlwinm r9,r31,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,6112
	ctx.r11.s64 = ctx.r11.s64 + 6112;
	// ldx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r11.u32);
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8278721c
	if (!ctx.cr6.eq) goto loc_8278721C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8278721C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82787264
	if (ctx.cr0.eq) goto loc_82787264;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82787234
	if (ctx.cr6.eq) goto loc_82787234;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
loc_82787234:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82787238:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8278c338
	ctx.lr = 0x82787240;
	sub_8278C338(ctx, base);
	// b 0x82787338
	goto loc_82787338;
loc_82787244:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x827a7bf0
	ctx.lr = 0x82787254;
	sub_827A7BF0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827872c4
	if (ctx.cr0.eq) goto loc_827872C4;
	// lwz r27,0(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r28,r3,16
	ctx.r28.s64 = ctx.r3.s64 + 16;
loc_82787264:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82787280
	if (ctx.cr6.eq) goto loc_82787280;
	// addi r11,r28,0
	ctx.r11.s64 = ctx.r28.s64 + 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
loc_82787280:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82787334
	if (ctx.cr6.eq) goto loc_82787334;
	// cmpwi cr6,r27,5
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 5, ctx.xer);
	// beq cr6,0x827872bc
	if (ctx.cr6.eq) goto loc_827872BC;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// addi r6,r10,29804
	ctx.r6.s64 = ctx.r10.s64 + 29804;
	// lwz r11,17176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17176);
	// addi r4,r9,29568
	ctx.r4.s64 = ctx.r9.s64 + 29568;
	// addi r3,r8,29832
	ctx.r3.s64 = ctx.r8.s64 + 29832;
	// li r5,103
	ctx.r5.s64 = 103;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827872BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827872BC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x82787338
	goto loc_82787338;
loc_827872C4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8278e220
	ctx.lr = 0x827872D0;
	sub_8278E220(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x82787264
	if (ctx.cr6.eq) goto loc_82787264;
	// rlwinm. r11,r4,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82787314
	if (!ctx.cr0.eq) goto loc_82787314;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// ld r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// rlwinm r9,r4,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,6112
	ctx.r11.s64 = ctx.r11.s64 + 6112;
	// ldx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r11.u32);
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8278730c
	if (!ctx.cr6.eq) goto loc_8278730C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8278730C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// b 0x82787318
	goto loc_82787318;
loc_82787314:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82787318:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82787264
	if (ctx.cr0.eq) goto loc_82787264;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82787238
	if (ctx.cr6.eq) goto loc_82787238;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
	// b 0x82787238
	goto loc_82787238;
loc_82787334:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_82787338:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82787340"))) PPC_WEAK_FUNC(sub_82787340);
PPC_FUNC_IMPL(__imp__sub_82787340) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82787348;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r30.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// rlwinm. r11,r30,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82787388
	if (!ctx.cr0.eq) goto loc_82787388;
	// bl 0x8278d200
	ctx.lr = 0x82787368;
	sub_8278D200(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,6112
	ctx.r11.s64 = ctx.r11.s64 + 6112;
	// ldx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r11.u32);
loc_82787378:
	// ld r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// b 0x8278743c
	goto loc_8278743C;
loc_82787388:
	// bl 0x8278e220
	ctx.lr = 0x8278738C;
	sub_8278E220(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x827873c4
	if (ctx.cr6.eq) goto loc_827873C4;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8278d200
	ctx.lr = 0x827873A8;
	sub_8278D200(ctx, base);
	// rlwinm. r11,r30,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8278743c
	if (!ctx.cr0.eq) goto loc_8278743C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// rlwinm r9,r30,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,6112
	ctx.r11.s64 = ctx.r11.s64 + 6112;
	// ldx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r11.u32);
	// b 0x82787378
	goto loc_82787378;
loc_827873C4:
	// addi r29,r31,24
	ctx.r29.s64 = ctx.r31.s64 + 24;
	// addi r4,r1,188
	ctx.r4.s64 = ctx.r1.s64 + 188;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827a7bf0
	ctx.lr = 0x827873D4;
	sub_827A7BF0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x827873f8
	if (ctx.cr0.eq) goto loc_827873F8;
	// li r5,5
	ctx.r5.s64 = 5;
	// lwz r29,0(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x827a7a40
	ctx.lr = 0x827873F0;
	sub_827A7A40(ctx, base);
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// b 0x8278743c
	goto loc_8278743C;
loc_827873F8:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,15
	ctx.r5.s64 = 15;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,97
	ctx.r3.s64 = ctx.r1.s64 + 97;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// bl 0x82a4efb0
	ctx.lr = 0x82787414;
	sub_82A4EFB0(ctx, base);
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x827a7a40
	ctx.lr = 0x82787428;
	sub_827A7A40(ctx, base);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,188
	ctx.r4.s64 = ctx.r1.s64 + 188;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827a7b60
	ctx.lr = 0x8278743C;
	sub_827A7B60(ctx, base);
loc_8278743C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82787448"))) PPC_WEAK_FUNC(sub_82787448);
PPC_FUNC_IMPL(__imp__sub_82787448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82787450;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// rlwinm. r11,r31,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r29,0
	ctx.r29.s64 = 0;
	// bne 0x827874bc
	if (!ctx.cr0.eq) goto loc_827874BC;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// ld r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// rlwinm r9,r31,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,6112
	ctx.r11.s64 = ctx.r11.s64 + 6112;
	// ldx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r11.u32);
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82787494
	if (!ctx.cr6.eq) goto loc_82787494;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82787494:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82787520
	if (ctx.cr0.eq) goto loc_82787520;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_827874A0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8278c338
	ctx.lr = 0x827874A8;
	sub_8278C338(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// b 0x82787530
	goto loc_82787530;
loc_827874BC:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x827a7bf0
	ctx.lr = 0x827874CC;
	sub_827A7BF0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82787538
	if (ctx.cr0.eq) goto loc_82787538;
	// addi r29,r3,16
	ctx.r29.s64 = ctx.r3.s64 + 16;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82787520
	if (ctx.cr6.eq) goto loc_82787520;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82787518
	if (ctx.cr6.eq) goto loc_82787518;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// addi r6,r10,29804
	ctx.r6.s64 = ctx.r10.s64 + 29804;
	// lwz r11,17176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17176);
	// addi r4,r9,29568
	ctx.r4.s64 = ctx.r9.s64 + 29568;
	// addi r3,r8,29832
	ctx.r3.s64 = ctx.r8.s64 + 29832;
	// li r5,103
	ctx.r5.s64 = 103;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82787518;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82787518:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82787520:
	// addi r11,r29,0
	ctx.r11.s64 = ctx.r29.s64 + 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
loc_82787530:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
loc_82787538:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8278e220
	ctx.lr = 0x82787544;
	sub_8278E220(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x82787520
	if (ctx.cr6.eq) goto loc_82787520;
	// rlwinm. r11,r4,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82787588
	if (!ctx.cr0.eq) goto loc_82787588;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// ld r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// rlwinm r9,r4,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,6112
	ctx.r11.s64 = ctx.r11.s64 + 6112;
	// ldx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r11.u32);
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82787580
	if (!ctx.cr6.eq) goto loc_82787580;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82787580:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// b 0x8278758c
	goto loc_8278758C;
loc_82787588:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8278758C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82787520
	if (ctx.cr0.eq) goto loc_82787520;
	// b 0x827874a0
	goto loc_827874A0;
}

__attribute__((alias("__imp__sub_82787598"))) PPC_WEAK_FUNC(sub_82787598);
PPC_FUNC_IMPL(__imp__sub_82787598) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x827875A0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// rlwinm. r11,r31,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// bne 0x82787614
	if (!ctx.cr0.eq) goto loc_82787614;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// ld r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// rlwinm r9,r31,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,6112
	ctx.r11.s64 = ctx.r11.s64 + 6112;
	// ldx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r11.u32);
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x827875ec
	if (!ctx.cr6.eq) goto loc_827875EC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_827875EC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82787634
	if (ctx.cr0.eq) goto loc_82787634;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82787604
	if (ctx.cr6.eq) goto loc_82787604;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
loc_82787604:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82787608:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8278c448
	ctx.lr = 0x82787610;
	sub_8278C448(ctx, base);
	// b 0x82787708
	goto loc_82787708;
loc_82787614:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x827a7bf0
	ctx.lr = 0x82787624;
	sub_827A7BF0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82787694
	if (ctx.cr0.eq) goto loc_82787694;
	// lwz r27,0(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r28,r3,16
	ctx.r28.s64 = ctx.r3.s64 + 16;
loc_82787634:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82787650
	if (ctx.cr6.eq) goto loc_82787650;
	// addi r11,r28,0
	ctx.r11.s64 = ctx.r28.s64 + 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
loc_82787650:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82787704
	if (ctx.cr6.eq) goto loc_82787704;
	// cmpwi cr6,r27,9
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 9, ctx.xer);
	// beq cr6,0x8278768c
	if (ctx.cr6.eq) goto loc_8278768C;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// addi r6,r10,29856
	ctx.r6.s64 = ctx.r10.s64 + 29856;
	// lwz r11,17176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17176);
	// addi r4,r9,29568
	ctx.r4.s64 = ctx.r9.s64 + 29568;
	// addi r3,r8,29884
	ctx.r3.s64 = ctx.r8.s64 + 29884;
	// li r5,104
	ctx.r5.s64 = 104;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8278768C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8278768C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x82787708
	goto loc_82787708;
loc_82787694:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8278e220
	ctx.lr = 0x827876A0;
	sub_8278E220(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x82787634
	if (ctx.cr6.eq) goto loc_82787634;
	// rlwinm. r11,r4,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x827876e4
	if (!ctx.cr0.eq) goto loc_827876E4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// ld r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// rlwinm r9,r4,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,6112
	ctx.r11.s64 = ctx.r11.s64 + 6112;
	// ldx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r11.u32);
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x827876dc
	if (!ctx.cr6.eq) goto loc_827876DC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_827876DC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// b 0x827876e8
	goto loc_827876E8;
loc_827876E4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_827876E8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82787634
	if (ctx.cr0.eq) goto loc_82787634;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82787608
	if (ctx.cr6.eq) goto loc_82787608;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
	// b 0x82787608
	goto loc_82787608;
loc_82787704:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_82787708:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82787710"))) PPC_WEAK_FUNC(sub_82787710);
PPC_FUNC_IMPL(__imp__sub_82787710) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82787718;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r30.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// rlwinm. r11,r30,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8278775c
	if (!ctx.cr0.eq) goto loc_8278775C;
	// bl 0x8278d368
	ctx.lr = 0x8278773C;
	sub_8278D368(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,6112
	ctx.r11.s64 = ctx.r11.s64 + 6112;
	// ldx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r11.u32);
loc_8278774C:
	// ld r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// b 0x82787810
	goto loc_82787810;
loc_8278775C:
	// bl 0x8278e220
	ctx.lr = 0x82787760;
	sub_8278E220(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x82787798
	if (ctx.cr6.eq) goto loc_82787798;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8278d368
	ctx.lr = 0x8278777C;
	sub_8278D368(ctx, base);
	// rlwinm. r11,r30,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82787810
	if (!ctx.cr0.eq) goto loc_82787810;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// rlwinm r9,r30,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,6112
	ctx.r11.s64 = ctx.r11.s64 + 6112;
	// ldx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r11.u32);
	// b 0x8278774c
	goto loc_8278774C;
loc_82787798:
	// addi r29,r31,24
	ctx.r29.s64 = ctx.r31.s64 + 24;
	// addi r4,r1,188
	ctx.r4.s64 = ctx.r1.s64 + 188;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827a7bf0
	ctx.lr = 0x827877A8;
	sub_827A7BF0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x827877cc
	if (ctx.cr0.eq) goto loc_827877CC;
	// li r5,9
	ctx.r5.s64 = 9;
	// lfs f31,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x827a7a40
	ctx.lr = 0x827877C4;
	sub_827A7A40(ctx, base);
	// stfs f31,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// b 0x82787810
	goto loc_82787810;
loc_827877CC:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,15
	ctx.r5.s64 = 15;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,97
	ctx.r3.s64 = ctx.r1.s64 + 97;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// bl 0x82a4efb0
	ctx.lr = 0x827877E8;
	sub_82A4EFB0(ctx, base);
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f31,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x827a7a40
	ctx.lr = 0x827877FC;
	sub_827A7A40(ctx, base);
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,188
	ctx.r4.s64 = ctx.r1.s64 + 188;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827a7b60
	ctx.lr = 0x82787810;
	sub_827A7B60(ctx, base);
loc_82787810:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82787820"))) PPC_WEAK_FUNC(sub_82787820);
PPC_FUNC_IMPL(__imp__sub_82787820) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82787828;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// rlwinm. r11,r31,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r29,0
	ctx.r29.s64 = 0;
	// bne 0x82787894
	if (!ctx.cr0.eq) goto loc_82787894;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// ld r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// rlwinm r9,r31,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,6112
	ctx.r11.s64 = ctx.r11.s64 + 6112;
	// ldx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r11.u32);
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8278786c
	if (!ctx.cr6.eq) goto loc_8278786C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8278786C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827878f8
	if (ctx.cr0.eq) goto loc_827878F8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82787878:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8278c448
	ctx.lr = 0x82787880;
	sub_8278C448(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// b 0x82787908
	goto loc_82787908;
loc_82787894:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x827a7bf0
	ctx.lr = 0x827878A4;
	sub_827A7BF0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82787910
	if (ctx.cr0.eq) goto loc_82787910;
	// addi r29,r3,16
	ctx.r29.s64 = ctx.r3.s64 + 16;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x827878f8
	if (ctx.cr6.eq) goto loc_827878F8;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x827878f0
	if (ctx.cr6.eq) goto loc_827878F0;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// addi r6,r10,29856
	ctx.r6.s64 = ctx.r10.s64 + 29856;
	// lwz r11,17176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17176);
	// addi r4,r9,29568
	ctx.r4.s64 = ctx.r9.s64 + 29568;
	// addi r3,r8,29884
	ctx.r3.s64 = ctx.r8.s64 + 29884;
	// li r5,104
	ctx.r5.s64 = 104;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827878F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827878F0:
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
loc_827878F8:
	// addi r11,r29,0
	ctx.r11.s64 = ctx.r29.s64 + 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
loc_82787908:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
loc_82787910:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8278e220
	ctx.lr = 0x8278791C;
	sub_8278E220(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x827878f8
	if (ctx.cr6.eq) goto loc_827878F8;
	// rlwinm. r11,r4,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82787960
	if (!ctx.cr0.eq) goto loc_82787960;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// ld r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// rlwinm r9,r4,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,6112
	ctx.r11.s64 = ctx.r11.s64 + 6112;
	// ldx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r11.u32);
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82787958
	if (!ctx.cr6.eq) goto loc_82787958;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82787958:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// b 0x82787964
	goto loc_82787964;
loc_82787960:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82787964:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827878f8
	if (ctx.cr0.eq) goto loc_827878F8;
	// b 0x82787878
	goto loc_82787878;
}

__attribute__((alias("__imp__sub_82787970"))) PPC_WEAK_FUNC(sub_82787970);
PPC_FUNC_IMPL(__imp__sub_82787970) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82787978;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// rlwinm. r11,r31,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// bne 0x827879ec
	if (!ctx.cr0.eq) goto loc_827879EC;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// ld r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// rlwinm r9,r31,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,6112
	ctx.r11.s64 = ctx.r11.s64 + 6112;
	// ldx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r11.u32);
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x827879c4
	if (!ctx.cr6.eq) goto loc_827879C4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_827879C4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82787a0c
	if (ctx.cr0.eq) goto loc_82787A0C;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x827879dc
	if (ctx.cr6.eq) goto loc_827879DC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
loc_827879DC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_827879E0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8278c558
	ctx.lr = 0x827879E8;
	sub_8278C558(ctx, base);
	// b 0x82787ae0
	goto loc_82787AE0;
loc_827879EC:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x827a7bf0
	ctx.lr = 0x827879FC;
	sub_827A7BF0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82787a6c
	if (ctx.cr0.eq) goto loc_82787A6C;
	// lwz r27,0(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r28,r3,16
	ctx.r28.s64 = ctx.r3.s64 + 16;
loc_82787A0C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82787a28
	if (ctx.cr6.eq) goto loc_82787A28;
	// addi r11,r28,0
	ctx.r11.s64 = ctx.r28.s64 + 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
loc_82787A28:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82787adc
	if (ctx.cr6.eq) goto loc_82787ADC;
	// cmpwi cr6,r27,6
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 6, ctx.xer);
	// beq cr6,0x82787a64
	if (ctx.cr6.eq) goto loc_82787A64;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// addi r6,r10,29908
	ctx.r6.s64 = ctx.r10.s64 + 29908;
	// lwz r11,17176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17176);
	// addi r4,r9,29568
	ctx.r4.s64 = ctx.r9.s64 + 29568;
	// addi r3,r8,29936
	ctx.r3.s64 = ctx.r8.s64 + 29936;
	// li r5,105
	ctx.r5.s64 = 105;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82787A64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82787A64:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x82787ae0
	goto loc_82787AE0;
loc_82787A6C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8278e220
	ctx.lr = 0x82787A78;
	sub_8278E220(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x82787a0c
	if (ctx.cr6.eq) goto loc_82787A0C;
	// rlwinm. r11,r4,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82787abc
	if (!ctx.cr0.eq) goto loc_82787ABC;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// ld r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// rlwinm r9,r4,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,6112
	ctx.r11.s64 = ctx.r11.s64 + 6112;
	// ldx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r11.u32);
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82787ab4
	if (!ctx.cr6.eq) goto loc_82787AB4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82787AB4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// b 0x82787ac0
	goto loc_82787AC0;
loc_82787ABC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82787AC0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82787a0c
	if (ctx.cr0.eq) goto loc_82787A0C;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x827879e0
	if (ctx.cr6.eq) goto loc_827879E0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
	// b 0x827879e0
	goto loc_827879E0;
loc_82787ADC:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_82787AE0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82787AE8"))) PPC_WEAK_FUNC(sub_82787AE8);
PPC_FUNC_IMPL(__imp__sub_82787AE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82787AF0;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r30.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// rlwinm. r11,r30,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82787b30
	if (!ctx.cr0.eq) goto loc_82787B30;
	// bl 0x8278d4d8
	ctx.lr = 0x82787B10;
	sub_8278D4D8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,6112
	ctx.r11.s64 = ctx.r11.s64 + 6112;
	// ldx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r11.u32);
loc_82787B20:
	// ld r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// b 0x82787be4
	goto loc_82787BE4;
loc_82787B30:
	// bl 0x8278e220
	ctx.lr = 0x82787B34;
	sub_8278E220(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x82787b6c
	if (ctx.cr6.eq) goto loc_82787B6C;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8278d4d8
	ctx.lr = 0x82787B50;
	sub_8278D4D8(ctx, base);
	// rlwinm. r11,r30,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82787be4
	if (!ctx.cr0.eq) goto loc_82787BE4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// rlwinm r9,r30,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,6112
	ctx.r11.s64 = ctx.r11.s64 + 6112;
	// ldx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r11.u32);
	// b 0x82787b20
	goto loc_82787B20;
loc_82787B6C:
	// addi r29,r31,24
	ctx.r29.s64 = ctx.r31.s64 + 24;
	// addi r4,r1,188
	ctx.r4.s64 = ctx.r1.s64 + 188;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827a7bf0
	ctx.lr = 0x82787B7C;
	sub_827A7BF0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82787ba0
	if (ctx.cr0.eq) goto loc_82787BA0;
	// li r5,6
	ctx.r5.s64 = 6;
	// lbz r29,0(r28)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x827a7a40
	ctx.lr = 0x82787B98;
	sub_827A7A40(ctx, base);
	// stb r29,16(r30)
	PPC_STORE_U8(ctx.r30.u32 + 16, ctx.r29.u8);
	// b 0x82787be4
	goto loc_82787BE4;
loc_82787BA0:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,15
	ctx.r5.s64 = 15;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,97
	ctx.r3.s64 = ctx.r1.s64 + 97;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// bl 0x82a4efb0
	ctx.lr = 0x82787BBC;
	sub_82A4EFB0(ctx, base);
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lbz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x827a7a40
	ctx.lr = 0x82787BD0;
	sub_827A7A40(ctx, base);
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,188
	ctx.r4.s64 = ctx.r1.s64 + 188;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827a7b60
	ctx.lr = 0x82787BE4;
	sub_827A7B60(ctx, base);
loc_82787BE4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82787BF0"))) PPC_WEAK_FUNC(sub_82787BF0);
PPC_FUNC_IMPL(__imp__sub_82787BF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82787BF8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// rlwinm. r11,r31,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r29,0
	ctx.r29.s64 = 0;
	// bne 0x82787c64
	if (!ctx.cr0.eq) goto loc_82787C64;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// ld r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// rlwinm r9,r31,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,6112
	ctx.r11.s64 = ctx.r11.s64 + 6112;
	// ldx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r11.u32);
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82787c3c
	if (!ctx.cr6.eq) goto loc_82787C3C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82787C3C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82787cc8
	if (ctx.cr0.eq) goto loc_82787CC8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82787C48:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8278c558
	ctx.lr = 0x82787C50;
	sub_8278C558(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r11,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r11.u8);
	// b 0x82787cd8
	goto loc_82787CD8;
loc_82787C64:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x827a7bf0
	ctx.lr = 0x82787C74;
	sub_827A7BF0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82787ce0
	if (ctx.cr0.eq) goto loc_82787CE0;
	// addi r29,r3,16
	ctx.r29.s64 = ctx.r3.s64 + 16;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82787cc8
	if (ctx.cr6.eq) goto loc_82787CC8;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x82787cc0
	if (ctx.cr6.eq) goto loc_82787CC0;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// addi r6,r10,29908
	ctx.r6.s64 = ctx.r10.s64 + 29908;
	// lwz r11,17176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17176);
	// addi r4,r9,29568
	ctx.r4.s64 = ctx.r9.s64 + 29568;
	// addi r3,r8,29936
	ctx.r3.s64 = ctx.r8.s64 + 29936;
	// li r5,105
	ctx.r5.s64 = 105;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82787CC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82787CC0:
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// stb r11,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r11.u8);
loc_82787CC8:
	// addi r11,r29,0
	ctx.r11.s64 = ctx.r29.s64 + 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
loc_82787CD8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
loc_82787CE0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8278e220
	ctx.lr = 0x82787CEC;
	sub_8278E220(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x82787cc8
	if (ctx.cr6.eq) goto loc_82787CC8;
	// rlwinm. r11,r4,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82787d30
	if (!ctx.cr0.eq) goto loc_82787D30;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// ld r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// rlwinm r9,r4,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,6112
	ctx.r11.s64 = ctx.r11.s64 + 6112;
	// ldx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r11.u32);
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82787d28
	if (!ctx.cr6.eq) goto loc_82787D28;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82787D28:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// b 0x82787d34
	goto loc_82787D34;
loc_82787D30:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82787D34:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82787cc8
	if (ctx.cr0.eq) goto loc_82787CC8;
	// b 0x82787c48
	goto loc_82787C48;
}

