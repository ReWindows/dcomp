#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 11 member(s).
namespace Windows::UI::Composition {
class ComponentTransform3D {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@ComponentTransform3D@Composition@UI@Windows@@UEAAXXZ
    virtual void Destroy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimatablePropertyInfo@ComponentTransform3D@Composition@UI@Windows@@SA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAI2PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    static bool GetAnimatablePropertyInfo(HSTRING__*, int *, unsigned int *, unsigned int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplicitAnimations@ComponentTransform3D@Composition@UI@Windows@@UEBAPEAVImplicitAnimationCollection@234@XZ
    virtual WindissectOpaque * GetImplicitAnimations() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandlePropertyChange@ComponentTransform3D@Composition@UI@Windows@@UEAAJPEBUAnimationValueData@234@PEA_N@Z
    virtual long HandlePropertyChange(WindissectOpaque const *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAnimatedPropertyChanged@ComponentTransform3D@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z
    virtual long OnAnimatedPropertyChanged(unsigned int, unsigned int, int, bool, bool, void const *, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@ComponentTransform3D@Composition@UI@Windows@@QEAAJPEAVCompositionObject@234@@Z
    long RuntimeClassInitialize(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTransformMatrix@ComponentTransform3D@Composition@UI@Windows@@QEAAJAEBUMatrix4x4@Numerics@Foundation@4@@Z
    long SetTransformMatrix(WindissectOpaque &);
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNotificationId@ComponentTransform3D@Composition@UI@Windows@@MEBA?AW4DCOMPOSITION_EXPRESSION_NOTIFICATION_PROPERTY@@I@Z
    virtual int GetNotificationId(unsigned int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldRegisterCallbackId@ComponentTransform3D@Composition@UI@Windows@@MEAA_NXZ
    virtual bool ShouldRegisterCallbackId();
};
} // namespace Windows::UI::Composition
