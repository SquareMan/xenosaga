# Xenosaga Episode I: Der Wille zur Macht Decompilation

> :construction: TODO: Progress Tracking

A work-in-progress decompilation of [*Xenosaga Episode I*](https://en.wikipedia.org/wiki/Xenosaga_Episode_I)
This repository targets the retail NTSC-U version. It builds the following ELF:

SLUS_204.69: `sha1: fd206d5715a322830f7fa9285fb4a09276ac2a63`

This repository does not contain any game assets or assembly whatsoever. An existing copy of the game is required.

### Requirements Setup

On Windows it is higly recommended to use a linux environment (WSL2/Docker/etc.)

For Ubunutu 22.04 LTS:

1. Add 32-bit architecture and packages. `dpkg --add-architecture i386 && apt-get update && apt-get install -y libc6:i386`
1. Install python dependencies. `python3 -m pip install -U -r requirements.txt`

### Project Setup

1. Extract `SLUS_204.69` from the game disc and place it in the `iso/` folder.
1. Configure and build. `./configure.py --clean && ninja`

### Objdiff Setup

The configuration script generates an `objdiff.json` file. To setup objdiff for the project:

1. Copy a successful build to the `expected` folder. `cp -r build/ expected/`
1. Open the project folder in objdiff.

