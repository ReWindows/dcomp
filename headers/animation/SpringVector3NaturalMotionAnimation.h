#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 7 member(s).
namespace Windows::UI::Composition {
class SpringVector3NaturalMotionAnimation {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@SpringVector3NaturalMotionAnimation@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimatedProperties@SpringVector3NaturalMotionAnimation@Composition@UI@Windows@@UEBA?AV?$span@QEBUAnimatedProperty@AnimationHelper@Composition@UI@Windows@@$0?0@gsl@@XZ
    virtual WindissectOpaque GetAnimatedProperties() const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@SpringVector3NaturalMotionAnimation@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@SpringVector3NaturalMotionAnimation@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProperties@SpringVector3NaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAVNaturalMotionAnimator@234@@Z
    virtual long SetProperties(WindissectOpaque *);
};
} // namespace Windows::UI::Composition
