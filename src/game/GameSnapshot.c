#include "common.h"

#include "main.h"

// .sdata
u32 snapnameno;
u32 snapnamext;

INCLUDE_ASM("asm/nonmatchings/game/GameSnapshot", GameSnapShotNumber);

void GameSnapShotCheck(void) {
}

INCLUDE_ASM("asm/nonmatchings/game/GameSnapshot", GameSnapShotExecute);

INCLUDE_ASM("asm/nonmatchings/game/GameSnapshot", GameSnapShotSaveThumbnail);

INCLUDE_ASM("asm/nonmatchings/game/GameSnapshot", GameSnapShotSave);

INCLUDE_ASM("asm/nonmatchings/game/GameSnapshot", GameSnapShotSaveFile);
