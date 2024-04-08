Написать скрипт, который принимает на вход два аргумента: <path> <time>
Скрипт должен вывести список файлов из <path> старше <time>
<time> может быть задан в любом формате, который понимает утилита date



#!/usr/bin/env bash

path=$1
time=$2

if [[ ! -d "$path" ]]; then
    echo "Path is not a directory"
    exit 1
fi

if [[ ! date -d "$time" > /dev/null 2>&1 ]]; then
    echo "Incorrect time format"
    exit 1
fi

find "$path" -type f ! -newermt "$time"