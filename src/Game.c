#include "common.h"

#include "main.h"

// .sbss
s32 saveEffe;
s32 shopEffe;
s32 evsEffe;
s32 retEffe;
s32 pause_check;
s32 shopNo;
u8 GameCFSoundMenuPurgeFlag;
s32 attrPrev;
s32 UseVMFlag;
s32 stageVM;

// .sdata
s32 UmnSimulationNo;
s32 MenuDrillCall;
s64 moneyBox;
u8 FLAG_FRAME_60;
s32 StudioEntrySkip;
s16 NowTester;

// .lit4
f32 D_004D7B80; // = 65535.0;
f32 D_004D7B84; // = 1.0471976;
f32 D_004D7B88; // = 65535.0;
f32 D_004D7B8C; // = 0.48999998;
f32 D_004D7B90; // = 65535.0;
f32 D_004D7B94; // = 1.8;
f32 D_004D7B98; // = 1.0471976;
f32 D_004D7B9C; // = 0.69999999;
f32 D_004D7BA0; // = 0.033333335;

INCLUDE_ASM("asm/nonmatchings/Game", GameCFSoundPurgeSub);

INCLUDE_ASM("asm/nonmatchings/Game", GameCFSoundPurge);

INCLUDE_ASM("asm/nonmatchings/Game", GameCFSoundReload);

INCLUDE_ASM("asm/nonmatchings/Game", GameCFSoundMenuPurge);

INCLUDE_ASM("asm/nonmatchings/Game", GameCFSoundMenuReload);

INCLUDE_ASM("asm/nonmatchings/Game", Game_Data_Push);

INCLUDE_ASM("asm/nonmatchings/Game", Game_Data_Pop);

INCLUDE_ASM("asm/nonmatchings/Game", MenuGameDataPush);

INCLUDE_ASM("asm/nonmatchings/Game", MenuGameDataPop);

INCLUDE_ASM("asm/nonmatchings/Game", GameStateSaveCameraLight);

INCLUDE_ASM("asm/nonmatchings/Game", GameStateRestoreCameraLight);

INCLUDE_ASM("asm/nonmatchings/Game", GameStateSave);

INCLUDE_ASM("asm/nonmatchings/Game", GameStateRestore);

INCLUDE_ASM("asm/nonmatchings/Game", GamePushSaveDataUser);

INCLUDE_ASM("asm/nonmatchings/Game", GamePopSaveDataUser);

INCLUDE_ASM("asm/nonmatchings/Game", InitCfSystem);

INCLUDE_ASM("asm/nonmatchings/Game", checkAttr);

INCLUDE_ASM("asm/nonmatchings/Game", getScriptFlag);

INCLUDE_ASM("asm/nonmatchings/Game", checkTalk);

INCLUDE_ASM("asm/nonmatchings/Game", checkTouch);

INCLUDE_ASM("asm/nonmatchings/Game", checkItemBoxDir);

INCLUDE_ASM("asm/nonmatchings/Game", checkItemBox);

INCLUDE_ASM("asm/nonmatchings/Game", CheckGameSymbol);

INCLUDE_ASM("asm/nonmatchings/Game", GameDispTag);

INCLUDE_ASM("asm/nonmatchings/Game", GameDrawShadow);

INCLUDE_ASM("asm/nonmatchings/Game", GameDrawSync);

INCLUDE_ASM("asm/nonmatchings/Game", GameModeEvtTools);

INCLUDE_ASM("asm/nonmatchings/Game", GameModePause);

INCLUDE_ASM("asm/nonmatchings/Game", GameModeEvtDebug);

INCLUDE_ASM("asm/nonmatchings/Game", GameModeCfMain);

INCLUDE_ASM("asm/nonmatchings/Game", checkTalkPoint);

INCLUDE_ASM("asm/nonmatchings/Game", actSequenceClear);

INCLUDE_ASM("asm/nonmatchings/Game", actTalkAfter);

INCLUDE_ASM("asm/nonmatchings/Game", GameModeCfEvent);

INCLUDE_ASM("asm/nonmatchings/Game", GameModeDebugMenu);

INCLUDE_ASM("asm/nonmatchings/Game", Game);
