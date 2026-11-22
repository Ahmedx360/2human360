# Startup import order (static)

Entry `_xstart` (0x82A46B18). Source-order DFS over 95602 recompiled functions; 623 reached; 37 of 242 imports reached by direct calls.

> Static approximation: indirect calls and data-dependent branches are not followed. Treat as a priority list; the runtime's fail-fast log is the source of truth.

| # | Import | depth | via |
|-|-|-|-|
| 1 | `RtlImageXexHeaderField` | 3 | `_xstart > sub_82A48B68 > sub_82A48A90` |
| 2 | `NtQueryVirtualMemory` | 4 | `sub_82A48B68 > sub_82A48A90 > sub_82A4A3D8` |
| 3 | `NtAllocateVirtualMemory` | 4 | `sub_82A48B68 > sub_82A48A90 > sub_82A4A3D8` |
| 4 | `NtFreeVirtualMemory` | 4 | `sub_82A48B68 > sub_82A48A90 > sub_82A4A3D8` |
| 5 | `KeGetCurrentProcessType` | 4 | `sub_82A48B68 > sub_82A48A90 > sub_82A4A3D8` |
| 6 | `RtlInitializeCriticalSection` | 4 | `sub_82A48B68 > sub_82A48A90 > sub_82A4A3D8` |
| 7 | `HalReturnToFirmware` | 2 | `_xstart > sub_82A48B68` |
| 8 | `RtlEnterCriticalSection` | 2 | `_xstart > sub_82A489B8` |
| 9 | `RtlLeaveCriticalSection` | 2 | `_xstart > sub_82A489B8` |
| 10 | `XexCheckExecutablePrivilege` | 2 | `_xstart > sub_82A46930` |
| 11 | `XGetAVPack` | 2 | `_xstart > sub_82A46930` |
| 12 | `ExGetXConfigSetting` | 2 | `_xstart > sub_82A46930` |
| 13 | `XGetLanguage` | 2 | `_xstart > sub_82A46930` |
| 14 | `NtCreateEvent` | 3 | `_xstart > sub_82A46930 > sub_82A467F0` |
| 15 | `XamShowMessageBoxUIEx` | 3 | `_xstart > sub_82A46930 > sub_82A467F0` |
| 16 | `NtWaitForSingleObjectEx` | 6 | `sub_82A48530 > sub_82A4BE60 > sub_82A4BE68` |
| 17 | `RtlNtStatusToDosError` | 7 | `sub_82A4BE60 > sub_82A4BE68 > sub_82A48438` |
| 18 | `NtClose` | 3 | `_xstart > sub_82A46930 > sub_82A467F0` |
| 19 | `XamLoaderTerminateTitle` | 1 | `_xstart` |
| 20 | `KeTlsAlloc` | 2 | `_xstart > sub_82A4F6F0` |
| 21 | `KeTlsSetValue` | 2 | `_xstart > sub_82A4F6F0` |
| 22 | `KeTlsGetValue` | 7 | `sub_82A52350 > sub_82A4F478 > sub_82A4F3A8` |
| 23 | `KeBugCheckEx` | 8 | `sub_82A4F478 > sub_82A4FC60 > sub_82A4B270` |
| 24 | `RtlCompareMemoryUlong` | 9 | `sub_82A4FC60 > sub_82A4B270 > sub_82A49130` |
| 25 | `RtlRaiseException` | 5 | `sub_82A57EE0 > sub_82A57E08 > sub_82A4A980` |
| 26 | `KeTlsFree` | 3 | `_xstart > sub_82A4F6F0 > sub_82A4F400` |
| 27 | `FscSetCacheElementCount` | 3 | `_xstart > sub_8243C990 > sub_82A45FD8` |
| 28 | `RtlInitAnsiString` | 9 | `sub_82A58060 > sub_82A58018 > sub_82A70EE0` |
| 29 | `KeBugCheck` | 7 | `sub_828223F0 > sub_82A4FB98 > sub_82A4F138` |
| 30 | `XamGetSystemVersion` | 5 | `sub_829E8660 > sub_82D17658 > sub_82D175A0` |
| 31 | `XexGetModuleHandle` | 5 | `sub_829E8660 > sub_82D17658 > sub_82D175A0` |
| 32 | `XexGetProcedureAddress` | 5 | `sub_829E8660 > sub_82D17658 > sub_82D175A0` |
| 33 | `NetDll_XNetStartup` | 5 | `sub_829E8660 > sub_82D17658 > sub_82D175A0` |
| 34 | `NetDll_WSAStartup` | 5 | `sub_829E8660 > sub_82D177F0 > sub_82D17748` |
| 35 | `RtlUnicodeToMultiByteN` | 7 | `sub_828165A8 > sub_82409058 > sub_82A45C30` |
| 36 | `RtlMultiByteToUnicodeN` | 7 | `sub_8233A258 > sub_8233A328 > sub_82A45B58` |
| 37 | `DbgPrint` | 1 | `_xstart` |

