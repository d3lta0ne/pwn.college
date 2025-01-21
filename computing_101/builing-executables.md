# [Building Executables](https://pwn.college/computing-101/your-first-program/#challenges-header-4)

## Problem

In this challenge, go ahead and run through these steps yourself. Build your executable, and pass it to /challenge/check for the flag!

## Steps

We first assemble our solution.s using `as solution.s -o asm.o`. We then use the ls command to combine our link files into an executable: `ld asm.o -o solution`. Then, we pass our executable to the challenge check. `/challenge/check solution`

### solution.s

```nasm
.intel_syntax noprefix
.global _start
_start:
mov rdi, 42
mov rax, 60
syscall
```

## Solution

pwn.college{8KsPSM98_lEk8nA_upeKKpcSEKz.QXwcjMwEDL3MTM3QzW}
