#!/bin/bash

mkfifo date_pipe

while true; do
    date +"%H:%M %d/%m/%Y"  > date_pipe
    sleep 1
done
