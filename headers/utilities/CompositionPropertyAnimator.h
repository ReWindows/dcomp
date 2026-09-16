#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 30 member(s).
namespace Windows::UI::Composition {
class CompositionPropertyAnimator {
public:
    class Partner;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CompositionPropertyAnimator@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PE Export
    // Symbol: ?AddToControllerIfSupported@CompositionPropertyAnimator@Composition@UI@Windows@@UEAAJPEAVAnimationController@234@@Z
    virtual long AddToControllerIfSupported(WindissectOpaque *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CompositionPropertyAnimator@Composition@UI@Windows@@QEAA@XZ
    CompositionPropertyAnimator();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CompositionPropertyAnimator@Composition@UI@Windows@@UEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableValueUpdates@CompositionPropertyAnimator@Composition@UI@Windows@@UEAAJ_N@Z
    virtual long EnableValueUpdates(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@CompositionPropertyAnimator@Composition@UI@Windows@@UEAAJPEAM@Z
    virtual long GetValue(float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@CompositionPropertyAnimator@Composition@UI@Windows@@UEAAJPEAUMatrix3x2@Numerics@Foundation@4@@Z
    virtual long GetValue(WindissectOpaque*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@CompositionPropertyAnimator@Composition@UI@Windows@@UEAAJPEAU_D3DCOLORVALUE@@@Z
    virtual long GetValue(_D3DCOLORVALUE *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@CompositionPropertyAnimator@Composition@UI@Windows@@UEAAJPEA_N@Z
    virtual long GetValue(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Message_PathAnimationEnded@CompositionPropertyAnimator@Composition@UI@Windows@@QEAAJW4AnimationEventType@@PEBEI@Z
    long Message_PathAnimationEnded(int, unsigned char const *, unsigned int);
    // Category: Method | Source: PE Export
    // Symbol: ?Message_PersistentCache@CompositionPropertyAnimator@Composition@UI@Windows@@UEAAJIPEBEI@Z
    virtual long Message_PersistentCache(unsigned int, unsigned char const *, unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CompositionPropertyAnimator@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CompositionPropertyAnimator@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveTarget@CompositionPropertyAnimator@Composition@UI@Windows@@QEAAXXZ
    void RemoveTarget();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOwningTrigger@CompositionPropertyAnimator@Composition@UI@Windows@@QEAAXPEAVCompositionAnimationTriggerPartner@Internal@234@@Z
    void SetOwningTrigger(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTarget@CompositionPropertyAnimator@Composition@UI@Windows@@QEAAJPEAVExpressionObjectPropertyInfo@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEAVSubchannelMaskInfo@@@Z
    long SetTarget(ExpressionObjectPropertyInfo *, int, SubchannelMaskInfo *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTargetMask@CompositionPropertyAnimator@Composition@UI@Windows@@QEAAXPEAVSubchannelMaskInfo@@@Z
    void SetTargetMask(SubchannelMaskInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetController@CompositionPropertyAnimator@Composition@UI@Windows@@UEAAJPEAPEAVAnimationController@234@@Z
    virtual long TryGetController(WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CompositionPropertyAnimator@Composition@UI@Windows@@UEAA@XZ
    virtual ~CompositionPropertyAnimator();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureRegisteredInBatch@CompositionPropertyAnimator@Composition@UI@Windows@@MEAAXXZ
    virtual void EnsureRegisteredInBatch();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMessageCallType@CompositionPropertyAnimator@Composition@UI@Windows@@MEAAPEBUMsgCallTypeDefinition@@XZ
    virtual MsgCallTypeDefinition const * GetMessageCallType();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyCompleted@CompositionPropertyAnimator@Composition@UI@Windows@@MEAAXXZ
    virtual void NotifyCompleted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CompositionPropertyAnimator@Composition@UI@Windows@@IEAAJPEAVCompositor@234@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4AnimationValueSynchronizationBehavior@234@@Z
    long RuntimeClassInitialize(WindissectOpaque *, unsigned int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldRegisterCallbackId@CompositionPropertyAnimator@Composition@UI@Windows@@MEAA_NXZ
    virtual bool ShouldRegisterCallbackId();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AnimationEnded@CompositionPropertyAnimator@Composition@UI@Windows@@AEAAJW4AnimationEventType@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z
    long AnimationEnded(int, int, void const *);
};
} // namespace Windows::UI::Composition
