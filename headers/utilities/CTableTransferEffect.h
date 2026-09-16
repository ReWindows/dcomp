#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 31 member(s).
namespace DirectComposition {
class CTableTransferEffect {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CTableTransferEffect@DirectComposition@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CTableTransferEffect@DirectComposition@@SAJPEAVCFilterEffectProxy@2@PEAPEAUIDCompositionTableTransferEffect@@@Z
    static long Create(WindissectOpaque *, IDCompositionTableTransferEffect * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CTableTransferEffect@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CTableTransferEffect@DirectComposition@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAlphaDisable@CTableTransferEffect@DirectComposition@@UEAAJH@Z
    virtual long SetAlphaDisable(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAlphaTable@CTableTransferEffect@DirectComposition@@UEAAJPEBMI@Z
    virtual long SetAlphaTable(float const *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAlphaTableValue@CTableTransferEffect@DirectComposition@@UEAAJIM@Z
    virtual long SetAlphaTableValue(unsigned int, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAlphaTableValue@CTableTransferEffect@DirectComposition@@UEAAJIPEAUIDCompositionAnimation@@@Z
    virtual long SetAlphaTableValue(unsigned int, IDCompositionAnimation *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBlueDisable@CTableTransferEffect@DirectComposition@@UEAAJH@Z
    virtual long SetBlueDisable(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBlueTable@CTableTransferEffect@DirectComposition@@UEAAJPEBMI@Z
    virtual long SetBlueTable(float const *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBlueTableValue@CTableTransferEffect@DirectComposition@@UEAAJIM@Z
    virtual long SetBlueTableValue(unsigned int, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBlueTableValue@CTableTransferEffect@DirectComposition@@UEAAJIPEAUIDCompositionAnimation@@@Z
    virtual long SetBlueTableValue(unsigned int, IDCompositionAnimation *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetClampOutput@CTableTransferEffect@DirectComposition@@UEAAJH@Z
    virtual long SetClampOutput(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGreenDisable@CTableTransferEffect@DirectComposition@@UEAAJH@Z
    virtual long SetGreenDisable(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGreenTable@CTableTransferEffect@DirectComposition@@UEAAJPEBMI@Z
    virtual long SetGreenTable(float const *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGreenTableValue@CTableTransferEffect@DirectComposition@@UEAAJIM@Z
    virtual long SetGreenTableValue(unsigned int, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGreenTableValue@CTableTransferEffect@DirectComposition@@UEAAJIPEAUIDCompositionAnimation@@@Z
    virtual long SetGreenTableValue(unsigned int, IDCompositionAnimation *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRedDisable@CTableTransferEffect@DirectComposition@@UEAAJH@Z
    virtual long SetRedDisable(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRedTable@CTableTransferEffect@DirectComposition@@UEAAJPEBMI@Z
    virtual long SetRedTable(float const *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRedTableValue@CTableTransferEffect@DirectComposition@@UEAAJIM@Z
    virtual long SetRedTableValue(unsigned int, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRedTableValue@CTableTransferEffect@DirectComposition@@UEAAJIPEAUIDCompositionAnimation@@@Z
    virtual long SetRedTableValue(unsigned int, IDCompositionAnimation *);
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaxInputs@CTableTransferEffect@DirectComposition@@MEBAIXZ
    virtual unsigned int GetMaxInputs() const;
};
} // namespace DirectComposition
