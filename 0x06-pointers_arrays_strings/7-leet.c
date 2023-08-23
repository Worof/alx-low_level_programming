#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the modified string.
 */
char *leet(char *str)
{
	char leet_letters[] = "aAeEoOtTlL";
	char leet_digits[] = "4433007711";
	char *ptr = str;
	int i;

	while (*ptr)
	{
		for (i = 0; leet_letters[i]; i++)
		{
			if (*ptr == leet_letters[i])
			{
				*ptr = leet_digits[i];
				break;
			}
		}
		ptr++;
	}

	return (str);
}
