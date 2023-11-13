echo program for performing KILL operations
ps
echo enter the pid
read pid
kill -n 9 $pid
echo finished
