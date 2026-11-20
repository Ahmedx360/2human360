#!/usr/bin/env python3
"""Iteratively derive explicit function boundaries for functions whose jump-table case bodies fall
outside the recompiler's detected function size.

Each round: run XenonRecomp, parse 'Switch case at X ... outside function: L' errors, attribute X to the
function the recompiler generated (ppc_func_mapping.cpp), extend it to just before the next function start
after the highest label, write the list into the TOML `functions = [...]` block, repeat until no errors.

usage: fix_switch_functions.py <XenonRecomp> <ppc_context.h> <config.toml> <ppc_dir> [max_rounds]
"""
import bisect, collections, re, subprocess, sys

recomp, ctxh, cfgp, ppc = sys.argv[1:5]
rounds = int(sys.argv[5]) if len(sys.argv) > 5 else 5
BEGIN, END = '# >>> auto functions (fix_switch_functions.py)\n', '# <<< auto functions\n'

def read_cfg():
    s = open(cfgp).read()
    if BEGIN in s:
        a, rest = s.split(BEGIN); _, b = rest.split(END)
        return a, b
    return s, ''

def write_cfg(funcs):
    a, b = read_cfg()
    body = BEGIN + 'functions = [\n' + ''.join('    { address = 0x%08X, size = 0x%X },\n' % f for f in sorted(funcs.items())) + ']\n' + END
    open(cfgp, 'w').write(a.rstrip('\n') + '\n\n' + body + b)

funcs = {}
for n in range(rounds):
    write_cfg(funcs)
    log = subprocess.run([recomp, cfgp, ctxh], capture_output=True, text=True).stdout
    errs = collections.defaultdict(list)  # (function base) -> labels
    for m in re.finditer(r'ERROR: Switch case at ([0-9A-F]+) is trying to jump outside function: ([0-9A-F]+) \(function ([0-9A-F]+) size ([0-9A-F]+)\)', log):
        errs[int(m[3], 16)].append(int(m[2], 16))
    print(f'round {n}: {len(errs)} functions with switch errors, {len(funcs)} manual functions', flush=True)
    if not errs: break
    starts = sorted(int(x, 16) for x in re.findall(r'\{ 0x([0-9A-F]+), sub_', open(f'{ppc}/ppc_func_mapping.cpp').read()))
    for fn, labels in errs.items():
        j = bisect.bisect_right(starts, max(labels))
        if j >= len(starts): continue
        size = starts[j] - fn
        funcs[fn] = max(funcs.get(fn, 0), size)
print('done', len(funcs), 'manual functions', flush=True)
