#include "common.h"

// .sdata
u32 ctrlCodeFlags;

// .sbss
u32 rubyX1;
u32 rubyX2;
u32 rubyY;
u32 cnvCW;
u32 cnvCH;

INCLUDE_ASM("asm/nonmatchings/game/MSG", MSG_init);

INCLUDE_ASM("asm/nonmatchings/game/MSG", MSG_print2);

void MSG_send(void) {
}

INCLUDE_ASM("asm/nonmatchings/game/MSG", MSG_getSize);

INCLUDE_ASM("asm/nonmatchings/game/MSG", MSG_dump);

INCLUDE_ASM("asm/nonmatchings/game/MSG", MSG_queueReset);

INCLUDE_ASM("asm/nonmatchings/game/MSG", MSG_queueGetInfo);

INCLUDE_ASM("asm/nonmatchings/game/MSG", MSG_queuePop);

INCLUDE_ASM("asm/nonmatchings/game/MSG", MSG_copyln);

INCLUDE_ASM("asm/nonmatchings/game/MSG", MSG_queuePush);

INCLUDE_ASM("asm/nonmatchings/game/MSG", matchBracket);

INCLUDE_ASM("asm/nonmatchings/game/MSG", MIF2_dummy);

INCLUDE_ASM("asm/nonmatchings/game/MSG", MSG_setArgs);

INCLUDE_ASM("asm/nonmatchings/game/MSG", rubyFont);

INCLUDE_ASM("asm/nonmatchings/game/MSG", MIF2_ruby);

INCLUDE_ASM("asm/nonmatchings/game/MSG", MIF2_font);

INCLUDE_ASM("asm/nonmatchings/game/MSG", MIF2_color);

INCLUDE_ASM("asm/nonmatchings/game/MSG", MIF2_label);

INCLUDE_ASM("asm/nonmatchings/game/MSG", MIF2_clear);

INCLUDE_ASM("asm/nonmatchings/game/MSG", MIF2_close);

INCLUDE_ASM("asm/nonmatchings/game/MSG", MIF2_waitkey);

INCLUDE_ASM("asm/nonmatchings/game/MSG", MIF2_wait);

INCLUDE_ASM("asm/nonmatchings/game/MSG", MIF2_gaiji);

INCLUDE_ASM("asm/nonmatchings/game/MSG", MIF2_code);

INCLUDE_ASM("asm/nonmatchings/game/MSG", findMsgFunc);

INCLUDE_ASM("asm/nonmatchings/game/MSG", MSG_convert);

INCLUDE_ASM("asm/nonmatchings/game/MSG", MBUF_init);

INCLUDE_ASM("asm/nonmatchings/game/MSG", MBUF_create2);

INCLUDE_ASM("asm/nonmatchings/game/MSG", MBUF_create);

INCLUDE_ASM("asm/nonmatchings/game/MSG", MBUF_dispose);

INCLUDE_ASM("asm/nonmatchings/game/MSG", _copyCTRLCode);

INCLUDE_ASM("asm/nonmatchings/game/MSG", _skipCTRLCode);
