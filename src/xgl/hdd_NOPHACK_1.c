#include "common.h"

#include "main.h"

u8 HddActive;
u32 HddInstallCBparam;

INCLUDE_ASM("asm/nonmatchings/xgl/hdd_NOPHACK_1", xglHddMcCheckYourSaves);

INCLUDE_ASM("asm/nonmatchings/xgl/hdd_NOPHACK_1", xglHddMcCheckCore);

INCLUDE_ASM("asm/nonmatchings/xgl/hdd_NOPHACK_1", xglHddMcCheck);

INCLUDE_ASM("asm/nonmatchings/xgl/hdd_NOPHACK_1", xglHddMcGetFree);

INCLUDE_ASM("asm/nonmatchings/xgl/hdd_NOPHACK_1", create_file);

INCLUDE_ASM("asm/nonmatchings/xgl/hdd_NOPHACK_1", xglHddMcCreate);

INCLUDE_ASM("asm/nonmatchings/xgl/hdd_NOPHACK_1", xglHddMcSave);

INCLUDE_ASM("asm/nonmatchings/xgl/hdd_NOPHACK_1", xglHddUninstall);

INCLUDE_ASM("asm/nonmatchings/xgl/hdd_NOPHACK_1", xglHddInstallReadCB);

INCLUDE_ASM("asm/nonmatchings/xgl/hdd_NOPHACK_1", xglHddInstall);

INCLUDE_ASM("asm/nonmatchings/xgl/hdd_NOPHACK_1", xglHddActivate);

INCLUDE_ASM("asm/nonmatchings/xgl/hdd_NOPHACK_1", decrypt);

INCLUDE_ASM("asm/nonmatchings/xgl/hdd_NOPHACK_1", xglHddMount);
