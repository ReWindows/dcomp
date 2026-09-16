#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 12 member(s).
namespace DirectComposition {
class CDeviceTextureManagerBase {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CDeviceTextureManagerBase@DirectComposition@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDeviceTextureManagerBase@DirectComposition@@QEAA@PEAVCDevice@1@@Z
    CDeviceTextureManagerBase(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCompositionTexture@CDeviceTextureManagerBase@DirectComposition@@QEAAJPEAUIUnknown@@PEAPEAVCCompositionTexture@2@@Z
    long CreateCompositionTexture(IUnknown *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CDeviceTextureManagerBase@DirectComposition@@UEAAJPEAUIUnknown@@@Z
    virtual long Initialize(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostCommit@CDeviceTextureManagerBase@DirectComposition@@QEAAJXZ
    long PostCommit();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Present@CDeviceTextureManagerBase@DirectComposition@@UEAAJPEAUID3D12CommandQueue@@@Z
    virtual long Present(ID3D12CommandQueue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Present@CDeviceTextureManagerBase@DirectComposition@@UEAAJXZ
    virtual long Present();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CDeviceTextureManagerBase@DirectComposition@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDeviceTextureManagerBase@DirectComposition@@UEAA@XZ
    virtual ~CDeviceTextureManagerBase();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsurePresentationBuffer@CDeviceTextureManagerBase@DirectComposition@@IEAAJPEAUIUnknown@@PEAPEAUIPresentationBuffer@@@Z
    long EnsurePresentationBuffer(IUnknown *, IPresentationBuffer * *);
};
} // namespace DirectComposition
