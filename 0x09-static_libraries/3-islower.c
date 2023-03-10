#include "main.h"

/**
 * _islower - Function checking if a variable is lowercase
 * @c: The character to check
 *
 * Return: On success 1,
 * On error, 0 is returned.
 */

int _islower(int c)
{
	if (islower(c) == 0)
	{
		return (0);
	}
	else
		return (1);
}
