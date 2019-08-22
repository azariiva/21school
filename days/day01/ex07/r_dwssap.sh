cat /etc/passwd | grep -v ^# | awk 'NR%2==1' |  cut -d ":" -f 1 | rev | sort -d |
sed -n $FT_LINE1','$FT_LINE2'p' | awk 1 ORS=', ' | sed s/.$// | sed s/.$/./
