#include "main.h"

/**
 * _strncpy - Copies a string.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of characters to copy from src.
 *
 * Return: A pointer to the resulting string @dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *dest_ptr = dest;
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		*dest_ptr = src[i];
		dest_ptr++;
	}

	for (; i < n; i++)
	{
		*dest_ptr = '\0';
		dest_ptr++;
	}

	return (dest);
}
