#include "main.h"

/**
 * sqrt_helper - finds square root of the integer
 * @g: Integer to check
 * @c: Integer to check
 * Return: On success root of the integer
 */

int sqrt_helper(int g, int c)
{
	if (g * g == c)
		return (g);
	if (g * g > c)
		return (-1);
	return (sqrt_helper(g + 1, c));
}

/**
 * _sqrt_recursion - finds square root of the integer
 * @n: Integer to check
 *
 * Return: On success root of the integer
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqrt_helper(1, n));
}
