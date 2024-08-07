#include "math.h"

#include "common.h"

// .sbss
u64 iRandSeed;

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

// Not particularly close
#if 1
INCLUDE_ASM("asm/nonmatchings/xgl/math", xglAtan2);
#else
f32 xglAtan2(f32 x, f32 y)
{
    s32 unk = 0;
    f32 f1;
    f32 f2;

    if (x == 0.0f)
    {
        if (0.0f <= y)
        {
            return 0.0f;
        }
        if (0.0f > x)
        {
            return D_004D8820;
        }
        return D_004D8824;
    }

    if (y == 0.0f)
    {
        if (x < 0.0f)
        {
            return D_004D882C;
        }
        return D_004D8828;
    }

    if (0.0f <= x)
    {
        if (y < 0.0f)
        {
            unk = 1;
        }
    }
    else
    {
        if (y < 0.0f)
        {
            unk = 3;
        }
        else
        {
            unk = 2;
        }
    }

    x = fabsf(x);
    y = fabsf(y);

    if (y < x)
    {
        f1 = y / x;
    }
    else
    {
        f1 = x / y;
    }
    f2 = f1 * f1;

    f1 =
        ((((((((D_004D881C * f2 - D_004D8830) * f2 + D_004D8834) * f2 - D_004D8838) * f2 + D_004D883C
            ) * f2 -
            D_004D8840) *
               f2 +
           D_004D8844) *
              f2 -
          D_004D8848) *
             f2 +
         1.0) *
        f1;

    if (y < x)
    {
        f1 = D_004D884C - f1;
    }
    if (unk == 1)
    {
        f1 = D_004D8850 - f1;
    }
    if (unk == 2)
    {
        f1 = -f1;
    }
    if (unk == 3)
    {
        return f1;
    }

    return f1 - D_004D8854;
}
#endif

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

void xglVectorDiv(xglVector* out, xglVector* a, xglVector* b)
{
    out->x = a->x / b->x;
    out->y = a->y / b->y;
    out->z = a->z / b->z;
    out->w = a->w / b->w;
}

void xglVectorDivXYZ(xglVector* out, xglVector* a, xglVector* b)
{
    out->x = a->x / b->x;
    out->y = a->y / b->y;
    out->z = a->z / b->z;
    out->w = a->w;
}

void xglVectorMulAdd(xglVector* out, xglVector* a, xglVector* mul, xglVector* add)
{
    out->x = a->x * mul->x + add->x;
    out->y = a->y * mul->y + add->y;
    out->z = a->z * mul->z + add->z;
    out->w = a->w * mul->w + add->w;
}

void xglVectorMulAddXYZ(xglVector* out, xglVector* a, xglVector* mul, xglVector* add)
{
    out->x = a->x * mul->x + add->x;
    out->y = a->y * mul->y + add->y;
    out->z = a->z * mul->z + add->z;
    out->w = a->w;
}

void xglVectorMulSub(xglVector* out, xglVector* a, xglVector* mul, xglVector* sub)
{
    out->x = a->x * mul->x - sub->x;
    out->y = a->y * mul->y - sub->y;
    out->z = a->z * mul->z - sub->z;
    out->w = a->w * mul->w - sub->w;
}

void xglVectorMulSubXYZ(xglVector* out, xglVector* a, xglVector* mul, xglVector* sub)
{
    out->x = a->x * mul->x - sub->x;
    out->y = a->y * mul->y - sub->y;
    out->z = a->z * mul->z - sub->z;
    out->w = a->w;
}

void xglVectorDivAdd(xglVector* out, xglVector* a, xglVector* div, xglVector* add)
{
    out->x = a->x / div->x + add->x;
    out->y = a->y / div->y + add->y;
    out->z = a->z / div->z + add->z;
    out->w = a->w / div->w + add->w;
}

void xglVectorDivAddXYZ(xglVector* out, xglVector* a, xglVector* div, xglVector* add)
{
    out->x = a->x / div->x + add->x;
    out->y = a->y / div->y + add->y;
    out->z = a->z / div->z + add->z;
    out->w = a->w;
}

