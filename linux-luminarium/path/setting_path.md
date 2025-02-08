# Setting Path (https://pwn.college/linux-luminarium/path/#challenges-header-2)

## Table of Contents

- [Problem](#Problem)
- [Steps](#Steps)
- [Solution](#Solution)

## Problem

This level's `/challenge/run` will run the win command via its bare name, but this command exists in the `/challenge/more_commands/` directory, which is not initially in the PATH. The win command is the only thing that `/challenge/run` needs, so you can just overwrite PATH with that one directory.

## Steps

We overwrite the PATH variable by using the following command. `PATH=/challenge/more_commands/`. We then get the flag by running `/challenge/run`.

## Solution

pwn.college{ks6DawWfxSrhlV66g7C4XgCK_i0.dVzNyUDL3MTM3QzW}
