"""
get all the grammar-reserved words in the func and caps them
"""
import json
import re

pattern = re.compile(r'caseInsensitive\("([^"]+)"\)')


def case_sensitive_regex(match: re.Match):
    rtn = '"'
    for c in match.group(1):
        if c == '"':
            continue
        # rtn += "["
        rtn += c.upper()
        # rtn += c.lower()
        # rtn += "]"
    rtn += '"'
    return rtn


def process(line: str):
    rtn = {}  # output (string builder)
    regs = []
    # find where in the line caseInsensitive is used
    for spl in line.split(" "):
        matches = pattern.findall(spl)
        for m in matches:
            r = m.upper()
            if (
                "accum" in m.lower()
                and len(m) > len("accum")
                and "post" not in m.lower()
            ):
                r: str = m.capitalize()
                r = r.replace("accum", "Accum")

            reg = r"`\b"
            reg += "".join(f"[{x.lower()}{x.upper()}]" for x in m.lower())
            reg += r"\b" + "`,\n"
            regs.append(reg)
            rtn[m.lower()] = r

    print(rtn)

    # rtn = " ".join(r for r in rtn)
    return rtn, regs


if __name__ == "__main__":
    import os

    os.system("cp grammar.js grammar_case_insensitive.js")
    # open the user-written grammar file
    with open("grammar_case_insensitive.js") as fin:
        lines = fin.read().splitlines()

    out = {}
    regs = []
    for i, l in enumerate(lines):
        # only lines that use the function. exclude the def
        if "caseInsensitive(" in l and "function caseInsensitive(" not in l:
            l, reg = process(l)
            out.update(l)
            regs.extend(reg)
            # break
        # out.append(l + "\n")

    with open("grammar.go", "w") as fout:
        # fout.writelines(out)
        # json.dump(out, fout, indent=2)
        # fout.write("\n")
        fout.writelines(regs)
        # json.dump(regs, fout, indent=2)
