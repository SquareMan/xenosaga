#include "common.h"

u32 ew_send_mode;
u32 D_004DA5C0;

INCLUDE_ASM("asm/nonmatchings/game/EW", EW_sprtSetCursorUV);

INCLUDE_ASM("asm/nonmatchings/game/EW", frame_init);

INCLUDE_ASM("asm/nonmatchings/game/EW", sprt_init);

INCLUDE_ASM("asm/nonmatchings/game/EW", mask_init);

INCLUDE_ASM("asm/nonmatchings/game/EW", EW_setDrawEnv);

INCLUDE_ASM("asm/nonmatchings/game/EW", EW_create);

INCLUDE_ASM("asm/nonmatchings/game/EW", EW_dispose);

INCLUDE_ASM("asm/nonmatchings/game/EW", EW_addComponent);

INCLUDE_ASM("asm/nonmatchings/game/EW", EW_drawContainer);

INCLUDE_ASM("asm/nonmatchings/game/EW", EW_drawComoponent);

INCLUDE_ASM("asm/nonmatchings/game/EW", EW_init);

INCLUDE_ASM("asm/nonmatchings/game/EW", EW_sendPacket);

INCLUDE_ASM("asm/nonmatchings/game/EW", EW_draw);

INCLUDE_ASM("asm/nonmatchings/game/EW", container_init);

INCLUDE_ASM("asm/nonmatchings/game/EW", mask_put);

INCLUDE_ASM("asm/nonmatchings/game/EW", sprt_put);

INCLUDE_ASM("asm/nonmatchings/game/EW", set_clip);

INCLUDE_ASM("asm/nonmatchings/game/EW", checkN2);

INCLUDE_ASM("asm/nonmatchings/game/EW", frame_put);

INCLUDE_ASM("asm/nonmatchings/game/EW", label_put);
