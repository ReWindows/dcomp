#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 24 member(s).
namespace Windows::UI::Composition {
class CompositionObjectFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CompositionObjectFactory@Composition@UI@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CompositionObjectFactory@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CompositionObjectFactory@Composition@UI@Windows@@QEAA@XZ
    CompositionObjectFactory();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CompositionObjectFactory@Composition@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CompositionObjectFactory@Composition@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CompositionObjectFactory@Composition@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@CompositionObjectFactory@Composition@UI@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevelStatic@CompositionObjectFactory@Composition@UI@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CompositionObjectFactory@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CompositionObjectFactory@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartAnimationGroupWithIAnimationObject@CompositionObjectFactory@Composition@UI@Windows@@UEAAJPEAUIAnimationObject@234@PEAUICompositionAnimationBase@234@@Z
    virtual long StartAnimationGroupWithIAnimationObject(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartAnimationWithIAnimationObject@CompositionObjectFactory@Composition@UI@Windows@@UEAAJPEAUIAnimationObject@234@PEAUHSTRING__@@PEAUICompositionAnimation@234@@Z
    virtual long StartAnimationWithIAnimationObject(WindissectOpaque *, HSTRING__*, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartAnimationWithIAnimationObject@CompositionObjectFactory@Composition@UI@Windows@@SAJPEAUIAnimationObject@234@PEAUHSTRING__@@PEAVCompositionAnimation@234@PEAPEAVCompositionPropertyAnimator@234@@Z
    static long StartAnimationWithIAnimationObject(WindissectOpaque *, HSTRING__*, WindissectOpaque *, WindissectOpaque * *);
};
} // namespace Windows::UI::Composition
