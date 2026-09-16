#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 16 member(s).
namespace Windows::UI::Composition {
class CompositionShape {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CompositionShape@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CompositionShape@Composition@UI@Windows@@UEAAXXZ
    virtual void Destroy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimatablePropertyInfo@CompositionShape@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    virtual bool GetAnimatablePropertyInfo(HSTRING__*, int *, ExpressionObjectPropertyInfo *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAnimatedPropertyChanged@CompositionShape@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z
    virtual long OnAnimatedPropertyChanged(unsigned int, unsigned int, int, bool, bool, void const *, unsigned short);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CompositionShape@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CompositionShape@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCenterPoint@CompositionShape@Composition@UI@Windows@@QEAAJAEBUVector2@Numerics@Foundation@4@@Z
    long SetCenterPoint(WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFinalValueParameter@CompositionShape@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnimation@234@@Z
    virtual long SetFinalValueParameter(HSTRING__*, HSTRING__*, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOffset@CompositionShape@Composition@UI@Windows@@QEAAJAEBUVector2@Numerics@Foundation@4@@Z
    long SetOffset(WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRotationAngle@CompositionShape@Composition@UI@Windows@@QEAAJM@Z
    long SetRotationAngle(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRotationAngleInDegrees@CompositionShape@Composition@UI@Windows@@QEAAJM@Z
    long SetRotationAngleInDegrees(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetScale@CompositionShape@Composition@UI@Windows@@QEAAJAEBUVector2@Numerics@Foundation@4@@Z
    long SetScale(WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTransformMatrix@CompositionShape@Composition@UI@Windows@@QEAAJAEBUMatrix3x2@Numerics@Foundation@4@@Z
    long SetTransformMatrix(WindissectOpaque &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CompositionShape@Composition@UI@Windows@@UEAA@XZ
    virtual ~CompositionShape();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CompositionShape@Composition@UI@Windows@@IEAA@XZ
    CompositionShape();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureComponentTransform@CompositionShape@Composition@UI@Windows@@AEAAJXZ
    long EnsureComponentTransform();
};
} // namespace Windows::UI::Composition
