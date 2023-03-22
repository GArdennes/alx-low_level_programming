#include "function_pointers.h"

/**
 * array_iterator - function iterates through array
 * @array: Array to check
 * @size: Size of array
 * @action: Function element
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
