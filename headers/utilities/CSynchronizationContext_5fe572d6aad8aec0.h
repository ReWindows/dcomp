#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 6 member(s).
namespace Flip {
class CSynchronizationContext {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CSynchronizationContext@Flip@@SAJPEAUIUnknown@@PEAPEAV12@@Z
    static long Create(IUnknown *, ::Flip::CSynchronizationContext * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeviceRemovedReason@CSynchronizationContext@Flip@@QEAAJXZ
    long GetDeviceRemovedReason();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Present@CSynchronizationContext@Flip@@QEAAJPEAUIUnknown@@_KPEAX@Z
    long Present(IUnknown *, uint64_t, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryBufferInfo@CSynchronizationContext@Flip@@QEAAJPEAXPEAW4DXGI_FORMAT@@PEAU_LUID@@@Z
    long QueryBufferInfo(void *, int *, _LUID *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSynchronizationContext@Flip@@QEAA@XZ
    ~CSynchronizationContext();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CSynchronizationContext@Flip@@IEAAJPEAUIUnknown@@@Z
    long Initialize(IUnknown *);
};
} // namespace Flip
