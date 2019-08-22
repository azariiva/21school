find . -type f -maxdepth 2 -name "*.sh" | rev | cut -d "/" -f 1 | sed "s/hs.//" | rev
