#include "common.h"

// FIXME: This filename sucks. What relates all these functions?

// .sbss
u32 mode;
u32 toolFlags;
u32 partsIndex;
u32 lightIndex;

// .sdata
u32 D_004DA518;
u32 lightColIndex;
u32 lightSpeed;
u32 lightStateOffset;
u32 D_004DA54C;
u32 D_004DA550;

// .lit4
f32 D_004D7CB4; // = 0.39269909;
f32 D_004D7CB8; // = 0.39269909;
f32 D_004D7CBC; // = 0.13333334;
f32 D_004D7CC0; // = 0.033333335;
f32 D_004D7CC4; // = 0.033333335;
f32 D_004D7CC8; // = 0.02617994;
f32 D_004D7CCC; // = 0.02617994;
f32 D_004D7CD0; // = 0.011635529;
f32 D_004D7CD4; // = 0.011635529;
f32 D_004D7CD8; // = 0.011635529;
f32 D_004D7CDC; // = 0.011635529;
f32 D_004D7CE0; // = 0.0099999998;
f32 D_004D7CE4; // = 0.0099999998;
f32 D_004D7CE8; // = 0.0099999998;
f32 D_004D7CEC; // = 0.78539819;
f32 D_004D7CF0; // = 0.001;
f32 D_004D7CF4; // = 0.0099999998;
f32 D_004D7CF8; // = 6.2831855;
f32 D_004D7CFC; // = -6.2831855;
f32 D_004D7D00; // = 0.1;
f32 D_004D7D04; // = 0.1;
f32 D_004D7D08; // = 0.1;
f32 D_004D7D0C; // = 0.1;
f32 D_004D7D10; // = 0.05;

// unknown TU
u32 cursorMode;

INCLUDE_ASM("asm/nonmatchings/game/Cursor", DB_lightWrite);

INCLUDE_ASM("asm/nonmatchings/game/Cursor", drawRect2);

INCLUDE_ASM("asm/nonmatchings/game/Cursor", drawBox2);

INCLUDE_ASM("asm/nonmatchings/game/Cursor", drawCircle2);

INCLUDE_ASM("asm/nonmatchings/game/Cursor", drawVector2);

INCLUDE_ASM("asm/nonmatchings/game/Cursor", drawVector4S);

INCLUDE_ASM("asm/nonmatchings/game/Cursor", drawGrid);

INCLUDE_ASM("asm/nonmatchings/game/Cursor", getCurrentCamera);

INCLUDE_ASM("asm/nonmatchings/game/Cursor", drawAxis);

INCLUDE_ASM("asm/nonmatchings/game/Cursor", drawCircle3);

INCLUDE_ASM("asm/nonmatchings/game/Cursor", drawTags);

INCLUDE_ASM("asm/nonmatchings/game/Cursor", drawVector4);

INCLUDE_ASM("asm/nonmatchings/game/Cursor", ball2point);

INCLUDE_ASM("asm/nonmatchings/game/Cursor", prevActor);

INCLUDE_ASM("asm/nonmatchings/game/Cursor", nextActor);

INCLUDE_ASM("asm/nonmatchings/game/Cursor", updateCursorMode1);

INCLUDE_ASM("asm/nonmatchings/game/Cursor", updateCursorMode2);

INCLUDE_ASM("asm/nonmatchings/game/Cursor", updateCursorModePlane);

INCLUDE_ASM("asm/nonmatchings/game/Cursor", updateCursorMode0);

INCLUDE_ASM("asm/nonmatchings/game/Cursor", changeCameraMode);

INCLUDE_ASM("asm/nonmatchings/game/Cursor", updateCursor);

INCLUDE_ASM("asm/nonmatchings/game/Cursor", drawCursor);

INCLUDE_ASM("asm/nonmatchings/game/Cursor", initCursor);

INCLUDE_ASM("asm/nonmatchings/game/Cursor", printM);

INCLUDE_ASM("asm/nonmatchings/game/Cursor", MAP_serach);

INCLUDE_ASM("asm/nonmatchings/game/Cursor", EvtTools);

INCLUDE_ASM("asm/nonmatchings/game/Cursor", initLight3);

INCLUDE_ASM("asm/nonmatchings/game/Cursor", initLight2);

INCLUDE_ASM("asm/nonmatchings/game/Cursor", initLight);

INCLUDE_ASM("asm/nonmatchings/game/Cursor", updateLight);

INCLUDE_ASM("asm/nonmatchings/game/Cursor", updateWind);

INCLUDE_ASM("asm/nonmatchings/game/Cursor", VW_setCursorMode);

INCLUDE_ASM("asm/nonmatchings/game/Cursor", VW_setCursorFunc);

INCLUDE_ASM("asm/nonmatchings/game/Cursor", VW_setCursor);

INCLUDE_ASM("asm/nonmatchings/game/Cursor", VW_getCursor);
