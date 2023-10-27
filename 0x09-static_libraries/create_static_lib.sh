#!/bin/bash
gcc -c *.c
ar -rc liball.a -o *.o
ranlib liball.a
