#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 3 member(s).
namespace Windows::UI::Composition {
class RedirectedPropertyInfo {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopulateRedirectedInfo@RedirectedPropertyInfo@Composition@UI@Windows@@QEAAXAEBVAnimationPropertyInfo@234@@Z
    void PopulateRedirectedInfo(WindissectOpaque const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RedirectedPropertyInfo@Composition@UI@Windows@@QEAA@$$QEAU0123@@Z
    RedirectedPropertyInfo(WindissectOpaque &&);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RedirectedPropertyInfo@Composition@UI@Windows@@QEAA@XZ
    ~RedirectedPropertyInfo();
};
} // namespace Windows::UI::Composition
