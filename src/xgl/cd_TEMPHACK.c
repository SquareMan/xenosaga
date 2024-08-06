#include "common.h"

#include "main.h"

//.sbss
UNK_FUN_PTR(callback);
u8 ReadClockInterval;

u8 PresentTime;
u8 D_004DC6D7;

u32 StrList;
u32 loaded_overlay;

// .sdata
u8 D_004DC2E8; // FIXME: local static
u8 D_004DC2F0; // FIXME: local static
u8 D_004DC318; // FIXME: local static
u8 D_004DC320; // FIXME: local static

INCLUDE_ASM("asm/nonmatchings/xgl/cd_TEMPHACK", xglCdFileSelect);

INCLUDE_ASM("asm/nonmatchings/xgl/cd_TEMPHACK", xglCdSifLoadModule);

INCLUDE_ASM("asm/nonmatchings/xgl/cd_TEMPHACK", xglCdLoadOverlay);

INCLUDE_ASM("asm/nonmatchings/xgl/cd_TEMPHACK", xglCdArcInitSub0);

INCLUDE_ASM("asm/nonmatchings/xgl/cd_TEMPHACK", xglCdArcInitSub1);

INCLUDE_ASM("asm/nonmatchings/xgl/cd_TEMPHACK", xglCdArcInitSub2);

INCLUDE_ASM("asm/nonmatchings/xgl/cd_TEMPHACK", xglCdArcInit);

INCLUDE_ASM("asm/nonmatchings/xgl/cd_TEMPHACK", xglCdArcCheck);

INCLUDE_ASM("asm/nonmatchings/xgl/cd_TEMPHACK", xglCdInitial);
