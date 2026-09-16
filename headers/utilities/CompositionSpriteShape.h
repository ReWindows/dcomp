#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 24 member(s).
namespace Windows::UI::Composition {
class CompositionSpriteShape {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CompositionSpriteShape@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CompositionSpriteShape@Composition@UI@Windows@@QEAA@XZ
    CompositionSpriteShape();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CompositionSpriteShape@Composition@UI@Windows@@UEAAXXZ
    virtual void Destroy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimatablePropertyInfo@CompositionSpriteShape@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    virtual bool GetAnimatablePropertyInfo(HSTRING__*, int *, ExpressionObjectPropertyInfo *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStrokeDashArray@CompositionSpriteShape@Composition@UI@Windows@@QEAAJPEAPEAVCompositionStrokeDashArray@234@@Z
    long GetStrokeDashArray(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleDelayedDestructionRequest@CompositionSpriteShape@Composition@UI@Windows@@UEAA_NXZ
    virtual bool HandleDelayedDestructionRequest();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAnimatedPropertyChanged@CompositionSpriteShape@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z
    virtual long OnAnimatedPropertyChanged(unsigned int, unsigned int, int, bool, bool, void const *, unsigned short);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CompositionSpriteShape@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RebuildInternal@CompositionSpriteShape@Composition@UI@Windows@@UEAAJXZ
    virtual long RebuildInternal();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CompositionSpriteShape@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CompositionSpriteShape@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z
    long RuntimeClassInitialize(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFinalValueParameter@CompositionSpriteShape@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnimation@234@@Z
    virtual long SetFinalValueParameter(HSTRING__*, HSTRING__*, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGeometry@CompositionSpriteShape@Composition@UI@Windows@@QEAAXPEAVCompositionGeometry@234@@Z
    void SetGeometry(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStrokeDashCap@CompositionSpriteShape@Composition@UI@Windows@@QEAAJW4CompositionStrokeCap@234@@Z
    long SetStrokeDashCap(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStrokeEndCap@CompositionSpriteShape@Composition@UI@Windows@@QEAAJW4CompositionStrokeCap@234@@Z
    long SetStrokeEndCap(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStrokeLineJoin@CompositionSpriteShape@Composition@UI@Windows@@QEAAJW4CompositionStrokeLineJoin@234@@Z
    long SetStrokeLineJoin(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStrokeMiterLimit@CompositionSpriteShape@Composition@UI@Windows@@QEAAJM@Z
    long SetStrokeMiterLimit(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStrokeStartCap@CompositionSpriteShape@Composition@UI@Windows@@QEAAJW4CompositionStrokeCap@234@@Z
    long SetStrokeStartCap(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStrokeThickness@CompositionSpriteShape@Composition@UI@Windows@@QEAAJM@Z
    long SetStrokeThickness(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatesSurfaces@CompositionSpriteShape@Composition@UI@Windows@@UEAA_NXZ
    virtual bool UpdatesSurfaces();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CompositionSpriteShape@Composition@UI@Windows@@UEAA@XZ
    virtual ~CompositionSpriteShape();
};
} // namespace Windows::UI::Composition
