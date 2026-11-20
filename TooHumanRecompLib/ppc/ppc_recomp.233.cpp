#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82F11518"))) PPC_WEAK_FUNC(sub_82F11518);
PPC_FUNC_IMPL(__imp__sub_82F11518) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,25424
	ctx.r11.s64 = ctx.r11.s64 + 25424;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f11540
	if (!ctx.cr6.eq) goto loc_82F11540;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F11540:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f1154c
	if (ctx.cr6.eq) goto loc_82F1154C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F1154C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,29864
	ctx.r8.s64 = ctx.r10.s64 + 29864;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,34
	ctx.r10.s64 = 34;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-632
	ctx.r3.s64 = ctx.r9.s64 + -632;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F11580"))) PPC_WEAK_FUNC(sub_82F11580);
PPC_FUNC_IMPL(__imp__sub_82F11580) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,25444
	ctx.r11.s64 = ctx.r11.s64 + 25444;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f115a8
	if (!ctx.cr6.eq) goto loc_82F115A8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F115A8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f115b4
	if (ctx.cr6.eq) goto loc_82F115B4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F115B4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,29884
	ctx.r8.s64 = ctx.r10.s64 + 29884;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,35
	ctx.r10.s64 = 35;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-616
	ctx.r3.s64 = ctx.r9.s64 + -616;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F115E8"))) PPC_WEAK_FUNC(sub_82F115E8);
