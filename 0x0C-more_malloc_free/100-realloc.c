#include "main.h"

/**
 * _realloc - function that mimics realloc
 * @ptr: The pointer to check
 * @old_size: The integer to check
 * @new_size: The integer to check
 *
 * Return: On success ptr,
 * On error, NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		else
			return (new_ptr);
	}
	if (new_size == old_size)
		return (ptr);
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	if (new_size > old_size)
		memcpy(new_ptr, ptr, old_size);
	else
		memcpy(new_ptr, ptr, new_size);
	free(ptr);
	return (new_ptr);
}
