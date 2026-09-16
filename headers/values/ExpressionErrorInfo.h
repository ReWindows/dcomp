#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 3 member(s).
namespace Windows::UI::Composition {
class ExpressionErrorInfo {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetErrorContext@ExpressionErrorInfo@Composition@UI@Windows@@QEAAPEAGXZ
    unsigned short * GetErrorContext();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetErrorContext@ExpressionErrorInfo@Composition@UI@Windows@@QEAAXPEBG@Z
    void SetErrorContext(unsigned short const *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearErrorContext@ExpressionErrorInfo@Composition@UI@Windows@@AEAAXXZ
    void ClearErrorContext();
};
} // namespace Windows::UI::Composition
