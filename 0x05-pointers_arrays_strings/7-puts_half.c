#include "main.h"

/**
 * puts_half - prints the second half of a string
 * followed by a new line
 * @str: the string to print
 *
 * If the number of characters is odd, prints the last
 * n characters of the string where n = (length_of_the_string - 1) / 2
 */
void puts_half(char *str)
{
	int length = 0;
	int startPoint;
	int i;

	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
	{
		startPoint = length / 2;
	}
	else
	{
		startPoint = (length - 1) / 2;
	}

	for (i = startPoint; i < length; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
