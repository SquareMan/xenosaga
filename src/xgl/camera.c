#include "common.h"

// .lit4
f32 D_004D885C; // = 0.69813174;
f32 D_004D8860; // = 0.0011170107;
f32 D_004D8864; // = -0.0011170107;
f32 D_004D8868; // = 0.079999998;
f32 D_004D886C; // = 0.23999999;
f32 D_004D8870; // = -0.00006981317;
f32 D_004D8874; // = -0.00006981317;
f32 D_004D8878; // = -0.00006981317;
f32 D_004D887C; // = -0.00006981317;
f32 D_004D8880; // = 0.0022340214;
f32 D_004D8884; // = -0.0022340214;
f32 D_004D8888; // = 0.00019999999;
f32 D_004D888C; // = 0.00019999999;
f32 D_004D8890; // = -0.0063999998;
f32 D_004D8894; // = 0.0063999998;
f32 D_004D8898; // = 0.00019999999;
f32 D_004D889C; // = 0.00019999999;
f32 D_004D88A0; // = 0.8;
f32 D_004D88A4; // = 0.00006981317;
f32 D_004D88A8; // = 0.00006981317;
f32 D_004D88AC; // = -0.0063999998;
f32 D_004D88B0; // = 0.0063999998;
f32 D_004D88B4; // = 0.00019999999;
f32 D_004D88B8; // = 0.00019999999;
f32 D_004D88BC; // = 0.8;
f32 D_004D88C0; // = 0.4;
f32 D_004D88C4; // = 0.2;
f32 D_004D88C8; // = 0.4;
f32 D_004D88CC; // = 12.272727;
f32 D_004D88D0; // = 0.0099999998;
f32 D_004D88D4; // = 99000.0;

INCLUDE_ASM("asm/nonmatchings/xgl/camera", xglCameraControlInit);

INCLUDE_ASM("asm/nonmatchings/xgl/camera", xglCameraScreenInit);

INCLUDE_ASM("asm/nonmatchings/xgl/camera", xglCameraTravelInit);

INCLUDE_ASM("asm/nonmatchings/xgl/camera", xglCameraTravelReset);

INCLUDE_ASM("asm/nonmatchings/xgl/camera", xglCameraTravelFocus);

INCLUDE_ASM("asm/nonmatchings/xgl/camera", xglCameraTravelScale);

INCLUDE_ASM("asm/nonmatchings/xgl/camera", xglCameraTravelManual);

INCLUDE_ASM("asm/nonmatchings/xgl/camera", xglCameraTravelChase);

INCLUDE_ASM("asm/nonmatchings/xgl/camera", xglCameraTravelProc);

INCLUDE_ASM("asm/nonmatchings/xgl/camera", xglCameraViewScreen);

INCLUDE_ASM("asm/nonmatchings/xgl/camera", xglCameraViewTravel);

INCLUDE_ASM("asm/nonmatchings/xgl/camera", xglCameraViewVolume);

INCLUDE_ASM("asm/nonmatchings/xgl/camera", xglCameraInit);

INCLUDE_ASM("asm/nonmatchings/xgl/camera", xglCameraMove);

INCLUDE_ASM("asm/nonmatchings/xgl/camera", xglCameraMoveOffset);

INCLUDE_ASM("asm/nonmatchings/xgl/camera", xglCameraSetWindow);

INCLUDE_ASM("asm/nonmatchings/xgl/camera", xglCameraClipRangeDefault);
