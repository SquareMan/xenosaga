#include "common.h"

//.sdata
u8 GameMovieTransparent;
u8 GameMovieAlpha;
u8 GameMovieFrame;

INCLUDE_ASM("asm/nonmatchings/GameMovie", GameMovieMain);

INCLUDE_ASM("asm/nonmatchings/GameMovie", GameMovieStop);

INCLUDE_ASM("asm/nonmatchings/GameMovie", GameMoviePlay);

INCLUDE_ASM("asm/nonmatchings/GameMovie", movie_skip);

INCLUDE_ASM("asm/nonmatchings/GameMovie", caption_nextline);

INCLUDE_ASM("asm/nonmatchings/GameMovie", caption_getparam);

INCLUDE_ASM("asm/nonmatchings/GameMovie", caption_convert);

INCLUDE_ASM("asm/nonmatchings/GameMovie", GameMpeg2Play);

INCLUDE_ASM("asm/nonmatchings/GameMovie", GameMovieInit);
