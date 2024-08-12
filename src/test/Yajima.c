#include "common.h"

#include "main.h"

u8 D_004D9F60;
u32 D_004D9F64;
u32 D_004D9F68;
u32 D_004D9F6C;
u32 D_004D9F70;

u8 D_004D9F80;
u8 D_004D9F81;
u8 D_004D9F82;
u8 D_004D9F83;
u8 D_004D9F88;

u8 D_004DA370;

INCLUDE_ASM("asm/nonmatchings/test/Yajima", testfunc);

INCLUDE_ASM("asm/nonmatchings/test/Yajima", FontTestSub);

INCLUDE_ASM("asm/nonmatchings/test/Yajima", FontTestP0);

INCLUDE_ASM("asm/nonmatchings/test/Yajima", FontTestP1);

INCLUDE_ASM("asm/nonmatchings/test/Yajima", FontTestLine);

INCLUDE_ASM("asm/nonmatchings/test/Yajima", FontTestP2);

INCLUDE_ASM("asm/nonmatchings/test/Yajima", FontTest);

INCLUDE_ASM("asm/nonmatchings/test/Yajima", UmlDispTestSub);

INCLUDE_ASM("asm/nonmatchings/test/Yajima", UmlDispTest);

INCLUDE_ASM("asm/nonmatchings/test/Yajima", DatabaseTest);

INCLUDE_ASM("asm/nonmatchings/test/Yajima", XenoMovieCheck);

INCLUDE_ASM("asm/nonmatchings/test/Yajima", HddTestFormat);

INCLUDE_ASM("asm/nonmatchings/test/Yajima", HddTestShutdown);

INCLUDE_ASM("asm/nonmatchings/test/Yajima", HddTestHddFull);

INCLUDE_ASM("asm/nonmatchings/test/Yajima", HddTestMountCommon);

INCLUDE_ASM("asm/nonmatchings/test/Yajima", HddTestUnmountCommon);

INCLUDE_ASM("asm/nonmatchings/test/Yajima", HddTestMakeYourSaves);

INCLUDE_ASM("asm/nonmatchings/test/Yajima", HddTest1024Save);

INCLUDE_ASM("asm/nonmatchings/test/Yajima", HddTestDummyFolder);

INCLUDE_ASM("asm/nonmatchings/test/Yajima", HddTestDummySave);

INCLUDE_ASM("asm/nonmatchings/test/Yajima", HddTestMakeYS);

INCLUDE_ASM("asm/nonmatchings/test/Yajima", HddTest);

INCLUDE_ASM("asm/nonmatchings/test/Yajima", mt_GetPortName);

INCLUDE_ASM("asm/nonmatchings/test/Yajima", MemcardTest);

INCLUDE_ASM("asm/nonmatchings/test/Yajima", xtxdec_nextline);

INCLUDE_ASM("asm/nonmatchings/test/Yajima", xtxdec_getdec);

INCLUDE_ASM("asm/nonmatchings/test/Yajima", xtxdec_put4byte);

INCLUDE_ASM("asm/nonmatchings/test/Yajima", xtxdec_sub);

INCLUDE_ASM("asm/nonmatchings/test/Yajima", xtxdec_sleep);

INCLUDE_ASM("asm/nonmatchings/test/Yajima", xtxdec_error);

INCLUDE_ASM("asm/nonmatchings/test/Yajima", XtxDecode);

INCLUDE_ASM("asm/nonmatchings/test/Yajima", Dummy);

INCLUDE_ASM("asm/nonmatchings/test/Yajima", YajimaTest);
