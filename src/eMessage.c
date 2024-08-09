#include "common.h"

#include "xgl/font.h"

// size >= 0x24
typedef struct
{
    u8 Flags;
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
    u8 unk_20;
    u8 unk_21;
    u8 unk_22;
    u8 unk_23;
    s16 unk_24;
    s16 unk_26;
    s32 unk_28;
} eMessage;

#define MESSAGE_FLAG_UNK1 1
#define MESSAGE_FLAG_UNK10 0x10
#define MESSAGE_FLAG_UNK20 0x20
#define MESSAGE_FLAG_UNK80 0x80

// size == 0x14
typedef struct
{
    u16 unk_0;
    u16 unk_2;
    u32 unk_4;
    u16 unk_8;
    u16 unk_a;
    u8 unk_c;
    u8 unk_d;
    u8 unk_e;
    u8 unk_f;
    u16 unk_10;
    u8 unk_12;
    u8 unk_13;
} MessageSprite;

// TODO: Extract data symbols from rom
// .sdata
UNK_TYPE msg_spr_count;

// .sbss
UNK_TYPE MessageCpyEnd;

// .bss
char moji[4096];
MessageSprite msg_spr[16];

// .data
char otb[32]; //= {0x0b, 0x0c, 0x80, 0x80, 0x80, 0x0d, 0x02, 0x0e, 0x02, 0x02, 0x00,
              //   0x00, 0x00, 0x0f, 0x44, 0x00, 0x7f, 0x18, 0x00, 0x19, 0x03, 0x15,
              //   0x02, 0x01, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

void eMessageSpriteReset()
{
    msg_spr_count = 0;
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

    return count;
}

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

