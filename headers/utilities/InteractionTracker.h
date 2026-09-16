#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 48 member(s).
namespace Windows::UI::Composition::Interactions {
class InteractionTracker {
public:
    class Api;
    class ManipulationListEntry;
    class Test;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddManipulation@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJPEAVCompositionManipulation@345@PEAVCompositionPointerEventRouter@345@@Z
    long AddManipulation(WindissectOpaque *, WindissectOpaque *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigurePositionXInertiaModifiers@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJV?$span@PEAUIInteractionTrackerInertiaModifier@Interactions@Composition@UI@Windows@@$0?0@gsl@@@Z
    long ConfigurePositionXInertiaModifiers(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigurePositionYInertiaModifiers@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJV?$span@PEAUIInteractionTrackerInertiaModifier@Interactions@Composition@UI@Windows@@$0?0@gsl@@@Z
    long ConfigurePositionYInertiaModifiers(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureVector2PositionInertiaModifiers@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJV?$span@PEAUIInteractionTrackerVector2InertiaModifier@Interactions@Composition@UI@Windows@@$0?0@gsl@@@Z
    long ConfigureVector2PositionInertiaModifiers(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EmptyManipulationList@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAXXZ
    void EmptyManipulationList();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimatablePropertyInfo@InteractionTracker@Interactions@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@345@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    virtual bool GetAnimatablePropertyInfo(HSTRING__*, int *, ExpressionObjectPropertyInfo *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInteractionSourceCollection@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAPEAVCompositionInteractionSourceCollection@2345@XZ
    WindissectOpaque * GetInteractionSourceCollection();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0InteractionTracker@Interactions@Composition@UI@Windows@@QEAA@XZ
    InteractionTracker();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Message_CustomAnimationBegin_Callback@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJH_N@Z
    long Message_CustomAnimationBegin_Callback(int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Message_IdleBegin_Callback@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJH_N@Z
    long Message_IdleBegin_Callback(int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Message_InContactBegin_Callback@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJH_N@Z
    long Message_InContactBegin_Callback(int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Message_InertiaBegin_Callback@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJPEBUVector3@Numerics@Foundation@5@M0M0_NM11H1@Z
    long Message_InertiaBegin_Callback(WindissectOpaque *, float, WindissectOpaque *, float, WindissectOpaque *, bool, float, bool, bool, int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Message_RequestIgnored_Callback@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJH@Z
    long Message_RequestIgnored_Callback(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Message_ScrollValuesChanged_Callback@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJPEBUVector3@Numerics@Foundation@5@MH@Z
    long Message_ScrollValuesChanged_Callback(WindissectOpaque *, float, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAnimatedPropertyChanged@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z
    virtual long OnAnimatedPropertyChanged(unsigned int, unsigned int, int, bool, bool, void const *, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGetAllDependentProperties@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAXIPEAIPEAPEAI@Z
    virtual void OnGetAllDependentProperties(unsigned int, unsigned int *, unsigned int * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveManipulation@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJPEAVCompositionManipulation@345@@Z
    long RemoveManipulation(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJPEAVCompositor@345@PEAUIInteractionTrackerOwner@2345@@Z
    long RuntimeClassInitialize(WindissectOpaque *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFinalValueParameter@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnimation@345@@Z
    virtual long SetFinalValueParameter(HSTRING__*, HSTRING__*, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMaxPosition@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJAEAUVector3@Numerics@Foundation@5@@Z
    long SetMaxPosition(WindissectOpaque&);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMaxScale@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJM@Z
    long SetMaxScale(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMinPosition@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJAEAUVector3@Numerics@Foundation@5@@Z
    long SetMinPosition(WindissectOpaque&);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMinScale@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJM@Z
    long SetMinScale(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOwner@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAXPEAUIInteractionTrackerOwner@2345@@Z
    void SetOwner(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPositionInertiaDecayRate@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJAEAUVector3@Numerics@Foundation@5@_N@Z
    long SetPositionInertiaDecayRate(WindissectOpaque&, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetScaleInertiaDecayRate@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJM_N@Z
    long SetScaleInertiaDecayRate(float, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryUpdatePosition@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJAEAUVector3@Numerics@Foundation@5@W4InteractionTrackerClampingOption@2345@W4InteractionTrackerPositionUpdateOption@2345@PEAH@Z
    long TryUpdatePosition(WindissectOpaque&, int, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryUpdatePositionBy@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJAEAUVector3@Numerics@Foundation@5@W4InteractionTrackerClampingOption@2345@PEAH@Z
    long TryUpdatePositionBy(WindissectOpaque&, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryUpdatePositionWithAnimation@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJPEAVCompositionAnimation@345@PEAH@Z
    long TryUpdatePositionWithAnimation(WindissectOpaque *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryUpdateScale@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJMAEAUVector3@Numerics@Foundation@5@PEAH@Z
    long TryUpdateScale(float, WindissectOpaque&, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryUpdateScaleWithAdditionalVelocity@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAXMAEAUVector3@Numerics@Foundation@5@PEAH@Z
    void TryUpdateScaleWithAdditionalVelocity(float, WindissectOpaque&, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryUpdateScaleWithAnimation@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJPEAVCompositionAnimation@345@AEAUVector3@Numerics@Foundation@5@PEAH@Z
    long TryUpdateScaleWithAnimation(WindissectOpaque *, WindissectOpaque&, int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1InteractionTracker@Interactions@Composition@UI@Windows@@UEAA@XZ
    virtual ~InteractionTracker();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMessageCallType@InteractionTracker@Interactions@Composition@UI@Windows@@MEAAPEBUMsgCallTypeDefinition@@XZ
    virtual MsgCallTypeDefinition const * GetMessageCallType();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldRegisterCallbackId@InteractionTracker@Interactions@Composition@UI@Windows@@MEAA_NXZ
    virtual bool ShouldRegisterCallbackId();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddConditionalInertiaModifiers@InteractionTracker@Interactions@Composition@UI@Windows@@AEAAJPEAVConditionalExpressionAnimation@345@W4InertiaModifierAxis@@AEBV?$DynArray@W4InertiaModifierType@@$0A@@@@Z
    long AddConditionalInertiaModifiers(WindissectOpaque *, int, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustPositionIfGreaterThanThreshold@InteractionTracker@Interactions@Composition@UI@Windows@@AEAAXW4ScrollAxis@@MM@Z
    void AdjustPositionIfGreaterThanThreshold(int, float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureCenterPointInertiaModifiers@InteractionTracker@Interactions@Composition@UI@Windows@@AEAAJV?$span@PEAUICompositionConditionalValue@Interactions@Composition@UI@Windows@@$0?0@gsl@@W4ScrollAxis@@@Z
    long ConfigureCenterPointInertiaModifiers(WindissectOpaque, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureInertiaModifiers@InteractionTracker@Interactions@Composition@UI@Windows@@AEAAJV?$span@PEAUIInteractionTrackerInertiaModifier@Interactions@Composition@UI@Windows@@$0?0@gsl@@W4ScrollAxis@@@Z
    long ConfigureInertiaModifiers(WindissectOpaque, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNextRequestId@InteractionTracker@Interactions@Composition@UI@Windows@@AEAAHXZ
    int GetNextRequestId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateScrollValues@InteractionTracker@Interactions@Composition@UI@Windows@@AEAAXMMM_N0@Z
    void UpdateScrollValues(float, float, float, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateUpdateOption@InteractionTracker@Interactions@Composition@UI@Windows@@AEBAJW4InteractionTrackerClampingOption@2345@@Z
    long ValidateUpdateOption(int) const;
};
} // namespace Windows::UI::Composition::Interactions
