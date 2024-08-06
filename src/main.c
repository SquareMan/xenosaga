#include "common.h"

#include "main.h"

// TODO: Move to header
extern u32 Title();

typedef UNK_FUN_PTR(ControlFunc);

const char PacketBottomNewVu1DropMicroCode[] = "sed\\REGIST2";

void ControlEntry()
{
    u32 overlay;
    ControlFunc unk;

    xglSleep();
    xglSoundLoadEffect("REGIST", WorkEnd, 0);
    xglSoundLoadSwd(PacketBottomNewVu1DropMicroCode, WorkEnd);
    SsdAddWaveData(WorkEnd, 0, 0);
    while (SsdSpuDmaCompleted(0))
    {
    }

    xglRenderDispOn();
    xglCdLoadOverlay(2);
    LogoFirst();

    while (TRUE)
    {
        do
        {
            do
            {
                xglCdLoadOverlay(2);
                overlay = Title();
                unk = (ControlFunc)(overlay & 0xFFFFFF);
            } while (overlay == 0);
        } while (unk == &Title);
        xglCdLoadOverlay(overlay >> 0x18);
        unk();
    }
}

extern void xglCdPowerOffCB();
void InitializeSystem()
{
    sceSifInitRpc(0);
    sceCdInit(0);

    while (sceSifRebootIop("cdrom0:\\IOP\\IOPRP24D.IMG;1") == 0)
    {
    }
    while (sceSifSyncIop() == 0)
    {
    }

    sceSifInitRpc(0);
    sceSifInitIopHeap();
    sceSifLoadFileReset();
    sceCdInit(0);
    sceCdMmode(2);
    sceFsReset();
    xglCdSifLoadModule("sio2man", 0);
    xglCdSifLoadModule("mcman", 0);
    xglCdSifLoadModule("mcserv", 0);
    xglCdSifLoadModule("padman", 0);
    xglCdSifLoadModule("libsd", 0);
    xglCdSifLoadModule("ssd", 0);
    xglCdSifLoadModule("rssd", 0);
    sceCdPOffCallback(&xglCdPowerOffCB, 0);
    WorkEnd = 0xa80000;
    xglSoundInitial();
    xglCdInitial();
    xglPadInitial();
    xglMcInitial();
    xglTaskInitial(0, 0, 0);
    xglDmaInitial();
    xglGeometryInit();
    xglPacketInit();
    xglRenderInit();
    xglFontInitial();
    xglMovieInit();
    xglMenuInitial();
}

int main(int argc, const char* argv[])
{
    main_param_argc = argc;
    main_param_argv = argv;

    BootDisplay();
    InitializeSystem();
    xglThreadInitial();
    xglThreadRotate();

    return 0;
}

// NOTE: Initializing these at the top when they're declared results in incorrect .sdata order
UNK_TYPE WorkEnd = 0;
int main_param_argc = 0;
const char** main_param_argv = NULL;
