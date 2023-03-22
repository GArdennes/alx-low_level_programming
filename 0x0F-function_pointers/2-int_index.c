#include "function_pointers.h"

/**
 * int_index - function that searches for integer values
 * @array: Array of integers
 * @size: Size of array
 * @cmp: Function to compare elements
 *
 * Return: On success 1,
 * On error -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !cmp)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
