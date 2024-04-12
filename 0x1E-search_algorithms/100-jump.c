#include <stdio.h>
#include <stdlib.h>
#include <math.h>

size_t min(size_t a, size_t b)
{
	return ((a < b) ? a : b);
}

/**
 * jump_search - Searches for a value in a sorted array of integers
 *               using the Jump search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: First index where value is located
 *         If value is not present in array or if array is NULL, returns -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump;
	size_t prev;
	size_t step;

	if (array == NULL || size == 0)
		return (-1);

	jump = (size_t)sqrt(size);
	prev = 0;
	step = jump;

	while (array[min(step, size) - 1] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		prev = step;
		step += jump;
		if (prev >= size)
			return (-1);
	}

	while (array[prev] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		prev++;
		if (prev == min(step, size))
			return (-1);
	}

	printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
	if (array[prev] == value)
		return ((int)prev);
	return (-1);
}
