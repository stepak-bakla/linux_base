#!/bin/bash
blk1=$1
blk2=$2

# Check if the directory exists
if [[ "$1" = "fd0" && "$2" = "sda" ]]; then
    echo "Задание выполнено верно!"
    echo "username - kernal_end, password = kernal_system"
else
    echo "Ты где-то ошибся..."
fi
