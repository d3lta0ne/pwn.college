# [Set Multiple Registers](https://pwn.college/computing-101/assembly-crash-course/)

## Problem

In this level, you will be working with registers. You will be asked to modify or read from registers.

In this level, you will work with multiple registers. Please set the following:

`rax = 0x1337`
`r12 = 0xCAFED00D1337BEEF`
`rsp = 0x31337`

## Steps

We start by creating a simple assembly program (`touch ~/solution.s`).After this we use the following command `as -o solution solution.s` to assemble the object file.

We then pass `solution` as an argument to `/challenge/run` using `/challenge/run solution`.



### solution.s

```nasm
.intel_syntax noprefix
.section .text
.global _start

_start:
    mov rax, 0x1337
    mov r12, 0xCAFED00D1337BEEF
    mov rsp, 0x31337

```

## Solution

```
pwn.college{kVrVCYEHlenCnpodrddMCTANqBi.dBTM4MDL3MTM3QzW}
````
