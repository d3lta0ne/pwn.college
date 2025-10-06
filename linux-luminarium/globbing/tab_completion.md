# Linking Files (https://pwn.college/linux-luminarium/globbing/)

## Table of Contents

- [Problem](#Problem)
- [Steps](#Steps)
- [Solution](#Solution)

## Problem

This challenge has copied the flag into `/challenge/pwncollege`, and you can freely `cat` that file. But you can't type the filename: we used some serious trickery to make sure that you must tab-complete it. Try it out!


## Steps

We run the following command to get the flag:

```bash
cat /challenge/pwncollege​
```

## Solution

```
pwn.college{4JjTibqc4SzULufNfNJaYuUVQST.QX0QTM3EDL3MTM3QzW}
```