#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 14 member(s).
namespace Windows::UI::Composition {
class KeyFrameAnimator {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToControllerIfSupported@KeyFrameAnimator@Composition@UI@Windows@@UEAAJPEAVAnimationController@234@@Z
    virtual long AddToControllerIfSupported(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimatablePropertyInfo@KeyFrameAnimator@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    virtual bool GetAnimatablePropertyInfo(HSTRING__*, int *, ExpressionObjectPropertyInfo *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasAnimatableProperty@KeyFrameAnimator@Composition@UI@Windows@@SA_NPEAUHSTRING__@@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    static bool HasAnimatableProperty(HSTRING__*, ExpressionObjectPropertyInfo *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Message_PersistentCache@KeyFrameAnimator@Composition@UI@Windows@@UEAAJIPEBEI@Z
    virtual long Message_PersistentCache(unsigned int, unsigned char const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Pause@KeyFrameAnimator@Composition@UI@Windows@@UEAAJXZ
    virtual long Pause();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Seek@KeyFrameAnimator@Composition@UI@Windows@@UEAAJ_K@Z
    virtual long Seek(uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFinalValueParameter@KeyFrameAnimator@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnimation@234@@Z
    virtual long SetFinalValueParameter(HSTRING__*, HSTRING__*, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Start@KeyFrameAnimator@Composition@UI@Windows@@UEAAJXZ
    virtual long Start();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@KeyFrameAnimator@Composition@UI@Windows@@UEAAJXZ
    virtual long Stop();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetController@KeyFrameAnimator@Composition@UI@Windows@@UEAAJPEAPEAVAnimationController@234@@Z
    virtual long TryGetController(WindissectOpaque * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@KeyFrameAnimator@Composition@UI@Windows@@MEAAXXZ
    virtual void Destroy();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseResources@KeyFrameAnimator@Composition@UI@Windows@@AEAAXXZ
    void ReleaseResources();
};
} // namespace Windows::UI::Composition
