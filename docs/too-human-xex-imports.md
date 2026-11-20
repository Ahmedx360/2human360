# Too Human XEX import inventory

Source: the user-supplied decrypted `Default.xex` (SHA-256
`61b25355eaf9a621e7b12cf72b75a53c825382e5538eba6141af678d91c93e80`).
The XEX itself is not stored in this repository.

## Image and startup metadata

| Field | Value |
|---|---:|
| XEX format | XEX2 |
| Encryption | None |
| Compression | Basic block compression |
| XEX security image size | `0x01460000` |
| Reconstructed payload size | `0x01458000` |
| PE image base | `0x82000000` |
| PE `SizeOfImage` | `0x017AFE00` |
| Entry point | `0x82A46B18` |
| Default stack size | `0x00040000` (256 KiB) |
| Default heap size | Not present in the optional-header table |
| TLS slots | 64 |
| TLS template | `0x83390800` |
| TLS initialized/raw size | `0x450` |

The reconstructed XEX payload is already arranged at guest RVA offsets. It must
not be treated as a conventional raw PE file and recopied from
`PointerToRawData`; the direct XEX loader preserves the decompressed guest
layout and pads it to the PE `SizeOfImage`.

## Imported libraries

Both records declare version `0x201B5300` (2.27.83.0) and minimum version
`0x201A2200` (2.26.34.0).

| Library | Library ID | Descriptor records | Function thunks | Function IAT slots | True variable imports |
|---|---:|---:|---:|---:|---:|
| `xam.xex` | `0xFCA15C76` | 164 | 82 | 82 | 0 |
| `xboxkrnl.exe` | `0x45DC17E0` | 331 | 160 | 160 | 11 |
| **Total** | | **495** | **242** | **242** | **11** |

A function import is represented by a type-0 IAT slot followed by its matching
type-1 guest code thunk. The loader now recognizes that pair and patches the
IAT slot to the thunk address before applying the image's final page
protections. Unpaired type-0 records are variable exports and are not sent to
the function trampoline registry.

## The 11 kernel data exports

Names are resolved from the pinned XenonRecomp/Xenia Xbox export table.

| Ordinal | Export |
|---:|---|
| `0x001B` | `ExThreadObjectType` |
| `0x0059` | `KeDebugMonitorData` |
| `0x00AD` | `KeTimeStampBundle` |
| `0x0156` | `XboxHardwareInfo` |
| `0x0158` | `XboxKrnlVersion` |
| `0x0193` | `XexExecutableModuleHandle` |
| `0x01AE` | `ExLoadedCommandLine` |
| `0x01BE` | `VdGlobalDevice` |
| `0x01C0` | `VdGpuClockInMHz` |
| `0x01C1` | `VdHSIOCalibrationLock` |
| `0x0266` | `KeCertMonitorData` |

The runtime now allocates guest backing storage for all 11 variables and patches
their IAT slots before image protections. Hardware/version/command-line/module-
handle values are initialized and KeTimeStampBundle is updated every millisecond.
Object-type, monitor, device and critical-section semantics remain partial.

## Import name manifest

`runtime/ppc/title_import_manifest.cpp` contains all 253 exact
(library, ordinal, export-name, function/variable) entries for this executable.
The audit tool prints those names alongside the raw descriptor records.
