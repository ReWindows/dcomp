#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 5 member(s).
namespace Windows::UI::Composition::DelegatedInkTrailVisual {
class Api {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTrailPoints@Api@DelegatedInkTrailVisual@Composition@UI@Windows@@UEAAJIPEAUInkTrailPoint@345@PEAI@Z
    virtual long AddTrailPoints(unsigned int, WindissectOpaque *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTrailPointsWithPrediction@Api@DelegatedInkTrailVisual@Composition@UI@Windows@@UEAAJIPEAUInkTrailPoint@345@I0PEAI@Z
    virtual long AddTrailPointsWithPrediction(unsigned int, WindissectOpaque *, unsigned int, WindissectOpaque *, unsigned int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@DelegatedInkTrailVisual@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveTrailPoints@Api@DelegatedInkTrailVisual@Composition@UI@Windows@@UEAAJI@Z
    virtual long RemoveTrailPoints(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartNewTrail@Api@DelegatedInkTrailVisual@Composition@UI@Windows@@UEAAJUColor@45@@Z
    virtual long StartNewTrail(::Windows::UI::Color);
};
} // namespace Windows::UI::Composition::DelegatedInkTrailVisual
