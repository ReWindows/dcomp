#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 20 member(s).
namespace Windows::UI {
class UIContextFactory {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@UIContextFactory@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateForContent@UIContextFactory@UI@Windows@@UEAAJPEAUIUIContentRoot@23@PEAPEAUIUIContext@23@@Z
    virtual long CreateForContent(::Windows::UI::IUIContentRoot *, ::Windows::UI::IUIContext * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateForCoreWindow@UIContextFactory@UI@Windows@@UEAAJPEAUICoreWindow@Core@23@HPEAPEAUIUIContext@23@@Z
    virtual long CreateForCoreWindow(::Windows::UI::Core::ICoreWindow *, int, ::Windows::UI::IUIContext * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@UIContextFactory@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@UIContextFactory@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@UIContextFactory@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@UIContextFactory@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@UIContextFactory@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0UIContextFactory@UI@Windows@@QEAA@XZ
    UIContextFactory();
};
} // namespace Windows::UI
