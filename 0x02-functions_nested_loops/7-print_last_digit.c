#include "main.h"

/**
 * print_last_digit - prints and returns the last digit of a number
 * @n: The number whose last digit is printed and returned
 *
 * Return: The last digit of the number
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	if (last_digit < 0)
		last_digit *= -1;
	_putchar('0' + last_digit);
	return last_digit;
}

