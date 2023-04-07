#include "main.h"

/**
 * get_endianness - finds endianness
 * Return: On success result
 */
int get_endianness(void)
{
	union
	{
		unsigned int i;
		char c[4];
	} endian_test;

	endian_test.i = 1;

	if (endian_test.c[0] == 1)
		return (1);
	else
		return (0);
}
