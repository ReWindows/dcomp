#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 8 member(s).
namespace Windows::UI::Composition {
class CompositionContainerShape {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CompositionContainerShape@Composition@UI@Windows@@QEAA@XZ
    CompositionContainerShape();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CompositionContainerShape@Composition@UI@Windows@@UEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RebuildInternal@CompositionContainerShape@Composition@UI@Windows@@UEAAJXZ
    virtual long RebuildInternal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CompositionContainerShape@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z
    long RuntimeClassInitialize(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CompositionContainerShape@Composition@UI@Windows@@UEAA@XZ
    virtual ~CompositionContainerShape();
};
} // namespace Windows::UI::Composition
