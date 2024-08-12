#include "common.h"

#include "main.h"

// .sdata
u32 D_004DC5C4;
u32 D_004DC5C8;
u32 D_004DA6C0;
u32 D_004DA6C8;
u32 D_004DA6D8;
u32 D_004DA6F0;
u32 D_004DA6F4;
u32 D_004DA728;
u32 D_004DA730;
u32 D_004DA73C;
u32 D_004DA74C;
u32 D_004DA750;
u32 D_004DA76C;
u32 D_004DA780;
u32 D_004DA784;
u32 D_004DA798;
u32 D_004DA808;

u32 test_data;

// .lit4
f32 D_004D7D34; // = 0.1;
f32 D_004D7D38; // = 0.039999999;
f32 D_004D7D3C; // = 0.0099999998;

INCLUDE_ASM("asm/nonmatchings/test/EndouTest", EndouTest);

INCLUDE_ASM("asm/nonmatchings/test/EndouTest", TextTest);

INCLUDE_ASM("asm/nonmatchings/test/EndouTest", ShopTest);

INCLUDE_ASM("asm/nonmatchings/test/EndouTest", SeisanTest);

INCLUDE_ASM("asm/nonmatchings/test/EndouTest", ModelTest);

INCLUDE_ASM("asm/nonmatchings/test/EndouTest", BattleWindowTest);

INCLUDE_ASM("asm/nonmatchings/test/EndouTest", eNumberTest);

INCLUDE_ASM("asm/nonmatchings/test/EndouTest", eModelTestMain);

INCLUDE_ASM("asm/nonmatchings/test/EndouTest", eModelTest);

void ePrintTest(void) {}

INCLUDE_ASM("asm/nonmatchings/test/EndouTest", eMessageTest);

INCLUDE_ASM("asm/nonmatchings/test/EndouTest", BgTest);

INCLUDE_ASM("asm/nonmatchings/test/EndouTest", TexturTest);

void UmnPrintTest(void) {}

INCLUDE_ASM("asm/nonmatchings/test/EndouTest", UmnMailDispTest);

INCLUDE_ASM("asm/nonmatchings/test/EndouTest", e_test);

INCLUDE_ASM("asm/nonmatchings/test/EndouTest", ReLoadTest);

INCLUDE_ASM("asm/nonmatchings/test/EndouTest", endCallback);

INCLUDE_ASM("asm/nonmatchings/test/EndouTest", FileLoadTest);

INCLUDE_ASM("asm/nonmatchings/test/EndouTest", JpegTest);

INCLUDE_ASM("asm/nonmatchings/test/EndouTest", UmlTest);

INCLUDE_ASM("asm/nonmatchings/test/EndouTest", PauseMenuPagePartyDebugTakeAgws);

INCLUDE_ASM("asm/nonmatchings/test/EndouTest", PauseMenuPagePartyDebugLockParty);

INCLUDE_ASM("asm/nonmatchings/test/EndouTest", PauseMenuPagePartyDebugOutFriend);

INCLUDE_ASM("asm/nonmatchings/test/EndouTest", PauseMenuPagePartyDebugFriend);

INCLUDE_ASM("asm/nonmatchings/test/EndouTest", PauseMenuPagePartyDebugAttacker);

INCLUDE_ASM("asm/nonmatchings/test/EndouTest", PauseMenuPagePartyDebug);
