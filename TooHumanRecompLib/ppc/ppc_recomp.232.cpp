#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82F0AD18"))) PPC_WEAK_FUNC(sub_82F0AD18);
PPC_FUNC_IMPL(__imp__sub_82F0AD18) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,20304
	ctx.r11.s64 = ctx.r11.s64 + 20304;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0ad40
	if (!ctx.cr6.eq) goto loc_82F0AD40;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0AD40:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0ad4c
	if (ctx.cr6.eq) goto loc_82F0AD4C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0AD4C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,25856
	ctx.r8.s64 = ctx.r10.s64 + 25856;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,238
	ctx.r10.s64 = 238;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-4728
	ctx.r3.s64 = ctx.r9.s64 + -4728;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0AD80"))) PPC_WEAK_FUNC(sub_82F0AD80);
PPC_FUNC_IMPL(__imp__sub_82F0AD80) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,20324
	ctx.r11.s64 = ctx.r11.s64 + 20324;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0ada8
	if (!ctx.cr6.eq) goto loc_82F0ADA8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0ADA8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0adb4
	if (ctx.cr6.eq) goto loc_82F0ADB4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0ADB4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,25864
	ctx.r8.s64 = ctx.r10.s64 + 25864;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,237
	ctx.r10.s64 = 237;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-4712
	ctx.r3.s64 = ctx.r9.s64 + -4712;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0ADE8"))) PPC_WEAK_FUNC(sub_82F0ADE8);
