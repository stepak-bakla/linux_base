На вход скрипта подаются два аргумента
Первый аргумент - входной файл, второй - выходной файл
Если оба файла существуют, то скрипт завершает работу
Если входной файл не существует, то скрипт завершает работу
Скрипт должен вывести в выходной файл содержимое входного файла так, что бы каждая четная строка входного файла поменялась местами с предыдущей нечётной
пример входного файла:

#!/usr/bin/env bash

[[ -e $1 && -e $2 ]] && echo "Files exist" && exit 1
[[ ! -e $1 ]] && echo "Input file does not exist" && exit 1
enter_file=$1
exit_file=$2
i=0
while read -r line ; do
  string[$i]="${line}"
  ((i++))
done < $enter_file

for i in "${!string[@]}"
    do
    if [[ $(($i % 2)) -eq 0 ]] ; then {
        odd="${string[$i]}"
        even="${string[$i+1]}"
        echo $even >> ${exit_file}
        echo $odd >> ${exit_file}
    }
    fi
  done
