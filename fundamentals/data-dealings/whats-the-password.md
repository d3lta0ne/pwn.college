# [What's the password?](https://pwn.college/fundamentals/data-dealings/)

## Problem
The program lives in `/challenge/runme`, and will request a tricky password before it gives you the flag. It's going to be the simplest program you read in your journey, as it just reads data over standard input and makes one simple check.

Read the program, understand the Python, and make the program give you the flag!
## Steps

After reading the file `/challenge/runme` we see that it is a simple python program that checks if the user enters the byte string `mlsgeypk`. Thus we run the program `/challenge/runme` and pass `mlsgeypk` when prompted for the flag.

### /challenge/runme
```python
#!/usr/bin/exec-suid -- /bin/python3 -I

import sys


print("Enter the password:")
entered_password = sys.stdin.buffer.read1().strip()
correct_password = b"mlsgeypk"

print(f"Read {len(entered_password)} bytes.")


if entered_password == correct_password:
    print("Congrats! Here is your flag:")
    print(open("/flag").read().strip())
else:
    print("Incorrect!")
    sys.exit(1)
```

## Solution

```
pwn.college{0Iin1XeJ2MH5jm_dsjh6vOzdhTB.QX5QjN0EDL3MTM3QzW}
```
