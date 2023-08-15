#include <stdio.h>

/**
 * main - Entry point for the program
 *
 * Description: Calculate the sum of even Fibonacci numbers less than 4000000
 *
 * Return: 0 if successful
 */
int main(void)
{
	unsigned long int a = 1, b = 2, c = 0, sum = 2; /* Initialize variables and sum with the first even term */

	/* Loop through the Fibonacci sequence until the next term is more than 4000000 */
	while (1)
	{
		c = a + b; /* Calculate next Fibonacci number */

		if (c > 4000000) /* Break the loop if the next term exceeds 4000000 */
			break;

		if (c % 2 == 0) /* If the next term is even, add it to the sum */
			sum += c;

		a = b; /* Move the values along */
		b = c;
	}

	printf("%lu\n", sum); /* Print the sum of even Fibonacci numbers less than 4000000 */

	return (0); /* Return 0 for successful execution */
}
