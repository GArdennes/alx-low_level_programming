#include "main.h"

/**
 * malloc_checked - writes the address of ptr to stdout
 * @b: The character to print
 *
 * Return: On success ptr,
 * On error, exit with status 98
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
