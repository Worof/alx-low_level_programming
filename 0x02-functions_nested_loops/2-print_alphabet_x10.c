/**
 * print_alphabet_x10 - Prints the alphabet 10 times, in lowercase.
 *
 * This function prints the alphabet, in lowercase letters, 10 times,
 * each time followed by a new line. Utilizes the _putchar function.
 * Complies with the Betty coding style.
 */
#include "main.h"

void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
