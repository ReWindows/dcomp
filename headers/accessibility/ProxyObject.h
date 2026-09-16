#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 62 member(s).
namespace Windows::UI::Composition {
class ProxyObject {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectAnimation@ProxyObject@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long DisconnectAnimation(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ListenForPropertyChange@ProxyObject@Composition@UI@Windows@@QEAAJIPEAV1234@PEAUICompositionPropertyChangedListenerPartner@234@W4PropertyChangeNotificationOption@1234@@Z
    long ListenForPropertyChange(unsigned int, WindissectOpaque *, WindissectOpaque *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyPropertyChanged@ProxyObject@Composition@UI@Windows@@QEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@V?$span@$$CBE$0?0@gsl@@IPEA_N@Z
    long NotifyPropertyChanged(unsigned int, int, WindissectOpaque, unsigned int, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReferencePropertyChanged_Callback@ProxyObject@Composition@UI@Windows@@QEAAXI@Z
    void ReferencePropertyChanged_Callback(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetComment@ProxyObject@Composition@UI@Windows@@UEAAXPEAUHSTRING__@@@Z
    virtual void SetComment(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartAnimationGroup@ProxyObject@Composition@UI@Windows@@UEAAJPEAUICompositionAnimationBase@234@@Z
    virtual long StartAnimationGroup(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartAnimationWithController@ProxyObject@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAVCompositionAnimation@234@PEAVAnimationController@234@@Z
    virtual long StartAnimationWithController(HSTRING__*, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopAnimation@ProxyObject@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long StopAnimation(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopAnimationGroup@ProxyObject@Composition@UI@Windows@@UEAAJPEAUICompositionAnimationBase@234@@Z
    virtual long StopAnimationGroup(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetPropertyAnimator@ProxyObject@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAPEAVCompositionPropertyAnimator@234@@Z
    virtual long TryGetPropertyAnimator(HSTRING__*, WindissectOpaque * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@ProxyObject@Composition@UI@Windows@@MEAAXXZ
    virtual void Destroy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimatablePropertyInfoImpl@ProxyObject@Composition@UI@Windows@@IEBA_NPEAUHSTRING__@@AEBV?$span@QEBUAnimatedProperty@AnimationHelper@Composition@UI@Windows@@$0?0@gsl@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    bool GetAnimatablePropertyInfoImpl(HSTRING__*, WindissectOpaque const &, int *, ExpressionObjectPropertyInfo *, int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMessageCallType@ProxyObject@Composition@UI@Windows@@MEAAPEBUMsgCallTypeDefinition@@XZ
    virtual MsgCallTypeDefinition const * GetMessageCallType();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetNotificationId@ProxyObject@Composition@UI@Windows@@MEBA?AW4DCOMPOSITION_EXPRESSION_NOTIFICATION_PROPERTY@@I@Z
    virtual int GetNotificationId(unsigned int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostDestroy@ProxyObject@Composition@UI@Windows@@MEAAXXZ
    virtual void PostDestroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseResouceHandle@ProxyObject@Composition@UI@Windows@@IEAAXXZ
    void ReleaseResouceHandle();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@IEAAJPEAVCompositor@234@I_N@Z
    long RuntimeClassInitialize(WindissectOpaque *, unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@IEAAJPEAVCompositor@234@IPEAX_N@Z
    long RuntimeClassInitialize(WindissectOpaque *, unsigned int, void *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBufferProperty@ProxyObject@Composition@UI@Windows@@IEAAXIPEBX_K@Z
    void SetBufferProperty(unsigned int, void const *, uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFinalValueParameterHelper@ProxyObject@Composition@UI@Windows@@IEAA_NPEAUHSTRING__@@0PEAVCompositionAnimation@234@AEBV?$span@QEBUAnimatedProperty@AnimationHelper@Composition@UI@Windows@@$0?0@gsl@@@Z
    bool SetFinalValueParameterHelper(HSTRING__*, HSTRING__*, WindissectOpaque *, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetReferenceArrayProperty@ProxyObject@Composition@UI@Windows@@IEAAXIPEBI_K@Z
    void SetReferenceArrayProperty(unsigned int, unsigned int const *, uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetReferenceProperty@ProxyObject@Composition@UI@Windows@@IEAAXII@Z
    void SetReferenceProperty(unsigned int, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetScalarFloatProperty@ProxyObject@Composition@UI@Windows@@IEAAXIM@Z
    void SetScalarFloatProperty(unsigned int, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetScalarIntegerProperty@ProxyObject@Composition@UI@Windows@@IEAAXI_J@Z
    void SetScalarIntegerProperty(unsigned int, int64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSharedSectionReferenceProperties@ProxyObject@Composition@UI@Windows@@IEAAXIIIPEAVCSharedAllocationBase@DirectComposition@@_K@Z
    void SetSharedSectionReferenceProperties(unsigned int, unsigned int, unsigned int, WindissectOpaque *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAnimatedProperty@ProxyObject@Composition@UI@Windows@@IEAA_NIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXGAEBV?$span@QEBUAnimatedProperty@AnimationHelper@Composition@UI@Windows@@$0?0@gsl@@@Z
    bool UpdateAnimatedProperty(unsigned int, unsigned int, int, bool, bool, void const *, unsigned short, WindissectOpaque const &);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokePropertyChange_Callback@ProxyObject@Composition@UI@Windows@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@IPEBX@Z
    void InvokePropertyChange_Callback(int, unsigned int, void const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterConversationWithDCompK@ProxyObject@Composition@UI@Windows@@AEAAXXZ
    void RegisterConversationWithDCompK();
};
} // namespace Windows::UI::Composition
