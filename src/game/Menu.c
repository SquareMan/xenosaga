#include "Menu.h"

#include "common.h"


u8 D_004DA88A;

// .sbss
u32 D_004DC5CC;

// .lit4
f32 D_004D7D58; // = -0.42479879;
f32 D_004D7D5C; // = 2.7841938;
f32 D_004D7D60; // = 7.055951;


INCLUDE_ASM("asm/nonmatchings/game/Menu", WindowTexLoad);

INCLUDE_ASM("asm/nonmatchings/game/Menu", WindowTexAddrGet);

INCLUDE_ASM("asm/nonmatchings/game/Menu", MenuWorkEndGet);

void MenuWorkEndCheck(void) {}

INCLUDE_ASM("asm/nonmatchings/game/Menu", ChangeTopLevel);

INCLUDE_ASM("asm/nonmatchings/game/Menu", MenuKeepSelectReset);

INCLUDE_ASM("asm/nonmatchings/game/Menu", MenuSelectMove);

INCLUDE_ASM("asm/nonmatchings/game/Menu", MenuSelectMove2);

INCLUDE_ASM("asm/nonmatchings/game/Menu", MoveSlide);

INCLUDE_ASM("asm/nonmatchings/game/Menu", MoveSlide2);

INCLUDE_ASM("asm/nonmatchings/game/Menu", menuCallback);

INCLUDE_ASM("asm/nonmatchings/game/Menu", MenuFontLoad);

INCLUDE_ASM("asm/nonmatchings/game/Menu", MenuLoadFile);

INCLUDE_ASM("asm/nonmatchings/game/Menu", MenuLoadSync);

INCLUDE_ASM("asm/nonmatchings/game/Menu", MenuLoadInit);

void MenuLoadEnd(void) {}

INCLUDE_ASM("asm/nonmatchings/game/Menu", MenuLoadCancel);

INCLUDE_ASM("asm/nonmatchings/game/Menu", MenuBibrationSet);

INCLUDE_ASM("asm/nonmatchings/game/Menu", MenuBibrationInit);

INCLUDE_ASM("asm/nonmatchings/game/Menu", MenuBibrationMain);

INCLUDE_ASM("asm/nonmatchings/game/Menu", MenuCfTaikiPush);

INCLUDE_ASM("asm/nonmatchings/game/Menu", MenuCfTaikiPop);

INCLUDE_ASM("asm/nonmatchings/game/Menu", MenuBgTaskInit);

INCLUDE_ASM("asm/nonmatchings/game/Menu", MenuBgTaskMain);

INCLUDE_ASM("asm/nonmatchings/game/Menu", MenuBgTaskBreak);

INCLUDE_ASM("asm/nonmatchings/game/Menu", MenuTairetuLoad);

INCLUDE_ASM("asm/nonmatchings/game/Menu", MainMenu);

INCLUDE_ASM("asm/nonmatchings/game/Menu", CharactorAllRecovery);

INCLUDE_ASM("asm/nonmatchings/game/Menu", AgwsAllRecovery);

INCLUDE_ASM("asm/nonmatchings/game/Menu", UmnkosmosSpecialInit);

INCLUDE_ASM("asm/nonmatchings/game/Menu", UmnkosmosSpecialSet);

INCLUDE_ASM("asm/nonmatchings/game/Menu", UmnInterface);

INCLUDE_ASM("asm/nonmatchings/game/Menu", UmnMailMain);

INCLUDE_ASM("asm/nonmatchings/game/Menu", UmnMailBoxSet);

INCLUDE_ASM("asm/nonmatchings/game/Menu", UmnMailDataGet);

INCLUDE_ASM("asm/nonmatchings/game/Menu", UmnDataBaseMonsterSet);

INCLUDE_ASM("asm/nonmatchings/game/Menu", UmnDataBaseMonsterCheck);

INCLUDE_ASM("asm/nonmatchings/game/Menu", UmnDataBaseAnalisisSet);

INCLUDE_ASM("asm/nonmatchings/game/Menu", UmnDataBaseAnalisisCheck);

INCLUDE_ASM("asm/nonmatchings/game/Menu", hen);
