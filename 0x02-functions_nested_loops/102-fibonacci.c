#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * followed by a newline.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int a = 1, b = 2, c;
	int count;

	printf("%lu, %lu", a, b);
	for (count = 2; count < 50; count++)
	{
		c = a + b;
		printf(", %lu", c);
		a = b;
		b = c;
	}
	printf("\n");

	return (0);
}
