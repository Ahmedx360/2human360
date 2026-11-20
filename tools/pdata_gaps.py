#!/usr/bin/env python3
"""Report .pdata coverage gaps in the Too Human PE (usage: pdata_gaps.py default.exe)."""
import struct, sys
d = open(sys.argv[1], 'rb').read()
PDATA_RAW, PDATA_SIZE = 0x29ce00, 0x8e200  # from section table (raw == RVA for .pdata)
ents = [struct.unpack('>II', d[PDATA_RAW+i*8:PDATA_RAW+i*8+8]) for i in range(PDATA_SIZE//8)]
fl = lambda dat: (dat >> 8) & 0x3fffff
gaps = [(b, b+fl(x)*4, nb) for (b, x), (nb, _) in zip(ents, ents[1:]) if b+fl(x)*4 < nb]
print(f"{len(ents)} pdata entries, {len(gaps)} followed by an uncovered gap")
for b, end, nb in gaps[:20]:
    print(f"  fn 0x{b:08X} ends 0x{end:08X}, next starts 0x{nb:08X} (gap {nb-end} bytes)")
