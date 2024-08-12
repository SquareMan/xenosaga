#include "common.h"

// .sbss
s32 WALK_THRESHOLD_I;
s32 WALK_THRESHOLD_F;
s32 RUN_THRESHOLD_I;
s32 RUN_THRESHOLD_F;
s32 VECTOR_RATE;
s16 GameCfPlayerLoadResource_preCID;
u8 GameCfPlayerLoadResource_preCurry;

// .lit4
f32 D_004D7C0C; // = 0.00079999998;
f32 D_004D7C10; // = -0.05;
f32 D_004D7C14; // = 0.39269909;
f32 D_004D7C18; // = 0.19634955;
f32 D_004D7C1C; // = 0.001;
f32 D_004D7C20; // = 0.1;
f32 D_004D7C24; // = 0.1;
f32 D_004D7C28; // = 0.033333335;
f32 D_004D7C2C; // = 0.23333335;
f32 D_004D7C30; // = 0.0099999998;
f32 D_004D7C34; // = 0.0099999998;
f32 D_004D7C38; // = 1.9;
f32 D_004D7C3C; // = 0.0099999998;

INCLUDE_ASM("asm/nonmatchings/game/GameCfPlayer", LookAt_Player);

INCLUDE_ASM("asm/nonmatchings/game/GameCfPlayer", Player_System_Init);

INCLUDE_ASM("asm/nonmatchings/game/GameCfPlayer", GameCfPlayerMoveParamSet);

INCLUDE_ASM("asm/nonmatchings/game/GameCfPlayer", GameCfPlayerMoveInit);

INCLUDE_ASM("asm/nonmatchings/game/GameCfPlayer", GameCfPlayerMove);

INCLUDE_ASM("asm/nonmatchings/game/GameCfPlayer", HitCheckActor);

INCLUDE_ASM("asm/nonmatchings/game/GameCfPlayer", NyuruActor);

INCLUDE_ASM("asm/nonmatchings/game/GameCfPlayer", PlayerLookAtAim);

INCLUDE_ASM("asm/nonmatchings/game/GameCfPlayer", GameCfPlayerLoadResource);
