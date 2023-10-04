import re

pattern = re.compile('caseInsensitive\("[a-z]*"\)')
word_pattern = re.compile(r'("[a-z]*")')


def process(line: str):
    rtn = ""  # output (string builder)

    for p in line.split("caseInsensitive"):
        w_match = word_pattern.search(p)
        if w_match is not None:
            x = w_match.string[w_match.start() : w_match.end()].upper()
            p = x + w_match.string[w_match.end() + 1 :]
        rtn += p
    return rtn


with open("grammar_case_insensitive.js") as fin:
    lines = fin.read().splitlines()

out = []
for i, l in enumerate(lines):
    if "caseInsensitive" in l and "function caseInsensitive(" not in l:
        l = process(l)
    out.append(l + "\n")

with open("grammar.js", "w") as fout:
    fout.writelines(out)
