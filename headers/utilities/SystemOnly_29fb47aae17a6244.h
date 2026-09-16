#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 8 member(s).
namespace Windows::UI::Composition::Compositor {
class SystemOnly {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCompositionSurfaceForHandle@SystemOnly@Compositor@Composition@UI@Windows@@UEAAJPEAXPEAPEAUICompositionSurface@345@@Z
    virtual long CreateCompositionSurfaceForHandle(void *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCompositionSurfaceForSwapChain@SystemOnly@Compositor@Composition@UI@Windows@@UEAAJPEAUIUnknown@@PEAPEAUICompositionSurface@345@@Z
    virtual long CreateCompositionSurfaceForSwapChain(IUnknown *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDesktopWindowTarget@SystemOnly@Compositor@Composition@UI@Windows@@UEAAJPEAUHWND__@@HPEAPEAUIDesktopWindowTarget@Desktop@345@@Z
    virtual long CreateDesktopWindowTarget(HWND__*, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateGraphicsDevice@SystemOnly@Compositor@Composition@UI@Windows@@UEAAJPEAUIUnknown@@PEAPEAUICompositionGraphicsDevice@345@@Z
    virtual long CreateGraphicsDevice(IUnknown *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateVisualIslandSite@SystemOnly@Compositor@Composition@UI@Windows@@UEAAJPEAPEAUIVisualIslandSite@345@@Z
    virtual long CreateVisualIslandSite(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateVisualTreeIsland@SystemOnly@Compositor@Composition@UI@Windows@@UEAAJPEAPEAUIVisualTreeIsland@345@@Z
    virtual long CreateVisualTreeIsland(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureOnThread@SystemOnly@Compositor@Composition@UI@Windows@@UEAAJK@Z
    virtual long EnsureOnThread(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetCoreWindow@SystemOnly@Compositor@Composition@UI@Windows@@UEAAJPEAPEAUICoreWindow@Core@45@@Z
    virtual long TryGetCoreWindow(::Windows::UI::Core::ICoreWindow * *);
};
} // namespace Windows::UI::Composition::Compositor
