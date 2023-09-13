#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - Prints the opcodes of a function.
 * @addr: Address of the function
 * @size: Number of bytes to print
 */
void print_opcodes(char *addr, int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		/* Print each byte in hexadecimal format with two characters */
		printf("%02x", addr[i]);

		/* Print a space after each byte except the last one */
		if (i < size - 1)
			printf(" ");
	}
	printf("\n");
}

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 on success, 1 on incorrect argument count, 2 on negative size
 */
int main(int argc, char *argv[])
{
	int size;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	size = atoi(argv[1]);

	if (size < 0)
	{
		printf("Error\n");
		return (2);
	}

	print_opcodes((char *)&main, size);

	return (0);
}
