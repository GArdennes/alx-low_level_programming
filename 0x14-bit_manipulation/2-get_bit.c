#include "main.h"

/**
 * get_bit - get bit at particular index
 * @n: Number to check
 * @index: Number to check
 * Return: On success bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int buffer;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	buffer = 1 << index;
	if ((n & buffer) != 0)
		return (1);
	else
		return (0);
}
