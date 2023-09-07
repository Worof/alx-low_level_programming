#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: Size in bytes for the allocation.
 *
 * Return: A pointer to the allocated memory.
 * If malloc fails, terminates the process with a status of 98.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (!ptr)
		exit(98);

	return (ptr);
}
