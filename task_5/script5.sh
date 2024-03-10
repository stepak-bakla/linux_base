#!/usr/bin/env bash
echo -n " enter username "
read name
if [[ -z $name ]]; then 
    echo "the name can't be empty" # проверка на наличие символов
    exit 1
fi

info_user() {
    grep=$(cat user.txt | grep $name)
    if [[ -z $grep ]]; then 
    echo "No information user $name"
    exit 1
    else
    echo "$grep"
    fi
}

create_user() {
    echo "Creating user $name "
    useradd $name
    dir=$(getent passwd $name | cut -d: -f6)
    createTime=$(date +%s)
    echo "$name $createTime - $dir" >> ./user.txt

}

delete_user() {
    echo "Deleting user $name"
    userdel $name
    delTime=$(date +%s)
    sed -i "s/-/$delTime/g" ./user.txt
}

info_all() {
    printf "all user info\n-------------\n"
    file="./user.txt"
    line_count=$(wc -l < "$file")
    for ((i=1; i<=line_count; i++)); do
        line=$(sed -n "${i}p" "$file")
    echo "$i: $line"
    done
    
}

echo -n " Enter: 1 view user info | 2 - create user | 3 - delete user | 4 - all info user:  "
read i

case "$i" in
    1)
        info_user ""
        ;;
    2)
        create_user ""
        ;;
    3)
        delete_user ""
        ;;
    4)
        info_all ""
        ;;
    *)
        echo "Usage: 1 - view user info | 2 - create user | 3 - delete user username |4 -  all info user "
        exit 1
        ;;
esac