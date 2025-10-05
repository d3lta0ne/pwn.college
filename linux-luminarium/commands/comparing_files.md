# Linking Files (https://pwn.college/linux-luminarium/commands/#challenges-header-5)

## Table of Contents

- [Problem](#Problem)
- [Steps](#Steps)
- [Solution](#Solution)

## Problem

Now for your challenge! There are two files in `/challenge`:

`/challenge/decoys_only.txt` contains 100 fake flags
`/challenge/decoys_and_real.txt` contains all 100 fake flags plus the one real flag
Use `diff` to find what's different between these files and get your flag!

## Steps

We run the following command to get the flag:

```bash
diff /challenge/decoys_only.txt /challenge/decoys_and_real.txt
```

## Solution

pwn.college{8DISUeKEgQJUgusdPZR27RfwLQB.QXzAzM4EDL3MTM3QzW}