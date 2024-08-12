#include "common.h"

// .lit4
f32 D_004D7D14; // = 3.3333335;
f32 D_004D7D18; // = 0.033333335;
f32 D_004D7D1C; // = 0.033333335;
f32 D_004D7D20; // = 0.033333335;
f32 D_004D7D24; // = 0.033333335;

// different TU
u32 classJava_xeno_util_TCHParams;

INCLUDE_ASM("asm/nonmatchings/game/PLAY", PLAY_getCurrent);

INCLUDE_ASM("asm/nonmatchings/game/PLAY", PLAY_setupDefault);

INCLUDE_ASM("asm/nonmatchings/game/PLAY", PLAY_setup);

INCLUDE_ASM("asm/nonmatchings/game/PLAY", PLAY_setTimeChart);

INCLUDE_ASM("asm/nonmatchings/game/PLAY", PLAY_setObserver);

void PLAY_loadCamera(void) {}

INCLUDE_ASM("asm/nonmatchings/game/PLAY", PLAY_ctrl);

INCLUDE_ASM("asm/nonmatchings/game/PLAY", PLAY_getCallBackParams);

INCLUDE_ASM("asm/nonmatchings/game/PLAY", PLAY_checkTCH);
