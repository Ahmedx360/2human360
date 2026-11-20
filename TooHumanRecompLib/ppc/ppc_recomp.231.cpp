#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82F04518"))) PPC_WEAK_FUNC(sub_82F04518);
PPC_FUNC_IMPL(__imp__sub_82F04518) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,15184
	ctx.r11.s64 = ctx.r11.s64 + 15184;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f04540
	if (!ctx.cr6.eq) goto loc_82F04540;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F04540:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0454c
	if (ctx.cr6.eq) goto loc_82F0454C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0454C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,20712
	ctx.r9.s64 = ctx.r9.s64 + 20712;
	// addi r8,r10,20996
	ctx.r8.s64 = ctx.r10.s64 + 20996;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,407
	ctx.r10.s64 = 407;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-8824
	ctx.r3.s64 = ctx.r9.s64 + -8824;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F04580"))) PPC_WEAK_FUNC(sub_82F04580);
PPC_FUNC_IMPL(__imp__sub_82F04580) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,15204
	ctx.r11.s64 = ctx.r11.s64 + 15204;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f045a8
	if (!ctx.cr6.eq) goto loc_82F045A8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F045A8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f045b4
	if (ctx.cr6.eq) goto loc_82F045B4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F045B4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,20712
	ctx.r9.s64 = ctx.r9.s64 + 20712;
	// addi r8,r10,21016
	ctx.r8.s64 = ctx.r10.s64 + 21016;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,408
	ctx.r10.s64 = 408;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-8808
	ctx.r3.s64 = ctx.r9.s64 + -8808;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F045E8"))) PPC_WEAK_FUNC(sub_82F045E8);
