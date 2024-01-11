#!/bin/bash

help(){

	echo "usage: $0 <filename> <outfile>"
	echo "Example:"
	echo "	./runner.sh test.c test.alg"
	return 1
}

file=$1
outfile=$2

gcc $file -o $outfile 2>/dev/null

if [[ $(echo $?) -eq 0 ]] ;then
	echo "[+] success program compiled without errors"
	echo "we trying to run the program"
	sleep 1
	echo "[COMMAND] ./$outfile"
	./$outfile 2>/dev/null
	statuscode=$(echo $?)
	case $statuscode in
		-1)
			echo "[!] Error: check your code"
			;;
		0)
			echo "[+] Done ..."
			;;
	esac
elif [[ $(echo $?) -eq 1 ]] ;then
	echo "error for compiling"
fi

