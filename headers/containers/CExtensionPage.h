#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 3 member(s).
namespace DirectComposition {
class CExtensionPage {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Allocate@CExtensionPage@DirectComposition@@SAPEAV12@PEAVCProxyTable@2@@Z
    static WindissectOpaque * Allocate(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CExtensionPage@DirectComposition@@QEAAXXZ
    void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FromExtensionSlot@CExtensionPage@DirectComposition@@SAPEAV12@PEAX@Z
    static WindissectOpaque * FromExtensionSlot(void *);
};
} // namespace DirectComposition
