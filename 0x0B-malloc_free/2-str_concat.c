#include "main.h"
#include <stdlib.h>

/**
 * _strlen - returns the length of a string.
 * @s: The string to measure.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;

	return (len);
}

/**
 * str_concat - concatenates two strings.
 * @s1: First string.
 * @s2: Second string.
 *
 * Return: Pointer to the concatenated string, or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int i = 0, j = 0, len1, len2;

	/* Handle NULL strings as empty strings */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	/* Allocate memory for the concatenated string */
	concat_str = malloc((len1 + len2 + 1) * sizeof(char));

	/* Check if memory allocation failed */
	if (concat_str == NULL)
		return (NULL);

	/* Copy s1 to concat_str */
	while (i < len1)
	{
		concat_str[i] = s1[i];
		i++;
	}

	/* Copy s2 to concat_str */
	while (j < len2)
	{
		concat_str[i] = s2[j];
		i++;
		j++;
	}

	/* Null terminate the concatenated string */
	concat_str[i] = '\0';

	return (concat_str);
}
