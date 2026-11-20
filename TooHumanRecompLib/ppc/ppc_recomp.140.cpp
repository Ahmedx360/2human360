#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_828A8AA0"))) PPC_WEAK_FUNC(sub_828A8AA0);
PPC_FUNC_IMPL(__imp__sub_828A8AA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x828A8AA8;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x829bc540
	ctx.lr = 0x828A8AB4;
	sub_829BC540(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r11,r11,14872
	ctx.r11.s64 = ctx.r11.s64 + 14872;
	// addi r10,r10,16132
	ctx.r10.s64 = ctx.r10.s64 + 16132;
	// addi r9,r9,16184
	ctx.r9.s64 = ctx.r9.s64 + 16184;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// li r3,192
	ctx.r3.s64 = 192;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// bl 0x82333900
	ctx.lr = 0x828A8AE0;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r30,0
	ctx.r30.s64 = 0;
	// beq 0x828a8b34
	if (ctx.cr0.eq) goto loc_828A8B34;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r11,r11,-25516
	ctx.r11.s64 = ctx.r11.s64 + -25516;
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// lfs f0,-32488(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32488);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// stw r30,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r30.u32);
	// stw r30,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r30.u32);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stw r31,184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 184, ctx.r31.u32);
	// stw r30,188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 188, ctx.r30.u32);
	// stw r30,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r30.u32);
	// b 0x828a8b38
	goto loc_828A8B38;
loc_828A8B34:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_828A8B38:
	// stw r11,1408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1408, ctx.r11.u32);
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82333900
	ctx.lr = 0x828A8B44;
	sub_82333900(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x828a8b68
	if (ctx.cr0.eq) goto loc_828A8B68;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// addi r11,r11,15852
	ctx.r11.s64 = ctx.r11.s64 + 15852;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bl 0x8312e7dc
	ctx.lr = 0x828A8B60;
	sub_8312E7DC(ctx, base);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// b 0x828a8b6c
	goto loc_828A8B6C;
loc_828A8B68:
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
loc_828A8B6C:
	// lwz r7,1408(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// stw r9,1484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1484, ctx.r9.u32);
	// li r11,30000
	ctx.r11.s64 = 30000;
	// stw r30,1412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1412, ctx.r30.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,1416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1416, ctx.r30.u32);
	// li r9,2048
	ctx.r9.s64 = 2048;
	// stw r30,1420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1420, ctx.r30.u32);
	// stw r30,1432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1432, ctx.r30.u32);
	// lfs f0,904(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,1436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1436, ctx.r30.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stw r30,1440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1440, ctx.r30.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stw r30,40(r7)
	PPC_STORE_U32(ctx.r7.u32 + 40, ctx.r30.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r28,88(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r7,1408(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// stw r30,1444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1444, ctx.r30.u32);
	// lwz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r30,44(r7)
	PPC_STORE_U32(ctx.r7.u32 + 44, ctx.r30.u32);
	// lwz r7,1408(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// stw r30,48(r7)
	PPC_STORE_U32(ctx.r7.u32 + 48, ctx.r30.u32);
	// lwz r7,1408(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// stw r30,1448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1448, ctx.r30.u32);
	// stw r30,52(r7)
	PPC_STORE_U32(ctx.r7.u32 + 52, ctx.r30.u32);
	// stw r11,928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 928, ctx.r11.u32);
	// stw r11,932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 932, ctx.r11.u32);
	// lwz r11,1408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// stw r10,1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1456, ctx.r10.u32);
	// stw r10,1460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1460, ctx.r10.u32);
	// stw r30,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r30.u32);
	// stw r30,1468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1468, ctx.r30.u32);
	// stb r30,1476(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1476, ctx.r30.u8);
	// stw r9,936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 936, ctx.r9.u32);
	// stw r30,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r30.u32);
	// lwz r11,1408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// stw r30,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r30.u32);
	// lwz r11,1408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// stw r30,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r30.u32);
	// lwz r11,1408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// stw r30,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r30.u32);
	// lwz r11,1408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// stw r30,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r30.u32);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,1408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// stw r30,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r30.u32);
	// lwz r11,1408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// stfs f0,68(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// lwz r11,1408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// stw r10,116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 116, ctx.r10.u32);
	// stw r8,120(r11)
	PPC_STORE_U32(ctx.r11.u32 + 120, ctx.r8.u32);
	// stw r6,124(r11)
	PPC_STORE_U32(ctx.r11.u32 + 124, ctx.r6.u32);
	// lwz r11,1408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// stw r3,136(r11)
	PPC_STORE_U32(ctx.r11.u32 + 136, ctx.r3.u32);
	// stw r5,128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 128, ctx.r5.u32);
	// stw r4,132(r11)
	PPC_STORE_U32(ctx.r11.u32 + 132, ctx.r4.u32);
	// lwz r11,1408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// stw r27,156(r11)
	PPC_STORE_U32(ctx.r11.u32 + 156, ctx.r27.u32);
	// stw r29,160(r11)
	PPC_STORE_U32(ctx.r11.u32 + 160, ctx.r29.u32);
	// stw r28,164(r11)
	PPC_STORE_U32(ctx.r11.u32 + 164, ctx.r28.u32);
	// lwz r11,1408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// stfs f0,32(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lwz r11,1408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r30,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r30.u32);
	// beq cr6,0x828a8cc4
	if (ctx.cr6.eq) goto loc_828A8CC4;
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82332c38
	ctx.lr = 0x828A8CC4;
	sub_82332C38(ctx, base);
loc_828A8CC4:
	// lwz r11,1408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// lwz r11,1408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// stw r30,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r30.u32);
	// lwz r11,1408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// stw r30,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r30.u32);
	// stw r30,1492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1492, ctx.r30.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828A8CF0"))) PPC_WEAK_FUNC(sub_828A8CF0);
PPC_FUNC_IMPL(__imp__sub_828A8CF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9e8
	ctx.lr = 0x828A8CF8;
	__savegprlr_20(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x824a2740
	ctx.lr = 0x828A8D04;
	sub_824A2740(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828a9000
	if (ctx.cr0.eq) goto loc_828A9000;
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x828a9000
	if (ctx.cr6.eq) goto loc_828A9000;
	// bl 0x8247def0
	ctx.lr = 0x828A8D1C;
	sub_8247DEF0(ctx, base);
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
	ctx.lr = 0x828A8D34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x828a8d44
	if (!ctx.cr0.eq) goto loc_828A8D44;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_828A8D44:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r30.u32);
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r30,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r30.u32);
	// addi r5,r10,21732
	ctx.r5.s64 = ctx.r10.s64 + 21732;
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// stw r30,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r30.u32);
	// stw r30,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r30.u32);
	// stw r30,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r30.u32);
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// bl 0x82650eb0
	ctx.lr = 0x828A8DA4;
	sub_82650EB0(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r5,r11,-25892
	ctx.r5.s64 = ctx.r11.s64 + -25892;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82650eb0
	ctx.lr = 0x828A8DB8;
	sub_82650EB0(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r5,r11,-25868
	ctx.r5.s64 = ctx.r11.s64 + -25868;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82650eb0
	ctx.lr = 0x828A8DCC;
	sub_82650EB0(ctx, base);
	// lwz r29,172(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A8DE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828a8e08
	if (ctx.cr0.eq) goto loc_828A8E08;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A8E00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x828a8e0c
	goto loc_828A8E0C;
loc_828A8E08:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_828A8E0C:
	// lis r22,-31949
	ctx.r22.s64 = -2093809664;
	// lwz r11,13024(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x828A8E1C;
	sub_829B9720(ctx, base);
	// bl 0x82416348
	ctx.lr = 0x828A8E20;
	sub_82416348(ctx, base);
	// mr. r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq 0x828a8fe8
	if (ctx.cr0.eq) goto loc_828A8FE8;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828a8e8c
	if (ctx.cr6.eq) goto loc_828A8E8C;
	// lwz r29,108(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A8E4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828a8e70
	if (ctx.cr0.eq) goto loc_828A8E70;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A8E68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x828a8e74
	goto loc_828A8E74;
loc_828A8E70:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_828A8E74:
	// lwz r11,13024(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x828A8E80;
	sub_829B9720(ctx, base);
	// bl 0x82416348
	ctx.lr = 0x828A8E84;
	sub_82416348(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// b 0x828a8e90
	goto loc_828A8E90;
loc_828A8E8C:
	// mr r23,r30
	ctx.r23.u64 = ctx.r30.u64;
loc_828A8E90:
	// lwz r11,80(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 80);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// stw r11,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r11.u32);
	// beq cr6,0x828a8ea8
	if (ctx.cr6.eq) goto loc_828A8EA8;
	// lwz r11,80(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 80);
	// b 0x828a8eac
	goto loc_828A8EAC;
loc_828A8EA8:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_828A8EAC:
	// stw r11,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r11.u32);
	// addi r26,r31,224
	ctx.r26.s64 = ctx.r31.s64 + 224;
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r30,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r30.u32);
	// beq cr6,0x828a8ed8
	if (ctx.cr6.eq) goto loc_828A8ED8;
	// stw r30,20(r26)
	PPC_STORE_U32(ctx.r26.u32 + 20, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82332c38
	ctx.lr = 0x828A8ED8;
	sub_82332C38(ctx, base);
loc_828A8ED8:
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x828a8fe8
	if (!ctx.cr6.gt) goto loc_828A8FE8;
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// lwz r25,140(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r27,r11,-25616
	ctx.r27.s64 = ctx.r11.s64 + -25616;
loc_828A8EF4:
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A8F08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828a8f2c
	if (ctx.cr0.eq) goto loc_828A8F2C;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A8F24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x828a8f30
	goto loc_828A8F30;
loc_828A8F2C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_828A8F30:
	// lwz r11,13024(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x828A8F3C;
	sub_829B9720(ctx, base);
	// bl 0x824381f0
	ctx.lr = 0x828A8F40;
	sub_824381F0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828a8fdc
	if (ctx.cr0.eq) goto loc_828A8FDC;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x828A8F5C;
	sub_82410060(ctx, base);
	// lwz r3,1608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// bl 0x82409c40
	ctx.lr = 0x828A8F64;
	sub_82409C40(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x828a8fdc
	if (ctx.cr0.eq) goto loc_828A8FDC;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82833108
	ctx.lr = 0x828A8F74;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828a8fcc
	if (ctx.cr0.eq) goto loc_828A8FCC;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x828a8f8c
	if (ctx.cr6.eq) goto loc_828A8F8C;
	// lwz r29,80(r23)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r23.u32 + 80);
	// b 0x828a8f90
	goto loc_828A8F90;
loc_828A8F8C:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_828A8F90:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r20,80(r21)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r21.u32 + 80);
	// lwz r28,80(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 80);
	// bl 0x82833180
	ctx.lr = 0x828A8FA0;
	sub_82833180(ctx, base);
	// lis r11,-8531
	ctx.r11.s64 = -559087616;
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// ori r11,r11,47806
	ctx.r11.u64 = ctx.r11.u64 | 47806;
	// stw r20,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r20.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// b 0x828a8fd0
	goto loc_828A8FD0;
loc_828A8FCC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_828A8FD0:
	// lwz r11,13024(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x828A8FDC;
	sub_82833A30(ctx, base);
loc_828A8FDC:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// bne 0x828a8ef4
	if (!ctx.cr0.eq) goto loc_828A8EF4;
loc_828A8FE8:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8239d768
	ctx.lr = 0x828A8FF0;
	sub_8239D768(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8239d768
	ctx.lr = 0x828A8FF8;
	sub_8239D768(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8239d768
	ctx.lr = 0x828A9000;
	sub_8239D768(ctx, base);
loc_828A9000:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82a4ea38
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828A9008"))) PPC_WEAK_FUNC(sub_828A9008);
PPC_FUNC_IMPL(__imp__sub_828A9008) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1412(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1412);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828a9028
	if (ctx.cr6.eq) goto loc_828A9028;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,724(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 724);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_828A9028:
	// b 0x829c7770
	sub_829C7770(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828A9030"))) PPC_WEAK_FUNC(sub_828A9030);
PPC_FUNC_IMPL(__imp__sub_828A9030) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x829bc7b8
	ctx.lr = 0x828A9048;
	sub_829BC7B8(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r4,r31,1016
	ctx.r4.s64 = ctx.r31.s64 + 1016;
	// addi r5,r11,-25852
	ctx.r5.s64 = ctx.r11.s64 + -25852;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824f9968
	ctx.lr = 0x828A9064;
	sub_824F9968(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A9078"))) PPC_WEAK_FUNC(sub_828A9078);
PPC_FUNC_IMPL(__imp__sub_828A9078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x829c4e48
	ctx.lr = 0x828A9094;
	sub_829C4E48(ctx, base);
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828a90c4
	if (!ctx.cr6.eq) goto loc_828A90C4;
	// addi r11,r31,1412
	ctx.r11.s64 = ctx.r31.s64 + 1412;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r31,424
	ctx.r3.s64 = ctx.r31.s64 + 424;
	// bl 0x82838fd0
	ctx.lr = 0x828A90B8;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
loc_828A90C4:
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

__attribute__((alias("__imp__sub_828A90E0"))) PPC_WEAK_FUNC(sub_828A90E0);
PPC_FUNC_IMPL(__imp__sub_828A90E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x828A90E8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x829c5148
	ctx.lr = 0x828A90F8;
	sub_829C5148(ctx, base);
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828a917c
	if (!ctx.cr6.eq) goto loc_828A917C;
	// addi r30,r31,1412
	ctx.r30.s64 = ctx.r31.s64 + 1412;
	// addi r29,r31,424
	ctx.r29.s64 = ctx.r31.s64 + 424;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82838fd0
	ctx.lr = 0x828A9120;
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
	ctx.lr = 0x828A9144;
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
	ctx.lr = 0x828A9158;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x828a917c
	if (!ctx.cr0.eq) goto loc_828A917C;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82838fd0
	ctx.lr = 0x828A9170;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
loc_828A917C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828A9188"))) PPC_WEAK_FUNC(sub_828A9188);
PPC_FUNC_IMPL(__imp__sub_828A9188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x828a91e8
	if (!ctx.cr6.eq) goto loc_828A91E8;
	// bl 0x829bdc10
	ctx.lr = 0x828A91B0;
	sub_829BDC10(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829c3330
	ctx.lr = 0x828A91B8;
	sub_829C3330(ctx, base);
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
	// addi r3,r31,264
	ctx.r3.s64 = ctx.r31.s64 + 264;
	// bl 0x82332d50
	ctx.lr = 0x828A91D4;
	sub_82332D50(ctx, base);
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828a91e8
	if (ctx.cr0.eq) goto loc_828A91E8;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
loc_828A91E8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A9200"))) PPC_WEAK_FUNC(sub_828A9200);
PPC_FUNC_IMPL(__imp__sub_828A9200) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x828A9208;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// addi r29,r11,264
	ctx.r29.s64 = ctx.r11.s64 + 264;
	// lwz r11,280(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x828a9274
	if (!ctx.cr6.gt) goto loc_828A9274;
	// li r30,0
	ctx.r30.s64 = 0;
loc_828A9230:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x828a9260
	if (!ctx.cr6.eq) goto loc_828A9260;
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
	ctx.lr = 0x828A9258;
	sub_82332CA8(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
loc_828A9260:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828a9230
	if (ctx.cr6.lt) goto loc_828A9230;
loc_828A9274:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x829bd978
	ctx.lr = 0x828A927C;
	sub_829BD978(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828A9288"))) PPC_WEAK_FUNC(sub_828A9288);
PPC_FUNC_IMPL(__imp__sub_828A9288) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r11,r11,14872
	ctx.r11.s64 = ctx.r11.s64 + 14872;
	// lwz r30,1408(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// addi r10,r10,16132
	ctx.r10.s64 = ctx.r10.s64 + 16132;
	// addi r9,r9,16184
	ctx.r9.s64 = ctx.r9.s64 + 16184;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// beq cr6,0x828a92e0
	if (ctx.cr6.eq) goto loc_828A92E0;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x8239d768
	ctx.lr = 0x828A92D8;
	sub_8239D768(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332db8
	ctx.lr = 0x828A92E0;
	sub_82332DB8(ctx, base);
loc_828A92E0:
	// lwz r3,1484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1484);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828a9300
	if (ctx.cr6.eq) goto loc_828A9300;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A9300;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828A9300:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829bc9e8
	ctx.lr = 0x828A9308;
	sub_829BC9E8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A9320"))) PPC_WEAK_FUNC(sub_828A9320);
PPC_FUNC_IMPL(__imp__sub_828A9320) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1412(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1412);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828a9334
	if (ctx.cr6.eq) goto loc_828A9334;
	// lwz r11,1692(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1692);
	// b 0x828a9338
	goto loc_828A9338;
loc_828A9334:
	// li r11,3
	ctx.r11.s64 = 3;
loc_828A9338:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828a9348
	if (!ctx.cr6.eq) goto loc_828A9348;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_828A9348:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828a9368
	if (ctx.cr6.eq) goto loc_828A9368;
	// lwz r10,1692(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1692);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x828a9368
	if (ctx.cr6.eq) goto loc_828A9368;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_828A9368:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A9370"))) PPC_WEAK_FUNC(sub_828A9370);
PPC_FUNC_IMPL(__imp__sub_828A9370) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r11,1080(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1080);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A938C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A93A8"))) PPC_WEAK_FUNC(sub_828A93A8);
PPC_FUNC_IMPL(__imp__sub_828A93A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1412(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1412);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828a93e0
	if (ctx.cr6.eq) goto loc_828A93E0;
	// lwz r9,656(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 656);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r8,660(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 660);
	// lwz r11,664(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 664);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
loc_828A93E0:
	// lwz r11,656(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 656);
	// lwz r10,660(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 660);
	// lwz r9,664(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 664);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A9400"))) PPC_WEAK_FUNC(sub_828A9400);
PPC_FUNC_IMPL(__imp__sub_828A9400) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x828a9424
	if (ctx.cr6.eq) goto loc_828A9424;
	// lwz r11,2112(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 2112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x828a9424
	if (!ctx.cr6.gt) goto loc_828A9424;
	// lwz r11,84(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
loc_828A9424:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A9430"))) PPC_WEAK_FUNC(sub_828A9430);
PPC_FUNC_IMPL(__imp__sub_828A9430) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1416(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1416);
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x828a9444
	if (!ctx.cr6.eq) goto loc_828A9444;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1416(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1416, ctx.r11.u32);
loc_828A9444:
	// cmplw cr6,r5,r3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x828a9454
	if (!ctx.cr6.eq) goto loc_828A9454;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1468(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1468, ctx.r11.u32);
loc_828A9454:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,1412(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1412);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// stw r11,2056(r6)
	PPC_STORE_U32(ctx.r6.u32 + 2056, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A9480"))) PPC_WEAK_FUNC(sub_828A9480);
PPC_FUNC_IMPL(__imp__sub_828A9480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,1412(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1412);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828a94b8
	if (ctx.cr6.eq) goto loc_828A94B8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1236);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A94B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1412, ctx.r11.u32);
loc_828A94B8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A94D0"))) PPC_WEAK_FUNC(sub_828A94D0);
PPC_FUNC_IMPL(__imp__sub_828A94D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1156);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_828A94E0"))) PPC_WEAK_FUNC(sub_828A94E0);
PPC_FUNC_IMPL(__imp__sub_828A94E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1412(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1412);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r3,1748(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1748);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82910d58
	sub_82910D58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828A9500"))) PPC_WEAK_FUNC(sub_828A9500);
PPC_FUNC_IMPL(__imp__sub_828A9500) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A9508"))) PPC_WEAK_FUNC(sub_828A9508);
PPC_FUNC_IMPL(__imp__sub_828A9508) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 492);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A952C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828a956c
	if (ctx.cr0.eq) goto loc_828A956C;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r11,788(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828a9564
	if (ctx.cr6.eq) goto loc_828A9564;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1032(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1032);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A955C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x828a956c
	if (ctx.cr0.eq) goto loc_828A956C;
loc_828A9564:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828a9570
	goto loc_828A9570;
loc_828A956C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828A9570:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A9588"))) PPC_WEAK_FUNC(sub_828A9588);
PPC_FUNC_IMPL(__imp__sub_828A9588) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 492);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A95AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828a95d4
	if (ctx.cr0.eq) goto loc_828A95D4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1032(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1032);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A95C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne 0x828a95d8
	if (!ctx.cr0.eq) goto loc_828A95D8;
loc_828A95D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828A95D8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A95F0"))) PPC_WEAK_FUNC(sub_828A95F0);
PPC_FUNC_IMPL(__imp__sub_828A95F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x828A95F8;
	__savegprlr_29(ctx, base);
	// stfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f29.u64);
	// stfd f30,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x828a97c8
	if (ctx.cr6.eq) goto loc_828A97C8;
	// lwz r29,1412(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1412);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x828a97c8
	if (ctx.cr6.eq) goto loc_828A97C8;
	// lwz r11,1808(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1808);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x828a97c8
	if (!ctx.cr6.eq) goto loc_828A97C8;
	// lwz r11,1416(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1416);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x828a97b0
	if (ctx.cr6.eq) goto loc_828A97B0;
	// lwz r11,1444(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1444);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// cntlzw r8,r11
	ctx.r8.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// addi r11,r29,620
	ctx.r11.s64 = ctx.r29.s64 + 620;
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// lfs f0,16396(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16396);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,1444(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1444, ctx.r8.u32);
	// lfs f12,624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f12.f64 = double(temp.f32);
	// lbz r10,1812(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1812);
	// lfs f13,624(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 624);
	ctx.f13.f64 = double(temp.f32);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// lfs f7,1820(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1820);
	ctx.f7.f64 = double(temp.f32);
	// lfs f11,628(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 628);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f9,628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f12,f9,f11
	ctx.f12.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// lfs f10,908(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 908);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,620(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 620);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f11,620(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f11,f11,f9
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f9.f64));
	// fmuls f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmadds f13,f12,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fsubs f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// fmadds f13,f11,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f13.f64));
	// fsel f0,f9,f0,f10
	ctx.f0.f64 = ctx.f9.f64 >= 0.0 ? ctx.f0.f64 : ctx.f10.f64;
	// fmuls f0,f0,f7
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x828a97c8
	if (ctx.cr6.gt) goto loc_828A97C8;
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,620(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f11,f13,f13,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmadds f11,f12,f12,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f11.f64));
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// bne cr6,0x828a9730
	if (!ctx.cr6.eq) goto loc_828A9730;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lfs f30,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f30.f64 = double(temp.f32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f31,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f31.f64 = double(temp.f32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lfs f29,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f29.f64 = double(temp.f32);
	// b 0x828a9768
	goto loc_828A9768;
loc_828A9730:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f9,16668(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16668);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f11,f9
	ctx.cr6.compare(ctx.f11.f64, ctx.f9.f64);
	// bge cr6,0x828a9754
	if (!ctx.cr6.lt) goto loc_828A9754;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f31,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
	// fmr f29,f31
	ctx.f29.f64 = ctx.f31.f64;
	// b 0x828a9768
	goto loc_828A9768;
loc_828A9754:
	// fsqrts f11,f11
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(sqrt(ctx.f11.f64)));
	// fdivs f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 / ctx.f11.f64));
	// fmuls f31,f11,f12
	ctx.f31.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f30,f0,f11
	ctx.f30.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmuls f29,f13,f11
	ctx.f29.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
loc_828A9768:
	// lwz r11,656(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 656);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,660(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 660);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r9,664(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 664);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x82817bb8
	ctx.lr = 0x828A978C;
	sub_82817BB8(ctx, base);
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f31,f13
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f13.f64));
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,1824(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1824);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f12,f30,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f30.f64 + ctx.f13.f64));
	// fmadds f13,f11,f29,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f29.f64 + ctx.f13.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x828a97c8
	if (ctx.cr6.lt) goto loc_828A97C8;
loc_828A97B0:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828a97e0
	ctx.lr = 0x828A97C4;
	sub_828A97E0(ctx, base);
	// b 0x828a97cc
	goto loc_828A97CC;
loc_828A97C8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828A97CC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828A97E0"))) PPC_WEAK_FUNC(sub_828A97E0);
PPC_FUNC_IMPL(__imp__sub_828A97E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9ec
	ctx.lr = 0x828A97E8;
	__savegprlr_21(ctx, base);
	// stfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f30.u64);
	// stfd f31,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x828a980c
	if (!ctx.cr6.eq) goto loc_828A980C;
loc_828A9804:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x828a9b3c
	goto loc_828A9B3C;
loc_828A980C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1164(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1164);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A9820;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828a9860
	if (ctx.cr0.eq) goto loc_828A9860;
	// lwz r10,620(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 620);
	// lwz r9,624(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 624);
	// lwz r8,628(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 628);
	// lwz r11,1412(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1412);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// bne cr6,0x828a9860
	if (!ctx.cr6.eq) goto loc_828A9860;
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1700(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1700);
	ctx.f13.f64 = double(temp.f32);
	// fadds f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// b 0x828a9864
	goto loc_828A9864;
loc_828A9860:
	// lfs f31,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f31.f64 = double(temp.f32);
loc_828A9864:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,844(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 844);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A9880;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r27,620
	ctx.r31.s64 = ctx.r27.s64 + 620;
	// stw r9,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r9.u32);
	// lfs f30,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f30.f64 = double(temp.f32);
	// stw r29,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r29.u32);
	// lfs f0,908(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// stw r29,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r29.u32);
	// stfs f30,160(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stw r29,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r29.u32);
	// stfs f30,164(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stw r29,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r29.u32);
	// stfs f30,168(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stw r29,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r29.u32);
	// stfs f30,172(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stw r29,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r29.u32);
	// stfs f30,176(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stw r29,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r29.u32);
	// stfs f30,180(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f30,184(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stfs f30,188(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// li r8,8836
	ctx.r8.s64 = 8836;
	// stfs f30,192(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// stfs f0,196(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stfs f30,80(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stfs f30,84(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// stfs f30,88(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,1416(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1416);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r28,r11,13024
	ctx.r28.s64 = ctx.r11.s64 + 13024;
	// lwz r3,13024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// bne cr6,0x828a9b4c
	if (!ctx.cr6.eq) goto loc_828A9B4C;
	// bl 0x82825330
	ctx.lr = 0x828A9928;
	sub_82825330(ctx, base);
	// lwz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828a9b20
	if (ctx.cr6.eq) goto loc_828A9B20;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x828a9994
	if (ctx.cr6.eq) goto loc_828A9994;
	// lwz r11,1416(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1416);
	// stfs f30,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f30,84(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f30,88(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// li r8,8836
	ctx.r8.s64 = 8836;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lfs f13,628(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 628);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lfs f0,1700(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1700);
	ctx.f0.f64 = double(temp.f32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f12,620(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 620);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,624(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x82825330
	ctx.lr = 0x828A9990;
	sub_82825330(ctx, base);
	// lwz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
loc_828A9994:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828a9b20
	if (ctx.cr6.eq) goto loc_828A9B20;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x828a9b20
	if (ctx.cr6.eq) goto loc_828A9B20;
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f11,f0,f31
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// lfs f0,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f0,f0
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,-10428(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -10428);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f12,f11,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f12.f64));
	// fmadds f12,f10,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fdivs f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 / ctx.f12.f64));
loc_828A99E4:
	// fcmpu cr6,f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// blt cr6,0x828a9804
	if (ctx.cr6.lt) goto loc_828A9804;
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
	// lfs f11,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmr f6,f12
	ctx.f6.f64 = ctx.f12.f64;
	// lfs f9,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// stfs f11,144(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lfs f5,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fadds f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// fadds f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 + ctx.f0.f64));
	// stfs f9,128(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f5,112(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r22,112(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// lwz r7,144(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
	// addi r10,r1,256
	ctx.r10.s64 = ctx.r1.s64 + 256;
	// stw r7,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r7.u32);
	// fadds f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f10,116(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fsubs f8,f13,f0
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f13,24000(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24000);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f7,f0,f13
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmr f4,f13
	ctx.f4.f64 = ctx.f13.f64;
	// stfs f8,148(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fmr f3,f13
	ctx.f3.f64 = ctx.f13.f64;
	// stfs f4,120(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmr f2,f13
	ctx.f2.f64 = ctx.f13.f64;
	// stfs f3,152(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f2,136(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r6,148(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r3,152(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r24,136(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// fsubs f11,f12,f7
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f7.f64));
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f12,f6,f7
	ctx.f12.f64 = double(float(ctx.f6.f64 + ctx.f7.f64));
	// stfs f12,132(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lwz r23,132(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r21,80(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r22,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r22.u32);
	// stw r9,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r9.u32);
	// fmuls f0,f11,f11
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// stw r8,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r8.u32);
	// stw r6,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r6.u32);
	// stw r5,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r5.u32);
	// stw r4,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r4.u32);
	// stw r3,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r3.u32);
	// stw r21,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r21.u32);
	// stw r24,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r24.u32);
	// stw r31,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r31.u32);
	// stw r23,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r23.u32);
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
loc_828A9AF4:
	// lfs f13,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f11,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f13,f11,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f13.f64));
	// fmadds f13,f10,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f13.f64));
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x828a9c54
	if (!ctx.cr6.gt) goto loc_828A9C54;
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// b 0x828a9c64
	goto loc_828A9C64;
loc_828A9B20:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,1416(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1416);
	// lwz r11,1064(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1064);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A9B38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828A9B38:
	// li r3,1
	ctx.r3.s64 = 1;
loc_828A9B3C:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// lfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x82a4ea3c
	__restgprlr_21(ctx, base);
	return;
loc_828A9B4C:
	// bl 0x82825330
	ctx.lr = 0x828A9B50;
	sub_82825330(ctx, base);
	// lwz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828a9b38
	if (ctx.cr6.eq) goto loc_828A9B38;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x828a9b38
	if (ctx.cr6.eq) goto loc_828A9B38;
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// lfs f0,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f0,18428(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18428);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f13,f12,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f31,f11,f11,f13
	ctx.f31.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f13.f64));
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bgt cr6,0x828a9804
	if (ctx.cr6.gt) goto loc_828A9804;
	// lwz r11,1432(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1432);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828a9bc8
	if (ctx.cr6.eq) goto loc_828A9BC8;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,520(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 520);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A9BC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x828a9bd8
	if (!ctx.cr0.eq) goto loc_828A9BD8;
loc_828A9BC8:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,17584(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17584);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bgt cr6,0x828a9804
	if (ctx.cr6.gt) goto loc_828A9804;
loc_828A9BD8:
	// lfs f13,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f13.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// li r8,8836
	ctx.r8.s64 = 8836;
	// stfs f30,80(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// stfs f30,84(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stfs f30,88(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x82825330
	ctx.lr = 0x828A9C28;
	sub_82825330(ctx, base);
	// lwz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828a9b38
	if (ctx.cr6.eq) goto loc_828A9B38;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x828a9b38
	if (ctx.cr6.eq) goto loc_828A9B38;
	// lfs f0,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// fdivs f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f31.f64));
	// lfs f13,18424(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18424);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// b 0x828a99e4
	goto loc_828A99E4;
loc_828A9C54:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x828a9c64
	if (!ctx.cr6.lt) goto loc_828A9C64;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
loc_828A9C64:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x828a9af4
	if (ctx.cr6.lt) goto loc_828A9AF4;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// addi r29,r1,240
	ctx.r29.s64 = ctx.r1.s64 + 240;
loc_828A9C7C:
	// cmpw cr6,r31,r26
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r26.s32, ctx.xer);
	// beq cr6,0x828a9cd0
	if (ctx.cr6.eq) goto loc_828A9CD0;
	// cmpw cr6,r31,r25
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r25.s32, ctx.xer);
	// beq cr6,0x828a9cd0
	if (ctx.cr6.eq) goto loc_828A9CD0;
	// stfs f30,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f30,84(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stfs f30,88(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// li r8,8836
	ctx.r8.s64 = 8836;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// bl 0x82825330
	ctx.lr = 0x828A9CBC;
	sub_82825330(ctx, base);
	// lwz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828a9b38
	if (ctx.cr6.eq) goto loc_828A9B38;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x828a9b38
	if (ctx.cr6.eq) goto loc_828A9B38;
loc_828A9CD0:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// blt cr6,0x828a9c7c
	if (ctx.cr6.lt) goto loc_828A9C7C;
	// b 0x828a9804
	goto loc_828A9804;
}

__attribute__((alias("__imp__sub_828A9CE8"))) PPC_WEAK_FUNC(sub_828A9CE8);
PPC_FUNC_IMPL(__imp__sub_828A9CE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1412(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1412);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A9D00"))) PPC_WEAK_FUNC(sub_828A9D00);
PPC_FUNC_IMPL(__imp__sub_828A9D00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x829c1f08
	ctx.lr = 0x828A9D20;
	sub_829C1F08(ctx, base);
	// bl 0x828aab40
	ctx.lr = 0x828A9D24;
	sub_828AAB40(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// beq 0x828a9d40
	if (ctx.cr0.eq) goto loc_828A9D40;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// b 0x828a9d4c
	goto loc_828A9D4C;
loc_828A9D40:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1236);
loc_828A9D4C:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A9D54;
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

__attribute__((alias("__imp__sub_828A9D70"))) PPC_WEAK_FUNC(sub_828A9D70);
PPC_FUNC_IMPL(__imp__sub_828A9D70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x828A9D78;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1232);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A9D9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// stw r31,1412(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1412, ctx.r31.u32);
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x828a9dfc
	if (ctx.cr6.eq) goto loc_828A9DFC;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1008(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1008);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A9DC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828a9dfc
	if (ctx.cr0.eq) goto loc_828A9DFC;
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lwz r3,96(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1008(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1008);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A9DE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,1032(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1032);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A9DFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828A9DFC:
	// lwz r11,656(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,660(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 660);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r9,664(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 664);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x82817bb8
	ctx.lr = 0x828A9E20;
	sub_82817BB8(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f10,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lwz r10,1412(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1412);
	// lfs f9,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f13,628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,17552(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17552);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f12,620(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f11,624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lwz r11,1492(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1492);
	// fadds f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fadds f13,f12,f9
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r10,176(r11)
	PPC_STORE_U32(ctx.r11.u32 + 176, ctx.r10.u32);
	// stw r8,172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 172, ctx.r8.u32);
	// stw r9,168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 168, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828A9E90"))) PPC_WEAK_FUNC(sub_828A9E90);
PPC_FUNC_IMPL(__imp__sub_828A9E90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,1412(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1412);
	// lwz r11,1928(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1928);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x828a9f40
	if (ctx.cr6.gt) goto loc_828A9F40;
	// lis r12,-32242
	ctx.r12.s64 = -2113011712;
	// addi r12,r12,-31536
	ctx.r12.s64 = ctx.r12.s64 + -31536;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// lis r12,-32117
	ctx.r12.s64 = -2104819712;
	// addi r12,r12,-24876
	ctx.r12.s64 = ctx.r12.s64 + -24876;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_828A9ED4;
	case 1:
		goto loc_828A9F30;
	case 2:
		goto loc_828A9F38;
	case 3:
		goto loc_828A9F30;
	case 4:
		goto loc_828A9ED4;
	case 5:
		goto loc_828A9F38;
	case 6:
		goto loc_828A9F38;
	case 7:
		goto loc_828A9ED4;
	case 8:
		goto loc_828A9F30;
	default:
		__builtin_unreachable();
	}
loc_828A9ED4:
	// lwz r11,1492(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1492);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,1928(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1928, ctx.r10.u32);
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828a9f40
	if (ctx.cr6.eq) goto loc_828A9F40;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f13,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,472(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 472);
	// lfs f0,904(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A9F2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x828a9f40
	goto loc_828A9F40;
loc_828A9F30:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x828a9f3c
	goto loc_828A9F3C;
loc_828A9F38:
	// li r11,7
	ctx.r11.s64 = 7;
loc_828A9F3C:
	// stw r11,1928(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1928, ctx.r11.u32);
loc_828A9F40:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A9F50"))) PPC_WEAK_FUNC(sub_828A9F50);
PPC_FUNC_IMPL(__imp__sub_828A9F50) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1492(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1492, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A9F60"))) PPC_WEAK_FUNC(sub_828A9F60);
PPC_FUNC_IMPL(__imp__sub_828A9F60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r4,1492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x828a9fb4
	if (ctx.cr6.eq) goto loc_828A9FB4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1068(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1068);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A9F90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x828a9fa0
	if (ctx.cr0.eq) goto loc_828A9FA0;
	// lwz r3,1492(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// b 0x828a9fb8
	goto loc_828A9FB8;
loc_828A9FA0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1060(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1060);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A9FB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828A9FB4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828A9FB8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A9FD0"))) PPC_WEAK_FUNC(sub_828A9FD0);
PPC_FUNC_IMPL(__imp__sub_828A9FD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x829c1f08
	ctx.lr = 0x828A9FF0;
	sub_829C1F08(ctx, base);
	// bl 0x828aab40
	ctx.lr = 0x828A9FF4;
	sub_828AAB40(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// beq 0x828aa00c
	if (ctx.cr0.eq) goto loc_828AA00C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// b 0x828aa018
	goto loc_828AA018;
loc_828AA00C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1244(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1244);
loc_828AA018:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AA020;
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

__attribute__((alias("__imp__sub_828AA038"))) PPC_WEAK_FUNC(sub_828AA038);
PPC_FUNC_IMPL(__imp__sub_828AA038) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,1412(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1412);
	// lwz r11,1928(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1928);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x828aa094
	if (ctx.cr6.gt) goto loc_828AA094;
	// lis r12,-32242
	ctx.r12.s64 = -2113011712;
	// addi r12,r12,-31552
	ctx.r12.s64 = ctx.r12.s64 + -31552;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// lis r12,-32117
	ctx.r12.s64 = -2104819712;
	// addi r12,r12,-24452
	ctx.r12.s64 = ctx.r12.s64 + -24452;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_828AA084;
	case 1:
		goto loc_828AA07C;
	case 2:
		goto loc_828AA08C;
	case 3:
		goto loc_828AA07C;
	case 4:
		goto loc_828AA084;
	case 5:
		goto loc_828AA08C;
	case 6:
		goto loc_828AA08C;
	case 7:
		goto loc_828AA084;
	case 8:
		goto loc_828AA07C;
	default:
		__builtin_unreachable();
	}
loc_828AA07C:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x828aa090
	goto loc_828AA090;
loc_828AA084:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x828aa090
	goto loc_828AA090;
loc_828AA08C:
	// li r11,8
	ctx.r11.s64 = 8;
loc_828AA090:
	// stw r11,1928(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1928, ctx.r11.u32);
loc_828AA094:
	// lwz r11,1932(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1932);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828aa0f0
	if (ctx.cr6.eq) goto loc_828AA0F0;
	// lwz r11,1492(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1492);
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828aa0f0
	if (ctx.cr6.eq) goto loc_828AA0F0;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// lfs f13,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,472(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 472);
	// lfs f0,904(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AA0F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828AA0F0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828AA100"))) PPC_WEAK_FUNC(sub_828AA100);
PPC_FUNC_IMPL(__imp__sub_828AA100) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,-25840
	ctx.r3.s64 = ctx.r11.s64 + -25840;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82816528
	ctx.lr = 0x828AA128;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,1012(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1012);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AA140;
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

__attribute__((alias("__imp__sub_828AA158"))) PPC_WEAK_FUNC(sub_828AA158);
PPC_FUNC_IMPL(__imp__sub_828AA158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,-25808
	ctx.r3.s64 = ctx.r11.s64 + -25808;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82816528
	ctx.lr = 0x828AA180;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,1012(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1012);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AA198;
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

__attribute__((alias("__imp__sub_828AA1B0"))) PPC_WEAK_FUNC(sub_828AA1B0);
PPC_FUNC_IMPL(__imp__sub_828AA1B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,-25780
	ctx.r3.s64 = ctx.r11.s64 + -25780;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82816528
	ctx.lr = 0x828AA1D8;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,1012(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1012);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AA1F0;
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

__attribute__((alias("__imp__sub_828AA210"))) PPC_WEAK_FUNC(sub_828AA210);
PPC_FUNC_IMPL(__imp__sub_828AA210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,-25752
	ctx.r3.s64 = ctx.r11.s64 + -25752;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82816528
	ctx.lr = 0x828AA238;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,1012(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1012);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AA250;
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

__attribute__((alias("__imp__sub_828AA268"))) PPC_WEAK_FUNC(sub_828AA268);
PPC_FUNC_IMPL(__imp__sub_828AA268) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,-25720
	ctx.r3.s64 = ctx.r11.s64 + -25720;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82816528
	ctx.lr = 0x828AA290;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,1012(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1012);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AA2A8;
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

__attribute__((alias("__imp__sub_828AA2C0"))) PPC_WEAK_FUNC(sub_828AA2C0);
PPC_FUNC_IMPL(__imp__sub_828AA2C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,-25688
	ctx.r3.s64 = ctx.r11.s64 + -25688;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82816528
	ctx.lr = 0x828AA2E8;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,1012(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1012);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AA300;
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

__attribute__((alias("__imp__sub_828AA318"))) PPC_WEAK_FUNC(sub_828AA318);
PPC_FUNC_IMPL(__imp__sub_828AA318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x828AA320;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,100(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r30,-8
	ctx.r11.s64 = ctx.r30.s64 + -8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828AA350;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82409c40
	ctx.lr = 0x828AA35C;
	sub_82409C40(ctx, base);
	// stw r3,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828AA368"))) PPC_WEAK_FUNC(sub_828AA368);
PPC_FUNC_IMPL(__imp__sub_828AA368) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,316(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 316);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AA398;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,1412(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1412);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828aa3c4
	if (ctx.cr6.eq) goto loc_828AA3C4;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,316(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 316);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AA3C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828AA3C4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828AA3D8"))) PPC_WEAK_FUNC(sub_828AA3D8);
PPC_FUNC_IMPL(__imp__sub_828AA3D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x828AA3E0;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,1412(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1412);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x828aa574
	if (!ctx.cr6.eq) goto loc_828AA574;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82411a28
	ctx.lr = 0x828AA400;
	sub_82411A28(ctx, base);
	// lwz r11,1412(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1412);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828aa438
	if (ctx.cr6.eq) goto loc_828AA438;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,620
	ctx.r4.s64 = ctx.r11.s64 + 620;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,460(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 460);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AA424;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,1412(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1412);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1236);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AA438;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828AA438:
	// lwz r11,1432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1432);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r29,1412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1412, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x828aa574
	if (!ctx.cr6.eq) goto loc_828AA574;
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
	ctx.lr = 0x828AA474;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x828aa490
	if (!ctx.cr6.gt) goto loc_828AA490;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// b 0x828aa560
	goto loc_828AA560;
loc_828AA490:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x828aa52c
	if (!ctx.cr6.eq) goto loc_828AA52C;
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
	ctx.lr = 0x828AA4B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,964(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 964);
	// addi r28,r26,948
	ctx.r28.s64 = ctx.r26.s64 + 948;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x828aa50c
	if (!ctx.cr6.gt) goto loc_828AA50C;
loc_828AA4C8:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828aa4f8
	if (!ctx.cr6.eq) goto loc_828AA4F8;
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
	ctx.lr = 0x828AA4F0;
	sub_82332CA8(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
loc_828AA4F8:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828aa4c8
	if (ctx.cr6.lt) goto loc_828AA4C8;
loc_828AA50C:
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
	ctx.lr = 0x828AA52C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828AA52C:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x828aa560
	if (!ctx.cr0.eq) goto loc_828AA560;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AA54C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x828aa560
	if (ctx.cr0.eq) goto loc_828AA560;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r26,924
	ctx.r3.s64 = ctx.r26.s64 + 924;
	// bl 0x82410060
	ctx.lr = 0x828AA560;
	sub_82410060(ctx, base);
loc_828AA560:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AA574;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828AA574:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828AA580"))) PPC_WEAK_FUNC(sub_828AA580);
PPC_FUNC_IMPL(__imp__sub_828AA580) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x828AA588;
	__savegprlr_29(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,1412(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1412);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x828aa6b0
	if (ctx.cr6.eq) goto loc_828AA6B0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1292);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AA5BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x828aa6b0
	if (!ctx.cr0.eq) goto loc_828AA6B0;
	// lwz r11,1464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1464);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828aa5ec
	if (ctx.cr6.eq) goto loc_828AA5EC;
	// lwz r10,668(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 668);
	// lwz r11,1412(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1412);
	// stw r10,668(r11)
	PPC_STORE_U32(ctx.r11.u32 + 668, ctx.r10.u32);
	// lwz r10,672(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 672);
	// stw r10,672(r11)
	PPC_STORE_U32(ctx.r11.u32 + 672, ctx.r10.u32);
	// lwz r10,676(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 676);
	// stw r10,676(r11)
	PPC_STORE_U32(ctx.r11.u32 + 676, ctx.r10.u32);
loc_828AA5EC:
	// lwa r11,936(r31)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 936));
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lwz r9,928(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 928);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// lwz r8,932(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 932);
	// lfs f31,30996(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 30996);
	ctx.f31.f64 = double(temp.f32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// fmadds f1,f0,f30,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f30.f64 + ctx.f31.f64));
	// bl 0x82a4cf18
	ctx.lr = 0x828AA620;
	sub_82A4CF18(ctx, base);
	// lwa r11,932(r31)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 932));
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lwz r10,928(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 928);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// lwz r9,936(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 936);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// fmadds f1,f13,f30,f31
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f30.f64 + ctx.f31.f64));
	// bl 0x82a4cf18
	ctx.lr = 0x828AA65C;
	sub_82A4CF18(ctx, base);
	// lwa r11,928(r31)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 928));
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lwz r10,932(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 932);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// lwz r9,936(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 936);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// fmadds f1,f13,f30,f31
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f30.f64 + ctx.f31.f64));
	// bl 0x82a4cf18
	ctx.lr = 0x828AA698;
	sub_82A4CF18(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r30
	PPC_STORE_U32(ctx.r30.u32, ctx.f0.u32);
	// b 0x828aa6c0
	goto loc_828AA6C0;
loc_828AA6B0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
loc_828AA6C0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828AA6D8"))) PPC_WEAK_FUNC(sub_828AA6D8);
PPC_FUNC_IMPL(__imp__sub_828AA6D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x828AA6E0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,1412(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1412);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x828aa8b8
	if (ctx.cr0.eq) goto loc_828AA8B8;
	// lwz r10,2112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2112);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x828aa8b8
	if (!ctx.cr6.gt) goto loc_828AA8B8;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828aa8b8
	if (!ctx.cr0.eq) goto loc_828AA8B8;
	// lwz r10,1544(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1544);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x828aa8b8
	if (ctx.cr6.eq) goto loc_828AA8B8;
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
	// li r26,0
	ctx.r26.s64 = 0;
	// stw r26,1544(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1544, ctx.r26.u32);
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x828aa8b8
	if (!ctx.cr6.gt) goto loc_828AA8B8;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
loc_828AA73C:
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// lwzx r3,r11,r27
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828aa89c
	if (ctx.cr6.eq) goto loc_828AA89C;
	// bl 0x82409c40
	ctx.lr = 0x828AA750;
	sub_82409C40(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x828aa89c
	if (ctx.cr0.eq) goto loc_828AA89C;
	// cmplw cr6,r29,r31
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x828aa89c
	if (ctx.cr6.eq) goto loc_828AA89C;
	// lwz r30,1412(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1412);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x828aa89c
	if (ctx.cr6.eq) goto loc_828AA89C;
	// lwz r11,2112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x828aa840
	if (!ctx.cr6.gt) goto loc_828AA840;
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x828aa840
	if (!ctx.cr0.eq) goto loc_828AA840;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1080(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1080);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AA79C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8290f2f8
	ctx.lr = 0x828AA7B4;
	sub_8290F2F8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1080(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1080);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AA7D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x828aa7ec
	if (ctx.cr0.eq) goto loc_828AA7EC;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x828aa7ec
	if (ctx.cr6.eq) goto loc_828AA7EC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1036);
	// b 0x828aa81c
	goto loc_828AA81C;
loc_828AA7EC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1084(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1084);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AA804;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x828aa82c
	if (ctx.cr0.eq) goto loc_828AA82C;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x828aa89c
	if (ctx.cr6.eq) goto loc_828AA89C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1040(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1040);
loc_828AA81C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AA82C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828AA82C:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x828aa89c
	if (ctx.cr6.eq) goto loc_828AA89C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1048(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1048);
	// b 0x828aa88c
	goto loc_828AA88C;
loc_828AA840:
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x828aa89c
	if (!ctx.cr0.eq) goto loc_828AA89C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1080(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1080);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AA864;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8290f2f8
	ctx.lr = 0x828AA87C;
	sub_8290F2F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x828aa89c
	if (ctx.cr0.eq) goto loc_828AA89C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1044(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1044);
loc_828AA88C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AA89C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828AA89C:
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// cmpw cr6,r26,r10
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x828aa73c
	if (ctx.cr6.lt) goto loc_828AA73C;
loc_828AA8B8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828AA8C0"))) PPC_WEAK_FUNC(sub_828AA8C0);
PPC_FUNC_IMPL(__imp__sub_828AA8C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,1412(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1412);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828aa8f4
	if (ctx.cr6.eq) goto loc_828AA8F4;
	// lwz r11,1124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x828aa900
	if (!ctx.cr6.eq) goto loc_828AA900;
loc_828AA8F4:
	// lwz r11,1124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828aa904
	if (ctx.cr6.eq) goto loc_828AA904;
loc_828AA900:
	// li r30,1
	ctx.r30.s64 = 1;
loc_828AA904:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x828aa98c
	if (!ctx.cr0.eq) goto loc_828AA98C;
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x828aa930
	if (ctx.cr6.lt) goto loc_828AA930;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AA930;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828AA930:
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828aa970
	if (!ctx.cr6.eq) goto loc_828AA970;
	// lwz r11,1412(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1412);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828aa970
	if (ctx.cr6.eq) goto loc_828AA970;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x828aa970
	if (!ctx.cr6.eq) goto loc_828AA970;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x828aa970
	if (!ctx.cr6.eq) goto loc_828AA970;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1008(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1008);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AA970;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828AA970:
	// lwz r11,1412(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1412);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828aa98c
	if (ctx.cr6.eq) goto loc_828AA98C;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x828aa98c
	if (!ctx.cr6.eq) goto loc_828AA98C;
	// lwz r3,1408(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// bl 0x82904238
	ctx.lr = 0x828AA98C;
	sub_82904238(ctx, base);
loc_828AA98C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828AA9A8"))) PPC_WEAK_FUNC(sub_828AA9A8);
PPC_FUNC_IMPL(__imp__sub_828AA9A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1408(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1408);
	// b 0x82903e48
	sub_82903E48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828AA9B0"))) PPC_WEAK_FUNC(sub_828AA9B0);
PPC_FUNC_IMPL(__imp__sub_828AA9B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1412(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1412);
	// std r4,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r4.u64);
	// std r5,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r5.u64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r9,32(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 32);
	// lwz r8,36(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 36);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r7,40(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 40);
	// lwz r11,1492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1492);
	// stw r10,164(r11)
	PPC_STORE_U32(ctx.r11.u32 + 164, ctx.r10.u32);
	// lwz r11,1412(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1412);
	// lwz r11,1492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1492);
	// stw r9,168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 168, ctx.r9.u32);
	// stw r8,172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 172, ctx.r8.u32);
	// stw r7,176(r11)
	PPC_STORE_U32(ctx.r11.u32 + 176, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828AA9F8"))) PPC_WEAK_FUNC(sub_828AA9F8);
PPC_FUNC_IMPL(__imp__sub_828AA9F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1412(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1412);
	// std r4,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r4.u64);
	// std r5,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r5.u64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828aaa78
	if (ctx.cr6.eq) goto loc_828AAA78;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f13,152(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f12.f64 = double(temp.f32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f11,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,628(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 628);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,620(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 620);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,17552(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17552);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f8,624(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lwz r11,1124(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1124);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fadds f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fadds f13,f9,f12
	ctx.f13.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// fadds f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 + ctx.f0.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AAA78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828AAA78:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828AAA88"))) PPC_WEAK_FUNC(sub_828AAA88);
PPC_FUNC_IMPL(__imp__sub_828AAA88) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1412(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1412);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82891118
	sub_82891118(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828AAA98"))) PPC_WEAK_FUNC(sub_828AAA98);
PPC_FUNC_IMPL(__imp__sub_828AAA98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828AAAA0"))) PPC_WEAK_FUNC(sub_828AAAA0);
PPC_FUNC_IMPL(__imp__sub_828AAAA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1412(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1412);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,1492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1492);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x828aaac0
	if (ctx.cr6.eq) goto loc_828AAAC0;
	// lwz r10,80(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// b 0x828aaac4
	goto loc_828AAAC4;
loc_828AAAC0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_828AAAC4:
	// stw r10,164(r11)
	PPC_STORE_U32(ctx.r11.u32 + 164, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828AAAD0"))) PPC_WEAK_FUNC(sub_828AAAD0);
PPC_FUNC_IMPL(__imp__sub_828AAAD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,1412(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1412);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828aaae8
	if (ctx.cr6.eq) goto loc_828AAAE8;
	// lfs f0,1540(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1540);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// stfs f0,1540(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1540, temp.u32);
loc_828AAAE8:
	// lwz r11,1424(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1424);
	// stw r11,1428(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1428, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828AAAF8"))) PPC_WEAK_FUNC(sub_828AAAF8);
PPC_FUNC_IMPL(__imp__sub_828AAAF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// bl 0x829b9c18
	ctx.lr = 0x828AAB0C;
	sub_829B9C18(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x828aab30
	if (!ctx.cr0.eq) goto loc_828AAB30;
	// lwz r11,1412(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1412);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828aab30
	if (ctx.cr6.eq) goto loc_828AAB30;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828aab30
	if (ctx.cr0.eq) goto loc_828AAB30;
	// li r3,1
	ctx.r3.s64 = 1;
loc_828AAB30:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828AAB40"))) PPC_WEAK_FUNC(sub_828AAB40);
PPC_FUNC_IMPL(__imp__sub_828AAB40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// beq cr6,0x828aab7c
	if (ctx.cr6.eq) goto loc_828AAB7C;
	// bl 0x823e96d8
	ctx.lr = 0x828AAB60;
	sub_823E96D8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AAB78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x828aab80
	goto loc_828AAB80;
loc_828AAB7C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828AAB80:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828AAB98"))) PPC_WEAK_FUNC(sub_828AAB98);
PPC_FUNC_IMPL(__imp__sub_828AAB98) {
	PPC_FUNC_PROLOGUE();
	// lwz r12,0(r3)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1016(r12)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r12.u32 + 1016);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_828AABA8"))) PPC_WEAK_FUNC(sub_828AABA8);
PPC_FUNC_IMPL(__imp__sub_828AABA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,-25656
	ctx.r3.s64 = ctx.r11.s64 + -25656;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828AABB8"))) PPC_WEAK_FUNC(sub_828AABB8);
PPC_FUNC_IMPL(__imp__sub_828AABB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x828aac08
	ctx.lr = 0x828AABD8;
	sub_828AAC08(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x828aabec
	if (ctx.cr6.eq) goto loc_828AABEC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333b08
	ctx.lr = 0x828AABEC;
	sub_82333B08(ctx, base);
loc_828AABEC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828AAC08"))) PPC_WEAK_FUNC(sub_828AAC08);
PPC_FUNC_IMPL(__imp__sub_828AAC08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,17536
	ctx.r31.s64 = ctx.r11.s64 + 17536;
	// lwz r11,17540(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17540);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828aac50
	if (!ctx.cr0.eq) goto loc_828AAC50;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-25536
	ctx.r9.s64 = ctx.r9.s64 + -25536;
	// stw r11,17540(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17540, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-16384
	ctx.r3.s64 = ctx.r11.s64 + -16384;
	// bl 0x82a4c758
	ctx.lr = 0x828AAC50;
	sub_82A4C758(ctx, base);
loc_828AAC50:
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

__attribute__((alias("__imp__sub_828AAC68"))) PPC_WEAK_FUNC(sub_828AAC68);
PPC_FUNC_IMPL(__imp__sub_828AAC68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-26104(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26104);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828aaca8
	if (!ctx.cr0.eq) goto loc_828AACA8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// stw r11,-26104(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26104, ctx.r11.u32);
	// addi r3,r9,-25656
	ctx.r3.s64 = ctx.r9.s64 + -25656;
	// bl 0x82816528
	ctx.lr = 0x828AACA0;
	sub_82816528(ctx, base);
	// stw r3,-26108(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26108, ctx.r3.u32);
	// b 0x828aacac
	goto loc_828AACAC;
loc_828AACA8:
	// lwz r3,-26108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26108);
loc_828AACAC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828AACC0"))) PPC_WEAK_FUNC(sub_828AACC0);
PPC_FUNC_IMPL(__imp__sub_828AACC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x828aac08
	ctx.lr = 0x828AACE0;
	sub_828AAC08(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AACF4;
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

__attribute__((alias("__imp__sub_828AAD10"))) PPC_WEAK_FUNC(sub_828AAD10);
PPC_FUNC_IMPL(__imp__sub_828AAD10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x828aad48
	if (ctx.cr6.eq) goto loc_828AAD48;
	// bl 0x828aac08
	ctx.lr = 0x828AAD38;
	sub_828AAC08(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828aad48
	if (!ctx.cr6.eq) goto loc_828AAD48;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828aad54
	goto loc_828AAD54;
loc_828AAD48:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333c70
	ctx.lr = 0x828AAD54;
	sub_82333C70(ctx, base);
loc_828AAD54:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828AAD70"))) PPC_WEAK_FUNC(sub_828AAD70);
PPC_FUNC_IMPL(__imp__sub_828AAD70) {
	PPC_FUNC_PROLOGUE();
	// b 0x828aac08
	sub_828AAC08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828AAD78"))) PPC_WEAK_FUNC(sub_828AAD78);
PPC_FUNC_IMPL(__imp__sub_828AAD78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82833108
	ctx.lr = 0x828AAD94;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828aadfc
	if (ctx.cr0.eq) goto loc_828AADFC;
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
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r9,r9,-25616
	ctx.r9.s64 = ctx.r9.s64 + -25616;
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
	// b 0x828aae00
	goto loc_828AAE00;
loc_828AADFC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828AAE00:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828AAE18"))) PPC_WEAK_FUNC(sub_828AAE18);
PPC_FUNC_IMPL(__imp__sub_828AAE18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,-8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x828aa318
	ctx.lr = 0x828AAE48;
	sub_828AA318(ctx, base);
	// bl 0x823ff848
	ctx.lr = 0x828AAE4C;
	sub_823FF848(ctx, base);
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
	ctx.lr = 0x828AAE64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x828aae70
	if (!ctx.cr0.eq) goto loc_828AAE70;
	// li r31,0
	ctx.r31.s64 = 0;
loc_828AAE70:
	// stw r31,-4(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828AAE90"))) PPC_WEAK_FUNC(sub_828AAE90);
PPC_FUNC_IMPL(__imp__sub_828AAE90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x828AAE98;
	__savegprlr_27(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,36(r4)
	PPC_STORE_U32(ctx.r4.u32 + 36, ctx.r11.u32);
	// stfs f0,-80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -80, temp.u32);
	// lwz r9,-80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -80);
	// stfs f0,-76(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -76, temp.u32);
	// lwz r8,-76(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -76);
	// stfs f0,-72(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -72, temp.u32);
	// lwz r7,-72(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -72);
	// stfs f0,-80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -80, temp.u32);
	// lwz r6,-80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -80);
	// stfs f0,-76(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -76, temp.u32);
	// lwz r5,-76(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -76);
	// stfs f0,-72(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -72, temp.u32);
	// lwz r3,-72(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -72);
	// stfs f0,-56(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -56, temp.u32);
	// lwz r10,-56(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -56);
	// stfs f0,-80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -80, temp.u32);
	// lwz r31,-80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + -80);
	// stfs f0,-76(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -76, temp.u32);
	// lwz r30,-76(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + -76);
	// stfs f0,-64(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// lwz r28,-64(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + -64);
	// stfs f0,-60(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -60, temp.u32);
	// lwz r27,-60(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + -60);
	// stfs f0,-72(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -72, temp.u32);
	// lwz r29,-72(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + -72);
	// stfs f0,8(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// stw r11,56(r4)
	PPC_STORE_U32(ctx.r4.u32 + 56, ctx.r11.u32);
	// stfs f0,40(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 40, temp.u32);
	// stw r11,76(r4)
	PPC_STORE_U32(ctx.r4.u32 + 76, ctx.r11.u32);
	// stfs f0,72(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 72, temp.u32);
	// stw r10,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r10.u32);
	// stfs f0,80(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 80, temp.u32);
	// stw r9,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r9.u32);
	// stw r8,28(r4)
	PPC_STORE_U32(ctx.r4.u32 + 28, ctx.r8.u32);
	// stw r7,32(r4)
	PPC_STORE_U32(ctx.r4.u32 + 32, ctx.r7.u32);
	// stw r6,44(r4)
	PPC_STORE_U32(ctx.r4.u32 + 44, ctx.r6.u32);
	// stw r5,48(r4)
	PPC_STORE_U32(ctx.r4.u32 + 48, ctx.r5.u32);
	// stw r3,52(r4)
	PPC_STORE_U32(ctx.r4.u32 + 52, ctx.r3.u32);
	// stw r31,60(r4)
	PPC_STORE_U32(ctx.r4.u32 + 60, ctx.r31.u32);
	// stw r30,64(r4)
	PPC_STORE_U32(ctx.r4.u32 + 64, ctx.r30.u32);
	// stw r29,68(r4)
	PPC_STORE_U32(ctx.r4.u32 + 68, ctx.r29.u32);
	// stw r27,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r27.u32);
	// stw r28,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r28.u32);
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828AAF60"))) PPC_WEAK_FUNC(sub_828AAF60);
PPC_FUNC_IMPL(__imp__sub_828AAF60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lfs f0,984(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 984);
	ctx.f0.f64 = double(temp.f32);
	// stw r5,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r5.u32);
	// beq cr6,0x828aafb0
	if (ctx.cr6.eq) goto loc_828AAFB0;
	// stfs f0,8(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// stw r6,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r6.u32);
	// lwz r11,620(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 620);
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// lwz r11,624(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 624);
	// stw r11,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r11.u32);
	// lwz r11,628(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 628);
	// stw r11,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r11.u32);
	// lwz r11,572(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 572);
	// stw r11,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r11.u32);
	// lwz r11,576(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 576);
	// stw r11,28(r4)
	PPC_STORE_U32(ctx.r4.u32 + 28, ctx.r11.u32);
	// lwz r11,580(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 580);
	// stw r11,32(r4)
	PPC_STORE_U32(ctx.r4.u32 + 32, ctx.r11.u32);
loc_828AAFB0:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x828aafd8
	if (ctx.cr6.eq) goto loc_828AAFD8;
	// stfs f0,40(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 40, temp.u32);
	// stw r7,36(r4)
	PPC_STORE_U32(ctx.r4.u32 + 36, ctx.r7.u32);
	// lwz r11,620(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 620);
	// stw r11,44(r4)
	PPC_STORE_U32(ctx.r4.u32 + 44, ctx.r11.u32);
	// lwz r11,624(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 624);
	// stw r11,48(r4)
	PPC_STORE_U32(ctx.r4.u32 + 48, ctx.r11.u32);
	// lwz r11,628(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 628);
	// stw r11,52(r4)
	PPC_STORE_U32(ctx.r4.u32 + 52, ctx.r11.u32);
loc_828AAFD8:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stfs f0,72(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 72, temp.u32);
	// stw r8,56(r4)
	PPC_STORE_U32(ctx.r4.u32 + 56, ctx.r8.u32);
	// lwz r11,620(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 620);
	// stw r11,60(r4)
	PPC_STORE_U32(ctx.r4.u32 + 60, ctx.r11.u32);
	// lwz r11,624(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 624);
	// stw r11,64(r4)
	PPC_STORE_U32(ctx.r4.u32 + 64, ctx.r11.u32);
	// lwz r11,628(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 628);
	// stw r11,68(r4)
	PPC_STORE_U32(ctx.r4.u32 + 68, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828AB008"))) PPC_WEAK_FUNC(sub_828AB008);
PPC_FUNC_IMPL(__imp__sub_828AB008) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x828AB010;
	__savegprlr_25(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// stw r29,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r29.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// lwz r11,1068(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1068);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AB050;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x828ab1a0
	if (ctx.cr0.eq) goto loc_828AB1A0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1084(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1084);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AB070;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x828ab1a0
	if (ctx.cr0.eq) goto loc_828AB1A0;
	// lwz r11,1412(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1412);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x828ab1a0
	if (ctx.cr6.eq) goto loc_828AB1A0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828ab328
	ctx.lr = 0x828AB090;
	sub_828AB328(ctx, base);
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x828ab0b0
	if (!ctx.cr6.eq) goto loc_828AB0B0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828aae90
	ctx.lr = 0x828AB0A8;
	sub_828AAE90(ctx, base);
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x828ab0f4
	goto loc_828AB0F4;
loc_828AB0B0:
	// lwz r3,1484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1484);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AB0C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,1540(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1540);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mulli r10,r10,84
	ctx.r10.s64 = ctx.r10.s64 * 84;
	// li r5,84
	ctx.r5.s64 = 84;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82a4ea80
	ctx.lr = 0x828AB0E0;
	sub_82A4EA80(ctx, base);
	// lwz r3,1484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1484);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AB0F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828AB0F4:
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828aaf60
	ctx.lr = 0x828AB110;
	sub_828AAF60(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x828ab154
	if (ctx.cr6.eq) goto loc_828AB154;
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x828ab130
	if (ctx.cr6.gt) goto loc_828AB130;
	// lwz r11,1412(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1412);
	// lwz r11,1948(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1948);
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
loc_828AB130:
	// lwz r3,1484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1484);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AB144;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,1528
	ctx.r3.s64 = ctx.r31.s64 + 1528;
	// bl 0x828ab418
	ctx.lr = 0x828AB150;
	sub_828AB418(ctx, base);
	// b 0x828ab184
	goto loc_828AB184;
loc_828AB154:
	// lwz r3,1484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1484);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AB168;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,1540(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1540);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mulli r10,r10,84
	ctx.r10.s64 = ctx.r10.s64 * 84;
	// li r5,84
	ctx.r5.s64 = 84;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82a4ea80
	ctx.lr = 0x828AB184;
	sub_82A4EA80(ctx, base);
loc_828AB184:
	// lwz r3,1484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1484);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AB198;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x828ab1ac
	goto loc_828AB1AC;
loc_828AB1A0:
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_828AB1AC:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828AB1B8"))) PPC_WEAK_FUNC(sub_828AB1B8);
PPC_FUNC_IMPL(__imp__sub_828AB1B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x828AB1C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,84
	ctx.r11.s64 = 84;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lwz r10,1520(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1520);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// ble cr6,0x828ab268
	if (!ctx.cr6.gt) goto loc_828AB268;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_828AB214:
	// lwz r11,1516(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1516);
	// lwzx r4,r29,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x828ab254
	if (ctx.cr6.eq) goto loc_828AB254;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1080(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1080);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AB238;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1516(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1516);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bne 0x828ab250
	if (!ctx.cr0.eq) goto loc_828AB250;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
loc_828AB250:
	// bl 0x828ab418
	ctx.lr = 0x828AB254;
	sub_828AB418(ctx, base);
loc_828AB254:
	// lwz r11,1520(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1520);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,84
	ctx.r29.s64 = ctx.r29.s64 + 84;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828ab214
	if (ctx.cr6.lt) goto loc_828AB214;
loc_828AB268:
	// lwz r11,1544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1544);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x828ab2cc
	if (!ctx.cr6.gt) goto loc_828AB2CC;
loc_828AB278:
	// lwz r11,1540(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1540);
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x828ab2b8
	if (ctx.cr6.eq) goto loc_828AB2B8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1080(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1080);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AB29C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1540(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1540);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bne 0x828ab2b4
	if (!ctx.cr0.eq) goto loc_828AB2B4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
loc_828AB2B4:
	// bl 0x828ab418
	ctx.lr = 0x828AB2B8;
	sub_828AB418(ctx, base);
loc_828AB2B8:
	// lwz r11,1544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1544);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,84
	ctx.r30.s64 = ctx.r30.s64 + 84;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828ab278
	if (ctx.cr6.lt) goto loc_828AB278;
loc_828AB2CC:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r31,1504
	ctx.r3.s64 = ctx.r31.s64 + 1504;
	// bl 0x824d39b8
	ctx.lr = 0x828AB2D8;
	sub_824D39B8(ctx, base);
	// lwz r3,1484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1484);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AB2EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,1528
	ctx.r3.s64 = ctx.r31.s64 + 1528;
	// bl 0x824d39b8
	ctx.lr = 0x828AB2F8;
	sub_824D39B8(ctx, base);
	// lwz r3,1484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1484);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AB30C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823ff140
	ctx.lr = 0x828AB314;
	sub_823FF140(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823ff140
	ctx.lr = 0x828AB31C;
	sub_823FF140(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828AB328"))) PPC_WEAK_FUNC(sub_828AB328);
PPC_FUNC_IMPL(__imp__sub_828AB328) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x828AB330;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r30,-1
	ctx.r30.s64 = -1;
	// lwz r3,1484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1484);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AB354;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,1544(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1544);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x828ab38c
	if (!ctx.cr6.gt) goto loc_828AB38C;
	// lwz r10,1540(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1540);
loc_828AB368:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r29
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x828ab388
	if (ctx.cr6.eq) goto loc_828AB388;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,84
	ctx.r10.s64 = ctx.r10.s64 + 84;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x828ab368
	if (ctx.cr6.lt) goto loc_828AB368;
	// b 0x828ab38c
	goto loc_828AB38C;
loc_828AB388:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_828AB38C:
	// lwz r3,1484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1484);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AB3A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828AB3B0"))) PPC_WEAK_FUNC(sub_828AB3B0);
PPC_FUNC_IMPL(__imp__sub_828AB3B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// beq cr6,0x828ab3fc
	if (ctx.cr6.eq) goto loc_828AB3FC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,520(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 520);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AB3E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x828ab3f4
	if (!ctx.cr0.eq) goto loc_828AB3F4;
	// lwz r11,924(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 924);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x828ab3fc
	if (!ctx.cr6.eq) goto loc_828AB3FC;
loc_828AB3F4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828ab400
	goto loc_828AB400;
loc_828AB3FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828AB400:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828AB418"))) PPC_WEAK_FUNC(sub_828AB418);
PPC_FUNC_IMPL(__imp__sub_828AB418) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r5,84
	ctx.r5.s64 = 84;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82332d50
	ctx.lr = 0x828AB444;
	sub_82332D50(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r11,r3,84
	ctx.r11.s64 = ctx.r3.s64 * 84;
	// add. r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x828ab460
	if (ctx.cr0.eq) goto loc_828AB460;
	// li r5,84
	ctx.r5.s64 = 84;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a4ea80
	ctx.lr = 0x828AB460;
	sub_82A4EA80(ctx, base);
loc_828AB460:
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

__attribute__((alias("__imp__sub_828AB480"))) PPC_WEAK_FUNC(sub_828AB480);
PPC_FUNC_IMPL(__imp__sub_828AB480) {
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
	// addi r31,r11,-15260
	ctx.r31.s64 = ctx.r11.s64 + -15260;
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82332d50
	ctx.lr = 0x828AB4B8;
	sub_82332D50(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r10,r3,24
	ctx.r10.s64 = ctx.r3.s64 * 24;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828ab4e4
	if (ctx.cr0.eq) goto loc_828AB4E4;
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
loc_828AB4E4:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x828ab508
	if (ctx.cr6.eq) goto loc_828AB508;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,24
	ctx.r4.s64 = 24;
	// bl 0x82332c38
	ctx.lr = 0x828AB508;
	sub_82332C38(ctx, base);
loc_828AB508:
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

__attribute__((alias("__imp__sub_828AB520"))) PPC_WEAK_FUNC(sub_828AB520);
PPC_FUNC_IMPL(__imp__sub_828AB520) {
	PPC_FUNC_PROLOGUE();
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
	// addi r11,r11,-15260
	ctx.r11.s64 = ctx.r11.s64 + -15260;
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
	// ble cr6,0x828ab58c
	if (!ctx.cr6.gt) goto loc_828AB58C;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_828AB55C:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x828ab57c
	if (ctx.cr6.eq) goto loc_828AB57C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x828ab55c
	if (ctx.cr6.lt) goto loc_828AB55C;
	// b 0x828ab58c
	goto loc_828AB58C;
loc_828AB57C:
	// mulli r11,r10,24
	ctx.r11.s64 = ctx.r10.s64 * 24;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
loc_828AB58C:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x828ab5b4
	if (ctx.cr6.eq) goto loc_828AB5B4;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828AB5AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828ab5b8
	goto loc_828AB5B8;
loc_828AB5B4:
	// bl 0x829bc030
	ctx.lr = 0x828AB5B8;
	sub_829BC030(ctx, base);
loc_828AB5B8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828AB5C8"))) PPC_WEAK_FUNC(sub_828AB5C8);
PPC_FUNC_IMPL(__imp__sub_828AB5C8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r11,r11,-15260
	ctx.r11.s64 = ctx.r11.s64 + -15260;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x828ab628
	if (!ctx.cr6.gt) goto loc_828AB628;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_828AB5F4:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x828ab614
	if (ctx.cr6.eq) goto loc_828AB614;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x828ab5f4
	if (ctx.cr6.lt) goto loc_828AB5F4;
	// b 0x828ab628
	goto loc_828AB628;
loc_828AB614:
	// mulli r11,r10,24
	ctx.r11.s64 = ctx.r10.s64 * 24;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x828ab630
	if (!ctx.cr6.eq) goto loc_828AB630;
loc_828AB628:
	// bl 0x829bc0e0
	ctx.lr = 0x828AB62C;
	sub_829BC0E0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_828AB630:
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

__attribute__((alias("__imp__sub_828AB648"))) PPC_WEAK_FUNC(sub_828AB648);
PPC_FUNC_IMPL(__imp__sub_828AB648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r11,r11,-15260
	ctx.r11.s64 = ctx.r11.s64 + -15260;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x828ab6c8
	if (!ctx.cr6.gt) goto loc_828AB6C8;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_828AB684:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r31
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x828ab6a4
	if (ctx.cr6.eq) goto loc_828AB6A4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x828ab684
	if (ctx.cr6.lt) goto loc_828AB684;
	// b 0x828ab6c8
	goto loc_828AB6C8;
loc_828AB6A4:
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
	ctx.lr = 0x828AB6C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x828ab6d4
	if (!ctx.cr0.eq) goto loc_828AB6D4;
loc_828AB6C8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829bc140
	ctx.lr = 0x828AB6D4;
	sub_829BC140(ctx, base);
loc_828AB6D4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828AB6F0"))) PPC_WEAK_FUNC(sub_828AB6F0);
PPC_FUNC_IMPL(__imp__sub_828AB6F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r11,r11,12744
	ctx.r11.s64 = ctx.r11.s64 + 12744;
	// addi r10,r10,13904
	ctx.r10.s64 = ctx.r10.s64 + 13904;
	// addi r9,r9,13956
	ctx.r9.s64 = ctx.r9.s64 + 13956;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// bl 0x829c36c0
	ctx.lr = 0x828AB72C;
	sub_829C36C0(ctx, base);
	// addi r3,r31,1680
	ctx.r3.s64 = ctx.r31.s64 + 1680;
	// bl 0x8239d768
	ctx.lr = 0x828AB734;
	sub_8239D768(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-29556
	ctx.r11.s64 = ctx.r11.s64 + -29556;
	// stw r11,1648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1648, ctx.r11.u32);
	// bl 0x8284c6d0
	ctx.lr = 0x828AB748;
	sub_8284C6D0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828AB760"))) PPC_WEAK_FUNC(sub_828AB760);
PPC_FUNC_IMPL(__imp__sub_828AB760) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x829bc7b8
	ctx.lr = 0x828AB778;
	sub_829BC7B8(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r4,r31,1248
	ctx.r4.s64 = ctx.r31.s64 + 1248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-25356
	ctx.r5.s64 = ctx.r11.s64 + -25356;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x824f5ee0
	ctx.lr = 0x828AB794;
	sub_824F5EE0(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r4,r31,1096
	ctx.r4.s64 = ctx.r31.s64 + 1096;
	// addi r5,r11,-25328
	ctx.r5.s64 = ctx.r11.s64 + -25328;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416240
	ctx.lr = 0x828AB7B0;
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

__attribute__((alias("__imp__sub_828AB7C8"))) PPC_WEAK_FUNC(sub_828AB7C8);
PPC_FUNC_IMPL(__imp__sub_828AB7C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x828AB7D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x829c4e48
	ctx.lr = 0x828AB7DC;
	sub_829C4E48(ctx, base);
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828ab830
	if (!ctx.cr6.eq) goto loc_828AB830;
	// addi r11,r31,1644
	ctx.r11.s64 = ctx.r31.s64 + 1644;
	// addi r29,r31,424
	ctx.r29.s64 = ctx.r31.s64 + 424;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82838fd0
	ctx.lr = 0x828AB804;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r31,1492
	ctx.r10.s64 = ctx.r31.s64 + 1492;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r31,r30,4
	ctx.r31.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82838fd0
	ctx.lr = 0x828AB824;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
loc_828AB830:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828AB840"))) PPC_WEAK_FUNC(sub_828AB840);
PPC_FUNC_IMPL(__imp__sub_828AB840) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x828AB848;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x829c5148
	ctx.lr = 0x828AB858;
	sub_829C5148(ctx, base);
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828ab94c
	if (!ctx.cr6.eq) goto loc_828AB94C;
	// addi r28,r31,1644
	ctx.r28.s64 = ctx.r31.s64 + 1644;
	// addi r30,r31,424
	ctx.r30.s64 = ctx.r31.s64 + 424;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x828AB880;
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
	ctx.lr = 0x828AB8A4;
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
	ctx.lr = 0x828AB8B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x828ab8dc
	if (!ctx.cr0.eq) goto loc_828AB8DC;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x828AB8D0;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_828AB8DC:
	// addi r28,r31,1492
	ctx.r28.s64 = ctx.r31.s64 + 1492;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x828AB8F0;
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
	ctx.lr = 0x828AB914;
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
	ctx.lr = 0x828AB928;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x828ab94c
	if (!ctx.cr0.eq) goto loc_828AB94C;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x828AB940;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_828AB94C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828AB958"))) PPC_WEAK_FUNC(sub_828AB958);
PPC_FUNC_IMPL(__imp__sub_828AB958) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-25308
	ctx.r3.s64 = ctx.r11.s64 + -25308;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82816528
	ctx.lr = 0x828AB980;
	sub_82816528(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x828ab9a0
	if (!ctx.cr6.eq) goto loc_828AB9A0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// lwz r11,1112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AB9A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828AB9A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828AB9B8"))) PPC_WEAK_FUNC(sub_828AB9B8);
PPC_FUNC_IMPL(__imp__sub_828AB9B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// bl 0x829c4848
	ctx.lr = 0x828AB9CC;
	sub_829C4848(ctx, base);
	// lwz r11,1644(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1644);
	// stw r11,1488(r7)
	PPC_STORE_U32(ctx.r7.u32 + 1488, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828AB9E8"))) PPC_WEAK_FUNC(sub_828AB9E8);
PPC_FUNC_IMPL(__imp__sub_828AB9E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x828AB9F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x829c4898
	ctx.lr = 0x828AB9FC;
	sub_829C4898(ctx, base);
	// lwz r9,1488(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1488);
	// lwz r10,1644(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1644);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x828abb20
	if (ctx.cr6.eq) goto loc_828ABB20;
	// addic. r11,r31,300
	ctx.xer.ca = ctx.r31.u32 > 4294966995;
	ctx.r11.s64 = ctx.r31.s64 + 300;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828aba2c
	if (ctx.cr0.eq) goto loc_828ABA2C;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x828aba2c
	if (ctx.cr6.eq) goto loc_828ABA2C;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x828aba30
	goto loc_828ABA30;
loc_828ABA2C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828ABA30:
	// lis r30,-31946
	ctx.r30.s64 = -2093613056;
	// lis r29,-31946
	ctx.r29.s64 = -2093613056;
	// lwz r11,-1464(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1464);
	// lwz r4,-1468(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -1468);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x828aba74
	if (!ctx.cr6.eq) goto loc_828ABA74;
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x828aba74
	if (ctx.cr6.eq) goto loc_828ABA74;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r5,-6056(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6056);
	// bl 0x829e3fd0
	ctx.lr = 0x828ABA6C;
	sub_829E3FD0(ctx, base);
	// lwz r11,-1464(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1464);
	// b 0x828abb14
	goto loc_828ABB14;
loc_828ABA74:
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x828abaa4
	if (!ctx.cr6.eq) goto loc_828ABAA4;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x828abaa4
	if (ctx.cr6.eq) goto loc_828ABAA4;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,-6056(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6056);
	// bl 0x829e3fd0
	ctx.lr = 0x828ABA9C;
	sub_829E3FD0(ctx, base);
	// lwz r11,-1468(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -1468);
	// b 0x828abb14
	goto loc_828ABB14;
loc_828ABAA4:
	// lis r30,-31946
	ctx.r30.s64 = -2093613056;
	// lis r29,-31946
	ctx.r29.s64 = -2093613056;
	// lwz r11,-1456(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1456);
	// lwz r4,-1460(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -1460);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x828abae8
	if (!ctx.cr6.eq) goto loc_828ABAE8;
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x828abae8
	if (ctx.cr6.eq) goto loc_828ABAE8;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r5,-6056(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6056);
	// bl 0x829e3fd0
	ctx.lr = 0x828ABAE0;
	sub_829E3FD0(ctx, base);
	// lwz r11,-1456(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1456);
	// b 0x828abb14
	goto loc_828ABB14;
loc_828ABAE8:
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x828abb18
	if (!ctx.cr6.eq) goto loc_828ABB18;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x828abb18
	if (ctx.cr6.eq) goto loc_828ABB18;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,-6056(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6056);
	// bl 0x829e3fd0
	ctx.lr = 0x828ABB10;
	sub_829E3FD0(ctx, base);
	// lwz r11,-1460(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -1460);
loc_828ABB14:
	// stw r11,1644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1644, ctx.r11.u32);
loc_828ABB18:
	// lwz r11,1644(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1644);
	// stw r11,1488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1488, ctx.r11.u32);
loc_828ABB20:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828ABB28"))) PPC_WEAK_FUNC(sub_828ABB28);
PPC_FUNC_IMPL(__imp__sub_828ABB28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x828ABB30;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8284c7e8
	ctx.lr = 0x828ABB3C;
	sub_8284C7E8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829c3330
	ctx.lr = 0x828ABB44;
	sub_829C3330(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828ABB58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r11,r30,300
	ctx.xer.ca = ctx.r30.u32 > 4294966995;
	ctx.r11.s64 = ctx.r30.s64 + 300;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828abb78
	if (ctx.cr0.eq) goto loc_828ABB78;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x828abb78
	if (ctx.cr6.eq) goto loc_828ABB78;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x828abb7c
	goto loc_828ABB7C;
loc_828ABB78:
	// li r31,0
	ctx.r31.s64 = 0;
loc_828ABB7C:
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,-25488
	ctx.r3.s64 = ctx.r11.s64 + -25488;
	// bl 0x82816528
	ctx.lr = 0x828ABB88;
	sub_82816528(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r11,-25296
	ctx.r3.s64 = ctx.r11.s64 + -25296;
	// bl 0x82816528
	ctx.lr = 0x828ABB98;
	sub_82816528(ctx, base);
	// addi r31,r31,112
	ctx.r31.s64 = ctx.r31.s64 + 112;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828ABBAC;
	sub_828D0CB0(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,-25508
	ctx.r3.s64 = ctx.r11.s64 + -25508;
	// bl 0x82816528
	ctx.lr = 0x828ABBB8;
	sub_82816528(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r11,-25288
	ctx.r3.s64 = ctx.r11.s64 + -25288;
	// bl 0x82816528
	ctx.lr = 0x828ABBC8;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828ABBD8;
	sub_828D0CB0(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,-25444
	ctx.r3.s64 = ctx.r11.s64 + -25444;
	// bl 0x82816528
	ctx.lr = 0x828ABBE4;
	sub_82816528(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r11,-25280
	ctx.r3.s64 = ctx.r11.s64 + -25280;
	// bl 0x82816528
	ctx.lr = 0x828ABBF4;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828ABC04;
	sub_828D0CB0(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,-25464
	ctx.r3.s64 = ctx.r11.s64 + -25464;
	// bl 0x82816528
	ctx.lr = 0x828ABC10;
	sub_82816528(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r11,-25272
	ctx.r3.s64 = ctx.r11.s64 + -25272;
	// bl 0x82816528
	ctx.lr = 0x828ABC20;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828ABC30;
	sub_828D0CB0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829c6a98
	ctx.lr = 0x828ABC3C;
	sub_829C6A98(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
loc_828ABC44:
	// lwz r11,292(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 292);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x828abc8c
	if (!ctx.cr6.lt) goto loc_828ABC8C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824112d0
	ctx.lr = 0x828ABC5C;
	sub_824112D0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x828abc84
	if (ctx.cr0.eq) goto loc_828ABC84;
	// addi r3,r29,144
	ctx.r3.s64 = ctx.r29.s64 + 144;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x82a4ea80
	ctx.lr = 0x828ABC74;
	sub_82A4EA80(ctx, base);
	// addi r3,r29,208
	ctx.r3.s64 = ctx.r29.s64 + 208;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x82a4ea80
	ctx.lr = 0x828ABC84;
	sub_82A4EA80(ctx, base);
loc_828ABC84:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x828abc44
	goto loc_828ABC44;
loc_828ABC8C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828ABC98"))) PPC_WEAK_FUNC(sub_828ABC98);
PPC_FUNC_IMPL(__imp__sub_828ABC98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x828ABCA0;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lis r30,-31943
	ctx.r30.s64 = -2093416448;
	// lwz r11,-17688(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17688);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828abcd4
	if (!ctx.cr0.eq) goto loc_828ABCD4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// stw r11,-17688(r10)
	PPC_STORE_U32(ctx.r10.u32 + -17688, ctx.r11.u32);
	// addi r3,r9,-25264
	ctx.r3.s64 = ctx.r9.s64 + -25264;
	// bl 0x82816528
	ctx.lr = 0x828ABCD0;
	sub_82816528(ctx, base);
	// stw r3,-17692(r30)
	PPC_STORE_U32(ctx.r30.u32 + -17692, ctx.r3.u32);
loc_828ABCD4:
	// li r3,164
	ctx.r3.s64 = 164;
	// bl 0x82833108
	ctx.lr = 0x828ABCDC;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// li r27,1
	ctx.r27.s64 = 1;
	// beq 0x828abd60
	if (ctx.cr0.eq) goto loc_828ABD60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r28,-17692(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + -17692);
	// bl 0x824d4a38
	ctx.lr = 0x828ABCF4;
	sub_824D4A38(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,-19240
	ctx.r11.s64 = ctx.r11.s64 + -19240;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// stw r27,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r27.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// stw r27,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r27.u32);
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// stw r10,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r10.u32);
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// stw r30,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// stw r30,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r30.u32);
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// b 0x828abd68
	goto loc_828ABD68;
loc_828ABD60:
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_828ABD68:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x828abebc
	if (ctx.cr6.eq) goto loc_828ABEBC;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r10,1024(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1024);
	// addi r31,r11,1268
	ctx.r31.s64 = ctx.r11.s64 + 1268;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828ABD94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,-1
	ctx.r7.s64 = -1;
	// bl 0x82336a38
	ctx.lr = 0x828ABDAC;
	sub_82336A38(ctx, base);
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x828abea4
	if (ctx.cr6.eq) goto loc_828ABEA4;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828ABDD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,208
	ctx.r3.s64 = 208;
	// bl 0x82833108
	ctx.lr = 0x828ABDDC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828abdf0
	if (ctx.cr0.eq) goto loc_828ABDF0;
	// bl 0x828d1400
	ctx.lr = 0x828ABDE8;
	sub_828D1400(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x828abdf4
	goto loc_828ABDF4;
loc_828ABDF0:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_828ABDF4:
	// stw r27,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r27.u32);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// stw r27,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r27.u32);
	// addi r3,r11,-25248
	ctx.r3.s64 = ctx.r11.s64 + -25248;
	// bl 0x82816528
	ctx.lr = 0x828ABE08;
	sub_82816528(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// ld r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ld r7,120(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828ABE54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,592
	ctx.r3.s64 = 592;
	// bl 0x82833108
	ctx.lr = 0x828ABE5C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828abe78
	if (ctx.cr0.eq) goto loc_828ABE78;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r28,20
	ctx.r4.s64 = ctx.r28.s64 + 20;
	// bl 0x828aef20
	ctx.lr = 0x828ABE70;
	sub_828AEF20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828abe7c
	goto loc_828ABE7C;
loc_828ABE78:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_828ABE7C:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x828abe8c
	if (ctx.cr6.eq) goto loc_828ABE8C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8284dcb0
	ctx.lr = 0x828ABE8C;
	sub_8284DCB0(ctx, base);
loc_828ABE8C:
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
	ctx.lr = 0x828ABEA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828ABEA4:
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
	ctx.lr = 0x828ABEBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828ABEBC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828ABEC8"))) PPC_WEAK_FUNC(sub_828ABEC8);
PPC_FUNC_IMPL(__imp__sub_828ABEC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x829c6fb8
	ctx.lr = 0x828ABEE8;
	sub_829C6FB8(ctx, base);
	// lwz r11,1496(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1496);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828abf10
	if (ctx.cr0.eq) goto loc_828ABF10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82416348
	ctx.lr = 0x828ABEFC;
	sub_82416348(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x828ac078
	ctx.lr = 0x828ABF10;
	sub_828AC078(ctx, base);
loc_828ABF10:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828ABF28"))) PPC_WEAK_FUNC(sub_828ABF28);
PPC_FUNC_IMPL(__imp__sub_828ABF28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x828ABF30;
	__savegprlr_28(ctx, base);
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
	// stw r29,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r29.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,1496(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1496);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828abfbc
	if (ctx.cr0.eq) goto loc_828ABFBC;
	// lwz r11,1648(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1648);
	// addi r3,r31,1648
	ctx.r3.s64 = ctx.r31.s64 + 1648;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828ABF68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,1696(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1696);
	// addi r3,r31,1680
	ctx.r3.s64 = ctx.r31.s64 + 1680;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x828abf9c
	if (!ctx.cr6.gt) goto loc_828ABF9C;
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
loc_828ABF80:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r8,r29
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x828abfa0
	if (ctx.cr6.eq) goto loc_828ABFA0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x828abf80
	if (ctx.cr6.lt) goto loc_828ABF80;
loc_828ABF9C:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_828ABFA0:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x828abfbc
	if (!ctx.cr6.eq) goto loc_828ABFBC;
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// bl 0x82410060
	ctx.lr = 0x828ABFB0;
	sub_82410060(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x829bd3a8
	ctx.lr = 0x828ABFBC;
	sub_829BD3A8(ctx, base);
loc_828ABFBC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828ABFD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x828ac048
	if (ctx.cr0.eq) goto loc_828AC048;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c1f08
	ctx.lr = 0x828ABFE8;
	sub_829C1F08(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x828ac010
	if (ctx.cr0.eq) goto loc_828AC010;
	// bl 0x823bd730
	ctx.lr = 0x828ABFF4;
	sub_823BD730(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AC00C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x828ac014
	goto loc_828AC014;
loc_828AC010:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828AC014:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// beq cr6,0x828ac030
	if (ctx.cr6.eq) goto loc_828AC030;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x828ac03c
	goto loc_828AC03C;
loc_828AC030:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1144);
loc_828AC03C:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AC044;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_828AC048:
	// lwz r11,1496(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1496);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828ac068
	if (ctx.cr0.eq) goto loc_828AC068;
	// lwz r11,1648(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1648);
	// addi r3,r31,1648
	ctx.r3.s64 = ctx.r31.s64 + 1648;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AC068;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828AC068:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828AC078"))) PPC_WEAK_FUNC(sub_828AC078);
PPC_FUNC_IMPL(__imp__sub_828AC078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x828AC080;
	__savegprlr_28(ctx, base);
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
	// stw r29,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r29.u32);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r11,1496(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1496);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828ac0d0
	if (ctx.cr0.eq) goto loc_828AC0D0;
	// lwz r11,1648(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1648);
	// addi r3,r31,1648
	ctx.r3.s64 = ctx.r31.s64 + 1648;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AC0B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// addi r3,r31,1680
	ctx.r3.s64 = ctx.r31.s64 + 1680;
	// bl 0x824b99b0
	ctx.lr = 0x828AC0C4;
	sub_824B99B0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x829bd428
	ctx.lr = 0x828AC0D0;
	sub_829BD428(ctx, base);
loc_828AC0D0:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x828ac160
	if (ctx.cr6.eq) goto loc_828AC160;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r10,788(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x828ac104
	if (!ctx.cr6.eq) goto loc_828AC104;
	// lwz r11,432(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bge cr6,0x828ac104
	if (!ctx.cr6.lt) goto loc_828AC104;
	// lwz r11,1496(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1496);
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,1496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1496, ctx.r11.u32);
loc_828AC104:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c1f08
	ctx.lr = 0x828AC10C;
	sub_829C1F08(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x828ac134
	if (ctx.cr0.eq) goto loc_828AC134;
	// bl 0x823bd730
	ctx.lr = 0x828AC118;
	sub_823BD730(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AC130;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x828ac138
	goto loc_828AC138;
loc_828AC134:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828AC138:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// beq cr6,0x828ac154
	if (ctx.cr6.eq) goto loc_828AC154;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x828ac1bc
	goto loc_828AC1BC;
loc_828AC154:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1156);
	// b 0x828ac1b8
	goto loc_828AC1B8;
loc_828AC160:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c1f08
	ctx.lr = 0x828AC168;
	sub_829C1F08(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x828ac190
	if (ctx.cr0.eq) goto loc_828AC190;
	// bl 0x823bd730
	ctx.lr = 0x828AC174;
	sub_823BD730(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AC18C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x828ac194
	goto loc_828AC194;
loc_828AC190:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828AC194:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// beq cr6,0x828ac1b0
	if (ctx.cr6.eq) goto loc_828AC1B0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x828ac1bc
	goto loc_828AC1BC;
loc_828AC1B0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1152(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1152);
loc_828AC1B8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_828AC1BC:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AC1C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1496(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1496);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828ac1e8
	if (ctx.cr0.eq) goto loc_828AC1E8;
	// lwz r11,1648(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1648);
	// addi r3,r31,1648
	ctx.r3.s64 = ctx.r31.s64 + 1648;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AC1E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828AC1E8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828AC1F8"))) PPC_WEAK_FUNC(sub_828AC1F8);
PPC_FUNC_IMPL(__imp__sub_828AC1F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x828AC200;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,1052(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1052);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AC220;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-25248
	ctx.r3.s64 = ctx.r11.s64 + -25248;
	// bl 0x82816528
	ctx.lr = 0x828AC230;
	sub_82816528(ctx, base);
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828ac258
	if (ctx.cr6.eq) goto loc_828AC258;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,220(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AC254;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x828ac25c
	goto loc_828AC25C;
loc_828AC258:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828AC25C:
	// bl 0x824114f8
	ctx.lr = 0x828AC260;
	sub_824114F8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lis r27,-31946
	ctx.r27.s64 = -2093613056;
	// lis r28,-31946
	ctx.r28.s64 = -2093613056;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-1464(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1464);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x828ac2ac
	if (ctx.cr6.eq) goto loc_828AC2AC;
	// lwz r11,-1468(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -1468);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x828ac2ac
	if (ctx.cr6.eq) goto loc_828AC2AC;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lwz r11,-1456(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1456);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x828ac2a4
	if (ctx.cr6.eq) goto loc_828AC2A4;
	// lwz r11,-1460(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -1460);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x828ac368
	if (!ctx.cr6.eq) goto loc_828AC368;
loc_828AC2A4:
	// lwz r4,1640(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1640);
	// b 0x828ac2b0
	goto loc_828AC2B0;
loc_828AC2AC:
	// lwz r4,1636(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1636);
loc_828AC2B0:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r5,112(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// lwz r3,13024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// bl 0x8282d4b0
	ctx.lr = 0x828AC2C0;
	sub_8282D4B0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828ac368
	if (ctx.cr6.eq) goto loc_828AC368;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x828ac368
	if (ctx.cr6.eq) goto loc_828AC368;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82412b58
	ctx.lr = 0x828AC2E0;
	sub_82412B58(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f13,1632(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1632);
	ctx.f13.f64 = double(temp.f32);
	// lfs f1,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f13,f1
	ctx.cr6.compare(ctx.f13.f64, ctx.f1.f64);
	// bge cr6,0x828ac368
	if (!ctx.cr6.lt) goto loc_828AC368;
	// lwz r11,-1460(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -1460);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x828ac330
	if (ctx.cr6.eq) goto loc_828AC330;
	// lwz r11,-1468(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -1468);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x828ac330
	if (ctx.cr6.eq) goto loc_828AC330;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828ac320
	if (ctx.cr6.eq) goto loc_828AC320;
	// lfs f0,60(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// b 0x828ac328
	goto loc_828AC328;
loc_828AC320:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
loc_828AC328:
	// fmuls f2,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// b 0x828ac34c
	goto loc_828AC34C;
loc_828AC330:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828ac344
	if (ctx.cr6.eq) goto loc_828AC344;
	// lfs f2,60(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f2.f64 = double(temp.f32);
	// b 0x828ac34c
	goto loc_828AC34C;
loc_828AC344:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f2,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f2.f64 = double(temp.f32);
loc_828AC34C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,212(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AC364;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r26,1
	ctx.r26.s64 = 1;
loc_828AC368:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828AC378"))) PPC_WEAK_FUNC(sub_828AC378);
PPC_FUNC_IMPL(__imp__sub_828AC378) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x828ac3a0
	if (ctx.cr0.eq) goto loc_828AC3A0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,1112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_828AC3A0:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm. r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x828ac3c0
	if (ctx.cr0.eq) goto loc_828AC3C0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,1112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_828AC3C0:
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,1492(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1492);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// lwz r11,1112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1112);
	// rlwinm r4,r10,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_828AC3E8"))) PPC_WEAK_FUNC(sub_828AC3E8);
PPC_FUNC_IMPL(__imp__sub_828AC3E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828AC3F0"))) PPC_WEAK_FUNC(sub_828AC3F0);
PPC_FUNC_IMPL(__imp__sub_828AC3F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x828AC3F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r30,4(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r5,r10,-22748
	ctx.r5.s64 = ctx.r10.s64 + -22748;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82650e10
	ctx.lr = 0x828AC438;
	sub_82650E10(ctx, base);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x828ac450
	if (ctx.cr0.eq) goto loc_828AC450;
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x828ac474
	goto loc_828AC474;
loc_828AC450:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm. r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828ac474
	if (!ctx.cr0.eq) goto loc_828AC474;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828ac474
	if (ctx.cr0.eq) goto loc_828AC474;
	// lwz r11,1500(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1500);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r31,r11,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_828AC474:
	// clrlwi. r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r31,96(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x828ac4d0
	if (!ctx.cr6.gt) goto loc_828AC4D0;
	// lwz r30,92(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// beq 0x828ac4b0
	if (ctx.cr0.eq) goto loc_828AC4B0;
loc_828AC48C:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x828abf28
	ctx.lr = 0x828AC4A0;
	sub_828ABF28(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x828ac48c
	if (!ctx.cr0.eq) goto loc_828AC48C;
	// b 0x828ac4d0
	goto loc_828AC4D0;
loc_828AC4B0:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x828ac078
	ctx.lr = 0x828AC4C4;
	sub_828AC078(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x828ac4b0
	if (!ctx.cr0.eq) goto loc_828AC4B0;
loc_828AC4D0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8239d768
	ctx.lr = 0x828AC4D8;
	sub_8239D768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828AC4E0"))) PPC_WEAK_FUNC(sub_828AC4E0);
PPC_FUNC_IMPL(__imp__sub_828AC4E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r9,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x828ac500
	if (ctx.cr0.eq) goto loc_828AC500;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x828ac52c
	goto loc_828AC52C;
loc_828AC500:
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm. r9,r9,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x828ac514
	if (ctx.cr0.eq) goto loc_828AC514;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x828ac52c
	goto loc_828AC52C;
loc_828AC514:
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828ac52c
	if (ctx.cr0.eq) goto loc_828AC52C;
	// lwz r11,1508(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1508);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_828AC52C:
	// clrlwi. r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x828ac53c
	if (!ctx.cr0.eq) goto loc_828AC53C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_828AC53C:
	// stw r11,1508(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1508, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828AC548"))) PPC_WEAK_FUNC(sub_828AC548);
PPC_FUNC_IMPL(__imp__sub_828AC548) {
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
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x829bcbf0
	ctx.lr = 0x828AC568;
	sub_829BCBF0(ctx, base);
	// lwz r11,188(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 188);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stw r11,1492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1492, ctx.r11.u32);
	// lwz r11,184(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// stw r11,1704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1704, ctx.r11.u32);
	// lbz r11,136(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 136);
	// stw r11,1504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1504, ctx.r11.u32);
	// lwz r11,140(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	// stw r11,1508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1508, ctx.r11.u32);
	// lwz r11,176(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// stw r11,1636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1636, ctx.r11.u32);
	// lwz r11,180(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// stw r11,1640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1640, ctx.r11.u32);
	// lwz r11,192(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 192);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828ac5bc
	if (ctx.cr6.eq) goto loc_828AC5BC;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lwz r11,-1468(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1468);
	// stw r11,804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 804, ctx.r11.u32);
loc_828AC5BC:
	// lbz r9,137(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 137);
	// addi r10,r31,1516
	ctx.r10.s64 = ctx.r31.s64 + 1516;
	// lwz r8,960(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// addi r11,r31,1528
	ctx.r11.s64 = ctx.r31.s64 + 1528;
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// stb r9,1512(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1512, ctx.r9.u8);
	// lwz r9,144(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// stw r9,1516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1516, ctx.r9.u32);
	// lwz r9,148(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// stw r9,1520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1520, ctx.r9.u32);
	// lwz r9,152(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// stw r9,1524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1524, ctx.r9.u32);
	// lwz r9,156(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// stw r9,1528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1528, ctx.r9.u32);
	// lwz r9,160(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// stw r9,1532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1532, ctx.r9.u32);
	// lwz r9,164(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// stw r9,1536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1536, ctx.r9.u32);
	// lfs f0,168(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1540(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1540, temp.u32);
	// lfs f0,172(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1544(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1544, temp.u32);
	// bne cr6,0x828ac810
	if (!ctx.cr6.eq) goto loc_828AC810;
	// lbz r9,1512(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1512);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x828ac748
	if (!ctx.cr0.eq) goto loc_828AC748;
	// lwz r10,660(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 660);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lwz r8,656(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// lwz r7,664(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 664);
	// lfs f13,1540(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1540);
	ctx.f13.f64 = double(temp.f32);
	// stw r10,1612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1612, ctx.r10.u32);
	// lfs f0,908(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,1608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1608, ctx.r8.u32);
	// fdivs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stw r7,1616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1616, ctx.r7.u32);
	// lwa r9,8(r11)
	ctx.r9.s64 = int32_t(PPC_LOAD_U32(ctx.r11.u32 + 8));
	// fdivs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// lwa r10,0(r11)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r11.u32 + 0));
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lfd f10,88(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lwa r10,4(r11)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r11.u32 + 4));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// fctiwz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f12,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f12.u64);
	// fmuls f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fctiwz f12,f11
	ctx.f12.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// fmuls f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stfd f12,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f12.u64);
	// stw r10,1572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1572, ctx.r10.u32);
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// stw r9,1576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1576, ctx.r9.u32);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r9,1580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1580, ctx.r9.u32);
	// lwa r10,0(r11)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r11.u32 + 0));
	// lwa r9,4(r11)
	ctx.r9.s64 = int32_t(PPC_LOAD_U32(ctx.r11.u32 + 4));
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lwa r11,8(r11)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r11.u32 + 8));
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r11,1564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1564, ctx.r11.u32);
	// fmuls f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// fcfid f13,f11
	ctx.f13.f64 = double(ctx.f11.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r11,1568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1568, ctx.r11.u32);
	// stw r10,1560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1560, ctx.r10.u32);
	// b 0x828ac810
	goto loc_828AC810;
loc_828AC748:
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x828ac810
	if (!ctx.cr6.eq) goto loc_828AC810;
	// lwz r11,660(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 660);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lwz r7,620(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	// lfs f13,1540(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1540);
	ctx.f13.f64 = double(temp.f32);
	// lwz r6,624(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	// lfs f12,1544(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1544);
	ctx.f12.f64 = double(temp.f32);
	// lwz r5,628(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	// lwz r8,664(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 664);
	// stw r11,1612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1612, ctx.r11.u32);
	// lfs f0,908(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,656(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// fdivs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stw r7,1620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1620, ctx.r7.u32);
	// fdivs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// stw r6,1624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1624, ctx.r6.u32);
	// stw r5,1628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1628, ctx.r5.u32);
	// stw r8,1616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1616, ctx.r8.u32);
	// stw r11,1608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1608, ctx.r11.u32);
	// lfs f12,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f12,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lfs f12,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r9,1600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1600, ctx.r9.u32);
	// stw r11,1604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1604, ctx.r11.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,1596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1596, ctx.r11.u32);
	// lfs f13,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r9,1584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1584, ctx.r9.u32);
	// stw r10,1588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1588, ctx.r10.u32);
	// stw r11,1592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1592, ctx.r11.u32);
loc_828AC810:
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

__attribute__((alias("__imp__sub_828AC828"))) PPC_WEAK_FUNC(sub_828AC828);
PPC_FUNC_IMPL(__imp__sub_828AC828) {
	PPC_FUNC_PROLOGUE();
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
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828ac86c
	if (!ctx.cr6.eq) goto loc_828AC86C;
	// lbz r11,1512(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1512);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x828ac86c
	if (ctx.cr6.eq) goto loc_828AC86C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1140);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AC86C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828AC86C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1088(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1088);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AC884;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8284d4e0
	ctx.lr = 0x828AC890;
	sub_8284D4E0(ctx, base);
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

__attribute__((alias("__imp__sub_828AC8A8"))) PPC_WEAK_FUNC(sub_828AC8A8);
PPC_FUNC_IMPL(__imp__sub_828AC8A8) {
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
	// lwz r11,1704(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1704);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828ac930
	if (ctx.cr6.eq) goto loc_828AC930;
	// lwz r11,1708(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1708);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828ac8f8
	if (ctx.cr6.eq) goto loc_828AC8F8;
	// bl 0x828ac968
	ctx.lr = 0x828AC8DC;
	sub_828AC968(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x828ac930
	if (!ctx.cr0.eq) goto loc_828AC930;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f3,16356(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16356);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,908(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f2.f64 = double(temp.f32);
	// b 0x828ac914
	goto loc_828AC914;
loc_828AC8F8:
	// bl 0x828ac968
	ctx.lr = 0x828AC8FC;
	sub_828AC968(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x828ac930
	if (ctx.cr0.eq) goto loc_828AC930;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r10,r11,20416
	ctx.r10.s64 = ctx.r11.s64 + 20416;
	// lfs f3,20416(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20416);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4308(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4308);
	ctx.f2.f64 = double(temp.f32);
loc_828AC914:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8284f748
	ctx.lr = 0x828AC920;
	sub_8284F748(ctx, base);
	// lwz r11,1076(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1076);
	// li r4,1
	ctx.r4.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AC930;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828AC930:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828AC948"))) PPC_WEAK_FUNC(sub_828AC948);
PPC_FUNC_IMPL(__imp__sub_828AC948) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// bne cr6,0x828ac960
	if (!ctx.cr6.eq) goto loc_828AC960;
	// li r11,0
	ctx.r11.s64 = 0;
loc_828AC960:
	// stw r11,1708(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1708, ctx.r11.u32);
	// b 0x8284f6a8
	sub_8284F6A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828AC968"))) PPC_WEAK_FUNC(sub_828AC968);
PPC_FUNC_IMPL(__imp__sub_828AC968) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x828AC970;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r4,1312(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1312);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x828ac9a4
	if (ctx.cr6.eq) goto loc_828AC9A4;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x828AC99C;
	sub_829B9720(ctx, base);
	// bl 0x82409c40
	ctx.lr = 0x828AC9A0;
	sub_82409C40(ctx, base);
	// b 0x828ac9a8
	goto loc_828AC9A8;
loc_828AC9A4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_828AC9A8:
	// bl 0x82411b98
	ctx.lr = 0x828AC9AC;
	sub_82411B98(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x828acb14
	if (ctx.cr0.eq) goto loc_828ACB14;
	// lwz r6,1412(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1412);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x828acb14
	if (ctx.cr6.eq) goto loc_828ACB14;
	// lwz r30,13024(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// bl 0x827da008
	ctx.lr = 0x828AC9D0;
	sub_827DA008(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828acb14
	if (ctx.cr6.eq) goto loc_828ACB14;
	// lwz r10,624(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 624);
	// lfs f0,620(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,628(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 628);
	// fmr f10,f0
	ctx.f10.f64 = ctx.f0.f64;
	// lwz r8,620(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 620);
	// lfs f13,624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f13.f64 = double(temp.f32);
	// lwz r7,1492(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1492);
	// lfs f12,628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f12.f64 = double(temp.f32);
	// lwz r5,1496(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1496);
	// lis r6,-31963
	ctx.r6.s64 = -2094727168;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// lfs f11,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f11.f64 = double(temp.f32);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// lfs f9,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f9.f64 = double(temp.f32);
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// lfs f8,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// lwz r11,1500(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1500);
	// fsubs f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// fsubs f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// lfs f8,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// addi r11,r31,620
	ctx.r11.s64 = ctx.r31.s64 + 620;
	// lfs f7,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f7.f64 = double(temp.f32);
	// lfs f9,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f9.f64 = double(temp.f32);
	// lfs f6,624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f5.f64 = double(temp.f32);
	// lfs f11,24020(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 24020);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fsqrts f4,f0
	ctx.f4.f64 = double(float(sqrt(ctx.f0.f64)));
	// fsubs f0,f10,f8
	ctx.f0.f64 = double(float(ctx.f10.f64 - ctx.f8.f64));
	// fsubs f13,f6,f7
	ctx.f13.f64 = double(float(ctx.f6.f64 - ctx.f7.f64));
	// fsubs f12,f5,f9
	ctx.f12.f64 = double(float(ctx.f5.f64 - ctx.f9.f64));
	// fcmpu cr6,f4,f11
	ctx.cr6.compare(ctx.f4.f64, ctx.f11.f64);
	// blt cr6,0x828aca90
	if (ctx.cr6.lt) goto loc_828ACA90;
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f13,f12,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f0,f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x828acb14
	if (!ctx.cr6.lt) goto loc_828ACB14;
loc_828ACA90:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,8324
	ctx.r7.s64 = 8324;
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// lfs f0,32716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32716);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// bl 0x828253c8
	ctx.lr = 0x828ACAC4;
	sub_828253C8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// beq 0x828acb14
	if (ctx.cr0.eq) goto loc_828ACB14;
loc_828ACAD0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828ACAE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x828acaf4
	if (!ctx.cr6.eq) goto loc_828ACAF4;
	// li r28,1
	ctx.r28.s64 = 1;
loc_828ACAF4:
	// lwz r30,68(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x828acad0
	if (!ctx.cr6.eq) goto loc_828ACAD0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332db8
	ctx.lr = 0x828ACB08;
	sub_82332DB8(ctx, base);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne cr6,0x828acb18
	if (!ctx.cr6.eq) goto loc_828ACB18;
loc_828ACB14:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828ACB18:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828ACB20"))) PPC_WEAK_FUNC(sub_828ACB20);
PPC_FUNC_IMPL(__imp__sub_828ACB20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// lwz r5,1556(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1556);
	// lfs f0,904(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// beq cr6,0x828acf80
	if (ctx.cr6.eq) goto loc_828ACF80;
	// lbz r8,1512(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1512);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne 0x828acde0
	if (!ctx.cr0.eq) goto loc_828ACDE0;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bne cr6,0x828acba8
	if (!ctx.cr6.eq) goto loc_828ACBA8;
	// lwz r10,1528(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1528);
	// lwz r11,1608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// lwz r9,1612(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1612);
	// lwz r8,1532(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1532);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r6,1536(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1536);
	// lwz r7,1616(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1616);
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r9,r6,r7
	ctx.r9.u64 = ctx.r6.u64 + ctx.r7.u64;
	// b 0x828acbbc
	goto loc_828ACBBC;
loc_828ACBA8:
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// bne cr6,0x828acbc8
	if (!ctx.cr6.eq) goto loc_828ACBC8;
	// lwz r11,1608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// lwz r10,1612(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1612);
	// lwz r9,1616(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1616);
loc_828ACBBC:
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
loc_828ACBC8:
	// addi r8,r31,656
	ctx.r8.s64 = ctx.r31.s64 + 656;
	// lwa r8,1564(r31)
	ctx.r8.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 1564));
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lwa r7,1568(r31)
	ctx.r7.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 1568));
	// lwa r6,1560(r31)
	ctx.r6.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 1560));
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r4,660(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 660);
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r7,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// lwz r8,664(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 664);
	// subf r10,r10,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r10.s64;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lwz r7,656(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r6,664(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 664);
	// subf r11,r11,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r11.s64;
	// rotlwi r8,r7,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// rotlwi r7,r4,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r8.u32);
	// stw r7,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r7.u32);
	// fmuls f12,f12,f1
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// stw r6,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r6.u32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fctiwz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f12,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f12.u64);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// fmuls f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// srawi r9,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 31;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// xor r4,r4,r9
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r9.u64;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subf r10,r9,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r9.s64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x828acdb0
	if (!ctx.cr6.gt) goto loc_828ACDB0;
	// extsw r10,r5
	ctx.r10.s64 = ctx.r5.s32;
	// lwa r11,1560(r31)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 1560));
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// lwa r9,1568(r31)
	ctx.r9.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 1568));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// lfd f0,96(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lwa r11,1564(r31)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 1564));
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f11,96(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// lwz r9,316(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 316);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fctiwz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f12,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f12.u64);
	// lwa r11,100(r1)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 100));
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lwa r5,100(r1)
	ctx.r5.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 100));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lwa r10,84(r1)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 84));
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// fmuls f0,f12,f1
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// fmuls f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// fctiwz f0,f13
	ctx.f0.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r7,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r7.u32);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// b 0x828acf7c
	goto loc_828ACF7C;
loc_828ACDB0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// lwz r11,316(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 316);
loc_828ACDBC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828ACDC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1556);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x828acf5c
	if (!ctx.cr6.eq) goto loc_828ACF5C;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lwz r4,-1460(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1460);
	// b 0x828acf6c
	goto loc_828ACF6C;
loc_828ACDE0:
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bne cr6,0x828acf80
	if (!ctx.cr6.eq) goto loc_828ACF80;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bne cr6,0x828ace3c
	if (!ctx.cr6.eq) goto loc_828ACE3C;
	// lfs f13,1628(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1628);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,1524(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1524);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lfs f13,1516(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1516);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lfs f0,1620(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1620);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lfs f0,1520(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1520);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1624);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lwz r10,140(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// b 0x828ace5c
	goto loc_828ACE5C;
loc_828ACE3C:
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// bne cr6,0x828ace5c
	if (!ctx.cr6.eq) goto loc_828ACE5C;
	// lwz r11,1620(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1620);
	// lwz r10,1624(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1624);
	// lwz r9,1628(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1628);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
loc_828ACE5C:
	// lfs f13,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,620(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	// lfs f0,624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,624(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	// lfs f12,1600(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1600);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fmuls f13,f12,f1
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// lfs f11,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f12.f64 = double(temp.f32);
	// lwz r7,628(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	// lfs f10,1604(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1604);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fmuls f11,f10,f1
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// lfs f9,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,620(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r31,1596
	ctx.r11.s64 = ctx.r31.s64 + 1596;
	// lfs f8,1596(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1596);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f10,f10,f9
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// fmuls f9,f8,f1
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// addi r10,r31,620
	ctx.r10.s64 = ctx.r31.s64 + 620;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
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
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x828acf4c
	if (!ctx.cr6.gt) goto loc_828ACF4C;
	// extsw r10,r5
	ctx.r10.s64 = ctx.r5.s32;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// lfs f10,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// lwz r11,460(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 460);
	// lfs f8,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmuls f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// fmuls f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// fmuls f12,f12,f1
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// fadds f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f0,f9,f13
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f0,f8,f12
	ctx.f0.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// b 0x828acf74
	goto loc_828ACF74;
loc_828ACF4C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// lwz r11,460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 460);
	// b 0x828acdbc
	goto loc_828ACDBC;
loc_828ACF5C:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828acf80
	if (!ctx.cr6.eq) goto loc_828ACF80;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lwz r4,-1468(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1468);
loc_828ACF6C:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1132(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1132);
loc_828ACF74:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_828ACF7C:
	// bctrl 
	ctx.lr = 0x828ACF80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828ACF80:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828ACF98"))) PPC_WEAK_FUNC(sub_828ACF98);
PPC_FUNC_IMPL(__imp__sub_828ACF98) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1116(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_828ACFA8"))) PPC_WEAK_FUNC(sub_828ACFA8);
PPC_FUNC_IMPL(__imp__sub_828ACFA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addic. r11,r30,300
	ctx.xer.ca = ctx.r30.u32 > 4294966995;
	ctx.r11.s64 = ctx.r30.s64 + 300;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828acfe4
	if (ctx.cr0.eq) goto loc_828ACFE4;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x828acfe4
	if (ctx.cr6.eq) goto loc_828ACFE4;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x828acfe8
	goto loc_828ACFE8;
loc_828ACFE4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828ACFE8:
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,-6056(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6056);
	// bl 0x829e3fd0
	ctx.lr = 0x828AD004;
	sub_829E3FD0(ctx, base);
	// stw r31,1644(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1644, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828AD020"))) PPC_WEAK_FUNC(sub_828AD020);
PPC_FUNC_IMPL(__imp__sub_828AD020) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_828AD030"))) PPC_WEAK_FUNC(sub_828AD030);
PPC_FUNC_IMPL(__imp__sub_828AD030) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1508(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1508);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828AD048"))) PPC_WEAK_FUNC(sub_828AD048);
PPC_FUNC_IMPL(__imp__sub_828AD048) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x826483e0
	ctx.lr = 0x828AD06C;
	sub_826483E0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828ad088
	if (ctx.cr0.eq) goto loc_828AD088;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828abf28
	ctx.lr = 0x828AD088;
	sub_828ABF28(ctx, base);
loc_828AD088:
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

__attribute__((alias("__imp__sub_828AD0A8"))) PPC_WEAK_FUNC(sub_828AD0A8);
PPC_FUNC_IMPL(__imp__sub_828AD0A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x828AD0B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x826483e0
	ctx.lr = 0x828AD0C8;
	sub_826483E0(ctx, base);
	// addic. r11,r31,300
	ctx.xer.ca = ctx.r31.u32 > 4294966995;
	ctx.r11.s64 = ctx.r31.s64 + 300;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r29,1548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1548, ctx.r29.u32);
	// stw r30,1552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1552, ctx.r30.u32);
	// beq 0x828ad0f0
	if (ctx.cr0.eq) goto loc_828AD0F0;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x828ad0f0
	if (ctx.cr6.eq) goto loc_828AD0F0;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x828ad0f4
	goto loc_828AD0F4;
loc_828AD0F0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828AD0F4:
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// lis r30,-31946
	ctx.r30.s64 = -2093613056;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,-6056(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6056);
	// lwz r4,-1464(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1464);
	// bl 0x829e3fd0
	ctx.lr = 0x828AD114;
	sub_829E3FD0(ctx, base);
	// lwz r11,-1464(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1464);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,1644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1644, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828AD128"))) PPC_WEAK_FUNC(sub_828AD128);
PPC_FUNC_IMPL(__imp__sub_828AD128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addic. r11,r31,300
	ctx.xer.ca = ctx.r31.u32 > 4294966995;
	ctx.r11.s64 = ctx.r31.s64 + 300;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r5,1548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1548, ctx.r5.u32);
	// stw r4,1552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1552, ctx.r4.u32);
	// beq 0x828ad168
	if (ctx.cr0.eq) goto loc_828AD168;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x828ad168
	if (ctx.cr6.eq) goto loc_828AD168;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x828ad16c
	goto loc_828AD16C;
loc_828AD168:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828AD16C:
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// lis r30,-31946
	ctx.r30.s64 = -2093613056;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,-6056(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6056);
	// lwz r4,-1468(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1468);
	// bl 0x829e3fd0
	ctx.lr = 0x828AD18C;
	sub_829E3FD0(ctx, base);
	// lwz r11,-1468(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1468);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,1644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1644, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828AD1B0"))) PPC_WEAK_FUNC(sub_828AD1B0);
PPC_FUNC_IMPL(__imp__sub_828AD1B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x828AD1B8;
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
	// li r28,1
	ctx.r28.s64 = 1;
	// lwz r11,1496(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1496);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828ad1fc
	if (ctx.cr0.eq) goto loc_828AD1FC;
	// lwz r11,1648(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1648);
	// addi r3,r31,1648
	ctx.r3.s64 = ctx.r31.s64 + 1648;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AD1EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1696(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1696);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r28,r11,27,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x828ad264
	if (ctx.cr0.eq) goto loc_828AD264;
loc_828AD1FC:
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lwz r10,1644(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1644);
	// stw r30,1552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1552, ctx.r30.u32);
	// stw r29,1548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1548, ctx.r29.u32);
	// lwz r11,-1460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1460);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x828ad264
	if (ctx.cr6.eq) goto loc_828AD264;
	// addic. r11,r31,300
	ctx.xer.ca = ctx.r31.u32 > 4294966995;
	ctx.r11.s64 = ctx.r31.s64 + 300;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828ad238
	if (ctx.cr0.eq) goto loc_828AD238;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x828ad238
	if (ctx.cr6.eq) goto loc_828AD238;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x828ad23c
	goto loc_828AD23C;
loc_828AD238:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828AD23C:
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// lis r30,-31946
	ctx.r30.s64 = -2093613056;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,-6056(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6056);
	// lwz r4,-1456(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1456);
	// bl 0x829e3fd0
	ctx.lr = 0x828AD25C;
	sub_829E3FD0(ctx, base);
	// lwz r11,-1456(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1456);
	// stw r11,1644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1644, ctx.r11.u32);
loc_828AD264:
	// lwz r11,1496(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1496);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828ad284
	if (ctx.cr0.eq) goto loc_828AD284;
	// lwz r11,1648(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1648);
	// addi r3,r31,1648
	ctx.r3.s64 = ctx.r31.s64 + 1648;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AD284;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828AD284:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828AD290"))) PPC_WEAK_FUNC(sub_828AD290);
PPC_FUNC_IMPL(__imp__sub_828AD290) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x828AD298;
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
	// li r28,1
	ctx.r28.s64 = 1;
	// lwz r11,1496(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1496);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828ad2dc
	if (ctx.cr0.eq) goto loc_828AD2DC;
	// lwz r11,1648(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1648);
	// addi r3,r31,1648
	ctx.r3.s64 = ctx.r31.s64 + 1648;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AD2CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1696(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1696);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r28,r11,27,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x828ad330
	if (ctx.cr0.eq) goto loc_828AD330;
loc_828AD2DC:
	// addic. r11,r31,300
	ctx.xer.ca = ctx.r31.u32 > 4294966995;
	ctx.r11.s64 = ctx.r31.s64 + 300;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r30,1552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1552, ctx.r30.u32);
	// stw r29,1548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1548, ctx.r29.u32);
	// beq 0x828ad304
	if (ctx.cr0.eq) goto loc_828AD304;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x828ad304
	if (ctx.cr6.eq) goto loc_828AD304;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x828ad308
	goto loc_828AD308;
loc_828AD304:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828AD308:
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// lis r30,-31946
	ctx.r30.s64 = -2093613056;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,-6056(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6056);
	// lwz r4,-1460(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1460);
	// bl 0x829e3fd0
	ctx.lr = 0x828AD328;
	sub_829E3FD0(ctx, base);
	// lwz r11,-1460(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1460);
	// stw r11,1644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1644, ctx.r11.u32);
loc_828AD330:
	// lwz r11,1496(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1496);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828ad350
	if (ctx.cr0.eq) goto loc_828AD350;
	// lwz r11,1648(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1648);
	// addi r3,r31,1648
	ctx.r3.s64 = ctx.r31.s64 + 1648;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AD350;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828AD350:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828AD360"))) PPC_WEAK_FUNC(sub_828AD360);
PPC_FUNC_IMPL(__imp__sub_828AD360) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r10,100(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r30,-8
	ctx.r11.s64 = ctx.r30.s64 + -8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828AD39C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r3.u32);
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r30,48(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x823bd5c8
	ctx.lr = 0x828AD3B4;
	sub_823BD5C8(ctx, base);
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
	ctx.lr = 0x828AD3CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x828ad3d8
	if (!ctx.cr0.eq) goto loc_828AD3D8;
	// li r30,0
	ctx.r30.s64 = 0;
loc_828AD3D8:
	// stw r30,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828AD3F8"))) PPC_WEAK_FUNC(sub_828AD3F8);
PPC_FUNC_IMPL(__imp__sub_828AD3F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1144);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_828AD410"))) PPC_WEAK_FUNC(sub_828AD410);
PPC_FUNC_IMPL(__imp__sub_828AD410) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1148);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_828AD428"))) PPC_WEAK_FUNC(sub_828AD428);
PPC_FUNC_IMPL(__imp__sub_828AD428) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1152(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1152);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_828AD440"))) PPC_WEAK_FUNC(sub_828AD440);
PPC_FUNC_IMPL(__imp__sub_828AD440) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1156);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_828AD458"))) PPC_WEAK_FUNC(sub_828AD458);
PPC_FUNC_IMPL(__imp__sub_828AD458) {
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
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1052(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1052);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AD484;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-25248
	ctx.r3.s64 = ctx.r11.s64 + -25248;
	// bl 0x82816528
	ctx.lr = 0x828AD494;
	sub_82816528(ctx, base);
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828ad4bc
	if (ctx.cr6.eq) goto loc_828AD4BC;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,220(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AD4B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x828ad4c0
	goto loc_828AD4C0;
loc_828AD4BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828AD4C0:
	// bl 0x824114f8
	ctx.lr = 0x828AD4C4;
	sub_824114F8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828ad508
	if (ctx.cr0.eq) goto loc_828AD508;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f13,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f13.f64 = double(temp.f32);
	// beq cr6,0x828ad4e8
	if (ctx.cr6.eq) goto loc_828AD4E8;
	// lfs f0,60(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// b 0x828ad4ec
	goto loc_828AD4EC;
loc_828AD4E8:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
loc_828AD4EC:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x828ad508
	if (!ctx.cr6.gt) goto loc_828AD508;
	// lfs f13,92(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// stfs f0,1632(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1632, temp.u32);
loc_828AD508:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828AD520"))) PPC_WEAK_FUNC(sub_828AD520);
PPC_FUNC_IMPL(__imp__sub_828AD520) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-31946
	ctx.r8.s64 = -2093613056;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r4,-1468(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + -1468);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,1552(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1552, ctx.r10.u32);
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,1556(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1556, ctx.r10.u32);
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,1500(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1500, ctx.r9.u32);
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1136);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_828AD590"))) PPC_WEAK_FUNC(sub_828AD590);
PPC_FUNC_IMPL(__imp__sub_828AD590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,-64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -64);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,-56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -56);
	// addic. r11,r11,300
	ctx.xer.ca = ctx.r11.u32 > 4294966995;
	ctx.r11.s64 = ctx.r11.s64 + 300;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828ad5cc
	if (ctx.cr0.eq) goto loc_828AD5CC;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x828ad5cc
	if (ctx.cr6.eq) goto loc_828AD5CC;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x828ad5d0
	goto loc_828AD5D0;
loc_828AD5CC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828AD5D0:
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828ad5fc
	if (ctx.cr6.eq) goto loc_828AD5FC;
	// lwz r10,92(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828ad608
	if (!ctx.cr0.eq) goto loc_828AD608;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828ad5fc
	if (ctx.cr6.eq) goto loc_828AD5FC;
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x828ad608
	if (!ctx.cr0.eq) goto loc_828AD608;
loc_828AD5FC:
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828ad628
	if (ctx.cr0.eq) goto loc_828AD628;
loc_828AD608:
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,-6056(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6056);
	// lwz r4,-1468(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -1468);
	// bl 0x829e3fd0
	ctx.lr = 0x828AD628;
	sub_829E3FD0(ctx, base);
loc_828AD628:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828AD640"))) PPC_WEAK_FUNC(sub_828AD640);
PPC_FUNC_IMPL(__imp__sub_828AD640) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,1500(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1500);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x828ad67c
	if (ctx.cr6.eq) goto loc_828AD67C;
	// lwz r10,960(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 960);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bge cr6,0x828ad708
	if (!ctx.cr6.lt) goto loc_828AD708;
loc_828AD67C:
	// lbz r11,1512(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1512);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x828ad708
	if (!ctx.cr6.eq) goto loc_828AD708;
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,-1464(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -1464);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1136);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AD6B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// beq 0x828ad6ec
	if (ctx.cr0.eq) goto loc_828AD6EC;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,1556(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1556, ctx.r10.u32);
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,1500(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1500, ctx.r9.u32);
	// b 0x828ad708
	goto loc_828AD708;
loc_828AD6EC:
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,-1468(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -1468);
	// lwz r11,1132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1132);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AD708;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828AD708:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828AD720"))) PPC_WEAK_FUNC(sub_828AD720);
PPC_FUNC_IMPL(__imp__sub_828AD720) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lwz r4,-1468(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -1468);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1132);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AD764;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// lwz r3,52(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,964(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 964);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AD78C;
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

__attribute__((alias("__imp__sub_828AD7A8"))) PPC_WEAK_FUNC(sub_828AD7A8);
PPC_FUNC_IMPL(__imp__sub_828AD7A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// b 0x828ad458
	sub_828AD458(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828AD7C0"))) PPC_WEAK_FUNC(sub_828AD7C0);
PPC_FUNC_IMPL(__imp__sub_828AD7C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,-4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r9,-31946
	ctx.r9.s64 = -2093613056;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r4,-1460(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + -1460);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,1552(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1552, ctx.r11.u32);
	// lwz r10,-4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,1556(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1556, ctx.r11.u32);
	// lwz r10,-4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,1500(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1500, ctx.r11.u32);
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1136);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_828AD828"))) PPC_WEAK_FUNC(sub_828AD828);
PPC_FUNC_IMPL(__imp__sub_828AD828) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,-64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -64);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,-56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -56);
	// addic. r11,r11,300
	ctx.xer.ca = ctx.r11.u32 > 4294966995;
	ctx.r11.s64 = ctx.r11.s64 + 300;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828ad864
	if (ctx.cr0.eq) goto loc_828AD864;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x828ad864
	if (ctx.cr6.eq) goto loc_828AD864;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x828ad868
	goto loc_828AD868;
loc_828AD864:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828AD868:
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828ad894
	if (ctx.cr6.eq) goto loc_828AD894;
	// lwz r10,92(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828ad8a0
	if (!ctx.cr0.eq) goto loc_828AD8A0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828ad894
	if (ctx.cr6.eq) goto loc_828AD894;
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x828ad8a0
	if (!ctx.cr0.eq) goto loc_828AD8A0;
loc_828AD894:
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828ad8c0
	if (ctx.cr0.eq) goto loc_828AD8C0;
loc_828AD8A0:
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,-6056(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6056);
	// lwz r4,-1460(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -1460);
	// bl 0x829e3fd0
	ctx.lr = 0x828AD8C0;
	sub_829E3FD0(ctx, base);
loc_828AD8C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828AD8D8"))) PPC_WEAK_FUNC(sub_828AD8D8);
PPC_FUNC_IMPL(__imp__sub_828AD8D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,1500(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1500);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x828ad920
	if (!ctx.cr6.eq) goto loc_828AD920;
	// lwz r10,1556(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1556);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x828ad920
	if (!ctx.cr6.eq) goto loc_828AD920;
	// lwz r10,960(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 960);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bge cr6,0x828ad9ac
	if (!ctx.cr6.lt) goto loc_828AD9AC;
loc_828AD920:
	// lbz r11,1512(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1512);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x828ad9ac
	if (!ctx.cr6.eq) goto loc_828AD9AC;
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,-1456(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -1456);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1136);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AD954;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// beq 0x828ad990
	if (ctx.cr0.eq) goto loc_828AD990;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,1556(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1556, ctx.r10.u32);
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,1500(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1500, ctx.r9.u32);
	// b 0x828ad9ac
	goto loc_828AD9AC;
loc_828AD990:
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,-1460(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -1460);
	// lwz r11,1132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1132);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AD9AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828AD9AC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828AD9C0"))) PPC_WEAK_FUNC(sub_828AD9C0);
PPC_FUNC_IMPL(__imp__sub_828AD9C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lwz r4,-1460(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -1460);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1132);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828ADA04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// lwz r3,52(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,964(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 964);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828ADA2C;
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

__attribute__((alias("__imp__sub_828ADA48"))) PPC_WEAK_FUNC(sub_828ADA48);
PPC_FUNC_IMPL(__imp__sub_828ADA48) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// lwz r3,52(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,968(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 968);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_828ADA70"))) PPC_WEAK_FUNC(sub_828ADA70);
PPC_FUNC_IMPL(__imp__sub_828ADA70) {
	PPC_FUNC_PROLOGUE();
	// lwz r12,0(r3)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1096(r12)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r12.u32 + 1096);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_828ADA80"))) PPC_WEAK_FUNC(sub_828ADA80);
PPC_FUNC_IMPL(__imp__sub_828ADA80) {
	PPC_FUNC_PROLOGUE();
	// lwz r12,0(r3)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1100(r12)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r12.u32 + 1100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_828ADA90"))) PPC_WEAK_FUNC(sub_828ADA90);
PPC_FUNC_IMPL(__imp__sub_828ADA90) {
	PPC_FUNC_PROLOGUE();
	// lwz r12,0(r3)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1092(r12)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r12.u32 + 1092);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_828ADAA0"))) PPC_WEAK_FUNC(sub_828ADAA0);
PPC_FUNC_IMPL(__imp__sub_828ADAA0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r11,r11,-15236
	ctx.r11.s64 = ctx.r11.s64 + -15236;
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
	// ble cr6,0x828adb0c
	if (!ctx.cr6.gt) goto loc_828ADB0C;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_828ADADC:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x828adafc
	if (ctx.cr6.eq) goto loc_828ADAFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x828adadc
	if (ctx.cr6.lt) goto loc_828ADADC;
	// b 0x828adb0c
	goto loc_828ADB0C;
loc_828ADAFC:
	// mulli r11,r10,24
	ctx.r11.s64 = ctx.r10.s64 * 24;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
loc_828ADB0C:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x828adb34
	if (ctx.cr6.eq) goto loc_828ADB34;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828ADB2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828adb38
	goto loc_828ADB38;
loc_828ADB34:
	// bl 0x829bc030
	ctx.lr = 0x828ADB38;
	sub_829BC030(ctx, base);
loc_828ADB38:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828ADB48"))) PPC_WEAK_FUNC(sub_828ADB48);
PPC_FUNC_IMPL(__imp__sub_828ADB48) {
	PPC_FUNC_PROLOGUE();
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
	// addi r11,r11,-15236
	ctx.r11.s64 = ctx.r11.s64 + -15236;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x828adba8
	if (!ctx.cr6.gt) goto loc_828ADBA8;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_828ADB74:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x828adb94
	if (ctx.cr6.eq) goto loc_828ADB94;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x828adb74
	if (ctx.cr6.lt) goto loc_828ADB74;
	// b 0x828adba8
	goto loc_828ADBA8;
loc_828ADB94:
	// mulli r11,r10,24
	ctx.r11.s64 = ctx.r10.s64 * 24;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x828adbb0
	if (!ctx.cr6.eq) goto loc_828ADBB0;
loc_828ADBA8:
	// bl 0x829bc0e0
	ctx.lr = 0x828ADBAC;
	sub_829BC0E0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_828ADBB0:
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

__attribute__((alias("__imp__sub_828ADBC8"))) PPC_WEAK_FUNC(sub_828ADBC8);
PPC_FUNC_IMPL(__imp__sub_828ADBC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r11,r11,-15236
	ctx.r11.s64 = ctx.r11.s64 + -15236;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x828adc48
	if (!ctx.cr6.gt) goto loc_828ADC48;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_828ADC04:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r31
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x828adc24
	if (ctx.cr6.eq) goto loc_828ADC24;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x828adc04
	if (ctx.cr6.lt) goto loc_828ADC04;
	// b 0x828adc48
	goto loc_828ADC48;
loc_828ADC24:
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
	ctx.lr = 0x828ADC40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x828adc54
	if (!ctx.cr0.eq) goto loc_828ADC54;
loc_828ADC48:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829bc140
	ctx.lr = 0x828ADC54;
	sub_829BC140(ctx, base);
loc_828ADC54:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828ADC70"))) PPC_WEAK_FUNC(sub_828ADC70);
PPC_FUNC_IMPL(__imp__sub_828ADC70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x828ADC78;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x829bc540
	ctx.lr = 0x828ADC88;
	sub_829BC540(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// addi r11,r11,11024
	ctx.r11.s64 = ctx.r11.s64 + 11024;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,12036
	ctx.r10.s64 = ctx.r10.s64 + 12036;
	// stw r11,752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 752, ctx.r11.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r9,r9,12088
	ctx.r9.s64 = ctx.r9.s64 + 12088;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r30,840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 840, ctx.r30.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// stw r30,844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 844, ctx.r30.u32);
	// stw r30,808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 808, ctx.r30.u32);
	// stw r30,1408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1408, ctx.r30.u32);
	// stw r30,1412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1412, ctx.r30.u32);
	// stw r30,1416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1416, ctx.r30.u32);
	// lwz r11,1420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1420);
	// rlwimi r11,r29,29,2,2
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r29.u32, 29) & 0x20000000) | (ctx.r11.u64 & 0xFFFFFFFFDFFFFFFF);
	// rlwinm r11,r11,0,6,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFE3FFFFFF;
	// rlwinm r11,r11,0,2,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// rlwinm. r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,1420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1420, ctx.r11.u32);
	// beq 0x828add38
	if (ctx.cr0.eq) goto loc_828ADD38;
	// li r3,576
	ctx.r3.s64 = 576;
	// bl 0x82833108
	ctx.lr = 0x828ADCF4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828add08
	if (ctx.cr0.eq) goto loc_828ADD08;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82977530
	ctx.lr = 0x828ADD04;
	sub_82977530(ctx, base);
	// b 0x828add0c
	goto loc_828ADD0C;
loc_828ADD08:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_828ADD0C:
	// stw r3,1408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1408, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828add38
	if (ctx.cr6.eq) goto loc_828ADD38;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,552(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 552, temp.u32);
	// lwz r11,1408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// stw r31,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r31.u32);
	// lwz r11,1420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1420);
	// oris r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 1073741824;
	// stw r11,1420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1420, ctx.r11.u32);
loc_828ADD38:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828ADD48"))) PPC_WEAK_FUNC(sub_828ADD48);
PPC_FUNC_IMPL(__imp__sub_828ADD48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,1420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1420);
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828add84
	if (ctx.cr0.eq) goto loc_828ADD84;
	// lwz r4,1408(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x828add84
	if (ctx.cr6.eq) goto loc_828ADD84;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828ADD84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828ADD84:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829bdc10
	ctx.lr = 0x828ADD8C;
	sub_829BDC10(ctx, base);
	// lwz r11,1420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1420);
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828adde8
	if (ctx.cr0.eq) goto loc_828ADDE8;
	// lwz r11,1408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828adde8
	if (ctx.cr6.eq) goto loc_828ADDE8;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828ADDBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1420);
	// rlwinm. r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828addd0
	if (ctx.cr0.eq) goto loc_828ADDD0;
	// lwz r3,1408(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// bl 0x82978ed0
	ctx.lr = 0x828ADDD0;
	sub_82978ED0(ctx, base);
loc_828ADDD0:
	// lwz r11,1420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1420);
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828adde8
	if (ctx.cr0.eq) goto loc_828ADDE8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1408(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// bl 0x829c6648
	ctx.lr = 0x828ADDE8;
	sub_829C6648(ctx, base);
loc_828ADDE8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828ADE00"))) PPC_WEAK_FUNC(sub_828ADE00);
PPC_FUNC_IMPL(__imp__sub_828ADE00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// lwz r11,1420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1420);
	// lwz r4,1408(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r11,1420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1420, ctx.r11.u32);
	// beq cr6,0x828adec0
	if (ctx.cr6.eq) goto loc_828ADEC0;
	// lwz r11,488(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 488);
	// rlwinm. r11,r11,0,8,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828ade54
	if (ctx.cr0.eq) goto loc_828ADE54;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828ADE50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x828adec0
	goto loc_828ADEC0;
loc_828ADE54:
	// lwz r11,56(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828adec0
	if (ctx.cr6.eq) goto loc_828ADEC0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c6648
	ctx.lr = 0x828ADE68;
	sub_829C6648(ctx, base);
	// lwz r3,1408(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// bl 0x82978ed0
	ctx.lr = 0x828ADE70;
	sub_82978ED0(ctx, base);
	// lwz r3,1408(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828ADE88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1420);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828adec0
	if (ctx.cr0.eq) goto loc_828ADEC0;
	// lwz r4,1408(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x828adec0
	if (ctx.cr6.eq) goto loc_828ADEC0;
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829bb1f8
	ctx.lr = 0x828ADEAC;
	sub_829BB1F8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1408, ctx.r11.u32);
	// lwz r11,1420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1420);
	// rlwinm r11,r11,0,2,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r11,1420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1420, ctx.r11.u32);
loc_828ADEC0:
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r3,852(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 852);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828adee4
	if (ctx.cr6.eq) goto loc_828ADEE4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,1020(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1020);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828ADEE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828ADEE4:
	// lwz r11,1412(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1412);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828adef8
	if (ctx.cr6.eq) goto loc_828ADEF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c36c0
	ctx.lr = 0x828ADEF8;
	sub_829C36C0(ctx, base);
loc_828ADEF8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829bd978
	ctx.lr = 0x828ADF00;
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

__attribute__((alias("__imp__sub_828ADF18"))) PPC_WEAK_FUNC(sub_828ADF18);
PPC_FUNC_IMPL(__imp__sub_828ADF18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f0
	ctx.lr = 0x828ADF20;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// lwz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x828ae0a4
	if (ctx.cr6.eq) goto loc_828AE0A4;
	// lwz r10,1408(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x828ae0a4
	if (ctx.cr6.eq) goto loc_828AE0A4;
	// lwz r10,460(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 460);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x828ae0a4
	if (ctx.cr6.eq) goto loc_828AE0A4;
	// lwz r10,52(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x828ae0a4
	if (!ctx.cr6.eq) goto loc_828AE0A4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828ADF78;
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
	ctx.lr = 0x828ADFA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x828adfbc
	if (!ctx.cr6.gt) goto loc_828ADFBC;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// b 0x828ae090
	goto loc_828AE090;
loc_828ADFBC:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x828ae05c
	if (!ctx.cr6.eq) goto loc_828AE05C;
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
	ctx.lr = 0x828ADFE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,964(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 964);
	// addi r28,r26,948
	ctx.r28.s64 = ctx.r26.s64 + 948;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x828ae03c
	if (!ctx.cr6.gt) goto loc_828AE03C;
	// li r29,0
	ctx.r29.s64 = 0;
loc_828ADFF8:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828ae028
	if (!ctx.cr6.eq) goto loc_828AE028;
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
	ctx.lr = 0x828AE020;
	sub_82332CA8(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
loc_828AE028:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828adff8
	if (ctx.cr6.lt) goto loc_828ADFF8;
loc_828AE03C:
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
	ctx.lr = 0x828AE05C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828AE05C:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x828ae090
	if (!ctx.cr0.eq) goto loc_828AE090;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AE07C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x828ae090
	if (ctx.cr0.eq) goto loc_828AE090;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r26,924
	ctx.r3.s64 = ctx.r26.s64 + 924;
	// bl 0x82410060
	ctx.lr = 0x828AE090;
	sub_82410060(ctx, base);
loc_828AE090:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AE0A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828AE0A4:
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c6178
	ctx.lr = 0x828AE0B8;
	sub_829C6178(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828AE0C0"))) PPC_WEAK_FUNC(sub_828AE0C0);
PPC_FUNC_IMPL(__imp__sub_828AE0C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x828AE0C8;
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
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r4,1416(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1416);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x828ae204
	if (ctx.cr6.eq) goto loc_828AE204;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x828AE0F4;
	sub_829B9720(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x828ae204
	if (ctx.cr0.eq) goto loc_828AE204;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r6,-32215
	ctx.r6.s64 = -2111242240;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// lfs f0,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,688(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 688);
	// lfs f31,904(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r6,r10,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AE148;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f31,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// ld r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r9,r30,32,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFF00000000;
	// lwz r11,284(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 284);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AE190;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f31,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// li r4,0
	ctx.r4.s64 = 0;
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,280(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 280);
	// rldicr r9,r30,32,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFF00000000;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AE1D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828ae1e8
	if (ctx.cr6.eq) goto loc_828AE1E8;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x829bd428
	ctx.lr = 0x828AE1E8;
	sub_829BD428(ctx, base);
loc_828AE1E8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r30,800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 800, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AE204;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828AE204:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829bd588
	ctx.lr = 0x828AE210;
	sub_829BD588(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828AE220"))) PPC_WEAK_FUNC(sub_828AE220);
PPC_FUNC_IMPL(__imp__sub_828AE220) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x829be2e8
	ctx.lr = 0x828AE23C;
	sub_829BE2E8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829c6a98
	ctx.lr = 0x828AE248;
	sub_829C6A98(ctx, base);
	// addi r30,r31,496
	ctx.r30.s64 = ctx.r31.s64 + 496;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a4ea80
	ctx.lr = 0x828AE25C;
	sub_82A4EA80(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_828AE270:
	// mulli r10,r11,24
	ctx.r10.s64 = ctx.r11.s64 * 24;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r10,244(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 244);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x828ae298
	if (ctx.cr6.gt) goto loc_828AE298;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// blt cr6,0x828ae270
	if (ctx.cr6.lt) goto loc_828AE270;
loc_828AE298:
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bge cr6,0x828ae2f0
	if (!ctx.cr6.lt) goto loc_828AE2F0;
	// addi r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 + 10;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82411558
	ctx.lr = 0x828AE2C0;
	sub_82411558(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828ae2dc
	if (ctx.cr0.eq) goto loc_828AE2DC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AE2DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828AE2DC:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827e7850
	ctx.lr = 0x828AE2E8;
	sub_827E7850(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x828ae298
	goto loc_828AE298;
loc_828AE2F0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828AE308"))) PPC_WEAK_FUNC(sub_828AE308);
PPC_FUNC_IMPL(__imp__sub_828AE308) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x828AE310;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x829bcd88
	ctx.lr = 0x828AE324;
	sub_829BCD88(ctx, base);
	// lwz r5,140(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 140);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x828ae378
	if (!ctx.cr6.eq) goto loc_828AE378;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,13024(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13024);
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x82411dc0
	ctx.lr = 0x828AE354;
	sub_82411DC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x828ae36c
	if (ctx.cr0.eq) goto loc_828AE36C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82411558
	ctx.lr = 0x828AE364;
	sub_82411558(ctx, base);
	// stw r3,1408(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1408, ctx.r3.u32);
	// b 0x828ae3bc
	goto loc_828AE3BC;
loc_828AE36C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1408(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1408, ctx.r11.u32);
	// b 0x828ae3bc
	goto loc_828AE3BC;
loc_828AE378:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82846fb0
	ctx.lr = 0x828AE388;
	sub_82846FB0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828ae3a4
	if (ctx.cr6.eq) goto loc_828AE3A4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AE3A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x828ae3a8
	goto loc_828AE3A8;
loc_828AE3A4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828AE3A8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828ae3b8
	if (ctx.cr6.eq) goto loc_828AE3B8;
	// bl 0x82411558
	ctx.lr = 0x828AE3B4;
	sub_82411558(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_828AE3B8:
	// stw r31,1408(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1408, ctx.r31.u32);
loc_828AE3BC:
	// lwz r31,1408(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1408);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x828ae3e8
	if (ctx.cr6.eq) goto loc_828AE3E8;
	// addi r4,r30,496
	ctx.r4.s64 = ctx.r30.s64 + 496;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x82a4ea80
	ctx.lr = 0x828AE3D8;
	sub_82A4EA80(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829bc250
	ctx.lr = 0x828AE3E8;
	sub_829BC250(ctx, base);
loc_828AE3E8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828AE3F0"))) PPC_WEAK_FUNC(sub_828AE3F0);
PPC_FUNC_IMPL(__imp__sub_828AE3F0) {
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
	// bl 0x829c1470
	ctx.lr = 0x828AE408;
	sub_829C1470(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r11,788(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828ae428
	if (!ctx.cr6.eq) goto loc_828AE428;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lfs f0,24724(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24724);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,696(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 696, temp.u32);
loc_828AE428:
	// lwz r11,1408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828ae438
	if (ctx.cr6.eq) goto loc_828AE438;
	// stw r31,368(r11)
	PPC_STORE_U32(ctx.r11.u32 + 368, ctx.r31.u32);
loc_828AE438:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828AE450"))) PPC_WEAK_FUNC(sub_828AE450);
PPC_FUNC_IMPL(__imp__sub_828AE450) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828ae508
	if (!ctx.cr0.eq) goto loc_828AE508;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm. r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x828ae4d8
	if (ctx.cr0.eq) goto loc_828AE4D8;
	// lwz r3,1408(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828ae494
	if (ctx.cr6.eq) goto loc_828AE494;
loc_828AE490:
	// bl 0x82978ed0
	ctx.lr = 0x828AE494;
	sub_82978ED0(ctx, base);
loc_828AE494:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r10,788(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x828ae4b0
	if (ctx.cr6.eq) goto loc_828AE4B0;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x828ae4c4
	if (!ctx.cr6.eq) goto loc_828AE4C4;
loc_828AE4B0:
	// lwz r3,852(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 852);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828ae4c4
	if (ctx.cr6.eq) goto loc_828AE4C4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82914b18
	ctx.lr = 0x828AE4C4;
	sub_82914B18(ctx, base);
loc_828AE4C4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_828AE4D8:
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828ae494
	if (ctx.cr0.eq) goto loc_828AE494;
	// lwz r3,1408(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828ae508
	if (ctx.cr6.eq) goto loc_828AE508;
	// lwz r11,488(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 488);
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x828ae490
	if (!ctx.cr0.eq) goto loc_828AE490;
	// lwz r11,480(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 480);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828ae490
	if (ctx.cr6.eq) goto loc_828AE490;
loc_828AE508:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828ae518
	ctx.lr = 0x828AE514;
	sub_828AE518(ctx, base);
	// b 0x828ae494
	goto loc_828AE494;
}

__attribute__((alias("__imp__sub_828AE518"))) PPC_WEAK_FUNC(sub_828AE518);
PPC_FUNC_IMPL(__imp__sub_828AE518) {
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
	// lwz r3,1408(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828ae580
	if (ctx.cr6.eq) goto loc_828AE580;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x828ae57c
	if (ctx.cr6.eq) goto loc_828AE57C;
	// lwz r11,1412(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1412);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828ae56c
	if (ctx.cr6.eq) goto loc_828AE56C;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,15834
	ctx.r4.s64 = ctx.r11.s64 + 15834;
	// bl 0x8233a258
	ctx.lr = 0x828AE55C;
	sub_8233A258(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1412(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1412);
	// bl 0x829c3740
	ctx.lr = 0x828AE56C;
	sub_829C3740(ctx, base);
loc_828AE56C:
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// lwz r3,1408(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// bl 0x82978d98
	ctx.lr = 0x828AE578;
	sub_82978D98(ctx, base);
	// b 0x828ae580
	goto loc_828AE580;
loc_828AE57C:
	// bl 0x82978ed0
	ctx.lr = 0x828AE580;
	sub_82978ED0(ctx, base);
loc_828AE580:
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

__attribute__((alias("__imp__sub_828AE598"))) PPC_WEAK_FUNC(sub_828AE598);
PPC_FUNC_IMPL(__imp__sub_828AE598) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x828AE5A0;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,1420(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1420);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828ae6e0
	if (ctx.cr0.eq) goto loc_828AE6E0;
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
	ctx.lr = 0x828AE5DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,76(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x828ae5f8
	if (!ctx.cr6.gt) goto loc_828AE5F8;
	// lwz r11,84(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 84);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,84(r28)
	PPC_STORE_U32(ctx.r28.u32 + 84, ctx.r11.u32);
	// b 0x828ae6cc
	goto loc_828AE6CC;
loc_828AE5F8:
	// lwz r11,68(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x828ae698
	if (!ctx.cr6.eq) goto loc_828AE698;
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
	ctx.lr = 0x828AE61C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,964(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 964);
	// addi r29,r26,948
	ctx.r29.s64 = ctx.r26.s64 + 948;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x828ae678
	if (!ctx.cr6.gt) goto loc_828AE678;
	// li r30,0
	ctx.r30.s64 = 0;
loc_828AE634:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x828ae664
	if (!ctx.cr6.eq) goto loc_828AE664;
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
	ctx.lr = 0x828AE65C;
	sub_82332CA8(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
loc_828AE664:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828ae634
	if (ctx.cr6.lt) goto loc_828AE634;
loc_828AE678:
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
	ctx.lr = 0x828AE698;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828AE698:
	// lwz r11,84(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x828ae6cc
	if (!ctx.cr0.eq) goto loc_828AE6CC;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AE6B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x828ae6cc
	if (ctx.cr0.eq) goto loc_828AE6CC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r26,924
	ctx.r3.s64 = ctx.r26.s64 + 924;
	// bl 0x82410060
	ctx.lr = 0x828AE6CC;
	sub_82410060(ctx, base);
loc_828AE6CC:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AE6E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828AE6E0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828AE6E8"))) PPC_WEAK_FUNC(sub_828AE6E8);
PPC_FUNC_IMPL(__imp__sub_828AE6E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x828AE6F0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x828ae728
	if (ctx.cr6.eq) goto loc_828AE728;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r3,13024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// bl 0x824f8078
	ctx.lr = 0x828AE720;
	sub_824F8078(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x828ae75c
	if (ctx.cr0.eq) goto loc_828AE75C;
loc_828AE728:
	// lwz r3,1408(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1408);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828ae744
	if (ctx.cr6.eq) goto loc_828AE744;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82978bc0
	ctx.lr = 0x828AE744;
	sub_82978BC0(ctx, base);
loc_828AE744:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x828ae754
	if (ctx.cr6.eq) goto loc_828AE754;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// b 0x828ae758
	goto loc_828AE758;
loc_828AE754:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_828AE758:
	// stw r11,112(r30)
	PPC_STORE_U32(ctx.r30.u32 + 112, ctx.r11.u32);
loc_828AE75C:
	// lwz r11,1420(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1420);
	// rlwimi r11,r27,31,0,0
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r27.u32, 31) & 0x80000000) | (ctx.r11.u64 & 0xFFFFFFFF7FFFFFFF);
	// stw r11,1420(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1420, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828AE770"))) PPC_WEAK_FUNC(sub_828AE770);
PPC_FUNC_IMPL(__imp__sub_828AE770) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x828AE778;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x828adc70
	ctx.lr = 0x828AE788;
	sub_828ADC70(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32244
	ctx.r8.s64 = -2113142784;
	// addi r11,r11,-25200
	ctx.r11.s64 = ctx.r11.s64 + -25200;
	// addi r10,r10,-24188
	ctx.r10.s64 = ctx.r10.s64 + -24188;
	// addi r9,r9,-24136
	ctx.r9.s64 = ctx.r9.s64 + -24136;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r8,r8,15852
	ctx.r8.s64 = ctx.r8.s64 + 15852;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r11,r31,1436
	ctx.r11.s64 = ctx.r31.s64 + 1436;
	// stw r8,1436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1436, ctx.r8.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x8312e7dc
	ctx.lr = 0x828AE7C4;
	sub_8312E7DC(ctx, base);
	// lwz r11,1408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r28,1468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1468, ctx.r28.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x828ae83c
	if (!ctx.cr6.eq) goto loc_828AE83C;
	// li r3,592
	ctx.r3.s64 = 592;
	// bl 0x82833108
	ctx.lr = 0x828AE7E4;
	sub_82833108(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x828ae810
	if (ctx.cr0.eq) goto loc_828AE810;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82977530
	ctx.lr = 0x828AE7F8;
	sub_82977530(ctx, base);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// stw r29,564(r30)
	PPC_STORE_U32(ctx.r30.u32 + 564, ctx.r29.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r10,r10,11216
	ctx.r10.s64 = ctx.r10.s64 + 11216;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// b 0x828ae814
	goto loc_828AE814;
loc_828AE810:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_828AE814:
	// stw r11,1408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1408, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828ae83c
	if (ctx.cr6.eq) goto loc_828AE83C;
	// stw r31,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1408(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// bl 0x829be6e8
	ctx.lr = 0x828AE830;
	sub_829BE6E8(ctx, base);
	// lwz r11,1420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1420);
	// oris r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 1073741824;
	// stw r11,1420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1420, ctx.r11.u32);
loc_828AE83C:
	// lwz r11,1408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828ae854
	if (ctx.cr6.eq) goto loc_828AE854;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,552(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 552, temp.u32);
loc_828AE854:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// stw r28,828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 828, ctx.r28.u32);
	// stw r29,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r29.u32);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r11,788(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828ae88c
	if (!ctx.cr6.eq) goto loc_828AE88C;
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828ae88c
	if (ctx.cr6.eq) goto loc_828AE88C;
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x828ae88c
	if (!ctx.cr6.eq) goto loc_828AE88C;
	// stw r29,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r29.u32);
loc_828AE88C:
	// stw r28,1432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1432, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r28,1428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1428, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828AE8A0"))) PPC_WEAK_FUNC(sub_828AE8A0);
PPC_FUNC_IMPL(__imp__sub_828AE8A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1468(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1468);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828ae8b4
	if (ctx.cr6.eq) goto loc_828AE8B4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_828AE8B4:
	// b 0x829bd4c0
	sub_829BD4C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828AE8B8"))) PPC_WEAK_FUNC(sub_828AE8B8);
PPC_FUNC_IMPL(__imp__sub_828AE8B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,1468(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1468);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828ae8e0
	if (ctx.cr6.eq) goto loc_828AE8E0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1424(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1424, ctx.r11.u32);
	// blr 
	return;
loc_828AE8E0:
	// b 0x828adf18
	sub_828ADF18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828AE8E8"))) PPC_WEAK_FUNC(sub_828AE8E8);
PPC_FUNC_IMPL(__imp__sub_828AE8E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1432(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1432);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x828ae8fc
	if (!ctx.cr6.eq) goto loc_828AE8FC;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_828AE8FC:
	// b 0x829b9c18
	sub_829B9C18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828AE900"))) PPC_WEAK_FUNC(sub_828AE900);
PPC_FUNC_IMPL(__imp__sub_828AE900) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1432(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1432);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x828ae914
	if (!ctx.cr6.eq) goto loc_828AE914;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_828AE914:
	// b 0x829c6360
	sub_829C6360(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828AE918"))) PPC_WEAK_FUNC(sub_828AE918);
PPC_FUNC_IMPL(__imp__sub_828AE918) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,1468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1468);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x828ae940
	if (!ctx.cr6.eq) goto loc_828AE940;
	// bl 0x828ae598
	ctx.lr = 0x828AE940;
	sub_828AE598(ctx, base);
loc_828AE940:
	// lwz r11,1436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1436);
	// addi r30,r31,1436
	ctx.r30.s64 = ctx.r31.s64 + 1436;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AE958;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1420);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x828ae970
	if (!ctx.cr0.eq) goto loc_828AE970;
	// lwz r11,1428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1428);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828ae978
	if (ctx.cr6.eq) goto loc_828AE978;
loc_828AE970:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1424, ctx.r11.u32);
loc_828AE978:
	// lwz r3,1408(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828ae988
	if (ctx.cr6.eq) goto loc_828AE988;
	// bl 0x82978ed0
	ctx.lr = 0x828AE988;
	sub_82978ED0(ctx, base);
loc_828AE988:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AE99C;
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

__attribute__((alias("__imp__sub_828AE9B8"))) PPC_WEAK_FUNC(sub_828AE9B8);
PPC_FUNC_IMPL(__imp__sub_828AE9B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x828AE9C0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r27,r31,1436
	ctx.r27.s64 = ctx.r31.s64 + 1436;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,1436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1436);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AE9E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1424(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1424);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828aea70
	if (ctx.cr6.eq) goto loc_828AEA70;
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,13024(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// bl 0x8282b448
	ctx.lr = 0x828AE9FC;
	sub_8282B448(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_828AEA04:
	// lwz r11,388(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x828aea68
	if (!ctx.cr6.lt) goto loc_828AEA68;
	// lwz r11,384(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x826d2080
	ctx.lr = 0x828AEA1C;
	sub_826D2080(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AEA34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AEA4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829bb1f8
	ctx.lr = 0x828AEA5C;
	sub_829BB1F8(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// b 0x828aea04
	goto loc_828AEA04;
loc_828AEA68:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1424, ctx.r11.u32);
loc_828AEA70:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AEA84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828AEA90"))) PPC_WEAK_FUNC(sub_828AEA90);
PPC_FUNC_IMPL(__imp__sub_828AEA90) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x828aea98
	sub_828AEA98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828AEA98"))) PPC_WEAK_FUNC(sub_828AEA98);
PPC_FUNC_IMPL(__imp__sub_828AEA98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// addi r11,r11,-29556
	ctx.r11.s64 = ctx.r11.s64 + -29556;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// stw r11,1436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1436, ctx.r11.u32);
	// addi r10,r10,11024
	ctx.r10.s64 = ctx.r10.s64 + 11024;
	// addi r9,r9,12036
	ctx.r9.s64 = ctx.r9.s64 + 12036;
	// addi r11,r8,12088
	ctx.r11.s64 = ctx.r8.s64 + 12088;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r11.u32);
	// bl 0x829bc9e8
	ctx.lr = 0x828AEAE8;
	sub_829BC9E8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828aeaf8
	if (ctx.cr0.eq) goto loc_828AEAF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x828AEAF8;
	sub_82332DB8(ctx, base);
loc_828AEAF8:
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

__attribute__((alias("__imp__sub_828AEB18"))) PPC_WEAK_FUNC(sub_828AEB18);
PPC_FUNC_IMPL(__imp__sub_828AEB18) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x828aea98
	sub_828AEA98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828AEB20"))) PPC_WEAK_FUNC(sub_828AEB20);
PPC_FUNC_IMPL(__imp__sub_828AEB20) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x828aeb28
	sub_828AEB28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828AEB28"))) PPC_WEAK_FUNC(sub_828AEB28);
PPC_FUNC_IMPL(__imp__sub_828AEB28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x828aeb78
	ctx.lr = 0x828AEB48;
	sub_828AEB78(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x828aeb5c
	if (ctx.cr6.eq) goto loc_828AEB5C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823fc2e8
	ctx.lr = 0x828AEB5C;
	sub_823FC2E8(ctx, base);
loc_828AEB5C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828AEB78"))) PPC_WEAK_FUNC(sub_828AEB78);
PPC_FUNC_IMPL(__imp__sub_828AEB78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,17548
	ctx.r31.s64 = ctx.r11.s64 + 17548;
	// lwz r11,17544(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17544);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828aebc0
	if (!ctx.cr0.eq) goto loc_828AEBC0;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-24112
	ctx.r9.s64 = ctx.r9.s64 + -24112;
	// stw r11,17544(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17544, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-16136
	ctx.r3.s64 = ctx.r11.s64 + -16136;
	// bl 0x82a4c758
	ctx.lr = 0x828AEBC0;
	sub_82A4C758(ctx, base);
loc_828AEBC0:
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

__attribute__((alias("__imp__sub_828AEBD8"))) PPC_WEAK_FUNC(sub_828AEBD8);
PPC_FUNC_IMPL(__imp__sub_828AEBD8) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x828AEBEC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828aec00
	if (ctx.cr0.eq) goto loc_828AEC00;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x828ae770
	ctx.lr = 0x828AEBFC;
	sub_828AE770(ctx, base);
	// b 0x828aec04
	goto loc_828AEC04;
loc_828AEC00:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828AEC04:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828AEC18"))) PPC_WEAK_FUNC(sub_828AEC18);
PPC_FUNC_IMPL(__imp__sub_828AEC18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-26112(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26112);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828aec58
	if (!ctx.cr0.eq) goto loc_828AEC58;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// stw r11,-26112(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26112, ctx.r11.u32);
	// addi r3,r9,-25220
	ctx.r3.s64 = ctx.r9.s64 + -25220;
	// bl 0x82816528
	ctx.lr = 0x828AEC50;
	sub_82816528(ctx, base);
	// stw r3,-26116(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26116, ctx.r3.u32);
	// b 0x828aec5c
	goto loc_828AEC5C;
loc_828AEC58:
	// lwz r3,-26116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26116);
loc_828AEC5C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828AEC70"))) PPC_WEAK_FUNC(sub_828AEC70);
PPC_FUNC_IMPL(__imp__sub_828AEC70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x828aeb78
	ctx.lr = 0x828AEC90;
	sub_828AEB78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AECA4;
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

__attribute__((alias("__imp__sub_828AECC0"))) PPC_WEAK_FUNC(sub_828AECC0);
PPC_FUNC_IMPL(__imp__sub_828AECC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,-25220
	ctx.r3.s64 = ctx.r11.s64 + -25220;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828AECD0"))) PPC_WEAK_FUNC(sub_828AECD0);
PPC_FUNC_IMPL(__imp__sub_828AECD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x828aed08
	if (ctx.cr6.eq) goto loc_828AED08;
	// bl 0x828aeb78
	ctx.lr = 0x828AECF8;
	sub_828AEB78(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828aed08
	if (!ctx.cr6.eq) goto loc_828AED08;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828aed14
	goto loc_828AED14;
loc_828AED08:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823fc490
	ctx.lr = 0x828AED14;
	sub_823FC490(ctx, base);
loc_828AED14:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828AED30"))) PPC_WEAK_FUNC(sub_828AED30);
PPC_FUNC_IMPL(__imp__sub_828AED30) {
	PPC_FUNC_PROLOGUE();
	// b 0x828aeb78
	sub_828AEB78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828AED38"))) PPC_WEAK_FUNC(sub_828AED38);
PPC_FUNC_IMPL(__imp__sub_828AED38) {
	PPC_FUNC_PROLOGUE();
	// b 0x823fc348
	sub_823FC348(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828AED40"))) PPC_WEAK_FUNC(sub_828AED40);
PPC_FUNC_IMPL(__imp__sub_828AED40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,1472
	ctx.r3.s64 = 1472;
	// bl 0x82833108
	ctx.lr = 0x828AED60;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828aede0
	if (ctx.cr0.eq) goto loc_828AEDE0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fc168
	ctx.lr = 0x828AED74;
	sub_823FC168(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// addi r11,r11,-25200
	ctx.r11.s64 = ctx.r11.s64 + -25200;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r10,r10,-24188
	ctx.r10.s64 = ctx.r10.s64 + -24188;
	// addi r9,r9,-24136
	ctx.r9.s64 = ctx.r9.s64 + -24136;
	// addi r11,r31,1436
	ctx.r11.s64 = ctx.r31.s64 + 1436;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,15852
	ctx.r10.s64 = ctx.r10.s64 + 15852;
	// addi r4,r30,1440
	ctx.r4.s64 = ctx.r30.s64 + 1440;
	// li r5,28
	ctx.r5.s64 = 28;
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
	// stw r10,1436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1436, ctx.r10.u32);
	// bl 0x82a4ea80
	ctx.lr = 0x828AEDD0;
	sub_82A4EA80(ctx, base);
	// lwz r11,1468(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1468);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1468, ctx.r11.u32);
	// b 0x828aede4
	goto loc_828AEDE4;
loc_828AEDE0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828AEDE4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828AEE00"))) PPC_WEAK_FUNC(sub_828AEE00);
PPC_FUNC_IMPL(__imp__sub_828AEE00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// bne cr6,0x828aee30
	if (!ctx.cr6.eq) goto loc_828AEE30;
	// addi r4,r4,336
	ctx.r4.s64 = ctx.r4.s64 + 336;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x82a4ea80
	ctx.lr = 0x828AEE28;
	sub_82A4EA80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x828aef0c
	goto loc_828AEF0C;
loc_828AEE30:
	// addi r6,r4,336
	ctx.r6.s64 = ctx.r4.s64 + 336;
	// lwz r7,312(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 312);
	// li r8,32
	ctx.r8.s64 = 32;
	// li r9,48
	ctx.r9.s64 = 48;
	// li r10,16
	ctx.r10.s64 = 16;
	// rlwinm r11,r5,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 6) & 0xFFFFFFC0;
	// lvx128 v0,r0,r6
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r6,r8
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32 + ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// vmrghw v11,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// lvx128 v12,r6,r9
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v10,r6,r10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrglw v0,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// vmrghw v13,v10,v12
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// vmrglw v12,v10,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// lvx128 v10,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v9,r11,r10
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw v8,v11,v13
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// lvx128 v7,r11,r8
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw v6,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// lvx128 v5,r11,r9
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrglw v13,v11,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// vmrglw v0,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// vmsum4fp128 v12,v10,v8
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v8.f32), 0xFF));
	// vmsum4fp128 v11,v10,v6
	simde_mm_store_ps(ctx.v11.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v6.f32), 0xFF));
	// vmsum4fp128 v4,v10,v13
	simde_mm_store_ps(ctx.v4.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v13.f32), 0xFF));
	// vmsum4fp128 v10,v10,v0
	simde_mm_store_ps(ctx.v10.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v0.f32), 0xFF));
	// vmsum4fp128 v3,v9,v0
	simde_mm_store_ps(ctx.v3.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v0.f32), 0xFF));
	// vmsum4fp128 v31,v7,v0
	simde_mm_store_ps(ctx.v31.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v0.f32), 0xFF));
	// vmsum4fp128 v2,v9,v13
	simde_mm_store_ps(ctx.v2.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v13.f32), 0xFF));
	// vmsum4fp128 v30,v7,v13
	simde_mm_store_ps(ctx.v30.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v13.f32), 0xFF));
	// vmsum4fp128 v1,v9,v6
	simde_mm_store_ps(ctx.v1.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v6.f32), 0xFF));
	// vmsum4fp128 v29,v7,v6
	simde_mm_store_ps(ctx.v29.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v6.f32), 0xFF));
	// vmsum4fp128 v9,v9,v8
	simde_mm_store_ps(ctx.v9.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v8.f32), 0xFF));
	// vmsum4fp128 v7,v7,v8
	simde_mm_store_ps(ctx.v7.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v8.f32), 0xFF));
	// vmsum4fp128 v0,v5,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(ctx.v0.f32), 0xFF));
	// vmsum4fp128 v13,v5,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(ctx.v13.f32), 0xFF));
	// vmsum4fp128 v6,v5,v6
	simde_mm_store_ps(ctx.v6.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(ctx.v6.f32), 0xFF));
	// vmsum4fp128 v8,v5,v8
	simde_mm_store_ps(ctx.v8.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(ctx.v8.f32), 0xFF));
	// vmrghw v12,v12,v11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// vmrghw v11,v4,v10
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), simde_mm_load_si128((simde__m128i*)ctx.v4.u32)));
	// vmrghw v10,v2,v3
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v3.u32), simde_mm_load_si128((simde__m128i*)ctx.v2.u32)));
	// vmrghw v12,v12,v11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// vmrghw v11,v30,v31
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v31.u32), simde_mm_load_si128((simde__m128i*)ctx.v30.u32)));
	// vmrghw v9,v9,v1
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v1.u32), simde_mm_load_si128((simde__m128i*)ctx.v9.u32)));
	// vmrghw v7,v7,v29
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v29.u32), simde_mm_load_si128((simde__m128i*)ctx.v7.u32)));
	// vmrghw v0,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// stvx128 v12,r0,r31
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw v10,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), simde_mm_load_si128((simde__m128i*)ctx.v9.u32)));
	// vmrghw v13,v8,v6
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v6.u32), simde_mm_load_si128((simde__m128i*)ctx.v8.u32)));
	// vmrghw v12,v7,v11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), simde_mm_load_si128((simde__m128i*)ctx.v7.u32)));
	// vmrghw v0,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// stvx128 v10,r31,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v12,r31,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r31,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_828AEF0C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828AEF20"))) PPC_WEAK_FUNC(sub_828AEF20);
PPC_FUNC_IMPL(__imp__sub_828AEF20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x828AEF28;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x829bc1c8
	ctx.lr = 0x828AEF40;
	sub_829BC1C8(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,-24088
	ctx.r10.s64 = ctx.r11.s64 + -24088;
	// li r11,64
	ctx.r11.s64 = 64;
	// li r9,32
	ctx.r9.s64 = 32;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r11.u32);
	// li r25,1
	ctx.r25.s64 = 1;
	// stw r30,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r30.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r30,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r30.u32);
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// stw r30,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r30.u32);
	// addi r29,r31,276
	ctx.r29.s64 = ctx.r31.s64 + 276;
	// stw r30,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r30.u32);
	// addi r28,r31,300
	ctx.r28.s64 = ctx.r31.s64 + 300;
	// stw r30,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r30.u32);
	// stw r9,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r9.u32);
	// stw r30,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r30.u32);
	// stw r30,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r30.u32);
	// stw r30,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r30.u32);
	// stw r30,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r30.u32);
	// stw r30,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r30.u32);
	// stw r11,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r11.u32);
	// stw r30,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r30.u32);
	// stw r30,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r30.u32);
	// stw r30,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r30.u32);
	// stw r30,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r30.u32);
	// stw r30,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r30.u32);
	// stw r25,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r25.u32);
	// stw r30,488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 488, ctx.r30.u32);
	// stw r30,492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 492, ctx.r30.u32);
	// stw r30,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r30.u32);
	// stw r30,500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 500, ctx.r30.u32);
	// stw r30,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r30.u32);
	// stw r10,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r10.u32);
	// stw r30,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r30.u32);
	// stw r30,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r30.u32);
	// stw r30,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r30.u32);
	// stw r30,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r30.u32);
	// stw r30,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r30.u32);
	// bl 0x8312e7dc
	ctx.lr = 0x828AEFE8;
	sub_8312E7DC(ctx, base);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// addi r11,r31,96
	ctx.r11.s64 = ctx.r31.s64 + 96;
	// li r10,4
	ctx.r10.s64 = 4;
	// lfs f31,904(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
loc_828AEFF8:
	// stfs f31,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stw r30,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r30.u32);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// stw r30,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r30.u32);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// stw r30,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r30.u32);
	// stw r30,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r30.u32);
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// bne 0x828aeff8
	if (!ctx.cr0.eq) goto loc_828AEFF8;
	// stfs f31,568(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 568, temp.u32);
	// stw r30,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r30.u32);
	// stw r30,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r30.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stw r11,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r11.u32);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// stw r11,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
	// beq cr6,0x828af06c
	if (ctx.cr6.eq) goto loc_828AF06C;
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332c38
	ctx.lr = 0x828AF06C;
	sub_82332C38(ctx, base);
loc_828AF06C:
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r4,244(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332d50
	ctx.lr = 0x828AF080;
	sub_82332D50(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x824d5a20
	ctx.lr = 0x828AF088;
	sub_824D5A20(ctx, base);
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stw r3,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r3.u32);
	// addi r29,r11,-15728
	ctx.r29.s64 = ctx.r11.s64 + -15728;
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r31,336
	ctx.r3.s64 = ctx.r31.s64 + 336;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r30,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r30.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r30,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r30.u32);
	// stw r10,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r10.u32);
	// stw r9,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r9.u32);
	// stw r11,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r11.u32);
	// bl 0x82a4ea80
	ctx.lr = 0x828AF0D0;
	sub_82A4EA80(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x828af154
	if (ctx.cr6.eq) goto loc_828AF154;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r10,12
	ctx.r10.s64 = 12;
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AF118;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AF130;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,328(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// lwz r5,244(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AF14C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8269b988
	ctx.lr = 0x828AF154;
	sub_8269B988(ctx, base);
loc_828AF154:
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// lwz r10,20(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// stw r30,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r30.u32);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x828af17c
	if (ctx.cr6.eq) goto loc_828AF17C;
	// stw r11,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332c38
	ctx.lr = 0x828AF17C;
	sub_82332C38(ctx, base);
loc_828AF17C:
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r4,244(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332d50
	ctx.lr = 0x828AF190;
	sub_82332D50(ctx, base);
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x828af1e8
	if (!ctx.cr6.gt) goto loc_828AF1E8;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
loc_828AF1A4:
	// lwz r10,312(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r11,8
	ctx.r11.s64 = 8;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_828AF1C0:
	// ld r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// std r11,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r11.u64);
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// bdnz 0x828af1c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_828AF1C0;
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r9,r9,64
	ctx.r9.s64 = ctx.r9.s64 + 64;
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828af1a4
	if (ctx.cr6.lt) goto loc_828AF1A4;
loc_828AF1E8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828b0808
	ctx.lr = 0x828AF1F0;
	sub_828B0808(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stfs f31,540(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 540, temp.u32);
	// stw r25,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r25.u32);
	// stw r30,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r30.u32);
	// stw r30,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r30.u32);
	// lfs f0,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r30.u32);
	// stfs f0,248(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 248, temp.u32);
	// stw r30,532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 532, ctx.r30.u32);
	// stw r30,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r30.u32);
	// stw r30,516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 516, ctx.r30.u32);
	// stw r30,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r30.u32);
	// stw r30,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r30.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828AF238"))) PPC_WEAK_FUNC(sub_828AF238);
PPC_FUNC_IMPL(__imp__sub_828AF238) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x828AF240;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,328(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828af3a0
	if (ctx.cr6.eq) goto loc_828AF3A0;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,224(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AF288;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r25,r27
	ctx.r25.u64 = ctx.r27.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x828af398
	if (!ctx.cr6.gt) goto loc_828AF398;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
loc_828AF29C:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwzx r3,r26,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AF2B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x828af360
	if (ctx.cr0.eq) goto loc_828AF360;
	// lwz r11,156(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x828af33c
	if (!ctx.cr6.gt) goto loc_828AF33C;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_828AF2D0:
	// lwz r11,152(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828af310
	if (ctx.cr6.eq) goto loc_828AF310;
	// bl 0x8288c1e0
	ctx.lr = 0x828AF2EC;
	sub_8288C1E0(ctx, base);
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828af30c
	if (ctx.cr6.eq) goto loc_828AF30C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AF30C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828AF30C:
	// stw r27,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r27.u32);
loc_828AF310:
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
	ctx.lr = 0x828AF328;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,156(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828af2d0
	if (ctx.cr6.lt) goto loc_828AF2D0;
loc_828AF33C:
	// lwz r11,160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// addi r3,r30,140
	ctx.r3.s64 = ctx.r30.s64 + 140;
	// stw r27,156(r30)
	PPC_STORE_U32(ctx.r30.u32 + 156, ctx.r27.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828af360
	if (ctx.cr6.eq) goto loc_828AF360;
	// stw r27,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r27.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x82332c38
	ctx.lr = 0x828AF360;
	sub_82332C38(ctx, base);
loc_828AF360:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwzx r3,r26,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828af384
	if (ctx.cr6.eq) goto loc_828AF384;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AF384;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828AF384:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828af29c
	if (ctx.cr6.lt) goto loc_828AF29C;
loc_828AF398:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8239d768
	ctx.lr = 0x828AF3A0;
	sub_8239D768(ctx, base);
loc_828AF3A0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828AF3A8"))) PPC_WEAK_FUNC(sub_828AF3A8);
PPC_FUNC_IMPL(__imp__sub_828AF3A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x828AF3B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r29,r31,96
	ctx.r29.s64 = ctx.r31.s64 + 96;
	// addi r11,r11,-24088
	ctx.r11.s64 = ctx.r11.s64 + -24088;
	// li r28,4
	ctx.r28.s64 = 4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r30,0
	ctx.r30.s64 = 0;
loc_828AF3D0:
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// stw r30,-4(r29)
	PPC_STORE_U32(ctx.r29.u32 + -4, ctx.r30.u32);
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
	// beq cr6,0x828af3f0
	if (ctx.cr6.eq) goto loc_828AF3F0;
	// bl 0x82a4fc60
	ctx.lr = 0x828AF3F0;
	sub_82A4FC60(ctx, base);
loc_828AF3F0:
	// stw r30,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r30.u32);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
	// addi r29,r29,36
	ctx.r29.s64 = ctx.r29.s64 + 36;
	// bne 0x828af3d0
	if (!ctx.cr0.eq) goto loc_828AF3D0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828b14d0
	ctx.lr = 0x828AF410;
	sub_828B14D0(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r3,524(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// stw r30,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r30.u32);
	// stw r30,532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 532, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r30,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r30.u32);
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,540(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 540, temp.u32);
	// beq cr6,0x828af44c
	if (ctx.cr6.eq) goto loc_828AF44C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AF448;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r30.u32);
loc_828AF44C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828af238
	ctx.lr = 0x828AF454;
	sub_828AF238(ctx, base);
	// addi r3,r31,544
	ctx.r3.s64 = ctx.r31.s64 + 544;
	// bl 0x8239d768
	ctx.lr = 0x828AF45C;
	sub_8239D768(ctx, base);
	// addi r3,r31,480
	ctx.r3.s64 = ctx.r31.s64 + 480;
	// bl 0x82339860
	ctx.lr = 0x828AF464;
	sub_82339860(ctx, base);
	// addi r3,r31,300
	ctx.r3.s64 = ctx.r31.s64 + 300;
	// bl 0x825c3bc0
	ctx.lr = 0x828AF46C;
	sub_825C3BC0(ctx, base);
	// addi r3,r31,276
	ctx.r3.s64 = ctx.r31.s64 + 276;
	// bl 0x82855110
	ctx.lr = 0x828AF474;
	sub_82855110(ctx, base);
	// addi r3,r31,252
	ctx.r3.s64 = ctx.r31.s64 + 252;
	// bl 0x825c3bc0
	ctx.lr = 0x828AF47C;
	sub_825C3BC0(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r8,-31949
	ctx.r8.s64 = -2093809664;
	// addi r11,r11,-28984
	ctx.r11.s64 = ctx.r11.s64 + -28984;
	// addi r8,r8,13340
	ctx.r8.s64 = ctx.r8.s64 + 13340;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_828AF490:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x828af490
	if (!ctx.cr0.eq) goto loc_828AF490;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82833238
	ctx.lr = 0x828AF4B4;
	sub_82833238(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828AF4C0"))) PPC_WEAK_FUNC(sub_828AF4C0);
PPC_FUNC_IMPL(__imp__sub_828AF4C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x828AF4C8;
	__savegprlr_25(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x82a61748
	ctx.lr = 0x828AF4D0;
	__savefpr_28(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// li r8,32
	ctx.r8.s64 = 32;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,16
	ctx.r6.s64 = 16;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lvx128 v13,r11,r8
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// vmrghw v11,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// lvx128 v12,r11,r7
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v10,r11,r6
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrglw v0,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// vmrghw v13,v10,v12
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// lfs f31,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// vmrglw v12,v10,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r30,r1,112
	ctx.r30.s64 = ctx.r1.s64 + 112;
	// lfs f0,248(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lis r5,-32215
	ctx.r5.s64 = -2111242240;
	// vmrghw v10,v11,v13
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// vmrglw v11,v11,v13
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r28,r5,17456
	ctx.r28.s64 = ctx.r5.s64 + 17456;
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// vmrghw v8,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// vmrglw v12,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r27,r1,160
	ctx.r27.s64 = ctx.r1.s64 + 160;
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r29,r1,144
	ctx.r29.s64 = ctx.r1.s64 + 144;
	// stfs f31,108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r26,r1,176
	ctx.r26.s64 = ctx.r1.s64 + 176;
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r25,r1,192
	ctx.r25.s64 = ctx.r1.s64 + 192;
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r3,r31,336
	ctx.r3.s64 = ctx.r31.s64 + 336;
	// stfs f31,124(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lvx128 v13,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r5,64
	ctx.r5.s64 = 64;
	// lvx128 v9,r0,r28
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r28.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum4fp128 v6,v9,v8
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v6.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v8.f32), 0xFF));
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum4fp128 v7,v9,v10
	simde_mm_store_ps(ctx.v7.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v10.f32), 0xFF));
	// lfs f30,48(r11)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f30.f64 = double(temp.f32);
	// vmsum4fp128 v5,v9,v11
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v5.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v11.f32), 0xFF));
	// lfs f29,52(r11)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f29.f64 = double(temp.f32);
	// vmsum4fp128 v9,v9,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v9.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v12.f32), 0xFF));
	// lfs f28,56(r11)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f28.f64 = double(temp.f32);
	// vmsum4fp128 v4,v0,v10
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v4.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v10.f32), 0xFF));
	// vmsum4fp128 v2,v13,v12
	simde_mm_store_ps(ctx.v2.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v12.f32), 0xFF));
	// vmrghw v7,v7,v6
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v6.u32), simde_mm_load_si128((simde__m128i*)ctx.v7.u32)));
	// vmsum4fp128 v1,v13,v11
	simde_mm_store_ps(ctx.v1.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v11.f32), 0xFF));
	// vmrghw v9,v5,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), simde_mm_load_si128((simde__m128i*)ctx.v5.u32)));
	// vmsum4fp128 v31,v13,v8
	simde_mm_store_ps(ctx.v31.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v8.f32), 0xFF));
	// vmsum4fp128 v13,v13,v10
	simde_mm_store_ps(ctx.v13.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v10.f32), 0xFF));
	// vmsum4fp128 v3,v0,v8
	simde_mm_store_ps(ctx.v3.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v8.f32), 0xFF));
	// vmsum4fp128 v6,v0,v11
	simde_mm_store_ps(ctx.v6.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v11.f32), 0xFF));
	// vmrghw v9,v7,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), simde_mm_load_si128((simde__m128i*)ctx.v7.u32)));
	// vmsum4fp128 v5,v0,v12
	simde_mm_store_ps(ctx.v5.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v12.f32), 0xFF));
	// lvx128 v0,r0,r30
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum4fp128 v12,v0,v12
	simde_mm_store_ps(ctx.v12.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v12.f32), 0xFF));
	// vmsum4fp128 v11,v0,v11
	simde_mm_store_ps(ctx.v11.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v11.f32), 0xFF));
	// vmrghw v13,v13,v31
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v31.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// vmsum4fp128 v8,v0,v8
	simde_mm_store_ps(ctx.v8.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v8.f32), 0xFF));
	// vmrghw v7,v4,v3
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v3.u32), simde_mm_load_si128((simde__m128i*)ctx.v4.u32)));
	// vmsum4fp128 v0,v0,v10
	simde_mm_store_ps(ctx.v0.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v10.f32), 0xFF));
	// vmrghw v10,v1,v2
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v2.u32), simde_mm_load_si128((simde__m128i*)ctx.v1.u32)));
	// vmrghw v6,v6,v5
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v5.u32), simde_mm_load_si128((simde__m128i*)ctx.v6.u32)));
	// vmrghw v13,v13,v10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// vmrghw v7,v7,v6
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v6.u32), simde_mm_load_si128((simde__m128i*)ctx.v7.u32)));
	// stvx128 v13,r0,r27
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r27.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v7,r0,r29
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r29.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw v13,v11,v12
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// vmrghw v0,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// vmrghw v0,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// stvx128 v0,r0,r26
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r26.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v9,r0,r25
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r25.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82a4ea80
	ctx.lr = 0x828AF624;
	sub_82A4EA80(ctx, base);
	// lfs f0,576(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,580(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// lfs f12,584(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f29,f13
	ctx.f13.f64 = double(float(ctx.f29.f64 - ctx.f13.f64));
	// fsubs f12,f28,f12
	ctx.f12.f64 = double(float(ctx.f28.f64 - ctx.f12.f64));
	// stfs f0,384(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 384, temp.u32);
	// stfs f13,388(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 388, temp.u32);
	// stfs f12,392(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 392, temp.u32);
	// lwz r30,572(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x828af680
	if (ctx.cr6.eq) goto loc_828AF680;
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x828af680
	if (!ctx.cr6.gt) goto loc_828AF680;
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828af680
	if (ctx.cr6.eq) goto loc_828AF680;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,300
	ctx.r5.s64 = ctx.r31.s64 + 300;
	// addi r4,r31,276
	ctx.r4.s64 = ctx.r31.s64 + 276;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828af6f0
	ctx.lr = 0x828AF680;
	sub_828AF6F0(ctx, base);
loc_828AF680:
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r31,300
	ctx.r5.s64 = ctx.r31.s64 + 300;
	// addi r4,r31,276
	ctx.r4.s64 = ctx.r31.s64 + 276;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828af6f0
	ctx.lr = 0x828AF694;
	sub_828AF6F0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x828af6dc
	if (ctx.cr6.eq) goto loc_828AF6DC;
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828af6dc
	if (ctx.cr6.eq) goto loc_828AF6DC;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828af6c4
	if (ctx.cr6.eq) goto loc_828AF6C4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AF6C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828AF6C4:
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x828af6dc
	if (!ctx.cr6.gt) goto loc_828AF6DC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829dfff8
	ctx.lr = 0x828AF6DC;
	sub_829DFFF8(ctx, base);
loc_828AF6DC:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x82a61794
	ctx.lr = 0x828AF6E8;
	__restfpr_28(ctx, base);
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828AF6F0"))) PPC_WEAK_FUNC(sub_828AF6F0);
PPC_FUNC_IMPL(__imp__sub_828AF6F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9d0
	ctx.lr = 0x828AF6F8;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82a61740
	ctx.lr = 0x828AF700;
	__savefpr_26(ctx, base);
	// addi r12,r1,-208
	ctx.r12.s64 = ctx.r1.s64 + -208;
	// bl 0x82ec4bb4
	ctx.lr = 0x828AF708;
	__savevmx_124(ctx, base);
	// stwu r1,-1216(r1)
	ea = -1216 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r19,0
	ctx.r19.s64 = 0;
	// stw r6,1260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1260, ctx.r6.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r9,64
	ctx.r9.s64 = 64;
	// stw r19,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r19.u32);
	// stw r19,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r19.u32);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// mr r16,r4
	ctx.r16.u64 = ctx.r4.u64;
	// stw r19,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r19.u32);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// stw r19,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r19.u32);
	// stw r19,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r19.u32);
	// stw r19,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r19.u32);
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// stw r19,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r19.u32);
	// stw r19,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r19.u32);
	// stw r19,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r19.u32);
	// stw r19,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r19.u32);
	// lwz r11,240(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 240);
	// lwz r3,328(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 328);
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// bl 0x824d5a20
	ctx.lr = 0x828AF768;
	sub_824D5A20(ctx, base);
	// lwz r11,572(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 572);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r18,336
	ctx.r4.s64 = ctx.r18.s64 + 336;
	// addi r3,r1,752
	ctx.r3.s64 = ctx.r1.s64 + 752;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// bl 0x826c8a28
	ctx.lr = 0x828AF784;
	sub_826C8A28(ctx, base);
	// addi r10,r1,368
	ctx.r10.s64 = ctx.r1.s64 + 368;
	// li r11,8
	ctx.r11.s64 = 8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_828AF790:
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x828af790
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_828AF790;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x828af7c4
	if (ctx.cr6.eq) goto loc_828AF7C4;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x828af7c4
	if (!ctx.cr6.gt) goto loc_828AF7C4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x828af7c8
	goto loc_828AF7C8;
loc_828AF7C4:
	// stw r19,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r19.u32);
loc_828AF7C8:
	// addi r11,r1,416
	ctx.r11.s64 = ctx.r1.s64 + 416;
	// addi r10,r1,400
	ctx.r10.s64 = ctx.r1.s64 + 400;
	// addi r9,r1,384
	ctx.r9.s64 = ctx.r1.s64 + 384;
	// addi r8,r1,368
	ctx.r8.s64 = ctx.r1.s64 + 368;
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// lvx128 v127,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r6,-31961
	ctx.r6.s64 = -2094596096;
	// lvx128 v126,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v126.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r5,-32215
	ctx.r5.s64 = -2111242240;
	// lvx128 v125,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v125.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r4,-32215
	ctx.r4.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lvx128 v124,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v124.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f30,904(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 904);
	ctx.f30.f64 = double(temp.f32);
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// lfs f27,-24624(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -24624);
	ctx.f27.f64 = double(temp.f32);
	// addi r11,r11,17456
	ctx.r11.s64 = ctx.r11.s64 + 17456;
	// lfs f28,16776(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16776);
	ctx.f28.f64 = double(temp.f32);
	// addi r10,r10,-15728
	ctx.r10.s64 = ctx.r10.s64 + -15728;
	// lfd f29,18416(r4)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r4.u32 + 18416);
	// lfs f31,908(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 908);
	ctx.f31.f64 = double(temp.f32);
	// li r21,32
	ctx.r21.s64 = 32;
	// li r22,48
	ctx.r22.s64 = 48;
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// li r23,16
	ctx.r23.s64 = 16;
	// stw r10,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
loc_828AF834:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// mr r15,r19
	ctx.r15.u64 = ctx.r19.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x828b0564
	if (!ctx.cr6.gt) goto loc_828B0564;
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// mr r17,r19
	ctx.r17.u64 = ctx.r19.u64;
	// mr r14,r19
	ctx.r14.u64 = ctx.r19.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_828AF854:
	// lwz r28,88(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x828af884
	if (ctx.cr6.eq) goto loc_828AF884;
	// lwz r11,132(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 132);
	// cmpw cr6,r15,r11
	ctx.cr6.compare<int32_t>(ctx.r15.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x828af884
	if (!ctx.cr6.lt) goto loc_828AF884;
	// lwz r11,128(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 128);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lbzx r11,r11,r15
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r15.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x828b0540
	if (!ctx.cr6.eq) goto loc_828B0540;
	// rotlwi r28,r28,0
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r28.u32, 0);
loc_828AF884:
	// lwz r29,172(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x828afa30
	if (ctx.cr6.eq) goto loc_828AFA30;
	// lwz r11,96(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828afa30
	if (ctx.cr6.eq) goto loc_828AFA30;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// lwz r9,64(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// ble cr6,0x828af8e0
	if (!ctx.cr6.gt) goto loc_828AF8E0;
	// lwz r8,60(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_828AF8C0:
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,88(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 88);
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x828afa24
	if (ctx.cr6.eq) goto loc_828AFA24;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x828af8c0
	if (ctx.cr6.lt) goto loc_828AF8C0;
loc_828AF8E0:
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
loc_828AF8E4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x828afa30
	if (ctx.cr6.eq) goto loc_828AFA30;
	// lwz r11,1260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1260);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828afa30
	if (ctx.cr6.eq) goto loc_828AFA30;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x829dfc40
	ctx.lr = 0x828AF904;
	sub_829DFC40(ctx, base);
	// vmrghw128 v0,v124,v126
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v126.u32), simde_mm_load_si128((simde__m128i*)ctx.v124.u32)));
	// vmrghw128 v13,v125,v127
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v127.u32), simde_mm_load_si128((simde__m128i*)ctx.v125.u32)));
	// addi r11,r1,496
	ctx.r11.s64 = ctx.r1.s64 + 496;
	// vmrglw128 v12,v124,v126
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v126.u32), simde_mm_load_si128((simde__m128i*)ctx.v124.u32)));
	// addi r10,r1,512
	ctx.r10.s64 = ctx.r1.s64 + 512;
	// vmrglw128 v11,v125,v127
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v127.u32), simde_mm_load_si128((simde__m128i*)ctx.v125.u32)));
	// addi r9,r1,528
	ctx.r9.s64 = ctx.r1.s64 + 528;
	// addi r8,r1,544
	ctx.r8.s64 = ctx.r1.s64 + 544;
	// vmrghw v10,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// addi r7,r1,368
	ctx.r7.s64 = ctx.r1.s64 + 368;
	// vmrglw v9,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// addi r6,r1,400
	ctx.r6.s64 = ctx.r1.s64 + 400;
	// vmrghw v8,v12,v11
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// addi r5,r1,416
	ctx.r5.s64 = ctx.r1.s64 + 416;
	// vmrglw v7,v12,v11
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,368
	ctx.r11.s64 = ctx.r1.s64 + 368;
	// vmsum4fp128 v6,v0,v10
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v6.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v10.f32), 0xFF));
	// lvx128 v13,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum4fp128 v5,v0,v9
	simde_mm_store_ps(ctx.v5.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v9.f32), 0xFF));
	// lvx128 v12,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum4fp128 v4,v0,v8
	simde_mm_store_ps(ctx.v4.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v8.f32), 0xFF));
	// lvx128 v11,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum4fp128 v0,v0,v7
	simde_mm_store_ps(ctx.v0.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v7.f32), 0xFF));
	// addi r8,r1,384
	ctx.r8.s64 = ctx.r1.s64 + 384;
	// vmsum4fp128 v2,v13,v9
	simde_mm_store_ps(ctx.v2.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v9.f32), 0xFF));
	// addi r10,r1,496
	ctx.r10.s64 = ctx.r1.s64 + 496;
	// vmsum4fp128 v30,v12,v9
	simde_mm_store_ps(ctx.v30.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v9.f32), 0xFF));
	// li r9,8
	ctx.r9.s64 = 8;
	// vmsum4fp128 v3,v13,v7
	simde_mm_store_ps(ctx.v3.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v7.f32), 0xFF));
	// vmsum4fp128 v31,v12,v7
	simde_mm_store_ps(ctx.v31.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v7.f32), 0xFF));
	// vmsum4fp128 v1,v13,v8
	simde_mm_store_ps(ctx.v1.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v8.f32), 0xFF));
	// vmsum4fp128 v29,v12,v8
	simde_mm_store_ps(ctx.v29.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v8.f32), 0xFF));
	// vmsum4fp128 v12,v12,v10
	simde_mm_store_ps(ctx.v12.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v10.f32), 0xFF));
	// vmsum4fp128 v7,v11,v7
	simde_mm_store_ps(ctx.v7.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v7.f32), 0xFF));
	// vmsum4fp128 v9,v11,v9
	simde_mm_store_ps(ctx.v9.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v9.f32), 0xFF));
	// vmsum4fp128 v8,v11,v8
	simde_mm_store_ps(ctx.v8.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v8.f32), 0xFF));
	// vmsum4fp128 v13,v13,v10
	simde_mm_store_ps(ctx.v13.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v10.f32), 0xFF));
	// vmsum4fp128 v11,v11,v10
	simde_mm_store_ps(ctx.v11.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v10.f32), 0xFF));
	// vmrghw v10,v6,v4
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v4.u32), simde_mm_load_si128((simde__m128i*)ctx.v6.u32)));
	// vmrghw v0,v5,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v5.u32)));
	// vmrghw v6,v2,v3
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v3.u32), simde_mm_load_si128((simde__m128i*)ctx.v2.u32)));
	// vmrghw v0,v10,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// vmrghw v10,v30,v31
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v31.u32), simde_mm_load_si128((simde__m128i*)ctx.v30.u32)));
	// vmrghw v12,v12,v29
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v29.u32), simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// vmrghw v9,v9,v7
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v7.u32), simde_mm_load_si128((simde__m128i*)ctx.v9.u32)));
	// vmrghw v13,v13,v1
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v1.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// stvx128 v0,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw v11,v11,v8
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// vmrghw v0,v12,v10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// vmrghw v13,v13,v6
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v6.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// vmrghw v12,v11,v9
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// stvx128 v0,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v12,r0,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_828AF9E4:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x828af9e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_828AF9E4;
	// lwz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// addi r9,r1,368
	ctx.r9.s64 = ctx.r1.s64 + 368;
	// li r11,8
	ctx.r11.s64 = 8;
	// add r10,r17,r10
	ctx.r10.u64 = ctx.r17.u64 + ctx.r10.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_828AFA0C:
	// ld r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x828afa0c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_828AFA0C;
	// b 0x828afb9c
	goto loc_828AFB9C;
loc_828AFA24:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r11,r8
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// b 0x828af8e4
	goto loc_828AF8E4;
loc_828AFA30:
	// lwz r11,12(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 12);
	// add r3,r11,r14
	ctx.r3.u64 = ctx.r11.u64 + ctx.r14.u64;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// add r4,r17,r11
	ctx.r4.u64 = ctx.r17.u64 + ctx.r11.u64;
	// bl 0x828b2208
	ctx.lr = 0x828AFA44;
	sub_828B2208(ctx, base);
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// ble cr6,0x828afb54
	if (!ctx.cr6.gt) goto loc_828AFB54;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r8,r1,688
	ctx.r8.s64 = ctx.r1.s64 + 688;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// addi r7,r1,704
	ctx.r7.s64 = ctx.r1.s64 + 704;
	// addi r6,r1,720
	ctx.r6.s64 = ctx.r1.s64 + 720;
	// addi r5,r1,736
	ctx.r5.s64 = ctx.r1.s64 + 736;
	// addi r9,r1,688
	ctx.r9.s64 = ctx.r1.s64 + 688;
	// lwz r10,36(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r17,r11
	ctx.r11.u64 = ctx.r17.u64 + ctx.r11.u64;
	// lvx128 v13,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r10,r21
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r21.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw v11,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// lvx128 v10,r10,r23
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r23.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r10,r22
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r22.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrglw v0,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// vmrghw v13,v10,v12
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// lvx128 v9,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrglw v12,v10,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// lvx128 v10,r11,r23
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r23.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v8,r11,r21
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r21.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,8
	ctx.r10.s64 = 8;
	// lvx128 v7,r11,r22
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r22.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw v6,v11,v13
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// vmrghw v5,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v5.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// vmrglw v13,v11,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// vmrglw v0,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// vmsum4fp128 v12,v9,v6
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v6.f32), 0xFF));
	// vmsum4fp128 v11,v9,v5
	simde_mm_store_ps(ctx.v11.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v5.f32), 0xFF));
	// vmsum4fp128 v4,v9,v13
	simde_mm_store_ps(ctx.v4.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v13.f32), 0xFF));
	// vmsum4fp128 v9,v9,v0
	simde_mm_store_ps(ctx.v9.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v0.f32), 0xFF));
	// vmsum4fp128 v3,v10,v0
	simde_mm_store_ps(ctx.v3.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v0.f32), 0xFF));
	// vmsum4fp128 v2,v10,v13
	simde_mm_store_ps(ctx.v2.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v13.f32), 0xFF));
	// vmsum4fp128 v31,v8,v0
	simde_mm_store_ps(ctx.v31.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v0.f32), 0xFF));
	// vmsum4fp128 v30,v8,v13
	simde_mm_store_ps(ctx.v30.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v13.f32), 0xFF));
	// vmsum4fp128 v1,v10,v5
	simde_mm_store_ps(ctx.v1.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v5.f32), 0xFF));
	// vmsum4fp128 v29,v8,v5
	simde_mm_store_ps(ctx.v29.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v5.f32), 0xFF));
	// vmsum4fp128 v0,v7,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v0.f32), 0xFF));
	// vmsum4fp128 v13,v7,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v13.f32), 0xFF));
	// vmsum4fp128 v5,v7,v5
	simde_mm_store_ps(ctx.v5.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v5.f32), 0xFF));
	// vmsum4fp128 v10,v10,v6
	simde_mm_store_ps(ctx.v10.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v6.f32), 0xFF));
	// vmsum4fp128 v8,v8,v6
	simde_mm_store_ps(ctx.v8.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v6.f32), 0xFF));
	// vmsum4fp128 v7,v7,v6
	simde_mm_store_ps(ctx.v7.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v6.f32), 0xFF));
	// vmrghw v12,v12,v11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// vmrghw v11,v4,v9
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), simde_mm_load_si128((simde__m128i*)ctx.v4.u32)));
	// vmrghw v9,v2,v3
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v3.u32), simde_mm_load_si128((simde__m128i*)ctx.v2.u32)));
	// vmrghw v12,v12,v11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// vmrghw v11,v30,v31
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v31.u32), simde_mm_load_si128((simde__m128i*)ctx.v30.u32)));
	// vmrghw v0,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// vmrghw v10,v10,v1
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v1.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// vmrghw v8,v8,v29
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v29.u32), simde_mm_load_si128((simde__m128i*)ctx.v8.u32)));
	// stvx128 v12,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw v13,v7,v5
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v5.u32), simde_mm_load_si128((simde__m128i*)ctx.v7.u32)));
	// vmrghw v10,v10,v9
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// vmrghw v12,v8,v11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), simde_mm_load_si128((simde__m128i*)ctx.v8.u32)));
	// vmrghw v0,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// stvx128 v10,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v12,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_828AFB40:
	// ld r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x828afb40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_828AFB40;
loc_828AFB54:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x828afb9c
	if (ctx.cr6.eq) goto loc_828AFB9C;
	// lwz r11,108(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 108);
	// addi r31,r29,108
	ctx.r31.s64 = ctx.r29.s64 + 108;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AFB74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// add r4,r17,r11
	ctx.r4.u64 = ctx.r17.u64 + ctx.r11.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x82a4ea80
	ctx.lr = 0x828AFB88;
	sub_82A4EA80(ctx, base);
	// lwz r11,108(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 108);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AFB9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828AFB9C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x828b0540
	if (ctx.cr6.eq) goto loc_828B0540;
	// lwz r11,496(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 496);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x828b0540
	if (!ctx.cr6.gt) goto loc_828B0540;
	// lwz r11,492(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 492);
	// lbzx r11,r11,r15
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r15.u32);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x828b0540
	if (ctx.cr6.eq) goto loc_828B0540;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,152(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 152);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r20,4(r11)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x828b0538
	goto loc_828B0538;
loc_828AFBD8:
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AFBEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x828b0534
	if (ctx.cr0.eq) goto loc_828B0534;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r19,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r19.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828afc18
	if (ctx.cr6.eq) goto loc_828AFC18;
	// stw r19,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r19.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82332c38
	ctx.lr = 0x828AFC18;
	sub_82332C38(ctx, base);
loc_828AFC18:
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AFC38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x828b0534
	if (!ctx.cr6.gt) goto loc_828B0534;
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r19,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r19.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828afc68
	if (ctx.cr6.eq) goto loc_828AFC68;
	// stw r19,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r19.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82332c38
	ctx.lr = 0x828AFC68;
	sub_82332C38(ctx, base);
loc_828AFC68:
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828AFC88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x828b0534
	if (!ctx.cr6.gt) goto loc_828B0534;
	// lwz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r24,r19
	ctx.r24.u64 = ctx.r19.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x828b022c
	if (!ctx.cr6.gt) goto loc_828B022C;
	// mr r25,r19
	ctx.r25.u64 = ctx.r19.u64;
	// mr r26,r19
	ctx.r26.u64 = ctx.r19.u64;
loc_828AFCAC:
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,240(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 240);
	// lwz r7,140(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwzx r29,r26,r9
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r9.u32);
	// mulli r10,r29,48
	ctx.r10.s64 = ctx.r29.s64 * 48;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lwz r28,36(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// ble cr6,0x828afd60
	if (!ctx.cr6.gt) goto loc_828AFD60;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x828afcfc
	if (!ctx.cr6.gt) goto loc_828AFCFC;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_828AFCE0:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r9,r28
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r28.s32, ctx.xer);
	// beq cr6,0x828afd00
	if (ctx.cr6.eq) goto loc_828AFD00;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x828afce0
	if (ctx.cr6.lt) goto loc_828AFCE0;
loc_828AFCFC:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_828AFD00:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// addi r9,r1,752
	ctx.r9.s64 = ctx.r1.s64 + 752;
	// bne cr6,0x828afd38
	if (!ctx.cr6.eq) goto loc_828AFD38;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// rlwinm r10,r28,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 6) & 0xFFFFFFC0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r11,8
	ctx.r11.s64 = 8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_828AFD20:
	// ld r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// std r11,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r11.u64);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// bdnz 0x828afd20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_828AFD20;
	// b 0x828afd84
	goto loc_828AFD84;
loc_828AFD38:
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r10,r11,r7
	ctx.r10.u64 = ctx.r11.u64 + ctx.r7.u64;
	// li r11,8
	ctx.r11.s64 = 8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_828AFD48:
	// ld r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// std r11,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r11.u64);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// bdnz 0x828afd48
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_828AFD48;
	// b 0x828afd84
	goto loc_828AFD84;
loc_828AFD60:
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// addi r10,r1,752
	ctx.r10.s64 = ctx.r1.s64 + 752;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_828AFD70:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x828afd70
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_828AFD70;
loc_828AFD84:
	// addi r4,r1,752
	ctx.r4.s64 = ctx.r1.s64 + 752;
	// addi r3,r1,880
	ctx.r3.s64 = ctx.r1.s64 + 880;
	// add r31,r25,r7
	ctx.r31.u64 = ctx.r25.u64 + ctx.r7.u64;
	// bl 0x826c8a28
	ctx.lr = 0x828AFD94;
	sub_826C8A28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lvx128 v0,r0,r31
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,432
	ctx.r10.s64 = ctx.r1.s64 + 432;
	// lvx128 v13,r31,r23
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r23.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,448
	ctx.r9.s64 = ctx.r1.s64 + 448;
	// lvx128 v12,r31,r21
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r21.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,464
	ctx.r8.s64 = ctx.r1.s64 + 464;
	// lvx128 v11,r31,r22
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r22.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,480
	ctx.r7.s64 = ctx.r1.s64 + 480;
	// lvx128 v9,r11,r21
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r21.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,432
	ctx.r4.s64 = ctx.r1.s64 + 432;
	// lvx128 v10,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// vmrghw v7,v10,v9
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// lvx128 v6,r11,r23
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r23.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v8,r11,r22
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r22.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrglw v10,v10,v9
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// vmrghw v9,v6,v8
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), simde_mm_load_si128((simde__m128i*)ctx.v6.u32)));
	// vmrglw v8,v6,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), simde_mm_load_si128((simde__m128i*)ctx.v6.u32)));
	// vmrghw v6,v7,v9
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), simde_mm_load_si128((simde__m128i*)ctx.v7.u32)));
	// vmrghw v5,v10,v8
	simde_mm_store_si128((simde__m128i*)ctx.v5.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// vmrglw v9,v7,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), simde_mm_load_si128((simde__m128i*)ctx.v7.u32)));
	// vmrglw v10,v10,v8
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// vmsum4fp128 v8,v0,v6
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v8.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v6.f32), 0xFF));
	// vmsum4fp128 v7,v0,v5
	simde_mm_store_ps(ctx.v7.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v5.f32), 0xFF));
	// vmsum4fp128 v4,v0,v9
	simde_mm_store_ps(ctx.v4.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v9.f32), 0xFF));
	// vmsum4fp128 v0,v0,v10
	simde_mm_store_ps(ctx.v0.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v10.f32), 0xFF));
	// vmsum4fp128 v3,v13,v10
	simde_mm_store_ps(ctx.v3.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v10.f32), 0xFF));
	// vmsum4fp128 v31,v12,v10
	simde_mm_store_ps(ctx.v31.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v10.f32), 0xFF));
	// vmsum4fp128 v2,v13,v9
	simde_mm_store_ps(ctx.v2.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v9.f32), 0xFF));
	// vmsum4fp128 v30,v12,v9
	simde_mm_store_ps(ctx.v30.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v9.f32), 0xFF));
	// vmsum4fp128 v1,v13,v5
	simde_mm_store_ps(ctx.v1.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v5.f32), 0xFF));
	// vmsum4fp128 v29,v12,v5
	simde_mm_store_ps(ctx.v29.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v5.f32), 0xFF));
	// vmsum4fp128 v10,v11,v10
	simde_mm_store_ps(ctx.v10.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v10.f32), 0xFF));
	// vmsum4fp128 v9,v11,v9
	simde_mm_store_ps(ctx.v9.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v9.f32), 0xFF));
	// vmsum4fp128 v12,v12,v6
	simde_mm_store_ps(ctx.v12.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v6.f32), 0xFF));
	// vmsum4fp128 v5,v11,v5
	simde_mm_store_ps(ctx.v5.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v5.f32), 0xFF));
	// vmsum4fp128 v13,v13,v6
	simde_mm_store_ps(ctx.v13.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v6.f32), 0xFF));
	// vmsum4fp128 v11,v11,v6
	simde_mm_store_ps(ctx.v11.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v6.f32), 0xFF));
	// vmrghw v8,v8,v7
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v7.u32), simde_mm_load_si128((simde__m128i*)ctx.v8.u32)));
	// vmrghw v0,v4,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v4.u32)));
	// vmrghw v7,v2,v3
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v3.u32), simde_mm_load_si128((simde__m128i*)ctx.v2.u32)));
	// vmrghw v0,v8,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v8.u32)));
	// vmrghw v8,v30,v31
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v31.u32), simde_mm_load_si128((simde__m128i*)ctx.v30.u32)));
	// vmrghw v10,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), simde_mm_load_si128((simde__m128i*)ctx.v9.u32)));
	// vmrghw v12,v12,v29
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v29.u32), simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// vmrghw v13,v13,v1
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v1.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// stvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw v11,v11,v5
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v5.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// vmrghw v0,v12,v8
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// vmrghw v13,v13,v7
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v7.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// vmrghw v12,v11,v10
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// stvx128 v0,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v12,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82817f30
	ctx.lr = 0x828AFE74;
	sub_82817F30(ctx, base);
	// lfs f0,36(r20)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,480(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 480);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// lfs f9,484(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 484);
	ctx.f9.f64 = double(temp.f32);
	// lfs f5,488(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 488);
	ctx.f5.f64 = double(temp.f32);
	// stfs f13,208(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f9,212(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stfs f5,216(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f31,220(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// ble cr6,0x828afef8
	if (!ctx.cr6.gt) goto loc_828AFEF8;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// rlwinm r10,r29,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 6) & 0xFFFFFFC0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r11,8
	ctx.r11.s64 = 8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_828AFEB0:
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x828afeb0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_828AFEB0;
	// addi r9,r1,192
	ctx.r9.s64 = ctx.r1.s64 + 192;
	// lwz r11,12(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 12);
	// rlwinm r10,r29,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ld r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// ld r5,16(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 16);
	// ld r9,24(r9)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + 24);
	// stdx r7,r10,r11
	PPC_STORE_U64(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u64);
	// std r6,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r6.u64);
	// std r5,16(r8)
	PPC_STORE_U64(ctx.r8.u32 + 16, ctx.r5.u64);
	// std r9,24(r8)
	PPC_STORE_U64(ctx.r8.u32 + 24, ctx.r9.u64);
	// b 0x828b0214
	goto loc_828B0214;
loc_828AFEF8:
	// lwz r11,12(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 12);
	// rlwinm r30,r29,5,0,26
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// fcmpu cr6,f0,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// ldx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + ctx.r11.u32);
	// ld r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// ld r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ld r7,24(r3)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// std r8,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r8.u64);
	// std r7,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.r7.u64);
	// bgt cr6,0x828aff38
	if (ctx.cr6.gt) goto loc_828AFF38;
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// b 0x828aff44
	goto loc_828AFF44;
loc_828AFF38:
	// fcmpu cr6,f0,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// blt cr6,0x828aff68
	if (ctx.cr6.lt) goto loc_828AFF68;
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
loc_828AFF44:
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// ld r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// std r10,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r10.u64);
	// std r9,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r9.u64);
	// std r8,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r8.u64);
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// b 0x828b00f4
	goto loc_828B00F4;
loc_828AFF68:
	// fsubs f6,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// lfs f11,244(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	ctx.f11.f64 = double(temp.f32);
	// lfs f4,224(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f26,f9,f11
	ctx.f26.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// lfs f3,228(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	ctx.f3.f64 = double(temp.f32);
	// addi r11,r1,272
	ctx.r11.s64 = ctx.r1.s64 + 272;
	// lfs f2,232(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,236(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	ctx.f1.f64 = double(temp.f32);
	// lfs f12,240(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,248(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fsubs f5,f5,f10
	ctx.f5.f64 = double(float(ctx.f5.f64 - ctx.f10.f64));
	// lfs f8,200(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,204(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f9,f4,f6
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f6.f64));
	// stfs f9,272(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// fmuls f9,f6,f3
	ctx.f9.f64 = double(float(ctx.f6.f64 * ctx.f3.f64));
	// stfs f9,276(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// fmuls f9,f6,f2
	ctx.f9.f64 = double(float(ctx.f6.f64 * ctx.f2.f64));
	// stfs f9,280(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// fmuls f9,f6,f1
	ctx.f9.f64 = double(float(ctx.f6.f64 * ctx.f1.f64));
	// stfs f9,284(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 284, temp.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// fmuls f3,f0,f26
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f26.f64));
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lfs f6,196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f6.f64 = double(temp.f32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// fmuls f4,f13,f0
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// fmuls f5,f0,f5
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f12,f4
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f4.f64));
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stfs f12,152(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fmuls f2,f13,f8
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// fadds f12,f10,f5
	ctx.f12.f64 = double(float(ctx.f10.f64 + ctx.f5.f64));
	// stfs f12,160(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fadds f11,f11,f3
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f3.f64));
	// stfs f11,156(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// lwz r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lfs f12,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lwz r9,156(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lfs f11,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lwz r8,160(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lfs f9,252(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	ctx.f9.f64 = double(temp.f32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// fsubs f3,f31,f9
	ctx.f3.f64 = double(float(ctx.f31.f64 - ctx.f9.f64));
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lfs f5,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f10,f12,f7,f2
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f7.f64 + ctx.f2.f64));
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// fmadds f9,f3,f0,f9
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f0.f64 + ctx.f9.f64));
	// stfs f9,28(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// fmuls f9,f5,f0
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// fmuls f8,f0,f8
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// stw r8,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r8.u32);
	// fmadds f4,f11,f6,f10
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f6.f64 + ctx.f10.f64));
	// lfs f10,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f6,f0,f6
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// fmuls f0,f0,f7
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// fmadds f4,f10,f5,f4
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f5.f64 + ctx.f4.f64));
	// fcmpu cr6,f4,f30
	ctx.cr6.compare(ctx.f4.f64, ctx.f30.f64);
	// bge cr6,0x828b00ac
	if (!ctx.cr6.lt) goto loc_828B00AC;
	// addi r11,r1,288
	ctx.r11.s64 = ctx.r1.s64 + 288;
	// fsubs f10,f9,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// fsubs f11,f6,f11
	ctx.f11.f64 = double(float(ctx.f6.f64 - ctx.f11.f64));
	// stfs f10,288(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 288, temp.u32);
	// fsubs f13,f8,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// stfs f11,292(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 292, temp.u32);
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// stfs f13,296(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 296, temp.u32);
	// stfs f0,300(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 300, temp.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// b 0x828b00e8
	goto loc_828B00E8;
loc_828B00AC:
	// fadds f10,f10,f9
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// stfs f10,256(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// fadds f11,f11,f6
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f6.f64));
	// stfs f11,260(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// fadds f13,f13,f8
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f8.f64));
	// stfs f13,264(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// addi r11,r1,256
	ctx.r11.s64 = ctx.r1.s64 + 256;
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f0,268(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 268, temp.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
loc_828B00E8:
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// bl 0x825c0090
	ctx.lr = 0x828B00F4;
	sub_825C0090(ctx, base);
loc_828B00F4:
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// rlwinm r31,r29,6,0,25
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r10,12(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 12);
	// add r4,r31,r11
	ctx.r4.u64 = ctx.r31.u64 + ctx.r11.u64;
	// add r3,r30,r10
	ctx.r3.u64 = ctx.r30.u64 + ctx.r10.u64;
	// bl 0x828b2208
	ctx.lr = 0x828B010C;
	sub_828B2208(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x828b0214
	if (!ctx.cr6.gt) goto loc_828B0214;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// rlwinm r10,r28,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r8,r1,560
	ctx.r8.s64 = ctx.r1.s64 + 560;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r7,r1,576
	ctx.r7.s64 = ctx.r1.s64 + 576;
	// addi r6,r1,592
	ctx.r6.s64 = ctx.r1.s64 + 592;
	// addi r5,r1,608
	ctx.r5.s64 = ctx.r1.s64 + 608;
	// lvx128 v13,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,560
	ctx.r9.s64 = ctx.r1.s64 + 560;
	// lvx128 v0,r10,r21
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r21.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw v11,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// lvx128 v10,r10,r23
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r23.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r10,r22
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r22.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrglw v0,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// vmrghw v13,v10,v12
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// lvx128 v9,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrglw v12,v10,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// lvx128 v10,r11,r23
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r23.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v8,r11,r21
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r21.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,8
	ctx.r10.s64 = 8;
	// lvx128 v7,r11,r22
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r22.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw v6,v11,v13
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// vmrghw v5,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v5.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// vmrglw v13,v11,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// vmrglw v0,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// vmsum4fp128 v12,v9,v6
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v6.f32), 0xFF));
	// vmsum4fp128 v11,v9,v5
	simde_mm_store_ps(ctx.v11.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v5.f32), 0xFF));
	// vmsum4fp128 v4,v9,v13
	simde_mm_store_ps(ctx.v4.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v13.f32), 0xFF));
	// vmsum4fp128 v9,v9,v0
	simde_mm_store_ps(ctx.v9.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v0.f32), 0xFF));
	// vmsum4fp128 v3,v10,v0
	simde_mm_store_ps(ctx.v3.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v0.f32), 0xFF));
	// vmsum4fp128 v2,v10,v13
	simde_mm_store_ps(ctx.v2.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v13.f32), 0xFF));
	// vmsum4fp128 v31,v8,v0
	simde_mm_store_ps(ctx.v31.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v0.f32), 0xFF));
	// vmsum4fp128 v30,v8,v13
	simde_mm_store_ps(ctx.v30.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v13.f32), 0xFF));
	// vmsum4fp128 v1,v10,v5
	simde_mm_store_ps(ctx.v1.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v5.f32), 0xFF));
	// vmsum4fp128 v29,v8,v5
	simde_mm_store_ps(ctx.v29.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v5.f32), 0xFF));
	// vmsum4fp128 v0,v7,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v0.f32), 0xFF));
	// vmsum4fp128 v13,v7,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v13.f32), 0xFF));
	// vmsum4fp128 v5,v7,v5
	simde_mm_store_ps(ctx.v5.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v5.f32), 0xFF));
	// vmsum4fp128 v10,v10,v6
	simde_mm_store_ps(ctx.v10.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v6.f32), 0xFF));
	// vmsum4fp128 v8,v8,v6
	simde_mm_store_ps(ctx.v8.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v6.f32), 0xFF));
	// vmsum4fp128 v7,v7,v6
	simde_mm_store_ps(ctx.v7.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v6.f32), 0xFF));
	// vmrghw v12,v12,v11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// vmrghw v11,v4,v9
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), simde_mm_load_si128((simde__m128i*)ctx.v4.u32)));
	// vmrghw v9,v2,v3
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v3.u32), simde_mm_load_si128((simde__m128i*)ctx.v2.u32)));
	// vmrghw v12,v12,v11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// vmrghw v11,v30,v31
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v31.u32), simde_mm_load_si128((simde__m128i*)ctx.v30.u32)));
	// vmrghw v0,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// vmrghw v10,v10,v1
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v1.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// vmrghw v8,v8,v29
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v29.u32), simde_mm_load_si128((simde__m128i*)ctx.v8.u32)));
	// stvx128 v12,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw v13,v7,v5
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v5.u32), simde_mm_load_si128((simde__m128i*)ctx.v7.u32)));
	// vmrghw v10,v10,v9
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// vmrghw v12,v8,v11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), simde_mm_load_si128((simde__m128i*)ctx.v8.u32)));
	// vmrghw v0,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// stvx128 v10,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v12,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_828B0200:
	// ld r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x828b0200
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_828B0200;
loc_828B0214:
	// lwz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// addi r25,r25,64
	ctx.r25.s64 = ctx.r25.s64 + 64;
	// cmpw cr6,r24,r8
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x828afcac
	if (ctx.cr6.lt) goto loc_828AFCAC;
loc_828B022C:
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// lfs f26,36(r20)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 36);
	ctx.f26.f64 = double(temp.f32);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B024C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fsubs f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f31.f64));
	// fmadds f0,f0,f26,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f26.f64 + ctx.f31.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x828b03a0
	if (ctx.cr6.eq) goto loc_828B03A0;
	// lwz r11,12(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 12);
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// addi r8,r1,304
	ctx.r8.s64 = ctx.r1.s64 + 304;
	// stfs f0,304(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 304, temp.u32);
	// add r11,r11,r14
	ctx.r11.u64 = ctx.r11.u64 + ctx.r14.u64;
	// stfs f30,312(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 312, temp.u32);
	// stfs f30,316(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 316, temp.u32);
	// addi r7,r1,320
	ctx.r7.s64 = ctx.r1.s64 + 320;
	// stfs f30,320(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 320, temp.u32);
	// lwz r6,168(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// stfs f30,340(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 340, temp.u32);
	// addi r4,r1,816
	ctx.r4.s64 = ctx.r1.s64 + 816;
	// stfs f0,344(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 344, temp.u32);
	// addi r3,r1,832
	ctx.r3.s64 = ctx.r1.s64 + 832;
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// add r11,r17,r11
	ctx.r11.u64 = ctx.r17.u64 + ctx.r11.u64;
	// stfs f30,348(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 348, temp.u32);
	// stfs f30,308(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 308, temp.u32);
	// addi r31,r1,848
	ctx.r31.s64 = ctx.r1.s64 + 848;
	// lvx128 v9,r11,r22
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r22.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r1,864
	ctx.r30.s64 = ctx.r1.s64 + 864;
	// lvx128 v10,r11,r23
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r23.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,816
	ctx.r9.s64 = ctx.r1.s64 + 816;
	// stfs f0,324(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 324, temp.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// stfs f30,328(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 328, temp.u32);
	// stfs f30,332(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 332, temp.u32);
	// stfs f30,336(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 336, temp.u32);
	// lvx128 v13,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v7,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v8,r11,r21
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r21.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw v6,v7,v8
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), simde_mm_load_si128((simde__m128i*)ctx.v7.u32)));
	// lvx128 v12,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrglw v8,v7,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), simde_mm_load_si128((simde__m128i*)ctx.v7.u32)));
	// vmrghw v7,v10,v9
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// lvx128 v0,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrglw v10,v10,v9
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// lvx128 v11,r0,r6
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw v9,v6,v7
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v7.u32), simde_mm_load_si128((simde__m128i*)ctx.v6.u32)));
	// vmrghw v5,v8,v10
	simde_mm_store_si128((simde__m128i*)ctx.v5.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), simde_mm_load_si128((simde__m128i*)ctx.v8.u32)));
	// vmrglw v7,v6,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v7.u32), simde_mm_load_si128((simde__m128i*)ctx.v6.u32)));
	// vmrglw v10,v8,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), simde_mm_load_si128((simde__m128i*)ctx.v8.u32)));
	// vmsum4fp128 v8,v0,v9
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v8.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v9.f32), 0xFF));
	// vmsum4fp128 v6,v0,v5
	simde_mm_store_ps(ctx.v6.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v5.f32), 0xFF));
	// vmsum4fp128 v4,v0,v7
	simde_mm_store_ps(ctx.v4.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v7.f32), 0xFF));
	// vmsum4fp128 v0,v0,v10
	simde_mm_store_ps(ctx.v0.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v10.f32), 0xFF));
	// vmsum4fp128 v3,v13,v10
	simde_mm_store_ps(ctx.v3.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v10.f32), 0xFF));
	// vmsum4fp128 v31,v12,v10
	simde_mm_store_ps(ctx.v31.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v10.f32), 0xFF));
	// vmsum4fp128 v2,v13,v7
	simde_mm_store_ps(ctx.v2.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v7.f32), 0xFF));
	// vmsum4fp128 v30,v12,v7
	simde_mm_store_ps(ctx.v30.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v7.f32), 0xFF));
	// vmsum4fp128 v1,v13,v5
	simde_mm_store_ps(ctx.v1.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v5.f32), 0xFF));
	// vmsum4fp128 v29,v12,v5
	simde_mm_store_ps(ctx.v29.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v5.f32), 0xFF));
	// vmsum4fp128 v12,v12,v9
	simde_mm_store_ps(ctx.v12.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v9.f32), 0xFF));
	// vmsum4fp128 v10,v11,v10
	simde_mm_store_ps(ctx.v10.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v10.f32), 0xFF));
	// vmsum4fp128 v7,v11,v7
	simde_mm_store_ps(ctx.v7.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v7.f32), 0xFF));
	// vmsum4fp128 v5,v11,v5
	simde_mm_store_ps(ctx.v5.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v5.f32), 0xFF));
	// vmsum4fp128 v13,v13,v9
	simde_mm_store_ps(ctx.v13.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v9.f32), 0xFF));
	// vmsum4fp128 v11,v11,v9
	simde_mm_store_ps(ctx.v11.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v9.f32), 0xFF));
	// vmrghw v9,v8,v6
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v6.u32), simde_mm_load_si128((simde__m128i*)ctx.v8.u32)));
	// vmrghw v0,v4,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v4.u32)));
	// vmrghw v8,v2,v3
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v3.u32), simde_mm_load_si128((simde__m128i*)ctx.v2.u32)));
	// vmrghw v0,v9,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v9.u32)));
	// vmrghw v9,v30,v31
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v31.u32), simde_mm_load_si128((simde__m128i*)ctx.v30.u32)));
	// vmrghw v12,v12,v29
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v29.u32), simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// vmrghw v10,v7,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), simde_mm_load_si128((simde__m128i*)ctx.v7.u32)));
	// vmrghw v13,v13,v1
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v1.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// stvx128 v0,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw v11,v11,v5
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v5.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// vmrghw v0,v12,v9
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// vmrghw v13,v13,v8
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// vmrghw v12,v11,v10
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// stvx128 v0,r0,r31
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v12,r0,r30
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_828B038C:
	// ld r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x828b038c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_828B038C;
loc_828B03A0:
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r28,r11,1
	ctx.r28.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r28,r15
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r15.s32, ctx.xer);
	// bge cr6,0x828b0534
	if (!ctx.cr6.lt) goto loc_828B0534;
	// rlwinm r31,r28,6,0,25
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 6) & 0xFFFFFFC0;
	// mulli r29,r28,48
	ctx.r29.s64 = ctx.r28.s64 * 48;
	// rlwinm r30,r28,5,0,26
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 5) & 0xFFFFFFE0;
loc_828B03C0:
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x828b03f0
	if (!ctx.cr6.gt) goto loc_828B03F0;
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
loc_828B03D4:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r8,r28
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r28.s32, ctx.xer);
	// beq cr6,0x828b03f4
	if (ctx.cr6.eq) goto loc_828B03F4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x828b03d4
	if (ctx.cr6.lt) goto loc_828B03D4;
loc_828B03F0:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_828B03F4:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x828b051c
	if (!ctx.cr6.eq) goto loc_828B051C;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// lwz r10,12(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 12);
	// add r4,r31,r11
	ctx.r4.u64 = ctx.r31.u64 + ctx.r11.u64;
	// add r3,r10,r30
	ctx.r3.u64 = ctx.r10.u64 + ctx.r30.u64;
	// bl 0x828b2208
	ctx.lr = 0x828B0410;
	sub_828B2208(ctx, base);
	// lwz r11,240(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 240);
	// lwz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// addi r6,r1,624
	ctx.r6.s64 = ctx.r1.s64 + 624;
	// add r8,r29,r11
	ctx.r8.u64 = ctx.r29.u64 + ctx.r11.u64;
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r5,r1,640
	ctx.r5.s64 = ctx.r1.s64 + 640;
	// addi r4,r1,656
	ctx.r4.s64 = ctx.r1.s64 + 656;
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// addi r7,r1,624
	ctx.r7.s64 = ctx.r1.s64 + 624;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,8
	ctx.r9.s64 = 8;
	// lvx128 v13,r11,r23
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r23.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r11,r21
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r21.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r11,r22
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r22.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r8,36(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// rlwinm r8,r8,6,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0xFFFFFFC0;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lvx128 v9,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v10,r10,r21
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r21.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw v7,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), simde_mm_load_si128((simde__m128i*)ctx.v9.u32)));
	// lvx128 v6,r10,r23
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r23.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v8,r10,r22
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r22.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrglw v10,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), simde_mm_load_si128((simde__m128i*)ctx.v9.u32)));
	// vmrghw v9,v6,v8
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), simde_mm_load_si128((simde__m128i*)ctx.v6.u32)));
	// vmrglw v8,v6,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), simde_mm_load_si128((simde__m128i*)ctx.v6.u32)));
	// vmrghw v6,v7,v9
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), simde_mm_load_si128((simde__m128i*)ctx.v7.u32)));
	// vmrghw v5,v10,v8
	simde_mm_store_si128((simde__m128i*)ctx.v5.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// vmrglw v9,v7,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), simde_mm_load_si128((simde__m128i*)ctx.v7.u32)));
	// vmrglw v10,v10,v8
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// vmsum4fp128 v8,v0,v6
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v8.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v6.f32), 0xFF));
	// vmsum4fp128 v7,v0,v5
	simde_mm_store_ps(ctx.v7.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v5.f32), 0xFF));
	// vmsum4fp128 v4,v0,v9
	simde_mm_store_ps(ctx.v4.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v9.f32), 0xFF));
	// vmsum4fp128 v0,v0,v10
	simde_mm_store_ps(ctx.v0.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v10.f32), 0xFF));
	// vmsum4fp128 v3,v13,v10
	simde_mm_store_ps(ctx.v3.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v10.f32), 0xFF));
	// vmsum4fp128 v31,v12,v10
	simde_mm_store_ps(ctx.v31.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v10.f32), 0xFF));
	// vmsum4fp128 v2,v13,v9
	simde_mm_store_ps(ctx.v2.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v9.f32), 0xFF));
	// vmsum4fp128 v30,v12,v9
	simde_mm_store_ps(ctx.v30.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v9.f32), 0xFF));
	// vmsum4fp128 v1,v13,v5
	simde_mm_store_ps(ctx.v1.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v5.f32), 0xFF));
	// vmsum4fp128 v29,v12,v5
	simde_mm_store_ps(ctx.v29.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v5.f32), 0xFF));
	// vmsum4fp128 v10,v11,v10
	simde_mm_store_ps(ctx.v10.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v10.f32), 0xFF));
	// vmsum4fp128 v9,v11,v9
	simde_mm_store_ps(ctx.v9.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v9.f32), 0xFF));
	// vmsum4fp128 v12,v12,v6
	simde_mm_store_ps(ctx.v12.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v6.f32), 0xFF));
	// vmsum4fp128 v5,v11,v5
	simde_mm_store_ps(ctx.v5.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v5.f32), 0xFF));
	// vmsum4fp128 v13,v13,v6
	simde_mm_store_ps(ctx.v13.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v6.f32), 0xFF));
	// vmsum4fp128 v11,v11,v6
	simde_mm_store_ps(ctx.v11.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v6.f32), 0xFF));
	// vmrghw v8,v8,v7
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v7.u32), simde_mm_load_si128((simde__m128i*)ctx.v8.u32)));
	// vmrghw v0,v4,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v4.u32)));
	// vmrghw v7,v2,v3
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v3.u32), simde_mm_load_si128((simde__m128i*)ctx.v2.u32)));
	// vmrghw v0,v8,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v8.u32)));
	// vmrghw v8,v30,v31
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v31.u32), simde_mm_load_si128((simde__m128i*)ctx.v30.u32)));
	// vmrghw v10,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), simde_mm_load_si128((simde__m128i*)ctx.v9.u32)));
	// vmrghw v12,v12,v29
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v29.u32), simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// vmrghw v13,v13,v1
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v1.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// stvx128 v0,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw v11,v11,v5
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v5.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// vmrghw v0,v12,v8
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// vmrghw v13,v13,v7
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v7.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// vmrghw v12,v11,v10
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// stvx128 v0,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r0,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v12,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_828B0508:
	// ld r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x828b0508
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_828B0508;
loc_828B051C:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// addi r29,r29,48
	ctx.r29.s64 = ctx.r29.s64 + 48;
	// addi r31,r31,64
	ctx.r31.s64 = ctx.r31.s64 + 64;
	// cmpw cr6,r28,r15
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r15.s32, ctx.xer);
	// blt cr6,0x828b03c0
	if (ctx.cr6.lt) goto loc_828B03C0;
loc_828B0534:
	// lwz r20,68(r20)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r20.u32 + 68);
loc_828B0538:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// bne cr6,0x828afbd8
	if (!ctx.cr6.eq) goto loc_828AFBD8;
loc_828B0540:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r15,r15,1
	ctx.r15.s64 = ctx.r15.s64 + 1;
	// lwz r10,16(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// addi r14,r14,32
	ctx.r14.s64 = ctx.r14.s64 + 32;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// addi r17,r17,64
	ctx.r17.s64 = ctx.r17.s64 + 64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// cmpw cr6,r15,r10
	ctx.cr6.compare<int32_t>(ctx.r15.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x828af854
	if (ctx.cr6.lt) goto loc_828AF854;
loc_828B0564:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bge 0x828af834
	if (!ctx.cr0.lt) goto loc_828AF834;
	// lwz r11,236(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 236);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828b05b8
	if (ctx.cr0.eq) goto loc_828B05B8;
	// lwz r31,572(r18)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r18.u32 + 572);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x828b05b8
	if (ctx.cr6.eq) goto loc_828B05B8;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// addi r30,r31,108
	ctx.r30.s64 = ctx.r31.s64 + 108;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B05A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B05B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828B05B8:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825c3bc0
	ctx.lr = 0x828B05C0;
	sub_825C3BC0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8239d768
	ctx.lr = 0x828B05C8;
	sub_8239D768(ctx, base);
	// addi r1,r1,1216
	ctx.r1.s64 = ctx.r1.s64 + 1216;
	// addi r12,r1,-208
	ctx.r12.s64 = ctx.r1.s64 + -208;
	// bl 0x82ec4e4c
	ctx.lr = 0x828B05D4;
	__restvmx_124(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82a6178c
	ctx.lr = 0x828B05DC;
	__restfpr_26(ctx, base);
	// b 0x82a4ea20
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828B05E0"))) PPC_WEAK_FUNC(sub_828B05E0);
PPC_FUNC_IMPL(__imp__sub_828B05E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x828B05E8;
	__savegprlr_29(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// lwz r11,400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// lwz r10,328(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r11,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r11.u32);
	// beq cr6,0x828b07e8
	if (ctx.cr6.eq) goto loc_828B07E8;
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,44
	ctx.r10.s64 = 44;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stwx r31,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r31.u32);
	// beq cr6,0x828b064c
	if (ctx.cr6.eq) goto loc_828B064C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B0648;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_828B064C:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lfs f31,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f31.f64 = double(temp.f32);
	// lfs f0,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// fmr f13,f31
	ctx.f13.f64 = ctx.f31.f64;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// beq cr6,0x828b0684
	if (ctx.cr6.eq) goto loc_828B0684;
	// lfs f13,1128(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1128);
	ctx.f13.f64 = double(temp.f32);
loc_828B0684:
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// fneg f12,f30
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = ctx.f30.u64 ^ 0x8000000000000000;
	// lwz r10,400(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// stfs f31,24(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lwz r3,328(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// fsel f0,f12,f0,f30
	ctx.f0.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f30.f64;
	// fmuls f30,f0,f13
	ctx.f30.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,208(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B06C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x828b1750
	ctx.lr = 0x828B06CC;
	sub_828B1750(ctx, base);
	// lwz r3,328(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// addi r7,r31,240
	ctx.r7.s64 = ctx.r31.s64 + 240;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r31,276
	ctx.r4.s64 = ctx.r31.s64 + 276;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,240(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B06F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,248(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f12,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x828b1098
	ctx.lr = 0x828B0720;
	sub_828B1098(ctx, base);
	// lwa r11,108(r1)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 108));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfs f0,568(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	ctx.f0.f64 = double(temp.f32);
	// lwa r10,112(r1)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 112));
	// fsubs f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// lwa r9,104(r1)
	ctx.r9.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 104));
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f8,80(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lfs f10,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f10.f64 = double(temp.f32);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// lfs f9,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f9.f64 = double(temp.f32);
	// fcfid f8,f8
	ctx.f8.f64 = double(ctx.f8.s64);
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmuls f13,f10,f0
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f13,124(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fmuls f13,f9,f0
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// frsp f13,f12
	ctx.f13.f64 = double(float(ctx.f12.f64));
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// frsp f8,f8
	ctx.f8.f64 = double(float(ctx.f8.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f12,f8,f0
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// fctiwz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// stw r10,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,308(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 308);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B07E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x828b07f4
	goto loc_828B07F4;
loc_828B07E8:
	// addi r4,r31,240
	ctx.r4.s64 = ctx.r31.s64 + 240;
	// addi r3,r31,276
	ctx.r3.s64 = ctx.r31.s64 + 276;
	// bl 0x828d1d10
	ctx.lr = 0x828B07F4;
	sub_828D1D10(ctx, base);
loc_828B07F4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828B0808"))) PPC_WEAK_FUNC(sub_828B0808);
PPC_FUNC_IMPL(__imp__sub_828B0808) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x828B0810;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r31,r29,480
	ctx.r31.s64 = ctx.r29.s64 + 480;
	// lwz r11,500(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 500);
	// stw r28,496(r29)
	PPC_STORE_U32(ctx.r29.u32 + 496, ctx.r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828b0844
	if (ctx.cr6.eq) goto loc_828B0844;
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c38
	ctx.lr = 0x828B0844;
	sub_82332C38(ctx, base);
loc_828B0844:
	// lwz r3,328(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 328);
	// bl 0x824d5a20
	ctx.lr = 0x828B084C;
	sub_824D5A20(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x828b08fc
	if (ctx.cr0.eq) goto loc_828B08FC;
	// lwz r11,156(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 156);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x828b08fc
	if (!ctx.cr6.gt) goto loc_828B08FC;
	// lwz r30,244(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 244);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x828b0888
	if (ctx.cr6.eq) goto loc_828B0888;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c38
	ctx.lr = 0x828B0888;
	sub_82332C38(ctx, base);
loc_828B0888:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332d50
	ctx.lr = 0x828B089C;
	sub_82332D50(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,255
	ctx.r4.s64 = 255;
	// lwz r3,492(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 492);
	// bl 0x82a4efb0
	ctx.lr = 0x828B08AC;
	sub_82A4EFB0(ctx, base);
	// lwz r5,156(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 156);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x828b08fc
	if (!ctx.cr6.gt) goto loc_828B08FC;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
loc_828B08C0:
	// lwz r11,152(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 152);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r4,r6,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// bl 0x828b0c68
	ctx.lr = 0x828B08D0;
	sub_828B0C68(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x828b08ec
	if (ctx.cr6.eq) goto loc_828B08EC;
	// lwz r11,492(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 492);
	// lbzx r10,r3,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// bne cr6,0x828b08ec
	if (!ctx.cr6.eq) goto loc_828B08EC;
	// stbx r7,r3,r11
	PPC_STORE_U8(ctx.r3.u32 + ctx.r11.u32, ctx.r7.u8);
loc_828B08EC:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r6,r6,8
	ctx.r6.s64 = ctx.r6.s64 + 8;
	// cmpw cr6,r7,r5
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x828b08c0
	if (ctx.cr6.lt) goto loc_828B08C0;
loc_828B08FC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828B0908"))) PPC_WEAK_FUNC(sub_828B0908);
PPC_FUNC_IMPL(__imp__sub_828B0908) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// clrlwi. r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828b0a80
	if (ctx.cr0.eq) goto loc_828B0A80;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x828b0a94
	if (!ctx.cr6.eq) goto loc_828B0A94;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828b0a80
	if (ctx.cr6.eq) goto loc_828B0A80;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B0954;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828b0a80
	if (ctx.cr0.eq) goto loc_828B0A80;
	// addi r4,r3,496
	ctx.r4.s64 = ctx.r3.s64 + 496;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x82a4ea80
	ctx.lr = 0x828B096C;
	sub_82A4EA80(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826c8a28
	ctx.lr = 0x828B0978;
	sub_826C8A28(ctx, base);
	// li r9,32
	ctx.r9.s64 = 32;
	// li r10,48
	ctx.r10.s64 = 48;
	// lvx128 v0,r0,r3
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,16
	ctx.r11.s64 = 16;
	// addi r8,r31,336
	ctx.r8.s64 = ctx.r31.s64 + 336;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lvx128 v13,r3,r9
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// vmrghw v11,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// lvx128 v12,r3,r10
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v10,r3,r11
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrglw v0,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// vmrghw v13,v10,v12
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// lvx128 v9,r8,r11
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32 + ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrglw v12,v10,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// lvx128 v7,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v10,r8,r9
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lvx128 v8,r8,r10
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// vmrghw v6,v11,v13
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// vmrghw v5,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v5.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// vmrglw v13,v11,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// li r11,8
	ctx.r11.s64 = 8;
	// vmrglw v0,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// vmsum4fp128 v3,v9,v6
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v3.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v6.f32), 0xFF));
	// vmsum4fp128 v2,v9,v5
	simde_mm_store_ps(ctx.v2.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v5.f32), 0xFF));
	// vmsum4fp128 v1,v9,v13
	simde_mm_store_ps(ctx.v1.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v13.f32), 0xFF));
	// vmsum4fp128 v11,v7,v5
	simde_mm_store_ps(ctx.v11.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v5.f32), 0xFF));
	// vmsum4fp128 v4,v7,v13
	simde_mm_store_ps(ctx.v4.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v13.f32), 0xFF));
	// vmsum4fp128 v12,v7,v6
	simde_mm_store_ps(ctx.v12.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v6.f32), 0xFF));
	// vmsum4fp128 v9,v9,v0
	simde_mm_store_ps(ctx.v9.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v0.f32), 0xFF));
	// vmsum4fp128 v7,v7,v0
	simde_mm_store_ps(ctx.v7.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v0.f32), 0xFF));
	// vmsum4fp128 v31,v10,v6
	simde_mm_store_ps(ctx.v31.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v6.f32), 0xFF));
	// vmsum4fp128 v30,v10,v5
	simde_mm_store_ps(ctx.v30.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v5.f32), 0xFF));
	// vmsum4fp128 v29,v10,v13
	simde_mm_store_ps(ctx.v29.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v13.f32), 0xFF));
	// vmsum4fp128 v10,v10,v0
	simde_mm_store_ps(ctx.v10.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v0.f32), 0xFF));
	// vmsum4fp128 v13,v8,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v13.f32), 0xFF));
	// vmsum4fp128 v0,v8,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v0.f32), 0xFF));
	// vmsum4fp128 v6,v8,v6
	simde_mm_store_ps(ctx.v6.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v6.f32), 0xFF));
	// vmsum4fp128 v5,v8,v5
	simde_mm_store_ps(ctx.v5.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v5.f32), 0xFF));
	// vmrghw v8,v3,v2
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v2.u32), simde_mm_load_si128((simde__m128i*)ctx.v3.u32)));
	// vmrghw v12,v12,v11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// vmrghw v9,v1,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), simde_mm_load_si128((simde__m128i*)ctx.v1.u32)));
	// vmrghw v11,v4,v7
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v7.u32), simde_mm_load_si128((simde__m128i*)ctx.v4.u32)));
	// vmrghw v9,v8,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), simde_mm_load_si128((simde__m128i*)ctx.v8.u32)));
	// vmrghw v12,v12,v11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// vmrghw v11,v31,v30
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v30.u32), simde_mm_load_si128((simde__m128i*)ctx.v31.u32)));
	// vmrghw v0,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// vmrghw v10,v29,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), simde_mm_load_si128((simde__m128i*)ctx.v29.u32)));
	// vmrghw v8,v6,v5
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v5.u32), simde_mm_load_si128((simde__m128i*)ctx.v6.u32)));
	// stvx128 v9,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw v13,v11,v10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// stvx128 v12,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw v0,v8,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v8.u32)));
	// stvx128 v13,r0,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_828B0A68:
	// ld r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// std r11,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r11.u64);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// bdnz 0x828b0a68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_828B0A68;
	// b 0x828b0c3c
	goto loc_828B0C3C;
loc_828B0A80:
	// addi r4,r31,336
	ctx.r4.s64 = ctx.r31.s64 + 336;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a4ea80
	ctx.lr = 0x828B0A90;
	sub_82A4EA80(ctx, base);
	// b 0x828b0c3c
	goto loc_828B0C3C;
loc_828B0A94:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x828b0ac8
	if (!ctx.cr6.eq) goto loc_828B0AC8;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// addi r11,r11,-15728
	ctx.r11.s64 = ctx.r11.s64 + -15728;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_828B0AB0:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x828b0ab0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_828B0AB0;
	// b 0x828b0c3c
	goto loc_828B0C3C;
loc_828B0AC8:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x828b0b4c
	if (!ctx.cr6.eq) goto loc_828B0B4C;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x828b0b04
	if (!ctx.cr6.eq) goto loc_828B0B04;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// addi r11,r11,-15728
	ctx.r11.s64 = ctx.r11.s64 + -15728;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_828B0AEC:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x828b0aec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_828B0AEC;
	// b 0x828b0c3c
	goto loc_828B0C3C;
loc_828B0B04:
	// lwz r10,240(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// mulli r11,r5,48
	ctx.r11.s64 = ctx.r5.s64 * 48;
	// lwz r9,312(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// bl 0x826c8a28
	ctx.lr = 0x828B0B28;
	sub_826C8A28(ctx, base);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// li r11,8
	ctx.r11.s64 = 8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_828B0B34:
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x828b0b34
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_828B0B34;
	// b 0x828b0c3c
	goto loc_828B0C3C;
loc_828B0B4C:
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x828b0b8c
	if (!ctx.cr6.eq) goto loc_828B0B8C;
	// lwz r10,312(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// rlwinm r11,r5,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x826c8a28
	ctx.lr = 0x828B0B68;
	sub_826C8A28(ctx, base);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// li r11,8
	ctx.r11.s64 = 8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_828B0B74:
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x828b0b74
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_828B0B74;
	// b 0x828b0c3c
	goto loc_828B0C3C;
loc_828B0B8C:
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x828b0c14
	if (!ctx.cr6.eq) goto loc_828B0C14;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x828b0be8
	if (ctx.cr6.eq) goto loc_828B0BE8;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828b0c68
	ctx.lr = 0x828B0BA8;
	sub_828B0C68(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x828b0c3c
	if (ctx.cr6.eq) goto loc_828B0C3C;
	// lwz r10,312(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// rlwinm r11,r3,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x826c8a28
	ctx.lr = 0x828B0BC4;
	sub_826C8A28(ctx, base);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// li r11,8
	ctx.r11.s64 = 8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_828B0BD0:
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x828b0bd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_828B0BD0;
	// b 0x828b0c3c
	goto loc_828B0C3C;
loc_828B0BE8:
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// addi r11,r11,-15728
	ctx.r11.s64 = ctx.r11.s64 + -15728;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_828B0BFC:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x828b0bfc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_828B0BFC;
	// b 0x828b0c3c
	goto loc_828B0C3C;
loc_828B0C14:
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// addi r11,r11,-15728
	ctx.r11.s64 = ctx.r11.s64 + -15728;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_828B0C28:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x828b0c28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_828B0C28;
loc_828B0C3C:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,16668(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16668);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8281dd38
	ctx.lr = 0x828B0C4C;
	sub_8281DD38(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828B0C68"))) PPC_WEAK_FUNC(sub_828B0C68);
PPC_FUNC_IMPL(__imp__sub_828B0C68) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r9,244(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 244);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lwz r10,240(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 240);
loc_828B0C8C:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x828b0cac
	if (ctx.cr6.eq) goto loc_828B0CAC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x828b0c8c
	if (ctx.cr6.lt) goto loc_828B0C8C;
	// blr 
	return;
loc_828B0CAC:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828B0CB8"))) PPC_WEAK_FUNC(sub_828B0CB8);
PPC_FUNC_IMPL(__imp__sub_828B0CB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x828B0CC0;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,528(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// lfs f31,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828b0d24
	if (ctx.cr6.eq) goto loc_828B0D24;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x828b0d24
	if (ctx.cr6.eq) goto loc_828B0D24;
	// lwz r3,524(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// stfs f31,540(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 540, temp.u32);
	// stw r29,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r29.u32);
	// stw r29,532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 532, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r29,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r29.u32);
	// beq cr6,0x828b0d24
	if (ctx.cr6.eq) goto loc_828B0D24;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B0D20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r29.u32);
loc_828B0D24:
	// lwz r11,528(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x828b0ec4
	if (!ctx.cr6.eq) goto loc_828B0EC4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x828b0ec4
	if (ctx.cr6.eq) goto loc_828B0EC4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f31,540(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 540, temp.u32);
	// stw r30,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r30.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 532, ctx.r29.u32);
	// stw r11,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r11.u32);
	// bl 0x8292c470
	ctx.lr = 0x828B0D54;
	sub_8292C470(ctx, base);
	// stw r3,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r3.u32);
	// li r3,144
	ctx.r3.s64 = 144;
	// bl 0x82765d00
	ctx.lr = 0x828B0D60;
	sub_82765D00(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x828b0dc8
	if (ctx.cr0.eq) goto loc_828B0DC8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829f0500
	ctx.lr = 0x828B0D70;
	sub_829F0500(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-3488
	ctx.r11.s64 = ctx.r11.s64 + -3488;
	// stb r29,20(r30)
	PPC_STORE_U8(ctx.r30.u32 + 20, ctx.r29.u8);
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x829eeef8
	ctx.lr = 0x828B0D90;
	sub_829EEEF8(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stw r29,116(r30)
	PPC_STORE_U32(ctx.r30.u32 + 116, ctx.r29.u32);
	// addi r11,r11,-3216
	ctx.r11.s64 = ctx.r11.s64 + -3216;
	// stw r29,120(r30)
	PPC_STORE_U32(ctx.r30.u32 + 120, ctx.r29.u32);
	// addi r10,r10,-3216
	ctx.r10.s64 = ctx.r10.s64 + -3216;
	// stw r29,124(r30)
	PPC_STORE_U32(ctx.r30.u32 + 124, ctx.r29.u32);
	// stw r11,112(r30)
	PPC_STORE_U32(ctx.r30.u32 + 112, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r10.u32);
	// stw r29,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r29.u32);
	// stw r29,136(r30)
	PPC_STORE_U32(ctx.r30.u32 + 136, ctx.r29.u32);
	// stw r29,140(r30)
	PPC_STORE_U32(ctx.r30.u32 + 140, ctx.r29.u32);
	// b 0x828b0dcc
	goto loc_828B0DCC;
loc_828B0DC8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_828B0DCC:
	// stw r3,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r3.u32);
	// lwz r4,520(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// bl 0x829ead18
	ctx.lr = 0x828B0DD8;
	sub_829EAD18(ctx, base);
	// lwz r11,524(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// addi r3,r31,544
	ctx.r3.s64 = ctx.r31.s64 + 544;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r29,105(r11)
	PPC_STORE_U8(ctx.r11.u32 + 105, ctx.r29.u8);
	// lwz r11,524(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r30,r11,20
	ctx.r30.s64 = ctx.r11.s64 + 20;
	// lwz r28,36(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82332d50
	ctx.lr = 0x828B0E04;
	sub_82332D50(ctx, base);
	// lwz r11,556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 556);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r28,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82a455d0
	ctx.lr = 0x828B0E1C;
	sub_82A455D0(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x828b0ec4
	if (!ctx.cr6.gt) goto loc_828B0EC4;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_828B0E34:
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x828b0e88
	if (!ctx.cr6.gt) goto loc_828B0E88;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
loc_828B0E58:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x828b0e7c
	if (ctx.cr6.eq) goto loc_828B0E7C;
	// lwz r7,244(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x828b0e58
	if (ctx.cr6.lt) goto loc_828B0E58;
	// b 0x828b0e88
	goto loc_828B0E88;
loc_828B0E7C:
	// lwz r11,556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 556);
	// li r8,1
	ctx.r8.s64 = 1;
	// stwx r9,r11,r27
	PPC_STORE_U32(ctx.r11.u32 + ctx.r27.u32, ctx.r9.u32);
loc_828B0E88:
	// clrlwi. r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x828b0eac
	if (!ctx.cr0.eq) goto loc_828B0EAC;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x829f07e0
	ctx.lr = 0x828B0E9C;
	sub_829F07E0(ctx, base);
	// lwz r10,556(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 556);
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// stwx r11,r10,r27
	PPC_STORE_U32(ctx.r10.u32 + ctx.r27.u32, ctx.r11.u32);
loc_828B0EAC:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r28,r28,92
	ctx.r28.s64 = ctx.r28.s64 + 92;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x828b0e34
	if (ctx.cr6.lt) goto loc_828B0E34;
loc_828B0EC4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828B0ED0"))) PPC_WEAK_FUNC(sub_828B0ED0);
PPC_FUNC_IMPL(__imp__sub_828B0ED0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x828B0ED8;
	__savegprlr_26(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,528(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 528);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828b108c
	if (ctx.cr6.eq) goto loc_828B108C;
	// lwz r11,524(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 524);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828b108c
	if (ctx.cr6.eq) goto loc_828B108C;
	// lwz r29,16(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x828b108c
	if (ctx.cr6.eq) goto loc_828B108C;
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bne cr6,0x828b0f1c
	if (!ctx.cr6.eq) goto loc_828B0F1C;
	// lbz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x828b108c
	if (ctx.cr0.eq) goto loc_828B108C;
loc_828B0F1C:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r30,128
	ctx.r30.s64 = 128;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
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
	// bl 0x82332c38
	ctx.lr = 0x828B0F64;
	sub_82332C38(ctx, base);
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82332c38
	ctx.lr = 0x828B0F78;
	sub_82332C38(ctx, base);
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
	// addi r30,r29,40
	ctx.r30.s64 = ctx.r29.s64 + 40;
	// lwz r5,13452(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13452);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x828b0f98
	if (!ctx.cr6.eq) goto loc_828B0F98;
	// bl 0x829f17b8
	ctx.lr = 0x828B0F90;
	sub_829F17B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r5,13452(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13452, ctx.r5.u32);
loc_828B0F98:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829f1318
	ctx.lr = 0x828B0FA4;
	sub_829F1318(ctx, base);
	// lwz r5,13452(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13452);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x828b0fbc
	if (!ctx.cr6.eq) goto loc_828B0FBC;
	// bl 0x829f17b8
	ctx.lr = 0x828B0FB4;
	sub_829F17B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r5,13452(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13452, ctx.r5.u32);
loc_828B0FBC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x829f13d8
	ctx.lr = 0x828B0FC8;
	sub_829F13D8(ctx, base);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r27,84(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x828b1054
	goto loc_828B1054;
loc_828B0FD4:
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x828b100c
	if (ctx.cr6.eq) goto loc_828B100C;
	// lwz r4,13452(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13452);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x828b0ff8
	if (!ctx.cr6.eq) goto loc_828B0FF8;
	// bl 0x829f17b8
	ctx.lr = 0x828B0FF0;
	sub_829F17B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r4,13452(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13452, ctx.r4.u32);
loc_828B0FF8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828b21a8
	ctx.lr = 0x828B1000;
	sub_828B21A8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bne 0x828b1010
	if (!ctx.cr0.eq) goto loc_828B1010;
loc_828B100C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_828B1010:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828b1050
	if (ctx.cr6.eq) goto loc_828B1050;
	// lwz r3,104(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// bl 0x828b20a8
	ctx.lr = 0x828B1020;
	sub_828B20A8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x828b1050
	if (ctx.cr0.eq) goto loc_828B1050;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x828B103C;
	sub_82410060(ctx, base);
	// lfs f0,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x824fc978
	ctx.lr = 0x828B1050;
	sub_824FC978(ctx, base);
loc_828B1050:
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_828B1054:
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x828b0fd4
	if (!ctx.cr6.eq) goto loc_828B0FD4;
	// lwz r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x828b107c
	if (!ctx.cr6.gt) goto loc_828B107C;
	// li r7,-1
	ctx.r7.s64 = -1;
	// lwz r5,140(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// bl 0x82965678
	ctx.lr = 0x828B107C;
	sub_82965678(ctx, base);
loc_828B107C:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8239d768
	ctx.lr = 0x828B1084;
	sub_8239D768(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8239d768
	ctx.lr = 0x828B108C;
	sub_8239D768(ctx, base);
loc_828B108C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828B1098"))) PPC_WEAK_FUNC(sub_828B1098);
PPC_FUNC_IMPL(__imp__sub_828B1098) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f0
	ctx.lr = 0x828B10A0;
	__savegprlr_22(ctx, base);
	// stfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f30.u64);
	// stfd f31,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r10,528(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 528);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x828b14c0
	if (ctx.cr6.eq) goto loc_828B14C0;
	// lwz r11,524(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 524);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828b14c0
	if (ctx.cr6.eq) goto loc_828B14C0;
	// lwz r31,16(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x828b14c0
	if (ctx.cr6.eq) goto loc_828B14C0;
	// lwz r9,108(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// bne cr6,0x828b10ec
	if (!ctx.cr6.eq) goto loc_828B10EC;
	// lbz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x828b14c0
	if (ctx.cr0.eq) goto loc_828B14C0;
loc_828B10EC:
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r22,r10,8
	ctx.r22.s64 = ctx.r10.s64 + 8;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B1104;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x828b1d88
	ctx.lr = 0x828B110C;
	sub_828B1D88(ctx, base);
	// lwz r11,532(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 532);
	// lwz r3,524(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 524);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828b1138
	if (ctx.cr6.eq) goto loc_828B1138;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lfs f1,540(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 540);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,24000(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24000);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x829eb1a8
	ctx.lr = 0x828B1130;
	sub_829EB1A8(ctx, base);
	// stw r29,532(r28)
	PPC_STORE_U32(ctx.r28.u32 + 532, ctx.r29.u32);
	// b 0x828b1150
	goto loc_828B1150;
loc_828B1138:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lfs f2,24000(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24000);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,984(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 984);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x829eb1a8
	ctx.lr = 0x828B1150;
	sub_829EB1A8(ctx, base);
loc_828B1150:
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bne cr6,0x828b1164
	if (!ctx.cr6.eq) goto loc_828B1164;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x828b14d0
	ctx.lr = 0x828B1164;
	sub_828B14D0(ctx, base);
loc_828B1164:
	// lbz r23,16(r31)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// cmplwi r23,0
	ctx.cr0.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq 0x828b1174
	if (ctx.cr0.eq) goto loc_828B1174;
	// stb r29,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r29.u8);
loc_828B1174:
	// lwz r3,524(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 524);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B1188;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r27,-31949
	ctx.r27.s64 = -2093809664;
	// addi r31,r31,40
	ctx.r31.s64 = ctx.r31.s64 + 40;
	// lwz r5,13452(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13452);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x828b11a8
	if (!ctx.cr6.eq) goto loc_828B11A8;
	// bl 0x829f17b8
	ctx.lr = 0x828B11A0;
	sub_829F17B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r5,13452(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13452, ctx.r5.u32);
loc_828B11A8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x829f1318
	ctx.lr = 0x828B11B4;
	sub_829F1318(ctx, base);
	// lwz r5,13452(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13452);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x828b11cc
	if (!ctx.cr6.eq) goto loc_828B11CC;
	// bl 0x829f17b8
	ctx.lr = 0x828B11C4;
	sub_829F17B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r5,13452(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13452, ctx.r5.u32);
loc_828B11CC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829f13d8
	ctx.lr = 0x828B11D8;
	sub_829F13D8(ctx, base);
	// lwz r26,84(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r24,88(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r26,r24
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r24.u32, ctx.xer);
	// beq cr6,0x828b1358
	if (ctx.cr6.eq) goto loc_828B1358;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r25,r11,28064
	ctx.r25.s64 = ctx.r11.s64 + 28064;
loc_828B11F0:
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x828b1224
	if (ctx.cr6.eq) goto loc_828B1224;
	// lwz r4,13452(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13452);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x828b1214
	if (!ctx.cr6.eq) goto loc_828B1214;
	// bl 0x829f17b8
	ctx.lr = 0x828B120C;
	sub_829F17B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r4,13452(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13452, ctx.r4.u32);
loc_828B1214:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828b21a8
	ctx.lr = 0x828B121C;
	sub_828B21A8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x828b1228
	if (!ctx.cr0.eq) goto loc_828B1228;
loc_828B1224:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_828B1228:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x828b134c
	if (ctx.cr6.eq) goto loc_828B134C;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x828b20a8
	ctx.lr = 0x828B1238;
	sub_828B20A8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x828b12ac
	if (!ctx.cr0.eq) goto loc_828B12AC;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82765d00
	ctx.lr = 0x828B1248;
	sub_82765D00(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828b1270
	if (ctx.cr0.eq) goto loc_828B1270;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r25,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r25.u32);
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r29.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// stw r29,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r29.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// b 0x828b1274
	goto loc_828B1274;
loc_828B1270:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_828B1274:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B128C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B12A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x828b134c
	if (ctx.cr6.eq) goto loc_828B134C;
loc_828B12AC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B12C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x828b12d0
	if (!ctx.cr0.eq) goto loc_828B12D0;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x828b1320
	if (ctx.cr6.eq) goto loc_828B1320;
loc_828B12D0:
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r4,76(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r10,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
	// bl 0x82927d40
	ctx.lr = 0x828B12E8;
	sub_82927D40(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82816528
	ctx.lr = 0x828B12F0;
	sub_82816528(ctx, base);
	// stw r3,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r3.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828b1308
	if (ctx.cr6.eq) goto loc_828B1308;
	// bl 0x82765d70
	ctx.lr = 0x828B1304;
	sub_82765D70(ctx, base);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
loc_828B1308:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B1320;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828B1320:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828b134c
	if (ctx.cr6.eq) goto loc_828B134C;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x829ed7f8
	ctx.lr = 0x828B133C;
	sub_829ED7F8(ctx, base);
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B134C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828B134C:
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmplw cr6,r26,r24
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x828b11f0
	if (!ctx.cr6.eq) goto loc_828B11F0;
loc_828B1358:
	// lwz r11,560(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 560);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x828b1498
	if (!ctx.cr6.gt) goto loc_828B1498;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f30,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
loc_828B1378:
	// lwz r11,556(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 556);
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// lwzx r31,r29,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x828b1484
	if (ctx.cr6.eq) goto loc_828B1484;
	// lwz r11,524(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 524);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828b13b4
	if (ctx.cr6.eq) goto loc_828B13B4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,20
	ctx.r4.s64 = ctx.r11.s64 + 20;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x829efaa8
	ctx.lr = 0x828B13B0;
	sub_829EFAA8(ctx, base);
	// b 0x828b13d0
	goto loc_828B13D0;
loc_828B13B4:
	// stfs f31,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f30,176(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f31,188(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
loc_828B13D0:
	// lfs f0,164(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lfs f13,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f13.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lfs f0,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r10,r31,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// lfs f13,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f12,188(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	ctx.f12.f64 = double(temp.f32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lfs f11,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f11.f64 = double(temp.f32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r11,288(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 288);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f11,124(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r31,4(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lfs f10,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f10.f64 = double(temp.f32);
	// lwz r27,8(r9)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// stw r9,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r9.u32);
	// stw r3,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r3.u32);
	// stw r31,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r31.u32);
	// stw r27,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r27.u32);
	// stfs f30,156(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r9,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// stw r8,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r8.u32);
	// stw r7,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r7.u32);
	// ld r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// ld r7,8(r5)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8);
	// ld r6,16(r5)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r5.u32 + 16);
	// ld r9,24(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 24);
	// std r9,24(r4)
	PPC_STORE_U64(ctx.r4.u32 + 24, ctx.r9.u64);
	// std r6,16(r4)
	PPC_STORE_U64(ctx.r4.u32 + 16, ctx.r6.u64);
	// std r7,8(r4)
	PPC_STORE_U64(ctx.r4.u32 + 8, ctx.r7.u64);
	// stdx r8,r10,r11
	PPC_STORE_U64(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u64);
loc_828B1484:
	// lwz r11,560(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 560);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828b1378
	if (ctx.cr6.lt) goto loc_828B1378;
loc_828B1498:
	// lwz r3,524(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 524);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B14AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B14C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828B14C0:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x82a4ea40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828B14D0"))) PPC_WEAK_FUNC(sub_828B14D0);
PPC_FUNC_IMPL(__imp__sub_828B14D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x828B14D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,524(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828b15a4
	if (ctx.cr6.eq) goto loc_828B15A4;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x828b1530
	if (ctx.cr6.eq) goto loc_828B1530;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stb r28,104(r11)
	PPC_STORE_U8(ctx.r11.u32 + 104, ctx.r28.u8);
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r8,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r8.u32);
	// lfd f0,16416(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16416);
	// lfs f13,31308(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 31308);
	ctx.f13.f64 = double(temp.f32);
	// stfd f0,72(r11)
	PPC_STORE_U64(ctx.r11.u32 + 72, ctx.f0.u64);
	// stfd f0,80(r11)
	PPC_STORE_U64(ctx.r11.u32 + 80, ctx.f0.u64);
	// stfd f0,88(r11)
	PPC_STORE_U64(ctx.r11.u32 + 88, ctx.f0.u64);
	// stfs f13,96(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 96, temp.u32);
	// stfs f13,100(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 100, temp.u32);
loc_828B1530:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828b15a4
	if (ctx.cr6.eq) goto loc_828B15A4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B154C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x828b15a4
	if (ctx.cr0.eq) goto loc_828B15A4;
	// lwz r11,524(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,56
	ctx.r4.s64 = ctx.r11.s64 + 56;
	// bl 0x8287eba8
	ctx.lr = 0x828B1564;
	sub_8287EBA8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x828b2118
	ctx.lr = 0x828B156C;
	sub_828B2118(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8233a258
	ctx.lr = 0x828B1578;
	sub_8233A258(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,836(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 836);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B1594;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x828B159C;
	sub_82333960(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ef5f8
	ctx.lr = 0x828B15A4;
	sub_829EF5F8(ctx, base);
loc_828B15A4:
	// stw r28,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r28.u32);
	// stw r28,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r28.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828B15B8"))) PPC_WEAK_FUNC(sub_828B15B8);
PPC_FUNC_IMPL(__imp__sub_828B15B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x828B15C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x8286dac0
	ctx.lr = 0x828B15DC;
	sub_8286DAC0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8286dac0
	ctx.lr = 0x828B15E8;
	sub_8286DAC0(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r28,r11,7896
	ctx.r28.s64 = ctx.r11.s64 + 7896;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828b1604
	if (ctx.cr6.eq) goto loc_828B1604;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// b 0x828b1608
	goto loc_828B1608;
loc_828B1604:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_828B1608:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x828b1fe0
	ctx.lr = 0x828B1610;
	sub_828B1FE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8287e760
	ctx.lr = 0x828B161C;
	sub_8287E760(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x829ef5f8
	ctx.lr = 0x828B1624;
	sub_829EF5F8(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828b1638
	if (ctx.cr6.eq) goto loc_828B1638;
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// b 0x828b163c
	goto loc_828B163C;
loc_828B1638:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_828B163C:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x828b1fe0
	ctx.lr = 0x828B1644;
	sub_828B1FE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8287e760
	ctx.lr = 0x828B1650;
	sub_8287E760(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x829ef5f8
	ctx.lr = 0x828B1658;
	sub_829EF5F8(ctx, base);
	// lwz r11,524(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828b1734
	if (ctx.cr6.eq) goto loc_828B1734;
	// lwz r11,528(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// addi r29,r11,8
	ctx.r29.s64 = ctx.r11.s64 + 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B1680;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,524(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x829ef330
	ctx.lr = 0x828B1694;
	sub_829EF330(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x828b16ac
	if (!ctx.cr0.eq) goto loc_828B16AC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828b14d0
	ctx.lr = 0x828B16A8;
	sub_828B14D0(ctx, base);
	// b 0x828b1720
	goto loc_828B1720;
loc_828B16AC:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828b1720
	if (ctx.cr6.eq) goto loc_828B1720;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B16CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x828b1720
	if (ctx.cr0.eq) goto loc_828B1720;
	// lwz r11,524(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,56
	ctx.r4.s64 = ctx.r11.s64 + 56;
	// bl 0x8287eba8
	ctx.lr = 0x828B16E4;
	sub_8287EBA8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x828b2118
	ctx.lr = 0x828B16EC;
	sub_828B2118(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8233a258
	ctx.lr = 0x828B16F8;
	sub_8233A258(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,840(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 840);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B1710;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82333960
	ctx.lr = 0x828B1718;
	sub_82333960(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ef5f8
	ctx.lr = 0x828B1720;
	sub_829EF5F8(ctx, base);
loc_828B1720:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B1734;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828B1734:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ef5f8
	ctx.lr = 0x828B173C;
	sub_829EF5F8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x829ef5f8
	ctx.lr = 0x828B1744;
	sub_829EF5F8(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828B1750"))) PPC_WEAK_FUNC(sub_828B1750);
PPC_FUNC_IMPL(__imp__sub_828B1750) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x828B1758;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r3,328(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 328);
	// bl 0x824d5a20
	ctx.lr = 0x828B1770;
	sub_824D5A20(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x828b17ec
	if (ctx.cr0.eq) goto loc_828B17EC;
	// lwz r11,156(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 156);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x828b17ec
	if (!ctx.cr6.gt) goto loc_828B17EC;
	// li r30,0
	ctx.r30.s64 = 0;
loc_828B178C:
	// lwz r11,152(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 152);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x828b17d0
	goto loc_828B17D0;
loc_828B179C:
	// lwz r11,400(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 400);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x828b17cc
	if (ctx.cr6.eq) goto loc_828B17CC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,84(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B17CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828B17CC:
	// lwz r31,68(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
loc_828B17D0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x828b179c
	if (!ctx.cr6.eq) goto loc_828B179C;
	// lwz r11,156(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 156);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828b178c
	if (ctx.cr6.lt) goto loc_828B178C;
loc_828B17EC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828B17F8"))) PPC_WEAK_FUNC(sub_828B17F8);
PPC_FUNC_IMPL(__imp__sub_828B17F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9e8
	ctx.lr = 0x828B1800;
	__savegprlr_20(ctx, base);
	// stfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// li r24,54
	ctx.r24.s64 = 54;
	// beq cr6,0x828b1824
	if (ctx.cr6.eq) goto loc_828B1824;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
loc_828B1824:
	// lwz r11,44(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 44);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828b1848
	if (ctx.cr6.eq) goto loc_828B1848;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,100(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B1848;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828B1848:
	// bl 0x82336ae8
	ctx.lr = 0x828B184C;
	sub_82336AE8(ctx, base);
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// li r25,-1
	ctx.r25.s64 = -1;
	// lis r27,-31949
	ctx.r27.s64 = -2093809664;
	// lwz r11,19548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19548);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828b190c
	if (ctx.cr6.eq) goto loc_828B190C;
	// li r9,12
	ctx.r9.s64 = 12;
	// lwz r29,0(r13)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r28,r9,24
	ctx.r28.s64 = ctx.r9.s64 + 24;
	// addi r31,r11,1268
	ctx.r31.s64 = ctx.r11.s64 + 1268;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r26,r10,-15412
	ctx.r26.s64 = ctx.r10.s64 + -15412;
	// lwzx r11,r28,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x828b1898
	if (!ctx.cr0.eq) goto loc_828B1898;
	// addi r3,r26,4
	ctx.r3.s64 = ctx.r26.s64 + 4;
	// bl 0x8312e74c
	ctx.lr = 0x828B1898;
	sub_8312E74C(ctx, base);
loc_828B1898:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8287e940
	ctx.lr = 0x828B18A4;
	sub_8287E940(ctx, base);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828552a0
	ctx.lr = 0x828B18BC;
	sub_828552A0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828b18e0
	if (ctx.cr0.eq) goto loc_828B18E0;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// ble cr6,0x828b18dc
	if (!ctx.cr6.gt) goto loc_828B18DC;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x828b18e0
	goto loc_828B18E0;
loc_828B18DC:
	// lwz r30,20(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
loc_828B18E0:
	// lwzx r11,r28,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x828b18f4
	if (!ctx.cr0.eq) goto loc_828B18F4;
	// addi r3,r26,4
	ctx.r3.s64 = ctx.r26.s64 + 4;
	// bl 0x8312e73c
	ctx.lr = 0x828B18F4;
	sub_8312E73C(ctx, base);
loc_828B18F4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x828b190c
	if (ctx.cr6.eq) goto loc_828B190C;
	// mr r21,r30
	ctx.r21.u64 = ctx.r30.u64;
	// ori r24,r24,8
	ctx.r24.u64 = ctx.r24.u64 | 8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x828b1930
	if (!ctx.cr6.eq) goto loc_828B1930;
loc_828B190C:
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x82411af0
	ctx.lr = 0x828B1924;
	sub_82411AF0(ctx, base);
	// rlwinm r24,r24,0,31,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// rlwinm r24,r24,0,29,27
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
loc_828B1930:
	// lwz r11,572(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 572);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x828b1c44
	if (!ctx.cr6.eq) goto loc_828B1C44;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x828b1c44
	if (ctx.cr6.eq) goto loc_828B1C44;
	// lwz r11,28(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828b1c44
	if (ctx.cr6.eq) goto loc_828B1C44;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r3,152
	ctx.r3.s64 = 152;
	// lfs f31,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,568(r23)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r23.u32 + 568, temp.u32);
	// bl 0x82333900
	ctx.lr = 0x828B1964;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828b1978
	if (ctx.cr0.eq) goto loc_828B1978;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x829def88
	ctx.lr = 0x828B1974;
	sub_829DEF88(ctx, base);
	// b 0x828b197c
	goto loc_828B197C;
loc_828B1978:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828B197C:
	// lwz r11,244(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 244);
	// li r25,-1
	ctx.r25.s64 = -1;
	// stw r3,572(r23)
	PPC_STORE_U32(ctx.r23.u32 + 572, ctx.r3.u32);
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r10,28(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 28);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r27,r11,1
	ctx.r27.s64 = ctx.r11.s64 + 1;
	// ble cr6,0x828b1b00
	if (!ctx.cr6.gt) goto loc_828B1B00;
	// li r28,0
	ctx.r28.s64 = 0;
loc_828B19A0:
	// lwz r10,24(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 24);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,244(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 244);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwzx r31,r28,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// lwz r8,88(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// ble cr6,0x828b19e0
	if (!ctx.cr6.gt) goto loc_828B19E0;
	// lwz r10,240(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 240);
loc_828B19C0:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x828b1c50
	if (ctx.cr6.eq) goto loc_828B1C50;
	// lwz r7,244(r23)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r23.u32 + 244);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x828b19c0
	if (ctx.cr6.lt) goto loc_828B19C0;
loc_828B19E0:
	// li r29,-1
	ctx.r29.s64 = -1;
loc_828B19E4:
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// beq cr6,0x828b1aec
	if (ctx.cr6.eq) goto loc_828B1AEC;
	// lwz r8,92(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x828b1a30
	if (ctx.cr6.eq) goto loc_828B1A30;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x828b1a28
	if (!ctx.cr6.gt) goto loc_828B1A28;
	// lwz r10,240(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 240);
loc_828B1A08:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x828b1a2c
	if (ctx.cr6.eq) goto loc_828B1A2C;
	// lwz r9,244(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 244);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x828b1a08
	if (ctx.cr6.lt) goto loc_828B1A08;
loc_828B1A28:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_828B1A2C:
	// stw r11,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r11.u32);
loc_828B1A30:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x828aee00
	ctx.lr = 0x828B1A40;
	sub_828AEE00(ctx, base);
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,572(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 572);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x829deb60
	ctx.lr = 0x828B1A68;
	sub_829DEB60(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x828b1aec
	if (ctx.cr6.eq) goto loc_828B1AEC;
	// lwz r11,572(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 572);
	// rlwinm r31,r30,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// stw r29,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r29.u32);
	// lwz r11,572(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 572);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// stw r30,244(r11)
	PPC_STORE_U32(ctx.r11.u32 + 244, ctx.r30.u32);
	// lwz r11,44(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828b1abc
	if (ctx.cr6.eq) goto loc_828B1ABC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,100(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B1ABC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828B1ABC:
	// lwz r11,572(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 572);
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r27.s32, ctx.xer);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// stw r3,236(r11)
	PPC_STORE_U32(ctx.r11.u32 + 236, ctx.r3.u32);
	// lwz r11,572(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 572);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// stw r23,240(r11)
	PPC_STORE_U32(ctx.r11.u32 + 240, ctx.r23.u32);
	// bge cr6,0x828b1aec
	if (!ctx.cr6.lt) goto loc_828B1AEC;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
loc_828B1AEC:
	// lwz r11,28(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 28);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828b19a0
	if (ctx.cr6.lt) goto loc_828B19A0;
loc_828B1B00:
	// lwz r11,572(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 572);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x828b1b44
	if (!ctx.cr6.gt) goto loc_828B1B44;
	// li r11,0
	ctx.r11.s64 = 0;
loc_828B1B18:
	// lwz r9,572(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 572);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r9,60(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r8,224(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 224);
	// stw r9,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r9.u32);
	// lwz r9,572(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 572);
	// lwz r9,64(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x828b1b18
	if (ctx.cr6.lt) goto loc_828B1B18;
loc_828B1B44:
	// lwz r11,52(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 52);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x828b1c10
	if (!ctx.cr6.gt) goto loc_828B1C10;
	// li r31,0
	ctx.r31.s64 = 0;
loc_828B1B58:
	// lwz r10,48(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 48);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,572(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 572);
	// lwzx r6,r31,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lwz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r8,68(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 68);
	// ble cr6,0x828b1ba0
	if (!ctx.cr6.gt) goto loc_828B1BA0;
	// lwz r7,60(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
loc_828B1B80:
	// lwz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r5,88(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 88);
	// cmplw cr6,r5,r8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x828b1c58
	if (ctx.cr6.eq) goto loc_828B1C58;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x828b1b80
	if (ctx.cr6.lt) goto loc_828B1B80;
loc_828B1BA0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_828B1BA4:
	// lwz r9,64(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r7,72(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 72);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x828b1be0
	if (!ctx.cr6.gt) goto loc_828B1BE0;
	// lwz r8,60(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_828B1BC0:
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r5,88(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 88);
	// cmplw cr6,r5,r7
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x828b1c64
	if (ctx.cr6.eq) goto loc_828B1C64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x828b1bc0
	if (ctx.cr6.lt) goto loc_828B1BC0;
loc_828B1BE0:
	// li r5,0
	ctx.r5.s64 = 0;
loc_828B1BE4:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x828b1bfc
	if (ctx.cr6.eq) goto loc_828B1BFC;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x828b1bfc
	if (ctx.cr6.eq) goto loc_828B1BFC;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829df320
	ctx.lr = 0x828B1BFC;
	sub_829DF320(ctx, base);
loc_828B1BFC:
	// lwz r11,52(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 52);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828b1b58
	if (ctx.cr6.lt) goto loc_828B1B58;
loc_828B1C10:
	// lwz r11,572(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 572);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bge cr6,0x828b1c20
	if (!ctx.cr6.lt) goto loc_828B1C20;
	// li r25,0
	ctx.r25.s64 = 0;
loc_828B1C20:
	// rlwinm. r10,r24,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r25,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r25.u32);
	// beq 0x828b1c44
	if (ctx.cr0.eq) goto loc_828B1C44;
	// rlwinm. r11,r24,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828b1c44
	if (ctx.cr0.eq) goto loc_828B1C44;
	// rlwinm. r11,r24,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828b1c44
	if (ctx.cr0.eq) goto loc_828B1C44;
	// lwz r3,572(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 572);
	// bl 0x829df130
	ctx.lr = 0x828B1C44;
	sub_829DF130(ctx, base);
loc_828B1C44:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x82a4ea38
	__restgprlr_20(ctx, base);
	return;
loc_828B1C50:
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// b 0x828b19e4
	goto loc_828B19E4;
loc_828B1C58:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// b 0x828b1ba4
	goto loc_828B1BA4;
loc_828B1C64:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r11,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// b 0x828b1be4
	goto loc_828B1BE4;
}

__attribute__((alias("__imp__sub_828B1C70"))) PPC_WEAK_FUNC(sub_828B1C70);
PPC_FUNC_IMPL(__imp__sub_828B1C70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x828B1C78;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,572(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828b1d80
	if (ctx.cr6.eq) goto loc_828B1D80;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,568(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 568, temp.u32);
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828b1cb8
	if (ctx.cr6.eq) goto loc_828B1CB8;
	// lwz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828b1cb8
	if (ctx.cr0.eq) goto loc_828B1CB8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x829df1e8
	ctx.lr = 0x828B1CB8;
	sub_829DF1E8(ctx, base);
loc_828B1CB8:
	// lwz r11,572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x828b1cf4
	if (!ctx.cr6.gt) goto loc_828B1CF4;
loc_828B1CD0:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,572(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x829df090
	ctx.lr = 0x828B1CE0;
	sub_829DF090(ctx, base);
	// lwz r11,572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828b1cd0
	if (ctx.cr6.lt) goto loc_828B1CD0;
loc_828B1CF4:
	// lwz r11,572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x828b1d2c
	if (!ctx.cr6.gt) goto loc_828B1D2C;
loc_828B1D08:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,572(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x829deeb8
	ctx.lr = 0x828B1D18;
	sub_829DEEB8(ctx, base);
	// lwz r11,572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828b1d08
	if (ctx.cr6.lt) goto loc_828B1D08;
loc_828B1D2C:
	// lwz r11,572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// addi r3,r11,72
	ctx.r3.s64 = ctx.r11.s64 + 72;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// stw r29,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r29.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x828b1d54
	if (ctx.cr6.eq) goto loc_828B1D54;
	// stw r29,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r29.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82332c38
	ctx.lr = 0x828B1D54;
	sub_82332C38(ctx, base);
loc_828B1D54:
	// lwz r11,572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// stw r29,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r29.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x828b1d7c
	if (ctx.cr6.eq) goto loc_828B1D7C;
	// stw r29,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r29.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82332c38
	ctx.lr = 0x828B1D7C;
	sub_82332C38(ctx, base);
loc_828B1D7C:
	// stw r29,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r29.u32);
loc_828B1D80:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828B1D88"))) PPC_WEAK_FUNC(sub_828B1D88);
PPC_FUNC_IMPL(__imp__sub_828B1D88) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828b1e50
	if (ctx.cr6.eq) goto loc_828B1E50;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828b1dcc
	if (ctx.cr6.eq) goto loc_828B1DCC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B1DCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828B1DCC:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r4,508(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lfs f31,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// lwz r3,904(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,344(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 344);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B1DF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r30,1
	ctx.r30.s64 = 1;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x828b1e1c
	if (!ctx.cr6.eq) goto loc_828B1E1C;
	// lwz r11,504(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828b1e40
	if (ctx.cr6.eq) goto loc_828B1E40;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828b14d0
	ctx.lr = 0x828B1E18;
	sub_828B14D0(ctx, base);
	// b 0x828b1e40
	goto loc_828B1E40;
loc_828B1E1C:
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// stw r30,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r30.u32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,16444(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16444);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_828B1E40:
	// lfs f0,512(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 512);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 532, ctx.r30.u32);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// b 0x828b1e70
	goto loc_828B1E70;
loc_828B1E50:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r10,1356(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1356);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x828b1e74
	if (!ctx.cr6.eq) goto loc_828B1E74;
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f0,984(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 984);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 532, ctx.r10.u32);
loc_828B1E70:
	// stfs f0,540(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 540, temp.u32);
loc_828B1E74:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_828B1E90"))) PPC_WEAK_FUNC(sub_828B1E90);
PPC_FUNC_IMPL(__imp__sub_828B1E90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x828B1E98;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828b1ec0
	if (ctx.cr6.eq) goto loc_828B1EC0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B1EC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828B1EC0:
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lwz r3,904(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,308(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 308);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B1EE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// stw r3,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r3.u32);
	// lfs f0,984(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 984);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,512(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 512, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828B1F00"))) PPC_WEAK_FUNC(sub_828B1F00);
PPC_FUNC_IMPL(__imp__sub_828B1F00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lfs f0,468(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 468);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f13,472(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 472);
	ctx.f13.f64 = double(temp.f32);
	// lwz r8,444(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 444);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// lwz r9,448(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 448);
	// lwz r7,452(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 452);
	// lwz r10,13024(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13024);
	// lwz r6,456(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 456);
	// lwz r5,460(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 460);
	// lwz r31,464(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 464);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lfs f12,984(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 984);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stfs f12,476(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 476, temp.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge cr6,0x828b1fd4
	if (!ctx.cr6.lt) goto loc_828B1FD4;
	// fadds f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f1.f64));
	// stfs f13,472(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 472, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x828b1f7c
	if (!ctx.cr6.gt) goto loc_828B1F7C;
	// subf r10,r5,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r5.s64;
	// stfs f0,472(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 472, temp.u32);
	// subf r11,r6,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r6.s64;
	// subf r9,r31,r7
	ctx.r9.s64 = ctx.r7.s64 - ctx.r31.s64;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// b 0x828b1fa4
	goto loc_828B1FA4;
loc_828B1F7C:
	// extsw r11,r9
	ctx.r11.s64 = ctx.r9.s32;
	// fdivs f0,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f1.f64));
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// li r12,4
	ctx.r12.s64 = 4;
	// stfiwx f0,r3,r12
	PPC_STORE_U32(ctx.r3.u32 + ctx.r12.u32, ctx.f0.u32);
loc_828B1FA4:
	// lwz r10,456(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 456);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,460(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 460);
	// lwz r11,464(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 464);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r9,r7,r8
	ctx.r9.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stw r10,456(r4)
	PPC_STORE_U32(ctx.r4.u32 + 456, ctx.r10.u32);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// stw r9,460(r4)
	PPC_STORE_U32(ctx.r4.u32 + 460, ctx.r9.u32);
	// stw r11,464(r4)
	PPC_STORE_U32(ctx.r4.u32 + 464, ctx.r11.u32);
loc_828B1FD4:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828B1FE0"))) PPC_WEAK_FUNC(sub_828B1FE0);
PPC_FUNC_IMPL(__imp__sub_828B1FE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x828B1FE8;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r11,r11,-3216
	ctx.r11.s64 = ctx.r11.s64 + -3216;
	// stw r26,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r26.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r26,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
	// stw r26,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r26.u32);
	// beq cr6,0x828b209c
	if (ctx.cr6.eq) goto loc_828B209C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a4cbe0
	ctx.lr = 0x828B2020;
	sub_82A4CBE0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x828b209c
	if (ctx.cr0.eq) goto loc_828B209C;
	// addi r4,r29,1
	ctx.r4.s64 = ctx.r29.s64 + 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8286dac0
	ctx.lr = 0x828B2034;
	sub_8286DAC0(ctx, base);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// lwz r27,84(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// beq cr6,0x828b2060
	if (ctx.cr6.eq) goto loc_828B2060;
loc_828B2044:
	// lhz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// bl 0x82a57120
	ctx.lr = 0x828B204C;
	sub_82A57120(ctx, base);
	// stbx r3,r30,r27
	PPC_STORE_U8(ctx.r30.u32 + ctx.r27.u32, ctx.r3.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x828b2044
	if (ctx.cr6.lt) goto loc_828B2044;
loc_828B2060:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rotlwi r8,r29,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r29.u32, 0);
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stbx r26,r8,r7
	PPC_STORE_U8(ctx.r8.u32 + ctx.r7.u32, ctx.r26.u8);
	// bl 0x829ef5f8
	ctx.lr = 0x828B209C;
	sub_829EF5F8(ctx, base);
loc_828B209C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828B20A8"))) PPC_WEAK_FUNC(sub_828B20A8);
PPC_FUNC_IMPL(__imp__sub_828B20A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x828b20f8
	if (ctx.cr6.eq) goto loc_828B20F8;
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lwz r4,13104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13104);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x828b20e4
	if (!ctx.cr6.eq) goto loc_828B20E4;
	// bl 0x82951830
	ctx.lr = 0x828B20DC;
	sub_82951830(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r4,13104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13104, ctx.r4.u32);
loc_828B20E4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828b21a8
	ctx.lr = 0x828B20EC;
	sub_828B21A8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne 0x828b20fc
	if (!ctx.cr0.eq) goto loc_828B20FC;
loc_828B20F8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828B20FC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828B2118"))) PPC_WEAK_FUNC(sub_828B2118);
PPC_FUNC_IMPL(__imp__sub_828B2118) {
	PPC_FUNC_PROLOGUE();
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
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x828b2184
	if (!ctx.cr6.eq) goto loc_828B2184;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r11,r11,-3216
	ctx.r11.s64 = ctx.r11.s64 + -3216;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82765d00
	ctx.lr = 0x828B2154;
	sub_82765D00(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// bl 0x829ef5f8
	ctx.lr = 0x828B2184;
	sub_829EF5F8(ctx, base);
loc_828B2184:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stbx r30,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r30.u8);
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

__attribute__((alias("__imp__sub_828B21A8"))) PPC_WEAK_FUNC(sub_828B21A8);
PPC_FUNC_IMPL(__imp__sub_828B21A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B21CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828b21e8
	if (ctx.cr0.eq) goto loc_828B21E8;
loc_828B21D4:
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x828b2200
	if (ctx.cr6.eq) goto loc_828B2200;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x828b21d4
	if (!ctx.cr6.eq) goto loc_828B21D4;
loc_828B21E8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828B21EC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_828B2200:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828b21ec
	goto loc_828B21EC;
}

__attribute__((alias("__imp__sub_828B2208"))) PPC_WEAK_FUNC(sub_828B2208);
PPC_FUNC_IMPL(__imp__sub_828B2208) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r5,r30,16
	ctx.r5.s64 = ctx.r30.s64 + 16;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8281a098
	ctx.lr = 0x828B2234;
	sub_8281A098(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_828B2244:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x828b2244
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_828B2244;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f13,28(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x828b22fc
	if (ctx.cr6.eq) goto loc_828B22FC;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f0,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lfs f0,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f13,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f13,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lfs f0,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f13,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lfs f0,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f13,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lfs f0,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
loc_828B22FC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828B2318"))) PPC_WEAK_FUNC(sub_828B2318);
PPC_FUNC_IMPL(__imp__sub_828B2318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x828af3a8
	ctx.lr = 0x828B2338;
	sub_828AF3A8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828b2348
	if (ctx.cr0.eq) goto loc_828B2348;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x828B2348;
	sub_82332DB8(ctx, base);
loc_828B2348:
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

__attribute__((alias("__imp__sub_828B2368"))) PPC_WEAK_FUNC(sub_828B2368);
PPC_FUNC_IMPL(__imp__sub_828B2368) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r3,r11,-19368
	ctx.r3.s64 = ctx.r11.s64 + -19368;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828B2378"))) PPC_WEAK_FUNC(sub_828B2378);
PPC_FUNC_IMPL(__imp__sub_828B2378) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x824d4280
	ctx.lr = 0x828B2398;
	sub_824D4280(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x828b23ac
	if (ctx.cr6.eq) goto loc_828B23AC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82713600
	ctx.lr = 0x828B23AC;
	sub_82713600(ctx, base);
loc_828B23AC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828B23C8"))) PPC_WEAK_FUNC(sub_828B23C8);
PPC_FUNC_IMPL(__imp__sub_828B23C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x828b2400
	if (ctx.cr6.eq) goto loc_828B2400;
	// bl 0x824d4280
	ctx.lr = 0x828B23F0;
	sub_824D4280(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828b2400
	if (!ctx.cr6.eq) goto loc_828B2400;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828b240c
	goto loc_828B240C;
loc_828B2400:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82713768
	ctx.lr = 0x828B240C;
	sub_82713768(ctx, base);
loc_828B240C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828B2428"))) PPC_WEAK_FUNC(sub_828B2428);
PPC_FUNC_IMPL(__imp__sub_828B2428) {
	PPC_FUNC_PROLOGUE();
	// b 0x824d4280
	sub_824D4280(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828B2430"))) PPC_WEAK_FUNC(sub_828B2430);
PPC_FUNC_IMPL(__imp__sub_828B2430) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,592
	ctx.r3.s64 = 592;
	// bl 0x82833108
	ctx.lr = 0x828B244C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828b2460
	if (ctx.cr0.eq) goto loc_828B2460;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x828b2478
	ctx.lr = 0x828B245C;
	sub_828B2478(ctx, base);
	// b 0x828b2464
	goto loc_828B2464;
loc_828B2460:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828B2464:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828B2478"))) PPC_WEAK_FUNC(sub_828B2478);
PPC_FUNC_IMPL(__imp__sub_828B2478) {
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
	// bl 0x82713558
	ctx.lr = 0x828B2498;
	sub_82713558(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r4,r30,64
	ctx.r4.s64 = ctx.r30.s64 + 64;
	// addi r11,r11,-24088
	ctx.r11.s64 = ctx.r11.s64 + -24088;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r5,28
	ctx.r5.s64 = 28;
	// bl 0x82a4ea80
	ctx.lr = 0x828B24B4;
	sub_82A4EA80(ctx, base);
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// addi r4,r30,92
	ctx.r4.s64 = ctx.r30.s64 + 92;
	// li r5,144
	ctx.r5.s64 = 144;
	// bl 0x82a4ea80
	ctx.lr = 0x828B24C4;
	sub_82A4EA80(ctx, base);
	// lwz r11,236(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	// addi r4,r30,252
	ctx.r4.s64 = ctx.r30.s64 + 252;
	// addi r3,r31,252
	ctx.r3.s64 = ctx.r31.s64 + 252;
	// stw r11,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r11.u32);
	// lwz r11,240(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	// stw r11,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r11.u32);
	// lwz r11,244(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	// stw r11,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r11.u32);
	// lfs f0,248(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,248(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 248, temp.u32);
	// bl 0x825c3ae0
	ctx.lr = 0x828B24F0;
	sub_825C3AE0(ctx, base);
	// addi r4,r30,276
	ctx.r4.s64 = ctx.r30.s64 + 276;
	// addi r3,r31,276
	ctx.r3.s64 = ctx.r31.s64 + 276;
	// bl 0x825c7d68
	ctx.lr = 0x828B24FC;
	sub_825C7D68(ctx, base);
	// addi r4,r30,300
	ctx.r4.s64 = ctx.r30.s64 + 300;
	// addi r3,r31,300
	ctx.r3.s64 = ctx.r31.s64 + 300;
	// bl 0x825c3ae0
	ctx.lr = 0x828B2508;
	sub_825C3AE0(ctx, base);
	// lwz r11,324(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 324);
	// addi r4,r30,336
	ctx.r4.s64 = ctx.r30.s64 + 336;
	// addi r3,r31,336
	ctx.r3.s64 = ctx.r31.s64 + 336;
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r11,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r11.u32);
	// lwz r11,328(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 328);
	// stw r11,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r11.u32);
	// bl 0x82a4ea80
	ctx.lr = 0x828B2528;
	sub_82A4EA80(ctx, base);
	// lwz r11,400(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 400);
	// addi r3,r31,480
	ctx.r3.s64 = ctx.r31.s64 + 480;
	// addi r4,r30,480
	ctx.r4.s64 = ctx.r30.s64 + 480;
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
	// lwz r11,428(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 428);
	// stw r11,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r11.u32);
	// lwz r11,432(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 432);
	// stw r11,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r11.u32);
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
	// lwz r11,456(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 456);
	// stw r11,456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 456, ctx.r11.u32);
	// lwz r11,460(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 460);
	// stw r11,460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 460, ctx.r11.u32);
	// lwz r11,464(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 464);
	// stw r11,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r11.u32);
	// lfs f0,468(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 468);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,468(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 468, temp.u32);
	// lfs f0,472(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 472);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,472(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 472, temp.u32);
	// lfs f0,476(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 476);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,476(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 476, temp.u32);
	// bl 0x823397c0
	ctx.lr = 0x828B25D4;
	sub_823397C0(ctx, base);
	// addi r11,r31,520
	ctx.r11.s64 = ctx.r31.s64 + 520;
	// addi r10,r30,520
	ctx.r10.s64 = ctx.r30.s64 + 520;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// addi r4,r10,24
	ctx.r4.s64 = ctx.r10.s64 + 24;
	// lwz r11,504(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 504);
	// stw r11,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r11.u32);
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
	// lwz r11,516(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 516);
	// stw r11,516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 516, ctx.r11.u32);
	// lwz r11,520(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 520);
	// stw r11,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r11.u32);
	// lwz r11,524(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 524);
	// stw r11,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r11.u32);
	// lwz r11,528(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 528);
	// stw r11,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r11.u32);
	// lwz r11,532(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 532);
	// stw r11,532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 532, ctx.r11.u32);
	// lwz r11,536(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 536);
	// stw r11,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r11.u32);
	// lfs f0,540(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 540);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,540(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 540, temp.u32);
	// bl 0x82873b58
	ctx.lr = 0x828B2638;
	sub_82873B58(ctx, base);
	// lfs f0,568(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 568);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,568(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 568, temp.u32);
	// lwz r11,572(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 572);
	// stw r11,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,576(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 576);
	// stw r11,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r11.u32);
	// lwz r11,580(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 580);
	// stw r11,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r11.u32);
	// lwz r11,584(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 584);
	// stw r11,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828B2680"))) PPC_WEAK_FUNC(sub_828B2680);
PPC_FUNC_IMPL(__imp__sub_828B2680) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,-23948
	ctx.r3.s64 = ctx.r11.s64 + -23948;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828B2690"))) PPC_WEAK_FUNC(sub_828B2690);
PPC_FUNC_IMPL(__imp__sub_828B2690) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x828b26c8
	if (ctx.cr6.eq) goto loc_828B26C8;
	// bl 0x828b3700
	ctx.lr = 0x828B26B8;
	sub_828B3700(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828b26c8
	if (!ctx.cr6.eq) goto loc_828B26C8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828b26d4
	goto loc_828B26D4;
loc_828B26C8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333c70
	ctx.lr = 0x828B26D4;
	sub_82333C70(ctx, base);
loc_828B26D4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828B26F0"))) PPC_WEAK_FUNC(sub_828B26F0);
PPC_FUNC_IMPL(__imp__sub_828B26F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828b3700
	sub_828B3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828B26F8"))) PPC_WEAK_FUNC(sub_828B26F8);
PPC_FUNC_IMPL(__imp__sub_828B26F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x828B2714;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828b2774
	if (ctx.cr0.eq) goto loc_828B2774;
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
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r9,r9,-23896
	ctx.r9.s64 = ctx.r9.s64 + -23896;
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
	// b 0x828b2778
	goto loc_828B2778;
loc_828B2774:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828B2778:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828B2790"))) PPC_WEAK_FUNC(sub_828B2790);
PPC_FUNC_IMPL(__imp__sub_828B2790) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x828b3700
	ctx.lr = 0x828B27B0;
	sub_828B3700(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x828b27c4
	if (ctx.cr6.eq) goto loc_828B27C4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333b08
	ctx.lr = 0x828B27C4;
	sub_82333B08(ctx, base);
loc_828B27C4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828B27E0"))) PPC_WEAK_FUNC(sub_828B27E0);
PPC_FUNC_IMPL(__imp__sub_828B27E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82409c40
	ctx.lr = 0x828B2800;
	sub_82409C40(ctx, base);
	// lwz r30,24(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x829c1f08
	ctx.lr = 0x828B280C;
	sub_829C1F08(ctx, base);
	// bl 0x828aab40
	ctx.lr = 0x828B2810;
	sub_828AAB40(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// beq 0x828b2828
	if (ctx.cr0.eq) goto loc_828B2828;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// b 0x828b2834
	goto loc_828B2834;
loc_828B2828:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1224(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1224);
loc_828B2834:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B283C;
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

__attribute__((alias("__imp__sub_828B2858"))) PPC_WEAK_FUNC(sub_828B2858);
PPC_FUNC_IMPL(__imp__sub_828B2858) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x828B2860;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8284c630
	ctx.lr = 0x828B2870;
	sub_8284C630(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// li r30,0
	ctx.r30.s64 = 0;
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// addi r11,r10,10432
	ctx.r11.s64 = ctx.r10.s64 + 10432;
	// addi r10,r9,11556
	ctx.r10.s64 = ctx.r9.s64 + 11556;
	// stfs f31,1520(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1520, temp.u32);
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r9,r8,11608
	ctx.r9.s64 = ctx.r8.s64 + 11608;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r29,1496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1496, ctx.r29.u32);
	// li r3,416
	ctx.r3.s64 = 416;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// stw r29,1500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1500, ctx.r29.u32);
	// stw r30,1528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1528, ctx.r30.u32);
	// stw r30,1488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1488, ctx.r30.u32);
	// stw r30,1492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1492, ctx.r30.u32);
	// stw r30,1536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1536, ctx.r30.u32);
	// stw r30,1540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1540, ctx.r30.u32);
	// bl 0x82833108
	ctx.lr = 0x828B28CC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828b28e8
	if (ctx.cr0.eq) goto loc_828B28E8;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x828d4bc0
	ctx.lr = 0x828B28E0;
	sub_828D4BC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828b28ec
	goto loc_828B28EC;
loc_828B28E8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_828B28EC:
	// stw r4,1544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1544, ctx.r4.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829be6e8
	ctx.lr = 0x828B28F8;
	sub_829BE6E8(ctx, base);
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f9,1508(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1508);
	ctx.f9.f64 = double(temp.f32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f8,972(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 972);
	ctx.f8.f64 = double(temp.f32);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stfs f31,1512(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1512, temp.u32);
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// stw r29,860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 860, ctx.r29.u32);
	// lfs f13,18120(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 18120);
	ctx.f13.f64 = double(temp.f32);
	// stw r29,808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 808, ctx.r29.u32);
	// stfs f13,696(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 696, temp.u32);
	// stw r29,844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 844, ctx.r29.u32);
	// lfd f12,19976(r11)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r11.u32 + 19976);
	// li r11,6
	ctx.r11.s64 = 6;
	// lfd f0,19968(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 19968);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fadd f9,f9,f0
	ctx.f9.f64 = ctx.f9.f64 + ctx.f0.f64;
	// lfd f11,19960(r9)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 19960);
	// lfd f10,19952(r8)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r8.u32 + 19952);
	// fadd f11,f8,f11
	ctx.f11.f64 = ctx.f8.f64 + ctx.f11.f64;
	// stw r11,924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 924, ctx.r11.u32);
	// stw r30,1532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1532, ctx.r30.u32);
	// stw r29,956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 956, ctx.r29.u32);
	// lfs f13,1516(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1516);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,704(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 704);
	// fadd f13,f13,f12
	ctx.f13.f64 = ctx.f13.f64 + ctx.f12.f64;
	// lfs f12,1504(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1504);
	ctx.f12.f64 = double(temp.f32);
	// fadd f0,f12,f0
	ctx.f0.f64 = ctx.f12.f64 + ctx.f0.f64;
	// lfs f12,1524(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1524);
	ctx.f12.f64 = double(temp.f32);
	// fadd f12,f12,f10
	ctx.f12.f64 = ctx.f12.f64 + ctx.f10.f64;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r11,704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 704, ctx.r11.u32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// stfs f13,1516(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1516, temp.u32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,1504(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1504, temp.u32);
	// frsp f0,f11
	ctx.f0.f64 = double(float(ctx.f11.f64));
	// stfs f0,972(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 972, temp.u32);
	// frsp f13,f9
	ctx.f13.f64 = double(float(ctx.f9.f64));
	// stfs f13,1508(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1508, temp.u32);
	// frsp f0,f12
	ctx.f0.f64 = double(float(ctx.f12.f64));
	// stfs f0,1524(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1524, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828B29B8"))) PPC_WEAK_FUNC(sub_828B29B8);
PPC_FUNC_IMPL(__imp__sub_828B29B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x829bc7b8
	ctx.lr = 0x828B29D0;
	sub_829BC7B8(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r4,r31,176
	ctx.r4.s64 = ctx.r31.s64 + 176;
	// addi r5,r11,11976
	ctx.r5.s64 = ctx.r11.s64 + 11976;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824f5de8
	ctx.lr = 0x828B29EC;
	sub_824F5DE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828B2A00"))) PPC_WEAK_FUNC(sub_828B2A00);
PPC_FUNC_IMPL(__imp__sub_828B2A00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x829c4e48
	ctx.lr = 0x828B2A1C;
	sub_829C4E48(ctx, base);
	// addi r11,r31,572
	ctx.r11.s64 = ctx.r31.s64 + 572;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,424
	ctx.r3.s64 = ctx.r31.s64 + 424;
	// bl 0x82838fd0
	ctx.lr = 0x828B2A34;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828B2A58"))) PPC_WEAK_FUNC(sub_828B2A58);
PPC_FUNC_IMPL(__imp__sub_828B2A58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,576(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 576);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r3,572
	ctx.r11.s64 = ctx.r3.s64 + 572;
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,572(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 572);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,1508(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1508);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,580(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 580);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f10,f10
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,908(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f11,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bne cr6,0x828b2ac8
	if (!ctx.cr6.eq) goto loc_828B2AC8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// stw r9,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r9.u32);
	// stw r8,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r8.u32);
	// b 0x828b2b14
	goto loc_828B2B14;
loc_828B2AC8:
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f11,16668(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16668);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x828b2aec
	if (!ctx.cr6.lt) goto loc_828B2AEC;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f0,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// b 0x828b2b10
	goto loc_828B2B10;
loc_828B2AEC:
	// fsqrts f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fdivs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,-16(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// fmuls f13,f11,f0
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f13,-12(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// fmuls f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
loc_828B2B10:
	// stfs f0,-8(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
loc_828B2B14:
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// lwz r8,-12(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// lwz r7,-8(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// addi r6,r9,13868
	ctx.r6.s64 = ctx.r9.s64 + 13868;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fmuls f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmuls f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lwz r11,13868(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13868);
	// stw r11,560(r3)
	PPC_STORE_U32(ctx.r3.u32 + 560, ctx.r11.u32);
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stw r11,564(r3)
	PPC_STORE_U32(ctx.r3.u32 + 564, ctx.r11.u32);
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stw r11,568(r3)
	PPC_STORE_U32(ctx.r3.u32 + 568, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828B2B78"))) PPC_WEAK_FUNC(sub_828B2B78);
PPC_FUNC_IMPL(__imp__sub_828B2B78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x828B2B80;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82a61744
	ctx.lr = 0x828B2B88;
	__savefpr_27(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r11,1496(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1496);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828b2dd8
	if (ctx.cr6.eq) goto loc_828B2DD8;
	// lwz r11,1544(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1544);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828b2dd8
	if (ctx.cr6.eq) goto loc_828B2DD8;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f0,404(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 404);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x828b2bcc
	if (!ctx.cr6.eq) goto loc_828B2BCC;
	// lfs f0,400(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 400);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x828b2dd8
	if (ctx.cr6.eq) goto loc_828B2DD8;
loc_828B2BCC:
	// lfs f13,624(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 624);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// li r29,0
	ctx.r29.s64 = 0;
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f12,628(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 628);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f11,620(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 620);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r31,r30,620
	ctx.r31.s64 = ctx.r30.s64 + 620;
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// lfs f30,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f30.f64 = double(temp.f32);
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stw r10,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r10.u32);
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stw r29,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r29.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stw r29,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r29.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stw r29,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r29.u32);
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f31,124(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stw r29,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r29.u32);
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stw r29,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r29.u32);
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stw r29,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r29.u32);
	// stfs f31,136(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f31,140(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f30,148(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fmadds f11,f13,f13,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmadds f11,f12,f12,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f11.f64));
	// fcmpu cr6,f11,f30
	ctx.cr6.compare(ctx.f11.f64, ctx.f30.f64);
	// bne cr6,0x828b2c94
	if (!ctx.cr6.eq) goto loc_828B2C94;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// b 0x828b2cc8
	goto loc_828B2CC8;
loc_828B2C94:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f10,16668(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16668);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// bge cr6,0x828b2cb4
	if (!ctx.cr6.lt) goto loc_828B2CB4;
	// fmr f12,f31
	ctx.f12.f64 = ctx.f31.f64;
	// fmr f11,f31
	ctx.f11.f64 = ctx.f31.f64;
	// fmr f13,f31
	ctx.f13.f64 = ctx.f31.f64;
	// b 0x828b2cc8
	goto loc_828B2CC8;
loc_828B2CB4:
	// fsqrts f11,f11
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(sqrt(ctx.f11.f64)));
	// fdivs f10,f30,f11
	ctx.f10.f64 = double(float(ctx.f30.f64 / ctx.f11.f64));
	// fmuls f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fmuls f11,f0,f10
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fmuls f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
loc_828B2CC8:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f10,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
	// lfs f8,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// li r8,17119
	ctx.r8.s64 = 17119;
	// lfs f0,912(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	ctx.f0.f64 = double(temp.f32);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// fmuls f29,f12,f0
	ctx.f29.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f28,f11,f0
	ctx.f28.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// fmuls f27,f13,f0
	ctx.f27.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,13024(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// fadds f0,f10,f29
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f29.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f0,f9,f28
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f28.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f0,f8,f27
	ctx.f0.f64 = double(float(ctx.f8.f64 + ctx.f27.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x82825330
	ctx.lr = 0x828B2D34;
	sub_82825330(ctx, base);
	// lfs f0,148(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bne cr6,0x828b2dd8
	if (!ctx.cr6.eq) goto loc_828B2DD8;
	// lfs f0,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f29.f64));
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f13,f28
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f28.f64));
	// fadds f12,f12,f27
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f27.f64));
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// li r8,17119
	ctx.r8.s64 = 17119;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,13024(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// bl 0x82825330
	ctx.lr = 0x828B2D94;
	sub_82825330(ctx, base);
	// lfs f0,148(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bne cr6,0x828b2dd8
	if (!ctx.cr6.eq) goto loc_828B2DD8;
	// lwz r3,1544(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1544);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// stw r29,1496(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1496, ctx.r29.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,164(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B2DC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x828b2dd0
	if (ctx.cr6.eq) goto loc_828B2DD0;
	// lwz r11,80(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 80);
	// stw r11,1528(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1528, ctx.r11.u32);
loc_828B2DD0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828b2ddc
	goto loc_828B2DDC;
loc_828B2DD8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828B2DDC:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82a61790
	ctx.lr = 0x828B2DE8;
	__restfpr_27(ctx, base);
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828B2DF0"))) PPC_WEAK_FUNC(sub_828B2DF0);
PPC_FUNC_IMPL(__imp__sub_828B2DF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x828B2DF8;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r4,1528(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1528);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x828B2E18;
	sub_829B9720(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x828b2f10
	if (ctx.cr0.eq) goto loc_828B2F10;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829bee20
	ctx.lr = 0x828B2E28;
	sub_829BEE20(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828b2f10
	if (ctx.cr0.eq) goto loc_828B2F10;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// lfs f0,908(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stw r31,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r31.u32);
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r31.u32);
	// stfs f31,108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f31,124(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// bl 0x829bee20
	ctx.lr = 0x828B2E98;
	sub_829BEE20(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,628(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 628);
	// stfs f31,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// rldicr r6,r11,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r5,620(r30)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r30.u32 + 620);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// ld r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,148(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 148);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B2ED0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x828b2f10
	if (!ctx.cr0.eq) goto loc_828B2F10;
	// stw r31,1528(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1528, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829bee20
	ctx.lr = 0x828B2EE4;
	sub_829BEE20(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828b2f10
	if (ctx.cr0.eq) goto loc_828B2F10;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r9,1496(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1496, ctx.r9.u32);
	// lfs f2,404(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 404);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,400(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 400);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,648(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 648);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B2F10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828B2F10:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828B2F20"))) PPC_WEAK_FUNC(sub_828B2F20);
PPC_FUNC_IMPL(__imp__sub_828B2F20) {
	PPC_FUNC_PROLOGUE();
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
	// std r5,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r5.u64);
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r8,56(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 56);
	// lwz r7,52(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 52);
	// lwz r11,856(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 856);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B2F50;
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

__attribute__((alias("__imp__sub_828B2F60"))) PPC_WEAK_FUNC(sub_828B2F60);
PPC_FUNC_IMPL(__imp__sub_828B2F60) {
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
	// lwz r11,1024(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1024);
	// std r7,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r7.u64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x828b2fc0
	if (!ctx.cr6.eq) goto loc_828B2FC0;
	// lfs f13,628(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 628);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,628(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 628);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,620(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 620);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,620(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 620);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f11,624(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 624);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,624(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 624);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f11,1524(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1524);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x828b2fc0
	if (!ctx.cr6.gt) goto loc_828B2FC0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x828b2fcc
	goto loc_828B2FCC;
loc_828B2FC0:
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x829c44d0
	ctx.lr = 0x828B2FCC;
	sub_829C44D0(ctx, base);
loc_828B2FCC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828B2FE0"))) PPC_WEAK_FUNC(sub_828B2FE0);
PPC_FUNC_IMPL(__imp__sub_828B2FE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x828B2FE8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,960(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 960);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828b30c8
	if (!ctx.cr6.eq) goto loc_828B30C8;
	// lwz r11,800(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 800);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828b30c8
	if (ctx.cr6.eq) goto loc_828B30C8;
	// lwz r11,1608(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1608);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,1536(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1536, ctx.r11.u32);
	// beq cr6,0x828b30c8
	if (ctx.cr6.eq) goto loc_828B30C8;
	// lwz r11,1420(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1420);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828b30c8
	if (ctx.cr6.eq) goto loc_828B30C8;
	// lwz r11,1608(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1608);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828b30c8
	if (ctx.cr6.eq) goto loc_828B30C8;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82833108
	ctx.lr = 0x828B3038;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828b30b4
	if (ctx.cr0.eq) goto loc_828B30B4;
	// lwz r11,1536(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1536);
	// lwz r11,1420(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1420);
	// lwz r11,1608(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1608);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828b305c
	if (ctx.cr6.eq) goto loc_828B305C;
	// lwz r29,80(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x828b3060
	goto loc_828B3060;
loc_828B305C:
	// li r29,0
	ctx.r29.s64 = 0;
loc_828B3060:
	// lwz r11,800(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 800);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828b3074
	if (ctx.cr6.eq) goto loc_828B3074;
	// lwz r30,80(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x828b3078
	goto loc_828B3078;
loc_828B3074:
	// li r30,0
	ctx.r30.s64 = 0;
loc_828B3078:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82833180
	ctx.lr = 0x828B3080;
	sub_82833180(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-8531
	ctx.r10.s64 = -559087616;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// addi r11,r11,-23896
	ctx.r11.s64 = ctx.r11.s64 + -23896;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// ori r10,r10,47806
	ctx.r10.u64 = ctx.r10.u64 | 47806;
	// stw r28,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
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
	// b 0x828b30b8
	goto loc_828B30B8;
loc_828B30B4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_828B30B8:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x828B30C8;
	sub_82833A30(ctx, base);
loc_828B30C8:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1500(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1500, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828B30D8"))) PPC_WEAK_FUNC(sub_828B30D8);
PPC_FUNC_IMPL(__imp__sub_828B30D8) {
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
	// std r4,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r4.u64);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// std r5,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r5.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82817280
	ctx.lr = 0x828B3108;
	sub_82817280(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B311C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f11,1504(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1504);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f0,f13,f11
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// lfs f12,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f0,f12,f11
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,580(r30)
	PPC_STORE_U32(ctx.r30.u32 + 580, ctx.r11.u32);
	// stw r10,572(r30)
	PPC_STORE_U32(ctx.r30.u32 + 572, ctx.r10.u32);
	// stw r9,576(r30)
	PPC_STORE_U32(ctx.r30.u32 + 576, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_828B3178"))) PPC_WEAK_FUNC(sub_828B3178);
PPC_FUNC_IMPL(__imp__sub_828B3178) {
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
	// lwz r11,204(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// std r9,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r9.u64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x828b31b0
	if (!ctx.cr6.eq) goto loc_828B31B0;
	// lwz r10,800(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x828b31b0
	if (ctx.cr6.eq) goto loc_828B31B0;
	// lwz r11,1608(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1608);
loc_828B31B0:
	// lwz r10,848(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x828b31c4
	if (ctx.cr6.eq) goto loc_828B31C4;
loc_828B31BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x828b323c
	goto loc_828B323C;
loc_828B31C4:
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x828b31d4
	if (!ctx.cr6.eq) goto loc_828B31D4;
	// lwz r11,1536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1536);
loc_828B31D4:
	// lwz r3,1540(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1540);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828b320c
	if (ctx.cr6.eq) goto loc_828B320C;
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x828b320c
	if (ctx.cr6.eq) goto loc_828B320C;
	// lwz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x829c2330
	ctx.lr = 0x828B3204;
	sub_829C2330(ctx, base);
	// lwz r11,1540(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1540);
	// lwz r4,836(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 836);
loc_828B320C:
	// lwz r11,848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x828b321c
	if (!ctx.cr6.eq) goto loc_828B321C;
	// stw r11,848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 848, ctx.r11.u32);
loc_828B321C:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x828b31bc
	if (ctx.cr6.eq) goto loc_828B31BC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1092(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1092);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B3238;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_828B323C:
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

__attribute__((alias("__imp__sub_828B3250"))) PPC_WEAK_FUNC(sub_828B3250);
PPC_FUNC_IMPL(__imp__sub_828B3250) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x828B3258;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// std r6,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r6.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r8,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r8.u64);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x828b32d8
	if (ctx.cr6.eq) goto loc_828B32D8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,620(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 620);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B3294;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x828b32d8
	if (ctx.cr0.eq) goto loc_828B32D8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lwz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r9,168(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r30,1540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1540, ctx.r30.u32);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r6,r9,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,1096(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1096);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B32D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1540, ctx.r11.u32);
loc_828B32D8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828B32E0"))) PPC_WEAK_FUNC(sub_828B32E0);
PPC_FUNC_IMPL(__imp__sub_828B32E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,800(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 800);
	// std r6,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r6.u64);
	// std r8,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r8.u64);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x828b3328
	if (ctx.cr6.eq) goto loc_828B3328;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// lwz r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r9,136(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r5,r9,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,1116(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B3328;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828B3328:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828B3338"))) PPC_WEAK_FUNC(sub_828B3338);
PPC_FUNC_IMPL(__imp__sub_828B3338) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x828B3340;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r5,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r5.u64);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r30,1540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1540, ctx.r30.u32);
	// lwz r11,824(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 824);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x828b3404
	if (!ctx.cr6.eq) goto loc_828B3404;
	// lwz r11,816(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 816);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x828b3404
	if (!ctx.cr6.eq) goto loc_828B3404;
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
	// bne cr6,0x828b3404
	if (!ctx.cr6.eq) goto loc_828B3404;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r31,572
	ctx.r3.s64 = ctx.r31.s64 + 572;
	// lfs f1,16668(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16668);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82332e18
	ctx.lr = 0x828B339C;
	sub_82332E18(ctx, base);
	// lfs f0,1520(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1520);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,628(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	// lfs f13,1512(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1512);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f12,572(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	ctx.f12.f64 = double(temp.f32);
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// lfs f11,576(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfd f13,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f13.u64);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stfs f11,124(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// ld r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r10,1532(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1532);
	// lwz r5,1536(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1536);
	// ld r6,620(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 620);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// lfs f13,580(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// rldicr r9,r11,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x829c21d0
	ctx.lr = 0x828B3404;
	sub_829C21D0(ctx, base);
loc_828B3404:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r10,232(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
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
	ctx.lr = 0x828B3430;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r5,1492(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,888(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 888);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B344C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,1540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1540, ctx.r29.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828B3458"))) PPC_WEAK_FUNC(sub_828B3458);
PPC_FUNC_IMPL(__imp__sub_828B3458) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f0,620(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,620(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 620);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,624(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 624);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f11,628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,628(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 628);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f1,16668(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16668);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82332e18
	ctx.lr = 0x828B34B4;
	sub_82332E18(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r8,0
	ctx.r8.s64 = 0;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,856(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 856);
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B34E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_828B34F8"))) PPC_WEAK_FUNC(sub_828B34F8);
PPC_FUNC_IMPL(__imp__sub_828B34F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// std r5,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r5.u64);
	// lfs f3,1520(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1520);
	ctx.f3.f64 = double(temp.f32);
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lfs f2,1516(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1516);
	ctx.f2.f64 = double(temp.f32);
	// lwz r6,1532(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1532);
	// lfs f1,1512(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1512);
	ctx.f1.f64 = double(temp.f32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// lwz r11,872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 872);
	// rldicr r9,r9,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B353C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828B3550"))) PPC_WEAK_FUNC(sub_828B3550);
PPC_FUNC_IMPL(__imp__sub_828B3550) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x82a4cd78
	ctx.lr = 0x828B3574;
	sub_82A4CD78(ctx, base);
	// rlwinm r11,r3,1,16,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFE;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x82a4cd78
	ctx.lr = 0x828B3580;
	sub_82A4CD78(ctx, base);
	// rlwinm r11,r3,1,16,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFE;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82a4cd78
	ctx.lr = 0x828B358C;
	sub_82A4CD78(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r3,1,16,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFE;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,316(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 316);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B35AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82a4cd78
	ctx.lr = 0x828B35B0;
	sub_82A4CD78(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// li r11,932
	ctx.r11.s64 = 932;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// lfs f31,17132(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17132);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fmsubs f0,f0,f31,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64 - ctx.f30.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.f0.u32);
	// bl 0x82a4cd78
	ctx.lr = 0x828B35E4;
	sub_82A4CD78(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// li r10,928
	ctx.r10.s64 = 928;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fmsubs f0,f0,f31,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64 - ctx.f30.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.f0.u32);
	// bl 0x82a4cd78
	ctx.lr = 0x828B3610;
	sub_82A4CD78(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// li r10,936
	ctx.r10.s64 = 936;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fmsubs f0,f0,f31,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64 - ctx.f30.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.f0.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-32(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828B3658"))) PPC_WEAK_FUNC(sub_828B3658);
PPC_FUNC_IMPL(__imp__sub_828B3658) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-26120(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26120);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828b3698
	if (!ctx.cr0.eq) goto loc_828B3698;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// stw r11,-26120(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26120, ctx.r11.u32);
	// addi r3,r9,-23948
	ctx.r3.s64 = ctx.r9.s64 + -23948;
	// bl 0x82816528
	ctx.lr = 0x828B3690;
	sub_82816528(ctx, base);
	// stw r3,-26124(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26124, ctx.r3.u32);
	// b 0x828b369c
	goto loc_828B369C;
loc_828B3698:
	// lwz r3,-26124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26124);
loc_828B369C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828B36B0"))) PPC_WEAK_FUNC(sub_828B36B0);
PPC_FUNC_IMPL(__imp__sub_828B36B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x828b3700
	ctx.lr = 0x828B36D0;
	sub_828B3700(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B36E4;
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

__attribute__((alias("__imp__sub_828B3700"))) PPC_WEAK_FUNC(sub_828B3700);
PPC_FUNC_IMPL(__imp__sub_828B3700) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,20400
	ctx.r31.s64 = ctx.r11.s64 + 20400;
	// lwz r11,20404(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20404);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828b3748
	if (!ctx.cr0.eq) goto loc_828B3748;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-23816
	ctx.r9.s64 = ctx.r9.s64 + -23816;
	// stw r11,20404(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20404, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-16112
	ctx.r3.s64 = ctx.r11.s64 + -16112;
	// bl 0x82a4c758
	ctx.lr = 0x828B3748;
	sub_82A4C758(ctx, base);
loc_828B3748:
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

__attribute__((alias("__imp__sub_828B3760"))) PPC_WEAK_FUNC(sub_828B3760);
PPC_FUNC_IMPL(__imp__sub_828B3760) {
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
	// bl 0x829bc540
	ctx.lr = 0x828B3778;
	sub_829BC540(ctx, base);
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// addi r10,r10,23504
	ctx.r10.s64 = ctx.r10.s64 + 23504;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r9,r9,24672
	ctx.r9.s64 = ctx.r9.s64 + 24672;
	// addi r8,r8,764
	ctx.r8.s64 = ctx.r8.s64 + 764;
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r8,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r8.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r7,1504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1504, ctx.r7.u32);
	// lis r6,-32215
	ctx.r6.s64 = -2111242240;
	// stw r11,1508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1508, ctx.r11.u32);
	// li r8,12
	ctx.r8.s64 = 12;
	// stw r11,1512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1512, ctx.r11.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r11,1516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1516, ctx.r11.u32);
	// li r5,10
	ctx.r5.s64 = 10;
	// stw r11,1520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1520, ctx.r11.u32);
	// stw r11,1500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1500, ctx.r11.u32);
	// lfs f0,904(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,1592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1592, ctx.r10.u32);
	// stw r11,1596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1596, ctx.r11.u32);
	// stw r11,1600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1600, ctx.r11.u32);
	// stw r11,1604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1604, ctx.r11.u32);
	// stw r11,1608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1608, ctx.r11.u32);
	// stw r11,1588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1588, ctx.r11.u32);
	// stw r10,1616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1616, ctx.r10.u32);
	// stw r11,1620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1620, ctx.r11.u32);
	// stw r11,1624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1624, ctx.r11.u32);
	// stw r11,1628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1628, ctx.r11.u32);
	// stw r11,1632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1632, ctx.r11.u32);
	// stw r11,1612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1612, ctx.r11.u32);
	// stw r10,1640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1640, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,1644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1644, ctx.r11.u32);
	// stw r11,1648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1648, ctx.r11.u32);
	// stw r11,1652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1652, ctx.r11.u32);
	// stw r11,1656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1656, ctx.r11.u32);
	// stw r11,1636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1636, ctx.r11.u32);
	// stw r8,1664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1664, ctx.r8.u32);
	// stw r11,1668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1668, ctx.r11.u32);
	// stw r11,1672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1672, ctx.r11.u32);
	// stw r11,1676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1676, ctx.r11.u32);
	// stw r11,1680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1680, ctx.r11.u32);
	// stw r11,1660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1660, ctx.r11.u32);
	// stw r11,1684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1684, ctx.r11.u32);
	// stw r9,1688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1688, ctx.r9.u32);
	// stw r8,1696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1696, ctx.r8.u32);
	// stw r11,1700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1700, ctx.r11.u32);
	// stw r11,1704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1704, ctx.r11.u32);
	// stw r11,1708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1708, ctx.r11.u32);
	// stw r11,1712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1712, ctx.r11.u32);
	// stw r11,1692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1692, ctx.r11.u32);
	// stw r11,1716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1716, ctx.r11.u32);
	// stw r9,1720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1720, ctx.r9.u32);
	// stw r7,1728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1728, ctx.r7.u32);
	// stw r11,1732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1732, ctx.r11.u32);
	// stw r11,1736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1736, ctx.r11.u32);
	// stw r11,1740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1740, ctx.r11.u32);
	// stw r11,1744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1744, ctx.r11.u32);
	// stw r11,1724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1724, ctx.r11.u32);
	// stfs f0,1556(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1556, temp.u32);
	// stw r11,1544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1544, ctx.r11.u32);
	// stw r11,1408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1408, ctx.r11.u32);
	// stw r10,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r10.u32);
	// stw r11,1532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1532, ctx.r11.u32);
	// stw r11,1536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1536, ctx.r11.u32);
	// stw r10,1540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1540, ctx.r10.u32);
	// stw r10,828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 828, ctx.r10.u32);
	// stw r11,1492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1492, ctx.r11.u32);
	// stw r11,1580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1580, ctx.r11.u32);
	// stw r11,1552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1552, ctx.r11.u32);
	// stw r11,1560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1560, ctx.r11.u32);
	// stw r11,1496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1496, ctx.r11.u32);
	// stw r11,1548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1548, ctx.r11.u32);
	// stw r5,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r5.u32);
	// lwz r10,1204(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1204);
	// stw r11,1564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1564, ctx.r11.u32);
	// stw r11,1568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1568, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,1572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1572, ctx.r11.u32);
	// stw r11,1576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1576, ctx.r11.u32);
	// bne cr6,0x828b38d8
	if (!ctx.cr6.eq) goto loc_828B38D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c3628
	ctx.lr = 0x828B38D8;
	sub_829C3628(ctx, base);
loc_828B38D8:
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

__attribute__((alias("__imp__sub_828B38F0"))) PPC_WEAK_FUNC(sub_828B38F0);
PPC_FUNC_IMPL(__imp__sub_828B38F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x828B38F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r11,-32117
	ctx.r11.s64 = -2104819712;
	// stw r30,1568(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1568, ctx.r30.u32);
	// addi r31,r3,8
	ctx.r31.s64 = ctx.r3.s64 + 8;
	// addi r4,r11,14800
	ctx.r4.s64 = ctx.r11.s64 + 14800;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// bl 0x829c80b8
	ctx.lr = 0x828B3920;
	sub_829C80B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x828b39a8
	if (!ctx.cr0.eq) goto loc_828B39A8;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823f6760
	ctx.lr = 0x828B3930;
	sub_823F6760(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B3944;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82333900
	ctx.lr = 0x828B3950;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828b3994
	if (ctx.cr0.eq) goto loc_828B3994;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// stw r29,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r29.u32);
	// addi r9,r9,9436
	ctx.r9.s64 = ctx.r9.s64 + 9436;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// std r10,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r10.u64);
	// b 0x828b3998
	goto loc_828B3998;
loc_828B3994:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
loc_828B3998:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82410060
	ctx.lr = 0x828B39A4;
	sub_82410060(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_828B39A8:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f1,-27300(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27300);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B39C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828B39D0"))) PPC_WEAK_FUNC(sub_828B39D0);
PPC_FUNC_IMPL(__imp__sub_828B39D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1568(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// stw r11,1564(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1564, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828B39E8"))) PPC_WEAK_FUNC(sub_828B39E8);
PPC_FUNC_IMPL(__imp__sub_828B39E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x828B39F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// addi r11,r11,23504
	ctx.r11.s64 = ctx.r11.s64 + 23504;
	// lwz r3,1408(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// addi r10,r10,24672
	ctx.r10.s64 = ctx.r10.s64 + 24672;
	// addi r9,r9,764
	ctx.r9.s64 = ctx.r9.s64 + 764;
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
	// beq cr6,0x828b3a44
	if (ctx.cr6.eq) goto loc_828B3A44;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B3A40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,1408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1408, ctx.r28.u32);
loc_828B3A44:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c36c0
	ctx.lr = 0x828B3A4C;
	sub_829C36C0(ctx, base);
	// lwz r11,1712(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1712);
	// addi r30,r31,1692
	ctx.r30.s64 = ctx.r31.s64 + 1692;
	// stw r28,1708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1708, ctx.r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828b3a74
	if (ctx.cr6.eq) goto loc_828B3A74;
	// stw r28,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r28.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332c38
	ctx.lr = 0x828B3A74;
	sub_82332C38(ctx, base);
loc_828B3A74:
	// li r11,8
	ctx.r11.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
	// bl 0x823f6de0
	ctx.lr = 0x828B3A84;
	sub_823F6DE0(ctx, base);
	// addi r3,r31,1724
	ctx.r3.s64 = ctx.r31.s64 + 1724;
	// bl 0x82333960
	ctx.lr = 0x828B3A8C;
	sub_82333960(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8269b988
	ctx.lr = 0x828B3A94;
	sub_8269B988(ctx, base);
	// addi r3,r31,1660
	ctx.r3.s64 = ctx.r31.s64 + 1660;
	// bl 0x8269b988
	ctx.lr = 0x828B3A9C;
	sub_8269B988(ctx, base);
	// addi r3,r31,1636
	ctx.r3.s64 = ctx.r31.s64 + 1636;
	// bl 0x8239d768
	ctx.lr = 0x828B3AA4;
	sub_8239D768(ctx, base);
	// addi r30,r31,1612
	ctx.r30.s64 = ctx.r31.s64 + 1612;
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r5,1628(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1628);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332ca8
	ctx.lr = 0x828B3AC0;
	sub_82332CA8(ctx, base);
	// lwz r3,1624(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1624);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828b3ad0
	if (ctx.cr6.eq) goto loc_828B3AD0;
	// bl 0x82332db8
	ctx.lr = 0x828B3AD0;
	sub_82332DB8(ctx, base);
loc_828B3AD0:
	// stw r28,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r28.u32);
	// addi r29,r31,1588
	ctx.r29.s64 = ctx.r31.s64 + 1588;
	// stw r28,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r28.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r28,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r28.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,1604(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1604);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332ca8
	ctx.lr = 0x828B3AF8;
	sub_82332CA8(ctx, base);
	// lwz r3,1600(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1600);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828b3b08
	if (ctx.cr6.eq) goto loc_828B3B08;
	// bl 0x82332db8
	ctx.lr = 0x828B3B08;
	sub_82332DB8(ctx, base);
loc_828B3B08:
	// stw r28,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r28.u32);
	// addi r3,r31,1500
	ctx.r3.s64 = ctx.r31.s64 + 1500;
	// stw r28,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r28.u32);
	// stw r28,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r28.u32);
	// bl 0x82333960
	ctx.lr = 0x828B3B1C;
	sub_82333960(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829bc9e8
	ctx.lr = 0x828B3B24;
	sub_829BC9E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828B3B30"))) PPC_WEAK_FUNC(sub_828B3B30);
PPC_FUNC_IMPL(__imp__sub_828B3B30) {
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
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-14616
	ctx.r3.s64 = ctx.r11.s64 + -14616;
	// bl 0x824b99b0
	ctx.lr = 0x828B3B58;
	sub_824B99B0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1024);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B3B6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829bd978
	ctx.lr = 0x828B3B74;
	sub_829BD978(ctx, base);
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

__attribute__((alias("__imp__sub_828B3B88"))) PPC_WEAK_FUNC(sub_828B3B88);
PPC_FUNC_IMPL(__imp__sub_828B3B88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,1408(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1408);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x828b3c10
	if (!ctx.cr6.eq) goto loc_828B3C10;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-23772
	ctx.r3.s64 = ctx.r10.s64 + -23772;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// addi r31,r11,1268
	ctx.r31.s64 = ctx.r11.s64 + 1268;
	// bl 0x82816528
	ctx.lr = 0x828B3BCC;
	sub_82816528(ctx, base);
	// li r7,-1
	ctx.r7.s64 = -1;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825b7c80
	ctx.lr = 0x828B3BE4;
	sub_825B7C80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x828b3c10
	if (ctx.cr0.eq) goto loc_828B3C10;
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x82333900
	ctx.lr = 0x828B3BF4;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828b3c08
	if (ctx.cr0.eq) goto loc_828B3C08;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82976538
	ctx.lr = 0x828B3C04;
	sub_82976538(ctx, base);
	// b 0x828b3c0c
	goto loc_828B3C0C;
loc_828B3C08:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828B3C0C:
	// stw r3,1408(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1408, ctx.r3.u32);
loc_828B3C10:
	// lwz r3,1408(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1408);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828B3C30"))) PPC_WEAK_FUNC(sub_828B3C30);
PPC_FUNC_IMPL(__imp__sub_828B3C30) {
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
	// bl 0x829be2e8
	ctx.lr = 0x828B3C54;
	sub_829BE2E8(ctx, base);
	// lwz r11,1560(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1560);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828b3c7c
	if (ctx.cr6.eq) goto loc_828B3C7C;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lwz r10,13024(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13024);
	// lwz r10,948(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 948);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x828b3c7c
	if (ctx.cr6.eq) goto loc_828B3C7C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,1560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1560, ctx.r11.u32);
loc_828B3C7C:
	// lwz r11,1584(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1584);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828b3d70
	if (ctx.cr6.eq) goto loc_828B3D70;
	// lbz r11,212(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 212);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x828b3d70
	if (ctx.cr0.eq) goto loc_828B3D70;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B3CA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x828b3d70
	if (ctx.cr0.eq) goto loc_828B3D70;
	// lwz r11,1548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1548);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x828b3d70
	if (!ctx.cr6.eq) goto loc_828B3D70;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// addi r30,r11,-18228
	ctx.r30.s64 = ctx.r11.s64 + -18228;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,-18228(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18228);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B3CD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828b3b88
	ctx.lr = 0x828B3CE0;
	sub_828B3B88(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,1408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1408, ctx.r3.u32);
	// beq 0x828b3d34
	if (ctx.cr0.eq) goto loc_828B3D34;
	// lis r11,30
	ctx.r11.s64 = 1966080;
	// lwz r10,1544(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1544);
	// ori r11,r11,33920
	ctx.r11.u64 = ctx.r11.u64 | 33920;
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// lwz r3,1408(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B3D14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1408(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// bl 0x828b4110
	ctx.lr = 0x828B3D20;
	sub_828B4110(ctx, base);
	// lwz r3,1408(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B3D34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828B3D34:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f13,1556(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1556);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x828b3d5c
	if (!ctx.cr6.gt) goto loc_828B3D5C;
	// fsubs f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f31.f64));
	// stfs f13,1556(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1556, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x828b3d5c
	if (ctx.cr6.gt) goto loc_828B3D5C;
	// stfs f0,1556(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1556, temp.u32);
loc_828B3D5C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B3D70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828B3D70:
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

__attribute__((alias("__imp__sub_828B3D90"))) PPC_WEAK_FUNC(sub_828B3D90);
PPC_FUNC_IMPL(__imp__sub_828B3D90) {
	PPC_FUNC_PROLOGUE();
	// b 0x829bdd48
	sub_829BDD48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828B3D98"))) PPC_WEAK_FUNC(sub_828B3D98);
PPC_FUNC_IMPL(__imp__sub_828B3D98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x828B3DA0;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x829bdc10
	ctx.lr = 0x828B3DAC;
	sub_829BDC10(ctx, base);
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r29,32(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r11,1580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1580);
	// lwz r10,400(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 400);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lwz r3,444(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 444);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// bl 0x8277d8f8
	ctx.lr = 0x828B3DE8;
	sub_8277D8F8(ctx, base);
	// lwz r3,444(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 444);
	// lbz r11,212(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 212);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x828b3e08
	if (ctx.cr0.eq) goto loc_828B3E08;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8277da38
	ctx.lr = 0x828B3E00;
	sub_8277DA38(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828b3ea0
	ctx.lr = 0x828B3E08;
	sub_828B3EA0(ctx, base);
loc_828B3E08:
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r29,396(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 396);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x828b3e94
	if (ctx.cr6.eq) goto loc_828B3E94;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// lwz r3,444(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 444);
	// li r7,-1
	ctx.r7.s64 = -1;
	// addi r5,r10,-24080
	ctx.r5.s64 = ctx.r10.s64 + -24080;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r31,1768
	ctx.r4.s64 = ctx.r31.s64 + 1768;
	// bl 0x8277dce0
	ctx.lr = 0x828B3E38;
	sub_8277DCE0(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r3,444(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 444);
	// bl 0x8277db50
	ctx.lr = 0x828B3E50;
	sub_8277DB50(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// sth r29,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r29.u16);
	// addi r4,r11,-24068
	ctx.r4.s64 = ctx.r11.s64 + -24068;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8277b880
	ctx.lr = 0x828B3E68;
	sub_8277B880(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8277c288
	ctx.lr = 0x828B3E7C;
	sub_8277C288(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,1580(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1580);
	// bl 0x82783b00
	ctx.lr = 0x828B3E88;
	sub_82783B00(ctx, base);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stw r28,396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 396, ctx.r28.u32);
loc_828B3E94:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828B3EA0"))) PPC_WEAK_FUNC(sub_828B3EA0);
PPC_FUNC_IMPL(__imp__sub_828B3EA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x828B3EA8;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r11,948(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 948);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828b3f7c
	if (ctx.cr6.eq) goto loc_828B3F7C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B3ED8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x828b3f7c
	if (ctx.cr0.eq) goto loc_828B3F7C;
	// lwz r11,1548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1548);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828b3ef8
	if (ctx.cr6.eq) goto loc_828B3EF8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,1548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1548, ctx.r11.u32);
	// b 0x828b3f7c
	goto loc_828B3F7C;
loc_828B3EF8:
	// lwz r11,1652(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1652);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x828b3f7c
	if (!ctx.cr6.gt) goto loc_828B3F7C;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r30,0
	ctx.r30.s64 = 0;
	// lfs f31,912(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	ctx.f31.f64 = double(temp.f32);
loc_828B3F14:
	// lwz r11,1648(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1648);
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r10,512(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 512);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x828b3f68
	if (ctx.cr6.eq) goto loc_828B3F68;
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lis r11,30
	ctx.r11.s64 = 1966080;
	// lwz r10,1544(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1544);
	// ori r11,r11,33920
	ctx.r11.u64 = ctx.r11.u64 | 33920;
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// lfs f0,496(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 496);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lwz r10,296(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 296);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// stw r11,544(r3)
	PPC_STORE_U32(ctx.r3.u32 + 544, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828B3F68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828B3F68:
	// lwz r11,1652(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1652);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828b3f14
	if (ctx.cr6.lt) goto loc_828B3F14;
loc_828B3F7C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828B3F88"))) PPC_WEAK_FUNC(sub_828B3F88);
PPC_FUNC_IMPL(__imp__sub_828B3F88) {
	PPC_FUNC_PROLOGUE();
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// bne cr6,0x828b3fbc
	if (!ctx.cr6.eq) goto loc_828B3FBC;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_828B3FBC:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x828b4014
	if (!ctx.cr6.gt) goto loc_828B4014;
	// li r10,24
	ctx.r10.s64 = 24;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r5,r9,-2476
	ctx.r5.s64 = ctx.r9.s64 + -2476;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82816e00
	ctx.lr = 0x828B3FF8;
	sub_82816E00(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bge cr6,0x828b4008
	if (!ctx.cr6.lt) goto loc_828B4008;
	// li r11,1
	ctx.r11.s64 = 1;
loc_828B4008:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// bl 0x82400988
	ctx.lr = 0x828B4014;
	sub_82400988(ctx, base);
loc_828B4014:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333960
	ctx.lr = 0x828B401C;
	sub_82333960(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_828B4038"))) PPC_WEAK_FUNC(sub_828B4038);
PPC_FUNC_IMPL(__imp__sub_828B4038) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x828b5100
	ctx.lr = 0x828B4054;
	sub_828B5100(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828b4080
	if (ctx.cr0.eq) goto loc_828B4080;
	// bl 0x828b5a00
	ctx.lr = 0x828B4060;
	sub_828B5A00(ctx, base);
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
	ctx.lr = 0x828B4078;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x828b4084
	if (!ctx.cr0.eq) goto loc_828B4084;
loc_828B4080:
	// li r31,0
	ctx.r31.s64 = 0;
loc_828B4084:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x828b40bc
	if (ctx.cr6.eq) goto loc_828B40BC;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lwz r3,504(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r7,r11,17180
	ctx.r7.s64 = ctx.r11.s64 + 17180;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,17
	ctx.r4.s64 = 17;
	// bl 0x8277cc30
	ctx.lr = 0x828B40A8;
	sub_8277CC30(ctx, base);
	// stfs f31,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,504(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// li r4,17
	ctx.r4.s64 = 17;
	// bl 0x8277cba0
	ctx.lr = 0x828B40BC;
	sub_8277CBA0(ctx, base);
loc_828B40BC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_828B40D8"))) PPC_WEAK_FUNC(sub_828B40D8);
PPC_FUNC_IMPL(__imp__sub_828B40D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lfs f0,496(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 496);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,496(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 496);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x828b40fc
	if (!ctx.cr6.gt) goto loc_828B40FC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_828B40FC:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828B4110"))) PPC_WEAK_FUNC(sub_828B4110);
PPC_FUNC_IMPL(__imp__sub_828B4110) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x828B4118;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r25,r11,-15140
	ctx.r25.s64 = ctx.r11.s64 + -15140;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,-15140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15140);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B4140;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1560(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1560);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bgt cr6,0x828b4310
	if (ctx.cr6.gt) goto loc_828B4310;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,1628(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1628);
	// li r9,4
	ctx.r9.s64 = 4;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// ble cr6,0x828b41f0
	if (!ctx.cr6.gt) goto loc_828B41F0;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_828B4188:
	// lwz r11,1624(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1624);
	// lwzx r30,r29,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x828b41d8
	if (ctx.cr6.eq) goto loc_828B41D8;
	// lwz r11,512(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 512);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828b41d8
	if (ctx.cr6.eq) goto loc_828B41D8;
	// lwz r11,648(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 648);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828b41d8
	if (ctx.cr6.eq) goto loc_828B41D8;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82332d50
	ctx.lr = 0x828B41C4;
	sub_82332D50(ctx, base);
	// lwz r27,92(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828b41d8
	if (ctx.cr0.eq) goto loc_828B41D8;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
loc_828B41D8:
	// lwz r11,1628(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1628);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828b4188
	if (ctx.cr6.lt) goto loc_828B4188;
	// lwz r30,96(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_828B41F0:
	// lis r11,-32117
	ctx.r11.s64 = -2104819712;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r6,r11,16600
	ctx.r6.s64 = ctx.r11.s64 + 16600;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a4d558
	ctx.lr = 0x828B4208;
	sub_82A4D558(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x828b42e8
	if (!ctx.cr6.gt) goto loc_828B42E8;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// addi r31,r11,7896
	ctx.r31.s64 = ctx.r11.s64 + 7896;
loc_828B421C:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,668(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 668);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x828b42a8
	if (ctx.cr6.lt) goto loc_828B42A8;
	// beq cr6,0x828b4270
	if (ctx.cr6.eq) goto loc_828B4270;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bge cr6,0x828b42dc
	if (!ctx.cr6.lt) goto loc_828B42DC;
	// lwz r10,592(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 592);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x828b424c
	if (ctx.cr6.eq) goto loc_828B424C;
	// lwz r6,588(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 588);
	// b 0x828b4250
	goto loc_828B4250;
loc_828B424C:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
loc_828B4250:
	// addi r8,r11,652
	ctx.r8.s64 = ctx.r11.s64 + 652;
	// lwz r9,676(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 676);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r7,648(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 648);
	// lfs f2,572(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 572);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,568(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 568);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x829674a0
	ctx.lr = 0x828B426C;
	sub_829674A0(ctx, base);
	// b 0x828b42dc
	goto loc_828B42DC;
loc_828B4270:
	// lwz r10,592(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 592);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x828b4284
	if (ctx.cr6.eq) goto loc_828B4284;
	// lwz r6,588(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 588);
	// b 0x828b4288
	goto loc_828B4288;
loc_828B4284:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
loc_828B4288:
	// addi r8,r11,652
	ctx.r8.s64 = ctx.r11.s64 + 652;
	// lwz r9,676(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 676);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r7,648(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 648);
	// lfs f2,572(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 572);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,568(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 568);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82967280
	ctx.lr = 0x828B42A4;
	sub_82967280(ctx, base);
	// b 0x828b42dc
	goto loc_828B42DC;
loc_828B42A8:
	// lwz r10,592(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 592);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x828b42bc
	if (ctx.cr6.eq) goto loc_828B42BC;
	// lwz r6,588(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 588);
	// b 0x828b42c0
	goto loc_828B42C0;
loc_828B42BC:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
loc_828B42C0:
	// addi r8,r11,652
	ctx.r8.s64 = ctx.r11.s64 + 652;
	// lwz r9,676(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 676);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r7,648(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 648);
	// lfs f2,572(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 572);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,568(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 568);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x829673c0
	ctx.lr = 0x828B42DC;
	sub_829673C0(ctx, base);
loc_828B42DC:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// bne 0x828b421c
	if (!ctx.cr0.eq) goto loc_828B421C;
loc_828B42E8:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82332ca8
	ctx.lr = 0x828B4300;
	sub_82332CA8(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828b4310
	if (ctx.cr6.eq) goto loc_828B4310;
	// bl 0x82332db8
	ctx.lr = 0x828B4310;
	sub_82332DB8(ctx, base);
loc_828B4310:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B4324;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828B4330"))) PPC_WEAK_FUNC(sub_828B4330);
PPC_FUNC_IMPL(__imp__sub_828B4330) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x828B4338;
	__savegprlr_29(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,-23108
	ctx.r4.s64 = ctx.r11.s64 + -23108;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x8233a258
	ctx.lr = 0x828B4354;
	sub_8233A258(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r30,r11,7896
	ctx.r30.s64 = ctx.r11.s64 + 7896;
	// beq cr6,0x828b4374
	if (ctx.cr6.eq) goto loc_828B4374;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// b 0x828b4378
	goto loc_828B4378;
loc_828B4374:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
loc_828B4378:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82419348
	ctx.lr = 0x828B4380;
	sub_82419348(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,-23756
	ctx.r4.s64 = ctx.r11.s64 + -23756;
	// bl 0x8233a258
	ctx.lr = 0x828B4390;
	sub_8233A258(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828b43a4
	if (ctx.cr6.eq) goto loc_828B43A4;
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// b 0x828b43a8
	goto loc_828B43A8;
loc_828B43A4:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
loc_828B43A8:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82419348
	ctx.lr = 0x828B43B4;
	sub_82419348(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82400b48
	ctx.lr = 0x828B43C0;
	sub_82400B48(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x828B43C8;
	sub_82333960(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82333960
	ctx.lr = 0x828B43D0;
	sub_82333960(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82333960
	ctx.lr = 0x828B43D8;
	sub_82333960(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82333960
	ctx.lr = 0x828B43E0;
	sub_82333960(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828B43E8"))) PPC_WEAK_FUNC(sub_828B43E8);
PPC_FUNC_IMPL(__imp__sub_828B43E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x828B43F0;
	__savegprlr_25(ctx, base);
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r25,r11,7896
	ctx.r25.s64 = ctx.r11.s64 + 7896;
	// lwz r10,16(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x828b4418
	if (ctx.cr6.eq) goto loc_828B4418;
	// lwz r3,12(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// b 0x828b441c
	goto loc_828B441C;
loc_828B4418:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_828B441C:
	// bl 0x828165a8
	ctx.lr = 0x828B4420;
	sub_828165A8(ctx, base);
	// stw r3,1524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1524, ctx.r3.u32);
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r29,r11,-14640
	ctx.r29.s64 = ctx.r11.s64 + -14640;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82332d50
	ctx.lr = 0x828B4440;
	sub_82332D50(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828b4454
	if (ctx.cr0.eq) goto loc_828B4454;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
loc_828B4454:
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x828b46c0
	if (ctx.cr6.eq) goto loc_828B46C0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B447C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// addi r28,r11,-18228
	ctx.r28.s64 = ctx.r11.s64 + -18228;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r11,444(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 444);
	// stw r11,1584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1584, ctx.r11.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B44A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,1584(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1584);
	// lwz r4,1580(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1580);
	// bl 0x8277e010
	ctx.lr = 0x828B44B4;
	sub_8277E010(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,1584(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1584);
	// bl 0x8277df00
	ctx.lr = 0x828B44C0;
	sub_8277DF00(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r3,1580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1580, ctx.r3.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// bl 0x828b4330
	ctx.lr = 0x828B44F4;
	sub_828B4330(ctx, base);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// lwz r4,1584(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1584);
	// bl 0x82a24278
	ctx.lr = 0x828B4500;
	sub_82A24278(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x828b4514
	if (!ctx.cr6.eq) goto loc_828B4514;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_828B4514:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8249cc38
	ctx.lr = 0x828B451C;
	sub_8249CC38(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// lwz r5,1580(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1580);
	// bl 0x82a24688
	ctx.lr = 0x828B452C;
	sub_82A24688(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8249cbb0
	ctx.lr = 0x828B4540;
	sub_8249CBB0(ctx, base);
	// clrlwi. r27,r27,24
	ctx.r27.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x828b4600
	if (ctx.cr0.eq) goto loc_828B4600;
	// lwz r10,1580(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1580);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r4,5
	ctx.r4.s64 = 5;
	// stw r11,1552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1552, ctx.r11.u32);
	// stb r11,557(r10)
	PPC_STORE_U8(ctx.r10.u32 + 557, ctx.r11.u8);
	// lwz r5,1580(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1580);
	// lwz r3,1584(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1584);
	// stw r11,1752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1752, ctx.r11.u32);
	// stb r11,556(r5)
	PPC_STORE_U8(ctx.r5.u32 + 556, ctx.r11.u8);
	// bl 0x8277e630
	ctx.lr = 0x828B4570;
	sub_8277E630(ctx, base);
	// lwz r3,1580(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1580);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r30,r11,-23748
	ctx.r30.s64 = ctx.r11.s64 + -23748;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B458C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,1584(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1584);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x8277de68
	ctx.lr = 0x828B45A0;
	sub_8277DE68(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-23740
	ctx.r4.s64 = ctx.r11.s64 + -23740;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1048(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1048);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B45C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// stw r6,1768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1768, ctx.r6.u32);
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// beq cr6,0x828b4684
	if (ctx.cr6.eq) goto loc_828B4684;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,-31946
	ctx.r9.s64 = -2093613056;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r9,-584
	ctx.r4.s64 = ctx.r9.s64 + -584;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,19184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19184);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,1080(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1080);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B45FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x828b4684
	goto loc_828B4684;
loc_828B4600:
	// lwz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r11,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x828b4628
	if (ctx.cr6.eq) goto loc_828B4628;
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82332c38
	ctx.lr = 0x828B4628;
	sub_82332C38(ctx, base);
loc_828B4628:
	// lwz r4,1580(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1580);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x828b4640
	if (ctx.cr6.eq) goto loc_828B4640;
	// lwz r3,1584(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1584);
	// bl 0x8277e010
	ctx.lr = 0x828B463C;
	sub_8277E010(ctx, base);
	// stw r30,1580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1580, ctx.r30.u32);
loc_828B4640:
	// lwz r11,1584(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1584);
	// stb r30,212(r11)
	PPC_STORE_U8(ctx.r11.u32 + 212, ctx.r30.u8);
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828b465c
	if (ctx.cr6.eq) goto loc_828B465C;
	// lwz r4,12(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// b 0x828b4660
	goto loc_828B4660;
loc_828B465C:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_828B4660:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82409058
	ctx.lr = 0x828B4668;
	sub_82409058(ctx, base);
	// lwz r3,292(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// addi r11,r1,164
	ctx.r11.s64 = ctx.r1.s64 + 164;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x828b4684
	if (ctx.cr6.eq) goto loc_828B4684;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828b4684
	if (ctx.cr6.eq) goto loc_828B4684;
	// bl 0x82332db8
	ctx.lr = 0x828B4684;
	sub_82332DB8(ctx, base);
loc_828B4684:
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82a24430
	ctx.lr = 0x828B468C;
	sub_82A24430(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x828B4694;
	sub_82333960(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B46A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_828B46AC:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82333960
	ctx.lr = 0x828B46B4;
	sub_82333960(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
loc_828B46C0:
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x828b46ac
	goto loc_828B46AC;
}

__attribute__((alias("__imp__sub_828B46C8"))) PPC_WEAK_FUNC(sub_828B46C8);
PPC_FUNC_IMPL(__imp__sub_828B46C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82333960
	ctx.lr = 0x828B46DC;
	sub_82333960(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828B46F0"))) PPC_WEAK_FUNC(sub_828B46F0);
PPC_FUNC_IMPL(__imp__sub_828B46F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x828B46F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,1516(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1516);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828b4718
	if (ctx.cr6.eq) goto loc_828B4718;
	// lwz r4,1512(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1512);
	// b 0x828b4720
	goto loc_828B4720;
loc_828B4718:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r4,r11,7896
	ctx.r4.s64 = ctx.r11.s64 + 7896;
loc_828B4720:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82409058
	ctx.lr = 0x828B4728;
	sub_82409058(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwz r3,13024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r4,132(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B4750;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x828b476c
	if (ctx.cr6.eq) goto loc_828B476C;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828b476c
	if (ctx.cr6.eq) goto loc_828B476C;
	// bl 0x82332db8
	ctx.lr = 0x828B476C;
	sub_82332DB8(ctx, base);
loc_828B476C:
	// lwz r11,1580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1580);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828b47bc
	if (ctx.cr6.eq) goto loc_828B47BC;
	// lis r29,-31962
	ctx.r29.s64 = -2094661632;
	// addi r28,r29,-18228
	ctx.r28.s64 = ctx.r29.s64 + -18228;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,-18228(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -18228);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B4794;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,1580(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1580);
	// lwz r3,1584(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1584);
	// bl 0x8277e010
	ctx.lr = 0x828B47A0;
	sub_8277E010(ctx, base);
	// stw r30,1580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1580, ctx.r30.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,-18228(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -18228);
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B47BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828B47BC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828B47C8"))) PPC_WEAK_FUNC(sub_828B47C8);
PPC_FUNC_IMPL(__imp__sub_828B47C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x828B47D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828b47f4
	if (ctx.cr6.eq) goto loc_828B47F4;
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// b 0x828b47fc
	goto loc_828B47FC;
loc_828B47F4:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r4,r11,7896
	ctx.r4.s64 = ctx.r11.s64 + 7896;
loc_828B47FC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82409058
	ctx.lr = 0x828B4804;
	sub_82409058(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1036);
	// lwz r4,132(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B4824;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x828b4848
	if (ctx.cr6.eq) goto loc_828B4848;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828b4848
	if (ctx.cr6.eq) goto loc_828B4848;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82332db8
	ctx.lr = 0x828B4848;
	sub_82332DB8(ctx, base);
loc_828B4848:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82333960
	ctx.lr = 0x828B4850;
	sub_82333960(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828B4860"))) PPC_WEAK_FUNC(sub_828B4860);
PPC_FUNC_IMPL(__imp__sub_828B4860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x828B4868;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r31,r11,-18228
	ctx.r31.s64 = ctx.r11.s64 + -18228;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r11,-18228(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18228);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B4898;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,1584(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1584);
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r30,1768
	ctx.r4.s64 = ctx.r30.s64 + 1768;
	// beq cr6,0x828b48b8
	if (ctx.cr6.eq) goto loc_828B48B8;
	// addi r4,r1,164
	ctx.r4.s64 = ctx.r1.s64 + 164;
loc_828B48B8:
	// bl 0x8277dce0
	ctx.lr = 0x828B48BC;
	sub_8277DCE0(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,1580(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1580);
	// bl 0x82783b00
	ctx.lr = 0x828B48CC;
	sub_82783B00(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B48E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828B48F0"))) PPC_WEAK_FUNC(sub_828B48F0);
PPC_FUNC_IMPL(__imp__sub_828B48F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x828B48F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828b491c
	if (ctx.cr6.eq) goto loc_828B491C;
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// b 0x828b4924
	goto loc_828B4924;
loc_828B491C:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r4,r11,7896
	ctx.r4.s64 = ctx.r11.s64 + 7896;
loc_828B4924:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82409058
	ctx.lr = 0x828B492C;
	sub_82409058(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,132(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// bl 0x828b4978
	ctx.lr = 0x828B4940;
	sub_828B4978(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x828b4964
	if (ctx.cr6.eq) goto loc_828B4964;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828b4964
	if (ctx.cr6.eq) goto loc_828B4964;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82332db8
	ctx.lr = 0x828B4964;
	sub_82332DB8(ctx, base);
loc_828B4964:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82333960
	ctx.lr = 0x828B496C;
	sub_82333960(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828B4978"))) PPC_WEAK_FUNC(sub_828B4978);
PPC_FUNC_IMPL(__imp__sub_828B4978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x828B4980;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,1580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1580);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828b4a04
	if (ctx.cr6.eq) goto loc_828B4A04;
	// lis r28,-31962
	ctx.r28.s64 = -2094661632;
	// addi r27,r28,-18228
	ctx.r27.s64 = ctx.r28.s64 + -18228;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,-18228(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -18228);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B49B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8249d188
	ctx.lr = 0x828B49C4;
	sub_8249D188(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,1580(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1580);
	// bl 0x82784118
	ctx.lr = 0x828B49D4;
	sub_82784118(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8249d108
	ctx.lr = 0x828B49E8;
	sub_8249D108(ctx, base);
	// lwz r11,-18228(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -18228);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B49FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x828b4a08
	goto loc_828B4A08;
loc_828B4A04:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_828B4A08:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828B4A10"))) PPC_WEAK_FUNC(sub_828B4A10);
PPC_FUNC_IMPL(__imp__sub_828B4A10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x828B4A18;
	__savegprlr_26(ctx, base);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,1580(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1580);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828b4b5c
	if (ctx.cr6.eq) goto loc_828B4B5C;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// addi r30,r11,-18228
	ctx.r30.s64 = ctx.r11.s64 + -18228;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,-18228(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18228);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B4A54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r31,r11,7896
	ctx.r31.s64 = ctx.r11.s64 + 7896;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828b4a70
	if (ctx.cr6.eq) goto loc_828B4A70;
	// lwz r4,12(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// b 0x828b4a74
	goto loc_828B4A74;
loc_828B4A70:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_828B4A74:
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82409058
	ctx.lr = 0x828B4A7C;
	sub_82409058(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,132(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// bl 0x8249d188
	ctx.lr = 0x828B4A8C;
	sub_8249D188(ctx, base);
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828b4aa0
	if (ctx.cr6.eq) goto loc_828B4AA0;
	// lwz r4,12(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// b 0x828b4aa4
	goto loc_828B4AA4;
loc_828B4AA0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_828B4AA4:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82409058
	ctx.lr = 0x828B4AAC;
	sub_82409058(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,132(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// bl 0x8249d188
	ctx.lr = 0x828B4ABC;
	sub_8249D188(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r3,1580(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1580);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x82784278
	ctx.lr = 0x828B4AD0;
	sub_82784278(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8249d108
	ctx.lr = 0x828B4AE4;
	sub_8249D108(ctx, base);
	// lwz r3,276(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// addi r11,r1,148
	ctx.r11.s64 = ctx.r1.s64 + 148;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x828b4b00
	if (ctx.cr6.eq) goto loc_828B4B00;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828b4b00
	if (ctx.cr6.eq) goto loc_828B4B00;
	// bl 0x82332db8
	ctx.lr = 0x828B4B00;
	sub_82332DB8(ctx, base);
loc_828B4B00:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8249d108
	ctx.lr = 0x828B4B10;
	sub_8249D108(ctx, base);
	// lwz r3,420(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	// addi r11,r1,292
	ctx.r11.s64 = ctx.r1.s64 + 292;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x828b4b2c
	if (ctx.cr6.eq) goto loc_828B4B2C;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828b4b2c
	if (ctx.cr6.eq) goto loc_828B4B2C;
	// bl 0x82332db8
	ctx.lr = 0x828B4B2C;
	sub_82332DB8(ctx, base);
loc_828B4B2C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B4B40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828B4B40:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82333960
	ctx.lr = 0x828B4B48;
	sub_82333960(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82333960
	ctx.lr = 0x828B4B50;
	sub_82333960(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
loc_828B4B5C:
	// li r31,-1
	ctx.r31.s64 = -1;
	// b 0x828b4b40
	goto loc_828B4B40;
}

__attribute__((alias("__imp__sub_828B4B68"))) PPC_WEAK_FUNC(sub_828B4B68);
PPC_FUNC_IMPL(__imp__sub_828B4B68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x828B4B70;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31962
	ctx.r28.s64 = -2094661632;
	// stw r6,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r6.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r27,r28,-18228
	ctx.r27.s64 = ctx.r28.s64 + -18228;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,-18228(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -18228);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B4BA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,172
	ctx.r4.s64 = ctx.r1.s64 + 172;
	// lwz r3,1584(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1584);
	// bl 0x8277db50
	ctx.lr = 0x828B4BAC;
	sub_8277DB50(ctx, base);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r7,r11,17180
	ctx.r7.s64 = ctx.r11.s64 + 17180;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x8277c650
	ctx.lr = 0x828B4BC4;
	sub_8277C650(ctx, base);
	// lwz r11,-18228(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -18228);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B4BD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828B4BE8"))) PPC_WEAK_FUNC(sub_828B4BE8);
PPC_FUNC_IMPL(__imp__sub_828B4BE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x828B4BF0;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r6,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r6.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8249d108
	ctx.lr = 0x828B4C14;
	sub_8249D108(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8249cbb0
	ctx.lr = 0x828B4C24;
	sub_8249CBB0(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828b4c38
	if (ctx.cr6.eq) goto loc_828B4C38;
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// b 0x828b4c40
	goto loc_828B4C40;
loc_828B4C38:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r31,r11,7896
	ctx.r31.s64 = ctx.r11.s64 + 7896;
loc_828B4C40:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a4cbe0
	ctx.lr = 0x828B4C48;
	sub_82A4CBE0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8249cc98
	ctx.lr = 0x828B4C58;
	sub_8249CC98(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8277b938
	ctx.lr = 0x828B4C64;
	sub_8277B938(ctx, base);
	// lis r31,-31962
	ctx.r31.s64 = -2094661632;
	// addi r28,r31,-18228
	ctx.r28.s64 = ctx.r31.s64 + -18228;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,-18228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -18228);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B4C80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,236
	ctx.r4.s64 = ctx.r1.s64 + 236;
	// lwz r3,1584(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1584);
	// bl 0x8277db50
	ctx.lr = 0x828B4C8C;
	sub_8277DB50(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8277cf90
	ctx.lr = 0x828B4C98;
	sub_8277CF90(ctx, base);
	// lwz r11,-18228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -18228);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B4CAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8249cbb0
	ctx.lr = 0x828B4CBC;
	sub_8249CBB0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8249d108
	ctx.lr = 0x828B4CCC;
	sub_8249D108(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828B4CD8"))) PPC_WEAK_FUNC(sub_828B4CD8);
PPC_FUNC_IMPL(__imp__sub_828B4CD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x828B4CE0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31962
	ctx.r28.s64 = -2094661632;
	// stw r6,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r6.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r27,r28,-18228
	ctx.r27.s64 = ctx.r28.s64 + -18228;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,-18228(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -18228);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B4D10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,172
	ctx.r4.s64 = ctx.r1.s64 + 172;
	// lwz r3,1584(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1584);
	// bl 0x8277db50
	ctx.lr = 0x828B4D1C;
	sub_8277DB50(ctx, base);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r7,r11,17180
	ctx.r7.s64 = ctx.r11.s64 + 17180;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x8277d030
	ctx.lr = 0x828B4D34;
	sub_8277D030(ctx, base);
	// lwz r11,-18228(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -18228);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B4D48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828B4D58"))) PPC_WEAK_FUNC(sub_828B4D58);
PPC_FUNC_IMPL(__imp__sub_828B4D58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x828B4D60;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31962
	ctx.r28.s64 = -2094661632;
	// stw r6,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r6.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r27,r28,-18228
	ctx.r27.s64 = ctx.r28.s64 + -18228;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,-18228(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -18228);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B4D90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,172
	ctx.r4.s64 = ctx.r1.s64 + 172;
	// lwz r3,1584(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1584);
	// bl 0x8277db50
	ctx.lr = 0x828B4D9C;
	sub_8277DB50(ctx, base);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r7,r11,17180
	ctx.r7.s64 = ctx.r11.s64 + 17180;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x8277c1d0
	ctx.lr = 0x828B4DB4;
	sub_8277C1D0(ctx, base);
	// lwz r11,-18228(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -18228);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B4DC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828B4DD8"))) PPC_WEAK_FUNC(sub_828B4DD8);
PPC_FUNC_IMPL(__imp__sub_828B4DD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x828B4DE0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31962
	ctx.r28.s64 = -2094661632;
	// stw r6,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r6.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r27,r28,-18228
	ctx.r27.s64 = ctx.r28.s64 + -18228;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,-18228(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -18228);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B4E10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,172
	ctx.r4.s64 = ctx.r1.s64 + 172;
	// lwz r3,1584(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1584);
	// bl 0x8277db50
	ctx.lr = 0x828B4E1C;
	sub_8277DB50(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8277cba0
	ctx.lr = 0x828B4E28;
	sub_8277CBA0(ctx, base);
	// lwz r11,-18228(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -18228);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B4E3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828B4E48"))) PPC_WEAK_FUNC(sub_828B4E48);
PPC_FUNC_IMPL(__imp__sub_828B4E48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x828B4E50;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31962
	ctx.r28.s64 = -2094661632;
	// stw r6,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r6.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r27,r28,-18228
	ctx.r27.s64 = ctx.r28.s64 + -18228;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,-18228(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -18228);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B4E80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,172
	ctx.r4.s64 = ctx.r1.s64 + 172;
	// lwz r3,1584(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1584);
	// bl 0x8277db50
	ctx.lr = 0x828B4E8C;
	sub_8277DB50(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8277c5c0
	ctx.lr = 0x828B4E98;
	sub_8277C5C0(ctx, base);
	// lwz r11,-18228(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -18228);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B4EAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828B4EB8"))) PPC_WEAK_FUNC(sub_828B4EB8);
PPC_FUNC_IMPL(__imp__sub_828B4EB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x828B4EC0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31962
	ctx.r28.s64 = -2094661632;
	// stw r6,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r6.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r27,r28,-18228
	ctx.r27.s64 = ctx.r28.s64 + -18228;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,-18228(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -18228);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B4EF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,172
	ctx.r4.s64 = ctx.r1.s64 + 172;
	// lwz r3,1584(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1584);
	// bl 0x8277db50
	ctx.lr = 0x828B4EFC;
	sub_8277DB50(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8277c3c8
	ctx.lr = 0x828B4F08;
	sub_8277C3C8(ctx, base);
	// lwz r11,-18228(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -18228);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B4F1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828B4F28"))) PPC_WEAK_FUNC(sub_828B4F28);
PPC_FUNC_IMPL(__imp__sub_828B4F28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x828B4F30;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31962
	ctx.r29.s64 = -2094661632;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r6,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r6.u32);
	// addi r28,r29,-18228
	ctx.r28.s64 = ctx.r29.s64 + -18228;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,-18228(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -18228);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B4F64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,172
	ctx.r4.s64 = ctx.r1.s64 + 172;
	// lwz r3,1584(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1584);
	// bl 0x8277db50
	ctx.lr = 0x828B4F70;
	sub_8277DB50(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8277c3c8
	ctx.lr = 0x828B4F7C;
	sub_8277C3C8(ctx, base);
	// lwz r11,-18228(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -18228);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B4F90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828B4FA0"))) PPC_WEAK_FUNC(sub_828B4FA0);
PPC_FUNC_IMPL(__imp__sub_828B4FA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x828B4FA8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31962
	ctx.r28.s64 = -2094661632;
	// stw r6,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r6.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r27,r28,-18228
	ctx.r27.s64 = ctx.r28.s64 + -18228;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,-18228(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -18228);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B4FD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,172
	ctx.r4.s64 = ctx.r1.s64 + 172;
	// lwz r3,1584(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1584);
	// bl 0x8277db50
	ctx.lr = 0x828B4FE4;
	sub_8277DB50(ctx, base);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r7,r11,17180
	ctx.r7.s64 = ctx.r11.s64 + 17180;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x8277c458
	ctx.lr = 0x828B4FFC;
	sub_8277C458(ctx, base);
	// lwz r11,-18228(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -18228);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B5010;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828B5020"))) PPC_WEAK_FUNC(sub_828B5020);
PPC_FUNC_IMPL(__imp__sub_828B5020) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x828B5028;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31962
	ctx.r28.s64 = -2094661632;
	// stw r6,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r6.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r27,r28,-18228
	ctx.r27.s64 = ctx.r28.s64 + -18228;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,-18228(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -18228);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B5058;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,172
	ctx.r4.s64 = ctx.r1.s64 + 172;
	// lwz r3,1584(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1584);
	// bl 0x8277db50
	ctx.lr = 0x828B5064;
	sub_8277DB50(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8277cf90
	ctx.lr = 0x828B5070;
	sub_8277CF90(ctx, base);
	// lwz r11,-18228(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -18228);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B5084;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828B5090"))) PPC_WEAK_FUNC(sub_828B5090);
PPC_FUNC_IMPL(__imp__sub_828B5090) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x828B5098;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31962
	ctx.r28.s64 = -2094661632;
	// stw r6,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r6.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r27,r28,-18228
	ctx.r27.s64 = ctx.r28.s64 + -18228;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,-18228(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -18228);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B50C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,172
	ctx.r4.s64 = ctx.r1.s64 + 172;
	// lwz r3,1584(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1584);
	// bl 0x8277db50
	ctx.lr = 0x828B50D4;
	sub_8277DB50(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8277c140
	ctx.lr = 0x828B50E0;
	sub_8277C140(ctx, base);
	// lwz r11,-18228(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -18228);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B50F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828B5100"))) PPC_WEAK_FUNC(sub_828B5100);
PPC_FUNC_IMPL(__imp__sub_828B5100) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1684(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1684);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828b5158
	if (ctx.cr6.eq) goto loc_828B5158;
	// lwz r10,1676(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1676);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x828b5158
	if (!ctx.cr6.gt) goto loc_828B5158;
	// lwz r10,1688(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1688);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 & ctx.r4.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x828b5158
	if (ctx.cr6.eq) goto loc_828B5158;
	// lwz r9,1672(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1672);
loc_828B5138:
	// mulli r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 * 12;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpw cr6,r8,r4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x828b5160
	if (ctx.cr6.eq) goto loc_828B5160;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x828b5138
	if (!ctx.cr6.eq) goto loc_828B5138;
loc_828B5158:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_828B5160:
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828B5170"))) PPC_WEAK_FUNC(sub_828B5170);
PPC_FUNC_IMPL(__imp__sub_828B5170) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x828B5178;
	__savegprlr_29(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828b5198
	if (ctx.cr6.eq) goto loc_828B5198;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// b 0x828b51a0
	goto loc_828B51A0;
loc_828B5198:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r4,r11,7896
	ctx.r4.s64 = ctx.r11.s64 + 7896;
loc_828B51A0:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82409058
	ctx.lr = 0x828B51A8;
	sub_82409058(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,15834
	ctx.r4.s64 = ctx.r10.s64 + 15834;
	// lwz r29,132(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// bl 0x8233a258
	ctx.lr = 0x828B51C0;
	sub_8233A258(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c38b0
	ctx.lr = 0x828B51D0;
	sub_829C38B0(ctx, base);
	// lwz r3,244(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// addi r11,r1,116
	ctx.r11.s64 = ctx.r1.s64 + 116;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x828b51ec
	if (ctx.cr6.eq) goto loc_828B51EC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828b51ec
	if (ctx.cr6.eq) goto loc_828B51EC;
	// bl 0x82332db8
	ctx.lr = 0x828B51EC;
	sub_82332DB8(ctx, base);
loc_828B51EC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333960
	ctx.lr = 0x828B51F4;
	sub_82333960(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828B5200"))) PPC_WEAK_FUNC(sub_828B5200);
PPC_FUNC_IMPL(__imp__sub_828B5200) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x828B5208;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31962
	ctx.r29.s64 = -2094661632;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r28,r29,-18228
	ctx.r28.s64 = ctx.r29.s64 + -18228;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,-18228(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -18228);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B5230;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r27,-31949
	ctx.r27.s64 = -2093809664;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// li r7,-1
	ctx.r7.s64 = -1;
	// addi r5,r11,-24080
	ctx.r5.s64 = ctx.r11.s64 + -24080;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r31,1768
	ctx.r4.s64 = ctx.r31.s64 + 1768;
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stw r30,396(r10)
	PPC_STORE_U32(ctx.r10.u32 + 396, ctx.r30.u32);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r3,444(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 444);
	// bl 0x8277dce0
	ctx.lr = 0x828B5260;
	sub_8277DCE0(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r3,444(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 444);
	// bl 0x8277db50
	ctx.lr = 0x828B5278;
	sub_8277DB50(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// sth r30,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r30.u16);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-24068
	ctx.r4.s64 = ctx.r11.s64 + -24068;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8277b880
	ctx.lr = 0x828B5290;
	sub_8277B880(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8277c288
	ctx.lr = 0x828B52A4;
	sub_8277C288(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,1580(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1580);
	// bl 0x82783b00
	ctx.lr = 0x828B52B0;
	sub_82783B00(ctx, base);
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stw r10,396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 396, ctx.r10.u32);
	// lwz r11,-18228(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -18228);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B52D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828B52E0"))) PPC_WEAK_FUNC(sub_828B52E0);
PPC_FUNC_IMPL(__imp__sub_828B52E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x828b3b88
	ctx.lr = 0x828B52F0;
	sub_828B3B88(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828b5308
	if (ctx.cr0.eq) goto loc_828B5308;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B5308;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828B5308:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

