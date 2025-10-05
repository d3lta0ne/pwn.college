# Linking Files (https://pwn.college/linux-luminarium/globbing/)

## Table of Contents

- [Problem](#Problem)
- [Steps](#Steps)
- [Solution](#Solution)

## Problem

We put a few happy, but diversely-named files in `/challenge/files`. Go `cd` there and run `/challenge/run`, providing a single argument: a short (3 characters or less) globbed word with two `*` globs in it that covers every word that contains the letter `p`.

## Steps

We run the following command to get the flag:

```bash
cd /challenge/files && /challenge/run *p*
```

## Solution

```
pwn.college{gXtvNlM5xaqkrqtze702NFvjt1u.QXycTO2EDL3MTM3QzW}
```