#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 6 member(s).
namespace Windows::UI::Composition {
class BindableSurface {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveBindPoint@BindableSurface@Composition@UI@Windows@@QEAAXPEAVSurfaceBindPoint@234@@Z
    void RemoveBindPoint(WindissectOpaque *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0BindableSurface@Composition@UI@Windows@@IEAA@XZ
    BindableSurface();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@BindableSurface@Composition@UI@Windows@@MEAAXXZ
    virtual void Destroy();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BindableSurface@Composition@UI@Windows@@MEAA@XZ
    virtual ~BindableSurface();
};
} // namespace Windows::UI::Composition
