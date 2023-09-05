#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of the program.
 * @ac: Argument count.
 * @av: Argument vector.
 *
 * Return: Pointer to the new string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	char *str, *begin;
	int i, j, total_len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* Calculate total length required */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			total_len++;
		total_len++;  /* For '\n' */
	}

	/* Allocate memory for the concatenated string */
	str = malloc(total_len + 1);  /* +1 for the null byte */
	if (str == NULL)
		return (NULL);

	begin = str;

	/* Populate the string */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++, str++)
			*str = av[i][j];
		*str = '\n';
		str++;
	}

	*str = '\0';

	return (begin);
}
