#!/bin/bash
#Autor: Semproms
cd
echo "alias actualizar='sudo apt-get update && sudo apt-get upgrade'" >> .bashrc
echo "alias instalar='sudo apt-get install'" >> .bashrc
echo "alias desinstalar='sudo apt-get remove'" >> .bashrc
. ~/.bashrc
echo "The work is done, `whoami`!" 