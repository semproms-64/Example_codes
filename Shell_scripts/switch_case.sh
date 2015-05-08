#!/bin/bash

echo "Write something"
read var1

case $var1 in
	1) echo "1"
	;;
	2) echo "2"
	;;
	*) echo "No idea"
	;;
esac