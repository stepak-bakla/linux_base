#!/bin/bash
file=$(ls -la | grep -w rwxrw)


if [[ -z $file ]];then
    echo "задание выполнено неверно"
    exit 1
else
    echo "Задания выполнено верно!"
    echo "-------------------------------------"
    echo "username - linix_2, password - Zfjjml7OY "
fi
