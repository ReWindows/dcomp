#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 3 member(s).
namespace Windows::UI::Composition::CompositionPath {
class Interop {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGeometry@Interop@CompositionPath@Composition@UI@Windows@@UEAAJPEAPEAUID2D1Geometry@@@Z
    virtual long GetGeometry(ID2D1Geometry * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Interop@CompositionPath@Composition@UI@Windows@@QEAA@XZ
    Interop();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetGeometryUsingFactory@Interop@CompositionPath@Composition@UI@Windows@@UEAAJPEAUID2D1Factory@@PEAPEAUID2D1Geometry@@@Z
    virtual long TryGetGeometryUsingFactory(ID2D1Factory *, ID2D1Geometry * *);
};
} // namespace Windows::UI::Composition::CompositionPath
