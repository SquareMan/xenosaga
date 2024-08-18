#include "common.h"

typedef struct
{
    s32 unk_0; // type id?
    s32 unk_4;
    s32 unk_8;
} JsPrimitive;

typedef struct
{
    s32 unk_0;
    s32 unk_4;
    s32 numMethods;
    JsPrimitive methods[8];
} JsClass;

// .sbss
u32 tokenCurrent;
u32 tokenLimit;
u32 tokenType;

// unknown TU
JsPrimitive* primitive;
u32 numClass;
JsClass* classes;
u32 numPrimitive;

void JS_init(s32 a0, s32 a1, s32 a2)
{
    numClass = 0;
    numPrimitive = 0;
    primitive = RSRC_alloc(a0, a1 * sizeof(JsPrimitive), 0);
    classes = RSRC_alloc(a0, a2 * sizeof(JsClass), 0);
}

// Equivalent, small scheduling problem.
#if 1
INCLUDE_ASM("asm/nonmatchings/game/JS", JS_loadClass);
#else
JsClass* JS_loadClass(s32 a0)
{
    JsClass* new_class;
    JsPrimitive* new_primitive;

    new_class = &classes[numClass++];
    new_primitive = &primitive[numPrimitive++];

    new_class->unk_0 = a0;
    new_primitive->unk_0 = 7;
    new_primitive->unk_4 = a0;
    new_primitive->unk_8 = new_class;
    return new_class;
}
#endif

s32 JS_loadConstInteger(s32 a0, s32 a1)
{
    JsPrimitive* new_primitive;

    new_primitive = &primitive[numPrimitive++];
    new_primitive->unk_0 = 1;
    new_primitive->unk_4 = a0;
    new_primitive->unk_8 = a1;

    return 0;
}

void JS_classSetup(JsClass* InClass, s32 a1)
{
    InClass->unk_4 = a1;
    InClass->numMethods = 0;
}

void JS_classAddMethod(JsClass* InClass, s32 a1, s32 a2)
{
    JsPrimitive* method = &InClass->methods[InClass->numMethods++];

    method->unk_0 = 8;
    method->unk_4 = a1;
    method->unk_8 = a2;
}

INCLUDE_ASM("asm/nonmatchings/game/JS", JS_findObject);

INCLUDE_ASM("asm/nonmatchings/game/JS", JS_callMethod);

INCLUDE_ASM("asm/nonmatchings/game/JS", JS_checkArgs);

INCLUDE_ASM("asm/nonmatchings/game/JS", JS_exec);

u32 STR_tokenGetType()
{
    return tokenType;
}

INCLUDE_ASM("asm/nonmatchings/game/JS", STR_tokenGetNext);

INCLUDE_ASM("asm/nonmatchings/game/JS", STR_getLine);

char* STR_trim(char* str)
{
    s32 len;
    s32 i;

    while (*str < '!' && *str != NULL)
    {
        str++;
    }

    len = strlen(str);
    for (i = len - 1; i >= 0; i--)
    {
        if (str[i] < '!')
        {
            str[i] = NULL;
        }
    }

    return str;
}

char* STR_trim2(char* str, s32 c)
{
    s32 len;
    s32 i;

    while (*str == c && c != NULL)
    {
        str++;
    }

    len = strlen(str);
    for (i = len - 1; i >= 0; i--)
    {
        if (str[i] == c)
        {
            str[i] = NULL;
        }
    }

    return str;
}
