#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 4 member(s).
namespace Windows::UI::Composition::VisualIslandSite {
class Private {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?NotifyParentVisualDisposed@Private@VisualIslandSite@Composition@UI@Windows@@UEAAJXZ
    virtual long NotifyParentVisualDisposed();
    // Category: Method | Source: PE Export
    // Symbol: ?NotifyVisualDisposed@Private@VisualIslandSite@Composition@UI@Windows@@UEAAJXZ
    virtual long NotifyVisualDisposed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyVisualDisposingUnderLock@Private@VisualIslandSite@Composition@UI@Windows@@UEAAJXZ
    virtual long NotifyVisualDisposingUnderLock();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Private@VisualIslandSite@Composition@UI@Windows@@QEAA@XZ
    Private();
};
} // namespace Windows::UI::Composition::VisualIslandSite
