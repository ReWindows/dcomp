#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 18 member(s).
namespace Windows::UI::Composition {
class AnimationBindingManager {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AnimationBindingManager@Composition@UI@Windows@@QEAA@XZ
    AnimationBindingManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisposeOrphanedAnimators@AnimationBindingManager@Composition@UI@Windows@@QEAAXXZ
    void DisposeOrphanedAnimators();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyPropertyChanged@AnimationBindingManager@Composition@UI@Windows@@QEAAJIIPEA_N@Z
    long NotifyPropertyChanged(unsigned int, unsigned int, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAnimatorStateChanged@AnimationBindingManager@Composition@UI@Windows@@QEAAXPEAVCompositionPropertyAnimator@234@W4AnimationEventType@@IIPEAGPEA_N@Z
    void OnAnimatorStateChanged(WindissectOpaque *, int, unsigned int, unsigned int, unsigned short *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterAnimationTarget@AnimationBindingManager@Composition@UI@Windows@@QEAAJPEAVProxyObject@234@PEAVExpressionObjectPropertyInfo@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEAPEAVSubchannelMaskInfo@@PEAVCompositionPropertyAnimator@234@@Z
    long RegisterAnimationTarget(WindissectOpaque *, ExpressionObjectPropertyInfo *, int, SubchannelMaskInfo * *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldNotify@AnimationBindingManager@Composition@UI@Windows@@QEAA_NPEAVProxyObject@234@IPEAPEAV5234@PEAPEAUICompositionPropertyChangedListenerPartner@234@@Z
    bool ShouldNotify(WindissectOpaque *, unsigned int, WindissectOpaque * *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Shutdown@AnimationBindingManager@Composition@UI@Windows@@QEAAXXZ
    void Shutdown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SplitTargetPropertyNameAndMask@AnimationBindingManager@Composition@UI@Windows@@QEAAJPEAVProxyObject@234@PEAUHSTRING__@@PEAPEAU6@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@PEAPEAVSubchannelMaskInfo@@@Z
    long SplitTargetPropertyNameAndMask(WindissectOpaque *, HSTRING__*, HSTRING__* *, ExpressionObjectPropertyInfo *, int *, SubchannelMaskInfo * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryFindTargetAnimator@AnimationBindingManager@Composition@UI@Windows@@QEAAJPEAVProxyObject@234@PEAUHSTRING__@@PEAPEAVCompositionPropertyAnimator@234@@Z
    long TryFindTargetAnimator(WindissectOpaque *, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterAllAnimationTargets@AnimationBindingManager@Composition@UI@Windows@@QEAAXI@Z
    void UnregisterAllAnimationTargets(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterAnimationTarget@AnimationBindingManager@Composition@UI@Windows@@QEAAJPEAVProxyObject@234@PEAUHSTRING__@@_N@Z
    long UnregisterAnimationTarget(WindissectOpaque *, HSTRING__*, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AnimationBindingManager@Composition@UI@Windows@@QEAA@XZ
    ~AnimationBindingManager();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureIsAlive@AnimationBindingManager@Composition@UI@Windows@@AEAAXXZ
    void EnsureIsAlive();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSubchannelsFromMask@AnimationBindingManager@Composition@UI@Windows@@AEAAGPEAVSubchannelMaskInfo@@@Z
    unsigned short GetSubchannelsFromMask(SubchannelMaskInfo *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTargetMapEntry@AnimationBindingManager@Composition@UI@Windows@@AEAAJPEAVProxyObject@234@PEAUHSTRING__@@PEAPEAVSubchannelMaskInfo@@PEAPEAVTargetMapEntry@234@@Z
    long GetTargetMapEntry(WindissectOpaque *, HSTRING__*, SubchannelMaskInfo * *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemovePropertyChangeCallback@AnimationBindingManager@Composition@UI@Windows@@AEAAXUObjectPropertyReference@234@PEAI@Z
    void RemovePropertyChangeCallback(WindissectOpaque, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnbindIntersectingAnimators@AnimationBindingManager@Composition@UI@Windows@@AEAAJPEAVTargetMapEntry@234@G_N@Z
    long UnbindIntersectingAnimators(WindissectOpaque *, unsigned short, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterBoundProperty@AnimationBindingManager@Composition@UI@Windows@@AEAAXII@Z
    void UnregisterBoundProperty(unsigned int, unsigned int);
};
} // namespace Windows::UI::Composition
