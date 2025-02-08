# [Your First Syscall](https://pwn.college/computing-101/your-first-program/#challenges-header-2)


## Problem
In this challenge, we'll learn our first syscall: exit. The exit syscall causes a program to exit. By explicitly exiting, we can avoid the crash we ran into with our previous program!

## Steps

Run `/challenge/check solution.s`

### solution.s
```nasm
mov rax, 60
syscall 60
```


## Solution
pwn.college{Ery4aUI7d-zS0O828ebtDAIIYtu.dhjN4UDL3MTM3QzW}
