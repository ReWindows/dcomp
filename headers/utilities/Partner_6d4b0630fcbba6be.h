#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 4 member(s).
namespace Windows::UI::Composition::KeyFrameAnimation {
class Partner {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIterationCount@Partner@KeyFrameAnimation@Composition@UI@Windows@@UEAAJPEAM@Z
    virtual long GetIterationCount(float *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Partner@KeyFrameAnimation@Composition@UI@Windows@@QEAA@XZ
    Partner();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCustomTimeline@Partner@KeyFrameAnimation@Composition@UI@Windows@@UEAAJPEAUIDCompositionAnimationInstancePartner@@@Z
    virtual long SetCustomTimeline(IDCompositionAnimationInstancePartner *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIterationCount@Partner@KeyFrameAnimation@Composition@UI@Windows@@UEAAJM@Z
    virtual long SetIterationCount(float);
};
} // namespace Windows::UI::Composition::KeyFrameAnimation
