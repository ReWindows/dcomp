#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 8 member(s).
namespace DirectComposition {
class CDynamicPool {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDynamicPool@DirectComposition@@QEAA@PEAVCAtlasSurfacePool@1@@Z
    CDynamicPool(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWhitePixelSurface@CDynamicPool@DirectComposition@@QEAAJXZ
    long CreateWhitePixelSurface();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CDynamicPool@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAvailable@CDynamicPool@DirectComposition@@QEAA_NXZ
    bool IsAvailable();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocAtlasNode@CDynamicPool@DirectComposition@@AEAAJAEBVSizeU@2@PEAPEAVCAtlasNode@2@@Z
    long AllocAtlasNode(WindissectOpaque const &, WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDynamicPool@DirectComposition@@EEAA@XZ
    virtual ~CDynamicPool();
};
} // namespace DirectComposition
