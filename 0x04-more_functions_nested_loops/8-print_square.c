#include "main.h"

/**
 * print_square - function that prints a hash character n times
 * @size: Character to check
 */

void print_square(int size)
{
	int i, a;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (a = 0; a < size; a++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
