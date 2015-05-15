#!/bin/bash
#Author: Semproms

if [[ $UID != 0 ]]; 
	then
		exec sudo $0
fi


echo "I need an USB path"
df
read var1
umount $var1*

echo "I need the format"
echo "1.- NTFS"
echo "2.- FAT"
read var2

case $var2 in
	1) mkfs.ntfs -f $var1
	echo "The format is NTFS"
	;;
	2) mkfs.vfat $var1
	echo "The format is FAT"
	;;
	*) echo "Not in range"
	;;
esac

#echo "Dou you want to change the name of the device (y/n)?"
#read name_var

#if [[ "$name_var" == "y" ]]; then
	#echo "I need a new name"
	#read new_name
	#echo mtools_skip_check=1 >> ~/.mtoolsrc
	#mlabel -i /dev/sdb4 ::semproms
#fi


