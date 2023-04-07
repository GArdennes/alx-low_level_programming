#include "main.h"

/**
 * set_bit - function to set bit at index
 * @n: Number to check
 * @index: Number to check
 * Return: On success 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int buffer = 1 << index;

	if (n == NULL || index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n = *n | buffer;
	return (1);
}
