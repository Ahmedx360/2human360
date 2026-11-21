#!/usr/bin/env python3
"""Static startup-import analysis.

Walks the recompiled call graph from the entry point in *source order* (a depth-first walk that visits a callee
where the call appears, which approximates first-call order along the straight-line startup path) and reports
the order in which kernel/XAM imports are first reached, with the call chain that reaches each one.
Indirect calls (vtables, function pointers) and data-dependent branches are NOT followed, so this is a
prioritisation aid for HLE work, not a trace. Confirm with the runtime's fail-fast import log.

usage: startup_import_trace.py --ppc <TooHumanRecompLib/ppc> --manifest <runtime/ppc/title_import_manifest.cpp>
                               --pe <default.exe> [--entry 0x82A46B18] [--out docs/startup-imports.md] [--json out.json]
"""
import argparse, collections, json, re, struct, sys
from pathlib import Path

ap = argparse.ArgumentParser()
ap.add_argument('--ppc', required=True, type=Path)
ap.add_argument('--manifest', required=True, type=Path)
ap.add_argument('--pe', required=True, type=Path, help='default.exe (used only to read thunk records)')
ap.add_argument('--entry', default='0x82A46B18')
ap.add_argument('--out', type=Path)
ap.add_argument('--json', type=Path)
ap.add_argument('--limit', type=int, default=80)
a = ap.parse_args()
entry = int(a.entry, 16)

# --- name <-> address from the generated function map
mapping = {}
for m in re.finditer(r'\{\s*0x([0-9A-Fa-f]+),\s*(\w+)\s*\}', (a.ppc / 'ppc_func_mapping.cpp').read_text()):
    mapping[int(m[1], 16)] = m[2]
by_name = {n: ad for ad, n in mapping.items()}
def addr_of(name):
    if name in by_name: return by_name[name]
    m = re.fullmatch(r'sub_([0-9A-Fa-f]+)', name)
    return int(m[1], 16) if m else None

# --- thunks: [01 lib ord][02 lib ord] mtctr bctr, anywhere in the image
d = a.pe.read_bytes()
W = lambda off: struct.unpack('>I', d[off:off+4])[0]
thunks = {}
for off in range(0x32b000, 0x1183e00 - 16, 4):
    x, y = W(off), W(off + 4)
    if x >> 24 == 1 and y >> 24 == 2 and (x & 0xffffff) == (y & 0xffffff) and W(off+8) == 0x7d6903a6 and W(off+12) == 0x4e800420:
        thunks[0x82000000 + off] = (((x >> 16) & 0xff), x & 0xffff)
LIBS = {0: 'xam.xex', 1: 'xboxkrnl.exe'}
names = {(lib, int(o, 16)): n for lib, o, n in re.findall(r'\{"([\w.]+)",\s*0x([0-9a-fA-F]+),\s*"(\w+)"', a.manifest.read_text())}
imp = {ad: names.get((LIBS[l], o), f'{LIBS[l]}#{o:#x}') for ad, (l, o) in thunks.items()}

# --- call graph from generated sources
calls = {}
def_re = re.compile(r'^PPC_FUNC_IMPL\(__imp__(\w+)\) \{$')
call_re = re.compile(r'^\t(\w+)\(ctx, base\);')
for f in sorted(a.ppc.glob('ppc_recomp.*.cpp')):
    cur = None
    for line in f.read_text(errors='replace').splitlines():
        m = def_re.match(line)
        if m: cur = []; calls[m[1]] = cur; continue
        if cur is not None:
            if line == '}': cur = None; continue
            m = call_re.match(line)
            if m: cur.append(m[1])
print(f'{len(calls)} functions, {len(imp)} import thunks', file=sys.stderr)

entry_name = mapping.get(entry, f'sub_{entry:X}')
seen, order, hits = set(), [], {}
stack = [(entry_name, [entry_name])]
# explicit DFS keeping source order
def visit(name, path):
    if name in seen: return
    seen.add(name)
    ad = addr_of(name)
    if ad in imp:
        if imp[ad] not in hits:
            hits[imp[ad]] = path; order.append(imp[ad])
        return
    for c in calls.get(name, []):
        if len(path) < 400: visit(c, path + [c])
sys.setrecursionlimit(100000)
import threading; threading.stack_size(512*1024*1024)
t = threading.Thread(target=visit, args=(entry_name, [entry_name])); t.start(); t.join()

reach = len(seen)
rows = []
for i, n in enumerate(order, 1):
    p = hits[n]
    rows.append((i, n, len(p) - 1, ' > '.join(p[-4:-1])))
total_imports = len(set(imp.values()))
out = [f'# Startup import order (static)\n',
       f'Entry `{entry_name}` (0x{entry:08X}). Source-order DFS over {len(calls)} recompiled functions; {reach} reached; '
       f'{len(order)} of {total_imports} imports reached by direct calls.\n',
       '> Static approximation: indirect calls and data-dependent branches are not followed. Treat as a priority list; the runtime\'s fail-fast log is the source of truth.\n',
       '| # | Import | depth | via |\n|-|-|-|-|']
out += [f'| {i} | `{n}` | {dep} | `{via}` |' for i, n, dep, via in rows[:a.limit]]
if len(rows) > a.limit: out.append(f'\n…and {len(rows)-a.limit} more (see JSON).')
unreached = sorted(set(imp.values()) - set(order))
out.append(f'\n## Not reached by direct calls ({len(unreached)})\n' + ', '.join(f'`{u}`' for u in unreached))
text = '\n'.join(out) + '\n'
if a.out: a.out.write_text(text)
else: print(text)
if a.json: a.json.write_text(json.dumps({'entry': entry_name, 'order': [{'import': n, 'depth': dep, 'via': via} for _, n, dep, via in rows], 'unreached': unreached}, indent=1))
