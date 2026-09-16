#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 8 member(s).
namespace DirectComposition {
class CCompositorSynchronizedObject {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAvailable@CCompositorSynchronizedObject@DirectComposition@@QEAA_NXZ
    bool IsAvailable();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SafeToModify@CCompositorSynchronizedObject@DirectComposition@@UEAA_NXZ
    virtual bool SafeToModify();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInUseAndMarshaled@CCompositorSynchronizedObject@DirectComposition@@UEAAXXZ
    virtual void SetInUseAndMarshaled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnUse@CCompositorSynchronizedObject@DirectComposition@@UEAAXXZ
    virtual void UnUse();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reuse@CCompositorSynchronizedObject@DirectComposition@@MEAAXXZ
    virtual void Reuse();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBeforeSynchronizationStateUpdated@CCompositorSynchronizedObject@DirectComposition@@EEAAXW4State@12@@Z
    virtual void OnBeforeSynchronizationStateUpdated(int);
};
} // namespace DirectComposition
