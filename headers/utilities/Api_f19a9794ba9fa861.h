#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 9 member(s).
namespace Windows::UI::Composition::CompositionGraphicsDevice {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@CompositionGraphicsDevice@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CaptureAsync@Api@CompositionGraphicsDevice@Composition@UI@Windows@@UEAAJPEAUIVisual@345@USizeInt32@Graphics@5@W4DirectXPixelFormat@DirectX@85@W4DirectXAlphaMode@DirectX@85@MPEAPEAU?$IAsyncOperation@PEAUICompositionSurface@Composition@UI@Windows@@@Foundation@5@@Z
    virtual long CaptureAsync(WindissectOpaque *, ::Windows::Graphics::SizeInt32, int, int, float, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDrawingSurface@Api@CompositionGraphicsDevice@Composition@UI@Windows@@UEAAJUSize@Foundation@5@W4DirectXPixelFormat@DirectX@Graphics@5@W4DirectXAlphaMode@9Graphics@5@PEAPEAUICompositionDrawingSurface@345@@Z
    virtual long CreateDrawingSurface(WindissectOpaque, int, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDrawingSurface2@Api@CompositionGraphicsDevice@Composition@UI@Windows@@UEAAJUSizeInt32@Graphics@5@W4DirectXPixelFormat@DirectX@75@W4DirectXAlphaMode@975@PEAPEAUICompositionDrawingSurface@345@@Z
    virtual long CreateDrawingSurface2(::Windows::Graphics::SizeInt32, int, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateMipmapSurface@Api@CompositionGraphicsDevice@Composition@UI@Windows@@UEAAJUSizeInt32@Graphics@5@W4DirectXPixelFormat@DirectX@75@W4DirectXAlphaMode@975@PEAPEAUICompositionMipmapSurface@345@@Z
    virtual long CreateMipmapSurface(::Windows::Graphics::SizeInt32, int, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateVirtualDrawingSurface@Api@CompositionGraphicsDevice@Composition@UI@Windows@@UEAAJUSizeInt32@Graphics@5@W4DirectXPixelFormat@DirectX@75@W4DirectXAlphaMode@975@PEAPEAUICompositionVirtualDrawingSurface@345@@Z
    virtual long CreateVirtualDrawingSurface(::Windows::Graphics::SizeInt32, int, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Trim@Api@CompositionGraphicsDevice@Composition@UI@Windows@@UEAAJXZ
    virtual long Trim();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_RenderingDeviceReplaced@Api@CompositionGraphicsDevice@Composition@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVCompositionGraphicsDevice@Composition@UI@Windows@@PEAVRenderingDeviceReplacedEventArgs@234@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_RenderingDeviceReplaced(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_RenderingDeviceReplaced@Api@CompositionGraphicsDevice@Composition@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_RenderingDeviceReplaced(EventRegistrationToken);
};
} // namespace Windows::UI::Composition::CompositionGraphicsDevice
