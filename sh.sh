# Write a shell script to count the number of files and directories in the current directory, including hidden ones.

#!bin/bash

ls -la | grep -v ^d