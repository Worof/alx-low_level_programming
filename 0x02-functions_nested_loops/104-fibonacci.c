#include <stdio.h>

/**
 * main - Entry point for the program
 * Description: Calculates and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 * Numbers are separated by a comma and a space.
 * Return: 0 if successful, non-zero otherwise
 */
int main(void)
{
	int i;
	unsigned long int a = 1, b = 2, next, a1, a2, b1, b2;

	printf("%lu, %lu", a, b); /* Print first two numbers */

	for (i = 3; i <= 98; i++)
	{
		if (i <= 92) /* Within range of unsigned long int */
		{
			next = a + b;
			a = b;
			b = next;
		}
		else if (i == 93)
		{
			a1 = a / 10000000000;
			a2 = a % 10000000000;
			b1 = b / 10000000000;
			b2 = b % 10000000000;
		}
		else /* Handling numbers larger than unsigned long int can hold */
		{
			a1 = b1;
			a2 = b2;
			b1 += a1;
			b2 += a2;
			if (b2 > 9999999999) /* Handling carry */
			{
				b2 -= 10000000000;
				b1++;
			}
		}

		if (i > 92)
		{
			printf(", %lu", b1);
			if (b2 < 1000000000) printf("0"); /* To handle missing zeros */
			printf("%lu", b2);
		}
		else
		{
			printf(", %lu", next);
		}
	}

	printf("\n");
	return (0);
}
