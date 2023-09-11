# 0x0D-preprocessor

This directory contains exercises related to C preprocessor, focusing on macros, include guarding, and advanced preprocessing techniques.

## Requirements

- Allowed editors: `vi`, `vim`, `emacs`.
- All files will be compiled on Ubuntu 20.04 LTS using `gcc` with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`.
- All files should end with a new line.
- Code should use the Betty style and will be checked using `betty-style.pl` and `betty-doc.pl`.
- No global variables are allowed.
- Maximum of 5 functions per file.
- Allowed C standard library functions: `malloc`, `free`, and `exit`. Other functions like `printf`, `puts`, etc. are forbidden.
- `_putchar` function is allowed.
- Do not push `_putchar.c`. It will be supplied by other sources.
- Push the header file.
- All header files should be include guarded.

## Files & Descriptions

- `0-object_like_macro.h`: Defines a macro named SIZE as an abbreviation for the token 1024.

(Note: Add descriptions for other files in the directory as they are created)

## Usage

To compile the files, use:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 <filename>.c -o <outputname>
