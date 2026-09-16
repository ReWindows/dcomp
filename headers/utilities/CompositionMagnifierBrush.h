#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 6 member(s).
namespace Windows::UI::Composition::Internal {
class CompositionMagnifierBrush {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CompositionMagnifierBrush@Internal@Composition@UI@Windows@@QEAA@XZ
    CompositionMagnifierBrush();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetColorTransform@CompositionMagnifierBrush@Internal@Composition@UI@Windows@@QEAAJAEBUCompositionMagnifierBrushColorTransform@2345@@Z
    long SetColorTransform(WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CompositionMagnifierBrush@Internal@Composition@UI@Windows@@UEAA@XZ
    virtual ~CompositionMagnifierBrush();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureSoftwareCursorMode@CompositionMagnifierBrush@Internal@Composition@UI@Windows@@IEAAJXZ
    long EnsureSoftwareCursorMode();
};
} // namespace Windows::UI::Composition::Internal
