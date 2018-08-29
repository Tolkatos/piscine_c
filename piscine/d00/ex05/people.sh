ldapsearch -LLL "(uid=Z*)" cn | grep -i -e cn | sort -rfid | cut -c 5-100
