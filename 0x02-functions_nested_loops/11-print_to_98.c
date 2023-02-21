#include "main.h"

/**
 * print_to_98 - prints natural numbers from n to 98
 * @n: The character to check
 */

void print_to_98(int n)
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


