#include "common.h"

#include "main.h"

u8 HddActive;
u32 HddInstallCBparam;

INCLUDE_ASM("asm/nonmatchings/xgl/hdd", xglHddDummyCB);

INCLUDE_ASM("asm/nonmatchings/xgl/hdd", xglHddCheckCore);

INCLUDE_ASM("asm/nonmatchings/xgl/hdd", xglHddCheck2);

INCLUDE_ASM("asm/nonmatchings/xgl/hdd", xglHddCheck);

INCLUDE_ASM("asm/nonmatchings/xgl/hdd", xglHddErrorScreen);

INCLUDE_ASM("asm/nonmatchings/xgl/hdd", xglHddMcLoadMount);

INCLUDE_ASM("asm/nonmatchings/xgl/hdd", xglHddMcUmount);

INCLUDE_ASM("asm/nonmatchings/xgl/hdd", make_fullpath);

INCLUDE_ASM("asm/nonmatchings/xgl/hdd", xglHddMcExist);

INCLUDE_ASM("asm/nonmatchings/xgl/hdd", xglHddMcLoadCore);

INCLUDE_ASM("asm/nonmatchings/xgl/hdd", xglHddMcLoad);

INCLUDE_ASM("asm/nonmatchings/xgl/hdd", Judge_MakeNewFolder);
