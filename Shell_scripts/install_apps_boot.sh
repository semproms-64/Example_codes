#!/bin/bash
#Autor: Semproms

if [[ $UID != 0 ]]; 
	then
		echo "You are not sudo"
		echo exec sudo $0
fi
	
apt-get -y install vlc
apt-get -y install gimp
apt-get -y install ttf-mscorefonts-installer
apt-get -y install ubuntu-restricted-addons