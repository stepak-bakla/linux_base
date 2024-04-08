#!/bin/bash

points=0

printf  " Кто из перечисленных является создателем ядра Linux?\n1 - Linus Torvalds\n2 - Richard Stallman\n3 - Steve Jobs\nОтвет:  "
read i
case "$i" in
    1)
        points=$((points+1))
        echo "Ответ верный!"
        ;;
    2|3)
        echo "0_o"
        ;;
    *)
        echo "Используйте 1, 2 или 3"
        exit 1
        ;;
esac
echo "----------------------------------------------------------------------------------------------------------------"
printf  "В каком году было выпущено первое официальное версия ядра Linux?\n1 - 2000\n2 - 1991\n3 - 1985\nОтвет:  "
read i
case "$i" in
    2)
        points=$((points+1))
        echo "Ответ верный!"
        ;;
    1|3)
        echo "0_o"
        ;;
    *)
        echo "Используйте 1, 2 или 3"
        exit 1
        ;;
esac
echo "----------------------------------------------------------------------------------------------------------------"
printf  "Какая компания стала первой крупной корпорацией, поддерживающей развитие Linux?\n1 - IBM\n2 - Microsoft\n3 - Apple\nОтвет:  "
read i
case "$i" in
    1)
        points=$((points+1))
        echo "Ответ верный!"
        ;;
    2|3)
        echo "0_o"
        ;;
    *)
        echo "Используйте 1, 2 или 3"
        exit 1
        ;;
esac
echo "----------------------------------------------------------------------------------------------------------------"
printf  "Какой проект, начатый Линусом Торвальдсом, лег в основу разработки ядра Linux?\n1 - Debian\n2 - GNU\n3 - Minix\nОтвет:  "
read i
case "$i" in
    3)
        points=$((points+1))
        echo "Ответ верный!"
        ;;
    1|2)
        echo "0_o"
        ;;
    *)
        echo "Используйте 1, 2 или 3"
        exit 1
        ;;
esac
echo "----------------------------------------------------------------------------------------------------------------"
printf  "Как называется лицензия, под которой распространяется ядро Linux?\n1 - MIT License\n2 - GPL (General Public License)\n3 - Apache License\nОтвет:  "
read i
case "$i" in
    2)
        points=$((points+1))
        echo "Ответ верный!"
        ;;
    1|3)
        echo "0_o"
        ;;
    *)
        echo "Используйте 1, 2 или 3"
        exit 1
        ;;
esac
echo "----------------------------------------------------------------------------------------------------------------"
printf  "Какая операционная система лежит в основе стандартов Linux?\n1 - MacOS\n2 - Windows\n3 - Unix\nОтвет:  "
read i
case "$i" in
    3)
        points=$((points+1))
        echo "Ответ верный!"
        ;;
    2|1)
        echo "0_o"
        ;;
    *)
        echo "Используйте 1, 2 или 3"
        exit 1
        ;;
esac
echo "----------------------------------------------------------------------------------------------------------------"
printf  "С какого года разрабатывается RedOS?\n1 - 1992\n2 - 2013\n3 - 2001\n4 - 1890\n5 - 2005\n6 - 2019\nОтвет:  "
read i
case "$i" in
    5)
        points=$((points+1))
        echo "Ответ верный!"
        ;;
    2|1|3|4|1|6)
        echo "0_o"
        ;;
    *)
        echo "Используйте 1, 2 или 3"
        exit 1
        ;;
esac

echo "----------------------------------------------------------------------------------------------------------------"

if [[ $points -eq 7 ]]; then
    printf "Пользователь - level_2\nПароль - Hello-RedOS"
else
   echo "В тесте была допущена ошибка"
fi
echo " "
