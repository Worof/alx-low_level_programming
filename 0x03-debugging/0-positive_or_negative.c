#include "main.h"

/**
 * positive_or_negative - Print if number is positive, negative, or zero
 * @i: the integer to be tested
 * Return: nothing
 */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else
		printf("%d is negative\n", i);
}
