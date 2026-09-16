#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 6 member(s).
namespace DirectComposition {
class CVirtualSurfaceOptimizer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddVirtualSurface@CVirtualSurfaceOptimizer@DirectComposition@@QEAAXPEAVCVirtualSurface@2@@Z
    void AddVirtualSurface(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveVirtualSurface@CVirtualSurfaceOptimizer@DirectComposition@@QEAAXPEAVCVirtualSurface@2@@Z
    void RemoveVirtualSurface(WindissectOpaque *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OptimizeVirtualSurface@CVirtualSurfaceOptimizer@DirectComposition@@AEAAJPEAVCVirtualSurface@2@_NPEA_N@Z
    long OptimizeVirtualSurface(WindissectOpaque *, bool, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushDownClump@CVirtualSurfaceOptimizer@DirectComposition@@AEAAJPEAVCVirtualSurface@2@PEAVCTileClump@2@@Z
    long PushDownClump(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushDownClumps@CVirtualSurfaceOptimizer@DirectComposition@@AEAAJPEAVCVirtualSurface@2@@Z
    long PushDownClumps(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReclumpVirtualSurface@CVirtualSurfaceOptimizer@DirectComposition@@AEAAJPEAVCVirtualSurface@2@@Z
    long ReclumpVirtualSurface(WindissectOpaque *);
};
} // namespace DirectComposition
