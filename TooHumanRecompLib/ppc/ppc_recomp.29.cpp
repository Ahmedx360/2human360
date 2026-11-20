#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_823E6060"))) PPC_WEAK_FUNC(sub_823E6060);
PPC_FUNC_IMPL(__imp__sub_823E6060) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82364ce8
	sub_82364CE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6068"))) PPC_WEAK_FUNC(sub_823E6068);
PPC_FUNC_IMPL(__imp__sub_823E6068) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823631f8
	sub_823631F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6078"))) PPC_WEAK_FUNC(sub_823E6078);
PPC_FUNC_IMPL(__imp__sub_823E6078) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8235fb28
	sub_8235FB28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6088"))) PPC_WEAK_FUNC(sub_823E6088);
PPC_FUNC_IMPL(__imp__sub_823E6088) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8235f7b0
	sub_8235F7B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6098"))) PPC_WEAK_FUNC(sub_823E6098);
PPC_FUNC_IMPL(__imp__sub_823E6098) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8235f290
	sub_8235F290(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E60A8"))) PPC_WEAK_FUNC(sub_823E60A8);
PPC_FUNC_IMPL(__imp__sub_823E60A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8235f290
	sub_8235F290(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E60B8"))) PPC_WEAK_FUNC(sub_823E60B8);
PPC_FUNC_IMPL(__imp__sub_823E60B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8235bd00
	sub_8235BD00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E60C8"))) PPC_WEAK_FUNC(sub_823E60C8);
PPC_FUNC_IMPL(__imp__sub_823E60C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8235bd00
	sub_8235BD00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E60D8"))) PPC_WEAK_FUNC(sub_823E60D8);
PPC_FUNC_IMPL(__imp__sub_823E60D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82517798
	sub_82517798(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E60E8"))) PPC_WEAK_FUNC(sub_823E60E8);
PPC_FUNC_IMPL(__imp__sub_823E60E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82357d10
	sub_82357D10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E60F8"))) PPC_WEAK_FUNC(sub_823E60F8);
PPC_FUNC_IMPL(__imp__sub_823E60F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8251e0d0
	sub_8251E0D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6108"))) PPC_WEAK_FUNC(sub_823E6108);
PPC_FUNC_IMPL(__imp__sub_823E6108) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8251d178
	sub_8251D178(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6118"))) PPC_WEAK_FUNC(sub_823E6118);
PPC_FUNC_IMPL(__imp__sub_823E6118) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8251ce58
	sub_8251CE58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6128"))) PPC_WEAK_FUNC(sub_823E6128);
PPC_FUNC_IMPL(__imp__sub_823E6128) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82355c10
	sub_82355C10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6138"))) PPC_WEAK_FUNC(sub_823E6138);
PPC_FUNC_IMPL(__imp__sub_823E6138) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82353c10
	sub_82353C10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6148"))) PPC_WEAK_FUNC(sub_823E6148);
PPC_FUNC_IMPL(__imp__sub_823E6148) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82350328
	sub_82350328(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6158"))) PPC_WEAK_FUNC(sub_823E6158);
PPC_FUNC_IMPL(__imp__sub_823E6158) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8234e018
	sub_8234E018(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6160"))) PPC_WEAK_FUNC(sub_823E6160);
PPC_FUNC_IMPL(__imp__sub_823E6160) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8234cc38
	sub_8234CC38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6170"))) PPC_WEAK_FUNC(sub_823E6170);
PPC_FUNC_IMPL(__imp__sub_823E6170) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8234cc38
	sub_8234CC38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6180"))) PPC_WEAK_FUNC(sub_823E6180);
PPC_FUNC_IMPL(__imp__sub_823E6180) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8234c0d8
	sub_8234C0D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6190"))) PPC_WEAK_FUNC(sub_823E6190);
PPC_FUNC_IMPL(__imp__sub_823E6190) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8234c0d8
	sub_8234C0D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E61A0"))) PPC_WEAK_FUNC(sub_823E61A0);
PPC_FUNC_IMPL(__imp__sub_823E61A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,120
	ctx.r3.s64 = ctx.r3.s64 + 120;
	// b 0x825a7700
	sub_825A7700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E61B0"))) PPC_WEAK_FUNC(sub_823E61B0);
PPC_FUNC_IMPL(__imp__sub_823E61B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8234ac90
	sub_8234AC90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E61C0"))) PPC_WEAK_FUNC(sub_823E61C0);
PPC_FUNC_IMPL(__imp__sub_823E61C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8234ac90
	sub_8234AC90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E61D0"))) PPC_WEAK_FUNC(sub_823E61D0);
PPC_FUNC_IMPL(__imp__sub_823E61D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x825b9620
	sub_825B9620(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E61E0"))) PPC_WEAK_FUNC(sub_823E61E0);
PPC_FUNC_IMPL(__imp__sub_823E61E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82505c78
	sub_82505C78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E61F0"))) PPC_WEAK_FUNC(sub_823E61F0);
PPC_FUNC_IMPL(__imp__sub_823E61F0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,148
	ctx.r3.s64 = ctx.r3.s64 + 148;
	// b 0x82638d28
	sub_82638D28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E61F8"))) PPC_WEAK_FUNC(sub_823E61F8);
PPC_FUNC_IMPL(__imp__sub_823E61F8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,144
	ctx.r3.s64 = ctx.r3.s64 + 144;
	// b 0x82635488
	sub_82635488(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6200"))) PPC_WEAK_FUNC(sub_823E6200);
PPC_FUNC_IMPL(__imp__sub_823E6200) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,144
	ctx.r3.s64 = ctx.r3.s64 + 144;
	// b 0x82632650
	sub_82632650(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6208"))) PPC_WEAK_FUNC(sub_823E6208);
PPC_FUNC_IMPL(__imp__sub_823E6208) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// b 0x8263adc8
	sub_8263ADC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6210"))) PPC_WEAK_FUNC(sub_823E6210);
PPC_FUNC_IMPL(__imp__sub_823E6210) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,124
	ctx.r3.s64 = ctx.r3.s64 + 124;
	// b 0x82626480
	sub_82626480(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6218"))) PPC_WEAK_FUNC(sub_823E6218);
PPC_FUNC_IMPL(__imp__sub_823E6218) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,108
	ctx.r3.s64 = ctx.r3.s64 + 108;
	// b 0x826206c0
	sub_826206C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6220"))) PPC_WEAK_FUNC(sub_823E6220);
PPC_FUNC_IMPL(__imp__sub_823E6220) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x823787a0
	sub_823787A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6228"))) PPC_WEAK_FUNC(sub_823E6228);
PPC_FUNC_IMPL(__imp__sub_823E6228) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82378418
	sub_82378418(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6230"))) PPC_WEAK_FUNC(sub_823E6230);
PPC_FUNC_IMPL(__imp__sub_823E6230) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8259a370
	sub_8259A370(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6240"))) PPC_WEAK_FUNC(sub_823E6240);
PPC_FUNC_IMPL(__imp__sub_823E6240) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8259a138
	sub_8259A138(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6250"))) PPC_WEAK_FUNC(sub_823E6250);
PPC_FUNC_IMPL(__imp__sub_823E6250) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82371f98
	sub_82371F98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6260"))) PPC_WEAK_FUNC(sub_823E6260);
PPC_FUNC_IMPL(__imp__sub_823E6260) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82371f38
	sub_82371F38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6270"))) PPC_WEAK_FUNC(sub_823E6270);
PPC_FUNC_IMPL(__imp__sub_823E6270) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823fbaf8
	sub_823FBAF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6280"))) PPC_WEAK_FUNC(sub_823E6280);
PPC_FUNC_IMPL(__imp__sub_823E6280) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82371f98
	sub_82371F98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6290"))) PPC_WEAK_FUNC(sub_823E6290);
PPC_FUNC_IMPL(__imp__sub_823E6290) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823718f0
	sub_823718F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E62A0"))) PPC_WEAK_FUNC(sub_823E62A0);
PPC_FUNC_IMPL(__imp__sub_823E62A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82371968
	sub_82371968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E62B0"))) PPC_WEAK_FUNC(sub_823E62B0);
PPC_FUNC_IMPL(__imp__sub_823E62B0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82370710
	sub_82370710(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E62B8"))) PPC_WEAK_FUNC(sub_823E62B8);
PPC_FUNC_IMPL(__imp__sub_823E62B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8236eba0
	sub_8236EBA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E62C8"))) PPC_WEAK_FUNC(sub_823E62C8);
PPC_FUNC_IMPL(__imp__sub_823E62C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8254fcb8
	sub_8254FCB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E62D8"))) PPC_WEAK_FUNC(sub_823E62D8);
PPC_FUNC_IMPL(__imp__sub_823E62D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8236d4d0
	sub_8236D4D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E62E8"))) PPC_WEAK_FUNC(sub_823E62E8);
PPC_FUNC_IMPL(__imp__sub_823E62E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8236a628
	sub_8236A628(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E62F8"))) PPC_WEAK_FUNC(sub_823E62F8);
PPC_FUNC_IMPL(__imp__sub_823E62F8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82365db8
	sub_82365DB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6300"))) PPC_WEAK_FUNC(sub_823E6300);
PPC_FUNC_IMPL(__imp__sub_823E6300) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x823632e0
	sub_823632E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6310"))) PPC_WEAK_FUNC(sub_823E6310);
PPC_FUNC_IMPL(__imp__sub_823E6310) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823632e0
	sub_823632E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6320"))) PPC_WEAK_FUNC(sub_823E6320);
PPC_FUNC_IMPL(__imp__sub_823E6320) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8235f1b0
	sub_8235F1B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6330"))) PPC_WEAK_FUNC(sub_823E6330);
PPC_FUNC_IMPL(__imp__sub_823E6330) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8235aed8
	sub_8235AED8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6340"))) PPC_WEAK_FUNC(sub_823E6340);
PPC_FUNC_IMPL(__imp__sub_823E6340) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8235a3e8
	sub_8235A3E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6348"))) PPC_WEAK_FUNC(sub_823E6348);
PPC_FUNC_IMPL(__imp__sub_823E6348) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x823581e8
	sub_823581E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6358"))) PPC_WEAK_FUNC(sub_823E6358);
PPC_FUNC_IMPL(__imp__sub_823E6358) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823581e8
	sub_823581E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6368"))) PPC_WEAK_FUNC(sub_823E6368);
PPC_FUNC_IMPL(__imp__sub_823E6368) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82515248
	sub_82515248(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6378"))) PPC_WEAK_FUNC(sub_823E6378);
PPC_FUNC_IMPL(__imp__sub_823E6378) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823558f0
	sub_823558F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6388"))) PPC_WEAK_FUNC(sub_823E6388);
PPC_FUNC_IMPL(__imp__sub_823E6388) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8251c390
	sub_8251C390(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6398"))) PPC_WEAK_FUNC(sub_823E6398);
PPC_FUNC_IMPL(__imp__sub_823E6398) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8251bdb0
	sub_8251BDB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E63A8"))) PPC_WEAK_FUNC(sub_823E63A8);
PPC_FUNC_IMPL(__imp__sub_823E63A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82514040
	sub_82514040(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E63B8"))) PPC_WEAK_FUNC(sub_823E63B8);
PPC_FUNC_IMPL(__imp__sub_823E63B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823504b8
	sub_823504B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E63C8"))) PPC_WEAK_FUNC(sub_823E63C8);
PPC_FUNC_IMPL(__imp__sub_823E63C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x824d94e8
	sub_824D94E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E63D8"))) PPC_WEAK_FUNC(sub_823E63D8);
PPC_FUNC_IMPL(__imp__sub_823E63D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// lwz r12,-84(r3)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r3.u32 + -84);
	// lwz r12,16(r12)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r12.u32 + 16);
	// add r3,r3,r12
	ctx.r3.u64 = ctx.r3.u64 + ctx.r12.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x823e68b0
	sub_823E68B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E63F8"))) PPC_WEAK_FUNC(sub_823E63F8);
PPC_FUNC_IMPL(__imp__sub_823E63F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82349e38
	sub_82349E38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6408"))) PPC_WEAK_FUNC(sub_823E6408);
PPC_FUNC_IMPL(__imp__sub_823E6408) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82349e38
	sub_82349E38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6418"))) PPC_WEAK_FUNC(sub_823E6418);
PPC_FUNC_IMPL(__imp__sub_823E6418) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8258fc20
	sub_8258FC20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6428"))) PPC_WEAK_FUNC(sub_823E6428);
PPC_FUNC_IMPL(__imp__sub_823E6428) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82349880
	sub_82349880(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6438"))) PPC_WEAK_FUNC(sub_823E6438);
PPC_FUNC_IMPL(__imp__sub_823E6438) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82349548
	sub_82349548(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6448"))) PPC_WEAK_FUNC(sub_823E6448);
PPC_FUNC_IMPL(__imp__sub_823E6448) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// lwz r12,-72(r3)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r3.u32 + -72);
	// lwz r12,24(r12)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r12.u32 + 24);
	// add r3,r3,r12
	ctx.r3.u64 = ctx.r3.u64 + ctx.r12.u64;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// b 0x825b9798
	sub_825B9798(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6468"))) PPC_WEAK_FUNC(sub_823E6468);
PPC_FUNC_IMPL(__imp__sub_823E6468) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-400(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -400);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x82348d78
	sub_82348D78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6478"))) PPC_WEAK_FUNC(sub_823E6478);
PPC_FUNC_IMPL(__imp__sub_823E6478) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82348d78
	sub_82348D78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6488"))) PPC_WEAK_FUNC(sub_823E6488);
PPC_FUNC_IMPL(__imp__sub_823E6488) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8258e648
	sub_8258E648(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6498"))) PPC_WEAK_FUNC(sub_823E6498);
PPC_FUNC_IMPL(__imp__sub_823E6498) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82348d78
	sub_82348D78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E64A8"))) PPC_WEAK_FUNC(sub_823E64A8);
PPC_FUNC_IMPL(__imp__sub_823E64A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823486c8
	sub_823486C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E64B8"))) PPC_WEAK_FUNC(sub_823E64B8);
PPC_FUNC_IMPL(__imp__sub_823E64B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x825bb460
	sub_825BB460(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E64C8"))) PPC_WEAK_FUNC(sub_823E64C8);
PPC_FUNC_IMPL(__imp__sub_823E64C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823474d8
	sub_823474D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E64D8"))) PPC_WEAK_FUNC(sub_823E64D8);
PPC_FUNC_IMPL(__imp__sub_823E64D8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82345140
	sub_82345140(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E64E0"))) PPC_WEAK_FUNC(sub_823E64E0);
PPC_FUNC_IMPL(__imp__sub_823E64E0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,148
	ctx.r3.s64 = ctx.r3.s64 + 148;
	// b 0x82637d38
	sub_82637D38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E64E8"))) PPC_WEAK_FUNC(sub_823E64E8);
PPC_FUNC_IMPL(__imp__sub_823E64E8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,132
	ctx.r3.s64 = ctx.r3.s64 + 132;
	// b 0x8262cc58
	sub_8262CC58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E64F0"))) PPC_WEAK_FUNC(sub_823E64F0);
PPC_FUNC_IMPL(__imp__sub_823E64F0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,148
	ctx.r3.s64 = ctx.r3.s64 + 148;
	// b 0x82637208
	sub_82637208(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E64F8"))) PPC_WEAK_FUNC(sub_823E64F8);
PPC_FUNC_IMPL(__imp__sub_823E64F8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,124
	ctx.r3.s64 = ctx.r3.s64 + 124;
	// b 0x8262b1b8
	sub_8262B1B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6500"))) PPC_WEAK_FUNC(sub_823E6500);
PPC_FUNC_IMPL(__imp__sub_823E6500) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,124
	ctx.r3.s64 = ctx.r3.s64 + 124;
	// b 0x82340488
	sub_82340488(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6508"))) PPC_WEAK_FUNC(sub_823E6508);
PPC_FUNC_IMPL(__imp__sub_823E6508) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,120
	ctx.r3.s64 = ctx.r3.s64 + 120;
	// b 0x8262bea8
	sub_8262BEA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6510"))) PPC_WEAK_FUNC(sub_823E6510);
PPC_FUNC_IMPL(__imp__sub_823E6510) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8233dee0
	sub_8233DEE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6518"))) PPC_WEAK_FUNC(sub_823E6518);
PPC_FUNC_IMPL(__imp__sub_823E6518) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8233dc40
	sub_8233DC40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6520"))) PPC_WEAK_FUNC(sub_823E6520);
PPC_FUNC_IMPL(__imp__sub_823E6520) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8233db08
	sub_8233DB08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6528"))) PPC_WEAK_FUNC(sub_823E6528);
PPC_FUNC_IMPL(__imp__sub_823E6528) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8237a198
	sub_8237A198(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6538"))) PPC_WEAK_FUNC(sub_823E6538);
PPC_FUNC_IMPL(__imp__sub_823E6538) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8259c600
	sub_8259C600(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6548"))) PPC_WEAK_FUNC(sub_823E6548);
PPC_FUNC_IMPL(__imp__sub_823E6548) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82374378
	sub_82374378(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6558"))) PPC_WEAK_FUNC(sub_823E6558);
PPC_FUNC_IMPL(__imp__sub_823E6558) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x823739a8
	sub_823739A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6568"))) PPC_WEAK_FUNC(sub_823E6568);
PPC_FUNC_IMPL(__imp__sub_823E6568) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823739a8
	sub_823739A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6578"))) PPC_WEAK_FUNC(sub_823E6578);
PPC_FUNC_IMPL(__imp__sub_823E6578) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82371c28
	sub_82371C28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6588"))) PPC_WEAK_FUNC(sub_823E6588);
PPC_FUNC_IMPL(__imp__sub_823E6588) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x823719c8
	sub_823719C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6598"))) PPC_WEAK_FUNC(sub_823E6598);
PPC_FUNC_IMPL(__imp__sub_823E6598) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823719c8
	sub_823719C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E65A8"))) PPC_WEAK_FUNC(sub_823E65A8);
PPC_FUNC_IMPL(__imp__sub_823E65A8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82370770
	sub_82370770(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E65B0"))) PPC_WEAK_FUNC(sub_823E65B0);
PPC_FUNC_IMPL(__imp__sub_823E65B0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8236dd48
	sub_8236DD48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E65B8"))) PPC_WEAK_FUNC(sub_823E65B8);
PPC_FUNC_IMPL(__imp__sub_823E65B8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8236bce8
	sub_8236BCE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E65C0"))) PPC_WEAK_FUNC(sub_823E65C0);
PPC_FUNC_IMPL(__imp__sub_823E65C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82369ed0
	sub_82369ED0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E65D0"))) PPC_WEAK_FUNC(sub_823E65D0);
PPC_FUNC_IMPL(__imp__sub_823E65D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82369ed0
	sub_82369ED0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E65E0"))) PPC_WEAK_FUNC(sub_823E65E0);
PPC_FUNC_IMPL(__imp__sub_823E65E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82369440
	sub_82369440(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E65F0"))) PPC_WEAK_FUNC(sub_823E65F0);
PPC_FUNC_IMPL(__imp__sub_823E65F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82368ef8
	sub_82368EF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6600"))) PPC_WEAK_FUNC(sub_823E6600);
PPC_FUNC_IMPL(__imp__sub_823E6600) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82543c20
	sub_82543C20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6610"))) PPC_WEAK_FUNC(sub_823E6610);
PPC_FUNC_IMPL(__imp__sub_823E6610) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,116
	ctx.r3.s64 = ctx.r3.s64 + 116;
	// b 0x824d2940
	sub_824D2940(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6620"))) PPC_WEAK_FUNC(sub_823E6620);
PPC_FUNC_IMPL(__imp__sub_823E6620) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x823653d0
	sub_823653D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6628"))) PPC_WEAK_FUNC(sub_823E6628);
PPC_FUNC_IMPL(__imp__sub_823E6628) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8253ab60
	sub_8253AB60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6638"))) PPC_WEAK_FUNC(sub_823E6638);
PPC_FUNC_IMPL(__imp__sub_823E6638) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82536528
	sub_82536528(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6648"))) PPC_WEAK_FUNC(sub_823E6648);
PPC_FUNC_IMPL(__imp__sub_823E6648) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x825322a0
	sub_825322A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6658"))) PPC_WEAK_FUNC(sub_823E6658);
PPC_FUNC_IMPL(__imp__sub_823E6658) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8235df38
	sub_8235DF38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6660"))) PPC_WEAK_FUNC(sub_823E6660);
PPC_FUNC_IMPL(__imp__sub_823E6660) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-400(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -400);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x82505c78
	sub_82505C78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6670"))) PPC_WEAK_FUNC(sub_823E6670);
PPC_FUNC_IMPL(__imp__sub_823E6670) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,2176
	ctx.r3.s64 = ctx.r3.s64 + 2176;
	// b 0x82514d28
	sub_82514D28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6680"))) PPC_WEAK_FUNC(sub_823E6680);
PPC_FUNC_IMPL(__imp__sub_823E6680) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82358c70
	sub_82358C70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6690"))) PPC_WEAK_FUNC(sub_823E6690);
PPC_FUNC_IMPL(__imp__sub_823E6690) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82358868
	sub_82358868(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E66A0"))) PPC_WEAK_FUNC(sub_823E66A0);
PPC_FUNC_IMPL(__imp__sub_823E66A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x823576b8
	sub_823576B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E66B0"))) PPC_WEAK_FUNC(sub_823E66B0);
PPC_FUNC_IMPL(__imp__sub_823E66B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823576b8
	sub_823576B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E66C0"))) PPC_WEAK_FUNC(sub_823E66C0);
PPC_FUNC_IMPL(__imp__sub_823E66C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8251d6a0
	sub_8251D6A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E66D0"))) PPC_WEAK_FUNC(sub_823E66D0);
PPC_FUNC_IMPL(__imp__sub_823E66D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,152
	ctx.r3.s64 = ctx.r3.s64 + 152;
	// b 0x8234f4e8
	sub_8234F4E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E66E0"))) PPC_WEAK_FUNC(sub_823E66E0);
PPC_FUNC_IMPL(__imp__sub_823E66E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,152
	ctx.r3.s64 = ctx.r3.s64 + 152;
	// b 0x82353970
	sub_82353970(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E66F0"))) PPC_WEAK_FUNC(sub_823E66F0);
PPC_FUNC_IMPL(__imp__sub_823E66F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823537b0
	sub_823537B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6700"))) PPC_WEAK_FUNC(sub_823E6700);
PPC_FUNC_IMPL(__imp__sub_823E6700) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82352740
	sub_82352740(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6710"))) PPC_WEAK_FUNC(sub_823E6710);
PPC_FUNC_IMPL(__imp__sub_823E6710) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82552478
	sub_82552478(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6720"))) PPC_WEAK_FUNC(sub_823E6720);
PPC_FUNC_IMPL(__imp__sub_823E6720) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82501810
	sub_82501810(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6730"))) PPC_WEAK_FUNC(sub_823E6730);
PPC_FUNC_IMPL(__imp__sub_823E6730) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82350570
	sub_82350570(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6740"))) PPC_WEAK_FUNC(sub_823E6740);
PPC_FUNC_IMPL(__imp__sub_823E6740) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x825af518
	sub_825AF518(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6750"))) PPC_WEAK_FUNC(sub_823E6750);
PPC_FUNC_IMPL(__imp__sub_823E6750) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8234f7d8
	sub_8234F7D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6760"))) PPC_WEAK_FUNC(sub_823E6760);
PPC_FUNC_IMPL(__imp__sub_823E6760) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8234f578
	sub_8234F578(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6770"))) PPC_WEAK_FUNC(sub_823E6770);
PPC_FUNC_IMPL(__imp__sub_823E6770) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8234c580
	sub_8234C580(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6780"))) PPC_WEAK_FUNC(sub_823E6780);
PPC_FUNC_IMPL(__imp__sub_823E6780) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8234c2e0
	sub_8234C2E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6790"))) PPC_WEAK_FUNC(sub_823E6790);
PPC_FUNC_IMPL(__imp__sub_823E6790) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8234c250
	sub_8234C250(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E67A0"))) PPC_WEAK_FUNC(sub_823E67A0);
PPC_FUNC_IMPL(__imp__sub_823E67A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8234c2e0
	sub_8234C2E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E67B0"))) PPC_WEAK_FUNC(sub_823E67B0);
PPC_FUNC_IMPL(__imp__sub_823E67B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// lwz r12,-116(r3)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r3.u32 + -116);
	// lwz r12,16(r12)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r12.u32 + 16);
	// add r3,r3,r12
	ctx.r3.u64 = ctx.r3.u64 + ctx.r12.u64;
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x823e68b0
	sub_823E68B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E67D0"))) PPC_WEAK_FUNC(sub_823E67D0);
PPC_FUNC_IMPL(__imp__sub_823E67D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x824d9bc8
	sub_824D9BC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E67E0"))) PPC_WEAK_FUNC(sub_823E67E0);
PPC_FUNC_IMPL(__imp__sub_823E67E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8234bc50
	sub_8234BC50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E67F0"))) PPC_WEAK_FUNC(sub_823E67F0);
PPC_FUNC_IMPL(__imp__sub_823E67F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x824d9028
	sub_824D9028(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6800"))) PPC_WEAK_FUNC(sub_823E6800);
PPC_FUNC_IMPL(__imp__sub_823E6800) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x8258e648
	sub_8258E648(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6810"))) PPC_WEAK_FUNC(sub_823E6810);
PPC_FUNC_IMPL(__imp__sub_823E6810) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x828b5948
	sub_828B5948(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6820"))) PPC_WEAK_FUNC(sub_823E6820);
PPC_FUNC_IMPL(__imp__sub_823E6820) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82349da8
	sub_82349DA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6830"))) PPC_WEAK_FUNC(sub_823E6830);
PPC_FUNC_IMPL(__imp__sub_823E6830) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82349210
	sub_82349210(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6840"))) PPC_WEAK_FUNC(sub_823E6840);
PPC_FUNC_IMPL(__imp__sub_823E6840) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823486d8
	sub_823486D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6850"))) PPC_WEAK_FUNC(sub_823E6850);
PPC_FUNC_IMPL(__imp__sub_823E6850) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x825b9c60
	sub_825B9C60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6860"))) PPC_WEAK_FUNC(sub_823E6860);
PPC_FUNC_IMPL(__imp__sub_823E6860) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8236a450
	sub_8236A450(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6870"))) PPC_WEAK_FUNC(sub_823E6870);
PPC_FUNC_IMPL(__imp__sub_823E6870) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82346ff8
	sub_82346FF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6880"))) PPC_WEAK_FUNC(sub_823E6880);
PPC_FUNC_IMPL(__imp__sub_823E6880) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,148
	ctx.r3.s64 = ctx.r3.s64 + 148;
	// b 0x826388b8
	sub_826388B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6888"))) PPC_WEAK_FUNC(sub_823E6888);
PPC_FUNC_IMPL(__imp__sub_823E6888) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,148
	ctx.r3.s64 = ctx.r3.s64 + 148;
	// b 0x82638f28
	sub_82638F28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6890"))) PPC_WEAK_FUNC(sub_823E6890);
PPC_FUNC_IMPL(__imp__sub_823E6890) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,144
	ctx.r3.s64 = ctx.r3.s64 + 144;
	// b 0x826305b0
	sub_826305B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6898"))) PPC_WEAK_FUNC(sub_823E6898);
PPC_FUNC_IMPL(__imp__sub_823E6898) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,116
	ctx.r3.s64 = ctx.r3.s64 + 116;
	// b 0x82620718
	sub_82620718(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E68A0"))) PPC_WEAK_FUNC(sub_823E68A0);
PPC_FUNC_IMPL(__imp__sub_823E68A0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-36
	ctx.r3.s64 = ctx.r3.s64 + -36;
	// b 0x8233adf8
	sub_8233ADF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E68A8"))) PPC_WEAK_FUNC(sub_823E68A8);
PPC_FUNC_IMPL(__imp__sub_823E68A8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8234d0a0
	sub_8234D0A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E68B0"))) PPC_WEAK_FUNC(sub_823E68B0);
PPC_FUNC_IMPL(__imp__sub_823E68B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,-80(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + -80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1228(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1228);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823E68C8"))) PPC_WEAK_FUNC(sub_823E68C8);
PPC_FUNC_IMPL(__imp__sub_823E68C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -20);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x829e3da8
	sub_829E3DA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E68E0"))) PPC_WEAK_FUNC(sub_823E68E0);
PPC_FUNC_IMPL(__imp__sub_823E68E0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// b 0x824d07f0
	sub_824D07F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E68E8"))) PPC_WEAK_FUNC(sub_823E68E8);
PPC_FUNC_IMPL(__imp__sub_823E68E8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// b 0x824d0870
	sub_824D0870(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E68F0"))) PPC_WEAK_FUNC(sub_823E68F0);
PPC_FUNC_IMPL(__imp__sub_823E68F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// b 0x824d0680
	sub_824D0680(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6900"))) PPC_WEAK_FUNC(sub_823E6900);
PPC_FUNC_IMPL(__imp__sub_823E6900) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// b 0x824d05d8
	sub_824D05D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6910"))) PPC_WEAK_FUNC(sub_823E6910);
PPC_FUNC_IMPL(__imp__sub_823E6910) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// b 0x824d0738
	sub_824D0738(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6920"))) PPC_WEAK_FUNC(sub_823E6920);
PPC_FUNC_IMPL(__imp__sub_823E6920) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// b 0x824d0798
	sub_824D0798(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6930"))) PPC_WEAK_FUNC(sub_823E6930);
PPC_FUNC_IMPL(__imp__sub_823E6930) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// b 0x825d6ef8
	sub_825D6EF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6940"))) PPC_WEAK_FUNC(sub_823E6940);
PPC_FUNC_IMPL(__imp__sub_823E6940) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// lwz r12,-80(r3)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r3.u32 + -80);
	// lwz r12,16(r12)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r12.u32 + 16);
	// add r3,r3,r12
	ctx.r3.u64 = ctx.r3.u64 + ctx.r12.u64;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// b 0x823e68b0
	sub_823E68B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6960"))) PPC_WEAK_FUNC(sub_823E6960);
PPC_FUNC_IMPL(__imp__sub_823E6960) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// b 0x824d65e8
	sub_824D65E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6968"))) PPC_WEAK_FUNC(sub_823E6968);
PPC_FUNC_IMPL(__imp__sub_823E6968) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// b 0x824d67b8
	sub_824D67B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6970"))) PPC_WEAK_FUNC(sub_823E6970);
PPC_FUNC_IMPL(__imp__sub_823E6970) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// b 0x824d67e8
	sub_824D67E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6978"))) PPC_WEAK_FUNC(sub_823E6978);
PPC_FUNC_IMPL(__imp__sub_823E6978) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// b 0x825d6ef8
	sub_825D6EF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6980"))) PPC_WEAK_FUNC(sub_823E6980);
PPC_FUNC_IMPL(__imp__sub_823E6980) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// b 0x824d62f8
	sub_824D62F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6990"))) PPC_WEAK_FUNC(sub_823E6990);
PPC_FUNC_IMPL(__imp__sub_823E6990) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,2316(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2316);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823E69A8"))) PPC_WEAK_FUNC(sub_823E69A8);
PPC_FUNC_IMPL(__imp__sub_823E69A8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,76
	ctx.r3.s64 = ctx.r3.s64 + 76;
	// b 0x8233ad88
	sub_8233AD88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E69B0"))) PPC_WEAK_FUNC(sub_823E69B0);
PPC_FUNC_IMPL(__imp__sub_823E69B0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,76
	ctx.r3.s64 = ctx.r3.s64 + 76;
	// b 0x824e19a0
	sub_824E19A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E69B8"))) PPC_WEAK_FUNC(sub_823E69B8);
PPC_FUNC_IMPL(__imp__sub_823E69B8) {
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
	// li r3,1968
	ctx.r3.s64 = 1968;
	// bl 0x82833108
	ctx.lr = 0x823E69D4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823e69e8
	if (ctx.cr0.eq) goto loc_823E69E8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823ff1a0
	ctx.lr = 0x823E69E4;
	sub_823FF1A0(ctx, base);
	// b 0x823e69ec
	goto loc_823E69EC;
loc_823E69E8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823E69EC:
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

__attribute__((alias("__imp__sub_823E6A00"))) PPC_WEAK_FUNC(sub_823E6A00);
PPC_FUNC_IMPL(__imp__sub_823E6A00) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// lwz r12,-76(r3)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r3.u32 + -76);
	// lwz r12,16(r12)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r12.u32 + 16);
	// add r3,r3,r12
	ctx.r3.u64 = ctx.r3.u64 + ctx.r12.u64;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// b 0x823e68b0
	sub_823E68B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6A20"))) PPC_WEAK_FUNC(sub_823E6A20);
PPC_FUNC_IMPL(__imp__sub_823E6A20) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,2320(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2320);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823E6A38"))) PPC_WEAK_FUNC(sub_823E6A38);
PPC_FUNC_IMPL(__imp__sub_823E6A38) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,2312(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2312);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823E6A50"))) PPC_WEAK_FUNC(sub_823E6A50);
PPC_FUNC_IMPL(__imp__sub_823E6A50) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,2308(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2308);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823E6A68"))) PPC_WEAK_FUNC(sub_823E6A68);
PPC_FUNC_IMPL(__imp__sub_823E6A68) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,2324(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2324);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823E6A80"))) PPC_WEAK_FUNC(sub_823E6A80);
PPC_FUNC_IMPL(__imp__sub_823E6A80) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,60(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1276(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1276);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823E6A98"))) PPC_WEAK_FUNC(sub_823E6A98);
PPC_FUNC_IMPL(__imp__sub_823E6A98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,60(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// std r7,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r7.u64);
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1272(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1272);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823E6AC4;
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

__attribute__((alias("__imp__sub_823E6AD8"))) PPC_WEAK_FUNC(sub_823E6AD8);
PPC_FUNC_IMPL(__imp__sub_823E6AD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,60(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// std r5,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r5.u64);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1268(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1268);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823E6B04;
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

__attribute__((alias("__imp__sub_823E6B18"))) PPC_WEAK_FUNC(sub_823E6B18);
PPC_FUNC_IMPL(__imp__sub_823E6B18) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,60(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1260(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1260);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823E6B30"))) PPC_WEAK_FUNC(sub_823E6B30);
PPC_FUNC_IMPL(__imp__sub_823E6B30) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1384);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823E6B48"))) PPC_WEAK_FUNC(sub_823E6B48);
PPC_FUNC_IMPL(__imp__sub_823E6B48) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1380(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1380);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823E6B60"))) PPC_WEAK_FUNC(sub_823E6B60);
PPC_FUNC_IMPL(__imp__sub_823E6B60) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1376(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1376);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823E6B78"))) PPC_WEAK_FUNC(sub_823E6B78);
PPC_FUNC_IMPL(__imp__sub_823E6B78) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1372(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1372);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823E6B90"))) PPC_WEAK_FUNC(sub_823E6B90);
PPC_FUNC_IMPL(__imp__sub_823E6B90) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1368(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1368);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823E6BA8"))) PPC_WEAK_FUNC(sub_823E6BA8);
PPC_FUNC_IMPL(__imp__sub_823E6BA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1364(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1364);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823E6BC0"))) PPC_WEAK_FUNC(sub_823E6BC0);
PPC_FUNC_IMPL(__imp__sub_823E6BC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1360(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1360);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823E6BD8"))) PPC_WEAK_FUNC(sub_823E6BD8);
PPC_FUNC_IMPL(__imp__sub_823E6BD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1356(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1356);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823E6BF0"))) PPC_WEAK_FUNC(sub_823E6BF0);
PPC_FUNC_IMPL(__imp__sub_823E6BF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1352(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1352);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823E6C08"))) PPC_WEAK_FUNC(sub_823E6C08);
PPC_FUNC_IMPL(__imp__sub_823E6C08) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1192(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1192);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823E6C20"))) PPC_WEAK_FUNC(sub_823E6C20);
PPC_FUNC_IMPL(__imp__sub_823E6C20) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,84
	ctx.r3.s64 = ctx.r3.s64 + 84;
	// b 0x828c2490
	sub_828C2490(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6C28"))) PPC_WEAK_FUNC(sub_823E6C28);
PPC_FUNC_IMPL(__imp__sub_823E6C28) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1544(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1544);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823E6C40"))) PPC_WEAK_FUNC(sub_823E6C40);
PPC_FUNC_IMPL(__imp__sub_823E6C40) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1536(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1536);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823E6C58"))) PPC_WEAK_FUNC(sub_823E6C58);
PPC_FUNC_IMPL(__imp__sub_823E6C58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// std r5,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r5.u64);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1492);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823E6C84;
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

__attribute__((alias("__imp__sub_823E6C98"))) PPC_WEAK_FUNC(sub_823E6C98);
PPC_FUNC_IMPL(__imp__sub_823E6C98) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1472(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1472);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823E6CB0"))) PPC_WEAK_FUNC(sub_823E6CB0);
PPC_FUNC_IMPL(__imp__sub_823E6CB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1468(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1468);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823E6CC8"))) PPC_WEAK_FUNC(sub_823E6CC8);
PPC_FUNC_IMPL(__imp__sub_823E6CC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1464(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1464);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823E6CE0"))) PPC_WEAK_FUNC(sub_823E6CE0);
PPC_FUNC_IMPL(__imp__sub_823E6CE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1316(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1316);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823E6CF8"))) PPC_WEAK_FUNC(sub_823E6CF8);
PPC_FUNC_IMPL(__imp__sub_823E6CF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1456(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1456);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823E6D10"))) PPC_WEAK_FUNC(sub_823E6D10);
PPC_FUNC_IMPL(__imp__sub_823E6D10) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1452(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1452);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823E6D28"))) PPC_WEAK_FUNC(sub_823E6D28);
PPC_FUNC_IMPL(__imp__sub_823E6D28) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1264);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823E6D40"))) PPC_WEAK_FUNC(sub_823E6D40);
PPC_FUNC_IMPL(__imp__sub_823E6D40) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1260(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1260);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823E6D58"))) PPC_WEAK_FUNC(sub_823E6D58);
PPC_FUNC_IMPL(__imp__sub_823E6D58) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1252(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1252);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823E6D70"))) PPC_WEAK_FUNC(sub_823E6D70);
PPC_FUNC_IMPL(__imp__sub_823E6D70) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1248(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1248);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823E6D88"))) PPC_WEAK_FUNC(sub_823E6D88);
PPC_FUNC_IMPL(__imp__sub_823E6D88) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1244(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1244);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823E6DA0"))) PPC_WEAK_FUNC(sub_823E6DA0);
PPC_FUNC_IMPL(__imp__sub_823E6DA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1240(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1240);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823E6DB8"))) PPC_WEAK_FUNC(sub_823E6DB8);
PPC_FUNC_IMPL(__imp__sub_823E6DB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1236);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823E6DD0"))) PPC_WEAK_FUNC(sub_823E6DD0);
PPC_FUNC_IMPL(__imp__sub_823E6DD0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1232);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823E6DE8"))) PPC_WEAK_FUNC(sub_823E6DE8);
PPC_FUNC_IMPL(__imp__sub_823E6DE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// lwz r12,-72(r3)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r3.u32 + -72);
	// lwz r12,16(r12)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r12.u32 + 16);
	// add r3,r3,r12
	ctx.r3.u64 = ctx.r3.u64 + ctx.r12.u64;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// b 0x823e68b0
	sub_823E68B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6E08"))) PPC_WEAK_FUNC(sub_823E6E08);
PPC_FUNC_IMPL(__imp__sub_823E6E08) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1224(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1224);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823E6E20"))) PPC_WEAK_FUNC(sub_823E6E20);
PPC_FUNC_IMPL(__imp__sub_823E6E20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// std r5,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r5.u64);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1220(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1220);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823E6E4C;
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

__attribute__((alias("__imp__sub_823E6E60"))) PPC_WEAK_FUNC(sub_823E6E60);
PPC_FUNC_IMPL(__imp__sub_823E6E60) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1216(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1216);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823E6E78"))) PPC_WEAK_FUNC(sub_823E6E78);
PPC_FUNC_IMPL(__imp__sub_823E6E78) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1212(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823E6E90"))) PPC_WEAK_FUNC(sub_823E6E90);
PPC_FUNC_IMPL(__imp__sub_823E6E90) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1208(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1208);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823E6EA8"))) PPC_WEAK_FUNC(sub_823E6EA8);
PPC_FUNC_IMPL(__imp__sub_823E6EA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1204);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823E6EC0"))) PPC_WEAK_FUNC(sub_823E6EC0);
PPC_FUNC_IMPL(__imp__sub_823E6EC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1200);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823E6ED8"))) PPC_WEAK_FUNC(sub_823E6ED8);
PPC_FUNC_IMPL(__imp__sub_823E6ED8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1196);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823E6EF0"))) PPC_WEAK_FUNC(sub_823E6EF0);
PPC_FUNC_IMPL(__imp__sub_823E6EF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1256);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823E6F08"))) PPC_WEAK_FUNC(sub_823E6F08);
PPC_FUNC_IMPL(__imp__sub_823E6F08) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,84
	ctx.r3.s64 = ctx.r3.s64 + 84;
	// b 0x823e6f10
	sub_823E6F10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6F10"))) PPC_WEAK_FUNC(sub_823E6F10);
PPC_FUNC_IMPL(__imp__sub_823E6F10) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,-64(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + -64);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1192(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1192);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823E6F28"))) PPC_WEAK_FUNC(sub_823E6F28);
PPC_FUNC_IMPL(__imp__sub_823E6F28) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
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

__attribute__((alias("__imp__sub_823E6F40"))) PPC_WEAK_FUNC(sub_823E6F40);
PPC_FUNC_IMPL(__imp__sub_823E6F40) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,964(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 964);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823E6F58"))) PPC_WEAK_FUNC(sub_823E6F58);
PPC_FUNC_IMPL(__imp__sub_823E6F58) {
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
	// std r7,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r7.u64);
	// lwz r7,184(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r31,220(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// std r9,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r9.u64);
	// lwz r9,200(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// rldicr r9,r9,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rldicr r7,r7,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// lwz r11,960(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 960);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823E6FA8;
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

__attribute__((alias("__imp__sub_823E6FC0"))) PPC_WEAK_FUNC(sub_823E6FC0);
PPC_FUNC_IMPL(__imp__sub_823E6FC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,956(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 956);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823E6FD8"))) PPC_WEAK_FUNC(sub_823E6FD8);
PPC_FUNC_IMPL(__imp__sub_823E6FD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,952(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 952);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823E6FF0"))) PPC_WEAK_FUNC(sub_823E6FF0);
PPC_FUNC_IMPL(__imp__sub_823E6FF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// std r5,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r5.u64);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,948(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 948);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823E701C;
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

__attribute__((alias("__imp__sub_823E7030"))) PPC_WEAK_FUNC(sub_823E7030);
PPC_FUNC_IMPL(__imp__sub_823E7030) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 944);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823E7048"))) PPC_WEAK_FUNC(sub_823E7048);
PPC_FUNC_IMPL(__imp__sub_823E7048) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,940(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 940);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823E7060"))) PPC_WEAK_FUNC(sub_823E7060);
PPC_FUNC_IMPL(__imp__sub_823E7060) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,936(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 936);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823E7078"))) PPC_WEAK_FUNC(sub_823E7078);
PPC_FUNC_IMPL(__imp__sub_823E7078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// std r5,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r5.u64);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,932(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 932);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823E70A4;
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

__attribute__((alias("__imp__sub_823E70B8"))) PPC_WEAK_FUNC(sub_823E70B8);
PPC_FUNC_IMPL(__imp__sub_823E70B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// std r6,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r6.u64);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// rldicr r6,r11,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,928(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 928);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823E70E4;
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

__attribute__((alias("__imp__sub_823E70F8"))) PPC_WEAK_FUNC(sub_823E70F8);
PPC_FUNC_IMPL(__imp__sub_823E70F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,112
	ctx.r3.s64 = ctx.r3.s64 + 112;
	// b 0x824d2540
	sub_824D2540(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E7108"))) PPC_WEAK_FUNC(sub_823E7108);
PPC_FUNC_IMPL(__imp__sub_823E7108) {
	PPC_FUNC_PROLOGUE();
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E7110"))) PPC_WEAK_FUNC(sub_823E7110);
PPC_FUNC_IMPL(__imp__sub_823E7110) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E7128"))) PPC_WEAK_FUNC(sub_823E7128);
PPC_FUNC_IMPL(__imp__sub_823E7128) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x82333960
	sub_82333960(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E7130"))) PPC_WEAK_FUNC(sub_823E7130);
PPC_FUNC_IMPL(__imp__sub_823E7130) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E7138"))) PPC_WEAK_FUNC(sub_823E7138);
PPC_FUNC_IMPL(__imp__sub_823E7138) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r10,r11,13868
	ctx.r10.s64 = ctx.r11.s64 + 13868;
	// lwz r11,13868(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13868);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E7160"))) PPC_WEAK_FUNC(sub_823E7160);
PPC_FUNC_IMPL(__imp__sub_823E7160) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,3340(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3340);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E7168"))) PPC_WEAK_FUNC(sub_823E7168);
PPC_FUNC_IMPL(__imp__sub_823E7168) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,5416(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 5416);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,5412(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 5412);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E7178"))) PPC_WEAK_FUNC(sub_823E7178);
PPC_FUNC_IMPL(__imp__sub_823E7178) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfd f1,16656(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16656);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E7188"))) PPC_WEAK_FUNC(sub_823E7188);
PPC_FUNC_IMPL(__imp__sub_823E7188) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,3560(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 3560);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E7190"))) PPC_WEAK_FUNC(sub_823E7190);
PPC_FUNC_IMPL(__imp__sub_823E7190) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,2576(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2576);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E7198"))) PPC_WEAK_FUNC(sub_823E7198);
PPC_FUNC_IMPL(__imp__sub_823E7198) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,4000(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4000);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E71A0"))) PPC_WEAK_FUNC(sub_823E71A0);
PPC_FUNC_IMPL(__imp__sub_823E71A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r8,3864(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3864);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x823e71d4
	if (!ctx.cr6.gt) goto loc_823E71D4;
	// lwz r9,3860(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3860);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_823E71B8:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// beq cr6,0x823e720c
	if (ctx.cr6.eq) goto loc_823E720C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x823e71b8
	if (ctx.cr6.lt) goto loc_823E71B8;
loc_823E71D4:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
loc_823E71DC:
	// lwz r11,2176(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2176);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f13,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r10,-12(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
loc_823E720C:
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// b 0x823e71dc
	goto loc_823E71DC;
}

__attribute__((alias("__imp__sub_823E7220"))) PPC_WEAK_FUNC(sub_823E7220);
PPC_FUNC_IMPL(__imp__sub_823E7220) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,2436(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2436);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// stw r11,2436(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2436, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E7230"))) PPC_WEAK_FUNC(sub_823E7230);
PPC_FUNC_IMPL(__imp__sub_823E7230) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,3312(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3312);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E7238"))) PPC_WEAK_FUNC(sub_823E7238);
PPC_FUNC_IMPL(__imp__sub_823E7238) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,912(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 912);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E7258"))) PPC_WEAK_FUNC(sub_823E7258);
PPC_FUNC_IMPL(__imp__sub_823E7258) {
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
	// addi r4,r4,5736
	ctx.r4.s64 = ctx.r4.s64 + 5736;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823339b8
	ctx.lr = 0x823E7274;
	sub_823339B8(ctx, base);
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

__attribute__((alias("__imp__sub_823E7290"))) PPC_WEAK_FUNC(sub_823E7290);
PPC_FUNC_IMPL(__imp__sub_823E7290) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,2760(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2760);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E7298"))) PPC_WEAK_FUNC(sub_823E7298);
PPC_FUNC_IMPL(__imp__sub_823E7298) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f13,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmsubs f0,f11,f0,f10
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 - ctx.f10.f64));
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fsubs f9,f12,f11
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// stfs f9,0(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fsubs f0,f13,f12
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E72D0"))) PPC_WEAK_FUNC(sub_823E72D0);
PPC_FUNC_IMPL(__imp__sub_823E72D0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,2220(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2220, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E72D8"))) PPC_WEAK_FUNC(sub_823E72D8);
PPC_FUNC_IMPL(__imp__sub_823E72D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,5376(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5376);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E72E0"))) PPC_WEAK_FUNC(sub_823E72E0);
PPC_FUNC_IMPL(__imp__sub_823E72E0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,5376(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5376, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E72E8"))) PPC_WEAK_FUNC(sub_823E72E8);
PPC_FUNC_IMPL(__imp__sub_823E72E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823E72F8"))) PPC_WEAK_FUNC(sub_823E72F8);
PPC_FUNC_IMPL(__imp__sub_823E72F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,2112(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2112);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E7300"))) PPC_WEAK_FUNC(sub_823E7300);
PPC_FUNC_IMPL(__imp__sub_823E7300) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1740(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1740);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E7308"))) PPC_WEAK_FUNC(sub_823E7308);
PPC_FUNC_IMPL(__imp__sub_823E7308) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,5356(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 5356);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E7328"))) PPC_WEAK_FUNC(sub_823E7328);
PPC_FUNC_IMPL(__imp__sub_823E7328) {
	PPC_FUNC_PROLOGUE();
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E7330"))) PPC_WEAK_FUNC(sub_823E7330);
PPC_FUNC_IMPL(__imp__sub_823E7330) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1460(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1460, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E7340"))) PPC_WEAK_FUNC(sub_823E7340);
PPC_FUNC_IMPL(__imp__sub_823E7340) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,7976
	ctx.r3.s64 = ctx.r11.s64 + 7976;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E7350"))) PPC_WEAK_FUNC(sub_823E7350);
PPC_FUNC_IMPL(__imp__sub_823E7350) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1432(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1432);
	// blr 
	return;
}

