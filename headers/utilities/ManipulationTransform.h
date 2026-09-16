#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 11 member(s).
namespace Windows::UI::Composition {
class ManipulationTransform {
public:
    class Partner;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ManipulationTransform@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimatablePropertyInfo@ManipulationTransform@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    virtual bool GetAnimatablePropertyInfo(HSTRING__*, int *, ExpressionObjectPropertyInfo *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetManipulationTransformHandle@ManipulationTransform@Composition@UI@Windows@@QEAAIXZ
    unsigned int GetManipulationTransformHandle();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ManipulationTransform@Composition@UI@Windows@@QEAA@XZ
    ManipulationTransform();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ManipulationTransform@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ManipulationTransform@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@ManipulationTransform@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAX@Z
    long RuntimeClassInitialize(WindissectOpaque *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@ManipulationTransform@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAUIDCompositionTransform@@@Z
    long RuntimeClassInitialize(WindissectOpaque *, IDCompositionTransform *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ManipulationTransform@Composition@UI@Windows@@UEAA@XZ
    virtual ~ManipulationTransform();
};
} // namespace Windows::UI::Composition
