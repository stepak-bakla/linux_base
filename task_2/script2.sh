Напиши скрипт, который будет спрашивать название и создавать файл,
затем спрашивать права для этого файла и задавать их

#!/usr/bin/env bash

set -Eeuo pipefail

echo "What name new file?:  "
read name


if [[ -z $name]] ; then 
    echo "the name can't be empty" # проверка на наличие символов
    exit 1
else 
   touch $name
fi


read -p "What permissions does the file need to have?: " value
if [[ $value =~ ^[0-9]+$ ]]; then # проверка то что число 
    chmod +$value $name
else
    echo "You need to enter numeric values"
fi