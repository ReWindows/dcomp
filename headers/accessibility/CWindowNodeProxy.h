#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 20 member(s).
namespace DirectComposition {
class CWindowNodeProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CWindowNodeProxy@DirectComposition@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CWindowNodeProxy@DirectComposition@@QEAA@I@Z
    CWindowNodeProxy(unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CWindowNodeProxy@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CWindowNodeProxy@DirectComposition@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAlphaMargins@CWindowNodeProxy@DirectComposition@@UEAAJAEBU_MARGINS@@@Z
    virtual long SetAlphaMargins(_MARGINS const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContentRelativeClientRect@CWindowNodeProxy@DirectComposition@@UEAAJAEBUtagRECT@@@Z
    virtual long SetContentRelativeClientRect(tagRECT const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContentRelativeWindowRect@CWindowNodeProxy@DirectComposition@@UEAAJAEBUtagRECT@@@Z
    virtual long SetContentRelativeWindowRect(tagRECT const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContentSize@CWindowNodeProxy@DirectComposition@@UEAAJAEBUD2D_SIZE_U@@@Z
    virtual long SetContentSize(D2D_SIZE_U const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetExtendedBounds@CWindowNodeProxy@DirectComposition@@UEAAJAEBUtagRECT@@@Z
    virtual long SetExtendedBounds(tagRECT const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFlipExSurface@CWindowNodeProxy@DirectComposition@@UEAAJPEAX@Z
    virtual long SetFlipExSurface(void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFlipExSurfaceClip@CWindowNodeProxy@DirectComposition@@UEAAJPEAUIDCompositionRegionClipPartner@@@Z
    virtual long SetFlipExSurfaceClip(IDCompositionRegionClipPartner *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsClipToDirty@CWindowNodeProxy@DirectComposition@@UEAAJ_N@Z
    virtual long SetIsClipToDirty(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsComposeOnce@CWindowNodeProxy@DirectComposition@@UEAAJ_N@Z
    virtual long SetIsComposeOnce(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsCursor@CWindowNodeProxy@DirectComposition@@UEAAJ_N@Z
    virtual long SetIsCursor(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsLayoutRTL@CWindowNodeProxy@DirectComposition@@UEAAJ_N@Z
    virtual long SetIsLayoutRTL(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMaximizedClipMargins@CWindowNodeProxy@DirectComposition@@UEAAJAEBU_MARGINS@@@Z
    virtual long SetMaximizedClipMargins(_MARGINS const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSourceModifications@CWindowNodeProxy@DirectComposition@@UEAAJW4DCOMPOSITION_WINDOWNODE_SOURCE_MODIFICATIONS_FLAGS@@KK_N@Z
    virtual long SetSourceModifications(int, unsigned long, unsigned long, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSpriteBitmap@CWindowNodeProxy@DirectComposition@@UEAAJPEAUIDCompositionGdiSpriteBitmapPartner@@@Z
    virtual long SetSpriteBitmap(IDCompositionGdiSpriteBitmapPartner *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSpriteClip@CWindowNodeProxy@DirectComposition@@UEAAJPEAUIDCompositionRegionClipPartner@@@Z
    virtual long SetSpriteClip(IDCompositionRegionClipPartner *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSpriteHandle@CWindowNodeProxy@DirectComposition@@UEAAJPEAUHSPRITE__@@@Z
    virtual long SetSpriteHandle(HSPRITE__*);
};
} // namespace DirectComposition
