#include "common.h"

u8 D_004DC2A8; // FIXME: this is a local static (tbl)
u8 D_004DC2A9;

u32 LoopCount;

INCLUDE_ASM("asm/nonmatchings/xgl/font", xglFontDebugMode);

INCLUDE_ASM("asm/nonmatchings/xgl/font", xglFontGetKanjiClutUV);

INCLUDE_ASM("asm/nonmatchings/xgl/font", set_ot);

INCLUDE_ASM("asm/nonmatchings/xgl/font", set_xyz);

INCLUDE_ASM("asm/nonmatchings/xgl/font", xglFontGetSPcodeSize);

INCLUDE_ASM("asm/nonmatchings/xgl/font", xglFontPrintSub);

INCLUDE_ASM("asm/nonmatchings/xgl/font", xglFontPrintDirectCore);

INCLUDE_ASM("asm/nonmatchings/xgl/font", xglFontPrintf);

INCLUDE_ASM("asm/nonmatchings/xgl/font", xglFontPrint);

INCLUDE_ASM("asm/nonmatchings/xgl/font", xglFontPrintDirect);

INCLUDE_ASM("asm/nonmatchings/xgl/font", xglFontPrintDirectOT);

INCLUDE_ASM("asm/nonmatchings/xgl/font", xglFontPrintExtFunc);

INCLUDE_ASM("asm/nonmatchings/xgl/font", xglFontDebugPrintf);

INCLUDE_ASM("asm/nonmatchings/xgl/font", xglFontDebugHex);

INCLUDE_ASM("asm/nonmatchings/xgl/font", buffer_reset);

INCLUDE_ASM("asm/nonmatchings/xgl/font", xglFontFlushSub);

INCLUDE_ASM("asm/nonmatchings/xgl/font", xglFontFlushSubHex);

INCLUDE_ASM("asm/nonmatchings/xgl/font", xglFontFlushSubCRLF);

INCLUDE_ASM("asm/nonmatchings/xgl/font", xglFontFlushCore);

INCLUDE_ASM("asm/nonmatchings/xgl/font", xglFontCheckProportional);

INCLUDE_ASM("asm/nonmatchings/xgl/font", xglFontGetProportionalSize);

INCLUDE_ASM("asm/nonmatchings/xgl/font", hex2val);

INCLUDE_ASM("asm/nonmatchings/xgl/font", xglFontAscii2Euc);

INCLUDE_ASM("asm/nonmatchings/xgl/font", xglFontReloadTexture);

INCLUDE_ASM("asm/nonmatchings/xgl/font", xglFontFlush);

INCLUDE_ASM("asm/nonmatchings/xgl/font", xglFontGetStringWidth2);

INCLUDE_ASM("asm/nonmatchings/xgl/font", xglFontGetStringWidth);

INCLUDE_ASM("asm/nonmatchings/xgl/font", xglFontGetLoadAddress);

INCLUDE_ASM("asm/nonmatchings/xgl/font", xglFontGetFlags);

INCLUDE_ASM("asm/nonmatchings/xgl/font", xglFontSetFlags);

INCLUDE_ASM("asm/nonmatchings/xgl/font", xglFontLoad);

INCLUDE_ASM("asm/nonmatchings/xgl/font", xglFontInitial);
