#include "common.h"

// .sbss
u32 pCurrentStudio;

// .sdata
u32 StudioEntrySkip;

INCLUDE_ASM("asm/nonmatchings/xgl/studio", xglStudioChange);

INCLUDE_ASM("asm/nonmatchings/xgl/studio", xglStudioGetLight);

INCLUDE_ASM("asm/nonmatchings/xgl/studio", xglStudioGetCamera);

INCLUDE_ASM("asm/nonmatchings/xgl/studio", xglStudioGetActiveCamera);

INCLUDE_ASM("asm/nonmatchings/xgl/studio", xglStudioSelectGetActiveCamera);

INCLUDE_ASM("asm/nonmatchings/xgl/studio", xglStudioFlushActiveCamera);

INCLUDE_ASM("asm/nonmatchings/xgl/studio", xglStudioGetLight2);

INCLUDE_ASM("asm/nonmatchings/xgl/studio", xglStudioGetCamera2);

INCLUDE_ASM("asm/nonmatchings/xgl/studio", xglStudioMainCameraInit);

INCLUDE_ASM("asm/nonmatchings/xgl/studio", xglStudioMainCameraMove);

INCLUDE_ASM("asm/nonmatchings/xgl/studio", xglStudioInit);

INCLUDE_ASM("asm/nonmatchings/xgl/studio", xglStudioMove);

INCLUDE_ASM("asm/nonmatchings/xgl/studio", xglStudioEntry);
