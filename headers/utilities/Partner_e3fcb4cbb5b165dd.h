#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 9 member(s).
namespace Windows::UI::Composition::CompositionManipulation {
class Partner {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Partner@CompositionManipulation@Composition@UI@Windows@@QEAA@XZ
    Partner();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CenterPoint@Partner@CompositionManipulation@Composition@UI@Windows@@UEAAJPEAUD2D_VECTOR_3F@@@Z
    virtual long get_CenterPoint(D2D_VECTOR_3F *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DeltaPan@Partner@CompositionManipulation@Composition@UI@Windows@@UEAAJPEAUD2D_VECTOR_3F@@@Z
    virtual long get_DeltaPan(D2D_VECTOR_3F *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DeltaScale@Partner@CompositionManipulation@Composition@UI@Windows@@UEAAJPEAUD2D_VECTOR_3F@@@Z
    virtual long get_DeltaScale(D2D_VECTOR_3F *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Matrix@Partner@CompositionManipulation@Composition@UI@Windows@@UEAAJPEAUD2D_MATRIX_4X4_F@@@Z
    virtual long get_Matrix(D2D_MATRIX_4X4_F *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Pan@Partner@CompositionManipulation@Composition@UI@Windows@@UEAAJPEAUD2D_VECTOR_3F@@@Z
    virtual long get_Pan(D2D_VECTOR_3F *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PanVelocity@Partner@CompositionManipulation@Composition@UI@Windows@@UEAAJPEAUD2D_VECTOR_3F@@@Z
    virtual long get_PanVelocity(D2D_VECTOR_3F *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Scale@Partner@CompositionManipulation@Composition@UI@Windows@@UEAAJPEAUD2D_VECTOR_3F@@@Z
    virtual long get_Scale(D2D_VECTOR_3F *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ScaleVelocity@Partner@CompositionManipulation@Composition@UI@Windows@@UEAAJPEAUD2D_VECTOR_3F@@@Z
    virtual long get_ScaleVelocity(D2D_VECTOR_3F *);
};
} // namespace Windows::UI::Composition::CompositionManipulation
