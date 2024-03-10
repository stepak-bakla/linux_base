Написать скрипт, который следит за местом на партиции.
Если свободного места осталось менее 50%, записать в лог об этом в формате
день-месяц-год час-минута-секунда myDiskChecker: <partition> - less than 50%

Если свободного места осталось менее 10%, записать в лог об этом в формате
день-месяц-год час-минута-секунда myDiskChecker: <partition> - less than 10%
#Осторожно!! тут копипаст, с прошлого занятия 


part=$(df -h |grep /dev/sdc | awk '{print $5}')
a=$(date +'%d-%m-%Y %H:%M:%S')
touch /var/log/myDiskChecker.log
if  $part -gt 50  &&  $part -lt 90 ;then
        echo "$a myDiskChecker: < $part> - less than 50%" >> /var/log/myDiskChecker.log
fi

if  $part -gt 90  ; then
        echo "$a myDiskChecker: <$part> - less than 10%" >> /var/log/myDiskChecker.log
else
echo  "memory normal" 
fi