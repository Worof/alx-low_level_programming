#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
char *_strstr(char *haystack, char *needle) {
    if (!*needle) {
        return haystack;
    }

    while (*haystack) {
        char *begin = haystack;
        char *pattern = needle;

        while (*haystack && *pattern && *haystack == *pattern) {
            haystack++;
            pattern++;
        }

        if (!*pattern) {
            return begin;
        }

        haystack = begin + 1;
    }

    return NULL;
}
