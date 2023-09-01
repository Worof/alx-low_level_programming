#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: Pointer to the string to be converted
 *
 * Return: The converted integer
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int encounteredDigit = 0;

	while (*s)
	{
		if (*s == '-' && !encounteredDigit)
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
		{
			encounteredDigit = 1;
			result = result * 10 + (*s - '0') * sign;
		}
		else if (encounteredDigit)
			break;

		s++;
	}

	return (result);
}
