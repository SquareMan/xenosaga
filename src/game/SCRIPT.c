#include "SCRIPT.h"

#include "common.h"

#include "PauseMenuPage.h"

// .sdata
u32 debugBasePath;
u32 s_nScriptFadeOutTime;
u32 s_nScriptFadeRequest;
u32 s_nScriptChangeTime;
u32 s_nScriptSequenceReset;
u32 s_nScriptFrameLockEntry;
u32 s_nScriptEventSkipEntry;
u32 s_nScriptCfTime;
u32 s_nScriptEventFin;
u32 s_nScriptEventActive;
u32 s_nScriptTalkLock;
u32 s_light_004da460;
u32 D_004DA468;
u32 D_004DA470;
u32 D_004DA478;
u32 lightSave;
u32 windowOwner;

// .sbss
u32 currentScriptDB;
u32 fileSelect;
u32 heapUsed;
u32 lightFileNum;
u32 resourceID;

// .lit4
f32 D_004D7C9C; // = 3.1415927;
f32 D_004D7CA0; // = 3.1415927;
f32 D_004D7CA4; // = 1000000.0;
f32 D_004D7CA8; // = 1.5707964;
f32 D_004D7CAC; // = 1000000.0;
f32 D_004D7CB0; // = 1.5707964;

// different TU
u32 classJava_xeno_Chr;
u32 classJava_xeno_Stage;
u32 classJava_xeno_util_Window;
u32 vmDebugMask;

INCLUDE_ASM("asm/nonmatchings/game/SCRIPT", initJS);

INCLUDE_ASM("asm/nonmatchings/game/SCRIPT", SCRIPT_test);

INCLUDE_ASM("asm/nonmatchings/game/SCRIPT", SCRIPT_talkIgnoreSet);

INCLUDE_ASM("asm/nonmatchings/game/SCRIPT", SCRIPT_talkIgnoreClr);

INCLUDE_ASM("asm/nonmatchings/game/SCRIPT", SCRIPT_talkIgnoreGet);

INCLUDE_ASM("asm/nonmatchings/game/SCRIPT", SCRIPT_sceneChangeTimeInit);

INCLUDE_ASM("asm/nonmatchings/game/SCRIPT", SCRIPT_sceneChangeTimeGet);

INCLUDE_ASM("asm/nonmatchings/game/SCRIPT", SCRIPT_sceneChangeTimeSet);

INCLUDE_ASM("asm/nonmatchings/game/SCRIPT", SCRIPT_sceneChangeTimeDec);

INCLUDE_ASM("asm/nonmatchings/game/SCRIPT", SCRIPT_sendMovieSkipSignal);

INCLUDE_ASM("asm/nonmatchings/game/SCRIPT", SCRIPT_clrEventActiveFlag);

INCLUDE_ASM("asm/nonmatchings/game/SCRIPT", SCRIPT_setEventActiveFlag);

INCLUDE_ASM("asm/nonmatchings/game/SCRIPT", SCRIPT_getEventActiveFlag);

INCLUDE_ASM("asm/nonmatchings/game/SCRIPT", SCRIPT_eventFinish);

INCLUDE_ASM("asm/nonmatchings/game/SCRIPT", SCRIPT_methodClearSet);

INCLUDE_ASM("asm/nonmatchings/game/SCRIPT", SCRIPT_methodClearGet);

INCLUDE_ASM("asm/nonmatchings/game/SCRIPT", SCRIPT_fade);

INCLUDE_ASM("asm/nonmatchings/game/SCRIPT", SCRIPT_getFadeTime);

INCLUDE_ASM("asm/nonmatchings/game/SCRIPT", SCRIPT_fadeGet);

INCLUDE_ASM("asm/nonmatchings/game/SCRIPT", SCRIPT_getCfTime);

INCLUDE_ASM("asm/nonmatchings/game/SCRIPT", SCRIPT_incCfTime);

INCLUDE_ASM("asm/nonmatchings/game/SCRIPT", SCRIPT_frameLock2Battle);

INCLUDE_ASM("asm/nonmatchings/game/SCRIPT", SCRIPT_reset);