PPC_FUNC_IMPL(__imp__sub_82F0ADE8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,20344
	ctx.r11.s64 = ctx.r11.s64 + 20344;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0ae10
	if (!ctx.cr6.eq) goto loc_82F0AE10;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0AE10:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0ae1c
	if (ctx.cr6.eq) goto loc_82F0AE1C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0AE1C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,25884
	ctx.r8.s64 = ctx.r10.s64 + 25884;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,239
	ctx.r10.s64 = 239;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-4696
	ctx.r3.s64 = ctx.r9.s64 + -4696;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0AE50"))) PPC_WEAK_FUNC(sub_82F0AE50);
PPC_FUNC_IMPL(__imp__sub_82F0AE50) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,20364
	ctx.r11.s64 = ctx.r11.s64 + 20364;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0ae78
	if (!ctx.cr6.eq) goto loc_82F0AE78;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0AE78:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0ae84
	if (ctx.cr6.eq) goto loc_82F0AE84;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0AE84:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,25900
	ctx.r8.s64 = ctx.r10.s64 + 25900;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,261
	ctx.r10.s64 = 261;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-4680
	ctx.r3.s64 = ctx.r9.s64 + -4680;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0AEB8"))) PPC_WEAK_FUNC(sub_82F0AEB8);
PPC_FUNC_IMPL(__imp__sub_82F0AEB8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,20384
	ctx.r11.s64 = ctx.r11.s64 + 20384;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0aee0
	if (!ctx.cr6.eq) goto loc_82F0AEE0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0AEE0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0aeec
	if (ctx.cr6.eq) goto loc_82F0AEEC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0AEEC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,25912
	ctx.r8.s64 = ctx.r10.s64 + 25912;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,257
	ctx.r10.s64 = 257;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-4664
	ctx.r3.s64 = ctx.r9.s64 + -4664;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0AF20"))) PPC_WEAK_FUNC(sub_82F0AF20);
PPC_FUNC_IMPL(__imp__sub_82F0AF20) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,20404
	ctx.r11.s64 = ctx.r11.s64 + 20404;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0af48
	if (!ctx.cr6.eq) goto loc_82F0AF48;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0AF48:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0af54
	if (ctx.cr6.eq) goto loc_82F0AF54;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0AF54:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,25932
	ctx.r8.s64 = ctx.r10.s64 + 25932;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,263
	ctx.r10.s64 = 263;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-4648
	ctx.r3.s64 = ctx.r9.s64 + -4648;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0AF88"))) PPC_WEAK_FUNC(sub_82F0AF88);
PPC_FUNC_IMPL(__imp__sub_82F0AF88) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,20424
	ctx.r11.s64 = ctx.r11.s64 + 20424;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0afb0
	if (!ctx.cr6.eq) goto loc_82F0AFB0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0AFB0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0afbc
	if (ctx.cr6.eq) goto loc_82F0AFBC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0AFBC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,25960
	ctx.r8.s64 = ctx.r10.s64 + 25960;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,259
	ctx.r10.s64 = 259;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-4632
	ctx.r3.s64 = ctx.r9.s64 + -4632;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0AFF0"))) PPC_WEAK_FUNC(sub_82F0AFF0);
PPC_FUNC_IMPL(__imp__sub_82F0AFF0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,20444
	ctx.r11.s64 = ctx.r11.s64 + 20444;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0b018
	if (!ctx.cr6.eq) goto loc_82F0B018;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0B018:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0b024
	if (ctx.cr6.eq) goto loc_82F0B024;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0B024:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,25980
	ctx.r8.s64 = ctx.r10.s64 + 25980;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,267
	ctx.r10.s64 = 267;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-4616
	ctx.r3.s64 = ctx.r9.s64 + -4616;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0B058"))) PPC_WEAK_FUNC(sub_82F0B058);
PPC_FUNC_IMPL(__imp__sub_82F0B058) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,20464
	ctx.r11.s64 = ctx.r11.s64 + 20464;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0b080
	if (!ctx.cr6.eq) goto loc_82F0B080;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0B080:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0b08c
	if (ctx.cr6.eq) goto loc_82F0B08C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0B08C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,26000
	ctx.r8.s64 = ctx.r10.s64 + 26000;
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
	// addi r3,r9,-4600
	ctx.r3.s64 = ctx.r9.s64 + -4600;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0B0C0"))) PPC_WEAK_FUNC(sub_82F0B0C0);
PPC_FUNC_IMPL(__imp__sub_82F0B0C0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,20484
	ctx.r11.s64 = ctx.r11.s64 + 20484;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0b0e8
	if (!ctx.cr6.eq) goto loc_82F0B0E8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0B0E8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0b0f4
	if (ctx.cr6.eq) goto loc_82F0B0F4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0B0F4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,26028
	ctx.r8.s64 = ctx.r10.s64 + 26028;
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
	// addi r3,r9,-4584
	ctx.r3.s64 = ctx.r9.s64 + -4584;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0B128"))) PPC_WEAK_FUNC(sub_82F0B128);
PPC_FUNC_IMPL(__imp__sub_82F0B128) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,20504
	ctx.r11.s64 = ctx.r11.s64 + 20504;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0b150
	if (!ctx.cr6.eq) goto loc_82F0B150;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0B150:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0b15c
	if (ctx.cr6.eq) goto loc_82F0B15C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0B15C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,26056
	ctx.r8.s64 = ctx.r10.s64 + 26056;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,271
	ctx.r10.s64 = 271;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-4568
	ctx.r3.s64 = ctx.r9.s64 + -4568;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0B190"))) PPC_WEAK_FUNC(sub_82F0B190);
PPC_FUNC_IMPL(__imp__sub_82F0B190) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,20524
	ctx.r11.s64 = ctx.r11.s64 + 20524;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0b1b8
	if (!ctx.cr6.eq) goto loc_82F0B1B8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0B1B8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0b1c4
	if (ctx.cr6.eq) goto loc_82F0B1C4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0B1C4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,26068
	ctx.r8.s64 = ctx.r10.s64 + 26068;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,265
	ctx.r10.s64 = 265;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-4552
	ctx.r3.s64 = ctx.r9.s64 + -4552;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0B1F8"))) PPC_WEAK_FUNC(sub_82F0B1F8);
PPC_FUNC_IMPL(__imp__sub_82F0B1F8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,20544
	ctx.r11.s64 = ctx.r11.s64 + 20544;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0b220
	if (!ctx.cr6.eq) goto loc_82F0B220;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0B220:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0b22c
	if (ctx.cr6.eq) goto loc_82F0B22C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0B22C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,26096
	ctx.r8.s64 = ctx.r10.s64 + 26096;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,323
	ctx.r10.s64 = 323;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-4536
	ctx.r3.s64 = ctx.r9.s64 + -4536;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0B260"))) PPC_WEAK_FUNC(sub_82F0B260);
PPC_FUNC_IMPL(__imp__sub_82F0B260) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,20564
	ctx.r11.s64 = ctx.r11.s64 + 20564;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0b288
	if (!ctx.cr6.eq) goto loc_82F0B288;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0B288:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0b294
	if (ctx.cr6.eq) goto loc_82F0B294;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0B294:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,26120
	ctx.r8.s64 = ctx.r10.s64 + 26120;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,231
	ctx.r10.s64 = 231;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-4520
	ctx.r3.s64 = ctx.r9.s64 + -4520;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0B2C8"))) PPC_WEAK_FUNC(sub_82F0B2C8);
PPC_FUNC_IMPL(__imp__sub_82F0B2C8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,20584
	ctx.r11.s64 = ctx.r11.s64 + 20584;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0b2f0
	if (!ctx.cr6.eq) goto loc_82F0B2F0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0B2F0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0b2fc
	if (ctx.cr6.eq) goto loc_82F0B2FC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0B2FC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,26140
	ctx.r8.s64 = ctx.r10.s64 + 26140;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,233
	ctx.r10.s64 = 233;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-4504
	ctx.r3.s64 = ctx.r9.s64 + -4504;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0B330"))) PPC_WEAK_FUNC(sub_82F0B330);
PPC_FUNC_IMPL(__imp__sub_82F0B330) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,20604
	ctx.r11.s64 = ctx.r11.s64 + 20604;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0b358
	if (!ctx.cr6.eq) goto loc_82F0B358;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0B358:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0b364
	if (ctx.cr6.eq) goto loc_82F0B364;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0B364:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,26164
	ctx.r8.s64 = ctx.r10.s64 + 26164;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,235
	ctx.r10.s64 = 235;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-4488
	ctx.r3.s64 = ctx.r9.s64 + -4488;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0B398"))) PPC_WEAK_FUNC(sub_82F0B398);
PPC_FUNC_IMPL(__imp__sub_82F0B398) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,20624
	ctx.r11.s64 = ctx.r11.s64 + 20624;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0b3c0
	if (!ctx.cr6.eq) goto loc_82F0B3C0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0B3C0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0b3cc
	if (ctx.cr6.eq) goto loc_82F0B3CC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0B3CC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,26180
	ctx.r8.s64 = ctx.r10.s64 + 26180;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,316
	ctx.r10.s64 = 316;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-4472
	ctx.r3.s64 = ctx.r9.s64 + -4472;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0B400"))) PPC_WEAK_FUNC(sub_82F0B400);
PPC_FUNC_IMPL(__imp__sub_82F0B400) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,20644
	ctx.r11.s64 = ctx.r11.s64 + 20644;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0b428
	if (!ctx.cr6.eq) goto loc_82F0B428;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0B428:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0b434
	if (ctx.cr6.eq) goto loc_82F0B434;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0B434:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,26200
	ctx.r8.s64 = ctx.r10.s64 + 26200;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,306
	ctx.r10.s64 = 306;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-4456
	ctx.r3.s64 = ctx.r9.s64 + -4456;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0B468"))) PPC_WEAK_FUNC(sub_82F0B468);
PPC_FUNC_IMPL(__imp__sub_82F0B468) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,20664
	ctx.r11.s64 = ctx.r11.s64 + 20664;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0b490
	if (!ctx.cr6.eq) goto loc_82F0B490;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0B490:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0b49c
	if (ctx.cr6.eq) goto loc_82F0B49C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0B49C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,26232
	ctx.r8.s64 = ctx.r10.s64 + 26232;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,334
	ctx.r10.s64 = 334;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-4440
	ctx.r3.s64 = ctx.r9.s64 + -4440;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0B4D0"))) PPC_WEAK_FUNC(sub_82F0B4D0);
PPC_FUNC_IMPL(__imp__sub_82F0B4D0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,20684
	ctx.r11.s64 = ctx.r11.s64 + 20684;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0b4f8
	if (!ctx.cr6.eq) goto loc_82F0B4F8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0B4F8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0b504
	if (ctx.cr6.eq) goto loc_82F0B504;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0B504:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,26248
	ctx.r8.s64 = ctx.r10.s64 + 26248;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,318
	ctx.r10.s64 = 318;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-4424
	ctx.r3.s64 = ctx.r9.s64 + -4424;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0B538"))) PPC_WEAK_FUNC(sub_82F0B538);
PPC_FUNC_IMPL(__imp__sub_82F0B538) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,20704
	ctx.r11.s64 = ctx.r11.s64 + 20704;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0b560
	if (!ctx.cr6.eq) goto loc_82F0B560;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0B560:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0b56c
	if (ctx.cr6.eq) goto loc_82F0B56C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0B56C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,26272
	ctx.r8.s64 = ctx.r10.s64 + 26272;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,317
	ctx.r10.s64 = 317;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-4408
	ctx.r3.s64 = ctx.r9.s64 + -4408;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0B5A0"))) PPC_WEAK_FUNC(sub_82F0B5A0);
PPC_FUNC_IMPL(__imp__sub_82F0B5A0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,20724
	ctx.r11.s64 = ctx.r11.s64 + 20724;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0b5c8
	if (!ctx.cr6.eq) goto loc_82F0B5C8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0B5C8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0b5d4
	if (ctx.cr6.eq) goto loc_82F0B5D4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0B5D4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,26296
	ctx.r8.s64 = ctx.r10.s64 + 26296;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,307
	ctx.r10.s64 = 307;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-4392
	ctx.r3.s64 = ctx.r9.s64 + -4392;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0B608"))) PPC_WEAK_FUNC(sub_82F0B608);
PPC_FUNC_IMPL(__imp__sub_82F0B608) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,20744
	ctx.r11.s64 = ctx.r11.s64 + 20744;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0b630
	if (!ctx.cr6.eq) goto loc_82F0B630;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0B630:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0b63c
	if (ctx.cr6.eq) goto loc_82F0B63C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0B63C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,26312
	ctx.r8.s64 = ctx.r10.s64 + 26312;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,335
	ctx.r10.s64 = 335;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-4376
	ctx.r3.s64 = ctx.r9.s64 + -4376;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0B670"))) PPC_WEAK_FUNC(sub_82F0B670);
PPC_FUNC_IMPL(__imp__sub_82F0B670) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,20764
	ctx.r11.s64 = ctx.r11.s64 + 20764;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0b698
	if (!ctx.cr6.eq) goto loc_82F0B698;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0B698:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0b6a4
	if (ctx.cr6.eq) goto loc_82F0B6A4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0B6A4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,26336
	ctx.r8.s64 = ctx.r10.s64 + 26336;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,319
	ctx.r10.s64 = 319;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-4360
	ctx.r3.s64 = ctx.r9.s64 + -4360;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0B6D8"))) PPC_WEAK_FUNC(sub_82F0B6D8);
PPC_FUNC_IMPL(__imp__sub_82F0B6D8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,20784
	ctx.r11.s64 = ctx.r11.s64 + 20784;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0b700
	if (!ctx.cr6.eq) goto loc_82F0B700;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0B700:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0b70c
	if (ctx.cr6.eq) goto loc_82F0B70C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0B70C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,26364
	ctx.r8.s64 = ctx.r10.s64 + 26364;
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
	// addi r3,r9,-4344
	ctx.r3.s64 = ctx.r9.s64 + -4344;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0B740"))) PPC_WEAK_FUNC(sub_82F0B740);
PPC_FUNC_IMPL(__imp__sub_82F0B740) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,20804
	ctx.r11.s64 = ctx.r11.s64 + 20804;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0b768
	if (!ctx.cr6.eq) goto loc_82F0B768;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0B768:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0b774
	if (ctx.cr6.eq) goto loc_82F0B774;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0B774:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22064
	ctx.r9.s64 = ctx.r9.s64 + 22064;
	// addi r8,r10,26384
	ctx.r8.s64 = ctx.r10.s64 + 26384;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,360
	ctx.r10.s64 = 360;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-4328
	ctx.r3.s64 = ctx.r9.s64 + -4328;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0B7A8"))) PPC_WEAK_FUNC(sub_82F0B7A8);
PPC_FUNC_IMPL(__imp__sub_82F0B7A8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,20824
	ctx.r11.s64 = ctx.r11.s64 + 20824;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0b7d0
	if (!ctx.cr6.eq) goto loc_82F0B7D0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0B7D0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0b7dc
	if (ctx.cr6.eq) goto loc_82F0B7DC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0B7DC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,26408
	ctx.r8.s64 = ctx.r10.s64 + 26408;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,323
	ctx.r10.s64 = 323;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-4312
	ctx.r3.s64 = ctx.r9.s64 + -4312;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0B810"))) PPC_WEAK_FUNC(sub_82F0B810);
PPC_FUNC_IMPL(__imp__sub_82F0B810) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,20844
	ctx.r11.s64 = ctx.r11.s64 + 20844;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0b838
	if (!ctx.cr6.eq) goto loc_82F0B838;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0B838:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0b844
	if (ctx.cr6.eq) goto loc_82F0B844;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0B844:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,26432
	ctx.r8.s64 = ctx.r10.s64 + 26432;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,361
	ctx.r10.s64 = 361;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-4296
	ctx.r3.s64 = ctx.r9.s64 + -4296;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0B878"))) PPC_WEAK_FUNC(sub_82F0B878);
PPC_FUNC_IMPL(__imp__sub_82F0B878) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,20864
	ctx.r11.s64 = ctx.r11.s64 + 20864;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0b8a0
	if (!ctx.cr6.eq) goto loc_82F0B8A0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0B8A0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0b8ac
	if (ctx.cr6.eq) goto loc_82F0B8AC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0B8AC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,26476
	ctx.r9.s64 = ctx.r9.s64 + 26476;
	// addi r8,r10,26460
	ctx.r8.s64 = ctx.r10.s64 + 26460;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,364
	ctx.r10.s64 = 364;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-4280
	ctx.r3.s64 = ctx.r9.s64 + -4280;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0B8E0"))) PPC_WEAK_FUNC(sub_82F0B8E0);
PPC_FUNC_IMPL(__imp__sub_82F0B8E0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,20884
	ctx.r11.s64 = ctx.r11.s64 + 20884;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0b908
	if (!ctx.cr6.eq) goto loc_82F0B908;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0B908:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0b914
	if (ctx.cr6.eq) goto loc_82F0B914;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0B914:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,26476
	ctx.r9.s64 = ctx.r9.s64 + 26476;
	// addi r8,r10,26496
	ctx.r8.s64 = ctx.r10.s64 + 26496;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,365
	ctx.r10.s64 = 365;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-4264
	ctx.r3.s64 = ctx.r9.s64 + -4264;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0B948"))) PPC_WEAK_FUNC(sub_82F0B948);
PPC_FUNC_IMPL(__imp__sub_82F0B948) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,20904
	ctx.r11.s64 = ctx.r11.s64 + 20904;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0b970
	if (!ctx.cr6.eq) goto loc_82F0B970;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0B970:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0b97c
	if (ctx.cr6.eq) goto loc_82F0B97C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0B97C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,26476
	ctx.r9.s64 = ctx.r9.s64 + 26476;
	// addi r8,r10,26512
	ctx.r8.s64 = ctx.r10.s64 + 26512;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,366
	ctx.r10.s64 = 366;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-4248
	ctx.r3.s64 = ctx.r9.s64 + -4248;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0B9B0"))) PPC_WEAK_FUNC(sub_82F0B9B0);
PPC_FUNC_IMPL(__imp__sub_82F0B9B0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,20924
	ctx.r11.s64 = ctx.r11.s64 + 20924;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0b9d8
	if (!ctx.cr6.eq) goto loc_82F0B9D8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0B9D8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0b9e4
	if (ctx.cr6.eq) goto loc_82F0B9E4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0B9E4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,26476
	ctx.r9.s64 = ctx.r9.s64 + 26476;
	// addi r8,r10,26528
	ctx.r8.s64 = ctx.r10.s64 + 26528;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,367
	ctx.r10.s64 = 367;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-4232
	ctx.r3.s64 = ctx.r9.s64 + -4232;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0BA18"))) PPC_WEAK_FUNC(sub_82F0BA18);
PPC_FUNC_IMPL(__imp__sub_82F0BA18) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,20944
	ctx.r11.s64 = ctx.r11.s64 + 20944;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0ba40
	if (!ctx.cr6.eq) goto loc_82F0BA40;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0BA40:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0ba4c
	if (ctx.cr6.eq) goto loc_82F0BA4C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0BA4C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,26476
	ctx.r9.s64 = ctx.r9.s64 + 26476;
	// addi r8,r10,26552
	ctx.r8.s64 = ctx.r10.s64 + 26552;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,369
	ctx.r10.s64 = 369;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-4216
	ctx.r3.s64 = ctx.r9.s64 + -4216;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0BA80"))) PPC_WEAK_FUNC(sub_82F0BA80);
PPC_FUNC_IMPL(__imp__sub_82F0BA80) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,20964
	ctx.r11.s64 = ctx.r11.s64 + 20964;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0baa8
	if (!ctx.cr6.eq) goto loc_82F0BAA8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0BAA8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0bab4
	if (ctx.cr6.eq) goto loc_82F0BAB4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0BAB4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,26476
	ctx.r9.s64 = ctx.r9.s64 + 26476;
	// addi r8,r10,26580
	ctx.r8.s64 = ctx.r10.s64 + 26580;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,368
	ctx.r10.s64 = 368;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-4200
	ctx.r3.s64 = ctx.r9.s64 + -4200;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0BAE8"))) PPC_WEAK_FUNC(sub_82F0BAE8);
PPC_FUNC_IMPL(__imp__sub_82F0BAE8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,20984
	ctx.r11.s64 = ctx.r11.s64 + 20984;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0bb10
	if (!ctx.cr6.eq) goto loc_82F0BB10;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0BB10:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0bb1c
	if (ctx.cr6.eq) goto loc_82F0BB1C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0BB1C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,26476
	ctx.r9.s64 = ctx.r9.s64 + 26476;
	// addi r8,r10,26596
	ctx.r8.s64 = ctx.r10.s64 + 26596;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,370
	ctx.r10.s64 = 370;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-4184
	ctx.r3.s64 = ctx.r9.s64 + -4184;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0BB50"))) PPC_WEAK_FUNC(sub_82F0BB50);
PPC_FUNC_IMPL(__imp__sub_82F0BB50) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,21004
	ctx.r11.s64 = ctx.r11.s64 + 21004;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0bb78
	if (!ctx.cr6.eq) goto loc_82F0BB78;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0BB78:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0bb84
	if (ctx.cr6.eq) goto loc_82F0BB84;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0BB84:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,26476
	ctx.r9.s64 = ctx.r9.s64 + 26476;
	// addi r8,r10,26612
	ctx.r8.s64 = ctx.r10.s64 + 26612;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,371
	ctx.r10.s64 = 371;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-4168
	ctx.r3.s64 = ctx.r9.s64 + -4168;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0BBB8"))) PPC_WEAK_FUNC(sub_82F0BBB8);
PPC_FUNC_IMPL(__imp__sub_82F0BBB8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,21024
	ctx.r11.s64 = ctx.r11.s64 + 21024;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0bbe0
	if (!ctx.cr6.eq) goto loc_82F0BBE0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0BBE0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0bbec
	if (ctx.cr6.eq) goto loc_82F0BBEC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0BBEC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,26476
	ctx.r9.s64 = ctx.r9.s64 + 26476;
	// addi r8,r10,26632
	ctx.r8.s64 = ctx.r10.s64 + 26632;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,372
	ctx.r10.s64 = 372;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-4152
	ctx.r3.s64 = ctx.r9.s64 + -4152;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0BC20"))) PPC_WEAK_FUNC(sub_82F0BC20);
PPC_FUNC_IMPL(__imp__sub_82F0BC20) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,21044
	ctx.r11.s64 = ctx.r11.s64 + 21044;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0bc48
	if (!ctx.cr6.eq) goto loc_82F0BC48;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0BC48:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0bc54
	if (ctx.cr6.eq) goto loc_82F0BC54;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0BC54:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,26476
	ctx.r9.s64 = ctx.r9.s64 + 26476;
	// addi r8,r10,26652
	ctx.r8.s64 = ctx.r10.s64 + 26652;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,373
	ctx.r10.s64 = 373;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-4136
	ctx.r3.s64 = ctx.r9.s64 + -4136;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0BC88"))) PPC_WEAK_FUNC(sub_82F0BC88);
PPC_FUNC_IMPL(__imp__sub_82F0BC88) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,21064
	ctx.r11.s64 = ctx.r11.s64 + 21064;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0bcb0
	if (!ctx.cr6.eq) goto loc_82F0BCB0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0BCB0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0bcbc
	if (ctx.cr6.eq) goto loc_82F0BCBC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0BCBC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,26476
	ctx.r9.s64 = ctx.r9.s64 + 26476;
	// addi r8,r10,26668
	ctx.r8.s64 = ctx.r10.s64 + 26668;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,374
	ctx.r10.s64 = 374;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-4120
	ctx.r3.s64 = ctx.r9.s64 + -4120;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0BCF0"))) PPC_WEAK_FUNC(sub_82F0BCF0);
PPC_FUNC_IMPL(__imp__sub_82F0BCF0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,21084
	ctx.r11.s64 = ctx.r11.s64 + 21084;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0bd18
	if (!ctx.cr6.eq) goto loc_82F0BD18;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0BD18:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0bd24
	if (ctx.cr6.eq) goto loc_82F0BD24;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0BD24:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,26476
	ctx.r9.s64 = ctx.r9.s64 + 26476;
	// addi r8,r10,26688
	ctx.r8.s64 = ctx.r10.s64 + 26688;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,375
	ctx.r10.s64 = 375;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-4104
	ctx.r3.s64 = ctx.r9.s64 + -4104;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0BD58"))) PPC_WEAK_FUNC(sub_82F0BD58);
PPC_FUNC_IMPL(__imp__sub_82F0BD58) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,21104
	ctx.r11.s64 = ctx.r11.s64 + 21104;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0bd80
	if (!ctx.cr6.eq) goto loc_82F0BD80;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0BD80:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0bd8c
	if (ctx.cr6.eq) goto loc_82F0BD8C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0BD8C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,26476
	ctx.r9.s64 = ctx.r9.s64 + 26476;
	// addi r8,r10,26704
	ctx.r8.s64 = ctx.r10.s64 + 26704;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,376
	ctx.r10.s64 = 376;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-4088
	ctx.r3.s64 = ctx.r9.s64 + -4088;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0BDC0"))) PPC_WEAK_FUNC(sub_82F0BDC0);
PPC_FUNC_IMPL(__imp__sub_82F0BDC0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,21124
	ctx.r11.s64 = ctx.r11.s64 + 21124;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0bde8
	if (!ctx.cr6.eq) goto loc_82F0BDE8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0BDE8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0bdf4
	if (ctx.cr6.eq) goto loc_82F0BDF4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0BDF4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,26476
	ctx.r9.s64 = ctx.r9.s64 + 26476;
	// addi r8,r10,26724
	ctx.r8.s64 = ctx.r10.s64 + 26724;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,377
	ctx.r10.s64 = 377;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-4072
	ctx.r3.s64 = ctx.r9.s64 + -4072;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0BE28"))) PPC_WEAK_FUNC(sub_82F0BE28);
PPC_FUNC_IMPL(__imp__sub_82F0BE28) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,21144
	ctx.r11.s64 = ctx.r11.s64 + 21144;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0be50
	if (!ctx.cr6.eq) goto loc_82F0BE50;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0BE50:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0be5c
	if (ctx.cr6.eq) goto loc_82F0BE5C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0BE5C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,26476
	ctx.r9.s64 = ctx.r9.s64 + 26476;
	// addi r8,r10,26748
	ctx.r8.s64 = ctx.r10.s64 + 26748;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,378
	ctx.r10.s64 = 378;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-4056
	ctx.r3.s64 = ctx.r9.s64 + -4056;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0BE90"))) PPC_WEAK_FUNC(sub_82F0BE90);
PPC_FUNC_IMPL(__imp__sub_82F0BE90) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,21164
	ctx.r11.s64 = ctx.r11.s64 + 21164;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0beb8
	if (!ctx.cr6.eq) goto loc_82F0BEB8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0BEB8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0bec4
	if (ctx.cr6.eq) goto loc_82F0BEC4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0BEC4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,26476
	ctx.r9.s64 = ctx.r9.s64 + 26476;
	// addi r8,r10,26772
	ctx.r8.s64 = ctx.r10.s64 + 26772;
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
	// addi r3,r9,-4040
	ctx.r3.s64 = ctx.r9.s64 + -4040;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0BEF8"))) PPC_WEAK_FUNC(sub_82F0BEF8);
PPC_FUNC_IMPL(__imp__sub_82F0BEF8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,21184
	ctx.r11.s64 = ctx.r11.s64 + 21184;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0bf20
	if (!ctx.cr6.eq) goto loc_82F0BF20;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0BF20:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0bf2c
	if (ctx.cr6.eq) goto loc_82F0BF2C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0BF2C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,22100
	ctx.r9.s64 = ctx.r9.s64 + 22100;
	// addi r8,r10,26772
	ctx.r8.s64 = ctx.r10.s64 + 26772;
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
	// addi r3,r9,-4024
	ctx.r3.s64 = ctx.r9.s64 + -4024;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0BF60"))) PPC_WEAK_FUNC(sub_82F0BF60);
PPC_FUNC_IMPL(__imp__sub_82F0BF60) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,21204
	ctx.r11.s64 = ctx.r11.s64 + 21204;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0bf88
	if (!ctx.cr6.eq) goto loc_82F0BF88;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0BF88:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0bf94
	if (ctx.cr6.eq) goto loc_82F0BF94;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0BF94:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,19544
	ctx.r9.s64 = ctx.r9.s64 + 19544;
	// addi r8,r10,21952
	ctx.r8.s64 = ctx.r10.s64 + 21952;
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
	// addi r3,r9,-4008
	ctx.r3.s64 = ctx.r9.s64 + -4008;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0BFC8"))) PPC_WEAK_FUNC(sub_82F0BFC8);
PPC_FUNC_IMPL(__imp__sub_82F0BFC8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,21224
	ctx.r11.s64 = ctx.r11.s64 + 21224;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0bff0
	if (!ctx.cr6.eq) goto loc_82F0BFF0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0BFF0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0bffc
	if (ctx.cr6.eq) goto loc_82F0BFFC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0BFFC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,19544
	ctx.r9.s64 = ctx.r9.s64 + 19544;
	// addi r8,r10,21964
	ctx.r8.s64 = ctx.r10.s64 + 21964;
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
	// addi r3,r9,-3992
	ctx.r3.s64 = ctx.r9.s64 + -3992;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0C030"))) PPC_WEAK_FUNC(sub_82F0C030);
PPC_FUNC_IMPL(__imp__sub_82F0C030) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,21244
	ctx.r11.s64 = ctx.r11.s64 + 21244;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0c058
	if (!ctx.cr6.eq) goto loc_82F0C058;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0C058:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0c064
	if (ctx.cr6.eq) goto loc_82F0C064;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0C064:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,19544
	ctx.r9.s64 = ctx.r9.s64 + 19544;
	// addi r8,r10,26784
	ctx.r8.s64 = ctx.r10.s64 + 26784;
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
	// addi r3,r9,-3976
	ctx.r3.s64 = ctx.r9.s64 + -3976;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0C098"))) PPC_WEAK_FUNC(sub_82F0C098);
PPC_FUNC_IMPL(__imp__sub_82F0C098) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,21264
	ctx.r11.s64 = ctx.r11.s64 + 21264;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0c0c0
	if (!ctx.cr6.eq) goto loc_82F0C0C0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0C0C0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0c0cc
	if (ctx.cr6.eq) goto loc_82F0C0CC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0C0CC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,19544
	ctx.r9.s64 = ctx.r9.s64 + 19544;
	// addi r8,r10,21940
	ctx.r8.s64 = ctx.r10.s64 + 21940;
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
	// addi r3,r9,-3960
	ctx.r3.s64 = ctx.r9.s64 + -3960;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0C100"))) PPC_WEAK_FUNC(sub_82F0C100);
PPC_FUNC_IMPL(__imp__sub_82F0C100) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,21284
	ctx.r11.s64 = ctx.r11.s64 + 21284;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0c128
	if (!ctx.cr6.eq) goto loc_82F0C128;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0C128:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0c134
	if (ctx.cr6.eq) goto loc_82F0C134;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0C134:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,19544
	ctx.r9.s64 = ctx.r9.s64 + 19544;
	// addi r8,r10,22000
	ctx.r8.s64 = ctx.r10.s64 + 22000;
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
	// addi r3,r9,-3944
	ctx.r3.s64 = ctx.r9.s64 + -3944;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0C168"))) PPC_WEAK_FUNC(sub_82F0C168);
PPC_FUNC_IMPL(__imp__sub_82F0C168) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,21304
	ctx.r11.s64 = ctx.r11.s64 + 21304;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0c190
	if (!ctx.cr6.eq) goto loc_82F0C190;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0C190:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0c19c
	if (ctx.cr6.eq) goto loc_82F0C19C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0C19C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r9,r9,19544
	ctx.r9.s64 = ctx.r9.s64 + 19544;
	// addi r8,r10,15834
	ctx.r8.s64 = ctx.r10.s64 + 15834;
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
	// addi r3,r9,-3928
	ctx.r3.s64 = ctx.r9.s64 + -3928;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0C1D0"))) PPC_WEAK_FUNC(sub_82F0C1D0);
PPC_FUNC_IMPL(__imp__sub_82F0C1D0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,21324
	ctx.r11.s64 = ctx.r11.s64 + 21324;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0c1f8
	if (!ctx.cr6.eq) goto loc_82F0C1F8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0C1F8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0c204
	if (ctx.cr6.eq) goto loc_82F0C204;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0C204:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,26808
	ctx.r9.s64 = ctx.r9.s64 + 26808;
	// addi r8,r10,26796
	ctx.r8.s64 = ctx.r10.s64 + 26796;
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
	// addi r3,r9,-3912
	ctx.r3.s64 = ctx.r9.s64 + -3912;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0C238"))) PPC_WEAK_FUNC(sub_82F0C238);
PPC_FUNC_IMPL(__imp__sub_82F0C238) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,21344
	ctx.r11.s64 = ctx.r11.s64 + 21344;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0c260
	if (!ctx.cr6.eq) goto loc_82F0C260;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0C260:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0c26c
	if (ctx.cr6.eq) goto loc_82F0C26C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0C26C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,26808
	ctx.r9.s64 = ctx.r9.s64 + 26808;
	// addi r8,r10,23212
	ctx.r8.s64 = ctx.r10.s64 + 23212;
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
	// addi r3,r9,-3896
	ctx.r3.s64 = ctx.r9.s64 + -3896;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0C2A0"))) PPC_WEAK_FUNC(sub_82F0C2A0);
PPC_FUNC_IMPL(__imp__sub_82F0C2A0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,21364
	ctx.r11.s64 = ctx.r11.s64 + 21364;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0c2c8
	if (!ctx.cr6.eq) goto loc_82F0C2C8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0C2C8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0c2d4
	if (ctx.cr6.eq) goto loc_82F0C2D4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0C2D4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,26808
	ctx.r9.s64 = ctx.r9.s64 + 26808;
	// addi r8,r10,23228
	ctx.r8.s64 = ctx.r10.s64 + 23228;
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
	// addi r3,r9,-3880
	ctx.r3.s64 = ctx.r9.s64 + -3880;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0C308"))) PPC_WEAK_FUNC(sub_82F0C308);
PPC_FUNC_IMPL(__imp__sub_82F0C308) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,21384
	ctx.r11.s64 = ctx.r11.s64 + 21384;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0c330
	if (!ctx.cr6.eq) goto loc_82F0C330;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0C330:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0c33c
	if (ctx.cr6.eq) goto loc_82F0C33C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0C33C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,26808
	ctx.r9.s64 = ctx.r9.s64 + 26808;
	// addi r8,r10,23244
	ctx.r8.s64 = ctx.r10.s64 + 23244;
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
	// addi r3,r9,-3864
	ctx.r3.s64 = ctx.r9.s64 + -3864;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0C370"))) PPC_WEAK_FUNC(sub_82F0C370);
PPC_FUNC_IMPL(__imp__sub_82F0C370) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,21404
	ctx.r11.s64 = ctx.r11.s64 + 21404;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0c398
	if (!ctx.cr6.eq) goto loc_82F0C398;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0C398:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0c3a4
	if (ctx.cr6.eq) goto loc_82F0C3A4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0C3A4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,26808
	ctx.r9.s64 = ctx.r9.s64 + 26808;
	// addi r8,r10,23924
	ctx.r8.s64 = ctx.r10.s64 + 23924;
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
	// addi r3,r9,-3848
	ctx.r3.s64 = ctx.r9.s64 + -3848;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0C3D8"))) PPC_WEAK_FUNC(sub_82F0C3D8);
PPC_FUNC_IMPL(__imp__sub_82F0C3D8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,21424
	ctx.r11.s64 = ctx.r11.s64 + 21424;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0c400
	if (!ctx.cr6.eq) goto loc_82F0C400;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0C400:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0c40c
	if (ctx.cr6.eq) goto loc_82F0C40C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0C40C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,26808
	ctx.r9.s64 = ctx.r9.s64 + 26808;
	// addi r8,r10,23940
	ctx.r8.s64 = ctx.r10.s64 + 23940;
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
	// addi r3,r9,-3832
	ctx.r3.s64 = ctx.r9.s64 + -3832;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0C440"))) PPC_WEAK_FUNC(sub_82F0C440);
PPC_FUNC_IMPL(__imp__sub_82F0C440) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,21444
	ctx.r11.s64 = ctx.r11.s64 + 21444;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0c468
	if (!ctx.cr6.eq) goto loc_82F0C468;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0C468:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0c474
	if (ctx.cr6.eq) goto loc_82F0C474;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0C474:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,26808
	ctx.r9.s64 = ctx.r9.s64 + 26808;
	// addi r8,r10,23952
	ctx.r8.s64 = ctx.r10.s64 + 23952;
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
	// addi r3,r9,-3816
	ctx.r3.s64 = ctx.r9.s64 + -3816;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0C4A8"))) PPC_WEAK_FUNC(sub_82F0C4A8);
PPC_FUNC_IMPL(__imp__sub_82F0C4A8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,21464
	ctx.r11.s64 = ctx.r11.s64 + 21464;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0c4d0
	if (!ctx.cr6.eq) goto loc_82F0C4D0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0C4D0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0c4dc
	if (ctx.cr6.eq) goto loc_82F0C4DC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0C4DC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,26808
	ctx.r9.s64 = ctx.r9.s64 + 26808;
	// addi r8,r10,24620
	ctx.r8.s64 = ctx.r10.s64 + 24620;
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
	// addi r3,r9,-3800
	ctx.r3.s64 = ctx.r9.s64 + -3800;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0C510"))) PPC_WEAK_FUNC(sub_82F0C510);
PPC_FUNC_IMPL(__imp__sub_82F0C510) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,21484
	ctx.r11.s64 = ctx.r11.s64 + 21484;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0c538
	if (!ctx.cr6.eq) goto loc_82F0C538;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0C538:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0c544
	if (ctx.cr6.eq) goto loc_82F0C544;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0C544:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,26808
	ctx.r9.s64 = ctx.r9.s64 + 26808;
	// addi r8,r10,24628
	ctx.r8.s64 = ctx.r10.s64 + 24628;
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
	// addi r3,r9,-3784
	ctx.r3.s64 = ctx.r9.s64 + -3784;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0C578"))) PPC_WEAK_FUNC(sub_82F0C578);
PPC_FUNC_IMPL(__imp__sub_82F0C578) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,21504
	ctx.r11.s64 = ctx.r11.s64 + 21504;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0c5a0
	if (!ctx.cr6.eq) goto loc_82F0C5A0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0C5A0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0c5ac
	if (ctx.cr6.eq) goto loc_82F0C5AC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0C5AC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,26808
	ctx.r9.s64 = ctx.r9.s64 + 26808;
	// addi r8,r10,24640
	ctx.r8.s64 = ctx.r10.s64 + 24640;
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
	// addi r3,r9,-3768
	ctx.r3.s64 = ctx.r9.s64 + -3768;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0C5E0"))) PPC_WEAK_FUNC(sub_82F0C5E0);
PPC_FUNC_IMPL(__imp__sub_82F0C5E0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,21524
	ctx.r11.s64 = ctx.r11.s64 + 21524;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0c608
	if (!ctx.cr6.eq) goto loc_82F0C608;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0C608:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0c614
	if (ctx.cr6.eq) goto loc_82F0C614;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0C614:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,26808
	ctx.r9.s64 = ctx.r9.s64 + 26808;
	// addi r8,r10,25344
	ctx.r8.s64 = ctx.r10.s64 + 25344;
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
	// addi r3,r9,-3752
	ctx.r3.s64 = ctx.r9.s64 + -3752;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0C648"))) PPC_WEAK_FUNC(sub_82F0C648);
PPC_FUNC_IMPL(__imp__sub_82F0C648) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,21544
	ctx.r11.s64 = ctx.r11.s64 + 21544;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0c670
	if (!ctx.cr6.eq) goto loc_82F0C670;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0C670:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0c67c
	if (ctx.cr6.eq) goto loc_82F0C67C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0C67C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,26808
	ctx.r9.s64 = ctx.r9.s64 + 26808;
	// addi r8,r10,25352
	ctx.r8.s64 = ctx.r10.s64 + 25352;
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
	// addi r3,r9,-3736
	ctx.r3.s64 = ctx.r9.s64 + -3736;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0C6B0"))) PPC_WEAK_FUNC(sub_82F0C6B0);
PPC_FUNC_IMPL(__imp__sub_82F0C6B0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,21564
	ctx.r11.s64 = ctx.r11.s64 + 21564;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0c6d8
	if (!ctx.cr6.eq) goto loc_82F0C6D8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0C6D8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0c6e4
	if (ctx.cr6.eq) goto loc_82F0C6E4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0C6E4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,26808
	ctx.r9.s64 = ctx.r9.s64 + 26808;
	// addi r8,r10,25364
	ctx.r8.s64 = ctx.r10.s64 + 25364;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,12
	ctx.r10.s64 = 12;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-3720
	ctx.r3.s64 = ctx.r9.s64 + -3720;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0C718"))) PPC_WEAK_FUNC(sub_82F0C718);
PPC_FUNC_IMPL(__imp__sub_82F0C718) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,21584
	ctx.r11.s64 = ctx.r11.s64 + 21584;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0c740
	if (!ctx.cr6.eq) goto loc_82F0C740;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0C740:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0c74c
	if (ctx.cr6.eq) goto loc_82F0C74C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0C74C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,26808
	ctx.r9.s64 = ctx.r9.s64 + 26808;
	// addi r8,r10,25796
	ctx.r8.s64 = ctx.r10.s64 + 25796;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,13
	ctx.r10.s64 = 13;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-3704
	ctx.r3.s64 = ctx.r9.s64 + -3704;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0C780"))) PPC_WEAK_FUNC(sub_82F0C780);
PPC_FUNC_IMPL(__imp__sub_82F0C780) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,21604
	ctx.r11.s64 = ctx.r11.s64 + 21604;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0c7a8
	if (!ctx.cr6.eq) goto loc_82F0C7A8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0C7A8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0c7b4
	if (ctx.cr6.eq) goto loc_82F0C7B4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0C7B4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,26808
	ctx.r9.s64 = ctx.r9.s64 + 26808;
	// addi r8,r10,25812
	ctx.r8.s64 = ctx.r10.s64 + 25812;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,14
	ctx.r10.s64 = 14;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-3688
	ctx.r3.s64 = ctx.r9.s64 + -3688;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0C7E8"))) PPC_WEAK_FUNC(sub_82F0C7E8);
PPC_FUNC_IMPL(__imp__sub_82F0C7E8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,21624
	ctx.r11.s64 = ctx.r11.s64 + 21624;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0c810
	if (!ctx.cr6.eq) goto loc_82F0C810;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0C810:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0c81c
	if (ctx.cr6.eq) goto loc_82F0C81C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0C81C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,26808
	ctx.r9.s64 = ctx.r9.s64 + 26808;
	// addi r8,r10,25832
	ctx.r8.s64 = ctx.r10.s64 + 25832;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,15
	ctx.r10.s64 = 15;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-3672
	ctx.r3.s64 = ctx.r9.s64 + -3672;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0C850"))) PPC_WEAK_FUNC(sub_82F0C850);
PPC_FUNC_IMPL(__imp__sub_82F0C850) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,21644
	ctx.r11.s64 = ctx.r11.s64 + 21644;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0c878
	if (!ctx.cr6.eq) goto loc_82F0C878;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0C878:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0c884
	if (ctx.cr6.eq) goto loc_82F0C884;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0C884:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,26808
	ctx.r9.s64 = ctx.r9.s64 + 26808;
	// addi r8,r10,25844
	ctx.r8.s64 = ctx.r10.s64 + 25844;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,16
	ctx.r10.s64 = 16;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-3656
	ctx.r3.s64 = ctx.r9.s64 + -3656;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0C8B8"))) PPC_WEAK_FUNC(sub_82F0C8B8);
PPC_FUNC_IMPL(__imp__sub_82F0C8B8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,21664
	ctx.r11.s64 = ctx.r11.s64 + 21664;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0c8e0
	if (!ctx.cr6.eq) goto loc_82F0C8E0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0C8E0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0c8ec
	if (ctx.cr6.eq) goto loc_82F0C8EC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0C8EC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,26808
	ctx.r9.s64 = ctx.r9.s64 + 26808;
	// addi r8,r10,25856
	ctx.r8.s64 = ctx.r10.s64 + 25856;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,17
	ctx.r10.s64 = 17;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-3640
	ctx.r3.s64 = ctx.r9.s64 + -3640;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0C920"))) PPC_WEAK_FUNC(sub_82F0C920);
PPC_FUNC_IMPL(__imp__sub_82F0C920) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,21684
	ctx.r11.s64 = ctx.r11.s64 + 21684;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0c948
	if (!ctx.cr6.eq) goto loc_82F0C948;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0C948:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0c954
	if (ctx.cr6.eq) goto loc_82F0C954;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0C954:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,26844
	ctx.r9.s64 = ctx.r9.s64 + 26844;
	// addi r8,r10,26824
	ctx.r8.s64 = ctx.r10.s64 + 26824;
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
	// addi r3,r9,-3624
	ctx.r3.s64 = ctx.r9.s64 + -3624;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0C988"))) PPC_WEAK_FUNC(sub_82F0C988);
PPC_FUNC_IMPL(__imp__sub_82F0C988) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,21704
	ctx.r11.s64 = ctx.r11.s64 + 21704;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0c9b0
	if (!ctx.cr6.eq) goto loc_82F0C9B0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0C9B0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0c9bc
	if (ctx.cr6.eq) goto loc_82F0C9BC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0C9BC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,26844
	ctx.r9.s64 = ctx.r9.s64 + 26844;
	// addi r8,r10,26860
	ctx.r8.s64 = ctx.r10.s64 + 26860;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,21
	ctx.r10.s64 = 21;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-3608
	ctx.r3.s64 = ctx.r9.s64 + -3608;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0C9F0"))) PPC_WEAK_FUNC(sub_82F0C9F0);
PPC_FUNC_IMPL(__imp__sub_82F0C9F0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,21724
	ctx.r11.s64 = ctx.r11.s64 + 21724;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0ca18
	if (!ctx.cr6.eq) goto loc_82F0CA18;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0CA18:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0ca24
	if (ctx.cr6.eq) goto loc_82F0CA24;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0CA24:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,26844
	ctx.r9.s64 = ctx.r9.s64 + 26844;
	// addi r8,r10,26868
	ctx.r8.s64 = ctx.r10.s64 + 26868;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,23
	ctx.r10.s64 = 23;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-3592
	ctx.r3.s64 = ctx.r9.s64 + -3592;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0CA58"))) PPC_WEAK_FUNC(sub_82F0CA58);
PPC_FUNC_IMPL(__imp__sub_82F0CA58) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,21744
	ctx.r11.s64 = ctx.r11.s64 + 21744;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0ca80
	if (!ctx.cr6.eq) goto loc_82F0CA80;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0CA80:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0ca8c
	if (ctx.cr6.eq) goto loc_82F0CA8C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0CA8C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,26844
	ctx.r9.s64 = ctx.r9.s64 + 26844;
	// addi r8,r10,26880
	ctx.r8.s64 = ctx.r10.s64 + 26880;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,22
	ctx.r10.s64 = 22;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-3576
	ctx.r3.s64 = ctx.r9.s64 + -3576;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0CAC0"))) PPC_WEAK_FUNC(sub_82F0CAC0);
PPC_FUNC_IMPL(__imp__sub_82F0CAC0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,21764
	ctx.r11.s64 = ctx.r11.s64 + 21764;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0cae8
	if (!ctx.cr6.eq) goto loc_82F0CAE8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0CAE8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0caf4
	if (ctx.cr6.eq) goto loc_82F0CAF4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0CAF4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,26844
	ctx.r9.s64 = ctx.r9.s64 + 26844;
	// addi r8,r10,26884
	ctx.r8.s64 = ctx.r10.s64 + 26884;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,26
	ctx.r10.s64 = 26;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-3560
	ctx.r3.s64 = ctx.r9.s64 + -3560;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0CB28"))) PPC_WEAK_FUNC(sub_82F0CB28);
PPC_FUNC_IMPL(__imp__sub_82F0CB28) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,21784
	ctx.r11.s64 = ctx.r11.s64 + 21784;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0cb50
	if (!ctx.cr6.eq) goto loc_82F0CB50;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0CB50:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0cb5c
	if (ctx.cr6.eq) goto loc_82F0CB5C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0CB5C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,26844
	ctx.r9.s64 = ctx.r9.s64 + 26844;
	// addi r8,r10,26896
	ctx.r8.s64 = ctx.r10.s64 + 26896;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,25
	ctx.r10.s64 = 25;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-3544
	ctx.r3.s64 = ctx.r9.s64 + -3544;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0CB90"))) PPC_WEAK_FUNC(sub_82F0CB90);
PPC_FUNC_IMPL(__imp__sub_82F0CB90) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,21804
	ctx.r11.s64 = ctx.r11.s64 + 21804;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0cbb8
	if (!ctx.cr6.eq) goto loc_82F0CBB8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0CBB8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0cbc4
	if (ctx.cr6.eq) goto loc_82F0CBC4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0CBC4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,26844
	ctx.r9.s64 = ctx.r9.s64 + 26844;
	// addi r8,r10,26908
	ctx.r8.s64 = ctx.r10.s64 + 26908;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,28
	ctx.r10.s64 = 28;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-3528
	ctx.r3.s64 = ctx.r9.s64 + -3528;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0CBF8"))) PPC_WEAK_FUNC(sub_82F0CBF8);
PPC_FUNC_IMPL(__imp__sub_82F0CBF8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,21824
	ctx.r11.s64 = ctx.r11.s64 + 21824;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0cc20
	if (!ctx.cr6.eq) goto loc_82F0CC20;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0CC20:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0cc2c
	if (ctx.cr6.eq) goto loc_82F0CC2C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0CC2C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,26928
	ctx.r9.s64 = ctx.r9.s64 + 26928;
	// addi r8,r10,26916
	ctx.r8.s64 = ctx.r10.s64 + 26916;
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
	// addi r3,r9,-3512
	ctx.r3.s64 = ctx.r9.s64 + -3512;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0CC60"))) PPC_WEAK_FUNC(sub_82F0CC60);
PPC_FUNC_IMPL(__imp__sub_82F0CC60) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,21844
	ctx.r11.s64 = ctx.r11.s64 + 21844;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0cc88
	if (!ctx.cr6.eq) goto loc_82F0CC88;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0CC88:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0cc94
	if (ctx.cr6.eq) goto loc_82F0CC94;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0CC94:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,26948
	ctx.r9.s64 = ctx.r9.s64 + 26948;
	// addi r8,r10,26940
	ctx.r8.s64 = ctx.r10.s64 + 26940;
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
	// addi r3,r9,-3496
	ctx.r3.s64 = ctx.r9.s64 + -3496;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0CCC8"))) PPC_WEAK_FUNC(sub_82F0CCC8);
PPC_FUNC_IMPL(__imp__sub_82F0CCC8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,21864
	ctx.r11.s64 = ctx.r11.s64 + 21864;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0ccf0
	if (!ctx.cr6.eq) goto loc_82F0CCF0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0CCF0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0ccfc
	if (ctx.cr6.eq) goto loc_82F0CCFC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0CCFC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,26948
	ctx.r9.s64 = ctx.r9.s64 + 26948;
	// addi r8,r10,26964
	ctx.r8.s64 = ctx.r10.s64 + 26964;
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
	// addi r3,r9,-3480
	ctx.r3.s64 = ctx.r9.s64 + -3480;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0CD30"))) PPC_WEAK_FUNC(sub_82F0CD30);
PPC_FUNC_IMPL(__imp__sub_82F0CD30) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,21884
	ctx.r11.s64 = ctx.r11.s64 + 21884;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0cd58
	if (!ctx.cr6.eq) goto loc_82F0CD58;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0CD58:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0cd64
	if (ctx.cr6.eq) goto loc_82F0CD64;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0CD64:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,26948
	ctx.r9.s64 = ctx.r9.s64 + 26948;
	// addi r8,r10,26972
	ctx.r8.s64 = ctx.r10.s64 + 26972;
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
	// addi r3,r9,-3464
	ctx.r3.s64 = ctx.r9.s64 + -3464;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0CD98"))) PPC_WEAK_FUNC(sub_82F0CD98);
PPC_FUNC_IMPL(__imp__sub_82F0CD98) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,21904
	ctx.r11.s64 = ctx.r11.s64 + 21904;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0cdc0
	if (!ctx.cr6.eq) goto loc_82F0CDC0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0CDC0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0cdcc
	if (ctx.cr6.eq) goto loc_82F0CDCC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0CDCC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,26948
	ctx.r9.s64 = ctx.r9.s64 + 26948;
	// addi r8,r10,26984
	ctx.r8.s64 = ctx.r10.s64 + 26984;
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
	// addi r3,r9,-3448
	ctx.r3.s64 = ctx.r9.s64 + -3448;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0CE00"))) PPC_WEAK_FUNC(sub_82F0CE00);
PPC_FUNC_IMPL(__imp__sub_82F0CE00) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,21924
	ctx.r11.s64 = ctx.r11.s64 + 21924;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0ce28
	if (!ctx.cr6.eq) goto loc_82F0CE28;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0CE28:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0ce34
	if (ctx.cr6.eq) goto loc_82F0CE34;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0CE34:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,26948
	ctx.r9.s64 = ctx.r9.s64 + 26948;
	// addi r8,r10,26996
	ctx.r8.s64 = ctx.r10.s64 + 26996;
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
	// addi r3,r9,-3432
	ctx.r3.s64 = ctx.r9.s64 + -3432;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0CE68"))) PPC_WEAK_FUNC(sub_82F0CE68);
PPC_FUNC_IMPL(__imp__sub_82F0CE68) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,21944
	ctx.r11.s64 = ctx.r11.s64 + 21944;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0ce90
	if (!ctx.cr6.eq) goto loc_82F0CE90;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0CE90:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0ce9c
	if (ctx.cr6.eq) goto loc_82F0CE9C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0CE9C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,26948
	ctx.r9.s64 = ctx.r9.s64 + 26948;
	// addi r8,r10,27008
	ctx.r8.s64 = ctx.r10.s64 + 27008;
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
	// addi r3,r9,-3416
	ctx.r3.s64 = ctx.r9.s64 + -3416;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0CED0"))) PPC_WEAK_FUNC(sub_82F0CED0);
PPC_FUNC_IMPL(__imp__sub_82F0CED0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,21964
	ctx.r11.s64 = ctx.r11.s64 + 21964;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0cef8
	if (!ctx.cr6.eq) goto loc_82F0CEF8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0CEF8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0cf04
	if (ctx.cr6.eq) goto loc_82F0CF04;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0CF04:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,26948
	ctx.r9.s64 = ctx.r9.s64 + 26948;
	// addi r8,r10,27020
	ctx.r8.s64 = ctx.r10.s64 + 27020;
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
	// addi r3,r9,-3400
	ctx.r3.s64 = ctx.r9.s64 + -3400;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0CF38"))) PPC_WEAK_FUNC(sub_82F0CF38);
PPC_FUNC_IMPL(__imp__sub_82F0CF38) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,21984
	ctx.r11.s64 = ctx.r11.s64 + 21984;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0cf60
	if (!ctx.cr6.eq) goto loc_82F0CF60;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0CF60:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0cf6c
	if (ctx.cr6.eq) goto loc_82F0CF6C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0CF6C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,26948
	ctx.r9.s64 = ctx.r9.s64 + 26948;
	// addi r8,r10,27036
	ctx.r8.s64 = ctx.r10.s64 + 27036;
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
	// addi r3,r9,-3384
	ctx.r3.s64 = ctx.r9.s64 + -3384;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0CFA0"))) PPC_WEAK_FUNC(sub_82F0CFA0);
PPC_FUNC_IMPL(__imp__sub_82F0CFA0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,22004
	ctx.r11.s64 = ctx.r11.s64 + 22004;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0cfc8
	if (!ctx.cr6.eq) goto loc_82F0CFC8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0CFC8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0cfd4
	if (ctx.cr6.eq) goto loc_82F0CFD4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0CFD4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,26948
	ctx.r9.s64 = ctx.r9.s64 + 26948;
	// addi r8,r10,27052
	ctx.r8.s64 = ctx.r10.s64 + 27052;
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
	// addi r3,r9,-3368
	ctx.r3.s64 = ctx.r9.s64 + -3368;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0D008"))) PPC_WEAK_FUNC(sub_82F0D008);
PPC_FUNC_IMPL(__imp__sub_82F0D008) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,22024
	ctx.r11.s64 = ctx.r11.s64 + 22024;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0d030
	if (!ctx.cr6.eq) goto loc_82F0D030;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0D030:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0d03c
	if (ctx.cr6.eq) goto loc_82F0D03C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0D03C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,26948
	ctx.r9.s64 = ctx.r9.s64 + 26948;
	// addi r8,r10,27068
	ctx.r8.s64 = ctx.r10.s64 + 27068;
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
	// addi r3,r9,-3352
	ctx.r3.s64 = ctx.r9.s64 + -3352;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0D070"))) PPC_WEAK_FUNC(sub_82F0D070);
PPC_FUNC_IMPL(__imp__sub_82F0D070) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,22044
	ctx.r11.s64 = ctx.r11.s64 + 22044;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0d098
	if (!ctx.cr6.eq) goto loc_82F0D098;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0D098:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0d0a4
	if (ctx.cr6.eq) goto loc_82F0D0A4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0D0A4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,26948
	ctx.r9.s64 = ctx.r9.s64 + 26948;
	// addi r8,r10,27088
	ctx.r8.s64 = ctx.r10.s64 + 27088;
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
	// addi r3,r9,-3336
	ctx.r3.s64 = ctx.r9.s64 + -3336;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0D0D8"))) PPC_WEAK_FUNC(sub_82F0D0D8);
PPC_FUNC_IMPL(__imp__sub_82F0D0D8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,22064
	ctx.r11.s64 = ctx.r11.s64 + 22064;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0d100
	if (!ctx.cr6.eq) goto loc_82F0D100;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0D100:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0d10c
	if (ctx.cr6.eq) goto loc_82F0D10C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0D10C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,26948
	ctx.r9.s64 = ctx.r9.s64 + 26948;
	// addi r8,r10,27108
	ctx.r8.s64 = ctx.r10.s64 + 27108;
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
	// addi r3,r9,-3320
	ctx.r3.s64 = ctx.r9.s64 + -3320;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0D140"))) PPC_WEAK_FUNC(sub_82F0D140);
PPC_FUNC_IMPL(__imp__sub_82F0D140) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,22084
	ctx.r11.s64 = ctx.r11.s64 + 22084;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0d168
	if (!ctx.cr6.eq) goto loc_82F0D168;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0D168:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0d174
	if (ctx.cr6.eq) goto loc_82F0D174;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0D174:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,26948
	ctx.r9.s64 = ctx.r9.s64 + 26948;
	// addi r8,r10,27128
	ctx.r8.s64 = ctx.r10.s64 + 27128;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,12
	ctx.r10.s64 = 12;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-3304
	ctx.r3.s64 = ctx.r9.s64 + -3304;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0D1A8"))) PPC_WEAK_FUNC(sub_82F0D1A8);
PPC_FUNC_IMPL(__imp__sub_82F0D1A8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,22104
	ctx.r11.s64 = ctx.r11.s64 + 22104;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0d1d0
	if (!ctx.cr6.eq) goto loc_82F0D1D0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0D1D0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0d1dc
	if (ctx.cr6.eq) goto loc_82F0D1DC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0D1DC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,26948
	ctx.r9.s64 = ctx.r9.s64 + 26948;
	// addi r8,r10,27148
	ctx.r8.s64 = ctx.r10.s64 + 27148;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,13
	ctx.r10.s64 = 13;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-3288
	ctx.r3.s64 = ctx.r9.s64 + -3288;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0D210"))) PPC_WEAK_FUNC(sub_82F0D210);
PPC_FUNC_IMPL(__imp__sub_82F0D210) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,22124
	ctx.r11.s64 = ctx.r11.s64 + 22124;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0d238
	if (!ctx.cr6.eq) goto loc_82F0D238;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0D238:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0d244
	if (ctx.cr6.eq) goto loc_82F0D244;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0D244:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,26948
	ctx.r9.s64 = ctx.r9.s64 + 26948;
	// addi r8,r10,27168
	ctx.r8.s64 = ctx.r10.s64 + 27168;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,14
	ctx.r10.s64 = 14;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-3272
	ctx.r3.s64 = ctx.r9.s64 + -3272;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0D278"))) PPC_WEAK_FUNC(sub_82F0D278);
PPC_FUNC_IMPL(__imp__sub_82F0D278) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,22144
	ctx.r11.s64 = ctx.r11.s64 + 22144;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0d2a0
	if (!ctx.cr6.eq) goto loc_82F0D2A0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0D2A0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0d2ac
	if (ctx.cr6.eq) goto loc_82F0D2AC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0D2AC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,26948
	ctx.r9.s64 = ctx.r9.s64 + 26948;
	// addi r8,r10,27188
	ctx.r8.s64 = ctx.r10.s64 + 27188;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,15
	ctx.r10.s64 = 15;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-3256
	ctx.r3.s64 = ctx.r9.s64 + -3256;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0D2E0"))) PPC_WEAK_FUNC(sub_82F0D2E0);
PPC_FUNC_IMPL(__imp__sub_82F0D2E0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,22164
	ctx.r11.s64 = ctx.r11.s64 + 22164;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0d308
	if (!ctx.cr6.eq) goto loc_82F0D308;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0D308:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0d314
	if (ctx.cr6.eq) goto loc_82F0D314;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0D314:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,26948
	ctx.r9.s64 = ctx.r9.s64 + 26948;
	// addi r8,r10,27208
	ctx.r8.s64 = ctx.r10.s64 + 27208;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,16
	ctx.r10.s64 = 16;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-3240
	ctx.r3.s64 = ctx.r9.s64 + -3240;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0D348"))) PPC_WEAK_FUNC(sub_82F0D348);
PPC_FUNC_IMPL(__imp__sub_82F0D348) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,22184
	ctx.r11.s64 = ctx.r11.s64 + 22184;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0d370
	if (!ctx.cr6.eq) goto loc_82F0D370;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0D370:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0d37c
	if (ctx.cr6.eq) goto loc_82F0D37C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0D37C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,26948
	ctx.r9.s64 = ctx.r9.s64 + 26948;
	// addi r8,r10,27232
	ctx.r8.s64 = ctx.r10.s64 + 27232;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,17
	ctx.r10.s64 = 17;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-3224
	ctx.r3.s64 = ctx.r9.s64 + -3224;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0D3B0"))) PPC_WEAK_FUNC(sub_82F0D3B0);
PPC_FUNC_IMPL(__imp__sub_82F0D3B0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,22204
	ctx.r11.s64 = ctx.r11.s64 + 22204;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0d3d8
	if (!ctx.cr6.eq) goto loc_82F0D3D8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0D3D8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0d3e4
	if (ctx.cr6.eq) goto loc_82F0D3E4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0D3E4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,26948
	ctx.r9.s64 = ctx.r9.s64 + 26948;
	// addi r8,r10,27252
	ctx.r8.s64 = ctx.r10.s64 + 27252;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,18
	ctx.r10.s64 = 18;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-3208
	ctx.r3.s64 = ctx.r9.s64 + -3208;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0D418"))) PPC_WEAK_FUNC(sub_82F0D418);
PPC_FUNC_IMPL(__imp__sub_82F0D418) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,22224
	ctx.r11.s64 = ctx.r11.s64 + 22224;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0d440
	if (!ctx.cr6.eq) goto loc_82F0D440;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0D440:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0d44c
	if (ctx.cr6.eq) goto loc_82F0D44C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0D44C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,26948
	ctx.r9.s64 = ctx.r9.s64 + 26948;
	// addi r8,r10,27272
	ctx.r8.s64 = ctx.r10.s64 + 27272;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,19
	ctx.r10.s64 = 19;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-3192
	ctx.r3.s64 = ctx.r9.s64 + -3192;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0D480"))) PPC_WEAK_FUNC(sub_82F0D480);
PPC_FUNC_IMPL(__imp__sub_82F0D480) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,22244
	ctx.r11.s64 = ctx.r11.s64 + 22244;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0d4a8
	if (!ctx.cr6.eq) goto loc_82F0D4A8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0D4A8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0d4b4
	if (ctx.cr6.eq) goto loc_82F0D4B4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0D4B4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,26948
	ctx.r9.s64 = ctx.r9.s64 + 26948;
	// addi r8,r10,27292
	ctx.r8.s64 = ctx.r10.s64 + 27292;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,20
	ctx.r10.s64 = 20;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-3176
	ctx.r3.s64 = ctx.r9.s64 + -3176;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0D4E8"))) PPC_WEAK_FUNC(sub_82F0D4E8);
PPC_FUNC_IMPL(__imp__sub_82F0D4E8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,22264
	ctx.r11.s64 = ctx.r11.s64 + 22264;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0d510
	if (!ctx.cr6.eq) goto loc_82F0D510;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0D510:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0d51c
	if (ctx.cr6.eq) goto loc_82F0D51C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0D51C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,27316
	ctx.r8.s64 = ctx.r10.s64 + 27316;
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
	// addi r3,r9,-3160
	ctx.r3.s64 = ctx.r9.s64 + -3160;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0D550"))) PPC_WEAK_FUNC(sub_82F0D550);
PPC_FUNC_IMPL(__imp__sub_82F0D550) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,22284
	ctx.r11.s64 = ctx.r11.s64 + 22284;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0d578
	if (!ctx.cr6.eq) goto loc_82F0D578;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0D578:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0d584
	if (ctx.cr6.eq) goto loc_82F0D584;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0D584:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,27348
	ctx.r8.s64 = ctx.r10.s64 + 27348;
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
	// addi r3,r9,-3144
	ctx.r3.s64 = ctx.r9.s64 + -3144;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0D5B8"))) PPC_WEAK_FUNC(sub_82F0D5B8);
PPC_FUNC_IMPL(__imp__sub_82F0D5B8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,22304
	ctx.r11.s64 = ctx.r11.s64 + 22304;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0d5e0
	if (!ctx.cr6.eq) goto loc_82F0D5E0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0D5E0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0d5ec
	if (ctx.cr6.eq) goto loc_82F0D5EC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0D5EC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,27364
	ctx.r8.s64 = ctx.r10.s64 + 27364;
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
	// addi r3,r9,-3128
	ctx.r3.s64 = ctx.r9.s64 + -3128;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0D620"))) PPC_WEAK_FUNC(sub_82F0D620);
PPC_FUNC_IMPL(__imp__sub_82F0D620) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,22324
	ctx.r11.s64 = ctx.r11.s64 + 22324;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0d648
	if (!ctx.cr6.eq) goto loc_82F0D648;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0D648:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0d654
	if (ctx.cr6.eq) goto loc_82F0D654;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0D654:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,27380
	ctx.r8.s64 = ctx.r10.s64 + 27380;
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
	// addi r3,r9,-3112
	ctx.r3.s64 = ctx.r9.s64 + -3112;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0D688"))) PPC_WEAK_FUNC(sub_82F0D688);
PPC_FUNC_IMPL(__imp__sub_82F0D688) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,22344
	ctx.r11.s64 = ctx.r11.s64 + 22344;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0d6b0
	if (!ctx.cr6.eq) goto loc_82F0D6B0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0D6B0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0d6bc
	if (ctx.cr6.eq) goto loc_82F0D6BC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0D6BC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,27388
	ctx.r8.s64 = ctx.r10.s64 + 27388;
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
	// addi r3,r9,-3096
	ctx.r3.s64 = ctx.r9.s64 + -3096;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0D6F0"))) PPC_WEAK_FUNC(sub_82F0D6F0);
PPC_FUNC_IMPL(__imp__sub_82F0D6F0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,22364
	ctx.r11.s64 = ctx.r11.s64 + 22364;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0d718
	if (!ctx.cr6.eq) goto loc_82F0D718;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0D718:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0d724
	if (ctx.cr6.eq) goto loc_82F0D724;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0D724:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,27408
	ctx.r8.s64 = ctx.r10.s64 + 27408;
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
	// addi r3,r9,-3080
	ctx.r3.s64 = ctx.r9.s64 + -3080;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0D758"))) PPC_WEAK_FUNC(sub_82F0D758);
PPC_FUNC_IMPL(__imp__sub_82F0D758) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,22384
	ctx.r11.s64 = ctx.r11.s64 + 22384;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0d780
	if (!ctx.cr6.eq) goto loc_82F0D780;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0D780:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0d78c
	if (ctx.cr6.eq) goto loc_82F0D78C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0D78C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,27436
	ctx.r8.s64 = ctx.r10.s64 + 27436;
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
	// addi r3,r9,-3064
	ctx.r3.s64 = ctx.r9.s64 + -3064;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0D7C0"))) PPC_WEAK_FUNC(sub_82F0D7C0);
PPC_FUNC_IMPL(__imp__sub_82F0D7C0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,22404
	ctx.r11.s64 = ctx.r11.s64 + 22404;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0d7e8
	if (!ctx.cr6.eq) goto loc_82F0D7E8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0D7E8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0d7f4
	if (ctx.cr6.eq) goto loc_82F0D7F4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0D7F4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,27452
	ctx.r8.s64 = ctx.r10.s64 + 27452;
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
	// addi r3,r9,-3048
	ctx.r3.s64 = ctx.r9.s64 + -3048;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0D828"))) PPC_WEAK_FUNC(sub_82F0D828);
PPC_FUNC_IMPL(__imp__sub_82F0D828) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,22424
	ctx.r11.s64 = ctx.r11.s64 + 22424;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0d850
	if (!ctx.cr6.eq) goto loc_82F0D850;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0D850:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0d85c
	if (ctx.cr6.eq) goto loc_82F0D85C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0D85C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,27472
	ctx.r8.s64 = ctx.r10.s64 + 27472;
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
	// addi r3,r9,-3032
	ctx.r3.s64 = ctx.r9.s64 + -3032;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0D890"))) PPC_WEAK_FUNC(sub_82F0D890);
PPC_FUNC_IMPL(__imp__sub_82F0D890) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,22444
	ctx.r11.s64 = ctx.r11.s64 + 22444;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0d8b8
	if (!ctx.cr6.eq) goto loc_82F0D8B8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0D8B8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0d8c4
	if (ctx.cr6.eq) goto loc_82F0D8C4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0D8C4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,27488
	ctx.r8.s64 = ctx.r10.s64 + 27488;
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
	// addi r3,r9,-3016
	ctx.r3.s64 = ctx.r9.s64 + -3016;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0D8F8"))) PPC_WEAK_FUNC(sub_82F0D8F8);
PPC_FUNC_IMPL(__imp__sub_82F0D8F8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,22464
	ctx.r11.s64 = ctx.r11.s64 + 22464;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0d920
	if (!ctx.cr6.eq) goto loc_82F0D920;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0D920:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0d92c
	if (ctx.cr6.eq) goto loc_82F0D92C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0D92C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,27508
	ctx.r8.s64 = ctx.r10.s64 + 27508;
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
	// addi r3,r9,-3000
	ctx.r3.s64 = ctx.r9.s64 + -3000;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0D960"))) PPC_WEAK_FUNC(sub_82F0D960);
PPC_FUNC_IMPL(__imp__sub_82F0D960) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,22484
	ctx.r11.s64 = ctx.r11.s64 + 22484;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0d988
	if (!ctx.cr6.eq) goto loc_82F0D988;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0D988:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0d994
	if (ctx.cr6.eq) goto loc_82F0D994;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0D994:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,27536
	ctx.r8.s64 = ctx.r10.s64 + 27536;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,12
	ctx.r10.s64 = 12;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-2984
	ctx.r3.s64 = ctx.r9.s64 + -2984;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0D9C8"))) PPC_WEAK_FUNC(sub_82F0D9C8);
PPC_FUNC_IMPL(__imp__sub_82F0D9C8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,22504
	ctx.r11.s64 = ctx.r11.s64 + 22504;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0d9f0
	if (!ctx.cr6.eq) goto loc_82F0D9F0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0D9F0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0d9fc
	if (ctx.cr6.eq) goto loc_82F0D9FC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0D9FC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,27552
	ctx.r8.s64 = ctx.r10.s64 + 27552;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,13
	ctx.r10.s64 = 13;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-2968
	ctx.r3.s64 = ctx.r9.s64 + -2968;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0DA30"))) PPC_WEAK_FUNC(sub_82F0DA30);
PPC_FUNC_IMPL(__imp__sub_82F0DA30) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,22524
	ctx.r11.s64 = ctx.r11.s64 + 22524;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0da58
	if (!ctx.cr6.eq) goto loc_82F0DA58;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0DA58:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0da64
	if (ctx.cr6.eq) goto loc_82F0DA64;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0DA64:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,27568
	ctx.r8.s64 = ctx.r10.s64 + 27568;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,14
	ctx.r10.s64 = 14;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-2952
	ctx.r3.s64 = ctx.r9.s64 + -2952;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0DA98"))) PPC_WEAK_FUNC(sub_82F0DA98);
PPC_FUNC_IMPL(__imp__sub_82F0DA98) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,22544
	ctx.r11.s64 = ctx.r11.s64 + 22544;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0dac0
	if (!ctx.cr6.eq) goto loc_82F0DAC0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0DAC0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0dacc
	if (ctx.cr6.eq) goto loc_82F0DACC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0DACC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,27584
	ctx.r8.s64 = ctx.r10.s64 + 27584;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,15
	ctx.r10.s64 = 15;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-2936
	ctx.r3.s64 = ctx.r9.s64 + -2936;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0DB00"))) PPC_WEAK_FUNC(sub_82F0DB00);
PPC_FUNC_IMPL(__imp__sub_82F0DB00) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,22564
	ctx.r11.s64 = ctx.r11.s64 + 22564;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0db28
	if (!ctx.cr6.eq) goto loc_82F0DB28;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0DB28:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0db34
	if (ctx.cr6.eq) goto loc_82F0DB34;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0DB34:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,27604
	ctx.r8.s64 = ctx.r10.s64 + 27604;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,16
	ctx.r10.s64 = 16;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-2920
	ctx.r3.s64 = ctx.r9.s64 + -2920;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0DB68"))) PPC_WEAK_FUNC(sub_82F0DB68);
PPC_FUNC_IMPL(__imp__sub_82F0DB68) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,22584
	ctx.r11.s64 = ctx.r11.s64 + 22584;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0db90
	if (!ctx.cr6.eq) goto loc_82F0DB90;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0DB90:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0db9c
	if (ctx.cr6.eq) goto loc_82F0DB9C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0DB9C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,27624
	ctx.r8.s64 = ctx.r10.s64 + 27624;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,17
	ctx.r10.s64 = 17;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-2904
	ctx.r3.s64 = ctx.r9.s64 + -2904;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0DBD0"))) PPC_WEAK_FUNC(sub_82F0DBD0);
PPC_FUNC_IMPL(__imp__sub_82F0DBD0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,22604
	ctx.r11.s64 = ctx.r11.s64 + 22604;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0dbf8
	if (!ctx.cr6.eq) goto loc_82F0DBF8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0DBF8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0dc04
	if (ctx.cr6.eq) goto loc_82F0DC04;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0DC04:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,27640
	ctx.r8.s64 = ctx.r10.s64 + 27640;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,18
	ctx.r10.s64 = 18;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-2888
	ctx.r3.s64 = ctx.r9.s64 + -2888;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0DC38"))) PPC_WEAK_FUNC(sub_82F0DC38);
PPC_FUNC_IMPL(__imp__sub_82F0DC38) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,22624
	ctx.r11.s64 = ctx.r11.s64 + 22624;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0dc60
	if (!ctx.cr6.eq) goto loc_82F0DC60;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0DC60:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0dc6c
	if (ctx.cr6.eq) goto loc_82F0DC6C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0DC6C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,27652
	ctx.r8.s64 = ctx.r10.s64 + 27652;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,19
	ctx.r10.s64 = 19;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-2872
	ctx.r3.s64 = ctx.r9.s64 + -2872;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0DCA0"))) PPC_WEAK_FUNC(sub_82F0DCA0);
PPC_FUNC_IMPL(__imp__sub_82F0DCA0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,22644
	ctx.r11.s64 = ctx.r11.s64 + 22644;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0dcc8
	if (!ctx.cr6.eq) goto loc_82F0DCC8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0DCC8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0dcd4
	if (ctx.cr6.eq) goto loc_82F0DCD4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0DCD4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,27668
	ctx.r8.s64 = ctx.r10.s64 + 27668;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,20
	ctx.r10.s64 = 20;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-2856
	ctx.r3.s64 = ctx.r9.s64 + -2856;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0DD08"))) PPC_WEAK_FUNC(sub_82F0DD08);
PPC_FUNC_IMPL(__imp__sub_82F0DD08) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,22664
	ctx.r11.s64 = ctx.r11.s64 + 22664;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0dd30
	if (!ctx.cr6.eq) goto loc_82F0DD30;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0DD30:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0dd3c
	if (ctx.cr6.eq) goto loc_82F0DD3C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0DD3C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,27680
	ctx.r8.s64 = ctx.r10.s64 + 27680;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,21
	ctx.r10.s64 = 21;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-2840
	ctx.r3.s64 = ctx.r9.s64 + -2840;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0DD70"))) PPC_WEAK_FUNC(sub_82F0DD70);
PPC_FUNC_IMPL(__imp__sub_82F0DD70) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,22684
	ctx.r11.s64 = ctx.r11.s64 + 22684;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0dd98
	if (!ctx.cr6.eq) goto loc_82F0DD98;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0DD98:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0dda4
	if (ctx.cr6.eq) goto loc_82F0DDA4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0DDA4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,27696
	ctx.r8.s64 = ctx.r10.s64 + 27696;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,22
	ctx.r10.s64 = 22;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-2824
	ctx.r3.s64 = ctx.r9.s64 + -2824;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0DDD8"))) PPC_WEAK_FUNC(sub_82F0DDD8);
PPC_FUNC_IMPL(__imp__sub_82F0DDD8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,22704
	ctx.r11.s64 = ctx.r11.s64 + 22704;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0de00
	if (!ctx.cr6.eq) goto loc_82F0DE00;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0DE00:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0de0c
	if (ctx.cr6.eq) goto loc_82F0DE0C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0DE0C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,27708
	ctx.r8.s64 = ctx.r10.s64 + 27708;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,23
	ctx.r10.s64 = 23;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-2808
	ctx.r3.s64 = ctx.r9.s64 + -2808;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0DE40"))) PPC_WEAK_FUNC(sub_82F0DE40);
PPC_FUNC_IMPL(__imp__sub_82F0DE40) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,22724
	ctx.r11.s64 = ctx.r11.s64 + 22724;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0de68
	if (!ctx.cr6.eq) goto loc_82F0DE68;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0DE68:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0de74
	if (ctx.cr6.eq) goto loc_82F0DE74;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0DE74:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,27724
	ctx.r8.s64 = ctx.r10.s64 + 27724;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,24
	ctx.r10.s64 = 24;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-2792
	ctx.r3.s64 = ctx.r9.s64 + -2792;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0DEA8"))) PPC_WEAK_FUNC(sub_82F0DEA8);
PPC_FUNC_IMPL(__imp__sub_82F0DEA8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,22744
	ctx.r11.s64 = ctx.r11.s64 + 22744;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0ded0
	if (!ctx.cr6.eq) goto loc_82F0DED0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0DED0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0dedc
	if (ctx.cr6.eq) goto loc_82F0DEDC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0DEDC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,27736
	ctx.r8.s64 = ctx.r10.s64 + 27736;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,25
	ctx.r10.s64 = 25;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-2776
	ctx.r3.s64 = ctx.r9.s64 + -2776;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0DF10"))) PPC_WEAK_FUNC(sub_82F0DF10);
PPC_FUNC_IMPL(__imp__sub_82F0DF10) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,22764
	ctx.r11.s64 = ctx.r11.s64 + 22764;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0df38
	if (!ctx.cr6.eq) goto loc_82F0DF38;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0DF38:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0df44
	if (ctx.cr6.eq) goto loc_82F0DF44;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0DF44:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,27756
	ctx.r8.s64 = ctx.r10.s64 + 27756;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,26
	ctx.r10.s64 = 26;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-2760
	ctx.r3.s64 = ctx.r9.s64 + -2760;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0DF78"))) PPC_WEAK_FUNC(sub_82F0DF78);
PPC_FUNC_IMPL(__imp__sub_82F0DF78) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,22784
	ctx.r11.s64 = ctx.r11.s64 + 22784;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0dfa0
	if (!ctx.cr6.eq) goto loc_82F0DFA0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0DFA0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0dfac
	if (ctx.cr6.eq) goto loc_82F0DFAC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0DFAC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,27776
	ctx.r8.s64 = ctx.r10.s64 + 27776;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,27
	ctx.r10.s64 = 27;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-2744
	ctx.r3.s64 = ctx.r9.s64 + -2744;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0DFE0"))) PPC_WEAK_FUNC(sub_82F0DFE0);
PPC_FUNC_IMPL(__imp__sub_82F0DFE0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,22804
	ctx.r11.s64 = ctx.r11.s64 + 22804;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0e008
	if (!ctx.cr6.eq) goto loc_82F0E008;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0E008:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0e014
	if (ctx.cr6.eq) goto loc_82F0E014;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0E014:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,27796
	ctx.r8.s64 = ctx.r10.s64 + 27796;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,28
	ctx.r10.s64 = 28;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-2728
	ctx.r3.s64 = ctx.r9.s64 + -2728;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0E048"))) PPC_WEAK_FUNC(sub_82F0E048);
PPC_FUNC_IMPL(__imp__sub_82F0E048) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,22824
	ctx.r11.s64 = ctx.r11.s64 + 22824;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0e070
	if (!ctx.cr6.eq) goto loc_82F0E070;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0E070:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0e07c
	if (ctx.cr6.eq) goto loc_82F0E07C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0E07C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,27816
	ctx.r8.s64 = ctx.r10.s64 + 27816;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,29
	ctx.r10.s64 = 29;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-2712
	ctx.r3.s64 = ctx.r9.s64 + -2712;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0E0B0"))) PPC_WEAK_FUNC(sub_82F0E0B0);
PPC_FUNC_IMPL(__imp__sub_82F0E0B0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,22844
	ctx.r11.s64 = ctx.r11.s64 + 22844;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0e0d8
	if (!ctx.cr6.eq) goto loc_82F0E0D8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0E0D8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0e0e4
	if (ctx.cr6.eq) goto loc_82F0E0E4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0E0E4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,27848
	ctx.r8.s64 = ctx.r10.s64 + 27848;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,30
	ctx.r10.s64 = 30;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-2696
	ctx.r3.s64 = ctx.r9.s64 + -2696;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0E118"))) PPC_WEAK_FUNC(sub_82F0E118);
PPC_FUNC_IMPL(__imp__sub_82F0E118) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,22864
	ctx.r11.s64 = ctx.r11.s64 + 22864;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0e140
	if (!ctx.cr6.eq) goto loc_82F0E140;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0E140:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0e14c
	if (ctx.cr6.eq) goto loc_82F0E14C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0E14C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,27880
	ctx.r8.s64 = ctx.r10.s64 + 27880;
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
	// addi r3,r9,-2680
	ctx.r3.s64 = ctx.r9.s64 + -2680;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0E180"))) PPC_WEAK_FUNC(sub_82F0E180);
PPC_FUNC_IMPL(__imp__sub_82F0E180) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,22884
	ctx.r11.s64 = ctx.r11.s64 + 22884;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0e1a8
	if (!ctx.cr6.eq) goto loc_82F0E1A8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0E1A8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0e1b4
	if (ctx.cr6.eq) goto loc_82F0E1B4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0E1B4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,27900
	ctx.r8.s64 = ctx.r10.s64 + 27900;
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
	// addi r3,r9,-2664
	ctx.r3.s64 = ctx.r9.s64 + -2664;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0E1E8"))) PPC_WEAK_FUNC(sub_82F0E1E8);
PPC_FUNC_IMPL(__imp__sub_82F0E1E8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,22904
	ctx.r11.s64 = ctx.r11.s64 + 22904;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0e210
	if (!ctx.cr6.eq) goto loc_82F0E210;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0E210:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0e21c
	if (ctx.cr6.eq) goto loc_82F0E21C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0E21C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,27916
	ctx.r8.s64 = ctx.r10.s64 + 27916;
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
	// addi r3,r9,-2648
	ctx.r3.s64 = ctx.r9.s64 + -2648;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0E250"))) PPC_WEAK_FUNC(sub_82F0E250);
PPC_FUNC_IMPL(__imp__sub_82F0E250) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,22924
	ctx.r11.s64 = ctx.r11.s64 + 22924;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0e278
	if (!ctx.cr6.eq) goto loc_82F0E278;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0E278:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0e284
	if (ctx.cr6.eq) goto loc_82F0E284;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0E284:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,27936
	ctx.r8.s64 = ctx.r10.s64 + 27936;
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
	// addi r3,r9,-2632
	ctx.r3.s64 = ctx.r9.s64 + -2632;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0E2B8"))) PPC_WEAK_FUNC(sub_82F0E2B8);
PPC_FUNC_IMPL(__imp__sub_82F0E2B8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,22944
	ctx.r11.s64 = ctx.r11.s64 + 22944;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0e2e0
	if (!ctx.cr6.eq) goto loc_82F0E2E0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0E2E0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0e2ec
	if (ctx.cr6.eq) goto loc_82F0E2EC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0E2EC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,27952
	ctx.r8.s64 = ctx.r10.s64 + 27952;
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
	// addi r3,r9,-2616
	ctx.r3.s64 = ctx.r9.s64 + -2616;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0E320"))) PPC_WEAK_FUNC(sub_82F0E320);
PPC_FUNC_IMPL(__imp__sub_82F0E320) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,22964
	ctx.r11.s64 = ctx.r11.s64 + 22964;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0e348
	if (!ctx.cr6.eq) goto loc_82F0E348;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0E348:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0e354
	if (ctx.cr6.eq) goto loc_82F0E354;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0E354:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,27968
	ctx.r8.s64 = ctx.r10.s64 + 27968;
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
	// addi r3,r9,-2600
	ctx.r3.s64 = ctx.r9.s64 + -2600;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0E388"))) PPC_WEAK_FUNC(sub_82F0E388);
PPC_FUNC_IMPL(__imp__sub_82F0E388) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,22984
	ctx.r11.s64 = ctx.r11.s64 + 22984;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0e3b0
	if (!ctx.cr6.eq) goto loc_82F0E3B0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0E3B0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0e3bc
	if (ctx.cr6.eq) goto loc_82F0E3BC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0E3BC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,27984
	ctx.r8.s64 = ctx.r10.s64 + 27984;
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
	// addi r3,r9,-2584
	ctx.r3.s64 = ctx.r9.s64 + -2584;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0E3F0"))) PPC_WEAK_FUNC(sub_82F0E3F0);
PPC_FUNC_IMPL(__imp__sub_82F0E3F0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,23004
	ctx.r11.s64 = ctx.r11.s64 + 23004;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0e418
	if (!ctx.cr6.eq) goto loc_82F0E418;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0E418:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0e424
	if (ctx.cr6.eq) goto loc_82F0E424;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0E424:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,28000
	ctx.r8.s64 = ctx.r10.s64 + 28000;
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
	// addi r3,r9,-2568
	ctx.r3.s64 = ctx.r9.s64 + -2568;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0E458"))) PPC_WEAK_FUNC(sub_82F0E458);
PPC_FUNC_IMPL(__imp__sub_82F0E458) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,23024
	ctx.r11.s64 = ctx.r11.s64 + 23024;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0e480
	if (!ctx.cr6.eq) goto loc_82F0E480;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0E480:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0e48c
	if (ctx.cr6.eq) goto loc_82F0E48C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0E48C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,28016
	ctx.r8.s64 = ctx.r10.s64 + 28016;
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
	// addi r3,r9,-2552
	ctx.r3.s64 = ctx.r9.s64 + -2552;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0E4C0"))) PPC_WEAK_FUNC(sub_82F0E4C0);
PPC_FUNC_IMPL(__imp__sub_82F0E4C0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,23044
	ctx.r11.s64 = ctx.r11.s64 + 23044;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0e4e8
	if (!ctx.cr6.eq) goto loc_82F0E4E8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0E4E8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0e4f4
	if (ctx.cr6.eq) goto loc_82F0E4F4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0E4F4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,28032
	ctx.r8.s64 = ctx.r10.s64 + 28032;
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
	// addi r3,r9,-2536
	ctx.r3.s64 = ctx.r9.s64 + -2536;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0E528"))) PPC_WEAK_FUNC(sub_82F0E528);
PPC_FUNC_IMPL(__imp__sub_82F0E528) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,23064
	ctx.r11.s64 = ctx.r11.s64 + 23064;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0e550
	if (!ctx.cr6.eq) goto loc_82F0E550;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0E550:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0e55c
	if (ctx.cr6.eq) goto loc_82F0E55C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0E55C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,28048
	ctx.r8.s64 = ctx.r10.s64 + 28048;
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
	// addi r3,r9,-2520
	ctx.r3.s64 = ctx.r9.s64 + -2520;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0E590"))) PPC_WEAK_FUNC(sub_82F0E590);
PPC_FUNC_IMPL(__imp__sub_82F0E590) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,23084
	ctx.r11.s64 = ctx.r11.s64 + 23084;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0e5b8
	if (!ctx.cr6.eq) goto loc_82F0E5B8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0E5B8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0e5c4
	if (ctx.cr6.eq) goto loc_82F0E5C4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0E5C4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,28064
	ctx.r8.s64 = ctx.r10.s64 + 28064;
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
	// addi r3,r9,-2504
	ctx.r3.s64 = ctx.r9.s64 + -2504;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0E5F8"))) PPC_WEAK_FUNC(sub_82F0E5F8);
PPC_FUNC_IMPL(__imp__sub_82F0E5F8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,23104
	ctx.r11.s64 = ctx.r11.s64 + 23104;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0e620
	if (!ctx.cr6.eq) goto loc_82F0E620;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0E620:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0e62c
	if (ctx.cr6.eq) goto loc_82F0E62C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0E62C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,28080
	ctx.r8.s64 = ctx.r10.s64 + 28080;
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
	// addi r3,r9,-2488
	ctx.r3.s64 = ctx.r9.s64 + -2488;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0E660"))) PPC_WEAK_FUNC(sub_82F0E660);
PPC_FUNC_IMPL(__imp__sub_82F0E660) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,23124
	ctx.r11.s64 = ctx.r11.s64 + 23124;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0e688
	if (!ctx.cr6.eq) goto loc_82F0E688;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0E688:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0e694
	if (ctx.cr6.eq) goto loc_82F0E694;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0E694:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,28096
	ctx.r8.s64 = ctx.r10.s64 + 28096;
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
	// addi r3,r9,-2472
	ctx.r3.s64 = ctx.r9.s64 + -2472;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0E6C8"))) PPC_WEAK_FUNC(sub_82F0E6C8);
PPC_FUNC_IMPL(__imp__sub_82F0E6C8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,23144
	ctx.r11.s64 = ctx.r11.s64 + 23144;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0e6f0
	if (!ctx.cr6.eq) goto loc_82F0E6F0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0E6F0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0e6fc
	if (ctx.cr6.eq) goto loc_82F0E6FC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0E6FC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,28112
	ctx.r8.s64 = ctx.r10.s64 + 28112;
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
	// addi r3,r9,-2456
	ctx.r3.s64 = ctx.r9.s64 + -2456;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0E730"))) PPC_WEAK_FUNC(sub_82F0E730);
PPC_FUNC_IMPL(__imp__sub_82F0E730) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,23164
	ctx.r11.s64 = ctx.r11.s64 + 23164;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0e758
	if (!ctx.cr6.eq) goto loc_82F0E758;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0E758:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0e764
	if (ctx.cr6.eq) goto loc_82F0E764;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0E764:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,28128
	ctx.r8.s64 = ctx.r10.s64 + 28128;
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
	// addi r3,r9,-2440
	ctx.r3.s64 = ctx.r9.s64 + -2440;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0E798"))) PPC_WEAK_FUNC(sub_82F0E798);
PPC_FUNC_IMPL(__imp__sub_82F0E798) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,23184
	ctx.r11.s64 = ctx.r11.s64 + 23184;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0e7c0
	if (!ctx.cr6.eq) goto loc_82F0E7C0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0E7C0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0e7cc
	if (ctx.cr6.eq) goto loc_82F0E7CC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0E7CC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,28144
	ctx.r8.s64 = ctx.r10.s64 + 28144;
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
	// addi r3,r9,-2424
	ctx.r3.s64 = ctx.r9.s64 + -2424;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0E800"))) PPC_WEAK_FUNC(sub_82F0E800);
PPC_FUNC_IMPL(__imp__sub_82F0E800) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,23204
	ctx.r11.s64 = ctx.r11.s64 + 23204;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0e828
	if (!ctx.cr6.eq) goto loc_82F0E828;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0E828:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0e834
	if (ctx.cr6.eq) goto loc_82F0E834;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0E834:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,28152
	ctx.r8.s64 = ctx.r10.s64 + 28152;
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
	// addi r3,r9,-2408
	ctx.r3.s64 = ctx.r9.s64 + -2408;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0E868"))) PPC_WEAK_FUNC(sub_82F0E868);
PPC_FUNC_IMPL(__imp__sub_82F0E868) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,23224
	ctx.r11.s64 = ctx.r11.s64 + 23224;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0e890
	if (!ctx.cr6.eq) goto loc_82F0E890;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0E890:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0e89c
	if (ctx.cr6.eq) goto loc_82F0E89C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0E89C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,28160
	ctx.r8.s64 = ctx.r10.s64 + 28160;
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
	// addi r3,r9,-2392
	ctx.r3.s64 = ctx.r9.s64 + -2392;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0E8D0"))) PPC_WEAK_FUNC(sub_82F0E8D0);
PPC_FUNC_IMPL(__imp__sub_82F0E8D0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,23244
	ctx.r11.s64 = ctx.r11.s64 + 23244;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0e8f8
	if (!ctx.cr6.eq) goto loc_82F0E8F8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0E8F8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0e904
	if (ctx.cr6.eq) goto loc_82F0E904;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0E904:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,28168
	ctx.r8.s64 = ctx.r10.s64 + 28168;
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
	// addi r3,r9,-2376
	ctx.r3.s64 = ctx.r9.s64 + -2376;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0E938"))) PPC_WEAK_FUNC(sub_82F0E938);
PPC_FUNC_IMPL(__imp__sub_82F0E938) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,23264
	ctx.r11.s64 = ctx.r11.s64 + 23264;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0e960
	if (!ctx.cr6.eq) goto loc_82F0E960;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0E960:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0e96c
	if (ctx.cr6.eq) goto loc_82F0E96C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0E96C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,28176
	ctx.r8.s64 = ctx.r10.s64 + 28176;
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
	// addi r3,r9,-2360
	ctx.r3.s64 = ctx.r9.s64 + -2360;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0E9A0"))) PPC_WEAK_FUNC(sub_82F0E9A0);
PPC_FUNC_IMPL(__imp__sub_82F0E9A0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,23284
	ctx.r11.s64 = ctx.r11.s64 + 23284;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0e9c8
	if (!ctx.cr6.eq) goto loc_82F0E9C8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0E9C8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0e9d4
	if (ctx.cr6.eq) goto loc_82F0E9D4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0E9D4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,28184
	ctx.r8.s64 = ctx.r10.s64 + 28184;
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
	// addi r3,r9,-2344
	ctx.r3.s64 = ctx.r9.s64 + -2344;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0EA08"))) PPC_WEAK_FUNC(sub_82F0EA08);
PPC_FUNC_IMPL(__imp__sub_82F0EA08) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,23304
	ctx.r11.s64 = ctx.r11.s64 + 23304;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0ea30
	if (!ctx.cr6.eq) goto loc_82F0EA30;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0EA30:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0ea3c
	if (ctx.cr6.eq) goto loc_82F0EA3C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0EA3C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,28192
	ctx.r8.s64 = ctx.r10.s64 + 28192;
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
	// addi r3,r9,-2328
	ctx.r3.s64 = ctx.r9.s64 + -2328;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0EA70"))) PPC_WEAK_FUNC(sub_82F0EA70);
PPC_FUNC_IMPL(__imp__sub_82F0EA70) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,23324
	ctx.r11.s64 = ctx.r11.s64 + 23324;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0ea98
	if (!ctx.cr6.eq) goto loc_82F0EA98;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0EA98:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0eaa4
	if (ctx.cr6.eq) goto loc_82F0EAA4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0EAA4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,28200
	ctx.r8.s64 = ctx.r10.s64 + 28200;
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
	// addi r3,r9,-2312
	ctx.r3.s64 = ctx.r9.s64 + -2312;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0EAD8"))) PPC_WEAK_FUNC(sub_82F0EAD8);
PPC_FUNC_IMPL(__imp__sub_82F0EAD8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,23344
	ctx.r11.s64 = ctx.r11.s64 + 23344;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0eb00
	if (!ctx.cr6.eq) goto loc_82F0EB00;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0EB00:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0eb0c
	if (ctx.cr6.eq) goto loc_82F0EB0C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0EB0C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,28208
	ctx.r8.s64 = ctx.r10.s64 + 28208;
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
	// addi r3,r9,-2296
	ctx.r3.s64 = ctx.r9.s64 + -2296;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0EB40"))) PPC_WEAK_FUNC(sub_82F0EB40);
PPC_FUNC_IMPL(__imp__sub_82F0EB40) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,23364
	ctx.r11.s64 = ctx.r11.s64 + 23364;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0eb68
	if (!ctx.cr6.eq) goto loc_82F0EB68;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0EB68:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0eb74
	if (ctx.cr6.eq) goto loc_82F0EB74;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0EB74:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,28216
	ctx.r8.s64 = ctx.r10.s64 + 28216;
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
	// addi r3,r9,-2280
	ctx.r3.s64 = ctx.r9.s64 + -2280;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0EBA8"))) PPC_WEAK_FUNC(sub_82F0EBA8);
PPC_FUNC_IMPL(__imp__sub_82F0EBA8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,23384
	ctx.r11.s64 = ctx.r11.s64 + 23384;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0ebd0
	if (!ctx.cr6.eq) goto loc_82F0EBD0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0EBD0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0ebdc
	if (ctx.cr6.eq) goto loc_82F0EBDC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0EBDC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,28224
	ctx.r8.s64 = ctx.r10.s64 + 28224;
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
	// addi r3,r9,-2264
	ctx.r3.s64 = ctx.r9.s64 + -2264;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0EC10"))) PPC_WEAK_FUNC(sub_82F0EC10);
PPC_FUNC_IMPL(__imp__sub_82F0EC10) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,23404
	ctx.r11.s64 = ctx.r11.s64 + 23404;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0ec38
	if (!ctx.cr6.eq) goto loc_82F0EC38;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0EC38:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0ec44
	if (ctx.cr6.eq) goto loc_82F0EC44;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0EC44:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,28232
	ctx.r8.s64 = ctx.r10.s64 + 28232;
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
	// addi r3,r9,-2248
	ctx.r3.s64 = ctx.r9.s64 + -2248;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0EC78"))) PPC_WEAK_FUNC(sub_82F0EC78);
PPC_FUNC_IMPL(__imp__sub_82F0EC78) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,23424
	ctx.r11.s64 = ctx.r11.s64 + 23424;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0eca0
	if (!ctx.cr6.eq) goto loc_82F0ECA0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0ECA0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0ecac
	if (ctx.cr6.eq) goto loc_82F0ECAC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0ECAC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,28240
	ctx.r8.s64 = ctx.r10.s64 + 28240;
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
	// addi r3,r9,-2232
	ctx.r3.s64 = ctx.r9.s64 + -2232;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0ECE0"))) PPC_WEAK_FUNC(sub_82F0ECE0);
PPC_FUNC_IMPL(__imp__sub_82F0ECE0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,23444
	ctx.r11.s64 = ctx.r11.s64 + 23444;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0ed08
	if (!ctx.cr6.eq) goto loc_82F0ED08;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0ED08:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0ed14
	if (ctx.cr6.eq) goto loc_82F0ED14;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0ED14:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,28248
	ctx.r8.s64 = ctx.r10.s64 + 28248;
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
	// addi r3,r9,-2216
	ctx.r3.s64 = ctx.r9.s64 + -2216;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0ED48"))) PPC_WEAK_FUNC(sub_82F0ED48);
PPC_FUNC_IMPL(__imp__sub_82F0ED48) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,23464
	ctx.r11.s64 = ctx.r11.s64 + 23464;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0ed70
	if (!ctx.cr6.eq) goto loc_82F0ED70;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0ED70:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0ed7c
	if (ctx.cr6.eq) goto loc_82F0ED7C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0ED7C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,28256
	ctx.r8.s64 = ctx.r10.s64 + 28256;
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
	// addi r3,r9,-2200
	ctx.r3.s64 = ctx.r9.s64 + -2200;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0EDB0"))) PPC_WEAK_FUNC(sub_82F0EDB0);
PPC_FUNC_IMPL(__imp__sub_82F0EDB0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,23484
	ctx.r11.s64 = ctx.r11.s64 + 23484;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0edd8
	if (!ctx.cr6.eq) goto loc_82F0EDD8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0EDD8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0ede4
	if (ctx.cr6.eq) goto loc_82F0EDE4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0EDE4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,28264
	ctx.r8.s64 = ctx.r10.s64 + 28264;
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
	// addi r3,r9,-2184
	ctx.r3.s64 = ctx.r9.s64 + -2184;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0EE18"))) PPC_WEAK_FUNC(sub_82F0EE18);
PPC_FUNC_IMPL(__imp__sub_82F0EE18) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,23504
	ctx.r11.s64 = ctx.r11.s64 + 23504;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0ee40
	if (!ctx.cr6.eq) goto loc_82F0EE40;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0EE40:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0ee4c
	if (ctx.cr6.eq) goto loc_82F0EE4C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0EE4C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,28272
	ctx.r8.s64 = ctx.r10.s64 + 28272;
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
	// addi r3,r9,-2168
	ctx.r3.s64 = ctx.r9.s64 + -2168;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0EE80"))) PPC_WEAK_FUNC(sub_82F0EE80);
PPC_FUNC_IMPL(__imp__sub_82F0EE80) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,23524
	ctx.r11.s64 = ctx.r11.s64 + 23524;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0eea8
	if (!ctx.cr6.eq) goto loc_82F0EEA8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0EEA8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0eeb4
	if (ctx.cr6.eq) goto loc_82F0EEB4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0EEB4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,28280
	ctx.r8.s64 = ctx.r10.s64 + 28280;
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
	// addi r3,r9,-2152
	ctx.r3.s64 = ctx.r9.s64 + -2152;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0EEE8"))) PPC_WEAK_FUNC(sub_82F0EEE8);
PPC_FUNC_IMPL(__imp__sub_82F0EEE8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,23544
	ctx.r11.s64 = ctx.r11.s64 + 23544;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0ef10
	if (!ctx.cr6.eq) goto loc_82F0EF10;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0EF10:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0ef1c
	if (ctx.cr6.eq) goto loc_82F0EF1C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0EF1C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,28288
	ctx.r8.s64 = ctx.r10.s64 + 28288;
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
	// addi r3,r9,-2136
	ctx.r3.s64 = ctx.r9.s64 + -2136;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0EF50"))) PPC_WEAK_FUNC(sub_82F0EF50);
PPC_FUNC_IMPL(__imp__sub_82F0EF50) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,23564
	ctx.r11.s64 = ctx.r11.s64 + 23564;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0ef78
	if (!ctx.cr6.eq) goto loc_82F0EF78;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0EF78:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0ef84
	if (ctx.cr6.eq) goto loc_82F0EF84;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0EF84:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,28296
	ctx.r8.s64 = ctx.r10.s64 + 28296;
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
	// addi r3,r9,-2120
	ctx.r3.s64 = ctx.r9.s64 + -2120;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0EFB8"))) PPC_WEAK_FUNC(sub_82F0EFB8);
PPC_FUNC_IMPL(__imp__sub_82F0EFB8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,23584
	ctx.r11.s64 = ctx.r11.s64 + 23584;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0efe0
	if (!ctx.cr6.eq) goto loc_82F0EFE0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0EFE0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0efec
	if (ctx.cr6.eq) goto loc_82F0EFEC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0EFEC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,28304
	ctx.r8.s64 = ctx.r10.s64 + 28304;
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
	// addi r3,r9,-2104
	ctx.r3.s64 = ctx.r9.s64 + -2104;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0F020"))) PPC_WEAK_FUNC(sub_82F0F020);
PPC_FUNC_IMPL(__imp__sub_82F0F020) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,23604
	ctx.r11.s64 = ctx.r11.s64 + 23604;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0f048
	if (!ctx.cr6.eq) goto loc_82F0F048;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0F048:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0f054
	if (ctx.cr6.eq) goto loc_82F0F054;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0F054:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,28312
	ctx.r8.s64 = ctx.r10.s64 + 28312;
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
	// addi r3,r9,-2088
	ctx.r3.s64 = ctx.r9.s64 + -2088;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0F088"))) PPC_WEAK_FUNC(sub_82F0F088);
PPC_FUNC_IMPL(__imp__sub_82F0F088) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,23624
	ctx.r11.s64 = ctx.r11.s64 + 23624;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0f0b0
	if (!ctx.cr6.eq) goto loc_82F0F0B0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0F0B0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0f0bc
	if (ctx.cr6.eq) goto loc_82F0F0BC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0F0BC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,28320
	ctx.r8.s64 = ctx.r10.s64 + 28320;
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
	// addi r3,r9,-2072
	ctx.r3.s64 = ctx.r9.s64 + -2072;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0F0F0"))) PPC_WEAK_FUNC(sub_82F0F0F0);
PPC_FUNC_IMPL(__imp__sub_82F0F0F0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,23644
	ctx.r11.s64 = ctx.r11.s64 + 23644;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0f118
	if (!ctx.cr6.eq) goto loc_82F0F118;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0F118:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0f124
	if (ctx.cr6.eq) goto loc_82F0F124;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0F124:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,28328
	ctx.r8.s64 = ctx.r10.s64 + 28328;
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
	// addi r3,r9,-2056
	ctx.r3.s64 = ctx.r9.s64 + -2056;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0F158"))) PPC_WEAK_FUNC(sub_82F0F158);
PPC_FUNC_IMPL(__imp__sub_82F0F158) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,23664
	ctx.r11.s64 = ctx.r11.s64 + 23664;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0f180
	if (!ctx.cr6.eq) goto loc_82F0F180;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0F180:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0f18c
	if (ctx.cr6.eq) goto loc_82F0F18C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0F18C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,28336
	ctx.r8.s64 = ctx.r10.s64 + 28336;
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
	// addi r3,r9,-2040
	ctx.r3.s64 = ctx.r9.s64 + -2040;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0F1C0"))) PPC_WEAK_FUNC(sub_82F0F1C0);
PPC_FUNC_IMPL(__imp__sub_82F0F1C0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,23684
	ctx.r11.s64 = ctx.r11.s64 + 23684;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0f1e8
	if (!ctx.cr6.eq) goto loc_82F0F1E8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0F1E8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0f1f4
	if (ctx.cr6.eq) goto loc_82F0F1F4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0F1F4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,28344
	ctx.r8.s64 = ctx.r10.s64 + 28344;
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
	// addi r3,r9,-2024
	ctx.r3.s64 = ctx.r9.s64 + -2024;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0F228"))) PPC_WEAK_FUNC(sub_82F0F228);
PPC_FUNC_IMPL(__imp__sub_82F0F228) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,23704
	ctx.r11.s64 = ctx.r11.s64 + 23704;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0f250
	if (!ctx.cr6.eq) goto loc_82F0F250;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0F250:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0f25c
	if (ctx.cr6.eq) goto loc_82F0F25C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0F25C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,28352
	ctx.r8.s64 = ctx.r10.s64 + 28352;
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
	// addi r3,r9,-2008
	ctx.r3.s64 = ctx.r9.s64 + -2008;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0F290"))) PPC_WEAK_FUNC(sub_82F0F290);
PPC_FUNC_IMPL(__imp__sub_82F0F290) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,23724
	ctx.r11.s64 = ctx.r11.s64 + 23724;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0f2b8
	if (!ctx.cr6.eq) goto loc_82F0F2B8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0F2B8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0f2c4
	if (ctx.cr6.eq) goto loc_82F0F2C4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0F2C4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,28360
	ctx.r8.s64 = ctx.r10.s64 + 28360;
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
	// addi r3,r9,-1992
	ctx.r3.s64 = ctx.r9.s64 + -1992;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0F2F8"))) PPC_WEAK_FUNC(sub_82F0F2F8);
PPC_FUNC_IMPL(__imp__sub_82F0F2F8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,23744
	ctx.r11.s64 = ctx.r11.s64 + 23744;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0f320
	if (!ctx.cr6.eq) goto loc_82F0F320;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0F320:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0f32c
	if (ctx.cr6.eq) goto loc_82F0F32C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0F32C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,28368
	ctx.r8.s64 = ctx.r10.s64 + 28368;
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
	// addi r3,r9,-1976
	ctx.r3.s64 = ctx.r9.s64 + -1976;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0F360"))) PPC_WEAK_FUNC(sub_82F0F360);
PPC_FUNC_IMPL(__imp__sub_82F0F360) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,23764
	ctx.r11.s64 = ctx.r11.s64 + 23764;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0f388
	if (!ctx.cr6.eq) goto loc_82F0F388;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0F388:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0f394
	if (ctx.cr6.eq) goto loc_82F0F394;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0F394:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,28376
	ctx.r8.s64 = ctx.r10.s64 + 28376;
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
	// addi r3,r9,-1960
	ctx.r3.s64 = ctx.r9.s64 + -1960;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0F3C8"))) PPC_WEAK_FUNC(sub_82F0F3C8);
PPC_FUNC_IMPL(__imp__sub_82F0F3C8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,23784
	ctx.r11.s64 = ctx.r11.s64 + 23784;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0f3f0
	if (!ctx.cr6.eq) goto loc_82F0F3F0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0F3F0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0f3fc
	if (ctx.cr6.eq) goto loc_82F0F3FC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0F3FC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,28384
	ctx.r8.s64 = ctx.r10.s64 + 28384;
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
	// addi r3,r9,-1944
	ctx.r3.s64 = ctx.r9.s64 + -1944;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0F430"))) PPC_WEAK_FUNC(sub_82F0F430);
PPC_FUNC_IMPL(__imp__sub_82F0F430) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,23804
	ctx.r11.s64 = ctx.r11.s64 + 23804;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0f458
	if (!ctx.cr6.eq) goto loc_82F0F458;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0F458:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0f464
	if (ctx.cr6.eq) goto loc_82F0F464;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0F464:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,28392
	ctx.r8.s64 = ctx.r10.s64 + 28392;
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
	// addi r3,r9,-1928
	ctx.r3.s64 = ctx.r9.s64 + -1928;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0F498"))) PPC_WEAK_FUNC(sub_82F0F498);
PPC_FUNC_IMPL(__imp__sub_82F0F498) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,23824
	ctx.r11.s64 = ctx.r11.s64 + 23824;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0f4c0
	if (!ctx.cr6.eq) goto loc_82F0F4C0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0F4C0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0f4cc
	if (ctx.cr6.eq) goto loc_82F0F4CC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0F4CC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,28400
	ctx.r8.s64 = ctx.r10.s64 + 28400;
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
	// addi r3,r9,-1912
	ctx.r3.s64 = ctx.r9.s64 + -1912;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0F500"))) PPC_WEAK_FUNC(sub_82F0F500);
PPC_FUNC_IMPL(__imp__sub_82F0F500) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,23844
	ctx.r11.s64 = ctx.r11.s64 + 23844;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0f528
	if (!ctx.cr6.eq) goto loc_82F0F528;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0F528:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0f534
	if (ctx.cr6.eq) goto loc_82F0F534;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0F534:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,28408
	ctx.r8.s64 = ctx.r10.s64 + 28408;
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
	// addi r3,r9,-1896
	ctx.r3.s64 = ctx.r9.s64 + -1896;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0F568"))) PPC_WEAK_FUNC(sub_82F0F568);
PPC_FUNC_IMPL(__imp__sub_82F0F568) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,23864
	ctx.r11.s64 = ctx.r11.s64 + 23864;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0f590
	if (!ctx.cr6.eq) goto loc_82F0F590;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0F590:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0f59c
	if (ctx.cr6.eq) goto loc_82F0F59C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0F59C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,28416
	ctx.r8.s64 = ctx.r10.s64 + 28416;
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
	// addi r3,r9,-1880
	ctx.r3.s64 = ctx.r9.s64 + -1880;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0F5D0"))) PPC_WEAK_FUNC(sub_82F0F5D0);
PPC_FUNC_IMPL(__imp__sub_82F0F5D0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,23884
	ctx.r11.s64 = ctx.r11.s64 + 23884;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0f5f8
	if (!ctx.cr6.eq) goto loc_82F0F5F8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0F5F8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0f604
	if (ctx.cr6.eq) goto loc_82F0F604;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0F604:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,28424
	ctx.r8.s64 = ctx.r10.s64 + 28424;
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
	// addi r3,r9,-1864
	ctx.r3.s64 = ctx.r9.s64 + -1864;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0F638"))) PPC_WEAK_FUNC(sub_82F0F638);
PPC_FUNC_IMPL(__imp__sub_82F0F638) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0f660
	if (!ctx.cr6.eq) goto loc_82F0F660;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0F660:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0f66c
	if (ctx.cr6.eq) goto loc_82F0F66C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0F66C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,28432
	ctx.r8.s64 = ctx.r10.s64 + 28432;
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
	// addi r3,r9,-1848
	ctx.r3.s64 = ctx.r9.s64 + -1848;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0F6A0"))) PPC_WEAK_FUNC(sub_82F0F6A0);
PPC_FUNC_IMPL(__imp__sub_82F0F6A0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,23924
	ctx.r11.s64 = ctx.r11.s64 + 23924;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0f6c8
	if (!ctx.cr6.eq) goto loc_82F0F6C8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0F6C8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0f6d4
	if (ctx.cr6.eq) goto loc_82F0F6D4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0F6D4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,28440
	ctx.r8.s64 = ctx.r10.s64 + 28440;
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
	// addi r3,r9,-1832
	ctx.r3.s64 = ctx.r9.s64 + -1832;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0F708"))) PPC_WEAK_FUNC(sub_82F0F708);
PPC_FUNC_IMPL(__imp__sub_82F0F708) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,23944
	ctx.r11.s64 = ctx.r11.s64 + 23944;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0f730
	if (!ctx.cr6.eq) goto loc_82F0F730;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0F730:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0f73c
	if (ctx.cr6.eq) goto loc_82F0F73C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0F73C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,28448
	ctx.r8.s64 = ctx.r10.s64 + 28448;
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
	// addi r3,r9,-1816
	ctx.r3.s64 = ctx.r9.s64 + -1816;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0F770"))) PPC_WEAK_FUNC(sub_82F0F770);
PPC_FUNC_IMPL(__imp__sub_82F0F770) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,23964
	ctx.r11.s64 = ctx.r11.s64 + 23964;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0f798
	if (!ctx.cr6.eq) goto loc_82F0F798;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0F798:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0f7a4
	if (ctx.cr6.eq) goto loc_82F0F7A4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0F7A4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,28456
	ctx.r8.s64 = ctx.r10.s64 + 28456;
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
	// addi r3,r9,-1800
	ctx.r3.s64 = ctx.r9.s64 + -1800;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0F7D8"))) PPC_WEAK_FUNC(sub_82F0F7D8);
PPC_FUNC_IMPL(__imp__sub_82F0F7D8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,23984
	ctx.r11.s64 = ctx.r11.s64 + 23984;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0f800
	if (!ctx.cr6.eq) goto loc_82F0F800;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0F800:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0f80c
	if (ctx.cr6.eq) goto loc_82F0F80C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0F80C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,28464
	ctx.r8.s64 = ctx.r10.s64 + 28464;
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
	// addi r3,r9,-1784
	ctx.r3.s64 = ctx.r9.s64 + -1784;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0F840"))) PPC_WEAK_FUNC(sub_82F0F840);
PPC_FUNC_IMPL(__imp__sub_82F0F840) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,24004
	ctx.r11.s64 = ctx.r11.s64 + 24004;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0f868
	if (!ctx.cr6.eq) goto loc_82F0F868;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0F868:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0f874
	if (ctx.cr6.eq) goto loc_82F0F874;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0F874:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,28472
	ctx.r8.s64 = ctx.r10.s64 + 28472;
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
	// addi r3,r9,-1768
	ctx.r3.s64 = ctx.r9.s64 + -1768;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0F8A8"))) PPC_WEAK_FUNC(sub_82F0F8A8);
PPC_FUNC_IMPL(__imp__sub_82F0F8A8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,24024
	ctx.r11.s64 = ctx.r11.s64 + 24024;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0f8d0
	if (!ctx.cr6.eq) goto loc_82F0F8D0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0F8D0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0f8dc
	if (ctx.cr6.eq) goto loc_82F0F8DC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0F8DC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,28480
	ctx.r8.s64 = ctx.r10.s64 + 28480;
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
	// addi r3,r9,-1752
	ctx.r3.s64 = ctx.r9.s64 + -1752;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0F910"))) PPC_WEAK_FUNC(sub_82F0F910);
PPC_FUNC_IMPL(__imp__sub_82F0F910) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,24044
	ctx.r11.s64 = ctx.r11.s64 + 24044;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0f938
	if (!ctx.cr6.eq) goto loc_82F0F938;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0F938:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0f944
	if (ctx.cr6.eq) goto loc_82F0F944;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0F944:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,28488
	ctx.r8.s64 = ctx.r10.s64 + 28488;
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
	// addi r3,r9,-1736
	ctx.r3.s64 = ctx.r9.s64 + -1736;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0F978"))) PPC_WEAK_FUNC(sub_82F0F978);
PPC_FUNC_IMPL(__imp__sub_82F0F978) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,24064
	ctx.r11.s64 = ctx.r11.s64 + 24064;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0f9a0
	if (!ctx.cr6.eq) goto loc_82F0F9A0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0F9A0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0f9ac
	if (ctx.cr6.eq) goto loc_82F0F9AC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0F9AC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,28496
	ctx.r8.s64 = ctx.r10.s64 + 28496;
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
	// addi r3,r9,-1720
	ctx.r3.s64 = ctx.r9.s64 + -1720;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0F9E0"))) PPC_WEAK_FUNC(sub_82F0F9E0);
PPC_FUNC_IMPL(__imp__sub_82F0F9E0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,24084
	ctx.r11.s64 = ctx.r11.s64 + 24084;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0fa08
	if (!ctx.cr6.eq) goto loc_82F0FA08;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0FA08:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0fa14
	if (ctx.cr6.eq) goto loc_82F0FA14;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0FA14:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,28504
	ctx.r8.s64 = ctx.r10.s64 + 28504;
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
	// addi r3,r9,-1704
	ctx.r3.s64 = ctx.r9.s64 + -1704;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0FA48"))) PPC_WEAK_FUNC(sub_82F0FA48);
PPC_FUNC_IMPL(__imp__sub_82F0FA48) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,24104
	ctx.r11.s64 = ctx.r11.s64 + 24104;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0fa70
	if (!ctx.cr6.eq) goto loc_82F0FA70;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0FA70:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0fa7c
	if (ctx.cr6.eq) goto loc_82F0FA7C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0FA7C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,28512
	ctx.r8.s64 = ctx.r10.s64 + 28512;
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
	// addi r3,r9,-1688
	ctx.r3.s64 = ctx.r9.s64 + -1688;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0FAB0"))) PPC_WEAK_FUNC(sub_82F0FAB0);
PPC_FUNC_IMPL(__imp__sub_82F0FAB0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,24124
	ctx.r11.s64 = ctx.r11.s64 + 24124;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0fad8
	if (!ctx.cr6.eq) goto loc_82F0FAD8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0FAD8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0fae4
	if (ctx.cr6.eq) goto loc_82F0FAE4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0FAE4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,28520
	ctx.r8.s64 = ctx.r10.s64 + 28520;
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
	// addi r3,r9,-1672
	ctx.r3.s64 = ctx.r9.s64 + -1672;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0FB18"))) PPC_WEAK_FUNC(sub_82F0FB18);
PPC_FUNC_IMPL(__imp__sub_82F0FB18) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,24144
	ctx.r11.s64 = ctx.r11.s64 + 24144;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0fb40
	if (!ctx.cr6.eq) goto loc_82F0FB40;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0FB40:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0fb4c
	if (ctx.cr6.eq) goto loc_82F0FB4C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0FB4C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,28528
	ctx.r8.s64 = ctx.r10.s64 + 28528;
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
	// addi r3,r9,-1656
	ctx.r3.s64 = ctx.r9.s64 + -1656;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0FB80"))) PPC_WEAK_FUNC(sub_82F0FB80);
PPC_FUNC_IMPL(__imp__sub_82F0FB80) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,24164
	ctx.r11.s64 = ctx.r11.s64 + 24164;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0fba8
	if (!ctx.cr6.eq) goto loc_82F0FBA8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0FBA8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0fbb4
	if (ctx.cr6.eq) goto loc_82F0FBB4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0FBB4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,28552
	ctx.r8.s64 = ctx.r10.s64 + 28552;
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
	// addi r3,r9,-1640
	ctx.r3.s64 = ctx.r9.s64 + -1640;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0FBE8"))) PPC_WEAK_FUNC(sub_82F0FBE8);
PPC_FUNC_IMPL(__imp__sub_82F0FBE8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,24184
	ctx.r11.s64 = ctx.r11.s64 + 24184;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0fc10
	if (!ctx.cr6.eq) goto loc_82F0FC10;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0FC10:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0fc1c
	if (ctx.cr6.eq) goto loc_82F0FC1C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0FC1C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,28584
	ctx.r8.s64 = ctx.r10.s64 + 28584;
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
	// addi r3,r9,-1624
	ctx.r3.s64 = ctx.r9.s64 + -1624;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0FC50"))) PPC_WEAK_FUNC(sub_82F0FC50);
PPC_FUNC_IMPL(__imp__sub_82F0FC50) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,24204
	ctx.r11.s64 = ctx.r11.s64 + 24204;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0fc78
	if (!ctx.cr6.eq) goto loc_82F0FC78;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0FC78:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0fc84
	if (ctx.cr6.eq) goto loc_82F0FC84;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0FC84:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,28600
	ctx.r8.s64 = ctx.r10.s64 + 28600;
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
	// addi r3,r9,-1608
	ctx.r3.s64 = ctx.r9.s64 + -1608;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0FCB8"))) PPC_WEAK_FUNC(sub_82F0FCB8);
PPC_FUNC_IMPL(__imp__sub_82F0FCB8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,24224
	ctx.r11.s64 = ctx.r11.s64 + 24224;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0fce0
	if (!ctx.cr6.eq) goto loc_82F0FCE0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0FCE0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0fcec
	if (ctx.cr6.eq) goto loc_82F0FCEC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0FCEC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,28620
	ctx.r8.s64 = ctx.r10.s64 + 28620;
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
	// addi r3,r9,-1592
	ctx.r3.s64 = ctx.r9.s64 + -1592;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0FD20"))) PPC_WEAK_FUNC(sub_82F0FD20);
PPC_FUNC_IMPL(__imp__sub_82F0FD20) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,24244
	ctx.r11.s64 = ctx.r11.s64 + 24244;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0fd48
	if (!ctx.cr6.eq) goto loc_82F0FD48;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0FD48:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0fd54
	if (ctx.cr6.eq) goto loc_82F0FD54;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0FD54:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,28644
	ctx.r8.s64 = ctx.r10.s64 + 28644;
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
	// addi r3,r9,-1576
	ctx.r3.s64 = ctx.r9.s64 + -1576;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0FD88"))) PPC_WEAK_FUNC(sub_82F0FD88);
PPC_FUNC_IMPL(__imp__sub_82F0FD88) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,24264
	ctx.r11.s64 = ctx.r11.s64 + 24264;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0fdb0
	if (!ctx.cr6.eq) goto loc_82F0FDB0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0FDB0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0fdbc
	if (ctx.cr6.eq) goto loc_82F0FDBC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0FDBC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,28664
	ctx.r8.s64 = ctx.r10.s64 + 28664;
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
	// addi r3,r9,-1560
	ctx.r3.s64 = ctx.r9.s64 + -1560;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0FDF0"))) PPC_WEAK_FUNC(sub_82F0FDF0);
PPC_FUNC_IMPL(__imp__sub_82F0FDF0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,24284
	ctx.r11.s64 = ctx.r11.s64 + 24284;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0fe18
	if (!ctx.cr6.eq) goto loc_82F0FE18;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0FE18:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0fe24
	if (ctx.cr6.eq) goto loc_82F0FE24;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0FE24:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,28676
	ctx.r8.s64 = ctx.r10.s64 + 28676;
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
	// addi r3,r9,-1544
	ctx.r3.s64 = ctx.r9.s64 + -1544;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0FE58"))) PPC_WEAK_FUNC(sub_82F0FE58);
PPC_FUNC_IMPL(__imp__sub_82F0FE58) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,24304
	ctx.r11.s64 = ctx.r11.s64 + 24304;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0fe80
	if (!ctx.cr6.eq) goto loc_82F0FE80;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0FE80:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0fe8c
	if (ctx.cr6.eq) goto loc_82F0FE8C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0FE8C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,28688
	ctx.r8.s64 = ctx.r10.s64 + 28688;
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
	// addi r3,r9,-1528
	ctx.r3.s64 = ctx.r9.s64 + -1528;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0FEC0"))) PPC_WEAK_FUNC(sub_82F0FEC0);
PPC_FUNC_IMPL(__imp__sub_82F0FEC0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,24324
	ctx.r11.s64 = ctx.r11.s64 + 24324;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0fee8
	if (!ctx.cr6.eq) goto loc_82F0FEE8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0FEE8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0fef4
	if (ctx.cr6.eq) goto loc_82F0FEF4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0FEF4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,28700
	ctx.r8.s64 = ctx.r10.s64 + 28700;
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
	// addi r3,r9,-1512
	ctx.r3.s64 = ctx.r9.s64 + -1512;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0FF28"))) PPC_WEAK_FUNC(sub_82F0FF28);
PPC_FUNC_IMPL(__imp__sub_82F0FF28) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,24344
	ctx.r11.s64 = ctx.r11.s64 + 24344;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0ff50
	if (!ctx.cr6.eq) goto loc_82F0FF50;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0FF50:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0ff5c
	if (ctx.cr6.eq) goto loc_82F0FF5C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0FF5C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,28712
	ctx.r8.s64 = ctx.r10.s64 + 28712;
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
	// addi r3,r9,-1496
	ctx.r3.s64 = ctx.r9.s64 + -1496;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0FF90"))) PPC_WEAK_FUNC(sub_82F0FF90);
PPC_FUNC_IMPL(__imp__sub_82F0FF90) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,24364
	ctx.r11.s64 = ctx.r11.s64 + 24364;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f0ffb8
	if (!ctx.cr6.eq) goto loc_82F0FFB8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F0FFB8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0ffc4
	if (ctx.cr6.eq) goto loc_82F0FFC4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F0FFC4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,28724
	ctx.r8.s64 = ctx.r10.s64 + 28724;
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
	// addi r3,r9,-1480
	ctx.r3.s64 = ctx.r9.s64 + -1480;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0FFF8"))) PPC_WEAK_FUNC(sub_82F0FFF8);
PPC_FUNC_IMPL(__imp__sub_82F0FFF8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,24384
	ctx.r11.s64 = ctx.r11.s64 + 24384;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f10020
	if (!ctx.cr6.eq) goto loc_82F10020;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F10020:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f1002c
	if (ctx.cr6.eq) goto loc_82F1002C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F1002C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,28736
	ctx.r8.s64 = ctx.r10.s64 + 28736;
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
	// addi r3,r9,-1464
	ctx.r3.s64 = ctx.r9.s64 + -1464;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F10060"))) PPC_WEAK_FUNC(sub_82F10060);
PPC_FUNC_IMPL(__imp__sub_82F10060) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,24404
	ctx.r11.s64 = ctx.r11.s64 + 24404;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f10088
	if (!ctx.cr6.eq) goto loc_82F10088;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F10088:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f10094
	if (ctx.cr6.eq) goto loc_82F10094;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F10094:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,28748
	ctx.r8.s64 = ctx.r10.s64 + 28748;
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
	// addi r3,r9,-1448
	ctx.r3.s64 = ctx.r9.s64 + -1448;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F100C8"))) PPC_WEAK_FUNC(sub_82F100C8);
PPC_FUNC_IMPL(__imp__sub_82F100C8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,24424
	ctx.r11.s64 = ctx.r11.s64 + 24424;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f100f0
	if (!ctx.cr6.eq) goto loc_82F100F0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F100F0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f100fc
	if (ctx.cr6.eq) goto loc_82F100FC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F100FC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,28760
	ctx.r8.s64 = ctx.r10.s64 + 28760;
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
	// addi r3,r9,-1432
	ctx.r3.s64 = ctx.r9.s64 + -1432;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F10130"))) PPC_WEAK_FUNC(sub_82F10130);
PPC_FUNC_IMPL(__imp__sub_82F10130) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,24444
	ctx.r11.s64 = ctx.r11.s64 + 24444;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f10158
	if (!ctx.cr6.eq) goto loc_82F10158;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F10158:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f10164
	if (ctx.cr6.eq) goto loc_82F10164;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F10164:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,28772
	ctx.r8.s64 = ctx.r10.s64 + 28772;
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
	// addi r3,r9,-1416
	ctx.r3.s64 = ctx.r9.s64 + -1416;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F10198"))) PPC_WEAK_FUNC(sub_82F10198);
PPC_FUNC_IMPL(__imp__sub_82F10198) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,24464
	ctx.r11.s64 = ctx.r11.s64 + 24464;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f101c0
	if (!ctx.cr6.eq) goto loc_82F101C0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F101C0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f101cc
	if (ctx.cr6.eq) goto loc_82F101CC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F101CC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,28784
	ctx.r8.s64 = ctx.r10.s64 + 28784;
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
	// addi r3,r9,-1400
	ctx.r3.s64 = ctx.r9.s64 + -1400;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F10200"))) PPC_WEAK_FUNC(sub_82F10200);
PPC_FUNC_IMPL(__imp__sub_82F10200) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,24484
	ctx.r11.s64 = ctx.r11.s64 + 24484;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f10228
	if (!ctx.cr6.eq) goto loc_82F10228;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F10228:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f10234
	if (ctx.cr6.eq) goto loc_82F10234;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F10234:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,28796
	ctx.r8.s64 = ctx.r10.s64 + 28796;
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
	// addi r3,r9,-1384
	ctx.r3.s64 = ctx.r9.s64 + -1384;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F10268"))) PPC_WEAK_FUNC(sub_82F10268);
PPC_FUNC_IMPL(__imp__sub_82F10268) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,24504
	ctx.r11.s64 = ctx.r11.s64 + 24504;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f10290
	if (!ctx.cr6.eq) goto loc_82F10290;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F10290:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f1029c
	if (ctx.cr6.eq) goto loc_82F1029C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F1029C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,28808
	ctx.r8.s64 = ctx.r10.s64 + 28808;
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
	// addi r3,r9,-1368
	ctx.r3.s64 = ctx.r9.s64 + -1368;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F102D0"))) PPC_WEAK_FUNC(sub_82F102D0);
PPC_FUNC_IMPL(__imp__sub_82F102D0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,24524
	ctx.r11.s64 = ctx.r11.s64 + 24524;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f102f8
	if (!ctx.cr6.eq) goto loc_82F102F8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F102F8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f10304
	if (ctx.cr6.eq) goto loc_82F10304;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F10304:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,28820
	ctx.r8.s64 = ctx.r10.s64 + 28820;
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
	// addi r3,r9,-1352
	ctx.r3.s64 = ctx.r9.s64 + -1352;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F10338"))) PPC_WEAK_FUNC(sub_82F10338);
PPC_FUNC_IMPL(__imp__sub_82F10338) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,24544
	ctx.r11.s64 = ctx.r11.s64 + 24544;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f10360
	if (!ctx.cr6.eq) goto loc_82F10360;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F10360:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f1036c
	if (ctx.cr6.eq) goto loc_82F1036C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F1036C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,28832
	ctx.r8.s64 = ctx.r10.s64 + 28832;
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
	// addi r3,r9,-1336
	ctx.r3.s64 = ctx.r9.s64 + -1336;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F103A0"))) PPC_WEAK_FUNC(sub_82F103A0);
PPC_FUNC_IMPL(__imp__sub_82F103A0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,24564
	ctx.r11.s64 = ctx.r11.s64 + 24564;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f103c8
	if (!ctx.cr6.eq) goto loc_82F103C8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F103C8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f103d4
	if (ctx.cr6.eq) goto loc_82F103D4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F103D4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,28844
	ctx.r8.s64 = ctx.r10.s64 + 28844;
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
	// addi r3,r9,-1320
	ctx.r3.s64 = ctx.r9.s64 + -1320;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F10408"))) PPC_WEAK_FUNC(sub_82F10408);
PPC_FUNC_IMPL(__imp__sub_82F10408) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,24584
	ctx.r11.s64 = ctx.r11.s64 + 24584;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f10430
	if (!ctx.cr6.eq) goto loc_82F10430;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F10430:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f1043c
	if (ctx.cr6.eq) goto loc_82F1043C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F1043C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,28856
	ctx.r8.s64 = ctx.r10.s64 + 28856;
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
	// addi r3,r9,-1304
	ctx.r3.s64 = ctx.r9.s64 + -1304;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F10470"))) PPC_WEAK_FUNC(sub_82F10470);
PPC_FUNC_IMPL(__imp__sub_82F10470) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,24604
	ctx.r11.s64 = ctx.r11.s64 + 24604;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f10498
	if (!ctx.cr6.eq) goto loc_82F10498;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F10498:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f104a4
	if (ctx.cr6.eq) goto loc_82F104A4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F104A4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,28872
	ctx.r8.s64 = ctx.r10.s64 + 28872;
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
	// addi r3,r9,-1288
	ctx.r3.s64 = ctx.r9.s64 + -1288;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F104D8"))) PPC_WEAK_FUNC(sub_82F104D8);
PPC_FUNC_IMPL(__imp__sub_82F104D8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,24624
	ctx.r11.s64 = ctx.r11.s64 + 24624;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f10500
	if (!ctx.cr6.eq) goto loc_82F10500;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F10500:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f1050c
	if (ctx.cr6.eq) goto loc_82F1050C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F1050C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,28900
	ctx.r8.s64 = ctx.r10.s64 + 28900;
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
	// addi r3,r9,-1272
	ctx.r3.s64 = ctx.r9.s64 + -1272;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F10540"))) PPC_WEAK_FUNC(sub_82F10540);
PPC_FUNC_IMPL(__imp__sub_82F10540) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,24644
	ctx.r11.s64 = ctx.r11.s64 + 24644;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f10568
	if (!ctx.cr6.eq) goto loc_82F10568;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F10568:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f10574
	if (ctx.cr6.eq) goto loc_82F10574;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F10574:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,28924
	ctx.r8.s64 = ctx.r10.s64 + 28924;
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
	// addi r3,r9,-1256
	ctx.r3.s64 = ctx.r9.s64 + -1256;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F105A8"))) PPC_WEAK_FUNC(sub_82F105A8);
PPC_FUNC_IMPL(__imp__sub_82F105A8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,24664
	ctx.r11.s64 = ctx.r11.s64 + 24664;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f105d0
	if (!ctx.cr6.eq) goto loc_82F105D0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F105D0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f105dc
	if (ctx.cr6.eq) goto loc_82F105DC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F105DC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,28948
	ctx.r8.s64 = ctx.r10.s64 + 28948;
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
	// addi r3,r9,-1240
	ctx.r3.s64 = ctx.r9.s64 + -1240;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F10610"))) PPC_WEAK_FUNC(sub_82F10610);
PPC_FUNC_IMPL(__imp__sub_82F10610) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,24684
	ctx.r11.s64 = ctx.r11.s64 + 24684;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f10638
	if (!ctx.cr6.eq) goto loc_82F10638;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F10638:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f10644
	if (ctx.cr6.eq) goto loc_82F10644;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F10644:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,28968
	ctx.r8.s64 = ctx.r10.s64 + 28968;
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
	// addi r3,r9,-1224
	ctx.r3.s64 = ctx.r9.s64 + -1224;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F10678"))) PPC_WEAK_FUNC(sub_82F10678);
PPC_FUNC_IMPL(__imp__sub_82F10678) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,24704
	ctx.r11.s64 = ctx.r11.s64 + 24704;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f106a0
	if (!ctx.cr6.eq) goto loc_82F106A0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F106A0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f106ac
	if (ctx.cr6.eq) goto loc_82F106AC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F106AC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,28988
	ctx.r8.s64 = ctx.r10.s64 + 28988;
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
	// addi r3,r9,-1208
	ctx.r3.s64 = ctx.r9.s64 + -1208;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F106E0"))) PPC_WEAK_FUNC(sub_82F106E0);
PPC_FUNC_IMPL(__imp__sub_82F106E0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,24724
	ctx.r11.s64 = ctx.r11.s64 + 24724;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f10708
	if (!ctx.cr6.eq) goto loc_82F10708;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F10708:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f10714
	if (ctx.cr6.eq) goto loc_82F10714;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F10714:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,29004
	ctx.r8.s64 = ctx.r10.s64 + 29004;
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
	// addi r3,r9,-1192
	ctx.r3.s64 = ctx.r9.s64 + -1192;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F10748"))) PPC_WEAK_FUNC(sub_82F10748);
PPC_FUNC_IMPL(__imp__sub_82F10748) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,24744
	ctx.r11.s64 = ctx.r11.s64 + 24744;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f10770
	if (!ctx.cr6.eq) goto loc_82F10770;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F10770:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f1077c
	if (ctx.cr6.eq) goto loc_82F1077C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F1077C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,29020
	ctx.r8.s64 = ctx.r10.s64 + 29020;
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
	// addi r3,r9,-1176
	ctx.r3.s64 = ctx.r9.s64 + -1176;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F107B0"))) PPC_WEAK_FUNC(sub_82F107B0);
PPC_FUNC_IMPL(__imp__sub_82F107B0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,24764
	ctx.r11.s64 = ctx.r11.s64 + 24764;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f107d8
	if (!ctx.cr6.eq) goto loc_82F107D8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F107D8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f107e4
	if (ctx.cr6.eq) goto loc_82F107E4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F107E4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,29032
	ctx.r8.s64 = ctx.r10.s64 + 29032;
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
	// addi r3,r9,-1160
	ctx.r3.s64 = ctx.r9.s64 + -1160;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F10818"))) PPC_WEAK_FUNC(sub_82F10818);
PPC_FUNC_IMPL(__imp__sub_82F10818) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,24784
	ctx.r11.s64 = ctx.r11.s64 + 24784;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f10840
	if (!ctx.cr6.eq) goto loc_82F10840;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F10840:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f1084c
	if (ctx.cr6.eq) goto loc_82F1084C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F1084C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,29056
	ctx.r8.s64 = ctx.r10.s64 + 29056;
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
	// addi r3,r9,-1144
	ctx.r3.s64 = ctx.r9.s64 + -1144;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F10880"))) PPC_WEAK_FUNC(sub_82F10880);
PPC_FUNC_IMPL(__imp__sub_82F10880) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,24804
	ctx.r11.s64 = ctx.r11.s64 + 24804;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f108a8
	if (!ctx.cr6.eq) goto loc_82F108A8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F108A8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f108b4
	if (ctx.cr6.eq) goto loc_82F108B4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F108B4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,29076
	ctx.r8.s64 = ctx.r10.s64 + 29076;
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
	// addi r3,r9,-1128
	ctx.r3.s64 = ctx.r9.s64 + -1128;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F108E8"))) PPC_WEAK_FUNC(sub_82F108E8);
PPC_FUNC_IMPL(__imp__sub_82F108E8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,24824
	ctx.r11.s64 = ctx.r11.s64 + 24824;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f10910
	if (!ctx.cr6.eq) goto loc_82F10910;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F10910:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f1091c
	if (ctx.cr6.eq) goto loc_82F1091C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F1091C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,29100
	ctx.r8.s64 = ctx.r10.s64 + 29100;
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
	// addi r3,r9,-1112
	ctx.r3.s64 = ctx.r9.s64 + -1112;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F10950"))) PPC_WEAK_FUNC(sub_82F10950);
PPC_FUNC_IMPL(__imp__sub_82F10950) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,24844
	ctx.r11.s64 = ctx.r11.s64 + 24844;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f10978
	if (!ctx.cr6.eq) goto loc_82F10978;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F10978:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f10984
	if (ctx.cr6.eq) goto loc_82F10984;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F10984:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,29112
	ctx.r8.s64 = ctx.r10.s64 + 29112;
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
	// addi r3,r9,-1096
	ctx.r3.s64 = ctx.r9.s64 + -1096;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F109B8"))) PPC_WEAK_FUNC(sub_82F109B8);
PPC_FUNC_IMPL(__imp__sub_82F109B8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,24864
	ctx.r11.s64 = ctx.r11.s64 + 24864;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f109e0
	if (!ctx.cr6.eq) goto loc_82F109E0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F109E0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f109ec
	if (ctx.cr6.eq) goto loc_82F109EC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F109EC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,29140
	ctx.r8.s64 = ctx.r10.s64 + 29140;
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
	// addi r3,r9,-1080
	ctx.r3.s64 = ctx.r9.s64 + -1080;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F10A20"))) PPC_WEAK_FUNC(sub_82F10A20);
PPC_FUNC_IMPL(__imp__sub_82F10A20) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,24884
	ctx.r11.s64 = ctx.r11.s64 + 24884;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f10a48
	if (!ctx.cr6.eq) goto loc_82F10A48;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F10A48:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f10a54
	if (ctx.cr6.eq) goto loc_82F10A54;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F10A54:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,29172
	ctx.r8.s64 = ctx.r10.s64 + 29172;
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
	// addi r3,r9,-1064
	ctx.r3.s64 = ctx.r9.s64 + -1064;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F10A88"))) PPC_WEAK_FUNC(sub_82F10A88);
PPC_FUNC_IMPL(__imp__sub_82F10A88) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,24904
	ctx.r11.s64 = ctx.r11.s64 + 24904;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f10ab0
	if (!ctx.cr6.eq) goto loc_82F10AB0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F10AB0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f10abc
	if (ctx.cr6.eq) goto loc_82F10ABC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F10ABC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,29196
	ctx.r8.s64 = ctx.r10.s64 + 29196;
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
	// addi r3,r9,-1048
	ctx.r3.s64 = ctx.r9.s64 + -1048;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F10AF0"))) PPC_WEAK_FUNC(sub_82F10AF0);
PPC_FUNC_IMPL(__imp__sub_82F10AF0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,24924
	ctx.r11.s64 = ctx.r11.s64 + 24924;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f10b18
	if (!ctx.cr6.eq) goto loc_82F10B18;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F10B18:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f10b24
	if (ctx.cr6.eq) goto loc_82F10B24;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F10B24:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,29224
	ctx.r8.s64 = ctx.r10.s64 + 29224;
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
	// addi r3,r9,-1032
	ctx.r3.s64 = ctx.r9.s64 + -1032;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F10B58"))) PPC_WEAK_FUNC(sub_82F10B58);
PPC_FUNC_IMPL(__imp__sub_82F10B58) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,24944
	ctx.r11.s64 = ctx.r11.s64 + 24944;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f10b80
	if (!ctx.cr6.eq) goto loc_82F10B80;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F10B80:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f10b8c
	if (ctx.cr6.eq) goto loc_82F10B8C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F10B8C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,29248
	ctx.r8.s64 = ctx.r10.s64 + 29248;
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
	// addi r3,r9,-1016
	ctx.r3.s64 = ctx.r9.s64 + -1016;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F10BC0"))) PPC_WEAK_FUNC(sub_82F10BC0);
PPC_FUNC_IMPL(__imp__sub_82F10BC0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,24964
	ctx.r11.s64 = ctx.r11.s64 + 24964;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f10be8
	if (!ctx.cr6.eq) goto loc_82F10BE8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F10BE8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f10bf4
	if (ctx.cr6.eq) goto loc_82F10BF4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F10BF4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,29272
	ctx.r8.s64 = ctx.r10.s64 + 29272;
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
	// addi r3,r9,-1000
	ctx.r3.s64 = ctx.r9.s64 + -1000;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F10C28"))) PPC_WEAK_FUNC(sub_82F10C28);
PPC_FUNC_IMPL(__imp__sub_82F10C28) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,24984
	ctx.r11.s64 = ctx.r11.s64 + 24984;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f10c50
	if (!ctx.cr6.eq) goto loc_82F10C50;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F10C50:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f10c5c
	if (ctx.cr6.eq) goto loc_82F10C5C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F10C5C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,29308
	ctx.r8.s64 = ctx.r10.s64 + 29308;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,12
	ctx.r10.s64 = 12;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-984
	ctx.r3.s64 = ctx.r9.s64 + -984;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F10C90"))) PPC_WEAK_FUNC(sub_82F10C90);
PPC_FUNC_IMPL(__imp__sub_82F10C90) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,25004
	ctx.r11.s64 = ctx.r11.s64 + 25004;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f10cb8
	if (!ctx.cr6.eq) goto loc_82F10CB8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F10CB8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f10cc4
	if (ctx.cr6.eq) goto loc_82F10CC4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F10CC4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,29332
	ctx.r8.s64 = ctx.r10.s64 + 29332;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,13
	ctx.r10.s64 = 13;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-968
	ctx.r3.s64 = ctx.r9.s64 + -968;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F10CF8"))) PPC_WEAK_FUNC(sub_82F10CF8);
PPC_FUNC_IMPL(__imp__sub_82F10CF8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,25024
	ctx.r11.s64 = ctx.r11.s64 + 25024;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f10d20
	if (!ctx.cr6.eq) goto loc_82F10D20;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F10D20:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f10d2c
	if (ctx.cr6.eq) goto loc_82F10D2C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F10D2C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,29356
	ctx.r8.s64 = ctx.r10.s64 + 29356;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,14
	ctx.r10.s64 = 14;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-952
	ctx.r3.s64 = ctx.r9.s64 + -952;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F10D60"))) PPC_WEAK_FUNC(sub_82F10D60);
PPC_FUNC_IMPL(__imp__sub_82F10D60) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,25044
	ctx.r11.s64 = ctx.r11.s64 + 25044;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f10d88
	if (!ctx.cr6.eq) goto loc_82F10D88;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F10D88:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f10d94
	if (ctx.cr6.eq) goto loc_82F10D94;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F10D94:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,29380
	ctx.r8.s64 = ctx.r10.s64 + 29380;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,15
	ctx.r10.s64 = 15;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-936
	ctx.r3.s64 = ctx.r9.s64 + -936;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F10DC8"))) PPC_WEAK_FUNC(sub_82F10DC8);
PPC_FUNC_IMPL(__imp__sub_82F10DC8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,25064
	ctx.r11.s64 = ctx.r11.s64 + 25064;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f10df0
	if (!ctx.cr6.eq) goto loc_82F10DF0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F10DF0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f10dfc
	if (ctx.cr6.eq) goto loc_82F10DFC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F10DFC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,29408
	ctx.r8.s64 = ctx.r10.s64 + 29408;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,16
	ctx.r10.s64 = 16;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-920
	ctx.r3.s64 = ctx.r9.s64 + -920;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F10E30"))) PPC_WEAK_FUNC(sub_82F10E30);
PPC_FUNC_IMPL(__imp__sub_82F10E30) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,25084
	ctx.r11.s64 = ctx.r11.s64 + 25084;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f10e58
	if (!ctx.cr6.eq) goto loc_82F10E58;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F10E58:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f10e64
	if (ctx.cr6.eq) goto loc_82F10E64;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F10E64:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,29436
	ctx.r8.s64 = ctx.r10.s64 + 29436;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,17
	ctx.r10.s64 = 17;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-904
	ctx.r3.s64 = ctx.r9.s64 + -904;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F10E98"))) PPC_WEAK_FUNC(sub_82F10E98);
PPC_FUNC_IMPL(__imp__sub_82F10E98) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,25104
	ctx.r11.s64 = ctx.r11.s64 + 25104;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f10ec0
	if (!ctx.cr6.eq) goto loc_82F10EC0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F10EC0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f10ecc
	if (ctx.cr6.eq) goto loc_82F10ECC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F10ECC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,29456
	ctx.r8.s64 = ctx.r10.s64 + 29456;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,18
	ctx.r10.s64 = 18;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-888
	ctx.r3.s64 = ctx.r9.s64 + -888;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F10F00"))) PPC_WEAK_FUNC(sub_82F10F00);
PPC_FUNC_IMPL(__imp__sub_82F10F00) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,25124
	ctx.r11.s64 = ctx.r11.s64 + 25124;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f10f28
	if (!ctx.cr6.eq) goto loc_82F10F28;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F10F28:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f10f34
	if (ctx.cr6.eq) goto loc_82F10F34;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F10F34:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,29476
	ctx.r8.s64 = ctx.r10.s64 + 29476;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,19
	ctx.r10.s64 = 19;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-872
	ctx.r3.s64 = ctx.r9.s64 + -872;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F10F68"))) PPC_WEAK_FUNC(sub_82F10F68);
PPC_FUNC_IMPL(__imp__sub_82F10F68) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,25144
	ctx.r11.s64 = ctx.r11.s64 + 25144;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f10f90
	if (!ctx.cr6.eq) goto loc_82F10F90;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F10F90:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f10f9c
	if (ctx.cr6.eq) goto loc_82F10F9C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F10F9C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,29496
	ctx.r8.s64 = ctx.r10.s64 + 29496;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,20
	ctx.r10.s64 = 20;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-856
	ctx.r3.s64 = ctx.r9.s64 + -856;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F10FD0"))) PPC_WEAK_FUNC(sub_82F10FD0);
PPC_FUNC_IMPL(__imp__sub_82F10FD0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,25164
	ctx.r11.s64 = ctx.r11.s64 + 25164;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f10ff8
	if (!ctx.cr6.eq) goto loc_82F10FF8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F10FF8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f11004
	if (ctx.cr6.eq) goto loc_82F11004;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F11004:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,29516
	ctx.r8.s64 = ctx.r10.s64 + 29516;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,21
	ctx.r10.s64 = 21;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-840
	ctx.r3.s64 = ctx.r9.s64 + -840;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F11038"))) PPC_WEAK_FUNC(sub_82F11038);
PPC_FUNC_IMPL(__imp__sub_82F11038) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,25184
	ctx.r11.s64 = ctx.r11.s64 + 25184;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f11060
	if (!ctx.cr6.eq) goto loc_82F11060;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F11060:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f1106c
	if (ctx.cr6.eq) goto loc_82F1106C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F1106C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,29536
	ctx.r8.s64 = ctx.r10.s64 + 29536;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,22
	ctx.r10.s64 = 22;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-824
	ctx.r3.s64 = ctx.r9.s64 + -824;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F110A0"))) PPC_WEAK_FUNC(sub_82F110A0);
PPC_FUNC_IMPL(__imp__sub_82F110A0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,25204
	ctx.r11.s64 = ctx.r11.s64 + 25204;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f110c8
	if (!ctx.cr6.eq) goto loc_82F110C8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F110C8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f110d4
	if (ctx.cr6.eq) goto loc_82F110D4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F110D4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,29556
	ctx.r8.s64 = ctx.r10.s64 + 29556;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,23
	ctx.r10.s64 = 23;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-808
	ctx.r3.s64 = ctx.r9.s64 + -808;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F11108"))) PPC_WEAK_FUNC(sub_82F11108);
PPC_FUNC_IMPL(__imp__sub_82F11108) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,25224
	ctx.r11.s64 = ctx.r11.s64 + 25224;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f11130
	if (!ctx.cr6.eq) goto loc_82F11130;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F11130:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f1113c
	if (ctx.cr6.eq) goto loc_82F1113C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F1113C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,29576
	ctx.r8.s64 = ctx.r10.s64 + 29576;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,24
	ctx.r10.s64 = 24;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-792
	ctx.r3.s64 = ctx.r9.s64 + -792;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F11170"))) PPC_WEAK_FUNC(sub_82F11170);
PPC_FUNC_IMPL(__imp__sub_82F11170) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,25244
	ctx.r11.s64 = ctx.r11.s64 + 25244;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f11198
	if (!ctx.cr6.eq) goto loc_82F11198;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F11198:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f111a4
	if (ctx.cr6.eq) goto loc_82F111A4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F111A4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,29596
	ctx.r8.s64 = ctx.r10.s64 + 29596;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,25
	ctx.r10.s64 = 25;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-776
	ctx.r3.s64 = ctx.r9.s64 + -776;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F111D8"))) PPC_WEAK_FUNC(sub_82F111D8);
PPC_FUNC_IMPL(__imp__sub_82F111D8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,25264
	ctx.r11.s64 = ctx.r11.s64 + 25264;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f11200
	if (!ctx.cr6.eq) goto loc_82F11200;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F11200:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f1120c
	if (ctx.cr6.eq) goto loc_82F1120C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F1120C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,29624
	ctx.r8.s64 = ctx.r10.s64 + 29624;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,26
	ctx.r10.s64 = 26;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-760
	ctx.r3.s64 = ctx.r9.s64 + -760;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F11240"))) PPC_WEAK_FUNC(sub_82F11240);
PPC_FUNC_IMPL(__imp__sub_82F11240) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,25284
	ctx.r11.s64 = ctx.r11.s64 + 25284;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f11268
	if (!ctx.cr6.eq) goto loc_82F11268;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F11268:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f11274
	if (ctx.cr6.eq) goto loc_82F11274;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F11274:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,29652
	ctx.r8.s64 = ctx.r10.s64 + 29652;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,27
	ctx.r10.s64 = 27;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-744
	ctx.r3.s64 = ctx.r9.s64 + -744;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F112A8"))) PPC_WEAK_FUNC(sub_82F112A8);
PPC_FUNC_IMPL(__imp__sub_82F112A8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,25304
	ctx.r11.s64 = ctx.r11.s64 + 25304;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f112d0
	if (!ctx.cr6.eq) goto loc_82F112D0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F112D0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f112dc
	if (ctx.cr6.eq) goto loc_82F112DC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F112DC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,29680
	ctx.r8.s64 = ctx.r10.s64 + 29680;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,28
	ctx.r10.s64 = 28;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-728
	ctx.r3.s64 = ctx.r9.s64 + -728;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F11310"))) PPC_WEAK_FUNC(sub_82F11310);
PPC_FUNC_IMPL(__imp__sub_82F11310) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,25324
	ctx.r11.s64 = ctx.r11.s64 + 25324;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f11338
	if (!ctx.cr6.eq) goto loc_82F11338;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F11338:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f11344
	if (ctx.cr6.eq) goto loc_82F11344;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F11344:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,29708
	ctx.r8.s64 = ctx.r10.s64 + 29708;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,29
	ctx.r10.s64 = 29;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-712
	ctx.r3.s64 = ctx.r9.s64 + -712;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F11378"))) PPC_WEAK_FUNC(sub_82F11378);
PPC_FUNC_IMPL(__imp__sub_82F11378) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,25344
	ctx.r11.s64 = ctx.r11.s64 + 25344;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f113a0
	if (!ctx.cr6.eq) goto loc_82F113A0;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F113A0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f113ac
	if (ctx.cr6.eq) goto loc_82F113AC;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F113AC:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,29748
	ctx.r8.s64 = ctx.r10.s64 + 29748;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r10,30
	ctx.r10.s64 = 30;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r9,-696
	ctx.r3.s64 = ctx.r9.s64 + -696;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F113E0"))) PPC_WEAK_FUNC(sub_82F113E0);
PPC_FUNC_IMPL(__imp__sub_82F113E0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,25364
	ctx.r11.s64 = ctx.r11.s64 + 25364;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f11408
	if (!ctx.cr6.eq) goto loc_82F11408;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F11408:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f11414
	if (ctx.cr6.eq) goto loc_82F11414;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F11414:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,29784
	ctx.r8.s64 = ctx.r10.s64 + 29784;
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
	// addi r3,r9,-680
	ctx.r3.s64 = ctx.r9.s64 + -680;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F11448"))) PPC_WEAK_FUNC(sub_82F11448);
PPC_FUNC_IMPL(__imp__sub_82F11448) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,25384
	ctx.r11.s64 = ctx.r11.s64 + 25384;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f11470
	if (!ctx.cr6.eq) goto loc_82F11470;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F11470:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f1147c
	if (ctx.cr6.eq) goto loc_82F1147C;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F1147C:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,29812
	ctx.r8.s64 = ctx.r10.s64 + 29812;
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
	// addi r3,r9,-664
	ctx.r3.s64 = ctx.r9.s64 + -664;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F114B0"))) PPC_WEAK_FUNC(sub_82F114B0);
PPC_FUNC_IMPL(__imp__sub_82F114B0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,25404
	ctx.r11.s64 = ctx.r11.s64 + 25404;
	// lwz r9,19580(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19580);
	// lwz r8,19576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19576);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82f114d8
	if (!ctx.cr6.eq) goto loc_82F114D8;
	// stw r11,19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19576, ctx.r11.u32);
loc_82F114D8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f114e4
	if (ctx.cr6.eq) goto loc_82F114E4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82F114E4:
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,19580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19580, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r9,27336
	ctx.r9.s64 = ctx.r9.s64 + 27336;
	// addi r8,r10,29836
	ctx.r8.s64 = ctx.r10.s64 + 29836;
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
	// addi r3,r9,-648
	ctx.r3.s64 = ctx.r9.s64 + -648;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

