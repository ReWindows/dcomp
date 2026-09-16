#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 25 member(s).
namespace Windows::UI::Composition {
class CompositionPointerEventRouter {
public:
    class Partner;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CompositionPointerEventRouter@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CaptureManipulationInCompositor@CompositionPointerEventRouter@Composition@UI@Windows@@QEAAJI_K@Z
    long CaptureManipulationInCompositor(unsigned int, uint64_t);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CompositionPointerEventRouter@Composition@UI@Windows@@QEAA@XZ
    CompositionPointerEventRouter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAndAttachManipulationTarget@CompositionPointerEventRouter@Composition@UI@Windows@@QEAAJW4SystemManipulationMode@@PEAPEAUICompositionManipulationPartner@234@@Z
    long CreateAndAttachManipulationTarget(int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisableOutputPrediction@CompositionPointerEventRouter@Composition@UI@Windows@@QEAAJH@Z
    long DisableOutputPrediction(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableInputTransparency@CompositionPointerEventRouter@Composition@UI@Windows@@QEAAJH@Z
    long EnableInputTransparency(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnablePalmRejection@CompositionPointerEventRouter@Composition@UI@Windows@@QEAAJH@Z
    long EnablePalmRejection(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimatablePropertyInfo@CompositionPointerEventRouter@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    virtual bool GetAnimatablePropertyInfo(HSTRING__*, int *, ExpressionObjectPropertyInfo *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAnimatedPropertyChanged@CompositionPointerEventRouter@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z
    virtual long OnAnimatedPropertyChanged(unsigned int, unsigned int, int, bool, bool, void const *, unsigned short);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CompositionPointerEventRouter@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CompositionPointerEventRouter@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CompositionPointerEventRouter@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAX@Z
    long RuntimeClassInitialize(WindissectOpaque *, void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDefaultInteraction@CompositionPointerEventRouter@Composition@UI@Windows@@QEAAJH@Z
    long SetDefaultInteraction(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHoverPointerSource@CompositionPointerEventRouter@Composition@UI@Windows@@QEAAXPEAVCompositionHoverPointerSource@234@@Z
    void SetHoverPointerSource(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMouseSettings@CompositionPointerEventRouter@Composition@UI@Windows@@QEAAJW4MouseGestures@Private@234@@Z
    long SetMouseSettings(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMousewheelSettings@CompositionPointerEventRouter@Composition@UI@Windows@@QEAAJW4MousewheelGestures@Private@234@@Z
    long SetMousewheelSettings(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPenSettings@CompositionPointerEventRouter@Composition@UI@Windows@@QEAAJW4PenGestures@Private@234@II@Z
    long SetPenSettings(int, unsigned int, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTouchSettings@CompositionPointerEventRouter@Composition@UI@Windows@@QEAAJW4TouchGestures@Private@234@II@Z
    long SetTouchSettings(int, unsigned int, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CompositionPointerEventRouter@Composition@UI@Windows@@UEAA@XZ
    virtual ~CompositionPointerEventRouter();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessChange@CompositionPointerEventRouter@Composition@UI@Windows@@IEAAJAEBUInteractionConfigurationInternal@@AEBW4Enum@InteractionProperty@@@Z
    long ProcessChange(InteractionConfigurationInternal const &, int const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAllConfigs@CompositionPointerEventRouter@Composition@UI@Windows@@IEAAJW4Enum@InteractionProperty@@@Z
    long UpdateAllConfigs(int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureNotReadOnly@CompositionPointerEventRouter@Composition@UI@Windows@@AEAAJXZ
    long EnsureNotReadOnly();
};
} // namespace Windows::UI::Composition
