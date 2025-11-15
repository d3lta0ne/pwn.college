# [Send](https://pwn.college/intro-to-cybersecurity/intercepting-communication/)

## Problem

From your host at 10.0.0.1, connect to the remote host at 10.0.0.2 on port 31337, and send the message: Hello, World!.

As before, you'll want to use the netcat command. You'll notice that netcat will hang (e.g. you will not get a shell prompt back), waiting until the connection is closed. You can, as with most hanging processes, kill the process by pressing Ctrl-C.

In this challenge though, you need to send a message to the remote host. If you type that message into the terminal, nothing will immediately happen. That is because your terminal, by default, buffers the input you type until you press Enter! Press Enter after typing your message, and a single packet containing the entire message will be sent to the remote host.


## Steps

After starting the challenge and switching to host `10.0.0.1` by running `/challenge/run` you are able to run the following command to complete the challenge.

```bash
#!/bin/bash
echo "Hello, World!" | nc 10.0.0.2 31337
```

## Solution

```
pwn.college{4eizz2ufZ-WKkv7FcL28VL5fxQo.QX1IDM2EDL3MTM3QzW}
```
