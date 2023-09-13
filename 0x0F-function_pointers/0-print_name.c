#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints a name using a given function pointer
 * @name: name to be printed
 * @f: function pointer to the printing function
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
