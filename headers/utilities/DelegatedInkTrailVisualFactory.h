#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 22 member(s).
namespace Windows::UI::Composition {
class DelegatedInkTrailVisualFactory {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@DelegatedInkTrailVisualFactory@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@DelegatedInkTrailVisualFactory@Composition@UI@Windows@@UEAAJPEAUICompositor@234@PEAPEAUIDelegatedInkTrailVisual@234@@Z
    virtual long Create(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateForSwapChain@DelegatedInkTrailVisualFactory@Composition@UI@Windows@@UEAAJPEAUICompositor@234@PEAUICompositionSurface@234@PEAPEAUIDelegatedInkTrailVisual@234@@Z
    virtual long CreateForSwapChain(WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DelegatedInkTrailVisualFactory@Composition@UI@Windows@@QEAA@XZ
    DelegatedInkTrailVisualFactory();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@DelegatedInkTrailVisualFactory@Composition@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@DelegatedInkTrailVisualFactory@Composition@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@DelegatedInkTrailVisualFactory@Composition@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@DelegatedInkTrailVisualFactory@Composition@UI@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevelStatic@DelegatedInkTrailVisualFactory@Composition@UI@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@DelegatedInkTrailVisualFactory@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@DelegatedInkTrailVisualFactory@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace Windows::UI::Composition
