#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string that'll be reversed
 */
void rev_string(char *s)
{
	int i, j;
	char temp;

	for (i = 0; s[i]; i++)
		;

	i--;

	for (j = 0; j < i; j++, i--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
