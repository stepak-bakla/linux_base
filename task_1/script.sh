№     Напиши скрипт, который будет спрашивать имя пользователя и на основе ввода показывать нужную строчку из /etc/passwd.
      Так же скрипт выводит построчно:
      шелл пользователя
      домашнюю директорию пользователя
      список групп, в которых он состоит
      После этого скрипт должен спросить, что следует поменять – uid, домашнюю директорию или группу
      Если uid, то сначала проверить, доступен ли такой uid, если нет – то один раз предложить ввести заново.
      Если домашнюю директорию, то спросить, на какую директорию следует сменить, а также следует ли перемещать домашнюю директорию.
      Если группу – то следует спросить, меняем ли мы основную группу или дополнительную.
      После чего следует вывести на экран итоговую команду.


#!/usr/bin/env bash

set -Eeuo pipefail

echo "What is your name?:  "
read name

ID="$(id -u $name)"
DIR="$(getent passwd $name | cut -d: -f6)"
GROUP="$(id -nG $name)"
SHELL="$(grep $name: /etc/passwd | cut -d: -f7)"

printf  "$name info:\nuid - $ID\nhomedir = $DIR\ngroups = $GROUP\nshell = $SHELL\n"

echo -n " what should be changed - uid, home directory or group (u=uid, d=home directory, g=groups)  "
read i

case $i in

    u)
         echo " number new uid"  read uid
         if grep -q $uid /etc/passwd ; then
            echo " this uid busy, Type in new uid"  read uid
            usermod $name -u $uid
            w="$(id $name | awk '{print $1}')"
            echo " $w "
         else
           usermod $name -u $uid
           w="$(id $name | awk '{print $1}')"
           echo " $w "
         fi
    ;;
    d)
        echo "Enter a new path for the home directory: "
        read new_home

        echo "Do you want to move the contents of the old home directory to the new one? (y/n)"
        read move_home

            if [[ "$move_home" == "y" ]]; then
              usermod -m -d $new_home $name
            else
              usermod -d $new_home $name
            fi
    ;;

    g)
            echo "Type in a new group:"
            read groupname

        echo " Do you want to change the main user group? (y/n)"
        read answer

        if [[ "$answer" == "y" ]]; then
          groupadd $groupname
          usermod -g $groupname $name
        else
          groupadd $groupname
          usermod -a -G $groupname $name
        fi

      UG="$(groups $name)"
      echo "$UG"
  ;;

esac
