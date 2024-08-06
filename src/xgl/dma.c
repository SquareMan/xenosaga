#include "common.h"

u32 mfifo_drain;

INCLUDE_ASM("asm/nonmatchings/xgl/dma", xglDmaDirectNormal);

INCLUDE_ASM("asm/nonmatchings/xgl/dma", xglDmaDirectSrcChain);

INCLUDE_ASM("asm/nonmatchings/xgl/dma", xglDmaBufferReset);

INCLUDE_ASM("asm/nonmatchings/xgl/dma", xglDmaBufferCnt);

INCLUDE_ASM("asm/nonmatchings/xgl/dma", xglDmaBufferRef);

INCLUDE_ASM("asm/nonmatchings/xgl/dma", xglDmaBufferCall);

INCLUDE_ASM("asm/nonmatchings/xgl/dma", xglDmaBufferRequest);

INCLUDE_ASM("asm/nonmatchings/xgl/dma", xglDmaMFIFOSetup);

INCLUDE_ASM("asm/nonmatchings/xgl/dma", xglDmaMFIFOKick);

INCLUDE_ASM("asm/nonmatchings/xgl/dma", xglDmaMFIFOLeave);

void xglDmaInitial(void) {
}
