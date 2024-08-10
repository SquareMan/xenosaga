#include "render.h"

#include "common.h"

// .sdata
u8 FLAG_FRAME_60;
u32 s_nGblFadeInit;

u32 s_nGblFade;
u8 D_004DC3C7; // FIXME: This is part of s_nGblFade

u32 s_nClearFrame;
u32 FrameCount;
u32 LoopCount;
u32 VSyncCount;

INCLUDE_ASM("asm/nonmatchings/xgl/render", xglRenderDrawFlip);

INCLUDE_ASM("asm/nonmatchings/xgl/render", xglRenderCopyDisp2Draw);

INCLUDE_ASM("asm/nonmatchings/xgl/render", xglRenderDrawFlipPk);

INCLUDE_ASM("asm/nonmatchings/xgl/render", xglRenderVSyncCallback);

INCLUDE_ASM("asm/nonmatchings/xgl/render", xglRenderSyncInit);

INCLUDE_ASM("asm/nonmatchings/xgl/render", xglRenderSyncMove);

INCLUDE_ASM("asm/nonmatchings/xgl/render", xglRenderDrawEnvInit);

INCLUDE_ASM("asm/nonmatchings/xgl/render", xglRenderDrawEnvMove);

INCLUDE_ASM("asm/nonmatchings/xgl/render", xglRenderDispEnvInit);

INCLUDE_ASM("asm/nonmatchings/xgl/render", xglRenderDispEnvMove);

INCLUDE_ASM("asm/nonmatchings/xgl/render", xglRenderClearDepth);

INCLUDE_ASM("asm/nonmatchings/xgl/render", xglRenderClearFrame);

INCLUDE_ASM("asm/nonmatchings/xgl/render", xglRenderClearColor);

INCLUDE_ASM("asm/nonmatchings/xgl/render", xglRenderClearEnvInit);

INCLUDE_ASM("asm/nonmatchings/xgl/render", xglRenderClearEnvMove);

INCLUDE_ASM("asm/nonmatchings/xgl/render", xglRenderSetReso);

INCLUDE_ASM("asm/nonmatchings/xgl/render", xglRenderSwapBase);

INCLUDE_ASM("asm/nonmatchings/xgl/render", xglRenderDispOff);

INCLUDE_ASM("asm/nonmatchings/xgl/render", xglRenderDispOn);

INCLUDE_ASM("asm/nonmatchings/xgl/render", xglRenderInit);

INCLUDE_ASM("asm/nonmatchings/xgl/render", xglRenderFinalPacket);

INCLUDE_ASM("asm/nonmatchings/xgl/render", xglRenderGlobalFadeInit);

INCLUDE_ASM("asm/nonmatchings/xgl/render", xglRenderGlobalFadeSet);

INCLUDE_ASM("asm/nonmatchings/xgl/render", xglRenderGlobalFade);

INCLUDE_ASM("asm/nonmatchings/xgl/render", xglRenderClearOn);

INCLUDE_ASM("asm/nonmatchings/xgl/render", xglRenderClearOff);

INCLUDE_ASM("asm/nonmatchings/xgl/render", xglRenderClear);

INCLUDE_ASM("asm/nonmatchings/xgl/render", xglRenderMove);

INCLUDE_ASM("asm/nonmatchings/xgl/render", xglRenderEntry);
