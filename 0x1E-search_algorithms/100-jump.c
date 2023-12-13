#include <math.h>
#include "search_algos.h"

/**
 * min - returns minimum
 * @a: first value
 * @b: second value
 * Return: on success a else b
 */
size_t min(size_t a, size_t b)
{
	return (a <= b ? a : b);
}

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
	size_t diff, m_min;

	if (array == NULL)
		return (-1);
	jump_step = (size_t) sqrt(size);
	current_j = 0;
	next_j = jump_step;

	while (array[current_j] < value && current_j < size)
	{
		printf("Value checked array[%ld] = [%d]\n", current_j, array[current_j]);
		current_j = next_j;
		next_j += jump_step;
		if (next_j > size)
			next_j = size;
	}
	diff = current_j - jump_step;
	m_min = min(current_j, size - 1);
	printf("Value found between indexes [%ld] and [%ld]\n", diff, m_min);
	for (i = diff; i < min(current_j, size); i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}

