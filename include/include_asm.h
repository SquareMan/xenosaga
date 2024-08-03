#ifndef INCLUDE_ASM_H
#define INCLUDE_ASM_H

#if !defined(SPLAT) && !defined(M2CTX) && !defined(PERMUTER) && !defined(DECOMPME)

#ifndef INCLUDE_ASM
#define INCLUDE_ASM(FOLDER, NAME)                                                                  \
    __asm__(".section .text\n"                                                                     \
            "    .balign 8\n"                                                                      \
            "    .set noat\n"                                                                      \
            "    .set noreorder\n"                                                                 \
            "    .globl " #NAME ".NON_MATCHING\n"                                                  \
            "    .type " #NAME ".NON_MATCHING, @object\n"                                          \
            "    " #NAME ".NON_MATCHING:\n"                                                        \
            "    .include \"" FOLDER "/" #NAME ".s\"\n"                                            \
            "    .set reorder\n"                                                                   \
            "    .set at\n"                                                                        \
            "    .balign 4\n")
#endif

#ifndef INCLUDE_RODATA
#define INCLUDE_RODATA(FOLDER, NAME)                                                               \
    __asm__(".section .rodata\n"                                                                   \
            "    .include \"" FOLDER "/" #NAME ".s\"\n"                                            \
            ".section .text")
#endif

__asm__(".include \"include/labels.inc\"\n");

#else

#ifndef INCLUDE_ASM
#define INCLUDE_ASM(FOLDER, NAME)
#endif

#ifndef INCLUDE_RODATA
#define INCLUDE_RODATA(FOLDER, NAME)
#endif

#endif

#endif /* INCLUDE_ASM_H */
