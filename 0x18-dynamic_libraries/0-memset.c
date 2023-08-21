#include "main.h"

/**
 * _memset - function that sets memory aside
 * @s: Character memory area
 * @b: Character to fill memory
 * @n: Character for bytes of memory
 *
 * Return: A pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
		*p++ = (char) b;
	return (s);
}
