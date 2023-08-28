#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: The pointer to be set.
 * @to: The character string to point to.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
