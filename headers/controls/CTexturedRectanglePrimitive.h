#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 19 member(s).
namespace DirectComposition {
class CTexturedRectanglePrimitive {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CTexturedRectanglePrimitive@DirectComposition@@SAJPEAVCDevice@2@AEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@MPEAVCBitmapInfoFront@2@PEBU5@W4DCOMPOSITION_EDGE_FLAGS@@34_NPEAPEAV12@@Z
    static long Create(WindissectOpaque *, D2D_RECT_F const &, D2D_MATRIX_3X2_F const &, float, WindissectOpaque *, D2D_MATRIX_3X2_F const *, int, WindissectOpaque *, D2D_MATRIX_3X2_F const *, bool, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColorSurfaceD2DExtendModeX@CTexturedRectanglePrimitive@DirectComposition@@UEBA?AW4D2D1_EXTEND_MODE@@XZ
    virtual int GetColorSurfaceD2DExtendModeX() const;
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetColorSurfaceD2DExtendModeY@CTexturedRectanglePrimitive@DirectComposition@@UEBA?AW4D2D1_EXTEND_MODE@@XZ
    virtual int GetColorSurfaceD2DExtendModeY() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColorSurfaceInfoNoRef@CTexturedRectanglePrimitive@DirectComposition@@UEBAPEAVCBitmapInfoFront@2@XZ
    virtual WindissectOpaque * GetColorSurfaceInfoNoRef() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CTexturedRectanglePrimitive@DirectComposition@@UEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invalidate@CTexturedRectanglePrimitive@DirectComposition@@UEAAXPEAVCDirtyNotifier@2@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    virtual void Invalidate(WindissectOpaque *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInteriorBltOnly@CTexturedRectanglePrimitive@DirectComposition@@UEBA_NXZ
    virtual bool IsInteriorBltOnly() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetD2DStates@CTexturedRectanglePrimitive@DirectComposition@@UEAAXPEAUD2D1_COMPOSITOR_PRIMITIVE_DRAWING_STATE@@PEAUD2D1_COMPOSITOR_PRIMITIVE_LAYER_STATE@@@Z
    virtual void SetD2DStates(D2D1_COMPOSITOR_PRIMITIVE_DRAWING_STATE *, D2D1_COMPOSITOR_PRIMITIVE_LAYER_STATE *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRect@CTexturedRectanglePrimitive@DirectComposition@@QEAAXAEBUD2D_RECT_F@@@Z
    void SetRect(D2D_RECT_F const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldClampColorBrushBounds@CTexturedRectanglePrimitive@DirectComposition@@UEAA_NXZ
    virtual bool ShouldClampColorBrushBounds();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldClampOpacityBrushBounds@CTexturedRectanglePrimitive@DirectComposition@@UEAA_NXZ
    virtual bool ShouldClampOpacityBrushBounds();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BrushesShown@CTexturedRectanglePrimitive@DirectComposition@@MEAA_NXZ
    virtual bool BrushesShown();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTexturedRectanglePrimitive@DirectComposition@@IEAA@PEAVCDevice@1@AEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@MPEAVCBitmapInfoFront@1@PEBU4@W4DCOMPOSITION_EDGE_FLAGS@@34_N6@Z
    CTexturedRectanglePrimitive(WindissectOpaque *, D2D_RECT_F const &, D2D_MATRIX_3X2_F const &, float, WindissectOpaque *, D2D_MATRIX_3X2_F const *, int, WindissectOpaque *, D2D_MATRIX_3X2_F const *, bool, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColorAtlasSurfaceNoRef@CTexturedRectanglePrimitive@DirectComposition@@MEBAPEAVCAtlasSurface@2@XZ
    virtual WindissectOpaque * GetColorAtlasSurfaceNoRef() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrimitiveType@CTexturedRectanglePrimitive@DirectComposition@@MEAA?AW4PrimitiveType@CPrimitive@2@XZ
    virtual int GetPrimitiveType();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Rebuild@CTexturedRectanglePrimitive@DirectComposition@@MEAAJPEAVCPrimitiveGroup@2@PEAUBatchedOccluder@2@1@Z
    virtual long Rebuild(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTexturedRectanglePrimitive@DirectComposition@@MEAA@XZ
    virtual ~CTexturedRectanglePrimitive();
};
} // namespace DirectComposition
