#!/bin/sh

echo "Desconectando el proyecto del template"
git remote remove origin
echo "Importando componentes"
git submodule add git@github.com:r126401/components.git
cd components
echo "importando user_interface"
git submodule add git@github.com:r126401/user_interface.git
cd ..
echo "copiando el sdkconfig"
cp sdkconfig_esp8266 sdkconfig



