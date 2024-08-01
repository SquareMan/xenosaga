#include "common.h"

// NOTE: might be the same struct as UnkStruct2
typedef struct
{
  s8 Unk_0;
  s8 Unk_1;
} UnkStruct;

typedef struct
{
  u8 unk_0;
  s8 unk_1;
  s8 unk_2;
  s8 unk_3;
  s16 unk_4;
  s16 unk_6;
  s32 unk_8;
  s16 unk_c;
  s16 unk_e;
  s8 unk_10;
  s8 unk_11;
  s8 unk_12;
  s8 unk_13;
  s16 unk_14;
  s16 unk_16;
  s32 unk_18;
  u8 unk_1c;
  u8 unk_1d;
  u8 unk_1e;
  s8 unk_1f;
  s32 unk_20;
} UnkStruct2;

// TODO: Extract data symbols from rom
UNK_TYPE D_004DA918;
UNK_TYPE D_004DC5D4;

void eMessageSpriteReset()
{
  D_004DA918 = 0;
}

void eMessageDrawType00()
{
}

s32 eMessageHalfSpaseCheck(const char *str)
{
  s32 count = 0;

  while (*str++ == ' ')
  {
    count++;
  }

  return count;
}

// TODO: move to a header
extern s32 xglFontGetSPcodeSize(u8, const char *);

const char *eMessageNextGyou(const char *str)
{
  s32 count;
  while (*str != NULL && *str != '\n')
  {
    if (*str > 0 && *str < 0x1A)
    {
      str += xglFontGetSPcodeSize(*str, str) + 1;
    }
    else if (*str == 0x1e)
    {
      str += 2;
    }
    else if (*str == 0x1f)
    {
      str++;
    }
    else if (*str >= 0x20 && *str < 0x7F)
    {
      str++;
    }
    else
    {
      count = eMessageHalfSpaseCheck(str);
      if (count != 0)
      {
        str += count;
      }
      else
      {
        str += 2;
      }
    }
  }
  return str;
}

#if 1
INCLUDE_ASM("asm/nonmatchings/eMessage", eMessageNextGyouMaxGet);
#else
s32 eMessageNextGyouMaxGet(const char *str)
{
  s32 ret = 0;
  char c;

  do
  {
    ret++;
    str = eMessageNextGyou(str);
    c = *str;
    if (c == NULL)
    {
      break;
    }
    if (c == '\n')
    {
      str++;
    }
  } while (c != 0x1f);

  return ret;
}
#endif

const char *eMessageNextWaitKeySearch(const char *str)
{
  s32 count;
  while (*str != NULL)
  {
    if (*str == 0x1f)
    {
      str += 1;
      break;
    }

    if (*str > 0 && *str < 0x1A)
    {
      str += xglFontGetSPcodeSize(*str, str) + 1;
    }
    else if (*str == 0x1e)
    {
      str += 2;
    }
    else if (*str >= 0x20 && *str < 0x7F)
    {
      str++;
    }
    else
    {
      count = eMessageHalfSpaseCheck(str);
      if (count != 0)
      {
        str += count;
      }
      else
      {
        str += 2;
      }
    }
  }
  return str;
}

INCLUDE_ASM("asm/nonmatchings/eMessage", eMessageDrawType01);

INCLUDE_ASM("asm/nonmatchings/eMessage", eMessageMain);

void eMessageModeChange(UnkStruct *param_1, s8 param_2)
{
  param_1->Unk_1 = param_2;
}

void eCursolSet(UNK_TYPE *param_1, UNK_TYPE param_2);

void eMessageSet(UnkStruct2 *param_1, s32 param_2)
{
  param_1->unk_18 = param_2;
  param_1->unk_4 = 0;
  param_1->unk_6 = 0;
  param_1->unk_8 = 0;
  param_1->unk_10 = 0x80;
  param_1->unk_11 = 0x80;
  param_1->unk_12 = 0x80;
  param_1->unk_13 = 0x80;
  param_1->unk_0 = 1;
  param_1->unk_1 = 0;
  param_1->unk_2 = 0;
  param_1->unk_3 = 0xf0;
  param_1->unk_14 = 0;
  param_1->unk_16 = 0;
  param_1->unk_c = 0;
  param_1->unk_e = 0;
  param_1->unk_1d = 0;
  param_1->unk_1c = 0;
  eCursolSet(&param_1->unk_20, 3);
}

#if 1
INCLUDE_ASM("asm/nonmatchings/eMessage", eMessageTextChange);
#else
void eMessageTextChange(UnkStruct2 *param_1, s32 param_2)
{
  param_1->unk_18 = param_2;
  if (param_1->unk_1c)
  {
    param_1->unk_1d = 0;
    param_1->unk_1e = 0;

    while (*eMessageNextWaitKeySearch() != NULL)
    {
      param_1->unk_1e++;
    }
  }
}
#endif

s32 eMessageNextPage(UnkStruct2 *param_1, UNK_TYPE param_2)
{
  if (param_1->unk_1c)
  {
    if (param_2 == 0)
    {
      if (param_1->unk_0 & 0x80)
      {
        param_1->unk_1d += 1;
        if (param_1->unk_1d > param_1->unk_1e)
        {
          param_1->unk_1d = param_1->unk_1e;
          return 0;
        }
        param_1->unk_1 = 0x22;
      }
      else
      {
        param_1->unk_1 = 0x20;
      }

      return 1;
    }

    param_1->unk_1d = 0;
  }
  return 0;
}

void eMessageDraw()
{
  eMessageMain();
}

void eMessageCpy(UNK_TYPE param_1, const char *str)
{
  D_004DC5D4 = param_1;
  eMessageCat(str);
}

INCLUDE_ASM("asm/nonmatchings/eMessage", eMessageCat);
