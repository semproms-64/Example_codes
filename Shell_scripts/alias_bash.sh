#!/bin/bash
cd
echo "alias instalar='sudo apt-get install'" >> .bashrc
echo "alias desinstalar='sudo apt-get remove'" >> .bashrc
. ~/.bashrc
echo "Script ejecutado correctamente"