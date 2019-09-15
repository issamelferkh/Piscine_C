ldapsearch -Q "(uid=z*)" | grep "cn: " | sort -r -f --ignore-case | cut -c5-
