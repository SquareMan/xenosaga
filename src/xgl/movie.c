#include "common.h"

INCLUDE_ASM("asm/nonmatchings/xgl/movie", myDmaDirectFromIPU);

INCLUDE_ASM("asm/nonmatchings/xgl/movie", setD4_CHCR);

INCLUDE_ASM("asm/nonmatchings/xgl/movie", make_gstrans);

INCLUDE_ASM("asm/nonmatchings/xgl/movie", checkdma);

INCLUDE_ASM("asm/nonmatchings/xgl/movie", xglMovieOpen);

INCLUDE_ASM("asm/nonmatchings/xgl/movie", xglMoviePlay);

INCLUDE_ASM("asm/nonmatchings/xgl/movie", xglMovieClose);

INCLUDE_ASM("asm/nonmatchings/xgl/movie", xglMovieInfoInit);

INCLUDE_ASM("asm/nonmatchings/xgl/movie", xglMovieMakeXtxHeader);

INCLUDE_ASM("asm/nonmatchings/xgl/movie", fileRead);

INCLUDE_ASM("asm/nonmatchings/xgl/movie", fillBuff);

INCLUDE_ASM("asm/nonmatchings/xgl/movie", videoCallback);

INCLUDE_ASM("asm/nonmatchings/xgl/movie", audioCallback);

INCLUDE_ASM("asm/nonmatchings/xgl/movie", nodataCallback);

INCLUDE_ASM("asm/nonmatchings/xgl/movie", errorCallback);

INCLUDE_ASM("asm/nonmatchings/xgl/movie", xglMpeg2Open);

INCLUDE_ASM("asm/nonmatchings/xgl/movie", setLoadImageTags);

INCLUDE_ASM("asm/nonmatchings/xgl/movie", xglMpeg2Play);

INCLUDE_ASM("asm/nonmatchings/xgl/movie", xglMpeg2Close);

INCLUDE_ASM("asm/nonmatchings/xgl/movie", xglMpeg2InfoInit2);

INCLUDE_ASM("asm/nonmatchings/xgl/movie", xglMpeg2InfoInit);

INCLUDE_ASM("asm/nonmatchings/xgl/movie", xglMovieInit);
