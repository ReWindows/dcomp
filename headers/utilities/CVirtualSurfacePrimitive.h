#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 13 member(s).
namespace DirectComposition {
class CVirtualSurfacePrimitive {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CVirtualSurfacePrimitive@DirectComposition@@SAJPEAVCDevice@2@AEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@MPEAVCBitmapInfoFront@2@PEBU5@W4DCOMPOSITION_EDGE_FLAGS@@PEAVCVirtualSurface@2@4_NPEAPEAV12@@Z
    static long Create(WindissectOpaque *, D2D_RECT_F const &, D2D_MATRIX_3X2_F const &, float, WindissectOpaque *, D2D_MATRIX_3X2_F const *, int, WindissectOpaque *, D2D_MATRIX_3X2_F const *, bool, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOcclusionRect@CVirtualSurfacePrimitive@DirectComposition@@UEAA_NPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    virtual bool GetOcclusionRect(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CVirtualSurfacePrimitive@DirectComposition@@UEAAJXZ
    virtual long Initialize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInteriorBltOnly@CVirtualSurfacePrimitive@DirectComposition@@UEBA_NXZ
    virtual bool IsInteriorBltOnly() const;
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BrushesShown@CVirtualSurfacePrimitive@DirectComposition@@EEAA_NXZ
    virtual bool BrushesShown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreeRealization@CVirtualSurfacePrimitive@DirectComposition@@AEAAXXZ
    void FreeRealization();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrimitiveType@CVirtualSurfacePrimitive@DirectComposition@@EEAA?AW4PrimitiveType@CPrimitive@2@XZ
    virtual int GetPrimitiveType();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invalidate@CVirtualSurfacePrimitive@DirectComposition@@EEAAXPEAVCDirtyNotifier@2@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    virtual void Invalidate(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RealizeAndRebuild@CVirtualSurfacePrimitive@DirectComposition@@AEAAJPEAVCPrimitiveGroup@2@PEAUBatchedOccluder@2@1@Z
    long RealizeAndRebuild(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Rebuild@CVirtualSurfacePrimitive@DirectComposition@@EEAAJPEAVCPrimitiveGroup@2@PEAUBatchedOccluder@2@1@Z
    virtual long Rebuild(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CVirtualSurfacePrimitive@DirectComposition@@EEAA@XZ
    virtual ~CVirtualSurfacePrimitive();
};
} // namespace DirectComposition
