#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
char *_strncpy(char *dest, char *src, int n) {
    int i = 0;
    while (i < n && src[i]) {
        dest[i] = src[i];
        i++;
    }
    while (i < n) {
        dest[i++] = '\0';
    }
    return dest;
}
