#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 35 member(s).
namespace DirectComposition {
class CLinearTransferEffect {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CLinearTransferEffect@DirectComposition@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CLinearTransferEffect@DirectComposition@@SAJPEAVCFilterEffectProxy@2@PEAPEAUIDCompositionLinearTransferEffect@@@Z
    static long Create(WindissectOpaque *, IDCompositionLinearTransferEffect * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CLinearTransferEffect@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CLinearTransferEffect@DirectComposition@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAlphaDisable@CLinearTransferEffect@DirectComposition@@UEAAJH@Z
    virtual long SetAlphaDisable(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAlphaSlope@CLinearTransferEffect@DirectComposition@@UEAAJM@Z
    virtual long SetAlphaSlope(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAlphaSlope@CLinearTransferEffect@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z
    virtual long SetAlphaSlope(IDCompositionAnimation *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAlphaYIntercept@CLinearTransferEffect@DirectComposition@@UEAAJM@Z
    virtual long SetAlphaYIntercept(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAlphaYIntercept@CLinearTransferEffect@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z
    virtual long SetAlphaYIntercept(IDCompositionAnimation *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBlueDisable@CLinearTransferEffect@DirectComposition@@UEAAJH@Z
    virtual long SetBlueDisable(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBlueSlope@CLinearTransferEffect@DirectComposition@@UEAAJM@Z
    virtual long SetBlueSlope(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBlueSlope@CLinearTransferEffect@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z
    virtual long SetBlueSlope(IDCompositionAnimation *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBlueYIntercept@CLinearTransferEffect@DirectComposition@@UEAAJM@Z
    virtual long SetBlueYIntercept(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBlueYIntercept@CLinearTransferEffect@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z
    virtual long SetBlueYIntercept(IDCompositionAnimation *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetClampOutput@CLinearTransferEffect@DirectComposition@@UEAAJH@Z
    virtual long SetClampOutput(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGreenDisable@CLinearTransferEffect@DirectComposition@@UEAAJH@Z
    virtual long SetGreenDisable(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGreenSlope@CLinearTransferEffect@DirectComposition@@UEAAJM@Z
    virtual long SetGreenSlope(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGreenSlope@CLinearTransferEffect@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z
    virtual long SetGreenSlope(IDCompositionAnimation *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGreenYIntercept@CLinearTransferEffect@DirectComposition@@UEAAJM@Z
    virtual long SetGreenYIntercept(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGreenYIntercept@CLinearTransferEffect@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z
    virtual long SetGreenYIntercept(IDCompositionAnimation *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRedDisable@CLinearTransferEffect@DirectComposition@@UEAAJH@Z
    virtual long SetRedDisable(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRedSlope@CLinearTransferEffect@DirectComposition@@UEAAJM@Z
    virtual long SetRedSlope(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRedSlope@CLinearTransferEffect@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z
    virtual long SetRedSlope(IDCompositionAnimation *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRedYIntercept@CLinearTransferEffect@DirectComposition@@UEAAJM@Z
    virtual long SetRedYIntercept(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRedYIntercept@CLinearTransferEffect@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z
    virtual long SetRedYIntercept(IDCompositionAnimation *);
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaxInputs@CLinearTransferEffect@DirectComposition@@MEBAIXZ
    virtual unsigned int GetMaxInputs() const;
};
} // namespace DirectComposition
