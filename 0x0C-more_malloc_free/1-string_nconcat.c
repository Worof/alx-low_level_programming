#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings up to n bytes of s2.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes to use from s2.
 *
 * Return: A pointer to the newly allocated space in memory containing the
 * concatenated strings, NULL if the function fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1 = 0, len2 = 0;
	char *concat_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Find lengths of the two strings */
	while (s1[len1])
		len1++;
	while (s2[len2] && len2 < n)
		len2++;

	/* Allocate memory for the concatenated string */
	concat_str = malloc(len1 + len2 + 1);
	if (concat_str == NULL)
		return (NULL);

	/* Populate the new string */
	for (i = 0; i < len1; i++)
		concat_str[i] = s1[i];
	for (j = 0; j < len2; j++, i++)
		concat_str[i] = s2[j];

	concat_str[i] = '\0';  /* Null terminate the new string */

	return (concat_str);
}
