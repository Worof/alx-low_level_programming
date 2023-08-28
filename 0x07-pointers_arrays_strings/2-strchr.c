#include "main.h"

/**
 * _strchr - Locates a character in a string.
 * @s: The string to be searched.
 * @c: The character to be located.
 *
 * Return: If c is found in s, a pointer to the first occurrence.
 *         If c is not found, NULL.
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}

	/* For the edge case if c is the null terminator */
	if (*s == c)
		return (s);

	return (NULL);
}
