# Using SUDO (https://pwn.college/linux-luminarium/users/#challenges-header-4)

## Table of Contents

- [Problem](#Problem)
- [Steps](#Steps)
- [Notes](#Notes)
- [Solution](#Solution)

## Problem

In this level, we will give you sudo access, and you will use it to read the flag. Nice and easy!

## Steps

We read the flag with the sudo flag.

```bash
sudo cat /flag
```

## Notes

We see that our user hacker has full sudo privledges when looking at the /etc/sudoers file. This allows us to read the flag with a variety of methods (e.g. file, less, more, echo, cat).

```console
hacker@users~using-sudo:~$ cat /etc/sudoers
hacker ALL=(ALL) NOPASSWD:ALL
```

## Solution
pwn.college{0csYzunUVYkFRrPNTxpmW14-CtN.dhTN0UDL3MTM3QzW}