#include "main.h"

/**
 * print_binary - converts decimal to binary
 * @n: Number to check
 */
void print_binary(unsigned long int n)
{
	int skip_zeros = 1;
	unsigned long int buffer;

	buffer = 1UL << (sizeof(unsigned long int) * 8 - 1);
	while (buffer > 0)
	{
		if ((n & buffer) != 0)
		{
			_putchar('1');
			skip_zeros = 0;
		}
		else if (!skip_zeros)
		{
			_putchar('0');
		}
		buffer >>= 1;
	}
	if (skip_zeros)
		_putchar('0');
}
