#include "search_algos.h"

/**
 * interpolation_search - searches for a value using interplation search algo.
 * @array: input array
 * @size: number of elements in the array
 * @value: value to search for
 * Return: On success index else -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, pos;
	double probe;

	if (array == NULL)
		return (-1);
	low = 0;
	high = size - 1;

	while (array[low] != array[high])
	{
		probe = (double)(high - low) / (array[high] - array[low]);
		pos = low + (probe * (value - array[low]));
		if (pos >= size)
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			pos = size - 1;
		}
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] < value)
			low = pos + 1;
		else if (array[pos] > value)
			high = pos - 1;
		else
			return ((int)pos);
	}
	return (-1);
}
