#!/bin/bash
gcc -fPIC -c *.c
gcc -shared -W1,-soname,liball.so -o liball.so *.o
