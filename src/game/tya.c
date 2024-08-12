#include "common.h"

#include "main.h"

// .sbss
u8 D_004DC55C;

u32 pnum;
u32 pext;
u32 cascade;
u32 TmpBuffer;
u16 layer;
u16 zpicf;
u32 alpha;
u32 transparency;

INCLUDE_ASM("asm/nonmatchings/game/tya", getfbp);

INCLUDE_ASM("asm/nonmatchings/game/tya", tyaBmpOutput);

INCLUDE_ASM("asm/nonmatchings/game/tya", tyaSiPicOutput);

INCLUDE_ASM("asm/nonmatchings/game/tya", tyaCaptureMain);

void tyaCaptureNull(void) {}

INCLUDE_ASM("asm/nonmatchings/game/tya", tyaCaptureActor);

INCLUDE_ASM("asm/nonmatchings/game/tya", tyaCaptureShadow);

INCLUDE_ASM("asm/nonmatchings/game/tya", tyaCaptureUnit);

INCLUDE_ASM("asm/nonmatchings/game/tya", tyaCaptureUnit2);

INCLUDE_ASM("asm/nonmatchings/game/tya", tyaCaptureStart);

INCLUDE_ASM("asm/nonmatchings/game/tya", tyaCaptureEnd);
