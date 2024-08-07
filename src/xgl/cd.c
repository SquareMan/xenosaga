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

INCLUDE_ASM("asm/nonmatchings/xgl/cd", hdd_error);

INCLUDE_ASM("asm/nonmatchings/xgl/cd", xglCdPowerOffCB);

INCLUDE_ASM("asm/nonmatchings/xgl/cd", extract);

INCLUDE_ASM("asm/nonmatchings/xgl/cd", queue_next);

INCLUDE_ASM("asm/nonmatchings/xgl/cd", xglCdControlThread);

INCLUDE_ASM("asm/nonmatchings/xgl/cd", BCD2INT);

INCLUDE_ASM("asm/nonmatchings/xgl/cd", xglClockRead);

INCLUDE_ASM("asm/nonmatchings/xgl/cd", xglClockDayTime2UInt);

INCLUDE_ASM("asm/nonmatchings/xgl/cd", xglClockUInt2DayTime);

INCLUDE_ASM("asm/nonmatchings/xgl/cd", xglCdDiskCheck);

void xglCdDefaultCallback(void) {}

void xglCdDummyCallback(void) {}

INCLUDE_ASM("asm/nonmatchings/xgl/cd", xglCdReset);

INCLUDE_ASM("asm/nonmatchings/xgl/cd", xglCdSetCallback);

INCLUDE_ASM("asm/nonmatchings/xgl/cd", xglCdGetFilePosSub);

INCLUDE_ASM("asm/nonmatchings/xgl/cd", xglCdGetFilePos);

INCLUDE_ASM("asm/nonmatchings/xgl/cd", xglCdGetFileData);

INCLUDE_ASM("asm/nonmatchings/xgl/cd", xglCdGetFileSize);

INCLUDE_ASM("asm/nonmatchings/xgl/cd", xglCdReadFilePart);

INCLUDE_ASM("asm/nonmatchings/xgl/cd", xglCdReadFile);

INCLUDE_ASM("asm/nonmatchings/xgl/cd", xglCdReadCancel);

INCLUDE_ASM("asm/nonmatchings/xgl/cd", xglCdSync);

INCLUDE_ASM("asm/nonmatchings/xgl/cd", xglCdStreamOpen);

INCLUDE_ASM("asm/nonmatchings/xgl/cd", xglCdStreamRead);

INCLUDE_ASM("asm/nonmatchings/xgl/cd", StreamReadRingCoreSub);

INCLUDE_ASM("asm/nonmatchings/xgl/cd", StreamReadRingCoreNormal);

INCLUDE_ASM("asm/nonmatchings/xgl/cd", StreamReadRingCoreXss);

INCLUDE_ASM("asm/nonmatchings/xgl/cd", xglCdStreamReadRingCore);

INCLUDE_ASM("asm/nonmatchings/xgl/cd", xglCdStreamReadRing);

INCLUDE_ASM("asm/nonmatchings/xgl/cd", xglCdStreamRewind);

INCLUDE_ASM("asm/nonmatchings/xgl/cd", xglCdStreamClose);

INCLUDE_ASM("asm/nonmatchings/xgl/cd", xglCdStreamParamInit);

INCLUDE_ASM("asm/nonmatchings/xgl/cd", FileSelectListReload);

INCLUDE_ASM("asm/nonmatchings/xgl/cd", FileSelectSub);

INCLUDE_ASM("asm/nonmatchings/xgl/cd", xglCdFileSelect);

INCLUDE_ASM("asm/nonmatchings/xgl/cd", xglCdSifLoadModule);

INCLUDE_ASM("asm/nonmatchings/xgl/cd", xglCdLoadOverlay);

INCLUDE_ASM("asm/nonmatchings/xgl/cd", xglCdArcInitSub0);

INCLUDE_ASM("asm/nonmatchings/xgl/cd", xglCdArcInitSub1);

INCLUDE_ASM("asm/nonmatchings/xgl/cd", xglCdArcInitSub2);

INCLUDE_ASM("asm/nonmatchings/xgl/cd", xglCdArcInit);

INCLUDE_ASM("asm/nonmatchings/xgl/cd", xglCdArcCheck);

INCLUDE_ASM("asm/nonmatchings/xgl/cd", xglCdInitial);
