#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_823E5200"))) PPC_WEAK_FUNC(sub_823E5200);
PPC_FUNC_IMPL(__imp__sub_823E5200) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x825364b0
	sub_825364B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5210"))) PPC_WEAK_FUNC(sub_823E5210);
PPC_FUNC_IMPL(__imp__sub_823E5210) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82362db0
	sub_82362DB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5220"))) PPC_WEAK_FUNC(sub_823E5220);
PPC_FUNC_IMPL(__imp__sub_823E5220) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82362db0
	sub_82362DB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5230"))) PPC_WEAK_FUNC(sub_823E5230);
PPC_FUNC_IMPL(__imp__sub_823E5230) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82362290
	sub_82362290(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5240"))) PPC_WEAK_FUNC(sub_823E5240);
PPC_FUNC_IMPL(__imp__sub_823E5240) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823600b8
	sub_823600B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5250"))) PPC_WEAK_FUNC(sub_823E5250);
PPC_FUNC_IMPL(__imp__sub_823E5250) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8235f228
	sub_8235F228(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5260"))) PPC_WEAK_FUNC(sub_823E5260);
PPC_FUNC_IMPL(__imp__sub_823E5260) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,2176
	ctx.r3.s64 = ctx.r3.s64 + 2176;
	// b 0x82514b18
	sub_82514B18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5270"))) PPC_WEAK_FUNC(sub_823E5270);
PPC_FUNC_IMPL(__imp__sub_823E5270) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8235a908
	sub_8235A908(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5280"))) PPC_WEAK_FUNC(sub_823E5280);
PPC_FUNC_IMPL(__imp__sub_823E5280) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x825150b8
	sub_825150B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5290"))) PPC_WEAK_FUNC(sub_823E5290);
PPC_FUNC_IMPL(__imp__sub_823E5290) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82357310
	sub_82357310(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5298"))) PPC_WEAK_FUNC(sub_823E5298);
PPC_FUNC_IMPL(__imp__sub_823E5298) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82356480
	sub_82356480(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E52A8"))) PPC_WEAK_FUNC(sub_823E52A8);
PPC_FUNC_IMPL(__imp__sub_823E52A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x823560f0
	sub_823560F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E52B8"))) PPC_WEAK_FUNC(sub_823E52B8);
PPC_FUNC_IMPL(__imp__sub_823E52B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823560f0
	sub_823560F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E52C8"))) PPC_WEAK_FUNC(sub_823E52C8);
PPC_FUNC_IMPL(__imp__sub_823E52C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82354af0
	sub_82354AF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E52D8"))) PPC_WEAK_FUNC(sub_823E52D8);
PPC_FUNC_IMPL(__imp__sub_823E52D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82354358
	sub_82354358(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E52E8"))) PPC_WEAK_FUNC(sub_823E52E8);
PPC_FUNC_IMPL(__imp__sub_823E52E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,152
	ctx.r3.s64 = ctx.r3.s64 + 152;
	// b 0x8234f4d0
	sub_8234F4D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E52F8"))) PPC_WEAK_FUNC(sub_823E52F8);
PPC_FUNC_IMPL(__imp__sub_823E52F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82350540
	sub_82350540(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5308"))) PPC_WEAK_FUNC(sub_823E5308);
PPC_FUNC_IMPL(__imp__sub_823E5308) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8234f968
	sub_8234F968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5318"))) PPC_WEAK_FUNC(sub_823E5318);
PPC_FUNC_IMPL(__imp__sub_823E5318) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8234dd70
	sub_8234DD70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5320"))) PPC_WEAK_FUNC(sub_823E5320);
PPC_FUNC_IMPL(__imp__sub_823E5320) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8234daa8
	sub_8234DAA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5328"))) PPC_WEAK_FUNC(sub_823E5328);
PPC_FUNC_IMPL(__imp__sub_823E5328) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8234c778
	sub_8234C778(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5338"))) PPC_WEAK_FUNC(sub_823E5338);
PPC_FUNC_IMPL(__imp__sub_823E5338) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8234c1f0
	sub_8234C1F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5348"))) PPC_WEAK_FUNC(sub_823E5348);
PPC_FUNC_IMPL(__imp__sub_823E5348) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8234b628
	sub_8234B628(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5358"))) PPC_WEAK_FUNC(sub_823E5358);
PPC_FUNC_IMPL(__imp__sub_823E5358) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8234b628
	sub_8234B628(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5368"))) PPC_WEAK_FUNC(sub_823E5368);
PPC_FUNC_IMPL(__imp__sub_823E5368) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8234b2d8
	sub_8234B2D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5378"))) PPC_WEAK_FUNC(sub_823E5378);
PPC_FUNC_IMPL(__imp__sub_823E5378) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-400(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -400);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x8234a868
	sub_8234A868(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5388"))) PPC_WEAK_FUNC(sub_823E5388);
PPC_FUNC_IMPL(__imp__sub_823E5388) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8234a868
	sub_8234A868(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5398"))) PPC_WEAK_FUNC(sub_823E5398);
PPC_FUNC_IMPL(__imp__sub_823E5398) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8234a868
	sub_8234A868(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E53A8"))) PPC_WEAK_FUNC(sub_823E53A8);
PPC_FUNC_IMPL(__imp__sub_823E53A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823491a8
	sub_823491A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E53B8"))) PPC_WEAK_FUNC(sub_823E53B8);
PPC_FUNC_IMPL(__imp__sub_823E53B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82348a00
	sub_82348A00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E53C8"))) PPC_WEAK_FUNC(sub_823E53C8);
PPC_FUNC_IMPL(__imp__sub_823E53C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823483a8
	sub_823483A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E53D8"))) PPC_WEAK_FUNC(sub_823E53D8);
PPC_FUNC_IMPL(__imp__sub_823E53D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82347b88
	sub_82347B88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E53E8"))) PPC_WEAK_FUNC(sub_823E53E8);
PPC_FUNC_IMPL(__imp__sub_823E53E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82347b88
	sub_82347B88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E53F8"))) PPC_WEAK_FUNC(sub_823E53F8);
PPC_FUNC_IMPL(__imp__sub_823E53F8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,148
	ctx.r3.s64 = ctx.r3.s64 + 148;
	// b 0x826386b8
	sub_826386B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5400"))) PPC_WEAK_FUNC(sub_823E5400);
PPC_FUNC_IMPL(__imp__sub_823E5400) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82344aa0
	sub_82344AA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5408"))) PPC_WEAK_FUNC(sub_823E5408);
PPC_FUNC_IMPL(__imp__sub_823E5408) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,148
	ctx.r3.s64 = ctx.r3.s64 + 148;
	// b 0x82635db8
	sub_82635DB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5410"))) PPC_WEAK_FUNC(sub_823E5410);
PPC_FUNC_IMPL(__imp__sub_823E5410) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,144
	ctx.r3.s64 = ctx.r3.s64 + 144;
	// b 0x82631078
	sub_82631078(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5418"))) PPC_WEAK_FUNC(sub_823E5418);
PPC_FUNC_IMPL(__imp__sub_823E5418) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,124
	ctx.r3.s64 = ctx.r3.s64 + 124;
	// b 0x82629000
	sub_82629000(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5420"))) PPC_WEAK_FUNC(sub_823E5420);
PPC_FUNC_IMPL(__imp__sub_823E5420) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,124
	ctx.r3.s64 = ctx.r3.s64 + 124;
	// b 0x82627ed0
	sub_82627ED0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5428"))) PPC_WEAK_FUNC(sub_823E5428);
PPC_FUNC_IMPL(__imp__sub_823E5428) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8233f028
	sub_8233F028(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5430"))) PPC_WEAK_FUNC(sub_823E5430);
PPC_FUNC_IMPL(__imp__sub_823E5430) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8233b448
	sub_8233B448(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5438"))) PPC_WEAK_FUNC(sub_823E5438);
PPC_FUNC_IMPL(__imp__sub_823E5438) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8237b308
	sub_8237B308(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5440"))) PPC_WEAK_FUNC(sub_823E5440);
PPC_FUNC_IMPL(__imp__sub_823E5440) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82377d00
	sub_82377D00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5448"))) PPC_WEAK_FUNC(sub_823E5448);
PPC_FUNC_IMPL(__imp__sub_823E5448) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82373a08
	sub_82373A08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5458"))) PPC_WEAK_FUNC(sub_823E5458);
PPC_FUNC_IMPL(__imp__sub_823E5458) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82599e48
	sub_82599E48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5468"))) PPC_WEAK_FUNC(sub_823E5468);
PPC_FUNC_IMPL(__imp__sub_823E5468) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823727e8
	sub_823727E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5478"))) PPC_WEAK_FUNC(sub_823E5478);
PPC_FUNC_IMPL(__imp__sub_823E5478) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8236f450
	sub_8236F450(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5488"))) PPC_WEAK_FUNC(sub_823E5488);
PPC_FUNC_IMPL(__imp__sub_823E5488) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8236ec90
	sub_8236EC90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5498"))) PPC_WEAK_FUNC(sub_823E5498);
PPC_FUNC_IMPL(__imp__sub_823E5498) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8236ec90
	sub_8236EC90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E54A8"))) PPC_WEAK_FUNC(sub_823E54A8);
PPC_FUNC_IMPL(__imp__sub_823E54A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,112
	ctx.r3.s64 = ctx.r3.s64 + 112;
	// b 0x825d6ef8
	sub_825D6EF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E54B8"))) PPC_WEAK_FUNC(sub_823E54B8);
PPC_FUNC_IMPL(__imp__sub_823E54B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82549e98
	sub_82549E98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E54C8"))) PPC_WEAK_FUNC(sub_823E54C8);
PPC_FUNC_IMPL(__imp__sub_823E54C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82368ee8
	sub_82368EE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E54D8"))) PPC_WEAK_FUNC(sub_823E54D8);
PPC_FUNC_IMPL(__imp__sub_823E54D8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x823679f8
	sub_823679F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E54E0"))) PPC_WEAK_FUNC(sub_823E54E0);
PPC_FUNC_IMPL(__imp__sub_823E54E0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82364f98
	sub_82364F98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E54E8"))) PPC_WEAK_FUNC(sub_823E54E8);
PPC_FUNC_IMPL(__imp__sub_823E54E8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82360ce8
	sub_82360CE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E54F0"))) PPC_WEAK_FUNC(sub_823E54F0);
PPC_FUNC_IMPL(__imp__sub_823E54F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x825b51e8
	sub_825B51E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5500"))) PPC_WEAK_FUNC(sub_823E5500);
PPC_FUNC_IMPL(__imp__sub_823E5500) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8235fb30
	sub_8235FB30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5510"))) PPC_WEAK_FUNC(sub_823E5510);
PPC_FUNC_IMPL(__imp__sub_823E5510) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8235ddd0
	sub_8235DDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5518"))) PPC_WEAK_FUNC(sub_823E5518);
PPC_FUNC_IMPL(__imp__sub_823E5518) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8235d008
	sub_8235D008(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5520"))) PPC_WEAK_FUNC(sub_823E5520);
PPC_FUNC_IMPL(__imp__sub_823E5520) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8235c788
	sub_8235C788(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5530"))) PPC_WEAK_FUNC(sub_823E5530);
PPC_FUNC_IMPL(__imp__sub_823E5530) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8235c690
	sub_8235C690(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5540"))) PPC_WEAK_FUNC(sub_823E5540);
PPC_FUNC_IMPL(__imp__sub_823E5540) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8235c788
	sub_8235C788(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5550"))) PPC_WEAK_FUNC(sub_823E5550);
PPC_FUNC_IMPL(__imp__sub_823E5550) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8235bc08
	sub_8235BC08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5560"))) PPC_WEAK_FUNC(sub_823E5560);
PPC_FUNC_IMPL(__imp__sub_823E5560) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8235b940
	sub_8235B940(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5570"))) PPC_WEAK_FUNC(sub_823E5570);
PPC_FUNC_IMPL(__imp__sub_823E5570) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82354358
	sub_82354358(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5580"))) PPC_WEAK_FUNC(sub_823E5580);
PPC_FUNC_IMPL(__imp__sub_823E5580) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// lwz r12,-32(r3)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r3.u32 + -32);
	// lwz r12,20(r12)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r12.u32 + 20);
	// add r3,r3,r12
	ctx.r3.u64 = ctx.r3.u64 + ctx.r12.u64;
	// addi r3,r3,80
	ctx.r3.s64 = ctx.r3.s64 + 80;
	// b 0x82514fb0
	sub_82514FB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E55A0"))) PPC_WEAK_FUNC(sub_823E55A0);
PPC_FUNC_IMPL(__imp__sub_823E55A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8235abd8
	sub_8235ABD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E55B0"))) PPC_WEAK_FUNC(sub_823E55B0);
PPC_FUNC_IMPL(__imp__sub_823E55B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82358c10
	sub_82358C10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E55C0"))) PPC_WEAK_FUNC(sub_823E55C0);
PPC_FUNC_IMPL(__imp__sub_823E55C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82357e88
	sub_82357E88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E55D0"))) PPC_WEAK_FUNC(sub_823E55D0);
PPC_FUNC_IMPL(__imp__sub_823E55D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82355c20
	sub_82355C20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E55E0"))) PPC_WEAK_FUNC(sub_823E55E0);
PPC_FUNC_IMPL(__imp__sub_823E55E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82353268
	sub_82353268(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E55F0"))) PPC_WEAK_FUNC(sub_823E55F0);
PPC_FUNC_IMPL(__imp__sub_823E55F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// lwz r12,-76(r3)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r3.u32 + -76);
	// lwz r12,20(r12)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r12.u32 + 20);
	// add r3,r3,r12
	ctx.r3.u64 = ctx.r3.u64 + ctx.r12.u64;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// b 0x824d64d0
	sub_824D64D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5610"))) PPC_WEAK_FUNC(sub_823E5610);
PPC_FUNC_IMPL(__imp__sub_823E5610) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82350528
	sub_82350528(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5620"))) PPC_WEAK_FUNC(sub_823E5620);
PPC_FUNC_IMPL(__imp__sub_823E5620) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823503a8
	sub_823503A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5630"))) PPC_WEAK_FUNC(sub_823E5630);
PPC_FUNC_IMPL(__imp__sub_823E5630) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x825b15a8
	sub_825B15A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5640"))) PPC_WEAK_FUNC(sub_823E5640);
PPC_FUNC_IMPL(__imp__sub_823E5640) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8234f078
	sub_8234F078(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5650"))) PPC_WEAK_FUNC(sub_823E5650);
PPC_FUNC_IMPL(__imp__sub_823E5650) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8234cb40
	sub_8234CB40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5660"))) PPC_WEAK_FUNC(sub_823E5660);
PPC_FUNC_IMPL(__imp__sub_823E5660) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8234b850
	sub_8234B850(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5670"))) PPC_WEAK_FUNC(sub_823E5670);
PPC_FUNC_IMPL(__imp__sub_823E5670) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x823e8560
	sub_823E8560(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5680"))) PPC_WEAK_FUNC(sub_823E5680);
PPC_FUNC_IMPL(__imp__sub_823E5680) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8234b028
	sub_8234B028(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5690"))) PPC_WEAK_FUNC(sub_823E5690);
PPC_FUNC_IMPL(__imp__sub_823E5690) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x825a7700
	sub_825A7700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E56A0"))) PPC_WEAK_FUNC(sub_823E56A0);
PPC_FUNC_IMPL(__imp__sub_823E56A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82591a18
	sub_82591A18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E56B0"))) PPC_WEAK_FUNC(sub_823E56B0);
PPC_FUNC_IMPL(__imp__sub_823E56B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82349a08
	sub_82349A08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E56C0"))) PPC_WEAK_FUNC(sub_823E56C0);
PPC_FUNC_IMPL(__imp__sub_823E56C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82348af8
	sub_82348AF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E56D0"))) PPC_WEAK_FUNC(sub_823E56D0);
PPC_FUNC_IMPL(__imp__sub_823E56D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82348af8
	sub_82348AF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E56E0"))) PPC_WEAK_FUNC(sub_823E56E0);
PPC_FUNC_IMPL(__imp__sub_823E56E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x825bb7e0
	sub_825BB7E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E56F0"))) PPC_WEAK_FUNC(sub_823E56F0);
PPC_FUNC_IMPL(__imp__sub_823E56F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x825d94c0
	sub_825D94C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5700"))) PPC_WEAK_FUNC(sub_823E5700);
PPC_FUNC_IMPL(__imp__sub_823E5700) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,148
	ctx.r3.s64 = ctx.r3.s64 + 148;
	// b 0x82639638
	sub_82639638(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5708"))) PPC_WEAK_FUNC(sub_823E5708);
PPC_FUNC_IMPL(__imp__sub_823E5708) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,132
	ctx.r3.s64 = ctx.r3.s64 + 132;
	// b 0x8262ce88
	sub_8262CE88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5710"))) PPC_WEAK_FUNC(sub_823E5710);
PPC_FUNC_IMPL(__imp__sub_823E5710) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,144
	ctx.r3.s64 = ctx.r3.s64 + 144;
	// b 0x82632b30
	sub_82632B30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5718"))) PPC_WEAK_FUNC(sub_823E5718);
PPC_FUNC_IMPL(__imp__sub_823E5718) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,124
	ctx.r3.s64 = ctx.r3.s64 + 124;
	// b 0x82627cf0
	sub_82627CF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5720"))) PPC_WEAK_FUNC(sub_823E5720);
PPC_FUNC_IMPL(__imp__sub_823E5720) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8233d730
	sub_8233D730(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5728"))) PPC_WEAK_FUNC(sub_823E5728);
PPC_FUNC_IMPL(__imp__sub_823E5728) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8233cdc8
	sub_8233CDC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5730"))) PPC_WEAK_FUNC(sub_823E5730);
PPC_FUNC_IMPL(__imp__sub_823E5730) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8234e388
	sub_8234E388(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5738"))) PPC_WEAK_FUNC(sub_823E5738);
PPC_FUNC_IMPL(__imp__sub_823E5738) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8237a6a8
	sub_8237A6A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5748"))) PPC_WEAK_FUNC(sub_823E5748);
PPC_FUNC_IMPL(__imp__sub_823E5748) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8259b3b8
	sub_8259B3B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5758"))) PPC_WEAK_FUNC(sub_823E5758);
PPC_FUNC_IMPL(__imp__sub_823E5758) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82373710
	sub_82373710(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5768"))) PPC_WEAK_FUNC(sub_823E5768);
PPC_FUNC_IMPL(__imp__sub_823E5768) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82373420
	sub_82373420(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5778"))) PPC_WEAK_FUNC(sub_823E5778);
PPC_FUNC_IMPL(__imp__sub_823E5778) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x823725c8
	sub_823725C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5788"))) PPC_WEAK_FUNC(sub_823E5788);
PPC_FUNC_IMPL(__imp__sub_823E5788) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823725c8
	sub_823725C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5798"))) PPC_WEAK_FUNC(sub_823E5798);
PPC_FUNC_IMPL(__imp__sub_823E5798) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82372208
	sub_82372208(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E57A8"))) PPC_WEAK_FUNC(sub_823E57A8);
PPC_FUNC_IMPL(__imp__sub_823E57A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8236ec00
	sub_8236EC00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E57B8"))) PPC_WEAK_FUNC(sub_823E57B8);
PPC_FUNC_IMPL(__imp__sub_823E57B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8236d4d8
	sub_8236D4D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E57C8"))) PPC_WEAK_FUNC(sub_823E57C8);
PPC_FUNC_IMPL(__imp__sub_823E57C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8236aee0
	sub_8236AEE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E57D8"))) PPC_WEAK_FUNC(sub_823E57D8);
PPC_FUNC_IMPL(__imp__sub_823E57D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8236ab68
	sub_8236AB68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E57E8"))) PPC_WEAK_FUNC(sub_823E57E8);
PPC_FUNC_IMPL(__imp__sub_823E57E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82369e68
	sub_82369E68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E57F8"))) PPC_WEAK_FUNC(sub_823E57F8);
PPC_FUNC_IMPL(__imp__sub_823E57F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823698c8
	sub_823698C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5808"))) PPC_WEAK_FUNC(sub_823E5808);
PPC_FUNC_IMPL(__imp__sub_823E5808) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82363600
	sub_82363600(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5818"))) PPC_WEAK_FUNC(sub_823E5818);
PPC_FUNC_IMPL(__imp__sub_823E5818) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x823614f8
	sub_823614F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5820"))) PPC_WEAK_FUNC(sub_823E5820);
PPC_FUNC_IMPL(__imp__sub_823E5820) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8235f7c0
	sub_8235F7C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5830"))) PPC_WEAK_FUNC(sub_823E5830);
PPC_FUNC_IMPL(__imp__sub_823E5830) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// lwz r12,-120(r3)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r3.u32 + -120);
	// lwz r12,32(r12)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r12.u32 + 32);
	// add r3,r3,r12
	ctx.r3.u64 = ctx.r3.u64 + ctx.r12.u64;
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// b 0x824d9998
	sub_824D9998(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5850"))) PPC_WEAK_FUNC(sub_823E5850);
PPC_FUNC_IMPL(__imp__sub_823E5850) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82523c90
	sub_82523C90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5860"))) PPC_WEAK_FUNC(sub_823E5860);
PPC_FUNC_IMPL(__imp__sub_823E5860) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8235a6b8
	sub_8235A6B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5868"))) PPC_WEAK_FUNC(sub_823E5868);
PPC_FUNC_IMPL(__imp__sub_823E5868) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82359f60
	sub_82359F60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5870"))) PPC_WEAK_FUNC(sub_823E5870);
PPC_FUNC_IMPL(__imp__sub_823E5870) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82359450
	sub_82359450(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5880"))) PPC_WEAK_FUNC(sub_823E5880);
PPC_FUNC_IMPL(__imp__sub_823E5880) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82358298
	sub_82358298(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5890"))) PPC_WEAK_FUNC(sub_823E5890);
PPC_FUNC_IMPL(__imp__sub_823E5890) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823580f0
	sub_823580F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E58A0"))) PPC_WEAK_FUNC(sub_823E58A0);
PPC_FUNC_IMPL(__imp__sub_823E58A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82357d08
	sub_82357D08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E58B0"))) PPC_WEAK_FUNC(sub_823E58B0);
PPC_FUNC_IMPL(__imp__sub_823E58B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82357a68
	sub_82357A68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E58C0"))) PPC_WEAK_FUNC(sub_823E58C0);
PPC_FUNC_IMPL(__imp__sub_823E58C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82514b18
	sub_82514B18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E58D0"))) PPC_WEAK_FUNC(sub_823E58D0);
PPC_FUNC_IMPL(__imp__sub_823E58D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82356ac0
	sub_82356AC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E58E0"))) PPC_WEAK_FUNC(sub_823E58E0);
PPC_FUNC_IMPL(__imp__sub_823E58E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82356060
	sub_82356060(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E58F0"))) PPC_WEAK_FUNC(sub_823E58F0);
PPC_FUNC_IMPL(__imp__sub_823E58F0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82350f40
	sub_82350F40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E58F8"))) PPC_WEAK_FUNC(sub_823E58F8);
PPC_FUNC_IMPL(__imp__sub_823E58F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8234c1e8
	sub_8234C1E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5908"))) PPC_WEAK_FUNC(sub_823E5908);
PPC_FUNC_IMPL(__imp__sub_823E5908) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x824d9930
	sub_824D9930(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5918"))) PPC_WEAK_FUNC(sub_823E5918);
PPC_FUNC_IMPL(__imp__sub_823E5918) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x825a81a8
	sub_825A81A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5928"))) PPC_WEAK_FUNC(sub_823E5928);
PPC_FUNC_IMPL(__imp__sub_823E5928) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82591698
	sub_82591698(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5938"))) PPC_WEAK_FUNC(sub_823E5938);
PPC_FUNC_IMPL(__imp__sub_823E5938) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8258f508
	sub_8258F508(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5948"))) PPC_WEAK_FUNC(sub_823E5948);
PPC_FUNC_IMPL(__imp__sub_823E5948) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8258e890
	sub_8258E890(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5958"))) PPC_WEAK_FUNC(sub_823E5958);
PPC_FUNC_IMPL(__imp__sub_823E5958) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8258eab0
	sub_8258EAB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5968"))) PPC_WEAK_FUNC(sub_823E5968);
PPC_FUNC_IMPL(__imp__sub_823E5968) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82348480
	sub_82348480(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5978"))) PPC_WEAK_FUNC(sub_823E5978);
PPC_FUNC_IMPL(__imp__sub_823E5978) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82348480
	sub_82348480(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5988"))) PPC_WEAK_FUNC(sub_823E5988);
PPC_FUNC_IMPL(__imp__sub_823E5988) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x825b9ce0
	sub_825B9CE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5998"))) PPC_WEAK_FUNC(sub_823E5998);
PPC_FUNC_IMPL(__imp__sub_823E5998) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82347798
	sub_82347798(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E59A8"))) PPC_WEAK_FUNC(sub_823E59A8);
PPC_FUNC_IMPL(__imp__sub_823E59A8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x823457f8
	sub_823457F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E59B0"))) PPC_WEAK_FUNC(sub_823E59B0);
PPC_FUNC_IMPL(__imp__sub_823E59B0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,148
	ctx.r3.s64 = ctx.r3.s64 + 148;
	// b 0x82636390
	sub_82636390(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E59B8"))) PPC_WEAK_FUNC(sub_823E59B8);
PPC_FUNC_IMPL(__imp__sub_823E59B8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,108
	ctx.r3.s64 = ctx.r3.s64 + 108;
	// b 0x8233f088
	sub_8233F088(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E59C0"))) PPC_WEAK_FUNC(sub_823E59C0);
PPC_FUNC_IMPL(__imp__sub_823E59C0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,116
	ctx.r3.s64 = ctx.r3.s64 + 116;
	// b 0x825d6ef8
	sub_825D6EF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E59C8"))) PPC_WEAK_FUNC(sub_823E59C8);
PPC_FUNC_IMPL(__imp__sub_823E59C8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8233eba0
	sub_8233EBA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E59D0"))) PPC_WEAK_FUNC(sub_823E59D0);
PPC_FUNC_IMPL(__imp__sub_823E59D0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x8237b1d8
	sub_8237B1D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E59D8"))) PPC_WEAK_FUNC(sub_823E59D8);
PPC_FUNC_IMPL(__imp__sub_823E59D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8237ab00
	sub_8237AB00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E59E8"))) PPC_WEAK_FUNC(sub_823E59E8);
PPC_FUNC_IMPL(__imp__sub_823E59E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823746a8
	sub_823746A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E59F8"))) PPC_WEAK_FUNC(sub_823E59F8);
PPC_FUNC_IMPL(__imp__sub_823E59F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82373ad8
	sub_82373AD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5A08"))) PPC_WEAK_FUNC(sub_823E5A08);
PPC_FUNC_IMPL(__imp__sub_823E5A08) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82373ad8
	sub_82373AD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5A18"))) PPC_WEAK_FUNC(sub_823E5A18);
PPC_FUNC_IMPL(__imp__sub_823E5A18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x825999f0
	sub_825999F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5A28"))) PPC_WEAK_FUNC(sub_823E5A28);
PPC_FUNC_IMPL(__imp__sub_823E5A28) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8236d5c8
	sub_8236D5C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5A38"))) PPC_WEAK_FUNC(sub_823E5A38);
PPC_FUNC_IMPL(__imp__sub_823E5A38) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8236d5c8
	sub_8236D5C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5A48"))) PPC_WEAK_FUNC(sub_823E5A48);
PPC_FUNC_IMPL(__imp__sub_823E5A48) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82365680
	sub_82365680(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5A50"))) PPC_WEAK_FUNC(sub_823E5A50);
PPC_FUNC_IMPL(__imp__sub_823E5A50) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x823613a8
	sub_823613A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5A58"))) PPC_WEAK_FUNC(sub_823E5A58);
PPC_FUNC_IMPL(__imp__sub_823E5A58) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82360650
	sub_82360650(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5A68"))) PPC_WEAK_FUNC(sub_823E5A68);
PPC_FUNC_IMPL(__imp__sub_823E5A68) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82360668
	sub_82360668(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5A78"))) PPC_WEAK_FUNC(sub_823E5A78);
PPC_FUNC_IMPL(__imp__sub_823E5A78) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8235f1c0
	sub_8235F1C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5A88"))) PPC_WEAK_FUNC(sub_823E5A88);
PPC_FUNC_IMPL(__imp__sub_823E5A88) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8235dc78
	sub_8235DC78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5A90"))) PPC_WEAK_FUNC(sub_823E5A90);
PPC_FUNC_IMPL(__imp__sub_823E5A90) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8235c880
	sub_8235C880(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5AA0"))) PPC_WEAK_FUNC(sub_823E5AA0);
PPC_FUNC_IMPL(__imp__sub_823E5AA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8235c3c8
	sub_8235C3C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5AB0"))) PPC_WEAK_FUNC(sub_823E5AB0);
PPC_FUNC_IMPL(__imp__sub_823E5AB0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82359b28
	sub_82359B28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5AB8"))) PPC_WEAK_FUNC(sub_823E5AB8);
PPC_FUNC_IMPL(__imp__sub_823E5AB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82355680
	sub_82355680(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5AC8"))) PPC_WEAK_FUNC(sub_823E5AC8);
PPC_FUNC_IMPL(__imp__sub_823E5AC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82353fe0
	sub_82353FE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5AD8"))) PPC_WEAK_FUNC(sub_823E5AD8);
PPC_FUNC_IMPL(__imp__sub_823E5AD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82353530
	sub_82353530(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5AE8"))) PPC_WEAK_FUNC(sub_823E5AE8);
PPC_FUNC_IMPL(__imp__sub_823E5AE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82352130
	sub_82352130(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5AF8"))) PPC_WEAK_FUNC(sub_823E5AF8);
PPC_FUNC_IMPL(__imp__sub_823E5AF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82351c98
	sub_82351C98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5B08"))) PPC_WEAK_FUNC(sub_823E5B08);
PPC_FUNC_IMPL(__imp__sub_823E5B08) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82351108
	sub_82351108(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5B18"))) PPC_WEAK_FUNC(sub_823E5B18);
PPC_FUNC_IMPL(__imp__sub_823E5B18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x825b1b30
	sub_825B1B30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5B28"))) PPC_WEAK_FUNC(sub_823E5B28);
PPC_FUNC_IMPL(__imp__sub_823E5B28) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x825ab640
	sub_825AB640(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5B38"))) PPC_WEAK_FUNC(sub_823E5B38);
PPC_FUNC_IMPL(__imp__sub_823E5B38) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8234c7e8
	sub_8234C7E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5B48"))) PPC_WEAK_FUNC(sub_823E5B48);
PPC_FUNC_IMPL(__imp__sub_823E5B48) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8234bc60
	sub_8234BC60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5B58"))) PPC_WEAK_FUNC(sub_823E5B58);
PPC_FUNC_IMPL(__imp__sub_823E5B58) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x8258e890
	sub_8258E890(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5B68"))) PPC_WEAK_FUNC(sub_823E5B68);
PPC_FUNC_IMPL(__imp__sub_823E5B68) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8258f670
	sub_8258F670(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5B78"))) PPC_WEAK_FUNC(sub_823E5B78);
PPC_FUNC_IMPL(__imp__sub_823E5B78) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823494d0
	sub_823494D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5B88"))) PPC_WEAK_FUNC(sub_823E5B88);
PPC_FUNC_IMPL(__imp__sub_823E5B88) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82348398
	sub_82348398(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5B98"))) PPC_WEAK_FUNC(sub_823E5B98);
PPC_FUNC_IMPL(__imp__sub_823E5B98) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,140
	ctx.r3.s64 = ctx.r3.s64 + 140;
	// b 0x82347478
	sub_82347478(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5BA0"))) PPC_WEAK_FUNC(sub_823E5BA0);
PPC_FUNC_IMPL(__imp__sub_823E5BA0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,148
	ctx.r3.s64 = ctx.r3.s64 + 148;
	// b 0x82639b40
	sub_82639B40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5BA8"))) PPC_WEAK_FUNC(sub_823E5BA8);
PPC_FUNC_IMPL(__imp__sub_823E5BA8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82344720
	sub_82344720(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5BB0"))) PPC_WEAK_FUNC(sub_823E5BB0);
PPC_FUNC_IMPL(__imp__sub_823E5BB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8233a3d0
	sub_8233A3D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5BC0"))) PPC_WEAK_FUNC(sub_823E5BC0);
PPC_FUNC_IMPL(__imp__sub_823E5BC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8233a450
	sub_8233A450(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5BD0"))) PPC_WEAK_FUNC(sub_823E5BD0);
PPC_FUNC_IMPL(__imp__sub_823E5BD0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8234d338
	sub_8234D338(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5BD8"))) PPC_WEAK_FUNC(sub_823E5BD8);
PPC_FUNC_IMPL(__imp__sub_823E5BD8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82374eb8
	sub_82374EB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5BE0"))) PPC_WEAK_FUNC(sub_823E5BE0);
PPC_FUNC_IMPL(__imp__sub_823E5BE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8259b2f0
	sub_8259B2F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5BF0"))) PPC_WEAK_FUNC(sub_823E5BF0);
PPC_FUNC_IMPL(__imp__sub_823E5BF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823739f8
	sub_823739F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5C00"))) PPC_WEAK_FUNC(sub_823E5C00);
PPC_FUNC_IMPL(__imp__sub_823E5C00) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823727d8
	sub_823727D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5C10"))) PPC_WEAK_FUNC(sub_823E5C10);
PPC_FUNC_IMPL(__imp__sub_823E5C10) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x823722d8
	sub_823722D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5C20"))) PPC_WEAK_FUNC(sub_823E5C20);
PPC_FUNC_IMPL(__imp__sub_823E5C20) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823722d8
	sub_823722D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5C30"))) PPC_WEAK_FUNC(sub_823E5C30);
PPC_FUNC_IMPL(__imp__sub_823E5C30) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x82370998
	sub_82370998(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5C38"))) PPC_WEAK_FUNC(sub_823E5C38);
PPC_FUNC_IMPL(__imp__sub_823E5C38) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8255cbc8
	sub_8255CBC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5C48"))) PPC_WEAK_FUNC(sub_823E5C48);
PPC_FUNC_IMPL(__imp__sub_823E5C48) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8255c7a8
	sub_8255C7A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5C58"))) PPC_WEAK_FUNC(sub_823E5C58);
PPC_FUNC_IMPL(__imp__sub_823E5C58) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8254a360
	sub_8254A360(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5C68"))) PPC_WEAK_FUNC(sub_823E5C68);
PPC_FUNC_IMPL(__imp__sub_823E5C68) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82369570
	sub_82369570(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5C78"))) PPC_WEAK_FUNC(sub_823E5C78);
PPC_FUNC_IMPL(__imp__sub_823E5C78) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x823664c8
	sub_823664C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5C80"))) PPC_WEAK_FUNC(sub_823E5C80);
PPC_FUNC_IMPL(__imp__sub_823E5C80) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8252de58
	sub_8252DE58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5C90"))) PPC_WEAK_FUNC(sub_823E5C90);
PPC_FUNC_IMPL(__imp__sub_823E5C90) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82360f38
	sub_82360F38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5C98"))) PPC_WEAK_FUNC(sub_823E5C98);
PPC_FUNC_IMPL(__imp__sub_823E5C98) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82360240
	sub_82360240(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5CA8"))) PPC_WEAK_FUNC(sub_823E5CA8);
PPC_FUNC_IMPL(__imp__sub_823E5CA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8235f890
	sub_8235F890(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5CB8"))) PPC_WEAK_FUNC(sub_823E5CB8);
PPC_FUNC_IMPL(__imp__sub_823E5CB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8235f890
	sub_8235F890(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5CC8"))) PPC_WEAK_FUNC(sub_823E5CC8);
PPC_FUNC_IMPL(__imp__sub_823E5CC8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8235d170
	sub_8235D170(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5CD0"))) PPC_WEAK_FUNC(sub_823E5CD0);
PPC_FUNC_IMPL(__imp__sub_823E5CD0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8235ccc0
	sub_8235CCC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5CD8"))) PPC_WEAK_FUNC(sub_823E5CD8);
PPC_FUNC_IMPL(__imp__sub_823E5CD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8252bcc8
	sub_8252BCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5CE8"))) PPC_WEAK_FUNC(sub_823E5CE8);
PPC_FUNC_IMPL(__imp__sub_823E5CE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8235ae68
	sub_8235AE68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5CF8"))) PPC_WEAK_FUNC(sub_823E5CF8);
PPC_FUNC_IMPL(__imp__sub_823E5CF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8235ab58
	sub_8235AB58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5D08"))) PPC_WEAK_FUNC(sub_823E5D08);
PPC_FUNC_IMPL(__imp__sub_823E5D08) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8235a900
	sub_8235A900(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5D18"))) PPC_WEAK_FUNC(sub_823E5D18);
PPC_FUNC_IMPL(__imp__sub_823E5D18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x825175f8
	sub_825175F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5D28"))) PPC_WEAK_FUNC(sub_823E5D28);
PPC_FUNC_IMPL(__imp__sub_823E5D28) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82356938
	sub_82356938(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5D38"))) PPC_WEAK_FUNC(sub_823E5D38);
PPC_FUNC_IMPL(__imp__sub_823E5D38) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82356580
	sub_82356580(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5D48"))) PPC_WEAK_FUNC(sub_823E5D48);
PPC_FUNC_IMPL(__imp__sub_823E5D48) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82356580
	sub_82356580(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5D58"))) PPC_WEAK_FUNC(sub_823E5D58);
PPC_FUNC_IMPL(__imp__sub_823E5D58) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82355fe8
	sub_82355FE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5D68"))) PPC_WEAK_FUNC(sub_823E5D68);
PPC_FUNC_IMPL(__imp__sub_823E5D68) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82355848
	sub_82355848(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5D78"))) PPC_WEAK_FUNC(sub_823E5D78);
PPC_FUNC_IMPL(__imp__sub_823E5D78) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82354be8
	sub_82354BE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5D88"))) PPC_WEAK_FUNC(sub_823E5D88);
PPC_FUNC_IMPL(__imp__sub_823E5D88) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82354ca0
	sub_82354CA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5D98"))) PPC_WEAK_FUNC(sub_823E5D98);
PPC_FUNC_IMPL(__imp__sub_823E5D98) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82354be8
	sub_82354BE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5DA8"))) PPC_WEAK_FUNC(sub_823E5DA8);
PPC_FUNC_IMPL(__imp__sub_823E5DA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82353970
	sub_82353970(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5DB8"))) PPC_WEAK_FUNC(sub_823E5DB8);
PPC_FUNC_IMPL(__imp__sub_823E5DB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8234f018
	sub_8234F018(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5DC8"))) PPC_WEAK_FUNC(sub_823E5DC8);
PPC_FUNC_IMPL(__imp__sub_823E5DC8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,80
	ctx.r3.s64 = ctx.r3.s64 + 80;
	// b 0x828a4660
	sub_828A4660(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5DD0"))) PPC_WEAK_FUNC(sub_823E5DD0);
PPC_FUNC_IMPL(__imp__sub_823E5DD0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8234bd58
	sub_8234BD58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5DE0"))) PPC_WEAK_FUNC(sub_823E5DE0);
PPC_FUNC_IMPL(__imp__sub_823E5DE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8234bd58
	sub_8234BD58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5DF0"))) PPC_WEAK_FUNC(sub_823E5DF0);
PPC_FUNC_IMPL(__imp__sub_823E5DF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x825a7f08
	sub_825A7F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5E00"))) PPC_WEAK_FUNC(sub_823E5E00);
PPC_FUNC_IMPL(__imp__sub_823E5E00) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8234af80
	sub_8234AF80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5E10"))) PPC_WEAK_FUNC(sub_823E5E10);
PPC_FUNC_IMPL(__imp__sub_823E5E10) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8234aef0
	sub_8234AEF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5E20"))) PPC_WEAK_FUNC(sub_823E5E20);
PPC_FUNC_IMPL(__imp__sub_823E5E20) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8234af80
	sub_8234AF80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5E30"))) PPC_WEAK_FUNC(sub_823E5E30);
PPC_FUNC_IMPL(__imp__sub_823E5E30) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8234abb0
	sub_8234ABB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5E40"))) PPC_WEAK_FUNC(sub_823E5E40);
PPC_FUNC_IMPL(__imp__sub_823E5E40) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8234ac30
	sub_8234AC30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5E50"))) PPC_WEAK_FUNC(sub_823E5E50);
PPC_FUNC_IMPL(__imp__sub_823E5E50) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8234a9a0
	sub_8234A9A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5E60"))) PPC_WEAK_FUNC(sub_823E5E60);
PPC_FUNC_IMPL(__imp__sub_823E5E60) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82591b38
	sub_82591B38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5E70"))) PPC_WEAK_FUNC(sub_823E5E70);
PPC_FUNC_IMPL(__imp__sub_823E5E70) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82591ab0
	sub_82591AB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5E80"))) PPC_WEAK_FUNC(sub_823E5E80);
PPC_FUNC_IMPL(__imp__sub_823E5E80) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8234a9a0
	sub_8234A9A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5E90"))) PPC_WEAK_FUNC(sub_823E5E90);
PPC_FUNC_IMPL(__imp__sub_823E5E90) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8234a208
	sub_8234A208(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5EA0"))) PPC_WEAK_FUNC(sub_823E5EA0);
PPC_FUNC_IMPL(__imp__sub_823E5EA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x825acb90
	sub_825ACB90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5EB0"))) PPC_WEAK_FUNC(sub_823E5EB0);
PPC_FUNC_IMPL(__imp__sub_823E5EB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x825ba190
	sub_825BA190(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5EC0"))) PPC_WEAK_FUNC(sub_823E5EC0);
PPC_FUNC_IMPL(__imp__sub_823E5EC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82348740
	sub_82348740(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5ED0"))) PPC_WEAK_FUNC(sub_823E5ED0);
PPC_FUNC_IMPL(__imp__sub_823E5ED0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x823473b8
	sub_823473B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5EE0"))) PPC_WEAK_FUNC(sub_823E5EE0);
PPC_FUNC_IMPL(__imp__sub_823E5EE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82347328
	sub_82347328(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5EF0"))) PPC_WEAK_FUNC(sub_823E5EF0);
PPC_FUNC_IMPL(__imp__sub_823E5EF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823473b8
	sub_823473B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5F00"))) PPC_WEAK_FUNC(sub_823E5F00);
PPC_FUNC_IMPL(__imp__sub_823E5F00) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,148
	ctx.r3.s64 = ctx.r3.s64 + 148;
	// b 0x826372b8
	sub_826372B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5F08"))) PPC_WEAK_FUNC(sub_823E5F08);
PPC_FUNC_IMPL(__imp__sub_823E5F08) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,144
	ctx.r3.s64 = ctx.r3.s64 + 144;
	// b 0x82632dd8
	sub_82632DD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5F10"))) PPC_WEAK_FUNC(sub_823E5F10);
PPC_FUNC_IMPL(__imp__sub_823E5F10) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// b 0x8262c9a0
	sub_8262C9A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5F18"))) PPC_WEAK_FUNC(sub_823E5F18);
PPC_FUNC_IMPL(__imp__sub_823E5F18) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,124
	ctx.r3.s64 = ctx.r3.s64 + 124;
	// b 0x82627548
	sub_82627548(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5F20"))) PPC_WEAK_FUNC(sub_823E5F20);
PPC_FUNC_IMPL(__imp__sub_823E5F20) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8233aa10
	sub_8233AA10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5F28"))) PPC_WEAK_FUNC(sub_823E5F28);
PPC_FUNC_IMPL(__imp__sub_823E5F28) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8233a4b0
	sub_8233A4B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5F38"))) PPC_WEAK_FUNC(sub_823E5F38);
PPC_FUNC_IMPL(__imp__sub_823E5F38) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8233a4b0
	sub_8233A4B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5F48"))) PPC_WEAK_FUNC(sub_823E5F48);
PPC_FUNC_IMPL(__imp__sub_823E5F48) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8237a988
	sub_8237A988(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5F58"))) PPC_WEAK_FUNC(sub_823E5F58);
PPC_FUNC_IMPL(__imp__sub_823E5F58) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8237a648
	sub_8237A648(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5F68"))) PPC_WEAK_FUNC(sub_823E5F68);
PPC_FUNC_IMPL(__imp__sub_823E5F68) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82379bd8
	sub_82379BD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5F70"))) PPC_WEAK_FUNC(sub_823E5F70);
PPC_FUNC_IMPL(__imp__sub_823E5F70) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82376308
	sub_82376308(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5F78"))) PPC_WEAK_FUNC(sub_823E5F78);
PPC_FUNC_IMPL(__imp__sub_823E5F78) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8259b4f8
	sub_8259B4F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5F88"))) PPC_WEAK_FUNC(sub_823E5F88);
PPC_FUNC_IMPL(__imp__sub_823E5F88) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82373128
	sub_82373128(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5F98"))) PPC_WEAK_FUNC(sub_823E5F98);
PPC_FUNC_IMPL(__imp__sub_823E5F98) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,120
	ctx.r3.s64 = ctx.r3.s64 + 120;
	// b 0x82599998
	sub_82599998(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5FA8"))) PPC_WEAK_FUNC(sub_823E5FA8);
PPC_FUNC_IMPL(__imp__sub_823E5FA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823721f8
	sub_823721F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5FB8"))) PPC_WEAK_FUNC(sub_823E5FB8);
PPC_FUNC_IMPL(__imp__sub_823E5FB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8236f5d0
	sub_8236F5D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5FC8"))) PPC_WEAK_FUNC(sub_823E5FC8);
PPC_FUNC_IMPL(__imp__sub_823E5FC8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8236c158
	sub_8236C158(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5FD0"))) PPC_WEAK_FUNC(sub_823E5FD0);
PPC_FUNC_IMPL(__imp__sub_823E5FD0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82549e18
	sub_82549E18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5FE0"))) PPC_WEAK_FUNC(sub_823E5FE0);
PPC_FUNC_IMPL(__imp__sub_823E5FE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// b 0x82549cd0
	sub_82549CD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5FF0"))) PPC_WEAK_FUNC(sub_823E5FF0);
PPC_FUNC_IMPL(__imp__sub_823E5FF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82369e00
	sub_82369E00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6000"))) PPC_WEAK_FUNC(sub_823E6000);
PPC_FUNC_IMPL(__imp__sub_823E6000) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82369ba8
	sub_82369BA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6010"))) PPC_WEAK_FUNC(sub_823E6010);
PPC_FUNC_IMPL(__imp__sub_823E6010) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82369b48
	sub_82369B48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6020"))) PPC_WEAK_FUNC(sub_823E6020);
PPC_FUNC_IMPL(__imp__sub_823E6020) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82369ba8
	sub_82369BA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6030"))) PPC_WEAK_FUNC(sub_823E6030);
PPC_FUNC_IMPL(__imp__sub_823E6030) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82369798
	sub_82369798(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6040"))) PPC_WEAK_FUNC(sub_823E6040);
PPC_FUNC_IMPL(__imp__sub_823E6040) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82368bf8
	sub_82368BF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E6050"))) PPC_WEAK_FUNC(sub_823E6050);
PPC_FUNC_IMPL(__imp__sub_823E6050) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82368a78
	sub_82368A78(ctx, base);
	return;
}

