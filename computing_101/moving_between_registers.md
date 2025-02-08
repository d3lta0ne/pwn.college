# [Moving Between Registers](https://pwn.college/computing-101/your-first-program/#challenges-header-6)

## Problem

In this challenge, we will store a secret value in the `rsi` register, and your program must exit with that value as the return code. Since exit uses the value stored in `rdi` as the return code, you'll need to move the secret value in `rsi` into `rdi`. Run `/challenge/check` and pass it your code for the flag! /challenge/check will set the secret value in rsi before running your code.

## Steps

Run `/challenge/check solution.s`.

### solution.s

```asm
.intel_syntax noprefix
.global _start
_start:
mov rax, 60
mov rdi, rsi
syscall

```

## Solution

pwn.college{cUHeKCESGrgNMnXU598q__aOWtl.dlDN1YDL3MTM3QzW}
