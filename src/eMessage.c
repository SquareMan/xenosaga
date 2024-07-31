#include "common.h"

// TODO: Extract data symbols from rom
UNK_TYPE D_004DA918;
UNK_TYPE D_004DC5D4;

INCLUDE_ASM(const s32, "eMessage", eMessageSpriteReset);

INCLUDE_ASM(const s32, "eMessage", eMessageDrawType00);

s32 eMessageHalfSpaseCheck(const char* str)
{
  s32 count = 0;

  while (*str++ == ' ') {
    count++;
  }

  return count;
}

INCLUDE_ASM(const s32, "eMessage", eMessageNextGyou);

INCLUDE_ASM(const s32, "eMessage", eMessageNextGyouMaxGet);

INCLUDE_ASM(const s32, "eMessage", eMessageNextWaitKeySearch);

INCLUDE_ASM(const s32, "eMessage", eMessageDrawType01);

INCLUDE_ASM(const s32, "eMessage", eMessageMain);

INCLUDE_ASM(const s32, "eMessage", eMessageModeChange);

INCLUDE_ASM(const s32, "eMessage", eMessageSet);

INCLUDE_ASM(const s32, "eMessage", eMessageTextChange);

INCLUDE_ASM(const s32, "eMessage", eMessageNextPage);

void eMessageDraw()
{
    eMessageMain();
}

INCLUDE_ASM(const s32, "eMessage", eMessageCpy);

INCLUDE_ASM(const s32, "eMessage", eMessageCat);
