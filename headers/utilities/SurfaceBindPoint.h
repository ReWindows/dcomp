#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 8 member(s).
namespace Windows::UI::Composition {
class SurfaceBindPoint {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@SurfaceBindPoint@Composition@UI@Windows@@QEAAX_N@Z
    void Destroy(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyUnderlyingContentChange@SurfaceBindPoint@Composition@UI@Windows@@QEAAXXZ
    void NotifyUnderlyingContentChange();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSurface@SurfaceBindPoint@Composition@UI@Windows@@QEAAJPEAUICompositionSurface@234@@Z
    long SetSurface(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SurfaceBindPoint@Composition@UI@Windows@@QEAA@XZ
    ~SurfaceBindPoint();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachSurface@SurfaceBindPoint@Composition@UI@Windows@@AEAAJPEAUICompositionSurface@234@@Z
    long AttachSurface(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachSurface@SurfaceBindPoint@Composition@UI@Windows@@AEAAXXZ
    void DetachSurface();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invalidate@SurfaceBindPoint@Composition@UI@Windows@@EEAAXPEAVCDirtyNotifier@DirectComposition@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    virtual void Invalidate(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarshalSurface@SurfaceBindPoint@Composition@UI@Windows@@AEAAXPEAUICompositionSurface@234@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    void MarshalSurface(WindissectOpaque *, WindissectOpaque const *);
};
} // namespace Windows::UI::Composition
