#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 14 member(s).
namespace Windows::UI::Composition::CompositionPropertyAnimator {
class Partner {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableValueUpdates@Partner@CompositionPropertyAnimator@Composition@UI@Windows@@UEAAJH@Z
    virtual long EnableValueUpdates(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@Partner@CompositionPropertyAnimator@Composition@UI@Windows@@UEAAJPEAUD2D_MATRIX_4X4_F@@@Z
    virtual long GetValue(D2D_MATRIX_4X4_F *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@Partner@CompositionPropertyAnimator@Composition@UI@Windows@@UEAAJPEAH@Z
    virtual long GetValue(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@Partner@CompositionPropertyAnimator@Composition@UI@Windows@@UEAAJPEAM@Z
    virtual long GetValue(float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@Partner@CompositionPropertyAnimator@Composition@UI@Windows@@UEAAJPEAUD2D_MATRIX_3X2_F@@@Z
    virtual long GetValue(D2D_MATRIX_3X2_F *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@Partner@CompositionPropertyAnimator@Composition@UI@Windows@@UEAAJPEAUD2D_VECTOR_2F@@@Z
    virtual long GetValue(D2D_VECTOR_2F *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@Partner@CompositionPropertyAnimator@Composition@UI@Windows@@UEAAJPEAUD2D_VECTOR_3F@@@Z
    virtual long GetValue(D2D_VECTOR_3F *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@Partner@CompositionPropertyAnimator@Composition@UI@Windows@@UEAAJPEAUD2D_VECTOR_4F@@@Z
    virtual long GetValue(D2D_VECTOR_4F *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@Partner@CompositionPropertyAnimator@Composition@UI@Windows@@UEAAJPEAU_D3DCOLORVALUE@@@Z
    virtual long GetValue(_D3DCOLORVALUE *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Partner@CompositionPropertyAnimator@Composition@UI@Windows@@QEAA@XZ
    Partner();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Pause@Partner@CompositionPropertyAnimator@Composition@UI@Windows@@UEAAJXZ
    virtual long Pause();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Seek@Partner@CompositionPropertyAnimator@Composition@UI@Windows@@UEAAJ_K@Z
    virtual long Seek(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Start@Partner@CompositionPropertyAnimator@Composition@UI@Windows@@UEAAJXZ
    virtual long Start();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@Partner@CompositionPropertyAnimator@Composition@UI@Windows@@UEAAJXZ
    virtual long Stop();
};
} // namespace Windows::UI::Composition::CompositionPropertyAnimator
