#include "common.h"

// .sbss
u32 tokenCurrent;
u32 tokenLimit;
u32 tokenType;

// unknown TU
u32 primitive;
u32 numClass;
u32 classes;
u32 numPrimitive;

INCLUDE_ASM("asm/nonmatchings/game/JS", JS_init);

INCLUDE_ASM("asm/nonmatchings/game/JS", JS_loadClass);

INCLUDE_ASM("asm/nonmatchings/game/JS", JS_loadConstInteger);

INCLUDE_ASM("asm/nonmatchings/game/JS", JS_classSetup);

INCLUDE_ASM("asm/nonmatchings/game/JS", JS_classAddMethod);

INCLUDE_ASM("asm/nonmatchings/game/JS", JS_findObject);

INCLUDE_ASM("asm/nonmatchings/game/JS", JS_callMethod);

INCLUDE_ASM("asm/nonmatchings/game/JS", JS_checkArgs);

INCLUDE_ASM("asm/nonmatchings/game/JS", JS_exec);

INCLUDE_ASM("asm/nonmatchings/game/JS", STR_tokenGetType);

INCLUDE_ASM("asm/nonmatchings/game/JS", STR_tokenGetNext);

INCLUDE_ASM("asm/nonmatchings/game/JS", STR_getLine);

INCLUDE_ASM("asm/nonmatchings/game/JS", STR_trim);

INCLUDE_ASM("asm/nonmatchings/game/JS", STR_trim2);
