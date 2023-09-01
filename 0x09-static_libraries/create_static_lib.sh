#!/bin/bash
# Script to compile all .c files and create a static library.

# First, compile all .c files into .o files.
gcc -Wall -Werror -Wextra -pedantic -c *.c

# Next, create the static library from all the .o files.
ar -rc liball.a *.o

# Optional: clean up the .o files after library creation.
rm *.o
