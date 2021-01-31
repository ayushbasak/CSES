#!/bin/sh
echo "Enter folder/<c++ filename>"
read filename
g++ $filename -o exec
echo "Compiled $filename"