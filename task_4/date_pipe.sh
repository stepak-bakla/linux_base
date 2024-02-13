mkfifo date2_pipe
while true; do
date +"%H:%M %d/%m/%Y" > date2_pipe
sleep 1
done 
