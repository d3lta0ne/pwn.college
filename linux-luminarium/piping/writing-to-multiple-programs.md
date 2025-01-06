# Writing to Multiple Programs (https://pwn.college/linux-luminarium/piping/#challenges-header-10)

## Table of Contents

- [Problem](#Problem)
- [Steps](#Steps)
- [Solution](#Solution)

## Problem

Now it's your turn! In this challenge, we have `/challenge/hack`, `/challenge/the`, and `/challenge/planet`. Run the `/challenge/hack` command, and duplicate its output as input to both the `/challenge/the` and the `/challenge/planet` commands!


## Steps

This is a difficult one as I was not sure that I correctly solved the challenge. The following was my 'solution'. The tip that the program provides is that "This secret data must directly and simultaneously make it to /challenge/the and /challenge/planet. Don't try to copy-paste it; it changes too fast."

```bash
/challenge/hack | tee  >(/challenge/the) >(/challenge/planet)
```

## Solution
pwn.college{gK9lDB-SMXaamh8zO7ti3Qr_u3k.dBDO0UDL3MTM3QzW}