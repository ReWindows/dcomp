#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 7 member(s).
class CRegion {
public:
    class BreakdownIterator;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginBreakdown@CRegion@@QEBA?AVBreakdownIterator@1@I@Z
    WindissectOpaque BeginBreakdown(unsigned int) const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CRegion@@QEAA@AEBUMilRectU@@@Z
    CRegion(MilRectU const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetArea@CRegion@@QEBA_KXZ
    uint64_t GetArea() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRectangle@CRegion@@QEAAXAEBUMilRectU@@@Z
    void SetRectangle(MilRectU const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryAddRectangle@CRegion@@QEAAJAEBUMilRectU@@@Z
    long TryAddRectangle(MilRectU const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryIntersect@CRegion@@QEAAJAEBV1@0@Z
    long TryIntersect(CRegion const &, CRegion const &);
};
