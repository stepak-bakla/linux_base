Написать скрипт, который принимает на вход в виде аргумента IP-адрес
Скрипт должен проверить доступность адреса посредством ping три раза и записать в лог один раз за все три проверки:
 - если хост отвечает:
день-месяц-год час-минута-секунда myHostChecker: <IP> - UP
- если хост не отвечает:
день-месяц-год час-минута-секунда myHostChecker: <IP> - DOWN

#!/usr/bin/env bash

myIP=$1
myRes=0

myExec=$( ping -q -c3 $myIP 2>&1 )
myRes=$?

if [[ $myRes -eq 0 ]]; then
  echo "$(date) $myIP UP" >> myLog
else
  echo "$(date) $myIP DOWN" >> myLog
fi
