#include <stdio.h>

/**
 * main - prints the number of arguments passed to it.
 * @argc: number of command line arguments.
 * @argv: array of command line arguments.
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
(void)argv;  /* to prevent unused variable warning */
printf("%d\n", argc - 1);
return (0);
}
