#include "main.h"

/**
 * rot13 - Encodes a string using rot13.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the modified string.
 */
char *rot13(char *str)
{
	char *ptr = str;
	char *alpha_lower = "abcdefghijklmnopqrstuvwxyz";
	char *alpha_upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *rot13_lower = "nopqrstuvwxyzabcdefghijklm";
	char *rot13_upper = "NOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*ptr)
	{
		int i;

		if ((*ptr >= 'a' && *ptr <= 'z') || (*ptr >= 'A' && *ptr <= 'Z'))
		{
			for (i = 0; alpha_lower[i]; i++)
			{
				if (*ptr == alpha_lower[i])
				{
					*ptr = rot13_lower[i];
					break;
				}
			}

			for (i = 0; alpha_upper[i]; i++)
			{
				if (*ptr == alpha_upper[i])
				{
					*ptr = rot13_upper[i];
					break;
				}
			}
		}
		ptr++;
	}

	return (str);
}
