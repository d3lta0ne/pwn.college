# [Exit Codes](https://pwn.college/computing-101/your-first-program/#challenges-header-3)


## Problem
In this challenge, you must make your program exit with the exit code of 42. Thus, your program will need three instructions: Set your program's exit code (move it into rdi). Set the system call number of the exit syscall (mov rax, 60). syscall!

## Steps

Run `/challenge/check solution.s`

### solution.s
```nasm
mov rdi, 42
mov rax, 60
syscall
```


## Solution
pwn.college{YCMuDhvIe2EL8K_opWjNs2tCoK8.dBzN4UDL3MTM3QzW}
