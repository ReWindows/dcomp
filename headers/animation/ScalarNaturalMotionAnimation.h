#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 9 member(s).
namespace Windows::UI::Composition {
class ScalarNaturalMotionAnimation {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ScalarNaturalMotionAnimation@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ScalarNaturalMotionAnimation@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ScalarNaturalMotionAnimation@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@ScalarNaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAVCompositor@234@@Z
    virtual long RuntimeClassInitialize(WindissectOpaque *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ScalarNaturalMotionAnimation@Composition@UI@Windows@@QEAA@XZ
    ScalarNaturalMotionAnimation();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProperties@ScalarNaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAVNaturalMotionAnimator@234@@Z
    virtual long SetProperties(WindissectOpaque *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetScalarRefValue@ScalarNaturalMotionAnimation@Composition@UI@Windows@@CAJM_NPEAU?$ScalarNullable@M@WRL2@Microsoft@@@Z
    static long SetScalarRefValue(float, bool, WindissectOpaque *);
};
} // namespace Windows::UI::Composition
