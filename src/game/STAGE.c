#include "common.h"

// .sbss (from another TU)
u32 TYPE_Void;
u32 NAME_Constructor;
u32 classJava_xeno_Stage;
u32 classJava_xeno_Chr;

INCLUDE_ASM("asm/nonmatchings/game/STAGE", STAGE_create);

INCLUDE_ASM("asm/nonmatchings/game/STAGE", STAGE_instance);
