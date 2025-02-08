# [Building Executables](https://pwn.college/computing-101/memory/#challenges-header-1)

## Problem

You must retrieve this secret number and use it as the exit code for your program. To do this, you must read it into rdi, whose value, if you recall, is the first parameter to exit and is used as the exit code. Good luck!


## Steps

Run `/challenge/check` and then enter the following code as input using the following code.
`/challenge/check < solution.s`.

### solution.s

```nasm
.intel_syntax noprefix
.global _start
_start:
mov rdi, [133700]
mov rax, 60;
syscall
```

## Solution

```
pwn.college{QWrTYCCoOXSl5XOtJKSfnlWjf9V.dRjM5UDL3MTM3QzW}
```