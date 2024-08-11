#include "PauseMenu.h"

#include "common.h"
#include "main.h"

#include "xgl/render.h"

INCLUDE_ASM("asm/nonmatchings/PauseMenu", DrawShadow);

INCLUDE_ASM("asm/nonmatchings/PauseMenu", DrawCredit);

INCLUDE_ASM("asm/nonmatchings/PauseMenu", PauseMenu);

INCLUDE_ASM("asm/nonmatchings/PauseMenu", GamePauseDispBG);

INCLUDE_ASM("asm/nonmatchings/PauseMenu", GamePauseDispCf);

INCLUDE_ASM("asm/nonmatchings/PauseMenu", GamePauseDispEvent);
