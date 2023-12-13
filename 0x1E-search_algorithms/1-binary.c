#include "search_algos.h"

/**
 * binary_search - searches for a value using binary search algo.
 * @array: input array
 * @size: number of elements
 * @value: value to search for
 * Return: On success index else -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, left = 0, right = size - 1, mid;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		mid = (left + right) / 2;
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
			printf("%d%s", array[i], i == right ? "\n" : ",");
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			right = mid - 1;
		else if (array[mid] < value)
			left = mid + 1;
	}
	return (-1);
}

