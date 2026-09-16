#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 4 member(s).
namespace DirectComposition {
class CDirtyNotifier {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddListener@CDirtyNotifier@DirectComposition@@QEAAJPEAVCDirtyListener@2@@Z
    long AddListener(WindissectOpaque *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateListeners@CDirtyNotifier@DirectComposition@@IEAAXPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    void InvalidateListeners(WindissectOpaque *);
};
} // namespace DirectComposition
