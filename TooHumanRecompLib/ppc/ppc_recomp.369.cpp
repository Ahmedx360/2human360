#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8312E330"))) PPC_WEAK_FUNC(sub_8312E330);
PPC_FUNC_IMPL(__imp__sub_8312E330) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r11,r11,32656
	ctx.r11.s64 = ctx.r11.s64 + 32656;
	// addi r3,r11,40
	ctx.r3.s64 = ctx.r11.s64 + 40;
	// b 0x82ddc0b8
	sub_82DDC0B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312E340"))) PPC_WEAK_FUNC(sub_8312E340);
PPC_FUNC_IMPL(__imp__sub_8312E340) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r3,r11,-32675
	ctx.r3.s64 = ctx.r11.s64 + -32675;
	// b 0x82ec3da0
	sub_82EC3DA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312E350"))) PPC_WEAK_FUNC(sub_8312E350);
PPC_FUNC_IMPL(__imp__sub_8312E350) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// addi r11,r10,-32732
	ctx.r11.s64 = ctx.r10.s64 + -32732;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// addi r8,r8,11144
	ctx.r8.s64 = ctx.r8.s64 + 11144;
	// lwz r10,-32732(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32732);
	// addi r9,r9,11084
	ctx.r9.s64 = ctx.r9.s64 + 11084;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stwx r8,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x82ec46f8
	sub_82EC46F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312E380"))) PPC_WEAK_FUNC(sub_8312E380);
PPC_FUNC_IMPL(__imp__sub_8312E380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,32724
	ctx.r3.s64 = ctx.r11.s64 + 32724;
	// b 0x82a3fb68
	sub_82A3FB68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312E38C"))) PPC_WEAK_FUNC(sub_8312E38C);
PPC_FUNC_IMPL(__imp__sub_8312E38C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x1000190
}

__attribute__((alias("__imp__sub_8312E390"))) PPC_WEAK_FUNC(sub_8312E390);
PPC_FUNC_IMPL(__imp__sub_8312E390) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2000190
}

__attribute__((alias("__imp__sub_8312E394"))) PPC_WEAK_FUNC(sub_8312E394);
PPC_FUNC_IMPL(__imp__sub_8312E394) {
	PPC_FUNC_PROLOGUE();
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312E39C"))) PPC_WEAK_FUNC(sub_8312E39C);
PPC_FUNC_IMPL(__imp__sub_8312E39C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x1000191
}

__attribute__((alias("__imp__sub_8312E3A0"))) PPC_WEAK_FUNC(sub_8312E3A0);
PPC_FUNC_IMPL(__imp__sub_8312E3A0) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2000191
}

__attribute__((alias("__imp__sub_8312E3A4"))) PPC_WEAK_FUNC(sub_8312E3A4);
PPC_FUNC_IMPL(__imp__sub_8312E3A4) {
	PPC_FUNC_PROLOGUE();
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312E3AC"))) PPC_WEAK_FUNC(sub_8312E3AC);
PPC_FUNC_IMPL(__imp__sub_8312E3AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x1000192
}

__attribute__((alias("__imp__sub_8312E3B0"))) PPC_WEAK_FUNC(sub_8312E3B0);
PPC_FUNC_IMPL(__imp__sub_8312E3B0) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2000192
}

__attribute__((alias("__imp__sub_8312E3B4"))) PPC_WEAK_FUNC(sub_8312E3B4);
PPC_FUNC_IMPL(__imp__sub_8312E3B4) {
	PPC_FUNC_PROLOGUE();
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312E3BC"))) PPC_WEAK_FUNC(sub_8312E3BC);
PPC_FUNC_IMPL(__imp__sub_8312E3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x1000198
}

__attribute__((alias("__imp__sub_8312E3C0"))) PPC_WEAK_FUNC(sub_8312E3C0);
PPC_FUNC_IMPL(__imp__sub_8312E3C0) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2000198
}

