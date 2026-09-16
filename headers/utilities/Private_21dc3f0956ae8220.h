#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 5 member(s).
namespace Windows::UI::Composition::CompositionAnchor {
class Private {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddListener@Private@CompositionAnchor@Composition@UI@Windows@@UEAAJPEAUICompositionAnchorListenerPrivate@1345@E@Z
    virtual long AddListener(WindissectOpaque *, unsigned char);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Private@CompositionAnchor@Composition@UI@Windows@@QEAA@XZ
    Private();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveListener@Private@CompositionAnchor@Composition@UI@Windows@@UEAAJPEAUICompositionAnchorListenerPrivate@1345@@Z
    virtual long RemoveListener(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AccumulatedScale@Private@CompositionAnchor@Composition@UI@Windows@@UEAAJPEAM@Z
    virtual long get_AccumulatedScale(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UpVector@Private@CompositionAnchor@Composition@UI@Windows@@UEAAJPEAUVector3@Numerics@Foundation@5@@Z
    virtual long get_UpVector(WindissectOpaque*);
};
} // namespace Windows::UI::Composition::CompositionAnchor
