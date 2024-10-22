#include "common.h"

//.sdata
u8 GameMovieTransparent;
u8 GameMovieAlpha;
u8 GameMovieFrame;

INCLUDE_ASM("asm/nonmatchings/game/GameMovie", GameMovieMain);

INCLUDE_ASM("asm/nonmatchings/game/GameMovie", GameMovieStop);

INCLUDE_ASM("asm/nonmatchings/game/GameMovie", GameMoviePlay);

INCLUDE_ASM("asm/nonmatchings/game/GameMovie", movie_skip);

INCLUDE_ASM("asm/nonmatchings/game/GameMovie", caption_nextline);

INCLUDE_ASM("asm/nonmatchings/game/GameMovie", caption_getparam);

INCLUDE_ASM("asm/nonmatchings/game/GameMovie", caption_convert);

INCLUDE_ASM("asm/nonmatchings/game/GameMovie", GameMpeg2Play);

INCLUDE_ASM("asm/nonmatchings/game/GameMovie", GameMovieInit);
