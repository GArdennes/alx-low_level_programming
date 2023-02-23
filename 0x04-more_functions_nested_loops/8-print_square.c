#include "main.h"

/**
 * print_diagonal - function that prints an escape character n times
 * @size - Character to check
 */

void print_diagonal(int n)
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
	_putchar('\n');
}
