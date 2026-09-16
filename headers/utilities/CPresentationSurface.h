#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 34 member(s).
class CPresentationSurface {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CPresentationSurface@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CPresentationSurface@@SAJPEAVCPresentationManager@@_KPEAXPEAPEAV1@@Z
    static long Create(CPresentationManager *, uint64_t, void *, CPresentationSurface * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAlphaMode@CPresentationSurface@@UEAA?AW4DXGI_ALPHA_MODE@@XZ
    virtual int GetAlphaMode();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBoundDxTextureNoRef@CPresentationSurface@@UEAAPEAUIUnknown@@XZ
    virtual IUnknown * GetBoundDxTextureNoRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColorSpace@CPresentationSurface@@UEAA?AW4DXGI_COLOR_SPACE_TYPE@@XZ
    virtual int GetColorSpace();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSourceRect@CPresentationSurface@@UEAA?AUtagRECT@@XZ
    virtual tagRECT GetSourceRect();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrePresent@CPresentationSurface@@UEAAJXZ
    virtual long PrePresent();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CPresentationSurface@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CPresentationSurface@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RestrictToOutput@CPresentationSurface@@UEAAJPEAUIUnknown@@@Z
    virtual long RestrictToOutput(IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAlphaMode@CPresentationSurface@@UEAAJW4DXGI_ALPHA_MODE@@@Z
    virtual long SetAlphaMode(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBuffer@CPresentationSurface@@UEAAJPEAUIPresentationBuffer@@@Z
    virtual long SetBuffer(IPresentationBuffer *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetColorSpace@CPresentationSurface@@UEAAJW4DXGI_COLOR_SPACE_TYPE@@@Z
    virtual long SetColorSpace(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDisableReadback@CPresentationSurface@@UEAAJE@Z
    virtual long SetDisableReadback(unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetForCompositionTextures@CPresentationSurface@@UEAAXXZ
    virtual void SetForCompositionTextures();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsHdrContent@CPresentationSurface@@UEAAXE@Z
    virtual void SetIsHdrContent(unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLetterboxingMargins@CPresentationSurface@@UEAAJMMMM@Z
    virtual long SetLetterboxingMargins(float, float, float, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSourceRect@CPresentationSurface@@UEAAJPEBUtagRECT@@@Z
    virtual long SetSourceRect(tagRECT const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTag@CPresentationSurface@@UEAAX_K@Z
    virtual void SetTag(uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTransform@CPresentationSurface@@UEAAJPEAUPresentationTransform@@@Z
    virtual long SetTransform(PresentationTransform *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUpdateRects@CPresentationSurface@@UEAAJPEBUtagRECT@@I@Z
    virtual long SetUpdateRects(tagRECT const *, unsigned int);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CPresentationSurface@@IEAA@PEAVCPresentationManager@@_K@Z
    CPresentationSurface(CPresentationManager *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckForDestinationChanges@CPresentationSurface@@IEAAXXZ
    void CheckForDestinationChanges();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CPresentationSurface@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CPresentationSurface@@IEAAJPEAX@Z
    long Initialize(void *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPresentationSurface@@MEAA@XZ
    virtual ~CPresentationSurface();
};
