# Linking Files (https://pwn.college/linux-luminarium/commands/#challenges-header-5)

## Table of Contents

- [Problem](#Problem)
- [Steps](#Steps)
- [Solution](#Solution)

## Problem

This challenge wants you to move the `/flag` file into `/tmp/hack-the-planet` (do it)! When you're done, run `/challenge/check`, which will check things out and give the flag to you.

## Steps

We run the following command to get the flag:

```bash
mv /flag /tmp/hack-the-planet && /challenge/check
```

## Solution

pwn.college{cjGr7_2BUZYWquyGgJF0SYC_T8T.QX5ETM3EDL3MTM3QzW}