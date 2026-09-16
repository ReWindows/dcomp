#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 31 member(s).
namespace Windows::UI::Composition {
class CompositionObject {
public:
    class Api;
    class Partner;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CompositionObject@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectAnimation@CompositionObject@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long DisconnectAnimation(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableImplicitAnimations@CompositionObject@Composition@UI@Windows@@UEAAXH@Z
    virtual void EnableImplicitAnimations(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureValidState@CompositionObject@Composition@UI@Windows@@UEAAJXZ
    virtual long EnsureValidState();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimatablePropertyInfo@CompositionObject@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    virtual bool GetAnimatablePropertyInfo(HSTRING__*, int *, ExpressionObjectPropertyInfo *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetComment@CompositionObject@Composition@UI@Windows@@QEAAJPEAPEAUHSTRING__@@@Z
    long GetComment(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplicitAnimations@CompositionObject@Composition@UI@Windows@@UEBAPEAVImplicitAnimationCollection@234@XZ
    virtual WindissectOpaque * GetImplicitAnimations() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProperties@CompositionObject@Composition@UI@Windows@@UEAAPEAVCompositionPropertySet@234@_N@Z
    virtual WindissectOpaque * GetProperties(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandlePropertyChange@CompositionObject@Composition@UI@Windows@@UEAAJPEBUAnimationValueData@234@PEA_N@Z
    virtual long HandlePropertyChange(WindissectOpaque const *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasImplicitAnimations@CompositionObject@Composition@UI@Windows@@QEBA_NXZ
    bool HasImplicitAnimations() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAnimatedPropertyChanged@CompositionObject@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z
    virtual long OnAnimatedPropertyChanged(unsigned int, unsigned int, int, bool, bool, void const *, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGetAllDependentProperties@CompositionObject@Composition@UI@Windows@@UEAAXIPEAIPEAPEAI@Z
    virtual void OnGetAllDependentProperties(unsigned int, unsigned int *, unsigned int * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopulatePropertyInfo@CompositionObject@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAVAnimationPropertyInfo@234@@Z
    virtual long PopulatePropertyInfo(HSTRING__*, WindissectOpaque *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CompositionObject@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CompositionObject@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CompositionObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z
    long RuntimeClassInitialize(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetComment@CompositionObject@Composition@UI@Windows@@UEAAXPEAUHSTRING__@@@Z
    virtual void SetComment(HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFinalValueParameter@CompositionObject@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnimation@234@@Z
    virtual long SetFinalValueParameter(HSTRING__*, HSTRING__*, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldRegisterCallbackId@CompositionObject@Composition@UI@Windows@@UEAA_NXZ
    virtual bool ShouldRegisterCallbackId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartAnimationGroup@CompositionObject@Composition@UI@Windows@@UEAAJPEAUICompositionAnimationBase@234@@Z
    virtual long StartAnimationGroup(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartAnimationWithController@CompositionObject@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAVCompositionAnimation@234@PEAVAnimationController@234@@Z
    virtual long StartAnimationWithController(HSTRING__*, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopAnimation@CompositionObject@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long StopAnimation(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopAnimationGroup@CompositionObject@Composition@UI@Windows@@UEAAJPEAUICompositionAnimationBase@234@@Z
    virtual long StopAnimationGroup(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetAnimationController@CompositionObject@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@PEAPEAVAnimationController@234@@Z
    long TryGetAnimationController(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetPropertyAnimator@CompositionObject@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAPEAVCompositionPropertyAnimator@234@@Z
    virtual long TryGetPropertyAnimator(HSTRING__*, WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CompositionObject@Composition@UI@Windows@@UEAA@XZ
    virtual ~CompositionObject();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CompositionObject@Composition@UI@Windows@@IEAA@XZ
    CompositionObject();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CompositionObject@Composition@UI@Windows@@MEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostDestroy@CompositionObject@Composition@UI@Windows@@MEAAXXZ
    virtual void PostDestroy();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSparse_CompositionPropertySet@CompositionObject@Composition@UI@Windows@@AEBAPEAVCompositionPropertySet@234@XZ
    WindissectOpaque * GetSparse_CompositionPropertySet() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSparse_CompositionPropertySet@CompositionObject@Composition@UI@Windows@@AEAAXPEAVCompositionPropertySet@234@@Z
    void SetSparse_CompositionPropertySet(WindissectOpaque *);
};
} // namespace Windows::UI::Composition
