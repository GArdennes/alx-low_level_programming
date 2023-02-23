#include "main.h"

/**
 * print_diagonal - function that prints an escape character n times
 * @n: Character to check
 */

void print_diagonal(int n)
{
	int i, a;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (a = 0; a < i; a++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	_putchar('\n');
}
