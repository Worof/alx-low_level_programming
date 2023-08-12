#include <stdio.h>
/**
 * main - Prints all the numbers of base 16 in lowercase,
 * followed by a newline.
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
int number;
for (number = 0; number < 16; number++)
if (number < 10)
putchar(number + '0'); /* Fix: added '0' to convert integer to char */
else
putchar(number + 'a' - 10);
putchar('\n');
return (0);
}
