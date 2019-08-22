cat "$1" | tr ' ' '\t' | grep -i "nicolas\tbauer" | rev | cut -f 2 | rev | grep '-' 
