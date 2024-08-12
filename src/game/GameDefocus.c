#include "common.h"

#include "xgl/render.h"

f32 D_004D7C40; // = 3.1415927;
f32 D_004D7C44; // = 3.1415927;
f32 D_004D7C48; // = 3.1415927;
f32 D_004D7C4C; // = 0.0015339808;

INCLUDE_ASM("asm/nonmatchings/game/GameDefocus", GetTex0);

INCLUDE_ASM("asm/nonmatchings/game/GameDefocus", DefocusMainType01);

INCLUDE_ASM("asm/nonmatchings/game/GameDefocus", DefocusMainType02);

INCLUDE_ASM("asm/nonmatchings/game/GameDefocus", DefocusMainType03);

INCLUDE_ASM("asm/nonmatchings/game/GameDefocus", DefocusMainType05);

INCLUDE_ASM("asm/nonmatchings/game/GameDefocus", DefocusMainType06);

INCLUDE_ASM("asm/nonmatchings/game/GameDefocus", DefocusMainType07);

INCLUDE_ASM("asm/nonmatchings/game/GameDefocus", DefocusMainType08);

INCLUDE_ASM("asm/nonmatchings/game/GameDefocus", DefocusMainType09);

INCLUDE_ASM("asm/nonmatchings/game/GameDefocus", DefocusMainType09Final);

INCLUDE_ASM("asm/nonmatchings/game/GameDefocus", DefocusMainType10);

INCLUDE_ASM("asm/nonmatchings/game/GameDefocus", DefocusMainType11);

INCLUDE_ASM("asm/nonmatchings/game/GameDefocus", DefocusMain);

INCLUDE_ASM("asm/nonmatchings/game/GameDefocus", GameDefocusCheck);

INCLUDE_ASM("asm/nonmatchings/game/GameDefocus", GameDefocusFinalize);

INCLUDE_ASM("asm/nonmatchings/game/GameDefocus", GameDefocusSet);

INCLUDE_ASM("asm/nonmatchings/game/GameDefocus", GameDefocusQuickSet);
