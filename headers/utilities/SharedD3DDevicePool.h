#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 8 member(s).
namespace Windows::UI::Composition::Internal {
class SharedD3DDevicePool {
public:
    class SharedDevice;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@QEAAJPEAUIUnknown@@U_LUID@@PEAPEAUID3D11Device@@@Z
    long CreateSharedDevice(IUnknown *, _LUID, ID3D11Device * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Instance@SharedD3DDevicePool@Internal@Composition@UI@Windows@@SAPEAV12345@XZ
    static WindissectOpaque * Instance();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDeviceRemoved@SharedD3DDevicePool@Internal@Composition@UI@Windows@@QEAAXU_LUID@@PEAUID3D11Device@@@Z
    void OnDeviceRemoved(_LUID, ID3D11Device *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveClient@SharedD3DDevicePool@Internal@Composition@UI@Windows@@QEAAXPEAUIUnknown@@@Z
    void RemoveClient(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateClient@SharedD3DDevicePool@Internal@Composition@UI@Windows@@QEAAJPEAUIUnknown@@@Z
    long ValidateClient(IUnknown *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SharedD3DDevicePool@Internal@Composition@UI@Windows@@QEAA@XZ
    ~SharedD3DDevicePool();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateNewDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@AEAAJU_LUID@@PEAPEAUSharedDevice@12345@@Z
    long CreateNewDevice(_LUID, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EraseSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@AEAAXU_LUID@@PEAUID3D11Device@@PEAPEAUSharedDevice@12345@@Z
    void EraseSharedDevice(_LUID, ID3D11Device *, WindissectOpaque * *);
};
} // namespace Windows::UI::Composition::Internal
