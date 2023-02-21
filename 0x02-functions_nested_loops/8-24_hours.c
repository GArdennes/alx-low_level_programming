#include "main.h"

/**
 * jack_bauer - Executable printing count from 00:00 to 23:59
 */

void jack_bauer(void)
{
	int i;
	int a;

	for (i = 0; i <= 23; i++)
	{
		for (a = i + 1; a <= 59; a++)
		{
			_putchar('0' + i / 10);
			_putchar('0' + i % 10);
			_putchar(':');
			_putchar('0' + a / 10);
			_putchar('0' + a % 10);
			_putchar('\n');
		}
	}
}

