#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 11 member(s).
namespace DirectComposition {
class CScalarProxy {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddCubic@CScalarProxy@DirectComposition@@UEAAJNMMMM@Z
    virtual long AddCubic(double, float, float, float, float);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CScalarProxy@DirectComposition@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddRepeat@CScalarProxy@DirectComposition@@UEAAJNN@Z
    virtual long AddRepeat(double, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddSinusoidal@CScalarProxy@DirectComposition@@UEAAJNMMMM@Z
    virtual long AddSinusoidal(double, float, float, float, float);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CScalarProxy@DirectComposition@@QEAA@I@Z
    CScalarProxy(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?End@CScalarProxy@DirectComposition@@UEAAJNM@Z
    virtual long End(double, float);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CScalarProxy@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CScalarProxy@DirectComposition@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CScalarProxy@DirectComposition@@UEAAJXZ
    virtual long Reset();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAbsoluteBeginTime@CScalarProxy@DirectComposition@@UEAAJT_LARGE_INTEGER@@@Z
    virtual long SetAbsoluteBeginTime(_LARGE_INTEGER);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@CScalarProxy@DirectComposition@@UEAAJM@Z
    virtual long SetValue(float);
};
} // namespace DirectComposition
