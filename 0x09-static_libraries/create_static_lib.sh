#!/bin/bash

#This compile all the c file in the current dir
gcc -c *.c

#this create a static library
ar -rcs liball.a *.o

#create indexing
ranlib liball.a