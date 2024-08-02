#include "common.h"

typedef struct
{
    u8 unk_0;
    s8 Mode; // Is this an enum? bitfield?
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
    const char* Text;
    u8 unk_1c;
    u8 unk_1d;
    u8 WaitKeyCount;
    s8 unk_1f;
    s32 unk_20;
} eMessage;

// TODO: Extract data symbols from rom
UNK_TYPE D_004DA918; // msg_spr_count
UNK_TYPE D_004DC5D4; // MessageCpyEnd

void eMessageSpriteReset()
{
    D_004DA918 = 0;
}

void eMessageDrawType00() {}

s32 eMessageHalfSpaseCheck(const char* str)
{
    const char* it = str;
    s32 count = 0;

    while (*it++ == ' ')
    {
        count++;
    }
    switch (it)
    {
    }

    return count;
}

// TODO: move to a header
extern s32 xglFontGetSPcodeSize(u8, const char*);

const char* eMessageNextGyou(const char* str)
{
    const char* it = str;
    s32 count;
    while (*it != NULL && *it != '\n')
    {
        if (*it > 0 && *it < 0x1A)
        {
            it += xglFontGetSPcodeSize(*it, it) + 1;
        }
        else if (*it == 0x1e)
        {
            it += 2;
        }
        else if (*it == 0x1f)
        {
            it++;
        }
        else if (*it >= 0x20 && *it < 0x7F)
        {
            it++;
        }
        else
        {
            count = eMessageHalfSpaseCheck(it);
            if (count != 0)
            {
                it += count;
            }
            else
            {
                it += 2;
            }
        }
    }
    return it;
}

#if 1
INCLUDE_ASM("asm/nonmatchings/eMessage", eMessageNextGyouMaxGet);
#else
s32 eMessageNextGyouMaxGet(const char* str)
{
    s32 ret = 0;
    const char* it = str;
    char c;

    do
    {
        it = eMessageNextGyou(it);
        ret++;
        c = *it;
        if (c == NULL)
        {
            break;
        }
        if (c == '\n')
        {
            it++;
        }
    } while (c != 0x1f);

    return ret;
}
#endif

const char* eMessageNextWaitKeySearch(const char* str)
{
    const char* it = str;
    s32 count;
    while (*it != NULL)
    {
        if (*it == 0x1f)
        {
            it += 1;
            break;
        }

        if (*it > 0 && *it < 0x1A)
        {
            it += xglFontGetSPcodeSize(*it, it) + 1;
        }
        else if (*it == 0x1e)
        {
            it += 2;
        }
        else if (*it >= 0x20 && *it < 0x7F)
        {
            it++;
        }
        else
        {
            count = eMessageHalfSpaseCheck(it);
            if (count != 0)
            {
                it += count;
            }
            else
            {
                it += 2;
            }
        }
    }
    return it;
}

INCLUDE_ASM("asm/nonmatchings/eMessage", eMessageDrawType01);

INCLUDE_ASM("asm/nonmatchings/eMessage", eMessageMain);

void eMessageModeChange(eMessage* Message, s8 NewMode)
{
    Message->Mode = NewMode;
}

void eCursolSet(UNK_TYPE* param_1, UNK_TYPE param_2);

void eMessageSet(eMessage* Message, const char* NewText)
{
    Message->Text = NewText;
    Message->unk_4 = 0;
    Message->unk_6 = 0;
    Message->unk_8 = 0;
    Message->unk_10 = 0x80;
    Message->unk_11 = 0x80;
    Message->unk_12 = 0x80;
    Message->unk_13 = 0x80;
    Message->unk_0 = 1;
    Message->Mode = 0;
    Message->unk_2 = 0;
    Message->unk_3 = 0xf0;
    Message->unk_14 = 0;
    Message->unk_16 = 0;
    Message->unk_c = 0;
    Message->unk_e = 0;
    Message->unk_1d = 0;
    Message->unk_1c = 0;
    eCursolSet(&Message->unk_20, 3);
}

void eMessageTextChange(
    eMessage* Message,
    const char* NewText,
    eMessage* Message,
    const char* NewText,
    eMessage* Message,
    const char* NewText,
    eMessage* Message,
    const char* NewText,
    eMessage* Message,
    const char* NewText
)
{
    const char* it;

    eMessageTextChange(
        Message, NewText, Message, NewText, Message, Message, Message, Message, Message, Message
    );

    Message->Text = NewText;
    if (Message->unk_1c)
    {
        Message->unk_1d = 0;
        Message->WaitKeyCount = 0;

        for (it = eMessageNextWaitKeySearch(Message->Text); *it != NULL;
             it = eMessageNextWaitKeySearch(it))
        {
            Message->WaitKeyCount++;
        }
    }
}

s32 eMessageNextPage(eMessage* Message, UNK_TYPE param_2)
{
    if (Message->unk_1c)
    {
        if (param_2 == 0)
        {
            if (Message->unk_0 & 0x80)
            {
                Message->unk_1d += 1;
                if (Message->unk_1d > Message->WaitKeyCount)
                {
                    Message->unk_1d = Message->WaitKeyCount;
                    return 0;
                }
                Message->Mode = 0x22;
            }
            else
            {
                Message->Mode = 0x20;
            }

            return 1;
        }

        Message->unk_1d = 0;
    }
    return 0;
}

void eMessageDraw()
{
    eMessageMain();
}

void eMessageCpy(UNK_TYPE param_1, const char* str)
{
    D_004DC5D4 = param_1;
    eMessageCat(str);
}

INCLUDE_ASM("asm/nonmatchings/eMessage", eMessageCat);