PPC_FUNC_IMPL(__imp__sub_82F045E8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,15224
	ctx.r11.s64 = ctx.r11.s64 + 15224;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f04610
	if (!ctx.cr6.eq) goto loc_82F04610;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F04610:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0461c
	if (ctx.cr6.eq) goto loc_82F0461C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0461C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,20712
	ctx.r9.s64 = ctx.r9.s64 + 20712;
	// addi r8,r10,21032
	ctx.r8.s64 = ctx.r10.s64 + 21032;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,409
	ctx.r10.s64 = 409;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-8792
	ctx.r3.s64 = ctx.r9.s64 + -8792;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F04650"))) PPC_WEAK_FUNC(sub_82F04650);
PPC_FUNC_IMPL(__imp__sub_82F04650) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,15244
	ctx.r11.s64 = ctx.r11.s64 + 15244;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f04678
	if (!ctx.cr6.eq) goto loc_82F04678;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F04678:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f04684
	if (ctx.cr6.eq) goto loc_82F04684;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F04684:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,20712
	ctx.r9.s64 = ctx.r9.s64 + 20712;
	// addi r8,r10,21048
	ctx.r8.s64 = ctx.r10.s64 + 21048;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,410
	ctx.r10.s64 = 410;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-8776
	ctx.r3.s64 = ctx.r9.s64 + -8776;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F046B8"))) PPC_WEAK_FUNC(sub_82F046B8);
PPC_FUNC_IMPL(__imp__sub_82F046B8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,15264
	ctx.r11.s64 = ctx.r11.s64 + 15264;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f046e0
	if (!ctx.cr6.eq) goto loc_82F046E0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F046E0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f046ec
	if (ctx.cr6.eq) goto loc_82F046EC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F046EC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,20712
	ctx.r9.s64 = ctx.r9.s64 + 20712;
	// addi r8,r10,21064
	ctx.r8.s64 = ctx.r10.s64 + 21064;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,411
	ctx.r10.s64 = 411;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-8760
	ctx.r3.s64 = ctx.r9.s64 + -8760;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F04720"))) PPC_WEAK_FUNC(sub_82F04720);
PPC_FUNC_IMPL(__imp__sub_82F04720) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,15284
	ctx.r11.s64 = ctx.r11.s64 + 15284;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f04748
	if (!ctx.cr6.eq) goto loc_82F04748;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F04748:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f04754
	if (ctx.cr6.eq) goto loc_82F04754;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F04754:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,20712
	ctx.r9.s64 = ctx.r9.s64 + 20712;
	// addi r8,r10,21084
	ctx.r8.s64 = ctx.r10.s64 + 21084;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,412
	ctx.r10.s64 = 412;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-8744
	ctx.r3.s64 = ctx.r9.s64 + -8744;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F04788"))) PPC_WEAK_FUNC(sub_82F04788);
PPC_FUNC_IMPL(__imp__sub_82F04788) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,15304
	ctx.r11.s64 = ctx.r11.s64 + 15304;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f047b0
	if (!ctx.cr6.eq) goto loc_82F047B0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F047B0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f047bc
	if (ctx.cr6.eq) goto loc_82F047BC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F047BC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,20712
	ctx.r9.s64 = ctx.r9.s64 + 20712;
	// addi r8,r10,21104
	ctx.r8.s64 = ctx.r10.s64 + 21104;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,413
	ctx.r10.s64 = 413;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-8728
	ctx.r3.s64 = ctx.r9.s64 + -8728;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F047F0"))) PPC_WEAK_FUNC(sub_82F047F0);
PPC_FUNC_IMPL(__imp__sub_82F047F0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,15324
	ctx.r11.s64 = ctx.r11.s64 + 15324;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f04818
	if (!ctx.cr6.eq) goto loc_82F04818;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F04818:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f04824
	if (ctx.cr6.eq) goto loc_82F04824;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F04824:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,20712
	ctx.r9.s64 = ctx.r9.s64 + 20712;
	// addi r8,r10,21124
	ctx.r8.s64 = ctx.r10.s64 + 21124;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,414
	ctx.r10.s64 = 414;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-8712
	ctx.r3.s64 = ctx.r9.s64 + -8712;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F04858"))) PPC_WEAK_FUNC(sub_82F04858);
PPC_FUNC_IMPL(__imp__sub_82F04858) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,15344
	ctx.r11.s64 = ctx.r11.s64 + 15344;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f04880
	if (!ctx.cr6.eq) goto loc_82F04880;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F04880:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0488c
	if (ctx.cr6.eq) goto loc_82F0488C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0488C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,20712
	ctx.r9.s64 = ctx.r9.s64 + 20712;
	// addi r8,r10,21144
	ctx.r8.s64 = ctx.r10.s64 + 21144;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,415
	ctx.r10.s64 = 415;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-8696
	ctx.r3.s64 = ctx.r9.s64 + -8696;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F048C0"))) PPC_WEAK_FUNC(sub_82F048C0);
PPC_FUNC_IMPL(__imp__sub_82F048C0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,15364
	ctx.r11.s64 = ctx.r11.s64 + 15364;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f048e8
	if (!ctx.cr6.eq) goto loc_82F048E8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F048E8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f048f4
	if (ctx.cr6.eq) goto loc_82F048F4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F048F4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,20712
	ctx.r9.s64 = ctx.r9.s64 + 20712;
	// addi r8,r10,21164
	ctx.r8.s64 = ctx.r10.s64 + 21164;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,416
	ctx.r10.s64 = 416;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-8680
	ctx.r3.s64 = ctx.r9.s64 + -8680;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F04928"))) PPC_WEAK_FUNC(sub_82F04928);
PPC_FUNC_IMPL(__imp__sub_82F04928) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,15384
	ctx.r11.s64 = ctx.r11.s64 + 15384;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f04950
	if (!ctx.cr6.eq) goto loc_82F04950;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F04950:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0495c
	if (ctx.cr6.eq) goto loc_82F0495C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0495C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,20712
	ctx.r9.s64 = ctx.r9.s64 + 20712;
	// addi r8,r10,21184
	ctx.r8.s64 = ctx.r10.s64 + 21184;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,417
	ctx.r10.s64 = 417;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-8664
	ctx.r3.s64 = ctx.r9.s64 + -8664;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F04990"))) PPC_WEAK_FUNC(sub_82F04990);
PPC_FUNC_IMPL(__imp__sub_82F04990) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,15404
	ctx.r11.s64 = ctx.r11.s64 + 15404;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f049b8
	if (!ctx.cr6.eq) goto loc_82F049B8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F049B8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f049c4
	if (ctx.cr6.eq) goto loc_82F049C4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F049C4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,20712
	ctx.r9.s64 = ctx.r9.s64 + 20712;
	// addi r8,r10,21204
	ctx.r8.s64 = ctx.r10.s64 + 21204;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,418
	ctx.r10.s64 = 418;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-8648
	ctx.r3.s64 = ctx.r9.s64 + -8648;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F049F8"))) PPC_WEAK_FUNC(sub_82F049F8);
PPC_FUNC_IMPL(__imp__sub_82F049F8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,15424
	ctx.r11.s64 = ctx.r11.s64 + 15424;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f04a20
	if (!ctx.cr6.eq) goto loc_82F04A20;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F04A20:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f04a2c
	if (ctx.cr6.eq) goto loc_82F04A2C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F04A2C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,20712
	ctx.r9.s64 = ctx.r9.s64 + 20712;
	// addi r8,r10,21224
	ctx.r8.s64 = ctx.r10.s64 + 21224;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,419
	ctx.r10.s64 = 419;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-8632
	ctx.r3.s64 = ctx.r9.s64 + -8632;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F04A60"))) PPC_WEAK_FUNC(sub_82F04A60);
PPC_FUNC_IMPL(__imp__sub_82F04A60) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,15444
	ctx.r11.s64 = ctx.r11.s64 + 15444;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f04a88
	if (!ctx.cr6.eq) goto loc_82F04A88;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F04A88:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f04a94
	if (ctx.cr6.eq) goto loc_82F04A94;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F04A94:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,20712
	ctx.r9.s64 = ctx.r9.s64 + 20712;
	// addi r8,r10,21244
	ctx.r8.s64 = ctx.r10.s64 + 21244;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,420
	ctx.r10.s64 = 420;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-8616
	ctx.r3.s64 = ctx.r9.s64 + -8616;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F04AC8"))) PPC_WEAK_FUNC(sub_82F04AC8);
PPC_FUNC_IMPL(__imp__sub_82F04AC8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,15464
	ctx.r11.s64 = ctx.r11.s64 + 15464;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f04af0
	if (!ctx.cr6.eq) goto loc_82F04AF0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F04AF0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f04afc
	if (ctx.cr6.eq) goto loc_82F04AFC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F04AFC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,20712
	ctx.r9.s64 = ctx.r9.s64 + 20712;
	// addi r8,r10,21260
	ctx.r8.s64 = ctx.r10.s64 + 21260;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,421
	ctx.r10.s64 = 421;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-8600
	ctx.r3.s64 = ctx.r9.s64 + -8600;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F04B30"))) PPC_WEAK_FUNC(sub_82F04B30);
PPC_FUNC_IMPL(__imp__sub_82F04B30) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,15484
	ctx.r11.s64 = ctx.r11.s64 + 15484;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f04b58
	if (!ctx.cr6.eq) goto loc_82F04B58;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F04B58:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f04b64
	if (ctx.cr6.eq) goto loc_82F04B64;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F04B64:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,20712
	ctx.r9.s64 = ctx.r9.s64 + 20712;
	// addi r8,r10,21276
	ctx.r8.s64 = ctx.r10.s64 + 21276;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,422
	ctx.r10.s64 = 422;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-8584
	ctx.r3.s64 = ctx.r9.s64 + -8584;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F04B98"))) PPC_WEAK_FUNC(sub_82F04B98);
PPC_FUNC_IMPL(__imp__sub_82F04B98) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,15504
	ctx.r11.s64 = ctx.r11.s64 + 15504;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f04bc0
	if (!ctx.cr6.eq) goto loc_82F04BC0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F04BC0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f04bcc
	if (ctx.cr6.eq) goto loc_82F04BCC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F04BCC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,20712
	ctx.r9.s64 = ctx.r9.s64 + 20712;
	// addi r8,r10,21292
	ctx.r8.s64 = ctx.r10.s64 + 21292;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,423
	ctx.r10.s64 = 423;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-8568
	ctx.r3.s64 = ctx.r9.s64 + -8568;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F04C00"))) PPC_WEAK_FUNC(sub_82F04C00);
PPC_FUNC_IMPL(__imp__sub_82F04C00) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,15524
	ctx.r11.s64 = ctx.r11.s64 + 15524;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f04c28
	if (!ctx.cr6.eq) goto loc_82F04C28;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F04C28:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f04c34
	if (ctx.cr6.eq) goto loc_82F04C34;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F04C34:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,20712
	ctx.r9.s64 = ctx.r9.s64 + 20712;
	// addi r8,r10,21308
	ctx.r8.s64 = ctx.r10.s64 + 21308;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,424
	ctx.r10.s64 = 424;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-8552
	ctx.r3.s64 = ctx.r9.s64 + -8552;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F04C68"))) PPC_WEAK_FUNC(sub_82F04C68);
PPC_FUNC_IMPL(__imp__sub_82F04C68) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,15544
	ctx.r11.s64 = ctx.r11.s64 + 15544;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f04c90
	if (!ctx.cr6.eq) goto loc_82F04C90;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F04C90:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f04c9c
	if (ctx.cr6.eq) goto loc_82F04C9C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F04C9C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,20712
	ctx.r9.s64 = ctx.r9.s64 + 20712;
	// addi r8,r10,21324
	ctx.r8.s64 = ctx.r10.s64 + 21324;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,425
	ctx.r10.s64 = 425;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-8536
	ctx.r3.s64 = ctx.r9.s64 + -8536;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F04CD0"))) PPC_WEAK_FUNC(sub_82F04CD0);
PPC_FUNC_IMPL(__imp__sub_82F04CD0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,15564
	ctx.r11.s64 = ctx.r11.s64 + 15564;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f04cf8
	if (!ctx.cr6.eq) goto loc_82F04CF8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F04CF8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f04d04
	if (ctx.cr6.eq) goto loc_82F04D04;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F04D04:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,20712
	ctx.r9.s64 = ctx.r9.s64 + 20712;
	// addi r8,r10,21340
	ctx.r8.s64 = ctx.r10.s64 + 21340;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,426
	ctx.r10.s64 = 426;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-8520
	ctx.r3.s64 = ctx.r9.s64 + -8520;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F04D38"))) PPC_WEAK_FUNC(sub_82F04D38);
PPC_FUNC_IMPL(__imp__sub_82F04D38) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,15584
	ctx.r11.s64 = ctx.r11.s64 + 15584;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f04d60
	if (!ctx.cr6.eq) goto loc_82F04D60;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F04D60:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f04d6c
	if (ctx.cr6.eq) goto loc_82F04D6C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F04D6C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,20712
	ctx.r9.s64 = ctx.r9.s64 + 20712;
	// addi r8,r10,21360
	ctx.r8.s64 = ctx.r10.s64 + 21360;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,427
	ctx.r10.s64 = 427;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-8504
	ctx.r3.s64 = ctx.r9.s64 + -8504;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F04DA0"))) PPC_WEAK_FUNC(sub_82F04DA0);
PPC_FUNC_IMPL(__imp__sub_82F04DA0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,15604
	ctx.r11.s64 = ctx.r11.s64 + 15604;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f04dc8
	if (!ctx.cr6.eq) goto loc_82F04DC8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F04DC8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f04dd4
	if (ctx.cr6.eq) goto loc_82F04DD4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F04DD4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,20712
	ctx.r9.s64 = ctx.r9.s64 + 20712;
	// addi r8,r10,21380
	ctx.r8.s64 = ctx.r10.s64 + 21380;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,428
	ctx.r10.s64 = 428;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-8488
	ctx.r3.s64 = ctx.r9.s64 + -8488;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F04E08"))) PPC_WEAK_FUNC(sub_82F04E08);
PPC_FUNC_IMPL(__imp__sub_82F04E08) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,15624
	ctx.r11.s64 = ctx.r11.s64 + 15624;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f04e30
	if (!ctx.cr6.eq) goto loc_82F04E30;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F04E30:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f04e3c
	if (ctx.cr6.eq) goto loc_82F04E3C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F04E3C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,20712
	ctx.r9.s64 = ctx.r9.s64 + 20712;
	// addi r8,r10,21400
	ctx.r8.s64 = ctx.r10.s64 + 21400;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,429
	ctx.r10.s64 = 429;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-8472
	ctx.r3.s64 = ctx.r9.s64 + -8472;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F04E70"))) PPC_WEAK_FUNC(sub_82F04E70);
PPC_FUNC_IMPL(__imp__sub_82F04E70) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,15644
	ctx.r11.s64 = ctx.r11.s64 + 15644;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f04e98
	if (!ctx.cr6.eq) goto loc_82F04E98;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F04E98:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f04ea4
	if (ctx.cr6.eq) goto loc_82F04EA4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F04EA4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,20712
	ctx.r9.s64 = ctx.r9.s64 + 20712;
	// addi r8,r10,21420
	ctx.r8.s64 = ctx.r10.s64 + 21420;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,430
	ctx.r10.s64 = 430;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-8456
	ctx.r3.s64 = ctx.r9.s64 + -8456;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F04ED8"))) PPC_WEAK_FUNC(sub_82F04ED8);
PPC_FUNC_IMPL(__imp__sub_82F04ED8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,15664
	ctx.r11.s64 = ctx.r11.s64 + 15664;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f04f00
	if (!ctx.cr6.eq) goto loc_82F04F00;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F04F00:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f04f0c
	if (ctx.cr6.eq) goto loc_82F04F0C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F04F0C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,20712
	ctx.r9.s64 = ctx.r9.s64 + 20712;
	// addi r8,r10,21440
	ctx.r8.s64 = ctx.r10.s64 + 21440;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,431
	ctx.r10.s64 = 431;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-8440
	ctx.r3.s64 = ctx.r9.s64 + -8440;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F04F40"))) PPC_WEAK_FUNC(sub_82F04F40);
PPC_FUNC_IMPL(__imp__sub_82F04F40) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,15684
	ctx.r11.s64 = ctx.r11.s64 + 15684;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f04f68
	if (!ctx.cr6.eq) goto loc_82F04F68;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F04F68:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f04f74
	if (ctx.cr6.eq) goto loc_82F04F74;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F04F74:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,20712
	ctx.r9.s64 = ctx.r9.s64 + 20712;
	// addi r8,r10,21460
	ctx.r8.s64 = ctx.r10.s64 + 21460;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,432
	ctx.r10.s64 = 432;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-8424
	ctx.r3.s64 = ctx.r9.s64 + -8424;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F04FA8"))) PPC_WEAK_FUNC(sub_82F04FA8);
PPC_FUNC_IMPL(__imp__sub_82F04FA8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,15704
	ctx.r11.s64 = ctx.r11.s64 + 15704;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f04fd0
	if (!ctx.cr6.eq) goto loc_82F04FD0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F04FD0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f04fdc
	if (ctx.cr6.eq) goto loc_82F04FDC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F04FDC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,20712
	ctx.r9.s64 = ctx.r9.s64 + 20712;
	// addi r8,r10,21480
	ctx.r8.s64 = ctx.r10.s64 + 21480;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,433
	ctx.r10.s64 = 433;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-8408
	ctx.r3.s64 = ctx.r9.s64 + -8408;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F05010"))) PPC_WEAK_FUNC(sub_82F05010);
PPC_FUNC_IMPL(__imp__sub_82F05010) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,15724
	ctx.r11.s64 = ctx.r11.s64 + 15724;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f05038
	if (!ctx.cr6.eq) goto loc_82F05038;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F05038:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f05044
	if (ctx.cr6.eq) goto loc_82F05044;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F05044:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,20712
	ctx.r9.s64 = ctx.r9.s64 + 20712;
	// addi r8,r10,21500
	ctx.r8.s64 = ctx.r10.s64 + 21500;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,434
	ctx.r10.s64 = 434;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-8392
	ctx.r3.s64 = ctx.r9.s64 + -8392;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F05078"))) PPC_WEAK_FUNC(sub_82F05078);
PPC_FUNC_IMPL(__imp__sub_82F05078) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,15744
	ctx.r11.s64 = ctx.r11.s64 + 15744;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f050a0
	if (!ctx.cr6.eq) goto loc_82F050A0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F050A0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f050ac
	if (ctx.cr6.eq) goto loc_82F050AC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F050AC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,20712
	ctx.r9.s64 = ctx.r9.s64 + 20712;
	// addi r8,r10,21520
	ctx.r8.s64 = ctx.r10.s64 + 21520;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,435
	ctx.r10.s64 = 435;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-8376
	ctx.r3.s64 = ctx.r9.s64 + -8376;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F050E0"))) PPC_WEAK_FUNC(sub_82F050E0);
PPC_FUNC_IMPL(__imp__sub_82F050E0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,15764
	ctx.r11.s64 = ctx.r11.s64 + 15764;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f05108
	if (!ctx.cr6.eq) goto loc_82F05108;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F05108:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f05114
	if (ctx.cr6.eq) goto loc_82F05114;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F05114:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,20712
	ctx.r9.s64 = ctx.r9.s64 + 20712;
	// addi r8,r10,21540
	ctx.r8.s64 = ctx.r10.s64 + 21540;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,436
	ctx.r10.s64 = 436;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-8360
	ctx.r3.s64 = ctx.r9.s64 + -8360;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F05148"))) PPC_WEAK_FUNC(sub_82F05148);
PPC_FUNC_IMPL(__imp__sub_82F05148) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,15784
	ctx.r11.s64 = ctx.r11.s64 + 15784;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f05170
	if (!ctx.cr6.eq) goto loc_82F05170;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F05170:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0517c
	if (ctx.cr6.eq) goto loc_82F0517C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0517C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,20712
	ctx.r9.s64 = ctx.r9.s64 + 20712;
	// addi r8,r10,21560
	ctx.r8.s64 = ctx.r10.s64 + 21560;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,437
	ctx.r10.s64 = 437;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-8344
	ctx.r3.s64 = ctx.r9.s64 + -8344;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F051B0"))) PPC_WEAK_FUNC(sub_82F051B0);
PPC_FUNC_IMPL(__imp__sub_82F051B0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,15804
	ctx.r11.s64 = ctx.r11.s64 + 15804;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f051d8
	if (!ctx.cr6.eq) goto loc_82F051D8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F051D8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f051e4
	if (ctx.cr6.eq) goto loc_82F051E4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F051E4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,20712
	ctx.r9.s64 = ctx.r9.s64 + 20712;
	// addi r8,r10,21580
	ctx.r8.s64 = ctx.r10.s64 + 21580;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,438
	ctx.r10.s64 = 438;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-8328
	ctx.r3.s64 = ctx.r9.s64 + -8328;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F05218"))) PPC_WEAK_FUNC(sub_82F05218);
PPC_FUNC_IMPL(__imp__sub_82F05218) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,15824
	ctx.r11.s64 = ctx.r11.s64 + 15824;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f05240
	if (!ctx.cr6.eq) goto loc_82F05240;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F05240:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0524c
	if (ctx.cr6.eq) goto loc_82F0524C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0524C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,20712
	ctx.r9.s64 = ctx.r9.s64 + 20712;
	// addi r8,r10,21600
	ctx.r8.s64 = ctx.r10.s64 + 21600;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,439
	ctx.r10.s64 = 439;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-8312
	ctx.r3.s64 = ctx.r9.s64 + -8312;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F05280"))) PPC_WEAK_FUNC(sub_82F05280);
PPC_FUNC_IMPL(__imp__sub_82F05280) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,15844
	ctx.r11.s64 = ctx.r11.s64 + 15844;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f052a8
	if (!ctx.cr6.eq) goto loc_82F052A8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F052A8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f052b4
	if (ctx.cr6.eq) goto loc_82F052B4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F052B4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,20712
	ctx.r9.s64 = ctx.r9.s64 + 20712;
	// addi r8,r10,21620
	ctx.r8.s64 = ctx.r10.s64 + 21620;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,440
	ctx.r10.s64 = 440;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-8296
	ctx.r3.s64 = ctx.r9.s64 + -8296;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F052E8"))) PPC_WEAK_FUNC(sub_82F052E8);
PPC_FUNC_IMPL(__imp__sub_82F052E8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,15864
	ctx.r11.s64 = ctx.r11.s64 + 15864;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f05310
	if (!ctx.cr6.eq) goto loc_82F05310;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F05310:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0531c
	if (ctx.cr6.eq) goto loc_82F0531C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0531C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,20712
	ctx.r9.s64 = ctx.r9.s64 + 20712;
	// addi r8,r10,21640
	ctx.r8.s64 = ctx.r10.s64 + 21640;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,441
	ctx.r10.s64 = 441;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-8280
	ctx.r3.s64 = ctx.r9.s64 + -8280;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F05350"))) PPC_WEAK_FUNC(sub_82F05350);
PPC_FUNC_IMPL(__imp__sub_82F05350) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,15884
	ctx.r11.s64 = ctx.r11.s64 + 15884;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f05378
	if (!ctx.cr6.eq) goto loc_82F05378;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F05378:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f05384
	if (ctx.cr6.eq) goto loc_82F05384;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F05384:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,20712
	ctx.r9.s64 = ctx.r9.s64 + 20712;
	// addi r8,r10,21660
	ctx.r8.s64 = ctx.r10.s64 + 21660;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,442
	ctx.r10.s64 = 442;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-8264
	ctx.r3.s64 = ctx.r9.s64 + -8264;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F053B8"))) PPC_WEAK_FUNC(sub_82F053B8);
PPC_FUNC_IMPL(__imp__sub_82F053B8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,15904
	ctx.r11.s64 = ctx.r11.s64 + 15904;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f053e0
	if (!ctx.cr6.eq) goto loc_82F053E0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F053E0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f053ec
	if (ctx.cr6.eq) goto loc_82F053EC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F053EC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,20712
	ctx.r9.s64 = ctx.r9.s64 + 20712;
	// addi r8,r10,21680
	ctx.r8.s64 = ctx.r10.s64 + 21680;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,443
	ctx.r10.s64 = 443;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-8248
	ctx.r3.s64 = ctx.r9.s64 + -8248;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F05420"))) PPC_WEAK_FUNC(sub_82F05420);
PPC_FUNC_IMPL(__imp__sub_82F05420) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,15924
	ctx.r11.s64 = ctx.r11.s64 + 15924;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f05448
	if (!ctx.cr6.eq) goto loc_82F05448;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F05448:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f05454
	if (ctx.cr6.eq) goto loc_82F05454;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F05454:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,20712
	ctx.r9.s64 = ctx.r9.s64 + 20712;
	// addi r8,r10,21700
	ctx.r8.s64 = ctx.r10.s64 + 21700;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,444
	ctx.r10.s64 = 444;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-8232
	ctx.r3.s64 = ctx.r9.s64 + -8232;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F05488"))) PPC_WEAK_FUNC(sub_82F05488);
PPC_FUNC_IMPL(__imp__sub_82F05488) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,15944
	ctx.r11.s64 = ctx.r11.s64 + 15944;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f054b0
	if (!ctx.cr6.eq) goto loc_82F054B0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F054B0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f054bc
	if (ctx.cr6.eq) goto loc_82F054BC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F054BC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,20712
	ctx.r9.s64 = ctx.r9.s64 + 20712;
	// addi r8,r10,21720
	ctx.r8.s64 = ctx.r10.s64 + 21720;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,445
	ctx.r10.s64 = 445;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-8216
	ctx.r3.s64 = ctx.r9.s64 + -8216;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F054F0"))) PPC_WEAK_FUNC(sub_82F054F0);
PPC_FUNC_IMPL(__imp__sub_82F054F0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,15964
	ctx.r11.s64 = ctx.r11.s64 + 15964;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f05518
	if (!ctx.cr6.eq) goto loc_82F05518;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F05518:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f05524
	if (ctx.cr6.eq) goto loc_82F05524;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F05524:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,20712
	ctx.r9.s64 = ctx.r9.s64 + 20712;
	// addi r8,r10,21740
	ctx.r8.s64 = ctx.r10.s64 + 21740;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,446
	ctx.r10.s64 = 446;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-8200
	ctx.r3.s64 = ctx.r9.s64 + -8200;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F05558"))) PPC_WEAK_FUNC(sub_82F05558);
PPC_FUNC_IMPL(__imp__sub_82F05558) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,15984
	ctx.r11.s64 = ctx.r11.s64 + 15984;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f05580
	if (!ctx.cr6.eq) goto loc_82F05580;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F05580:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0558c
	if (ctx.cr6.eq) goto loc_82F0558C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0558C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,20712
	ctx.r9.s64 = ctx.r9.s64 + 20712;
	// addi r8,r10,21760
	ctx.r8.s64 = ctx.r10.s64 + 21760;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,447
	ctx.r10.s64 = 447;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-8184
	ctx.r3.s64 = ctx.r9.s64 + -8184;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F055C0"))) PPC_WEAK_FUNC(sub_82F055C0);
PPC_FUNC_IMPL(__imp__sub_82F055C0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,16004
	ctx.r11.s64 = ctx.r11.s64 + 16004;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f055e8
	if (!ctx.cr6.eq) goto loc_82F055E8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F055E8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f055f4
	if (ctx.cr6.eq) goto loc_82F055F4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F055F4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,20712
	ctx.r9.s64 = ctx.r9.s64 + 20712;
	// addi r8,r10,21780
	ctx.r8.s64 = ctx.r10.s64 + 21780;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,448
	ctx.r10.s64 = 448;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-8168
	ctx.r3.s64 = ctx.r9.s64 + -8168;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F05628"))) PPC_WEAK_FUNC(sub_82F05628);
PPC_FUNC_IMPL(__imp__sub_82F05628) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,16024
	ctx.r11.s64 = ctx.r11.s64 + 16024;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f05650
	if (!ctx.cr6.eq) goto loc_82F05650;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F05650:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0565c
	if (ctx.cr6.eq) goto loc_82F0565C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0565C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,20712
	ctx.r9.s64 = ctx.r9.s64 + 20712;
	// addi r8,r10,21800
	ctx.r8.s64 = ctx.r10.s64 + 21800;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,449
	ctx.r10.s64 = 449;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-8152
	ctx.r3.s64 = ctx.r9.s64 + -8152;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F05690"))) PPC_WEAK_FUNC(sub_82F05690);
PPC_FUNC_IMPL(__imp__sub_82F05690) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,16044
	ctx.r11.s64 = ctx.r11.s64 + 16044;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f056b8
	if (!ctx.cr6.eq) goto loc_82F056B8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F056B8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f056c4
	if (ctx.cr6.eq) goto loc_82F056C4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F056C4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,20712
	ctx.r9.s64 = ctx.r9.s64 + 20712;
	// addi r8,r10,21820
	ctx.r8.s64 = ctx.r10.s64 + 21820;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,450
	ctx.r10.s64 = 450;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-8136
	ctx.r3.s64 = ctx.r9.s64 + -8136;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F056F8"))) PPC_WEAK_FUNC(sub_82F056F8);
PPC_FUNC_IMPL(__imp__sub_82F056F8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,16064
	ctx.r11.s64 = ctx.r11.s64 + 16064;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f05720
	if (!ctx.cr6.eq) goto loc_82F05720;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F05720:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0572c
	if (ctx.cr6.eq) goto loc_82F0572C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0572C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,20712
	ctx.r9.s64 = ctx.r9.s64 + 20712;
	// addi r8,r10,21840
	ctx.r8.s64 = ctx.r10.s64 + 21840;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,451
	ctx.r10.s64 = 451;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-8120
	ctx.r3.s64 = ctx.r9.s64 + -8120;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F05760"))) PPC_WEAK_FUNC(sub_82F05760);
PPC_FUNC_IMPL(__imp__sub_82F05760) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,16084
	ctx.r11.s64 = ctx.r11.s64 + 16084;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f05788
	if (!ctx.cr6.eq) goto loc_82F05788;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F05788:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f05794
	if (ctx.cr6.eq) goto loc_82F05794;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F05794:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,20712
	ctx.r9.s64 = ctx.r9.s64 + 20712;
	// addi r8,r10,21860
	ctx.r8.s64 = ctx.r10.s64 + 21860;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,452
	ctx.r10.s64 = 452;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-8104
	ctx.r3.s64 = ctx.r9.s64 + -8104;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F057C8"))) PPC_WEAK_FUNC(sub_82F057C8);
PPC_FUNC_IMPL(__imp__sub_82F057C8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,16104
	ctx.r11.s64 = ctx.r11.s64 + 16104;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f057f0
	if (!ctx.cr6.eq) goto loc_82F057F0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F057F0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f057fc
	if (ctx.cr6.eq) goto loc_82F057FC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F057FC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,20712
	ctx.r9.s64 = ctx.r9.s64 + 20712;
	// addi r8,r10,21880
	ctx.r8.s64 = ctx.r10.s64 + 21880;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,453
	ctx.r10.s64 = 453;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-8088
	ctx.r3.s64 = ctx.r9.s64 + -8088;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F05830"))) PPC_WEAK_FUNC(sub_82F05830);
PPC_FUNC_IMPL(__imp__sub_82F05830) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,16124
	ctx.r11.s64 = ctx.r11.s64 + 16124;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f05858
	if (!ctx.cr6.eq) goto loc_82F05858;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F05858:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f05864
	if (ctx.cr6.eq) goto loc_82F05864;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F05864:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,20712
	ctx.r9.s64 = ctx.r9.s64 + 20712;
	// addi r8,r10,21892
	ctx.r8.s64 = ctx.r10.s64 + 21892;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,454
	ctx.r10.s64 = 454;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-8072
	ctx.r3.s64 = ctx.r9.s64 + -8072;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F05898"))) PPC_WEAK_FUNC(sub_82F05898);
PPC_FUNC_IMPL(__imp__sub_82F05898) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,16144
	ctx.r11.s64 = ctx.r11.s64 + 16144;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f058c0
	if (!ctx.cr6.eq) goto loc_82F058C0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F058C0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f058cc
	if (ctx.cr6.eq) goto loc_82F058CC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F058CC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,21912
	ctx.r9.s64 = ctx.r9.s64 + 21912;
	// addi r8,r10,21904
	ctx.r8.s64 = ctx.r10.s64 + 21904;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-8056
	ctx.r3.s64 = ctx.r9.s64 + -8056;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F05900"))) PPC_WEAK_FUNC(sub_82F05900);
PPC_FUNC_IMPL(__imp__sub_82F05900) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,16164
	ctx.r11.s64 = ctx.r11.s64 + 16164;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f05928
	if (!ctx.cr6.eq) goto loc_82F05928;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F05928:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f05934
	if (ctx.cr6.eq) goto loc_82F05934;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F05934:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,21912
	ctx.r9.s64 = ctx.r9.s64 + 21912;
	// addi r8,r10,21924
	ctx.r8.s64 = ctx.r10.s64 + 21924;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-8040
	ctx.r3.s64 = ctx.r9.s64 + -8040;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F05968"))) PPC_WEAK_FUNC(sub_82F05968);
PPC_FUNC_IMPL(__imp__sub_82F05968) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,16184
	ctx.r11.s64 = ctx.r11.s64 + 16184;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f05990
	if (!ctx.cr6.eq) goto loc_82F05990;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F05990:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0599c
	if (ctx.cr6.eq) goto loc_82F0599C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0599C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,21912
	ctx.r9.s64 = ctx.r9.s64 + 21912;
	// addi r8,r10,21932
	ctx.r8.s64 = ctx.r10.s64 + 21932;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-8024
	ctx.r3.s64 = ctx.r9.s64 + -8024;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F059D0"))) PPC_WEAK_FUNC(sub_82F059D0);
PPC_FUNC_IMPL(__imp__sub_82F059D0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,16204
	ctx.r11.s64 = ctx.r11.s64 + 16204;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f059f8
	if (!ctx.cr6.eq) goto loc_82F059F8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F059F8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f05a04
	if (ctx.cr6.eq) goto loc_82F05A04;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F05A04:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,21912
	ctx.r9.s64 = ctx.r9.s64 + 21912;
	// addi r8,r10,21940
	ctx.r8.s64 = ctx.r10.s64 + 21940;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-8008
	ctx.r3.s64 = ctx.r9.s64 + -8008;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F05A38"))) PPC_WEAK_FUNC(sub_82F05A38);
PPC_FUNC_IMPL(__imp__sub_82F05A38) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,16224
	ctx.r11.s64 = ctx.r11.s64 + 16224;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f05a60
	if (!ctx.cr6.eq) goto loc_82F05A60;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F05A60:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f05a6c
	if (ctx.cr6.eq) goto loc_82F05A6C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F05A6C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,21912
	ctx.r9.s64 = ctx.r9.s64 + 21912;
	// addi r8,r10,21952
	ctx.r8.s64 = ctx.r10.s64 + 21952;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-7992
	ctx.r3.s64 = ctx.r9.s64 + -7992;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F05AA0"))) PPC_WEAK_FUNC(sub_82F05AA0);
PPC_FUNC_IMPL(__imp__sub_82F05AA0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,16244
	ctx.r11.s64 = ctx.r11.s64 + 16244;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f05ac8
	if (!ctx.cr6.eq) goto loc_82F05AC8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F05AC8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f05ad4
	if (ctx.cr6.eq) goto loc_82F05AD4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F05AD4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,21912
	ctx.r9.s64 = ctx.r9.s64 + 21912;
	// addi r8,r10,21964
	ctx.r8.s64 = ctx.r10.s64 + 21964;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,5
	ctx.r10.s64 = 5;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-7976
	ctx.r3.s64 = ctx.r9.s64 + -7976;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F05B08"))) PPC_WEAK_FUNC(sub_82F05B08);
PPC_FUNC_IMPL(__imp__sub_82F05B08) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,16264
	ctx.r11.s64 = ctx.r11.s64 + 16264;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f05b30
	if (!ctx.cr6.eq) goto loc_82F05B30;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F05B30:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f05b3c
	if (ctx.cr6.eq) goto loc_82F05B3C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F05B3C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,21912
	ctx.r9.s64 = ctx.r9.s64 + 21912;
	// addi r8,r10,21976
	ctx.r8.s64 = ctx.r10.s64 + 21976;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,6
	ctx.r10.s64 = 6;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-7960
	ctx.r3.s64 = ctx.r9.s64 + -7960;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F05B70"))) PPC_WEAK_FUNC(sub_82F05B70);
PPC_FUNC_IMPL(__imp__sub_82F05B70) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,16284
	ctx.r11.s64 = ctx.r11.s64 + 16284;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f05b98
	if (!ctx.cr6.eq) goto loc_82F05B98;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F05B98:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f05ba4
	if (ctx.cr6.eq) goto loc_82F05BA4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F05BA4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,21912
	ctx.r9.s64 = ctx.r9.s64 + 21912;
	// addi r8,r10,21988
	ctx.r8.s64 = ctx.r10.s64 + 21988;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,7
	ctx.r10.s64 = 7;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-7944
	ctx.r3.s64 = ctx.r9.s64 + -7944;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F05BD8"))) PPC_WEAK_FUNC(sub_82F05BD8);
PPC_FUNC_IMPL(__imp__sub_82F05BD8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,16304
	ctx.r11.s64 = ctx.r11.s64 + 16304;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f05c00
	if (!ctx.cr6.eq) goto loc_82F05C00;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F05C00:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f05c0c
	if (ctx.cr6.eq) goto loc_82F05C0C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F05C0C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,21912
	ctx.r9.s64 = ctx.r9.s64 + 21912;
	// addi r8,r10,22000
	ctx.r8.s64 = ctx.r10.s64 + 22000;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-7928
	ctx.r3.s64 = ctx.r9.s64 + -7928;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F05C40"))) PPC_WEAK_FUNC(sub_82F05C40);
PPC_FUNC_IMPL(__imp__sub_82F05C40) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,16324
	ctx.r11.s64 = ctx.r11.s64 + 16324;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f05c68
	if (!ctx.cr6.eq) goto loc_82F05C68;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F05C68:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f05c74
	if (ctx.cr6.eq) goto loc_82F05C74;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F05C74:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,21912
	ctx.r9.s64 = ctx.r9.s64 + 21912;
	// addi r8,r10,22012
	ctx.r8.s64 = ctx.r10.s64 + 22012;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,9
	ctx.r10.s64 = 9;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-7912
	ctx.r3.s64 = ctx.r9.s64 + -7912;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F05CA8"))) PPC_WEAK_FUNC(sub_82F05CA8);
PPC_FUNC_IMPL(__imp__sub_82F05CA8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,16344
	ctx.r11.s64 = ctx.r11.s64 + 16344;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f05cd0
	if (!ctx.cr6.eq) goto loc_82F05CD0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F05CD0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f05cdc
	if (ctx.cr6.eq) goto loc_82F05CDC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F05CDC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,21912
	ctx.r9.s64 = ctx.r9.s64 + 21912;
	// addi r8,r10,22024
	ctx.r8.s64 = ctx.r10.s64 + 22024;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,10
	ctx.r10.s64 = 10;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-7896
	ctx.r3.s64 = ctx.r9.s64 + -7896;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F05D10"))) PPC_WEAK_FUNC(sub_82F05D10);
PPC_FUNC_IMPL(__imp__sub_82F05D10) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,16364
	ctx.r11.s64 = ctx.r11.s64 + 16364;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f05d38
	if (!ctx.cr6.eq) goto loc_82F05D38;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F05D38:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f05d44
	if (ctx.cr6.eq) goto loc_82F05D44;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F05D44:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,21912
	ctx.r9.s64 = ctx.r9.s64 + 21912;
	// addi r8,r10,22032
	ctx.r8.s64 = ctx.r10.s64 + 22032;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,11
	ctx.r10.s64 = 11;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-7880
	ctx.r3.s64 = ctx.r9.s64 + -7880;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F05D78"))) PPC_WEAK_FUNC(sub_82F05D78);
PPC_FUNC_IMPL(__imp__sub_82F05D78) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,16384
	ctx.r11.s64 = ctx.r11.s64 + 16384;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f05da0
	if (!ctx.cr6.eq) goto loc_82F05DA0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F05DA0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f05dac
	if (ctx.cr6.eq) goto loc_82F05DAC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F05DAC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,22044
	ctx.r8.s64 = ctx.r10.s64 + 22044;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,362
	ctx.r10.s64 = 362;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-7864
	ctx.r3.s64 = ctx.r9.s64 + -7864;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F05DE0"))) PPC_WEAK_FUNC(sub_82F05DE0);
PPC_FUNC_IMPL(__imp__sub_82F05DE0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,16404
	ctx.r11.s64 = ctx.r11.s64 + 16404;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f05e08
	if (!ctx.cr6.eq) goto loc_82F05E08;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F05E08:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f05e14
	if (ctx.cr6.eq) goto loc_82F05E14;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F05E14:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,22076
	ctx.r8.s64 = ctx.r10.s64 + 22076;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,363
	ctx.r10.s64 = 363;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-7848
	ctx.r3.s64 = ctx.r9.s64 + -7848;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F05E48"))) PPC_WEAK_FUNC(sub_82F05E48);
PPC_FUNC_IMPL(__imp__sub_82F05E48) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,16424
	ctx.r11.s64 = ctx.r11.s64 + 16424;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f05e70
	if (!ctx.cr6.eq) goto loc_82F05E70;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F05E70:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f05e7c
	if (ctx.cr6.eq) goto loc_82F05E7C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F05E7C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,22112
	ctx.r8.s64 = ctx.r10.s64 + 22112;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,162
	ctx.r10.s64 = 162;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-7832
	ctx.r3.s64 = ctx.r9.s64 + -7832;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F05EB0"))) PPC_WEAK_FUNC(sub_82F05EB0);
PPC_FUNC_IMPL(__imp__sub_82F05EB0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,16444
	ctx.r11.s64 = ctx.r11.s64 + 16444;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f05ed8
	if (!ctx.cr6.eq) goto loc_82F05ED8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F05ED8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f05ee4
	if (ctx.cr6.eq) goto loc_82F05EE4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F05EE4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,22128
	ctx.r8.s64 = ctx.r10.s64 + 22128;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,160
	ctx.r10.s64 = 160;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-7816
	ctx.r3.s64 = ctx.r9.s64 + -7816;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F05F18"))) PPC_WEAK_FUNC(sub_82F05F18);
PPC_FUNC_IMPL(__imp__sub_82F05F18) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,16464
	ctx.r11.s64 = ctx.r11.s64 + 16464;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f05f40
	if (!ctx.cr6.eq) goto loc_82F05F40;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F05F40:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f05f4c
	if (ctx.cr6.eq) goto loc_82F05F4C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F05F4C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,22148
	ctx.r8.s64 = ctx.r10.s64 + 22148;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,286
	ctx.r10.s64 = 286;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-7800
	ctx.r3.s64 = ctx.r9.s64 + -7800;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F05F80"))) PPC_WEAK_FUNC(sub_82F05F80);
PPC_FUNC_IMPL(__imp__sub_82F05F80) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,16484
	ctx.r11.s64 = ctx.r11.s64 + 16484;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f05fa8
	if (!ctx.cr6.eq) goto loc_82F05FA8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F05FA8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f05fb4
	if (ctx.cr6.eq) goto loc_82F05FB4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F05FB4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,22172
	ctx.r8.s64 = ctx.r10.s64 + 22172;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,284
	ctx.r10.s64 = 284;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-7784
	ctx.r3.s64 = ctx.r9.s64 + -7784;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F05FE8"))) PPC_WEAK_FUNC(sub_82F05FE8);
PPC_FUNC_IMPL(__imp__sub_82F05FE8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,16504
	ctx.r11.s64 = ctx.r11.s64 + 16504;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f06010
	if (!ctx.cr6.eq) goto loc_82F06010;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F06010:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0601c
	if (ctx.cr6.eq) goto loc_82F0601C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0601C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,22188
	ctx.r8.s64 = ctx.r10.s64 + 22188;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,288
	ctx.r10.s64 = 288;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-7768
	ctx.r3.s64 = ctx.r9.s64 + -7768;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F06050"))) PPC_WEAK_FUNC(sub_82F06050);
PPC_FUNC_IMPL(__imp__sub_82F06050) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,16524
	ctx.r11.s64 = ctx.r11.s64 + 16524;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f06078
	if (!ctx.cr6.eq) goto loc_82F06078;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F06078:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f06084
	if (ctx.cr6.eq) goto loc_82F06084;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F06084:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,22200
	ctx.r8.s64 = ctx.r10.s64 + 22200;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,290
	ctx.r10.s64 = 290;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-7752
	ctx.r3.s64 = ctx.r9.s64 + -7752;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F060B8"))) PPC_WEAK_FUNC(sub_82F060B8);
PPC_FUNC_IMPL(__imp__sub_82F060B8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,16544
	ctx.r11.s64 = ctx.r11.s64 + 16544;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f060e0
	if (!ctx.cr6.eq) goto loc_82F060E0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F060E0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f060ec
	if (ctx.cr6.eq) goto loc_82F060EC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F060EC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,22220
	ctx.r8.s64 = ctx.r10.s64 + 22220;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,140
	ctx.r10.s64 = 140;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-7736
	ctx.r3.s64 = ctx.r9.s64 + -7736;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F06120"))) PPC_WEAK_FUNC(sub_82F06120);
PPC_FUNC_IMPL(__imp__sub_82F06120) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,16564
	ctx.r11.s64 = ctx.r11.s64 + 16564;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f06148
	if (!ctx.cr6.eq) goto loc_82F06148;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F06148:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f06154
	if (ctx.cr6.eq) goto loc_82F06154;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F06154:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,22240
	ctx.r8.s64 = ctx.r10.s64 + 22240;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,158
	ctx.r10.s64 = 158;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-7720
	ctx.r3.s64 = ctx.r9.s64 + -7720;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F06188"))) PPC_WEAK_FUNC(sub_82F06188);
PPC_FUNC_IMPL(__imp__sub_82F06188) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,16584
	ctx.r11.s64 = ctx.r11.s64 + 16584;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f061b0
	if (!ctx.cr6.eq) goto loc_82F061B0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F061B0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f061bc
	if (ctx.cr6.eq) goto loc_82F061BC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F061BC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,22260
	ctx.r8.s64 = ctx.r10.s64 + 22260;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,156
	ctx.r10.s64 = 156;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-7704
	ctx.r3.s64 = ctx.r9.s64 + -7704;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F061F0"))) PPC_WEAK_FUNC(sub_82F061F0);
PPC_FUNC_IMPL(__imp__sub_82F061F0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,16604
	ctx.r11.s64 = ctx.r11.s64 + 16604;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f06218
	if (!ctx.cr6.eq) goto loc_82F06218;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F06218:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f06224
	if (ctx.cr6.eq) goto loc_82F06224;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F06224:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,22276
	ctx.r8.s64 = ctx.r10.s64 + 22276;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,387
	ctx.r10.s64 = 387;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-7688
	ctx.r3.s64 = ctx.r9.s64 + -7688;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F06258"))) PPC_WEAK_FUNC(sub_82F06258);
PPC_FUNC_IMPL(__imp__sub_82F06258) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,16624
	ctx.r11.s64 = ctx.r11.s64 + 16624;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f06280
	if (!ctx.cr6.eq) goto loc_82F06280;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F06280:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0628c
	if (ctx.cr6.eq) goto loc_82F0628C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0628C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,22292
	ctx.r8.s64 = ctx.r10.s64 + 22292;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,391
	ctx.r10.s64 = 391;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-7672
	ctx.r3.s64 = ctx.r9.s64 + -7672;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F062C0"))) PPC_WEAK_FUNC(sub_82F062C0);
PPC_FUNC_IMPL(__imp__sub_82F062C0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,16644
	ctx.r11.s64 = ctx.r11.s64 + 16644;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f062e8
	if (!ctx.cr6.eq) goto loc_82F062E8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F062E8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f062f4
	if (ctx.cr6.eq) goto loc_82F062F4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F062F4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,22308
	ctx.r8.s64 = ctx.r10.s64 + 22308;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,388
	ctx.r10.s64 = 388;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-7656
	ctx.r3.s64 = ctx.r9.s64 + -7656;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F06328"))) PPC_WEAK_FUNC(sub_82F06328);
PPC_FUNC_IMPL(__imp__sub_82F06328) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,16664
	ctx.r11.s64 = ctx.r11.s64 + 16664;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f06350
	if (!ctx.cr6.eq) goto loc_82F06350;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F06350:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0635c
	if (ctx.cr6.eq) goto loc_82F0635C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0635C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,22324
	ctx.r8.s64 = ctx.r10.s64 + 22324;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,390
	ctx.r10.s64 = 390;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-7640
	ctx.r3.s64 = ctx.r9.s64 + -7640;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F06390"))) PPC_WEAK_FUNC(sub_82F06390);
PPC_FUNC_IMPL(__imp__sub_82F06390) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,16684
	ctx.r11.s64 = ctx.r11.s64 + 16684;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f063b8
	if (!ctx.cr6.eq) goto loc_82F063B8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F063B8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f063c4
	if (ctx.cr6.eq) goto loc_82F063C4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F063C4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,22344
	ctx.r8.s64 = ctx.r10.s64 + 22344;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,389
	ctx.r10.s64 = 389;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-7624
	ctx.r3.s64 = ctx.r9.s64 + -7624;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F063F8"))) PPC_WEAK_FUNC(sub_82F063F8);
PPC_FUNC_IMPL(__imp__sub_82F063F8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,16704
	ctx.r11.s64 = ctx.r11.s64 + 16704;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f06420
	if (!ctx.cr6.eq) goto loc_82F06420;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F06420:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0642c
	if (ctx.cr6.eq) goto loc_82F0642C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0642C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,22360
	ctx.r8.s64 = ctx.r10.s64 + 22360;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,163
	ctx.r10.s64 = 163;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-7608
	ctx.r3.s64 = ctx.r9.s64 + -7608;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F06460"))) PPC_WEAK_FUNC(sub_82F06460);
PPC_FUNC_IMPL(__imp__sub_82F06460) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,16724
	ctx.r11.s64 = ctx.r11.s64 + 16724;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f06488
	if (!ctx.cr6.eq) goto loc_82F06488;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F06488:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f06494
	if (ctx.cr6.eq) goto loc_82F06494;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F06494:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,22380
	ctx.r8.s64 = ctx.r10.s64 + 22380;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,161
	ctx.r10.s64 = 161;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-7592
	ctx.r3.s64 = ctx.r9.s64 + -7592;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F064C8"))) PPC_WEAK_FUNC(sub_82F064C8);
PPC_FUNC_IMPL(__imp__sub_82F064C8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,16744
	ctx.r11.s64 = ctx.r11.s64 + 16744;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f064f0
	if (!ctx.cr6.eq) goto loc_82F064F0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F064F0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f064fc
	if (ctx.cr6.eq) goto loc_82F064FC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F064FC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,22408
	ctx.r8.s64 = ctx.r10.s64 + 22408;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,287
	ctx.r10.s64 = 287;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-7576
	ctx.r3.s64 = ctx.r9.s64 + -7576;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F06530"))) PPC_WEAK_FUNC(sub_82F06530);
PPC_FUNC_IMPL(__imp__sub_82F06530) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,16764
	ctx.r11.s64 = ctx.r11.s64 + 16764;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f06558
	if (!ctx.cr6.eq) goto loc_82F06558;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F06558:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f06564
	if (ctx.cr6.eq) goto loc_82F06564;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F06564:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,22436
	ctx.r8.s64 = ctx.r10.s64 + 22436;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,285
	ctx.r10.s64 = 285;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-7560
	ctx.r3.s64 = ctx.r9.s64 + -7560;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F06598"))) PPC_WEAK_FUNC(sub_82F06598);
PPC_FUNC_IMPL(__imp__sub_82F06598) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,16784
	ctx.r11.s64 = ctx.r11.s64 + 16784;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f065c0
	if (!ctx.cr6.eq) goto loc_82F065C0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F065C0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f065cc
	if (ctx.cr6.eq) goto loc_82F065CC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F065CC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,22456
	ctx.r8.s64 = ctx.r10.s64 + 22456;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,289
	ctx.r10.s64 = 289;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-7544
	ctx.r3.s64 = ctx.r9.s64 + -7544;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F06600"))) PPC_WEAK_FUNC(sub_82F06600);
PPC_FUNC_IMPL(__imp__sub_82F06600) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,16804
	ctx.r11.s64 = ctx.r11.s64 + 16804;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f06628
	if (!ctx.cr6.eq) goto loc_82F06628;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F06628:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f06634
	if (ctx.cr6.eq) goto loc_82F06634;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F06634:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,22472
	ctx.r8.s64 = ctx.r10.s64 + 22472;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,291
	ctx.r10.s64 = 291;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-7528
	ctx.r3.s64 = ctx.r9.s64 + -7528;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F06668"))) PPC_WEAK_FUNC(sub_82F06668);
PPC_FUNC_IMPL(__imp__sub_82F06668) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,16824
	ctx.r11.s64 = ctx.r11.s64 + 16824;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f06690
	if (!ctx.cr6.eq) goto loc_82F06690;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F06690:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0669c
	if (ctx.cr6.eq) goto loc_82F0669C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0669C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,22496
	ctx.r8.s64 = ctx.r10.s64 + 22496;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,141
	ctx.r10.s64 = 141;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-7512
	ctx.r3.s64 = ctx.r9.s64 + -7512;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F066D0"))) PPC_WEAK_FUNC(sub_82F066D0);
PPC_FUNC_IMPL(__imp__sub_82F066D0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,16844
	ctx.r11.s64 = ctx.r11.s64 + 16844;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f066f8
	if (!ctx.cr6.eq) goto loc_82F066F8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F066F8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f06704
	if (ctx.cr6.eq) goto loc_82F06704;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F06704:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,22520
	ctx.r8.s64 = ctx.r10.s64 + 22520;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,159
	ctx.r10.s64 = 159;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-7496
	ctx.r3.s64 = ctx.r9.s64 + -7496;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F06738"))) PPC_WEAK_FUNC(sub_82F06738);
PPC_FUNC_IMPL(__imp__sub_82F06738) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,16864
	ctx.r11.s64 = ctx.r11.s64 + 16864;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f06760
	if (!ctx.cr6.eq) goto loc_82F06760;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F06760:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0676c
	if (ctx.cr6.eq) goto loc_82F0676C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0676C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,22544
	ctx.r8.s64 = ctx.r10.s64 + 22544;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,157
	ctx.r10.s64 = 157;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-7480
	ctx.r3.s64 = ctx.r9.s64 + -7480;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F067A0"))) PPC_WEAK_FUNC(sub_82F067A0);
PPC_FUNC_IMPL(__imp__sub_82F067A0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,16884
	ctx.r11.s64 = ctx.r11.s64 + 16884;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f067c8
	if (!ctx.cr6.eq) goto loc_82F067C8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F067C8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f067d4
	if (ctx.cr6.eq) goto loc_82F067D4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F067D4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,22564
	ctx.r8.s64 = ctx.r10.s64 + 22564;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,292
	ctx.r10.s64 = 292;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-7464
	ctx.r3.s64 = ctx.r9.s64 + -7464;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F06808"))) PPC_WEAK_FUNC(sub_82F06808);
PPC_FUNC_IMPL(__imp__sub_82F06808) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,16904
	ctx.r11.s64 = ctx.r11.s64 + 16904;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f06830
	if (!ctx.cr6.eq) goto loc_82F06830;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F06830:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0683c
	if (ctx.cr6.eq) goto loc_82F0683C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0683C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,22580
	ctx.r8.s64 = ctx.r10.s64 + 22580;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,154
	ctx.r10.s64 = 154;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-7448
	ctx.r3.s64 = ctx.r9.s64 + -7448;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F06870"))) PPC_WEAK_FUNC(sub_82F06870);
PPC_FUNC_IMPL(__imp__sub_82F06870) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,16924
	ctx.r11.s64 = ctx.r11.s64 + 16924;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f06898
	if (!ctx.cr6.eq) goto loc_82F06898;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F06898:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f068a4
	if (ctx.cr6.eq) goto loc_82F068A4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F068A4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,22592
	ctx.r8.s64 = ctx.r10.s64 + 22592;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,152
	ctx.r10.s64 = 152;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-7432
	ctx.r3.s64 = ctx.r9.s64 + -7432;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F068D8"))) PPC_WEAK_FUNC(sub_82F068D8);
PPC_FUNC_IMPL(__imp__sub_82F068D8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,16944
	ctx.r11.s64 = ctx.r11.s64 + 16944;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f06900
	if (!ctx.cr6.eq) goto loc_82F06900;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F06900:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0690c
	if (ctx.cr6.eq) goto loc_82F0690C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0690C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,22608
	ctx.r8.s64 = ctx.r10.s64 + 22608;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,294
	ctx.r10.s64 = 294;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-7416
	ctx.r3.s64 = ctx.r9.s64 + -7416;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F06940"))) PPC_WEAK_FUNC(sub_82F06940);
PPC_FUNC_IMPL(__imp__sub_82F06940) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,16964
	ctx.r11.s64 = ctx.r11.s64 + 16964;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f06968
	if (!ctx.cr6.eq) goto loc_82F06968;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F06968:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f06974
	if (ctx.cr6.eq) goto loc_82F06974;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F06974:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,22624
	ctx.r8.s64 = ctx.r10.s64 + 22624;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,296
	ctx.r10.s64 = 296;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-7400
	ctx.r3.s64 = ctx.r9.s64 + -7400;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F069A8"))) PPC_WEAK_FUNC(sub_82F069A8);
PPC_FUNC_IMPL(__imp__sub_82F069A8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,16984
	ctx.r11.s64 = ctx.r11.s64 + 16984;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f069d0
	if (!ctx.cr6.eq) goto loc_82F069D0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F069D0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f069dc
	if (ctx.cr6.eq) goto loc_82F069DC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F069DC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,22644
	ctx.r8.s64 = ctx.r10.s64 + 22644;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,166
	ctx.r10.s64 = 166;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-7384
	ctx.r3.s64 = ctx.r9.s64 + -7384;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F06A10"))) PPC_WEAK_FUNC(sub_82F06A10);
PPC_FUNC_IMPL(__imp__sub_82F06A10) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,17004
	ctx.r11.s64 = ctx.r11.s64 + 17004;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f06a38
	if (!ctx.cr6.eq) goto loc_82F06A38;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F06A38:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f06a44
	if (ctx.cr6.eq) goto loc_82F06A44;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F06A44:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,22668
	ctx.r8.s64 = ctx.r10.s64 + 22668;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,300
	ctx.r10.s64 = 300;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-7368
	ctx.r3.s64 = ctx.r9.s64 + -7368;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F06A78"))) PPC_WEAK_FUNC(sub_82F06A78);
PPC_FUNC_IMPL(__imp__sub_82F06A78) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,17024
	ctx.r11.s64 = ctx.r11.s64 + 17024;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f06aa0
	if (!ctx.cr6.eq) goto loc_82F06AA0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F06AA0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f06aac
	if (ctx.cr6.eq) goto loc_82F06AAC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F06AAC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,22688
	ctx.r8.s64 = ctx.r10.s64 + 22688;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,150
	ctx.r10.s64 = 150;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-7352
	ctx.r3.s64 = ctx.r9.s64 + -7352;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F06AE0"))) PPC_WEAK_FUNC(sub_82F06AE0);
PPC_FUNC_IMPL(__imp__sub_82F06AE0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,17044
	ctx.r11.s64 = ctx.r11.s64 + 17044;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f06b08
	if (!ctx.cr6.eq) goto loc_82F06B08;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F06B08:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f06b14
	if (ctx.cr6.eq) goto loc_82F06B14;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F06B14:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,22708
	ctx.r8.s64 = ctx.r10.s64 + 22708;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,302
	ctx.r10.s64 = 302;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-7336
	ctx.r3.s64 = ctx.r9.s64 + -7336;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F06B48"))) PPC_WEAK_FUNC(sub_82F06B48);
PPC_FUNC_IMPL(__imp__sub_82F06B48) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,17064
	ctx.r11.s64 = ctx.r11.s64 + 17064;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f06b70
	if (!ctx.cr6.eq) goto loc_82F06B70;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F06B70:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f06b7c
	if (ctx.cr6.eq) goto loc_82F06B7C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F06B7C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,22736
	ctx.r8.s64 = ctx.r10.s64 + 22736;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,304
	ctx.r10.s64 = 304;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-7320
	ctx.r3.s64 = ctx.r9.s64 + -7320;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F06BB0"))) PPC_WEAK_FUNC(sub_82F06BB0);
PPC_FUNC_IMPL(__imp__sub_82F06BB0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,17084
	ctx.r11.s64 = ctx.r11.s64 + 17084;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f06bd8
	if (!ctx.cr6.eq) goto loc_82F06BD8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F06BD8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f06be4
	if (ctx.cr6.eq) goto loc_82F06BE4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F06BE4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,22752
	ctx.r8.s64 = ctx.r10.s64 + 22752;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,293
	ctx.r10.s64 = 293;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-7304
	ctx.r3.s64 = ctx.r9.s64 + -7304;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F06C18"))) PPC_WEAK_FUNC(sub_82F06C18);
PPC_FUNC_IMPL(__imp__sub_82F06C18) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,17104
	ctx.r11.s64 = ctx.r11.s64 + 17104;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f06c40
	if (!ctx.cr6.eq) goto loc_82F06C40;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F06C40:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f06c4c
	if (ctx.cr6.eq) goto loc_82F06C4C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F06C4C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,22772
	ctx.r8.s64 = ctx.r10.s64 + 22772;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,155
	ctx.r10.s64 = 155;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-7288
	ctx.r3.s64 = ctx.r9.s64 + -7288;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F06C80"))) PPC_WEAK_FUNC(sub_82F06C80);
PPC_FUNC_IMPL(__imp__sub_82F06C80) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,17124
	ctx.r11.s64 = ctx.r11.s64 + 17124;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f06ca8
	if (!ctx.cr6.eq) goto loc_82F06CA8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F06CA8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f06cb4
	if (ctx.cr6.eq) goto loc_82F06CB4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F06CB4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,22788
	ctx.r8.s64 = ctx.r10.s64 + 22788;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,153
	ctx.r10.s64 = 153;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-7272
	ctx.r3.s64 = ctx.r9.s64 + -7272;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F06CE8"))) PPC_WEAK_FUNC(sub_82F06CE8);
PPC_FUNC_IMPL(__imp__sub_82F06CE8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,17144
	ctx.r11.s64 = ctx.r11.s64 + 17144;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f06d10
	if (!ctx.cr6.eq) goto loc_82F06D10;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F06D10:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f06d1c
	if (ctx.cr6.eq) goto loc_82F06D1C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F06D1C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,22808
	ctx.r8.s64 = ctx.r10.s64 + 22808;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,295
	ctx.r10.s64 = 295;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-7256
	ctx.r3.s64 = ctx.r9.s64 + -7256;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F06D50"))) PPC_WEAK_FUNC(sub_82F06D50);
PPC_FUNC_IMPL(__imp__sub_82F06D50) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,17164
	ctx.r11.s64 = ctx.r11.s64 + 17164;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f06d78
	if (!ctx.cr6.eq) goto loc_82F06D78;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F06D78:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f06d84
	if (ctx.cr6.eq) goto loc_82F06D84;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F06D84:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,22832
	ctx.r8.s64 = ctx.r10.s64 + 22832;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,297
	ctx.r10.s64 = 297;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-7240
	ctx.r3.s64 = ctx.r9.s64 + -7240;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F06DB8"))) PPC_WEAK_FUNC(sub_82F06DB8);
PPC_FUNC_IMPL(__imp__sub_82F06DB8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,17184
	ctx.r11.s64 = ctx.r11.s64 + 17184;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f06de0
	if (!ctx.cr6.eq) goto loc_82F06DE0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F06DE0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f06dec
	if (ctx.cr6.eq) goto loc_82F06DEC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F06DEC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,22856
	ctx.r8.s64 = ctx.r10.s64 + 22856;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,167
	ctx.r10.s64 = 167;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-7224
	ctx.r3.s64 = ctx.r9.s64 + -7224;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F06E20"))) PPC_WEAK_FUNC(sub_82F06E20);
PPC_FUNC_IMPL(__imp__sub_82F06E20) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,17204
	ctx.r11.s64 = ctx.r11.s64 + 17204;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f06e48
	if (!ctx.cr6.eq) goto loc_82F06E48;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F06E48:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f06e54
	if (ctx.cr6.eq) goto loc_82F06E54;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F06E54:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,22884
	ctx.r8.s64 = ctx.r10.s64 + 22884;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,301
	ctx.r10.s64 = 301;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-7208
	ctx.r3.s64 = ctx.r9.s64 + -7208;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F06E88"))) PPC_WEAK_FUNC(sub_82F06E88);
PPC_FUNC_IMPL(__imp__sub_82F06E88) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,17224
	ctx.r11.s64 = ctx.r11.s64 + 17224;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f06eb0
	if (!ctx.cr6.eq) goto loc_82F06EB0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F06EB0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f06ebc
	if (ctx.cr6.eq) goto loc_82F06EBC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F06EBC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,22908
	ctx.r8.s64 = ctx.r10.s64 + 22908;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,151
	ctx.r10.s64 = 151;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-7192
	ctx.r3.s64 = ctx.r9.s64 + -7192;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F06EF0"))) PPC_WEAK_FUNC(sub_82F06EF0);
PPC_FUNC_IMPL(__imp__sub_82F06EF0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,17244
	ctx.r11.s64 = ctx.r11.s64 + 17244;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f06f18
	if (!ctx.cr6.eq) goto loc_82F06F18;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F06F18:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f06f24
	if (ctx.cr6.eq) goto loc_82F06F24;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F06F24:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,22936
	ctx.r8.s64 = ctx.r10.s64 + 22936;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,303
	ctx.r10.s64 = 303;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-7176
	ctx.r3.s64 = ctx.r9.s64 + -7176;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F06F58"))) PPC_WEAK_FUNC(sub_82F06F58);
PPC_FUNC_IMPL(__imp__sub_82F06F58) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,17264
	ctx.r11.s64 = ctx.r11.s64 + 17264;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f06f80
	if (!ctx.cr6.eq) goto loc_82F06F80;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F06F80:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f06f8c
	if (ctx.cr6.eq) goto loc_82F06F8C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F06F8C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,22968
	ctx.r8.s64 = ctx.r10.s64 + 22968;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,305
	ctx.r10.s64 = 305;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-7160
	ctx.r3.s64 = ctx.r9.s64 + -7160;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F06FC0"))) PPC_WEAK_FUNC(sub_82F06FC0);
PPC_FUNC_IMPL(__imp__sub_82F06FC0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,17284
	ctx.r11.s64 = ctx.r11.s64 + 17284;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f06fe8
	if (!ctx.cr6.eq) goto loc_82F06FE8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F06FE8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f06ff4
	if (ctx.cr6.eq) goto loc_82F06FF4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F06FF4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,22988
	ctx.r8.s64 = ctx.r10.s64 + 22988;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,280
	ctx.r10.s64 = 280;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-7144
	ctx.r3.s64 = ctx.r9.s64 + -7144;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F07028"))) PPC_WEAK_FUNC(sub_82F07028);
PPC_FUNC_IMPL(__imp__sub_82F07028) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,17304
	ctx.r11.s64 = ctx.r11.s64 + 17304;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f07050
	if (!ctx.cr6.eq) goto loc_82F07050;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F07050:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0705c
	if (ctx.cr6.eq) goto loc_82F0705C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0705C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,23008
	ctx.r8.s64 = ctx.r10.s64 + 23008;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,281
	ctx.r10.s64 = 281;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-7128
	ctx.r3.s64 = ctx.r9.s64 + -7128;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F07090"))) PPC_WEAK_FUNC(sub_82F07090);
PPC_FUNC_IMPL(__imp__sub_82F07090) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,17324
	ctx.r11.s64 = ctx.r11.s64 + 17324;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f070b8
	if (!ctx.cr6.eq) goto loc_82F070B8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F070B8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f070c4
	if (ctx.cr6.eq) goto loc_82F070C4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F070C4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,23032
	ctx.r8.s64 = ctx.r10.s64 + 23032;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,274
	ctx.r10.s64 = 274;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-7112
	ctx.r3.s64 = ctx.r9.s64 + -7112;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F070F8"))) PPC_WEAK_FUNC(sub_82F070F8);
PPC_FUNC_IMPL(__imp__sub_82F070F8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,17344
	ctx.r11.s64 = ctx.r11.s64 + 17344;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f07120
	if (!ctx.cr6.eq) goto loc_82F07120;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F07120:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0712c
	if (ctx.cr6.eq) goto loc_82F0712C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0712C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,23040
	ctx.r8.s64 = ctx.r10.s64 + 23040;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,148
	ctx.r10.s64 = 148;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-7096
	ctx.r3.s64 = ctx.r9.s64 + -7096;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F07160"))) PPC_WEAK_FUNC(sub_82F07160);
PPC_FUNC_IMPL(__imp__sub_82F07160) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,17364
	ctx.r11.s64 = ctx.r11.s64 + 17364;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f07188
	if (!ctx.cr6.eq) goto loc_82F07188;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F07188:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f07194
	if (ctx.cr6.eq) goto loc_82F07194;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F07194:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,23060
	ctx.r8.s64 = ctx.r10.s64 + 23060;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,146
	ctx.r10.s64 = 146;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-7080
	ctx.r3.s64 = ctx.r9.s64 + -7080;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F071C8"))) PPC_WEAK_FUNC(sub_82F071C8);
PPC_FUNC_IMPL(__imp__sub_82F071C8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,17384
	ctx.r11.s64 = ctx.r11.s64 + 17384;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f071f0
	if (!ctx.cr6.eq) goto loc_82F071F0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F071F0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f071fc
	if (ctx.cr6.eq) goto loc_82F071FC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F071FC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,23076
	ctx.r8.s64 = ctx.r10.s64 + 23076;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,144
	ctx.r10.s64 = 144;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-7064
	ctx.r3.s64 = ctx.r9.s64 + -7064;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F07230"))) PPC_WEAK_FUNC(sub_82F07230);
PPC_FUNC_IMPL(__imp__sub_82F07230) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,17404
	ctx.r11.s64 = ctx.r11.s64 + 17404;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f07258
	if (!ctx.cr6.eq) goto loc_82F07258;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F07258:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f07264
	if (ctx.cr6.eq) goto loc_82F07264;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F07264:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,23088
	ctx.r8.s64 = ctx.r10.s64 + 23088;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,324
	ctx.r10.s64 = 324;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-7048
	ctx.r3.s64 = ctx.r9.s64 + -7048;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F07298"))) PPC_WEAK_FUNC(sub_82F07298);
PPC_FUNC_IMPL(__imp__sub_82F07298) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,17424
	ctx.r11.s64 = ctx.r11.s64 + 17424;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f072c0
	if (!ctx.cr6.eq) goto loc_82F072C0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F072C0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f072cc
	if (ctx.cr6.eq) goto loc_82F072CC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F072CC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,23116
	ctx.r8.s64 = ctx.r10.s64 + 23116;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,276
	ctx.r10.s64 = 276;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-7032
	ctx.r3.s64 = ctx.r9.s64 + -7032;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F07300"))) PPC_WEAK_FUNC(sub_82F07300);
PPC_FUNC_IMPL(__imp__sub_82F07300) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,17444
	ctx.r11.s64 = ctx.r11.s64 + 17444;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f07328
	if (!ctx.cr6.eq) goto loc_82F07328;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F07328:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f07334
	if (ctx.cr6.eq) goto loc_82F07334;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F07334:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,23144
	ctx.r8.s64 = ctx.r10.s64 + 23144;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,198
	ctx.r10.s64 = 198;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-7016
	ctx.r3.s64 = ctx.r9.s64 + -7016;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F07368"))) PPC_WEAK_FUNC(sub_82F07368);
PPC_FUNC_IMPL(__imp__sub_82F07368) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,17464
	ctx.r11.s64 = ctx.r11.s64 + 17464;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f07390
	if (!ctx.cr6.eq) goto loc_82F07390;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F07390:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0739c
	if (ctx.cr6.eq) goto loc_82F0739C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0739C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,23168
	ctx.r8.s64 = ctx.r10.s64 + 23168;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,200
	ctx.r10.s64 = 200;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-7000
	ctx.r3.s64 = ctx.r9.s64 + -7000;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F073D0"))) PPC_WEAK_FUNC(sub_82F073D0);
PPC_FUNC_IMPL(__imp__sub_82F073D0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,17484
	ctx.r11.s64 = ctx.r11.s64 + 17484;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f073f8
	if (!ctx.cr6.eq) goto loc_82F073F8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F073F8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f07404
	if (ctx.cr6.eq) goto loc_82F07404;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F07404:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,23188
	ctx.r8.s64 = ctx.r10.s64 + 23188;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,346
	ctx.r10.s64 = 346;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-6984
	ctx.r3.s64 = ctx.r9.s64 + -6984;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F07438"))) PPC_WEAK_FUNC(sub_82F07438);
PPC_FUNC_IMPL(__imp__sub_82F07438) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,17504
	ctx.r11.s64 = ctx.r11.s64 + 17504;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f07460
	if (!ctx.cr6.eq) goto loc_82F07460;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F07460:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0746c
	if (ctx.cr6.eq) goto loc_82F0746C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0746C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,23212
	ctx.r8.s64 = ctx.r10.s64 + 23212;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,194
	ctx.r10.s64 = 194;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-6968
	ctx.r3.s64 = ctx.r9.s64 + -6968;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F074A0"))) PPC_WEAK_FUNC(sub_82F074A0);
PPC_FUNC_IMPL(__imp__sub_82F074A0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,17524
	ctx.r11.s64 = ctx.r11.s64 + 17524;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f074c8
	if (!ctx.cr6.eq) goto loc_82F074C8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F074C8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f074d4
	if (ctx.cr6.eq) goto loc_82F074D4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F074D4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,23228
	ctx.r8.s64 = ctx.r10.s64 + 23228;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,192
	ctx.r10.s64 = 192;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-6952
	ctx.r3.s64 = ctx.r9.s64 + -6952;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F07508"))) PPC_WEAK_FUNC(sub_82F07508);
PPC_FUNC_IMPL(__imp__sub_82F07508) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,17544
	ctx.r11.s64 = ctx.r11.s64 + 17544;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f07530
	if (!ctx.cr6.eq) goto loc_82F07530;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F07530:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0753c
	if (ctx.cr6.eq) goto loc_82F0753C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0753C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,23244
	ctx.r8.s64 = ctx.r10.s64 + 23244;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,196
	ctx.r10.s64 = 196;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-6936
	ctx.r3.s64 = ctx.r9.s64 + -6936;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F07570"))) PPC_WEAK_FUNC(sub_82F07570);
PPC_FUNC_IMPL(__imp__sub_82F07570) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,17564
	ctx.r11.s64 = ctx.r11.s64 + 17564;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f07598
	if (!ctx.cr6.eq) goto loc_82F07598;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F07598:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f075a4
	if (ctx.cr6.eq) goto loc_82F075A4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F075A4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,20692
	ctx.r8.s64 = ctx.r10.s64 + 20692;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,393
	ctx.r10.s64 = 393;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-6920
	ctx.r3.s64 = ctx.r9.s64 + -6920;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F075D8"))) PPC_WEAK_FUNC(sub_82F075D8);
PPC_FUNC_IMPL(__imp__sub_82F075D8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,17584
	ctx.r11.s64 = ctx.r11.s64 + 17584;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f07600
	if (!ctx.cr6.eq) goto loc_82F07600;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F07600:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0760c
	if (ctx.cr6.eq) goto loc_82F0760C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0760C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,20724
	ctx.r8.s64 = ctx.r10.s64 + 20724;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,394
	ctx.r10.s64 = 394;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-6904
	ctx.r3.s64 = ctx.r9.s64 + -6904;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F07640"))) PPC_WEAK_FUNC(sub_82F07640);
PPC_FUNC_IMPL(__imp__sub_82F07640) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,17604
	ctx.r11.s64 = ctx.r11.s64 + 17604;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f07668
	if (!ctx.cr6.eq) goto loc_82F07668;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F07668:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f07674
	if (ctx.cr6.eq) goto loc_82F07674;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F07674:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,20744
	ctx.r8.s64 = ctx.r10.s64 + 20744;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,395
	ctx.r10.s64 = 395;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-6888
	ctx.r3.s64 = ctx.r9.s64 + -6888;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F076A8"))) PPC_WEAK_FUNC(sub_82F076A8);
PPC_FUNC_IMPL(__imp__sub_82F076A8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,17624
	ctx.r11.s64 = ctx.r11.s64 + 17624;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f076d0
	if (!ctx.cr6.eq) goto loc_82F076D0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F076D0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f076dc
	if (ctx.cr6.eq) goto loc_82F076DC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F076DC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,23260
	ctx.r8.s64 = ctx.r10.s64 + 23260;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,344
	ctx.r10.s64 = 344;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-6872
	ctx.r3.s64 = ctx.r9.s64 + -6872;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F07710"))) PPC_WEAK_FUNC(sub_82F07710);
PPC_FUNC_IMPL(__imp__sub_82F07710) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,17644
	ctx.r11.s64 = ctx.r11.s64 + 17644;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f07738
	if (!ctx.cr6.eq) goto loc_82F07738;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F07738:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f07744
	if (ctx.cr6.eq) goto loc_82F07744;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F07744:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,23284
	ctx.r8.s64 = ctx.r10.s64 + 23284;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,314
	ctx.r10.s64 = 314;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-6856
	ctx.r3.s64 = ctx.r9.s64 + -6856;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F07778"))) PPC_WEAK_FUNC(sub_82F07778);
PPC_FUNC_IMPL(__imp__sub_82F07778) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,17664
	ctx.r11.s64 = ctx.r11.s64 + 17664;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f077a0
	if (!ctx.cr6.eq) goto loc_82F077A0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F077A0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f077ac
	if (ctx.cr6.eq) goto loc_82F077AC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F077AC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,23308
	ctx.r8.s64 = ctx.r10.s64 + 23308;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,336
	ctx.r10.s64 = 336;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-6840
	ctx.r3.s64 = ctx.r9.s64 + -6840;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F077E0"))) PPC_WEAK_FUNC(sub_82F077E0);
PPC_FUNC_IMPL(__imp__sub_82F077E0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,17684
	ctx.r11.s64 = ctx.r11.s64 + 17684;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f07808
	if (!ctx.cr6.eq) goto loc_82F07808;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F07808:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f07814
	if (ctx.cr6.eq) goto loc_82F07814;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F07814:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,23328
	ctx.r8.s64 = ctx.r10.s64 + 23328;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,345
	ctx.r10.s64 = 345;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-6824
	ctx.r3.s64 = ctx.r9.s64 + -6824;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F07848"))) PPC_WEAK_FUNC(sub_82F07848);
PPC_FUNC_IMPL(__imp__sub_82F07848) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,17704
	ctx.r11.s64 = ctx.r11.s64 + 17704;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f07870
	if (!ctx.cr6.eq) goto loc_82F07870;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F07870:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0787c
	if (ctx.cr6.eq) goto loc_82F0787C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0787C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,23360
	ctx.r8.s64 = ctx.r10.s64 + 23360;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,315
	ctx.r10.s64 = 315;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-6808
	ctx.r3.s64 = ctx.r9.s64 + -6808;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F078B0"))) PPC_WEAK_FUNC(sub_82F078B0);
PPC_FUNC_IMPL(__imp__sub_82F078B0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,17724
	ctx.r11.s64 = ctx.r11.s64 + 17724;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f078d8
	if (!ctx.cr6.eq) goto loc_82F078D8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F078D8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f078e4
	if (ctx.cr6.eq) goto loc_82F078E4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F078E4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,23388
	ctx.r8.s64 = ctx.r10.s64 + 23388;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,337
	ctx.r10.s64 = 337;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-6792
	ctx.r3.s64 = ctx.r9.s64 + -6792;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F07918"))) PPC_WEAK_FUNC(sub_82F07918);
PPC_FUNC_IMPL(__imp__sub_82F07918) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,17744
	ctx.r11.s64 = ctx.r11.s64 + 17744;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f07940
	if (!ctx.cr6.eq) goto loc_82F07940;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F07940:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0794c
	if (ctx.cr6.eq) goto loc_82F0794C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0794C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,23416
	ctx.r8.s64 = ctx.r10.s64 + 23416;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,283
	ctx.r10.s64 = 283;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-6776
	ctx.r3.s64 = ctx.r9.s64 + -6776;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F07980"))) PPC_WEAK_FUNC(sub_82F07980);
PPC_FUNC_IMPL(__imp__sub_82F07980) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,17764
	ctx.r11.s64 = ctx.r11.s64 + 17764;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f079a8
	if (!ctx.cr6.eq) goto loc_82F079A8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F079A8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f079b4
	if (ctx.cr6.eq) goto loc_82F079B4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F079B4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,23440
	ctx.r8.s64 = ctx.r10.s64 + 23440;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,282
	ctx.r10.s64 = 282;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-6760
	ctx.r3.s64 = ctx.r9.s64 + -6760;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F079E8"))) PPC_WEAK_FUNC(sub_82F079E8);
PPC_FUNC_IMPL(__imp__sub_82F079E8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,17784
	ctx.r11.s64 = ctx.r11.s64 + 17784;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f07a10
	if (!ctx.cr6.eq) goto loc_82F07A10;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F07A10:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f07a1c
	if (ctx.cr6.eq) goto loc_82F07A1C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F07A1C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,23468
	ctx.r8.s64 = ctx.r10.s64 + 23468;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,275
	ctx.r10.s64 = 275;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-6744
	ctx.r3.s64 = ctx.r9.s64 + -6744;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F07A50"))) PPC_WEAK_FUNC(sub_82F07A50);
PPC_FUNC_IMPL(__imp__sub_82F07A50) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,17804
	ctx.r11.s64 = ctx.r11.s64 + 17804;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f07a78
	if (!ctx.cr6.eq) goto loc_82F07A78;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F07A78:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f07a84
	if (ctx.cr6.eq) goto loc_82F07A84;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F07A84:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,23480
	ctx.r8.s64 = ctx.r10.s64 + 23480;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,149
	ctx.r10.s64 = 149;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-6728
	ctx.r3.s64 = ctx.r9.s64 + -6728;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F07AB8"))) PPC_WEAK_FUNC(sub_82F07AB8);
PPC_FUNC_IMPL(__imp__sub_82F07AB8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,17824
	ctx.r11.s64 = ctx.r11.s64 + 17824;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f07ae0
	if (!ctx.cr6.eq) goto loc_82F07AE0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F07AE0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f07aec
	if (ctx.cr6.eq) goto loc_82F07AEC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F07AEC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,23508
	ctx.r8.s64 = ctx.r10.s64 + 23508;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,147
	ctx.r10.s64 = 147;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-6712
	ctx.r3.s64 = ctx.r9.s64 + -6712;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F07B20"))) PPC_WEAK_FUNC(sub_82F07B20);
PPC_FUNC_IMPL(__imp__sub_82F07B20) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,17844
	ctx.r11.s64 = ctx.r11.s64 + 17844;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f07b48
	if (!ctx.cr6.eq) goto loc_82F07B48;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F07B48:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f07b54
	if (ctx.cr6.eq) goto loc_82F07B54;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F07B54:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,23528
	ctx.r8.s64 = ctx.r10.s64 + 23528;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,145
	ctx.r10.s64 = 145;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-6696
	ctx.r3.s64 = ctx.r9.s64 + -6696;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F07B88"))) PPC_WEAK_FUNC(sub_82F07B88);
PPC_FUNC_IMPL(__imp__sub_82F07B88) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,17864
	ctx.r11.s64 = ctx.r11.s64 + 17864;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f07bb0
	if (!ctx.cr6.eq) goto loc_82F07BB0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F07BB0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f07bbc
	if (ctx.cr6.eq) goto loc_82F07BBC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F07BBC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,23548
	ctx.r8.s64 = ctx.r10.s64 + 23548;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,325
	ctx.r10.s64 = 325;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-6680
	ctx.r3.s64 = ctx.r9.s64 + -6680;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F07BF0"))) PPC_WEAK_FUNC(sub_82F07BF0);
PPC_FUNC_IMPL(__imp__sub_82F07BF0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,17884
	ctx.r11.s64 = ctx.r11.s64 + 17884;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f07c18
	if (!ctx.cr6.eq) goto loc_82F07C18;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F07C18:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f07c24
	if (ctx.cr6.eq) goto loc_82F07C24;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F07C24:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,23580
	ctx.r8.s64 = ctx.r10.s64 + 23580;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,277
	ctx.r10.s64 = 277;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-6664
	ctx.r3.s64 = ctx.r9.s64 + -6664;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F07C58"))) PPC_WEAK_FUNC(sub_82F07C58);
PPC_FUNC_IMPL(__imp__sub_82F07C58) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,17904
	ctx.r11.s64 = ctx.r11.s64 + 17904;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f07c80
	if (!ctx.cr6.eq) goto loc_82F07C80;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F07C80:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f07c8c
	if (ctx.cr6.eq) goto loc_82F07C8C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F07C8C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,23608
	ctx.r8.s64 = ctx.r10.s64 + 23608;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,199
	ctx.r10.s64 = 199;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-6648
	ctx.r3.s64 = ctx.r9.s64 + -6648;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F07CC0"))) PPC_WEAK_FUNC(sub_82F07CC0);
PPC_FUNC_IMPL(__imp__sub_82F07CC0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,17924
	ctx.r11.s64 = ctx.r11.s64 + 17924;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f07ce8
	if (!ctx.cr6.eq) goto loc_82F07CE8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F07CE8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f07cf4
	if (ctx.cr6.eq) goto loc_82F07CF4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F07CF4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,23640
	ctx.r8.s64 = ctx.r10.s64 + 23640;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,201
	ctx.r10.s64 = 201;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-6632
	ctx.r3.s64 = ctx.r9.s64 + -6632;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F07D28"))) PPC_WEAK_FUNC(sub_82F07D28);
PPC_FUNC_IMPL(__imp__sub_82F07D28) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,17944
	ctx.r11.s64 = ctx.r11.s64 + 17944;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f07d50
	if (!ctx.cr6.eq) goto loc_82F07D50;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F07D50:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f07d5c
	if (ctx.cr6.eq) goto loc_82F07D5C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F07D5C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,23664
	ctx.r8.s64 = ctx.r10.s64 + 23664;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,347
	ctx.r10.s64 = 347;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-6616
	ctx.r3.s64 = ctx.r9.s64 + -6616;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F07D90"))) PPC_WEAK_FUNC(sub_82F07D90);
PPC_FUNC_IMPL(__imp__sub_82F07D90) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,17964
	ctx.r11.s64 = ctx.r11.s64 + 17964;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f07db8
	if (!ctx.cr6.eq) goto loc_82F07DB8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F07DB8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f07dc4
	if (ctx.cr6.eq) goto loc_82F07DC4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F07DC4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,23692
	ctx.r8.s64 = ctx.r10.s64 + 23692;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,195
	ctx.r10.s64 = 195;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-6600
	ctx.r3.s64 = ctx.r9.s64 + -6600;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F07DF8"))) PPC_WEAK_FUNC(sub_82F07DF8);
PPC_FUNC_IMPL(__imp__sub_82F07DF8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,17984
	ctx.r11.s64 = ctx.r11.s64 + 17984;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f07e20
	if (!ctx.cr6.eq) goto loc_82F07E20;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F07E20:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f07e2c
	if (ctx.cr6.eq) goto loc_82F07E2C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F07E2C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,23716
	ctx.r8.s64 = ctx.r10.s64 + 23716;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,193
	ctx.r10.s64 = 193;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-6584
	ctx.r3.s64 = ctx.r9.s64 + -6584;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F07E60"))) PPC_WEAK_FUNC(sub_82F07E60);
PPC_FUNC_IMPL(__imp__sub_82F07E60) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,18004
	ctx.r11.s64 = ctx.r11.s64 + 18004;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f07e88
	if (!ctx.cr6.eq) goto loc_82F07E88;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F07E88:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f07e94
	if (ctx.cr6.eq) goto loc_82F07E94;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F07E94:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,23736
	ctx.r8.s64 = ctx.r10.s64 + 23736;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,197
	ctx.r10.s64 = 197;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-6568
	ctx.r3.s64 = ctx.r9.s64 + -6568;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F07EC8"))) PPC_WEAK_FUNC(sub_82F07EC8);
PPC_FUNC_IMPL(__imp__sub_82F07EC8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,18024
	ctx.r11.s64 = ctx.r11.s64 + 18024;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f07ef0
	if (!ctx.cr6.eq) goto loc_82F07EF0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F07EF0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f07efc
	if (ctx.cr6.eq) goto loc_82F07EFC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F07EFC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,23760
	ctx.r8.s64 = ctx.r10.s64 + 23760;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,206
	ctx.r10.s64 = 206;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-6552
	ctx.r3.s64 = ctx.r9.s64 + -6552;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F07F30"))) PPC_WEAK_FUNC(sub_82F07F30);
PPC_FUNC_IMPL(__imp__sub_82F07F30) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,18044
	ctx.r11.s64 = ctx.r11.s64 + 18044;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f07f58
	if (!ctx.cr6.eq) goto loc_82F07F58;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F07F58:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f07f64
	if (ctx.cr6.eq) goto loc_82F07F64;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F07F64:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,23780
	ctx.r8.s64 = ctx.r10.s64 + 23780;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,142
	ctx.r10.s64 = 142;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-6536
	ctx.r3.s64 = ctx.r9.s64 + -6536;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F07F98"))) PPC_WEAK_FUNC(sub_82F07F98);
PPC_FUNC_IMPL(__imp__sub_82F07F98) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,18064
	ctx.r11.s64 = ctx.r11.s64 + 18064;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f07fc0
	if (!ctx.cr6.eq) goto loc_82F07FC0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F07FC0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f07fcc
	if (ctx.cr6.eq) goto loc_82F07FCC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F07FCC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,23796
	ctx.r8.s64 = ctx.r10.s64 + 23796;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,164
	ctx.r10.s64 = 164;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-6520
	ctx.r3.s64 = ctx.r9.s64 + -6520;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F08000"))) PPC_WEAK_FUNC(sub_82F08000);
PPC_FUNC_IMPL(__imp__sub_82F08000) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,18084
	ctx.r11.s64 = ctx.r11.s64 + 18084;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f08028
	if (!ctx.cr6.eq) goto loc_82F08028;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F08028:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f08034
	if (ctx.cr6.eq) goto loc_82F08034;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F08034:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,23812
	ctx.r8.s64 = ctx.r10.s64 + 23812;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,204
	ctx.r10.s64 = 204;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-6504
	ctx.r3.s64 = ctx.r9.s64 + -6504;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F08068"))) PPC_WEAK_FUNC(sub_82F08068);
PPC_FUNC_IMPL(__imp__sub_82F08068) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,18104
	ctx.r11.s64 = ctx.r11.s64 + 18104;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f08090
	if (!ctx.cr6.eq) goto loc_82F08090;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F08090:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0809c
	if (ctx.cr6.eq) goto loc_82F0809C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0809C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,23836
	ctx.r8.s64 = ctx.r10.s64 + 23836;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,210
	ctx.r10.s64 = 210;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-6488
	ctx.r3.s64 = ctx.r9.s64 + -6488;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F080D0"))) PPC_WEAK_FUNC(sub_82F080D0);
PPC_FUNC_IMPL(__imp__sub_82F080D0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,18124
	ctx.r11.s64 = ctx.r11.s64 + 18124;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f080f8
	if (!ctx.cr6.eq) goto loc_82F080F8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F080F8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f08104
	if (ctx.cr6.eq) goto loc_82F08104;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F08104:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,23852
	ctx.r8.s64 = ctx.r10.s64 + 23852;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,180
	ctx.r10.s64 = 180;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-6472
	ctx.r3.s64 = ctx.r9.s64 + -6472;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F08138"))) PPC_WEAK_FUNC(sub_82F08138);
PPC_FUNC_IMPL(__imp__sub_82F08138) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,18144
	ctx.r11.s64 = ctx.r11.s64 + 18144;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f08160
	if (!ctx.cr6.eq) goto loc_82F08160;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F08160:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0816c
	if (ctx.cr6.eq) goto loc_82F0816C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0816C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,23864
	ctx.r8.s64 = ctx.r10.s64 + 23864;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,272
	ctx.r10.s64 = 272;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-6456
	ctx.r3.s64 = ctx.r9.s64 + -6456;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F081A0"))) PPC_WEAK_FUNC(sub_82F081A0);
PPC_FUNC_IMPL(__imp__sub_82F081A0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,18164
	ctx.r11.s64 = ctx.r11.s64 + 18164;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f081c8
	if (!ctx.cr6.eq) goto loc_82F081C8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F081C8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f081d4
	if (ctx.cr6.eq) goto loc_82F081D4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F081D4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,23888
	ctx.r8.s64 = ctx.r10.s64 + 23888;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,202
	ctx.r10.s64 = 202;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-6440
	ctx.r3.s64 = ctx.r9.s64 + -6440;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F08208"))) PPC_WEAK_FUNC(sub_82F08208);
PPC_FUNC_IMPL(__imp__sub_82F08208) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,18184
	ctx.r11.s64 = ctx.r11.s64 + 18184;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f08230
	if (!ctx.cr6.eq) goto loc_82F08230;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F08230:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0823c
	if (ctx.cr6.eq) goto loc_82F0823C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0823C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,23904
	ctx.r8.s64 = ctx.r10.s64 + 23904;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,184
	ctx.r10.s64 = 184;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-6424
	ctx.r3.s64 = ctx.r9.s64 + -6424;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F08270"))) PPC_WEAK_FUNC(sub_82F08270);
PPC_FUNC_IMPL(__imp__sub_82F08270) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,18204
	ctx.r11.s64 = ctx.r11.s64 + 18204;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f08298
	if (!ctx.cr6.eq) goto loc_82F08298;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F08298:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f082a4
	if (ctx.cr6.eq) goto loc_82F082A4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F082A4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,23924
	ctx.r8.s64 = ctx.r10.s64 + 23924;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,190
	ctx.r10.s64 = 190;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-6408
	ctx.r3.s64 = ctx.r9.s64 + -6408;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F082D8"))) PPC_WEAK_FUNC(sub_82F082D8);
PPC_FUNC_IMPL(__imp__sub_82F082D8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,18224
	ctx.r11.s64 = ctx.r11.s64 + 18224;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f08300
	if (!ctx.cr6.eq) goto loc_82F08300;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F08300:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0830c
	if (ctx.cr6.eq) goto loc_82F0830C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0830C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,23940
	ctx.r8.s64 = ctx.r10.s64 + 23940;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,188
	ctx.r10.s64 = 188;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-6392
	ctx.r3.s64 = ctx.r9.s64 + -6392;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F08340"))) PPC_WEAK_FUNC(sub_82F08340);
PPC_FUNC_IMPL(__imp__sub_82F08340) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,18244
	ctx.r11.s64 = ctx.r11.s64 + 18244;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f08368
	if (!ctx.cr6.eq) goto loc_82F08368;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F08368:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f08374
	if (ctx.cr6.eq) goto loc_82F08374;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F08374:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,23952
	ctx.r8.s64 = ctx.r10.s64 + 23952;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,186
	ctx.r10.s64 = 186;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-6376
	ctx.r3.s64 = ctx.r9.s64 + -6376;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F083A8"))) PPC_WEAK_FUNC(sub_82F083A8);
PPC_FUNC_IMPL(__imp__sub_82F083A8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,18264
	ctx.r11.s64 = ctx.r11.s64 + 18264;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f083d0
	if (!ctx.cr6.eq) goto loc_82F083D0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F083D0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f083dc
	if (ctx.cr6.eq) goto loc_82F083DC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F083DC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,20836
	ctx.r8.s64 = ctx.r10.s64 + 20836;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,399
	ctx.r10.s64 = 399;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-6360
	ctx.r3.s64 = ctx.r9.s64 + -6360;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F08410"))) PPC_WEAK_FUNC(sub_82F08410);
PPC_FUNC_IMPL(__imp__sub_82F08410) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,18284
	ctx.r11.s64 = ctx.r11.s64 + 18284;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f08438
	if (!ctx.cr6.eq) goto loc_82F08438;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F08438:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f08444
	if (ctx.cr6.eq) goto loc_82F08444;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F08444:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,20856
	ctx.r8.s64 = ctx.r10.s64 + 20856;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,400
	ctx.r10.s64 = 400;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-6344
	ctx.r3.s64 = ctx.r9.s64 + -6344;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F08478"))) PPC_WEAK_FUNC(sub_82F08478);
PPC_FUNC_IMPL(__imp__sub_82F08478) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,18304
	ctx.r11.s64 = ctx.r11.s64 + 18304;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f084a0
	if (!ctx.cr6.eq) goto loc_82F084A0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F084A0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f084ac
	if (ctx.cr6.eq) goto loc_82F084AC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F084AC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,20876
	ctx.r8.s64 = ctx.r10.s64 + 20876;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,401
	ctx.r10.s64 = 401;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-6328
	ctx.r3.s64 = ctx.r9.s64 + -6328;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F084E0"))) PPC_WEAK_FUNC(sub_82F084E0);
PPC_FUNC_IMPL(__imp__sub_82F084E0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,18324
	ctx.r11.s64 = ctx.r11.s64 + 18324;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f08508
	if (!ctx.cr6.eq) goto loc_82F08508;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F08508:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f08514
	if (ctx.cr6.eq) goto loc_82F08514;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F08514:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,23968
	ctx.r8.s64 = ctx.r10.s64 + 23968;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,252
	ctx.r10.s64 = 252;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-6312
	ctx.r3.s64 = ctx.r9.s64 + -6312;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F08548"))) PPC_WEAK_FUNC(sub_82F08548);
PPC_FUNC_IMPL(__imp__sub_82F08548) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,18344
	ctx.r11.s64 = ctx.r11.s64 + 18344;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f08570
	if (!ctx.cr6.eq) goto loc_82F08570;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F08570:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0857c
	if (ctx.cr6.eq) goto loc_82F0857C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0857C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,23984
	ctx.r8.s64 = ctx.r10.s64 + 23984;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,328
	ctx.r10.s64 = 328;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-6296
	ctx.r3.s64 = ctx.r9.s64 + -6296;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F085B0"))) PPC_WEAK_FUNC(sub_82F085B0);
PPC_FUNC_IMPL(__imp__sub_82F085B0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,18364
	ctx.r11.s64 = ctx.r11.s64 + 18364;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f085d8
	if (!ctx.cr6.eq) goto loc_82F085D8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F085D8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f085e4
	if (ctx.cr6.eq) goto loc_82F085E4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F085E4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,24004
	ctx.r8.s64 = ctx.r10.s64 + 24004;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,356
	ctx.r10.s64 = 356;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-6280
	ctx.r3.s64 = ctx.r9.s64 + -6280;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F08618"))) PPC_WEAK_FUNC(sub_82F08618);
PPC_FUNC_IMPL(__imp__sub_82F08618) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,18384
	ctx.r11.s64 = ctx.r11.s64 + 18384;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f08640
	if (!ctx.cr6.eq) goto loc_82F08640;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F08640:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0864c
	if (ctx.cr6.eq) goto loc_82F0864C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0864C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,24024
	ctx.r8.s64 = ctx.r10.s64 + 24024;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,326
	ctx.r10.s64 = 326;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-6264
	ctx.r3.s64 = ctx.r9.s64 + -6264;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F08680"))) PPC_WEAK_FUNC(sub_82F08680);
PPC_FUNC_IMPL(__imp__sub_82F08680) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,18404
	ctx.r11.s64 = ctx.r11.s64 + 18404;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f086a8
	if (!ctx.cr6.eq) goto loc_82F086A8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F086A8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f086b4
	if (ctx.cr6.eq) goto loc_82F086B4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F086B4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,24044
	ctx.r8.s64 = ctx.r10.s64 + 24044;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,329
	ctx.r10.s64 = 329;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-6248
	ctx.r3.s64 = ctx.r9.s64 + -6248;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F086E8"))) PPC_WEAK_FUNC(sub_82F086E8);
PPC_FUNC_IMPL(__imp__sub_82F086E8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,18424
	ctx.r11.s64 = ctx.r11.s64 + 18424;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f08710
	if (!ctx.cr6.eq) goto loc_82F08710;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F08710:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0871c
	if (ctx.cr6.eq) goto loc_82F0871C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0871C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,24068
	ctx.r8.s64 = ctx.r10.s64 + 24068;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,357
	ctx.r10.s64 = 357;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-6232
	ctx.r3.s64 = ctx.r9.s64 + -6232;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F08750"))) PPC_WEAK_FUNC(sub_82F08750);
PPC_FUNC_IMPL(__imp__sub_82F08750) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,18444
	ctx.r11.s64 = ctx.r11.s64 + 18444;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f08778
	if (!ctx.cr6.eq) goto loc_82F08778;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F08778:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f08784
	if (ctx.cr6.eq) goto loc_82F08784;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F08784:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,24096
	ctx.r8.s64 = ctx.r10.s64 + 24096;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,327
	ctx.r10.s64 = 327;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-6216
	ctx.r3.s64 = ctx.r9.s64 + -6216;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F087B8"))) PPC_WEAK_FUNC(sub_82F087B8);
PPC_FUNC_IMPL(__imp__sub_82F087B8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,18464
	ctx.r11.s64 = ctx.r11.s64 + 18464;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f087e0
	if (!ctx.cr6.eq) goto loc_82F087E0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F087E0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f087ec
	if (ctx.cr6.eq) goto loc_82F087EC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F087EC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,24124
	ctx.r8.s64 = ctx.r10.s64 + 24124;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,207
	ctx.r10.s64 = 207;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-6200
	ctx.r3.s64 = ctx.r9.s64 + -6200;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F08820"))) PPC_WEAK_FUNC(sub_82F08820);
PPC_FUNC_IMPL(__imp__sub_82F08820) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,18484
	ctx.r11.s64 = ctx.r11.s64 + 18484;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f08848
	if (!ctx.cr6.eq) goto loc_82F08848;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F08848:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f08854
	if (ctx.cr6.eq) goto loc_82F08854;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F08854:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,24152
	ctx.r8.s64 = ctx.r10.s64 + 24152;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,143
	ctx.r10.s64 = 143;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-6184
	ctx.r3.s64 = ctx.r9.s64 + -6184;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F08888"))) PPC_WEAK_FUNC(sub_82F08888);
PPC_FUNC_IMPL(__imp__sub_82F08888) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,18504
	ctx.r11.s64 = ctx.r11.s64 + 18504;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f088b0
	if (!ctx.cr6.eq) goto loc_82F088B0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F088B0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f088bc
	if (ctx.cr6.eq) goto loc_82F088BC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F088BC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,24172
	ctx.r8.s64 = ctx.r10.s64 + 24172;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,165
	ctx.r10.s64 = 165;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-6168
	ctx.r3.s64 = ctx.r9.s64 + -6168;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F088F0"))) PPC_WEAK_FUNC(sub_82F088F0);
PPC_FUNC_IMPL(__imp__sub_82F088F0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,18524
	ctx.r11.s64 = ctx.r11.s64 + 18524;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f08918
	if (!ctx.cr6.eq) goto loc_82F08918;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F08918:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f08924
	if (ctx.cr6.eq) goto loc_82F08924;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F08924:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,24192
	ctx.r8.s64 = ctx.r10.s64 + 24192;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,205
	ctx.r10.s64 = 205;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-6152
	ctx.r3.s64 = ctx.r9.s64 + -6152;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F08958"))) PPC_WEAK_FUNC(sub_82F08958);
PPC_FUNC_IMPL(__imp__sub_82F08958) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,18544
	ctx.r11.s64 = ctx.r11.s64 + 18544;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f08980
	if (!ctx.cr6.eq) goto loc_82F08980;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F08980:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0898c
	if (ctx.cr6.eq) goto loc_82F0898C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0898C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,24224
	ctx.r8.s64 = ctx.r10.s64 + 24224;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,211
	ctx.r10.s64 = 211;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-6136
	ctx.r3.s64 = ctx.r9.s64 + -6136;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F089C0"))) PPC_WEAK_FUNC(sub_82F089C0);
PPC_FUNC_IMPL(__imp__sub_82F089C0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,18564
	ctx.r11.s64 = ctx.r11.s64 + 18564;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f089e8
	if (!ctx.cr6.eq) goto loc_82F089E8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F089E8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f089f4
	if (ctx.cr6.eq) goto loc_82F089F4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F089F4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,24248
	ctx.r8.s64 = ctx.r10.s64 + 24248;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,181
	ctx.r10.s64 = 181;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-6120
	ctx.r3.s64 = ctx.r9.s64 + -6120;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F08A28"))) PPC_WEAK_FUNC(sub_82F08A28);
PPC_FUNC_IMPL(__imp__sub_82F08A28) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,18584
	ctx.r11.s64 = ctx.r11.s64 + 18584;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f08a50
	if (!ctx.cr6.eq) goto loc_82F08A50;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F08A50:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f08a5c
	if (ctx.cr6.eq) goto loc_82F08A5C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F08A5C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,24268
	ctx.r8.s64 = ctx.r10.s64 + 24268;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,273
	ctx.r10.s64 = 273;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-6104
	ctx.r3.s64 = ctx.r9.s64 + -6104;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F08A90"))) PPC_WEAK_FUNC(sub_82F08A90);
PPC_FUNC_IMPL(__imp__sub_82F08A90) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,18604
	ctx.r11.s64 = ctx.r11.s64 + 18604;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f08ab8
	if (!ctx.cr6.eq) goto loc_82F08AB8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F08AB8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f08ac4
	if (ctx.cr6.eq) goto loc_82F08AC4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F08AC4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,24300
	ctx.r8.s64 = ctx.r10.s64 + 24300;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,203
	ctx.r10.s64 = 203;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-6088
	ctx.r3.s64 = ctx.r9.s64 + -6088;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F08AF8"))) PPC_WEAK_FUNC(sub_82F08AF8);
PPC_FUNC_IMPL(__imp__sub_82F08AF8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,18624
	ctx.r11.s64 = ctx.r11.s64 + 18624;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f08b20
	if (!ctx.cr6.eq) goto loc_82F08B20;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F08B20:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f08b2c
	if (ctx.cr6.eq) goto loc_82F08B2C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F08B2C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,24320
	ctx.r8.s64 = ctx.r10.s64 + 24320;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,185
	ctx.r10.s64 = 185;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-6072
	ctx.r3.s64 = ctx.r9.s64 + -6072;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F08B60"))) PPC_WEAK_FUNC(sub_82F08B60);
PPC_FUNC_IMPL(__imp__sub_82F08B60) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,18644
	ctx.r11.s64 = ctx.r11.s64 + 18644;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f08b88
	if (!ctx.cr6.eq) goto loc_82F08B88;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F08B88:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f08b94
	if (ctx.cr6.eq) goto loc_82F08B94;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F08B94:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,24344
	ctx.r8.s64 = ctx.r10.s64 + 24344;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,191
	ctx.r10.s64 = 191;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-6056
	ctx.r3.s64 = ctx.r9.s64 + -6056;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F08BC8"))) PPC_WEAK_FUNC(sub_82F08BC8);
PPC_FUNC_IMPL(__imp__sub_82F08BC8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,18664
	ctx.r11.s64 = ctx.r11.s64 + 18664;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f08bf0
	if (!ctx.cr6.eq) goto loc_82F08BF0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F08BF0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f08bfc
	if (ctx.cr6.eq) goto loc_82F08BFC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F08BFC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,24368
	ctx.r8.s64 = ctx.r10.s64 + 24368;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,189
	ctx.r10.s64 = 189;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-6040
	ctx.r3.s64 = ctx.r9.s64 + -6040;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F08C30"))) PPC_WEAK_FUNC(sub_82F08C30);
PPC_FUNC_IMPL(__imp__sub_82F08C30) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,18684
	ctx.r11.s64 = ctx.r11.s64 + 18684;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f08c58
	if (!ctx.cr6.eq) goto loc_82F08C58;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F08C58:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f08c64
	if (ctx.cr6.eq) goto loc_82F08C64;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F08C64:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,24384
	ctx.r8.s64 = ctx.r10.s64 + 24384;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,187
	ctx.r10.s64 = 187;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-6024
	ctx.r3.s64 = ctx.r9.s64 + -6024;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F08C98"))) PPC_WEAK_FUNC(sub_82F08C98);
PPC_FUNC_IMPL(__imp__sub_82F08C98) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,18704
	ctx.r11.s64 = ctx.r11.s64 + 18704;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f08cc0
	if (!ctx.cr6.eq) goto loc_82F08CC0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F08CC0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f08ccc
	if (ctx.cr6.eq) goto loc_82F08CCC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F08CCC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,24408
	ctx.r8.s64 = ctx.r10.s64 + 24408;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,253
	ctx.r10.s64 = 253;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-6008
	ctx.r3.s64 = ctx.r9.s64 + -6008;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F08D00"))) PPC_WEAK_FUNC(sub_82F08D00);
PPC_FUNC_IMPL(__imp__sub_82F08D00) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,18724
	ctx.r11.s64 = ctx.r11.s64 + 18724;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f08d28
	if (!ctx.cr6.eq) goto loc_82F08D28;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F08D28:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f08d34
	if (ctx.cr6.eq) goto loc_82F08D34;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F08D34:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,24432
	ctx.r8.s64 = ctx.r10.s64 + 24432;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,209
	ctx.r10.s64 = 209;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-5992
	ctx.r3.s64 = ctx.r9.s64 + -5992;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F08D68"))) PPC_WEAK_FUNC(sub_82F08D68);
PPC_FUNC_IMPL(__imp__sub_82F08D68) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,18744
	ctx.r11.s64 = ctx.r11.s64 + 18744;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f08d90
	if (!ctx.cr6.eq) goto loc_82F08D90;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F08D90:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f08d9c
	if (ctx.cr6.eq) goto loc_82F08D9C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F08D9C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,24456
	ctx.r8.s64 = ctx.r10.s64 + 24456;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,222
	ctx.r10.s64 = 222;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-5976
	ctx.r3.s64 = ctx.r9.s64 + -5976;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F08DD0"))) PPC_WEAK_FUNC(sub_82F08DD0);
PPC_FUNC_IMPL(__imp__sub_82F08DD0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,18764
	ctx.r11.s64 = ctx.r11.s64 + 18764;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f08df8
	if (!ctx.cr6.eq) goto loc_82F08DF8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F08DF8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f08e04
	if (ctx.cr6.eq) goto loc_82F08E04;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F08E04:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,24480
	ctx.r8.s64 = ctx.r10.s64 + 24480;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,214
	ctx.r10.s64 = 214;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-5960
	ctx.r3.s64 = ctx.r9.s64 + -5960;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F08E38"))) PPC_WEAK_FUNC(sub_82F08E38);
PPC_FUNC_IMPL(__imp__sub_82F08E38) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,18784
	ctx.r11.s64 = ctx.r11.s64 + 18784;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f08e60
	if (!ctx.cr6.eq) goto loc_82F08E60;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F08E60:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f08e6c
	if (ctx.cr6.eq) goto loc_82F08E6C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F08E6C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,24496
	ctx.r8.s64 = ctx.r10.s64 + 24496;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,174
	ctx.r10.s64 = 174;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-5944
	ctx.r3.s64 = ctx.r9.s64 + -5944;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F08EA0"))) PPC_WEAK_FUNC(sub_82F08EA0);
PPC_FUNC_IMPL(__imp__sub_82F08EA0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,18804
	ctx.r11.s64 = ctx.r11.s64 + 18804;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f08ec8
	if (!ctx.cr6.eq) goto loc_82F08EC8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F08EC8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f08ed4
	if (ctx.cr6.eq) goto loc_82F08ED4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F08ED4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,24520
	ctx.r8.s64 = ctx.r10.s64 + 24520;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,176
	ctx.r10.s64 = 176;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-5928
	ctx.r3.s64 = ctx.r9.s64 + -5928;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F08F08"))) PPC_WEAK_FUNC(sub_82F08F08);
PPC_FUNC_IMPL(__imp__sub_82F08F08) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,18824
	ctx.r11.s64 = ctx.r11.s64 + 18824;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f08f30
	if (!ctx.cr6.eq) goto loc_82F08F30;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F08F30:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f08f3c
	if (ctx.cr6.eq) goto loc_82F08F3C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F08F3C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,24540
	ctx.r8.s64 = ctx.r10.s64 + 24540;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,182
	ctx.r10.s64 = 182;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-5912
	ctx.r3.s64 = ctx.r9.s64 + -5912;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F08F70"))) PPC_WEAK_FUNC(sub_82F08F70);
PPC_FUNC_IMPL(__imp__sub_82F08F70) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,18844
	ctx.r11.s64 = ctx.r11.s64 + 18844;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f08f98
	if (!ctx.cr6.eq) goto loc_82F08F98;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F08F98:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f08fa4
	if (ctx.cr6.eq) goto loc_82F08FA4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F08FA4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,24552
	ctx.r8.s64 = ctx.r10.s64 + 24552;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,350
	ctx.r10.s64 = 350;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-5896
	ctx.r3.s64 = ctx.r9.s64 + -5896;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F08FD8"))) PPC_WEAK_FUNC(sub_82F08FD8);
PPC_FUNC_IMPL(__imp__sub_82F08FD8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,18864
	ctx.r11.s64 = ctx.r11.s64 + 18864;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f09000
	if (!ctx.cr6.eq) goto loc_82F09000;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F09000:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0900c
	if (ctx.cr6.eq) goto loc_82F0900C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0900C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,24580
	ctx.r8.s64 = ctx.r10.s64 + 24580;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,268
	ctx.r10.s64 = 268;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-5880
	ctx.r3.s64 = ctx.r9.s64 + -5880;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F09040"))) PPC_WEAK_FUNC(sub_82F09040);
PPC_FUNC_IMPL(__imp__sub_82F09040) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,18884
	ctx.r11.s64 = ctx.r11.s64 + 18884;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f09068
	if (!ctx.cr6.eq) goto loc_82F09068;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F09068:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f09074
	if (ctx.cr6.eq) goto loc_82F09074;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F09074:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,24604
	ctx.r8.s64 = ctx.r10.s64 + 24604;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,216
	ctx.r10.s64 = 216;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-5864
	ctx.r3.s64 = ctx.r9.s64 + -5864;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F090A8"))) PPC_WEAK_FUNC(sub_82F090A8);
PPC_FUNC_IMPL(__imp__sub_82F090A8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,18904
	ctx.r11.s64 = ctx.r11.s64 + 18904;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f090d0
	if (!ctx.cr6.eq) goto loc_82F090D0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F090D0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f090dc
	if (ctx.cr6.eq) goto loc_82F090DC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F090DC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,24620
	ctx.r8.s64 = ctx.r10.s64 + 24620;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,218
	ctx.r10.s64 = 218;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-5848
	ctx.r3.s64 = ctx.r9.s64 + -5848;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F09110"))) PPC_WEAK_FUNC(sub_82F09110);
PPC_FUNC_IMPL(__imp__sub_82F09110) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,18924
	ctx.r11.s64 = ctx.r11.s64 + 18924;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f09138
	if (!ctx.cr6.eq) goto loc_82F09138;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F09138:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f09144
	if (ctx.cr6.eq) goto loc_82F09144;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F09144:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,24628
	ctx.r8.s64 = ctx.r10.s64 + 24628;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,220
	ctx.r10.s64 = 220;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-5832
	ctx.r3.s64 = ctx.r9.s64 + -5832;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F09178"))) PPC_WEAK_FUNC(sub_82F09178);
PPC_FUNC_IMPL(__imp__sub_82F09178) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,18944
	ctx.r11.s64 = ctx.r11.s64 + 18944;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f091a0
	if (!ctx.cr6.eq) goto loc_82F091A0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F091A0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f091ac
	if (ctx.cr6.eq) goto loc_82F091AC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F091AC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,24640
	ctx.r8.s64 = ctx.r10.s64 + 24640;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,212
	ctx.r10.s64 = 212;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-5816
	ctx.r3.s64 = ctx.r9.s64 + -5816;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F091E0"))) PPC_WEAK_FUNC(sub_82F091E0);
PPC_FUNC_IMPL(__imp__sub_82F091E0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,18964
	ctx.r11.s64 = ctx.r11.s64 + 18964;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f09208
	if (!ctx.cr6.eq) goto loc_82F09208;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F09208:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f09214
	if (ctx.cr6.eq) goto loc_82F09214;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F09214:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,20956
	ctx.r8.s64 = ctx.r10.s64 + 20956;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,405
	ctx.r10.s64 = 405;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-5800
	ctx.r3.s64 = ctx.r9.s64 + -5800;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F09248"))) PPC_WEAK_FUNC(sub_82F09248);
PPC_FUNC_IMPL(__imp__sub_82F09248) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,18984
	ctx.r11.s64 = ctx.r11.s64 + 18984;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f09270
	if (!ctx.cr6.eq) goto loc_82F09270;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F09270:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0927c
	if (ctx.cr6.eq) goto loc_82F0927C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0927C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,20976
	ctx.r8.s64 = ctx.r10.s64 + 20976;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,406
	ctx.r10.s64 = 406;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-5784
	ctx.r3.s64 = ctx.r9.s64 + -5784;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F092B0"))) PPC_WEAK_FUNC(sub_82F092B0);
PPC_FUNC_IMPL(__imp__sub_82F092B0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,19004
	ctx.r11.s64 = ctx.r11.s64 + 19004;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f092d8
	if (!ctx.cr6.eq) goto loc_82F092D8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F092D8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f092e4
	if (ctx.cr6.eq) goto loc_82F092E4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F092E4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,20996
	ctx.r8.s64 = ctx.r10.s64 + 20996;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,407
	ctx.r10.s64 = 407;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-5768
	ctx.r3.s64 = ctx.r9.s64 + -5768;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F09318"))) PPC_WEAK_FUNC(sub_82F09318);
PPC_FUNC_IMPL(__imp__sub_82F09318) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,19024
	ctx.r11.s64 = ctx.r11.s64 + 19024;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f09340
	if (!ctx.cr6.eq) goto loc_82F09340;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F09340:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0934c
	if (ctx.cr6.eq) goto loc_82F0934C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0934C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,24652
	ctx.r8.s64 = ctx.r10.s64 + 24652;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,354
	ctx.r10.s64 = 354;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-5752
	ctx.r3.s64 = ctx.r9.s64 + -5752;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F09380"))) PPC_WEAK_FUNC(sub_82F09380);
PPC_FUNC_IMPL(__imp__sub_82F09380) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,19044
	ctx.r11.s64 = ctx.r11.s64 + 19044;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f093a8
	if (!ctx.cr6.eq) goto loc_82F093A8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F093A8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f093b4
	if (ctx.cr6.eq) goto loc_82F093B4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F093B4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,24680
	ctx.r8.s64 = ctx.r10.s64 + 24680;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,308
	ctx.r10.s64 = 308;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-5736
	ctx.r3.s64 = ctx.r9.s64 + -5736;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F093E8"))) PPC_WEAK_FUNC(sub_82F093E8);
PPC_FUNC_IMPL(__imp__sub_82F093E8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,19064
	ctx.r11.s64 = ctx.r11.s64 + 19064;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f09410
	if (!ctx.cr6.eq) goto loc_82F09410;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F09410:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0941c
	if (ctx.cr6.eq) goto loc_82F0941C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0941C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,24708
	ctx.r8.s64 = ctx.r10.s64 + 24708;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,332
	ctx.r10.s64 = 332;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-5720
	ctx.r3.s64 = ctx.r9.s64 + -5720;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F09450"))) PPC_WEAK_FUNC(sub_82F09450);
PPC_FUNC_IMPL(__imp__sub_82F09450) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,19084
	ctx.r11.s64 = ctx.r11.s64 + 19084;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f09478
	if (!ctx.cr6.eq) goto loc_82F09478;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F09478:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f09484
	if (ctx.cr6.eq) goto loc_82F09484;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F09484:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,24728
	ctx.r8.s64 = ctx.r10.s64 + 24728;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,355
	ctx.r10.s64 = 355;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-5704
	ctx.r3.s64 = ctx.r9.s64 + -5704;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F094B8"))) PPC_WEAK_FUNC(sub_82F094B8);
PPC_FUNC_IMPL(__imp__sub_82F094B8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,19104
	ctx.r11.s64 = ctx.r11.s64 + 19104;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f094e0
	if (!ctx.cr6.eq) goto loc_82F094E0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F094E0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f094ec
	if (ctx.cr6.eq) goto loc_82F094EC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F094EC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,24748
	ctx.r8.s64 = ctx.r10.s64 + 24748;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,309
	ctx.r10.s64 = 309;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-5688
	ctx.r3.s64 = ctx.r9.s64 + -5688;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F09520"))) PPC_WEAK_FUNC(sub_82F09520);
PPC_FUNC_IMPL(__imp__sub_82F09520) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,19124
	ctx.r11.s64 = ctx.r11.s64 + 19124;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f09548
	if (!ctx.cr6.eq) goto loc_82F09548;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F09548:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f09554
	if (ctx.cr6.eq) goto loc_82F09554;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F09554:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,24780
	ctx.r8.s64 = ctx.r10.s64 + 24780;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,333
	ctx.r10.s64 = 333;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-5672
	ctx.r3.s64 = ctx.r9.s64 + -5672;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F09588"))) PPC_WEAK_FUNC(sub_82F09588);
PPC_FUNC_IMPL(__imp__sub_82F09588) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,19144
	ctx.r11.s64 = ctx.r11.s64 + 19144;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f095b0
	if (!ctx.cr6.eq) goto loc_82F095B0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F095B0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f095bc
	if (ctx.cr6.eq) goto loc_82F095BC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F095BC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,24808
	ctx.r8.s64 = ctx.r10.s64 + 24808;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,223
	ctx.r10.s64 = 223;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-5656
	ctx.r3.s64 = ctx.r9.s64 + -5656;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F095F0"))) PPC_WEAK_FUNC(sub_82F095F0);
PPC_FUNC_IMPL(__imp__sub_82F095F0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,19164
	ctx.r11.s64 = ctx.r11.s64 + 19164;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f09618
	if (!ctx.cr6.eq) goto loc_82F09618;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F09618:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f09624
	if (ctx.cr6.eq) goto loc_82F09624;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F09624:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,24836
	ctx.r8.s64 = ctx.r10.s64 + 24836;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,215
	ctx.r10.s64 = 215;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-5640
	ctx.r3.s64 = ctx.r9.s64 + -5640;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F09658"))) PPC_WEAK_FUNC(sub_82F09658);
PPC_FUNC_IMPL(__imp__sub_82F09658) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f09680
	if (!ctx.cr6.eq) goto loc_82F09680;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F09680:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0968c
	if (ctx.cr6.eq) goto loc_82F0968C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0968C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,24856
	ctx.r8.s64 = ctx.r10.s64 + 24856;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,175
	ctx.r10.s64 = 175;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-5624
	ctx.r3.s64 = ctx.r9.s64 + -5624;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F096C0"))) PPC_WEAK_FUNC(sub_82F096C0);
PPC_FUNC_IMPL(__imp__sub_82F096C0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,19204
	ctx.r11.s64 = ctx.r11.s64 + 19204;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f096e8
	if (!ctx.cr6.eq) goto loc_82F096E8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F096E8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f096f4
	if (ctx.cr6.eq) goto loc_82F096F4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F096F4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,24884
	ctx.r8.s64 = ctx.r10.s64 + 24884;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,177
	ctx.r10.s64 = 177;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-5608
	ctx.r3.s64 = ctx.r9.s64 + -5608;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F09728"))) PPC_WEAK_FUNC(sub_82F09728);
PPC_FUNC_IMPL(__imp__sub_82F09728) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,19224
	ctx.r11.s64 = ctx.r11.s64 + 19224;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f09750
	if (!ctx.cr6.eq) goto loc_82F09750;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F09750:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0975c
	if (ctx.cr6.eq) goto loc_82F0975C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0975C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,24908
	ctx.r8.s64 = ctx.r10.s64 + 24908;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,183
	ctx.r10.s64 = 183;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-5592
	ctx.r3.s64 = ctx.r9.s64 + -5592;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F09790"))) PPC_WEAK_FUNC(sub_82F09790);
PPC_FUNC_IMPL(__imp__sub_82F09790) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,19244
	ctx.r11.s64 = ctx.r11.s64 + 19244;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f097b8
	if (!ctx.cr6.eq) goto loc_82F097B8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F097B8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f097c4
	if (ctx.cr6.eq) goto loc_82F097C4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F097C4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,24928
	ctx.r8.s64 = ctx.r10.s64 + 24928;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,351
	ctx.r10.s64 = 351;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-5576
	ctx.r3.s64 = ctx.r9.s64 + -5576;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F097F8"))) PPC_WEAK_FUNC(sub_82F097F8);
PPC_FUNC_IMPL(__imp__sub_82F097F8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,19264
	ctx.r11.s64 = ctx.r11.s64 + 19264;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f09820
	if (!ctx.cr6.eq) goto loc_82F09820;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F09820:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0982c
	if (ctx.cr6.eq) goto loc_82F0982C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0982C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,24964
	ctx.r8.s64 = ctx.r10.s64 + 24964;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,269
	ctx.r10.s64 = 269;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-5560
	ctx.r3.s64 = ctx.r9.s64 + -5560;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F09860"))) PPC_WEAK_FUNC(sub_82F09860);
PPC_FUNC_IMPL(__imp__sub_82F09860) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,19284
	ctx.r11.s64 = ctx.r11.s64 + 19284;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f09888
	if (!ctx.cr6.eq) goto loc_82F09888;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F09888:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f09894
	if (ctx.cr6.eq) goto loc_82F09894;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F09894:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,24992
	ctx.r8.s64 = ctx.r10.s64 + 24992;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,217
	ctx.r10.s64 = 217;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-5544
	ctx.r3.s64 = ctx.r9.s64 + -5544;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F098C8"))) PPC_WEAK_FUNC(sub_82F098C8);
PPC_FUNC_IMPL(__imp__sub_82F098C8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,19304
	ctx.r11.s64 = ctx.r11.s64 + 19304;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f098f0
	if (!ctx.cr6.eq) goto loc_82F098F0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F098F0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f098fc
	if (ctx.cr6.eq) goto loc_82F098FC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F098FC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,25016
	ctx.r8.s64 = ctx.r10.s64 + 25016;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,219
	ctx.r10.s64 = 219;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-5528
	ctx.r3.s64 = ctx.r9.s64 + -5528;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F09930"))) PPC_WEAK_FUNC(sub_82F09930);
PPC_FUNC_IMPL(__imp__sub_82F09930) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f09958
	if (!ctx.cr6.eq) goto loc_82F09958;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F09958:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f09964
	if (ctx.cr6.eq) goto loc_82F09964;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F09964:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,25028
	ctx.r8.s64 = ctx.r10.s64 + 25028;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,221
	ctx.r10.s64 = 221;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-5512
	ctx.r3.s64 = ctx.r9.s64 + -5512;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F09998"))) PPC_WEAK_FUNC(sub_82F09998);
PPC_FUNC_IMPL(__imp__sub_82F09998) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,19344
	ctx.r11.s64 = ctx.r11.s64 + 19344;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f099c0
	if (!ctx.cr6.eq) goto loc_82F099C0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F099C0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f099cc
	if (ctx.cr6.eq) goto loc_82F099CC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F099CC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,25048
	ctx.r8.s64 = ctx.r10.s64 + 25048;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,213
	ctx.r10.s64 = 213;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-5496
	ctx.r3.s64 = ctx.r9.s64 + -5496;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F09A00"))) PPC_WEAK_FUNC(sub_82F09A00);
PPC_FUNC_IMPL(__imp__sub_82F09A00) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,19364
	ctx.r11.s64 = ctx.r11.s64 + 19364;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f09a28
	if (!ctx.cr6.eq) goto loc_82F09A28;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F09A28:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f09a34
	if (ctx.cr6.eq) goto loc_82F09A34;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F09A34:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,25068
	ctx.r8.s64 = ctx.r10.s64 + 25068;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,172
	ctx.r10.s64 = 172;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-5480
	ctx.r3.s64 = ctx.r9.s64 + -5480;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F09A68"))) PPC_WEAK_FUNC(sub_82F09A68);
PPC_FUNC_IMPL(__imp__sub_82F09A68) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,19384
	ctx.r11.s64 = ctx.r11.s64 + 19384;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f09a90
	if (!ctx.cr6.eq) goto loc_82F09A90;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F09A90:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f09a9c
	if (ctx.cr6.eq) goto loc_82F09A9C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F09A9C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,25088
	ctx.r8.s64 = ctx.r10.s64 + 25088;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,246
	ctx.r10.s64 = 246;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-5464
	ctx.r3.s64 = ctx.r9.s64 + -5464;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F09AD0"))) PPC_WEAK_FUNC(sub_82F09AD0);
PPC_FUNC_IMPL(__imp__sub_82F09AD0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,19404
	ctx.r11.s64 = ctx.r11.s64 + 19404;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f09af8
	if (!ctx.cr6.eq) goto loc_82F09AF8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F09AF8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f09b04
	if (ctx.cr6.eq) goto loc_82F09B04;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F09B04:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,25104
	ctx.r8.s64 = ctx.r10.s64 + 25104;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,240
	ctx.r10.s64 = 240;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-5448
	ctx.r3.s64 = ctx.r9.s64 + -5448;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F09B38"))) PPC_WEAK_FUNC(sub_82F09B38);
PPC_FUNC_IMPL(__imp__sub_82F09B38) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,19424
	ctx.r11.s64 = ctx.r11.s64 + 19424;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f09b60
	if (!ctx.cr6.eq) goto loc_82F09B60;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F09B60:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f09b6c
	if (ctx.cr6.eq) goto loc_82F09B6C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F09B6C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,25116
	ctx.r8.s64 = ctx.r10.s64 + 25116;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,250
	ctx.r10.s64 = 250;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-5432
	ctx.r3.s64 = ctx.r9.s64 + -5432;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F09BA0"))) PPC_WEAK_FUNC(sub_82F09BA0);
PPC_FUNC_IMPL(__imp__sub_82F09BA0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,19444
	ctx.r11.s64 = ctx.r11.s64 + 19444;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f09bc8
	if (!ctx.cr6.eq) goto loc_82F09BC8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F09BC8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f09bd4
	if (ctx.cr6.eq) goto loc_82F09BD4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F09BD4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,25136
	ctx.r8.s64 = ctx.r10.s64 + 25136;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,278
	ctx.r10.s64 = 278;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-5416
	ctx.r3.s64 = ctx.r9.s64 + -5416;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F09C08"))) PPC_WEAK_FUNC(sub_82F09C08);
PPC_FUNC_IMPL(__imp__sub_82F09C08) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,19464
	ctx.r11.s64 = ctx.r11.s64 + 19464;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f09c30
	if (!ctx.cr6.eq) goto loc_82F09C30;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F09C30:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f09c3c
	if (ctx.cr6.eq) goto loc_82F09C3C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F09C3C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,25152
	ctx.r8.s64 = ctx.r10.s64 + 25152;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,340
	ctx.r10.s64 = 340;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-5400
	ctx.r3.s64 = ctx.r9.s64 + -5400;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F09C70"))) PPC_WEAK_FUNC(sub_82F09C70);
PPC_FUNC_IMPL(__imp__sub_82F09C70) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,19484
	ctx.r11.s64 = ctx.r11.s64 + 19484;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f09c98
	if (!ctx.cr6.eq) goto loc_82F09C98;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F09C98:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f09ca4
	if (ctx.cr6.eq) goto loc_82F09CA4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F09CA4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,25176
	ctx.r8.s64 = ctx.r10.s64 + 25176;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,348
	ctx.r10.s64 = 348;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-5384
	ctx.r3.s64 = ctx.r9.s64 + -5384;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F09CD8"))) PPC_WEAK_FUNC(sub_82F09CD8);
PPC_FUNC_IMPL(__imp__sub_82F09CD8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,19504
	ctx.r11.s64 = ctx.r11.s64 + 19504;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f09d00
	if (!ctx.cr6.eq) goto loc_82F09D00;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F09D00:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f09d0c
	if (ctx.cr6.eq) goto loc_82F09D0C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F09D0C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,25200
	ctx.r8.s64 = ctx.r10.s64 + 25200;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,330
	ctx.r10.s64 = 330;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-5368
	ctx.r3.s64 = ctx.r9.s64 + -5368;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F09D40"))) PPC_WEAK_FUNC(sub_82F09D40);
PPC_FUNC_IMPL(__imp__sub_82F09D40) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,19524
	ctx.r11.s64 = ctx.r11.s64 + 19524;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f09d68
	if (!ctx.cr6.eq) goto loc_82F09D68;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F09D68:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f09d74
	if (ctx.cr6.eq) goto loc_82F09D74;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F09D74:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,25220
	ctx.r8.s64 = ctx.r10.s64 + 25220;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,338
	ctx.r10.s64 = 338;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-5352
	ctx.r3.s64 = ctx.r9.s64 + -5352;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F09DA8"))) PPC_WEAK_FUNC(sub_82F09DA8);
PPC_FUNC_IMPL(__imp__sub_82F09DA8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,19544
	ctx.r11.s64 = ctx.r11.s64 + 19544;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f09dd0
	if (!ctx.cr6.eq) goto loc_82F09DD0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F09DD0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f09ddc
	if (ctx.cr6.eq) goto loc_82F09DDC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F09DDC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,25244
	ctx.r8.s64 = ctx.r10.s64 + 25244;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,349
	ctx.r10.s64 = 349;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-5336
	ctx.r3.s64 = ctx.r9.s64 + -5336;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F09E10"))) PPC_WEAK_FUNC(sub_82F09E10);
PPC_FUNC_IMPL(__imp__sub_82F09E10) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,19564
	ctx.r11.s64 = ctx.r11.s64 + 19564;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f09e38
	if (!ctx.cr6.eq) goto loc_82F09E38;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F09E38:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f09e44
	if (ctx.cr6.eq) goto loc_82F09E44;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F09E44:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,25272
	ctx.r8.s64 = ctx.r10.s64 + 25272;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,331
	ctx.r10.s64 = 331;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-5320
	ctx.r3.s64 = ctx.r9.s64 + -5320;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F09E78"))) PPC_WEAK_FUNC(sub_82F09E78);
PPC_FUNC_IMPL(__imp__sub_82F09E78) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,19584
	ctx.r11.s64 = ctx.r11.s64 + 19584;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f09ea0
	if (!ctx.cr6.eq) goto loc_82F09EA0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F09EA0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f09eac
	if (ctx.cr6.eq) goto loc_82F09EAC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F09EAC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,25296
	ctx.r8.s64 = ctx.r10.s64 + 25296;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,339
	ctx.r10.s64 = 339;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-5304
	ctx.r3.s64 = ctx.r9.s64 + -5304;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F09EE0"))) PPC_WEAK_FUNC(sub_82F09EE0);
PPC_FUNC_IMPL(__imp__sub_82F09EE0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,19604
	ctx.r11.s64 = ctx.r11.s64 + 19604;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f09f08
	if (!ctx.cr6.eq) goto loc_82F09F08;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F09F08:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f09f14
	if (ctx.cr6.eq) goto loc_82F09F14;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F09F14:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,25324
	ctx.r8.s64 = ctx.r10.s64 + 25324;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,248
	ctx.r10.s64 = 248;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-5288
	ctx.r3.s64 = ctx.r9.s64 + -5288;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F09F48"))) PPC_WEAK_FUNC(sub_82F09F48);
PPC_FUNC_IMPL(__imp__sub_82F09F48) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,19624
	ctx.r11.s64 = ctx.r11.s64 + 19624;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f09f70
	if (!ctx.cr6.eq) goto loc_82F09F70;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F09F70:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f09f7c
	if (ctx.cr6.eq) goto loc_82F09F7C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F09F7C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,25344
	ctx.r8.s64 = ctx.r10.s64 + 25344;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,224
	ctx.r10.s64 = 224;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-5272
	ctx.r3.s64 = ctx.r9.s64 + -5272;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F09FB0"))) PPC_WEAK_FUNC(sub_82F09FB0);
PPC_FUNC_IMPL(__imp__sub_82F09FB0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,19644
	ctx.r11.s64 = ctx.r11.s64 + 19644;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f09fd8
	if (!ctx.cr6.eq) goto loc_82F09FD8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F09FD8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f09fe4
	if (ctx.cr6.eq) goto loc_82F09FE4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F09FE4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,25352
	ctx.r8.s64 = ctx.r10.s64 + 25352;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,226
	ctx.r10.s64 = 226;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-5256
	ctx.r3.s64 = ctx.r9.s64 + -5256;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0A018"))) PPC_WEAK_FUNC(sub_82F0A018);
PPC_FUNC_IMPL(__imp__sub_82F0A018) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,19664
	ctx.r11.s64 = ctx.r11.s64 + 19664;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0a040
	if (!ctx.cr6.eq) goto loc_82F0A040;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0A040:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0a04c
	if (ctx.cr6.eq) goto loc_82F0A04C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0A04C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,25364
	ctx.r8.s64 = ctx.r10.s64 + 25364;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,228
	ctx.r10.s64 = 228;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-5240
	ctx.r3.s64 = ctx.r9.s64 + -5240;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0A080"))) PPC_WEAK_FUNC(sub_82F0A080);
PPC_FUNC_IMPL(__imp__sub_82F0A080) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,19684
	ctx.r11.s64 = ctx.r11.s64 + 19684;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0a0a8
	if (!ctx.cr6.eq) goto loc_82F0A0A8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0A0A8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0a0b4
	if (ctx.cr6.eq) goto loc_82F0A0B4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0A0B4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,20896
	ctx.r8.s64 = ctx.r10.s64 + 20896;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,402
	ctx.r10.s64 = 402;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-5224
	ctx.r3.s64 = ctx.r9.s64 + -5224;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0A0E8"))) PPC_WEAK_FUNC(sub_82F0A0E8);
PPC_FUNC_IMPL(__imp__sub_82F0A0E8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,19704
	ctx.r11.s64 = ctx.r11.s64 + 19704;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0a110
	if (!ctx.cr6.eq) goto loc_82F0A110;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0A110:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0a11c
	if (ctx.cr6.eq) goto loc_82F0A11C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0A11C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,20916
	ctx.r8.s64 = ctx.r10.s64 + 20916;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,403
	ctx.r10.s64 = 403;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-5208
	ctx.r3.s64 = ctx.r9.s64 + -5208;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0A150"))) PPC_WEAK_FUNC(sub_82F0A150);
PPC_FUNC_IMPL(__imp__sub_82F0A150) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,19724
	ctx.r11.s64 = ctx.r11.s64 + 19724;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0a178
	if (!ctx.cr6.eq) goto loc_82F0A178;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0A178:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0a184
	if (ctx.cr6.eq) goto loc_82F0A184;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0A184:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,20936
	ctx.r8.s64 = ctx.r10.s64 + 20936;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,404
	ctx.r10.s64 = 404;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-5192
	ctx.r3.s64 = ctx.r9.s64 + -5192;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0A1B8"))) PPC_WEAK_FUNC(sub_82F0A1B8);
PPC_FUNC_IMPL(__imp__sub_82F0A1B8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,19744
	ctx.r11.s64 = ctx.r11.s64 + 19744;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0a1e0
	if (!ctx.cr6.eq) goto loc_82F0A1E0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0A1E0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0a1ec
	if (ctx.cr6.eq) goto loc_82F0A1EC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0A1EC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,25384
	ctx.r8.s64 = ctx.r10.s64 + 25384;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,208
	ctx.r10.s64 = 208;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-5176
	ctx.r3.s64 = ctx.r9.s64 + -5176;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0A220"))) PPC_WEAK_FUNC(sub_82F0A220);
PPC_FUNC_IMPL(__imp__sub_82F0A220) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,19764
	ctx.r11.s64 = ctx.r11.s64 + 19764;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0a248
	if (!ctx.cr6.eq) goto loc_82F0A248;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0A248:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0a254
	if (ctx.cr6.eq) goto loc_82F0A254;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0A254:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,25400
	ctx.r8.s64 = ctx.r10.s64 + 25400;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,173
	ctx.r10.s64 = 173;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-5160
	ctx.r3.s64 = ctx.r9.s64 + -5160;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0A288"))) PPC_WEAK_FUNC(sub_82F0A288);
PPC_FUNC_IMPL(__imp__sub_82F0A288) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,19784
	ctx.r11.s64 = ctx.r11.s64 + 19784;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0a2b0
	if (!ctx.cr6.eq) goto loc_82F0A2B0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0A2B0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0a2bc
	if (ctx.cr6.eq) goto loc_82F0A2BC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0A2BC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,25428
	ctx.r8.s64 = ctx.r10.s64 + 25428;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,247
	ctx.r10.s64 = 247;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-5144
	ctx.r3.s64 = ctx.r9.s64 + -5144;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0A2F0"))) PPC_WEAK_FUNC(sub_82F0A2F0);
PPC_FUNC_IMPL(__imp__sub_82F0A2F0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,19804
	ctx.r11.s64 = ctx.r11.s64 + 19804;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0a318
	if (!ctx.cr6.eq) goto loc_82F0A318;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0A318:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0a324
	if (ctx.cr6.eq) goto loc_82F0A324;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0A324:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,25448
	ctx.r8.s64 = ctx.r10.s64 + 25448;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,241
	ctx.r10.s64 = 241;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-5128
	ctx.r3.s64 = ctx.r9.s64 + -5128;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0A358"))) PPC_WEAK_FUNC(sub_82F0A358);
PPC_FUNC_IMPL(__imp__sub_82F0A358) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,19824
	ctx.r11.s64 = ctx.r11.s64 + 19824;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0a380
	if (!ctx.cr6.eq) goto loc_82F0A380;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0A380:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0a38c
	if (ctx.cr6.eq) goto loc_82F0A38C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0A38C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,25468
	ctx.r8.s64 = ctx.r10.s64 + 25468;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,251
	ctx.r10.s64 = 251;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-5112
	ctx.r3.s64 = ctx.r9.s64 + -5112;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0A3C0"))) PPC_WEAK_FUNC(sub_82F0A3C0);
PPC_FUNC_IMPL(__imp__sub_82F0A3C0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,19844
	ctx.r11.s64 = ctx.r11.s64 + 19844;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0a3e8
	if (!ctx.cr6.eq) goto loc_82F0A3E8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0A3E8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0a3f4
	if (ctx.cr6.eq) goto loc_82F0A3F4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0A3F4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,25496
	ctx.r8.s64 = ctx.r10.s64 + 25496;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,279
	ctx.r10.s64 = 279;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-5096
	ctx.r3.s64 = ctx.r9.s64 + -5096;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0A428"))) PPC_WEAK_FUNC(sub_82F0A428);
PPC_FUNC_IMPL(__imp__sub_82F0A428) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,19864
	ctx.r11.s64 = ctx.r11.s64 + 19864;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0a450
	if (!ctx.cr6.eq) goto loc_82F0A450;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0A450:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0a45c
	if (ctx.cr6.eq) goto loc_82F0A45C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0A45C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,25520
	ctx.r8.s64 = ctx.r10.s64 + 25520;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,341
	ctx.r10.s64 = 341;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-5080
	ctx.r3.s64 = ctx.r9.s64 + -5080;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0A490"))) PPC_WEAK_FUNC(sub_82F0A490);
PPC_FUNC_IMPL(__imp__sub_82F0A490) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,19884
	ctx.r11.s64 = ctx.r11.s64 + 19884;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0a4b8
	if (!ctx.cr6.eq) goto loc_82F0A4B8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0A4B8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0a4c4
	if (ctx.cr6.eq) goto loc_82F0A4C4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0A4C4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,25548
	ctx.r8.s64 = ctx.r10.s64 + 25548;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,249
	ctx.r10.s64 = 249;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-5064
	ctx.r3.s64 = ctx.r9.s64 + -5064;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0A4F8"))) PPC_WEAK_FUNC(sub_82F0A4F8);
PPC_FUNC_IMPL(__imp__sub_82F0A4F8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,19904
	ctx.r11.s64 = ctx.r11.s64 + 19904;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0a520
	if (!ctx.cr6.eq) goto loc_82F0A520;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0A520:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0a52c
	if (ctx.cr6.eq) goto loc_82F0A52C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0A52C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,25576
	ctx.r8.s64 = ctx.r10.s64 + 25576;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,225
	ctx.r10.s64 = 225;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-5048
	ctx.r3.s64 = ctx.r9.s64 + -5048;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0A560"))) PPC_WEAK_FUNC(sub_82F0A560);
PPC_FUNC_IMPL(__imp__sub_82F0A560) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,19924
	ctx.r11.s64 = ctx.r11.s64 + 19924;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0a588
	if (!ctx.cr6.eq) goto loc_82F0A588;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0A588:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0a594
	if (ctx.cr6.eq) goto loc_82F0A594;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0A594:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,25592
	ctx.r8.s64 = ctx.r10.s64 + 25592;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,227
	ctx.r10.s64 = 227;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-5032
	ctx.r3.s64 = ctx.r9.s64 + -5032;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0A5C8"))) PPC_WEAK_FUNC(sub_82F0A5C8);
PPC_FUNC_IMPL(__imp__sub_82F0A5C8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,19944
	ctx.r11.s64 = ctx.r11.s64 + 19944;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0a5f0
	if (!ctx.cr6.eq) goto loc_82F0A5F0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0A5F0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0a5fc
	if (ctx.cr6.eq) goto loc_82F0A5FC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0A5FC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,25608
	ctx.r8.s64 = ctx.r10.s64 + 25608;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,229
	ctx.r10.s64 = 229;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-5016
	ctx.r3.s64 = ctx.r9.s64 + -5016;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0A630"))) PPC_WEAK_FUNC(sub_82F0A630);
PPC_FUNC_IMPL(__imp__sub_82F0A630) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,19964
	ctx.r11.s64 = ctx.r11.s64 + 19964;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0a658
	if (!ctx.cr6.eq) goto loc_82F0A658;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0A658:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0a664
	if (ctx.cr6.eq) goto loc_82F0A664;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0A664:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,25636
	ctx.r8.s64 = ctx.r10.s64 + 25636;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,260
	ctx.r10.s64 = 260;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-5000
	ctx.r3.s64 = ctx.r9.s64 + -5000;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0A698"))) PPC_WEAK_FUNC(sub_82F0A698);
PPC_FUNC_IMPL(__imp__sub_82F0A698) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,19984
	ctx.r11.s64 = ctx.r11.s64 + 19984;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0a6c0
	if (!ctx.cr6.eq) goto loc_82F0A6C0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0A6C0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0a6cc
	if (ctx.cr6.eq) goto loc_82F0A6CC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0A6CC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,25644
	ctx.r8.s64 = ctx.r10.s64 + 25644;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,256
	ctx.r10.s64 = 256;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-4984
	ctx.r3.s64 = ctx.r9.s64 + -4984;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0A700"))) PPC_WEAK_FUNC(sub_82F0A700);
PPC_FUNC_IMPL(__imp__sub_82F0A700) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,20004
	ctx.r11.s64 = ctx.r11.s64 + 20004;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0a728
	if (!ctx.cr6.eq) goto loc_82F0A728;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0A728:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0a734
	if (ctx.cr6.eq) goto loc_82F0A734;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0A734:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,25656
	ctx.r8.s64 = ctx.r10.s64 + 25656;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,262
	ctx.r10.s64 = 262;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-4968
	ctx.r3.s64 = ctx.r9.s64 + -4968;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0A768"))) PPC_WEAK_FUNC(sub_82F0A768);
PPC_FUNC_IMPL(__imp__sub_82F0A768) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,20024
	ctx.r11.s64 = ctx.r11.s64 + 20024;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0a790
	if (!ctx.cr6.eq) goto loc_82F0A790;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0A790:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0a79c
	if (ctx.cr6.eq) goto loc_82F0A79C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0A79C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,25676
	ctx.r8.s64 = ctx.r10.s64 + 25676;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,258
	ctx.r10.s64 = 258;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-4952
	ctx.r3.s64 = ctx.r9.s64 + -4952;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0A7D0"))) PPC_WEAK_FUNC(sub_82F0A7D0);
PPC_FUNC_IMPL(__imp__sub_82F0A7D0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,20044
	ctx.r11.s64 = ctx.r11.s64 + 20044;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0a7f8
	if (!ctx.cr6.eq) goto loc_82F0A7F8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0A7F8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0a804
	if (ctx.cr6.eq) goto loc_82F0A804;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0A804:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,25692
	ctx.r8.s64 = ctx.r10.s64 + 25692;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,266
	ctx.r10.s64 = 266;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-4936
	ctx.r3.s64 = ctx.r9.s64 + -4936;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0A838"))) PPC_WEAK_FUNC(sub_82F0A838);
PPC_FUNC_IMPL(__imp__sub_82F0A838) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,20064
	ctx.r11.s64 = ctx.r11.s64 + 20064;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0a860
	if (!ctx.cr6.eq) goto loc_82F0A860;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0A860:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0a86c
	if (ctx.cr6.eq) goto loc_82F0A86C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0A86C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,25708
	ctx.r8.s64 = ctx.r10.s64 + 25708;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,168
	ctx.r10.s64 = 168;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-4920
	ctx.r3.s64 = ctx.r9.s64 + -4920;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0A8A0"))) PPC_WEAK_FUNC(sub_82F0A8A0);
PPC_FUNC_IMPL(__imp__sub_82F0A8A0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,20084
	ctx.r11.s64 = ctx.r11.s64 + 20084;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0a8c8
	if (!ctx.cr6.eq) goto loc_82F0A8C8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0A8C8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0a8d4
	if (ctx.cr6.eq) goto loc_82F0A8D4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0A8D4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,25728
	ctx.r8.s64 = ctx.r10.s64 + 25728;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,170
	ctx.r10.s64 = 170;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-4904
	ctx.r3.s64 = ctx.r9.s64 + -4904;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0A908"))) PPC_WEAK_FUNC(sub_82F0A908);
PPC_FUNC_IMPL(__imp__sub_82F0A908) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,20104
	ctx.r11.s64 = ctx.r11.s64 + 20104;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0a930
	if (!ctx.cr6.eq) goto loc_82F0A930;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0A930:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0a93c
	if (ctx.cr6.eq) goto loc_82F0A93C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0A93C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,25748
	ctx.r8.s64 = ctx.r10.s64 + 25748;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,270
	ctx.r10.s64 = 270;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-4888
	ctx.r3.s64 = ctx.r9.s64 + -4888;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0A970"))) PPC_WEAK_FUNC(sub_82F0A970);
PPC_FUNC_IMPL(__imp__sub_82F0A970) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,20124
	ctx.r11.s64 = ctx.r11.s64 + 20124;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0a998
	if (!ctx.cr6.eq) goto loc_82F0A998;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0A998:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0a9a4
	if (ctx.cr6.eq) goto loc_82F0A9A4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0A9A4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,25756
	ctx.r8.s64 = ctx.r10.s64 + 25756;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,264
	ctx.r10.s64 = 264;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-4872
	ctx.r3.s64 = ctx.r9.s64 + -4872;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0A9D8"))) PPC_WEAK_FUNC(sub_82F0A9D8);
PPC_FUNC_IMPL(__imp__sub_82F0A9D8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,20144
	ctx.r11.s64 = ctx.r11.s64 + 20144;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0aa00
	if (!ctx.cr6.eq) goto loc_82F0AA00;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0AA00:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0aa0c
	if (ctx.cr6.eq) goto loc_82F0AA0C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0AA0C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,25780
	ctx.r8.s64 = ctx.r10.s64 + 25780;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,322
	ctx.r10.s64 = 322;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-4856
	ctx.r3.s64 = ctx.r9.s64 + -4856;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0AA40"))) PPC_WEAK_FUNC(sub_82F0AA40);
PPC_FUNC_IMPL(__imp__sub_82F0AA40) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,20164
	ctx.r11.s64 = ctx.r11.s64 + 20164;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0aa68
	if (!ctx.cr6.eq) goto loc_82F0AA68;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0AA68:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0aa74
	if (ctx.cr6.eq) goto loc_82F0AA74;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0AA74:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,25796
	ctx.r8.s64 = ctx.r10.s64 + 25796;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,230
	ctx.r10.s64 = 230;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-4840
	ctx.r3.s64 = ctx.r9.s64 + -4840;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0AAA8"))) PPC_WEAK_FUNC(sub_82F0AAA8);
PPC_FUNC_IMPL(__imp__sub_82F0AAA8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,20184
	ctx.r11.s64 = ctx.r11.s64 + 20184;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0aad0
	if (!ctx.cr6.eq) goto loc_82F0AAD0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0AAD0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0aadc
	if (ctx.cr6.eq) goto loc_82F0AADC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0AADC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,25812
	ctx.r8.s64 = ctx.r10.s64 + 25812;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,232
	ctx.r10.s64 = 232;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-4824
	ctx.r3.s64 = ctx.r9.s64 + -4824;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0AB10"))) PPC_WEAK_FUNC(sub_82F0AB10);
PPC_FUNC_IMPL(__imp__sub_82F0AB10) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,20204
	ctx.r11.s64 = ctx.r11.s64 + 20204;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0ab38
	if (!ctx.cr6.eq) goto loc_82F0AB38;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0AB38:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0ab44
	if (ctx.cr6.eq) goto loc_82F0AB44;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0AB44:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,25832
	ctx.r8.s64 = ctx.r10.s64 + 25832;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,234
	ctx.r10.s64 = 234;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-4808
	ctx.r3.s64 = ctx.r9.s64 + -4808;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0AB78"))) PPC_WEAK_FUNC(sub_82F0AB78);
PPC_FUNC_IMPL(__imp__sub_82F0AB78) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,20224
	ctx.r11.s64 = ctx.r11.s64 + 20224;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0aba0
	if (!ctx.cr6.eq) goto loc_82F0ABA0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0ABA0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0abac
	if (ctx.cr6.eq) goto loc_82F0ABAC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0ABAC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,20764
	ctx.r8.s64 = ctx.r10.s64 + 20764;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,396
	ctx.r10.s64 = 396;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-4792
	ctx.r3.s64 = ctx.r9.s64 + -4792;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0ABE0"))) PPC_WEAK_FUNC(sub_82F0ABE0);
PPC_FUNC_IMPL(__imp__sub_82F0ABE0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,20244
	ctx.r11.s64 = ctx.r11.s64 + 20244;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0ac08
	if (!ctx.cr6.eq) goto loc_82F0AC08;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0AC08:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0ac14
	if (ctx.cr6.eq) goto loc_82F0AC14;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0AC14:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,20788
	ctx.r8.s64 = ctx.r10.s64 + 20788;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,397
	ctx.r10.s64 = 397;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-4776
	ctx.r3.s64 = ctx.r9.s64 + -4776;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0AC48"))) PPC_WEAK_FUNC(sub_82F0AC48);
PPC_FUNC_IMPL(__imp__sub_82F0AC48) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,20264
	ctx.r11.s64 = ctx.r11.s64 + 20264;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0ac70
	if (!ctx.cr6.eq) goto loc_82F0AC70;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0AC70:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0ac7c
	if (ctx.cr6.eq) goto loc_82F0AC7C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0AC7C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,20812
	ctx.r8.s64 = ctx.r10.s64 + 20812;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,398
	ctx.r10.s64 = 398;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-4760
	ctx.r3.s64 = ctx.r9.s64 + -4760;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0ACB0"))) PPC_WEAK_FUNC(sub_82F0ACB0);
PPC_FUNC_IMPL(__imp__sub_82F0ACB0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,20284
	ctx.r11.s64 = ctx.r11.s64 + 20284;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0acd8
	if (!ctx.cr6.eq) goto loc_82F0ACD8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0ACD8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0ace4
	if (ctx.cr6.eq) goto loc_82F0ACE4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0ACE4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,25844
	ctx.r8.s64 = ctx.r10.s64 + 25844;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,236
	ctx.r10.s64 = 236;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-4744
	ctx.r3.s64 = ctx.r9.s64 + -4744;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

