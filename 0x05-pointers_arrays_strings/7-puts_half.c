#include "main.h"
#include <string.h>

/**
 * puts_half - prints the second half of a string
 * @str: the string to modify
 *
 * If the number of characters is odd, print the last n characters of the
 * string, where n = (length_of_the_string - 1) / 2
 */
void puts_half(char *str)
{
	int len, n, i;

	len = strlen(str);
	if (len % 2 == 0)
		n = len / 2;
	else
		n = (len - 1) / 2;

	for (i = n; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
