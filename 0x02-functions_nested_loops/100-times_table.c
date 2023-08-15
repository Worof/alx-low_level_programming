#include <stdio.h>

/**
 * print_times_table - Print the n times table up to 15.
 * @n: the table to print.
 *
 * Return: None.
 */
void print_times_table(int n)
{
    int i, j, product;

    if (n < 0 || n > 15)
        return;

    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= n; j++)
        {
            product = i * j;

            if (j != 0)
            {
                if (product < 10)
                    printf("   ");  /* Three spaces for a single digit */
                else if (product < 100)
                    printf("  ");   /* Two spaces for two digits */
            }
            printf("%d", product);

            if (j != n)
                printf(", ");      /* Print comma and space */
        }
        printf("\n");
    }
}
