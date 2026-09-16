#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 2 member(s).
namespace Windows::UI::Composition::CompositorCommon {
class VelocityPartnerProjectedShadow {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSharedHostProjectedShadowCaster@VelocityPartnerProjectedShadow@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUICompositionProjectedShadowCaster@345@@Z
    virtual long CreateSharedHostProjectedShadowCaster(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenClientProjectedShadowCasterFromHandle@VelocityPartnerProjectedShadow@CompositorCommon@Composition@UI@Windows@@UEAAJ_KPEAPEAUICompositionProjectedShadowCaster@345@@Z
    virtual long OpenClientProjectedShadowCasterFromHandle(uint64_t, WindissectOpaque * *);
};
} // namespace Windows::UI::Composition::CompositorCommon
