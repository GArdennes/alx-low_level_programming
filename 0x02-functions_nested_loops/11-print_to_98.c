#include "main.h"

/**
 * print_to_98 - prints natural numbers from n to 98
 * @n: The character to check
 */

void times_table(void)
{
	int i;
	
	for (i = n; i <= 98; ++i)
	{
		_putchar('0' + i);
		if ( i == 98 )
			_putchar('\n');
		else
		{
			_putchar(',');
			_putchar(' ');
		}
	}
}


