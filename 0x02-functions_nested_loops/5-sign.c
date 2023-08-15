#include "main.h"

/**
 * print_sign - Check the sign of a number
 * @n: The number we are checking
 *
 * Return: 1 if n is greater than zero, 0 if n's zero, and -1 if n's less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return 1;
	}
	if (n == 0)
	{
		_putchar('0');
		return 0;
	}
	_putchar('-');
	return -1;
}
