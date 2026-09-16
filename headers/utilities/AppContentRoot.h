#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 38 member(s).
namespace Windows::UI {
class AppContentRoot {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AppContentRoot@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AppContentRoot@UI@Windows@@QEAA@XZ
    AppContentRoot();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@AppContentRoot@UI@Windows@@UEAAJXZ
    virtual long Close();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@AppContentRoot@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@AppContentRoot@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@AppContentRoot@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@AppContentRoot@UI@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevel@AppContentRoot@UI@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@AppContentRoot@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AppContentRoot@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@AppContentRoot@UI@Windows@@QEAAJPEAUICompositionIsland@Composition@23@PEAUIInputSite@Input@Internal@23@@Z
    long RuntimeClassInitialize(WindissectOpaque *, ::Windows::UI::Internal::Input::IInputSite *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InputSite@AppContentRoot@UI@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long get_InputSite(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Island@AppContentRoot@UI@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long get_Island(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UIContext@AppContentRoot@UI@Windows@@UEAAJPEAPEAUIUIContext@23@@Z
    virtual long get_UIContext(::Windows::UI::IUIContext * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WindowContext@AppContentRoot@UI@Windows@@UEAAJPEAPEAUIWindowContextPartner@23@@Z
    virtual long get_WindowContext(::Windows::UI::IWindowContextPartner * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppContentRoot@UI@Windows@@UEAA@XZ
    virtual ~AppContentRoot();
};
} // namespace Windows::UI
