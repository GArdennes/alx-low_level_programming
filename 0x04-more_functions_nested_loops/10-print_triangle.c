#include "main.h"

/**
 * print_triangle - function that prints a hash character as a triangle
 * @size: Character to check
 */

void print_triangle(int size)
{
	int i, a, x;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (a = size - i; a >= 1; a--)
				_putchar(' ');
			for (x = 1; x <= i; x++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
