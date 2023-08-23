#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 *
 * Return: A pointer to the resulting string @dest.
 */
char *_strcat(char *dest, char *src)
{
	char *dest_end = dest;

	while (*dest_end)
		dest_end++;

	while (*src)
	{
		*dest_end = *src;
		dest_end++;
		src++;
	}

	*dest_end = '\0';

	return (dest);
}
