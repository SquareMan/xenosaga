#include "common.h"

#include "Menu.h"

// .sbss
u16 MenuTopCommandLock;

// .sdata
u32 MenuVecMat;
u32 TopStatusWin;
u32 TopInfo;
u32 TopMenuWin;
u32 TopFaceExWin;

// .lit4
f32 D_004D7D64; // = 0.28;
f32 D_004D7D68; // = 1.08;
f32 D_004D7D6C; // = 0.1;
f32 D_004D7D70; // = 0.077;
f32 D_004D7D74; // = -1.0471976;
f32 D_004D7D78; // = -0.19634955;
f32 D_004D7D7C; // = 0.78539819;
f32 D_004D7D80; // = 0.31415927;
f32 D_004D7D84; // = 0.19634955;
f32 D_004D7D88; // = 0.077;
f32 D_004D7D8C; // = 0.2;
f32 D_004D7D90; // = 0.1;
f32 D_004D7D94; // = -0.253125;
f32 D_004D7D98; // = 0.2;
f32 D_004D7D9C; // = 0.078;
f32 D_004D7DA0; // = 148.5;

INCLUDE_ASM("asm/nonmatchings/game/MenuTop", MenuTopCommandCheck);

INCLUDE_ASM("asm/nonmatchings/game/MenuTop", TopStatusWinMain);

INCLUDE_ASM("asm/nonmatchings/game/MenuTop", TopInfoMain);

INCLUDE_ASM("asm/nonmatchings/game/MenuTop", TopMenuWinMain);

INCLUDE_ASM("asm/nonmatchings/game/MenuTop", TopFaceExWinMain);

INCLUDE_ASM("asm/nonmatchings/game/MenuTop", TopMenu);

INCLUDE_ASM("asm/nonmatchings/game/MenuTop", tskMenuTai);

INCLUDE_ASM("asm/nonmatchings/game/MenuTop", tskMenuTaiPointa);

INCLUDE_ASM("asm/nonmatchings/game/MenuTop", MenuBackModelSet);

INCLUDE_ASM("asm/nonmatchings/game/MenuTop", MenuStatusDisp);

INCLUDE_ASM("asm/nonmatchings/game/MenuTop", MenuInfoWindow);

INCLUDE_ASM("asm/nonmatchings/game/MenuTop", MenuSelectWindow);

void MenuPasWindow(void) {}
