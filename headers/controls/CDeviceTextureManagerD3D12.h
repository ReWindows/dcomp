#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 9 member(s).
namespace DirectComposition {
class CDeviceTextureManagerD3D12 {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CDeviceTextureManagerD3D12@DirectComposition@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CDeviceTextureManagerD3D12@DirectComposition@@SAJPEAVCDevice@2@PEAUID3D12Device@@PEAPEAVCDeviceTextureManagerBase@2@@Z
    static long Create(WindissectOpaque *, ID3D12Device *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetD3DVersion@CDeviceTextureManagerD3D12@DirectComposition@@UEAA?AW4D3DVersion@2@XZ
    virtual int GetD3DVersion();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CDeviceTextureManagerD3D12@DirectComposition@@UEAAJPEAUIUnknown@@@Z
    virtual long Initialize(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Present@CDeviceTextureManagerD3D12@DirectComposition@@UEAAJPEAUID3D12CommandQueue@@@Z
    virtual long Present(ID3D12CommandQueue *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CDeviceTextureManagerD3D12@DirectComposition@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDeviceTextureManagerD3D12@DirectComposition@@UEAA@XZ
    virtual ~CDeviceTextureManagerD3D12();
};
} // namespace DirectComposition
