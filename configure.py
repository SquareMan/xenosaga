#! /usr/bin/env python3

import argparse
import json
import os
import shutil
import subprocess
import sys
import re

from   pathlib import Path
from   typing  import Any, Dict, List, Set, Union, Optional

import ninja_syntax

import splat
import splat.scripts.split as split
from   splat.segtypes.linker_entry import LinkerEntry

ROOT = Path(__file__).parent
TOOLS_DIR = ROOT / "tools"

YAML_FILE = "config/xenosaga.yaml"
BASENAME = "SLUS_204.69"
LD_PATH = f"{BASENAME}.ld"
ELF_PATH = f"build/{BASENAME}"
MAP_PATH = f"build/{BASENAME}.map"
PRE_ELF_PATH = f"build/{BASENAME}.elf"

COMMON_INCLUDES = "-Iinclude -Isrc -isystem include/sdk/ee -isystem include/sdk -isystem include/gcc -isystem include/gcc/gcc-lib"
COMPILER_DIR = f"{TOOLS_DIR}/cc/ee-gcc2.96/bin"

COMPILER_FLAGS     = "-O2"
COMPILER_FLAGS_CPP = "-O2 c++"

COMPILE_CMD = (
    f"{COMPILER_DIR}/ee-gcc -c {COMMON_INCLUDES} {COMPILER_FLAGS}"
)
COMPILE_CMD_CPP = (
    f"{COMPILER_DIR}/ee-gcc -c {COMMON_INCLUDES} {COMPILER_FLAGS_CPP}"
)

WIBO_VER = "0.6.11"

# CALCULATE PROGRESS TODO:
# python3 -m mapfile_parser progress build/SCPS_150.17.map asm asm/nonmatchings/

def exec_shell(command: List[str], stdout = subprocess.PIPE) -> str:
    ret = subprocess.run(
        command, stdout=stdout, stderr=subprocess.PIPE, text=True
    )
    return ret.stdout


def clean():
    if os.path.exists(".splache"):
        os.remove(".splache")
    shutil.rmtree("asm", ignore_errors=True)
    shutil.rmtree("assets", ignore_errors=True)
    shutil.rmtree("build", ignore_errors=True)


gp_access_pattern = re.compile(r'%(gp_rel)\(([^)]+)\)\(\$28\)') # Pattern for removing %gp_rel accesses
gp_add_pattern = re.compile(r'addiu\s+(\$\d+), \$28, %gp_rel\(([^)]+)\)') # Pattern for replacing %gp_rel additions
def remove_gprel():
    for root, dirs, files in os.walk("asm/nonmatchings/"):
        for filename in files:
            filepath = os.path.join(root, filename)

            with open(filepath, "r") as file:
                content = file.read()

            # Search for any %gp_rel access
            # INSTR REG, %gp_rel(SYMBOL)($28) -> INSTR REG, SYMBOL
            if re.search(gp_access_pattern, content):
                # Reference found, remove
                updated_content = re.sub(gp_access_pattern, r'\2', content)

                # Write the updated content back to the file
                with open(filepath, "w") as file:
                    file.write(updated_content)
            
            # Search for any %gp_rel additions
            # addiu REG, $28, %gp_rel(SYMBOL) -> la REG, SYMBOL
            if re.search(gp_add_pattern, content):
                # Reference found, replace
                updated_content = re.sub(gp_add_pattern, r'la \1, \2', content)

                # Write the updated content back to the file
                with open(filepath, "w") as file:
                    file.write(updated_content)

EUC_HACK_FILENAME_TABLE = ["TsDrawUPacket.s", "_P3MC_SetBrowsInfo.s"]
def eucjp_convert():
    for root, dirs, files in os.walk("asm/nonmatchings/"):
        for filename in files:
            if filename.startswith("D_") or filename in EUC_HACK_FILENAME_TABLE:
                filepath = os.path.join(root, filename)

                if filename in EUC_HACK_FILENAME_TABLE:
                    print(f"(HACK) Converting {filename}")

                with open(filepath, "r", encoding="utf-8") as file:
                    content = file.read()

                eucjp_content = content.encode("euc-jp").decode("euc-jp")

                with open(filepath, "w", encoding="euc-jp") as file:
                    file.write(eucjp_content)


