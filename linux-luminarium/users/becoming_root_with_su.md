# S (https://pwn.college/linux-luminarium/users/#challenges-header-1)

## Table of Contents

- [Problem](#Problem)
- [Steps](#Steps)
- [Solution](#Solution)

## Problem

This challenge (and only this challenge) does have a root password. That password is `hack-the-planet`, and you must provide it to `su` to become root! Go do that, and read the flag!

## Steps

We switch into the user root using `su root` and entering `hack-the-planet` as the password. Then read the flag using `cat /flag`


## Solution
pwn.college{slomhQct44XL_lFOhdVe00NKss_.dVTN0UDL3MTM3QzW}