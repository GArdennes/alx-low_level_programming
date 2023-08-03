#include "main.h"

/**
 * get_endianness - finds endianness
 * Return: On success result
 */

int get_endianness(void)
{
	unsigned int test = 1;
	char *endian = (char *)&test;

	if (*endian)
		return (1);
	return (0);
}
