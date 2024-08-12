#include "common.h"

// .sbss
u16 groupStatus;

u8 D_004DC592;
u8 D_004DC593;

// .lit4
f32 D_004D7C94; // = 1.6;
f32 D_004D7C98; // = 305.0;

INCLUDE_ASM("asm/nonmatchings/game/TWSYS", TWSYS_init);

INCLUDE_ASM("asm/nonmatchings/game/TWSYS", TWSYS_setGRPStatus);

INCLUDE_ASM("asm/nonmatchings/game/TWSYS", TWSYS_getGRPStatus);

INCLUDE_ASM("asm/nonmatchings/game/TWSYS", TWSYS_createComponent);

INCLUDE_ASM("asm/nonmatchings/game/TWSYS", TWSYS_update);

INCLUDE_ASM("asm/nonmatchings/game/TWSYS", TWSYS_draw);

INCLUDE_ASM("asm/nonmatchings/game/TWSYS", PARSE_int);

INCLUDE_ASM("asm/nonmatchings/game/TWSYS", STRING_int);

INCLUDE_ASM("asm/nonmatchings/game/TWSYS", STRING_h2zEUC);

INCLUDE_ASM("asm/nonmatchings/game/TWSYS", STRING_toUInt);

INCLUDE_ASM("asm/nonmatchings/game/TWSYS", TW_setPos);

INCLUDE_ASM("asm/nonmatchings/game/TWSYS", WIN_initCF);

INCLUDE_ASM("asm/nonmatchings/game/TWSYS", WIN_initScene);

INCLUDE_ASM("asm/nonmatchings/game/TWSYS", TWIN_init2);

INCLUDE_ASM("asm/nonmatchings/game/TWSYS", WIN_checkActiveWindow);

INCLUDE_ASM("asm/nonmatchings/game/TWSYS", TWIN_create2);

INCLUDE_ASM("asm/nonmatchings/game/TWSYS", TWIN_dispose);

INCLUDE_ASM("asm/nonmatchings/game/TWSYS", TWIN_popCF);

INCLUDE_ASM("asm/nonmatchings/game/TWSYS", TWIN_popScene);

INCLUDE_ASM("asm/nonmatchings/game/TWSYS", TWIN_update2);

INCLUDE_ASM("asm/nonmatchings/game/TWSYS", TWIN_draw2);

INCLUDE_ASM("asm/nonmatchings/game/TWSYS", TWIN_drawScene2);

INCLUDE_ASM("asm/nonmatchings/game/TWSYS", TMENU_init);

INCLUDE_ASM("asm/nonmatchings/game/TWSYS", TMENU_create);

INCLUDE_ASM("asm/nonmatchings/game/TWSYS", TMENU_dispose);

INCLUDE_ASM("asm/nonmatchings/game/TWSYS", TMENU_addQuery);

INCLUDE_ASM("asm/nonmatchings/game/TWSYS", TMENU_setItem);

INCLUDE_ASM("asm/nonmatchings/game/TWSYS", TMENU_addItem);

INCLUDE_ASM("asm/nonmatchings/game/TWSYS", TMENU_updateDefault);

INCLUDE_ASM("asm/nonmatchings/game/TWSYS", TMENU_drawDefault);
