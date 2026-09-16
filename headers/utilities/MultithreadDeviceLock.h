#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 3 member(s).
namespace DirectComposition {
class MultithreadDeviceLock {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Enter@MultithreadDeviceLock@DirectComposition@@SAXPEBVCDxDevice@2@@Z
    static void Enter(WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Leave@MultithreadDeviceLock@DirectComposition@@SAXPEBVCDxDevice@2@@Z
    static void Leave(WindissectOpaque const *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MultithreadDeviceLock@DirectComposition@@QEAA@PEBVCDxDevice@1@@Z
    MultithreadDeviceLock(WindissectOpaque const *);
};
} // namespace DirectComposition
