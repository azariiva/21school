ifconfig -a link | awk '/ether/' | rev | cut -d ' ' -f 2 | rev
