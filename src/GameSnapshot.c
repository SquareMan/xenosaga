#include "common.h"

#include "main.h"

// .sdata
u32 snapnameno;
u32 snapnamext;

INCLUDE_ASM("asm/nonmatchings/GameSnapshot", GameSnapShotNumber);

void GameSnapShotCheck(void) {
}

INCLUDE_ASM("asm/nonmatchings/GameSnapshot", GameSnapShotExecute);

INCLUDE_ASM("asm/nonmatchings/GameSnapshot", GameSnapShotSaveThumbnail);

INCLUDE_ASM("asm/nonmatchings/GameSnapshot", GameSnapShotSave);

INCLUDE_ASM("asm/nonmatchings/GameSnapshot", GameSnapShotSaveFile);
