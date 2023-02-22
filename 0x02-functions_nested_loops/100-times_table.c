#include "main.h"

/**
 * print_times_table - Prints the times table
 *@n - character to check
 */

void print_times_table(int n)
{
	int i, a, product, d1, d2;

	if (n < 15 || n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (a = 0; a <= n; a++)
			{
				product = i * a;
				d1 = product / 10;
				if (d1 != 0)
					_putchar('0' + d1);
				else
					_putchar(' ');
				d2 = product % 10;
				_putchar('0' + d2);
				if (a == n)
					_putchar('\n');
				else
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
	}
}
