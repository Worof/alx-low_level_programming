#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array and sets the memory to zero.
 * @nmemb: Number of members.
 * @size: Size of each member.
 *
 * Return: Pointer to allocated memory or NULL if failure.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i, total_size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;
	ptr = malloc(total_size);

	if (!ptr)
		return (NULL);

	for (i = 0; i < total_size; i++)
		ptr[i] = 0;

	return (ptr);
}
