# Setting Path (https://pwn.college/linux-luminarium/path/#challenges-header-2)

## Table of Contents

- [Problem](#Problem)
- [Steps](#Steps)
- [Solution](#Solution)

## Problem

Let's practice. This level's /challenge/run will run the win command via its bare name, but this command exists in the /challenge/more_commands/ directory, which is not initially in the PATH. The win command is the only thing that /challenge/run needs, so you can just overwrite PATH with that one directory. Good luck!


## Steps

Initiate the password crack with `john /challenge/shadow-leak`.

```console
hacker@users~cracking-passwords:~$ john /challenge/shadow-leak 
Created directory: /home/hacker/.john
Loaded 1 password hash (crypt, generic crypt(3) [?/64])
Press 'q' or Ctrl-C to abort, almost any other key for status
aardvark         (zardus)
1g 0:00:00:20 100% 2/3 0.04992g/s 290.7p/s 290.7c/s 290.7C/s Johnson..buzz
Use the "--show" option to display all of the cracked passwords reliably
Session completed
```

Using the credentials of `zardus:aardvark`, we run the `/challenge/run` flag using `su zardus; /challenge/run`

## Solution
pwn.college{Qwf9M4fv_7Khf5KBbnKRa3sFQoh.ddTN0UDL3MTM3QzW}