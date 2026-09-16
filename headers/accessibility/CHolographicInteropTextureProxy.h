#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 11 member(s).
namespace DirectComposition {
class CHolographicInteropTextureProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CHolographicInteropTextureProxy@DirectComposition@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CHolographicInteropTextureProxy@DirectComposition@@QEAA@I@Z
    CHolographicInteropTextureProxy(unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CHolographicInteropTextureProxy@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CHolographicInteropTextureProxy@DirectComposition@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBindId@CHolographicInteropTextureProxy@DirectComposition@@UEAAJI@Z
    virtual long SetBindId(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFlags@CHolographicInteropTextureProxy@DirectComposition@@UEAAJI@Z
    virtual long SetFlags(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHeight@CHolographicInteropTextureProxy@DirectComposition@@UEAAJI@Z
    virtual long SetHeight(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOffsetX@CHolographicInteropTextureProxy@DirectComposition@@UEAAJH@Z
    virtual long SetOffsetX(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOffsetY@CHolographicInteropTextureProxy@DirectComposition@@UEAAJH@Z
    virtual long SetOffsetY(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRoot@CHolographicInteropTextureProxy@DirectComposition@@UEAAJPEAUIDCompositionVisual@@@Z
    virtual long SetRoot(IDCompositionVisual *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWidth@CHolographicInteropTextureProxy@DirectComposition@@UEAAJI@Z
    virtual long SetWidth(unsigned int);
};
} // namespace DirectComposition
