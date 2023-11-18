#!/bin/bash

# check if the /proc/sys/kernel/pid_max file exists
if [[ -e /proc/sys/kernel/pid_max]]; then
	# Read the maximum PID value from the file
	max_pid=$(cat /proc/sys/kernel/pid_max)
	#print the maximum PID
	echo "Maximum PID: $max_pid"
else
	echo "Error: /proc/sys/kernel/pid_max not found."
fi
