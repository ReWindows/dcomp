#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 16 member(s).
namespace Windows::UI::Composition {
class VisualCapture {
public:
    class AsyncBase;
    class AsyncOperation;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@VisualCapture@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@VisualCapture@Composition@UI@Windows@@SAJPEAVCompositor@234@PEAPEAV1234@@Z
    static long Create(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@VisualCapture@Composition@UI@Windows@@UEAAXXZ
    virtual void Destroy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAndResetCompletedHandler@VisualCapture@Composition@UI@Windows@@QEAA?AV?$ComPtr@U?$IAsyncOperationCompletedHandler@PEAUICompositionSurface@Composition@UI@Windows@@@Foundation@Windows@@@WRL@Microsoft@@XZ
    WindissectOpaque GetAndResetCompletedHandler();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMessageCallType@VisualCapture@Composition@UI@Windows@@UEAAPEBUMsgCallTypeDefinition@@XZ
    virtual MsgCallTypeDefinition const * GetMessageCallType();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@VisualCapture@Composition@UI@Windows@@QEAAJPEAVVisual@234@0PEAVCompositionGraphicsDevice@234@HHW4DirectXPixelFormat@DirectX@Graphics@4@W4DirectXAlphaMode@894@M_N@Z
    long Initialize(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, int, int, int, int, float, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Message_CaptureCompleted@VisualCapture@Composition@UI@Windows@@QEAAJXZ
    long Message_CaptureCompleted();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@VisualCapture@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@VisualCapture@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldRegisterCallbackId@VisualCapture@Composition@UI@Windows@@UEAA_NXZ
    virtual bool ShouldRegisterCallbackId();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0VisualCapture@Composition@UI@Windows@@QEAA@XZ
    VisualCapture();
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Completed@VisualCapture@Composition@UI@Windows@@QEAAJPEAU?$IAsyncOperationCompletedHandler@PEAUICompositionSurface@Composition@UI@Windows@@@Foundation@4@@Z
    long put_Completed(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1VisualCapture@Composition@UI@Windows@@UEAA@XZ
    virtual ~VisualCapture();
};
} // namespace Windows::UI::Composition