## Not reached by direct calls (205)
`DbgBreakPoint`, `ExAllocatePoolTypeWithTag`, `ExCreateThread`, `ExFreePool`, `ExRegisterTitleTerminateNotification`, `ExTerminateThread`, `InterlockedPopEntrySList`, `IoCheckShareAccess`, `IoCompleteRequest`, `IoCreateDevice`, `IoDeleteDevice`, `IoDismountVolume`, `IoDismountVolumeByFileHandle`, `IoInvalidDeviceRequest`, `IoRemoveShareAccess`, `IoSetShareAccess`, `KeAcquireSpinLockAtRaisedIrql`, `KeDelayExecutionThread`, `KeEnableFpuExceptions`, `KeEnterCriticalRegion`, `KeInitializeSemaphore`, `KeLeaveCriticalRegion`, `KeLockL2`, `KeQueryPerformanceFrequency`, `KeQuerySystemTime`, `KeRaiseIrqlToDpcLevel`, `KeReleaseSemaphore`, `KeReleaseSpinLockFromRaisedIrql`, `KeResetEvent`, `KeResumeThread`, `KeSetAffinityThread`, `KeSetBasePriorityThread`, `KeSetEvent`, `KeUnlockL2`, `KeWaitForMultipleObjects`, `KeWaitForSingleObject`, `KfAcquireSpinLock`, `KfLowerIrql`, `KfReleaseSpinLock`, `KiApcNormalRoutineNop`, `MmAllocatePhysicalMemoryEx`, `MmFreePhysicalMemory`, `MmGetPhysicalAddress`, `MmQueryAddressProtect`, `MmSetAddressProtect`, `NetDll_WSAGetLastError`, `NetDll_XNetGetTitleXnAddr`, `NetDll_XNetInAddrToXnAddr`, `NetDll_XNetQosListen`, `NetDll_XNetQosLookup`, `NetDll_XNetQosRelease`, `NetDll_XNetXnAddrToInAddr`, `NetDll_XNetXnAddrToMachineId`, `NetDll___WSAFDIsSet`, `NetDll_accept`, `NetDll_bind`, `NetDll_closesocket`, `NetDll_connect`, `NetDll_getsockname`, `NetDll_getsockopt`, `NetDll_inet_addr`, `NetDll_ioctlsocket`, `NetDll_listen`, `NetDll_recv`, `NetDll_recvfrom`, `NetDll_select`, `NetDll_send`, `NetDll_sendto`, `NetDll_setsockopt`, `NetDll_socket`, `NtAllocateEncryptedMemory`, `NtCancelTimer`, `NtClearEvent`, `NtCreateFile`, `NtCreateSemaphore`, `NtCreateTimer`, `NtDeviceIoControlFile`, `NtDuplicateObject`, `NtFlushBuffersFile`, `NtFreeEncryptedMemory`, `NtOpenFile`, `NtQueryDirectoryFile`, `NtQueryFullAttributesFile`, `NtQueryInformationFile`, `NtQueryVolumeInformationFile`, `NtReadFile`, `NtReadFileScatter`, `NtReleaseSemaphore`, `NtResumeThread`, `NtSetEvent`, `NtSetInformationFile`, `NtSetTimerEx`, `NtSuspendThread`, `NtWaitForMultipleObjectsEx`, `NtWriteFile`, `ObCreateSymbolicLink`, `ObDeleteSymbolicLink`, `ObDereferenceObject`, `ObIsTitleObject`, `ObReferenceObject`, `ObReferenceObjectByHandle`, `RtlCaptureContext`, `RtlCompareStringN`, `RtlFillMemoryUlong`, `RtlFreeAnsiString`, `RtlInitUnicodeString`, `RtlInitializeCriticalSectionAndSpinCount`, `RtlTimeFieldsToTime`, `RtlTimeToTimeFields`, `RtlTryEnterCriticalSection`, `RtlUnicodeStringToAnsiString`, `RtlUnwind`, `RtlUpcaseUnicodeChar`, `StfsControlDevice`, `StfsCreateDevice`, `VdCallGraphicsNotificationRoutines`, `VdEnableDisableClockGating`, `VdEnableRingBufferRPtrWriteBack`, `VdGetCurrentDisplayGamma`, `VdGetCurrentDisplayInformation`, `VdGetSystemCommandBuffer`, `VdInitializeEngines`, `VdInitializeRingBuffer`, `VdInitializeScalerCommandBuffer`, `VdIsHSIOTrainingSucceeded`, `VdPersistDisplay`, `VdQueryVideoFlags`, `VdQueryVideoMode`, `VdRetrainEDRAM`, `VdRetrainEDRAMWorker`, `VdSetDisplayMode`, `VdSetGraphicsInterruptCallback`, `VdSetSystemCommandBufferGpuIdentifierAddress`, `VdShutdownEngines`, `VdSwap`, `XAudioGetSpeakerConfig`, `XAudioGetVoiceCategoryVolume`, `XAudioGetVoiceCategoryVolumeChangeMask`, `XAudioRegisterRenderDriverClient`, `XAudioSubmitRenderDriverFrame`, `XAudioUnregisterRenderDriverClient`, `XGetGameRegion`, `XGetVideoMode`, `XMACreateContext`, `XMAReleaseContext`, `XMsgCancelIORequest`, `XMsgInProcessCall`, `XMsgStartIORequest`, `XMsgStartIORequestEx`, `XNotifyGetNext`, `XNotifyPositionUI`, `XamAlloc`, `XamContentClose`, `XamContentCreateEnumerator`, `XamContentCreateEx`, `XamContentDelete`, `XamContentFlush`, `XamContentGetDeviceData`, `XamContentGetDeviceState`, `XamEnumerate`, `XamFree`, `XamGetExecutionId`, `XamInputGetCapabilities`, `XamInputGetKeystrokeEx`, `XamInputGetState`, `XamInputSetState`, `XamLoaderLaunchTitle`, `XamNotifyCreateListener`, `XamSessionCreateHandle`, `XamSessionRefObjByHandle`, `XamShowAchievementsUI`, `XamShowDeviceSelectorUI`, `XamShowDirtyDiscErrorUI`, `XamShowGamerCardUIForXUID`, `XamShowKeyboardUI`, `XamShowMarketplaceUI`, `XamShowPlayerReviewUI`, `XamShowSigninUI`, `XamTaskCloseHandle`, `XamTaskSchedule`, `XamTaskShouldExit`, `XamUserAreUsersFriends`, `XamUserCheckPrivilege`, `XamUserCreateStatsEnumerator`, `XamUserGetName`, `XamUserGetSigninInfo`, `XamUserGetSigninState`, `XamUserGetXUID`, `XamUserReadProfileSettings`, `XamVoiceClose`, `XamVoiceCreate`, `XamVoiceHeadsetPresent`, `XamVoiceSubmitPacket`, `XeCryptSha`, `XeCryptShaFinal`, `XeCryptShaInit`, `XeCryptShaUpdate`, `XeKeysConsolePrivateKeySign`, `XeKeysConsoleSignatureVerification`, `XexGetModuleSection`, `__C_specific_handler`, `_snprintf`, `_vsnprintf`, `sprintf`, `vswprintf`
