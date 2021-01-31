#!/bin/sh
echo "Enter c++ filename"
read filename
g++ $filename -o exec
echo "Compiled $filename"