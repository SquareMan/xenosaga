#include "common.h"

INCLUDE_ASM("asm/nonmatchings/ssd/ssd1", SsdInit);

INCLUDE_ASM("asm/nonmatchings/ssd/ssd1", SsdQuit);

INCLUDE_ASM("asm/nonmatchings/ssd/ssd1", RSsdSifRpcThread);

INCLUDE_ASM("asm/nonmatchings/ssd/ssd1", RssdInitIop);

INCLUDE_ASM("asm/nonmatchings/ssd/ssd1", RssdSifRpcServer);

INCLUDE_ASM("asm/nonmatchings/ssd/ssd1", RssdBusy);

INCLUDE_ASM("asm/nonmatchings/ssd/ssd1", RssdSpuRead);

INCLUDE_ASM("asm/nonmatchings/ssd/ssd1", RssdBackgroundNextWave);

INCLUDE_ASM("asm/nonmatchings/ssd/ssd1", RssdBackNextWaveThread);

INCLUDE_ASM("asm/nonmatchings/ssd/ssd1", RssdCallFunc);

INCLUDE_ASM("asm/nonmatchings/ssd/ssd1", RssdSifRpcCallback);

INCLUDE_ASM("asm/nonmatchings/ssd/ssd1", RssdFuncCallCompleted);

INCLUDE_ASM("asm/nonmatchings/ssd/ssd1", RssdGetCallCompletedCode);

INCLUDE_ASM("asm/nonmatchings/ssd/ssd1", SsdGetResultValue);

INCLUDE_ASM("asm/nonmatchings/ssd/ssd1", SsdGetResultParam);

INCLUDE_ASM("asm/nonmatchings/ssd/ssd1", SsdSetServerCallback);

INCLUDE_ASM("asm/nonmatchings/ssd/ssd1", SsdSetFuncCallback);

INCLUDE_ASM("asm/nonmatchings/ssd/ssd1", SsdSetStreamEndCallback);

INCLUDE_ASM("asm/nonmatchings/ssd/ssd1", SsdResume);

INCLUDE_ASM("asm/nonmatchings/ssd/ssd1", SsdSuspend);
