#!/bin/bash

# To compile all .c files in the current directory into object files run:
gcc -c -fPIC *.c
# Create the dynamic library liball.so from the object files
gcc -shared -o liball.so *.o
# Then remove the object files
rm *.o
