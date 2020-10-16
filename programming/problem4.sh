# "MultiWHOIS"
# Write a shell script to perform multiple WHOIS lookups!


## Solution:

#!/bin/bash
echo -n "Enter domain name: "; read domain
whois $domain