__attribute__((alias("__imp__sub_8312E3C4"))) PPC_WEAK_FUNC(sub_8312E3C4);
PPC_FUNC_IMPL(__imp__sub_8312E3C4) {
	PPC_FUNC_PROLOGUE();
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312E3CC"))) PPC_WEAK_FUNC(sub_8312E3CC);
PPC_FUNC_IMPL(__imp__sub_8312E3CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x10002bc
}

__attribute__((alias("__imp__sub_8312E3D0"))) PPC_WEAK_FUNC(sub_8312E3D0);
PPC_FUNC_IMPL(__imp__sub_8312E3D0) {
	PPC_FUNC_PROLOGUE();
	// .long 0x20002bc
}

__attribute__((alias("__imp__sub_8312E3D4"))) PPC_WEAK_FUNC(sub_8312E3D4);
PPC_FUNC_IMPL(__imp__sub_8312E3D4) {
	PPC_FUNC_PROLOGUE();
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312E3DC"))) PPC_WEAK_FUNC(sub_8312E3DC);
PPC_FUNC_IMPL(__imp__sub_8312E3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x10002c1
}

__attribute__((alias("__imp__sub_8312E3E0"))) PPC_WEAK_FUNC(sub_8312E3E0);
PPC_FUNC_IMPL(__imp__sub_8312E3E0) {
	PPC_FUNC_PROLOGUE();
	// .long 0x20002c1
}

__attribute__((alias("__imp__sub_8312E3E4"))) PPC_WEAK_FUNC(sub_8312E3E4);
PPC_FUNC_IMPL(__imp__sub_8312E3E4) {
	PPC_FUNC_PROLOGUE();
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312E3EC"))) PPC_WEAK_FUNC(sub_8312E3EC);
PPC_FUNC_IMPL(__imp__sub_8312E3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x10002d5
}

__attribute__((alias("__imp__sub_8312E3F0"))) PPC_WEAK_FUNC(sub_8312E3F0);
PPC_FUNC_IMPL(__imp__sub_8312E3F0) {
	PPC_FUNC_PROLOGUE();
	// .long 0x20002d5
}

__attribute__((alias("__imp__sub_8312E3F4"))) PPC_WEAK_FUNC(sub_8312E3F4);
PPC_FUNC_IMPL(__imp__sub_8312E3F4) {
	PPC_FUNC_PROLOGUE();
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312E3FC"))) PPC_WEAK_FUNC(sub_8312E3FC);
PPC_FUNC_IMPL(__imp__sub_8312E3FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x10002c5
}

__attribute__((alias("__imp__sub_8312E400"))) PPC_WEAK_FUNC(sub_8312E400);
PPC_FUNC_IMPL(__imp__sub_8312E400) {
	PPC_FUNC_PROLOGUE();
	// .long 0x20002c5
}

__attribute__((alias("__imp__sub_8312E404"))) PPC_WEAK_FUNC(sub_8312E404);
PPC_FUNC_IMPL(__imp__sub_8312E404) {
	PPC_FUNC_PROLOGUE();
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312E40C"))) PPC_WEAK_FUNC(sub_8312E40C);
PPC_FUNC_IMPL(__imp__sub_8312E40C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x10002c6
}

__attribute__((alias("__imp__sub_8312E410"))) PPC_WEAK_FUNC(sub_8312E410);
PPC_FUNC_IMPL(__imp__sub_8312E410) {
	PPC_FUNC_PROLOGUE();
	// .long 0x20002c6
}

__attribute__((alias("__imp__sub_8312E414"))) PPC_WEAK_FUNC(sub_8312E414);
PPC_FUNC_IMPL(__imp__sub_8312E414) {
	PPC_FUNC_PROLOGUE();
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312E41C"))) PPC_WEAK_FUNC(sub_8312E41C);
PPC_FUNC_IMPL(__imp__sub_8312E41C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x10002c7
}

__attribute__((alias("__imp__sub_8312E420"))) PPC_WEAK_FUNC(sub_8312E420);
PPC_FUNC_IMPL(__imp__sub_8312E420) {
	PPC_FUNC_PROLOGUE();
	// .long 0x20002c7
}

__attribute__((alias("__imp__sub_8312E424"))) PPC_WEAK_FUNC(sub_8312E424);
PPC_FUNC_IMPL(__imp__sub_8312E424) {
	PPC_FUNC_PROLOGUE();
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312E42C"))) PPC_WEAK_FUNC(sub_8312E42C);
PPC_FUNC_IMPL(__imp__sub_8312E42C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x10002cb
}

__attribute__((alias("__imp__sub_8312E430"))) PPC_WEAK_FUNC(sub_8312E430);
PPC_FUNC_IMPL(__imp__sub_8312E430) {
	PPC_FUNC_PROLOGUE();
	// .long 0x20002cb
}

__attribute__((alias("__imp__sub_8312E434"))) PPC_WEAK_FUNC(sub_8312E434);
PPC_FUNC_IMPL(__imp__sub_8312E434) {
	PPC_FUNC_PROLOGUE();
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312E43C"))) PPC_WEAK_FUNC(sub_8312E43C);
PPC_FUNC_IMPL(__imp__sub_8312E43C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x10002d9
}

__attribute__((alias("__imp__sub_8312E440"))) PPC_WEAK_FUNC(sub_8312E440);
PPC_FUNC_IMPL(__imp__sub_8312E440) {
	PPC_FUNC_PROLOGUE();
	// .long 0x20002d9
}

__attribute__((alias("__imp__sub_8312E444"))) PPC_WEAK_FUNC(sub_8312E444);
PPC_FUNC_IMPL(__imp__sub_8312E444) {
	PPC_FUNC_PROLOGUE();
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312E44C"))) PPC_WEAK_FUNC(sub_8312E44C);
PPC_FUNC_IMPL(__imp__sub_8312E44C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x10001f7
}

__attribute__((alias("__imp__sub_8312E450"))) PPC_WEAK_FUNC(sub_8312E450);
PPC_FUNC_IMPL(__imp__sub_8312E450) {
	PPC_FUNC_PROLOGUE();
	// .long 0x20001f7
}

__attribute__((alias("__imp__sub_8312E454"))) PPC_WEAK_FUNC(sub_8312E454);
PPC_FUNC_IMPL(__imp__sub_8312E454) {
	PPC_FUNC_PROLOGUE();
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312E45C"))) PPC_WEAK_FUNC(sub_8312E45C);
PPC_FUNC_IMPL(__imp__sub_8312E45C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x100020e
}

__attribute__((alias("__imp__sub_8312E460"))) PPC_WEAK_FUNC(sub_8312E460);
PPC_FUNC_IMPL(__imp__sub_8312E460) {
	PPC_FUNC_PROLOGUE();
	// .long 0x200020e
}

__attribute__((alias("__imp__sub_8312E464"))) PPC_WEAK_FUNC(sub_8312E464);
PPC_FUNC_IMPL(__imp__sub_8312E464) {
	PPC_FUNC_PROLOGUE();
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312E46C"))) PPC_WEAK_FUNC(sub_8312E46C);
PPC_FUNC_IMPL(__imp__sub_8312E46C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x1000210
}

__attribute__((alias("__imp__sub_8312E470"))) PPC_WEAK_FUNC(sub_8312E470);
PPC_FUNC_IMPL(__imp__sub_8312E470) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2000210
}

__attribute__((alias("__imp__sub_8312E474"))) PPC_WEAK_FUNC(sub_8312E474);
PPC_FUNC_IMPL(__imp__sub_8312E474) {
	PPC_FUNC_PROLOGUE();
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312E47C"))) PPC_WEAK_FUNC(sub_8312E47C);
PPC_FUNC_IMPL(__imp__sub_8312E47C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x1000213
}

__attribute__((alias("__imp__sub_8312E480"))) PPC_WEAK_FUNC(sub_8312E480);
PPC_FUNC_IMPL(__imp__sub_8312E480) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2000213
}

__attribute__((alias("__imp__sub_8312E484"))) PPC_WEAK_FUNC(sub_8312E484);
PPC_FUNC_IMPL(__imp__sub_8312E484) {
	PPC_FUNC_PROLOGUE();
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312E48C"))) PPC_WEAK_FUNC(sub_8312E48C);
PPC_FUNC_IMPL(__imp__sub_8312E48C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x1000212
}

__attribute__((alias("__imp__sub_8312E490"))) PPC_WEAK_FUNC(sub_8312E490);
PPC_FUNC_IMPL(__imp__sub_8312E490) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2000212
}

__attribute__((alias("__imp__sub_8312E494"))) PPC_WEAK_FUNC(sub_8312E494);
PPC_FUNC_IMPL(__imp__sub_8312E494) {
	PPC_FUNC_PROLOGUE();
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312E49C"))) PPC_WEAK_FUNC(sub_8312E49C);
PPC_FUNC_IMPL(__imp__sub_8312E49C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x1000282
}

__attribute__((alias("__imp__sub_8312E4A0"))) PPC_WEAK_FUNC(sub_8312E4A0);
PPC_FUNC_IMPL(__imp__sub_8312E4A0) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2000282
}

__attribute__((alias("__imp__sub_8312E4A4"))) PPC_WEAK_FUNC(sub_8312E4A4);
PPC_FUNC_IMPL(__imp__sub_8312E4A4) {
	PPC_FUNC_PROLOGUE();
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312E4AC"))) PPC_WEAK_FUNC(sub_8312E4AC);
PPC_FUNC_IMPL(__imp__sub_8312E4AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x10002f7
}

__attribute__((alias("__imp__sub_8312E4B0"))) PPC_WEAK_FUNC(sub_8312E4B0);
PPC_FUNC_IMPL(__imp__sub_8312E4B0) {
	PPC_FUNC_PROLOGUE();
	// .long 0x20002f7
}

__attribute__((alias("__imp__sub_8312E4B4"))) PPC_WEAK_FUNC(sub_8312E4B4);
PPC_FUNC_IMPL(__imp__sub_8312E4B4) {
	PPC_FUNC_PROLOGUE();
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312E4BC"))) PPC_WEAK_FUNC(sub_8312E4BC);
PPC_FUNC_IMPL(__imp__sub_8312E4BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x100020a
}

__attribute__((alias("__imp__sub_8312E4C0"))) PPC_WEAK_FUNC(sub_8312E4C0);
PPC_FUNC_IMPL(__imp__sub_8312E4C0) {
	PPC_FUNC_PROLOGUE();
	// .long 0x200020a
}

__attribute__((alias("__imp__sub_8312E4C4"))) PPC_WEAK_FUNC(sub_8312E4C4);
PPC_FUNC_IMPL(__imp__sub_8312E4C4) {
	PPC_FUNC_PROLOGUE();
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312E4CC"))) PPC_WEAK_FUNC(sub_8312E4CC);
PPC_FUNC_IMPL(__imp__sub_8312E4CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x1000227
}

__attribute__((alias("__imp__sub_8312E4D0"))) PPC_WEAK_FUNC(sub_8312E4D0);
PPC_FUNC_IMPL(__imp__sub_8312E4D0) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2000227
}

__attribute__((alias("__imp__sub_8312E4D4"))) PPC_WEAK_FUNC(sub_8312E4D4);
PPC_FUNC_IMPL(__imp__sub_8312E4D4) {
	PPC_FUNC_PROLOGUE();
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312E4DC"))) PPC_WEAK_FUNC(sub_8312E4DC);
PPC_FUNC_IMPL(__imp__sub_8312E4DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x10002dc
}

__attribute__((alias("__imp__sub_8312E4E0"))) PPC_WEAK_FUNC(sub_8312E4E0);
PPC_FUNC_IMPL(__imp__sub_8312E4E0) {
	PPC_FUNC_PROLOGUE();
	// .long 0x20002dc
}

__attribute__((alias("__imp__sub_8312E4E4"))) PPC_WEAK_FUNC(sub_8312E4E4);
PPC_FUNC_IMPL(__imp__sub_8312E4E4) {
	PPC_FUNC_PROLOGUE();
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312E4EC"))) PPC_WEAK_FUNC(sub_8312E4EC);
PPC_FUNC_IMPL(__imp__sub_8312E4EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x10003cd
}

__attribute__((alias("__imp__sub_8312E4F0"))) PPC_WEAK_FUNC(sub_8312E4F0);
PPC_FUNC_IMPL(__imp__sub_8312E4F0) {
	PPC_FUNC_PROLOGUE();
	// .long 0x20003cd
}

__attribute__((alias("__imp__sub_8312E4F4"))) PPC_WEAK_FUNC(sub_8312E4F4);
PPC_FUNC_IMPL(__imp__sub_8312E4F4) {
	PPC_FUNC_PROLOGUE();
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312E4FC"))) PPC_WEAK_FUNC(sub_8312E4FC);
PPC_FUNC_IMPL(__imp__sub_8312E4FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x10003cb
}

__attribute__((alias("__imp__sub_8312E500"))) PPC_WEAK_FUNC(sub_8312E500);
PPC_FUNC_IMPL(__imp__sub_8312E500) {
	PPC_FUNC_PROLOGUE();
	// .long 0x20003cb
}

__attribute__((alias("__imp__sub_8312E504"))) PPC_WEAK_FUNC(sub_8312E504);
PPC_FUNC_IMPL(__imp__sub_8312E504) {
	PPC_FUNC_PROLOGUE();
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312E50C"))) PPC_WEAK_FUNC(sub_8312E50C);
PPC_FUNC_IMPL(__imp__sub_8312E50C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x10001a9
}

__attribute__((alias("__imp__sub_8312E510"))) PPC_WEAK_FUNC(sub_8312E510);
PPC_FUNC_IMPL(__imp__sub_8312E510) {
	PPC_FUNC_PROLOGUE();
	// .long 0x20001a9
}

__attribute__((alias("__imp__sub_8312E514"))) PPC_WEAK_FUNC(sub_8312E514);
PPC_FUNC_IMPL(__imp__sub_8312E514) {
	PPC_FUNC_PROLOGUE();
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312E51C"))) PPC_WEAK_FUNC(sub_8312E51C);
PPC_FUNC_IMPL(__imp__sub_8312E51C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x10001a4
}

__attribute__((alias("__imp__sub_8312E520"))) PPC_WEAK_FUNC(sub_8312E520);
PPC_FUNC_IMPL(__imp__sub_8312E520) {
	PPC_FUNC_PROLOGUE();
	// .long 0x20001a4
}

__attribute__((alias("__imp__sub_8312E524"))) PPC_WEAK_FUNC(sub_8312E524);
PPC_FUNC_IMPL(__imp__sub_8312E524) {
	PPC_FUNC_PROLOGUE();
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312E52C"))) PPC_WEAK_FUNC(sub_8312E52C);
PPC_FUNC_IMPL(__imp__sub_8312E52C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x1000280
}

__attribute__((alias("__imp__sub_8312E530"))) PPC_WEAK_FUNC(sub_8312E530);
PPC_FUNC_IMPL(__imp__sub_8312E530) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2000280
}

__attribute__((alias("__imp__sub_8312E534"))) PPC_WEAK_FUNC(sub_8312E534);
PPC_FUNC_IMPL(__imp__sub_8312E534) {
	PPC_FUNC_PROLOGUE();
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312E53C"))) PPC_WEAK_FUNC(sub_8312E53C);
PPC_FUNC_IMPL(__imp__sub_8312E53C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x10100c4
}

__attribute__((alias("__imp__sub_8312E540"))) PPC_WEAK_FUNC(sub_8312E540);
PPC_FUNC_IMPL(__imp__sub_8312E540) {
	PPC_FUNC_PROLOGUE();
	// .long 0x20100c4
}

__attribute__((alias("__imp__sub_8312E544"))) PPC_WEAK_FUNC(sub_8312E544);
PPC_FUNC_IMPL(__imp__sub_8312E544) {
	PPC_FUNC_PROLOGUE();
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312E54C"))) PPC_WEAK_FUNC(sub_8312E54C);
PPC_FUNC_IMPL(__imp__sub_8312E54C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x1010135
}

__attribute__((alias("__imp__sub_8312E550"))) PPC_WEAK_FUNC(sub_8312E550);
PPC_FUNC_IMPL(__imp__sub_8312E550) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2010135
}

__attribute__((alias("__imp__sub_8312E554"))) PPC_WEAK_FUNC(sub_8312E554);
PPC_FUNC_IMPL(__imp__sub_8312E554) {
	PPC_FUNC_PROLOGUE();
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312E55C"))) PPC_WEAK_FUNC(sub_8312E55C);
PPC_FUNC_IMPL(__imp__sub_8312E55C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x1010133
}

__attribute__((alias("__imp__sub_8312E560"))) PPC_WEAK_FUNC(sub_8312E560);
PPC_FUNC_IMPL(__imp__sub_8312E560) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2010133
}

__attribute__((alias("__imp__sub_8312E564"))) PPC_WEAK_FUNC(sub_8312E564);
PPC_FUNC_IMPL(__imp__sub_8312E564) {
	PPC_FUNC_PROLOGUE();
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312E56C"))) PPC_WEAK_FUNC(sub_8312E56C);
PPC_FUNC_IMPL(__imp__sub_8312E56C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x1010143
}

__attribute__((alias("__imp__sub_8312E570"))) PPC_WEAK_FUNC(sub_8312E570);
PPC_FUNC_IMPL(__imp__sub_8312E570) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2010143
}

__attribute__((alias("__imp__sub_8312E574"))) PPC_WEAK_FUNC(sub_8312E574);
PPC_FUNC_IMPL(__imp__sub_8312E574) {
	PPC_FUNC_PROLOGUE();
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312E57C"))) PPC_WEAK_FUNC(sub_8312E57C);
PPC_FUNC_IMPL(__imp__sub_8312E57C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x1010151
}

__attribute__((alias("__imp__sub_8312E580"))) PPC_WEAK_FUNC(sub_8312E580);
PPC_FUNC_IMPL(__imp__sub_8312E580) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2010151
}

__attribute__((alias("__imp__sub_8312E584"))) PPC_WEAK_FUNC(sub_8312E584);
PPC_FUNC_IMPL(__imp__sub_8312E584) {
	PPC_FUNC_PROLOGUE();
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312E58C"))) PPC_WEAK_FUNC(sub_8312E58C);
PPC_FUNC_IMPL(__imp__sub_8312E58C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x10100cf
}

__attribute__((alias("__imp__sub_8312E590"))) PPC_WEAK_FUNC(sub_8312E590);
PPC_FUNC_IMPL(__imp__sub_8312E590) {
	PPC_FUNC_PROLOGUE();
	// .long 0x20100cf
}

__attribute__((alias("__imp__sub_8312E594"))) PPC_WEAK_FUNC(sub_8312E594);
PPC_FUNC_IMPL(__imp__sub_8312E594) {
	PPC_FUNC_PROLOGUE();
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312E59C"))) PPC_WEAK_FUNC(sub_8312E59C);
PPC_FUNC_IMPL(__imp__sub_8312E59C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x10100f7
}

__attribute__((alias("__imp__sub_8312E5A0"))) PPC_WEAK_FUNC(sub_8312E5A0);
PPC_FUNC_IMPL(__imp__sub_8312E5A0) {
	PPC_FUNC_PROLOGUE();
	// .long 0x20100f7
}

__attribute__((alias("__imp__sub_8312E5A4"))) PPC_WEAK_FUNC(sub_8312E5A4);
PPC_FUNC_IMPL(__imp__sub_8312E5A4) {
	PPC_FUNC_PROLOGUE();
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312E5AC"))) PPC_WEAK_FUNC(sub_8312E5AC);
PPC_FUNC_IMPL(__imp__sub_8312E5AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x10100df
}

__attribute__((alias("__imp__sub_8312E5B0"))) PPC_WEAK_FUNC(sub_8312E5B0);
PPC_FUNC_IMPL(__imp__sub_8312E5B0) {
	PPC_FUNC_PROLOGUE();
	// .long 0x20100df
}

__attribute__((alias("__imp__sub_8312E5B4"))) PPC_WEAK_FUNC(sub_8312E5B4);
PPC_FUNC_IMPL(__imp__sub_8312E5B4) {
	PPC_FUNC_PROLOGUE();
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312E5BC"))) PPC_WEAK_FUNC(sub_8312E5BC);
PPC_FUNC_IMPL(__imp__sub_8312E5BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x101012c
}

__attribute__((alias("__imp__sub_8312E5C0"))) PPC_WEAK_FUNC(sub_8312E5C0);
PPC_FUNC_IMPL(__imp__sub_8312E5C0) {
	PPC_FUNC_PROLOGUE();
	// .long 0x201012c
}

__attribute__((alias("__imp__sub_8312E5C4"))) PPC_WEAK_FUNC(sub_8312E5C4);
PPC_FUNC_IMPL(__imp__sub_8312E5C4) {
	PPC_FUNC_PROLOGUE();
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312E5CC"))) PPC_WEAK_FUNC(sub_8312E5CC);
PPC_FUNC_IMPL(__imp__sub_8312E5CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x1010021
}

__attribute__((alias("__imp__sub_8312E5D0"))) PPC_WEAK_FUNC(sub_8312E5D0);
PPC_FUNC_IMPL(__imp__sub_8312E5D0) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2010021
}

__attribute__((alias("__imp__sub_8312E5D4"))) PPC_WEAK_FUNC(sub_8312E5D4);
PPC_FUNC_IMPL(__imp__sub_8312E5D4) {
	PPC_FUNC_PROLOGUE();
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312E5DC"))) PPC_WEAK_FUNC(sub_8312E5DC);
PPC_FUNC_IMPL(__imp__sub_8312E5DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x1010140
}

__attribute__((alias("__imp__sub_8312E5E0"))) PPC_WEAK_FUNC(sub_8312E5E0);
PPC_FUNC_IMPL(__imp__sub_8312E5E0) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2010140
}

__attribute__((alias("__imp__sub_8312E5E4"))) PPC_WEAK_FUNC(sub_8312E5E4);
PPC_FUNC_IMPL(__imp__sub_8312E5E4) {
	PPC_FUNC_PROLOGUE();
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312E5EC"))) PPC_WEAK_FUNC(sub_8312E5EC);
PPC_FUNC_IMPL(__imp__sub_8312E5EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x1010084
}

__attribute__((alias("__imp__sub_8312E5F0"))) PPC_WEAK_FUNC(sub_8312E5F0);
PPC_FUNC_IMPL(__imp__sub_8312E5F0) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2010084
}

__attribute__((alias("__imp__sub_8312E5F4"))) PPC_WEAK_FUNC(sub_8312E5F4);
PPC_FUNC_IMPL(__imp__sub_8312E5F4) {
	PPC_FUNC_PROLOGUE();
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312E5FC"))) PPC_WEAK_FUNC(sub_8312E5FC);
PPC_FUNC_IMPL(__imp__sub_8312E5FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x101013f
}

__attribute__((alias("__imp__sub_8312E600"))) PPC_WEAK_FUNC(sub_8312E600);
PPC_FUNC_IMPL(__imp__sub_8312E600) {
	PPC_FUNC_PROLOGUE();
	// .long 0x201013f
}

__attribute__((alias("__imp__sub_8312E604"))) PPC_WEAK_FUNC(sub_8312E604);
PPC_FUNC_IMPL(__imp__sub_8312E604) {
	PPC_FUNC_PROLOGUE();
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312E60C"))) PPC_WEAK_FUNC(sub_8312E60C);
PPC_FUNC_IMPL(__imp__sub_8312E60C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x1010083
}

__attribute__((alias("__imp__sub_8312E610"))) PPC_WEAK_FUNC(sub_8312E610);
PPC_FUNC_IMPL(__imp__sub_8312E610) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2010083
}

__attribute__((alias("__imp__sub_8312E614"))) PPC_WEAK_FUNC(sub_8312E614);
PPC_FUNC_IMPL(__imp__sub_8312E614) {
	PPC_FUNC_PROLOGUE();
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312E61C"))) PPC_WEAK_FUNC(sub_8312E61C);
PPC_FUNC_IMPL(__imp__sub_8312E61C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x10100d1
}

__attribute__((alias("__imp__sub_8312E620"))) PPC_WEAK_FUNC(sub_8312E620);
PPC_FUNC_IMPL(__imp__sub_8312E620) {
	PPC_FUNC_PROLOGUE();
	// .long 0x20100d1
}

__attribute__((alias("__imp__sub_8312E624"))) PPC_WEAK_FUNC(sub_8312E624);
PPC_FUNC_IMPL(__imp__sub_8312E624) {
	PPC_FUNC_PROLOGUE();
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312E62C"))) PPC_WEAK_FUNC(sub_8312E62C);
PPC_FUNC_IMPL(__imp__sub_8312E62C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x1010010
}

__attribute__((alias("__imp__sub_8312E630"))) PPC_WEAK_FUNC(sub_8312E630);
PPC_FUNC_IMPL(__imp__sub_8312E630) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2010010
}

__attribute__((alias("__imp__sub_8312E634"))) PPC_WEAK_FUNC(sub_8312E634);
PPC_FUNC_IMPL(__imp__sub_8312E634) {
	PPC_FUNC_PROLOGUE();
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312E63C"))) PPC_WEAK_FUNC(sub_8312E63C);
PPC_FUNC_IMPL(__imp__sub_8312E63C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x1010194
}

__attribute__((alias("__imp__sub_8312E640"))) PPC_WEAK_FUNC(sub_8312E640);
PPC_FUNC_IMPL(__imp__sub_8312E640) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2010194
}

__attribute__((alias("__imp__sub_8312E644"))) PPC_WEAK_FUNC(sub_8312E644);
PPC_FUNC_IMPL(__imp__sub_8312E644) {
	PPC_FUNC_PROLOGUE();
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312E64C"))) PPC_WEAK_FUNC(sub_8312E64C);
PPC_FUNC_IMPL(__imp__sub_8312E64C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x1010003
}

__attribute__((alias("__imp__sub_8312E650"))) PPC_WEAK_FUNC(sub_8312E650);
PPC_FUNC_IMPL(__imp__sub_8312E650) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2010003
}

__attribute__((alias("__imp__sub_8312E654"))) PPC_WEAK_FUNC(sub_8312E654);
PPC_FUNC_IMPL(__imp__sub_8312E654) {
	PPC_FUNC_PROLOGUE();
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312E65C"))) PPC_WEAK_FUNC(sub_8312E65C);
PPC_FUNC_IMPL(__imp__sub_8312E65C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x10101a5
}

__attribute__((alias("__imp__sub_8312E660"))) PPC_WEAK_FUNC(sub_8312E660);
PPC_FUNC_IMPL(__imp__sub_8312E660) {
	PPC_FUNC_PROLOGUE();
	// .long 0x20101a5
}

__attribute__((alias("__imp__sub_8312E664"))) PPC_WEAK_FUNC(sub_8312E664);
PPC_FUNC_IMPL(__imp__sub_8312E664) {
	PPC_FUNC_PROLOGUE();
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312E66C"))) PPC_WEAK_FUNC(sub_8312E66C);
PPC_FUNC_IMPL(__imp__sub_8312E66C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x10100ba
}

__attribute__((alias("__imp__sub_8312E670"))) PPC_WEAK_FUNC(sub_8312E670);
PPC_FUNC_IMPL(__imp__sub_8312E670) {
	PPC_FUNC_PROLOGUE();
	// .long 0x20100ba
}

__attribute__((alias("__imp__sub_8312E674"))) PPC_WEAK_FUNC(sub_8312E674);
PPC_FUNC_IMPL(__imp__sub_8312E674) {
	PPC_FUNC_PROLOGUE();
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312E67C"))) PPC_WEAK_FUNC(sub_8312E67C);
PPC_FUNC_IMPL(__imp__sub_8312E67C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x10100c7
}

__attribute__((alias("__imp__sub_8312E680"))) PPC_WEAK_FUNC(sub_8312E680);
PPC_FUNC_IMPL(__imp__sub_8312E680) {
	PPC_FUNC_PROLOGUE();
	// .long 0x20100c7
}

__attribute__((alias("__imp__sub_8312E684"))) PPC_WEAK_FUNC(sub_8312E684);
PPC_FUNC_IMPL(__imp__sub_8312E684) {
	PPC_FUNC_PROLOGUE();
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312E68C"))) PPC_WEAK_FUNC(sub_8312E68C);
PPC_FUNC_IMPL(__imp__sub_8312E68C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x10100bd
}

__attribute__((alias("__imp__sub_8312E690"))) PPC_WEAK_FUNC(sub_8312E690);
PPC_FUNC_IMPL(__imp__sub_8312E690) {
	PPC_FUNC_PROLOGUE();
	// .long 0x20100bd
}

__attribute__((alias("__imp__sub_8312E694"))) PPC_WEAK_FUNC(sub_8312E694);
PPC_FUNC_IMPL(__imp__sub_8312E694) {
	PPC_FUNC_PROLOGUE();
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312E69C"))) PPC_WEAK_FUNC(sub_8312E69C);
PPC_FUNC_IMPL(__imp__sub_8312E69C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x10100ff
}

__attribute__((alias("__imp__sub_8312E6A0"))) PPC_WEAK_FUNC(sub_8312E6A0);
PPC_FUNC_IMPL(__imp__sub_8312E6A0) {
	PPC_FUNC_PROLOGUE();
	// .long 0x20100ff
}

__attribute__((alias("__imp__sub_8312E6A4"))) PPC_WEAK_FUNC(sub_8312E6A4);
PPC_FUNC_IMPL(__imp__sub_8312E6A4) {
	PPC_FUNC_PROLOGUE();
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312E6AC"))) PPC_WEAK_FUNC(sub_8312E6AC);
PPC_FUNC_IMPL(__imp__sub_8312E6AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x10100d2
}

__attribute__((alias("__imp__sub_8312E6B0"))) PPC_WEAK_FUNC(sub_8312E6B0);
PPC_FUNC_IMPL(__imp__sub_8312E6B0) {
	PPC_FUNC_PROLOGUE();
	// .long 0x20100d2
}

__attribute__((alias("__imp__sub_8312E6B4"))) PPC_WEAK_FUNC(sub_8312E6B4);
PPC_FUNC_IMPL(__imp__sub_8312E6B4) {
	PPC_FUNC_PROLOGUE();
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312E6BC"))) PPC_WEAK_FUNC(sub_8312E6BC);
PPC_FUNC_IMPL(__imp__sub_8312E6BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x101000f
}

__attribute__((alias("__imp__sub_8312E6C0"))) PPC_WEAK_FUNC(sub_8312E6C0);
PPC_FUNC_IMPL(__imp__sub_8312E6C0) {
	PPC_FUNC_PROLOGUE();
	// .long 0x201000f
}

__attribute__((alias("__imp__sub_8312E6C4"))) PPC_WEAK_FUNC(sub_8312E6C4);
PPC_FUNC_IMPL(__imp__sub_8312E6C4) {
	PPC_FUNC_PROLOGUE();
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312E6CC"))) PPC_WEAK_FUNC(sub_8312E6CC);
PPC_FUNC_IMPL(__imp__sub_8312E6CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x1010197
}

__attribute__((alias("__imp__sub_8312E6D0"))) PPC_WEAK_FUNC(sub_8312E6D0);
PPC_FUNC_IMPL(__imp__sub_8312E6D0) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2010197
}

__attribute__((alias("__imp__sub_8312E6D4"))) PPC_WEAK_FUNC(sub_8312E6D4);
PPC_FUNC_IMPL(__imp__sub_8312E6D4) {
	PPC_FUNC_PROLOGUE();
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312E6DC"))) PPC_WEAK_FUNC(sub_8312E6DC);
PPC_FUNC_IMPL(__imp__sub_8312E6DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x1010196
}

__attribute__((alias("__imp__sub_8312E6E0"))) PPC_WEAK_FUNC(sub_8312E6E0);
PPC_FUNC_IMPL(__imp__sub_8312E6E0) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2010196
}

__attribute__((alias("__imp__sub_8312E6E4"))) PPC_WEAK_FUNC(sub_8312E6E4);
PPC_FUNC_IMPL(__imp__sub_8312E6E4) {
	PPC_FUNC_PROLOGUE();
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312E6EC"))) PPC_WEAK_FUNC(sub_8312E6EC);
PPC_FUNC_IMPL(__imp__sub_8312E6EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x1010105
}

__attribute__((alias("__imp__sub_8312E6F0"))) PPC_WEAK_FUNC(sub_8312E6F0);
PPC_FUNC_IMPL(__imp__sub_8312E6F0) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2010105
}

__attribute__((alias("__imp__sub_8312E6F4"))) PPC_WEAK_FUNC(sub_8312E6F4);
PPC_FUNC_IMPL(__imp__sub_8312E6F4) {
	PPC_FUNC_PROLOGUE();
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312E6FC"))) PPC_WEAK_FUNC(sub_8312E6FC);
PPC_FUNC_IMPL(__imp__sub_8312E6FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x1010099
}

__attribute__((alias("__imp__sub_8312E700"))) PPC_WEAK_FUNC(sub_8312E700);
PPC_FUNC_IMPL(__imp__sub_8312E700) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2010099
}

__attribute__((alias("__imp__sub_8312E704"))) PPC_WEAK_FUNC(sub_8312E704);
PPC_FUNC_IMPL(__imp__sub_8312E704) {
	PPC_FUNC_PROLOGUE();
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312E70C"))) PPC_WEAK_FUNC(sub_8312E70C);
PPC_FUNC_IMPL(__imp__sub_8312E70C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x1010110
}

__attribute__((alias("__imp__sub_8312E710"))) PPC_WEAK_FUNC(sub_8312E710);
PPC_FUNC_IMPL(__imp__sub_8312E710) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2010110
}

__attribute__((alias("__imp__sub_8312E714"))) PPC_WEAK_FUNC(sub_8312E714);
PPC_FUNC_IMPL(__imp__sub_8312E714) {
	PPC_FUNC_PROLOGUE();
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312E71C"))) PPC_WEAK_FUNC(sub_8312E71C);
PPC_FUNC_IMPL(__imp__sub_8312E71C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x10100fc
}

__attribute__((alias("__imp__sub_8312E720"))) PPC_WEAK_FUNC(sub_8312E720);
PPC_FUNC_IMPL(__imp__sub_8312E720) {
	PPC_FUNC_PROLOGUE();
	// .long 0x20100fc
}

__attribute__((alias("__imp__sub_8312E724"))) PPC_WEAK_FUNC(sub_8312E724);
PPC_FUNC_IMPL(__imp__sub_8312E724) {
	PPC_FUNC_PROLOGUE();
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312E72C"))) PPC_WEAK_FUNC(sub_8312E72C);
PPC_FUNC_IMPL(__imp__sub_8312E72C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x1010097
}

__attribute__((alias("__imp__sub_8312E730"))) PPC_WEAK_FUNC(sub_8312E730);
PPC_FUNC_IMPL(__imp__sub_8312E730) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2010097
}

__attribute__((alias("__imp__sub_8312E734"))) PPC_WEAK_FUNC(sub_8312E734);
PPC_FUNC_IMPL(__imp__sub_8312E734) {
	PPC_FUNC_PROLOGUE();
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312E73C"))) PPC_WEAK_FUNC(sub_8312E73C);
PPC_FUNC_IMPL(__imp__sub_8312E73C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x1010130
}

__attribute__((alias("__imp__sub_8312E740"))) PPC_WEAK_FUNC(sub_8312E740);
PPC_FUNC_IMPL(__imp__sub_8312E740) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2010130
}

__attribute__((alias("__imp__sub_8312E744"))) PPC_WEAK_FUNC(sub_8312E744);
PPC_FUNC_IMPL(__imp__sub_8312E744) {
	PPC_FUNC_PROLOGUE();
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312E74C"))) PPC_WEAK_FUNC(sub_8312E74C);
PPC_FUNC_IMPL(__imp__sub_8312E74C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x1010125
}

__attribute__((alias("__imp__sub_8312E750"))) PPC_WEAK_FUNC(sub_8312E750);
PPC_FUNC_IMPL(__imp__sub_8312E750) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2010125
}

__attribute__((alias("__imp__sub_8312E754"))) PPC_WEAK_FUNC(sub_8312E754);
PPC_FUNC_IMPL(__imp__sub_8312E754) {
	PPC_FUNC_PROLOGUE();
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312E75C"))) PPC_WEAK_FUNC(sub_8312E75C);
PPC_FUNC_IMPL(__imp__sub_8312E75C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x101012b
}

__attribute__((alias("__imp__sub_8312E760"))) PPC_WEAK_FUNC(sub_8312E760);
PPC_FUNC_IMPL(__imp__sub_8312E760) {
	PPC_FUNC_PROLOGUE();
	// .long 0x201012b
}

__attribute__((alias("__imp__sub_8312E764"))) PPC_WEAK_FUNC(sub_8312E764);
PPC_FUNC_IMPL(__imp__sub_8312E764) {
	PPC_FUNC_PROLOGUE();
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312E76C"))) PPC_WEAK_FUNC(sub_8312E76C);
PPC_FUNC_IMPL(__imp__sub_8312E76C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x1010028
}

__attribute__((alias("__imp__sub_8312E770"))) PPC_WEAK_FUNC(sub_8312E770);
PPC_FUNC_IMPL(__imp__sub_8312E770) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2010028
}

__attribute__((alias("__imp__sub_8312E774"))) PPC_WEAK_FUNC(sub_8312E774);
PPC_FUNC_IMPL(__imp__sub_8312E774) {
	PPC_FUNC_PROLOGUE();
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312E77C"))) PPC_WEAK_FUNC(sub_8312E77C);
PPC_FUNC_IMPL(__imp__sub_8312E77C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x10100cc
}

__attribute__((alias("__imp__sub_8312E780"))) PPC_WEAK_FUNC(sub_8312E780);
PPC_FUNC_IMPL(__imp__sub_8312E780) {
	PPC_FUNC_PROLOGUE();
	// .long 0x20100cc
}

__attribute__((alias("__imp__sub_8312E784"))) PPC_WEAK_FUNC(sub_8312E784);
PPC_FUNC_IMPL(__imp__sub_8312E784) {
	PPC_FUNC_PROLOGUE();
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312E78C"))) PPC_WEAK_FUNC(sub_8312E78C);
PPC_FUNC_IMPL(__imp__sub_8312E78C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x1010126
}

__attribute__((alias("__imp__sub_8312E790"))) PPC_WEAK_FUNC(sub_8312E790);
PPC_FUNC_IMPL(__imp__sub_8312E790) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2010126
}

__attribute__((alias("__imp__sub_8312E794"))) PPC_WEAK_FUNC(sub_8312E794);
PPC_FUNC_IMPL(__imp__sub_8312E794) {
	PPC_FUNC_PROLOGUE();
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312E79C"))) PPC_WEAK_FUNC(sub_8312E79C);
PPC_FUNC_IMPL(__imp__sub_8312E79C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x1010053
}

__attribute__((alias("__imp__sub_8312E7A0"))) PPC_WEAK_FUNC(sub_8312E7A0);
PPC_FUNC_IMPL(__imp__sub_8312E7A0) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2010053
}

__attribute__((alias("__imp__sub_8312E7A4"))) PPC_WEAK_FUNC(sub_8312E7A4);
PPC_FUNC_IMPL(__imp__sub_8312E7A4) {
	PPC_FUNC_PROLOGUE();
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312E7AC"))) PPC_WEAK_FUNC(sub_8312E7AC);
PPC_FUNC_IMPL(__imp__sub_8312E7AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x1010066
}

__attribute__((alias("__imp__sub_8312E7B0"))) PPC_WEAK_FUNC(sub_8312E7B0);
PPC_FUNC_IMPL(__imp__sub_8312E7B0) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2010066
}

__attribute__((alias("__imp__sub_8312E7B4"))) PPC_WEAK_FUNC(sub_8312E7B4);
PPC_FUNC_IMPL(__imp__sub_8312E7B4) {
	PPC_FUNC_PROLOGUE();
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312E7BC"))) PPC_WEAK_FUNC(sub_8312E7BC);
PPC_FUNC_IMPL(__imp__sub_8312E7BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x10100dc
}

__attribute__((alias("__imp__sub_8312E7C0"))) PPC_WEAK_FUNC(sub_8312E7C0);
PPC_FUNC_IMPL(__imp__sub_8312E7C0) {
	PPC_FUNC_PROLOGUE();
	// .long 0x20100dc
}

__attribute__((alias("__imp__sub_8312E7C4"))) PPC_WEAK_FUNC(sub_8312E7C4);
PPC_FUNC_IMPL(__imp__sub_8312E7C4) {
	PPC_FUNC_PROLOGUE();
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312E7CC"))) PPC_WEAK_FUNC(sub_8312E7CC);
PPC_FUNC_IMPL(__imp__sub_8312E7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x101011b
}

__attribute__((alias("__imp__sub_8312E7D0"))) PPC_WEAK_FUNC(sub_8312E7D0);
PPC_FUNC_IMPL(__imp__sub_8312E7D0) {
	PPC_FUNC_PROLOGUE();
	// .long 0x201011b
}

__attribute__((alias("__imp__sub_8312E7D4"))) PPC_WEAK_FUNC(sub_8312E7D4);
PPC_FUNC_IMPL(__imp__sub_8312E7D4) {
	PPC_FUNC_PROLOGUE();
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312E7DC"))) PPC_WEAK_FUNC(sub_8312E7DC);
PPC_FUNC_IMPL(__imp__sub_8312E7DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x101012e
}

__attribute__((alias("__imp__sub_8312E7E0"))) PPC_WEAK_FUNC(sub_8312E7E0);
PPC_FUNC_IMPL(__imp__sub_8312E7E0) {
	PPC_FUNC_PROLOGUE();
	// .long 0x201012e
}

__attribute__((alias("__imp__sub_8312E7E4"))) PPC_WEAK_FUNC(sub_8312E7E4);
PPC_FUNC_IMPL(__imp__sub_8312E7E4) {
	PPC_FUNC_PROLOGUE();
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312E7EC"))) PPC_WEAK_FUNC(sub_8312E7EC);
PPC_FUNC_IMPL(__imp__sub_8312E7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x10100ee
}

__attribute__((alias("__imp__sub_8312E7F0"))) PPC_WEAK_FUNC(sub_8312E7F0);
PPC_FUNC_IMPL(__imp__sub_8312E7F0) {
	PPC_FUNC_PROLOGUE();
	// .long 0x20100ee
}

__attribute__((alias("__imp__sub_8312E7F4"))) PPC_WEAK_FUNC(sub_8312E7F4);
PPC_FUNC_IMPL(__imp__sub_8312E7F4) {
	PPC_FUNC_PROLOGUE();
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312E7FC"))) PPC_WEAK_FUNC(sub_8312E7FC);
PPC_FUNC_IMPL(__imp__sub_8312E7FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x1010136
}

__attribute__((alias("__imp__sub_8312E800"))) PPC_WEAK_FUNC(sub_8312E800);
PPC_FUNC_IMPL(__imp__sub_8312E800) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2010136
}

__attribute__((alias("__imp__sub_8312E804"))) PPC_WEAK_FUNC(sub_8312E804);
PPC_FUNC_IMPL(__imp__sub_8312E804) {
	PPC_FUNC_PROLOGUE();
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312E80C"))) PPC_WEAK_FUNC(sub_8312E80C);
PPC_FUNC_IMPL(__imp__sub_8312E80C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x10100e8
}

__attribute__((alias("__imp__sub_8312E810"))) PPC_WEAK_FUNC(sub_8312E810);
PPC_FUNC_IMPL(__imp__sub_8312E810) {
	PPC_FUNC_PROLOGUE();
	// .long 0x20100e8
}

__attribute__((alias("__imp__sub_8312E814"))) PPC_WEAK_FUNC(sub_8312E814);
PPC_FUNC_IMPL(__imp__sub_8312E814) {
	PPC_FUNC_PROLOGUE();
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312E81C"))) PPC_WEAK_FUNC(sub_8312E81C);
PPC_FUNC_IMPL(__imp__sub_8312E81C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x10100ef
}

__attribute__((alias("__imp__sub_8312E820"))) PPC_WEAK_FUNC(sub_8312E820);
PPC_FUNC_IMPL(__imp__sub_8312E820) {
	PPC_FUNC_PROLOGUE();
	// .long 0x20100ef
}

__attribute__((alias("__imp__sub_8312E824"))) PPC_WEAK_FUNC(sub_8312E824);
PPC_FUNC_IMPL(__imp__sub_8312E824) {
	PPC_FUNC_PROLOGUE();
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312E82C"))) PPC_WEAK_FUNC(sub_8312E82C);
PPC_FUNC_IMPL(__imp__sub_8312E82C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x10100e4
}

__attribute__((alias("__imp__sub_8312E830"))) PPC_WEAK_FUNC(sub_8312E830);
PPC_FUNC_IMPL(__imp__sub_8312E830) {
	PPC_FUNC_PROLOGUE();
	// .long 0x20100e4
}

__attribute__((alias("__imp__sub_8312E834"))) PPC_WEAK_FUNC(sub_8312E834);
PPC_FUNC_IMPL(__imp__sub_8312E834) {
	PPC_FUNC_PROLOGUE();
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312E83C"))) PPC_WEAK_FUNC(sub_8312E83C);
PPC_FUNC_IMPL(__imp__sub_8312E83C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x10100f1
}

__attribute__((alias("__imp__sub_8312E840"))) PPC_WEAK_FUNC(sub_8312E840);
PPC_FUNC_IMPL(__imp__sub_8312E840) {
	PPC_FUNC_PROLOGUE();
	// .long 0x20100f1
}

__attribute__((alias("__imp__sub_8312E844"))) PPC_WEAK_FUNC(sub_8312E844);
PPC_FUNC_IMPL(__imp__sub_8312E844) {
	PPC_FUNC_PROLOGUE();
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312E84C"))) PPC_WEAK_FUNC(sub_8312E84C);
PPC_FUNC_IMPL(__imp__sub_8312E84C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x10100f0
}

__attribute__((alias("__imp__sub_8312E850"))) PPC_WEAK_FUNC(sub_8312E850);
PPC_FUNC_IMPL(__imp__sub_8312E850) {
	PPC_FUNC_PROLOGUE();
	// .long 0x20100f0
}

__attribute__((alias("__imp__sub_8312E854"))) PPC_WEAK_FUNC(sub_8312E854);
PPC_FUNC_IMPL(__imp__sub_8312E854) {
	PPC_FUNC_PROLOGUE();
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312E85C"))) PPC_WEAK_FUNC(sub_8312E85C);
PPC_FUNC_IMPL(__imp__sub_8312E85C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x10100da
}

__attribute__((alias("__imp__sub_8312E860"))) PPC_WEAK_FUNC(sub_8312E860);
PPC_FUNC_IMPL(__imp__sub_8312E860) {
	PPC_FUNC_PROLOGUE();
	// .long 0x20100da
}

__attribute__((alias("__imp__sub_8312E864"))) PPC_WEAK_FUNC(sub_8312E864);
PPC_FUNC_IMPL(__imp__sub_8312E864) {
	PPC_FUNC_PROLOGUE();
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312E86C"))) PPC_WEAK_FUNC(sub_8312E86C);
PPC_FUNC_IMPL(__imp__sub_8312E86C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x10100fd
}

__attribute__((alias("__imp__sub_8312E870"))) PPC_WEAK_FUNC(sub_8312E870);
PPC_FUNC_IMPL(__imp__sub_8312E870) {
	PPC_FUNC_PROLOGUE();
	// .long 0x20100fd
}

__attribute__((alias("__imp__sub_8312E874"))) PPC_WEAK_FUNC(sub_8312E874);
PPC_FUNC_IMPL(__imp__sub_8312E874) {
	PPC_FUNC_PROLOGUE();
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312E87C"))) PPC_WEAK_FUNC(sub_8312E87C);
PPC_FUNC_IMPL(__imp__sub_8312E87C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x101013b
}

__attribute__((alias("__imp__sub_8312E880"))) PPC_WEAK_FUNC(sub_8312E880);
PPC_FUNC_IMPL(__imp__sub_8312E880) {
	PPC_FUNC_PROLOGUE();
	// .long 0x201013b
}

__attribute__((alias("__imp__sub_8312E884"))) PPC_WEAK_FUNC(sub_8312E884);
PPC_FUNC_IMPL(__imp__sub_8312E884) {
	PPC_FUNC_PROLOGUE();
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312E88C"))) PPC_WEAK_FUNC(sub_8312E88C);
PPC_FUNC_IMPL(__imp__sub_8312E88C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x10101c3
}

__attribute__((alias("__imp__sub_8312E890"))) PPC_WEAK_FUNC(sub_8312E890);
PPC_FUNC_IMPL(__imp__sub_8312E890) {
	PPC_FUNC_PROLOGUE();
	// .long 0x20101c3
}

__attribute__((alias("__imp__sub_8312E894"))) PPC_WEAK_FUNC(sub_8312E894);
PPC_FUNC_IMPL(__imp__sub_8312E894) {
	PPC_FUNC_PROLOGUE();
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312E89C"))) PPC_WEAK_FUNC(sub_8312E89C);
PPC_FUNC_IMPL(__imp__sub_8312E89C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x101004d
}

__attribute__((alias("__imp__sub_8312E8A0"))) PPC_WEAK_FUNC(sub_8312E8A0);
PPC_FUNC_IMPL(__imp__sub_8312E8A0) {
	PPC_FUNC_PROLOGUE();
	// .long 0x201004d
}

__attribute__((alias("__imp__sub_8312E8A4"))) PPC_WEAK_FUNC(sub_8312E8A4);
PPC_FUNC_IMPL(__imp__sub_8312E8A4) {
	PPC_FUNC_PROLOGUE();
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312E8AC"))) PPC_WEAK_FUNC(sub_8312E8AC);
PPC_FUNC_IMPL(__imp__sub_8312E8AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x1010089
}

__attribute__((alias("__imp__sub_8312E8B0"))) PPC_WEAK_FUNC(sub_8312E8B0);
PPC_FUNC_IMPL(__imp__sub_8312E8B0) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2010089
}

__attribute__((alias("__imp__sub_8312E8B4"))) PPC_WEAK_FUNC(sub_8312E8B4);
PPC_FUNC_IMPL(__imp__sub_8312E8B4) {
	PPC_FUNC_PROLOGUE();
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8312E8BC"))) PPC_WEAK_FUNC(sub_8312E8BC);
PPC_FUNC_IMPL(__imp__sub_8312E8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x10100b4
}

__attribute__((alias("__imp__sub_8312E8C0"))) PPC_WEAK_FUNC(sub_8312E8C0);
PPC_FUNC_IMPL(__imp__sub_8312E8C0) {
	PPC_FUNC_PROLOGUE();
	// .long 0x20100b4
}

__attribute__((alias("__imp__sub_8312E8C4"))) PPC_WEAK_FUNC(sub_8312E8C4);
PPC_FUNC_IMPL(__imp__sub_8312E8C4) {
	PPC_FUNC_PROLOGUE();
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

