#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 35 member(s).
namespace Windows::UI {
class UIContext {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@UIContext@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@UIContext@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@UIContext@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@UIContext@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@UIContext@UI@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevel@UIContext@UI@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@UIContext@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@UIContext@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@UIContext@UI@Windows@@QEAAJPEAUIUIContentRoot@23@@Z
    long RuntimeClassInitialize(::Windows::UI::IUIContentRoot *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@UIContext@UI@Windows@@QEAAJPEAUICoreWindow@Core@23@@Z
    long RuntimeClassInitialize(::Windows::UI::Core::ICoreWindow *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUIContentRoot@UIContext@UI@Windows@@UEAAJPEAUIUIContentRoot@23@@Z
    virtual long SetUIContentRoot(::Windows::UI::IUIContentRoot *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0UIContext@UI@Windows@@QEAA@XZ
    UIContext();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UIContentRoot@UIContext@UI@Windows@@UEAAJPEAPEAUIUIContentRoot@23@@Z
    virtual long get_UIContentRoot(::Windows::UI::IUIContentRoot * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WindowContext@UIContext@UI@Windows@@UEAAJPEAPEAUIWindowContextPartner@23@@Z
    virtual long get_WindowContext(::Windows::UI::IWindowContextPartner * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UIContext@UI@Windows@@UEAA@XZ
    virtual ~UIContext();
};
} // namespace Windows::UI
