#include "main.h"
#include <stdio.h>

/**
 * reverse_string - Reverses a string in-place.
 * @str: The string to reverse.
 */
void reverse_string(char *str)
{
	int length = 0;
	char temp;
	int i;

	while (str[length] != '\0')
		length++;

	for (i = 0; i < length / 2; i++)
	{
		temp = str[i];
		str[i] = str[length - i - 1];
		str[length - i - 1] = temp;
	}
}

/**
 * infinite_add - Adds two numbers stored as strings.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: The buffer to store the result.
 * @size_r: The size of the buffer.
 *
 * Return: Pointer to the result, or 0 if result cannot be stored in r.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, carry = 0, sum, i, j;

	while (n1[len1] != '\0')
		len1++;
	while (n2[len2] != '\0')
		len2++;

	if (len1 > size_r - 1 || len2 > size_r - 1)
		return (0);

	r[size_r - 1] = '\0';
	len1--;
	len2--;

	for (i = size_r - 2; len1 >= 0 || len2 >= 0 || carry; i--)
	{
		sum = carry;

		if (len1 >= 0)
			sum += n1[len1--] - '0';
		if (len2 >= 0)
			sum += n2[len2--] - '0';

		r[i] = (sum % 10) + '0';
		carry = sum / 10;
	}

	if (i == -1)
		return (0);

	j = 0;

	while (r[i] != '\0')
	{
		char temp = r[j];
		r[j] = r[i];
		r[i] = temp;
		i++;
		j++;
	}

	return (r);
}
