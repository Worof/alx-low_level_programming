#include <stdio.h>
#include <math.h>

/**
 * main - main function
 * Return: Always 0
 */
int main(void)
{
	long int n = 612852475143;
	long int maxPrime = -1;
	int i;

	/* Dividing by 2 until n becomes odd */
	while (n % 2 == 0)
	{
		maxPrime = 2;
		n /= 2;
	}

	/* n must be odd at this point, so we can skip one element */
	for (i = 3; i <= sqrt(n); i += 2)
	{
		/* While i divides n, divide n and update maxPrime */
		while (n % i == 0)
		{
			maxPrime = i;
			n /= i;
		}
	}

	/* If n becomes a prime number greater than 2 */
	if (n > 2)
		maxPrime = n;

	printf("%ld\n", maxPrime);
	return (0);
}
