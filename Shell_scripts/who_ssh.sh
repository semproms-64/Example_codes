#!/bin/bash

echo "My SSH"
echo "-------------------------------------------"
cat /var/log/auth* | grep Accepted
