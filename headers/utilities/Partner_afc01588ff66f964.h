#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 7 member(s).
namespace Windows::UI::Composition::InteropRenderTarget {
class Partner {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Partner@InteropRenderTarget@Composition@UI@Windows@@QEAA@XZ
    Partner();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDesktopTree@Partner@InteropRenderTarget@Composition@UI@Windows@@UEAAJPEAUIDCompositionDesktopTreePartner@@@Z
    virtual long SetDesktopTree(IDCompositionDesktopTreePartner *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMonitorMagnification@Partner@InteropRenderTarget@Composition@UI@Windows@@UEAAJPEAUHMONITOR__@@MMM@Z
    virtual long SetMonitorMagnification(HMONITOR__*, float, float, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSDRToHDRMultiplier@Partner@InteropRenderTarget@Composition@UI@Windows@@UEAAJM@Z
    virtual long SetSDRToHDRMultiplier(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRefreshRate@Partner@InteropRenderTarget@Composition@UI@Windows@@UEAAJXZ
    virtual long UpdateRefreshRate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTransform@Partner@InteropRenderTarget@Composition@UI@Windows@@UEAAJPEAUHMONITOR__@@AEBUD2D_RECT_F@@MAEBUD2D_RECT_U@@W4DXGI_MODE_ROTATION@@@Z
    virtual long UpdateTransform(HMONITOR__*, D2D_RECT_F const &, float, D2D_RECT_U const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTransform2@Partner@InteropRenderTarget@Composition@UI@Windows@@UEAAJPEAUHMONITOR__@@AEBUD2D_RECT_F@@MMAEBUD2D_RECT_U@@W4DXGI_MODE_ROTATION@@@Z
    virtual long UpdateTransform2(HMONITOR__*, D2D_RECT_F const &, float, float, D2D_RECT_U const &, int);
};
} // namespace Windows::UI::Composition::InteropRenderTarget
