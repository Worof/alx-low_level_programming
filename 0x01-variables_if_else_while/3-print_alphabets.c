#include <stdio.h>
/**
* main - Prints the alphabet in lowercase and then in uppercase,
* followed by a new line.
*
* Return: Always 0 (Success)
*/
int main(void)
{
char letter;
/* Loop to iterate through both lowercase and uppercase alphabets */
for (letter = 'a'; letter <= 'z'; letter++)
putchar(letter);
for (letter = 'A'; letter <= 'Z'; letter++)
putchar(letter);
putchar('\n');
return (0);
}
