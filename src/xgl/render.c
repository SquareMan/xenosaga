#include "common.h"

// .sdata
u8 FLAG_FRAME_60;
u32 s_nGblFadeInit;
u32 s_nGblFade;
u32 s_nClearFrame;
u32 FrameCount;
u32 LoopCount;
u32 VSyncCount;
u32 ScanLineInterpolate;

INCLUDE_ASM("asm/nonmatchings/xgl/render", xglRenderDrawFlip);

INCLUDE_ASM("asm/nonmatchings/xgl/render", xglRenderCopyDisp2Draw);

INCLUDE_ASM("asm/nonmatchings/xgl/render", xglRenderDrawFlipPk);

INCLUDE_ASM("asm/nonmatchings/xgl/render", xglRenderVSyncCallback);

INCLUDE_ASM("asm/nonmatchings/xgl/render", xglRenderSyncInit);
