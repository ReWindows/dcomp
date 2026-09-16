#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 3 member(s).
namespace Windows::UI::Composition::CompositorCommon {
class VelocityProjectedShadow {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateProjectedShadow@VelocityProjectedShadow@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUICompositionProjectedShadow@345@@Z
    virtual long CreateProjectedShadow(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateProjectedShadowCaster@VelocityProjectedShadow@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUICompositionProjectedShadowCaster@345@@Z
    virtual long CreateProjectedShadowCaster(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateProjectedShadowReceiver@VelocityProjectedShadow@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUICompositionProjectedShadowReceiver@345@@Z
    virtual long CreateProjectedShadowReceiver(WindissectOpaque * *);
};
} // namespace Windows::UI::Composition::CompositorCommon
