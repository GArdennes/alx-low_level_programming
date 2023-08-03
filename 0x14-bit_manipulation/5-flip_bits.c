#include "main.h"

/**
 * flip_bits -determine number of bits to fkip
 * @n: Number to check
 * @m: Number to check
 * Return: On success result
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flip_count = 0;
	unsigned long int x_result = n ^ m;

	while (x_result != 0)
	{
		if ((x_result & 1) == 1)
			flip_count++;
		x_result = x_result >> 1;
	}
	return (flip_count);
}
