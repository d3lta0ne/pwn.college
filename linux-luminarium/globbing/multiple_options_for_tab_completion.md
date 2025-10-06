# Linking Files (https://pwn.college/linux-luminarium/globbing/)

## Table of Contents

- [Problem](#Problem)
- [Steps](#Steps)
- [Solution](#Solution)

## Problem

This challenge has a `/challenge/files` directory with a bunch of files starting with `pwncollege`. Tab-complete from `/challenge/files/p` or so, and make your way to the flag!

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