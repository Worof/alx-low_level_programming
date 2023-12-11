#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int _putchar(char c){
    return write (1, &c, 1);
}
