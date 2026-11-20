#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83001DC0"))) PPC_WEAK_FUNC(sub_83001DC0);
PPC_FUNC_IMPL(__imp__sub_83001DC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,592
	ctx.r4.s64 = ctx.r11.s64 + 592;
	// bl 0x8277b880
	ctx.lr = 0x83001DDC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r11,820(r10)
	PPC_STORE_U32(ctx.r10.u32 + 820, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83001DF8"))) PPC_WEAK_FUNC(sub_83001DF8);
PPC_FUNC_IMPL(__imp__sub_83001DF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,608
	ctx.r4.s64 = ctx.r11.s64 + 608;
	// bl 0x8277b880
	ctx.lr = 0x83001E14;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r11,824(r10)
	PPC_STORE_U32(ctx.r10.u32 + 824, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83001E30"))) PPC_WEAK_FUNC(sub_83001E30);
PPC_FUNC_IMPL(__imp__sub_83001E30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,624
	ctx.r4.s64 = ctx.r11.s64 + 624;
	// bl 0x8277b880
	ctx.lr = 0x83001E4C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r11,828(r10)
	PPC_STORE_U32(ctx.r10.u32 + 828, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83001E68"))) PPC_WEAK_FUNC(sub_83001E68);
PPC_FUNC_IMPL(__imp__sub_83001E68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,640
	ctx.r4.s64 = ctx.r11.s64 + 640;
	// bl 0x8277b880
	ctx.lr = 0x83001E84;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r11,832(r10)
	PPC_STORE_U32(ctx.r10.u32 + 832, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83001EA0"))) PPC_WEAK_FUNC(sub_83001EA0);
PPC_FUNC_IMPL(__imp__sub_83001EA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,648
	ctx.r4.s64 = ctx.r11.s64 + 648;
	// bl 0x8277b880
	ctx.lr = 0x83001EBC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r11,836(r10)
	PPC_STORE_U32(ctx.r10.u32 + 836, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83001ED8"))) PPC_WEAK_FUNC(sub_83001ED8);
PPC_FUNC_IMPL(__imp__sub_83001ED8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,668
	ctx.r4.s64 = ctx.r11.s64 + 668;
	// bl 0x8277b880
	ctx.lr = 0x83001EF4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r11,840(r10)
	PPC_STORE_U32(ctx.r10.u32 + 840, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83001F10"))) PPC_WEAK_FUNC(sub_83001F10);
PPC_FUNC_IMPL(__imp__sub_83001F10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,684
	ctx.r4.s64 = ctx.r11.s64 + 684;
	// bl 0x8277b880
	ctx.lr = 0x83001F2C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r11,844(r10)
	PPC_STORE_U32(ctx.r10.u32 + 844, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83001F48"))) PPC_WEAK_FUNC(sub_83001F48);
PPC_FUNC_IMPL(__imp__sub_83001F48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,704
	ctx.r4.s64 = ctx.r11.s64 + 704;
	// bl 0x8277b880
	ctx.lr = 0x83001F64;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r11,848(r10)
	PPC_STORE_U32(ctx.r10.u32 + 848, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83001F80"))) PPC_WEAK_FUNC(sub_83001F80);
PPC_FUNC_IMPL(__imp__sub_83001F80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,724
	ctx.r4.s64 = ctx.r11.s64 + 724;
	// bl 0x8277b880
	ctx.lr = 0x83001F9C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r11,852(r10)
	PPC_STORE_U32(ctx.r10.u32 + 852, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83001FB8"))) PPC_WEAK_FUNC(sub_83001FB8);
PPC_FUNC_IMPL(__imp__sub_83001FB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-24212
	ctx.r4.s64 = ctx.r11.s64 + -24212;
	// bl 0x8277b880
	ctx.lr = 0x83001FD4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r11,856(r10)
	PPC_STORE_U32(ctx.r10.u32 + 856, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83001FF0"))) PPC_WEAK_FUNC(sub_83001FF0);
PPC_FUNC_IMPL(__imp__sub_83001FF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-24204
	ctx.r4.s64 = ctx.r11.s64 + -24204;
	// bl 0x8277b880
	ctx.lr = 0x8300200C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r11,860(r10)
	PPC_STORE_U32(ctx.r10.u32 + 860, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83002028"))) PPC_WEAK_FUNC(sub_83002028);
PPC_FUNC_IMPL(__imp__sub_83002028) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-24196
	ctx.r4.s64 = ctx.r11.s64 + -24196;
	// bl 0x8277b880
	ctx.lr = 0x83002044;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r11,864(r10)
	PPC_STORE_U32(ctx.r10.u32 + 864, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83002060"))) PPC_WEAK_FUNC(sub_83002060);
PPC_FUNC_IMPL(__imp__sub_83002060) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-24184
	ctx.r4.s64 = ctx.r11.s64 + -24184;
	// bl 0x8277b880
	ctx.lr = 0x8300207C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r11,868(r10)
	PPC_STORE_U32(ctx.r10.u32 + 868, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83002098"))) PPC_WEAK_FUNC(sub_83002098);
PPC_FUNC_IMPL(__imp__sub_83002098) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-24176
	ctx.r4.s64 = ctx.r11.s64 + -24176;
	// bl 0x8277b880
	ctx.lr = 0x830020B4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r11,872(r10)
	PPC_STORE_U32(ctx.r10.u32 + 872, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830020D0"))) PPC_WEAK_FUNC(sub_830020D0);
PPC_FUNC_IMPL(__imp__sub_830020D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-24164
	ctx.r4.s64 = ctx.r11.s64 + -24164;
	// bl 0x8277b880
	ctx.lr = 0x830020EC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r11,876(r10)
	PPC_STORE_U32(ctx.r10.u32 + 876, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83002108"))) PPC_WEAK_FUNC(sub_83002108);
PPC_FUNC_IMPL(__imp__sub_83002108) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-24152
	ctx.r4.s64 = ctx.r11.s64 + -24152;
	// bl 0x8277b880
	ctx.lr = 0x83002124;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r11,880(r10)
	PPC_STORE_U32(ctx.r10.u32 + 880, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83002140"))) PPC_WEAK_FUNC(sub_83002140);
PPC_FUNC_IMPL(__imp__sub_83002140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-24144
	ctx.r4.s64 = ctx.r11.s64 + -24144;
	// bl 0x8277b880
	ctx.lr = 0x8300215C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r11,884(r10)
	PPC_STORE_U32(ctx.r10.u32 + 884, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83002178"))) PPC_WEAK_FUNC(sub_83002178);
PPC_FUNC_IMPL(__imp__sub_83002178) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-24132
	ctx.r4.s64 = ctx.r11.s64 + -24132;
	// bl 0x8277b880
	ctx.lr = 0x83002194;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r11,888(r10)
	PPC_STORE_U32(ctx.r10.u32 + 888, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830021B0"))) PPC_WEAK_FUNC(sub_830021B0);
PPC_FUNC_IMPL(__imp__sub_830021B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-24124
	ctx.r4.s64 = ctx.r11.s64 + -24124;
	// bl 0x8277b880
	ctx.lr = 0x830021CC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r11,892(r10)
	PPC_STORE_U32(ctx.r10.u32 + 892, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830021E8"))) PPC_WEAK_FUNC(sub_830021E8);
PPC_FUNC_IMPL(__imp__sub_830021E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-24112
	ctx.r4.s64 = ctx.r11.s64 + -24112;
	// bl 0x8277b880
	ctx.lr = 0x83002204;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r11,896(r10)
	PPC_STORE_U32(ctx.r10.u32 + 896, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83002220"))) PPC_WEAK_FUNC(sub_83002220);
PPC_FUNC_IMPL(__imp__sub_83002220) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-24104
	ctx.r4.s64 = ctx.r11.s64 + -24104;
	// bl 0x8277b880
	ctx.lr = 0x8300223C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r11,900(r10)
	PPC_STORE_U32(ctx.r10.u32 + 900, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83002258"))) PPC_WEAK_FUNC(sub_83002258);
PPC_FUNC_IMPL(__imp__sub_83002258) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-24096
	ctx.r4.s64 = ctx.r11.s64 + -24096;
	// bl 0x8277b880
	ctx.lr = 0x83002274;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r11,904(r10)
	PPC_STORE_U32(ctx.r10.u32 + 904, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83002290"))) PPC_WEAK_FUNC(sub_83002290);
PPC_FUNC_IMPL(__imp__sub_83002290) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-24088
	ctx.r4.s64 = ctx.r11.s64 + -24088;
	// bl 0x8277b880
	ctx.lr = 0x830022AC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r11,908(r10)
	PPC_STORE_U32(ctx.r10.u32 + 908, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830022C8"))) PPC_WEAK_FUNC(sub_830022C8);
PPC_FUNC_IMPL(__imp__sub_830022C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-24080
	ctx.r4.s64 = ctx.r11.s64 + -24080;
	// bl 0x8277b880
	ctx.lr = 0x830022E4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r11,912(r10)
	PPC_STORE_U32(ctx.r10.u32 + 912, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83002300"))) PPC_WEAK_FUNC(sub_83002300);
PPC_FUNC_IMPL(__imp__sub_83002300) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-24068
	ctx.r4.s64 = ctx.r11.s64 + -24068;
	// bl 0x8277b880
	ctx.lr = 0x8300231C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r11,916(r10)
	PPC_STORE_U32(ctx.r10.u32 + 916, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83002338"))) PPC_WEAK_FUNC(sub_83002338);
PPC_FUNC_IMPL(__imp__sub_83002338) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-24056
	ctx.r4.s64 = ctx.r11.s64 + -24056;
	// bl 0x8277b880
	ctx.lr = 0x83002354;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r11,920(r10)
	PPC_STORE_U32(ctx.r10.u32 + 920, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83002370"))) PPC_WEAK_FUNC(sub_83002370);
PPC_FUNC_IMPL(__imp__sub_83002370) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-24048
	ctx.r4.s64 = ctx.r11.s64 + -24048;
	// bl 0x8277b880
	ctx.lr = 0x8300238C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r11,924(r10)
	PPC_STORE_U32(ctx.r10.u32 + 924, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830023A8"))) PPC_WEAK_FUNC(sub_830023A8);
PPC_FUNC_IMPL(__imp__sub_830023A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-24036
	ctx.r4.s64 = ctx.r11.s64 + -24036;
	// bl 0x8277b880
	ctx.lr = 0x830023C4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r11,928(r10)
	PPC_STORE_U32(ctx.r10.u32 + 928, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830023E0"))) PPC_WEAK_FUNC(sub_830023E0);
PPC_FUNC_IMPL(__imp__sub_830023E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-24028
	ctx.r4.s64 = ctx.r11.s64 + -24028;
	// bl 0x8277b880
	ctx.lr = 0x830023FC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r11,932(r10)
	PPC_STORE_U32(ctx.r10.u32 + 932, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83002418"))) PPC_WEAK_FUNC(sub_83002418);
PPC_FUNC_IMPL(__imp__sub_83002418) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-24020
	ctx.r4.s64 = ctx.r11.s64 + -24020;
	// bl 0x8277b880
	ctx.lr = 0x83002434;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r11,936(r10)
	PPC_STORE_U32(ctx.r10.u32 + 936, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83002450"))) PPC_WEAK_FUNC(sub_83002450);
PPC_FUNC_IMPL(__imp__sub_83002450) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-24012
	ctx.r4.s64 = ctx.r11.s64 + -24012;
	// bl 0x8277b880
	ctx.lr = 0x8300246C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r11,940(r10)
	PPC_STORE_U32(ctx.r10.u32 + 940, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83002488"))) PPC_WEAK_FUNC(sub_83002488);
PPC_FUNC_IMPL(__imp__sub_83002488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-24004
	ctx.r4.s64 = ctx.r11.s64 + -24004;
	// bl 0x8277b880
	ctx.lr = 0x830024A4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r11,944(r10)
	PPC_STORE_U32(ctx.r10.u32 + 944, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830024C0"))) PPC_WEAK_FUNC(sub_830024C0);
PPC_FUNC_IMPL(__imp__sub_830024C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23996
	ctx.r4.s64 = ctx.r11.s64 + -23996;
	// bl 0x8277b880
	ctx.lr = 0x830024DC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r11,948(r10)
	PPC_STORE_U32(ctx.r10.u32 + 948, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830024F8"))) PPC_WEAK_FUNC(sub_830024F8);
PPC_FUNC_IMPL(__imp__sub_830024F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23984
	ctx.r4.s64 = ctx.r11.s64 + -23984;
	// bl 0x8277b880
	ctx.lr = 0x83002514;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r11,952(r10)
	PPC_STORE_U32(ctx.r10.u32 + 952, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83002530"))) PPC_WEAK_FUNC(sub_83002530);
PPC_FUNC_IMPL(__imp__sub_83002530) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23972
	ctx.r4.s64 = ctx.r11.s64 + -23972;
	// bl 0x8277b880
	ctx.lr = 0x8300254C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r11,956(r10)
	PPC_STORE_U32(ctx.r10.u32 + 956, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83002568"))) PPC_WEAK_FUNC(sub_83002568);
PPC_FUNC_IMPL(__imp__sub_83002568) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23956
	ctx.r4.s64 = ctx.r11.s64 + -23956;
	// bl 0x8277b880
	ctx.lr = 0x83002584;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r11,960(r10)
	PPC_STORE_U32(ctx.r10.u32 + 960, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830025A0"))) PPC_WEAK_FUNC(sub_830025A0);
PPC_FUNC_IMPL(__imp__sub_830025A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23944
	ctx.r4.s64 = ctx.r11.s64 + -23944;
	// bl 0x8277b880
	ctx.lr = 0x830025BC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r11,964(r10)
	PPC_STORE_U32(ctx.r10.u32 + 964, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830025D8"))) PPC_WEAK_FUNC(sub_830025D8);
PPC_FUNC_IMPL(__imp__sub_830025D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23932
	ctx.r4.s64 = ctx.r11.s64 + -23932;
	// bl 0x8277b880
	ctx.lr = 0x830025F4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r11,968(r10)
	PPC_STORE_U32(ctx.r10.u32 + 968, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83002610"))) PPC_WEAK_FUNC(sub_83002610);
PPC_FUNC_IMPL(__imp__sub_83002610) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23916
	ctx.r4.s64 = ctx.r11.s64 + -23916;
	// bl 0x8277b880
	ctx.lr = 0x8300262C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r11,972(r10)
	PPC_STORE_U32(ctx.r10.u32 + 972, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83002648"))) PPC_WEAK_FUNC(sub_83002648);
PPC_FUNC_IMPL(__imp__sub_83002648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23904
	ctx.r4.s64 = ctx.r11.s64 + -23904;
	// bl 0x8277b880
	ctx.lr = 0x83002664;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r11,976(r10)
	PPC_STORE_U32(ctx.r10.u32 + 976, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83002680"))) PPC_WEAK_FUNC(sub_83002680);
PPC_FUNC_IMPL(__imp__sub_83002680) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23888
	ctx.r4.s64 = ctx.r11.s64 + -23888;
	// bl 0x8277b880
	ctx.lr = 0x8300269C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r11,980(r10)
	PPC_STORE_U32(ctx.r10.u32 + 980, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830026B8"))) PPC_WEAK_FUNC(sub_830026B8);
PPC_FUNC_IMPL(__imp__sub_830026B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23880
	ctx.r4.s64 = ctx.r11.s64 + -23880;
	// bl 0x8277b880
	ctx.lr = 0x830026D4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r11,984(r10)
	PPC_STORE_U32(ctx.r10.u32 + 984, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830026F0"))) PPC_WEAK_FUNC(sub_830026F0);
PPC_FUNC_IMPL(__imp__sub_830026F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23868
	ctx.r4.s64 = ctx.r11.s64 + -23868;
	// bl 0x8277b880
	ctx.lr = 0x8300270C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r11,988(r10)
	PPC_STORE_U32(ctx.r10.u32 + 988, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83002728"))) PPC_WEAK_FUNC(sub_83002728);
PPC_FUNC_IMPL(__imp__sub_83002728) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23852
	ctx.r4.s64 = ctx.r11.s64 + -23852;
	// bl 0x8277b880
	ctx.lr = 0x83002744;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r11,992(r10)
	PPC_STORE_U32(ctx.r10.u32 + 992, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83002760"))) PPC_WEAK_FUNC(sub_83002760);
PPC_FUNC_IMPL(__imp__sub_83002760) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23844
	ctx.r4.s64 = ctx.r11.s64 + -23844;
	// bl 0x8277b880
	ctx.lr = 0x8300277C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r11,996(r10)
	PPC_STORE_U32(ctx.r10.u32 + 996, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83002798"))) PPC_WEAK_FUNC(sub_83002798);
PPC_FUNC_IMPL(__imp__sub_83002798) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23832
	ctx.r4.s64 = ctx.r11.s64 + -23832;
	// bl 0x8277b880
	ctx.lr = 0x830027B4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r11,1000(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1000, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830027D0"))) PPC_WEAK_FUNC(sub_830027D0);
PPC_FUNC_IMPL(__imp__sub_830027D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23820
	ctx.r4.s64 = ctx.r11.s64 + -23820;
	// bl 0x8277b880
	ctx.lr = 0x830027EC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r11,1004(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1004, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83002808"))) PPC_WEAK_FUNC(sub_83002808);
PPC_FUNC_IMPL(__imp__sub_83002808) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23812
	ctx.r4.s64 = ctx.r11.s64 + -23812;
	// bl 0x8277b880
	ctx.lr = 0x83002824;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r11,1008(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1008, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83002840"))) PPC_WEAK_FUNC(sub_83002840);
PPC_FUNC_IMPL(__imp__sub_83002840) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23804
	ctx.r4.s64 = ctx.r11.s64 + -23804;
	// bl 0x8277b880
	ctx.lr = 0x8300285C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r11,1012(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1012, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83002878"))) PPC_WEAK_FUNC(sub_83002878);
PPC_FUNC_IMPL(__imp__sub_83002878) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-31981
	ctx.r9.s64 = -2095906816;
	// addi r3,r9,-16040
	ctx.r3.s64 = ctx.r9.s64 + -16040;
	// stw r10,-15060(r11)
	PPC_STORE_U32(ctx.r11.u32 + -15060, ctx.r10.u32);
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83002890"))) PPC_WEAK_FUNC(sub_83002890);
PPC_FUNC_IMPL(__imp__sub_83002890) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-31981
	ctx.r9.s64 = -2095906816;
	// addi r3,r9,-15896
	ctx.r3.s64 = ctx.r9.s64 + -15896;
	// stw r10,-15028(r11)
	PPC_STORE_U32(ctx.r11.u32 + -15028, ctx.r10.u32);
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830028A8"))) PPC_WEAK_FUNC(sub_830028A8);
PPC_FUNC_IMPL(__imp__sub_830028A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-31981
	ctx.r9.s64 = -2095906816;
	// addi r3,r9,-14824
	ctx.r3.s64 = ctx.r9.s64 + -14824;
	// stw r10,-14948(r11)
	PPC_STORE_U32(ctx.r11.u32 + -14948, ctx.r10.u32);
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830028C0"))) PPC_WEAK_FUNC(sub_830028C0);
PPC_FUNC_IMPL(__imp__sub_830028C0) {
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
	// lis r11,-32116
	ctx.r11.s64 = -2104754176;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,12504
	ctx.r11.s64 = ctx.r11.s64 + 12504;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82339c78
	ctx.lr = 0x830028E8;
	sub_82339C78(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-15748
	ctx.r3.s64 = ctx.r11.s64 + -15748;
	// bl 0x82816528
	ctx.lr = 0x830028F8;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x828c0fd8
	ctx.lr = 0x83002908;
	sub_828C0FD8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stb r3,1016(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1016, ctx.r3.u8);
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

__attribute__((alias("__imp__sub_83002928"))) PPC_WEAK_FUNC(sub_83002928);
PPC_FUNC_IMPL(__imp__sub_83002928) {
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
	// lis r11,-32099
	ctx.r11.s64 = -2103640064;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-32640
	ctx.r11.s64 = ctx.r11.s64 + -32640;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82339c78
	ctx.lr = 0x83002950;
	sub_82339C78(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-15732
	ctx.r3.s64 = ctx.r11.s64 + -15732;
	// bl 0x82816528
	ctx.lr = 0x83002960;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x828c0fd8
	ctx.lr = 0x83002970;
	sub_828C0FD8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stb r3,1017(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1017, ctx.r3.u8);
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

__attribute__((alias("__imp__sub_83002990"))) PPC_WEAK_FUNC(sub_83002990);
PPC_FUNC_IMPL(__imp__sub_83002990) {
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
	// lis r11,-32099
	ctx.r11.s64 = -2103640064;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-32688
	ctx.r11.s64 = ctx.r11.s64 + -32688;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82339c78
	ctx.lr = 0x830029B8;
	sub_82339C78(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-15716
	ctx.r3.s64 = ctx.r11.s64 + -15716;
	// bl 0x82816528
	ctx.lr = 0x830029C8;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x828c0fd8
	ctx.lr = 0x830029D8;
	sub_828C0FD8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stb r3,1018(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1018, ctx.r3.u8);
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

__attribute__((alias("__imp__sub_830029F8"))) PPC_WEAK_FUNC(sub_830029F8);
PPC_FUNC_IMPL(__imp__sub_830029F8) {
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
	// lis r11,-32116
	ctx.r11.s64 = -2104754176;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,5888
	ctx.r11.s64 = ctx.r11.s64 + 5888;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82339de0
	ctx.lr = 0x83002A20;
	sub_82339DE0(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-15696
	ctx.r3.s64 = ctx.r11.s64 + -15696;
	// bl 0x82816528
	ctx.lr = 0x83002A30;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x828c0fd8
	ctx.lr = 0x83002A40;
	sub_828C0FD8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stb r3,1019(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1019, ctx.r3.u8);
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

__attribute__((alias("__imp__sub_83002A60"))) PPC_WEAK_FUNC(sub_83002A60);
PPC_FUNC_IMPL(__imp__sub_83002A60) {
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
	// lis r11,-32116
	ctx.r11.s64 = -2104754176;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,3656
	ctx.r11.s64 = ctx.r11.s64 + 3656;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82339c78
	ctx.lr = 0x83002A88;
	sub_82339C78(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-15684
	ctx.r3.s64 = ctx.r11.s64 + -15684;
	// bl 0x82816528
	ctx.lr = 0x83002A98;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x828c0fd8
	ctx.lr = 0x83002AA8;
	sub_828C0FD8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stb r3,1020(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1020, ctx.r3.u8);
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

__attribute__((alias("__imp__sub_83002AC8"))) PPC_WEAK_FUNC(sub_83002AC8);
PPC_FUNC_IMPL(__imp__sub_83002AC8) {
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
	// lis r11,-32116
	ctx.r11.s64 = -2104754176;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,6024
	ctx.r11.s64 = ctx.r11.s64 + 6024;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82339c78
	ctx.lr = 0x83002AF0;
	sub_82339C78(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-15680
	ctx.r3.s64 = ctx.r11.s64 + -15680;
	// bl 0x82816528
	ctx.lr = 0x83002B00;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x828c0fd8
	ctx.lr = 0x83002B10;
	sub_828C0FD8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stb r3,1021(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1021, ctx.r3.u8);
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

__attribute__((alias("__imp__sub_83002B30"))) PPC_WEAK_FUNC(sub_83002B30);
PPC_FUNC_IMPL(__imp__sub_83002B30) {
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
	// lis r11,-32116
	ctx.r11.s64 = -2104754176;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,12520
	ctx.r11.s64 = ctx.r11.s64 + 12520;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82339c78
	ctx.lr = 0x83002B58;
	sub_82339C78(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-15664
	ctx.r3.s64 = ctx.r11.s64 + -15664;
	// bl 0x82816528
	ctx.lr = 0x83002B68;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x828c0fd8
	ctx.lr = 0x83002B78;
	sub_828C0FD8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stb r3,1022(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1022, ctx.r3.u8);
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

__attribute__((alias("__imp__sub_83002B98"))) PPC_WEAK_FUNC(sub_83002B98);
PPC_FUNC_IMPL(__imp__sub_83002B98) {
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
	// lis r11,-32116
	ctx.r11.s64 = -2104754176;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,12488
	ctx.r11.s64 = ctx.r11.s64 + 12488;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82339c78
	ctx.lr = 0x83002BC0;
	sub_82339C78(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-15648
	ctx.r3.s64 = ctx.r11.s64 + -15648;
	// bl 0x82816528
	ctx.lr = 0x83002BD0;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x828c0fd8
	ctx.lr = 0x83002BE0;
	sub_828C0FD8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stb r3,1023(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1023, ctx.r3.u8);
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

__attribute__((alias("__imp__sub_83002C00"))) PPC_WEAK_FUNC(sub_83002C00);
PPC_FUNC_IMPL(__imp__sub_83002C00) {
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
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// lis r11,-32116
	ctx.r11.s64 = -2104754176;
	// lis r9,-31956
	ctx.r9.s64 = -2094268416;
	// addi r7,r11,11032
	ctx.r7.s64 = ctx.r11.s64 + 11032;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,-32420(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32420);
	// addi r31,r9,-32424
	ctx.r31.s64 = ctx.r9.s64 + -32424;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x83002c5c
	if (!ctx.cr0.eq) goto loc_83002C5C;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,17432
	ctx.r9.s64 = ctx.r9.s64 + 17432;
	// stw r11,-32420(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32420, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-30032
	ctx.r3.s64 = ctx.r11.s64 + -30032;
	// bl 0x82a4c758
	ctx.lr = 0x83002C5C;
	sub_82A4C758(ctx, base);
loc_83002C5C:
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r3,r11,-29644
	ctx.r3.s64 = ctx.r11.s64 + -29644;
	// bl 0x82816528
	ctx.lr = 0x83002C68;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x828c0fd8
	ctx.lr = 0x83002C78;
	sub_828C0FD8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stb r3,1024(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1024, ctx.r3.u8);
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

__attribute__((alias("__imp__sub_83002C98"))) PPC_WEAK_FUNC(sub_83002C98);
PPC_FUNC_IMPL(__imp__sub_83002C98) {
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
	// lis r11,-32116
	ctx.r11.s64 = -2104754176;
	// lis r9,-31944
	ctx.r9.s64 = -2093481984;
	// addi r7,r11,11064
	ctx.r7.s64 = ctx.r11.s64 + 11064;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,17936(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17936);
	// addi r31,r9,17940
	ctx.r31.s64 = ctx.r9.s64 + 17940;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x83002cf4
	if (!ctx.cr0.eq) goto loc_83002CF4;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-15460
	ctx.r9.s64 = ctx.r9.s64 + -15460;
	// stw r11,17936(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17936, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-14688
	ctx.r3.s64 = ctx.r11.s64 + -14688;
	// bl 0x82a4c758
	ctx.lr = 0x83002CF4;
	sub_82A4C758(ctx, base);
loc_83002CF4:
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,-15632
	ctx.r3.s64 = ctx.r11.s64 + -15632;
	// bl 0x82816528
	ctx.lr = 0x83002D00;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x828c0fd8
	ctx.lr = 0x83002D10;
	sub_828C0FD8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stb r3,1025(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1025, ctx.r3.u8);
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

__attribute__((alias("__imp__sub_83002D30"))) PPC_WEAK_FUNC(sub_83002D30);
PPC_FUNC_IMPL(__imp__sub_83002D30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-14924
	ctx.r11.s64 = ctx.r11.s64 + -14924;
	// lis r9,-31981
	ctx.r9.s64 = -2095906816;
	// addi r3,r9,-14592
	ctx.r3.s64 = ctx.r9.s64 + -14592;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83002D50"))) PPC_WEAK_FUNC(sub_83002D50);
PPC_FUNC_IMPL(__imp__sub_83002D50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,1580
	ctx.r3.s64 = ctx.r11.s64 + 1580;
	// bl 0x828165a8
	ctx.lr = 0x83002D68;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1028(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1028, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83002D80"))) PPC_WEAK_FUNC(sub_83002D80);
PPC_FUNC_IMPL(__imp__sub_83002D80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,1596
	ctx.r3.s64 = ctx.r11.s64 + 1596;
	// bl 0x828165a8
	ctx.lr = 0x83002D98;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1032(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1032, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83002DB0"))) PPC_WEAK_FUNC(sub_83002DB0);
PPC_FUNC_IMPL(__imp__sub_83002DB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,1612
	ctx.r3.s64 = ctx.r11.s64 + 1612;
	// bl 0x828165a8
	ctx.lr = 0x83002DC8;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1036(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1036, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83002DE0"))) PPC_WEAK_FUNC(sub_83002DE0);
PPC_FUNC_IMPL(__imp__sub_83002DE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,1640
	ctx.r3.s64 = ctx.r11.s64 + 1640;
	// bl 0x828165a8
	ctx.lr = 0x83002DF8;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1040(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1040, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83002E10"))) PPC_WEAK_FUNC(sub_83002E10);
PPC_FUNC_IMPL(__imp__sub_83002E10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,1672
	ctx.r3.s64 = ctx.r11.s64 + 1672;
	// bl 0x828165a8
	ctx.lr = 0x83002E28;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1044(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1044, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83002E40"))) PPC_WEAK_FUNC(sub_83002E40);
PPC_FUNC_IMPL(__imp__sub_83002E40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,1704
	ctx.r3.s64 = ctx.r11.s64 + 1704;
	// bl 0x828165a8
	ctx.lr = 0x83002E58;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1048(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1048, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83002E70"))) PPC_WEAK_FUNC(sub_83002E70);
PPC_FUNC_IMPL(__imp__sub_83002E70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,1740
	ctx.r3.s64 = ctx.r11.s64 + 1740;
	// bl 0x828165a8
	ctx.lr = 0x83002E88;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1052(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1052, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83002EA0"))) PPC_WEAK_FUNC(sub_83002EA0);
PPC_FUNC_IMPL(__imp__sub_83002EA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,1776
	ctx.r3.s64 = ctx.r11.s64 + 1776;
	// bl 0x828165a8
	ctx.lr = 0x83002EB8;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1056(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1056, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83002ED0"))) PPC_WEAK_FUNC(sub_83002ED0);
PPC_FUNC_IMPL(__imp__sub_83002ED0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,1796
	ctx.r3.s64 = ctx.r11.s64 + 1796;
	// bl 0x828165a8
	ctx.lr = 0x83002EE8;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1060(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1060, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83002F00"))) PPC_WEAK_FUNC(sub_83002F00);
PPC_FUNC_IMPL(__imp__sub_83002F00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,1804
	ctx.r3.s64 = ctx.r11.s64 + 1804;
	// bl 0x828165a8
	ctx.lr = 0x83002F18;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1064(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1064, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83002F30"))) PPC_WEAK_FUNC(sub_83002F30);
PPC_FUNC_IMPL(__imp__sub_83002F30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,1816
	ctx.r3.s64 = ctx.r11.s64 + 1816;
	// bl 0x828165a8
	ctx.lr = 0x83002F48;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1068(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1068, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83002F60"))) PPC_WEAK_FUNC(sub_83002F60);
PPC_FUNC_IMPL(__imp__sub_83002F60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,1828
	ctx.r3.s64 = ctx.r11.s64 + 1828;
	// bl 0x828165a8
	ctx.lr = 0x83002F78;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1072(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1072, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83002F90"))) PPC_WEAK_FUNC(sub_83002F90);
PPC_FUNC_IMPL(__imp__sub_83002F90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,1848
	ctx.r3.s64 = ctx.r11.s64 + 1848;
	// bl 0x828165a8
	ctx.lr = 0x83002FA8;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1076(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1076, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83002FC0"))) PPC_WEAK_FUNC(sub_83002FC0);
PPC_FUNC_IMPL(__imp__sub_83002FC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,1864
	ctx.r3.s64 = ctx.r11.s64 + 1864;
	// bl 0x828165a8
	ctx.lr = 0x83002FD8;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1080(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1080, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83002FF0"))) PPC_WEAK_FUNC(sub_83002FF0);
PPC_FUNC_IMPL(__imp__sub_83002FF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,1884
	ctx.r3.s64 = ctx.r11.s64 + 1884;
	// bl 0x828165a8
	ctx.lr = 0x83003008;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1084(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1084, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83003020"))) PPC_WEAK_FUNC(sub_83003020);
PPC_FUNC_IMPL(__imp__sub_83003020) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,1900
	ctx.r3.s64 = ctx.r11.s64 + 1900;
	// bl 0x828165a8
	ctx.lr = 0x83003038;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1088(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1088, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83003050"))) PPC_WEAK_FUNC(sub_83003050);
PPC_FUNC_IMPL(__imp__sub_83003050) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,1920
	ctx.r3.s64 = ctx.r11.s64 + 1920;
	// bl 0x828165a8
	ctx.lr = 0x83003068;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1092(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1092, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83003080"))) PPC_WEAK_FUNC(sub_83003080);
PPC_FUNC_IMPL(__imp__sub_83003080) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,1928
	ctx.r3.s64 = ctx.r11.s64 + 1928;
	// bl 0x828165a8
	ctx.lr = 0x83003098;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1096(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1096, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830030B0"))) PPC_WEAK_FUNC(sub_830030B0);
PPC_FUNC_IMPL(__imp__sub_830030B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,1940
	ctx.r3.s64 = ctx.r11.s64 + 1940;
	// bl 0x828165a8
	ctx.lr = 0x830030C8;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1100, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830030E0"))) PPC_WEAK_FUNC(sub_830030E0);
PPC_FUNC_IMPL(__imp__sub_830030E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,1952
	ctx.r3.s64 = ctx.r11.s64 + 1952;
	// bl 0x828165a8
	ctx.lr = 0x830030F8;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1104, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83003110"))) PPC_WEAK_FUNC(sub_83003110);
PPC_FUNC_IMPL(__imp__sub_83003110) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,1960
	ctx.r3.s64 = ctx.r11.s64 + 1960;
	// bl 0x828165a8
	ctx.lr = 0x83003128;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1108, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83003140"))) PPC_WEAK_FUNC(sub_83003140);
PPC_FUNC_IMPL(__imp__sub_83003140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,1972
	ctx.r3.s64 = ctx.r11.s64 + 1972;
	// bl 0x828165a8
	ctx.lr = 0x83003158;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1112, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83003170"))) PPC_WEAK_FUNC(sub_83003170);
PPC_FUNC_IMPL(__imp__sub_83003170) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,1984
	ctx.r3.s64 = ctx.r11.s64 + 1984;
	// bl 0x828165a8
	ctx.lr = 0x83003188;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1116, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830031A0"))) PPC_WEAK_FUNC(sub_830031A0);
PPC_FUNC_IMPL(__imp__sub_830031A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2000
	ctx.r3.s64 = ctx.r11.s64 + 2000;
	// bl 0x828165a8
	ctx.lr = 0x830031B8;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1120(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1120, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830031D0"))) PPC_WEAK_FUNC(sub_830031D0);
PPC_FUNC_IMPL(__imp__sub_830031D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2016
	ctx.r3.s64 = ctx.r11.s64 + 2016;
	// bl 0x828165a8
	ctx.lr = 0x830031E8;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1124(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1124, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83003200"))) PPC_WEAK_FUNC(sub_83003200);
PPC_FUNC_IMPL(__imp__sub_83003200) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2028
	ctx.r3.s64 = ctx.r11.s64 + 2028;
	// bl 0x828165a8
	ctx.lr = 0x83003218;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1128, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83003230"))) PPC_WEAK_FUNC(sub_83003230);
PPC_FUNC_IMPL(__imp__sub_83003230) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2036
	ctx.r3.s64 = ctx.r11.s64 + 2036;
	// bl 0x828165a8
	ctx.lr = 0x83003248;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1132(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1132, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83003260"))) PPC_WEAK_FUNC(sub_83003260);
PPC_FUNC_IMPL(__imp__sub_83003260) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2044
	ctx.r3.s64 = ctx.r11.s64 + 2044;
	// bl 0x828165a8
	ctx.lr = 0x83003278;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1136(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1136, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83003290"))) PPC_WEAK_FUNC(sub_83003290);
PPC_FUNC_IMPL(__imp__sub_83003290) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2056
	ctx.r3.s64 = ctx.r11.s64 + 2056;
	// bl 0x828165a8
	ctx.lr = 0x830032A8;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1140(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1140, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830032C0"))) PPC_WEAK_FUNC(sub_830032C0);
PPC_FUNC_IMPL(__imp__sub_830032C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2068
	ctx.r3.s64 = ctx.r11.s64 + 2068;
	// bl 0x828165a8
	ctx.lr = 0x830032D8;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1144(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1144, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830032F0"))) PPC_WEAK_FUNC(sub_830032F0);
PPC_FUNC_IMPL(__imp__sub_830032F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2080
	ctx.r3.s64 = ctx.r11.s64 + 2080;
	// bl 0x828165a8
	ctx.lr = 0x83003308;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1148, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83003320"))) PPC_WEAK_FUNC(sub_83003320);
PPC_FUNC_IMPL(__imp__sub_83003320) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2088
	ctx.r3.s64 = ctx.r11.s64 + 2088;
	// bl 0x828165a8
	ctx.lr = 0x83003338;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1152(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1152, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83003350"))) PPC_WEAK_FUNC(sub_83003350);
PPC_FUNC_IMPL(__imp__sub_83003350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2100
	ctx.r3.s64 = ctx.r11.s64 + 2100;
	// bl 0x828165a8
	ctx.lr = 0x83003368;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1156(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1156, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83003380"))) PPC_WEAK_FUNC(sub_83003380);
PPC_FUNC_IMPL(__imp__sub_83003380) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2112
	ctx.r3.s64 = ctx.r11.s64 + 2112;
	// bl 0x828165a8
	ctx.lr = 0x83003398;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1160(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1160, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830033B0"))) PPC_WEAK_FUNC(sub_830033B0);
PPC_FUNC_IMPL(__imp__sub_830033B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2124
	ctx.r3.s64 = ctx.r11.s64 + 2124;
	// bl 0x828165a8
	ctx.lr = 0x830033C8;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1164(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1164, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830033E0"))) PPC_WEAK_FUNC(sub_830033E0);
PPC_FUNC_IMPL(__imp__sub_830033E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2128
	ctx.r3.s64 = ctx.r11.s64 + 2128;
	// bl 0x828165a8
	ctx.lr = 0x830033F8;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1168, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83003410"))) PPC_WEAK_FUNC(sub_83003410);
PPC_FUNC_IMPL(__imp__sub_83003410) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2132
	ctx.r3.s64 = ctx.r11.s64 + 2132;
	// bl 0x828165a8
	ctx.lr = 0x83003428;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1172, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83003440"))) PPC_WEAK_FUNC(sub_83003440);
PPC_FUNC_IMPL(__imp__sub_83003440) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2136
	ctx.r3.s64 = ctx.r11.s64 + 2136;
	// bl 0x828165a8
	ctx.lr = 0x83003458;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1176(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1176, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83003470"))) PPC_WEAK_FUNC(sub_83003470);
PPC_FUNC_IMPL(__imp__sub_83003470) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2140
	ctx.r3.s64 = ctx.r11.s64 + 2140;
	// bl 0x828165a8
	ctx.lr = 0x83003488;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1180(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1180, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830034A0"))) PPC_WEAK_FUNC(sub_830034A0);
PPC_FUNC_IMPL(__imp__sub_830034A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2144
	ctx.r3.s64 = ctx.r11.s64 + 2144;
	// bl 0x828165a8
	ctx.lr = 0x830034B8;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1184(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1184, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830034D0"))) PPC_WEAK_FUNC(sub_830034D0);
PPC_FUNC_IMPL(__imp__sub_830034D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2148
	ctx.r3.s64 = ctx.r11.s64 + 2148;
	// bl 0x828165a8
	ctx.lr = 0x830034E8;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1188(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1188, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83003500"))) PPC_WEAK_FUNC(sub_83003500);
PPC_FUNC_IMPL(__imp__sub_83003500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2152
	ctx.r3.s64 = ctx.r11.s64 + 2152;
	// bl 0x828165a8
	ctx.lr = 0x83003518;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1192(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1192, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83003530"))) PPC_WEAK_FUNC(sub_83003530);
PPC_FUNC_IMPL(__imp__sub_83003530) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2156
	ctx.r3.s64 = ctx.r11.s64 + 2156;
	// bl 0x828165a8
	ctx.lr = 0x83003548;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1196, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83003560"))) PPC_WEAK_FUNC(sub_83003560);
PPC_FUNC_IMPL(__imp__sub_83003560) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2160
	ctx.r3.s64 = ctx.r11.s64 + 2160;
	// bl 0x828165a8
	ctx.lr = 0x83003578;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1200(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1200, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83003590"))) PPC_WEAK_FUNC(sub_83003590);
PPC_FUNC_IMPL(__imp__sub_83003590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2164
	ctx.r3.s64 = ctx.r11.s64 + 2164;
	// bl 0x828165a8
	ctx.lr = 0x830035A8;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1204(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1204, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830035C0"))) PPC_WEAK_FUNC(sub_830035C0);
PPC_FUNC_IMPL(__imp__sub_830035C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2168
	ctx.r3.s64 = ctx.r11.s64 + 2168;
	// bl 0x828165a8
	ctx.lr = 0x830035D8;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1208(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1208, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830035F0"))) PPC_WEAK_FUNC(sub_830035F0);
PPC_FUNC_IMPL(__imp__sub_830035F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2172
	ctx.r3.s64 = ctx.r11.s64 + 2172;
	// bl 0x828165a8
	ctx.lr = 0x83003608;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1212(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1212, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83003620"))) PPC_WEAK_FUNC(sub_83003620);
PPC_FUNC_IMPL(__imp__sub_83003620) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2176
	ctx.r3.s64 = ctx.r11.s64 + 2176;
	// bl 0x828165a8
	ctx.lr = 0x83003638;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1216(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1216, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83003650"))) PPC_WEAK_FUNC(sub_83003650);
PPC_FUNC_IMPL(__imp__sub_83003650) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2180
	ctx.r3.s64 = ctx.r11.s64 + 2180;
	// bl 0x828165a8
	ctx.lr = 0x83003668;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1220(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1220, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83003680"))) PPC_WEAK_FUNC(sub_83003680);
PPC_FUNC_IMPL(__imp__sub_83003680) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2184
	ctx.r3.s64 = ctx.r11.s64 + 2184;
	// bl 0x828165a8
	ctx.lr = 0x83003698;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1224(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1224, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830036B0"))) PPC_WEAK_FUNC(sub_830036B0);
PPC_FUNC_IMPL(__imp__sub_830036B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2188
	ctx.r3.s64 = ctx.r11.s64 + 2188;
	// bl 0x828165a8
	ctx.lr = 0x830036C8;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1228(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1228, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830036E0"))) PPC_WEAK_FUNC(sub_830036E0);
PPC_FUNC_IMPL(__imp__sub_830036E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2192
	ctx.r3.s64 = ctx.r11.s64 + 2192;
	// bl 0x828165a8
	ctx.lr = 0x830036F8;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1232(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1232, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83003710"))) PPC_WEAK_FUNC(sub_83003710);
PPC_FUNC_IMPL(__imp__sub_83003710) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2196
	ctx.r3.s64 = ctx.r11.s64 + 2196;
	// bl 0x828165a8
	ctx.lr = 0x83003728;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1236(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1236, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83003740"))) PPC_WEAK_FUNC(sub_83003740);
PPC_FUNC_IMPL(__imp__sub_83003740) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2200
	ctx.r3.s64 = ctx.r11.s64 + 2200;
	// bl 0x828165a8
	ctx.lr = 0x83003758;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1240(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1240, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83003770"))) PPC_WEAK_FUNC(sub_83003770);
PPC_FUNC_IMPL(__imp__sub_83003770) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2204
	ctx.r3.s64 = ctx.r11.s64 + 2204;
	// bl 0x828165a8
	ctx.lr = 0x83003788;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1244(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1244, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830037A0"))) PPC_WEAK_FUNC(sub_830037A0);
PPC_FUNC_IMPL(__imp__sub_830037A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2208
	ctx.r3.s64 = ctx.r11.s64 + 2208;
	// bl 0x828165a8
	ctx.lr = 0x830037B8;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1248(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1248, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830037D0"))) PPC_WEAK_FUNC(sub_830037D0);
PPC_FUNC_IMPL(__imp__sub_830037D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2212
	ctx.r3.s64 = ctx.r11.s64 + 2212;
	// bl 0x828165a8
	ctx.lr = 0x830037E8;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1252(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1252, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83003800"))) PPC_WEAK_FUNC(sub_83003800);
PPC_FUNC_IMPL(__imp__sub_83003800) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2216
	ctx.r3.s64 = ctx.r11.s64 + 2216;
	// bl 0x828165a8
	ctx.lr = 0x83003818;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1256(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1256, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83003830"))) PPC_WEAK_FUNC(sub_83003830);
PPC_FUNC_IMPL(__imp__sub_83003830) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2220
	ctx.r3.s64 = ctx.r11.s64 + 2220;
	// bl 0x828165a8
	ctx.lr = 0x83003848;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1260(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1260, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83003860"))) PPC_WEAK_FUNC(sub_83003860);
PPC_FUNC_IMPL(__imp__sub_83003860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2224
	ctx.r3.s64 = ctx.r11.s64 + 2224;
	// bl 0x828165a8
	ctx.lr = 0x83003878;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1264(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1264, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83003890"))) PPC_WEAK_FUNC(sub_83003890);
PPC_FUNC_IMPL(__imp__sub_83003890) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2228
	ctx.r3.s64 = ctx.r11.s64 + 2228;
	// bl 0x828165a8
	ctx.lr = 0x830038A8;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1268(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1268, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830038C0"))) PPC_WEAK_FUNC(sub_830038C0);
PPC_FUNC_IMPL(__imp__sub_830038C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2252
	ctx.r3.s64 = ctx.r11.s64 + 2252;
	// bl 0x828165a8
	ctx.lr = 0x830038D8;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1272(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1272, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830038F0"))) PPC_WEAK_FUNC(sub_830038F0);
PPC_FUNC_IMPL(__imp__sub_830038F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2272
	ctx.r3.s64 = ctx.r11.s64 + 2272;
	// bl 0x828165a8
	ctx.lr = 0x83003908;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1276(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1276, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83003920"))) PPC_WEAK_FUNC(sub_83003920);
PPC_FUNC_IMPL(__imp__sub_83003920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2292
	ctx.r3.s64 = ctx.r11.s64 + 2292;
	// bl 0x828165a8
	ctx.lr = 0x83003938;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1280(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1280, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83003950"))) PPC_WEAK_FUNC(sub_83003950);
PPC_FUNC_IMPL(__imp__sub_83003950) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2316
	ctx.r3.s64 = ctx.r11.s64 + 2316;
	// bl 0x828165a8
	ctx.lr = 0x83003968;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1284(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1284, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83003980"))) PPC_WEAK_FUNC(sub_83003980);
PPC_FUNC_IMPL(__imp__sub_83003980) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2340
	ctx.r3.s64 = ctx.r11.s64 + 2340;
	// bl 0x828165a8
	ctx.lr = 0x83003998;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1288(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1288, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830039B0"))) PPC_WEAK_FUNC(sub_830039B0);
PPC_FUNC_IMPL(__imp__sub_830039B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2364
	ctx.r3.s64 = ctx.r11.s64 + 2364;
	// bl 0x828165a8
	ctx.lr = 0x830039C8;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1292(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1292, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830039E0"))) PPC_WEAK_FUNC(sub_830039E0);
PPC_FUNC_IMPL(__imp__sub_830039E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2384
	ctx.r3.s64 = ctx.r11.s64 + 2384;
	// bl 0x828165a8
	ctx.lr = 0x830039F8;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1296(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1296, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83003A10"))) PPC_WEAK_FUNC(sub_83003A10);
PPC_FUNC_IMPL(__imp__sub_83003A10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2408
	ctx.r3.s64 = ctx.r11.s64 + 2408;
	// bl 0x828165a8
	ctx.lr = 0x83003A28;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1300(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1300, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83003A40"))) PPC_WEAK_FUNC(sub_83003A40);
PPC_FUNC_IMPL(__imp__sub_83003A40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2432
	ctx.r3.s64 = ctx.r11.s64 + 2432;
	// bl 0x828165a8
	ctx.lr = 0x83003A58;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1304(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1304, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83003A70"))) PPC_WEAK_FUNC(sub_83003A70);
PPC_FUNC_IMPL(__imp__sub_83003A70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2456
	ctx.r3.s64 = ctx.r11.s64 + 2456;
	// bl 0x828165a8
	ctx.lr = 0x83003A88;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1308(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1308, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83003AA0"))) PPC_WEAK_FUNC(sub_83003AA0);
PPC_FUNC_IMPL(__imp__sub_83003AA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2476
	ctx.r3.s64 = ctx.r11.s64 + 2476;
	// bl 0x828165a8
	ctx.lr = 0x83003AB8;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1312(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1312, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83003AD0"))) PPC_WEAK_FUNC(sub_83003AD0);
PPC_FUNC_IMPL(__imp__sub_83003AD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2484
	ctx.r3.s64 = ctx.r11.s64 + 2484;
	// bl 0x828165a8
	ctx.lr = 0x83003AE8;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1316(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1316, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83003B00"))) PPC_WEAK_FUNC(sub_83003B00);
PPC_FUNC_IMPL(__imp__sub_83003B00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2504
	ctx.r3.s64 = ctx.r11.s64 + 2504;
	// bl 0x828165a8
	ctx.lr = 0x83003B18;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1320(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1320, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83003B30"))) PPC_WEAK_FUNC(sub_83003B30);
PPC_FUNC_IMPL(__imp__sub_83003B30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2520
	ctx.r3.s64 = ctx.r11.s64 + 2520;
	// bl 0x828165a8
	ctx.lr = 0x83003B48;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1324(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1324, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83003B60"))) PPC_WEAK_FUNC(sub_83003B60);
PPC_FUNC_IMPL(__imp__sub_83003B60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2536
	ctx.r3.s64 = ctx.r11.s64 + 2536;
	// bl 0x828165a8
	ctx.lr = 0x83003B78;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1328(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1328, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83003B90"))) PPC_WEAK_FUNC(sub_83003B90);
PPC_FUNC_IMPL(__imp__sub_83003B90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2544
	ctx.r3.s64 = ctx.r11.s64 + 2544;
	// bl 0x828165a8
	ctx.lr = 0x83003BA8;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1332(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1332, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83003BC0"))) PPC_WEAK_FUNC(sub_83003BC0);
PPC_FUNC_IMPL(__imp__sub_83003BC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2552
	ctx.r3.s64 = ctx.r11.s64 + 2552;
	// bl 0x828165a8
	ctx.lr = 0x83003BD8;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1336(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1336, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83003BF0"))) PPC_WEAK_FUNC(sub_83003BF0);
PPC_FUNC_IMPL(__imp__sub_83003BF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2560
	ctx.r3.s64 = ctx.r11.s64 + 2560;
	// bl 0x828165a8
	ctx.lr = 0x83003C08;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1340(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1340, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83003C20"))) PPC_WEAK_FUNC(sub_83003C20);
PPC_FUNC_IMPL(__imp__sub_83003C20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2568
	ctx.r3.s64 = ctx.r11.s64 + 2568;
	// bl 0x828165a8
	ctx.lr = 0x83003C38;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1344(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1344, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83003C50"))) PPC_WEAK_FUNC(sub_83003C50);
PPC_FUNC_IMPL(__imp__sub_83003C50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2576
	ctx.r3.s64 = ctx.r11.s64 + 2576;
	// bl 0x828165a8
	ctx.lr = 0x83003C68;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1348(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1348, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83003C80"))) PPC_WEAK_FUNC(sub_83003C80);
PPC_FUNC_IMPL(__imp__sub_83003C80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2584
	ctx.r3.s64 = ctx.r11.s64 + 2584;
	// bl 0x828165a8
	ctx.lr = 0x83003C98;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1352(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1352, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83003CB0"))) PPC_WEAK_FUNC(sub_83003CB0);
PPC_FUNC_IMPL(__imp__sub_83003CB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2592
	ctx.r3.s64 = ctx.r11.s64 + 2592;
	// bl 0x828165a8
	ctx.lr = 0x83003CC8;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1356(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1356, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83003CE0"))) PPC_WEAK_FUNC(sub_83003CE0);
PPC_FUNC_IMPL(__imp__sub_83003CE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2600
	ctx.r3.s64 = ctx.r11.s64 + 2600;
	// bl 0x828165a8
	ctx.lr = 0x83003CF8;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1360(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1360, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83003D10"))) PPC_WEAK_FUNC(sub_83003D10);
PPC_FUNC_IMPL(__imp__sub_83003D10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2608
	ctx.r3.s64 = ctx.r11.s64 + 2608;
	// bl 0x828165a8
	ctx.lr = 0x83003D28;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1364(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1364, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83003D40"))) PPC_WEAK_FUNC(sub_83003D40);
PPC_FUNC_IMPL(__imp__sub_83003D40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2616
	ctx.r3.s64 = ctx.r11.s64 + 2616;
	// bl 0x828165a8
	ctx.lr = 0x83003D58;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1368(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1368, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83003D70"))) PPC_WEAK_FUNC(sub_83003D70);
PPC_FUNC_IMPL(__imp__sub_83003D70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2624
	ctx.r3.s64 = ctx.r11.s64 + 2624;
	// bl 0x828165a8
	ctx.lr = 0x83003D88;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1372(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1372, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83003DA0"))) PPC_WEAK_FUNC(sub_83003DA0);
PPC_FUNC_IMPL(__imp__sub_83003DA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2632
	ctx.r3.s64 = ctx.r11.s64 + 2632;
	// bl 0x828165a8
	ctx.lr = 0x83003DB8;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1376(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1376, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83003DD0"))) PPC_WEAK_FUNC(sub_83003DD0);
PPC_FUNC_IMPL(__imp__sub_83003DD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2648
	ctx.r3.s64 = ctx.r11.s64 + 2648;
	// bl 0x828165a8
	ctx.lr = 0x83003DE8;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1380(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1380, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83003E00"))) PPC_WEAK_FUNC(sub_83003E00);
PPC_FUNC_IMPL(__imp__sub_83003E00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2672
	ctx.r3.s64 = ctx.r11.s64 + 2672;
	// bl 0x828165a8
	ctx.lr = 0x83003E18;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1384(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1384, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83003E30"))) PPC_WEAK_FUNC(sub_83003E30);
PPC_FUNC_IMPL(__imp__sub_83003E30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2692
	ctx.r3.s64 = ctx.r11.s64 + 2692;
	// bl 0x828165a8
	ctx.lr = 0x83003E48;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1388(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1388, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83003E60"))) PPC_WEAK_FUNC(sub_83003E60);
PPC_FUNC_IMPL(__imp__sub_83003E60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2716
	ctx.r3.s64 = ctx.r11.s64 + 2716;
	// bl 0x828165a8
	ctx.lr = 0x83003E78;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1392, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83003E90"))) PPC_WEAK_FUNC(sub_83003E90);
PPC_FUNC_IMPL(__imp__sub_83003E90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2740
	ctx.r3.s64 = ctx.r11.s64 + 2740;
	// bl 0x828165a8
	ctx.lr = 0x83003EA8;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1396, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83003EC0"))) PPC_WEAK_FUNC(sub_83003EC0);
PPC_FUNC_IMPL(__imp__sub_83003EC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2768
	ctx.r3.s64 = ctx.r11.s64 + 2768;
	// bl 0x828165a8
	ctx.lr = 0x83003ED8;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1400(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1400, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83003EF0"))) PPC_WEAK_FUNC(sub_83003EF0);
PPC_FUNC_IMPL(__imp__sub_83003EF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2784
	ctx.r3.s64 = ctx.r11.s64 + 2784;
	// bl 0x828165a8
	ctx.lr = 0x83003F08;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1404(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1404, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83003F20"))) PPC_WEAK_FUNC(sub_83003F20);
PPC_FUNC_IMPL(__imp__sub_83003F20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2804
	ctx.r3.s64 = ctx.r11.s64 + 2804;
	// bl 0x828165a8
	ctx.lr = 0x83003F38;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1408(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1408, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83003F50"))) PPC_WEAK_FUNC(sub_83003F50);
PPC_FUNC_IMPL(__imp__sub_83003F50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2824
	ctx.r3.s64 = ctx.r11.s64 + 2824;
	// bl 0x828165a8
	ctx.lr = 0x83003F68;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1412(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1412, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83003F80"))) PPC_WEAK_FUNC(sub_83003F80);
PPC_FUNC_IMPL(__imp__sub_83003F80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2840
	ctx.r3.s64 = ctx.r11.s64 + 2840;
	// bl 0x828165a8
	ctx.lr = 0x83003F98;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1416(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1416, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83003FB0"))) PPC_WEAK_FUNC(sub_83003FB0);
PPC_FUNC_IMPL(__imp__sub_83003FB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2852
	ctx.r3.s64 = ctx.r11.s64 + 2852;
	// bl 0x828165a8
	ctx.lr = 0x83003FC8;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
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

__attribute__((alias("__imp__sub_83003FE0"))) PPC_WEAK_FUNC(sub_83003FE0);
PPC_FUNC_IMPL(__imp__sub_83003FE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2876
	ctx.r3.s64 = ctx.r11.s64 + 2876;
	// bl 0x828165a8
	ctx.lr = 0x83003FF8;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1424(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1424, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83004010"))) PPC_WEAK_FUNC(sub_83004010);
PPC_FUNC_IMPL(__imp__sub_83004010) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2892
	ctx.r3.s64 = ctx.r11.s64 + 2892;
	// bl 0x828165a8
	ctx.lr = 0x83004028;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1428(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1428, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83004040"))) PPC_WEAK_FUNC(sub_83004040);
PPC_FUNC_IMPL(__imp__sub_83004040) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2904
	ctx.r3.s64 = ctx.r11.s64 + 2904;
	// bl 0x828165a8
	ctx.lr = 0x83004058;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1432(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1432, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83004070"))) PPC_WEAK_FUNC(sub_83004070);
PPC_FUNC_IMPL(__imp__sub_83004070) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2916
	ctx.r3.s64 = ctx.r11.s64 + 2916;
	// bl 0x828165a8
	ctx.lr = 0x83004088;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1436(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1436, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830040A0"))) PPC_WEAK_FUNC(sub_830040A0);
PPC_FUNC_IMPL(__imp__sub_830040A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2940
	ctx.r3.s64 = ctx.r11.s64 + 2940;
	// bl 0x828165a8
	ctx.lr = 0x830040B8;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1440(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1440, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830040D0"))) PPC_WEAK_FUNC(sub_830040D0);
PPC_FUNC_IMPL(__imp__sub_830040D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2960
	ctx.r3.s64 = ctx.r11.s64 + 2960;
	// bl 0x828165a8
	ctx.lr = 0x830040E8;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1444(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1444, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83004100"))) PPC_WEAK_FUNC(sub_83004100);
PPC_FUNC_IMPL(__imp__sub_83004100) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2988
	ctx.r3.s64 = ctx.r11.s64 + 2988;
	// bl 0x828165a8
	ctx.lr = 0x83004118;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1448(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1448, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83004130"))) PPC_WEAK_FUNC(sub_83004130);
PPC_FUNC_IMPL(__imp__sub_83004130) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,3000
	ctx.r3.s64 = ctx.r11.s64 + 3000;
	// bl 0x828165a8
	ctx.lr = 0x83004148;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1452(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1452, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83004160"))) PPC_WEAK_FUNC(sub_83004160);
PPC_FUNC_IMPL(__imp__sub_83004160) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,3032
	ctx.r3.s64 = ctx.r11.s64 + 3032;
	// bl 0x828165a8
	ctx.lr = 0x83004178;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1456(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1456, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83004190"))) PPC_WEAK_FUNC(sub_83004190);
PPC_FUNC_IMPL(__imp__sub_83004190) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,3064
	ctx.r3.s64 = ctx.r11.s64 + 3064;
	// bl 0x828165a8
	ctx.lr = 0x830041A8;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1460(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1460, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830041C0"))) PPC_WEAK_FUNC(sub_830041C0);
PPC_FUNC_IMPL(__imp__sub_830041C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,3100
	ctx.r3.s64 = ctx.r11.s64 + 3100;
	// bl 0x828165a8
	ctx.lr = 0x830041D8;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1464(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1464, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830041F0"))) PPC_WEAK_FUNC(sub_830041F0);
PPC_FUNC_IMPL(__imp__sub_830041F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,3136
	ctx.r3.s64 = ctx.r11.s64 + 3136;
	// bl 0x828165a8
	ctx.lr = 0x83004208;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1468(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1468, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83004220"))) PPC_WEAK_FUNC(sub_83004220);
PPC_FUNC_IMPL(__imp__sub_83004220) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,3188
	ctx.r3.s64 = ctx.r11.s64 + 3188;
	// bl 0x828165a8
	ctx.lr = 0x83004238;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1472(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1472, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83004250"))) PPC_WEAK_FUNC(sub_83004250);
PPC_FUNC_IMPL(__imp__sub_83004250) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,3240
	ctx.r3.s64 = ctx.r11.s64 + 3240;
	// bl 0x828165a8
	ctx.lr = 0x83004268;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1476(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1476, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83004280"))) PPC_WEAK_FUNC(sub_83004280);
PPC_FUNC_IMPL(__imp__sub_83004280) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,3272
	ctx.r3.s64 = ctx.r11.s64 + 3272;
	// bl 0x828165a8
	ctx.lr = 0x83004298;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1480(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1480, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830042B0"))) PPC_WEAK_FUNC(sub_830042B0);
PPC_FUNC_IMPL(__imp__sub_830042B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,3304
	ctx.r3.s64 = ctx.r11.s64 + 3304;
	// bl 0x828165a8
	ctx.lr = 0x830042C8;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1484(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1484, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830042E0"))) PPC_WEAK_FUNC(sub_830042E0);
PPC_FUNC_IMPL(__imp__sub_830042E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,3328
	ctx.r3.s64 = ctx.r11.s64 + 3328;
	// bl 0x828165a8
	ctx.lr = 0x830042F8;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1488(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1488, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83004310"))) PPC_WEAK_FUNC(sub_83004310);
PPC_FUNC_IMPL(__imp__sub_83004310) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,3352
	ctx.r3.s64 = ctx.r11.s64 + 3352;
	// bl 0x828165a8
	ctx.lr = 0x83004328;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1492(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1492, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83004340"))) PPC_WEAK_FUNC(sub_83004340);
PPC_FUNC_IMPL(__imp__sub_83004340) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,3376
	ctx.r3.s64 = ctx.r11.s64 + 3376;
	// bl 0x828165a8
	ctx.lr = 0x83004358;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1496(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1496, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83004370"))) PPC_WEAK_FUNC(sub_83004370);
PPC_FUNC_IMPL(__imp__sub_83004370) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,3400
	ctx.r3.s64 = ctx.r11.s64 + 3400;
	// bl 0x828165a8
	ctx.lr = 0x83004388;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1500(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1500, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830043A0"))) PPC_WEAK_FUNC(sub_830043A0);
PPC_FUNC_IMPL(__imp__sub_830043A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,3448
	ctx.r3.s64 = ctx.r11.s64 + 3448;
	// bl 0x828165a8
	ctx.lr = 0x830043B8;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1504(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1504, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830043D0"))) PPC_WEAK_FUNC(sub_830043D0);
PPC_FUNC_IMPL(__imp__sub_830043D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,3496
	ctx.r3.s64 = ctx.r11.s64 + 3496;
	// bl 0x828165a8
	ctx.lr = 0x830043E8;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1508(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1508, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83004400"))) PPC_WEAK_FUNC(sub_83004400);
PPC_FUNC_IMPL(__imp__sub_83004400) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,3540
	ctx.r3.s64 = ctx.r11.s64 + 3540;
	// bl 0x828165a8
	ctx.lr = 0x83004418;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1512(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1512, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83004430"))) PPC_WEAK_FUNC(sub_83004430);
PPC_FUNC_IMPL(__imp__sub_83004430) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,3588
	ctx.r3.s64 = ctx.r11.s64 + 3588;
	// bl 0x828165a8
	ctx.lr = 0x83004448;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1516(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1516, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83004460"))) PPC_WEAK_FUNC(sub_83004460);
PPC_FUNC_IMPL(__imp__sub_83004460) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,3624
	ctx.r3.s64 = ctx.r11.s64 + 3624;
	// bl 0x828165a8
	ctx.lr = 0x83004478;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1520(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1520, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83004490"))) PPC_WEAK_FUNC(sub_83004490);
PPC_FUNC_IMPL(__imp__sub_83004490) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,3664
	ctx.r3.s64 = ctx.r11.s64 + 3664;
	// bl 0x828165a8
	ctx.lr = 0x830044A8;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1524(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1524, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830044C0"))) PPC_WEAK_FUNC(sub_830044C0);
PPC_FUNC_IMPL(__imp__sub_830044C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,3708
	ctx.r3.s64 = ctx.r11.s64 + 3708;
	// bl 0x828165a8
	ctx.lr = 0x830044D8;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1528(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1528, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830044F0"))) PPC_WEAK_FUNC(sub_830044F0);
PPC_FUNC_IMPL(__imp__sub_830044F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,3748
	ctx.r3.s64 = ctx.r11.s64 + 3748;
	// bl 0x828165a8
	ctx.lr = 0x83004508;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1532(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1532, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83004520"))) PPC_WEAK_FUNC(sub_83004520);
PPC_FUNC_IMPL(__imp__sub_83004520) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,3780
	ctx.r3.s64 = ctx.r11.s64 + 3780;
	// bl 0x828165a8
	ctx.lr = 0x83004538;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1536(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1536, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83004550"))) PPC_WEAK_FUNC(sub_83004550);
PPC_FUNC_IMPL(__imp__sub_83004550) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,3812
	ctx.r3.s64 = ctx.r11.s64 + 3812;
	// bl 0x828165a8
	ctx.lr = 0x83004568;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1540(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1540, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83004580"))) PPC_WEAK_FUNC(sub_83004580);
PPC_FUNC_IMPL(__imp__sub_83004580) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,3828
	ctx.r3.s64 = ctx.r11.s64 + 3828;
	// bl 0x828165a8
	ctx.lr = 0x83004598;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1544(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1544, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830045B0"))) PPC_WEAK_FUNC(sub_830045B0);
PPC_FUNC_IMPL(__imp__sub_830045B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,3844
	ctx.r3.s64 = ctx.r11.s64 + 3844;
	// bl 0x828165a8
	ctx.lr = 0x830045C8;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1548(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1548, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830045E0"))) PPC_WEAK_FUNC(sub_830045E0);
PPC_FUNC_IMPL(__imp__sub_830045E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,3860
	ctx.r3.s64 = ctx.r11.s64 + 3860;
	// bl 0x828165a8
	ctx.lr = 0x830045F8;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1552(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1552, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83004610"))) PPC_WEAK_FUNC(sub_83004610);
PPC_FUNC_IMPL(__imp__sub_83004610) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,3876
	ctx.r3.s64 = ctx.r11.s64 + 3876;
	// bl 0x828165a8
	ctx.lr = 0x83004628;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1556(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1556, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83004640"))) PPC_WEAK_FUNC(sub_83004640);
PPC_FUNC_IMPL(__imp__sub_83004640) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,3900
	ctx.r3.s64 = ctx.r11.s64 + 3900;
	// bl 0x828165a8
	ctx.lr = 0x83004658;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1560(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1560, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83004670"))) PPC_WEAK_FUNC(sub_83004670);
PPC_FUNC_IMPL(__imp__sub_83004670) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,3924
	ctx.r3.s64 = ctx.r11.s64 + 3924;
	// bl 0x828165a8
	ctx.lr = 0x83004688;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1564(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1564, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830046A0"))) PPC_WEAK_FUNC(sub_830046A0);
PPC_FUNC_IMPL(__imp__sub_830046A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,3948
	ctx.r3.s64 = ctx.r11.s64 + 3948;
	// bl 0x828165a8
	ctx.lr = 0x830046B8;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1568, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830046D0"))) PPC_WEAK_FUNC(sub_830046D0);
PPC_FUNC_IMPL(__imp__sub_830046D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,3976
	ctx.r3.s64 = ctx.r11.s64 + 3976;
	// bl 0x828165a8
	ctx.lr = 0x830046E8;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1572(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1572, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83004700"))) PPC_WEAK_FUNC(sub_83004700);
PPC_FUNC_IMPL(__imp__sub_83004700) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,4004
	ctx.r3.s64 = ctx.r11.s64 + 4004;
	// bl 0x828165a8
	ctx.lr = 0x83004718;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1576(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1576, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83004730"))) PPC_WEAK_FUNC(sub_83004730);
PPC_FUNC_IMPL(__imp__sub_83004730) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,4048
	ctx.r3.s64 = ctx.r11.s64 + 4048;
	// bl 0x828165a8
	ctx.lr = 0x83004748;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1580(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1580, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83004760"))) PPC_WEAK_FUNC(sub_83004760);
PPC_FUNC_IMPL(__imp__sub_83004760) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,4092
	ctx.r3.s64 = ctx.r11.s64 + 4092;
	// bl 0x828165a8
	ctx.lr = 0x83004778;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1584(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1584, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83004790"))) PPC_WEAK_FUNC(sub_83004790);
PPC_FUNC_IMPL(__imp__sub_83004790) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// lwz r11,1540(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1540);
	// stw r11,1588(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1588, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830047A8"))) PPC_WEAK_FUNC(sub_830047A8);
PPC_FUNC_IMPL(__imp__sub_830047A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// lwz r11,1544(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1544);
	// stw r11,1592(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1592, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830047C0"))) PPC_WEAK_FUNC(sub_830047C0);
PPC_FUNC_IMPL(__imp__sub_830047C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// lwz r11,1548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1548);
	// stw r11,1596(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1596, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830047D8"))) PPC_WEAK_FUNC(sub_830047D8);
PPC_FUNC_IMPL(__imp__sub_830047D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// lwz r11,1552(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1552);
	// stw r11,1600(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1600, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830047F0"))) PPC_WEAK_FUNC(sub_830047F0);
PPC_FUNC_IMPL(__imp__sub_830047F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// lwz r11,1556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1556);
	// stw r11,1604(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1604, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83004808"))) PPC_WEAK_FUNC(sub_83004808);
PPC_FUNC_IMPL(__imp__sub_83004808) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,4116
	ctx.r3.s64 = ctx.r11.s64 + 4116;
	// bl 0x828165a8
	ctx.lr = 0x83004820;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1608(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1608, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83004838"))) PPC_WEAK_FUNC(sub_83004838);
PPC_FUNC_IMPL(__imp__sub_83004838) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,4156
	ctx.r3.s64 = ctx.r11.s64 + 4156;
	// bl 0x828165a8
	ctx.lr = 0x83004850;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1612(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1612, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83004868"))) PPC_WEAK_FUNC(sub_83004868);
PPC_FUNC_IMPL(__imp__sub_83004868) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,4196
	ctx.r3.s64 = ctx.r11.s64 + 4196;
	// bl 0x828165a8
	ctx.lr = 0x83004880;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1616(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1616, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83004898"))) PPC_WEAK_FUNC(sub_83004898);
PPC_FUNC_IMPL(__imp__sub_83004898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,4232
	ctx.r3.s64 = ctx.r11.s64 + 4232;
	// bl 0x828165a8
	ctx.lr = 0x830048B0;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1620(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1620, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830048C8"))) PPC_WEAK_FUNC(sub_830048C8);
PPC_FUNC_IMPL(__imp__sub_830048C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,4272
	ctx.r3.s64 = ctx.r11.s64 + 4272;
	// bl 0x828165a8
	ctx.lr = 0x830048E0;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1624(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1624, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830048F8"))) PPC_WEAK_FUNC(sub_830048F8);
PPC_FUNC_IMPL(__imp__sub_830048F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,4300
	ctx.r3.s64 = ctx.r11.s64 + 4300;
	// bl 0x828165a8
	ctx.lr = 0x83004910;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1628(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1628, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83004928"))) PPC_WEAK_FUNC(sub_83004928);
PPC_FUNC_IMPL(__imp__sub_83004928) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,4332
	ctx.r3.s64 = ctx.r11.s64 + 4332;
	// bl 0x828165a8
	ctx.lr = 0x83004940;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1632(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1632, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83004958"))) PPC_WEAK_FUNC(sub_83004958);
PPC_FUNC_IMPL(__imp__sub_83004958) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,4368
	ctx.r3.s64 = ctx.r11.s64 + 4368;
	// bl 0x828165a8
	ctx.lr = 0x83004970;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1636(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1636, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83004988"))) PPC_WEAK_FUNC(sub_83004988);
PPC_FUNC_IMPL(__imp__sub_83004988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,4400
	ctx.r3.s64 = ctx.r11.s64 + 4400;
	// bl 0x828165a8
	ctx.lr = 0x830049A0;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1640(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1640, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830049B8"))) PPC_WEAK_FUNC(sub_830049B8);
PPC_FUNC_IMPL(__imp__sub_830049B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,1580
	ctx.r3.s64 = ctx.r11.s64 + 1580;
	// bl 0x828165a8
	ctx.lr = 0x830049D0;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1644(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1644, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830049E8"))) PPC_WEAK_FUNC(sub_830049E8);
PPC_FUNC_IMPL(__imp__sub_830049E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,1596
	ctx.r3.s64 = ctx.r11.s64 + 1596;
	// bl 0x828165a8
	ctx.lr = 0x83004A00;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1648(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1648, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83004A18"))) PPC_WEAK_FUNC(sub_83004A18);
PPC_FUNC_IMPL(__imp__sub_83004A18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,1612
	ctx.r3.s64 = ctx.r11.s64 + 1612;
	// bl 0x828165a8
	ctx.lr = 0x83004A30;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1652(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1652, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83004A48"))) PPC_WEAK_FUNC(sub_83004A48);
PPC_FUNC_IMPL(__imp__sub_83004A48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,1640
	ctx.r3.s64 = ctx.r11.s64 + 1640;
	// bl 0x828165a8
	ctx.lr = 0x83004A60;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1656(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1656, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83004A78"))) PPC_WEAK_FUNC(sub_83004A78);
PPC_FUNC_IMPL(__imp__sub_83004A78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,1672
	ctx.r3.s64 = ctx.r11.s64 + 1672;
	// bl 0x828165a8
	ctx.lr = 0x83004A90;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1660(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1660, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83004AA8"))) PPC_WEAK_FUNC(sub_83004AA8);
PPC_FUNC_IMPL(__imp__sub_83004AA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,1704
	ctx.r3.s64 = ctx.r11.s64 + 1704;
	// bl 0x828165a8
	ctx.lr = 0x83004AC0;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1664(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1664, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83004AD8"))) PPC_WEAK_FUNC(sub_83004AD8);
PPC_FUNC_IMPL(__imp__sub_83004AD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,1740
	ctx.r3.s64 = ctx.r11.s64 + 1740;
	// bl 0x828165a8
	ctx.lr = 0x83004AF0;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1668(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1668, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83004B08"))) PPC_WEAK_FUNC(sub_83004B08);
PPC_FUNC_IMPL(__imp__sub_83004B08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,1776
	ctx.r3.s64 = ctx.r11.s64 + 1776;
	// bl 0x828165a8
	ctx.lr = 0x83004B20;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1672(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1672, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83004B38"))) PPC_WEAK_FUNC(sub_83004B38);
PPC_FUNC_IMPL(__imp__sub_83004B38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,1796
	ctx.r3.s64 = ctx.r11.s64 + 1796;
	// bl 0x828165a8
	ctx.lr = 0x83004B50;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1676(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1676, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83004B68"))) PPC_WEAK_FUNC(sub_83004B68);
PPC_FUNC_IMPL(__imp__sub_83004B68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,1804
	ctx.r3.s64 = ctx.r11.s64 + 1804;
	// bl 0x828165a8
	ctx.lr = 0x83004B80;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1680(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1680, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83004B98"))) PPC_WEAK_FUNC(sub_83004B98);
PPC_FUNC_IMPL(__imp__sub_83004B98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,1816
	ctx.r3.s64 = ctx.r11.s64 + 1816;
	// bl 0x828165a8
	ctx.lr = 0x83004BB0;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1684(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1684, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83004BC8"))) PPC_WEAK_FUNC(sub_83004BC8);
PPC_FUNC_IMPL(__imp__sub_83004BC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,1828
	ctx.r3.s64 = ctx.r11.s64 + 1828;
	// bl 0x828165a8
	ctx.lr = 0x83004BE0;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1688(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1688, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83004BF8"))) PPC_WEAK_FUNC(sub_83004BF8);
PPC_FUNC_IMPL(__imp__sub_83004BF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,1848
	ctx.r3.s64 = ctx.r11.s64 + 1848;
	// bl 0x828165a8
	ctx.lr = 0x83004C10;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1692(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1692, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83004C28"))) PPC_WEAK_FUNC(sub_83004C28);
PPC_FUNC_IMPL(__imp__sub_83004C28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,1864
	ctx.r3.s64 = ctx.r11.s64 + 1864;
	// bl 0x828165a8
	ctx.lr = 0x83004C40;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1696(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1696, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83004C58"))) PPC_WEAK_FUNC(sub_83004C58);
PPC_FUNC_IMPL(__imp__sub_83004C58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,1884
	ctx.r3.s64 = ctx.r11.s64 + 1884;
	// bl 0x828165a8
	ctx.lr = 0x83004C70;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1700(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1700, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83004C88"))) PPC_WEAK_FUNC(sub_83004C88);
PPC_FUNC_IMPL(__imp__sub_83004C88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,1900
	ctx.r3.s64 = ctx.r11.s64 + 1900;
	// bl 0x828165a8
	ctx.lr = 0x83004CA0;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1704(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1704, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83004CB8"))) PPC_WEAK_FUNC(sub_83004CB8);
PPC_FUNC_IMPL(__imp__sub_83004CB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,1920
	ctx.r3.s64 = ctx.r11.s64 + 1920;
	// bl 0x828165a8
	ctx.lr = 0x83004CD0;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1708(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1708, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83004CE8"))) PPC_WEAK_FUNC(sub_83004CE8);
PPC_FUNC_IMPL(__imp__sub_83004CE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,1928
	ctx.r3.s64 = ctx.r11.s64 + 1928;
	// bl 0x828165a8
	ctx.lr = 0x83004D00;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1712(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1712, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83004D18"))) PPC_WEAK_FUNC(sub_83004D18);
PPC_FUNC_IMPL(__imp__sub_83004D18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,1940
	ctx.r3.s64 = ctx.r11.s64 + 1940;
	// bl 0x828165a8
	ctx.lr = 0x83004D30;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1716(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1716, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83004D48"))) PPC_WEAK_FUNC(sub_83004D48);
PPC_FUNC_IMPL(__imp__sub_83004D48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,1952
	ctx.r3.s64 = ctx.r11.s64 + 1952;
	// bl 0x828165a8
	ctx.lr = 0x83004D60;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1720(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1720, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83004D78"))) PPC_WEAK_FUNC(sub_83004D78);
PPC_FUNC_IMPL(__imp__sub_83004D78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,1960
	ctx.r3.s64 = ctx.r11.s64 + 1960;
	// bl 0x828165a8
	ctx.lr = 0x83004D90;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1724(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1724, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83004DA8"))) PPC_WEAK_FUNC(sub_83004DA8);
PPC_FUNC_IMPL(__imp__sub_83004DA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,1972
	ctx.r3.s64 = ctx.r11.s64 + 1972;
	// bl 0x828165a8
	ctx.lr = 0x83004DC0;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1728(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1728, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83004DD8"))) PPC_WEAK_FUNC(sub_83004DD8);
PPC_FUNC_IMPL(__imp__sub_83004DD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,1984
	ctx.r3.s64 = ctx.r11.s64 + 1984;
	// bl 0x828165a8
	ctx.lr = 0x83004DF0;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1732(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1732, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83004E08"))) PPC_WEAK_FUNC(sub_83004E08);
PPC_FUNC_IMPL(__imp__sub_83004E08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2000
	ctx.r3.s64 = ctx.r11.s64 + 2000;
	// bl 0x828165a8
	ctx.lr = 0x83004E20;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1736(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1736, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83004E38"))) PPC_WEAK_FUNC(sub_83004E38);
PPC_FUNC_IMPL(__imp__sub_83004E38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2016
	ctx.r3.s64 = ctx.r11.s64 + 2016;
	// bl 0x828165a8
	ctx.lr = 0x83004E50;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1740(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1740, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83004E68"))) PPC_WEAK_FUNC(sub_83004E68);
PPC_FUNC_IMPL(__imp__sub_83004E68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2028
	ctx.r3.s64 = ctx.r11.s64 + 2028;
	// bl 0x828165a8
	ctx.lr = 0x83004E80;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1744(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1744, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83004E98"))) PPC_WEAK_FUNC(sub_83004E98);
PPC_FUNC_IMPL(__imp__sub_83004E98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2036
	ctx.r3.s64 = ctx.r11.s64 + 2036;
	// bl 0x828165a8
	ctx.lr = 0x83004EB0;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1748(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1748, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83004EC8"))) PPC_WEAK_FUNC(sub_83004EC8);
PPC_FUNC_IMPL(__imp__sub_83004EC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2044
	ctx.r3.s64 = ctx.r11.s64 + 2044;
	// bl 0x828165a8
	ctx.lr = 0x83004EE0;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1752(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1752, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83004EF8"))) PPC_WEAK_FUNC(sub_83004EF8);
PPC_FUNC_IMPL(__imp__sub_83004EF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2056
	ctx.r3.s64 = ctx.r11.s64 + 2056;
	// bl 0x828165a8
	ctx.lr = 0x83004F10;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1756(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1756, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83004F28"))) PPC_WEAK_FUNC(sub_83004F28);
PPC_FUNC_IMPL(__imp__sub_83004F28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2068
	ctx.r3.s64 = ctx.r11.s64 + 2068;
	// bl 0x828165a8
	ctx.lr = 0x83004F40;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1760(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1760, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83004F58"))) PPC_WEAK_FUNC(sub_83004F58);
PPC_FUNC_IMPL(__imp__sub_83004F58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2080
	ctx.r3.s64 = ctx.r11.s64 + 2080;
	// bl 0x828165a8
	ctx.lr = 0x83004F70;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1764(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1764, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83004F88"))) PPC_WEAK_FUNC(sub_83004F88);
PPC_FUNC_IMPL(__imp__sub_83004F88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2088
	ctx.r3.s64 = ctx.r11.s64 + 2088;
	// bl 0x828165a8
	ctx.lr = 0x83004FA0;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1768(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1768, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83004FB8"))) PPC_WEAK_FUNC(sub_83004FB8);
PPC_FUNC_IMPL(__imp__sub_83004FB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2100
	ctx.r3.s64 = ctx.r11.s64 + 2100;
	// bl 0x828165a8
	ctx.lr = 0x83004FD0;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1772(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1772, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83004FE8"))) PPC_WEAK_FUNC(sub_83004FE8);
PPC_FUNC_IMPL(__imp__sub_83004FE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2112
	ctx.r3.s64 = ctx.r11.s64 + 2112;
	// bl 0x828165a8
	ctx.lr = 0x83005000;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1776(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1776, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83005018"))) PPC_WEAK_FUNC(sub_83005018);
PPC_FUNC_IMPL(__imp__sub_83005018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2124
	ctx.r3.s64 = ctx.r11.s64 + 2124;
	// bl 0x828165a8
	ctx.lr = 0x83005030;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1780(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1780, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83005048"))) PPC_WEAK_FUNC(sub_83005048);
PPC_FUNC_IMPL(__imp__sub_83005048) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2128
	ctx.r3.s64 = ctx.r11.s64 + 2128;
	// bl 0x828165a8
	ctx.lr = 0x83005060;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1784(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1784, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83005078"))) PPC_WEAK_FUNC(sub_83005078);
PPC_FUNC_IMPL(__imp__sub_83005078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2132
	ctx.r3.s64 = ctx.r11.s64 + 2132;
	// bl 0x828165a8
	ctx.lr = 0x83005090;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1788(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1788, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830050A8"))) PPC_WEAK_FUNC(sub_830050A8);
PPC_FUNC_IMPL(__imp__sub_830050A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2136
	ctx.r3.s64 = ctx.r11.s64 + 2136;
	// bl 0x828165a8
	ctx.lr = 0x830050C0;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1792(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1792, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830050D8"))) PPC_WEAK_FUNC(sub_830050D8);
PPC_FUNC_IMPL(__imp__sub_830050D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2140
	ctx.r3.s64 = ctx.r11.s64 + 2140;
	// bl 0x828165a8
	ctx.lr = 0x830050F0;
	sub_828165A8(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,1796(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1796, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

