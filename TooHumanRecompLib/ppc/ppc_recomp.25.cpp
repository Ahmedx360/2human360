#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_823E2820"))) PPC_WEAK_FUNC(sub_823E2820);
PPC_FUNC_IMPL(__imp__sub_823E2820) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8233e408
	sub_8233E408(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2828"))) PPC_WEAK_FUNC(sub_823E2828);
PPC_FUNC_IMPL(__imp__sub_823E2828) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8237aa80
	sub_8237AA80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2838"))) PPC_WEAK_FUNC(sub_823E2838);
PPC_FUNC_IMPL(__imp__sub_823E2838) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8237aa80
	sub_8237AA80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2848"))) PPC_WEAK_FUNC(sub_823E2848);
PPC_FUNC_IMPL(__imp__sub_823E2848) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82379e50
	sub_82379E50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2858"))) PPC_WEAK_FUNC(sub_823E2858);
PPC_FUNC_IMPL(__imp__sub_823E2858) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82374638
	sub_82374638(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2868"))) PPC_WEAK_FUNC(sub_823E2868);
PPC_FUNC_IMPL(__imp__sub_823E2868) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x823743e0
	sub_823743E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2878"))) PPC_WEAK_FUNC(sub_823E2878);
PPC_FUNC_IMPL(__imp__sub_823E2878) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82374380
	sub_82374380(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2888"))) PPC_WEAK_FUNC(sub_823E2888);
PPC_FUNC_IMPL(__imp__sub_823E2888) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823743e0
	sub_823743E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2898"))) PPC_WEAK_FUNC(sub_823E2898);
PPC_FUNC_IMPL(__imp__sub_823E2898) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8259b4a0
	sub_8259B4A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E28A8"))) PPC_WEAK_FUNC(sub_823E28A8);
PPC_FUNC_IMPL(__imp__sub_823E28A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82373ce8
	sub_82373CE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E28B8"))) PPC_WEAK_FUNC(sub_823E28B8);
PPC_FUNC_IMPL(__imp__sub_823E28B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82372568
	sub_82372568(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E28C8"))) PPC_WEAK_FUNC(sub_823E28C8);
PPC_FUNC_IMPL(__imp__sub_823E28C8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82370370
	sub_82370370(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E28D0"))) PPC_WEAK_FUNC(sub_823E28D0);
PPC_FUNC_IMPL(__imp__sub_823E28D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8236f550
	sub_8236F550(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E28E0"))) PPC_WEAK_FUNC(sub_823E28E0);
PPC_FUNC_IMPL(__imp__sub_823E28E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8236f550
	sub_8236F550(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E28F0"))) PPC_WEAK_FUNC(sub_823E28F0);
PPC_FUNC_IMPL(__imp__sub_823E28F0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8236b9b0
	sub_8236B9B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E28F8"))) PPC_WEAK_FUNC(sub_823E28F8);
PPC_FUNC_IMPL(__imp__sub_823E28F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82549d60
	sub_82549D60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2908"))) PPC_WEAK_FUNC(sub_823E2908);
PPC_FUNC_IMPL(__imp__sub_823E2908) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82543618
	sub_82543618(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2918"))) PPC_WEAK_FUNC(sub_823E2918);
PPC_FUNC_IMPL(__imp__sub_823E2918) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8250a028
	sub_8250A028(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2928"))) PPC_WEAK_FUNC(sub_823E2928);
PPC_FUNC_IMPL(__imp__sub_823E2928) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x823661f8
	sub_823661F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2930"))) PPC_WEAK_FUNC(sub_823E2930);
PPC_FUNC_IMPL(__imp__sub_823E2930) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82366090
	sub_82366090(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2938"))) PPC_WEAK_FUNC(sub_823E2938);
PPC_FUNC_IMPL(__imp__sub_823E2938) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82365528
	sub_82365528(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2940"))) PPC_WEAK_FUNC(sub_823E2940);
PPC_FUNC_IMPL(__imp__sub_823E2940) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82364e40
	sub_82364E40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2948"))) PPC_WEAK_FUNC(sub_823E2948);
PPC_FUNC_IMPL(__imp__sub_823E2948) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82363dd8
	sub_82363DD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2958"))) PPC_WEAK_FUNC(sub_823E2958);
PPC_FUNC_IMPL(__imp__sub_823E2958) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823635a0
	sub_823635A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2968"))) PPC_WEAK_FUNC(sub_823E2968);
PPC_FUNC_IMPL(__imp__sub_823E2968) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82360e30
	sub_82360E30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2970"))) PPC_WEAK_FUNC(sub_823E2970);
PPC_FUNC_IMPL(__imp__sub_823E2970) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,132
	ctx.r3.s64 = ctx.r3.s64 + 132;
	// b 0x824d1710
	sub_824D1710(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2978"))) PPC_WEAK_FUNC(sub_823E2978);
PPC_FUNC_IMPL(__imp__sub_823E2978) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8235ee60
	sub_8235EE60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2980"))) PPC_WEAK_FUNC(sub_823E2980);
PPC_FUNC_IMPL(__imp__sub_823E2980) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8235ea38
	sub_8235EA38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2988"))) PPC_WEAK_FUNC(sub_823E2988);
PPC_FUNC_IMPL(__imp__sub_823E2988) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8235c680
	sub_8235C680(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2998"))) PPC_WEAK_FUNC(sub_823E2998);
PPC_FUNC_IMPL(__imp__sub_823E2998) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8235c498
	sub_8235C498(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E29A8"))) PPC_WEAK_FUNC(sub_823E29A8);
PPC_FUNC_IMPL(__imp__sub_823E29A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8235c498
	sub_8235C498(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E29B8"))) PPC_WEAK_FUNC(sub_823E29B8);
PPC_FUNC_IMPL(__imp__sub_823E29B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8235bbf8
	sub_8235BBF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E29C8"))) PPC_WEAK_FUNC(sub_823E29C8);
PPC_FUNC_IMPL(__imp__sub_823E29C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82359440
	sub_82359440(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E29D8"))) PPC_WEAK_FUNC(sub_823E29D8);
PPC_FUNC_IMPL(__imp__sub_823E29D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x825179c0
	sub_825179C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E29E8"))) PPC_WEAK_FUNC(sub_823E29E8);
PPC_FUNC_IMPL(__imp__sub_823E29E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82359078
	sub_82359078(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E29F8"))) PPC_WEAK_FUNC(sub_823E29F8);
PPC_FUNC_IMPL(__imp__sub_823E29F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82359068
	sub_82359068(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2A08"))) PPC_WEAK_FUNC(sub_823E2A08);
PPC_FUNC_IMPL(__imp__sub_823E2A08) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82358d00
	sub_82358D00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2A18"))) PPC_WEAK_FUNC(sub_823E2A18);
PPC_FUNC_IMPL(__imp__sub_823E2A18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82358db8
	sub_82358DB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2A28"))) PPC_WEAK_FUNC(sub_823E2A28);
PPC_FUNC_IMPL(__imp__sub_823E2A28) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82358c08
	sub_82358C08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2A38"))) PPC_WEAK_FUNC(sub_823E2A38);
PPC_FUNC_IMPL(__imp__sub_823E2A38) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82358d00
	sub_82358D00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2A48"))) PPC_WEAK_FUNC(sub_823E2A48);
PPC_FUNC_IMPL(__imp__sub_823E2A48) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823580f8
	sub_823580F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2A58"))) PPC_WEAK_FUNC(sub_823E2A58);
PPC_FUNC_IMPL(__imp__sub_823E2A58) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823575b0
	sub_823575B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2A68"))) PPC_WEAK_FUNC(sub_823E2A68);
PPC_FUNC_IMPL(__imp__sub_823E2A68) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8251df70
	sub_8251DF70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2A78"))) PPC_WEAK_FUNC(sub_823E2A78);
PPC_FUNC_IMPL(__imp__sub_823E2A78) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82356000
	sub_82356000(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2A88"))) PPC_WEAK_FUNC(sub_823E2A88);
PPC_FUNC_IMPL(__imp__sub_823E2A88) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8251be18
	sub_8251BE18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2A98"))) PPC_WEAK_FUNC(sub_823E2A98);
PPC_FUNC_IMPL(__imp__sub_823E2A98) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82355350
	sub_82355350(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2AA8"))) PPC_WEAK_FUNC(sub_823E2AA8);
PPC_FUNC_IMPL(__imp__sub_823E2AA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82354828
	sub_82354828(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2AB8"))) PPC_WEAK_FUNC(sub_823E2AB8);
PPC_FUNC_IMPL(__imp__sub_823E2AB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,144
	ctx.r3.s64 = ctx.r3.s64 + 144;
	// b 0x8251bdb0
	sub_8251BDB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2AC8"))) PPC_WEAK_FUNC(sub_823E2AC8);
PPC_FUNC_IMPL(__imp__sub_823E2AC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82354828
	sub_82354828(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2AD8"))) PPC_WEAK_FUNC(sub_823E2AD8);
PPC_FUNC_IMPL(__imp__sub_823E2AD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82354170
	sub_82354170(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2AE8"))) PPC_WEAK_FUNC(sub_823E2AE8);
PPC_FUNC_IMPL(__imp__sub_823E2AE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82353fd0
	sub_82353FD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2AF8"))) PPC_WEAK_FUNC(sub_823E2AF8);
PPC_FUNC_IMPL(__imp__sub_823E2AF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823534c8
	sub_823534C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2B08"))) PPC_WEAK_FUNC(sub_823E2B08);
PPC_FUNC_IMPL(__imp__sub_823E2B08) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82513ad0
	sub_82513AD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2B18"))) PPC_WEAK_FUNC(sub_823E2B18);
PPC_FUNC_IMPL(__imp__sub_823E2B18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823fcdc8
	sub_823FCDC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2B28"))) PPC_WEAK_FUNC(sub_823E2B28);
PPC_FUNC_IMPL(__imp__sub_823E2B28) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823510a0
	sub_823510A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2B38"))) PPC_WEAK_FUNC(sub_823E2B38);
PPC_FUNC_IMPL(__imp__sub_823E2B38) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8234f7e8
	sub_8234F7E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2B48"))) PPC_WEAK_FUNC(sub_823E2B48);
PPC_FUNC_IMPL(__imp__sub_823E2B48) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8234f108
	sub_8234F108(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2B58"))) PPC_WEAK_FUNC(sub_823E2B58);
PPC_FUNC_IMPL(__imp__sub_823E2B58) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8234f108
	sub_8234F108(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2B68"))) PPC_WEAK_FUNC(sub_823E2B68);
PPC_FUNC_IMPL(__imp__sub_823E2B68) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8234cd08
	sub_8234CD08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2B78"))) PPC_WEAK_FUNC(sub_823E2B78);
PPC_FUNC_IMPL(__imp__sub_823E2B78) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8234c6f0
	sub_8234C6F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2B88"))) PPC_WEAK_FUNC(sub_823E2B88);
PPC_FUNC_IMPL(__imp__sub_823E2B88) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8234c1d8
	sub_8234C1D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2B98"))) PPC_WEAK_FUNC(sub_823E2B98);
PPC_FUNC_IMPL(__imp__sub_823E2B98) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8234b258
	sub_8234B258(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2BA8"))) PPC_WEAK_FUNC(sub_823E2BA8);
PPC_FUNC_IMPL(__imp__sub_823E2BA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,140
	ctx.r3.s64 = ctx.r3.s64 + 140;
	// b 0x8258f508
	sub_8258F508(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2BB8"))) PPC_WEAK_FUNC(sub_823E2BB8);
PPC_FUNC_IMPL(__imp__sub_823E2BB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82348a68
	sub_82348A68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2BC8"))) PPC_WEAK_FUNC(sub_823E2BC8);
PPC_FUNC_IMPL(__imp__sub_823E2BC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x825b9590
	sub_825B9590(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2BD8"))) PPC_WEAK_FUNC(sub_823E2BD8);
PPC_FUNC_IMPL(__imp__sub_823E2BD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82348418
	sub_82348418(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2BE8"))) PPC_WEAK_FUNC(sub_823E2BE8);
PPC_FUNC_IMPL(__imp__sub_823E2BE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x825b8b00
	sub_825B8B00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2BF8"))) PPC_WEAK_FUNC(sub_823E2BF8);
PPC_FUNC_IMPL(__imp__sub_823E2BF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x823470c0
	sub_823470C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2C08"))) PPC_WEAK_FUNC(sub_823E2C08);
PPC_FUNC_IMPL(__imp__sub_823E2C08) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823470c0
	sub_823470C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2C18"))) PPC_WEAK_FUNC(sub_823E2C18);
PPC_FUNC_IMPL(__imp__sub_823E2C18) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,148
	ctx.r3.s64 = ctx.r3.s64 + 148;
	// b 0x82637df0
	sub_82637DF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2C20"))) PPC_WEAK_FUNC(sub_823E2C20);
PPC_FUNC_IMPL(__imp__sub_823E2C20) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,144
	ctx.r3.s64 = ctx.r3.s64 + 144;
	// b 0x82627a08
	sub_82627A08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2C28"))) PPC_WEAK_FUNC(sub_823E2C28);
PPC_FUNC_IMPL(__imp__sub_823E2C28) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,144
	ctx.r3.s64 = ctx.r3.s64 + 144;
	// b 0x82632d00
	sub_82632D00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2C30"))) PPC_WEAK_FUNC(sub_823E2C30);
PPC_FUNC_IMPL(__imp__sub_823E2C30) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x823437d0
	sub_823437D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2C38"))) PPC_WEAK_FUNC(sub_823E2C38);
PPC_FUNC_IMPL(__imp__sub_823E2C38) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// b 0x8263ad30
	sub_8263AD30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2C40"))) PPC_WEAK_FUNC(sub_823E2C40);
PPC_FUNC_IMPL(__imp__sub_823E2C40) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,124
	ctx.r3.s64 = ctx.r3.s64 + 124;
	// b 0x826262b8
	sub_826262B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2C48"))) PPC_WEAK_FUNC(sub_823E2C48);
PPC_FUNC_IMPL(__imp__sub_823E2C48) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8233c490
	sub_8233C490(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2C50"))) PPC_WEAK_FUNC(sub_823E2C50);
PPC_FUNC_IMPL(__imp__sub_823E2C50) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8233ad88
	sub_8233AD88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2C58"))) PPC_WEAK_FUNC(sub_823E2C58);
PPC_FUNC_IMPL(__imp__sub_823E2C58) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x82593c50
	sub_82593C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2C60"))) PPC_WEAK_FUNC(sub_823E2C60);
PPC_FUNC_IMPL(__imp__sub_823E2C60) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8236fda0
	sub_8236FDA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2C68"))) PPC_WEAK_FUNC(sub_823E2C68);
PPC_FUNC_IMPL(__imp__sub_823E2C68) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8237b1d8
	sub_8237B1D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2C70"))) PPC_WEAK_FUNC(sub_823E2C70);
PPC_FUNC_IMPL(__imp__sub_823E2C70) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8237a738
	sub_8237A738(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2C80"))) PPC_WEAK_FUNC(sub_823E2C80);
PPC_FUNC_IMPL(__imp__sub_823E2C80) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8237a738
	sub_8237A738(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2C90"))) PPC_WEAK_FUNC(sub_823E2C90);
PPC_FUNC_IMPL(__imp__sub_823E2C90) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x825ad410
	sub_825AD410(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2CA0"))) PPC_WEAK_FUNC(sub_823E2CA0);
PPC_FUNC_IMPL(__imp__sub_823E2CA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82373a78
	sub_82373A78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2CB0"))) PPC_WEAK_FUNC(sub_823E2CB0);
PPC_FUNC_IMPL(__imp__sub_823E2CB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82373770
	sub_82373770(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2CC0"))) PPC_WEAK_FUNC(sub_823E2CC0);
PPC_FUNC_IMPL(__imp__sub_823E2CC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82373770
	sub_82373770(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2CD0"))) PPC_WEAK_FUNC(sub_823E2CD0);
PPC_FUNC_IMPL(__imp__sub_823E2CD0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82373480
	sub_82373480(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2CE0"))) PPC_WEAK_FUNC(sub_823E2CE0);
PPC_FUNC_IMPL(__imp__sub_823E2CE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82373480
	sub_82373480(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2CF0"))) PPC_WEAK_FUNC(sub_823E2CF0);
PPC_FUNC_IMPL(__imp__sub_823E2CF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823730a8
	sub_823730A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2D00"))) PPC_WEAK_FUNC(sub_823E2D00);
PPC_FUNC_IMPL(__imp__sub_823E2D00) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82599cc0
	sub_82599CC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2D10"))) PPC_WEAK_FUNC(sub_823E2D10);
PPC_FUNC_IMPL(__imp__sub_823E2D10) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8236f4c0
	sub_8236F4C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2D20"))) PPC_WEAK_FUNC(sub_823E2D20);
PPC_FUNC_IMPL(__imp__sub_823E2D20) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8236e818
	sub_8236E818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2D30"))) PPC_WEAK_FUNC(sub_823E2D30);
PPC_FUNC_IMPL(__imp__sub_823E2D30) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8236af40
	sub_8236AF40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2D40"))) PPC_WEAK_FUNC(sub_823E2D40);
PPC_FUNC_IMPL(__imp__sub_823E2D40) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8236af40
	sub_8236AF40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2D50"))) PPC_WEAK_FUNC(sub_823E2D50);
PPC_FUNC_IMPL(__imp__sub_823E2D50) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82549eb8
	sub_82549EB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2D60"))) PPC_WEAK_FUNC(sub_823E2D60);
PPC_FUNC_IMPL(__imp__sub_823E2D60) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82367fa0
	sub_82367FA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2D68"))) PPC_WEAK_FUNC(sub_823E2D68);
PPC_FUNC_IMPL(__imp__sub_823E2D68) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82366b70
	sub_82366B70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2D78"))) PPC_WEAK_FUNC(sub_823E2D78);
PPC_FUNC_IMPL(__imp__sub_823E2D78) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82362d20
	sub_82362D20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2D88"))) PPC_WEAK_FUNC(sub_823E2D88);
PPC_FUNC_IMPL(__imp__sub_823E2D88) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82362650
	sub_82362650(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2D90"))) PPC_WEAK_FUNC(sub_823E2D90);
PPC_FUNC_IMPL(__imp__sub_823E2D90) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82361868
	sub_82361868(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2D98"))) PPC_WEAK_FUNC(sub_823E2D98);
PPC_FUNC_IMPL(__imp__sub_823E2D98) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x82511de0
	sub_82511DE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2DA0"))) PPC_WEAK_FUNC(sub_823E2DA0);
PPC_FUNC_IMPL(__imp__sub_823E2DA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8235c6f8
	sub_8235C6F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2DB0"))) PPC_WEAK_FUNC(sub_823E2DB0);
PPC_FUNC_IMPL(__imp__sub_823E2DB0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8235b420
	sub_8235B420(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2DB8"))) PPC_WEAK_FUNC(sub_823E2DB8);
PPC_FUNC_IMPL(__imp__sub_823E2DB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82523db8
	sub_82523DB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2DC8"))) PPC_WEAK_FUNC(sub_823E2DC8);
PPC_FUNC_IMPL(__imp__sub_823E2DC8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8235a118
	sub_8235A118(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2DD0"))) PPC_WEAK_FUNC(sub_823E2DD0);
PPC_FUNC_IMPL(__imp__sub_823E2DD0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82359df8
	sub_82359DF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2DD8"))) PPC_WEAK_FUNC(sub_823E2DD8);
PPC_FUNC_IMPL(__imp__sub_823E2DD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x825151c8
	sub_825151C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2DE8"))) PPC_WEAK_FUNC(sub_823E2DE8);
PPC_FUNC_IMPL(__imp__sub_823E2DE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82357ac8
	sub_82357AC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2DF8"))) PPC_WEAK_FUNC(sub_823E2DF8);
PPC_FUNC_IMPL(__imp__sub_823E2DF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82357ac8
	sub_82357AC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2E08"))) PPC_WEAK_FUNC(sub_823E2E08);
PPC_FUNC_IMPL(__imp__sub_823E2E08) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82356948
	sub_82356948(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2E18"))) PPC_WEAK_FUNC(sub_823E2E18);
PPC_FUNC_IMPL(__imp__sub_823E2E18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82356610
	sub_82356610(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2E28"))) PPC_WEAK_FUNC(sub_823E2E28);
PPC_FUNC_IMPL(__imp__sub_823E2E28) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82355670
	sub_82355670(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2E38"))) PPC_WEAK_FUNC(sub_823E2E38);
PPC_FUNC_IMPL(__imp__sub_823E2E38) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x823553b8
	sub_823553B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2E48"))) PPC_WEAK_FUNC(sub_823E2E48);
PPC_FUNC_IMPL(__imp__sub_823E2E48) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823553b8
	sub_823553B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2E58"))) PPC_WEAK_FUNC(sub_823E2E58);
PPC_FUNC_IMPL(__imp__sub_823E2E58) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82354c68
	sub_82354C68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2E68"))) PPC_WEAK_FUNC(sub_823E2E68);
PPC_FUNC_IMPL(__imp__sub_823E2E68) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823547c8
	sub_823547C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2E78"))) PPC_WEAK_FUNC(sub_823E2E78);
PPC_FUNC_IMPL(__imp__sub_823E2E78) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82514148
	sub_82514148(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2E88"))) PPC_WEAK_FUNC(sub_823E2E88);
PPC_FUNC_IMPL(__imp__sub_823E2E88) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82513fe8
	sub_82513FE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2E98"))) PPC_WEAK_FUNC(sub_823E2E98);
PPC_FUNC_IMPL(__imp__sub_823E2E98) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82352120
	sub_82352120(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2EA8"))) PPC_WEAK_FUNC(sub_823E2EA8);
PPC_FUNC_IMPL(__imp__sub_823E2EA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82351c88
	sub_82351C88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2EB8"))) PPC_WEAK_FUNC(sub_823E2EB8);
PPC_FUNC_IMPL(__imp__sub_823E2EB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x825b1490
	sub_825B1490(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2EC8"))) PPC_WEAK_FUNC(sub_823E2EC8);
PPC_FUNC_IMPL(__imp__sub_823E2EC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8234f348
	sub_8234F348(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2ED8"))) PPC_WEAK_FUNC(sub_823E2ED8);
PPC_FUNC_IMPL(__imp__sub_823E2ED8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// b 0x824d2390
	sub_824D2390(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2EE0"))) PPC_WEAK_FUNC(sub_823E2EE0);
PPC_FUNC_IMPL(__imp__sub_823E2EE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x8258e890
	sub_8258E890(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2EF0"))) PPC_WEAK_FUNC(sub_823E2EF0);
PPC_FUNC_IMPL(__imp__sub_823E2EF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8258fc48
	sub_8258FC48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2F00"))) PPC_WEAK_FUNC(sub_823E2F00);
PPC_FUNC_IMPL(__imp__sub_823E2F00) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82348ee0
	sub_82348EE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2F10"))) PPC_WEAK_FUNC(sub_823E2F10);
PPC_FUNC_IMPL(__imp__sub_823E2F10) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82348e58
	sub_82348E58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2F20"))) PPC_WEAK_FUNC(sub_823E2F20);
PPC_FUNC_IMPL(__imp__sub_823E2F20) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82348ee0
	sub_82348EE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2F30"))) PPC_WEAK_FUNC(sub_823E2F30);
PPC_FUNC_IMPL(__imp__sub_823E2F30) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x825ba938
	sub_825BA938(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2F40"))) PPC_WEAK_FUNC(sub_823E2F40);
PPC_FUNC_IMPL(__imp__sub_823E2F40) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,116
	ctx.r3.s64 = ctx.r3.s64 + 116;
	// b 0x8233f9a0
	sub_8233F9A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2F48"))) PPC_WEAK_FUNC(sub_823E2F48);
PPC_FUNC_IMPL(__imp__sub_823E2F48) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82344de8
	sub_82344DE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2F50"))) PPC_WEAK_FUNC(sub_823E2F50);
PPC_FUNC_IMPL(__imp__sub_823E2F50) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,148
	ctx.r3.s64 = ctx.r3.s64 + 148;
	// b 0x82637bf0
	sub_82637BF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2F58"))) PPC_WEAK_FUNC(sub_823E2F58);
PPC_FUNC_IMPL(__imp__sub_823E2F58) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,132
	ctx.r3.s64 = ctx.r3.s64 + 132;
	// b 0x8262cbe8
	sub_8262CBE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2F60"))) PPC_WEAK_FUNC(sub_823E2F60);
PPC_FUNC_IMPL(__imp__sub_823E2F60) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,148
	ctx.r3.s64 = ctx.r3.s64 + 148;
	// b 0x826378f0
	sub_826378F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2F68"))) PPC_WEAK_FUNC(sub_823E2F68);
PPC_FUNC_IMPL(__imp__sub_823E2F68) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,124
	ctx.r3.s64 = ctx.r3.s64 + 124;
	// b 0x82628208
	sub_82628208(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2F70"))) PPC_WEAK_FUNC(sub_823E2F70);
PPC_FUNC_IMPL(__imp__sub_823E2F70) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,124
	ctx.r3.s64 = ctx.r3.s64 + 124;
	// b 0x8262a658
	sub_8262A658(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2F78"))) PPC_WEAK_FUNC(sub_823E2F78);
PPC_FUNC_IMPL(__imp__sub_823E2F78) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8233d9a0
	sub_8233D9A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2F80"))) PPC_WEAK_FUNC(sub_823E2F80);
PPC_FUNC_IMPL(__imp__sub_823E2F80) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x825ad190
	sub_825AD190(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2F90"))) PPC_WEAK_FUNC(sub_823E2F90);
PPC_FUNC_IMPL(__imp__sub_823E2F90) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82374708
	sub_82374708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2FA0"))) PPC_WEAK_FUNC(sub_823E2FA0);
PPC_FUNC_IMPL(__imp__sub_823E2FA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82374708
	sub_82374708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2FB0"))) PPC_WEAK_FUNC(sub_823E2FB0);
PPC_FUNC_IMPL(__imp__sub_823E2FB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82373690
	sub_82373690(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2FC0"))) PPC_WEAK_FUNC(sub_823E2FC0);
PPC_FUNC_IMPL(__imp__sub_823E2FC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82373398
	sub_82373398(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2FD0"))) PPC_WEAK_FUNC(sub_823E2FD0);
PPC_FUNC_IMPL(__imp__sub_823E2FD0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823730b8
	sub_823730B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2FE0"))) PPC_WEAK_FUNC(sub_823E2FE0);
PPC_FUNC_IMPL(__imp__sub_823E2FE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82372278
	sub_82372278(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2FF0"))) PPC_WEAK_FUNC(sub_823E2FF0);
PPC_FUNC_IMPL(__imp__sub_823E2FF0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82370998
	sub_82370998(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E2FF8"))) PPC_WEAK_FUNC(sub_823E2FF8);
PPC_FUNC_IMPL(__imp__sub_823E2FF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8255ce00
	sub_8255CE00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E3008"))) PPC_WEAK_FUNC(sub_823E3008);
PPC_FUNC_IMPL(__imp__sub_823E3008) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8236d538
	sub_8236D538(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E3018"))) PPC_WEAK_FUNC(sub_823E3018);
PPC_FUNC_IMPL(__imp__sub_823E3018) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8236cdc8
	sub_8236CDC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E3028"))) PPC_WEAK_FUNC(sub_823E3028);
PPC_FUNC_IMPL(__imp__sub_823E3028) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8236ae60
	sub_8236AE60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E3038"))) PPC_WEAK_FUNC(sub_823E3038);
PPC_FUNC_IMPL(__imp__sub_823E3038) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82364b90
	sub_82364B90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E3040"))) PPC_WEAK_FUNC(sub_823E3040);
PPC_FUNC_IMPL(__imp__sub_823E3040) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8235f830
	sub_8235F830(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E3050"))) PPC_WEAK_FUNC(sub_823E3050);
PPC_FUNC_IMPL(__imp__sub_823E3050) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8235e778
	sub_8235E778(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E3058"))) PPC_WEAK_FUNC(sub_823E3058);
PPC_FUNC_IMPL(__imp__sub_823E3058) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8235e4c0
	sub_8235E4C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E3060"))) PPC_WEAK_FUNC(sub_823E3060);
PPC_FUNC_IMPL(__imp__sub_823E3060) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8235e208
	sub_8235E208(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E3068"))) PPC_WEAK_FUNC(sub_823E3068);
PPC_FUNC_IMPL(__imp__sub_823E3068) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8235d5b0
	sub_8235D5B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E3070"))) PPC_WEAK_FUNC(sub_823E3070);
PPC_FUNC_IMPL(__imp__sub_823E3070) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8235d440
	sub_8235D440(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E3078"))) PPC_WEAK_FUNC(sub_823E3078);
PPC_FUNC_IMPL(__imp__sub_823E3078) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8235b9a8
	sub_8235B9A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E3088"))) PPC_WEAK_FUNC(sub_823E3088);
PPC_FUNC_IMPL(__imp__sub_823E3088) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8235a890
	sub_8235A890(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E3098"))) PPC_WEAK_FUNC(sub_823E3098);
PPC_FUNC_IMPL(__imp__sub_823E3098) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8235a820
	sub_8235A820(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E30A0"))) PPC_WEAK_FUNC(sub_823E30A0);
PPC_FUNC_IMPL(__imp__sub_823E30A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823579f0
	sub_823579F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E30B0"))) PPC_WEAK_FUNC(sub_823E30B0);
PPC_FUNC_IMPL(__imp__sub_823E30B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82514c28
	sub_82514C28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E30C0"))) PPC_WEAK_FUNC(sub_823E30C0);
PPC_FUNC_IMPL(__imp__sub_823E30C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82355358
	sub_82355358(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E30D0"))) PPC_WEAK_FUNC(sub_823E30D0);
PPC_FUNC_IMPL(__imp__sub_823E30D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82353590
	sub_82353590(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E30E0"))) PPC_WEAK_FUNC(sub_823E30E0);
PPC_FUNC_IMPL(__imp__sub_823E30E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82353590
	sub_82353590(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E30F0"))) PPC_WEAK_FUNC(sub_823E30F0);
PPC_FUNC_IMPL(__imp__sub_823E30F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82351550
	sub_82351550(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E3100"))) PPC_WEAK_FUNC(sub_823E3100);
PPC_FUNC_IMPL(__imp__sub_823E3100) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82351168
	sub_82351168(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E3110"))) PPC_WEAK_FUNC(sub_823E3110);
PPC_FUNC_IMPL(__imp__sub_823E3110) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82351168
	sub_82351168(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E3120"))) PPC_WEAK_FUNC(sub_823E3120);
PPC_FUNC_IMPL(__imp__sub_823E3120) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82350558
	sub_82350558(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E3130"))) PPC_WEAK_FUNC(sub_823E3130);
PPC_FUNC_IMPL(__imp__sub_823E3130) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8234f7f8
	sub_8234F7F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E3140"))) PPC_WEAK_FUNC(sub_823E3140);
PPC_FUNC_IMPL(__imp__sub_823E3140) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8234c790
	sub_8234C790(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E3150"))) PPC_WEAK_FUNC(sub_823E3150);
PPC_FUNC_IMPL(__imp__sub_823E3150) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8234a8d0
	sub_8234A8D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E3160"))) PPC_WEAK_FUNC(sub_823E3160);
PPC_FUNC_IMPL(__imp__sub_823E3160) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82591b38
	sub_82591B38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E3170"))) PPC_WEAK_FUNC(sub_823E3170);
PPC_FUNC_IMPL(__imp__sub_823E3170) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82591ab0
	sub_82591AB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E3180"))) PPC_WEAK_FUNC(sub_823E3180);
PPC_FUNC_IMPL(__imp__sub_823E3180) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8234a288
	sub_8234A288(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E3190"))) PPC_WEAK_FUNC(sub_823E3190);
PPC_FUNC_IMPL(__imp__sub_823E3190) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82348100
	sub_82348100(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E31A0"))) PPC_WEAK_FUNC(sub_823E31A0);
PPC_FUNC_IMPL(__imp__sub_823E31A0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,148
	ctx.r3.s64 = ctx.r3.s64 + 148;
	// b 0x82639c18
	sub_82639C18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E31A8"))) PPC_WEAK_FUNC(sub_823E31A8);
PPC_FUNC_IMPL(__imp__sub_823E31A8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,144
	ctx.r3.s64 = ctx.r3.s64 + 144;
	// b 0x826311d0
	sub_826311D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E31B0"))) PPC_WEAK_FUNC(sub_823E31B0);
PPC_FUNC_IMPL(__imp__sub_823E31B0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,148
	ctx.r3.s64 = ctx.r3.s64 + 148;
	// b 0x82635eb0
	sub_82635EB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E31B8"))) PPC_WEAK_FUNC(sub_823E31B8);
PPC_FUNC_IMPL(__imp__sub_823E31B8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8233f8f8
	sub_8233F8F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E31C0"))) PPC_WEAK_FUNC(sub_823E31C0);
PPC_FUNC_IMPL(__imp__sub_823E31C0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82352b10
	sub_82352B10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E31C8"))) PPC_WEAK_FUNC(sub_823E31C8);
PPC_FUNC_IMPL(__imp__sub_823E31C8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x8234d338
	sub_8234D338(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E31D0"))) PPC_WEAK_FUNC(sub_823E31D0);
PPC_FUNC_IMPL(__imp__sub_823E31D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82649648
	sub_82649648(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E31E0"))) PPC_WEAK_FUNC(sub_823E31E0);
PPC_FUNC_IMPL(__imp__sub_823E31E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82374628
	sub_82374628(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E31F0"))) PPC_WEAK_FUNC(sub_823E31F0);
PPC_FUNC_IMPL(__imp__sub_823E31F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82374300
	sub_82374300(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E3200"))) PPC_WEAK_FUNC(sub_823E3200);
PPC_FUNC_IMPL(__imp__sub_823E3200) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82373fe8
	sub_82373FE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E3210"))) PPC_WEAK_FUNC(sub_823E3210);
PPC_FUNC_IMPL(__imp__sub_823E3210) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8236eb98
	sub_8236EB98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E3220"))) PPC_WEAK_FUNC(sub_823E3220);
PPC_FUNC_IMPL(__imp__sub_823E3220) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8236b5b8
	sub_8236B5B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E3228"))) PPC_WEAK_FUNC(sub_823E3228);
PPC_FUNC_IMPL(__imp__sub_823E3228) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82549e70
	sub_82549E70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E3238"))) PPC_WEAK_FUNC(sub_823E3238);
PPC_FUNC_IMPL(__imp__sub_823E3238) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8236a438
	sub_8236A438(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E3248"))) PPC_WEAK_FUNC(sub_823E3248);
PPC_FUNC_IMPL(__imp__sub_823E3248) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8236a100
	sub_8236A100(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E3258"))) PPC_WEAK_FUNC(sub_823E3258);
PPC_FUNC_IMPL(__imp__sub_823E3258) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82368a88
	sub_82368A88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E3268"))) PPC_WEAK_FUNC(sub_823E3268);
PPC_FUNC_IMPL(__imp__sub_823E3268) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82368700
	sub_82368700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E3270"))) PPC_WEAK_FUNC(sub_823E3270);
PPC_FUNC_IMPL(__imp__sub_823E3270) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82367118
	sub_82367118(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E3278"))) PPC_WEAK_FUNC(sub_823E3278);
PPC_FUNC_IMPL(__imp__sub_823E3278) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82365b18
	sub_82365B18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E3280"))) PPC_WEAK_FUNC(sub_823E3280);
PPC_FUNC_IMPL(__imp__sub_823E3280) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82362308
	sub_82362308(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E3290"))) PPC_WEAK_FUNC(sub_823E3290);
PPC_FUNC_IMPL(__imp__sub_823E3290) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82362cb8
	sub_82362CB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E32A0"))) PPC_WEAK_FUNC(sub_823E32A0);
PPC_FUNC_IMPL(__imp__sub_823E32A0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82361650
	sub_82361650(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E32A8"))) PPC_WEAK_FUNC(sub_823E32A8);
PPC_FUNC_IMPL(__imp__sub_823E32A8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82361260
	sub_82361260(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E32B0"))) PPC_WEAK_FUNC(sub_823E32B0);
PPC_FUNC_IMPL(__imp__sub_823E32B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x825b5500
	sub_825B5500(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E32C0"))) PPC_WEAK_FUNC(sub_823E32C0);
PPC_FUNC_IMPL(__imp__sub_823E32C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8235f230
	sub_8235F230(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E32D0"))) PPC_WEAK_FUNC(sub_823E32D0);
PPC_FUNC_IMPL(__imp__sub_823E32D0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8235eba0
	sub_8235EBA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E32D8"))) PPC_WEAK_FUNC(sub_823E32D8);
PPC_FUNC_IMPL(__imp__sub_823E32D8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8235e360
	sub_8235E360(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E32E0"))) PPC_WEAK_FUNC(sub_823E32E0);
PPC_FUNC_IMPL(__imp__sub_823E32E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8235c820
	sub_8235C820(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E32F0"))) PPC_WEAK_FUNC(sub_823E32F0);
PPC_FUNC_IMPL(__imp__sub_823E32F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8235af40
	sub_8235AF40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E3300"))) PPC_WEAK_FUNC(sub_823E3300);
PPC_FUNC_IMPL(__imp__sub_823E3300) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8235af40
	sub_8235AF40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E3310"))) PPC_WEAK_FUNC(sub_823E3310);
PPC_FUNC_IMPL(__imp__sub_823E3310) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8235abd0
	sub_8235ABD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E3320"))) PPC_WEAK_FUNC(sub_823E3320);
PPC_FUNC_IMPL(__imp__sub_823E3320) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82357ea0
	sub_82357EA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E3330"))) PPC_WEAK_FUNC(sub_823E3330);
PPC_FUNC_IMPL(__imp__sub_823E3330) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82354758
	sub_82354758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E3340"))) PPC_WEAK_FUNC(sub_823E3340);
PPC_FUNC_IMPL(__imp__sub_823E3340) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82354748
	sub_82354748(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E3350"))) PPC_WEAK_FUNC(sub_823E3350);
PPC_FUNC_IMPL(__imp__sub_823E3350) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823525d0
	sub_823525D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E3360"))) PPC_WEAK_FUNC(sub_823E3360);
PPC_FUNC_IMPL(__imp__sub_823E3360) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82552d60
	sub_82552D60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E3370"))) PPC_WEAK_FUNC(sub_823E3370);
PPC_FUNC_IMPL(__imp__sub_823E3370) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82501918
	sub_82501918(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E3380"))) PPC_WEAK_FUNC(sub_823E3380);
PPC_FUNC_IMPL(__imp__sub_823E3380) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x825018b0
	sub_825018B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E3390"))) PPC_WEAK_FUNC(sub_823E3390);
PPC_FUNC_IMPL(__imp__sub_823E3390) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82351290
	sub_82351290(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E33A0"))) PPC_WEAK_FUNC(sub_823E33A0);
PPC_FUNC_IMPL(__imp__sub_823E33A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8234bcc8
	sub_8234BCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E33B0"))) PPC_WEAK_FUNC(sub_823E33B0);
PPC_FUNC_IMPL(__imp__sub_823E33B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8234b040
	sub_8234B040(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E33C0"))) PPC_WEAK_FUNC(sub_823E33C0);
PPC_FUNC_IMPL(__imp__sub_823E33C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82349ee8
	sub_82349EE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E33D0"))) PPC_WEAK_FUNC(sub_823E33D0);
PPC_FUNC_IMPL(__imp__sub_823E33D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823494e0
	sub_823494E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E33E0"))) PPC_WEAK_FUNC(sub_823E33E0);
PPC_FUNC_IMPL(__imp__sub_823E33E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82349198
	sub_82349198(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E33F0"))) PPC_WEAK_FUNC(sub_823E33F0);
PPC_FUNC_IMPL(__imp__sub_823E33F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8234b8c0
	sub_8234B8C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E3400"))) PPC_WEAK_FUNC(sub_823E3400);
PPC_FUNC_IMPL(__imp__sub_823E3400) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82345f00
	sub_82345F00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E3408"))) PPC_WEAK_FUNC(sub_823E3408);
PPC_FUNC_IMPL(__imp__sub_823E3408) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,116
	ctx.r3.s64 = ctx.r3.s64 + 116;
	// b 0x8233f9b0
	sub_8233F9B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E3410"))) PPC_WEAK_FUNC(sub_823E3410);
PPC_FUNC_IMPL(__imp__sub_823E3410) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,144
	ctx.r3.s64 = ctx.r3.s64 + 144;
	// b 0x8262ef58
	sub_8262EF58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E3418"))) PPC_WEAK_FUNC(sub_823E3418);
PPC_FUNC_IMPL(__imp__sub_823E3418) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82343c48
	sub_82343C48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E3420"))) PPC_WEAK_FUNC(sub_823E3420);
PPC_FUNC_IMPL(__imp__sub_823E3420) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,144
	ctx.r3.s64 = ctx.r3.s64 + 144;
	// b 0x826353d0
	sub_826353D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E3428"))) PPC_WEAK_FUNC(sub_823E3428);
PPC_FUNC_IMPL(__imp__sub_823E3428) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,144
	ctx.r3.s64 = ctx.r3.s64 + 144;
	// b 0x826355c8
	sub_826355C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E3430"))) PPC_WEAK_FUNC(sub_823E3430);
PPC_FUNC_IMPL(__imp__sub_823E3430) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,124
	ctx.r3.s64 = ctx.r3.s64 + 124;
	// b 0x82627448
	sub_82627448(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E3438"))) PPC_WEAK_FUNC(sub_823E3438);
PPC_FUNC_IMPL(__imp__sub_823E3438) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82340f20
	sub_82340F20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E3440"))) PPC_WEAK_FUNC(sub_823E3440);
PPC_FUNC_IMPL(__imp__sub_823E3440) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,108
	ctx.r3.s64 = ctx.r3.s64 + 108;
	// b 0x8233f288
	sub_8233F288(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E3448"))) PPC_WEAK_FUNC(sub_823E3448);
PPC_FUNC_IMPL(__imp__sub_823E3448) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8233c240
	sub_8233C240(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E3450"))) PPC_WEAK_FUNC(sub_823E3450);
PPC_FUNC_IMPL(__imp__sub_823E3450) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8233bff8
	sub_8233BFF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E3458"))) PPC_WEAK_FUNC(sub_823E3458);
PPC_FUNC_IMPL(__imp__sub_823E3458) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8237afd0
	sub_8237AFD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E3460"))) PPC_WEAK_FUNC(sub_823E3460);
PPC_FUNC_IMPL(__imp__sub_823E3460) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82379ec8
	sub_82379EC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E3470"))) PPC_WEAK_FUNC(sub_823E3470);
PPC_FUNC_IMPL(__imp__sub_823E3470) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x82379bd8
	sub_82379BD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E3478"))) PPC_WEAK_FUNC(sub_823E3478);
PPC_FUNC_IMPL(__imp__sub_823E3478) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x825981f0
	sub_825981F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E3488"))) PPC_WEAK_FUNC(sub_823E3488);
PPC_FUNC_IMPL(__imp__sub_823E3488) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82373188
	sub_82373188(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E3498"))) PPC_WEAK_FUNC(sub_823E3498);
PPC_FUNC_IMPL(__imp__sub_823E3498) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82373188
	sub_82373188(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E34A8"))) PPC_WEAK_FUNC(sub_823E34A8);
PPC_FUNC_IMPL(__imp__sub_823E34A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82599b78
	sub_82599B78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E34B8"))) PPC_WEAK_FUNC(sub_823E34B8);
PPC_FUNC_IMPL(__imp__sub_823E34B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8236f440
	sub_8236F440(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E34C8"))) PPC_WEAK_FUNC(sub_823E34C8);
PPC_FUNC_IMPL(__imp__sub_823E34C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8236cd50
	sub_8236CD50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E34D8"))) PPC_WEAK_FUNC(sub_823E34D8);
PPC_FUNC_IMPL(__imp__sub_823E34D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8236abc8
	sub_8236ABC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E34E8"))) PPC_WEAK_FUNC(sub_823E34E8);
PPC_FUNC_IMPL(__imp__sub_823E34E8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82366770
	sub_82366770(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E34F0"))) PPC_WEAK_FUNC(sub_823E34F0);
PPC_FUNC_IMPL(__imp__sub_823E34F0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82366360
	sub_82366360(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E34F8"))) PPC_WEAK_FUNC(sub_823E34F8);
PPC_FUNC_IMPL(__imp__sub_823E34F8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82365268
	sub_82365268(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E3500"))) PPC_WEAK_FUNC(sub_823E3500);
PPC_FUNC_IMPL(__imp__sub_823E3500) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82361cb8
	sub_82361CB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E3508"))) PPC_WEAK_FUNC(sub_823E3508);
PPC_FUNC_IMPL(__imp__sub_823E3508) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x8270f320
	sub_8270F320(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E3510"))) PPC_WEAK_FUNC(sub_823E3510);
PPC_FUNC_IMPL(__imp__sub_823E3510) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x823601c0
	sub_823601C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E3520"))) PPC_WEAK_FUNC(sub_823E3520);
PPC_FUNC_IMPL(__imp__sub_823E3520) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82360130
	sub_82360130(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E3530"))) PPC_WEAK_FUNC(sub_823E3530);
PPC_FUNC_IMPL(__imp__sub_823E3530) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823601c0
	sub_823601C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E3540"))) PPC_WEAK_FUNC(sub_823E3540);
PPC_FUNC_IMPL(__imp__sub_823E3540) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8235ed08
	sub_8235ED08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E3548"))) PPC_WEAK_FUNC(sub_823E3548);
PPC_FUNC_IMPL(__imp__sub_823E3548) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8235c430
	sub_8235C430(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E3558"))) PPC_WEAK_FUNC(sub_823E3558);
PPC_FUNC_IMPL(__imp__sub_823E3558) {
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
	// b 0x824d9bb0
	sub_824D9BB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E3578"))) PPC_WEAK_FUNC(sub_823E3578);
PPC_FUNC_IMPL(__imp__sub_823E3578) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x82359fd0
	sub_82359FD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E3580"))) PPC_WEAK_FUNC(sub_823E3580);
PPC_FUNC_IMPL(__imp__sub_823E3580) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x823582c0
	sub_823582C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E3590"))) PPC_WEAK_FUNC(sub_823E3590);
PPC_FUNC_IMPL(__imp__sub_823E3590) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82514fb0
	sub_82514FB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E35A0"))) PPC_WEAK_FUNC(sub_823E35A0);
PPC_FUNC_IMPL(__imp__sub_823E35A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82356f38
	sub_82356F38(ctx, base);
	return;
}

