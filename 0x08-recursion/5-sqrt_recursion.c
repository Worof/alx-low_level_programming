#include "main.h"

/**
 * _sqrt_check - checks for the square root of a number.
 * @n: number to find the square root of
 * @i: integer for checking
 * Return: -1 or the natural square root of n.
 */
int _sqrt_check(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (_sqrt_check(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: input number.
 * Return: natural square root or -1.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_check(n, 0));
}
