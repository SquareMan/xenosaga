#include "common.h"

//.sbss (from another TU)
u32 TYPE_Void;
u32 NAME_Constructor;
u32 classJava_xeno_Scene;
u32 classJava_xeno_Chr;
u32 classJava_xeno_Unit;

INCLUDE_ASM("asm/nonmatchings/game/SCENE", SCENE_instance);

INCLUDE_ASM("asm/nonmatchings/game/SCENE", SCENE_dispose);

INCLUDE_ASM("asm/nonmatchings/game/SCENE", SCENE_cleanup);

INCLUDE_ASM("asm/nonmatchings/game/SCENE", SCENE_start);
