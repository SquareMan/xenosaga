#include "command.h"

#include "common.h"

// .sdata
u32 GameResourceReadFileCallback;
u32 AdrsEnemyPreset;
u32 AdrsEnemySpline;
u32 AdrsEnemyExclamation;
u32 AdrsEnemyQuestion;
u32 AdrsEnemySphere;
u32 AdrsEnemySquare;
u32 AdrsEnemy;
u8 D_004D9EC0;
u8 D_004D9EC8;
u8 D_004D9EE0;

// .sbss
u32 arcfileaddr;
u8 arcno;
u32 arcfilepreload;
u8 GameResourceWorkReloadLeader;

INCLUDE_ASM("asm/nonmatchings/game/command", default_callback);

INCLUDE_ASM("asm/nonmatchings/game/command", RES_getPath);

INCLUDE_ASM("asm/nonmatchings/game/command", RES_getScenePath);

INCLUDE_ASM("asm/nonmatchings/game/command", RES_GetEnemySeBank);

INCLUDE_ASM("asm/nonmatchings/game/command", RES_GetEnemySeType);

INCLUDE_ASM("asm/nonmatchings/game/command", RES_GetEnemySeFoot);

INCLUDE_ASM("asm/nonmatchings/game/command", RES_GetEnemySeName);

INCLUDE_ASM("asm/nonmatchings/game/command", RES_GetMotBaseID);

INCLUDE_ASM("asm/nonmatchings/game/command", convert_face);

INCLUDE_ASM("asm/nonmatchings/game/command", resource_typeid_translate);

INCLUDE_ASM("asm/nonmatchings/game/command", GameResourceSearch);

INCLUDE_ASM("asm/nonmatchings/game/command", resource_get_free);

INCLUDE_ASM("asm/nonmatchings/game/command", GameResourceGetFreeAddr);

INCLUDE_ASM("asm/nonmatchings/game/command", GameResourceWorkAlloc);

INCLUDE_ASM("asm/nonmatchings/game/command", GameResourceWorkReload);

INCLUDE_ASM("asm/nonmatchings/game/command", GameResourceAlloc);

INCLUDE_ASM("asm/nonmatchings/game/command", GameResourceRealloc);

INCLUDE_ASM("asm/nonmatchings/game/command", next_arc_size);

INCLUDE_ASM("asm/nonmatchings/game/command", next_line);

INCLUDE_ASM("asm/nonmatchings/game/command", skip_space);

INCLUDE_ASM("asm/nonmatchings/game/command", search_key);

INCLUDE_ASM("asm/nonmatchings/game/command", command_reset);

INCLUDE_ASM("asm/nonmatchings/game/command", command_loadmap);

INCLUDE_ASM("asm/nonmatchings/game/command", command_loadact);

INCLUDE_ASM("asm/nonmatchings/game/command", command_loadface);

INCLUDE_ASM("asm/nonmatchings/game/command", command_loadmot);

INCLUDE_ASM("asm/nonmatchings/game/command", RES_GetFootStepNo);

INCLUDE_ASM("asm/nonmatchings/game/command", command_loadtex);

INCLUDE_ASM("asm/nonmatchings/game/command", command_loadmovie);

INCLUDE_ASM("asm/nonmatchings/game/command", command_loadeffect_sub);

INCLUDE_ASM("asm/nonmatchings/game/command", command_loadeffect);

INCLUDE_ASM("asm/nonmatchings/game/command", command_loadene_sub);

INCLUDE_ASM("asm/nonmatchings/game/command", command_loadene);

INCLUDE_ASM("asm/nonmatchings/game/command", command_script);

INCLUDE_ASM("asm/nonmatchings/game/command", command_player);

INCLUDE_ASM("asm/nonmatchings/game/command", command_dummy);

INCLUDE_ASM("asm/nonmatchings/game/command", RES_GetLeaderSeName);

INCLUDE_ASM("asm/nonmatchings/game/command", RES_GetMapEnvSeName);

INCLUDE_ASM("asm/nonmatchings/game/command", command_loadse);

INCLUDE_ASM("asm/nonmatchings/game/command", command_loadsmd);

INCLUDE_ASM("asm/nonmatchings/game/command", command_mpeg2_core);

INCLUDE_ASM("asm/nonmatchings/game/command", command_mpeg2);

INCLUDE_ASM("asm/nonmatchings/game/command", command_mpeg2battle);

INCLUDE_ASM("asm/nonmatchings/game/command", command_mpeg2nofade);

INCLUDE_ASM("asm/nonmatchings/game/command", command_event2battle);

INCLUDE_ASM("asm/nonmatchings/game/command", command_player_lock);

INCLUDE_ASM("asm/nonmatchings/game/command", command_enenpcse);

INCLUDE_ASM("asm/nonmatchings/game/command", command_enese);

INCLUDE_ASM("asm/nonmatchings/game/command", command_npcse);

INCLUDE_ASM("asm/nonmatchings/game/command", command_disk);

INCLUDE_ASM("asm/nonmatchings/game/command", command_save);

INCLUDE_ASM("asm/nonmatchings/game/command", GameResourcePreLoad);

INCLUDE_ASM("asm/nonmatchings/game/command", readreq);

INCLUDE_ASM("asm/nonmatchings/game/command", GameResourceLoad);

INCLUDE_ASM("asm/nonmatchings/game/command", RES_loadFileSubMapSub);

INCLUDE_ASM("asm/nonmatchings/game/command", RES_loadFileSubMap);

INCLUDE_ASM("asm/nonmatchings/game/command", RES_GetMotBaseName);

INCLUDE_ASM("asm/nonmatchings/game/command", RES_GetMdlFileNameSub);

INCLUDE_ASM("asm/nonmatchings/game/command", RES_GetMdlFileName);

INCLUDE_ASM("asm/nonmatchings/game/command", RES_loadFileSub);

INCLUDE_ASM("asm/nonmatchings/game/command", RES_loadFile);

INCLUDE_ASM("asm/nonmatchings/game/command", GameResourceGetIndex);

INCLUDE_ASM("asm/nonmatchings/game/command", GameResourceDump);

INCLUDE_ASM("asm/nonmatchings/game/command", GameResourceReset);

INCLUDE_ASM("asm/nonmatchings/game/command", GameResourceInit);
