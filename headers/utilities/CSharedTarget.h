#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 8 member(s).
namespace Windows::UI::Composition {
class CSharedTarget {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSharedTarget@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CSharedTarget@Composition@UI@Windows@@SAJPEAXPEAPEAV1234@@Z
    static long Create(void *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesktopDevicePartner@CSharedTarget@Composition@UI@Windows@@SAJPEAUIUnknown@@PEAPEAUIDCompositionDesktopDevicePartner@@@Z
    static long GetDesktopDevicePartner(IUnknown *, IDCompositionDesktopDevicePartner * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSharedTarget@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSharedTarget@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRoot@CSharedTarget@Composition@UI@Windows@@UEAAJPEAUIDCompositionVisual@@@Z
    virtual long SetRoot(IDCompositionVisual *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSharedTarget@Composition@UI@Windows@@QEAA@XZ
    ~CSharedTarget();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSharedTarget@Composition@UI@Windows@@AEAA@PEAX@Z
    CSharedTarget(void *);
};
} // namespace Windows::UI::Composition