PPC_FUNC_IMPL(__imp__sub_82F115E8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,25464
	ctx.r11.s64 = ctx.r11.s64 + 25464;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f11610
	if (!ctx.cr6.eq) goto loc_82F11610;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F11610:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f1161c
	if (ctx.cr6.eq) goto loc_82F1161C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F1161C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,29908
	ctx.r8.s64 = ctx.r10.s64 + 29908;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,36
	ctx.r10.s64 = 36;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-600
	ctx.r3.s64 = ctx.r9.s64 + -600;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F11650"))) PPC_WEAK_FUNC(sub_82F11650);
PPC_FUNC_IMPL(__imp__sub_82F11650) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,25484
	ctx.r11.s64 = ctx.r11.s64 + 25484;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f11678
	if (!ctx.cr6.eq) goto loc_82F11678;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F11678:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f11684
	if (ctx.cr6.eq) goto loc_82F11684;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F11684:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,29932
	ctx.r8.s64 = ctx.r10.s64 + 29932;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,37
	ctx.r10.s64 = 37;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-584
	ctx.r3.s64 = ctx.r9.s64 + -584;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F116B8"))) PPC_WEAK_FUNC(sub_82F116B8);
PPC_FUNC_IMPL(__imp__sub_82F116B8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,25504
	ctx.r11.s64 = ctx.r11.s64 + 25504;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f116e0
	if (!ctx.cr6.eq) goto loc_82F116E0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F116E0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f116ec
	if (ctx.cr6.eq) goto loc_82F116EC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F116EC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,29956
	ctx.r8.s64 = ctx.r10.s64 + 29956;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,38
	ctx.r10.s64 = 38;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-568
	ctx.r3.s64 = ctx.r9.s64 + -568;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F11720"))) PPC_WEAK_FUNC(sub_82F11720);
PPC_FUNC_IMPL(__imp__sub_82F11720) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,25524
	ctx.r11.s64 = ctx.r11.s64 + 25524;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f11748
	if (!ctx.cr6.eq) goto loc_82F11748;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F11748:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f11754
	if (ctx.cr6.eq) goto loc_82F11754;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F11754:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,29980
	ctx.r8.s64 = ctx.r10.s64 + 29980;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,39
	ctx.r10.s64 = 39;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-552
	ctx.r3.s64 = ctx.r9.s64 + -552;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F11788"))) PPC_WEAK_FUNC(sub_82F11788);
PPC_FUNC_IMPL(__imp__sub_82F11788) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,25544
	ctx.r11.s64 = ctx.r11.s64 + 25544;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f117b0
	if (!ctx.cr6.eq) goto loc_82F117B0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F117B0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f117bc
	if (ctx.cr6.eq) goto loc_82F117BC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F117BC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,30004
	ctx.r8.s64 = ctx.r10.s64 + 30004;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,40
	ctx.r10.s64 = 40;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-536
	ctx.r3.s64 = ctx.r9.s64 + -536;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F117F0"))) PPC_WEAK_FUNC(sub_82F117F0);
PPC_FUNC_IMPL(__imp__sub_82F117F0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,25564
	ctx.r11.s64 = ctx.r11.s64 + 25564;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f11818
	if (!ctx.cr6.eq) goto loc_82F11818;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F11818:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f11824
	if (ctx.cr6.eq) goto loc_82F11824;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F11824:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,30028
	ctx.r8.s64 = ctx.r10.s64 + 30028;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,41
	ctx.r10.s64 = 41;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-520
	ctx.r3.s64 = ctx.r9.s64 + -520;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F11858"))) PPC_WEAK_FUNC(sub_82F11858);
PPC_FUNC_IMPL(__imp__sub_82F11858) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,25584
	ctx.r11.s64 = ctx.r11.s64 + 25584;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f11880
	if (!ctx.cr6.eq) goto loc_82F11880;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F11880:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f1188c
	if (ctx.cr6.eq) goto loc_82F1188C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F1188C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,30052
	ctx.r8.s64 = ctx.r10.s64 + 30052;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,42
	ctx.r10.s64 = 42;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-504
	ctx.r3.s64 = ctx.r9.s64 + -504;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F118C0"))) PPC_WEAK_FUNC(sub_82F118C0);
PPC_FUNC_IMPL(__imp__sub_82F118C0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,25604
	ctx.r11.s64 = ctx.r11.s64 + 25604;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f118e8
	if (!ctx.cr6.eq) goto loc_82F118E8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F118E8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f118f4
	if (ctx.cr6.eq) goto loc_82F118F4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F118F4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,30076
	ctx.r8.s64 = ctx.r10.s64 + 30076;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,43
	ctx.r10.s64 = 43;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-488
	ctx.r3.s64 = ctx.r9.s64 + -488;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F11928"))) PPC_WEAK_FUNC(sub_82F11928);
PPC_FUNC_IMPL(__imp__sub_82F11928) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,25624
	ctx.r11.s64 = ctx.r11.s64 + 25624;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f11950
	if (!ctx.cr6.eq) goto loc_82F11950;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F11950:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f1195c
	if (ctx.cr6.eq) goto loc_82F1195C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F1195C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,30100
	ctx.r8.s64 = ctx.r10.s64 + 30100;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,44
	ctx.r10.s64 = 44;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-472
	ctx.r3.s64 = ctx.r9.s64 + -472;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F11990"))) PPC_WEAK_FUNC(sub_82F11990);
PPC_FUNC_IMPL(__imp__sub_82F11990) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,25644
	ctx.r11.s64 = ctx.r11.s64 + 25644;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f119b8
	if (!ctx.cr6.eq) goto loc_82F119B8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F119B8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f119c4
	if (ctx.cr6.eq) goto loc_82F119C4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F119C4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,30124
	ctx.r8.s64 = ctx.r10.s64 + 30124;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,45
	ctx.r10.s64 = 45;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-456
	ctx.r3.s64 = ctx.r9.s64 + -456;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F119F8"))) PPC_WEAK_FUNC(sub_82F119F8);
PPC_FUNC_IMPL(__imp__sub_82F119F8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,25664
	ctx.r11.s64 = ctx.r11.s64 + 25664;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f11a20
	if (!ctx.cr6.eq) goto loc_82F11A20;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F11A20:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f11a2c
	if (ctx.cr6.eq) goto loc_82F11A2C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F11A2C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,30148
	ctx.r8.s64 = ctx.r10.s64 + 30148;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,46
	ctx.r10.s64 = 46;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-440
	ctx.r3.s64 = ctx.r9.s64 + -440;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F11A60"))) PPC_WEAK_FUNC(sub_82F11A60);
PPC_FUNC_IMPL(__imp__sub_82F11A60) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,25684
	ctx.r11.s64 = ctx.r11.s64 + 25684;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f11a88
	if (!ctx.cr6.eq) goto loc_82F11A88;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F11A88:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f11a94
	if (ctx.cr6.eq) goto loc_82F11A94;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F11A94:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,30172
	ctx.r8.s64 = ctx.r10.s64 + 30172;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,47
	ctx.r10.s64 = 47;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-424
	ctx.r3.s64 = ctx.r9.s64 + -424;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F11AC8"))) PPC_WEAK_FUNC(sub_82F11AC8);
PPC_FUNC_IMPL(__imp__sub_82F11AC8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,25704
	ctx.r11.s64 = ctx.r11.s64 + 25704;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f11af0
	if (!ctx.cr6.eq) goto loc_82F11AF0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F11AF0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f11afc
	if (ctx.cr6.eq) goto loc_82F11AFC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F11AFC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,30188
	ctx.r8.s64 = ctx.r10.s64 + 30188;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,48
	ctx.r10.s64 = 48;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-408
	ctx.r3.s64 = ctx.r9.s64 + -408;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F11B30"))) PPC_WEAK_FUNC(sub_82F11B30);
PPC_FUNC_IMPL(__imp__sub_82F11B30) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,25724
	ctx.r11.s64 = ctx.r11.s64 + 25724;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f11b58
	if (!ctx.cr6.eq) goto loc_82F11B58;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F11B58:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f11b64
	if (ctx.cr6.eq) goto loc_82F11B64;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F11B64:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,30204
	ctx.r8.s64 = ctx.r10.s64 + 30204;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,49
	ctx.r10.s64 = 49;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-392
	ctx.r3.s64 = ctx.r9.s64 + -392;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F11B98"))) PPC_WEAK_FUNC(sub_82F11B98);
PPC_FUNC_IMPL(__imp__sub_82F11B98) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,25744
	ctx.r11.s64 = ctx.r11.s64 + 25744;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f11bc0
	if (!ctx.cr6.eq) goto loc_82F11BC0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F11BC0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f11bcc
	if (ctx.cr6.eq) goto loc_82F11BCC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F11BCC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,30220
	ctx.r8.s64 = ctx.r10.s64 + 30220;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,50
	ctx.r10.s64 = 50;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-376
	ctx.r3.s64 = ctx.r9.s64 + -376;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F11C00"))) PPC_WEAK_FUNC(sub_82F11C00);
PPC_FUNC_IMPL(__imp__sub_82F11C00) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,25764
	ctx.r11.s64 = ctx.r11.s64 + 25764;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f11c28
	if (!ctx.cr6.eq) goto loc_82F11C28;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F11C28:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f11c34
	if (ctx.cr6.eq) goto loc_82F11C34;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F11C34:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,30236
	ctx.r8.s64 = ctx.r10.s64 + 30236;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,51
	ctx.r10.s64 = 51;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-360
	ctx.r3.s64 = ctx.r9.s64 + -360;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F11C68"))) PPC_WEAK_FUNC(sub_82F11C68);
PPC_FUNC_IMPL(__imp__sub_82F11C68) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,25784
	ctx.r11.s64 = ctx.r11.s64 + 25784;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f11c90
	if (!ctx.cr6.eq) goto loc_82F11C90;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F11C90:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f11c9c
	if (ctx.cr6.eq) goto loc_82F11C9C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F11C9C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,30252
	ctx.r8.s64 = ctx.r10.s64 + 30252;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,52
	ctx.r10.s64 = 52;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-344
	ctx.r3.s64 = ctx.r9.s64 + -344;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F11CD0"))) PPC_WEAK_FUNC(sub_82F11CD0);
PPC_FUNC_IMPL(__imp__sub_82F11CD0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,25804
	ctx.r11.s64 = ctx.r11.s64 + 25804;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f11cf8
	if (!ctx.cr6.eq) goto loc_82F11CF8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F11CF8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f11d04
	if (ctx.cr6.eq) goto loc_82F11D04;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F11D04:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,30268
	ctx.r8.s64 = ctx.r10.s64 + 30268;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,53
	ctx.r10.s64 = 53;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-328
	ctx.r3.s64 = ctx.r9.s64 + -328;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F11D38"))) PPC_WEAK_FUNC(sub_82F11D38);
PPC_FUNC_IMPL(__imp__sub_82F11D38) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,25824
	ctx.r11.s64 = ctx.r11.s64 + 25824;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f11d60
	if (!ctx.cr6.eq) goto loc_82F11D60;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F11D60:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f11d6c
	if (ctx.cr6.eq) goto loc_82F11D6C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F11D6C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,30284
	ctx.r8.s64 = ctx.r10.s64 + 30284;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,54
	ctx.r10.s64 = 54;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-312
	ctx.r3.s64 = ctx.r9.s64 + -312;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F11DA0"))) PPC_WEAK_FUNC(sub_82F11DA0);
PPC_FUNC_IMPL(__imp__sub_82F11DA0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,25844
	ctx.r11.s64 = ctx.r11.s64 + 25844;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f11dc8
	if (!ctx.cr6.eq) goto loc_82F11DC8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F11DC8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f11dd4
	if (ctx.cr6.eq) goto loc_82F11DD4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F11DD4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,30300
	ctx.r8.s64 = ctx.r10.s64 + 30300;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,55
	ctx.r10.s64 = 55;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-296
	ctx.r3.s64 = ctx.r9.s64 + -296;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F11E08"))) PPC_WEAK_FUNC(sub_82F11E08);
PPC_FUNC_IMPL(__imp__sub_82F11E08) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,25864
	ctx.r11.s64 = ctx.r11.s64 + 25864;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f11e30
	if (!ctx.cr6.eq) goto loc_82F11E30;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F11E30:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f11e3c
	if (ctx.cr6.eq) goto loc_82F11E3C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F11E3C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,30316
	ctx.r8.s64 = ctx.r10.s64 + 30316;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,56
	ctx.r10.s64 = 56;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-280
	ctx.r3.s64 = ctx.r9.s64 + -280;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F11E70"))) PPC_WEAK_FUNC(sub_82F11E70);
PPC_FUNC_IMPL(__imp__sub_82F11E70) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,25884
	ctx.r11.s64 = ctx.r11.s64 + 25884;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f11e98
	if (!ctx.cr6.eq) goto loc_82F11E98;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F11E98:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f11ea4
	if (ctx.cr6.eq) goto loc_82F11EA4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F11EA4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,30332
	ctx.r8.s64 = ctx.r10.s64 + 30332;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,57
	ctx.r10.s64 = 57;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-264
	ctx.r3.s64 = ctx.r9.s64 + -264;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F11ED8"))) PPC_WEAK_FUNC(sub_82F11ED8);
PPC_FUNC_IMPL(__imp__sub_82F11ED8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,25904
	ctx.r11.s64 = ctx.r11.s64 + 25904;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f11f00
	if (!ctx.cr6.eq) goto loc_82F11F00;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F11F00:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f11f0c
	if (ctx.cr6.eq) goto loc_82F11F0C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F11F0C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,30348
	ctx.r8.s64 = ctx.r10.s64 + 30348;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,58
	ctx.r10.s64 = 58;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-248
	ctx.r3.s64 = ctx.r9.s64 + -248;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F11F40"))) PPC_WEAK_FUNC(sub_82F11F40);
PPC_FUNC_IMPL(__imp__sub_82F11F40) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,25924
	ctx.r11.s64 = ctx.r11.s64 + 25924;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f11f68
	if (!ctx.cr6.eq) goto loc_82F11F68;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F11F68:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f11f74
	if (ctx.cr6.eq) goto loc_82F11F74;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F11F74:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,30364
	ctx.r8.s64 = ctx.r10.s64 + 30364;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,59
	ctx.r10.s64 = 59;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-232
	ctx.r3.s64 = ctx.r9.s64 + -232;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F11FA8"))) PPC_WEAK_FUNC(sub_82F11FA8);
PPC_FUNC_IMPL(__imp__sub_82F11FA8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,25944
	ctx.r11.s64 = ctx.r11.s64 + 25944;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f11fd0
	if (!ctx.cr6.eq) goto loc_82F11FD0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F11FD0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f11fdc
	if (ctx.cr6.eq) goto loc_82F11FDC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F11FDC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,30380
	ctx.r8.s64 = ctx.r10.s64 + 30380;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,60
	ctx.r10.s64 = 60;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-216
	ctx.r3.s64 = ctx.r9.s64 + -216;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F12010"))) PPC_WEAK_FUNC(sub_82F12010);
PPC_FUNC_IMPL(__imp__sub_82F12010) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,25964
	ctx.r11.s64 = ctx.r11.s64 + 25964;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f12038
	if (!ctx.cr6.eq) goto loc_82F12038;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F12038:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f12044
	if (ctx.cr6.eq) goto loc_82F12044;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F12044:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,30396
	ctx.r8.s64 = ctx.r10.s64 + 30396;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,61
	ctx.r10.s64 = 61;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-200
	ctx.r3.s64 = ctx.r9.s64 + -200;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F12078"))) PPC_WEAK_FUNC(sub_82F12078);
PPC_FUNC_IMPL(__imp__sub_82F12078) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,25984
	ctx.r11.s64 = ctx.r11.s64 + 25984;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f120a0
	if (!ctx.cr6.eq) goto loc_82F120A0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F120A0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f120ac
	if (ctx.cr6.eq) goto loc_82F120AC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F120AC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,30412
	ctx.r8.s64 = ctx.r10.s64 + 30412;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,62
	ctx.r10.s64 = 62;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-184
	ctx.r3.s64 = ctx.r9.s64 + -184;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F120E0"))) PPC_WEAK_FUNC(sub_82F120E0);
PPC_FUNC_IMPL(__imp__sub_82F120E0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,26004
	ctx.r11.s64 = ctx.r11.s64 + 26004;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f12108
	if (!ctx.cr6.eq) goto loc_82F12108;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F12108:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f12114
	if (ctx.cr6.eq) goto loc_82F12114;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F12114:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,30428
	ctx.r8.s64 = ctx.r10.s64 + 30428;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,63
	ctx.r10.s64 = 63;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-168
	ctx.r3.s64 = ctx.r9.s64 + -168;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F12148"))) PPC_WEAK_FUNC(sub_82F12148);
PPC_FUNC_IMPL(__imp__sub_82F12148) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,26024
	ctx.r11.s64 = ctx.r11.s64 + 26024;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f12170
	if (!ctx.cr6.eq) goto loc_82F12170;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F12170:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f1217c
	if (ctx.cr6.eq) goto loc_82F1217C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F1217C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,30444
	ctx.r8.s64 = ctx.r10.s64 + 30444;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,64
	ctx.r10.s64 = 64;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-152
	ctx.r3.s64 = ctx.r9.s64 + -152;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F121B0"))) PPC_WEAK_FUNC(sub_82F121B0);
PPC_FUNC_IMPL(__imp__sub_82F121B0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,26044
	ctx.r11.s64 = ctx.r11.s64 + 26044;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f121d8
	if (!ctx.cr6.eq) goto loc_82F121D8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F121D8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f121e4
	if (ctx.cr6.eq) goto loc_82F121E4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F121E4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,30460
	ctx.r8.s64 = ctx.r10.s64 + 30460;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,65
	ctx.r10.s64 = 65;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-136
	ctx.r3.s64 = ctx.r9.s64 + -136;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F12218"))) PPC_WEAK_FUNC(sub_82F12218);
PPC_FUNC_IMPL(__imp__sub_82F12218) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,26064
	ctx.r11.s64 = ctx.r11.s64 + 26064;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f12240
	if (!ctx.cr6.eq) goto loc_82F12240;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F12240:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f1224c
	if (ctx.cr6.eq) goto loc_82F1224C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F1224C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,30476
	ctx.r8.s64 = ctx.r10.s64 + 30476;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,66
	ctx.r10.s64 = 66;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-120
	ctx.r3.s64 = ctx.r9.s64 + -120;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F12280"))) PPC_WEAK_FUNC(sub_82F12280);
PPC_FUNC_IMPL(__imp__sub_82F12280) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,26084
	ctx.r11.s64 = ctx.r11.s64 + 26084;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f122a8
	if (!ctx.cr6.eq) goto loc_82F122A8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F122A8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f122b4
	if (ctx.cr6.eq) goto loc_82F122B4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F122B4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,30492
	ctx.r8.s64 = ctx.r10.s64 + 30492;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,67
	ctx.r10.s64 = 67;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-104
	ctx.r3.s64 = ctx.r9.s64 + -104;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F122E8"))) PPC_WEAK_FUNC(sub_82F122E8);
PPC_FUNC_IMPL(__imp__sub_82F122E8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,26104
	ctx.r11.s64 = ctx.r11.s64 + 26104;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f12310
	if (!ctx.cr6.eq) goto loc_82F12310;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F12310:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f1231c
	if (ctx.cr6.eq) goto loc_82F1231C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F1231C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,30508
	ctx.r8.s64 = ctx.r10.s64 + 30508;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,68
	ctx.r10.s64 = 68;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-88
	ctx.r3.s64 = ctx.r9.s64 + -88;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F12350"))) PPC_WEAK_FUNC(sub_82F12350);
PPC_FUNC_IMPL(__imp__sub_82F12350) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,26124
	ctx.r11.s64 = ctx.r11.s64 + 26124;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f12378
	if (!ctx.cr6.eq) goto loc_82F12378;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F12378:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f12384
	if (ctx.cr6.eq) goto loc_82F12384;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F12384:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,30524
	ctx.r8.s64 = ctx.r10.s64 + 30524;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,69
	ctx.r10.s64 = 69;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-72
	ctx.r3.s64 = ctx.r9.s64 + -72;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F123B8"))) PPC_WEAK_FUNC(sub_82F123B8);
PPC_FUNC_IMPL(__imp__sub_82F123B8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,26144
	ctx.r11.s64 = ctx.r11.s64 + 26144;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f123e0
	if (!ctx.cr6.eq) goto loc_82F123E0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F123E0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f123ec
	if (ctx.cr6.eq) goto loc_82F123EC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F123EC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,30540
	ctx.r8.s64 = ctx.r10.s64 + 30540;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,70
	ctx.r10.s64 = 70;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-56
	ctx.r3.s64 = ctx.r9.s64 + -56;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F12420"))) PPC_WEAK_FUNC(sub_82F12420);
PPC_FUNC_IMPL(__imp__sub_82F12420) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,26164
	ctx.r11.s64 = ctx.r11.s64 + 26164;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f12448
	if (!ctx.cr6.eq) goto loc_82F12448;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F12448:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f12454
	if (ctx.cr6.eq) goto loc_82F12454;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F12454:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,30556
	ctx.r8.s64 = ctx.r10.s64 + 30556;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,71
	ctx.r10.s64 = 71;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-40
	ctx.r3.s64 = ctx.r9.s64 + -40;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F12488"))) PPC_WEAK_FUNC(sub_82F12488);
PPC_FUNC_IMPL(__imp__sub_82F12488) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,26184
	ctx.r11.s64 = ctx.r11.s64 + 26184;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f124b0
	if (!ctx.cr6.eq) goto loc_82F124B0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F124B0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f124bc
	if (ctx.cr6.eq) goto loc_82F124BC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F124BC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,30572
	ctx.r8.s64 = ctx.r10.s64 + 30572;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,72
	ctx.r10.s64 = 72;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-24
	ctx.r3.s64 = ctx.r9.s64 + -24;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F124F0"))) PPC_WEAK_FUNC(sub_82F124F0);
PPC_FUNC_IMPL(__imp__sub_82F124F0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,26204
	ctx.r11.s64 = ctx.r11.s64 + 26204;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f12518
	if (!ctx.cr6.eq) goto loc_82F12518;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F12518:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f12524
	if (ctx.cr6.eq) goto loc_82F12524;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F12524:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,30588
	ctx.r8.s64 = ctx.r10.s64 + 30588;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,73
	ctx.r10.s64 = 73;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-8
	ctx.r3.s64 = ctx.r9.s64 + -8;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F12558"))) PPC_WEAK_FUNC(sub_82F12558);
PPC_FUNC_IMPL(__imp__sub_82F12558) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,26224
	ctx.r11.s64 = ctx.r11.s64 + 26224;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f12580
	if (!ctx.cr6.eq) goto loc_82F12580;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F12580:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f1258c
	if (ctx.cr6.eq) goto loc_82F1258C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F1258C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,30604
	ctx.r8.s64 = ctx.r10.s64 + 30604;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,74
	ctx.r10.s64 = 74;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,8
	ctx.r3.s64 = ctx.r9.s64 + 8;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F125C0"))) PPC_WEAK_FUNC(sub_82F125C0);
PPC_FUNC_IMPL(__imp__sub_82F125C0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,26244
	ctx.r11.s64 = ctx.r11.s64 + 26244;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f125e8
	if (!ctx.cr6.eq) goto loc_82F125E8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F125E8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f125f4
	if (ctx.cr6.eq) goto loc_82F125F4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F125F4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,30620
	ctx.r8.s64 = ctx.r10.s64 + 30620;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,75
	ctx.r10.s64 = 75;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,24
	ctx.r3.s64 = ctx.r9.s64 + 24;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F12628"))) PPC_WEAK_FUNC(sub_82F12628);
PPC_FUNC_IMPL(__imp__sub_82F12628) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,26264
	ctx.r11.s64 = ctx.r11.s64 + 26264;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f12650
	if (!ctx.cr6.eq) goto loc_82F12650;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F12650:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f1265c
	if (ctx.cr6.eq) goto loc_82F1265C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F1265C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,30636
	ctx.r8.s64 = ctx.r10.s64 + 30636;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,76
	ctx.r10.s64 = 76;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,40
	ctx.r3.s64 = ctx.r9.s64 + 40;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F12690"))) PPC_WEAK_FUNC(sub_82F12690);
PPC_FUNC_IMPL(__imp__sub_82F12690) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,26284
	ctx.r11.s64 = ctx.r11.s64 + 26284;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f126b8
	if (!ctx.cr6.eq) goto loc_82F126B8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F126B8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f126c4
	if (ctx.cr6.eq) goto loc_82F126C4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F126C4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,30652
	ctx.r8.s64 = ctx.r10.s64 + 30652;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,77
	ctx.r10.s64 = 77;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,56
	ctx.r3.s64 = ctx.r9.s64 + 56;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F126F8"))) PPC_WEAK_FUNC(sub_82F126F8);
PPC_FUNC_IMPL(__imp__sub_82F126F8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,26304
	ctx.r11.s64 = ctx.r11.s64 + 26304;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f12720
	if (!ctx.cr6.eq) goto loc_82F12720;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F12720:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f1272c
	if (ctx.cr6.eq) goto loc_82F1272C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F1272C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,30668
	ctx.r8.s64 = ctx.r10.s64 + 30668;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,78
	ctx.r10.s64 = 78;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,72
	ctx.r3.s64 = ctx.r9.s64 + 72;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F12760"))) PPC_WEAK_FUNC(sub_82F12760);
PPC_FUNC_IMPL(__imp__sub_82F12760) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,26324
	ctx.r11.s64 = ctx.r11.s64 + 26324;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f12788
	if (!ctx.cr6.eq) goto loc_82F12788;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F12788:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f12794
	if (ctx.cr6.eq) goto loc_82F12794;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F12794:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,30684
	ctx.r8.s64 = ctx.r10.s64 + 30684;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,79
	ctx.r10.s64 = 79;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,88
	ctx.r3.s64 = ctx.r9.s64 + 88;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F127C8"))) PPC_WEAK_FUNC(sub_82F127C8);
PPC_FUNC_IMPL(__imp__sub_82F127C8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,26344
	ctx.r11.s64 = ctx.r11.s64 + 26344;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f127f0
	if (!ctx.cr6.eq) goto loc_82F127F0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F127F0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f127fc
	if (ctx.cr6.eq) goto loc_82F127FC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F127FC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,30700
	ctx.r8.s64 = ctx.r10.s64 + 30700;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,80
	ctx.r10.s64 = 80;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,104
	ctx.r3.s64 = ctx.r9.s64 + 104;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F12830"))) PPC_WEAK_FUNC(sub_82F12830);
PPC_FUNC_IMPL(__imp__sub_82F12830) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,26364
	ctx.r11.s64 = ctx.r11.s64 + 26364;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f12858
	if (!ctx.cr6.eq) goto loc_82F12858;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F12858:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f12864
	if (ctx.cr6.eq) goto loc_82F12864;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F12864:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,30716
	ctx.r8.s64 = ctx.r10.s64 + 30716;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,81
	ctx.r10.s64 = 81;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,120
	ctx.r3.s64 = ctx.r9.s64 + 120;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F12898"))) PPC_WEAK_FUNC(sub_82F12898);
PPC_FUNC_IMPL(__imp__sub_82F12898) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,26384
	ctx.r11.s64 = ctx.r11.s64 + 26384;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f128c0
	if (!ctx.cr6.eq) goto loc_82F128C0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F128C0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f128cc
	if (ctx.cr6.eq) goto loc_82F128CC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F128CC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,30732
	ctx.r8.s64 = ctx.r10.s64 + 30732;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,82
	ctx.r10.s64 = 82;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,136
	ctx.r3.s64 = ctx.r9.s64 + 136;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F12900"))) PPC_WEAK_FUNC(sub_82F12900);
PPC_FUNC_IMPL(__imp__sub_82F12900) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,26404
	ctx.r11.s64 = ctx.r11.s64 + 26404;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f12928
	if (!ctx.cr6.eq) goto loc_82F12928;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F12928:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f12934
	if (ctx.cr6.eq) goto loc_82F12934;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F12934:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,30748
	ctx.r8.s64 = ctx.r10.s64 + 30748;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,83
	ctx.r10.s64 = 83;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,152
	ctx.r3.s64 = ctx.r9.s64 + 152;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F12968"))) PPC_WEAK_FUNC(sub_82F12968);
PPC_FUNC_IMPL(__imp__sub_82F12968) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,26424
	ctx.r11.s64 = ctx.r11.s64 + 26424;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f12990
	if (!ctx.cr6.eq) goto loc_82F12990;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F12990:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f1299c
	if (ctx.cr6.eq) goto loc_82F1299C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F1299C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,30764
	ctx.r8.s64 = ctx.r10.s64 + 30764;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,84
	ctx.r10.s64 = 84;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,168
	ctx.r3.s64 = ctx.r9.s64 + 168;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F129D0"))) PPC_WEAK_FUNC(sub_82F129D0);
PPC_FUNC_IMPL(__imp__sub_82F129D0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,26444
	ctx.r11.s64 = ctx.r11.s64 + 26444;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f129f8
	if (!ctx.cr6.eq) goto loc_82F129F8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F129F8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f12a04
	if (ctx.cr6.eq) goto loc_82F12A04;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F12A04:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,30780
	ctx.r8.s64 = ctx.r10.s64 + 30780;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,85
	ctx.r10.s64 = 85;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,184
	ctx.r3.s64 = ctx.r9.s64 + 184;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F12A38"))) PPC_WEAK_FUNC(sub_82F12A38);
PPC_FUNC_IMPL(__imp__sub_82F12A38) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,26464
	ctx.r11.s64 = ctx.r11.s64 + 26464;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f12a60
	if (!ctx.cr6.eq) goto loc_82F12A60;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F12A60:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f12a6c
	if (ctx.cr6.eq) goto loc_82F12A6C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F12A6C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,30796
	ctx.r8.s64 = ctx.r10.s64 + 30796;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,86
	ctx.r10.s64 = 86;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,200
	ctx.r3.s64 = ctx.r9.s64 + 200;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F12AA0"))) PPC_WEAK_FUNC(sub_82F12AA0);
PPC_FUNC_IMPL(__imp__sub_82F12AA0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,26484
	ctx.r11.s64 = ctx.r11.s64 + 26484;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f12ac8
	if (!ctx.cr6.eq) goto loc_82F12AC8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F12AC8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f12ad4
	if (ctx.cr6.eq) goto loc_82F12AD4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F12AD4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,30812
	ctx.r8.s64 = ctx.r10.s64 + 30812;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,87
	ctx.r10.s64 = 87;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,216
	ctx.r3.s64 = ctx.r9.s64 + 216;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F12B08"))) PPC_WEAK_FUNC(sub_82F12B08);
PPC_FUNC_IMPL(__imp__sub_82F12B08) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,26504
	ctx.r11.s64 = ctx.r11.s64 + 26504;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f12b30
	if (!ctx.cr6.eq) goto loc_82F12B30;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F12B30:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f12b3c
	if (ctx.cr6.eq) goto loc_82F12B3C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F12B3C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,30828
	ctx.r8.s64 = ctx.r10.s64 + 30828;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,88
	ctx.r10.s64 = 88;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,232
	ctx.r3.s64 = ctx.r9.s64 + 232;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F12B70"))) PPC_WEAK_FUNC(sub_82F12B70);
PPC_FUNC_IMPL(__imp__sub_82F12B70) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,26524
	ctx.r11.s64 = ctx.r11.s64 + 26524;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f12b98
	if (!ctx.cr6.eq) goto loc_82F12B98;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F12B98:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f12ba4
	if (ctx.cr6.eq) goto loc_82F12BA4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F12BA4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,30844
	ctx.r8.s64 = ctx.r10.s64 + 30844;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,89
	ctx.r10.s64 = 89;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,248
	ctx.r3.s64 = ctx.r9.s64 + 248;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F12BD8"))) PPC_WEAK_FUNC(sub_82F12BD8);
PPC_FUNC_IMPL(__imp__sub_82F12BD8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,26544
	ctx.r11.s64 = ctx.r11.s64 + 26544;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f12c00
	if (!ctx.cr6.eq) goto loc_82F12C00;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F12C00:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f12c0c
	if (ctx.cr6.eq) goto loc_82F12C0C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F12C0C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,30860
	ctx.r8.s64 = ctx.r10.s64 + 30860;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,90
	ctx.r10.s64 = 90;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,264
	ctx.r3.s64 = ctx.r9.s64 + 264;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F12C40"))) PPC_WEAK_FUNC(sub_82F12C40);
PPC_FUNC_IMPL(__imp__sub_82F12C40) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,26564
	ctx.r11.s64 = ctx.r11.s64 + 26564;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f12c68
	if (!ctx.cr6.eq) goto loc_82F12C68;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F12C68:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f12c74
	if (ctx.cr6.eq) goto loc_82F12C74;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F12C74:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,30876
	ctx.r8.s64 = ctx.r10.s64 + 30876;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,91
	ctx.r10.s64 = 91;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,280
	ctx.r3.s64 = ctx.r9.s64 + 280;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F12CA8"))) PPC_WEAK_FUNC(sub_82F12CA8);
PPC_FUNC_IMPL(__imp__sub_82F12CA8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,26584
	ctx.r11.s64 = ctx.r11.s64 + 26584;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f12cd0
	if (!ctx.cr6.eq) goto loc_82F12CD0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F12CD0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f12cdc
	if (ctx.cr6.eq) goto loc_82F12CDC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F12CDC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,30892
	ctx.r8.s64 = ctx.r10.s64 + 30892;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,92
	ctx.r10.s64 = 92;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,296
	ctx.r3.s64 = ctx.r9.s64 + 296;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F12D10"))) PPC_WEAK_FUNC(sub_82F12D10);
PPC_FUNC_IMPL(__imp__sub_82F12D10) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,26604
	ctx.r11.s64 = ctx.r11.s64 + 26604;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f12d38
	if (!ctx.cr6.eq) goto loc_82F12D38;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F12D38:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f12d44
	if (ctx.cr6.eq) goto loc_82F12D44;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F12D44:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,30908
	ctx.r8.s64 = ctx.r10.s64 + 30908;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,93
	ctx.r10.s64 = 93;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,312
	ctx.r3.s64 = ctx.r9.s64 + 312;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F12D78"))) PPC_WEAK_FUNC(sub_82F12D78);
PPC_FUNC_IMPL(__imp__sub_82F12D78) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,26624
	ctx.r11.s64 = ctx.r11.s64 + 26624;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f12da0
	if (!ctx.cr6.eq) goto loc_82F12DA0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F12DA0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f12dac
	if (ctx.cr6.eq) goto loc_82F12DAC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F12DAC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,30924
	ctx.r8.s64 = ctx.r10.s64 + 30924;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,94
	ctx.r10.s64 = 94;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,328
	ctx.r3.s64 = ctx.r9.s64 + 328;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F12DE0"))) PPC_WEAK_FUNC(sub_82F12DE0);
PPC_FUNC_IMPL(__imp__sub_82F12DE0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,26644
	ctx.r11.s64 = ctx.r11.s64 + 26644;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f12e08
	if (!ctx.cr6.eq) goto loc_82F12E08;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F12E08:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f12e14
	if (ctx.cr6.eq) goto loc_82F12E14;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F12E14:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,30940
	ctx.r8.s64 = ctx.r10.s64 + 30940;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,95
	ctx.r10.s64 = 95;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,344
	ctx.r3.s64 = ctx.r9.s64 + 344;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F12E48"))) PPC_WEAK_FUNC(sub_82F12E48);
PPC_FUNC_IMPL(__imp__sub_82F12E48) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,26664
	ctx.r11.s64 = ctx.r11.s64 + 26664;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f12e70
	if (!ctx.cr6.eq) goto loc_82F12E70;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F12E70:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f12e7c
	if (ctx.cr6.eq) goto loc_82F12E7C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F12E7C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,30972
	ctx.r8.s64 = ctx.r10.s64 + 30972;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,96
	ctx.r10.s64 = 96;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,360
	ctx.r3.s64 = ctx.r9.s64 + 360;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F12EB0"))) PPC_WEAK_FUNC(sub_82F12EB0);
PPC_FUNC_IMPL(__imp__sub_82F12EB0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,26684
	ctx.r11.s64 = ctx.r11.s64 + 26684;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f12ed8
	if (!ctx.cr6.eq) goto loc_82F12ED8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F12ED8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f12ee4
	if (ctx.cr6.eq) goto loc_82F12EE4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F12EE4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,30996
	ctx.r8.s64 = ctx.r10.s64 + 30996;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,97
	ctx.r10.s64 = 97;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,376
	ctx.r3.s64 = ctx.r9.s64 + 376;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F12F18"))) PPC_WEAK_FUNC(sub_82F12F18);
PPC_FUNC_IMPL(__imp__sub_82F12F18) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,26704
	ctx.r11.s64 = ctx.r11.s64 + 26704;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f12f40
	if (!ctx.cr6.eq) goto loc_82F12F40;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F12F40:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f12f4c
	if (ctx.cr6.eq) goto loc_82F12F4C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F12F4C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,31024
	ctx.r8.s64 = ctx.r10.s64 + 31024;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,98
	ctx.r10.s64 = 98;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,392
	ctx.r3.s64 = ctx.r9.s64 + 392;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F12F80"))) PPC_WEAK_FUNC(sub_82F12F80);
PPC_FUNC_IMPL(__imp__sub_82F12F80) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,26724
	ctx.r11.s64 = ctx.r11.s64 + 26724;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f12fa8
	if (!ctx.cr6.eq) goto loc_82F12FA8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F12FA8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f12fb4
	if (ctx.cr6.eq) goto loc_82F12FB4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F12FB4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,31056
	ctx.r8.s64 = ctx.r10.s64 + 31056;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,99
	ctx.r10.s64 = 99;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,408
	ctx.r3.s64 = ctx.r9.s64 + 408;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F12FE8"))) PPC_WEAK_FUNC(sub_82F12FE8);
PPC_FUNC_IMPL(__imp__sub_82F12FE8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,26744
	ctx.r11.s64 = ctx.r11.s64 + 26744;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f13010
	if (!ctx.cr6.eq) goto loc_82F13010;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F13010:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f1301c
	if (ctx.cr6.eq) goto loc_82F1301C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F1301C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,31084
	ctx.r8.s64 = ctx.r10.s64 + 31084;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,100
	ctx.r10.s64 = 100;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,424
	ctx.r3.s64 = ctx.r9.s64 + 424;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F13050"))) PPC_WEAK_FUNC(sub_82F13050);
PPC_FUNC_IMPL(__imp__sub_82F13050) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,26764
	ctx.r11.s64 = ctx.r11.s64 + 26764;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f13078
	if (!ctx.cr6.eq) goto loc_82F13078;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F13078:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f13084
	if (ctx.cr6.eq) goto loc_82F13084;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F13084:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,31104
	ctx.r8.s64 = ctx.r10.s64 + 31104;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,101
	ctx.r10.s64 = 101;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,440
	ctx.r3.s64 = ctx.r9.s64 + 440;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F130B8"))) PPC_WEAK_FUNC(sub_82F130B8);
PPC_FUNC_IMPL(__imp__sub_82F130B8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,26784
	ctx.r11.s64 = ctx.r11.s64 + 26784;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f130e0
	if (!ctx.cr6.eq) goto loc_82F130E0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F130E0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f130ec
	if (ctx.cr6.eq) goto loc_82F130EC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F130EC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,31124
	ctx.r8.s64 = ctx.r10.s64 + 31124;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,102
	ctx.r10.s64 = 102;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,456
	ctx.r3.s64 = ctx.r9.s64 + 456;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F13120"))) PPC_WEAK_FUNC(sub_82F13120);
PPC_FUNC_IMPL(__imp__sub_82F13120) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,26804
	ctx.r11.s64 = ctx.r11.s64 + 26804;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f13148
	if (!ctx.cr6.eq) goto loc_82F13148;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F13148:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f13154
	if (ctx.cr6.eq) goto loc_82F13154;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F13154:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,31144
	ctx.r8.s64 = ctx.r10.s64 + 31144;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,103
	ctx.r10.s64 = 103;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,472
	ctx.r3.s64 = ctx.r9.s64 + 472;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F13188"))) PPC_WEAK_FUNC(sub_82F13188);
PPC_FUNC_IMPL(__imp__sub_82F13188) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,26824
	ctx.r11.s64 = ctx.r11.s64 + 26824;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f131b0
	if (!ctx.cr6.eq) goto loc_82F131B0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F131B0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f131bc
	if (ctx.cr6.eq) goto loc_82F131BC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F131BC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,31164
	ctx.r8.s64 = ctx.r10.s64 + 31164;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,104
	ctx.r10.s64 = 104;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,488
	ctx.r3.s64 = ctx.r9.s64 + 488;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F131F0"))) PPC_WEAK_FUNC(sub_82F131F0);
PPC_FUNC_IMPL(__imp__sub_82F131F0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,26844
	ctx.r11.s64 = ctx.r11.s64 + 26844;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f13218
	if (!ctx.cr6.eq) goto loc_82F13218;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F13218:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f13224
	if (ctx.cr6.eq) goto loc_82F13224;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F13224:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,31184
	ctx.r8.s64 = ctx.r10.s64 + 31184;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,105
	ctx.r10.s64 = 105;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,504
	ctx.r3.s64 = ctx.r9.s64 + 504;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F13258"))) PPC_WEAK_FUNC(sub_82F13258);
PPC_FUNC_IMPL(__imp__sub_82F13258) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,26864
	ctx.r11.s64 = ctx.r11.s64 + 26864;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f13280
	if (!ctx.cr6.eq) goto loc_82F13280;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F13280:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f1328c
	if (ctx.cr6.eq) goto loc_82F1328C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F1328C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,31204
	ctx.r8.s64 = ctx.r10.s64 + 31204;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,106
	ctx.r10.s64 = 106;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,520
	ctx.r3.s64 = ctx.r9.s64 + 520;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F132C0"))) PPC_WEAK_FUNC(sub_82F132C0);
PPC_FUNC_IMPL(__imp__sub_82F132C0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,26884
	ctx.r11.s64 = ctx.r11.s64 + 26884;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f132e8
	if (!ctx.cr6.eq) goto loc_82F132E8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F132E8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f132f4
	if (ctx.cr6.eq) goto loc_82F132F4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F132F4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,31224
	ctx.r8.s64 = ctx.r10.s64 + 31224;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,107
	ctx.r10.s64 = 107;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,536
	ctx.r3.s64 = ctx.r9.s64 + 536;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F13328"))) PPC_WEAK_FUNC(sub_82F13328);
PPC_FUNC_IMPL(__imp__sub_82F13328) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,26904
	ctx.r11.s64 = ctx.r11.s64 + 26904;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f13350
	if (!ctx.cr6.eq) goto loc_82F13350;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F13350:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f1335c
	if (ctx.cr6.eq) goto loc_82F1335C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F1335C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,31244
	ctx.r8.s64 = ctx.r10.s64 + 31244;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,108
	ctx.r10.s64 = 108;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,552
	ctx.r3.s64 = ctx.r9.s64 + 552;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F13390"))) PPC_WEAK_FUNC(sub_82F13390);
PPC_FUNC_IMPL(__imp__sub_82F13390) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,26924
	ctx.r11.s64 = ctx.r11.s64 + 26924;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f133b8
	if (!ctx.cr6.eq) goto loc_82F133B8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F133B8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f133c4
	if (ctx.cr6.eq) goto loc_82F133C4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F133C4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,31264
	ctx.r8.s64 = ctx.r10.s64 + 31264;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,109
	ctx.r10.s64 = 109;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,568
	ctx.r3.s64 = ctx.r9.s64 + 568;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F133F8"))) PPC_WEAK_FUNC(sub_82F133F8);
PPC_FUNC_IMPL(__imp__sub_82F133F8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,26944
	ctx.r11.s64 = ctx.r11.s64 + 26944;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f13420
	if (!ctx.cr6.eq) goto loc_82F13420;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F13420:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f1342c
	if (ctx.cr6.eq) goto loc_82F1342C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F1342C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,31284
	ctx.r8.s64 = ctx.r10.s64 + 31284;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,110
	ctx.r10.s64 = 110;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,584
	ctx.r3.s64 = ctx.r9.s64 + 584;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F13460"))) PPC_WEAK_FUNC(sub_82F13460);
PPC_FUNC_IMPL(__imp__sub_82F13460) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,26964
	ctx.r11.s64 = ctx.r11.s64 + 26964;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f13488
	if (!ctx.cr6.eq) goto loc_82F13488;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F13488:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f13494
	if (ctx.cr6.eq) goto loc_82F13494;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F13494:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,31304
	ctx.r8.s64 = ctx.r10.s64 + 31304;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,111
	ctx.r10.s64 = 111;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,600
	ctx.r3.s64 = ctx.r9.s64 + 600;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F134C8"))) PPC_WEAK_FUNC(sub_82F134C8);
PPC_FUNC_IMPL(__imp__sub_82F134C8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,26984
	ctx.r11.s64 = ctx.r11.s64 + 26984;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f134f0
	if (!ctx.cr6.eq) goto loc_82F134F0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F134F0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f134fc
	if (ctx.cr6.eq) goto loc_82F134FC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F134FC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,31324
	ctx.r8.s64 = ctx.r10.s64 + 31324;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,112
	ctx.r10.s64 = 112;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,616
	ctx.r3.s64 = ctx.r9.s64 + 616;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F13530"))) PPC_WEAK_FUNC(sub_82F13530);
PPC_FUNC_IMPL(__imp__sub_82F13530) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,27004
	ctx.r11.s64 = ctx.r11.s64 + 27004;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f13558
	if (!ctx.cr6.eq) goto loc_82F13558;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F13558:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f13564
	if (ctx.cr6.eq) goto loc_82F13564;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F13564:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,31344
	ctx.r8.s64 = ctx.r10.s64 + 31344;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,113
	ctx.r10.s64 = 113;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,632
	ctx.r3.s64 = ctx.r9.s64 + 632;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F13598"))) PPC_WEAK_FUNC(sub_82F13598);
PPC_FUNC_IMPL(__imp__sub_82F13598) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,27024
	ctx.r11.s64 = ctx.r11.s64 + 27024;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f135c0
	if (!ctx.cr6.eq) goto loc_82F135C0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F135C0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f135cc
	if (ctx.cr6.eq) goto loc_82F135CC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F135CC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,31364
	ctx.r8.s64 = ctx.r10.s64 + 31364;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,114
	ctx.r10.s64 = 114;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,648
	ctx.r3.s64 = ctx.r9.s64 + 648;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F13600"))) PPC_WEAK_FUNC(sub_82F13600);
PPC_FUNC_IMPL(__imp__sub_82F13600) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,27044
	ctx.r11.s64 = ctx.r11.s64 + 27044;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f13628
	if (!ctx.cr6.eq) goto loc_82F13628;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F13628:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f13634
	if (ctx.cr6.eq) goto loc_82F13634;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F13634:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,31384
	ctx.r8.s64 = ctx.r10.s64 + 31384;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,115
	ctx.r10.s64 = 115;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,664
	ctx.r3.s64 = ctx.r9.s64 + 664;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F13668"))) PPC_WEAK_FUNC(sub_82F13668);
PPC_FUNC_IMPL(__imp__sub_82F13668) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,27064
	ctx.r11.s64 = ctx.r11.s64 + 27064;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f13690
	if (!ctx.cr6.eq) goto loc_82F13690;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F13690:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f1369c
	if (ctx.cr6.eq) goto loc_82F1369C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F1369C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,31404
	ctx.r8.s64 = ctx.r10.s64 + 31404;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,116
	ctx.r10.s64 = 116;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,680
	ctx.r3.s64 = ctx.r9.s64 + 680;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F136D0"))) PPC_WEAK_FUNC(sub_82F136D0);
PPC_FUNC_IMPL(__imp__sub_82F136D0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,27084
	ctx.r11.s64 = ctx.r11.s64 + 27084;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f136f8
	if (!ctx.cr6.eq) goto loc_82F136F8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F136F8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f13704
	if (ctx.cr6.eq) goto loc_82F13704;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F13704:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,31424
	ctx.r8.s64 = ctx.r10.s64 + 31424;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,117
	ctx.r10.s64 = 117;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,696
	ctx.r3.s64 = ctx.r9.s64 + 696;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F13738"))) PPC_WEAK_FUNC(sub_82F13738);
PPC_FUNC_IMPL(__imp__sub_82F13738) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,27104
	ctx.r11.s64 = ctx.r11.s64 + 27104;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f13760
	if (!ctx.cr6.eq) goto loc_82F13760;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F13760:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f1376c
	if (ctx.cr6.eq) goto loc_82F1376C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F1376C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,31456
	ctx.r8.s64 = ctx.r10.s64 + 31456;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,118
	ctx.r10.s64 = 118;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,712
	ctx.r3.s64 = ctx.r9.s64 + 712;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F137A0"))) PPC_WEAK_FUNC(sub_82F137A0);
PPC_FUNC_IMPL(__imp__sub_82F137A0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,27124
	ctx.r11.s64 = ctx.r11.s64 + 27124;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f137c8
	if (!ctx.cr6.eq) goto loc_82F137C8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F137C8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f137d4
	if (ctx.cr6.eq) goto loc_82F137D4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F137D4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,31484
	ctx.r8.s64 = ctx.r10.s64 + 31484;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,119
	ctx.r10.s64 = 119;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,728
	ctx.r3.s64 = ctx.r9.s64 + 728;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F13808"))) PPC_WEAK_FUNC(sub_82F13808);
PPC_FUNC_IMPL(__imp__sub_82F13808) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,27144
	ctx.r11.s64 = ctx.r11.s64 + 27144;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f13830
	if (!ctx.cr6.eq) goto loc_82F13830;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F13830:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f1383c
	if (ctx.cr6.eq) goto loc_82F1383C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F1383C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,31512
	ctx.r8.s64 = ctx.r10.s64 + 31512;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,120
	ctx.r10.s64 = 120;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,744
	ctx.r3.s64 = ctx.r9.s64 + 744;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F13870"))) PPC_WEAK_FUNC(sub_82F13870);
PPC_FUNC_IMPL(__imp__sub_82F13870) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,27164
	ctx.r11.s64 = ctx.r11.s64 + 27164;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f13898
	if (!ctx.cr6.eq) goto loc_82F13898;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F13898:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f138a4
	if (ctx.cr6.eq) goto loc_82F138A4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F138A4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,31540
	ctx.r8.s64 = ctx.r10.s64 + 31540;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,121
	ctx.r10.s64 = 121;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,760
	ctx.r3.s64 = ctx.r9.s64 + 760;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F138D8"))) PPC_WEAK_FUNC(sub_82F138D8);
PPC_FUNC_IMPL(__imp__sub_82F138D8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,27184
	ctx.r11.s64 = ctx.r11.s64 + 27184;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f13900
	if (!ctx.cr6.eq) goto loc_82F13900;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F13900:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f1390c
	if (ctx.cr6.eq) goto loc_82F1390C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F1390C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,31564
	ctx.r8.s64 = ctx.r10.s64 + 31564;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,122
	ctx.r10.s64 = 122;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,776
	ctx.r3.s64 = ctx.r9.s64 + 776;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F13940"))) PPC_WEAK_FUNC(sub_82F13940);
PPC_FUNC_IMPL(__imp__sub_82F13940) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,27204
	ctx.r11.s64 = ctx.r11.s64 + 27204;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f13968
	if (!ctx.cr6.eq) goto loc_82F13968;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F13968:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f13974
	if (ctx.cr6.eq) goto loc_82F13974;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F13974:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,31588
	ctx.r8.s64 = ctx.r10.s64 + 31588;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,123
	ctx.r10.s64 = 123;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,792
	ctx.r3.s64 = ctx.r9.s64 + 792;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F139A8"))) PPC_WEAK_FUNC(sub_82F139A8);
PPC_FUNC_IMPL(__imp__sub_82F139A8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,27224
	ctx.r11.s64 = ctx.r11.s64 + 27224;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f139d0
	if (!ctx.cr6.eq) goto loc_82F139D0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F139D0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f139dc
	if (ctx.cr6.eq) goto loc_82F139DC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F139DC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,31612
	ctx.r8.s64 = ctx.r10.s64 + 31612;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,124
	ctx.r10.s64 = 124;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,808
	ctx.r3.s64 = ctx.r9.s64 + 808;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F13A10"))) PPC_WEAK_FUNC(sub_82F13A10);
PPC_FUNC_IMPL(__imp__sub_82F13A10) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,27244
	ctx.r11.s64 = ctx.r11.s64 + 27244;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f13a38
	if (!ctx.cr6.eq) goto loc_82F13A38;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F13A38:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f13a44
	if (ctx.cr6.eq) goto loc_82F13A44;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F13A44:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,31652
	ctx.r8.s64 = ctx.r10.s64 + 31652;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,125
	ctx.r10.s64 = 125;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,824
	ctx.r3.s64 = ctx.r9.s64 + 824;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F13A78"))) PPC_WEAK_FUNC(sub_82F13A78);
PPC_FUNC_IMPL(__imp__sub_82F13A78) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,27264
	ctx.r11.s64 = ctx.r11.s64 + 27264;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f13aa0
	if (!ctx.cr6.eq) goto loc_82F13AA0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F13AA0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f13aac
	if (ctx.cr6.eq) goto loc_82F13AAC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F13AAC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,31688
	ctx.r8.s64 = ctx.r10.s64 + 31688;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,126
	ctx.r10.s64 = 126;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,840
	ctx.r3.s64 = ctx.r9.s64 + 840;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F13AE0"))) PPC_WEAK_FUNC(sub_82F13AE0);
PPC_FUNC_IMPL(__imp__sub_82F13AE0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,27284
	ctx.r11.s64 = ctx.r11.s64 + 27284;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f13b08
	if (!ctx.cr6.eq) goto loc_82F13B08;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F13B08:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f13b14
	if (ctx.cr6.eq) goto loc_82F13B14;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F13B14:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,31708
	ctx.r8.s64 = ctx.r10.s64 + 31708;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,127
	ctx.r10.s64 = 127;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,856
	ctx.r3.s64 = ctx.r9.s64 + 856;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F13B48"))) PPC_WEAK_FUNC(sub_82F13B48);
PPC_FUNC_IMPL(__imp__sub_82F13B48) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,27304
	ctx.r11.s64 = ctx.r11.s64 + 27304;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f13b70
	if (!ctx.cr6.eq) goto loc_82F13B70;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F13B70:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f13b7c
	if (ctx.cr6.eq) goto loc_82F13B7C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F13B7C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,31760
	ctx.r8.s64 = ctx.r10.s64 + 31760;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,128
	ctx.r10.s64 = 128;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,872
	ctx.r3.s64 = ctx.r9.s64 + 872;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F13BB0"))) PPC_WEAK_FUNC(sub_82F13BB0);
PPC_FUNC_IMPL(__imp__sub_82F13BB0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,27324
	ctx.r11.s64 = ctx.r11.s64 + 27324;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f13bd8
	if (!ctx.cr6.eq) goto loc_82F13BD8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F13BD8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f13be4
	if (ctx.cr6.eq) goto loc_82F13BE4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F13BE4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,31792
	ctx.r8.s64 = ctx.r10.s64 + 31792;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,129
	ctx.r10.s64 = 129;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,888
	ctx.r3.s64 = ctx.r9.s64 + 888;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F13C18"))) PPC_WEAK_FUNC(sub_82F13C18);
PPC_FUNC_IMPL(__imp__sub_82F13C18) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,27344
	ctx.r11.s64 = ctx.r11.s64 + 27344;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f13c40
	if (!ctx.cr6.eq) goto loc_82F13C40;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F13C40:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f13c4c
	if (ctx.cr6.eq) goto loc_82F13C4C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F13C4C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,31824
	ctx.r8.s64 = ctx.r10.s64 + 31824;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,130
	ctx.r10.s64 = 130;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,904
	ctx.r3.s64 = ctx.r9.s64 + 904;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F13C80"))) PPC_WEAK_FUNC(sub_82F13C80);
PPC_FUNC_IMPL(__imp__sub_82F13C80) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,27364
	ctx.r11.s64 = ctx.r11.s64 + 27364;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f13ca8
	if (!ctx.cr6.eq) goto loc_82F13CA8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F13CA8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f13cb4
	if (ctx.cr6.eq) goto loc_82F13CB4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F13CB4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,31856
	ctx.r8.s64 = ctx.r10.s64 + 31856;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,131
	ctx.r10.s64 = 131;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,920
	ctx.r3.s64 = ctx.r9.s64 + 920;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F13CE8"))) PPC_WEAK_FUNC(sub_82F13CE8);
PPC_FUNC_IMPL(__imp__sub_82F13CE8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,27384
	ctx.r11.s64 = ctx.r11.s64 + 27384;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f13d10
	if (!ctx.cr6.eq) goto loc_82F13D10;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F13D10:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f13d1c
	if (ctx.cr6.eq) goto loc_82F13D1C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F13D1C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,31872
	ctx.r8.s64 = ctx.r10.s64 + 31872;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,132
	ctx.r10.s64 = 132;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,936
	ctx.r3.s64 = ctx.r9.s64 + 936;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F13D50"))) PPC_WEAK_FUNC(sub_82F13D50);
PPC_FUNC_IMPL(__imp__sub_82F13D50) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,27404
	ctx.r11.s64 = ctx.r11.s64 + 27404;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f13d78
	if (!ctx.cr6.eq) goto loc_82F13D78;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F13D78:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f13d84
	if (ctx.cr6.eq) goto loc_82F13D84;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F13D84:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,31888
	ctx.r8.s64 = ctx.r10.s64 + 31888;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,133
	ctx.r10.s64 = 133;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,952
	ctx.r3.s64 = ctx.r9.s64 + 952;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F13DB8"))) PPC_WEAK_FUNC(sub_82F13DB8);
PPC_FUNC_IMPL(__imp__sub_82F13DB8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,27424
	ctx.r11.s64 = ctx.r11.s64 + 27424;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f13de0
	if (!ctx.cr6.eq) goto loc_82F13DE0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F13DE0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f13dec
	if (ctx.cr6.eq) goto loc_82F13DEC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F13DEC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,31904
	ctx.r8.s64 = ctx.r10.s64 + 31904;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,134
	ctx.r10.s64 = 134;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,968
	ctx.r3.s64 = ctx.r9.s64 + 968;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F13E20"))) PPC_WEAK_FUNC(sub_82F13E20);
PPC_FUNC_IMPL(__imp__sub_82F13E20) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,27444
	ctx.r11.s64 = ctx.r11.s64 + 27444;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f13e48
	if (!ctx.cr6.eq) goto loc_82F13E48;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F13E48:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f13e54
	if (ctx.cr6.eq) goto loc_82F13E54;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F13E54:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,31920
	ctx.r8.s64 = ctx.r10.s64 + 31920;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,135
	ctx.r10.s64 = 135;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,984
	ctx.r3.s64 = ctx.r9.s64 + 984;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F13E88"))) PPC_WEAK_FUNC(sub_82F13E88);
PPC_FUNC_IMPL(__imp__sub_82F13E88) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,27464
	ctx.r11.s64 = ctx.r11.s64 + 27464;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f13eb0
	if (!ctx.cr6.eq) goto loc_82F13EB0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F13EB0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f13ebc
	if (ctx.cr6.eq) goto loc_82F13EBC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F13EBC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,31936
	ctx.r8.s64 = ctx.r10.s64 + 31936;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,136
	ctx.r10.s64 = 136;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,1000
	ctx.r3.s64 = ctx.r9.s64 + 1000;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F13EF0"))) PPC_WEAK_FUNC(sub_82F13EF0);
PPC_FUNC_IMPL(__imp__sub_82F13EF0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,27484
	ctx.r11.s64 = ctx.r11.s64 + 27484;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f13f18
	if (!ctx.cr6.eq) goto loc_82F13F18;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F13F18:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f13f24
	if (ctx.cr6.eq) goto loc_82F13F24;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F13F24:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,31964
	ctx.r8.s64 = ctx.r10.s64 + 31964;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,137
	ctx.r10.s64 = 137;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,1016
	ctx.r3.s64 = ctx.r9.s64 + 1016;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F13F58"))) PPC_WEAK_FUNC(sub_82F13F58);
PPC_FUNC_IMPL(__imp__sub_82F13F58) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,27504
	ctx.r11.s64 = ctx.r11.s64 + 27504;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f13f80
	if (!ctx.cr6.eq) goto loc_82F13F80;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F13F80:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f13f8c
	if (ctx.cr6.eq) goto loc_82F13F8C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F13F8C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,31992
	ctx.r8.s64 = ctx.r10.s64 + 31992;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,138
	ctx.r10.s64 = 138;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,1032
	ctx.r3.s64 = ctx.r9.s64 + 1032;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F13FC0"))) PPC_WEAK_FUNC(sub_82F13FC0);
PPC_FUNC_IMPL(__imp__sub_82F13FC0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,27524
	ctx.r11.s64 = ctx.r11.s64 + 27524;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f13fe8
	if (!ctx.cr6.eq) goto loc_82F13FE8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F13FE8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f13ff4
	if (ctx.cr6.eq) goto loc_82F13FF4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F13FF4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,32024
	ctx.r8.s64 = ctx.r10.s64 + 32024;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,139
	ctx.r10.s64 = 139;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,1048
	ctx.r3.s64 = ctx.r9.s64 + 1048;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F14028"))) PPC_WEAK_FUNC(sub_82F14028);
PPC_FUNC_IMPL(__imp__sub_82F14028) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,27544
	ctx.r11.s64 = ctx.r11.s64 + 27544;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f14050
	if (!ctx.cr6.eq) goto loc_82F14050;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F14050:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f1405c
	if (ctx.cr6.eq) goto loc_82F1405C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F1405C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,32060
	ctx.r8.s64 = ctx.r10.s64 + 32060;
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
	// addi r3,r9,1064
	ctx.r3.s64 = ctx.r9.s64 + 1064;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F14090"))) PPC_WEAK_FUNC(sub_82F14090);
PPC_FUNC_IMPL(__imp__sub_82F14090) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,27564
	ctx.r11.s64 = ctx.r11.s64 + 27564;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f140b8
	if (!ctx.cr6.eq) goto loc_82F140B8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F140B8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f140c4
	if (ctx.cr6.eq) goto loc_82F140C4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F140C4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,32084
	ctx.r8.s64 = ctx.r10.s64 + 32084;
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
	// addi r3,r9,1080
	ctx.r3.s64 = ctx.r9.s64 + 1080;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F140F8"))) PPC_WEAK_FUNC(sub_82F140F8);
PPC_FUNC_IMPL(__imp__sub_82F140F8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,27584
	ctx.r11.s64 = ctx.r11.s64 + 27584;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f14120
	if (!ctx.cr6.eq) goto loc_82F14120;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F14120:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f1412c
	if (ctx.cr6.eq) goto loc_82F1412C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F1412C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,32108
	ctx.r8.s64 = ctx.r10.s64 + 32108;
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
	// addi r3,r9,1096
	ctx.r3.s64 = ctx.r9.s64 + 1096;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F14160"))) PPC_WEAK_FUNC(sub_82F14160);
PPC_FUNC_IMPL(__imp__sub_82F14160) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,27604
	ctx.r11.s64 = ctx.r11.s64 + 27604;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f14188
	if (!ctx.cr6.eq) goto loc_82F14188;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F14188:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f14194
	if (ctx.cr6.eq) goto loc_82F14194;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F14194:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,32140
	ctx.r8.s64 = ctx.r10.s64 + 32140;
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
	// addi r3,r9,1112
	ctx.r3.s64 = ctx.r9.s64 + 1112;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F141C8"))) PPC_WEAK_FUNC(sub_82F141C8);
PPC_FUNC_IMPL(__imp__sub_82F141C8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,27624
	ctx.r11.s64 = ctx.r11.s64 + 27624;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f141f0
	if (!ctx.cr6.eq) goto loc_82F141F0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F141F0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f141fc
	if (ctx.cr6.eq) goto loc_82F141FC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F141FC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,32164
	ctx.r8.s64 = ctx.r10.s64 + 32164;
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
	// addi r3,r9,1128
	ctx.r3.s64 = ctx.r9.s64 + 1128;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F14230"))) PPC_WEAK_FUNC(sub_82F14230);
PPC_FUNC_IMPL(__imp__sub_82F14230) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,27644
	ctx.r11.s64 = ctx.r11.s64 + 27644;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f14258
	if (!ctx.cr6.eq) goto loc_82F14258;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F14258:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f14264
	if (ctx.cr6.eq) goto loc_82F14264;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F14264:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,32192
	ctx.r8.s64 = ctx.r10.s64 + 32192;
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
	// addi r3,r9,1144
	ctx.r3.s64 = ctx.r9.s64 + 1144;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F14298"))) PPC_WEAK_FUNC(sub_82F14298);
PPC_FUNC_IMPL(__imp__sub_82F14298) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,27664
	ctx.r11.s64 = ctx.r11.s64 + 27664;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f142c0
	if (!ctx.cr6.eq) goto loc_82F142C0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F142C0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f142cc
	if (ctx.cr6.eq) goto loc_82F142CC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F142CC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,32212
	ctx.r8.s64 = ctx.r10.s64 + 32212;
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
	// addi r3,r9,1160
	ctx.r3.s64 = ctx.r9.s64 + 1160;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F14300"))) PPC_WEAK_FUNC(sub_82F14300);
PPC_FUNC_IMPL(__imp__sub_82F14300) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,27684
	ctx.r11.s64 = ctx.r11.s64 + 27684;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f14328
	if (!ctx.cr6.eq) goto loc_82F14328;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F14328:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f14334
	if (ctx.cr6.eq) goto loc_82F14334;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F14334:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,32232
	ctx.r8.s64 = ctx.r10.s64 + 32232;
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
	// addi r3,r9,1176
	ctx.r3.s64 = ctx.r9.s64 + 1176;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F14368"))) PPC_WEAK_FUNC(sub_82F14368);
PPC_FUNC_IMPL(__imp__sub_82F14368) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,27704
	ctx.r11.s64 = ctx.r11.s64 + 27704;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f14390
	if (!ctx.cr6.eq) goto loc_82F14390;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F14390:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f1439c
	if (ctx.cr6.eq) goto loc_82F1439C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F1439C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,32252
	ctx.r8.s64 = ctx.r10.s64 + 32252;
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
	// addi r3,r9,1192
	ctx.r3.s64 = ctx.r9.s64 + 1192;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F143D0"))) PPC_WEAK_FUNC(sub_82F143D0);
PPC_FUNC_IMPL(__imp__sub_82F143D0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,27724
	ctx.r11.s64 = ctx.r11.s64 + 27724;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f143f8
	if (!ctx.cr6.eq) goto loc_82F143F8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F143F8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f14404
	if (ctx.cr6.eq) goto loc_82F14404;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F14404:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,32292
	ctx.r8.s64 = ctx.r10.s64 + 32292;
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
	// addi r3,r9,1208
	ctx.r3.s64 = ctx.r9.s64 + 1208;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F14438"))) PPC_WEAK_FUNC(sub_82F14438);
PPC_FUNC_IMPL(__imp__sub_82F14438) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,27744
	ctx.r11.s64 = ctx.r11.s64 + 27744;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f14460
	if (!ctx.cr6.eq) goto loc_82F14460;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F14460:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f1446c
	if (ctx.cr6.eq) goto loc_82F1446C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F1446C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,32328
	ctx.r8.s64 = ctx.r10.s64 + 32328;
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
	// addi r3,r9,1224
	ctx.r3.s64 = ctx.r9.s64 + 1224;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F144A0"))) PPC_WEAK_FUNC(sub_82F144A0);
PPC_FUNC_IMPL(__imp__sub_82F144A0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,27764
	ctx.r11.s64 = ctx.r11.s64 + 27764;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f144c8
	if (!ctx.cr6.eq) goto loc_82F144C8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F144C8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f144d4
	if (ctx.cr6.eq) goto loc_82F144D4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F144D4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,32348
	ctx.r8.s64 = ctx.r10.s64 + 32348;
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
	// addi r3,r9,1240
	ctx.r3.s64 = ctx.r9.s64 + 1240;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F14508"))) PPC_WEAK_FUNC(sub_82F14508);
PPC_FUNC_IMPL(__imp__sub_82F14508) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,27784
	ctx.r11.s64 = ctx.r11.s64 + 27784;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f14530
	if (!ctx.cr6.eq) goto loc_82F14530;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F14530:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f1453c
	if (ctx.cr6.eq) goto loc_82F1453C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F1453C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,32380
	ctx.r8.s64 = ctx.r10.s64 + 32380;
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
	// addi r3,r9,1256
	ctx.r3.s64 = ctx.r9.s64 + 1256;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F14570"))) PPC_WEAK_FUNC(sub_82F14570);
PPC_FUNC_IMPL(__imp__sub_82F14570) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,27804
	ctx.r11.s64 = ctx.r11.s64 + 27804;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f14598
	if (!ctx.cr6.eq) goto loc_82F14598;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F14598:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f145a4
	if (ctx.cr6.eq) goto loc_82F145A4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F145A4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,32412
	ctx.r8.s64 = ctx.r10.s64 + 32412;
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
	// addi r3,r9,1272
	ctx.r3.s64 = ctx.r9.s64 + 1272;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F145D8"))) PPC_WEAK_FUNC(sub_82F145D8);
PPC_FUNC_IMPL(__imp__sub_82F145D8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,27824
	ctx.r11.s64 = ctx.r11.s64 + 27824;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f14600
	if (!ctx.cr6.eq) goto loc_82F14600;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F14600:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f1460c
	if (ctx.cr6.eq) goto loc_82F1460C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F1460C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,32444
	ctx.r8.s64 = ctx.r10.s64 + 32444;
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
	// addi r3,r9,1288
	ctx.r3.s64 = ctx.r9.s64 + 1288;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F14640"))) PPC_WEAK_FUNC(sub_82F14640);
PPC_FUNC_IMPL(__imp__sub_82F14640) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,27844
	ctx.r11.s64 = ctx.r11.s64 + 27844;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f14668
	if (!ctx.cr6.eq) goto loc_82F14668;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F14668:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f14674
	if (ctx.cr6.eq) goto loc_82F14674;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F14674:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,32480
	ctx.r8.s64 = ctx.r10.s64 + 32480;
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
	// addi r3,r9,1304
	ctx.r3.s64 = ctx.r9.s64 + 1304;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F146A8"))) PPC_WEAK_FUNC(sub_82F146A8);
PPC_FUNC_IMPL(__imp__sub_82F146A8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,27864
	ctx.r11.s64 = ctx.r11.s64 + 27864;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f146d0
	if (!ctx.cr6.eq) goto loc_82F146D0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F146D0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f146dc
	if (ctx.cr6.eq) goto loc_82F146DC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F146DC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,32512
	ctx.r8.s64 = ctx.r10.s64 + 32512;
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
	// addi r3,r9,1320
	ctx.r3.s64 = ctx.r9.s64 + 1320;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F14710"))) PPC_WEAK_FUNC(sub_82F14710);
PPC_FUNC_IMPL(__imp__sub_82F14710) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,27884
	ctx.r11.s64 = ctx.r11.s64 + 27884;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f14738
	if (!ctx.cr6.eq) goto loc_82F14738;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F14738:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f14744
	if (ctx.cr6.eq) goto loc_82F14744;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F14744:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,32544
	ctx.r8.s64 = ctx.r10.s64 + 32544;
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
	// addi r3,r9,1336
	ctx.r3.s64 = ctx.r9.s64 + 1336;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F14778"))) PPC_WEAK_FUNC(sub_82F14778);
PPC_FUNC_IMPL(__imp__sub_82F14778) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,27904
	ctx.r11.s64 = ctx.r11.s64 + 27904;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f147a0
	if (!ctx.cr6.eq) goto loc_82F147A0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F147A0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f147ac
	if (ctx.cr6.eq) goto loc_82F147AC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F147AC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,32576
	ctx.r8.s64 = ctx.r10.s64 + 32576;
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
	// addi r3,r9,1352
	ctx.r3.s64 = ctx.r9.s64 + 1352;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F147E0"))) PPC_WEAK_FUNC(sub_82F147E0);
PPC_FUNC_IMPL(__imp__sub_82F147E0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,27924
	ctx.r11.s64 = ctx.r11.s64 + 27924;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f14808
	if (!ctx.cr6.eq) goto loc_82F14808;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F14808:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f14814
	if (ctx.cr6.eq) goto loc_82F14814;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F14814:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,32608
	ctx.r8.s64 = ctx.r10.s64 + 32608;
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
	// addi r3,r9,1368
	ctx.r3.s64 = ctx.r9.s64 + 1368;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F14848"))) PPC_WEAK_FUNC(sub_82F14848);
PPC_FUNC_IMPL(__imp__sub_82F14848) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,27944
	ctx.r11.s64 = ctx.r11.s64 + 27944;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f14870
	if (!ctx.cr6.eq) goto loc_82F14870;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F14870:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f1487c
	if (ctx.cr6.eq) goto loc_82F1487C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F1487C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,32636
	ctx.r8.s64 = ctx.r10.s64 + 32636;
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
	// addi r3,r9,1384
	ctx.r3.s64 = ctx.r9.s64 + 1384;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F148B0"))) PPC_WEAK_FUNC(sub_82F148B0);
PPC_FUNC_IMPL(__imp__sub_82F148B0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,27964
	ctx.r11.s64 = ctx.r11.s64 + 27964;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f148d8
	if (!ctx.cr6.eq) goto loc_82F148D8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F148D8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f148e4
	if (ctx.cr6.eq) goto loc_82F148E4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F148E4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,32664
	ctx.r8.s64 = ctx.r10.s64 + 32664;
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
	// addi r3,r9,1400
	ctx.r3.s64 = ctx.r9.s64 + 1400;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F14918"))) PPC_WEAK_FUNC(sub_82F14918);
PPC_FUNC_IMPL(__imp__sub_82F14918) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,27984
	ctx.r11.s64 = ctx.r11.s64 + 27984;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f14940
	if (!ctx.cr6.eq) goto loc_82F14940;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F14940:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f1494c
	if (ctx.cr6.eq) goto loc_82F1494C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F1494C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,32696
	ctx.r8.s64 = ctx.r10.s64 + 32696;
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
	// addi r3,r9,1416
	ctx.r3.s64 = ctx.r9.s64 + 1416;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F14980"))) PPC_WEAK_FUNC(sub_82F14980);
PPC_FUNC_IMPL(__imp__sub_82F14980) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,28004
	ctx.r11.s64 = ctx.r11.s64 + 28004;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f149a8
	if (!ctx.cr6.eq) goto loc_82F149A8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F149A8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f149b4
	if (ctx.cr6.eq) goto loc_82F149B4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F149B4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,32724
	ctx.r8.s64 = ctx.r10.s64 + 32724;
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
	// addi r3,r9,1432
	ctx.r3.s64 = ctx.r9.s64 + 1432;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F149E8"))) PPC_WEAK_FUNC(sub_82F149E8);
PPC_FUNC_IMPL(__imp__sub_82F149E8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,28024
	ctx.r11.s64 = ctx.r11.s64 + 28024;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f14a10
	if (!ctx.cr6.eq) goto loc_82F14A10;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F14A10:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f14a1c
	if (ctx.cr6.eq) goto loc_82F14A1C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F14A1C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,32752
	ctx.r8.s64 = ctx.r10.s64 + 32752;
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
	// addi r3,r9,1448
	ctx.r3.s64 = ctx.r9.s64 + 1448;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F14A50"))) PPC_WEAK_FUNC(sub_82F14A50);
PPC_FUNC_IMPL(__imp__sub_82F14A50) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,28044
	ctx.r11.s64 = ctx.r11.s64 + 28044;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f14a78
	if (!ctx.cr6.eq) goto loc_82F14A78;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F14A78:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f14a84
	if (ctx.cr6.eq) goto loc_82F14A84;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F14A84:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,-32752
	ctx.r8.s64 = ctx.r10.s64 + -32752;
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
	// addi r3,r9,1464
	ctx.r3.s64 = ctx.r9.s64 + 1464;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F14AB8"))) PPC_WEAK_FUNC(sub_82F14AB8);
PPC_FUNC_IMPL(__imp__sub_82F14AB8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,28064
	ctx.r11.s64 = ctx.r11.s64 + 28064;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f14ae0
	if (!ctx.cr6.eq) goto loc_82F14AE0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F14AE0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f14aec
	if (ctx.cr6.eq) goto loc_82F14AEC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F14AEC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,-32716
	ctx.r8.s64 = ctx.r10.s64 + -32716;
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
	// addi r3,r9,1480
	ctx.r3.s64 = ctx.r9.s64 + 1480;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F14B20"))) PPC_WEAK_FUNC(sub_82F14B20);
PPC_FUNC_IMPL(__imp__sub_82F14B20) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,28084
	ctx.r11.s64 = ctx.r11.s64 + 28084;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f14b48
	if (!ctx.cr6.eq) goto loc_82F14B48;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F14B48:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f14b54
	if (ctx.cr6.eq) goto loc_82F14B54;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F14B54:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,-32688
	ctx.r8.s64 = ctx.r10.s64 + -32688;
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
	// addi r3,r9,1496
	ctx.r3.s64 = ctx.r9.s64 + 1496;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F14B88"))) PPC_WEAK_FUNC(sub_82F14B88);
PPC_FUNC_IMPL(__imp__sub_82F14B88) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,28104
	ctx.r11.s64 = ctx.r11.s64 + 28104;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f14bb0
	if (!ctx.cr6.eq) goto loc_82F14BB0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F14BB0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f14bbc
	if (ctx.cr6.eq) goto loc_82F14BBC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F14BBC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,-32672
	ctx.r8.s64 = ctx.r10.s64 + -32672;
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
	// addi r3,r9,1512
	ctx.r3.s64 = ctx.r9.s64 + 1512;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F14BF0"))) PPC_WEAK_FUNC(sub_82F14BF0);
PPC_FUNC_IMPL(__imp__sub_82F14BF0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,28124
	ctx.r11.s64 = ctx.r11.s64 + 28124;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f14c18
	if (!ctx.cr6.eq) goto loc_82F14C18;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F14C18:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f14c24
	if (ctx.cr6.eq) goto loc_82F14C24;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F14C24:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,-32656
	ctx.r8.s64 = ctx.r10.s64 + -32656;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,169
	ctx.r10.s64 = 169;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,1528
	ctx.r3.s64 = ctx.r9.s64 + 1528;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F14C58"))) PPC_WEAK_FUNC(sub_82F14C58);
PPC_FUNC_IMPL(__imp__sub_82F14C58) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,28144
	ctx.r11.s64 = ctx.r11.s64 + 28144;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f14c80
	if (!ctx.cr6.eq) goto loc_82F14C80;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F14C80:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f14c8c
	if (ctx.cr6.eq) goto loc_82F14C8C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F14C8C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,-32640
	ctx.r8.s64 = ctx.r10.s64 + -32640;
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
	// addi r3,r9,1544
	ctx.r3.s64 = ctx.r9.s64 + 1544;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F14CC0"))) PPC_WEAK_FUNC(sub_82F14CC0);
PPC_FUNC_IMPL(__imp__sub_82F14CC0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,28164
	ctx.r11.s64 = ctx.r11.s64 + 28164;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f14ce8
	if (!ctx.cr6.eq) goto loc_82F14CE8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F14CE8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f14cf4
	if (ctx.cr6.eq) goto loc_82F14CF4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F14CF4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,-32624
	ctx.r8.s64 = ctx.r10.s64 + -32624;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,171
	ctx.r10.s64 = 171;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,1560
	ctx.r3.s64 = ctx.r9.s64 + 1560;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F14D28"))) PPC_WEAK_FUNC(sub_82F14D28);
PPC_FUNC_IMPL(__imp__sub_82F14D28) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,28184
	ctx.r11.s64 = ctx.r11.s64 + 28184;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f14d50
	if (!ctx.cr6.eq) goto loc_82F14D50;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F14D50:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f14d5c
	if (ctx.cr6.eq) goto loc_82F14D5C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F14D5C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,-32608
	ctx.r8.s64 = ctx.r10.s64 + -32608;
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
	// addi r3,r9,1576
	ctx.r3.s64 = ctx.r9.s64 + 1576;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F14D90"))) PPC_WEAK_FUNC(sub_82F14D90);
PPC_FUNC_IMPL(__imp__sub_82F14D90) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,28204
	ctx.r11.s64 = ctx.r11.s64 + 28204;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f14db8
	if (!ctx.cr6.eq) goto loc_82F14DB8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F14DB8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f14dc4
	if (ctx.cr6.eq) goto loc_82F14DC4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F14DC4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,-32592
	ctx.r8.s64 = ctx.r10.s64 + -32592;
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
	// addi r3,r9,1592
	ctx.r3.s64 = ctx.r9.s64 + 1592;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F14DF8"))) PPC_WEAK_FUNC(sub_82F14DF8);
PPC_FUNC_IMPL(__imp__sub_82F14DF8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,28224
	ctx.r11.s64 = ctx.r11.s64 + 28224;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f14e20
	if (!ctx.cr6.eq) goto loc_82F14E20;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F14E20:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f14e2c
	if (ctx.cr6.eq) goto loc_82F14E2C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F14E2C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,-32576
	ctx.r8.s64 = ctx.r10.s64 + -32576;
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
	// addi r3,r9,1608
	ctx.r3.s64 = ctx.r9.s64 + 1608;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F14E60"))) PPC_WEAK_FUNC(sub_82F14E60);
PPC_FUNC_IMPL(__imp__sub_82F14E60) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,28244
	ctx.r11.s64 = ctx.r11.s64 + 28244;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f14e88
	if (!ctx.cr6.eq) goto loc_82F14E88;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F14E88:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f14e94
	if (ctx.cr6.eq) goto loc_82F14E94;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F14E94:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,-32560
	ctx.r8.s64 = ctx.r10.s64 + -32560;
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
	// addi r3,r9,1624
	ctx.r3.s64 = ctx.r9.s64 + 1624;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F14EC8"))) PPC_WEAK_FUNC(sub_82F14EC8);
PPC_FUNC_IMPL(__imp__sub_82F14EC8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,28264
	ctx.r11.s64 = ctx.r11.s64 + 28264;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f14ef0
	if (!ctx.cr6.eq) goto loc_82F14EF0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F14EF0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f14efc
	if (ctx.cr6.eq) goto loc_82F14EFC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F14EFC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,-32544
	ctx.r8.s64 = ctx.r10.s64 + -32544;
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
	// addi r3,r9,1640
	ctx.r3.s64 = ctx.r9.s64 + 1640;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F14F30"))) PPC_WEAK_FUNC(sub_82F14F30);
PPC_FUNC_IMPL(__imp__sub_82F14F30) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,28284
	ctx.r11.s64 = ctx.r11.s64 + 28284;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f14f58
	if (!ctx.cr6.eq) goto loc_82F14F58;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F14F58:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f14f64
	if (ctx.cr6.eq) goto loc_82F14F64;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F14F64:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,-32528
	ctx.r8.s64 = ctx.r10.s64 + -32528;
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
	// addi r3,r9,1656
	ctx.r3.s64 = ctx.r9.s64 + 1656;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F14F98"))) PPC_WEAK_FUNC(sub_82F14F98);
PPC_FUNC_IMPL(__imp__sub_82F14F98) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,28304
	ctx.r11.s64 = ctx.r11.s64 + 28304;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f14fc0
	if (!ctx.cr6.eq) goto loc_82F14FC0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F14FC0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f14fcc
	if (ctx.cr6.eq) goto loc_82F14FCC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F14FCC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,-32512
	ctx.r8.s64 = ctx.r10.s64 + -32512;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,178
	ctx.r10.s64 = 178;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,1672
	ctx.r3.s64 = ctx.r9.s64 + 1672;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F15000"))) PPC_WEAK_FUNC(sub_82F15000);
PPC_FUNC_IMPL(__imp__sub_82F15000) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,28324
	ctx.r11.s64 = ctx.r11.s64 + 28324;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f15028
	if (!ctx.cr6.eq) goto loc_82F15028;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F15028:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f15034
	if (ctx.cr6.eq) goto loc_82F15034;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F15034:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,-32488
	ctx.r8.s64 = ctx.r10.s64 + -32488;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,179
	ctx.r10.s64 = 179;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,1688
	ctx.r3.s64 = ctx.r9.s64 + 1688;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F15068"))) PPC_WEAK_FUNC(sub_82F15068);
PPC_FUNC_IMPL(__imp__sub_82F15068) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,28344
	ctx.r11.s64 = ctx.r11.s64 + 28344;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f15090
	if (!ctx.cr6.eq) goto loc_82F15090;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F15090:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f1509c
	if (ctx.cr6.eq) goto loc_82F1509C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F1509C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,-32472
	ctx.r8.s64 = ctx.r10.s64 + -32472;
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
	// addi r3,r9,1704
	ctx.r3.s64 = ctx.r9.s64 + 1704;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F150D0"))) PPC_WEAK_FUNC(sub_82F150D0);
PPC_FUNC_IMPL(__imp__sub_82F150D0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,28364
	ctx.r11.s64 = ctx.r11.s64 + 28364;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f150f8
	if (!ctx.cr6.eq) goto loc_82F150F8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F150F8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f15104
	if (ctx.cr6.eq) goto loc_82F15104;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F15104:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,-32440
	ctx.r8.s64 = ctx.r10.s64 + -32440;
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
	// addi r3,r9,1720
	ctx.r3.s64 = ctx.r9.s64 + 1720;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F15138"))) PPC_WEAK_FUNC(sub_82F15138);
PPC_FUNC_IMPL(__imp__sub_82F15138) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,28384
	ctx.r11.s64 = ctx.r11.s64 + 28384;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f15160
	if (!ctx.cr6.eq) goto loc_82F15160;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F15160:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f1516c
	if (ctx.cr6.eq) goto loc_82F1516C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F1516C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,-32408
	ctx.r8.s64 = ctx.r10.s64 + -32408;
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
	// addi r3,r9,1736
	ctx.r3.s64 = ctx.r9.s64 + 1736;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F151A0"))) PPC_WEAK_FUNC(sub_82F151A0);
PPC_FUNC_IMPL(__imp__sub_82F151A0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,28404
	ctx.r11.s64 = ctx.r11.s64 + 28404;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f151c8
	if (!ctx.cr6.eq) goto loc_82F151C8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F151C8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f151d4
	if (ctx.cr6.eq) goto loc_82F151D4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F151D4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,-32380
	ctx.r8.s64 = ctx.r10.s64 + -32380;
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
	// addi r3,r9,1752
	ctx.r3.s64 = ctx.r9.s64 + 1752;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F15208"))) PPC_WEAK_FUNC(sub_82F15208);
PPC_FUNC_IMPL(__imp__sub_82F15208) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,28424
	ctx.r11.s64 = ctx.r11.s64 + 28424;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f15230
	if (!ctx.cr6.eq) goto loc_82F15230;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F15230:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f1523c
	if (ctx.cr6.eq) goto loc_82F1523C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F1523C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,-32356
	ctx.r8.s64 = ctx.r10.s64 + -32356;
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
	// addi r3,r9,1768
	ctx.r3.s64 = ctx.r9.s64 + 1768;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F15270"))) PPC_WEAK_FUNC(sub_82F15270);
PPC_FUNC_IMPL(__imp__sub_82F15270) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,28444
	ctx.r11.s64 = ctx.r11.s64 + 28444;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f15298
	if (!ctx.cr6.eq) goto loc_82F15298;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F15298:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f152a4
	if (ctx.cr6.eq) goto loc_82F152A4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F152A4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,-32332
	ctx.r8.s64 = ctx.r10.s64 + -32332;
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
	// addi r3,r9,1784
	ctx.r3.s64 = ctx.r9.s64 + 1784;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F152D8"))) PPC_WEAK_FUNC(sub_82F152D8);
PPC_FUNC_IMPL(__imp__sub_82F152D8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,28464
	ctx.r11.s64 = ctx.r11.s64 + 28464;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f15300
	if (!ctx.cr6.eq) goto loc_82F15300;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F15300:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f1530c
	if (ctx.cr6.eq) goto loc_82F1530C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F1530C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,-32308
	ctx.r8.s64 = ctx.r10.s64 + -32308;
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
	// addi r3,r9,1800
	ctx.r3.s64 = ctx.r9.s64 + 1800;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F15340"))) PPC_WEAK_FUNC(sub_82F15340);
PPC_FUNC_IMPL(__imp__sub_82F15340) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,28484
	ctx.r11.s64 = ctx.r11.s64 + 28484;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f15368
	if (!ctx.cr6.eq) goto loc_82F15368;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F15368:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f15374
	if (ctx.cr6.eq) goto loc_82F15374;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F15374:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,-32284
	ctx.r8.s64 = ctx.r10.s64 + -32284;
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
	// addi r3,r9,1816
	ctx.r3.s64 = ctx.r9.s64 + 1816;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F153A8"))) PPC_WEAK_FUNC(sub_82F153A8);
PPC_FUNC_IMPL(__imp__sub_82F153A8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,28504
	ctx.r11.s64 = ctx.r11.s64 + 28504;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f153d0
	if (!ctx.cr6.eq) goto loc_82F153D0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F153D0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f153dc
	if (ctx.cr6.eq) goto loc_82F153DC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F153DC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,-32260
	ctx.r8.s64 = ctx.r10.s64 + -32260;
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
	// addi r3,r9,1832
	ctx.r3.s64 = ctx.r9.s64 + 1832;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F15410"))) PPC_WEAK_FUNC(sub_82F15410);
PPC_FUNC_IMPL(__imp__sub_82F15410) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,28524
	ctx.r11.s64 = ctx.r11.s64 + 28524;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f15438
	if (!ctx.cr6.eq) goto loc_82F15438;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F15438:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f15444
	if (ctx.cr6.eq) goto loc_82F15444;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F15444:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,-32232
	ctx.r8.s64 = ctx.r10.s64 + -32232;
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
	// addi r3,r9,1848
	ctx.r3.s64 = ctx.r9.s64 + 1848;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F15478"))) PPC_WEAK_FUNC(sub_82F15478);
PPC_FUNC_IMPL(__imp__sub_82F15478) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f154a0
	if (!ctx.cr6.eq) goto loc_82F154A0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F154A0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f154ac
	if (ctx.cr6.eq) goto loc_82F154AC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F154AC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,-32204
	ctx.r8.s64 = ctx.r10.s64 + -32204;
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
	// addi r3,r9,1864
	ctx.r3.s64 = ctx.r9.s64 + 1864;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F154E0"))) PPC_WEAK_FUNC(sub_82F154E0);
PPC_FUNC_IMPL(__imp__sub_82F154E0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,28564
	ctx.r11.s64 = ctx.r11.s64 + 28564;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f15508
	if (!ctx.cr6.eq) goto loc_82F15508;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F15508:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f15514
	if (ctx.cr6.eq) goto loc_82F15514;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F15514:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,-32176
	ctx.r8.s64 = ctx.r10.s64 + -32176;
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
	// addi r3,r9,1880
	ctx.r3.s64 = ctx.r9.s64 + 1880;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F15548"))) PPC_WEAK_FUNC(sub_82F15548);
PPC_FUNC_IMPL(__imp__sub_82F15548) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,28584
	ctx.r11.s64 = ctx.r11.s64 + 28584;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f15570
	if (!ctx.cr6.eq) goto loc_82F15570;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F15570:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f1557c
	if (ctx.cr6.eq) goto loc_82F1557C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F1557C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,-32140
	ctx.r8.s64 = ctx.r10.s64 + -32140;
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
	// addi r3,r9,1896
	ctx.r3.s64 = ctx.r9.s64 + 1896;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F155B0"))) PPC_WEAK_FUNC(sub_82F155B0);
PPC_FUNC_IMPL(__imp__sub_82F155B0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,28604
	ctx.r11.s64 = ctx.r11.s64 + 28604;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f155d8
	if (!ctx.cr6.eq) goto loc_82F155D8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F155D8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f155e4
	if (ctx.cr6.eq) goto loc_82F155E4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F155E4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,-32116
	ctx.r8.s64 = ctx.r10.s64 + -32116;
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
	// addi r3,r9,1912
	ctx.r3.s64 = ctx.r9.s64 + 1912;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F15618"))) PPC_WEAK_FUNC(sub_82F15618);
PPC_FUNC_IMPL(__imp__sub_82F15618) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,28624
	ctx.r11.s64 = ctx.r11.s64 + 28624;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f15640
	if (!ctx.cr6.eq) goto loc_82F15640;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F15640:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f1564c
	if (ctx.cr6.eq) goto loc_82F1564C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F1564C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,-32096
	ctx.r8.s64 = ctx.r10.s64 + -32096;
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
	// addi r3,r9,1928
	ctx.r3.s64 = ctx.r9.s64 + 1928;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F15680"))) PPC_WEAK_FUNC(sub_82F15680);
PPC_FUNC_IMPL(__imp__sub_82F15680) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,28644
	ctx.r11.s64 = ctx.r11.s64 + 28644;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f156a8
	if (!ctx.cr6.eq) goto loc_82F156A8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F156A8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f156b4
	if (ctx.cr6.eq) goto loc_82F156B4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F156B4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,-32072
	ctx.r8.s64 = ctx.r10.s64 + -32072;
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
	// addi r3,r9,1944
	ctx.r3.s64 = ctx.r9.s64 + 1944;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F156E8"))) PPC_WEAK_FUNC(sub_82F156E8);
PPC_FUNC_IMPL(__imp__sub_82F156E8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,28664
	ctx.r11.s64 = ctx.r11.s64 + 28664;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f15710
	if (!ctx.cr6.eq) goto loc_82F15710;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F15710:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f1571c
	if (ctx.cr6.eq) goto loc_82F1571C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F1571C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,-32052
	ctx.r8.s64 = ctx.r10.s64 + -32052;
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
	// addi r3,r9,1960
	ctx.r3.s64 = ctx.r9.s64 + 1960;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F15750"))) PPC_WEAK_FUNC(sub_82F15750);
PPC_FUNC_IMPL(__imp__sub_82F15750) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,28684
	ctx.r11.s64 = ctx.r11.s64 + 28684;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f15778
	if (!ctx.cr6.eq) goto loc_82F15778;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F15778:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f15784
	if (ctx.cr6.eq) goto loc_82F15784;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F15784:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,-32024
	ctx.r8.s64 = ctx.r10.s64 + -32024;
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
	// addi r3,r9,1976
	ctx.r3.s64 = ctx.r9.s64 + 1976;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F157B8"))) PPC_WEAK_FUNC(sub_82F157B8);
PPC_FUNC_IMPL(__imp__sub_82F157B8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,28704
	ctx.r11.s64 = ctx.r11.s64 + 28704;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f157e0
	if (!ctx.cr6.eq) goto loc_82F157E0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F157E0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f157ec
	if (ctx.cr6.eq) goto loc_82F157EC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F157EC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,-31996
	ctx.r8.s64 = ctx.r10.s64 + -31996;
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
	// addi r3,r9,1992
	ctx.r3.s64 = ctx.r9.s64 + 1992;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F15820"))) PPC_WEAK_FUNC(sub_82F15820);
PPC_FUNC_IMPL(__imp__sub_82F15820) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,28724
	ctx.r11.s64 = ctx.r11.s64 + 28724;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f15848
	if (!ctx.cr6.eq) goto loc_82F15848;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F15848:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f15854
	if (ctx.cr6.eq) goto loc_82F15854;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F15854:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,-31968
	ctx.r8.s64 = ctx.r10.s64 + -31968;
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
	// addi r3,r9,2008
	ctx.r3.s64 = ctx.r9.s64 + 2008;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F15888"))) PPC_WEAK_FUNC(sub_82F15888);
PPC_FUNC_IMPL(__imp__sub_82F15888) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,28744
	ctx.r11.s64 = ctx.r11.s64 + 28744;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f158b0
	if (!ctx.cr6.eq) goto loc_82F158B0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F158B0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f158bc
	if (ctx.cr6.eq) goto loc_82F158BC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F158BC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,-31940
	ctx.r8.s64 = ctx.r10.s64 + -31940;
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
	// addi r3,r9,2024
	ctx.r3.s64 = ctx.r9.s64 + 2024;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F158F0"))) PPC_WEAK_FUNC(sub_82F158F0);
PPC_FUNC_IMPL(__imp__sub_82F158F0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,28764
	ctx.r11.s64 = ctx.r11.s64 + 28764;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f15918
	if (!ctx.cr6.eq) goto loc_82F15918;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F15918:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f15924
	if (ctx.cr6.eq) goto loc_82F15924;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F15924:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,-31912
	ctx.r8.s64 = ctx.r10.s64 + -31912;
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
	// addi r3,r9,2040
	ctx.r3.s64 = ctx.r9.s64 + 2040;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F15958"))) PPC_WEAK_FUNC(sub_82F15958);
PPC_FUNC_IMPL(__imp__sub_82F15958) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,28784
	ctx.r11.s64 = ctx.r11.s64 + 28784;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f15980
	if (!ctx.cr6.eq) goto loc_82F15980;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F15980:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f1598c
	if (ctx.cr6.eq) goto loc_82F1598C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F1598C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,-31896
	ctx.r8.s64 = ctx.r10.s64 + -31896;
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
	// addi r3,r9,2056
	ctx.r3.s64 = ctx.r9.s64 + 2056;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F159C0"))) PPC_WEAK_FUNC(sub_82F159C0);
PPC_FUNC_IMPL(__imp__sub_82F159C0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,28804
	ctx.r11.s64 = ctx.r11.s64 + 28804;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f159e8
	if (!ctx.cr6.eq) goto loc_82F159E8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F159E8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f159f4
	if (ctx.cr6.eq) goto loc_82F159F4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F159F4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,-31880
	ctx.r8.s64 = ctx.r10.s64 + -31880;
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
	// addi r3,r9,2072
	ctx.r3.s64 = ctx.r9.s64 + 2072;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F15A28"))) PPC_WEAK_FUNC(sub_82F15A28);
PPC_FUNC_IMPL(__imp__sub_82F15A28) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,28824
	ctx.r11.s64 = ctx.r11.s64 + 28824;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f15a50
	if (!ctx.cr6.eq) goto loc_82F15A50;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F15A50:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f15a5c
	if (ctx.cr6.eq) goto loc_82F15A5C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F15A5C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,-31844
	ctx.r8.s64 = ctx.r10.s64 + -31844;
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
	// addi r3,r9,2088
	ctx.r3.s64 = ctx.r9.s64 + 2088;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F15A90"))) PPC_WEAK_FUNC(sub_82F15A90);
PPC_FUNC_IMPL(__imp__sub_82F15A90) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,28844
	ctx.r11.s64 = ctx.r11.s64 + 28844;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f15ab8
	if (!ctx.cr6.eq) goto loc_82F15AB8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F15AB8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f15ac4
	if (ctx.cr6.eq) goto loc_82F15AC4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F15AC4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,-31808
	ctx.r8.s64 = ctx.r10.s64 + -31808;
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
	// addi r3,r9,2104
	ctx.r3.s64 = ctx.r9.s64 + 2104;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F15AF8"))) PPC_WEAK_FUNC(sub_82F15AF8);
PPC_FUNC_IMPL(__imp__sub_82F15AF8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,28864
	ctx.r11.s64 = ctx.r11.s64 + 28864;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f15b20
	if (!ctx.cr6.eq) goto loc_82F15B20;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F15B20:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f15b2c
	if (ctx.cr6.eq) goto loc_82F15B2C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F15B2C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,-31772
	ctx.r8.s64 = ctx.r10.s64 + -31772;
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
	// addi r3,r9,2120
	ctx.r3.s64 = ctx.r9.s64 + 2120;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F15B60"))) PPC_WEAK_FUNC(sub_82F15B60);
PPC_FUNC_IMPL(__imp__sub_82F15B60) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,28884
	ctx.r11.s64 = ctx.r11.s64 + 28884;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f15b88
	if (!ctx.cr6.eq) goto loc_82F15B88;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F15B88:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f15b94
	if (ctx.cr6.eq) goto loc_82F15B94;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F15B94:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,-31728
	ctx.r8.s64 = ctx.r10.s64 + -31728;
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
	// addi r3,r9,2136
	ctx.r3.s64 = ctx.r9.s64 + 2136;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F15BC8"))) PPC_WEAK_FUNC(sub_82F15BC8);
PPC_FUNC_IMPL(__imp__sub_82F15BC8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,28904
	ctx.r11.s64 = ctx.r11.s64 + 28904;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f15bf0
	if (!ctx.cr6.eq) goto loc_82F15BF0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F15BF0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f15bfc
	if (ctx.cr6.eq) goto loc_82F15BFC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F15BFC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,-31684
	ctx.r8.s64 = ctx.r10.s64 + -31684;
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
	// addi r3,r9,2152
	ctx.r3.s64 = ctx.r9.s64 + 2152;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F15C30"))) PPC_WEAK_FUNC(sub_82F15C30);
PPC_FUNC_IMPL(__imp__sub_82F15C30) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,28924
	ctx.r11.s64 = ctx.r11.s64 + 28924;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f15c58
	if (!ctx.cr6.eq) goto loc_82F15C58;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F15C58:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f15c64
	if (ctx.cr6.eq) goto loc_82F15C64;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F15C64:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,-31640
	ctx.r8.s64 = ctx.r10.s64 + -31640;
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
	// addi r3,r9,2168
	ctx.r3.s64 = ctx.r9.s64 + 2168;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F15C98"))) PPC_WEAK_FUNC(sub_82F15C98);
PPC_FUNC_IMPL(__imp__sub_82F15C98) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,28944
	ctx.r11.s64 = ctx.r11.s64 + 28944;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f15cc0
	if (!ctx.cr6.eq) goto loc_82F15CC0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F15CC0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f15ccc
	if (ctx.cr6.eq) goto loc_82F15CCC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F15CCC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,-31600
	ctx.r8.s64 = ctx.r10.s64 + -31600;
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
	// addi r3,r9,2184
	ctx.r3.s64 = ctx.r9.s64 + 2184;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F15D00"))) PPC_WEAK_FUNC(sub_82F15D00);
PPC_FUNC_IMPL(__imp__sub_82F15D00) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,28964
	ctx.r11.s64 = ctx.r11.s64 + 28964;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f15d28
	if (!ctx.cr6.eq) goto loc_82F15D28;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F15D28:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f15d34
	if (ctx.cr6.eq) goto loc_82F15D34;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F15D34:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,-31556
	ctx.r8.s64 = ctx.r10.s64 + -31556;
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
	// addi r3,r9,2200
	ctx.r3.s64 = ctx.r9.s64 + 2200;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F15D68"))) PPC_WEAK_FUNC(sub_82F15D68);
PPC_FUNC_IMPL(__imp__sub_82F15D68) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,28984
	ctx.r11.s64 = ctx.r11.s64 + 28984;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f15d90
	if (!ctx.cr6.eq) goto loc_82F15D90;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F15D90:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f15d9c
	if (ctx.cr6.eq) goto loc_82F15D9C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F15D9C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,-31512
	ctx.r8.s64 = ctx.r10.s64 + -31512;
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
	// addi r3,r9,2216
	ctx.r3.s64 = ctx.r9.s64 + 2216;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F15DD0"))) PPC_WEAK_FUNC(sub_82F15DD0);
PPC_FUNC_IMPL(__imp__sub_82F15DD0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,29004
	ctx.r11.s64 = ctx.r11.s64 + 29004;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f15df8
	if (!ctx.cr6.eq) goto loc_82F15DF8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F15DF8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f15e04
	if (ctx.cr6.eq) goto loc_82F15E04;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F15E04:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,-31468
	ctx.r8.s64 = ctx.r10.s64 + -31468;
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
	// addi r3,r9,2232
	ctx.r3.s64 = ctx.r9.s64 + 2232;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F15E38"))) PPC_WEAK_FUNC(sub_82F15E38);
PPC_FUNC_IMPL(__imp__sub_82F15E38) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,29024
	ctx.r11.s64 = ctx.r11.s64 + 29024;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f15e60
	if (!ctx.cr6.eq) goto loc_82F15E60;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F15E60:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f15e6c
	if (ctx.cr6.eq) goto loc_82F15E6C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F15E6C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,-31428
	ctx.r8.s64 = ctx.r10.s64 + -31428;
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
	// addi r3,r9,2248
	ctx.r3.s64 = ctx.r9.s64 + 2248;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F15EA0"))) PPC_WEAK_FUNC(sub_82F15EA0);
PPC_FUNC_IMPL(__imp__sub_82F15EA0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,29044
	ctx.r11.s64 = ctx.r11.s64 + 29044;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f15ec8
	if (!ctx.cr6.eq) goto loc_82F15EC8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F15EC8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f15ed4
	if (ctx.cr6.eq) goto loc_82F15ED4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F15ED4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,-31392
	ctx.r8.s64 = ctx.r10.s64 + -31392;
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
	// addi r3,r9,2264
	ctx.r3.s64 = ctx.r9.s64 + 2264;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F15F08"))) PPC_WEAK_FUNC(sub_82F15F08);
PPC_FUNC_IMPL(__imp__sub_82F15F08) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,29064
	ctx.r11.s64 = ctx.r11.s64 + 29064;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f15f30
	if (!ctx.cr6.eq) goto loc_82F15F30;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F15F30:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f15f3c
	if (ctx.cr6.eq) goto loc_82F15F3C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F15F3C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,-31356
	ctx.r8.s64 = ctx.r10.s64 + -31356;
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
	// addi r3,r9,2280
	ctx.r3.s64 = ctx.r9.s64 + 2280;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F15F70"))) PPC_WEAK_FUNC(sub_82F15F70);
PPC_FUNC_IMPL(__imp__sub_82F15F70) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,29084
	ctx.r11.s64 = ctx.r11.s64 + 29084;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f15f98
	if (!ctx.cr6.eq) goto loc_82F15F98;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F15F98:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f15fa4
	if (ctx.cr6.eq) goto loc_82F15FA4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F15FA4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,-31320
	ctx.r8.s64 = ctx.r10.s64 + -31320;
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
	// addi r3,r9,2296
	ctx.r3.s64 = ctx.r9.s64 + 2296;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F15FD8"))) PPC_WEAK_FUNC(sub_82F15FD8);
PPC_FUNC_IMPL(__imp__sub_82F15FD8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,29104
	ctx.r11.s64 = ctx.r11.s64 + 29104;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f16000
	if (!ctx.cr6.eq) goto loc_82F16000;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F16000:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f1600c
	if (ctx.cr6.eq) goto loc_82F1600C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F1600C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,-31284
	ctx.r8.s64 = ctx.r10.s64 + -31284;
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
	// addi r3,r9,2312
	ctx.r3.s64 = ctx.r9.s64 + 2312;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F16040"))) PPC_WEAK_FUNC(sub_82F16040);
PPC_FUNC_IMPL(__imp__sub_82F16040) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,29124
	ctx.r11.s64 = ctx.r11.s64 + 29124;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f16068
	if (!ctx.cr6.eq) goto loc_82F16068;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F16068:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f16074
	if (ctx.cr6.eq) goto loc_82F16074;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F16074:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,-31248
	ctx.r8.s64 = ctx.r10.s64 + -31248;
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
	// addi r3,r9,2328
	ctx.r3.s64 = ctx.r9.s64 + 2328;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F160A8"))) PPC_WEAK_FUNC(sub_82F160A8);
PPC_FUNC_IMPL(__imp__sub_82F160A8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,29144
	ctx.r11.s64 = ctx.r11.s64 + 29144;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f160d0
	if (!ctx.cr6.eq) goto loc_82F160D0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F160D0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f160dc
	if (ctx.cr6.eq) goto loc_82F160DC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F160DC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,-31212
	ctx.r8.s64 = ctx.r10.s64 + -31212;
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
	// addi r3,r9,2344
	ctx.r3.s64 = ctx.r9.s64 + 2344;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F16110"))) PPC_WEAK_FUNC(sub_82F16110);
PPC_FUNC_IMPL(__imp__sub_82F16110) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,29164
	ctx.r11.s64 = ctx.r11.s64 + 29164;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f16138
	if (!ctx.cr6.eq) goto loc_82F16138;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F16138:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f16144
	if (ctx.cr6.eq) goto loc_82F16144;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F16144:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,-31184
	ctx.r8.s64 = ctx.r10.s64 + -31184;
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
	// addi r3,r9,2360
	ctx.r3.s64 = ctx.r9.s64 + 2360;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F16178"))) PPC_WEAK_FUNC(sub_82F16178);
PPC_FUNC_IMPL(__imp__sub_82F16178) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,29184
	ctx.r11.s64 = ctx.r11.s64 + 29184;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f161a0
	if (!ctx.cr6.eq) goto loc_82F161A0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F161A0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f161ac
	if (ctx.cr6.eq) goto loc_82F161AC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F161AC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,-31160
	ctx.r8.s64 = ctx.r10.s64 + -31160;
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
	// addi r3,r9,2376
	ctx.r3.s64 = ctx.r9.s64 + 2376;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F161E0"))) PPC_WEAK_FUNC(sub_82F161E0);
PPC_FUNC_IMPL(__imp__sub_82F161E0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,29204
	ctx.r11.s64 = ctx.r11.s64 + 29204;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f16208
	if (!ctx.cr6.eq) goto loc_82F16208;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F16208:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f16214
	if (ctx.cr6.eq) goto loc_82F16214;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F16214:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,-31136
	ctx.r8.s64 = ctx.r10.s64 + -31136;
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
	// addi r3,r9,2392
	ctx.r3.s64 = ctx.r9.s64 + 2392;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F16248"))) PPC_WEAK_FUNC(sub_82F16248);
PPC_FUNC_IMPL(__imp__sub_82F16248) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,29224
	ctx.r11.s64 = ctx.r11.s64 + 29224;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f16270
	if (!ctx.cr6.eq) goto loc_82F16270;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F16270:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f1627c
	if (ctx.cr6.eq) goto loc_82F1627C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F1627C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,-31112
	ctx.r8.s64 = ctx.r10.s64 + -31112;
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
	// addi r3,r9,2408
	ctx.r3.s64 = ctx.r9.s64 + 2408;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F162B0"))) PPC_WEAK_FUNC(sub_82F162B0);
PPC_FUNC_IMPL(__imp__sub_82F162B0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,29244
	ctx.r11.s64 = ctx.r11.s64 + 29244;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f162d8
	if (!ctx.cr6.eq) goto loc_82F162D8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F162D8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f162e4
	if (ctx.cr6.eq) goto loc_82F162E4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F162E4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,-31088
	ctx.r8.s64 = ctx.r10.s64 + -31088;
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
	// addi r3,r9,2424
	ctx.r3.s64 = ctx.r9.s64 + 2424;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F16318"))) PPC_WEAK_FUNC(sub_82F16318);
PPC_FUNC_IMPL(__imp__sub_82F16318) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,29264
	ctx.r11.s64 = ctx.r11.s64 + 29264;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f16340
	if (!ctx.cr6.eq) goto loc_82F16340;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F16340:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f1634c
	if (ctx.cr6.eq) goto loc_82F1634C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F1634C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,-31056
	ctx.r8.s64 = ctx.r10.s64 + -31056;
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
	// addi r3,r9,2440
	ctx.r3.s64 = ctx.r9.s64 + 2440;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F16380"))) PPC_WEAK_FUNC(sub_82F16380);
PPC_FUNC_IMPL(__imp__sub_82F16380) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,29284
	ctx.r11.s64 = ctx.r11.s64 + 29284;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f163a8
	if (!ctx.cr6.eq) goto loc_82F163A8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F163A8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f163b4
	if (ctx.cr6.eq) goto loc_82F163B4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F163B4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,-31032
	ctx.r8.s64 = ctx.r10.s64 + -31032;
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
	// addi r3,r9,2456
	ctx.r3.s64 = ctx.r9.s64 + 2456;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F163E8"))) PPC_WEAK_FUNC(sub_82F163E8);
PPC_FUNC_IMPL(__imp__sub_82F163E8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,29304
	ctx.r11.s64 = ctx.r11.s64 + 29304;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f16410
	if (!ctx.cr6.eq) goto loc_82F16410;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F16410:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f1641c
	if (ctx.cr6.eq) goto loc_82F1641C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F1641C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,-31000
	ctx.r8.s64 = ctx.r10.s64 + -31000;
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
	// addi r3,r9,2472
	ctx.r3.s64 = ctx.r9.s64 + 2472;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F16450"))) PPC_WEAK_FUNC(sub_82F16450);
PPC_FUNC_IMPL(__imp__sub_82F16450) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,29324
	ctx.r11.s64 = ctx.r11.s64 + 29324;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f16478
	if (!ctx.cr6.eq) goto loc_82F16478;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F16478:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f16484
	if (ctx.cr6.eq) goto loc_82F16484;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F16484:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,-30976
	ctx.r8.s64 = ctx.r10.s64 + -30976;
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
	// addi r3,r9,2488
	ctx.r3.s64 = ctx.r9.s64 + 2488;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F164B8"))) PPC_WEAK_FUNC(sub_82F164B8);
PPC_FUNC_IMPL(__imp__sub_82F164B8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,29344
	ctx.r11.s64 = ctx.r11.s64 + 29344;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f164e0
	if (!ctx.cr6.eq) goto loc_82F164E0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F164E0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f164ec
	if (ctx.cr6.eq) goto loc_82F164EC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F164EC:
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,-30932
	ctx.r9.s64 = ctx.r9.s64 + -30932;
	// addi r8,r10,-30952
	ctx.r8.s64 = ctx.r10.s64 + -30952;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,31
	ctx.r10.s64 = 31;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,2504
	ctx.r3.s64 = ctx.r9.s64 + 2504;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F16520"))) PPC_WEAK_FUNC(sub_82F16520);
PPC_FUNC_IMPL(__imp__sub_82F16520) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,29364
	ctx.r11.s64 = ctx.r11.s64 + 29364;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f16548
	if (!ctx.cr6.eq) goto loc_82F16548;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F16548:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f16554
	if (ctx.cr6.eq) goto loc_82F16554;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F16554:
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,-30932
	ctx.r9.s64 = ctx.r9.s64 + -30932;
	// addi r8,r10,-30916
	ctx.r8.s64 = ctx.r10.s64 + -30916;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,32
	ctx.r10.s64 = 32;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,2520
	ctx.r3.s64 = ctx.r9.s64 + 2520;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F16588"))) PPC_WEAK_FUNC(sub_82F16588);
PPC_FUNC_IMPL(__imp__sub_82F16588) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,29384
	ctx.r11.s64 = ctx.r11.s64 + 29384;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f165b0
	if (!ctx.cr6.eq) goto loc_82F165B0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F165B0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f165bc
	if (ctx.cr6.eq) goto loc_82F165BC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F165BC:
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,-30932
	ctx.r9.s64 = ctx.r9.s64 + -30932;
	// addi r8,r10,-30896
	ctx.r8.s64 = ctx.r10.s64 + -30896;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,33
	ctx.r10.s64 = 33;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,2536
	ctx.r3.s64 = ctx.r9.s64 + 2536;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F165F0"))) PPC_WEAK_FUNC(sub_82F165F0);
PPC_FUNC_IMPL(__imp__sub_82F165F0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,29404
	ctx.r11.s64 = ctx.r11.s64 + 29404;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f16618
	if (!ctx.cr6.eq) goto loc_82F16618;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F16618:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f16624
	if (ctx.cr6.eq) goto loc_82F16624;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F16624:
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,-30932
	ctx.r9.s64 = ctx.r9.s64 + -30932;
	// addi r8,r10,-30876
	ctx.r8.s64 = ctx.r10.s64 + -30876;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,34
	ctx.r10.s64 = 34;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,2552
	ctx.r3.s64 = ctx.r9.s64 + 2552;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F16658"))) PPC_WEAK_FUNC(sub_82F16658);
PPC_FUNC_IMPL(__imp__sub_82F16658) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,29424
	ctx.r11.s64 = ctx.r11.s64 + 29424;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f16680
	if (!ctx.cr6.eq) goto loc_82F16680;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F16680:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f1668c
	if (ctx.cr6.eq) goto loc_82F1668C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F1668C:
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,-30932
	ctx.r9.s64 = ctx.r9.s64 + -30932;
	// addi r8,r10,-30856
	ctx.r8.s64 = ctx.r10.s64 + -30856;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,62
	ctx.r10.s64 = 62;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,2568
	ctx.r3.s64 = ctx.r9.s64 + 2568;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F166C0"))) PPC_WEAK_FUNC(sub_82F166C0);
PPC_FUNC_IMPL(__imp__sub_82F166C0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,29444
	ctx.r11.s64 = ctx.r11.s64 + 29444;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f166e8
	if (!ctx.cr6.eq) goto loc_82F166E8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F166E8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f166f4
	if (ctx.cr6.eq) goto loc_82F166F4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F166F4:
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,-30932
	ctx.r9.s64 = ctx.r9.s64 + -30932;
	// addi r8,r10,-30836
	ctx.r8.s64 = ctx.r10.s64 + -30836;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,63
	ctx.r10.s64 = 63;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,2584
	ctx.r3.s64 = ctx.r9.s64 + 2584;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F16728"))) PPC_WEAK_FUNC(sub_82F16728);
PPC_FUNC_IMPL(__imp__sub_82F16728) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,29464
	ctx.r11.s64 = ctx.r11.s64 + 29464;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f16750
	if (!ctx.cr6.eq) goto loc_82F16750;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F16750:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f1675c
	if (ctx.cr6.eq) goto loc_82F1675C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F1675C:
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,-30932
	ctx.r9.s64 = ctx.r9.s64 + -30932;
	// addi r8,r10,-30816
	ctx.r8.s64 = ctx.r10.s64 + -30816;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,64
	ctx.r10.s64 = 64;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,2600
	ctx.r3.s64 = ctx.r9.s64 + 2600;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F16790"))) PPC_WEAK_FUNC(sub_82F16790);
PPC_FUNC_IMPL(__imp__sub_82F16790) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,29484
	ctx.r11.s64 = ctx.r11.s64 + 29484;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f167b8
	if (!ctx.cr6.eq) goto loc_82F167B8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F167B8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f167c4
	if (ctx.cr6.eq) goto loc_82F167C4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F167C4:
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,-30932
	ctx.r9.s64 = ctx.r9.s64 + -30932;
	// addi r8,r10,-30796
	ctx.r8.s64 = ctx.r10.s64 + -30796;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,65
	ctx.r10.s64 = 65;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,2616
	ctx.r3.s64 = ctx.r9.s64 + 2616;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F167F8"))) PPC_WEAK_FUNC(sub_82F167F8);
PPC_FUNC_IMPL(__imp__sub_82F167F8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,29504
	ctx.r11.s64 = ctx.r11.s64 + 29504;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f16820
	if (!ctx.cr6.eq) goto loc_82F16820;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F16820:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f1682c
	if (ctx.cr6.eq) goto loc_82F1682C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F1682C:
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,-30932
	ctx.r9.s64 = ctx.r9.s64 + -30932;
	// addi r8,r10,-30776
	ctx.r8.s64 = ctx.r10.s64 + -30776;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,66
	ctx.r10.s64 = 66;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,2632
	ctx.r3.s64 = ctx.r9.s64 + 2632;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F16860"))) PPC_WEAK_FUNC(sub_82F16860);
PPC_FUNC_IMPL(__imp__sub_82F16860) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,29524
	ctx.r11.s64 = ctx.r11.s64 + 29524;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f16888
	if (!ctx.cr6.eq) goto loc_82F16888;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F16888:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f16894
	if (ctx.cr6.eq) goto loc_82F16894;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F16894:
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,-30932
	ctx.r9.s64 = ctx.r9.s64 + -30932;
	// addi r8,r10,-30756
	ctx.r8.s64 = ctx.r10.s64 + -30756;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,93
	ctx.r10.s64 = 93;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,2648
	ctx.r3.s64 = ctx.r9.s64 + 2648;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F168C8"))) PPC_WEAK_FUNC(sub_82F168C8);
PPC_FUNC_IMPL(__imp__sub_82F168C8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,29544
	ctx.r11.s64 = ctx.r11.s64 + 29544;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f168f0
	if (!ctx.cr6.eq) goto loc_82F168F0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F168F0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f168fc
	if (ctx.cr6.eq) goto loc_82F168FC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F168FC:
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,-30932
	ctx.r9.s64 = ctx.r9.s64 + -30932;
	// addi r8,r10,-30736
	ctx.r8.s64 = ctx.r10.s64 + -30736;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,94
	ctx.r10.s64 = 94;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,2664
	ctx.r3.s64 = ctx.r9.s64 + 2664;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F16930"))) PPC_WEAK_FUNC(sub_82F16930);
PPC_FUNC_IMPL(__imp__sub_82F16930) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,29564
	ctx.r11.s64 = ctx.r11.s64 + 29564;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f16958
	if (!ctx.cr6.eq) goto loc_82F16958;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F16958:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f16964
	if (ctx.cr6.eq) goto loc_82F16964;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F16964:
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,-30932
	ctx.r9.s64 = ctx.r9.s64 + -30932;
	// addi r8,r10,-30716
	ctx.r8.s64 = ctx.r10.s64 + -30716;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,95
	ctx.r10.s64 = 95;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,2680
	ctx.r3.s64 = ctx.r9.s64 + 2680;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F16998"))) PPC_WEAK_FUNC(sub_82F16998);
PPC_FUNC_IMPL(__imp__sub_82F16998) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,29584
	ctx.r11.s64 = ctx.r11.s64 + 29584;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f169c0
	if (!ctx.cr6.eq) goto loc_82F169C0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F169C0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f169cc
	if (ctx.cr6.eq) goto loc_82F169CC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F169CC:
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,-30932
	ctx.r9.s64 = ctx.r9.s64 + -30932;
	// addi r8,r10,-30696
	ctx.r8.s64 = ctx.r10.s64 + -30696;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,96
	ctx.r10.s64 = 96;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,2696
	ctx.r3.s64 = ctx.r9.s64 + 2696;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F16A00"))) PPC_WEAK_FUNC(sub_82F16A00);
PPC_FUNC_IMPL(__imp__sub_82F16A00) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,29604
	ctx.r11.s64 = ctx.r11.s64 + 29604;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f16a28
	if (!ctx.cr6.eq) goto loc_82F16A28;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F16A28:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f16a34
	if (ctx.cr6.eq) goto loc_82F16A34;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F16A34:
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,-30932
	ctx.r9.s64 = ctx.r9.s64 + -30932;
	// addi r8,r10,-30676
	ctx.r8.s64 = ctx.r10.s64 + -30676;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,97
	ctx.r10.s64 = 97;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,2712
	ctx.r3.s64 = ctx.r9.s64 + 2712;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F16A68"))) PPC_WEAK_FUNC(sub_82F16A68);
PPC_FUNC_IMPL(__imp__sub_82F16A68) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,29624
	ctx.r11.s64 = ctx.r11.s64 + 29624;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f16a90
	if (!ctx.cr6.eq) goto loc_82F16A90;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F16A90:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f16a9c
	if (ctx.cr6.eq) goto loc_82F16A9C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F16A9C:
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,-30932
	ctx.r9.s64 = ctx.r9.s64 + -30932;
	// addi r8,r10,-30656
	ctx.r8.s64 = ctx.r10.s64 + -30656;
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
	// addi r3,r9,2728
	ctx.r3.s64 = ctx.r9.s64 + 2728;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F16AD0"))) PPC_WEAK_FUNC(sub_82F16AD0);
PPC_FUNC_IMPL(__imp__sub_82F16AD0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,29644
	ctx.r11.s64 = ctx.r11.s64 + 29644;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f16af8
	if (!ctx.cr6.eq) goto loc_82F16AF8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F16AF8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f16b04
	if (ctx.cr6.eq) goto loc_82F16B04;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F16B04:
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,-30932
	ctx.r9.s64 = ctx.r9.s64 + -30932;
	// addi r8,r10,-30640
	ctx.r8.s64 = ctx.r10.s64 + -30640;
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
	// addi r3,r9,2744
	ctx.r3.s64 = ctx.r9.s64 + 2744;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F16B38"))) PPC_WEAK_FUNC(sub_82F16B38);
PPC_FUNC_IMPL(__imp__sub_82F16B38) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,29664
	ctx.r11.s64 = ctx.r11.s64 + 29664;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f16b60
	if (!ctx.cr6.eq) goto loc_82F16B60;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F16B60:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f16b6c
	if (ctx.cr6.eq) goto loc_82F16B6C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F16B6C:
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,-30932
	ctx.r9.s64 = ctx.r9.s64 + -30932;
	// addi r8,r10,-30624
	ctx.r8.s64 = ctx.r10.s64 + -30624;
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
	// addi r3,r9,2760
	ctx.r3.s64 = ctx.r9.s64 + 2760;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F16BA0"))) PPC_WEAK_FUNC(sub_82F16BA0);
PPC_FUNC_IMPL(__imp__sub_82F16BA0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,29684
	ctx.r11.s64 = ctx.r11.s64 + 29684;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f16bc8
	if (!ctx.cr6.eq) goto loc_82F16BC8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F16BC8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f16bd4
	if (ctx.cr6.eq) goto loc_82F16BD4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F16BD4:
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,-30932
	ctx.r9.s64 = ctx.r9.s64 + -30932;
	// addi r8,r10,-30608
	ctx.r8.s64 = ctx.r10.s64 + -30608;
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
	// addi r3,r9,2776
	ctx.r3.s64 = ctx.r9.s64 + 2776;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F16C08"))) PPC_WEAK_FUNC(sub_82F16C08);
PPC_FUNC_IMPL(__imp__sub_82F16C08) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,29704
	ctx.r11.s64 = ctx.r11.s64 + 29704;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f16c30
	if (!ctx.cr6.eq) goto loc_82F16C30;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F16C30:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f16c3c
	if (ctx.cr6.eq) goto loc_82F16C3C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F16C3C:
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,-30932
	ctx.r9.s64 = ctx.r9.s64 + -30932;
	// addi r8,r10,-30592
	ctx.r8.s64 = ctx.r10.s64 + -30592;
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
	// addi r3,r9,2792
	ctx.r3.s64 = ctx.r9.s64 + 2792;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F16C70"))) PPC_WEAK_FUNC(sub_82F16C70);
PPC_FUNC_IMPL(__imp__sub_82F16C70) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,29724
	ctx.r11.s64 = ctx.r11.s64 + 29724;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f16c98
	if (!ctx.cr6.eq) goto loc_82F16C98;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F16C98:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f16ca4
	if (ctx.cr6.eq) goto loc_82F16CA4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F16CA4:
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,-30552
	ctx.r9.s64 = ctx.r9.s64 + -30552;
	// addi r8,r10,-30576
	ctx.r8.s64 = ctx.r10.s64 + -30576;
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
	// addi r3,r9,2808
	ctx.r3.s64 = ctx.r9.s64 + 2808;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F16CD8"))) PPC_WEAK_FUNC(sub_82F16CD8);
PPC_FUNC_IMPL(__imp__sub_82F16CD8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,29744
	ctx.r11.s64 = ctx.r11.s64 + 29744;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f16d00
	if (!ctx.cr6.eq) goto loc_82F16D00;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F16D00:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f16d0c
	if (ctx.cr6.eq) goto loc_82F16D0C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F16D0C:
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,-30552
	ctx.r9.s64 = ctx.r9.s64 + -30552;
	// addi r8,r10,-30532
	ctx.r8.s64 = ctx.r10.s64 + -30532;
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
	// addi r3,r9,2824
	ctx.r3.s64 = ctx.r9.s64 + 2824;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F16D40"))) PPC_WEAK_FUNC(sub_82F16D40);
PPC_FUNC_IMPL(__imp__sub_82F16D40) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,29764
	ctx.r11.s64 = ctx.r11.s64 + 29764;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f16d68
	if (!ctx.cr6.eq) goto loc_82F16D68;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F16D68:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f16d74
	if (ctx.cr6.eq) goto loc_82F16D74;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F16D74:
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,-30552
	ctx.r9.s64 = ctx.r9.s64 + -30552;
	// addi r8,r10,-30508
	ctx.r8.s64 = ctx.r10.s64 + -30508;
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
	// addi r3,r9,2840
	ctx.r3.s64 = ctx.r9.s64 + 2840;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F16DA8"))) PPC_WEAK_FUNC(sub_82F16DA8);
PPC_FUNC_IMPL(__imp__sub_82F16DA8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,29784
	ctx.r11.s64 = ctx.r11.s64 + 29784;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f16dd0
	if (!ctx.cr6.eq) goto loc_82F16DD0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F16DD0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f16ddc
	if (ctx.cr6.eq) goto loc_82F16DDC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F16DDC:
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,-30552
	ctx.r9.s64 = ctx.r9.s64 + -30552;
	// addi r8,r10,-30484
	ctx.r8.s64 = ctx.r10.s64 + -30484;
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
	// addi r3,r9,2856
	ctx.r3.s64 = ctx.r9.s64 + 2856;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F16E10"))) PPC_WEAK_FUNC(sub_82F16E10);
PPC_FUNC_IMPL(__imp__sub_82F16E10) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,29804
	ctx.r11.s64 = ctx.r11.s64 + 29804;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f16e38
	if (!ctx.cr6.eq) goto loc_82F16E38;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F16E38:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f16e44
	if (ctx.cr6.eq) goto loc_82F16E44;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F16E44:
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,-30552
	ctx.r9.s64 = ctx.r9.s64 + -30552;
	// addi r8,r10,-30460
	ctx.r8.s64 = ctx.r10.s64 + -30460;
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
	// addi r3,r9,2872
	ctx.r3.s64 = ctx.r9.s64 + 2872;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F16E78"))) PPC_WEAK_FUNC(sub_82F16E78);
PPC_FUNC_IMPL(__imp__sub_82F16E78) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,29824
	ctx.r11.s64 = ctx.r11.s64 + 29824;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f16ea0
	if (!ctx.cr6.eq) goto loc_82F16EA0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F16EA0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f16eac
	if (ctx.cr6.eq) goto loc_82F16EAC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F16EAC:
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,-30552
	ctx.r9.s64 = ctx.r9.s64 + -30552;
	// addi r8,r10,-30440
	ctx.r8.s64 = ctx.r10.s64 + -30440;
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
	// addi r3,r9,2888
	ctx.r3.s64 = ctx.r9.s64 + 2888;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F16EE0"))) PPC_WEAK_FUNC(sub_82F16EE0);
PPC_FUNC_IMPL(__imp__sub_82F16EE0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,29844
	ctx.r11.s64 = ctx.r11.s64 + 29844;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f16f08
	if (!ctx.cr6.eq) goto loc_82F16F08;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F16F08:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f16f14
	if (ctx.cr6.eq) goto loc_82F16F14;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F16F14:
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,-30552
	ctx.r9.s64 = ctx.r9.s64 + -30552;
	// addi r8,r10,-30420
	ctx.r8.s64 = ctx.r10.s64 + -30420;
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
	// addi r3,r9,2904
	ctx.r3.s64 = ctx.r9.s64 + 2904;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F16F48"))) PPC_WEAK_FUNC(sub_82F16F48);
PPC_FUNC_IMPL(__imp__sub_82F16F48) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,29864
	ctx.r11.s64 = ctx.r11.s64 + 29864;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f16f70
	if (!ctx.cr6.eq) goto loc_82F16F70;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F16F70:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f16f7c
	if (ctx.cr6.eq) goto loc_82F16F7C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F16F7C:
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,-30552
	ctx.r9.s64 = ctx.r9.s64 + -30552;
	// addi r8,r10,-30400
	ctx.r8.s64 = ctx.r10.s64 + -30400;
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
	// addi r3,r9,2920
	ctx.r3.s64 = ctx.r9.s64 + 2920;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F16FB0"))) PPC_WEAK_FUNC(sub_82F16FB0);
PPC_FUNC_IMPL(__imp__sub_82F16FB0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,29884
	ctx.r11.s64 = ctx.r11.s64 + 29884;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f16fd8
	if (!ctx.cr6.eq) goto loc_82F16FD8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F16FD8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f16fe4
	if (ctx.cr6.eq) goto loc_82F16FE4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F16FE4:
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,-30552
	ctx.r9.s64 = ctx.r9.s64 + -30552;
	// addi r8,r10,-30380
	ctx.r8.s64 = ctx.r10.s64 + -30380;
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
	// addi r3,r9,2936
	ctx.r3.s64 = ctx.r9.s64 + 2936;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F17018"))) PPC_WEAK_FUNC(sub_82F17018);
PPC_FUNC_IMPL(__imp__sub_82F17018) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,29904
	ctx.r11.s64 = ctx.r11.s64 + 29904;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f17040
	if (!ctx.cr6.eq) goto loc_82F17040;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F17040:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f1704c
	if (ctx.cr6.eq) goto loc_82F1704C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F1704C:
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,-30552
	ctx.r9.s64 = ctx.r9.s64 + -30552;
	// addi r8,r10,-30360
	ctx.r8.s64 = ctx.r10.s64 + -30360;
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
	// addi r3,r9,2952
	ctx.r3.s64 = ctx.r9.s64 + 2952;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F17080"))) PPC_WEAK_FUNC(sub_82F17080);
PPC_FUNC_IMPL(__imp__sub_82F17080) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,29924
	ctx.r11.s64 = ctx.r11.s64 + 29924;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f170a8
	if (!ctx.cr6.eq) goto loc_82F170A8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F170A8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f170b4
	if (ctx.cr6.eq) goto loc_82F170B4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F170B4:
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,-30552
	ctx.r9.s64 = ctx.r9.s64 + -30552;
	// addi r8,r10,-30336
	ctx.r8.s64 = ctx.r10.s64 + -30336;
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
	// addi r3,r9,2968
	ctx.r3.s64 = ctx.r9.s64 + 2968;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F170E8"))) PPC_WEAK_FUNC(sub_82F170E8);
PPC_FUNC_IMPL(__imp__sub_82F170E8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,29944
	ctx.r11.s64 = ctx.r11.s64 + 29944;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f17110
	if (!ctx.cr6.eq) goto loc_82F17110;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F17110:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f1711c
	if (ctx.cr6.eq) goto loc_82F1711C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F1711C:
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,-30552
	ctx.r9.s64 = ctx.r9.s64 + -30552;
	// addi r8,r10,-30312
	ctx.r8.s64 = ctx.r10.s64 + -30312;
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
	// addi r3,r9,2984
	ctx.r3.s64 = ctx.r9.s64 + 2984;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F17150"))) PPC_WEAK_FUNC(sub_82F17150);
PPC_FUNC_IMPL(__imp__sub_82F17150) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,29964
	ctx.r11.s64 = ctx.r11.s64 + 29964;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f17178
	if (!ctx.cr6.eq) goto loc_82F17178;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F17178:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f17184
	if (ctx.cr6.eq) goto loc_82F17184;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F17184:
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,-30552
	ctx.r9.s64 = ctx.r9.s64 + -30552;
	// addi r8,r10,-30288
	ctx.r8.s64 = ctx.r10.s64 + -30288;
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
	// addi r3,r9,3000
	ctx.r3.s64 = ctx.r9.s64 + 3000;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F171B8"))) PPC_WEAK_FUNC(sub_82F171B8);
PPC_FUNC_IMPL(__imp__sub_82F171B8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,29984
	ctx.r11.s64 = ctx.r11.s64 + 29984;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f171e0
	if (!ctx.cr6.eq) goto loc_82F171E0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F171E0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f171ec
	if (ctx.cr6.eq) goto loc_82F171EC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F171EC:
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,-30552
	ctx.r9.s64 = ctx.r9.s64 + -30552;
	// addi r8,r10,-30264
	ctx.r8.s64 = ctx.r10.s64 + -30264;
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
	// addi r3,r9,3016
	ctx.r3.s64 = ctx.r9.s64 + 3016;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F17220"))) PPC_WEAK_FUNC(sub_82F17220);
PPC_FUNC_IMPL(__imp__sub_82F17220) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,30004
	ctx.r11.s64 = ctx.r11.s64 + 30004;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f17248
	if (!ctx.cr6.eq) goto loc_82F17248;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F17248:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f17254
	if (ctx.cr6.eq) goto loc_82F17254;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F17254:
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,-30552
	ctx.r9.s64 = ctx.r9.s64 + -30552;
	// addi r8,r10,-30240
	ctx.r8.s64 = ctx.r10.s64 + -30240;
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
	// addi r3,r9,3032
	ctx.r3.s64 = ctx.r9.s64 + 3032;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F17288"))) PPC_WEAK_FUNC(sub_82F17288);
PPC_FUNC_IMPL(__imp__sub_82F17288) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,30024
	ctx.r11.s64 = ctx.r11.s64 + 30024;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f172b0
	if (!ctx.cr6.eq) goto loc_82F172B0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F172B0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f172bc
	if (ctx.cr6.eq) goto loc_82F172BC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F172BC:
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,-30552
	ctx.r9.s64 = ctx.r9.s64 + -30552;
	// addi r8,r10,-30220
	ctx.r8.s64 = ctx.r10.s64 + -30220;
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
	// addi r3,r9,3048
	ctx.r3.s64 = ctx.r9.s64 + 3048;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F172F0"))) PPC_WEAK_FUNC(sub_82F172F0);
PPC_FUNC_IMPL(__imp__sub_82F172F0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,30044
	ctx.r11.s64 = ctx.r11.s64 + 30044;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f17318
	if (!ctx.cr6.eq) goto loc_82F17318;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F17318:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f17324
	if (ctx.cr6.eq) goto loc_82F17324;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F17324:
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,-30552
	ctx.r9.s64 = ctx.r9.s64 + -30552;
	// addi r8,r10,-30200
	ctx.r8.s64 = ctx.r10.s64 + -30200;
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
	// addi r3,r9,3064
	ctx.r3.s64 = ctx.r9.s64 + 3064;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F17358"))) PPC_WEAK_FUNC(sub_82F17358);
PPC_FUNC_IMPL(__imp__sub_82F17358) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,30064
	ctx.r11.s64 = ctx.r11.s64 + 30064;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f17380
	if (!ctx.cr6.eq) goto loc_82F17380;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F17380:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f1738c
	if (ctx.cr6.eq) goto loc_82F1738C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F1738C:
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,-30552
	ctx.r9.s64 = ctx.r9.s64 + -30552;
	// addi r8,r10,-30180
	ctx.r8.s64 = ctx.r10.s64 + -30180;
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
	// addi r3,r9,3080
	ctx.r3.s64 = ctx.r9.s64 + 3080;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F173C0"))) PPC_WEAK_FUNC(sub_82F173C0);
PPC_FUNC_IMPL(__imp__sub_82F173C0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,30084
	ctx.r11.s64 = ctx.r11.s64 + 30084;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f173e8
	if (!ctx.cr6.eq) goto loc_82F173E8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F173E8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f173f4
	if (ctx.cr6.eq) goto loc_82F173F4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F173F4:
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r9,-30552
	ctx.r9.s64 = ctx.r9.s64 + -30552;
	// addi r8,r10,-30160
	ctx.r8.s64 = ctx.r10.s64 + -30160;
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
	// addi r3,r9,3096
	ctx.r3.s64 = ctx.r9.s64 + 3096;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F17428"))) PPC_WEAK_FUNC(sub_82F17428);
PPC_FUNC_IMPL(__imp__sub_82F17428) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x82F17444;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r11,30228(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30228, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F17460"))) PPC_WEAK_FUNC(sub_82F17460);
PPC_FUNC_IMPL(__imp__sub_82F17460) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x82F1747C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r11,30580(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30580, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F17498"))) PPC_WEAK_FUNC(sub_82F17498);
PPC_FUNC_IMPL(__imp__sub_82F17498) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x82F174B4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r11,30984(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30984, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F174D0"))) PPC_WEAK_FUNC(sub_82F174D0);
PPC_FUNC_IMPL(__imp__sub_82F174D0) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x82F174EC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r11,31312(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31312, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F17508"))) PPC_WEAK_FUNC(sub_82F17508);
PPC_FUNC_IMPL(__imp__sub_82F17508) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x82F17524;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r11,30736(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30736, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F17540"))) PPC_WEAK_FUNC(sub_82F17540);
PPC_FUNC_IMPL(__imp__sub_82F17540) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x82F1755C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r11,30556(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30556, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F17578"))) PPC_WEAK_FUNC(sub_82F17578);
PPC_FUNC_IMPL(__imp__sub_82F17578) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x82F17594;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r11,30380(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30380, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F175B0"))) PPC_WEAK_FUNC(sub_82F175B0);
PPC_FUNC_IMPL(__imp__sub_82F175B0) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x82F175CC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r11,30400(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30400, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F175E8"))) PPC_WEAK_FUNC(sub_82F175E8);
PPC_FUNC_IMPL(__imp__sub_82F175E8) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x82F17604;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r11,31144(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31144, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F17620"))) PPC_WEAK_FUNC(sub_82F17620);
PPC_FUNC_IMPL(__imp__sub_82F17620) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x82F1763C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r11,30848(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30848, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F17658"))) PPC_WEAK_FUNC(sub_82F17658);
PPC_FUNC_IMPL(__imp__sub_82F17658) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x82F17674;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r11,30968(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30968, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F17690"))) PPC_WEAK_FUNC(sub_82F17690);
PPC_FUNC_IMPL(__imp__sub_82F17690) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x82F176AC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r11,30816(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30816, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F176C8"))) PPC_WEAK_FUNC(sub_82F176C8);
PPC_FUNC_IMPL(__imp__sub_82F176C8) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x82F176E4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r11,30144(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30144, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F17700"))) PPC_WEAK_FUNC(sub_82F17700);
PPC_FUNC_IMPL(__imp__sub_82F17700) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x82F1771C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r11,30164(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30164, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F17738"))) PPC_WEAK_FUNC(sub_82F17738);
PPC_FUNC_IMPL(__imp__sub_82F17738) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x82F17754;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r11,30252(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30252, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F17770"))) PPC_WEAK_FUNC(sub_82F17770);
PPC_FUNC_IMPL(__imp__sub_82F17770) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x82F1778C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r11,30404(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30404, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F177A8"))) PPC_WEAK_FUNC(sub_82F177A8);
PPC_FUNC_IMPL(__imp__sub_82F177A8) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x82F177C4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r11,30356(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30356, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F177E0"))) PPC_WEAK_FUNC(sub_82F177E0);
PPC_FUNC_IMPL(__imp__sub_82F177E0) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x82F177FC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r11,30544(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30544, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F17818"))) PPC_WEAK_FUNC(sub_82F17818);
PPC_FUNC_IMPL(__imp__sub_82F17818) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x82F17834;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r11,31060(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31060, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F17850"))) PPC_WEAK_FUNC(sub_82F17850);
PPC_FUNC_IMPL(__imp__sub_82F17850) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x82F1786C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r11,30680(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30680, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F17888"))) PPC_WEAK_FUNC(sub_82F17888);
PPC_FUNC_IMPL(__imp__sub_82F17888) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x82F178A4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r11,30728(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30728, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F178C0"))) PPC_WEAK_FUNC(sub_82F178C0);
PPC_FUNC_IMPL(__imp__sub_82F178C0) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x82F178DC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r11,30340(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30340, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

