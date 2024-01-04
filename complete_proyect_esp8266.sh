#!/bin/sh

echo "Desconectando el proyecto del template"
git remote remove origin
cd ..
mv template $1
cd $1
echo "Importando componentes"
git submodule add git@github.com:r126401/components.git
cd components
echo "importando user_interface"
git submodule add git@github.com:r126401/user_interface.git
cd ..
echo "copiando el sdkconfig"
cp sdkconfig_esp8266 sdkconfig
git init
git add .



