# [Path Traversal 1](https://pwn.college/intro-to-cybersecurity/web-security/#challenges-header-1)

## Problem

This level will explore the intersection of Linux path resolution, when done naively, and unexpected web requests from an attacker. We've implemented a simple web server for you --- it will serve up files from /challenge/files over HTTP. Can you trick it into giving you the flag?

The webserver program is /challenge/server. You can run it just like any other challenge, then talk to it over HTTP (using a different terminal or a web browser). We recommend reading through its code to understand what it is doing and to find the weakness!

## Steps

Make an initial connection to the local host using using redirects and saving cookies to get the flag.

### Notes

After you save cookies to a file with `-c cookies.txt`, `curl` will automatically load the cookies from that file for subsequent requests without needing the `-b` option. This is because `curl` automatically checks for a cookie jar (cookie file) when it’s made a request and will use that jar on any subsequent requests.

### solution.sh

```bash
curl -Lvk -c cookies.txt
```

### solution_1.sh

```bash
curl_request(){
  local HOST=$1
  local PORT=$2
  local COOKIE_FILE="cookies.txt"

  # Use -b if the cookie file exists, else use -c to create the cookie file
  curl -Lkv $( [ -s $COOKIE_FILE ] && echo "-b $COOKIE_FILE" || echo "-c $COOKIE_FILE" ) "http://$HOST:$PORT"
}

main
```

## Solution

pwn.college{swHqM08m1rf5jo0Z_rYj2UoYQOB.dRDMzMDL3MTM3QzW}
