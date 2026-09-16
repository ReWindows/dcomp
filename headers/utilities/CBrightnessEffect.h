#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 24 member(s).
namespace DirectComposition {
class CBrightnessEffect {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CBrightnessEffect@DirectComposition@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CBrightnessEffect@DirectComposition@@SAJPEAVCFilterEffectProxy@2@PEAPEAUIDCompositionBrightnessEffect@@@Z
    static long Create(WindissectOpaque *, IDCompositionBrightnessEffect * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CBrightnessEffect@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CBrightnessEffect@DirectComposition@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBlackPoint@CBrightnessEffect@DirectComposition@@UEAAJAEBUD2D_VECTOR_2F@@@Z
    virtual long SetBlackPoint(D2D_VECTOR_2F const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBlackPointX@CBrightnessEffect@DirectComposition@@UEAAJM@Z
    virtual long SetBlackPointX(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBlackPointX@CBrightnessEffect@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z
    virtual long SetBlackPointX(IDCompositionAnimation *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBlackPointY@CBrightnessEffect@DirectComposition@@UEAAJM@Z
    virtual long SetBlackPointY(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBlackPointY@CBrightnessEffect@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z
    virtual long SetBlackPointY(IDCompositionAnimation *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWhitePoint@CBrightnessEffect@DirectComposition@@UEAAJAEBUD2D_VECTOR_2F@@@Z
    virtual long SetWhitePoint(D2D_VECTOR_2F const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWhitePointX@CBrightnessEffect@DirectComposition@@UEAAJM@Z
    virtual long SetWhitePointX(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWhitePointX@CBrightnessEffect@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z
    virtual long SetWhitePointX(IDCompositionAnimation *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWhitePointY@CBrightnessEffect@DirectComposition@@UEAAJM@Z
    virtual long SetWhitePointY(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWhitePointY@CBrightnessEffect@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z
    virtual long SetWhitePointY(IDCompositionAnimation *);
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaxInputs@CBrightnessEffect@DirectComposition@@MEBAIXZ
    virtual unsigned int GetMaxInputs() const;
};
} // namespace DirectComposition
