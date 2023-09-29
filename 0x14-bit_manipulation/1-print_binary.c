#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to be printed in binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int highest_power;
	char has_printed = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	highest_power = 1UL << ((sizeof(n) * 8) - 1);

	while (highest_power)
	{
		if (n & highest_power)
		{
			has_printed = 1;
			_putchar('1');
		}
		else if (has_printed)
		{
			_putchar('0');
		}
		highest_power >>= 1;
	}
}
