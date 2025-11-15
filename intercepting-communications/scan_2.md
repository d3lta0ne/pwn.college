# [Scan 2](https://pwn.college/intro-to-cybersecurity/intercepting-communication/)

## Problem

From your host at 10.0.0.1, connect to some unknown remote host on the 10.0.0.0/16 subnet, on port 31337.

## Steps

After starting the program with `/challenge/run`, we first run the nmap command to find the target and then run nc to connect ot the port.
After running nmap we see that the host open for us is `10.0.128.73` with the `Elite` service running on port 31337/tcp using `nc 10.0.128.73 31337` to get our flag.


```bash
#!/bin/bash
nmap -Pn -n -p 31337 --open -T5 --min-rate 5000 10.0.0.0/16
```

### Potential One-Liner
```bash
#!/bin/bash
nmap -Pn -n -p 31337 --open -T5 --min-rate 5000 10.0.0.0/16 -oG - \
  | awk '/31337\/open/{print $2}' \
  | xargs -I {} nc {} 31337
```

## Solution

```
pwn.college{gZQ7Hrxd2M2sLdXDfw7bTJVv_fk.dJjNzMDL3MTM3QzW}
```