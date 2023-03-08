#include "main.h"

/**
 * _pow_recursion - finds exponent of the integer
 * @x: Integer to check
 * @y: Integer to check
 * Return: On success exponent of the integer
 */

int _pow_recursion(int x, int y)
{
	if (y <= 0)
	{
		if (y < 0)
			return (-1);
		else
			return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
