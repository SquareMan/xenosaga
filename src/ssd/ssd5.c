#include "common.h"

INCLUDE_ASM("asm/nonmatchings/ssd/ssd5", SsdInitPcmStream);

INCLUDE_ASM("asm/nonmatchings/ssd/ssd5", SsdDisposePcmStream);

INCLUDE_ASM("asm/nonmatchings/ssd/ssd5", SsdPlayPcmStream);

INCLUDE_ASM("asm/nonmatchings/ssd/ssd5", SsdStopPcmStream);

INCLUDE_ASM("asm/nonmatchings/ssd/ssd5", SsdSetPcmStreamData);

INCLUDE_ASM("asm/nonmatchings/ssd/ssd5", SsdGetPcmStreamStatus);

INCLUDE_ASM("asm/nonmatchings/ssd/ssd5", SsdSetPcmStreamVolume);

INCLUDE_ASM("asm/nonmatchings/ssd/ssd5", SsdInitVagStreamStereo);

INCLUDE_ASM("asm/nonmatchings/ssd/ssd5", SsdInitVagStreamMono);

INCLUDE_ASM("asm/nonmatchings/ssd/ssd5", SsdDisposeVagStream);

INCLUDE_ASM("asm/nonmatchings/ssd/ssd5", SsdPlayVagStream);

INCLUDE_ASM("asm/nonmatchings/ssd/ssd5", SsdStopVagStream);

INCLUDE_ASM("asm/nonmatchings/ssd/ssd5", SsdSetVagStreamDataStereo);

INCLUDE_ASM("asm/nonmatchings/ssd/ssd5", SsdSetVagStreamDataMono);

INCLUDE_ASM("asm/nonmatchings/ssd/ssd5", SsdGetVagStreamStatusStereo);

INCLUDE_ASM("asm/nonmatchings/ssd/ssd5", SsdGetVagStreamStatusMono);

INCLUDE_ASM("asm/nonmatchings/ssd/ssd5", SsdGetVagStreamParam);

INCLUDE_ASM("asm/nonmatchings/ssd/ssd5", SsdGetVagStreamStatusAll);

INCLUDE_ASM("asm/nonmatchings/ssd/ssd5", SsdSetVagStreamPitch);

INCLUDE_ASM("asm/nonmatchings/ssd/ssd5", SsdSetVagStreamVolume);

INCLUDE_ASM("asm/nonmatchings/ssd/ssd5", SsdSetVagStreamPanpot);

INCLUDE_ASM("asm/nonmatchings/ssd/ssd5", SsdSetVagStreamParam);

INCLUDE_ASM("asm/nonmatchings/ssd/ssd5", SsdClearStreamRingBuffer);
