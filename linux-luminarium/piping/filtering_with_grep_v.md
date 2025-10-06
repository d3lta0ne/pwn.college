# Split Piping stderr and stdout (https://pwn.college/linux-luminarium/piping/#challenges-header-11)

## Table of Contents

- [Problem](#Problem)
- [Steps](#Steps)
- [Solution](#Solution)

## Problem

In this challenge, `/challenge/run` will output the flag to stdout, but it will also output over 1000 decoy flags (containing the word "DECOY" somewhere in the flag) mixed in with the real flag. You'll need to filter out the decoys while keeping the real flag! Use `grep -v` to filter out all the lines containing "DECOY" and reveal the real flag!

## Steps

```bash
/challenge/hack 2> >(/challenge/the) | /challenge/planet 
```

## Solution
pwn.college{8cmI-ENWCywJZgFr3BfWcv1R2DE.dFDNwYDL3MTM3QzW}