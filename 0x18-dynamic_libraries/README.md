# Dynamic Libraries in C

## Project Overview

This project focuses on the creation and usage of dynamic libraries in C programming. Dynamic libraries are libraries that are loaded at runtime, which means that they are not embedded into the executable file, leading to more efficient memory usage and modular program design.

### Learning Objectives

- Understand what a dynamic library is and how it differs from a static library.
- Learn how to create and use dynamic libraries.
- Understand the environment variable `$LD_LIBRARY_PATH` and its usage.
- Explore the usage of tools like `nm`, `ldd`, and `ldconfig`.
- Follow best practices in C programming, such as adhering to the Betty coding style.

## File Descriptions

- `main.h`: Header file containing all function prototypes used in the dynamic library.
- `_putchar.c`: Implementation of the `_putchar` function.
- `_islower.c`, `_isalpha.c`, `_abs.c`, etc.: C files containing implementations of various functions.
- `libdynamic.so`: The compiled dynamic library containing all the functions.
- `0-main.c`: Example main file to test the dynamic library.

## Compilation and Usage

1. Compile the C files into object files:
   ```bash
   gcc -c -fpic *.c
