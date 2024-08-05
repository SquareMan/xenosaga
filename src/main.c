#include "common.h"

UNK_TYPE WorkEnd;
s32 main_param_argc;
const char* main_param_argv[];

INCLUDE_ASM("asm/nonmatchings/main", ControlEntry);

INCLUDE_ASM("asm/nonmatchings/main", InitializeSystem);

INCLUDE_ASM("asm/nonmatchings/main", main);
