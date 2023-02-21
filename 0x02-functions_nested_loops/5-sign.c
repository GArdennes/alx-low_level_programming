#include "main.h"

/**
 * print_sign - Function checking if a variable is positive or negative
 * @n: The character to check
 *
 * Return: On positive 1 is returned.
 * On negative, -1 is returned.
 * On neutral, 0 is returned.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
