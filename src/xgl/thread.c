#include "common.h"

// .sbss
u32 iRotateSignal;
u32 iCurrentThread;

INCLUDE_ASM("asm/nonmatchings/xgl/thread", xglCreateSignal);

INCLUDE_ASM("asm/nonmatchings/xgl/thread", xglThreadRotate);

INCLUDE_ASM("asm/nonmatchings/xgl/thread", xglSleep);

INCLUDE_ASM("asm/nonmatchings/xgl/thread", xglThreadInitial);
