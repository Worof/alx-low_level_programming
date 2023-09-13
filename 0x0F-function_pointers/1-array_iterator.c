#include "function_pointers.h"

/**
 * array_iterator - Execute a function on each element of an array
 * @array: Pointer to the array
 * @size: Size of the array
 * @action: Pointer to the function to execute
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
