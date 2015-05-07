#!/bin/bash
#Autor: Semproms
cd
echo "alias actualizar='sudo apt-get -y update && sudo apt-get -y upgrade'" >> .bashrc
echo "alias instalar='sudo apt-get -y install'" >> .bashrc
echo "alias desinstalar='sudo apt-get -y remove'" >> .bashrc
. ~/.bashrc
echo "The work is done, `whoami`!" 