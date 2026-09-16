#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 15 member(s).
namespace DirectComposition {
class CDynamicPoolSet {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateDynamicPool@CDynamicPoolSet@DirectComposition@@QEAAJPEAPEAVCDynamicPool@2@AEBVSizeU@2@W4DXGI_FORMAT@@_N3@Z
    long AllocateDynamicPool(WindissectOpaque * *, WindissectOpaque const &, int, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@CDynamicPoolSet@DirectComposition@@QEAAXXZ
    void Clear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CollectDeadSurfaces@CDynamicPoolSet@DirectComposition@@QEAAXXZ
    void CollectDeadSurfaces();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlushD2DContexts@CDynamicPoolSet@DirectComposition@@QEAAXXZ
    void FlushD2DContexts();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLastPoolAccessed@CDynamicPoolSet@DirectComposition@@QEBAPEAVCDynamicPool@2@W4DXGI_FORMAT@@_N1@Z
    WindissectOpaque * GetLastPoolAccessed(int, bool, bool) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideSurfaces@CDynamicPoolSet@DirectComposition@@QEAAJXZ
    long HideSurfaces();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CDynamicPoolSet@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OfferSurfaces@CDynamicPoolSet@DirectComposition@@QEAAJXZ
    long OfferSurfaces();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecordUtilizationInfo@CDynamicPoolSet@DirectComposition@@QEAAXXZ
    void RecordUtilizationInfo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseOldestAvailableDynamicPool@CDynamicPoolSet@DirectComposition@@QEAA_NXZ
    bool ReleaseOldestAvailableDynamicPool();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestSurface@CDynamicPoolSet@DirectComposition@@QEAAJAEBVSizeU@2@00W4DXGI_FORMAT@@_N2PEAPEAVCAtlasSurface@2@@Z
    long RequestSurface(WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &, int, bool, bool, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrimPools@CDynamicPoolSet@DirectComposition@@QEAAXXZ
    void TrimPools();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveDynamicPool@CDynamicPoolSet@DirectComposition@@AEAAXPEAVCDynamicPool@2@@Z
    void RemoveDynamicPool(WindissectOpaque *);
};
} // namespace DirectComposition
