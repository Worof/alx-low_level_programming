#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
char *_strcat(char *dest, char *src) {
    int i = 0, j = 0;
    while (dest[i]) {
        i++;
    }
    while ((dest[i++] = src[j++]));
    return dest;
}
