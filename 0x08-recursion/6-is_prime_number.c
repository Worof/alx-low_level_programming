#include "main.h"

/**
 * check_prime - Checks if a number is prime.
 * @n: The number to be checked.
 * @i: The current divisor being checked.
 *
 * Return: 1 if n is prime, otherwise 0.
 */
int check_prime(int n, int i)
{
	if (n % i == 0)
		return (0);
	if (i * i > n)
		return (1);
	return (check_prime(n, i + 1));
}

/**
 * is_prime_number - Checks if the input integer is a prime number.
 * @n: The number to be checked.
 *
 * Return: 1 if n is a prime number, otherwise 0.
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (check_prime(n, 2));
}
