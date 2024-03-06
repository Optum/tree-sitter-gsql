import re

pattern = re.compile(r'caseInsensitive\("([^"]+)"\)')
word_pattern = re.compile(r"\"[a-zA-Z]*\"")


def case_insensitive_regex(match: re.Match):
    rtn = "/"
    for c in match.group(1):
        if c == '"':
            continue
        rtn += "["
        rtn += c.upper()
        rtn += c.lower()
        rtn += "]"
    rtn += "/"
    return rtn


def case_sensitive_regex(match: re.Match):
    """
    make everything caps
    """
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
    rtn = []  # output (string builder)
    # find where in the line caseInsensitive is used
    for spl in line.split(" "):
        # res = pattern.sub(case_insensitive_regex, spl)
        res = pattern.sub(case_sensitive_regex, spl)
        rtn.append(res)

    rtn = " ".join(r for r in rtn)
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
        out.append(l + "\n")

    with open("grammar.js", "w") as fout:
        fout.writelines(out)
