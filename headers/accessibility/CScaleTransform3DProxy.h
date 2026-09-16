#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 16 member(s).
namespace DirectComposition {
class CScaleTransform3DProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CScaleTransform3DProxy@DirectComposition@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CScaleTransform3DProxy@DirectComposition@@QEAA@I@Z
    CScaleTransform3DProxy(unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CScaleTransform3DProxy@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CScaleTransform3DProxy@DirectComposition@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCenterX@CScaleTransform3DProxy@DirectComposition@@UEAAJM@Z
    virtual long SetCenterX(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCenterX@CScaleTransform3DProxy@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z
    virtual long SetCenterX(IDCompositionAnimation *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCenterY@CScaleTransform3DProxy@DirectComposition@@UEAAJM@Z
    virtual long SetCenterY(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCenterY@CScaleTransform3DProxy@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z
    virtual long SetCenterY(IDCompositionAnimation *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCenterZ@CScaleTransform3DProxy@DirectComposition@@UEAAJM@Z
    virtual long SetCenterZ(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCenterZ@CScaleTransform3DProxy@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z
    virtual long SetCenterZ(IDCompositionAnimation *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetScaleX@CScaleTransform3DProxy@DirectComposition@@UEAAJM@Z
    virtual long SetScaleX(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetScaleX@CScaleTransform3DProxy@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z
    virtual long SetScaleX(IDCompositionAnimation *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetScaleY@CScaleTransform3DProxy@DirectComposition@@UEAAJM@Z
    virtual long SetScaleY(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetScaleY@CScaleTransform3DProxy@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z
    virtual long SetScaleY(IDCompositionAnimation *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetScaleZ@CScaleTransform3DProxy@DirectComposition@@UEAAJM@Z
    virtual long SetScaleZ(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetScaleZ@CScaleTransform3DProxy@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z
    virtual long SetScaleZ(IDCompositionAnimation *);
};
} // namespace DirectComposition
