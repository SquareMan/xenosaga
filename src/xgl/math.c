#include "common.h"

// .sbss
u8 iRandSeed;

// .lit4
f32 D_004D881C; // = 0.0028662258;
f32 D_004D8820; // = -3.1415927;
f32 D_004D8824; // = 3.1415927;
f32 D_004D8828; // = 1.5707964;
f32 D_004D882C; // = -1.5707964;
f32 D_004D8830; // = 0.016165737;
f32 D_004D8834; // = 0.042909615;
f32 D_004D8838; // = 0.075289637;
f32 D_004D883C; // = 0.10656264;
f32 D_004D8840; // = 0.14208899;
f32 D_004D8844; // = 0.19993551;
f32 D_004D8848; // = 0.33333147;
f32 D_004D884C; // = 1.5707964;
f32 D_004D8850; // = 3.1415927;
f32 D_004D8854; // = 3.1415927;
f32 D_004D8858; // = 0.1;

INCLUDE_ASM("asm/nonmatchings/xgl/math", xglAtan2);

INCLUDE_ASM("asm/nonmatchings/xgl/math", xglMemCopy64);

INCLUDE_ASM("asm/nonmatchings/xgl/math", xglMemCopy64b);

INCLUDE_ASM("asm/nonmatchings/xgl/math", xglMemCopy16);

INCLUDE_ASM("asm/nonmatchings/xgl/math", xglMemCopy16b);

INCLUDE_ASM("asm/nonmatchings/xgl/math", xglMemCopy8);

INCLUDE_ASM("asm/nonmatchings/xgl/math", xglMemCopy8b);

INCLUDE_ASM("asm/nonmatchings/xgl/math", xglMemCopy4);

INCLUDE_ASM("asm/nonmatchings/xgl/math", xglMemCopy4b);

INCLUDE_ASM("asm/nonmatchings/xgl/math", xglMemCopy2);

INCLUDE_ASM("asm/nonmatchings/xgl/math", xglMemCopy2b);

INCLUDE_ASM("asm/nonmatchings/xgl/math", xglVectorDiv);

INCLUDE_ASM("asm/nonmatchings/xgl/math", xglVectorDivXYZ);

INCLUDE_ASM("asm/nonmatchings/xgl/math", xglVectorMulAdd);

INCLUDE_ASM("asm/nonmatchings/xgl/math", xglVectorMulAddXYZ);

INCLUDE_ASM("asm/nonmatchings/xgl/math", xglVectorMulSub);

INCLUDE_ASM("asm/nonmatchings/xgl/math", xglVectorMulSubXYZ);

INCLUDE_ASM("asm/nonmatchings/xgl/math", xglVectorDivAdd);

INCLUDE_ASM("asm/nonmatchings/xgl/math", xglVectorDivAddXYZ);

INCLUDE_ASM("asm/nonmatchings/xgl/math", xglVectorDivSub);

INCLUDE_ASM("asm/nonmatchings/xgl/math", xglVectorDivSubXYZ);

INCLUDE_ASM("asm/nonmatchings/xgl/math", xglVectorScale);

INCLUDE_ASM("asm/nonmatchings/xgl/math", xglVectorScaleXYZ);

INCLUDE_ASM("asm/nonmatchings/xgl/math", xglVectorScaleAdd);

INCLUDE_ASM("asm/nonmatchings/xgl/math", xglVectorScaleAddXYZ);

INCLUDE_ASM("asm/nonmatchings/xgl/math", xglVectorScaleSub);

INCLUDE_ASM("asm/nonmatchings/xgl/math", xglVectorScaleSubXYZ);

INCLUDE_ASM("asm/nonmatchings/xgl/math", xglVectorInter);

INCLUDE_ASM("asm/nonmatchings/xgl/math", xglVectorInterXYZ);

INCLUDE_ASM("asm/nonmatchings/xgl/math", xglVectorInner);

INCLUDE_ASM("asm/nonmatchings/xgl/math", xglVectorInner4);

INCLUDE_ASM("asm/nonmatchings/xgl/math", xglVectorOuter);

INCLUDE_ASM("asm/nonmatchings/xgl/math", xglVectorLength);

INCLUDE_ASM("asm/nonmatchings/xgl/math", xglPointLength);

INCLUDE_ASM("asm/nonmatchings/xgl/math", xglPointLengthXZ);

INCLUDE_ASM("asm/nonmatchings/xgl/math", xglVectorNormal);

INCLUDE_ASM("asm/nonmatchings/xgl/math", xglVectorClamp);

