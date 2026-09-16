#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 12 member(s).
namespace Windows::UI::Composition {
class ComponentTransform2D {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@ComponentTransform2D@Composition@UI@Windows@@UEAAXXZ
    virtual void Destroy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimatablePropertyInfo@ComponentTransform2D@Composition@UI@Windows@@SA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAI2PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    static bool GetAnimatablePropertyInfo(HSTRING__*, int *, unsigned int *, unsigned int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplicitAnimations@ComponentTransform2D@Composition@UI@Windows@@UEBAPEAVImplicitAnimationCollection@234@XZ
    virtual WindissectOpaque * GetImplicitAnimations() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandlePropertyChange@ComponentTransform2D@Composition@UI@Windows@@UEAAJPEBUAnimationValueData@234@PEA_N@Z
    virtual long HandlePropertyChange(WindissectOpaque const *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAnimatedPropertyChanged@ComponentTransform2D@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z
    virtual long OnAnimatedPropertyChanged(unsigned int, unsigned int, int, bool, bool, void const *, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@ComponentTransform2D@Composition@UI@Windows@@QEAAJPEAVCompositionObject@234@@Z
    long RuntimeClassInitialize(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFinalValueParameter@ComponentTransform2D@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnimation@234@@Z
    virtual long SetFinalValueParameter(HSTRING__*, HSTRING__*, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPropertyChangedListener@ComponentTransform2D@Composition@UI@Windows@@QEAAJW4DCOMPOSITION_EXPRESSION_NOTIFICATION_PROPERTY@@PEAUICompositionPropertyChangedListenerPartner@234@PEAVProxyObject@234@@Z
    long SetPropertyChangedListener(int, WindissectOpaque *, WindissectOpaque *);
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNotificationId@ComponentTransform2D@Composition@UI@Windows@@MEBA?AW4DCOMPOSITION_EXPRESSION_NOTIFICATION_PROPERTY@@I@Z
    virtual int GetNotificationId(unsigned int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldRegisterCallbackId@ComponentTransform2D@Composition@UI@Windows@@MEAA_NXZ
    virtual bool ShouldRegisterCallbackId();
};
} // namespace Windows::UI::Composition