def write_permuter_settings():
    with open("permuter_settings.toml", "w") as f:
        f.write(
            f"""compiler_command = "tools/cc/ee-gcc2.96/bin/ee-gcc -c -Iinclude -Iinclude/sdk/ee -Iinclude/gcc -Iinclude/gcc/gcc-lib -O2 -G8 -gstabs -D__GNUC__"
assembler_command = "mips-linux-gnu-as -march=r5900 -mabi=eabi -Iinclude"
compiler_type = "gcc"

[preserve_macros]

[decompme.compilers]
"tools/cc/ee-gcc2.96/bin/ee-gcc" = "ee-gcc2.9-991111-01"
"""
        )


def build_stuff(linker_entries: List[LinkerEntry]):
    built_objects: Set[Path] = set()

    def build(
        object_paths: Union[Path, List[Path]],
        src_paths: List[Path],
        task: str,
        variables: Dict[str, str] = {},
        implicit_outputs: List[str] = [],
    ):
        if not isinstance(object_paths, list):
            object_paths = [object_paths]

        object_strs = [str(obj) for obj in object_paths]

        for object_path in object_paths:
            if object_path.suffix == ".o":
                built_objects.add(object_path)
            ninja.build(
                outputs=object_strs,
                rule=task,
                inputs=[str(s) for s in src_paths],
                variables=variables,
                implicit_outputs=implicit_outputs,
            )

    ninja = ninja_syntax.Writer(open(str(ROOT / "build.ninja"), "w"), width=9999)

    # Rules
    cross = "mips-linux-gnu-"
    ld_args = f"-EL -T config/undefined_syms_auto.txt -T config/undefined_funcs_auto.txt -T config/undefined_syms.txt -Map $mapfile -T $in -o $out"

    ninja.rule(
        "as",
        description="as $in",
        command=f"cpp {COMMON_INCLUDES} $in -o - | iconv -f=UTF-8 -t=EUC-JP $in | {cross}as -no-pad-sections -EL -march=5900 -mabi=eabi -Iinclude -o $out && python3 tools/buildtools/elf_patcher.py $out gas",
    )

    ninja.rule(
        "cpp",
        description="cpp $in",
        command=f"{COMPILE_CMD_CPP} $in -o $out && {cross}strip $out -N dummy-symbol-name",
    )

    ninja.rule(
        "cc",
        description="cc $in",
        command=f"{COMPILE_CMD} $in -o $out && {cross}strip $out -N dummy-symbol-name",
    )

    ninja.rule(
        "ld",
        description="link $out",
        command=f"{cross}ld {ld_args}",
    )

    ninja.rule(
        "sha1sum",
        description="sha1sum $in",
        command="sha1sum -c $in && touch $out",
    )

    ninja.rule(
        "elf",
        description="elf $out",
        command=f"{cross}objcopy $in $out -O binary",
    )

    decompctx = Path("tools") / "decompctx.py"
    ninja.rule(
        name="decompctx",
        command=f"$python {decompctx} $in -o $out -d $out.d",
        description="CTX $in",
        depfile="$out.d",
        deps="gcc",
    )

    for entry in linker_entries:
        seg = entry.segment

        if seg.type[0] == ".":
            continue

        if entry.object_path is None:
            continue

        if isinstance(seg, splat.segtypes.common.asm.CommonSegAsm) or isinstance(
            seg, splat.segtypes.common.data.CommonSegData
        ):
            build(entry.object_path, entry.src_paths, "as")
        elif isinstance(seg, splat.segtypes.common.cpp.CommonSegCpp):
            build(entry.object_path, entry.src_paths, "cpp")
            build(entry.object_path.parent / f"{seg.name}.ctx", entry.src_paths, "decompctx")
        elif isinstance(seg, splat.segtypes.common.c.CommonSegC):
            build(entry.object_path, entry.src_paths, "cc")
            build(entry.object_path.parent / f"{seg.name}.ctx", entry.src_paths, "decompctx")
        elif isinstance(seg, splat.segtypes.common.databin.CommonSegDatabin) or isinstance(seg, splat.segtypes.common.rodatabin.CommonSegRodatabin):
            build(entry.object_path, entry.src_paths, "as")
        else:
            print(f"ERROR: Unsupported build segment type {seg.type}")
            sys.exit(1)

    ninja.build(
        PRE_ELF_PATH,
        "ld",
        LD_PATH,
        implicit=[str(obj) for obj in built_objects],
        variables={"mapfile": MAP_PATH},
    )

    ninja.build(
        ELF_PATH,
        "elf",
        PRE_ELF_PATH,
    )

    ninja.build(
        ELF_PATH + ".ok",
        "sha1sum",
        "checksum.sha1",
        implicit=[ELF_PATH],
    )