void xglVectorDivSub(xglVector* out, xglVector* a, xglVector* div, xglVector* sub)
{
    out->x = a->x / div->x - sub->x;
    out->y = a->y / div->y - sub->y;
    out->z = a->z / div->z - sub->z;
    out->w = a->w / div->w - sub->w;
}

void xglVectorDivSubXYZ(xglVector* out, xglVector* a, xglVector* div, xglVector* sub)
{
    out->x = a->x / div->x - sub->x;
    out->y = a->y / div->y - sub->y;
    out->z = a->z / div->z - sub->z;
    out->w = a->w;
}

void xglVectorScale(f32 s, xglVector* out, xglVector* a)
{
    out->x = a->x * s;
    out->y = a->y * s;
    out->z = a->z * s;
    out->w = a->w * s;
}

void xglVectorScaleXYZ(f32 s, xglVector* out, xglVector* a)
{
    out->x = a->x * s;
    out->y = a->y * s;
    out->z = a->z * s;
    out->w = a->w;
}

void xglVectorScaleAdd(f32 s, xglVector* out, xglVector* scale, xglVector* add)
{
    out->x = scale->x * s + add->x;
    out->y = scale->y * s + add->y;
    out->z = scale->z * s + add->z;
    out->w = scale->w * s + add->w;
}

void xglVectorScaleAddXYZ(f32 s, xglVector* out, xglVector* scale, xglVector* add)
{
    out->x = scale->x * s + add->x;
    out->y = scale->y * s + add->y;
    out->z = scale->z * s + add->z;
    out->w = scale->w;
}

void xglVectorScaleSub(f32 s, xglVector* out, xglVector* scale, xglVector* sub)
{
    out->x = scale->x * s - sub->x;
    out->y = scale->y * s - sub->y;
    out->z = scale->z * s - sub->z;
    out->w = scale->w * s - sub->w;
}

void xglVectorScaleSubXYZ(f32 s, xglVector* out, xglVector* scale, xglVector* sub)
{
    out->x = scale->x * s - sub->x;
    out->y = scale->y * s - sub->y;
    out->z = scale->z * s - sub->z;
    out->w = scale->w;
}

void xglVectorInter(f32 t, xglVector* out, xglVector* from, xglVector* to)
{
    out->x = (to->x - from->x) * t + from->x;
    out->y = (to->y - from->y) * t + from->y;
    out->z = (to->z - from->z) * t + from->z;
    out->w = (to->w - from->w) * t + from->w;
}

void xglVectorInterXYZ(f32 t, xglVector* out, xglVector* from, xglVector* to)
{
    out->x = (to->x - from->x) * t + from->x;
    out->y = (to->y - from->y) * t + from->y;
    out->z = (to->z - from->z) * t + from->z;
    out->w = to->w;
}

void xglVectorInner(float* out, xglVector* a, xglVector* b)
{
    *out = a->x * b->x;
    *out += a->y * b->y;
    *out += a->z * b->z;
}

f32 xglVectorInner4(xglVector* a, xglVector* b)
{
    return a->x * b->x + a->y * b->y + a->z * b->z + a->w * b->w;
}

void xglVectorOuter(xglVector* out, xglVector* a, xglVector* b)
{
    out->x = a->y * b->z - a->z * b->y;
    out->y = a->z * b->x - a->x * b->z;
    out->z = a->x * b->y - a->y * b->x;
    out->w = a->w;
}

INCLUDE_ASM("asm/nonmatchings/xgl/math", xglVectorLength);

INCLUDE_ASM("asm/nonmatchings/xgl/math", xglPointLength);

INCLUDE_ASM("asm/nonmatchings/xgl/math", xglPointLengthXZ);

INCLUDE_ASM("asm/nonmatchings/xgl/math", xglVectorNormal);

// Equivalent: missing random nop
#if 1
INCLUDE_ASM("asm/nonmatchings/xgl/math", xglVectorClamp);
#else
void xglVectorClamp(f32 min, f32 max, xglVector* out, xglVector* in)
{
    out->x = in->x < min ? min : (in->x > max ? max : in->x);
    out->y = in->y < min ? min : (in->y > max ? max : in->y);
    out->z = in->z < min ? min : (in->z > max ? max : in->z);
    out->w = in->w < min ? min : (in->w > max ? max : in->w);
}
#endif

