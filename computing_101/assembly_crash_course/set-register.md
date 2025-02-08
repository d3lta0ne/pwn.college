# [Set Register](https://pwn.college/computing-101/assembly-crash-course/)

## Problem

In this level, you will be working with registers. You will be asked to modify or read from registers.

In this level, you will work with registers! Please set the following:

`rdi = 0x1337`

## Steps

We start by creating a simple assembly program (`touch ~/solution.s`) that sets the `%rdi` register to `0x1337`. After this we use the following command `as -o solution solution.s` to assemble the object file.

We then pass `solution` as an argument to `/challenge/run` using `/challenge/run solution`.

### solution.s

```nasm
.intel_syntax noprefix
.global _start
_start:
mov rdi, 0x1337
mov rax, 60
syscall
```

## Solution

```
pwn.college{o1uD_LpOkNVuxazNNtIWTqsjC1a.0FN5EDL3MTM3QzW}
````
