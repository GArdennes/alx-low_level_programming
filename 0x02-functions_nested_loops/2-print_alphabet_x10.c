#include "main.h"

/**
 * print_alphabet_x10 - Function printing lowercase alphabets 10 times
 */

void print_alphabet_x10(void)
{
	int i;
	int a = 0;

	while (a < 10)
	{
		for (i = 'a'; i <= 'z'; ++i)
		{
			_putchar(i);
		}
		_putchar('\n');
		a++;
	}
}