#if 1
INCLUDE_ASM("asm/nonmatchings/eMessage", eMessageDrawType01);
#else
void eMessageDrawType01(eMessage* Message)
{
    char* moji_p = moji;
    u8 message_flags = Message->Flags;
    s32 i;
    char loop2_control;
    u32 unk_3_shift = (u32)Message->unk_3 << 1;
    const char* wait_key = Message->Text;
    const char* str1;
    const char* str2;
    const char* str3;
    char stackstr[16];
    const char* strbuf[32];
    const char** strbuf_it;
    s32 bFlag20;
    s32 unk_size1;
    s32 unk_size2;
    u8 stack10 = Message->unk_10;
    u8 stack11 = Message->unk_11;
    u8 stack12 = Message->unk_12;
    u8 stack13 = Message->unk_13;
    char unk_char = 3;
    s16 stack16 = Message->unk_16;
    u64 local_a0;
    MessageSprite spr;
    s32 bUnk;
    s32 bUnk2 = FALSE;

    strbuf[0] = NULL;

    if (Message->Flags & MESSAGE_FLAG_UNK1)
    {
        moji[0] = otb[0];
        moji[1] = otb[0x15];
        moji[2] = otb[0x16];
        moji[3] = otb[0x17];
        moji[4] = otb[0x18];
        moji[5] = otb[1];

        moji[6] = (f32)otb[2] * ((f32)Message->unk_10 / 128.0f);
        moji[7] = (f32)otb[3] * ((f32)Message->unk_11 / 128.0f);
        moji[8] = (f32)otb[4] * ((f32)Message->unk_12 / 128.0f);

        moji[9] = otb[5];
        moji[10] = otb[6];
        moji[0xb] = otb[7];
        moji[0xc] = otb[8];
        moji[0xd] = otb[9];
        moji[0xe] = otb[10];
        moji[0xf] = otb[0xb];
        moji[0x10] = otb[0xc];
        moji[0x11] = otb[0xd];
        moji[0x12] = otb[0xe];
        moji[0x13] = otb[0xf];

        moji[0x14] = (f32)otb[4] * ((f32)Message->unk_13 / 128.0f);

        moji[0x15] = otb[0x11];
        moji[0x16] = otb[0x12];
        moji[0x17] = otb[0x13];
        moji[0x18] = otb[0x14];
        moji[0x19] = 0x15;
        moji[0x1a] = 2;
        moji[0x1b] = 2;
        moji[0x1c] = 4;
        moji[0x1d] = 0x15;
        moji[0x1e] = 3;
        moji[0x1f] = moji[0x1e];
        moji[0x20] = (char)(unk_3_shift >> 8);
        moji[0x21] = (char)unk_3_shift;

        moji_p = &moji[0x22];
    }

    for (i = 0; i < Message->unk_1d; i++)
    {
        wait_key = eMessageNextWaitKeySearch(wait_key);
    }

    strbuf_it = strbuf;
    i = 0; // probably a new var (width related)
    loop2_control = *wait_key;
    str1 = wait_key;
    str2 = wait_key;
    while (loop2_control != NULL)
    {
        str3 = str2;
        if (loop2_control > 0 && loop2_control < 0x1A)
        {
            if (loop2_control == '\n')
            {
                i = 0;
            }
            str1 += xglFontGetSPcodeSize(*str1, str1) + 1;
        }
        else if (loop2_control == 0x1e)
        {
            str1 += 2;
        }
        else if (loop2_control == 0x1f)
        {
            break;
        }

        if (loop2_control == ' ')
        {
            i += 4;
            str1++;
            str3 = str1;
            if (unk_3_shift < i)
            {
                *strbuf_it = str2;
                strbuf_it++;
                i = 0;
                str1 = str3;
                str3 = str2;

                if (strbuf + 0x1f < strbuf_it)
                {
                    loop2_control = *wait_key;
                    break;
                }
            }
        }
        else
        {
            stackstr[0] = 0x19;
            stackstr[1] = 0x03;
            stackstr[2] = str1[0];
            stackstr[3] = str1[1];

            if ((stackstr[3] > 0 && stackstr[3] < 0x21) || (*str1 > 0x20 && *str1 <= 0x7F))
            {
                stackstr[3] = NULL;
                str1++;
            }
            else
            {
                str2 = str1 + 2;
                if (*str1++)
                {
                    str1 = str2;
                }
            }

            stackstr[4] = NULL;
            i += xglFontGetStringWidth(stackstr);
        }

        str2 = str3;
        loop2_control = *str1;
    }

    strbuf_it = strbuf;
    bFlag20 = message_flags & 0x20;
    for (; loop2_control != NULL; loop2_control = *wait_key)
    {
        if (strbuf_it <= strbuf + 0x1f && *wait_key == *strbuf_it)
        {
            strbuf_it++;

            unk_size1 = 0;
            unk_size2 += 0x18;
        }

        if (loop2_control > 0 && loop2_control < ' ')
        {
            i = xglFontGetSPcodeSize(*wait_key, wait_key);
            if (loop2_control == 0xf)
            {
                moji_p[0] = *wait_key;
                stack10 = (f32)wait_key[1] * (Message->unk_10 / 128.0f);
                moji_p[1] = stack10;

                str1 = wait_key + 3;

                moji_p[2] = (f32)wait_key[2] * (Message->unk_11 / 128.0f);

                wait_key += 4;
                moji_p[3] = (f32)*str1 * (Message->unk_12 / 128.0f);

                str1 = moji_p + 2;
                str2 = moji_p + 3;
                moji_p += 4;

                stack11 = *str1;
                stack12 = *str2;

                continue;
            }

            if (loop2_control > 0xf)
            {
                if (loop2_control != 0xf && loop2_control == 0xf)
                {
                    *moji_p = *wait_key;
                    str1 = moji_p + 1;
                    if (wait_key[1] == NULL)
                    {
                        unk_char = 3;
                    }
                    else if (wait_key[1] == 2)
                    {
                        unk_char = 0;
                    }

                    *str1 = wait_key[1];
                    goto weird_control;
                }
                else
                {
                    moji_p[0] = wait_key[0];
                    moji_p[1] = wait_key[1];

                    str1 = wait_key + 3;

                    moji_p[2] = wait_key[2];
                    wait_key += 4;

                    moji_p[3] = (f32)str1[0] * (Message->unk_13 / 128.0f);
                    moji_p += 4;
                    stack13 = moji_p[3];
                    continue;
                }
            }
            else if (loop2_control == '\n')
            {
                if (bFlag20 != 0)
                {
                    stack16 = Message->unk_14;
                }

                moji_p[0] = wait_key[0];
                wait_key++;
                unk_size1 = 0;
                moji_p++;
                unk_size2 += 0x18;
                continue;
            }

            if (i == -1)
            {
                continue;
            }

            while (i == -1)
            {
                moji_p[0] = wait_key[0];
                wait_key++;
                i--;
                moji_p++;
            }
        }
        else
        {
            if (loop2_control == 0x1e)
            {
                str1 = wait_key + 1;
                if (msg_spr_count < ARRAY_COUNT(msg_spr))
                {
                    spr = (MessageSprite){
                        .unk_0 = 0x0201,
                        .unk_2 = 0x0200,
                        .unk_4 = 0x2030202,
                        .unk_10 = 0xa1a1,
                    };

                    if (*str1 < 4)
                    {
                        msg_spr[msg_spr_count].unk_10 = (&spr.unk_0)[*str1 & 3];
                    }
                    else if (*str1 >= 4 && *str1 < 0x1a)
                    {
                        msg_spr[msg_spr_count].unk_10 = *str1 + 0x14fc;
                    }
                    else if ((*str1 >= 0x1b && *str1 < 0x1f) || (*str1 >= 0x1f && *str1 < 0x23))
                    {
                        msg_spr[msg_spr_count].unk_10 = *str1 + 0x15e5;
                    }
                    else if (*str1 >= 0x23 && *str1 < 0x3a)
                    {
                        msg_spr[msg_spr_count].unk_10 = *str1 + 0x7dd;
                    }
                    else if (*str1 >= 0x3a && *str1 < 0x4e)
                    {
                        msg_spr[msg_spr_count].unk_10 = *str1 + 0x16c6;
                    }
                    else
                    {
                        msg_spr[msg_spr_count].unk_10 = 0;
                    }

                    endSpriteSet(&msg_spr[msg_spr_count], 0xff);

                    msg_spr[msg_spr_count].unk_0 =
                        (Message->unk_4 + Message->unk_c + unk_size1) -
                        (((msg_spr[i].unk_8 << 0x10) >> 0x10) - // short conversion?
                         ((msg_spr[i].unk_8 << 0x10) >> 0x10)) +
                        10;

                    msg_spr[i].unk_4 = Message->unk_8;
                    msg_spr[i].unk_2 = (Message->unk_6 + Message->unk_e + unk_size2) -
                                       (((msg_spr[i].unk_a << 0x10) >> 0x10) -
                                        (((msg_spr[i].unk_a << 0x10) >> 0x10) >> 1)) +
                                       0xc;

                    if (*str1 < 0x4)
                    {
                        if (stack10 == 0x80)
                        {
                            if (stack11 == 0x80)
                            {
                                if (stack12 == 0x80)
                                {
                                    msg_spr[i].unk_13 = 1;
                                }
                            }
                            else
                            {
                                msg_spr[i].unk_13 = 1;
                            }
                        }
                        else
                        {
                            msg_spr[i].unk_13 = 1;
                        }
                        msg_spr[i].unk_f = stack13;
                    }
                    else
                    {
                        msg_spr[i].unk_c = stack10;
                        msg_spr[i].unk_d = stack11;
                        msg_spr[i].unk_e = stack12;
                        msg_spr[i].unk_f = stack13;
                    }

                    unk_size1 += sizeof(MessageSprite);
                    endPrintExtFunc(Message->unk_8, 2, &msg_spr[msg_spr_count]);

                    moji_p[0] = 0x19;
                    moji_p[1] = 0;
                    msg_spr_count++;
                    moji_p[2] = spr.unk_10;
                    moji_p[3] = *(((char*)spr.unk_10) + 1);
                    moji_p[4] = 0x19;
                    str1 = moji_p + 5;
                    *str1 = unk_char;
                weird_control:
                    moji_p = str1 + 1;
                }

                wait_key += 2;
            }
            else
            {
                if (loop2_control == 0x1f)
                {
                    bUnk = TRUE;
                    break;
                }

                stackstr[0] = 0x19;
                stackstr[2] = wait_key[0];
                stackstr[3] = wait_key[1];

                if ((stackstr[3] > 0 && stackstr[3] <= 0x1f) ||
                    (*wait_key > 0x20 && *wait_key <= 0x7f))
                {
                    stackstr[3] = NULL;
                    moji_p[0] = *wait_key;
                    str1 = moji_p + 1;
                    str2 = wait_key + 1;
                }
                else
                {
                    str2 = wait_key + 1;
                    moji_p[0] = *wait_key;
                    str1 = moji_p + 1;

                    if (*str2 != NULL)
                    {
                        moji_p[1] = *str2;
                        str1 = moji_p + 2;
                        str2 = wait_key + 2;
                    }
                }

                wait_key = str2;
                moji_p = str1;
                stackstr[4] = NULL;
                stackstr[1] = unk_char;

                unk_size1 += xglFontGetStringWidth(&stackstr);

                if (message_flags & MESSAGE_FLAG_UNK10)
                {
                    if (stack16 == 0)
                    {
                        bUnk2 = TRUE;
                        if ((message_flags & MESSAGE_FLAG_UNK20) == 0)
                        {
                            break;
                        }
                        wait_key = eMessageNextGyou(wait_key);
                        stack16 = Message->unk_16;
                    }
                    else
                    {
                        stack16 = (stack16 - 1) * 0x10000 >> 0x10;
                    }
                }
            }
        }
    }

    moji_p = 0;
    if (!bUnk2)
    {
        Message->Flags |= MESSAGE_FLAG_UNK80;
        if (Message->unk_1c == 1)
        {
            bUnk = TRUE;
        }
    }

    xglFontPrint(
        Message->unk_4, Message->unk_c, Message->unk_6, Message->unk_e - 1, Message->unk_8, 0x530900
    );

    if (Message->unk_1c)
    {
        if (bUnk)
        {
            Message->unk_24 = Message->unk_4 + Message->unk_c + unk_size1 + 2;
            Message->unk_26 = Message->unk_6 + Message->unk_e + unk_size2 + 6;
            Message->unk_28 = Message->unk_8;

            eCursolModeChange(&Message->unk_20, 0x20);
            eCursolMain(&Message->unk_20);
        }
        else
        {
            Message->unk_20 = 0;
        }
    }
}
#endif

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
    Message->Flags = MESSAGE_FLAG_UNK1;
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

void eMessageTextChange(eMessage* Message, const char* NewText)
{
    const char* it;

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
            if (Message->Flags & MESSAGE_FLAG_UNK80)
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
    MessageCpyEnd = param_1;
    eMessageCat(str);
}

INCLUDE_ASM("asm/nonmatchings/eMessage", eMessageCat);
