#include "common.h"

// .sdata
u32 s_pMapLast;
u32 s_nCircleShadow;
u32 s_nParentBuf;
u32 s_nToumeiNum;
u32 s_nShadowVec;
u32 s_nMapShadowParts;
u32 s_fSortOffsetEntry;
u32 s_fSortOffset;
u32 s_nParent;
u32 s_nClip;
u32 s_nShapeNum;
u32 s_nDispVisible;
u32 s_nMapClip;
u32 s_nStencilVal;
u32 s_nCount;
u32 s_nPacketSignal;
u32 s_nModel;
u32 s_nBlocks;
u32 s_nDirect;
u32 s_nBlocksAlpha;
u32 s_nBlocksAlphaLast;
u32 s_nAnotherStudio;
u32 s_nUseStealth;
u32 s_nUseGnosys;
u32 s_nUseZwrite;
u32 s_nUseBackBuffer;
u32 s_nMapAlphaEntry;
u32 s_nEffectWrite;
u32 s_nMapLast;
u32 s_nFadeDoit;
u32 s_nPause;
u32 s_nMenu;
u32 s_nFrameLockOff;
u32 s_nMainCameraWarp;
u32 s_nRenderCancel;
u32 s_nRenderCancelOld;

// .sbss
u32 s_aTexOffset; // FIXME: looks like a Vec2 (UVs?)
u32 s_nAlphaGroup;
u32 s_nNonAlphaGroup;

// .lit4
f32 D_004D88D8; // = 1.0471976;
f32 D_004D88DC; // = 5.2359877;
f32 D_004D88E0; // = 0.001;
f32 D_004D88E4; // = 0.018999999;
f32 D_004D88E8; // = 0.0099999998;
f32 D_004D88EC; // = 0.1;
f32 D_004D88F0; // = 0.0099999998;
f32 D_004D88F4; // = 1.3;
f32 D_004D88F8; // = 62582.0;
f32 D_004D88FC; // = 147523.0;
f32 D_004D8900; // = 84941.0;
f32 D_004D8904; // = 10000.0;
f32 D_004D8908; // = 20000.0;
f32 D_004D890C; // = 147523.0;
f32 D_004D8910; // = 84941.0;
f32 D_004D8914; // = 62582.0;
f32 D_004D8918; // = 32582.0;
f32 D_004D891C; // = 0.0049999999;
f32 D_004D8920; // = 0.89999998;
f32 D_004D8924; // = 1.5707964;
f32 D_004D8928; // = 0.8;
f32 D_004D892C; // = 0.2;
f32 D_004D8930; // = 0.96799999;
f32 D_004D8934; // = 1.5707964;
f32 D_004D8938; // = 0.8;
f32 D_004D893C; // = -0.2;
f32 D_004D8940; // = 1.2;
f32 D_004D8944; // = 10000.0;
f32 D_004D8948; // = 0.001;
f32 D_004D894C; // = 0.001;

INCLUDE_ASM("asm/nonmatchings/nml/model", func_0022DE28);

INCLUDE_ASM("asm/nonmatchings/nml/model", _CurSetMatrix);

INCLUDE_ASM("asm/nonmatchings/nml/model", _CurSetViewScaleTrans);

INCLUDE_ASM("asm/nonmatchings/nml/model", _CurRotTransPersClip);

INCLUDE_ASM("asm/nonmatchings/nml/model", _CurRotTransPersFog);

INCLUDE_ASM("asm/nonmatchings/nml/model", _CurApplyMatrix);

INCLUDE_ASM("asm/nonmatchings/nml/model", _WeightToGlobalVec);

INCLUDE_ASM("asm/nonmatchings/nml/model", _MinMaxSort);

INCLUDE_ASM("asm/nonmatchings/nml/model", CLEAR_LAYOUT_MODEL);

INCLUDE_ASM("asm/nonmatchings/nml/model", CONSTRUCT_CIRCLR_SHADOW);

INCLUDE_ASM("asm/nonmatchings/nml/model", CONSTRUCT_ALPHA_GROUP);

INCLUDE_ASM("asm/nonmatchings/nml/model", INIT_ALPHA_GROUP);

INCLUDE_ASM("asm/nonmatchings/nml/model", FLUSH_ALPHA_GROUP);

INCLUDE_ASM("asm/nonmatchings/nml/model", CLEAR_PROREAL);

INCLUDE_ASM("asm/nonmatchings/nml/model", CONSTRUCT_BACK_BUFFER);

INCLUDE_ASM("asm/nonmatchings/nml/model", INIT_BACK_BUFFER);

INCLUDE_ASM("asm/nonmatchings/nml/model", FLUSH_BACK_BUFFER);

INCLUDE_ASM("asm/nonmatchings/nml/model", CONSTRUCT_PARENT_BUF);

