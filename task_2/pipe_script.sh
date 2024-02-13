#!/bin/bash

mkfifo my_pipe
while true; do
    read line < my_pipe
    echo $line | gzip >> output.gz
done
