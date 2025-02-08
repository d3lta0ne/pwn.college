# S (https://pwn.college/linux-luminarium/variables/#challenges-header-9)

## Table of Contents

- [Problem](#Problem)
- [Steps](#Steps)
- [Solution](#Solution)

## Problem

In this challenge, you must retrieve the exit code returned by `/challenge/get-code` and then run `/challenge/submit-code` with that error code as an argument.

## Steps

```bash
/challenge/get-code ; /challenge/submit-code $?
```

## Solution
pwn.college{wjIMmFmQ7jL_tSYNSUfWe3wO4RD.dljN4UDL3MTM3QzW}