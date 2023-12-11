#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"
int _atoi(char *s) {
    int sign = 1, res = 0, i = 0;

    /* Discard whitespaces*/
    while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n') {
        i++;
    }

    /* Check for negative sign*/
    if (s[i] == '-' || s[i] == '+') {
        sign = (s[i++] == '-') ? -1 : 1;
    }

    /* Convert to integer*/
    while (_isdigit(s[i])) {
        res = res * 10 + s[i] - '0';
        i++;
    }

    return sign * res;
}
