#include "main.h"

/**
 * create_array - assigns memory for character
 * @c: The character to check
 * @size: Number to check
 *
 * Return: On success result.
 * On error, NULL is returned, and errno is set appropriately.
 */

char *create_array(unsigned int size, char c)
{
	char *arr = malloc(size * sizeof(char));
	unsigned int i;

	if (arr == NULL || size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
