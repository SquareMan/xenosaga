#include "common.h"

// .lit4
f32 D_004D7D28; // = 0.000001;
f32 D_004D7D2C; // = 0.000001;

INCLUDE_ASM("asm/nonmatchings/game/MATRIX", MATRIX_print);

INCLUDE_ASM("asm/nonmatchings/game/MATRIX", MATRIX_identity);

INCLUDE_ASM("asm/nonmatchings/game/MATRIX", MATRIX_identity4s);

INCLUDE_ASM("asm/nonmatchings/game/MATRIX", MATRIX_convert4);

INCLUDE_ASM("asm/nonmatchings/game/MATRIX", MATRIX_convert4s);

INCLUDE_ASM("asm/nonmatchings/game/MATRIX", MATRIX_convert4MulMatrix);

INCLUDE_ASM("asm/nonmatchings/game/MATRIX", MATRIX_convert4MulMatrixRev);

INCLUDE_ASM("asm/nonmatchings/game/MATRIX", MATRIX_mul3x4);

INCLUDE_ASM("asm/nonmatchings/game/MATRIX", MATRIX_mul4sx3);

INCLUDE_ASM("asm/nonmatchings/game/MATRIX", MATRIX_transpose4);

INCLUDE_ASM("asm/nonmatchings/game/MATRIX", MATRIX_transpose3);

INCLUDE_ASM("asm/nonmatchings/game/MATRIX", MATRIX_rotate4);

void MATRIX_rotXYZ(void) {}

void MATRIX_rotZYX(void) {}

INCLUDE_ASM("asm/nonmatchings/game/MATRIX", MATRIX_rotX4);

INCLUDE_ASM("asm/nonmatchings/game/MATRIX", MATRIX_rotY4);

INCLUDE_ASM("asm/nonmatchings/game/MATRIX", MATRIX_rotZ4);

INCLUDE_ASM("asm/nonmatchings/game/MATRIX", MATRIX_rotX4s);

INCLUDE_ASM("asm/nonmatchings/game/MATRIX", MATRIX_rotY4s);

INCLUDE_ASM("asm/nonmatchings/game/MATRIX", MATRIX_rotZ4s);

INCLUDE_ASM("asm/nonmatchings/game/MATRIX", MATRIX_translate4);

INCLUDE_ASM("asm/nonmatchings/game/MATRIX", MATRIX_scale4);

INCLUDE_ASM("asm/nonmatchings/game/MATRIX", MATRIX_translate4s);

INCLUDE_ASM("asm/nonmatchings/game/MATRIX", MATRIX_scale4s);

INCLUDE_ASM("asm/nonmatchings/game/MATRIX", MATRIX_toQuat4);

INCLUDE_ASM("asm/nonmatchings/game/MATRIX", QUAT_toAxis);

INCLUDE_ASM("asm/nonmatchings/game/MATRIX", QUAT_toMatrix4);

INCLUDE_ASM("asm/nonmatchings/game/MATRIX", QUAT_interpS);

INCLUDE_ASM("asm/nonmatchings/game/MATRIX", QUAT_interpL);

INCLUDE_ASM("asm/nonmatchings/game/MATRIX", CUR_MATRIX_Unit);

INCLUDE_ASM("asm/nonmatchings/game/MATRIX", CUR_MATRIX_Unit4s);

INCLUDE_ASM("asm/nonmatchings/game/MATRIX", CUR_MATRIX_Set);

INCLUDE_ASM("asm/nonmatchings/game/MATRIX", CUR_MATRIX_Get);

INCLUDE_ASM("asm/nonmatchings/game/MATRIX", CUR_MATRIX_GetT);

INCLUDE_ASM("asm/nonmatchings/game/MATRIX", CUR_MATRIX_SetT);

INCLUDE_ASM("asm/nonmatchings/game/MATRIX", CUR_MATRIX_SetR);

INCLUDE_ASM("asm/nonmatchings/game/MATRIX", CUR_MATRIX_4s3);

INCLUDE_ASM("asm/nonmatchings/game/MATRIX", CUR_MATRIX_Txyz4s);

INCLUDE_ASM("asm/nonmatchings/game/MATRIX", CUR_MATRIX_Rx4s);

INCLUDE_ASM("asm/nonmatchings/game/MATRIX", CUR_MATRIX_Ry4s);

INCLUDE_ASM("asm/nonmatchings/game/MATRIX", CUR_MATRIX_Rz4s);

INCLUDE_ASM("asm/nonmatchings/game/MATRIX", CUR_MATRIX_Rzyx4s);

INCLUDE_ASM("asm/nonmatchings/game/MATRIX", CUR_MATRIX_Sxyz4s);
