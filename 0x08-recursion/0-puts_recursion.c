#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line using recursion.
 * @s: The string to be printed.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')  /* Base case */
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);  /* Print the current character */
	_puts_recursion(s + 1);  /* Recursive call with the next character */
}
