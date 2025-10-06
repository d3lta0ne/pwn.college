# Split Piping stderr and stdout (https://pwn.college/linux-luminarium/piping/#challenges-header-11)

## Table of Contents

- [Problem](#Problem)
- [Steps](#Steps)
- [Solution](#Solution)

## Problem

In this challenge, `/challenge/run` will output the flag to stdout, but it will also output over 1000 decoy flags (containing the word "DECOY" somewhere in the flag) mixed in with the real flag. You'll need to filter out the decoys while keeping the real flag! Use `grep -v` to filter out all the lines containing "DECOY" and reveal the real flag!

## Steps

```bash
/challenge/run | grep -v DECOY
```

## Solution
pwn.college{gQi16xYhqmdJfkECM4ElMY2qSTA.QX4ETM3EDL3MTM3QzW}