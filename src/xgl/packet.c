#include "common.h"

// .sbss
u32 pCurrentPacket;
u32 pSendPacket;

INCLUDE_ASM("asm/nonmatchings/xgl/packet", xglPacketTextureTrans);

INCLUDE_ASM("asm/nonmatchings/xgl/packet", xglPacketInterpolate);

INCLUDE_ASM("asm/nonmatchings/xgl/packet", xglPacketGetCurrent);

INCLUDE_ASM("asm/nonmatchings/xgl/packet", xglPacketInit);

INCLUDE_ASM("asm/nonmatchings/xgl/packet", xglPacketMove);

INCLUDE_ASM("asm/nonmatchings/xgl/packet", xglPacketSend);
