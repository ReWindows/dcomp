#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 14 member(s).
namespace Windows::UI::Composition::CompositionPointerEventRouter {
class Partner {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CaptureManipulationInCompositor@Partner@CompositionPointerEventRouter@Composition@UI@Windows@@UEAAJI_K@Z
    virtual long CaptureManipulationInCompositor(unsigned int, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearAll@Partner@CompositionPointerEventRouter@Composition@UI@Windows@@UEAAJXZ
    virtual long ClearAll();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAndAttachManipulationTarget@Partner@CompositionPointerEventRouter@Composition@UI@Windows@@UEAAJW4SystemManipulationMode@@PEAPEAUICompositionManipulationPartner@345@@Z
    virtual long CreateAndAttachManipulationTarget(int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachManipulationTarget@Partner@CompositionPointerEventRouter@Composition@UI@Windows@@UEAAJXZ
    virtual long DetachManipulationTarget();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisableOutputPrediction@Partner@CompositionPointerEventRouter@Composition@UI@Windows@@UEAAJH@Z
    virtual long DisableOutputPrediction(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableFurtherProcessingForInput@Partner@CompositionPointerEventRouter@Composition@UI@Windows@@UEAAJH@Z
    virtual long EnableFurtherProcessingForInput(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableInputTransparency@Partner@CompositionPointerEventRouter@Composition@UI@Windows@@UEAAJH@Z
    virtual long EnableInputTransparency(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnablePalmRejection@Partner@CompositionPointerEventRouter@Composition@UI@Windows@@UEAAJH@Z
    virtual long EnablePalmRejection(int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Partner@CompositionPointerEventRouter@Composition@UI@Windows@@QEAA@XZ
    Partner();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDefaultInteraction@Partner@CompositionPointerEventRouter@Composition@UI@Windows@@UEAAJH@Z
    virtual long SetDefaultInteraction(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMouseGestures@Partner@CompositionPointerEventRouter@Composition@UI@Windows@@UEAAJW4DCOMPOSITION_INTERACTION_TYPE_MOUSE@@@Z
    virtual long SetMouseGestures(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPenGestures@Partner@CompositionPointerEventRouter@Composition@UI@Windows@@UEAAJW4DCOMPOSITION_INTERACTION_TYPE_PEN@@@Z
    virtual long SetPenGestures(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTouchGestures@Partner@CompositionPointerEventRouter@Composition@UI@Windows@@UEAAJW4DCOMPOSITION_INTERACTION_TYPE_TOUCH@@@Z
    virtual long SetTouchGestures(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTouchGesturesContactCount@Partner@CompositionPointerEventRouter@Composition@UI@Windows@@UEAAJW4DCOMPOSITION_INTERACTION_TYPE_TOUCH@@II@Z
    virtual long SetTouchGesturesContactCount(int, unsigned int, unsigned int);
};
} // namespace Windows::UI::Composition::CompositionPointerEventRouter
