#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 12 member(s).
namespace DirectComposition {
class CScaleTransformProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CScaleTransformProxy@DirectComposition@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CScaleTransformProxy@DirectComposition@@QEAA@I@Z
    CScaleTransformProxy(unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CScaleTransformProxy@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CScaleTransformProxy@DirectComposition@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCenterX@CScaleTransformProxy@DirectComposition@@UEAAJM@Z
    virtual long SetCenterX(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCenterX@CScaleTransformProxy@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z
    virtual long SetCenterX(IDCompositionAnimation *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCenterY@CScaleTransformProxy@DirectComposition@@UEAAJM@Z
    virtual long SetCenterY(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCenterY@CScaleTransformProxy@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z
    virtual long SetCenterY(IDCompositionAnimation *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetScaleX@CScaleTransformProxy@DirectComposition@@UEAAJM@Z
    virtual long SetScaleX(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetScaleX@CScaleTransformProxy@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z
    virtual long SetScaleX(IDCompositionAnimation *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetScaleY@CScaleTransformProxy@DirectComposition@@UEAAJM@Z
    virtual long SetScaleY(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetScaleY@CScaleTransformProxy@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z
    virtual long SetScaleY(IDCompositionAnimation *);
};
} // namespace DirectComposition
