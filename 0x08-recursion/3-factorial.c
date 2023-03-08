#include "main.h"

/**
 * factorial - finds factorial of the integer
 * @n: the character to print
 *
 * Return: On success factorial of the integer
 */

int factorial(int n)
{
	if (n <= 1)
	{
		if (n < 0)
			return (-1);
		else
			return (1);
	}
	else
		return (n * factorial(n - 1));
}
