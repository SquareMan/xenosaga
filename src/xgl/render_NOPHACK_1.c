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
u32 ScanLineInterpolate;

INCLUDE_ASM("asm/nonmatchings/xgl/render_NOPHACK_1", xglRenderDrawEnvInit);

INCLUDE_ASM("asm/nonmatchings/xgl/render_NOPHACK_1", xglRenderDrawEnvMove);

INCLUDE_ASM("asm/nonmatchings/xgl/render_NOPHACK_1", xglRenderDispEnvInit);

INCLUDE_ASM("asm/nonmatchings/xgl/render_NOPHACK_1", xglRenderDispEnvMove);

INCLUDE_ASM("asm/nonmatchings/xgl/render_NOPHACK_1", xglRenderClearDepth);

INCLUDE_ASM("asm/nonmatchings/xgl/render_NOPHACK_1", xglRenderClearFrame);

INCLUDE_ASM("asm/nonmatchings/xgl/render_NOPHACK_1", xglRenderClearColor);

INCLUDE_ASM("asm/nonmatchings/xgl/render_NOPHACK_1", xglRenderClearEnvInit);

INCLUDE_ASM("asm/nonmatchings/xgl/render_NOPHACK_1", xglRenderClearEnvMove);

INCLUDE_ASM("asm/nonmatchings/xgl/render_NOPHACK_1", xglRenderSetReso);

INCLUDE_ASM("asm/nonmatchings/xgl/render_NOPHACK_1", xglRenderSwapBase);

INCLUDE_ASM("asm/nonmatchings/xgl/render_NOPHACK_1", xglRenderDispOff);

INCLUDE_ASM("asm/nonmatchings/xgl/render_NOPHACK_1", xglRenderDispOn);

INCLUDE_ASM("asm/nonmatchings/xgl/render_NOPHACK_1", xglRenderInit);

INCLUDE_ASM("asm/nonmatchings/xgl/render_NOPHACK_1", xglRenderFinalPacket);

INCLUDE_ASM("asm/nonmatchings/xgl/render_NOPHACK_1", xglRenderGlobalFadeInit);

INCLUDE_ASM("asm/nonmatchings/xgl/render_NOPHACK_1", xglRenderGlobalFadeSet);

INCLUDE_ASM("asm/nonmatchings/xgl/render_NOPHACK_1", xglRenderGlobalFade);

INCLUDE_ASM("asm/nonmatchings/xgl/render_NOPHACK_1", xglRenderClearOn);

INCLUDE_ASM("asm/nonmatchings/xgl/render_NOPHACK_1", xglRenderClearOff);

INCLUDE_ASM("asm/nonmatchings/xgl/render_NOPHACK_1", xglRenderClear);

INCLUDE_ASM("asm/nonmatchings/xgl/render_NOPHACK_1", xglRenderMove);

INCLUDE_ASM("asm/nonmatchings/xgl/render_NOPHACK_1", xglRenderEntry);
