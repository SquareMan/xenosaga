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

INCLUDE_ASM("asm/nonmatchings/nml/model_NOPHACK_1", AlphaGroupSort);

INCLUDE_ASM("asm/nonmatchings/nml/model_NOPHACK_1", is_shadow_map_parts);

INCLUDE_ASM("asm/nonmatchings/nml/model_NOPHACK_1", is_parts_transparency);

INCLUDE_ASM("asm/nonmatchings/nml/model_NOPHACK_1", is_block_last_entry);

INCLUDE_ASM("asm/nonmatchings/nml/model_NOPHACK_1", parent_buf_entry);

INCLUDE_ASM("asm/nonmatchings/nml/model_NOPHACK_1", parent_buf_search);

INCLUDE_ASM("asm/nonmatchings/nml/model_NOPHACK_1", set_circle_shadow_ratio);

INCLUDE_ASM("asm/nonmatchings/nml/model_NOPHACK_1", nmlModelLexDataCheck);

INCLUDE_ASM("asm/nonmatchings/nml/model_NOPHACK_1", nmlModelLexBlockDoit);

INCLUDE_ASM("asm/nonmatchings/nml/model_NOPHACK_1", nmlModelStealthEntry);

INCLUDE_ASM("asm/nonmatchings/nml/model_NOPHACK_1", nmlModelCalcSample);

INCLUDE_ASM("asm/nonmatchings/nml/model_NOPHACK_1", nmlModelCalcEntryClip);

INCLUDE_ASM("asm/nonmatchings/nml/model_NOPHACK_1", deapth_for_studio);

INCLUDE_ASM("asm/nonmatchings/nml/model_NOPHACK_1", nmlModelCalcSpecularClip);

INCLUDE_ASM("asm/nonmatchings/nml/model_NOPHACK_1", nmlModelCalcDropShadow);

INCLUDE_ASM("asm/nonmatchings/nml/model_NOPHACK_1", nmlModelCalcEntryProjectCircle);

INCLUDE_ASM("asm/nonmatchings/nml/model_NOPHACK_1", nmlModelCalcEntryProjectMap);