INCLUDE_ASM("asm/nonmatchings/xgl/math", xglVectorClampXYZ);

INCLUDE_ASM("asm/nonmatchings/xgl/math", xglPlaneParameter);

INCLUDE_ASM("asm/nonmatchings/xgl/math", xglVectorMulMat);

INCLUDE_ASM("asm/nonmatchings/xgl/math", xglRotTransPers);

INCLUDE_ASM("asm/nonmatchings/xgl/math", xglRotTransPersN);

INCLUDE_ASM("asm/nonmatchings/xgl/math", xglMatrixUnit);

INCLUDE_ASM("asm/nonmatchings/xgl/math", xglMatrixUnit4s);

INCLUDE_ASM("asm/nonmatchings/xgl/math", xglMatrixMul);

INCLUDE_ASM("asm/nonmatchings/xgl/math", xglMatrixReverse);

INCLUDE_ASM("asm/nonmatchings/xgl/math", xglMatrixInverse);

INCLUDE_ASM("asm/nonmatchings/xgl/math", xglMatrixScale);

INCLUDE_ASM("asm/nonmatchings/xgl/math", xglMatrixTrans);

INCLUDE_ASM("asm/nonmatchings/xgl/math", xglMatrixRotV);

INCLUDE_ASM("asm/nonmatchings/xgl/math", xglMatrixRotX);

INCLUDE_ASM("asm/nonmatchings/xgl/math", xglMatrixRotY);

INCLUDE_ASM("asm/nonmatchings/xgl/math", xglMatrixRotZ);

INCLUDE_ASM("asm/nonmatchings/xgl/math", xglMatrixFrustum);

INCLUDE_ASM("asm/nonmatchings/xgl/math", xglMatrixStackUnit);

INCLUDE_ASM("asm/nonmatchings/xgl/math", xglMatrixStackMul);

INCLUDE_ASM("asm/nonmatchings/xgl/math", xglMatrixStackReverse);

INCLUDE_ASM("asm/nonmatchings/xgl/math", xglMatrixStackInverse);

INCLUDE_ASM("asm/nonmatchings/xgl/math", xglMatrixStackScale);

INCLUDE_ASM("asm/nonmatchings/xgl/math", xglMatrixStackTrans);

INCLUDE_ASM("asm/nonmatchings/xgl/math", xglMatrixStackRotV);

INCLUDE_ASM("asm/nonmatchings/xgl/math", xglMatrixStackRotX);

INCLUDE_ASM("asm/nonmatchings/xgl/math", xglMatrixStackRotY);

INCLUDE_ASM("asm/nonmatchings/xgl/math", xglMatrixStackRotZ);

INCLUDE_ASM("asm/nonmatchings/xgl/math", xglMatrixStackFrustum);

INCLUDE_ASM("asm/nonmatchings/xgl/math", xglMatrixStackSave);

INCLUDE_ASM("asm/nonmatchings/xgl/math", xglMatrixStackLoad);

INCLUDE_ASM("asm/nonmatchings/xgl/math", xglMatrixStackPushUnit);

INCLUDE_ASM("asm/nonmatchings/xgl/math", xglMatrixStackPush);

INCLUDE_ASM("asm/nonmatchings/xgl/math", xglMatrixStackPop);

INCLUDE_ASM("asm/nonmatchings/xgl/math", xglMatrixStackMulVector);

INCLUDE_ASM("asm/nonmatchings/xgl/math", xglMatrixStackRTPS);

INCLUDE_ASM("asm/nonmatchings/xgl/math", xglMatrix2Quaternion);

INCLUDE_ASM("asm/nonmatchings/xgl/math", xglQuaternion2Matrix);

INCLUDE_ASM("asm/nonmatchings/xgl/math", xglQuaternionInterpolateLinear);

INCLUDE_ASM("asm/nonmatchings/xgl/math", xglRandSeedInit);

INCLUDE_ASM("asm/nonmatchings/xgl/math", xglGeometryInit);

INCLUDE_ASM("asm/nonmatchings/xgl/math", xglSRand);

INCLUDE_ASM("asm/nonmatchings/xgl/math", xglLRand);

INCLUDE_ASM("asm/nonmatchings/xgl/math", xglFRand);

INCLUDE_ASM("asm/nonmatchings/xgl/math", xglFSrand);

INCLUDE_ASM("asm/nonmatchings/xgl/math", F2I);

INCLUDE_ASM("asm/nonmatchings/xgl/math", I2F);

INCLUDE_ASM("asm/nonmatchings/xgl/math", xglSin);

INCLUDE_ASM("asm/nonmatchings/xgl/math", xglCos);
