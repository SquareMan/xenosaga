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

INCLUDE_ASM("asm/nonmatchings/xgl/hdd", Judge_MakeNewSavedata);

INCLUDE_ASM("asm/nonmatchings/xgl/hdd", xglHddMcCheckYourSaves);

INCLUDE_ASM("asm/nonmatchings/xgl/hdd", xglHddMcCheckCore);

INCLUDE_ASM("asm/nonmatchings/xgl/hdd", xglHddMcCheck);

INCLUDE_ASM("asm/nonmatchings/xgl/hdd", xglHddMcGetFree);

INCLUDE_ASM("asm/nonmatchings/xgl/hdd", create_file);

INCLUDE_ASM("asm/nonmatchings/xgl/hdd", xglHddMcCreate);

INCLUDE_ASM("asm/nonmatchings/xgl/hdd", xglHddMcSave);

INCLUDE_ASM("asm/nonmatchings/xgl/hdd", xglHddUninstall);

INCLUDE_ASM("asm/nonmatchings/xgl/hdd", xglHddInstallReadCB);

INCLUDE_ASM("asm/nonmatchings/xgl/hdd", xglHddInstall);

INCLUDE_ASM("asm/nonmatchings/xgl/hdd", xglHddActivate);

INCLUDE_ASM("asm/nonmatchings/xgl/hdd", decrypt);

INCLUDE_ASM("asm/nonmatchings/xgl/hdd", xglHddMount);
