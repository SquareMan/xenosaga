#include "common.h"

// .lit4
f32 D_004D8978; // = 3.1415927;
f32 D_004D897C; // = 0.3;
f32 D_004D8980; // = 0.6;
f32 D_004D8984; // = 1.5707964;
f32 D_004D8988; // = 0.10000002;
f32 D_004D898C; // = 0.3;
f32 D_004D8990; // = 0.89999998;
f32 D_004D8994; // = 0.69999999;

INCLUDE_ASM("asm/nonmatchings/nml/filter", func_0023A290); // _CurSetMatrix

INCLUDE_ASM("asm/nonmatchings/nml/filter", func_0023A2A8); // _CurSetnviewScaleTrans

INCLUDE_ASM("asm/nonmatchings/nml/filter", func_0023A2B8); // _CurRotTransPersClip

INCLUDE_ASM("asm/nonmatchings/nml/filter", nmlModelSetFilterGunosys);

INCLUDE_ASM("asm/nonmatchings/nml/filter", nmlModelSetFilterStealth);

INCLUDE_ASM("asm/nonmatchings/nml/filter", _WeightToGlobalPlaceInit);

INCLUDE_ASM("asm/nonmatchings/nml/filter", _WeightToGlobalPlaceVec);

INCLUDE_ASM("asm/nonmatchings/nml/filter", _VectorLengthSQ);

INCLUDE_ASM("asm/nonmatchings/nml/filter", nmlFilterStealthMake);

INCLUDE_ASM("asm/nonmatchings/nml/filter", nmlFilterSetPacket);

INCLUDE_ASM("asm/nonmatchings/nml/filter", nmlFilterSetFrameToBuffer);

INCLUDE_ASM("asm/nonmatchings/nml/filter", nmlFilterSetBufferToFrame);

INCLUDE_ASM("asm/nonmatchings/nml/filter", nmlFilterSetBufferRender);

INCLUDE_ASM("asm/nonmatchings/nml/filter", nmlFilterSetFrameAlphaClear);

INCLUDE_ASM("asm/nonmatchings/nml/filter", nmlFilterSetTexClear);

INCLUDE_ASM("asm/nonmatchings/nml/filter", nmlFilterBackClear);

INCLUDE_ASM("asm/nonmatchings/nml/filter", nmlFilterSetFlatRender);

INCLUDE_ASM("asm/nonmatchings/nml/filter", nmlFilterSetTexFillDraw);
