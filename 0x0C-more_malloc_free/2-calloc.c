#include "main.h"

/**
 * _calloc - function mimics calloc function
 * @nmemb: The number to check
 * @size: The number to check
 *
 * Return: On success ptr,
 * On error, NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	memset(ptr, 0, nmemb * size);

	return (ptr);
}
