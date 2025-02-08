# Adding Commands (https://pwn.college/linux-luminarium/path/#challenges-header-3)

## Table of Contents

- [Problem](#Problem)
- [Steps](#Steps)
- [Solution](#Solution)

## Problem

Previously, the win command that `/challenge/run` executed was stored in `/challenge/more_commands`. This time, win does not exist! Recall the final level of Chaining Commands, and make a shell script called `win`, add its location to the PATH, and enable `/challenge/run` to find it!

## Steps

We add our home directory where we create the win command to the PATH variable by using the following command: `export PATH=~:$PATH`. After that we create our binary named win and make it executable. `touch ~/win; chmod +x ~/win` Ensure that our crafted binary attetmpts to read the contents of `/flag`. We then get the flag by running `/challenge/run`.

### win

```bash
#/bin/bash
cat /flag
```

## Solution

pwn.college{YeNeiC32zsur1BUFshL0pMQuQcC.dZzNyUDL3MTM3QzW}
