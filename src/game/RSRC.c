#include "common.h"

// .sdata
u32 infoIndex;
u32 infoLength;
u32 rsrcDefaultPath;

INCLUDE_ASM("asm/nonmatchings/game/RSRC", RSRC_inactiveSource);

INCLUDE_ASM("asm/nonmatchings/game/RSRC", RSRC_create);

INCLUDE_ASM("asm/nonmatchings/game/RSRC", RSRC_setPrintParam);

INCLUDE_ASM("asm/nonmatchings/game/RSRC", RSRC_info);

INCLUDE_ASM("asm/nonmatchings/game/RSRC", RSRC_getDefaultPath);

INCLUDE_ASM("asm/nonmatchings/game/RSRC", RSRC_setDefaultPath);

INCLUDE_ASM("asm/nonmatchings/game/RSRC", RSRC_init);

INCLUDE_ASM("asm/nonmatchings/game/RSRC", RSRC_check);

INCLUDE_ASM("asm/nonmatchings/game/RSRC", RSRC_alloc);

INCLUDE_ASM("asm/nonmatchings/game/RSRC", RSRC_searchFile);

INCLUDE_ASM("asm/nonmatchings/game/RSRC", isLeave);

INCLUDE_ASM("asm/nonmatchings/game/RSRC", RSRC_dispose);

INCLUDE_ASM("asm/nonmatchings/game/RSRC", RSRC_getItemID);

INCLUDE_ASM("asm/nonmatchings/game/RSRC", RSRC_getItem2);

INCLUDE_ASM("asm/nonmatchings/game/RSRC", RSRC_getItem);

INCLUDE_ASM("asm/nonmatchings/game/RSRC", RSRC_loadFileSub);

INCLUDE_ASM("asm/nonmatchings/game/RSRC", RSRC_loadFile2);

INCLUDE_ASM("asm/nonmatchings/game/RSRC", RSRC_loadFile);

INCLUDE_ASM("asm/nonmatchings/game/RSRC", RSRC_getDirtyItem);
