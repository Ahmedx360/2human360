#!/usr/bin/env python3
"""Add jump tables XenonAnalyse misses: 'computed offset' tables with a nop between mtctr and bctr.
Pattern: lis/addi (table ptr); lbzx|lhzx r0,r12,rIdx; slwi r0,r0,N; lis/addi (code base); add; mtctr; nop; bctr
usage: add_nop_switch_tables.py default.exe switch_tables.toml 0xBCTR_ADDR [...]"""
import struct, sys
d = open(sys.argv[1], 'rb').read()
w = lambda va: struct.unpack('>I', d[va-0x82000000:va-0x82000000+4])[0]
sx = lambda v: v - 0x10000 if v & 0x8000 else v
# .pdata begin addresses (function starts)
PD, PN = 0x29ce00, 0x8e200 // 8
pdata = sorted(struct.unpack('>I', d[PD+i*8:PD+i*8+4])[0] for i in range(PN))
out = []
for site in (int(a, 16) for a in sys.argv[3:]):
    assert w(site) == 0x4e800420 and w(site-4) == 0x60000000
    ws = {va: w(va) for va in range(site-0x60, site, 4)}
    # walk back: mtctr, add, addi(code base), lis, rlwinm(shift), lbzx/lhzx, addi, lis
    va = site - 8; assert ws[va] >> 26 == 31 and (ws[va] >> 1) & 0x3ff == 467          # mtctr
    va -= 4; assert (ws[va] >> 1) & 0x3ff == 266                                         # add
    va -= 4; base_lo = sx(ws[va] & 0xffff)
    va -= 4; base_hi = ws[va] & 0xffff
    code_base = (base_hi << 16) + base_lo
    # variant A: lbzx/lhzx idx ; rlwinm (shift the loaded value)      -> value << SH
    # variant B: rlwinm (scale the index) ; lhzx                       -> value as is
    va -= 4; w1 = ws[va]
    if w1 >> 26 == 21:                                   # A
        shift = (w1 >> 11) & 31
        va -= 4; ld = ws[va]; xop = (ld >> 1) & 0x3ff; assert xop in (87, 279)
        idx = (ld >> 11) & 31
    else:                                                # B
        ld = w1; xop = (ld >> 1) & 0x3ff; assert xop in (87, 279), hex(site)
        shift = 0
        va -= 4; rl = ws[va]; assert rl >> 26 == 21
        idx = (rl >> 21) & 31                            # RS = real index register
    size = 1 if xop == 87 else 2
    va -= 4; tlo = sx(ws[va] & 0xffff)
    va -= 4; thi = ws[va] & 0xffff
    table = ((thi << 16) + tlo) & 0xffffffff
    # bounds check: nearest cmplwi before the table setup, followed by a bgt/bge (default)
    cnt = default = None
    for v in range(va - 4, va - 0x80, -4):
        if w(v) >> 26 == 10:
            bcs = [(v + k, w(v + k)) for k in (4, 8) if w(v + k) >> 26 == 16]
            if not bcs:
                continue
            cnt = (w(v) & 0xffff) + 1
            at, bc = bcs[0]
            default = at + sx(bc & 0xfffc)
            break
    rd = (lambda a: d[a-0x82000000]) if size == 1 else (lambda a: struct.unpack('>H', d[a-0x82000000:a-0x82000000+2])[0])
    if cnt is None or cnt < 3:
        # No bounds check (index is trusted): read entries while the target stays inside the function,
        # i.e. before the next .pdata function start.
        nxt = min(b for b in pdata if b > site)
        cnt = 0
        while cnt < 512 and site + 4 <= code_base + (rd(table + cnt*size) << shift) < nxt:
            cnt += 1
        default = code_base + (rd(table) << shift)
        print('  no bounds check: inferred', cnt, 'entries (function end', hex(nxt) + ')')
    labels = [code_base + (rd(table + i*size) << shift) for i in range(cnt)]
    print(hex(site), 'table', hex(table), 'size', size, 'shift', shift, 'idx r%d' % idx, 'count', cnt, 'default', hex(default))
    out.append('[[switch]]\nbase = 0x%08X\nr = %d\ndefault = 0x%08X\nlabels = [\n%s]\n' % (site, idx, default, ''.join('    0x%08X,\n' % l for l in labels)))
open(sys.argv[2], 'a').write('# ---- NOP-PADDED COMPUTED JUMPTABLES (add_nop_switch_tables.py) ----\n' + '\n'.join(out))
