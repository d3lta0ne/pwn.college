# Linking Files (https://pwn.college/linux-luminarium/commands/#challenges-header-12)

## Table of Contents

- [Problem](#Problem)
- [Steps](#Steps)
- [Solution](#Solution)

## Problem

Okay, now you try it! In this level the flag is, as always, in `/flag`, but` /challenge/catflag` will instead read out `/home/hacker/not-the-flag`. Use the symlink, and fool it into giving you the flag!

## Steps

When we run /challenge/catflag, we get an error telling us that
"About to read out the /home/hacker/not-the-flag file!" but the following error
`cat: /home/hacker/not-the-flag: No such file or directory`. We then create a symbolic link to `/flag` by using the following line `ln -s /flag ~/not-the-flag`. Now when `/challenege/catflag` runs, a file with SUID privledges btw, it will read the contents of `/flag`.

## Solution

pwn.college{8lGaepJ08b3haCbky5YK6E5hKN0.dlTM1UDL3MTM3QzW}
