#include "common.h"

// .sbss
u8 pre_mode;
s32 D_004DC51C;
s32 D_004DC520;

// .lit4
f32 D_004D7BA4; // = 0.69813174;
f32 D_004D7BA8; // = 0.05;
f32 D_004D7BAC; // = -0.39269909;
f32 D_004D7BB0; // = 0.029999999;
f32 D_004D7BB4; // = 1.2;
f32 D_004D7BB8; // = 1000000.0;
f32 D_004D7BBC; // = 0.33333334;
f32 D_004D7BC0; // = 0.33333334;
f32 D_004D7BC4; // = -0.001;
f32 D_004D7BC8; // = 0.001;
f32 D_004D7BCC; // = -0.001;
f32 D_004D7BD0; // = 0.001;
f32 D_004D7BD4; // = 0.4;
f32 D_004D7BD8; // = 0.001;
f32 D_004D7BDC; // = -0.001;
f32 D_004D7BE0; // = 0.001;
f32 D_004D7BE4; // = -0.001;
f32 D_004D7BE8; // = 0.1;
f32 D_004D7BEC; // = 3.1415927;
f32 D_004D7BF0; // = 0.0099999998;
f32 D_004D7BF4; // = 0.4;
f32 D_004D7BF8; // = 3.1415927;
f32 D_004D7BFC; // = -3.1415927;
f32 D_004D7C00; // = 6.2831855;
f32 D_004D7C04; // = 3.1415927;
f32 D_004D7C08; // = 3.1415927;

INCLUDE_ASM("asm/nonmatchings/GameCamera", GameCameraReset);

INCLUDE_ASM("asm/nonmatchings/GameCamera", GameCameraStateSave);

INCLUDE_ASM("asm/nonmatchings/GameCamera", GameCameraStateRestore);

INCLUDE_ASM("asm/nonmatchings/GameCamera", GameCameraChangeID);

INCLUDE_ASM("asm/nonmatchings/GameCamera", MoveHokan);

INCLUDE_ASM("asm/nonmatchings/GameCamera", GetCenter);

INCLUDE_ASM("asm/nonmatchings/GameCamera", GetCameraPos);

INCLUDE_ASM("asm/nonmatchings/GameCamera", GetNearestCenter);

INCLUDE_ASM("asm/nonmatchings/GameCamera", CalcLookAt);

INCLUDE_ASM("asm/nonmatchings/GameCamera", CalcCameraPos);

INCLUDE_ASM("asm/nonmatchings/GameCamera", CameraType0);

INCLUDE_ASM("asm/nonmatchings/GameCamera", CameraType1Core);

INCLUDE_ASM("asm/nonmatchings/GameCamera", CameraType1);

INCLUDE_ASM("asm/nonmatchings/GameCamera", CameraType4);

INCLUDE_ASM("asm/nonmatchings/GameCamera", GameCameraDefocus);

INCLUDE_ASM("asm/nonmatchings/GameCamera", GameCamera);
