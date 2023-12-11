#include <math.h>
#include "search_algos.h"

/**
 * jump_search - searches for a value using jump search algo.
 * @array: Input array
 * @size: The length of the array
 * @value: The value to look for
 * Return: On success index else -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, jump_step, current_j, next_j;

	if (array == NULL)
		return (-1);
	jump_step = (size_t) sqrt(size);
	current_j = 0;
	next_j = jump_step;

	while (array[next_j - 1] < value && current_j < size)
	{
		printf("Value checked array[%ld] = [%d]\n", current_j, array[current_j]);
		current_j = next_j;
		next_j += jump_step;
		if (next_j > size)
			next_j = size;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", current_j, next_j);
	for (i = current_j; i < next_j; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}

