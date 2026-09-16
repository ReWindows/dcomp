#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 11 member(s).
namespace DirectComposition {
class CSharedAllocationBase {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSharedAllocationBase@DirectComposition@@QEAA@PEAVCSharedSectionBase@1@@Z
    CSharedAllocationBase(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Dispose@CSharedAllocationBase@DirectComposition@@QEAAX_K@Z
    void Dispose(uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDevice@CSharedAllocationBase@DirectComposition@@UEAAPEAVCDevice@2@XZ
    virtual WindissectOpaque * GetDevice();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBeforeSynchronizationStateUpdated@CSharedAllocationBase@DirectComposition@@UEAAXW4State@CCompositorSynchronizedObject@2@@Z
    virtual void OnBeforeSynchronizationStateUpdated(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMarshalerRelease@CSharedAllocationBase@DirectComposition@@UEAAXXZ
    virtual void OnMarshalerRelease();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisposeOnDelayedDestruction@CSharedAllocationBase@DirectComposition@@MEAAXXZ
    virtual void DisposeOnDelayedDestruction();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSharedAllocationBase@DirectComposition@@MEAA@XZ
    virtual ~CSharedAllocationBase();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnUse@CSharedAllocationBase@DirectComposition@@EEAAXXZ
    virtual void UnUse();
};
} // namespace DirectComposition
