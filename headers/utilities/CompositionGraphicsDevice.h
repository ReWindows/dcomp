#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 19 member(s).
namespace Windows::UI::Composition {
class CompositionGraphicsDevice {
public:
    class Api;
    class Interop;
    class XUCInternal;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CompositionGraphicsDevice@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CaptureAsync@CompositionGraphicsDevice@Composition@UI@Windows@@QEAAJPEAVVisual@234@HHW4DirectXPixelFormat@DirectX@Graphics@4@W4DirectXAlphaMode@784@MPEAPEAVVisualCapture@234@@Z
    long CaptureAsync(WindissectOpaque *, int, int, int, int, float, WindissectOpaque * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CompositionGraphicsDevice@Composition@UI@Windows@@QEAA@XZ
    CompositionGraphicsDevice();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDrawingSurface@CompositionGraphicsDevice@Composition@UI@Windows@@QEAAJUSizeInt32@Graphics@4@W4DirectXPixelFormat@DirectX@64@W4DirectXAlphaMode@864@_NPEAPEAVCompositionDrawingSurface@234@@Z
    long CreateDrawingSurface(::Windows::Graphics::SizeInt32, int, int, bool, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateMipmapSurface@CompositionGraphicsDevice@Composition@UI@Windows@@QEAAJUSizeInt32@Graphics@4@W4DirectXPixelFormat@DirectX@64@W4DirectXAlphaMode@864@PEAPEAVCompositionMipmapSurface@234@@Z
    long CreateMipmapSurface(::Windows::Graphics::SizeInt32, int, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateVirtualDrawingSurface@CompositionGraphicsDevice@Composition@UI@Windows@@QEAAJUSizeInt32@Graphics@4@W4DirectXPixelFormat@DirectX@64@W4DirectXAlphaMode@864@PEAPEAVCompositionVirtualDrawingSurface@234@@Z
    long CreateVirtualDrawingSurface(::Windows::Graphics::SizeInt32, int, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CompositionGraphicsDevice@Composition@UI@Windows@@UEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HintTiles@CompositionGraphicsDevice@Composition@UI@Windows@@QEAAJIPEAURectInt32@Graphics@4@@Z
    long HintTiles(unsigned int, ::Windows::Graphics::RectInt32*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValid@CompositionGraphicsDevice@Composition@UI@Windows@@QEAA_NXZ
    bool IsValid();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessDeferredCallbackOperation_Callback@CompositionGraphicsDevice@Composition@UI@Windows@@UEAAXXZ
    virtual void ProcessDeferredCallbackOperation_Callback();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CompositionGraphicsDevice@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CompositionGraphicsDevice@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveInvalidatableDeviceObject@CompositionGraphicsDevice@Composition@UI@Windows@@QEAAXPEAUIInvalidatableDeviceObject@234@@Z
    void RemoveInvalidatableDeviceObject(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CompositionGraphicsDevice@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAUIUnknown@@@Z
    long RuntimeClassInitialize(WindissectOpaque *, IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRenderingDevice@CompositionGraphicsDevice@Composition@UI@Windows@@QEAAJPEAUIUnknown@@@Z
    long SetRenderingDevice(IUnknown *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CompositionGraphicsDevice@Composition@UI@Windows@@UEAA@XZ
    virtual ~CompositionGraphicsDevice();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSurface@CompositionGraphicsDevice@Composition@UI@Windows@@AEAAJAEBUSizeInt32@Graphics@4@W4DirectXPixelFormat@DirectX@64@W4DirectXAlphaMode@864@_N3PEAPEAVCompositionDrawingSurface@234@@Z
    long CreateSurface(::Windows::Graphics::SizeInt32const &, int, int, bool, bool, WindissectOpaque * *);
};
} // namespace Windows::UI::Composition
