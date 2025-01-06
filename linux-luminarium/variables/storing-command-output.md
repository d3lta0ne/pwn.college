# S (https://pwn.college/linux-luminarium/variables/#challenges-header-6)

## Table of Contents

- [Problem](#Problem)
- [Steps](#Steps)
- [Solution](#Solution)

## Problem

Read the output of the `/challenge/run` command directly into a variable called `PWN`, and it will contain the flag!

## Steps

```bash
PWN=$(/challenge/run); echo $PWN
```

## Solution
pwn.college{oNioW4ZbEE9E4lV1EOlHZ_aHKK7.dVzN0UDL3MTM3QzW}