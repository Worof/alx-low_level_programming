#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *           which contains a copy of the string given as a parameter.
 * @str: The string to duplicate.
 *
 * Return: If str = NULL or insufficient memory is available - NULL.
 *         Otherwise - a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *duplicate;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	/* Calculate the length of the string */
	while (str[len])
		len++;

	/* Allocate memory for the duplicate string */
	duplicate = malloc(sizeof(char) * (len + 1));

	if (duplicate == NULL)
		return (NULL);

	/* Copy the string */
	for (i = 0; i < len; i++)
		duplicate[i] = str[i];

	duplicate[len] = '\0';

	return (duplicate);
}
