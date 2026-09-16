#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 28 member(s).
namespace Windows::UI::Composition::Interactions {
class VisualInteractionSourceFactory {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@VisualInteractionSourceFactory@Interactions@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@VisualInteractionSourceFactory@Interactions@Composition@UI@Windows@@UEAAJPEAUIVisual@345@PEAPEAUIVisualInteractionSource@2345@@Z
    virtual long Create(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFromIVisualElement@VisualInteractionSourceFactory@Interactions@Composition@UI@Windows@@UEAAJPEAUIVisualElement@345@PEAPEAUIVisualInteractionSource@2345@@Z
    virtual long CreateFromIVisualElement(WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@VisualInteractionSourceFactory@Interactions@Composition@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@VisualInteractionSourceFactory@Interactions@Composition@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@VisualInteractionSourceFactory@Interactions@Composition@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@VisualInteractionSourceFactory@Interactions@Composition@UI@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevelStatic@VisualInteractionSourceFactory@Interactions@Composition@UI@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@VisualInteractionSourceFactory@Interactions@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@VisualInteractionSourceFactory@Interactions@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0VisualInteractionSourceFactory@Interactions@Composition@UI@Windows@@QEAA@XZ
    VisualInteractionSourceFactory();
};
} // namespace Windows::UI::Composition::Interactions
