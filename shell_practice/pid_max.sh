#!/bin/bash
# check if the /proc/sys/kernel/pid_max file ex
max_pid=$(cat /proc/sys/kernel/pid_max)
echo "MAximum PID Value: $max_pid"
