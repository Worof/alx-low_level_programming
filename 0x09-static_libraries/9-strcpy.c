#include "main.h"

char *_strcpy(char *dest, char *src)
{
    char *original_dest = dest;
    while (*src)
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    return original_dest;
}
