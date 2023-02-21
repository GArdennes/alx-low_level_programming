#include "main.h"

/**
 * _islower - Function checking if a variable is lowercase
 */

int _islower(int c)
{
	if (islower(c) == 0)
	{
		_putchar('0');
	}
	else
		_putchar('1');
	return (0);
}
