#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 13 member(s).
namespace DirectComposition {
class CPrimitiveColorProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CPrimitiveColorProxy@DirectComposition@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CPrimitiveColorProxy@DirectComposition@@QEAA@I@Z
    CPrimitiveColorProxy(unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CPrimitiveColorProxy@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CPrimitiveColorProxy@DirectComposition@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAlpha@CPrimitiveColorProxy@DirectComposition@@UEAAJM@Z
    virtual long SetAlpha(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAlpha@CPrimitiveColorProxy@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z
    virtual long SetAlpha(IDCompositionAnimation *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBlue@CPrimitiveColorProxy@DirectComposition@@UEAAJM@Z
    virtual long SetBlue(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBlue@CPrimitiveColorProxy@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z
    virtual long SetBlue(IDCompositionAnimation *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGreen@CPrimitiveColorProxy@DirectComposition@@UEAAJM@Z
    virtual long SetGreen(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGreen@CPrimitiveColorProxy@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z
    virtual long SetGreen(IDCompositionAnimation *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRed@CPrimitiveColorProxy@DirectComposition@@UEAAJM@Z
    virtual long SetRed(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRed@CPrimitiveColorProxy@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z
    virtual long SetRed(IDCompositionAnimation *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@CPrimitiveColorProxy@DirectComposition@@UEAAJAEBU_D3DCOLORVALUE@@@Z
    virtual long SetValue(_D3DCOLORVALUE const &);
};
} // namespace DirectComposition