INCLUDE_ASM("asm/nonmatchings/nml/model", INIT_PARENT_BUF);

INCLUDE_ASM("asm/nonmatchings/nml/model", FLUSH_PARENT_BUF);

INCLUDE_ASM("asm/nonmatchings/nml/model", CONSTRUCT_MAP_HANDLE);

INCLUDE_ASM("asm/nonmatchings/nml/model", INIT_MAP_HANDLE);

INCLUDE_ASM("asm/nonmatchings/nml/model", CLEAR_MAP_HANDLE);

INCLUDE_ASM("asm/nonmatchings/nml/model", FLUSH_MAP_HANDLE);

INCLUDE_ASM("asm/nonmatchings/nml/model", CONSTRUCT_FADE_CONTROL);

INCLUDE_ASM("asm/nonmatchings/nml/model", INIT_FADE_CONTROL);

INCLUDE_ASM("asm/nonmatchings/nml/model", CLEAR_MODEL_ENTRY);

INCLUDE_ASM("asm/nonmatchings/nml/model", CONSTRUCT_MODELSYSTEM);

INCLUDE_ASM("asm/nonmatchings/nml/model", INIT_MODELSYSTEM);

INCLUDE_ASM("asm/nonmatchings/nml/model", FLUSH_MODELSYSTEM);

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelSetBackBufferClear);

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelSetFaceModel);

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelSetHumanModel);

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelSetMapClip);

void nmlModelSendRenderCancel(void) {}

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelGetRenderCancel);

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelSendBackBufferSignal);

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelIsBackBufferRequest);

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelSendPauseSignal);

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelSendMenuStart);

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelSendMenuEnd);

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelGetMenuStatus);

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelSendSignalStartBattle);

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelSendSignalEventFinish);

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelSendPacketChangeSignal);

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelSendSignalMovieStart);

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelSetMpeg2CrossFadeTime);

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelSendSignalMovieFinish);

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelSetRenderLevel);

INCLUDE_ASM("asm/nonmatchings/nml/model", fade_render);

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlFadePacketWrite);

INCLUDE_ASM("asm/nonmatchings/nml/model", fade_set);

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelSetFadeOutLock);

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelSetFadeOutLockOff);

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelSetActiveFadeInCancel);

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelSetFadeInCancel);

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelSetActiveFadeOutCancel);

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelSetFadeOutCancel);

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelFadeDoit);

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelSetFadeDoit);

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelSetFadeOutDispose);

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelSetFadeInDispose);

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelSetFadeOut);

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelSetFadeIn);

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelSetFadeInInterrupt);

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelSetActiveFadeOut);

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelSetActiveFadeIn);

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelGetFadeLevel);

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelAskNonLinearCamera);

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelGetGblPosition);

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelSetBackBufferToBattle);

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelSetBackBufferToEventSkip);

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelSetBackBuffer);

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelSetEffectWrite);

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelUseSubWindow);

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelSetWindow);

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelSetSortOffset);

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelSetGlobalPointLight);

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelSetGlobalPointLightCol);

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelSetGlobalPointLightPos);

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelSetGlobalPointLightReset);

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelSetPointLight);

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelSetSpecularOff);

void nmlModelSetShadowMapId(void) {}

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelSetShadowHeight);

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelSetShadowVec);

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelSetTexMap);

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelSetProreal);

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelSetTexProreal);

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelSetAxisSymmetry);

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelSetParent);

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelSetRenderStatus);

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelSetShapeId);

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelSetToumeiParts);

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelSetFilter);

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelSetPixelAlpha);

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelSetPartsPixelAlpha);

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelSetScale);

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelSetClip);

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelSetAlpha);

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelSetStencil);

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelSetZwrite);

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelSetTransparency);

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelSetReflTransparency);

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelSetToumei);

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelSetLight);

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelSetTexture);

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelSetTexfunc);

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelSetMatrix);

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelSetPlace);

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelSetTexOffset);

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelSetMatOffset);

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelSetMulColor);

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelSetFogCol);

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelFogPara);

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelSetFogDist);

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelSetGlobalFogCol);

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelSetGlobalFogDist);

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelGetFogPara);

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelGetFogParaStudio);

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelSetGlobalFogReset);

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelSetFogCancel);

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelInitPartsVisible);

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelSetMapEntry);

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelSetShadowMapEntry);

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelSetMapShadowParts);

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelSetMapLastEntry);

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelSetMapLastInit);

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelSetPartsVisible);

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelSetNameVisible);

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelDirectSend);

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelDirectXtxSub);

INCLUDE_ASM("asm/nonmatchings/nml/model", nmlModelDirectSendXtx);

INCLUDE_ASM("asm/nonmatchings/nml/model", set_group_status);

INCLUDE_ASM("asm/nonmatchings/nml/model", AlphaGroupSortEntry);
