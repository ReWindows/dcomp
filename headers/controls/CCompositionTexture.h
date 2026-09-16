#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 16 member(s).
namespace DirectComposition {
class CCompositionTexture {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CCompositionTexture@DirectComposition@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSurfaceBinding@CCompositionTexture@DirectComposition@@QEAAJPEAPEAUIUnknown@@@Z
    long CreateSurfaceBinding(IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAvailableFence@CCompositionTexture@DirectComposition@@UEAAJPEA_KAEBU_GUID@@PEAPEAX@Z
    virtual long GetAvailableFence(uint64_t *, _GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CCompositionTexture@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CCompositionTexture@DirectComposition@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAlphaMode@CCompositionTexture@DirectComposition@@UEAAJW4DXGI_ALPHA_MODE@@@Z
    virtual long SetAlphaMode(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetColorSpace@CCompositionTexture@DirectComposition@@UEAAJW4DXGI_COLOR_SPACE_TYPE@@@Z
    virtual long SetColorSpace(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSourceRect@CCompositionTexture@DirectComposition@@UEAAJAEBUD2D_RECT_U@@@Z
    virtual long SetSourceRect(D2D_RECT_U const &);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CCompositionTexture@DirectComposition@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CCompositionTexture@DirectComposition@@IEAAJXZ
    long Initialize();
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCompositionTexture@DirectComposition@@EEAA@XZ
    virtual ~CCompositionTexture();
};
} // namespace DirectComposition
