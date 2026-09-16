#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 7 member(s).
namespace DirectComposition {
class CScratchSurface {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CScratchSurface@DirectComposition@@SAJPEAVCScratchSurfaceManager@2@AEBVSizeU@2@W4DXGI_FORMAT@@PEAPEAV12@@Z
    static long Create(WindissectOpaque *, WindissectOpaque const &, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Dispose@CScratchSurface@DirectComposition@@QEAAXXZ
    void Dispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CScratchSurface@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTexture@CScratchSurface@DirectComposition@@AEAAJPEAVCDxDevice@2@@Z
    long CreateTexture(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CScratchSurface@DirectComposition@@EEAA@XZ
    virtual ~CScratchSurface();
};
} // namespace DirectComposition
