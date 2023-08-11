#include <stdio.h>
/**
 * main - A program to print the alphabet in lowercase followed by a new line
 *
 * Return: Always 0 (Success)
*/
int main(void) 
{
char letter;
/**
 * Loop to iterate through the alphabet and print each letter
*/
for (letter = 'a'; letter <= 'z'; letter++)
putchar(letter);
putchar('\n');
return (0);
}
