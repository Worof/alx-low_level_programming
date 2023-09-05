#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it with a specific char.
 * @size: Size of the array to be created
 * @c: Character to initialize the array with
 *
 * Return: Pointer to the array, or NULL if it fails or size = 0
 */
char *create_array(unsigned int size, char c)
{
    char *arr;
    unsigned int i;

    if (size == 0)
        return (NULL);

    arr = malloc(size * sizeof(char)); /* Allocate memory for the array */

    if (arr == NULL) /* Check if memory allocation failed */
        return (NULL);

    for (i = 0; i < size; i++)
        arr[i] = c;

    return (arr);
}
