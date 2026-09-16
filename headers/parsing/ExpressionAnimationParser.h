#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 17 member(s).
namespace Windows::UI::Composition {
class ExpressionAnimationParser {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseTargetProperty@ExpressionAnimationParser@Composition@UI@Windows@@SAXPEAUHSTRING__@@PEAVCompositionObject@234@PEAUExpressionErrorInfo@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@PEAPEAVSubchannelMaskInfo@@PEAPEAU5@@Z
    static void ParseTargetProperty(HSTRING__*, WindissectOpaque *, WindissectOpaque *, ExpressionObjectPropertyInfo *, int *, SubchannelMaskInfo * *, HSTRING__* *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyOperationToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJAEBUToken@1234@I@Z
    long ApplyOperationToken(WindissectOpaque const &, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureFunctionParser@ExpressionAnimationParser@Composition@UI@Windows@@CAJXZ
    static long EnsureFunctionParser();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrecedence@ExpressionAnimationParser@Composition@UI@Windows@@AEAAIW4TOKEN_TYPE@234@@Z
    unsigned int GetPrecedence(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseName@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJ_NIPEAGPEAI@Z
    long ParseName(bool, unsigned int, unsigned short *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseSwizzle@ExpressionAnimationParser@Composition@UI@Windows@@CAXPEBGIW4DCOMPOSITION_EXPRESSION_TYPE@@_NPEAUExpressionErrorInfo@234@PEAPEAVSubchannelMaskInfo@@PEAI@Z
    static void ParseSwizzle(unsigned short const *, unsigned int, int, bool, WindissectOpaque *, SubchannelMaskInfo * *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessArgumentSeperatorToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJXZ
    long ProcessArgumentSeperatorToken();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessBeginPrecedenceToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJXZ
    long ProcessBeginPrecedenceToken();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessComparisonToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJXZ
    long ProcessComparisonToken();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessConstantParameterToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJPEBGII_N@Z
    long ProcessConstantParameterToken(unsigned short const *, unsigned int, unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessEndPrecedenceToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJXZ
    long ProcessEndPrecedenceToken();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessFinalValueParameter@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJXZ
    long ProcessFinalValueParameter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessHyphenMinusToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJ_NPEA_N@Z
    long ProcessHyphenMinusToken(bool, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessOperatorToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJW4TOKEN_TYPE@234@I@Z
    long ProcessOperatorToken(int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessScalarToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJ_N@Z
    long ProcessScalarToken(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSwizzleToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJXZ
    long ProcessSwizzleToken();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetParseError@ExpressionAnimationParser@Composition@UI@Windows@@AEAAXW4ExpressionErrorKind@234@IIPEBG@Z
    void SetParseError(int, unsigned int, unsigned int, unsigned short const *);
};
} // namespace Windows::UI::Composition
