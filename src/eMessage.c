#include "common.h"

// TODO: Extract data symbols from rom
UNK_TYPE D_004DA918;
UNK_TYPE D_004DC5D4;

INCLUDE_ASM("asm/nonmatchings/eMessage", eMessageSpriteReset);

void eMessageDrawType00(void) {
}

s32 eMessageHalfSpaseCheck(const char* str)
{
  s32 count = 0;

  while (*str++ == ' ') {
    count++;
  }

  return count;
}

INCLUDE_ASM("asm/nonmatchings/eMessage", eMessageNextGyou);

INCLUDE_ASM("asm/nonmatchings/eMessage", eMessageNextGyouMaxGet);

INCLUDE_ASM("asm/nonmatchings/eMessage", eMessageNextWaitKeySearch);

INCLUDE_ASM("asm/nonmatchings/eMessage", eMessageDrawType01);

INCLUDE_ASM("asm/nonmatchings/eMessage", eMessageMain);

INCLUDE_ASM("asm/nonmatchings/eMessage", eMessageModeChange);

INCLUDE_ASM("asm/nonmatchings/eMessage", eMessageSet);

INCLUDE_ASM("asm/nonmatchings/eMessage", eMessageTextChange);

INCLUDE_ASM("asm/nonmatchings/eMessage", eMessageNextPage);

void eMessageDraw()
{
    eMessageMain();
}

INCLUDE_ASM("asm/nonmatchings/eMessage", eMessageCpy);

INCLUDE_ASM("asm/nonmatchings/eMessage", eMessageCat);
