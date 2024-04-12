#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * print_array - Prints an array of integers
 * @array: The array to be printed
 * @size: The size of the array
 */
void print_array(const int *array, size_t size)
{
	size_t i;

	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		printf("%d", array[i]);
		if (i < size - 1)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search_recursive performs a recursive binary search
 * @array: Pointer to the first element of the array to search in
 * @left: Left index of the subarray to search in
 *
 * @right: Right index of the subarray to search in
 * @value: Value to search for
 *
 * Return: The first index where value is located
 * Return -1 if not found or array is NULL
 */
int binary_search_recursive(int *array, size_t left, size_t right, int value)
{
	if (right >= left)
	{
		size_t mid = left + (right - left) / 2;

		print_array(array + left, right - left + 1);

		if ((mid == 0 || value > array[mid - 1]) && array[mid] == value)
			return (mid);
		if (array[mid] >= value)
			return (binary_search_recursive(array, left, mid, value));
		return (binary_search_recursive(array, mid + 1, right, value));
	}
	return (-1);
}

/**
 * advanced_binary:Searches for a value in a sorted array of integers
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: The first index where value is located
 * Return -1 if not found or array is NULL
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array || size == 0)
		return (-1);

	return (binary_search_recursive(array, 0, size - 1, value));
}
