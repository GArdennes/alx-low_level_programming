#include "main.h"

/**
 * print_line - function that draws an underscore n times
 * @n: Character to check
 */

void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		while (i < n)
		{
			_putchar('_');
			i++;
		}
	}
	_putchar('\n');
}
