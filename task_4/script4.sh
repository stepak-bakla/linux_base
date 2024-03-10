Создайте файл со списком пользователей. С помощью for выведите на экран содержимое файла с нумерацией строк

#!/usr/bin/env bash

set -Eeuo pipefail
file="./name.txt"

# Считаем количество строк в файле
line_count=$(wc -l < "$file")

for ((i=1; i<=line_count; i++)); do
    line=$(sed -n "${i}p" "$file")
    echo "$i: $line"
done

