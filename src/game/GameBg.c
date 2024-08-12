#include "common.h"

#include "main.h"

// .lit4
f32 D_004D7C50; // = 6.2831855;
f32 D_004D7C54; // = 3.1415927;
f32 D_004D7C58; // = -6.2831855;
f32 D_004D7C5C; // = 0.00025;
f32 D_004D7C60; // = 0.39269909;
f32 D_004D7C64; // = 0.0099999998;
f32 D_004D7C68; // = 0.017;
f32 D_004D7C6C; // = -0.011;
f32 D_004D7C70; // = -0.017999999;
f32 D_004D7C74; // = 0.001;
f32 D_004D7C78; // = -0.0099999998;

INCLUDE_ASM("asm/nonmatchings/game/GameBg", clear);

void GameBgDrawType0(void) {}

void nullfunc(void) {}

INCLUDE_ASM("asm/nonmatchings/game/GameBg", GameBgDrawType1);

INCLUDE_ASM("asm/nonmatchings/game/GameBg", GameBgDrawType1Entry);

INCLUDE_ASM("asm/nonmatchings/game/GameBg", GameBgDrawType2);

INCLUDE_ASM("asm/nonmatchings/game/GameBg", GameBgDrawType2Entry);
