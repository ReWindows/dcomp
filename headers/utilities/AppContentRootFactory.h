#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 19 member(s).
namespace Windows::UI {
class AppContentRootFactory {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AppContentRootFactory@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AppContentRootFactory@UI@Windows@@QEAA@XZ
    AppContentRootFactory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@AppContentRootFactory@UI@Windows@@UEAAJPEAUIInspectable@@0PEAPEAUIUIContentRoot@23@@Z
    virtual long CreateInstance(IInspectable *, IInspectable *, ::Windows::UI::IUIContentRoot * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@AppContentRootFactory@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@AppContentRootFactory@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@AppContentRootFactory@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@AppContentRootFactory@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AppContentRootFactory@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace Windows::UI
