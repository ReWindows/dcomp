#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 7 member(s).
namespace Windows::UI::Composition {
class NaturalMotionAnimator {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimatablePropertyInfo@NaturalMotionAnimator@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    virtual bool GetAnimatablePropertyInfo(HSTRING__*, int *, ExpressionObjectPropertyInfo *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Pause@NaturalMotionAnimator@Composition@UI@Windows@@UEAAJXZ
    virtual long Pause();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Seek@NaturalMotionAnimator@Composition@UI@Windows@@UEAAJ_K@Z
    virtual long Seek(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Start@NaturalMotionAnimator@Composition@UI@Windows@@UEAAJXZ
    virtual long Start();
    // Category: Method | Source: PE Export
    // Symbol: ?Stop@NaturalMotionAnimator@Composition@UI@Windows@@UEAAJXZ
    virtual long Stop();
};
} // namespace Windows::UI::Composition