INCLUDE_ASM("asm/nonmatchings/game/SCRIPT", SCRIPT_init);

INCLUDE_ASM("asm/nonmatchings/game/SCRIPT", SCRIPT_execTalkto);

INCLUDE_ASM("asm/nonmatchings/game/SCRIPT", SCRIPT_execTouchto);

INCLUDE_ASM("asm/nonmatchings/game/SCRIPT", createTalkTask);

INCLUDE_ASM("asm/nonmatchings/game/SCRIPT", talktoObserver);

INCLUDE_ASM("asm/nonmatchings/game/SCRIPT", talkCancel);

INCLUDE_ASM("asm/nonmatchings/game/SCRIPT", SCRIPT_execEntered);

INCLUDE_ASM("asm/nonmatchings/game/SCRIPT", CallMethod);

INCLUDE_ASM("asm/nonmatchings/game/SCRIPT", CallMethod_I);

INCLUDE_ASM("asm/nonmatchings/game/SCRIPT", CallMethod_II);

INCLUDE_ASM("asm/nonmatchings/game/SCRIPT", funcObserver);

INCLUDE_ASM("asm/nonmatchings/game/SCRIPT", getEmptyVM);

INCLUDE_ASM("asm/nonmatchings/game/SCRIPT", SCRIPT_load);

INCLUDE_ASM("asm/nonmatchings/game/SCRIPT", SCRIPT_load2);

INCLUDE_ASM("asm/nonmatchings/game/SCRIPT", SCRIPT_load_DBG);

INCLUDE_ASM("asm/nonmatchings/game/SCRIPT", getStrIndex);

INCLUDE_ASM("asm/nonmatchings/game/SCRIPT", replacePathExt);

INCLUDE_ASM("asm/nonmatchings/game/SCRIPT", attrObserver);

INCLUDE_ASM("asm/nonmatchings/game/SCRIPT", PauseSkipCheck);

INCLUDE_ASM("asm/nonmatchings/game/SCRIPT", sceneObserver2);

INCLUDE_ASM("asm/nonmatchings/game/SCRIPT", sceneObserver);

INCLUDE_ASM("asm/nonmatchings/game/SCRIPT", DB_light);

INCLUDE_ASM("asm/nonmatchings/game/SCRIPT", DB_vmSwitch);

INCLUDE_ASM("asm/nonmatchings/game/SCRIPT", DB_stageSelect);

INCLUDE_ASM("asm/nonmatchings/game/SCRIPT", DB_memory);

INCLUDE_ASM("asm/nonmatchings/game/SCRIPT", DB_lightSave);

INCLUDE_ASM("asm/nonmatchings/game/SCRIPT", DB_scriptFileSelect);

INCLUDE_ASM("asm/nonmatchings/game/SCRIPT", DB_wind);

INCLUDE_ASM("asm/nonmatchings/game/SCRIPT", SCRIPT_debugMenu);

INCLUDE_ASM("asm/nonmatchings/game/SCRIPT", loadScriptCD);

INCLUDE_ASM("asm/nonmatchings/game/SCRIPT", loadScriptCD2);

INCLUDE_ASM("asm/nonmatchings/game/SCRIPT", loadScript);

INCLUDE_ASM("asm/nonmatchings/game/SCRIPT", DB_evtMonitor);

INCLUDE_ASM("asm/nonmatchings/game/SCRIPT", SCRIPT_exec);

INCLUDE_ASM("asm/nonmatchings/game/SCRIPT", SCRIPT_exec2);

INCLUDE_ASM("asm/nonmatchings/game/SCRIPT", XTK_setResourceID);

INCLUDE_ASM("asm/nonmatchings/game/SCRIPT", XTK_getResourceID);

INCLUDE_ASM("asm/nonmatchings/game/SCRIPT", XTK_setWindowOwner);

INCLUDE_ASM("asm/nonmatchings/game/SCRIPT", XTK_getWindowOwner);

INCLUDE_ASM("asm/nonmatchings/game/SCRIPT", XTK_findFile);
