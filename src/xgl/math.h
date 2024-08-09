#ifndef XGL_MATH_H
#define XGL_MATH_H

#include "common.h"

#define PI 3.1415927

// ASSUMPTION: They may have used this everywhere/alot and just ignored the w for Vec3's?
typedef struct
{
    f32 x;
    f32 y;
    f32 z;
    f32 w;
} xglVector;

typedef struct
{
    xglVector x;
    xglVector y;
    xglVector z;
    xglVector pos;
} xglMatrix;

#endif
