#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 74 member(s).
namespace Windows::UI::Composition {
class ExpressionAnimationBuilder {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Conditional@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJPEAV1234@0@Z
    long Conditional(WindissectOpaque *, WindissectOpaque *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ExpressionAnimationBuilder@Composition@UI@Windows@@QEAA@PEAVExpressionAnimation@123@@Z
    ExpressionAnimationBuilder(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOutputType@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAA?AW4DCOMPOSITION_EXPRESSION_TYPE@@XZ
    int GetOutputType();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushConstant@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJM@Z
    long PushConstant(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushConstant@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJ_N@Z
    long PushConstant(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushConstantParameter@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long PushConstantParameter(HSTRING__*, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushReferenceParameter@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@0W4DCOMPOSITION_EXPRESSION_TYPE@@PEAVSubchannelMaskInfo@@@Z
    long PushReferenceParameter(HSTRING__*, HSTRING__*, int, SubchannelMaskInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJXZ
    long Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToString@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJPEAG_K@Z
    long ToString(unsigned short *, uint64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ExpressionAnimationBuilder@Composition@UI@Windows@@QEAA@XZ
    ~ExpressionAnimationBuilder();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateNodeInBuffer@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJW4ExpressionNodeType@@PEAPEAUExpressionNode@@@Z
    long AllocateNodeInBuffer(int, ExpressionNode * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateParameterNodeInBuffer@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJPEAPEAUExpressionParameterNode@234@PEAPEAUExpressionParameter@234@@Z
    long AllocateParameterNodeInBuffer(WindissectOpaque * *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplySimpleOperation@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJW4ExpressionNodeType@@I@Z
    long ApplySimpleOperation(int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInvalidFunctionArgumentContext@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAXIPEAGI@Z
    void CreateInvalidFunctionArgumentContext(unsigned int, unsigned short *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeallocateNodeInBuffer@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAXPEAUExpressionNode@@@Z
    void DeallocateNodeInBuffer(ExpressionNode *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopDataTypeFromValidationStack@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJI@Z
    long PopDataTypeFromValidationStack(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushDataTypeIntoValidationStack@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long PushDataTypeIntoValidationStack(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveNodesInfo@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAXPEAI@Z
    void ResolveNodesInfo(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateAbsolute@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long ValidateAbsolute(unsigned int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateAddSubtract@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long ValidateAddSubtract(unsigned int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateClamp@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long ValidateClamp(unsigned int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateColorHsl@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long ValidateColorHsl(unsigned int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateColorLerp@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long ValidateColorLerp(unsigned int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateColorRgb@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long ValidateColorRgb(unsigned int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateConcatenate@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long ValidateConcatenate(unsigned int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateConditional@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJPEAV1234@0PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long ValidateConditional(WindissectOpaque *, WindissectOpaque *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateDistance@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long ValidateDistance(unsigned int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateDivide@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long ValidateDivide(unsigned int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateEqualityComparison@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long ValidateEqualityComparison(unsigned int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateInverse@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long ValidateInverse(unsigned int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateLength@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long ValidateLength(unsigned int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateLerp@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long ValidateLerp(unsigned int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateLog@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long ValidateLog(unsigned int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateMatrix3x2@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long ValidateMatrix3x2(unsigned int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateMatrix3x2FromRotation@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJIPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long ValidateMatrix3x2FromRotation(unsigned int, unsigned int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateMatrix3x2FromScale@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJIPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long ValidateMatrix3x2FromScale(unsigned int, unsigned int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateMatrix3x2FromSkew@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJIPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long ValidateMatrix3x2FromSkew(unsigned int, unsigned int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateMatrix4x4@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long ValidateMatrix4x4(unsigned int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateMatrix4x4FromAxisAngle@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long ValidateMatrix4x4FromAxisAngle(unsigned int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateMatrix4x4FromPerspective@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long ValidateMatrix4x4FromPerspective(unsigned int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateMatrix4x4FromPerspectiveOffCenter@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long ValidateMatrix4x4FromPerspectiveOffCenter(unsigned int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateMatrix4x4FromQuaternion@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long ValidateMatrix4x4FromQuaternion(unsigned int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateMatrix4x4FromRotation@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJIPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long ValidateMatrix4x4FromRotation(unsigned int, unsigned int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateMatrix4x4FromScale@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJIPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long ValidateMatrix4x4FromScale(unsigned int, unsigned int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateMatrix4x4FromYawPitchRoll@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long ValidateMatrix4x4FromYawPitchRoll(unsigned int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateMinMax@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long ValidateMinMax(unsigned int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateModulus@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long ValidateModulus(unsigned int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateNormalize@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long ValidateNormalize(unsigned int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateNot@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long ValidateNot(unsigned int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidatePow@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long ValidatePow(unsigned int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateQuaternion@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long ValidateQuaternion(unsigned int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateQuaternionFromAxisAngle@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long ValidateQuaternionFromAxisAngle(unsigned int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateQuaternionFromLerp@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long ValidateQuaternionFromLerp(unsigned int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateQuaternionFromRotationMatrix@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long ValidateQuaternionFromRotationMatrix(unsigned int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateQuaternionFromYawPitchRoll@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long ValidateQuaternionFromYawPitchRoll(unsigned int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateScale@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long ValidateScale(unsigned int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateSlerp@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long ValidateSlerp(unsigned int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateStackElementsAreOfType@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long ValidateStackElementsAreOfType(unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateSwizzle@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJW4ExpressionNodeType@@PEBVSubchannelMaskInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long ValidateSwizzle(int, SubchannelMaskInfo const *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateTimeSpanFrom@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long ValidateTimeSpanFrom(unsigned int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateToDegreesRadians@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long ValidateToDegreesRadians(unsigned int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateTransform@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long ValidateTransform(unsigned int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateVector2Dot@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long ValidateVector2Dot(unsigned int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateVector2Transform@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long ValidateVector2Transform(unsigned int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateVector2TransformNormal@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long ValidateVector2TransformNormal(unsigned int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateVector3Cross@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long ValidateVector3Cross(unsigned int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateVector3Dot@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long ValidateVector3Dot(unsigned int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateVector3Transform@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long ValidateVector3Transform(unsigned int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateVector3TransformNormal@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long ValidateVector3TransformNormal(unsigned int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateVector4@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long ValidateVector4(unsigned int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateVector4Dot@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long ValidateVector4Dot(unsigned int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateVector4Transform@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long ValidateVector4Transform(unsigned int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteConstantParameterToBuffer@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJPEAE_KPEAUExpressionParameter@234@PEAVCompositionAnimation@234@PEAI@Z
    long WriteConstantParameterToBuffer(unsigned char *, uint64_t, WindissectOpaque *, WindissectOpaque *, unsigned int *);
};
} // namespace Windows::UI::Composition
