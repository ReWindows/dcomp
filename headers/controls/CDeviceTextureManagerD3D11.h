#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 8 member(s).
namespace DirectComposition {
class CDeviceTextureManagerD3D11 {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CDeviceTextureManagerD3D11@DirectComposition@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CDeviceTextureManagerD3D11@DirectComposition@@SAJPEAVCDevice@2@PEAUID3D11Device@@PEAPEAVCDeviceTextureManagerBase@2@@Z
    static long Create(WindissectOpaque *, ID3D11Device *, WindissectOpaque * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetD3DVersion@CDeviceTextureManagerD3D11@DirectComposition@@UEAA?AW4D3DVersion@2@XZ
    virtual int GetD3DVersion();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Present@CDeviceTextureManagerD3D11@DirectComposition@@UEAAJXZ
    virtual long Present();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CDeviceTextureManagerD3D11@DirectComposition@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDeviceTextureManagerD3D11@DirectComposition@@UEAA@XZ
    virtual ~CDeviceTextureManagerD3D11();
};
} // namespace DirectComposition
