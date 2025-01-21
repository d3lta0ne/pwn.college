# [Tracing Syscalls](https://pwn.college/computing-101/your-first-program/#challenges-header-5)

## Problem

In this challenge, you must `strace` the `/challenge/trace-me` program to figure out what value it passes as a parameter to the alarm system call, then call `/challenge/submit-number` with the number you've retrieved as the argument. Good luck!

## Steps

After running `strace /challenge/trace` we get the following output.

```plaintext
hacker@your-first-program~tracing-syscalls:~$ strace /challenge/trace-me
execve("/challenge/trace-me", ["/challenge/trace-me"], 0x7fff8694fdf0 /* 24 vars */) = 0
alarm(11836)                            = 0
exit(0)                                 = ?
+++ exited with 0 +++
```

We see that the alarm syscall is passed the value of `11836` so we run `/challenge/submit-number 11836` to get to the flag.

## Solution

pwn.college{cZ77GcWUgaBW-APR2ajhE6cTyLY.dFzN4UDL3MTM3QzW}
