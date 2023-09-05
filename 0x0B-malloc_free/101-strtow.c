#include "main.h"
#include <stdlib.h>

/**
 * word_count - Counts the number of words in a string.
 * @str: The string to be checked.
 *
 * Return: The number of words in the string.
 */
int word_count(char *str)
{
	int i, count = 0;

	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			count++;
	}
	return (count);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to be split.
 *
 * Return: If str == NULL, str == "", or the function fails - NULL.
 *         Otherwise - a pointer to the array of words.
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, w, len = 0, total_words;

	if (str == NULL || *str == '\0')
		return (NULL);

	total_words = word_count(str);
	if (total_words == 0)
		return (NULL);

	words = malloc((total_words + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	for (i = 0, w = 0; w < total_words; )
	{
		while (str[i] == ' ')
			i++;
		j = i;
		while (str[j] && str[j] != ' ')
			j++, len++;

		words[w] = malloc((len + 1) * sizeof(char));
		if (words[w] == NULL)
		{
			for (; w >= 0; w--)
				free(words[w]);
			free(words);
			return (NULL);
		}

		for (k = 0; k < len; k++, i++)
			words[w][k] = str[i];
		words[w++][k] = '\0';
		len = 0;
	}
	words[w] = NULL;

	return (words);
}
