#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 21 member(s).
namespace DirectComposition {
class KernelChannel {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddCrossDeviceVisualChild@KernelChannel@DirectComposition@@UEAAJIPEAVChannel@2@IH0I@Z
    virtual long AddCrossDeviceVisualChild(unsigned int, WindissectOpaque *, unsigned int, int, WindissectOpaque *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CommitChannel@KernelChannel@DirectComposition@@UEAAJPEAKPEAEKPEAXPEBXPEBII@Z
    virtual long CommitChannel(unsigned long *, unsigned char *, unsigned long, void *, void const *, unsigned int const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAndBindSharedSection@KernelChannel@DirectComposition@@UEAAJI_KPEAPEAX@Z
    virtual long CreateAndBindSharedSection(unsigned int, uint64_t, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSharedResourceHandle@KernelChannel@DirectComposition@@UEAAJIPEAPEAX@Z
    virtual long CreateSharedResourceHandle(unsigned int, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBatchId@KernelChannel@DirectComposition@@UEAAJW4DCOMPOSITIONBATCHSELECTOR@@PEAK@Z
    virtual long GetBatchId(int, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeletedResources@KernelChannel@DirectComposition@@UEAAJKPEAPEAXPEAK@Z
    virtual long GetDeletedResources(unsigned long, void * *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFrameIdFromBatchId@KernelChannel@DirectComposition@@UEAAJKPEA_K@Z
    virtual long GetFrameIdFromBatchId(unsigned long, uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFrameStatistics@KernelChannel@DirectComposition@@SAJPEAUDCOMPOSITION_FRAME_STATISTICS@@PEAUCOMPOSITION_CAPABILITY_INFO@@@Z
    static long GetFrameStatistics(DCOMPOSITION_FRAME_STATISTICS *, COMPOSITION_CAPABILITY_INFO *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetID@KernelChannel@DirectComposition@@UEAAIXZ
    virtual unsigned int GetID();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifySuperWetInkWork@KernelChannel@DirectComposition@@UEAAJXZ
    virtual long NotifySuperWetInkWork();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessChannelBatchBuffer@KernelChannel@DirectComposition@@UEAAJIPEAKPEAE@Z
    virtual long ProcessChannelBatchBuffer(unsigned int, unsigned long *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseAllResources@KernelChannel@DirectComposition@@UEAAJPEAE@Z
    virtual long ReleaseAllResources(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveCrossDeviceVisualChild@KernelChannel@DirectComposition@@UEAAJIPEAVChannel@2@I@Z
    virtual long RemoveCrossDeviceVisualChild(unsigned int, WindissectOpaque *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetChannelCommitCompletionEvent@KernelChannel@DirectComposition@@UEAAJPEAXH@Z
    virtual long SetChannelCommitCompletionEvent(void *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetChannelConnectionId@KernelChannel@DirectComposition@@UEAAJH_K@Z
    virtual long SetChannelConnectionId(int, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Synchronize@KernelChannel@DirectComposition@@UEAAJPEA_K@Z
    virtual long Synchronize(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TelemetrySetApplicationId@KernelChannel@DirectComposition@@UEAAJ_KPEBX@Z
    virtual long TelemetrySetApplicationId(uint64_t, void const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForChannel@KernelChannel@DirectComposition@@UEAAJH@Z
    virtual long WaitForChannel(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1KernelChannel@DirectComposition@@UEAA@XZ
    virtual ~KernelChannel();
};
} // namespace DirectComposition
