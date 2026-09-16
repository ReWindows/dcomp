#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 9 member(s).
namespace Windows::UI::Composition {
class NaturalMotionAnimation {
public:
    class Api;
    class Internal;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@NaturalMotionAnimation@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimatablePropertyInfo@NaturalMotionAnimation@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    virtual bool GetAnimatablePropertyInfo(HSTRING__*, int *, ExpressionObjectPropertyInfo *, int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0NaturalMotionAnimation@Composition@UI@Windows@@QEAA@XZ
    NaturalMotionAnimation();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@NaturalMotionAnimation@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@NaturalMotionAnimation@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProperties@NaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAVNaturalMotionAnimator@234@@Z
    virtual long SetProperties(WindissectOpaque *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDelayTime@NaturalMotionAnimation@Composition@UI@Windows@@AEAAJUTimeSpan@Foundation@4@@Z
    long SetDelayTime(WindissectOpaque);
};
} // namespace Windows::UI::Composition
