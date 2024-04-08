#!/bin/bash
myIP=ya.ru
myRes=0

myExec=$( ping -q -c3 $myIP 2>&1 )
myRes=$?

if [[ $myRes -eq 0 ]]; then
  echo "username = fsrep"
  echo "password = c2a@SivsaE"
else
  echo "Задача выполнена неверно!"
fi