# Generate objdiff.json
# Hacked together from dtk template. Not generically transferrable to other projects
def generate_objdiff_config(
    linker_entries: List[LinkerEntry], 
) -> None:
    objdiff_config: Dict[str, Any] = {
        "min_version": "1.0.0",
        "custom_make": "ninja",
        "build_target": False,
        "watch_patterns": [
            "*.c",
            "*.cp",
            "*.cpp",
            "*.h",
            "*.hpp",
            "*.inc",
            "*.py",
            "*.yml",
            "*.txt",
            "*.json",
        ],
        "units": [],
    }

    build_path = "build"

    def add_unit(entry: LinkerEntry) -> None:
        if entry.segment.type not in ["c", "cpp"]:
            return

        obj_name = entry.segment.name
        unit_config: Dict[str, Any] = {
            "name": entry.segment.name,
            "target_path": Path("expected") / entry.object_path.relative_to(Path(build_path)),
        }

        unit_src_path = entry.segment.out_path()

        if not unit_src_path.exists():
            objdiff_config["units"].append(unit_config)
            return

        src_obj_path = entry.object_path
        src_ctx_path = entry.object_path.parent / f"{entry.segment.name}.ctx"

        unit_config["base_path"] = src_obj_path
        # TODO: Detect fully matching TUs
        unit_config["complete"] = False
        compiler_version = "ee-gcc2.96"
        unit_config["scratch"] = {
            "platform": "ps2",
            "compiler": compiler_version,
            "c_flags": COMPILER_FLAGS,
            "ctx_path": src_ctx_path,
            "build_ctx": True,
        }
        objdiff_config["units"].append(unit_config)

    # Add units
    for unit in linker_entries:
        add_unit(unit)

    # Write objdiff.json
    with open("objdiff.json", "w", encoding="utf-8") as w:

        def unix_path(input: Any) -> str:
            return str(input).replace(os.sep, "/") if input else ""

        json.dump(objdiff_config, w, indent=4, default=unix_path)

if __name__ == "__main__":
    parser = argparse.ArgumentParser(description="Configure the project")
    parser.add_argument(
        "-c",
        "--clean",
        help="Clean extraction and build artifacts",
        action="store_true",
    )
    parser.add_argument(
        "-csrc",
        "--cleansrc",
        help="Clean the 'src' folder",
        action="store_true",
    )
    parser.add_argument(
        "-nogp",
        "--no-gprel-removing",
        help="Do not remove gp_rel references on the disassembly",
        action="store_true",
    )
    parser.add_argument(
        "-noconvert",
        "--no-eucjp-converting",
        help="Do not convert to EUC-JP the disassembly strings",
        action="store_true",
    )
    args = parser.parse_args()

    if args.clean:
        clean()
    
    if args.cleansrc:
        shutil.rmtree("src", ignore_errors=True)

    split.main([YAML_FILE], modes="all", verbose=False)

    linker_entries = split.linker_writer.entries

    build_stuff(linker_entries)

    generate_objdiff_config(linker_entries)

    write_permuter_settings()

    # We're done with everything, now get rid of the %gp_rel references
    if not args.no_gprel_removing:
        remove_gprel()

    if not args.no_eucjp_converting:
        eucjp_convert()

    if not os.path.isfile("compile_commands.json"):
        exec_shell(["ninja", "-t", "compdb"], open("compile_commands.json", "w"))
