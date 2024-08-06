#include "common.h"

INCLUDE_ASM("asm/nonmatchings/xgl/task", xglTaskInitial);

INCLUDE_ASM("asm/nonmatchings/xgl/task", xglTaskEntryPrev);

INCLUDE_ASM("asm/nonmatchings/xgl/task", xglTaskEntryNext);

INCLUDE_ASM("asm/nonmatchings/xgl/task", xglTaskRemove);

INCLUDE_ASM("asm/nonmatchings/xgl/task", xglTaskWaitRemove);

INCLUDE_ASM("asm/nonmatchings/xgl/task", xglTaskExecute);
