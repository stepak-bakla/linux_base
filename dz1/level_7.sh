#!/bin/bash
fs_root=$1
fs_swap=$2

# Check if the directory exists
if [[ "$fs_root" = "/dev/mapper/ro_redos-root" ]]; then
    echo "Название точки монтирования для логического тома root верно!"

    # Check if the hello file exists in the directory
    if [[ "$fs_swap" = "/dev/mapper/ro_redos-swap" ]]; then
        echo "Название точки монтирования для логического тома swap верно!"
        echo "---------------------------------------------------"
        echo "username - blk_user, password - NDdos*spo"
    else
        echo "Название точки монтирования для логического тома swap неверно!"
    fi
else
    echo "Название точки монтирования для логического тома root неверно!"
fi
