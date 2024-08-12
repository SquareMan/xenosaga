#include "common.h"

#include "DiskChange.h"
#include "Map.h"
#include "PauseMenu.h"
#include "command.h"
#include "main.h"

#include "xgl/render.h"

// .sdata
u8 DebugMenuResourceSizeAdd;

INCLUDE_ASM("asm/nonmatchings/game/PauseMenuPage", PauseMenuPage0);

INCLUDE_ASM("asm/nonmatchings/game/PauseMenuPage", PauseMenuPage2);

INCLUDE_ASM("asm/nonmatchings/game/PauseMenuPage", PauseMenuPage3);

INCLUDE_ASM("asm/nonmatchings/game/PauseMenuPage", GameDebugMenu);
