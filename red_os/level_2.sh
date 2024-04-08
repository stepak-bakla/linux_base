#!/bin/bash
dir=$(ls | grep dir)

# Check if the directory exists
if [[ -d $dir ]]; then
    echo "Каталог $dir существует."

    # Check if the hello file exists in the directory
    if [ -f "$dir/hello" ]; then
        echo "Файл hello существует в каталоге $dir."
	echo "---------------------------------------------------"
	echo "username - linux, password - nil8pkUt2"
    else
        echo "Файл hello не существует в каталоге $dir."
    fi
else
    echo "Каталог $dir не существует."
fi

