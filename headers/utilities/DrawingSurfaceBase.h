#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 12 member(s).
namespace Windows::UI::Composition {
class DrawingSurfaceBase {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@DrawingSurfaceBase@Composition@UI@Windows@@UEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndDraw@DrawingSurfaceBase@Composition@UI@Windows@@QEAAJXZ
    long EndDraw();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResumeDraw@DrawingSurfaceBase@Composition@UI@Windows@@QEAAJXZ
    long ResumeDraw();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Scroll@DrawingSurfaceBase@Composition@UI@Windows@@QEAAJPEBURectInt32@Graphics@4@0AEBUPointInt32@64@@Z
    long Scroll(::Windows::Graphics::RectInt32const *, ::Windows::Graphics::RectInt32const *, ::Windows::Graphics::PointInt32const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Scroll@DrawingSurfaceBase@Composition@UI@Windows@@QEAAJPEBUtagRECT@@0HH@Z
    long Scroll(tagRECT const *, tagRECT const *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SuspendDraw@DrawingSurfaceBase@Composition@UI@Windows@@QEAAJXZ
    long SuspendDraw();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DrawingSurfaceBase@Composition@UI@Windows@@IEAA@XZ
    DrawingSurfaceBase();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyRenderingDeviceChanged@DrawingSurfaceBase@Composition@UI@Windows@@MEAAJXZ
    virtual long NotifyRenderingDeviceChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UseUnderlyingSurface@DrawingSurfaceBase@Composition@UI@Windows@@IEAAJPEAPEAUIDCompositionSurface@@@Z
    long UseUnderlyingSurface(IDCompositionSurface * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DrawingSurfaceBase@Composition@UI@Windows@@MEAA@XZ
    virtual ~DrawingSurfaceBase();
};
} // namespace Windows::UI::Composition
