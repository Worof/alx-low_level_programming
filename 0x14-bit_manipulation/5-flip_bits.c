#include "main.h"

/**
 * flip_bits - returns the number of bits to flip
 *             to get from one number to another.
 * @n: the first number
 * @m: the second number
 *
 * Return: the number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_res;
	unsigned int count = 0;

	xor_res = n ^ m;

	while (xor_res)
	{
		count += xor_res & 1;
		xor_res >>= 1;
	}

	return (count);
}
