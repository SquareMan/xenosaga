#include "common.h"

// .sdata
u32 sw; // = 0x70000000

// .lit4
f32 D_004D8798; // = 1.38704;
f32 D_004D879C; // = 1.17588;
f32 D_004D87A0; // = 0.785695;
f32 D_004D87A4; // = 0.27589899;
f32 D_004D87A8; // = 1.30656;
f32 D_004D87AC; // = 0.54119599;
f32 D_004D87B0; // = -0.27589899;
f32 D_004D87B4; // = -0.785695;
f32 D_004D87B8; // = -1.17588;
f32 D_004D87BC; // = -1.38704;
f32 D_004D87C0; // = -0.54119599;
f32 D_004D87C4; // = -1.30656;
f32 D_004D87C8; // = 5000.0;
f32 D_004D87CC; // = 0.0099999998;
f32 D_004D87D0; // = 0.29899999;
f32 D_004D87D4; // = 0.587;
f32 D_004D87D8; // = 0.114;
f32 D_004D87DC; // = -0.16874;
f32 D_004D87E0; // = -0.33126;
f32 D_004D87E4; // = -0.41869;
f32 D_004D87E8; // = -0.081309997;
f32 D_004D87EC; // = 0.0099999998;
f32 D_004D87F0; // = 0.0099999998;

INCLUDE_ASM("asm/nonmatchings/xgl/jpeg", ConvertYUV2MCU);

INCLUDE_ASM("asm/nonmatchings/xgl/jpeg", FFDCT);

INCLUDE_ASM("asm/nonmatchings/xgl/jpeg", Quantize);

INCLUDE_ASM("asm/nonmatchings/xgl/jpeg", RebuildQuantizeTable);

INCLUDE_ASM("asm/nonmatchings/xgl/jpeg", PutBits);

INCLUDE_ASM("asm/nonmatchings/xgl/jpeg", EncodeDc);

INCLUDE_ASM("asm/nonmatchings/xgl/jpeg", EncodeAc);

INCLUDE_ASM("asm/nonmatchings/xgl/jpeg", HuffmanEncode);

INCLUDE_ASM("asm/nonmatchings/xgl/jpeg", ExtractHuffmanTableSub);

// FIXME: Merge these funcs back in from jpeg_NOPHACK.c

// INCLUDE_ASM("asm/nonmatchings/xgl/jpeg", xglJpegEncode);

// INCLUDE_ASM("asm/nonmatchings/xgl/jpeg", DefineRestartInterval);

// INCLUDE_ASM("asm/nonmatchings/xgl/jpeg", DefineQuantizeTable);

// INCLUDE_ASM("asm/nonmatchings/xgl/jpeg", StartOfFrame);

// INCLUDE_ASM("asm/nonmatchings/xgl/jpeg", DefineHuffmanTable);

// INCLUDE_ASM("asm/nonmatchings/xgl/jpeg", GetBit);

// INCLUDE_ASM("asm/nonmatchings/xgl/jpeg", decode_sub);

// INCLUDE_ASM("asm/nonmatchings/xgl/jpeg", HuffmanDecode);

// INCLUDE_ASM("asm/nonmatchings/xgl/jpeg", FFIDCT);

// INCLUDE_ASM("asm/nonmatchings/xgl/jpeg", ConvertMCU2YUV);

// INCLUDE_ASM("asm/nonmatchings/xgl/jpeg", ConvertYUV2RGB);

// INCLUDE_ASM("asm/nonmatchings/xgl/jpeg", StartOfScan);

// INCLUDE_ASM("asm/nonmatchings/xgl/jpeg", xglJpegDecode);
