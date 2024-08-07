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

INCLUDE_ASM("asm/nonmatchings/nml/packet", nmlPacketAddParts);

INCLUDE_ASM("asm/nonmatchings/nml/packet", nmlPacketAddTextureParam);

INCLUDE_ASM("asm/nonmatchings/nml/packet", add_exec_prog);

INCLUDE_ASM("asm/nonmatchings/nml/packet", nmlPacketAddExecProg);

INCLUDE_ASM("asm/nonmatchings/nml/packet", nmlPacketAddTransData);

INCLUDE_ASM("asm/nonmatchings/nml/packet", nmlPacketSetAttributeData);

INCLUDE_ASM("asm/nonmatchings/nml/packet", nmlPacketSetAttributeData64);

INCLUDE_ASM("asm/nonmatchings/nml/packet", nmlPacketSetAttributeData64N);

INCLUDE_ASM("asm/nonmatchings/nml/packet", nmlPacketSetAttributeData16N);

INCLUDE_ASM("asm/nonmatchings/nml/packet", nmlPacketSetAttributeAlloc16N);

INCLUDE_ASM("asm/nonmatchings/nml/packet", nmlPacketAddGifTag);

INCLUDE_ASM("asm/nonmatchings/nml/packet", nmlPacketAddGifTagStandard);

INCLUDE_ASM("asm/nonmatchings/nml/packet", nmlPacketAddFog);

INCLUDE_ASM("asm/nonmatchings/nml/packet", nmlPacketAddPixelControl);

INCLUDE_ASM("asm/nonmatchings/nml/packet", nmlPacketDirectData);

INCLUDE_ASM("asm/nonmatchings/nml/packet", nmlPacketSetCurrent);

INCLUDE_ASM("asm/nonmatchings/nml/packet", nmlPacketAddReflRot);

INCLUDE_ASM("asm/nonmatchings/nml/packet", nmlPacketAddScreenClear);

INCLUDE_ASM("asm/nonmatchings/nml/packet", nmlPacketGsInit);

INCLUDE_ASM("asm/nonmatchings/nml/packet", nmlPacketAddGsClamp);

INCLUDE_ASM("asm/nonmatchings/nml/packet", nmlPacketAddGsPixeltest);

INCLUDE_ASM("asm/nonmatchings/nml/packet", nmlPacketAddGsPixeltest1);

INCLUDE_ASM("asm/nonmatchings/nml/packet", nmlPacketAddGsZbuf);

INCLUDE_ASM("asm/nonmatchings/nml/packet", nmlPacketAddGsZbuf1);

INCLUDE_ASM("asm/nonmatchings/nml/packet", nmlPacketAddGsTexture);

INCLUDE_ASM("asm/nonmatchings/nml/packet", nmlPacketAddGsAlpha);

INCLUDE_ASM("asm/nonmatchings/nml/packet", nmlPacketAddGsAlpha1);

INCLUDE_ASM("asm/nonmatchings/nml/packet", nmlPacketAddGsScissor);

INCLUDE_ASM("asm/nonmatchings/nml/packet", nmlPacketAddGsScissor1);

INCLUDE_ASM("asm/nonmatchings/nml/packet", nmlPacketAddGsFBA);

INCLUDE_ASM("asm/nonmatchings/nml/packet", nmlPacketAddGsFBA1);

INCLUDE_ASM("asm/nonmatchings/nml/packet", nmlPacketAddGsFogCol);

INCLUDE_ASM("asm/nonmatchings/nml/packet", nmlPacketAddGsFrame);

INCLUDE_ASM("asm/nonmatchings/nml/packet", nmlPacketAddGsFrame1);

INCLUDE_ASM("asm/nonmatchings/nml/packet", nmlPacketAddGsPAbe);

INCLUDE_ASM("asm/nonmatchings/nml/packet", nmlPacketAddGsPrmode);

INCLUDE_ASM("asm/nonmatchings/nml/packet", nmlPacketAddGsPrmodecont);

INCLUDE_ASM("asm/nonmatchings/nml/packet", packet_gs_entry32);

INCLUDE_ASM("asm/nonmatchings/nml/packet", packet_gs_entry64);

INCLUDE_ASM("asm/nonmatchings/nml/packet", nmlPacketAddGsFba);
