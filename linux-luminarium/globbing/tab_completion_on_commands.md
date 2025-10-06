# Linking Files (https://pwn.college/linux-luminarium/globbing/)

## Table of Contents

- [Problem](#Problem)
- [Steps](#Steps)
- [Solution](#Solution)

## Problem

Tab completion is for more than files! You can also tab-complete commands. This level has a command that starts with pwncollege, and it'll give you the flag. Type pwncollege and hit the tab key to auto-complete it!

## Steps

Following the problem description and a few brute-force attempts we can find the flag within the 
Additionally we can run `grep -R pwn /challenge/files/` to locate the file that will have the flag within it before.

```bash
cat /challenge/files/pwncollege-flag
```

## Solution

```
pwn.college{E5rna9LGKS6JD77kGP852dPjnZA.QX2QTM3EDL3MTM3QzW}
```