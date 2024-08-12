#include "common.h"

#include "main.h"

// .sbss
u32 D_004DC550;
u32 image;
u8 rate;
u8 ping;

// .lit4
f32 D_004D7C7C; // = 6.2831855;
f32 D_004D7C80; // = 6.2831855;
f32 D_004D7C84; // = -6.2831855;

INCLUDE_ASM("asm/nonmatchings/game/Radar", GameRadarDraw);

INCLUDE_ASM("asm/nonmatchings/game/Radar", DrawRadarPing);

INCLUDE_ASM("asm/nonmatchings/game/Radar", DrawRadarInfo);

INCLUDE_ASM("asm/nonmatchings/game/Radar", DrawActorPoint);

INCLUDE_ASM("asm/nonmatchings/game/Radar", CheckActorExist);

INCLUDE_ASM("asm/nonmatchings/game/Radar", GameRadarInit);
