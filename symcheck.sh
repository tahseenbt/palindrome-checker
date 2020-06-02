#!/bin/bash
if [ $# -lt 1 ] # check if enough arguments are provided
then
    echo "No arguments provided" # give the error message
    exit 2 # exit with error code 2
fi
if [ ! -f $1 ] # check if the file exists
then
    echo "File does not exist" # give the error message
    exit 3 # exit with error code 3
fi
for i in $(cat $1) # for every word
do
    $(./main $i) # run the program with the word as input
    if [ $? == 0 ] # check the error code
    then
        echo "$i is symmetric" # if the error code is 0, then it is symmetric, print it
    else
        echo "$i is not symmetric" # else print it is not symmetric
    fi
done
