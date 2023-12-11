#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
char *_strncat(char *dest, char *src, int n) {
    int i = 0, j = 0;
    while (dest[i]) {
        i++;
    }
    while (j < n && src[j]) {
        dest[i++] = src[j++];
    }
    if (j < n) {
        dest[i] = '\0';
    }
    return dest;
}
