import re

# pattern = re.compile('caseInsensitive\("[a-z]*"\)')
pattern = re.compile(r'caseInsensitive\("[a-zA-Z]*"\)')
word_pattern = re.compile(r"\"[a-zA-Z]*\"")


# def process(line: str):
#     rtn = ""  # output (string builder)


#     for p in line.split("caseInsensitive"):
#         w_match = word_pattern.search(p)
#         if w_match is not None:
#             x = w_match.string[w_match.start() : w_match.end()].upper()
#             p = x + w_match.string[w_match.end() + 1 :]
#         rtn += p
#     return rtn


def process(line: str):
    rtn = []  # output (string builder)
    # find where in the line caseInsensitive is used
    for spl in line.split(" "):
        matches = pattern.search(spl) # TODO: find the start and end so it can be stitched in
        matches = pattern.findall(spl)
        print(matches)
        stitch = ""
        for m in matches:
            # replace it with it's regex
            word = word_pattern.findall(m)[0]
            word: str = word.replace('"', "")
            stitch = '"'
            for c in word:
                stitch += f"[{c.upper()}{c.lower()}]"

            stitch += '",'
        spl = spl[: matches[0].start] + stitch + spl[matches[-1].end]
        rtn.append(spl)

    rtn = " ".join(r for r in rtn)
    print(line)
    print(rtn)
    return rtn


if __name__ == "__main__":
    import os

    os.system("cp grammar.js grammar_case_insensitive.js")
    # open the user-written grammar file
    with open("grammar_case_insensitive.js") as fin:
        lines = fin.read().splitlines()

    out = []
    for i, l in enumerate(lines):
        # only lines that use the function. exclude the def
        if "caseInsensitive(" in l and "function caseInsensitive(" not in l:
            l = process(l)
            break
        out.append(l + "\n")

    with open("grammar.js", "w") as fout:
        fout.writelines(out)
    os.system("cp grammar_case_insensitive.js grammar.js")
