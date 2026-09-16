#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 5 member(s).
namespace Windows::UI::Composition::ColorKeyFrameAnimation {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@ColorKeyFrameAnimation@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertKeyFrame@Api@ColorKeyFrameAnimation@Composition@UI@Windows@@UEAAJMUColor@45@@Z
    virtual long InsertKeyFrame(float, ::Windows::UI::Color);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertKeyFrameWithEasingFunction@Api@ColorKeyFrameAnimation@Composition@UI@Windows@@UEAAJMUColor@45@PEAUICompositionEasingFunction@345@@Z
    virtual long InsertKeyFrameWithEasingFunction(float, ::Windows::UI::Color, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InterpolationColorSpace@Api@ColorKeyFrameAnimation@Composition@UI@Windows@@UEAAJPEAW4CompositionColorSpace@345@@Z
    virtual long get_InterpolationColorSpace(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_InterpolationColorSpace@Api@ColorKeyFrameAnimation@Composition@UI@Windows@@UEAAJW4CompositionColorSpace@345@@Z
    virtual long put_InterpolationColorSpace(int);
};
} // namespace Windows::UI::Composition::ColorKeyFrameAnimation
