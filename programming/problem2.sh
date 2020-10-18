# Write a shell script to get the public IP address of your device!

## Solution:

#!/bin/bash
publicip="$(curl -s checkip.amazonaws.com)"
echo "Your Public IP address is: $publicip" 
