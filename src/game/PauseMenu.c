#include "PauseMenu.h"

#include "common.h"
#include "main.h"

#include "xgl/render.h"

INCLUDE_ASM("asm/nonmatchings/game/PauseMenu", DrawShadow);

INCLUDE_ASM("asm/nonmatchings/game/PauseMenu", DrawCredit);

INCLUDE_ASM("asm/nonmatchings/game/PauseMenu", PauseMenu);

INCLUDE_ASM("asm/nonmatchings/game/PauseMenu", GamePauseDispBG);

INCLUDE_ASM("asm/nonmatchings/game/PauseMenu", GamePauseDispCf);

INCLUDE_ASM("asm/nonmatchings/game/PauseMenu", GamePauseDispEvent);
