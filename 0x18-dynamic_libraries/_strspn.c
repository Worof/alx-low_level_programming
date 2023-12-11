#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
unsigned int _strspn(char *s, char *accept) {
    unsigned int count = 0;
    char *start = accept;

    while (*s) {
        while (*accept) {
            if (*s == *accept) {
                count++;
                break;
            }
            accept++;
        }
        if (!*accept) {
            break;
        }
        accept = start;
        s++;
    }
    return count;
}
