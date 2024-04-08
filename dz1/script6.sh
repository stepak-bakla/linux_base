Написать скрипт, на вход которого подается либо PID, либо имя программы.
Скрипт постоянно проверяет что программа находится в памяти
Каждая проверка записывается в лог в формате:
день-месяц-год час-минута-секунда mySvcChecker: service <имя_сервиса> [isUP|isDown]
[isUP|isDown] - состояние сервиса


#!/usr/bin/env bash
q=$1

pid=$( ps ax | grep $q | grep -v grep | awk '{print $1}' )

if [[ -z $pid ]]; then
    echo "Process $pid not found"
    exit 1
fi

echo "Monitoring process $pid"

while true; do
    if ps -p $pid > /dev/null; then
        echo "$(date +'%d-%m-%Y %H:%M:%S') mySvcChecker: service $1 isUP" >> /var/log/mySvcChecker

    else
        echo "$(date +'%d-%m-%Y %H:%M:%S') mySvcChecker: service $1 isDown" >> /var/log/mySvcChecker
    fi
    sleep 1
done
