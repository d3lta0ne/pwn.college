# Hijacking Commands (https://pwn.college/linux-luminarium/path/#challenges-header-4)

## Table of Contents

- [Problem](#Problem)
- [Steps](#Steps)
- [Solution](#Solution)

## Problem

Armed with your knowledge, you can now carry out some shenanigans. This challenge is almost the same as the first challenge in this module. Again, this challenge will delete the flag using the rm command. But unlike before, it will not print anything out for you.

How can you solve this? You know that rm is searched for in the directories listed in the PATH variable. You have experience creating the win command when the previous challenge needed it. What else can you create?

## Steps

We create a binary named rm and set our home directory to the start of the `$PATH`. We create it all in a one-liner using `printf '#!/bin/bash\ncat /flag\n' > rm; chmod +x rm; PATH="$HOME:$PATH"`

### rm

```bash
#!/bin/bash
cat /flag
```

### Notes

It is important to ensure that your home directory is at the start of the `$PATH` or else the actual rm binary will be selected and the flag will be removed. Setting the path to `PATH="$PATH:$HOME"` will not work. We use `$HOME:$PATH` as `~:$PATH` might not alwasy be interpreted correctly in all shells.

## Solution

pwn.college{cDpsT6zXtg8jRy8dXxllgj8In96.ddzNyUDL3MTM3QzW}
