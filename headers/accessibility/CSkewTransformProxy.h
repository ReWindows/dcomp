#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 12 member(s).
namespace DirectComposition {
class CSkewTransformProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSkewTransformProxy@DirectComposition@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSkewTransformProxy@DirectComposition@@QEAA@I@Z
    CSkewTransformProxy(unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSkewTransformProxy@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSkewTransformProxy@DirectComposition@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAngleX@CSkewTransformProxy@DirectComposition@@UEAAJM@Z
    virtual long SetAngleX(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAngleX@CSkewTransformProxy@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z
    virtual long SetAngleX(IDCompositionAnimation *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAngleY@CSkewTransformProxy@DirectComposition@@UEAAJM@Z
    virtual long SetAngleY(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAngleY@CSkewTransformProxy@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z
    virtual long SetAngleY(IDCompositionAnimation *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCenterX@CSkewTransformProxy@DirectComposition@@UEAAJM@Z
    virtual long SetCenterX(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCenterX@CSkewTransformProxy@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z
    virtual long SetCenterX(IDCompositionAnimation *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCenterY@CSkewTransformProxy@DirectComposition@@UEAAJM@Z
    virtual long SetCenterY(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCenterY@CSkewTransformProxy@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z
    virtual long SetCenterY(IDCompositionAnimation *);
};
} // namespace DirectComposition
