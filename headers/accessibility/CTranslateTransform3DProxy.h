#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 10 member(s).
namespace DirectComposition {
class CTranslateTransform3DProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CTranslateTransform3DProxy@DirectComposition@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTranslateTransform3DProxy@DirectComposition@@QEAA@I@Z
    CTranslateTransform3DProxy(unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CTranslateTransform3DProxy@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CTranslateTransform3DProxy@DirectComposition@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOffsetX@CTranslateTransform3DProxy@DirectComposition@@UEAAJM@Z
    virtual long SetOffsetX(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOffsetX@CTranslateTransform3DProxy@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z
    virtual long SetOffsetX(IDCompositionAnimation *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOffsetY@CTranslateTransform3DProxy@DirectComposition@@UEAAJM@Z
    virtual long SetOffsetY(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOffsetY@CTranslateTransform3DProxy@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z
    virtual long SetOffsetY(IDCompositionAnimation *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOffsetZ@CTranslateTransform3DProxy@DirectComposition@@UEAAJM@Z
    virtual long SetOffsetZ(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOffsetZ@CTranslateTransform3DProxy@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z
    virtual long SetOffsetZ(IDCompositionAnimation *);
};
} // namespace DirectComposition
