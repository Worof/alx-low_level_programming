#include "main.h"

/**
 * _strstr - locates a substring in a string.
 * @haystack: string in which to check for the presence of the substring.
 * @needle: substring to find in the haystack.
 *
 * Return: pointer to the beginning of the located substring,
 *         or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *start = haystack;
	char *pattern = needle;

	while (*haystack)
	{
		if (*haystack == *pattern)
		{
			start = haystack;
			while (*haystack && *pattern && *haystack == *pattern)
			{
				haystack++;
				pattern++;
			}

			if (!*pattern)
			{
				return (start);
			}
			haystack = start + 1; /* Reset haystack */
			pattern = needle; /* Reset pattern */
		}
		else
		{
			haystack++;
		}
	}
	return (0);
}
