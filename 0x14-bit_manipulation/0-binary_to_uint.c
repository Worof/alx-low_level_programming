#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int base = 1;

	if (!b)
		return (0);

	for (; *b; b++)
		if (*b != '0' && *b != '1')
			return (0); /* Return 0 if invalid character */

	for (b--; *b; b--) /* Point to the last valid character */
	{
		if (*b == '1')
			decimal += base;
		base *= 2;
	}

	return (decimal);
}
