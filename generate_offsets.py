import os
import sys

TABSPACE = " " * 4  # Formatting purposes

ini_path = "resources/memory_address.ini"
target_path = "include/offsets.h"

output_header = [
    "////////////////////////////////////",
    "////// Auto-generated offsets //////",
    "//////   by Malik R. Booker  ///////",
    "////////////////////////////////////\n",
    "#pragma once\n",
    "#include <vector>\n",
    "namespace Offsets",
    "{",
]
output = ""
output_footer = "};"

def isVector(item):
    hex_count = 0
    for segment in item:
        if segment[0] == ";":
            break
        if "0x" in segment:
            hex_count += 1

    return hex_count > 1


def handleRegularItem(item) -> str:
    prefix = "unsigned int "

    return prefix + " ".join(item[:3])

def handleVectorItem(item) -> str:
    prefix = "std::vector<unsigned int> "
    suffix = " }"

    depth = 1
    for segment in item:
        if segment[0] == ";":
            break
        if "0x" in segment:
            depth += 1

    return prefix + item[0] + " = { " + ", ".join(item[2:depth+1]) + suffix

def parseBuff(buff) -> str:
    if buff[0] == "\n":
        return ""
    elif buff[0] == "":
        return ""
    elif buff[0] == ";":
        return ""
    elif buff[0] == "[":
        return f"\n{TABSPACE}// {buff.strip()[1:-1:]}"

    elif "=" in buff:
        item = list(map(str, buff.split(" ")))
        if isVector(item):
            return handleVectorItem(item) + ";"
        else:
            return handleRegularItem(item) + ";"

    return ""

def parseIniFile(src, dest):
    output = "\n".join(output_header)

    with open(src, "r") as f:
        for line in f.readlines():
            line = line.strip()
            if line:
                buff = parseBuff(line)
                if len(buff) > 0:
                    output += TABSPACE + buff + "\n"

        output += output_footer

    print(output)
    print(f"\n\nWritten to {target_path}.")

    with open(dest, "w") as f:
        f.write(output)

if __name__ == "__main__":
    parseIniFile(ini_path, target_path)
