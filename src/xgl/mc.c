#include "common.h"

// .sbss
u8 queue_top;
u8 queue_end; // This has the same address as loaded_overay in cd.c???

// .lit4
f32 D_004D8794;

INCLUDE_ASM("asm/nonmatchings/xgl/mc", xglMcRequest);

INCLUDE_ASM("asm/nonmatchings/xgl/mc", xglMcGetState);

INCLUDE_ASM("asm/nonmatchings/xgl/mc", xglMcReset);

INCLUDE_ASM("asm/nonmatchings/xgl/mc", xglMcEUC2SJIS);

INCLUDE_ASM("asm/nonmatchings/xgl/mc", xglMcSetMapName);

INCLUDE_ASM("asm/nonmatchings/xgl/mc", xglMcWriteMapName);

INCLUDE_ASM("asm/nonmatchings/xgl/mc", xglMcSetFullPath);

INCLUDE_ASM("asm/nonmatchings/xgl/mc", execute);

INCLUDE_ASM("asm/nonmatchings/xgl/mc", create_sub2);

INCLUDE_ASM("asm/nonmatchings/xgl/mc", xglMcMain);

INCLUDE_ASM("asm/nonmatchings/xgl/mc", xglMcEasyLoad);

INCLUDE_ASM("asm/nonmatchings/xgl/mc", xglMcEasySave);

INCLUDE_ASM("asm/nonmatchings/xgl/mc", xglMcInitial);
