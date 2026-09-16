#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 22 member(s).
namespace Windows::UI::Composition {
class AnimationController {
public:
    class Api;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddKeyFrameAnimator@AnimationController@Composition@UI@Windows@@QEAAJPEAVKeyFrameAnimator@234@@Z
    long AddKeyFrameAnimator(WindissectOpaque *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AnimationController@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AnimationController@Composition@UI@Windows@@QEAA@XZ
    AnimationController();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@AnimationController@Composition@UI@Windows@@UEAAXXZ
    virtual void Destroy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimatablePropertyInfo@AnimationController@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    virtual bool GetAnimatablePropertyInfo(HSTRING__*, int *, ExpressionObjectPropertyInfo *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleDelayedDestructionRequest@AnimationController@Composition@UI@Windows@@UEAA_NXZ
    virtual bool HandleDelayedDestructionRequest();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAnimatedPropertyChanged@AnimationController@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z
    virtual long OnAnimatedPropertyChanged(unsigned int, unsigned int, int, bool, bool, void const *, unsigned short);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@AnimationController@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RebuildInternal@AnimationController@Composition@UI@Windows@@UEAAJXZ
    virtual long RebuildInternal();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AnimationController@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@AnimationController@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z
    long RuntimeClassInitialize(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFinalValueParameter@AnimationController@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnimation@234@@Z
    virtual long SetFinalValueParameter(HSTRING__*, HSTRING__*, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPlaybackRate@AnimationController@Composition@UI@Windows@@QEAAJM@Z
    long SetPlaybackRate(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProgress@AnimationController@Composition@UI@Windows@@QEAAJM@Z
    long SetProgress(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProgressBehavior@AnimationController@Composition@UI@Windows@@QEAAJW4AnimationControllerProgressBehavior@234@@Z
    long SetProgressBehavior(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartAnimationWithController@AnimationController@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAVCompositionAnimation@234@PEAV1234@@Z
    virtual long StartAnimationWithController(HSTRING__*, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatesSurfaces@AnimationController@Composition@UI@Windows@@UEAA_NXZ
    virtual bool UpdatesSurfaces();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AnimationController@Composition@UI@Windows@@UEAA@XZ
    virtual ~AnimationController();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureNeedsRebuild@AnimationController@Composition@UI@Windows@@AEAAXXZ
    void EnsureNeedsRebuild();
};
} // namespace Windows::UI::Composition
