# [Shutdown](https://pwn.college/intro-to-cybersecurity/intercepting-communication/)

## Problem

From your host at 10.0.0.1, connect to the remote host at 10.0.0.2 on port 31337, and then shutdown the connection.

## Steps

After starting the program with `/challenge/run` you can either run nc directly and then send the end-of-input signal (`Ctrl-D`/`EOD`) or you can use echo as follows to send no input and close the connection at teh end.


```bash
#!/bin/bash
echo -n "" | nc -N 10.0.0.2 31337
```

## Solution

```
pwn.college{swN1ViTzbxIiKf9BAJrOjEXrDIn.QX2IDM2EDL3MTM3QzW}
```