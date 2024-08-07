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

INCLUDE_ASM("asm/nonmatchings/nml/packet_NOPHACK_1", nmlPacketAddTextureParam);

INCLUDE_ASM("asm/nonmatchings/nml/packet_NOPHACK_1", add_exec_prog);

INCLUDE_ASM("asm/nonmatchings/nml/packet_NOPHACK_1", nmlPacketAddExecProg);

INCLUDE_ASM("asm/nonmatchings/nml/packet_NOPHACK_1", nmlPacketAddTransData);

INCLUDE_ASM("asm/nonmatchings/nml/packet_NOPHACK_1", nmlPacketSetAttributeData);

INCLUDE_ASM("asm/nonmatchings/nml/packet_NOPHACK_1", nmlPacketSetAttributeData64);

INCLUDE_ASM("asm/nonmatchings/nml/packet_NOPHACK_1", nmlPacketSetAttributeData64N);

INCLUDE_ASM("asm/nonmatchings/nml/packet_NOPHACK_1", nmlPacketSetAttributeData16N);

INCLUDE_ASM("asm/nonmatchings/nml/packet_NOPHACK_1", nmlPacketSetAttributeAlloc16N);

INCLUDE_ASM("asm/nonmatchings/nml/packet_NOPHACK_1", nmlPacketAddGifTag);

INCLUDE_ASM("asm/nonmatchings/nml/packet_NOPHACK_1", nmlPacketAddGifTagStandard);

INCLUDE_ASM("asm/nonmatchings/nml/packet_NOPHACK_1", nmlPacketAddFog);

INCLUDE_ASM("asm/nonmatchings/nml/packet_NOPHACK_1", nmlPacketAddPixelControl);

INCLUDE_ASM("asm/nonmatchings/nml/packet_NOPHACK_1", nmlPacketDirectData);

INCLUDE_ASM("asm/nonmatchings/nml/packet_NOPHACK_1", nmlPacketSetCurrent);

INCLUDE_ASM("asm/nonmatchings/nml/packet_NOPHACK_1", nmlPacketAddReflRot);

INCLUDE_ASM("asm/nonmatchings/nml/packet_NOPHACK_1", nmlPacketAddScreenClear);

INCLUDE_ASM("asm/nonmatchings/nml/packet_NOPHACK_1", nmlPacketGsInit);

INCLUDE_ASM("asm/nonmatchings/nml/packet_NOPHACK_1", nmlPacketAddGsClamp);

INCLUDE_ASM("asm/nonmatchings/nml/packet_NOPHACK_1", nmlPacketAddGsPixeltest);

INCLUDE_ASM("asm/nonmatchings/nml/packet_NOPHACK_1", nmlPacketAddGsPixeltest1);

INCLUDE_ASM("asm/nonmatchings/nml/packet_NOPHACK_1", nmlPacketAddGsZbuf);

INCLUDE_ASM("asm/nonmatchings/nml/packet_NOPHACK_1", nmlPacketAddGsZbuf1);

INCLUDE_ASM("asm/nonmatchings/nml/packet_NOPHACK_1", nmlPacketAddGsTexture);

INCLUDE_ASM("asm/nonmatchings/nml/packet_NOPHACK_1", nmlPacketAddGsAlpha);

INCLUDE_ASM("asm/nonmatchings/nml/packet_NOPHACK_1", nmlPacketAddGsAlpha1);

INCLUDE_ASM("asm/nonmatchings/nml/packet_NOPHACK_1", nmlPacketAddGsScissor);

INCLUDE_ASM("asm/nonmatchings/nml/packet_NOPHACK_1", nmlPacketAddGsScissor1);

INCLUDE_ASM("asm/nonmatchings/nml/packet_NOPHACK_1", nmlPacketAddGsFBA);

INCLUDE_ASM("asm/nonmatchings/nml/packet_NOPHACK_1", nmlPacketAddGsFBA1);

INCLUDE_ASM("asm/nonmatchings/nml/packet_NOPHACK_1", nmlPacketAddGsFogCol);

INCLUDE_ASM("asm/nonmatchings/nml/packet_NOPHACK_1", nmlPacketAddGsFrame);

INCLUDE_ASM("asm/nonmatchings/nml/packet_NOPHACK_1", nmlPacketAddGsFrame1);

INCLUDE_ASM("asm/nonmatchings/nml/packet_NOPHACK_1", nmlPacketAddGsPAbe);

INCLUDE_ASM("asm/nonmatchings/nml/packet_NOPHACK_1", nmlPacketAddGsPrmode);

INCLUDE_ASM("asm/nonmatchings/nml/packet_NOPHACK_1", nmlPacketAddGsPrmodecont);

INCLUDE_ASM("asm/nonmatchings/nml/packet_NOPHACK_1", packet_gs_entry32);

INCLUDE_ASM("asm/nonmatchings/nml/packet_NOPHACK_1", packet_gs_entry64);

INCLUDE_ASM("asm/nonmatchings/nml/packet_NOPHACK_1", nmlPacketAddGsFba);
