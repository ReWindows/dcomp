#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 22 member(s).
namespace Windows::UI::Composition::Diagnostics {
class CompositionDebugSettingsFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CompositionDebugSettingsFactory@Diagnostics@Composition@UI@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CompositionDebugSettingsFactory@Diagnostics@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CompositionDebugSettingsFactory@Diagnostics@Composition@UI@Windows@@QEAA@XZ
    CompositionDebugSettingsFactory();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CompositionDebugSettingsFactory@Diagnostics@Composition@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CompositionDebugSettingsFactory@Diagnostics@Composition@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CompositionDebugSettingsFactory@Diagnostics@Composition@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@CompositionDebugSettingsFactory@Diagnostics@Composition@UI@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevelStatic@CompositionDebugSettingsFactory@Diagnostics@Composition@UI@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CompositionDebugSettingsFactory@Diagnostics@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CompositionDebugSettingsFactory@Diagnostics@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetSettings@CompositionDebugSettingsFactory@Diagnostics@Composition@UI@Windows@@UEAAJPEAUICompositor@345@PEAPEAUICompositionDebugSettings@2345@@Z
    virtual long TryGetSettings(WindissectOpaque *, WindissectOpaque * *);
};
} // namespace Windows::UI::Composition::Diagnostics
