#include "main.h"

/**
 * print_diagonal - function that prints an escape character n times
 * @n: Character to check
 */

void print_diagonal(int n)
{
	int i = 0, a = 0;

	if (n > 0)
	{
		while (i < n)
		{
			while (a < i)
			{
				_putchar(' ');
				a++;
			}
			i++;
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
