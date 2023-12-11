#!/bin/bash

# Creates a dynamic library
gcc -fPIC -c *.c
gcc -shared -o liball.so *.o
