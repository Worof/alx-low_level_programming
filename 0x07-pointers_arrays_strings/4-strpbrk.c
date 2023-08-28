#include "main.h"

/**
 * _strpbrk - Searches a string for any set of bytes.
 * @s: The string to be searched.
 * @accept: The bytes to be searched for.
 *
 * Return: If a set is matched - a pointer to the first match in `s`.
 *         If no set is matched - NULL.
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *temp = accept;

		while (*temp)
		{
			if (*s == *temp)
				return (s);
			temp++;
		}
		s++;
	}
	return (NULL);
}
