#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 8 member(s).
namespace DirectComposition {
class CGdiSpriteBitmapProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CGdiSpriteBitmapProxy@DirectComposition@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CGdiSpriteBitmapProxy@DirectComposition@@QEAA@I@Z
    CGdiSpriteBitmapProxy(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DirtyRectangles@CGdiSpriteBitmapProxy@DirectComposition@@UEAAJPEBUtagRECT@@I@Z
    virtual long DirtyRectangles(tagRECT const *, unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CGdiSpriteBitmapProxy@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CGdiSpriteBitmapProxy@DirectComposition@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDirtyFromAccumulation@CGdiSpriteBitmapProxy@DirectComposition@@UEAAJH@Z
    virtual long SetDirtyFromAccumulation(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMargins@CGdiSpriteBitmapProxy@DirectComposition@@UEAAJAEBU_MARGINS@@@Z
    virtual long SetMargins(_MARGINS const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPixelFormat@CGdiSpriteBitmapProxy@DirectComposition@@UEAAJW4DXGI_FORMAT@@@Z
    virtual long SetPixelFormat(int);
};
} // namespace DirectComposition
