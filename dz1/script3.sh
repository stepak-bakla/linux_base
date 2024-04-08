Написать скрипт, который должен принять на вход путь 
до блочного устройства, проверить примонтировано оно или нет.
Если примонтировано - завершиться с exitCode 90
Если не примонтировано, то при помощи рограммы mktemp создать директорию, примонтировать в неё

#!/usr/bin/env bash

set -Eeuo pipefail
read -p "Specify the name of the block device: " device

mount=$(lsblk | grep "$device" | awk '{print $7}')

if [[ -z "$mount" ]]; then
    temp_dir=$(mktemp -d)
    mount "/dev/$device" "$temp_dir"
    echo "Device $device mounted at $temp_dir"
else
    echo "Device $device is already mounted at $mount"
    exit 90
fi