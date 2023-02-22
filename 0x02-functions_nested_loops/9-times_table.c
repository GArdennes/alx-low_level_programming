#include "main.h"

/**
 * times_table - Prints the times table
 */

void times_table(void)
{
	int i, a, product, d1, d2;

	for (i = 0; i <= 9; i++)
	{
		for (a = 0; a <= 9; a++)
		{
			product = i * a;
			d1 = product / 10;
			if (d1 != 0)
				_putchar('0' + d1);
			else
				_putchar(' ');
			d2 = product % 10;
			_putchar('0' + d2);
			if (a == 9)
				_putchar('\n');
			else
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
