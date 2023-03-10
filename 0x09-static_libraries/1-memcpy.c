#include "main.h"

/**
 * _memcpy - function that sets memory aside
 * @dest: Character destination memory area
 * @src: Character source memory area
 * @n: Character for bytes of memory
 *
 * Return: A pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
