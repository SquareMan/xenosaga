#include "common.h"

#include <eekernel.h>

// .sbss
u32 iRotateSignal;
u32 iCurrentThread;

typedef struct
{
    void* entry;
    void* stack;
    s32 stackSize;
    s32 initPriority;
    s32 id;
} UnkThreadEntry;

UnkThreadEntry asActiveThreadList[20];
UnkThreadEntry asSystemThreadList[4];

// Matches, Needs data migration
#if 1
INCLUDE_ASM("asm/nonmatchings/xgl/thread", xglCreateSignal);
#else
s32 xglCreateSignal()
{
    static struct SemaParam sSemaParam;
    sSemaParam.maxCount = 1;
    sSemaParam.initCount = 0;
    return CreateSema(&sSemaParam);
}
#endif

void xglThreadRotate()
{
    iRotateSignal = xglCreateSignal();

    while (TRUE)
    {
        WakeupThread(asActiveThreadList[iCurrentThread].id);
        WaitSema(iRotateSignal);
        iCurrentThread++;
        if (iCurrentThread >= 4) iCurrentThread = 0;
    }
}

void xglSleep()
{
    CancelWakeupThread(GetThreadId());
    SignalSema(iRotateSignal);
    SleepThread();
}

// WIP
#if 1
INCLUDE_ASM("asm/nonmatchings/xgl/thread", xglThreadInitial);
#else
void xglThreadInitial()
{
    static struct ThreadParam sThreadParam;
    void* next_stack = (void*)0x1f8000;
    void* gp = _gp;
    s32 i;

    for (i = 0; i < 4; i++)
    {
        // sThreadParam.entry = asSystemThreadList[i].entry;
        // asActiveThreadList[i].entry = sThreadParam.entry;
        // sThreadParam.stack = next_stack - sThreadParam.stackSize;
        // asActiveThreadList[i].stack = sThreadParam.stack;
        // sThreadParam.stackSize = asSystemThreadList[i].stackSize;
        // asActiveThreadList[i].stackSize = sThreadParam.stackSize;

        // asActiveThreadList[i].entry = sThreadParam.entry = asSystemThreadList[i].entry;
        // asActiveThreadList[i].stack = sThreadParam.stack = next_stack -
        // asSystemThreadList[i].stack; asActiveThreadList[i].stackSize = sThreadParam.stackSize =
        // asSystemThreadList[i].stackSize;

        sThreadParam.gpReg = gp;
        sThreadParam.initPriority = asSystemThreadList[i].initPriority;

        sThreadParam.entry = asActiveThreadList[i].entry = asSystemThreadList[i].entry;

        sThreadParam.stack = asActiveThreadList[i].stack = next_stack - asSystemThreadList[i].stack;
        sThreadParam.stackSize = asActiveThreadList[i].stackSize = asSystemThreadList[i].stackSize;

        asActiveThreadList[i].id = CreateThread(&sThreadParam);
        StartThread(asActiveThreadList[i].id, 0);
        next_stack -= asSystemThreadList[i].stackSize;
    }

    iCurrentThread = 0;
}
#endif
