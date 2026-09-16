#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 42 member(s).
namespace Windows::UI::Composition {
class CompositionPropertySet {
public:
    class Api;
    class Partner;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CompositionPropertySet@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CompositionPropertySet@Composition@UI@Windows@@QEAA@XZ
    CompositionPropertySet();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CompositionPropertySet@Composition@UI@Windows@@UEAAXXZ
    virtual void Destroy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimatablePropertyInfo@CompositionPropertySet@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    virtual bool GetAnimatablePropertyInfo(HSTRING__*, int *, ExpressionObjectPropertyInfo *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProperties@CompositionPropertySet@Composition@UI@Windows@@UEAAPEAV1234@_N@Z
    virtual WindissectOpaque * GetProperties(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAnimatedPropertyChanged@CompositionPropertySet@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z
    virtual long OnAnimatedPropertyChanged(unsigned int, unsigned int, int, bool, bool, void const *, unsigned short);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CompositionPropertySet@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CompositionPropertySet@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFinalValueParameter@CompositionPropertySet@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnimation@234@@Z
    virtual long SetFinalValueParameter(HSTRING__*, HSTRING__*, WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CompositionPropertySet@Composition@UI@Windows@@UEAA@XZ
    virtual ~CompositionPropertySet();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNotificationId@CompositionPropertySet@Composition@UI@Windows@@MEBA?AW4DCOMPOSITION_EXPRESSION_NOTIFICATION_PROPERTY@@I@Z
    virtual int GetNotificationId(unsigned int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldRegisterCallbackId@CompositionPropertySet@Composition@UI@Windows@@MEAA_NXZ
    virtual bool ShouldRegisterCallbackId();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyIdFromName@CompositionPropertySet@Composition@UI@Windows@@AEAA_NPEAUHSTRING__@@PEAI@Z
    bool GetPropertyIdFromName(HSTRING__*, unsigned int *);
};
} // namespace Windows::UI::Composition
