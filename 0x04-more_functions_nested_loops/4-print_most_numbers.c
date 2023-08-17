#include "main.h"

/**
 * print_most_numbers - Print numbers 0 to 9, skipping 2 and 4
 *
 * Description: Prints numbers from 0 to 9 except 2 and 4
 * followed by a new line, using _putchar function.
 */
void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		if (num != 2 && num != 4)
		{
			_putchar(num + '0');
		}
	}
	_putchar('\n');
}
