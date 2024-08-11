#include "common.h"

#include "Map.h"
#include "PauseMenu.h"
#include "command.h"
#include "main.h"

#include "xgl/render.h"

// .sdata
u8 GameDiskChangeT10K;
u8 DebugMenuResourceSizeAdd;

INCLUDE_ASM("asm/nonmatchings/PauseMenuPage", PauseMenuPage0);

INCLUDE_ASM("asm/nonmatchings/PauseMenuPage", PauseMenuPage2);

INCLUDE_ASM("asm/nonmatchings/PauseMenuPage", PauseMenuPage3);

INCLUDE_ASM("asm/nonmatchings/PauseMenuPage", GameDebugMenu);
