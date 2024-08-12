#include "common.h"

// .lit4
f32 D_004D7D30; // = 1.4;

// .sdata
u32 dbCX;
u32 dbCY;
u32 dbCZ;
u32 dbCH;
u32 dbMODE;

INCLUDE_ASM("asm/nonmatchings/game/DB", GAME_initCamera);

INCLUDE_ASM("asm/nonmatchings/game/DB", GAME_initLight);

INCLUDE_ASM("asm/nonmatchings/game/DB", STR_indexReverse);

INCLUDE_ASM("asm/nonmatchings/game/DB", PAD_getKey);

INCLUDE_ASM("asm/nonmatchings/game/DB", DB_cmode);

INCLUDE_ASM("asm/nonmatchings/game/DB", DB_reset);

INCLUDE_ASM("asm/nonmatchings/game/DB", DB_reset2);

INCLUDE_ASM("asm/nonmatchings/game/DB", DB_incPos);

INCLUDE_ASM("asm/nonmatchings/game/DB", DB_params);

INCLUDE_ASM("asm/nonmatchings/game/DB", DB_println);

INCLUDE_ASM("asm/nonmatchings/game/DB", DB_printf);

INCLUDE_ASM("asm/nonmatchings/game/DB", DB_pathGetShortPath);

INCLUDE_ASM("asm/nonmatchings/game/DB", DB_pathFindName);
