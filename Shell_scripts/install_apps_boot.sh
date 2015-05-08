#!/bin/bash
#Author: Semproms

if [[ $UID != 0 ]]; 
	then
		echo "You are not sudo."
		exec sudo $0
fi

echo "Hi, we're installing software. Please, `whoami`,  wait..."

apt-get -y update
apt-get -y upgrade
apt-get -y install vlc
apt-get -y install gimp
apt-get -y install ttf-mscorefonts-installer
apt-get -y install ubuntu-restricted-addons
apt-get -y install firefox
apt-get -y install libreoffice
apt-get -y install myspell-es
apt-get -y install openssh-server
apt-get -y install openssh-client

echo "The work is done, `whoami`"




