#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array using a comparison function
 * @array: Pointer to the array of integers
 * @size: Number of elements in the array
 * @cmp: Pointer to the comparison function
 *
 * Return: Index of the first element for which cmp returns non-zero,
 *         or -1 if no such element is found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
