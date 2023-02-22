#include "main.h"

/**
 * times_table - Prints the times table
 */

void times_table(void)
{
	int i, a, product;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');

		for (a = 0; a <= 9; a++)
		{
			_putchar(',');
			_putchar(' ');

			product = i * a;

			if (product <= 0)
				_putchar(' ');
			else
				_putchar((product / 10) + '0');

			_putchar((product % 10) + '0');
		}

		_putchar('\n');
	}
}
