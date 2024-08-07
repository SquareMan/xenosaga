#include "common.h"

// .sdata
u32 g_nGsEntry;
u32 s_pPacket;
u32 s_pCacheTexture;
u32 s_pMatrixCache;
u32 s_pModelCache;
u32 s_pModelLayout;
u32 s_nModelParts;
u32 s_pLightLayout;
u32 s_nLightPara;
u32 s_nProgType;
u32 s_nPixelTestType;
u32 s_nReflRotType;
u32 s_inReflRotX;
u32 s_inReflRotY;

// .lit4
f32 D_004D8950; // = 0.0099999998;
f32 D_004D8954; // = 3.1415927;
f32 D_004D8958; // = 1.02;
f32 D_004D895C; // = 0.98;
f32 D_004D8960; // = 1.02;
f32 D_004D8964; // = 0.98;
f32 D_004D8968; // = 1.02;
f32 D_004D896C; // = 0.98;
f32 D_004D8970; // = 0.4;
f32 D_004D8974; // = 0.0049999999;

INCLUDE_ASM("asm/nonmatchings/nml/packet", _CurMatrixSet);

INCLUDE_ASM("asm/nonmatchings/nml/packet", _CurMatrixGet);

INCLUDE_ASM("asm/nonmatchings/nml/packet", _CurMatrixMul);

INCLUDE_ASM("asm/nonmatchings/nml/packet", func_002364E0); // _CurApplyMatrix

INCLUDE_ASM("asm/nonmatchings/nml/packet", _CurMatrixMul33norm);

INCLUDE_ASM("asm/nonmatchings/nml/packet", func_002365C0); // _CurSetViewScaleTrans

INCLUDE_ASM("asm/nonmatchings/nml/packet", func_002365D0); // _CurRotTransPersClip

INCLUDE_ASM("asm/nonmatchings/nml/packet", func_00236640); // _CurSetMatrix

INCLUDE_ASM("asm/nonmatchings/nml/packet", nmlPacketAddGsFlush);

INCLUDE_ASM("asm/nonmatchings/nml/packet", nmlPacketAddGsFlushWide);

INCLUDE_ASM("asm/nonmatchings/nml/packet", nmlPacketAddReflectParam);

INCLUDE_ASM("asm/nonmatchings/nml/packet", nmlPacketAddTransMicrocodeInit);

INCLUDE_ASM("asm/nonmatchings/nml/packet", nmlPacketAddTransMicrocode);

INCLUDE_ASM("asm/nonmatchings/nml/packet", nmlPacketAddScreen);

INCLUDE_ASM("asm/nonmatchings/nml/packet", nmlPacketAddPixelTestPacket);

INCLUDE_ASM("asm/nonmatchings/nml/packet", nmlPacketAddWaitMicrocode);

INCLUDE_ASM("asm/nonmatchings/nml/packet", nmlPacketAddBlockMaterial);

INCLUDE_ASM("asm/nonmatchings/nml/packet", nmlPacketMakeCircleTexture);

INCLUDE_ASM("asm/nonmatchings/nml/packet", nmlPacketSendCircleTexture);

INCLUDE_ASM("asm/nonmatchings/nml/packet", nmlPacketTextureTrans);

INCLUDE_ASM("asm/nonmatchings/nml/packet", nmlPacketClrTextureCache);

INCLUDE_ASM("asm/nonmatchings/nml/packet", nmlPacketClrModelCache);

INCLUDE_ASM("asm/nonmatchings/nml/packet", nmlPacketAddTexture);