void xglVectorClampXYZ(f32 min, f32 max, xglVector* out, xglVector* in)
{
    out->x = in->x < min ? min : (in->x > max ? max : in->x);
    out->y = in->y < min ? min : (in->y > max ? max : in->y);
    out->z = in->z < min ? min : (in->z > max ? max : in->z);
    out->w = in->w;
}

INCLUDE_ASM("asm/nonmatchings/xgl/math", xglPlaneParameter);

INCLUDE_ASM("asm/nonmatchings/xgl/math", xglVectorMulMat);

// FIXME: Make this a real struct when we know what's going on
typedef struct
{
    u8 pad[0x70];
    u32 unk_70;
    u8 pad2[0xc];
    u32 unk_80;
    u8 pad3[0x470 - 0x84];
    u32 unk_470;
} UnkCamera;

f32 xglRotTransPers(xglVector* param_1, xglVector* param_2, xglVector* param_3, s32 cameraNum)
{
    UnkCamera* cam;

    xglMatrixStackPush();
    cam = xglStudioGetCamera2(cameraNum);
    xglMatrixStackLoad(&cam->unk_470);
    if (param_2 != NULL)
    {
        xglMatrixStackMul(param_2);
    }
    xglMatrixStackRTPS(param_1, param_3, &cam->unk_80, &cam->unk_70);
    xglMatrixStackPop(1);
    return param_1->w;
}

void xglRotTransPersN(
    xglVector* param_1, xglVector* param_2, xglVector* param_3, s32 n, s32 cameraNum
)
{
    UnkCamera* cam;

    xglMatrixStackPush();
    cam = xglStudioGetCamera2(cameraNum);
    xglMatrixStackLoad(&cam->unk_470);
    if (param_2 != NULL)
    {
        xglMatrixStackMul(param_2);
    }
    while (n > 0)
    {
        n--;
        xglMatrixStackRTPS(param_1, param_3, &cam->unk_80, &cam->unk_70);
        param_1++;
        param_3++;
    }
    xglMatrixStackPop(1);
    return;
}

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

#if 1
INCLUDE_ASM("asm/nonmatchings/xgl/math", xglMatrix2Quaternion);
#else
void xglMatrix2Quaternion(xglVector* vec, xglMatrix* mat)
{
    f32 xyz = mat->x.x + mat->y.y + mat->z.z;
    f32 w;
    if (xyz > 0.0f)
    {
        w = sqrtf(xyz + 1.0f) * 0.5f;
        vec->w = w;
        w = 0.5f / (w * w);
        vec->x = (mat->y.z - mat->z.y) * w;
        vec->y = (mat->z.x - mat->x.z) * w;
        vec->z = (mat->x.y - mat->y.x) * w;
        return;
    }
}
#endif

INCLUDE_ASM("asm/nonmatchings/xgl/math", xglQuaternion2Matrix);

INCLUDE_ASM("asm/nonmatchings/xgl/math", xglQuaternionInterpolateLinear);

void xglRandSeedInit()
{
    iRandSeed = 0x12345678;
}

INCLUDE_ASM("asm/nonmatchings/xgl/math", xglGeometryInit);

u16 xglSRand()
{
    u64 val = 0x41c64e6d;
    val = __muldi3(iRandSeed, val);
    iRandSeed = val + 0x3039U;
    return val + 0x3039U >> 0x10 & 0x7FFF;
}

INCLUDE_ASM("asm/nonmatchings/xgl/math", xglLRand);

INCLUDE_ASM("asm/nonmatchings/xgl/math", xglFRand);

INCLUDE_ASM("asm/nonmatchings/xgl/math", xglFSrand);

#if 1
INCLUDE_ASM("asm/nonmatchings/xgl/math", F2I);
#else
s32 F2I(f32 f)
{
    return f;
}
#endif

// Equivalent: Missing extra nop.
#if 1
// INCLUDE_ASM("asm/nonmatchings/xgl/math", I2F);
#else
f32 I2F(s32 i)
{
    return i;
}
#endif

INCLUDE_ASM("asm/nonmatchings/xgl/math", xglSin);

INCLUDE_ASM("asm/nonmatchings/xgl/math", xglCos);
