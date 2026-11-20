#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_823E43C0"))) PPC_WEAK_FUNC(sub_823E43C0);
PPC_FUNC_IMPL(__imp__sub_823E43C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82368ae8
	sub_82368AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E43D0"))) PPC_WEAK_FUNC(sub_823E43D0);
PPC_FUNC_IMPL(__imp__sub_823E43D0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82367890
	sub_82367890(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E43D8"))) PPC_WEAK_FUNC(sub_823E43D8);
PPC_FUNC_IMPL(__imp__sub_823E43D8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82367728
	sub_82367728(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E43E0"))) PPC_WEAK_FUNC(sub_823E43E0);
PPC_FUNC_IMPL(__imp__sub_823E43E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82366af0
	sub_82366AF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E43F0"))) PPC_WEAK_FUNC(sub_823E43F0);
PPC_FUNC_IMPL(__imp__sub_823E43F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82362e30
	sub_82362E30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4400"))) PPC_WEAK_FUNC(sub_823E4400);
PPC_FUNC_IMPL(__imp__sub_823E4400) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8235fdc8
	sub_8235FDC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4410"))) PPC_WEAK_FUNC(sub_823E4410);
PPC_FUNC_IMPL(__imp__sub_823E4410) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823406b0
	sub_823406B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4420"))) PPC_WEAK_FUNC(sub_823E4420);
PPC_FUNC_IMPL(__imp__sub_823E4420) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8235c230
	sub_8235C230(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4428"))) PPC_WEAK_FUNC(sub_823E4428);
PPC_FUNC_IMPL(__imp__sub_823E4428) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8235a550
	sub_8235A550(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4430"))) PPC_WEAK_FUNC(sub_823E4430);
PPC_FUNC_IMPL(__imp__sub_823E4430) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x823599c0
	sub_823599C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4438"))) PPC_WEAK_FUNC(sub_823E4438);
PPC_FUNC_IMPL(__imp__sub_823E4438) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8251d1d8
	sub_8251D1D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4448"))) PPC_WEAK_FUNC(sub_823E4448);
PPC_FUNC_IMPL(__imp__sub_823E4448) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82355778
	sub_82355778(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4458"))) PPC_WEAK_FUNC(sub_823E4458);
PPC_FUNC_IMPL(__imp__sub_823E4458) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82355898
	sub_82355898(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4468"))) PPC_WEAK_FUNC(sub_823E4468);
PPC_FUNC_IMPL(__imp__sub_823E4468) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82355778
	sub_82355778(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4478"))) PPC_WEAK_FUNC(sub_823E4478);
PPC_FUNC_IMPL(__imp__sub_823E4478) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// lwz r12,-72(r3)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r3.u32 + -72);
	// lwz r12,32(r12)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r12.u32 + 32);
	// add r3,r3,r12
	ctx.r3.u64 = ctx.r3.u64 + ctx.r12.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x82514358
	sub_82514358(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4498"))) PPC_WEAK_FUNC(sub_823E4498);
PPC_FUNC_IMPL(__imp__sub_823E4498) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82353c90
	sub_82353C90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E44A8"))) PPC_WEAK_FUNC(sub_823E44A8);
PPC_FUNC_IMPL(__imp__sub_823E44A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82352630
	sub_82352630(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E44B8"))) PPC_WEAK_FUNC(sub_823E44B8);
PPC_FUNC_IMPL(__imp__sub_823E44B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82351d90
	sub_82351D90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E44C8"))) PPC_WEAK_FUNC(sub_823E44C8);
PPC_FUNC_IMPL(__imp__sub_823E44C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82351d90
	sub_82351D90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E44D8"))) PPC_WEAK_FUNC(sub_823E44D8);
PPC_FUNC_IMPL(__imp__sub_823E44D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x823519b0
	sub_823519B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E44E8"))) PPC_WEAK_FUNC(sub_823E44E8);
PPC_FUNC_IMPL(__imp__sub_823E44E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823519b0
	sub_823519B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E44F8"))) PPC_WEAK_FUNC(sub_823E44F8);
PPC_FUNC_IMPL(__imp__sub_823E44F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82350348
	sub_82350348(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4508"))) PPC_WEAK_FUNC(sub_823E4508);
PPC_FUNC_IMPL(__imp__sub_823E4508) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x825af298
	sub_825AF298(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4518"))) PPC_WEAK_FUNC(sub_823E4518);
PPC_FUNC_IMPL(__imp__sub_823E4518) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8234f3c0
	sub_8234F3C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4528"))) PPC_WEAK_FUNC(sub_823E4528);
PPC_FUNC_IMPL(__imp__sub_823E4528) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8234cb30
	sub_8234CB30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4538"))) PPC_WEAK_FUNC(sub_823E4538);
PPC_FUNC_IMPL(__imp__sub_823E4538) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8234b5c0
	sub_8234B5C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4548"))) PPC_WEAK_FUNC(sub_823E4548);
PPC_FUNC_IMPL(__imp__sub_823E4548) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8234ae88
	sub_8234AE88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4558"))) PPC_WEAK_FUNC(sub_823E4558);
PPC_FUNC_IMPL(__imp__sub_823E4558) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82349890
	sub_82349890(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4568"))) PPC_WEAK_FUNC(sub_823E4568);
PPC_FUNC_IMPL(__imp__sub_823E4568) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x825b9d00
	sub_825B9D00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4578"))) PPC_WEAK_FUNC(sub_823E4578);
PPC_FUNC_IMPL(__imp__sub_823E4578) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82347d90
	sub_82347D90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4588"))) PPC_WEAK_FUNC(sub_823E4588);
PPC_FUNC_IMPL(__imp__sub_823E4588) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82347d90
	sub_82347D90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4598"))) PPC_WEAK_FUNC(sub_823E4598);
PPC_FUNC_IMPL(__imp__sub_823E4598) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82347b18
	sub_82347B18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E45A8"))) PPC_WEAK_FUNC(sub_823E45A8);
PPC_FUNC_IMPL(__imp__sub_823E45A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,140
	ctx.r3.s64 = ctx.r3.s64 + 140;
	// b 0x82347438
	sub_82347438(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E45B8"))) PPC_WEAK_FUNC(sub_823E45B8);
PPC_FUNC_IMPL(__imp__sub_823E45B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x825d94c0
	sub_825D94C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E45C8"))) PPC_WEAK_FUNC(sub_823E45C8);
PPC_FUNC_IMPL(__imp__sub_823E45C8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82346be0
	sub_82346BE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E45D0"))) PPC_WEAK_FUNC(sub_823E45D0);
PPC_FUNC_IMPL(__imp__sub_823E45D0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,148
	ctx.r3.s64 = ctx.r3.s64 + 148;
	// b 0x82638980
	sub_82638980(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E45D8"))) PPC_WEAK_FUNC(sub_823E45D8);
PPC_FUNC_IMPL(__imp__sub_823E45D8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,148
	ctx.r3.s64 = ctx.r3.s64 + 148;
	// b 0x826360c8
	sub_826360C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E45E0"))) PPC_WEAK_FUNC(sub_823E45E0);
PPC_FUNC_IMPL(__imp__sub_823E45E0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,116
	ctx.r3.s64 = ctx.r3.s64 + 116;
	// b 0x82620868
	sub_82620868(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E45E8"))) PPC_WEAK_FUNC(sub_823E45E8);
PPC_FUNC_IMPL(__imp__sub_823E45E8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8233c728
	sub_8233C728(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E45F0"))) PPC_WEAK_FUNC(sub_823E45F0);
PPC_FUNC_IMPL(__imp__sub_823E45F0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8236fc08
	sub_8236FC08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E45F8"))) PPC_WEAK_FUNC(sub_823E45F8);
PPC_FUNC_IMPL(__imp__sub_823E45F8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82379660
	sub_82379660(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4600"))) PPC_WEAK_FUNC(sub_823E4600);
PPC_FUNC_IMPL(__imp__sub_823E4600) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x823793d0
	sub_823793D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4608"))) PPC_WEAK_FUNC(sub_823E4608);
PPC_FUNC_IMPL(__imp__sub_823E4608) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82378b90
	sub_82378B90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4610"))) PPC_WEAK_FUNC(sub_823E4610);
PPC_FUNC_IMPL(__imp__sub_823E4610) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82376af0
	sub_82376AF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4618"))) PPC_WEAK_FUNC(sub_823E4618);
PPC_FUNC_IMPL(__imp__sub_823E4618) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82374050
	sub_82374050(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4628"))) PPC_WEAK_FUNC(sub_823E4628);
PPC_FUNC_IMPL(__imp__sub_823E4628) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82372ba8
	sub_82372BA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4638"))) PPC_WEAK_FUNC(sub_823E4638);
PPC_FUNC_IMPL(__imp__sub_823E4638) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82372ba8
	sub_82372BA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4648"))) PPC_WEAK_FUNC(sub_823E4648);
PPC_FUNC_IMPL(__imp__sub_823E4648) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82371c30
	sub_82371C30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4658"))) PPC_WEAK_FUNC(sub_823E4658);
PPC_FUNC_IMPL(__imp__sub_823E4658) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8236a168
	sub_8236A168(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4668"))) PPC_WEAK_FUNC(sub_823E4668);
PPC_FUNC_IMPL(__imp__sub_823E4668) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82362310
	sub_82362310(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4678"))) PPC_WEAK_FUNC(sub_823E4678);
PPC_FUNC_IMPL(__imp__sub_823E4678) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82367e38
	sub_82367E38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4680"))) PPC_WEAK_FUNC(sub_823E4680);
PPC_FUNC_IMPL(__imp__sub_823E4680) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82366b00
	sub_82366B00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4690"))) PPC_WEAK_FUNC(sub_823E4690);
PPC_FUNC_IMPL(__imp__sub_823E4690) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82363b50
	sub_82363B50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4698"))) PPC_WEAK_FUNC(sub_823E4698);
PPC_FUNC_IMPL(__imp__sub_823E4698) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82363588
	sub_82363588(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E46A8"))) PPC_WEAK_FUNC(sub_823E46A8);
PPC_FUNC_IMPL(__imp__sub_823E46A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82362e58
	sub_82362E58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E46B8"))) PPC_WEAK_FUNC(sub_823E46B8);
PPC_FUNC_IMPL(__imp__sub_823E46B8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x823619b8
	sub_823619B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E46C0"))) PPC_WEAK_FUNC(sub_823E46C0);
PPC_FUNC_IMPL(__imp__sub_823E46C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82360258
	sub_82360258(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E46D0"))) PPC_WEAK_FUNC(sub_823E46D0);
PPC_FUNC_IMPL(__imp__sub_823E46D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8235ef38
	sub_8235EF38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E46E0"))) PPC_WEAK_FUNC(sub_823E46E0);
PPC_FUNC_IMPL(__imp__sub_823E46E0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8235cea0
	sub_8235CEA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E46E8"))) PPC_WEAK_FUNC(sub_823E46E8);
PPC_FUNC_IMPL(__imp__sub_823E46E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// lwz r12,-2048(r3)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r3.u32 + -2048);
	// lwz r12,20(r12)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r12.u32 + 20);
	// add r3,r3,r12
	ctx.r3.u64 = ctx.r3.u64 + ctx.r12.u64;
	// addi r3,r3,80
	ctx.r3.s64 = ctx.r3.s64 + 80;
	// b 0x82514fe0
	sub_82514FE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4708"))) PPC_WEAK_FUNC(sub_823E4708);
PPC_FUNC_IMPL(__imp__sub_823E4708) {
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
	// b 0x82357738
	sub_82357738(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4728"))) PPC_WEAK_FUNC(sub_823E4728);
PPC_FUNC_IMPL(__imp__sub_823E4728) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823594b8
	sub_823594B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4738"))) PPC_WEAK_FUNC(sub_823E4738);
PPC_FUNC_IMPL(__imp__sub_823E4738) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x823586d8
	sub_823586D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4740"))) PPC_WEAK_FUNC(sub_823E4740);
PPC_FUNC_IMPL(__imp__sub_823E4740) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,152
	ctx.r3.s64 = ctx.r3.s64 + 152;
	// b 0x82353988
	sub_82353988(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4748"))) PPC_WEAK_FUNC(sub_823E4748);
PPC_FUNC_IMPL(__imp__sub_823E4748) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,152
	ctx.r3.s64 = ctx.r3.s64 + 152;
	// b 0x8234f500
	sub_8234F500(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4750"))) PPC_WEAK_FUNC(sub_823E4750);
PPC_FUNC_IMPL(__imp__sub_823E4750) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x825020f8
	sub_825020F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4760"))) PPC_WEAK_FUNC(sub_823E4760);
PPC_FUNC_IMPL(__imp__sub_823E4760) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8234ff28
	sub_8234FF28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4770"))) PPC_WEAK_FUNC(sub_823E4770);
PPC_FUNC_IMPL(__imp__sub_823E4770) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8234fc60
	sub_8234FC60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4780"))) PPC_WEAK_FUNC(sub_823E4780);
PPC_FUNC_IMPL(__imp__sub_823E4780) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8234fce0
	sub_8234FCE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4790"))) PPC_WEAK_FUNC(sub_823E4790);
PPC_FUNC_IMPL(__imp__sub_823E4790) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8234f7f0
	sub_8234F7F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E47A0"))) PPC_WEAK_FUNC(sub_823E47A0);
PPC_FUNC_IMPL(__imp__sub_823E47A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8234ccb8
	sub_8234CCB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E47B0"))) PPC_WEAK_FUNC(sub_823E47B0);
PPC_FUNC_IMPL(__imp__sub_823E47B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8234c7b8
	sub_8234C7B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E47C0"))) PPC_WEAK_FUNC(sub_823E47C0);
PPC_FUNC_IMPL(__imp__sub_823E47C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8252e760
	sub_8252E760(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E47D0"))) PPC_WEAK_FUNC(sub_823E47D0);
PPC_FUNC_IMPL(__imp__sub_823E47D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8234b8c8
	sub_8234B8C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E47E0"))) PPC_WEAK_FUNC(sub_823E47E0);
PPC_FUNC_IMPL(__imp__sub_823E47E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8234b8c8
	sub_8234B8C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E47F0"))) PPC_WEAK_FUNC(sub_823E47F0);
PPC_FUNC_IMPL(__imp__sub_823E47F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x8258eb78
	sub_8258EB78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4800"))) PPC_WEAK_FUNC(sub_823E4800);
PPC_FUNC_IMPL(__imp__sub_823E4800) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82346ed0
	sub_82346ED0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4810"))) PPC_WEAK_FUNC(sub_823E4810);
PPC_FUNC_IMPL(__imp__sub_823E4810) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82346ed0
	sub_82346ED0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4820"))) PPC_WEAK_FUNC(sub_823E4820);
PPC_FUNC_IMPL(__imp__sub_823E4820) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,116
	ctx.r3.s64 = ctx.r3.s64 + 116;
	// b 0x8233f9d8
	sub_8233F9D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4828"))) PPC_WEAK_FUNC(sub_823E4828);
PPC_FUNC_IMPL(__imp__sub_823E4828) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,148
	ctx.r3.s64 = ctx.r3.s64 + 148;
	// b 0x82638000
	sub_82638000(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4830"))) PPC_WEAK_FUNC(sub_823E4830);
PPC_FUNC_IMPL(__imp__sub_823E4830) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82343260
	sub_82343260(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4838"))) PPC_WEAK_FUNC(sub_823E4838);
PPC_FUNC_IMPL(__imp__sub_823E4838) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8233e068
	sub_8233E068(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4840"))) PPC_WEAK_FUNC(sub_823E4840);
PPC_FUNC_IMPL(__imp__sub_823E4840) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82361dc8
	sub_82361DC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4848"))) PPC_WEAK_FUNC(sub_823E4848);
PPC_FUNC_IMPL(__imp__sub_823E4848) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8237a640
	sub_8237A640(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4858"))) PPC_WEAK_FUNC(sub_823E4858);
PPC_FUNC_IMPL(__imp__sub_823E4858) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82378f68
	sub_82378F68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4860"))) PPC_WEAK_FUNC(sub_823E4860);
PPC_FUNC_IMPL(__imp__sub_823E4860) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82374a10
	sub_82374A10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4868"))) PPC_WEAK_FUNC(sub_823E4868);
PPC_FUNC_IMPL(__imp__sub_823E4868) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82372e38
	sub_82372E38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4878"))) PPC_WEAK_FUNC(sub_823E4878);
PPC_FUNC_IMPL(__imp__sub_823E4878) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82372560
	sub_82372560(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4888"))) PPC_WEAK_FUNC(sub_823E4888);
PPC_FUNC_IMPL(__imp__sub_823E4888) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8236f0f8
	sub_8236F0F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4898"))) PPC_WEAK_FUNC(sub_823E4898);
PPC_FUNC_IMPL(__imp__sub_823E4898) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8254fd30
	sub_8254FD30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E48A8"))) PPC_WEAK_FUNC(sub_823E48A8);
PPC_FUNC_IMPL(__imp__sub_823E48A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8236f000
	sub_8236F000(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E48B8"))) PPC_WEAK_FUNC(sub_823E48B8);
PPC_FUNC_IMPL(__imp__sub_823E48B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8236f0f8
	sub_8236F0F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E48C8"))) PPC_WEAK_FUNC(sub_823E48C8);
PPC_FUNC_IMPL(__imp__sub_823E48C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8236d158
	sub_8236D158(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E48D8"))) PPC_WEAK_FUNC(sub_823E48D8);
PPC_FUNC_IMPL(__imp__sub_823E48D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8236d060
	sub_8236D060(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E48E8"))) PPC_WEAK_FUNC(sub_823E48E8);
PPC_FUNC_IMPL(__imp__sub_823E48E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8236d158
	sub_8236D158(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E48F8"))) PPC_WEAK_FUNC(sub_823E48F8);
PPC_FUNC_IMPL(__imp__sub_823E48F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82369510
	sub_82369510(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4908"))) PPC_WEAK_FUNC(sub_823E4908);
PPC_FUNC_IMPL(__imp__sub_823E4908) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823694b0
	sub_823694B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4918"))) PPC_WEAK_FUNC(sub_823E4918);
PPC_FUNC_IMPL(__imp__sub_823E4918) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82368a80
	sub_82368A80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4928"))) PPC_WEAK_FUNC(sub_823E4928);
PPC_FUNC_IMPL(__imp__sub_823E4928) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82369510
	sub_82369510(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4938"))) PPC_WEAK_FUNC(sub_823E4938);
PPC_FUNC_IMPL(__imp__sub_823E4938) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82368f60
	sub_82368F60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4948"))) PPC_WEAK_FUNC(sub_823E4948);
PPC_FUNC_IMPL(__imp__sub_823E4948) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x823683d8
	sub_823683D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4950"))) PPC_WEAK_FUNC(sub_823E4950);
PPC_FUNC_IMPL(__imp__sub_823E4950) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x823675d0
	sub_823675D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4958"))) PPC_WEAK_FUNC(sub_823E4958);
PPC_FUNC_IMPL(__imp__sub_823E4958) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82366630
	sub_82366630(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4960"))) PPC_WEAK_FUNC(sub_823E4960);
PPC_FUNC_IMPL(__imp__sub_823E4960) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82362890
	sub_82362890(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4970"))) PPC_WEAK_FUNC(sub_823E4970);
PPC_FUNC_IMPL(__imp__sub_823E4970) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823622a0
	sub_823622A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4980"))) PPC_WEAK_FUNC(sub_823E4980);
PPC_FUNC_IMPL(__imp__sub_823E4980) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823604d8
	sub_823604D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4990"))) PPC_WEAK_FUNC(sub_823E4990);
PPC_FUNC_IMPL(__imp__sub_823E4990) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8235fe98
	sub_8235FE98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E49A0"))) PPC_WEAK_FUNC(sub_823E49A0);
PPC_FUNC_IMPL(__imp__sub_823E49A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8235fe98
	sub_8235FE98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E49B0"))) PPC_WEAK_FUNC(sub_823E49B0);
PPC_FUNC_IMPL(__imp__sub_823E49B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8235efa0
	sub_8235EFA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E49C0"))) PPC_WEAK_FUNC(sub_823E49C0);
PPC_FUNC_IMPL(__imp__sub_823E49C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8235efa0
	sub_8235EFA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E49D0"))) PPC_WEAK_FUNC(sub_823E49D0);
PPC_FUNC_IMPL(__imp__sub_823E49D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823582f0
	sub_823582F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E49E0"))) PPC_WEAK_FUNC(sub_823E49E0);
PPC_FUNC_IMPL(__imp__sub_823E49E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x825154f8
	sub_825154F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E49F0"))) PPC_WEAK_FUNC(sub_823E49F0);
PPC_FUNC_IMPL(__imp__sub_823E49F0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82357550
	sub_82357550(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E49F8"))) PPC_WEAK_FUNC(sub_823E49F8);
PPC_FUNC_IMPL(__imp__sub_823E49F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82357750
	sub_82357750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4A08"))) PPC_WEAK_FUNC(sub_823E4A08);
PPC_FUNC_IMPL(__imp__sub_823E4A08) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82355c88
	sub_82355C88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4A18"))) PPC_WEAK_FUNC(sub_823E4A18);
PPC_FUNC_IMPL(__imp__sub_823E4A18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823557f8
	sub_823557F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4A28"))) PPC_WEAK_FUNC(sub_823E4A28);
PPC_FUNC_IMPL(__imp__sub_823E4A28) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823556e8
	sub_823556E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4A38"))) PPC_WEAK_FUNC(sub_823E4A38);
PPC_FUNC_IMPL(__imp__sub_823E4A38) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8251bed0
	sub_8251BED0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4A48"))) PPC_WEAK_FUNC(sub_823E4A48);
PPC_FUNC_IMPL(__imp__sub_823E4A48) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82353c20
	sub_82353C20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4A58"))) PPC_WEAK_FUNC(sub_823E4A58);
PPC_FUNC_IMPL(__imp__sub_823E4A58) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x825537a8
	sub_825537A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4A68"))) PPC_WEAK_FUNC(sub_823E4A68);
PPC_FUNC_IMPL(__imp__sub_823E4A68) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82352198
	sub_82352198(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4A78"))) PPC_WEAK_FUNC(sub_823E4A78);
PPC_FUNC_IMPL(__imp__sub_823E4A78) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82351e10
	sub_82351E10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4A88"))) PPC_WEAK_FUNC(sub_823E4A88);
PPC_FUNC_IMPL(__imp__sub_823E4A88) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82351d00
	sub_82351D00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4A98"))) PPC_WEAK_FUNC(sub_823E4A98);
PPC_FUNC_IMPL(__imp__sub_823E4A98) {
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
	// b 0x824d6678
	sub_824D6678(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4AB8"))) PPC_WEAK_FUNC(sub_823E4AB8);
PPC_FUNC_IMPL(__imp__sub_823E4AB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8234b548
	sub_8234B548(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4AC8"))) PPC_WEAK_FUNC(sub_823E4AC8);
PPC_FUNC_IMPL(__imp__sub_823E4AC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8234ae90
	sub_8234AE90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4AD8"))) PPC_WEAK_FUNC(sub_823E4AD8);
PPC_FUNC_IMPL(__imp__sub_823E4AD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,132
	ctx.r3.s64 = ctx.r3.s64 + 132;
	// b 0x825b9620
	sub_825B9620(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4AE8"))) PPC_WEAK_FUNC(sub_823E4AE8);
PPC_FUNC_IMPL(__imp__sub_823E4AE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82348dd0
	sub_82348DD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4AF8"))) PPC_WEAK_FUNC(sub_823E4AF8);
PPC_FUNC_IMPL(__imp__sub_823E4AF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8258ee10
	sub_8258EE10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4B08"))) PPC_WEAK_FUNC(sub_823E4B08);
PPC_FUNC_IMPL(__imp__sub_823E4B08) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82348410
	sub_82348410(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4B18"))) PPC_WEAK_FUNC(sub_823E4B18);
PPC_FUNC_IMPL(__imp__sub_823E4B18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82347aa0
	sub_82347AA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4B28"))) PPC_WEAK_FUNC(sub_823E4B28);
PPC_FUNC_IMPL(__imp__sub_823E4B28) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823472c0
	sub_823472C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4B38"))) PPC_WEAK_FUNC(sub_823E4B38);
PPC_FUNC_IMPL(__imp__sub_823E4B38) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,148
	ctx.r3.s64 = ctx.r3.s64 + 148;
	// b 0x82636a90
	sub_82636A90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4B40"))) PPC_WEAK_FUNC(sub_823E4B40);
PPC_FUNC_IMPL(__imp__sub_823E4B40) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// b 0x8262c1c8
	sub_8262C1C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4B48"))) PPC_WEAK_FUNC(sub_823E4B48);
PPC_FUNC_IMPL(__imp__sub_823E4B48) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82341690
	sub_82341690(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4B50"))) PPC_WEAK_FUNC(sub_823E4B50);
PPC_FUNC_IMPL(__imp__sub_823E4B50) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,120
	ctx.r3.s64 = ctx.r3.s64 + 120;
	// b 0x8233f9d8
	sub_8233F9D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4B58"))) PPC_WEAK_FUNC(sub_823E4B58);
PPC_FUNC_IMPL(__imp__sub_823E4B58) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,116
	ctx.r3.s64 = ctx.r3.s64 + 116;
	// b 0x82627c88
	sub_82627C88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4B60"))) PPC_WEAK_FUNC(sub_823E4B60);
PPC_FUNC_IMPL(__imp__sub_823E4B60) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-20
	ctx.r3.s64 = ctx.r3.s64 + -20;
	// b 0x825e4198
	sub_825E4198(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4B68"))) PPC_WEAK_FUNC(sub_823E4B68);
PPC_FUNC_IMPL(__imp__sub_823E4B68) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82649758
	sub_82649758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4B78"))) PPC_WEAK_FUNC(sub_823E4B78);
PPC_FUNC_IMPL(__imp__sub_823E4B78) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82375e60
	sub_82375E60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4B80"))) PPC_WEAK_FUNC(sub_823E4B80);
PPC_FUNC_IMPL(__imp__sub_823E4B80) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82373a70
	sub_82373A70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4B90"))) PPC_WEAK_FUNC(sub_823E4B90);
PPC_FUNC_IMPL(__imp__sub_823E4B90) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82371bb0
	sub_82371BB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4BA0"))) PPC_WEAK_FUNC(sub_823E4BA0);
PPC_FUNC_IMPL(__imp__sub_823E4BA0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82370888
	sub_82370888(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4BA8"))) PPC_WEAK_FUNC(sub_823E4BA8);
PPC_FUNC_IMPL(__imp__sub_823E4BA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8236f630
	sub_8236F630(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4BB8"))) PPC_WEAK_FUNC(sub_823E4BB8);
PPC_FUNC_IMPL(__imp__sub_823E4BB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8236ed40
	sub_8236ED40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4BC8"))) PPC_WEAK_FUNC(sub_823E4BC8);
PPC_FUNC_IMPL(__imp__sub_823E4BC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8236d678
	sub_8236D678(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4BD8"))) PPC_WEAK_FUNC(sub_823E4BD8);
PPC_FUNC_IMPL(__imp__sub_823E4BD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8236a9b0
	sub_8236A9B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4BE8"))) PPC_WEAK_FUNC(sub_823E4BE8);
PPC_FUNC_IMPL(__imp__sub_823E4BE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82369070
	sub_82369070(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4BF8"))) PPC_WEAK_FUNC(sub_823E4BF8);
PPC_FUNC_IMPL(__imp__sub_823E4BF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82366bd8
	sub_82366BD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4C08"))) PPC_WEAK_FUNC(sub_823E4C08);
PPC_FUNC_IMPL(__imp__sub_823E4C08) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82366bd8
	sub_82366BD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4C18"))) PPC_WEAK_FUNC(sub_823E4C18);
PPC_FUNC_IMPL(__imp__sub_823E4C18) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82365ab8
	sub_82365AB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4C20"))) PPC_WEAK_FUNC(sub_823E4C20);
PPC_FUNC_IMPL(__imp__sub_823E4C20) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82531f28
	sub_82531F28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4C30"))) PPC_WEAK_FUNC(sub_823E4C30);
PPC_FUNC_IMPL(__imp__sub_823E4C30) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x825b5980
	sub_825B5980(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4C40"))) PPC_WEAK_FUNC(sub_823E4C40);
PPC_FUNC_IMPL(__imp__sub_823E4C40) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8235f530
	sub_8235F530(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4C50"))) PPC_WEAK_FUNC(sub_823E4C50);
PPC_FUNC_IMPL(__imp__sub_823E4C50) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8235d870
	sub_8235D870(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4C58"))) PPC_WEAK_FUNC(sub_823E4C58);
PPC_FUNC_IMPL(__imp__sub_823E4C58) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8235c808
	sub_8235C808(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4C68"))) PPC_WEAK_FUNC(sub_823E4C68);
PPC_FUNC_IMPL(__imp__sub_823E4C68) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8235b1e0
	sub_8235B1E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4C70"))) PPC_WEAK_FUNC(sub_823E4C70);
PPC_FUNC_IMPL(__imp__sub_823E4C70) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8235a8a0
	sub_8235A8A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4C80"))) PPC_WEAK_FUNC(sub_823E4C80);
PPC_FUNC_IMPL(__imp__sub_823E4C80) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82517680
	sub_82517680(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4C90"))) PPC_WEAK_FUNC(sub_823E4C90);
PPC_FUNC_IMPL(__imp__sub_823E4C90) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82358da8
	sub_82358DA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4CA0"))) PPC_WEAK_FUNC(sub_823E4CA0);
PPC_FUNC_IMPL(__imp__sub_823E4CA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82358858
	sub_82358858(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4CB0"))) PPC_WEAK_FUNC(sub_823E4CB0);
PPC_FUNC_IMPL(__imp__sub_823E4CB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82357d18
	sub_82357D18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4CC0"))) PPC_WEAK_FUNC(sub_823E4CC0);
PPC_FUNC_IMPL(__imp__sub_823E4CC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82356a40
	sub_82356A40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4CD0"))) PPC_WEAK_FUNC(sub_823E4CD0);
PPC_FUNC_IMPL(__imp__sub_823E4CD0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82356a40
	sub_82356A40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4CE0"))) PPC_WEAK_FUNC(sub_823E4CE0);
PPC_FUNC_IMPL(__imp__sub_823E4CE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8251d5f8
	sub_8251D5F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4CF0"))) PPC_WEAK_FUNC(sub_823E4CF0);
PPC_FUNC_IMPL(__imp__sub_823E4CF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82355cf8
	sub_82355CF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4D00"))) PPC_WEAK_FUNC(sub_823E4D00);
PPC_FUNC_IMPL(__imp__sub_823E4D00) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82355cf8
	sub_82355CF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4D10"))) PPC_WEAK_FUNC(sub_823E4D10);
PPC_FUNC_IMPL(__imp__sub_823E4D10) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x823540d8
	sub_823540D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4D20"))) PPC_WEAK_FUNC(sub_823E4D20);
PPC_FUNC_IMPL(__imp__sub_823E4D20) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8251b9a0
	sub_8251B9A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4D30"))) PPC_WEAK_FUNC(sub_823E4D30);
PPC_FUNC_IMPL(__imp__sub_823E4D30) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823540d8
	sub_823540D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4D40"))) PPC_WEAK_FUNC(sub_823E4D40);
PPC_FUNC_IMPL(__imp__sub_823E4D40) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823537c8
	sub_823537C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4D50"))) PPC_WEAK_FUNC(sub_823E4D50);
PPC_FUNC_IMPL(__imp__sub_823E4D50) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82353348
	sub_82353348(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4D60"))) PPC_WEAK_FUNC(sub_823E4D60);
PPC_FUNC_IMPL(__imp__sub_823E4D60) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823532e0
	sub_823532E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4D70"))) PPC_WEAK_FUNC(sub_823E4D70);
PPC_FUNC_IMPL(__imp__sub_823E4D70) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82353348
	sub_82353348(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4D80"))) PPC_WEAK_FUNC(sub_823E4D80);
PPC_FUNC_IMPL(__imp__sub_823E4D80) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823518a0
	sub_823518A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4D90"))) PPC_WEAK_FUNC(sub_823E4D90);
PPC_FUNC_IMPL(__imp__sub_823E4D90) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823515d0
	sub_823515D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4DA0"))) PPC_WEAK_FUNC(sub_823E4DA0);
PPC_FUNC_IMPL(__imp__sub_823E4DA0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8234ea78
	sub_8234EA78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4DA8"))) PPC_WEAK_FUNC(sub_823E4DA8);
PPC_FUNC_IMPL(__imp__sub_823E4DA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8234c578
	sub_8234C578(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4DB8"))) PPC_WEAK_FUNC(sub_823E4DB8);
PPC_FUNC_IMPL(__imp__sub_823E4DB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8234b558
	sub_8234B558(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4DC8"))) PPC_WEAK_FUNC(sub_823E4DC8);
PPC_FUNC_IMPL(__imp__sub_823E4DC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x8258ee10
	sub_8258EE10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4DD8"))) PPC_WEAK_FUNC(sub_823E4DD8);
PPC_FUNC_IMPL(__imp__sub_823E4DD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8234a5d0
	sub_8234A5D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4DE8"))) PPC_WEAK_FUNC(sub_823E4DE8);
PPC_FUNC_IMPL(__imp__sub_823E4DE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x823495b8
	sub_823495B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4DF8"))) PPC_WEAK_FUNC(sub_823E4DF8);
PPC_FUNC_IMPL(__imp__sub_823E4DF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823495b8
	sub_823495B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4E08"))) PPC_WEAK_FUNC(sub_823E4E08);
PPC_FUNC_IMPL(__imp__sub_823E4E08) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82348748
	sub_82348748(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4E18"))) PPC_WEAK_FUNC(sub_823E4E18);
PPC_FUNC_IMPL(__imp__sub_823E4E18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x825b93e0
	sub_825B93E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4E28"))) PPC_WEAK_FUNC(sub_823E4E28);
PPC_FUNC_IMPL(__imp__sub_823E4E28) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x825b8c00
	sub_825B8C00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4E38"))) PPC_WEAK_FUNC(sub_823E4E38);
PPC_FUNC_IMPL(__imp__sub_823E4E38) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82347ab0
	sub_82347AB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4E48"))) PPC_WEAK_FUNC(sub_823E4E48);
PPC_FUNC_IMPL(__imp__sub_823E4E48) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,148
	ctx.r3.s64 = ctx.r3.s64 + 148;
	// b 0x8263a300
	sub_8263A300(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4E50"))) PPC_WEAK_FUNC(sub_823E4E50);
PPC_FUNC_IMPL(__imp__sub_823E4E50) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,144
	ctx.r3.s64 = ctx.r3.s64 + 144;
	// b 0x82630018
	sub_82630018(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4E58"))) PPC_WEAK_FUNC(sub_823E4E58);
PPC_FUNC_IMPL(__imp__sub_823E4E58) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-52
	ctx.r3.s64 = ctx.r3.s64 + -52;
	// b 0x825e4198
	sub_825E4198(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4E60"))) PPC_WEAK_FUNC(sub_823E4E60);
PPC_FUNC_IMPL(__imp__sub_823E4E60) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x825ed9b0
	sub_825ED9B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4E68"))) PPC_WEAK_FUNC(sub_823E4E68);
PPC_FUNC_IMPL(__imp__sub_823E4E68) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8233d010
	sub_8233D010(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4E70"))) PPC_WEAK_FUNC(sub_823E4E70);
PPC_FUNC_IMPL(__imp__sub_823E4E70) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-20
	ctx.r3.s64 = ctx.r3.s64 + -20;
	// b 0x8233ad88
	sub_8233AD88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4E78"))) PPC_WEAK_FUNC(sub_823E4E78);
PPC_FUNC_IMPL(__imp__sub_823E4E78) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x825ad348
	sub_825AD348(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4E88"))) PPC_WEAK_FUNC(sub_823E4E88);
PPC_FUNC_IMPL(__imp__sub_823E4E88) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82379538
	sub_82379538(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4E90"))) PPC_WEAK_FUNC(sub_823E4E90);
PPC_FUNC_IMPL(__imp__sub_823E4E90) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x823728b8
	sub_823728B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4EA0"))) PPC_WEAK_FUNC(sub_823E4EA0);
PPC_FUNC_IMPL(__imp__sub_823E4EA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823728b8
	sub_823728B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4EB0"))) PPC_WEAK_FUNC(sub_823E4EB0);
PPC_FUNC_IMPL(__imp__sub_823E4EB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823724e8
	sub_823724E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4EC0"))) PPC_WEAK_FUNC(sub_823E4EC0);
PPC_FUNC_IMPL(__imp__sub_823E4EC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82372270
	sub_82372270(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4ED0"))) PPC_WEAK_FUNC(sub_823E4ED0);
PPC_FUNC_IMPL(__imp__sub_823E4ED0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82599958
	sub_82599958(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4EE0"))) PPC_WEAK_FUNC(sub_823E4EE0);
PPC_FUNC_IMPL(__imp__sub_823E4EE0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8236fee0
	sub_8236FEE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4EE8"))) PPC_WEAK_FUNC(sub_823E4EE8);
PPC_FUNC_IMPL(__imp__sub_823E4EE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8236e918
	sub_8236E918(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4EF8"))) PPC_WEAK_FUNC(sub_823E4EF8);
PPC_FUNC_IMPL(__imp__sub_823E4EF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8236e890
	sub_8236E890(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4F08"))) PPC_WEAK_FUNC(sub_823E4F08);
PPC_FUNC_IMPL(__imp__sub_823E4F08) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8236e918
	sub_8236E918(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4F18"))) PPC_WEAK_FUNC(sub_823E4F18);
PPC_FUNC_IMPL(__imp__sub_823E4F18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8236a5c8
	sub_8236A5C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4F28"))) PPC_WEAK_FUNC(sub_823E4F28);
PPC_FUNC_IMPL(__imp__sub_823E4F28) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8236a4b8
	sub_8236A4B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4F38"))) PPC_WEAK_FUNC(sub_823E4F38);
PPC_FUNC_IMPL(__imp__sub_823E4F38) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82543b50
	sub_82543B50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4F48"))) PPC_WEAK_FUNC(sub_823E4F48);
PPC_FUNC_IMPL(__imp__sub_823E4F48) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82368a68
	sub_82368A68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4F58"))) PPC_WEAK_FUNC(sub_823E4F58);
PPC_FUNC_IMPL(__imp__sub_823E4F58) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823687e8
	sub_823687E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4F68"))) PPC_WEAK_FUNC(sub_823E4F68);
PPC_FUNC_IMPL(__imp__sub_823E4F68) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82363e40
	sub_82363E40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4F78"))) PPC_WEAK_FUNC(sub_823E4F78);
PPC_FUNC_IMPL(__imp__sub_823E4F78) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82362378
	sub_82362378(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4F88"))) PPC_WEAK_FUNC(sub_823E4F88);
PPC_FUNC_IMPL(__imp__sub_823E4F88) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82362378
	sub_82362378(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4F98"))) PPC_WEAK_FUNC(sub_823E4F98);
PPC_FUNC_IMPL(__imp__sub_823E4F98) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x825b5400
	sub_825B5400(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4FA8"))) PPC_WEAK_FUNC(sub_823E4FA8);
PPC_FUNC_IMPL(__imp__sub_823E4FA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8235f828
	sub_8235F828(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4FB8"))) PPC_WEAK_FUNC(sub_823E4FB8);
PPC_FUNC_IMPL(__imp__sub_823E4FB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8235ac40
	sub_8235AC40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4FC8"))) PPC_WEAK_FUNC(sub_823E4FC8);
PPC_FUNC_IMPL(__imp__sub_823E4FC8) {
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
	// b 0x82514c28
	sub_82514C28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4FE8"))) PPC_WEAK_FUNC(sub_823E4FE8);
PPC_FUNC_IMPL(__imp__sub_823E4FE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8235ac40
	sub_8235AC40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E4FF8"))) PPC_WEAK_FUNC(sub_823E4FF8);
PPC_FUNC_IMPL(__imp__sub_823E4FF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82362e70
	sub_82362E70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5008"))) PPC_WEAK_FUNC(sub_823E5008);
PPC_FUNC_IMPL(__imp__sub_823E5008) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82357e08
	sub_82357E08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5018"))) PPC_WEAK_FUNC(sub_823E5018);
PPC_FUNC_IMPL(__imp__sub_823E5018) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82357e08
	sub_82357E08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5028"))) PPC_WEAK_FUNC(sub_823E5028);
PPC_FUNC_IMPL(__imp__sub_823E5028) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-400(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -400);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x823579a0
	sub_823579A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5038"))) PPC_WEAK_FUNC(sub_823E5038);
PPC_FUNC_IMPL(__imp__sub_823E5038) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x823579a0
	sub_823579A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5048"))) PPC_WEAK_FUNC(sub_823E5048);
PPC_FUNC_IMPL(__imp__sub_823E5048) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823579a0
	sub_823579A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5058"))) PPC_WEAK_FUNC(sub_823E5058);
PPC_FUNC_IMPL(__imp__sub_823E5058) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82356600
	sub_82356600(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5068"))) PPC_WEAK_FUNC(sub_823E5068);
PPC_FUNC_IMPL(__imp__sub_823E5068) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82355c90
	sub_82355C90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5078"))) PPC_WEAK_FUNC(sub_823E5078);
PPC_FUNC_IMPL(__imp__sub_823E5078) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82354048
	sub_82354048(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5088"))) PPC_WEAK_FUNC(sub_823E5088);
PPC_FUNC_IMPL(__imp__sub_823E5088) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82514358
	sub_82514358(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5098"))) PPC_WEAK_FUNC(sub_823E5098);
PPC_FUNC_IMPL(__imp__sub_823E5098) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x823538c0
	sub_823538C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E50A8"))) PPC_WEAK_FUNC(sub_823E50A8);
PPC_FUNC_IMPL(__imp__sub_823E50A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823538c0
	sub_823538C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E50B8"))) PPC_WEAK_FUNC(sub_823E50B8);
PPC_FUNC_IMPL(__imp__sub_823E50B8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8234d468
	sub_8234D468(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E50C0"))) PPC_WEAK_FUNC(sub_823E50C0);
PPC_FUNC_IMPL(__imp__sub_823E50C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8234a2f0
	sub_8234A2F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E50D0"))) PPC_WEAK_FUNC(sub_823E50D0);
PPC_FUNC_IMPL(__imp__sub_823E50D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8234a2f0
	sub_8234A2F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E50E0"))) PPC_WEAK_FUNC(sub_823E50E0);
PPC_FUNC_IMPL(__imp__sub_823E50E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82349988
	sub_82349988(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E50F0"))) PPC_WEAK_FUNC(sub_823E50F0);
PPC_FUNC_IMPL(__imp__sub_823E50F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82349988
	sub_82349988(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5100"))) PPC_WEAK_FUNC(sub_823E5100);
PPC_FUNC_IMPL(__imp__sub_823E5100) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82347720
	sub_82347720(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5110"))) PPC_WEAK_FUNC(sub_823E5110);
PPC_FUNC_IMPL(__imp__sub_823E5110) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,148
	ctx.r3.s64 = ctx.r3.s64 + 148;
	// b 0x82636ed8
	sub_82636ED8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5118"))) PPC_WEAK_FUNC(sub_823E5118);
PPC_FUNC_IMPL(__imp__sub_823E5118) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,144
	ctx.r3.s64 = ctx.r3.s64 + 144;
	// b 0x828b5948
	sub_828B5948(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5120"))) PPC_WEAK_FUNC(sub_823E5120);
PPC_FUNC_IMPL(__imp__sub_823E5120) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,124
	ctx.r3.s64 = ctx.r3.s64 + 124;
	// b 0x826281c0
	sub_826281C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5128"))) PPC_WEAK_FUNC(sub_823E5128);
PPC_FUNC_IMPL(__imp__sub_823E5128) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,124
	ctx.r3.s64 = ctx.r3.s64 + 124;
	// b 0x8262d478
	sub_8262D478(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5130"))) PPC_WEAK_FUNC(sub_823E5130);
PPC_FUNC_IMPL(__imp__sub_823E5130) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82340428
	sub_82340428(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5138"))) PPC_WEAK_FUNC(sub_823E5138);
PPC_FUNC_IMPL(__imp__sub_823E5138) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,116
	ctx.r3.s64 = ctx.r3.s64 + 116;
	// b 0x8233f978
	sub_8233F978(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5140"))) PPC_WEAK_FUNC(sub_823E5140);
PPC_FUNC_IMPL(__imp__sub_823E5140) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-52
	ctx.r3.s64 = ctx.r3.s64 + -52;
	// b 0x8233ad88
	sub_8233AD88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5148"))) PPC_WEAK_FUNC(sub_823E5148);
PPC_FUNC_IMPL(__imp__sub_823E5148) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8233a770
	sub_8233A770(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5150"))) PPC_WEAK_FUNC(sub_823E5150);
PPC_FUNC_IMPL(__imp__sub_823E5150) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8237af68
	sub_8237AF68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5158"))) PPC_WEAK_FUNC(sub_823E5158);
PPC_FUNC_IMPL(__imp__sub_823E5158) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82374a60
	sub_82374A60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5160"))) PPC_WEAK_FUNC(sub_823E5160);
PPC_FUNC_IMPL(__imp__sub_823E5160) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8259b648
	sub_8259B648(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5170"))) PPC_WEAK_FUNC(sub_823E5170);
PPC_FUNC_IMPL(__imp__sub_823E5170) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82374310
	sub_82374310(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5180"))) PPC_WEAK_FUNC(sub_823E5180);
PPC_FUNC_IMPL(__imp__sub_823E5180) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82373d60
	sub_82373D60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E5190"))) PPC_WEAK_FUNC(sub_823E5190);
PPC_FUNC_IMPL(__imp__sub_823E5190) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823724f8
	sub_823724F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E51A0"))) PPC_WEAK_FUNC(sub_823E51A0);
PPC_FUNC_IMPL(__imp__sub_823E51A0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x823715b0
	sub_823715B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E51A8"))) PPC_WEAK_FUNC(sub_823E51A8);
PPC_FUNC_IMPL(__imp__sub_823E51A8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82370e18
	sub_82370E18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E51B0"))) PPC_WEAK_FUNC(sub_823E51B0);
PPC_FUNC_IMPL(__imp__sub_823E51B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8236d690
	sub_8236D690(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E51C0"))) PPC_WEAK_FUNC(sub_823E51C0);
PPC_FUNC_IMPL(__imp__sub_823E51C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82543f18
	sub_82543F18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E51D0"))) PPC_WEAK_FUNC(sub_823E51D0);
PPC_FUNC_IMPL(__imp__sub_823E51D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82369430
	sub_82369430(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E51E0"))) PPC_WEAK_FUNC(sub_823E51E0);
PPC_FUNC_IMPL(__imp__sub_823E51E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82363690
	sub_82363690(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E51F0"))) PPC_WEAK_FUNC(sub_823E51F0);
PPC_FUNC_IMPL(__imp__sub_823E51F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82363690
	sub_82363690(ctx, base);
	return;
}

