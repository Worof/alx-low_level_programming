#include "main.h"

/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
    /**
     * union endianness - To help determine the endianness of the system.
     * @i: An unsigned int.
     * @c: A character array of size unsigned int.
     */
    union endianness
    {
        unsigned int i;
        char c[sizeof(unsigned int)];
    } endian = {1}; /* Initializing the integer value of the union to 1. */

    /* 
     * If the first byte in memory is 1, it's a little endian system.
     * Otherwise, it's a big endian system.
     */
    return (endian.c[0]);
}
