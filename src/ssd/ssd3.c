#include "common.h"

INCLUDE_ASM("asm/nonmatchings/ssd/ssd3", SsdSendFuncPacket);

INCLUDE_ASM("asm/nonmatchings/ssd/ssd3", SsdSpuDirectRead);

INCLUDE_ASM("asm/nonmatchings/ssd/ssd3", SsdAddWaveData);

INCLUDE_ASM("asm/nonmatchings/ssd/ssd3", SsdNextWaveData);

INCLUDE_ASM("asm/nonmatchings/ssd/ssd3", SsdSetSegmentAllocMode);

INCLUDE_ASM("asm/nonmatchings/ssd/ssd3", SsdResetSegmentAllocMode);

INCLUDE_ASM("asm/nonmatchings/ssd/ssd3", SsdDisposeWaveBank);

INCLUDE_ASM("asm/nonmatchings/ssd/ssd3", SsdCheckWaveData);

INCLUDE_ASM("asm/nonmatchings/ssd/ssd3", SsdSpuDmaCompleted);

INCLUDE_ASM("asm/nonmatchings/ssd/ssd3", SsdCheckSpuMemory);

INCLUDE_ASM("asm/nonmatchings/ssd/ssd3", SsdAddEffectData);

INCLUDE_ASM("asm/nonmatchings/ssd/ssd3", SsdDisposeEffectData);

INCLUDE_ASM("asm/nonmatchings/ssd/ssd3", SsdCheckEffectData);

INCLUDE_ASM("asm/nonmatchings/ssd/ssd3", SsdPlayEffectNormal);

INCLUDE_ASM("asm/nonmatchings/ssd/ssd3", SsdPlayEffectParam);

INCLUDE_ASM("asm/nonmatchings/ssd/ssd3", SsdSetPlayEffectParam);

INCLUDE_ASM("asm/nonmatchings/ssd/ssd3", SsdSetEffectParam);

INCLUDE_ASM("asm/nonmatchings/ssd/ssd3", SsdStopAllEffect);

INCLUDE_ASM("asm/nonmatchings/ssd/ssd3", SsdStopEffect);

INCLUDE_ASM("asm/nonmatchings/ssd/ssd3", SsdContinueOneEffect);

INCLUDE_ASM("asm/nonmatchings/ssd/ssd3", SsdFadeoutEffect);

INCLUDE_ASM("asm/nonmatchings/ssd/ssd3", SsdFadeoutEffectFileID);

INCLUDE_ASM("asm/nonmatchings/ssd/ssd3", SsdPlayWaveNormal);

INCLUDE_ASM("asm/nonmatchings/ssd/ssd3", SsdPlayWaveParam);

INCLUDE_ASM("asm/nonmatchings/ssd/ssd3", SsdStopWave);

INCLUDE_ASM("asm/nonmatchings/ssd/ssd3", SsdStopEffectFileID);

INCLUDE_ASM("asm/nonmatchings/ssd/ssd3", SsdCheckPlayEffectAll);

INCLUDE_ASM("asm/nonmatchings/ssd/ssd3", SsdCheckPlayEffect);

INCLUDE_ASM("asm/nonmatchings/ssd/ssd3", SsdCheckPlayEffectFileID);

INCLUDE_ASM("asm/nonmatchings/ssd/ssd3", SsdInitSampling);

INCLUDE_ASM("asm/nonmatchings/ssd/ssd3", SsdDisposeSampling);

INCLUDE_ASM("asm/nonmatchings/ssd/ssd3", SsdSetSampleDmaCallback);

INCLUDE_ASM("asm/nonmatchings/ssd/ssd3", SsdSetSampleKeyoffCallback);

INCLUDE_ASM("asm/nonmatchings/ssd/ssd3", SsdTransferSampling);

INCLUDE_ASM("asm/nonmatchings/ssd/ssd3", SsdTransferSamplingNext);

INCLUDE_ASM("asm/nonmatchings/ssd/ssd3", SsdPlaySampling);

INCLUDE_ASM("asm/nonmatchings/ssd/ssd3", SsdStopSampling);

INCLUDE_ASM("asm/nonmatchings/ssd/ssd3", SsdSetSamplingParam);

INCLUDE_ASM("asm/nonmatchings/ssd/ssd3", SsdSetSamplingEffect);

INCLUDE_ASM("asm/nonmatchings/ssd/ssd3", RssdRequestCall);
