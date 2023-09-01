#!/bin/bash

# Navigate to the directory (change the path if your directory is elsewhere)
cd alx-low_level_programming/0x0A-argc_argv

# Open the README.md in vi in ex mode
vi -E -s README.md << END
i
# 0x0A. C - argc, argv

## Learning Objectives

- How to use arguments passed to your program
- What are two prototypes of main that you know of, and in which case do you use one or the other
- How to use __attribute__((unused)) or (void) to compile functions with unused variables or parameters

## Tasks

### 0. It ain't what they call you, it's what you answer to
Write a program that prints its name, followed by a new line.
- If you rename the program, it will print the new name, without having to compile it again
- You should not remove the path before the name of the program

File: 0-whatsmyname.c

## Compilation

Your programs and functions will be compiled with gcc using the options -Wall -Werror -Wextra -pedantic -std=gnu89.
^[
ZZ
END
