#include "common.h"

u32 s_nIgnoreCulling;

INCLUDE_ASM("asm/nonmatchings/xgl/culling", culling_matrix);

void culling_cell_disp(void) {
}

INCLUDE_ASM("asm/nonmatchings/xgl/culling", _FacePoint);

INCLUDE_ASM("asm/nonmatchings/xgl/culling", _CheckLine);

INCLUDE_ASM("asm/nonmatchings/xgl/culling", plane_from_points);

INCLUDE_ASM("asm/nonmatchings/xgl/culling", setup_occlusion);

INCLUDE_ASM("asm/nonmatchings/xgl/culling", check_occlusion);

INCLUDE_ASM("asm/nonmatchings/xgl/culling", xglCullingCheck);

INCLUDE_ASM("asm/nonmatchings/xgl/culling", xglCullingCheckSeparateInit);

INCLUDE_ASM("asm/nonmatchings/xgl/culling", xglCullingCheckSeparate);

INCLUDE_ASM("asm/nonmatchings/xgl/culling", xglCullingExist);

INCLUDE_ASM("asm/nonmatchings/xgl/culling", xglCullingMapLastCheck);

INCLUDE_ASM("asm/nonmatchings/xgl/culling", xglCullingMapInit);

INCLUDE_ASM("asm/nonmatchings/xgl/culling", check_culling_map);

INCLUDE_ASM("asm/nonmatchings/xgl/culling", xglCullingMapSet);

INCLUDE_ASM("asm/nonmatchings/xgl/culling", xglCullingMapCreate);

INCLUDE_ASM("asm/nonmatchings/xgl/culling", xglCullingMapDisp);

INCLUDE_ASM("asm/nonmatchings/xgl/culling", xglCullingIgnore);

INCLUDE_ASM("asm/nonmatchings/xgl/culling", xglCullingIgnoreOff);

void xglCullingMapDebug(void) {
}

INCLUDE_ASM("asm/nonmatchings/xgl/culling", _ModelCalcClipInit);

INCLUDE_ASM("asm/nonmatchings/xgl/culling", _ModelCalcClipMat2);

INCLUDE_ASM("asm/nonmatchings/xgl/culling", _ModelCalcClipMat1);

INCLUDE_ASM("asm/nonmatchings/xgl/culling", _ModelCalcClip);

INCLUDE_ASM("asm/nonmatchings/xgl/culling", nmlModelCalcClip);

INCLUDE_ASM("asm/nonmatchings/xgl/culling", nmlModelCalcClipNoCulling);

INCLUDE_ASM("asm/nonmatchings/xgl/culling", nmlModelCalcClipMat1);

INCLUDE_ASM("asm/nonmatchings/xgl/culling", nmlModelCalcClipMat2);

INCLUDE_ASM("asm/nonmatchings/xgl/culling", nmlModelCalcClipCam);

INCLUDE_ASM("asm/nonmatchings/xgl/culling", nmlModelCalcClipMat1Cam);

INCLUDE_ASM("asm/nonmatchings/xgl/culling", nmlModelCalcClipMat2Cam);

INCLUDE_ASM("asm/nonmatchings/xgl/culling", nmlModelCalcClipStudio);

INCLUDE_ASM("asm/nonmatchings/xgl/culling", nmlModelCalcClipMat1AllCam);

INCLUDE_ASM("asm/nonmatchings/xgl/culling", nmlModelCalcClipMat2AllCam);

INCLUDE_ASM("asm/nonmatchings/xgl/culling", _ApplyMatrix33);

INCLUDE_ASM("asm/nonmatchings/xgl/culling", _ApplyMatrix);

INCLUDE_ASM("asm/nonmatchings/xgl/culling", _ApplyMatrix2Mat);
