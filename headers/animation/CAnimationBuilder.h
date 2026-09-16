#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 22 member(s).
namespace DirectComposition {
class CAnimationBuilder {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddCubic@CAnimationBuilder@DirectComposition@@UEAAJNMMMM@Z
    virtual long AddCubic(double, float, float, float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddFreeze@CAnimationBuilder@DirectComposition@@UEAAJN@Z
    virtual long AddFreeze(double);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CAnimationBuilder@DirectComposition@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddRepeat@CAnimationBuilder@DirectComposition@@UEAAJNN@Z
    virtual long AddRepeat(double, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddReverse@CAnimationBuilder@DirectComposition@@UEAAJN@Z
    virtual long AddReverse(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddSinusoidal@CAnimationBuilder@DirectComposition@@UEAAJNMMMM@Z
    virtual long AddSinusoidal(double, float, float, float, float);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CAnimationBuilder@DirectComposition@@QEAA@XZ
    CAnimationBuilder();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertDoubleToQPC@CAnimationBuilder@DirectComposition@@SA_JN@Z
    static int64_t ConvertDoubleToQPC(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?End@CAnimationBuilder@DirectComposition@@UEAAJNM@Z
    virtual long End(double, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimationResourceHandle@CAnimationBuilder@DirectComposition@@QEAAJPEAVCDevice@2@_NPEAPEAVCAnimationProxy@2@@Z
    long GetAnimationResourceHandle(WindissectOpaque *, bool, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OptimizeTrailingPrimitives@CAnimationBuilder@DirectComposition@@QEAAXXZ
    void OptimizeTrailingPrimitives();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CAnimationBuilder@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CAnimationBuilder@DirectComposition@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CAnimationBuilder@DirectComposition@@UEAAJXZ
    virtual long Reset();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAbsoluteBeginTime@CAnimationBuilder@DirectComposition@@UEAAJT_LARGE_INTEGER@@@Z
    virtual long SetAbsoluteBeginTime(_LARGE_INTEGER);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHandoff@CAnimationBuilder@DirectComposition@@UEAAJNH@Z
    virtual long SetHandoff(double, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTrigger@CAnimationBuilder@DirectComposition@@UEAAJPEAUIDCompositionAnimationTriggerPartner@@@Z
    virtual long SetTrigger(IDCompositionAnimationTriggerPartner *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TelemetryGetAnimationScenarioGUID@CAnimationBuilder@DirectComposition@@UEAAJPEAU_GUID@@@Z
    virtual long TelemetryGetAnimationScenarioGUID(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TelemetrySetAnimationScenarioGUID@CAnimationBuilder@DirectComposition@@UEAAJAEBU_GUID@@@Z
    virtual long TelemetrySetAnimationScenarioGUID(_GUID const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAnimationBuilder@DirectComposition@@QEAA@XZ
    ~CAnimationBuilder();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddPrimitive@CAnimationBuilder@DirectComposition@@AEAAJAEBUDwmAnimationPrimitive@@@Z
    long AddPrimitive(DwmAnimationPrimitive const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddPrimitiveInternal@CAnimationBuilder@DirectComposition@@AEAAJAEBUDwmAnimationPrimitive@@@Z
    long AddPrimitiveInternal(DwmAnimationPrimitive const &);
};
} // namespace DirectComposition
