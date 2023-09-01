#include "main.h"

/**
 * _strncat - Concatenates two strings using at most n bytes from src.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of bytes from src to concatenate.
 *
 * Return: A pointer to the resulting string @dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *dest_end = dest;
	int i;

	while (*dest_end)
		dest_end++;

	for (i = 0; i < n && *src; i++)
	{
		*dest_end = *src;
		dest_end++;
		src++;
	}

	*dest_end = '\0';

	return (dest);
}
