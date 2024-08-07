#include "common.h"

#include "main.h"

// .sbss
u8 D_004DC6DF;

// .sdata
const char SoundEffectPath[];
const char SoundSequencePath[];
u8 D_004DC340;
u8 D_004DC348;
u8 D_004DC350;

// .lit4
f32 D_004D87F4; // = 1.5707964;
f32 D_004D87F8; // = 3.1415927;
f32 D_004D87FC; // = 6.2831855;
f32 D_004D8800; // = 3.1415927;

INCLUDE_ASM("asm/nonmatchings/xgl/sound", xglSoundWaitDma);

INCLUDE_ASM("asm/nonmatchings/xgl/sound", xglSoundSendSwd);

INCLUDE_ASM("asm/nonmatchings/xgl/sound", xglSoundSendSmd2);

INCLUDE_ASM("asm/nonmatchings/xgl/sound", xglSoundSendSmd);

INCLUDE_ASM("asm/nonmatchings/xgl/sound", xglSoundSendSed);

INCLUDE_ASM("asm/nonmatchings/xgl/sound", xglSoundLoadSwd);

INCLUDE_ASM("asm/nonmatchings/xgl/sound", xglSoundSendEffect);

INCLUDE_ASM("asm/nonmatchings/xgl/sound", xglSoundLoadEffect);

INCLUDE_ASM("asm/nonmatchings/xgl/sound", xglSoundLoadRequestSmd);

INCLUDE_ASM("asm/nonmatchings/xgl/sound", xglSoundSequenceNormal3);

INCLUDE_ASM("asm/nonmatchings/xgl/sound", xglSoundSequenceNormal2);

INCLUDE_ASM("asm/nonmatchings/xgl/sound", xglSoundSequenceNormal);

INCLUDE_ASM("asm/nonmatchings/xgl/sound", xglSoundSequenceFadeOut2);

INCLUDE_ASM("asm/nonmatchings/xgl/sound", xglSoundSequenceFadeOut);

INCLUDE_ASM("asm/nonmatchings/xgl/sound", xglSoundSequenceStop2);

INCLUDE_ASM("asm/nonmatchings/xgl/sound", xglSoundSequenceStop);

INCLUDE_ASM("asm/nonmatchings/xgl/sound", xglSoundEffectNormalDirect);

INCLUDE_ASM("asm/nonmatchings/xgl/sound", xglSoundEffectNormalID);

INCLUDE_ASM("asm/nonmatchings/xgl/sound", xglSoundEffectParamDirect);

INCLUDE_ASM("asm/nonmatchings/xgl/sound", xglSoundEffectParamID);

INCLUDE_ASM("asm/nonmatchings/xgl/sound", xglSoundEffectPosID);

INCLUDE_ASM("asm/nonmatchings/xgl/sound", xglSoundEffectStopDirect);

INCLUDE_ASM("asm/nonmatchings/xgl/sound", xglSoundEffectStopBank);

INCLUDE_ASM("asm/nonmatchings/xgl/sound", xglSoundEffectStopID);

INCLUDE_ASM("asm/nonmatchings/xgl/sound", xglSoundEffectCheckID);

INCLUDE_ASM("asm/nonmatchings/xgl/sound", xglSoundStreamOpenPcm);

INCLUDE_ASM("asm/nonmatchings/xgl/sound", xglSoundStreamOpenVagStereoParam);

INCLUDE_ASM("asm/nonmatchings/xgl/sound", xglSoundStreamOpenVagStereo);

INCLUDE_ASM("asm/nonmatchings/xgl/sound", xglSoundStreamOpenVagMultiParam);

INCLUDE_ASM("asm/nonmatchings/xgl/sound", xglSoundStreamOpenVagMulti);

INCLUDE_ASM("asm/nonmatchings/xgl/sound", xglSoundStreamStop);

INCLUDE_ASM("asm/nonmatchings/xgl/sound", xglSoundStreamMute);

INCLUDE_ASM("asm/nonmatchings/xgl/sound", stream_check);

INCLUDE_ASM("asm/nonmatchings/xgl/sound", xglSoundStreamMain);

INCLUDE_ASM("asm/nonmatchings/xgl/sound", xglMakeSePacket);

INCLUDE_ASM("asm/nonmatchings/xgl/sound", xglSendSePacket);

INCLUDE_ASM("asm/nonmatchings/xgl/sound", xglSoundReset);

INCLUDE_ASM("asm/nonmatchings/xgl/sound", xglSoundInitial);
