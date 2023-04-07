#include "main.h"

/**
 * get_endianness - finds endianness
 * Return: On success result
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *endian_test = (char *)&i;

	if (*endian_test)
		return (1);
	else
		return (0);
}
