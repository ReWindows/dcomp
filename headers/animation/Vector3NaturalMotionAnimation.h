#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 9 member(s).
namespace Windows::UI::Composition {
class Vector3NaturalMotionAnimation {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@Vector3NaturalMotionAnimation@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@Vector3NaturalMotionAnimation@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@Vector3NaturalMotionAnimation@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@Vector3NaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAVCompositor@234@@Z
    virtual long RuntimeClassInitialize(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProperties@Vector3NaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAVNaturalMotionAnimator@234@@Z
    virtual long SetProperties(WindissectOpaque *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Vector3NaturalMotionAnimation@Composition@UI@Windows@@QEAA@XZ
    Vector3NaturalMotionAnimation();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVector3RefValue@Vector3NaturalMotionAnimation@Composition@UI@Windows@@CAJUVector3@Numerics@Foundation@4@_NPEAU?$ScalarNullable@UVector3@Numerics@Foundation@Windows@@@WRL2@Microsoft@@@Z
    static long SetVector3RefValue(WindissectOpaque, bool, WindissectOpaque *);
};
} // namespace Windows::UI::Composition
