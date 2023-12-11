#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
char *_strchr(char *s, char c) {
    while (*s != '\0') {
        if (*s == c) {
            return s;
        }
        s++;
    }
    return (c == '\0') ? s : NULL;
}
