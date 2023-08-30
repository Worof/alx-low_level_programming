#include "main.h"

/**
 * wildcmp - Compares two strings considering wildcard * in second string.
 * @s1: First string.
 * @s2: Second string which can contain a wildcard *.
 * Return: 1 if considered identical, otherwise 0.
 */
int wildcmp(char *s1, char *s2)
{
	/* if we reach the end of both strings, they are identical */
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	/* if we find * in s2, then we need to check in 2 ways */
	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)));

	/* if characters are same, continue to next character */
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	/* if none of the above conditions, then strings are not identical */
	return (0);
}
