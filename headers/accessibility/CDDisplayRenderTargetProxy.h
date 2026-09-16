#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 11 member(s).
namespace DirectComposition {
class CDDisplayRenderTargetProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CDDisplayRenderTargetProxy@DirectComposition@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDDisplayRenderTargetProxy@DirectComposition@@QEAA@I@Z
    CDDisplayRenderTargetProxy(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CDDisplayRenderTargetProxy@DirectComposition@@QEAAJPEAXIU_LUID@@IW4DXGI_FORMAT@@W4DXGI_COLOR_SPACE_TYPE@@AEBUD2D_SIZE_U@@I@Z
    long Initialize(void *, unsigned int, _LUID, unsigned int, int, int, D2D_SIZE_U const &, unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CDDisplayRenderTargetProxy@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CDDisplayRenderTargetProxy@DirectComposition@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDesktopTree@CDDisplayRenderTargetProxy@DirectComposition@@UEAAJPEAUIDCompositionDesktopTreePartner@@@Z
    virtual long SetDesktopTree(IDCompositionDesktopTreePartner *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMonitorMagnification@CDDisplayRenderTargetProxy@DirectComposition@@UEAAJPEAUHMONITOR__@@MMM@Z
    virtual long SetMonitorMagnification(HMONITOR__*, float, float, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSDRToHDRMultiplier@CDDisplayRenderTargetProxy@DirectComposition@@UEAAJM@Z
    virtual long SetSDRToHDRMultiplier(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRefreshRate@CDDisplayRenderTargetProxy@DirectComposition@@UEAAJXZ
    virtual long UpdateRefreshRate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTransform@CDDisplayRenderTargetProxy@DirectComposition@@UEAAJPEAUHMONITOR__@@AEBUD2D_RECT_F@@MAEBUD2D_RECT_U@@W4DXGI_MODE_ROTATION@@@Z
    virtual long UpdateTransform(HMONITOR__*, D2D_RECT_F const &, float, D2D_RECT_U const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTransform2@CDDisplayRenderTargetProxy@DirectComposition@@UEAAJPEAUHMONITOR__@@AEBUD2D_RECT_F@@MMAEBUD2D_RECT_U@@W4DXGI_MODE_ROTATION@@@Z
    virtual long UpdateTransform2(HMONITOR__*, D2D_RECT_F const &, float, float, D2D_RECT_U const &, int);
};
} // namespace DirectComposition
