#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 5 member(s).
namespace Windows::UI::Composition {
class ShapeContainer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleDelayedDestructionRequest@ShapeContainer@Composition@UI@Windows@@UEAA_NXZ
    virtual bool HandleDelayedDestructionRequest();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatesSurfaces@ShapeContainer@Composition@UI@Windows@@UEAA_NXZ
    virtual bool UpdatesSurfaces();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ShapeContainer@Composition@UI@Windows@@UEAA@XZ
    virtual ~ShapeContainer();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@ShapeContainer@Composition@UI@Windows@@IEAAJPEAVCompositor@234@@Z
    long Initialize(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Uninitialize@ShapeContainer@Composition@UI@Windows@@IEAAXXZ
    void Uninitialize();
};
} // namespace Windows::UI::Composition
