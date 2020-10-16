# "MultiWHOIS"
# Write a shell script to perform multiple WHOIS lookups!


## Solution:

#!/bin/bash
read -p "Enter domain names separated by space ' ' : " input
for i in ${input[@]}
do
whois $i
done

